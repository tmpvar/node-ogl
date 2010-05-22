<?php

echo "converting opengl headers into nodejs classes";

$cwd = dirname(__FILE__);
$base = $cwd . "/in/";

$files = array("gl.h", "glu.h", "glut.h", "glx.h");
foreach ($files as $currentFile)
{

  // First pass, #defines
  $path = $base . "GL/{$currentFile}";
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
  $preproc = str_replace('__attribute__((visibility("default")))', '', $preproc);
  echo $preproc;
  $old = "";
  while ($old!=$preproc)
  {
    $old = $preproc;
    $preproc = str_replace("  ", " ", $preproc);
  }
  preg_match_all("/ ?([\w]+ [\w\d]+\([^\)]+[\)]+).*/", $preproc, $methodMatches);

  $sigs = array();
  $defs = array();
  $exposed = array();
  foreach ($methodMatches[0] as $method)
  {
    preg_match("/ ?([\w]+) ([\w\d]+)\(([^\)]+)[\)]+.*/", $method, $methodParts);
    $hasArgs = false;


    $expose =  "NODE_SET_METHOD(target, \"{$methodParts[2]}\", {$name}_{$methodParts[2]});";
    array_push($exposed, $expose);

    $sig = "    ";
    $def = "    ";
   // if ($methodParts[1] == 'void') {

   //   $sig = "void $name::";
   //   $def = "void ";
   // }
   // else
   // {
      $sig = "static Handle<Value> {$name}_";
      $def = "static Handle<Value> {$name}_";
      $sig .= "{$methodParts[2]}(const Arguments& args) {\n";
      $def .= "{$methodParts[2]}(const Arguments& args);";
   // }

  /*  if (isset($methodParts) && strlen(str_replace(" ", "", $methodParts[3])) > 0) 
    {
      if ($methodParts[3] != 'void' &&  count(explode(" ", $methodParts[3]) > 1))
      {
        $sig .= "{$methodParts[2]}(const Arguments& args) {\n";
        $def .= "{$methodParts[2]}(const Arguments& args);";
        $hasArgs = true;
      }
      else
      {
        $def .= "{$methodParts[2]}();";
        $sig .= "{$methodParts[2]}() {\n";
      }
    }*/

    if ($hasArgs) {
      $comment  = "    /**\n";
      $comment .= "     *\n";

      $args = explode(",", $methodParts[3]);
      foreach ($args as $arg) {
        $comment .= "     * @param " . trim($arg) . "\n";
      
      }
      $comment .= "     */\n";
      $sig = $comment . $sig;
    }

    $sig .= "\n    }\n\n";
    array_push($sigs, $sig);
    array_push($defs, $def);
  }

  $source = str_replace("%_METHODS", implode("\n    ", $sigs), $source);
  $source = str_replace("%_JSMETHODS", implode("\n    ", $exposed), $source);
  //$header = str_replace("%_METHODS", implode("\n    ", $defs), $header);

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

  file_put_contents($cwd . "/../src/$name.cc", $source);
  file_put_contents($cwd . "/../src/$name.h", $header);
}
