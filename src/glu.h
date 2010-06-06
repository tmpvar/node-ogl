// Copyright 2010 Elijah Insua
#ifndef NODE_ADDON_SRC_GLU_H_
#define NODE_ADDON_SRC_GLU_H_

#include "common.h"

namespace node {
  using namespace v8;

  class glu : ObjectWrap {
    public:
    static void Initialize (Handle<Object> target);
    protected:

    glu ();
  };
}  // namespace node
#endif
