#include <node.h>

// Includes
%_INCLUDES

using namespace v8;
namespace node {

  void %_NAME::Initialize(v8::Handle<v8::Object> target) {
    HandleScope scope;

    // Constants
    %_CONSTANTS
   
  }
}  // namespace node
