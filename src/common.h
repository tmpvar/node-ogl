// Copyright 2010 Elijah Insua
#ifndef NODE_ADDON_SRC_COMMON_H_
#define NODE_ADDON_SRC_COMMON_H_

// Node Includes
#include <node.h>
#include <node_events.h>
#include <node_object_wrap.h>
#include <node_buffer.h>
#include <v8.h>

#include <node.h>
#include <sys/time.h>

// OpenGL Includes
#ifdef __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#endif // __APPLE__

#ifdef __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#else  // Other than __APPLE__
#include <GL/gl.h>
#include <GL/glu.h>
#endif

// Binding includes
#include "gl.h"
#include "glfw.h"
#include "glu.h"

namespace node {
  class glConstants {
    public:
      static void Initialize (v8::Handle<v8::Object> target) {
        glConstants::value_symbol = v8::Persistent<v8::String>::New(v8::String::NewSymbol("value"));
      }
      static v8::Persistent<v8::String> value_symbol;
  };
}
#endif
