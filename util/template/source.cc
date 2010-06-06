#include <node.h>
#include "common.h"

// Includes
%_INCLUDES

using namespace v8;
namespace node {

  %_METHODS

  // Constructor
  %_NAME::%_NAME() { }

  void %_NAME::Initialize(v8::Handle<v8::Object> target) {
    HandleScope scope;

    // Constants
%_CONSTANTS

    // Expose this classes methods to v8/javascript
    %_JSMETHODS

  }
}  // namespace node
