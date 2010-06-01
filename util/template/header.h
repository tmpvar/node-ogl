// Copyright 2010 Elijah Insua
#ifndef NODE_ADDON_SRC_%_UNAME_H_
#define NODE_ADDON_SRC_%_UNAME_H_

#include <node.h>
#include <node_events.h>
#include <node_object_wrap.h>
#include <node_buffer.h>
#include <v8.h>


namespace node {
  using namespace v8;

  class %_NAME : ObjectWrap {
    public:
    static void Initialize (v8::Handle<v8::Object> target);

    protected:

    %_NAME ();

    //%_METHODS
    
  };
}  // namespace node
#endif
