#include <node.h>
#include <sys/time.h>

#include "gl.h"
#include "glut.h"

using namespace v8;
using namespace node;


extern "C" void
init (Handle<Object> target) 
{
  HandleScope scope;
  gl::Initialize(target);
  glut::Initialize(target);
}
