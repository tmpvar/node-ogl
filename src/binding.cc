#include "common.h"

using namespace v8;
using namespace node;

extern "C" void
init (Handle<Object> target) 
{
  HandleScope scope;

  // Initialize
  glfw::Initialize(target);
  gl::Initialize(target);
  glu::Initialize(target);
}

