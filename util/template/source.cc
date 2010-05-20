#include <node.h>

// Includes
%_INCLUDES

using namespace v8;
namespace node {

  Persistent<FunctionTemplate> %_NAME::constructor_template;

  // Constructor
  %_NAME::%_NAME()
  {
  
  }


  void %_NAME::Initialize(v8::Handle<v8::Object> target) {
    HandleScope scope;
    Local<FunctionTemplate> t = FunctionTemplate::New(New);
    
    t->InstanceTemplate()->SetInternalFieldCount(1);
    t->SetClassName(String::NewSymbol("%_NAME"));
    t->Inherit(EventEmitter::constructor_template);

    // Constants
%_CONSTANTS

    target->Set(String::NewSymbol("%_NAME"), t->GetFunction());
  }


  Handle<Value> %_NAME::New(const Arguments &args) { 

    // Create a new instance
    %_NAME *instance = new %_NAME();
    
    // wrap avro instance in the v8 object
    instance->Wrap(args.This());

    return args.This();
  }  
}  // namespace node
