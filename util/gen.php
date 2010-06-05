<?php

echo "converting opengl headers into nodejs classes\n";
$cwd = dirname(__FILE__);
$base = $cwd . "/in/";

$files = array("gl.h", "glu.h");//, "glut.h", "glx.h");
foreach ($files as $currentFile)
{

  // First pass, #defines
  $path = $base . "GL/{$currentFile}";
  $file = basename($path);
  $name = str_replace(".h", "", $file);
  $uname = strtoupper($name);
  echo "Processing $uname...\n";

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
    $string .= '    NODE_DEFINE_CONSTANT(target, ' . $matches[1][$i] . ");\n";
    $string .= "    #endif\n";

    array_push($constants, $string);
  }

  $source = str_replace("%_CONSTANTS", implode("\n", $constants), $source);

  // SECOND PASS: methods
  exec("gcc -E $path > $cwd/tmp/gen.work");
  $preproc = str_replace(",\n",", ", file_get_contents($cwd . "/tmp/gen.work"));
  $preproc = str_replace('__attribute__((visibility("default")))', '', $preproc);

  $old = "";
  while ($old!=$preproc)
  {
    $old = $preproc;
    $preproc = str_replace("  ", " ", $preproc);
  }
  preg_match_all("/ ?([\w]+ [\w\d]+ ?\([^\)]+[\)]+).*/", $preproc, $methodMatches);

  $bodys = array();
  $defs = array();
  $exposed = array();
  foreach ($methodMatches[0] as $method)
  {
    $method = trim($method);
    $count = preg_match("/ ?([\w]+) ([\w\d]+) ?\(([^\)]+)[\)]+.*/", $method, $methodParts);
    if (!$count || strpos($method, "typedef") !== FALSE) {
      continue;
    }
    $hasArgs = false;

    $expose = "Local<FunctionTemplate> _{$name}_{$methodParts[2]} = FunctionTemplate::New({$name}_{$methodParts[2]});\n";
    $expose .= "    target->Set(String::New(\"{$methodParts[2]}\"), _{$name}_{$methodParts[2]}->GetFunction());\n";
        
    array_push($exposed, $expose);

    $body = "  Handle<Value> {$name}_";
    $def = "static Handle<Value> {$name}_";
    $body .= "{$methodParts[2]}(const Arguments& args) {\n";
    $def .= "{$methodParts[2]}(const Arguments& args);";

    $methodParts[3] = trim($methodParts[3]);

    if (isset($methodParts) && strlen(str_replace(" ", "", $methodParts[3])) > 0) 
    {
      if ($methodParts[3] != 'void' &&  count(explode(" ", $methodParts[3]) > 1))
      {
        $hasArgs = true;
      }
    }

    $args = explode(",", $methodParts[3]);
    $comment  = "/**\n";

    if ($hasArgs) {
      $comment .= "   * {$methodParts[2]}\n";
      $comment .= "   *\n";
      
      foreach ($args as $arg) {
        $comment .= "   * @param " . trim($arg) . "\n";
      }
    }

    $comment .= "   * @return " . trim($methodParts[1]) . "\n";
    $comment .= "   */\n";
    $body = $comment . $body;

    $body .= "    HandleScope scope;\n";


    if ($methodParts[1] == "void" && count($args) == 0) {
      $body .= "    {$methodParts[2]}();";
    } 
    else if (count($args) > 0 && 
             strpos($methodParts[3], "*") === false &&
             strpos($methodParts[3], "[") === false)
    {

      $params = array();
      // generate params, and pass them

      foreach ($args as $idx=>$arg)
      {
        $arg = trim($arg);
        $type = "void";
        $argument = "";
        if (strpos($arg, " ") !== false) {
          list($type, $argument) = explode(" ", $arg);
        }
        
        // convert types to v8.
        if ($type == "GLbyte" || $type == "GLshort" ||
                 $type == "GLint"  || $type == "GLubyte" ||
                 $type == "GLsizei" || $type == "GLenum")
        {
          array_push($params, "($type) args[$idx]->Int32Value()");
        }
        else if ($argument)
        {
          array_push($params, "args[$idx]->NumberValue()");
        }
      }
      $body .= "    {$methodParts[2]}(" . implode(", ", $params) . ");";
    }
    else if ($methodParts[1] != "void" && 
             strpos($methodParts[3], "*") === false &&
             strpos($methodParts[3], "[") === false)
    {

      $body .= "\n    return scope.Close(";
      $inner = "";
      foreach ($args as $idx=>$arg)
      {
        $parts = explode(" ", $arg);
        $type = "";
        $argument = "";

        
        if ($type == "GLbyte" || $type == "GLshort" ||
            $type == "GLint" || $type == "GLubyte" ||
            $type == "GLsizei")
        {
          $inner .= "Integer::New({$methodParts[2]});";
        }
        else if ($type == "GLboolean") {
          $inner .= "Boolean::New({$methodParts[2]});";
        }
        else 
        {
          $inner .= "Number::New({$argument})";
        }
      }
      if (!trim($inner)) {
        $inner .= "Number::New(123)";
      }
      
      $body .= $inner . ");";
    }
    else
    {
      $params = array();
      $inner  = "";
      $after  = "";
      $implemented = true;

      foreach ($args as $idx=>$arg)
      {
        $implemented = true;
        $pointer = (strpos($arg, "*") !== false);

        $arg = str_replace("*", "", $arg);

        $type = "";
        $argument = "";
        $ex = explode(" ", str_replace("  ", " ", trim($arg)));

        // check for consts
        $prefix = (count($ex) > 2) ? "  " . array_shift($ex) : " ";
        $type = trim($ex[0]);
        $argument = trim($ex[1]);

        $variable = "  $prefix $type _$argument = ($type)";

        if ($type == "GLbyte"  ||
            $type == "GLshort" ||
            $type == "GLint"   ||
            $type == "GLubyte" ||
            $type == "GLsizei" ||
            $type == "GLenum"  || 
            $type == "GLboolean")
        {

          
          $inner .= $variable . "args[$idx]->Int32Value();\n";
          if ($pointer) {
            array_push($params, "&_$argument");
            $after .= "\n    args[$idx] = Number::New(_$argument);\n";  
          } else {
            array_push($params, "_$argument");
          }
          
        }
        else if ($type == "GLuint")
        {
          $inner .= $variable . "args[$idx]->Uint32Value();\n";
          if ($pointer) {
            array_push($params, "&_$argument");
            $after .= "\n    args[$idx] = Number::New(_$argument);\n";  
          } else {
            array_push($params, "_$argument");
          }
        }        
        else if ($type == "GLvoid")
        {
          $inner .= "    // must be a pointer to a buffer.\n";
          $inner .= "    if (!Buffer::HasInstance(args[{$idx}])) {\n";
          $inner .= "        return ThrowException(Exception::Error(\n";
          $inner .= "                              String::New(\"{$idx}nth argument needs to be a buffer\")));\n";
          $inner .= "    }\n";
          $inner .= "    Buffer * {$argument}_buffer = ObjectWrap::Unwrap<Buffer>(args[{$idx}]->ToObject());\n";
          $inner .= "  $prefix $type *_$argument = ($type *){$argument}_buffer->data();\n";
          if ($pointer) {
            array_push($params, "&_$argument");
          } else {
            array_push($params, "_$argument");
          }
        }
        else
        {
          $implemented = false;
          $body .= "\n    return ThrowException(Exception::Error(\n"
                .  "    String::New(\"{$methodParts[2]} is not implemented!\")));\n";
          break;
        }
      }

      if ($implemented) {
        $body .= $inner . "    " . $methodParts[2] . 
                 "(" . implode(", ", $params) . ");" . $after;
      }
    }

    $body .= "\n  }\n\n";
    array_push($bodys, $body);
    array_push($defs, $def);
  }

  $source = str_replace("%_METHODS", implode("\n  ", $bodys), $source);
  $source = str_replace("%_JSMETHODS", implode("\n    ", $exposed), $source);
  //$header = str_replace("%_METHODS", implode("\n    ", $defs), $header);

  // THIRD PASS: includes
  //preg_match_all("/#include[ ]*.(.+)./", $contents, $includeMatches);

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

  echo "render templates: $name\n";
  $source = str_replace("%_INCLUDES", implode("\n", $includes), $source);
  $header = str_replace("%_UNAME", $uname, $header);

  echo "saving templates: $name\n";
  file_put_contents($cwd . "/../src/$name.cc", $source);
  file_put_contents($cwd . "/../src/$name.h", $header);
  echo "-------------------------\n\n";
}
