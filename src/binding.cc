#include "common.h"

using namespace v8;
using namespace node;

extern "C" void
init (Handle<Object> target) 
{
  HandleScope scope;

  // Initialize
  gl::Initialize(target);
  glu::Initialize(target);
}

