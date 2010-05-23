// Copyright 2010 Elijah Insua
#ifndef NODE_ADDON_SRC_GLFW_H_
#define NODE_ADDON_SRC_GLFW_H_

#include <node.h>
#include <node_events.h>
#include <node_object_wrap.h>
#include <v8.h>

#include <GL/glfw.h>

namespace node {
  using namespace v8;

  class glfw : ObjectWrap {
    public:
    static void Initialize (v8::Handle<v8::Object> target);

    protected:
    glfw();
    ~glfw();
    static Handle<Value> OpenWindow(const Arguments& args);
    static Handle<Value> SwapBuffers(const Arguments& args);
    Handle<Value> New(const Arguments &args);
  };
}  // namespace node
#endif

