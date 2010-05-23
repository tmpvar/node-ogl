#include <node.h>

// Includes
%_INCLUDES

using namespace v8;
namespace node {

  %_METHODS

  // Constructor
  %_NAME::%_NAME()
  {
  
  }

  void %_NAME::Initialize(v8::Handle<v8::Object> target) {
    HandleScope scope;
   /* Local<FunctionTemplate> t = FunctionTemplate::New(New);
    
    t->InstanceTemplate()->SetInternalFieldCount(1);
    t->SetClassName(String::NewSymbol("%_NAME"));
    t->Inherit(EventEmitter::constructor_template);
*/
    // Constants
%_CONSTANTS

   // target->Set(String::NewSymbol("%_NAME"), t->GetFunction());

    // Expose this classes methods to v8/javascript
    %_JSMETHODS

  }

}  // namespace node
