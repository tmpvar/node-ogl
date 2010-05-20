// Copyright 2010 Elijah Insua
#ifndef SRC_%_UNAME_H_
#define SRC_%_UNAME_H_

#include <node.h>
#include <node_events.h>
#include <node_object_wrap.h>
#include <v8.h>


namespace node {
  using namespace v8;

  class %_NAME : ObjectWrap {
    public:
    static void Initialize (v8::Handle<v8::Object> target);

    protected:
    static v8::Persistent<v8::FunctionTemplate> constructor_template;
    static Handle<Value> New(const Arguments &args);

    %_NAME ();

    
  };
}  // namespace node
#endif
