#include <node.h>
#include "glfw.h"

using namespace v8;
namespace node {

  void glfw::Initialize(Handle<Object> target) {
    HandleScope scope;
    Local<FunctionTemplate> _OpenWindow = FunctionTemplate::New(glfw::OpenWindow);
    target->Set(String::New("OpenWindow"), _OpenWindow->GetFunction());
  }

  // Constructor
  glfw::glfw() : ObjectWrap()
  {
    glfwInit();
  }

  // destructor
  glfw::~glfw() 
  {
    glfwTerminate();
  }

  /**
   * @param int width
   * @param int height
   * @param int redbits
   * @param int greenbits
   * @param int bluebits
   * @param int alphabits
   * @param int depthbits
   * @param int stencilbits
   * @param int mode
   * @return int
   */
  Handle<Value> glfw::OpenWindow(const Arguments& args)
  {
    HandleScope scope;
    glfwInit();
    bool res = glfwOpenWindow(args[0]->Int32Value(),
                              args[1]->Int32Value(),
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              GLFW_WINDOW);

    return scope.Close(Boolean::New(res));
  }

  Handle<Value> glfw::New(const Arguments &args)
  {
    // create new avro instance (process incoming schema)
    glfw *instance = new glfw();
    // wrap instance in the v8 object
    instance->Wrap(args.This());
    return args.This();
  }  
}  // namespace node
