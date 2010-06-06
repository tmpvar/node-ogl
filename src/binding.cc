#include <node.h>
#include <sys/time.h>

#include "gl.h"
#include "glfw.h"
#include "glu.h"

#include "common.h"

using namespace v8;
using namespace node;

extern "C" void
init (Handle<Object> target) 
{
  HandleScope scope;

  // Setup symbols
  //value_symbol = Persistent<String>::New(String::NewSymbol("value"));

  // Initialize
  glfw::Initialize(target);
  gl::Initialize(target);
  glu::Initialize(target);
}

