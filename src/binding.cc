#include <node.h>
#include <sys/time.h>

#include "gl.h"
#include "glfw.h"
#include "glu.h"

using namespace v8;
using namespace node;

extern "C" void
init (Handle<Object> target) 
{
  HandleScope scope;
  glfw::Initialize(target);
  gl::Initialize(target);
  glu::Initialize(target);
}

