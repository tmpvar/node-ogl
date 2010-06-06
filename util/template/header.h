// Copyright 2010 Elijah Insua
#ifndef NODE_ADDON_SRC_%_UNAME_H_
#define NODE_ADDON_SRC_%_UNAME_H_

#include "common.h"

namespace node {
  using namespace v8;

  class %_NAME : ObjectWrap {
    public:
    static void Initialize (Handle<Object> target);
    protected:

    %_NAME ();
  };
}  // namespace node
#endif
