// Copyright 2010 Elijah Insua
#ifndef SRC_GL_H_
#define SRC_GL_H_

#include <node.h>
#include <node_events.h>
#include <node_object_wrap.h>
#include <v8.h>


namespace node {
  using namespace v8;

  class gl : ObjectWrap {
    public:
    static void Initialize (v8::Handle<v8::Object> target);

    protected:
    static v8::Persistent<v8::FunctionTemplate> constructor_template;
    static Handle<Value> New(const Arguments &args);

    gl ();

    
  };
}  // namespace node
#endif
