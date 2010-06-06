// Copyright 2010 Elijah Insua
#ifndef NODE_ADDON_SRC_GL_H_
#define NODE_ADDON_SRC_GL_H_

#include "common.h"

namespace node {
  using namespace v8;

  class gl : ObjectWrap {
    public:
    static void Initialize (Handle<Object> target);
    protected:

    gl ();
  };
}  // namespace node
#endif
