<?php

echo "converting opengl headers into nodejs classes";

$cwd = dirname(__FILE__);
$base = $cwd . "/in/";

// First pass, #defines
$path = $base . "GL/gl.h";
$file = basename($path);
$name = str_replace(".h", "", $file);
$uname = strtoupper($name);


$contents = file_get_contents($path);
preg_match_all("/#define[ ]*(GL_[^ \t]+)[\t ]*(.*)/", $contents, $matches);

$source = file_get_contents($cwd . "/template/source.cc");
$header = file_get_contents($cwd . "/template/header.h");

// Initial source templating
$source = str_replace("%_NAME", $name, $source);
$header = str_replace("%_NAME", $name, $header);




$total = count($matches[1]);

$constants = array();
for ($i = 0; $i<$total; $i++)
{
  $string =  "    #ifdef " . $matches[1][$i] . "\n";
  $string .= '    NODE_DEFINE_CONSTANT(t, ' . $matches[1][$i] . ");\n";
  $string .= "    #endif\n";

  array_push($constants, $string);
}

$source = str_replace("%_CONSTANTS", implode("\n", $constants), $source);

// SECOND PASS: methods
exec("gcc -E $path > $cwd/tmp/gen.work");
$preproc = str_replace(",\n",", ", file_get_contents($cwd . "/tmp/gen.work"));

$old = "";
while ($old!=$preproc)
{
  $old = $preproc;
  $preproc = str_replace("  ", " ", $preproc);
  
}
preg_match_all("/ ?([\w]+ [\w\d]+\([^\)]+\))/", $preproc, $methodMatches);

print_r($methodMatches);


// THIRD PASS: includes
preg_match_all("/#include[ ]*.(.+)./", $contents, $includeMatches);

$includes = array("#include \"$name.h\"",
                  "#include <" . str_replace($base,"",$path) . ">");
if (isset($includeMatches[1]))
{
  foreach ($includeMatches[1] as $index=>$include)
  {
    if (stripos($preproc, $include) != false) {
      array_push($includes, $includeMatches[0][$index]);
    }
  }
}

$source = str_replace("%_INCLUDES", implode("\n", $includes), $source);
$header = str_replace("%_UNAME", $uname, $header);


print_r($includes);

file_put_contents($cwd . "/../src/$name.cc", $source);
file_put_contents($cwd . "/../src/$name.h", $header);
