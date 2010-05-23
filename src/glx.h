// Copyright 2010 Elijah Insua
#ifndef SRC_GLX_H_
#define SRC_GLX_H_

#include <node.h>
#include <node_events.h>
#include <node_object_wrap.h>
#include <v8.h>


namespace node {
  using namespace v8;

  class glx : ObjectWrap {
    public:
    static void Initialize (v8::Handle<v8::Object> target);

    protected:

    glx ();

    //%_METHODS
    
  };
}  // namespace node
#endif
