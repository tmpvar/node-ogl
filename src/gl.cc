#include <node.h>
#include "common.h"

// Includes
#include "gl.h"
#include </System/Library/Frameworks/OpenGL.framework/Headers/gl.h>

using namespace v8;
namespace node {

  /**
   * glActiveTextureARB
   *
   * @param GLenum
   * @return void
   */
  Handle<Value> gl_glActiveTextureARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    glActiveTextureARB(_arg0);

    return Undefined();
  }


  /**
   * glClientActiveTextureARB
   *
   * @param GLenum
   * @return void
   */
  Handle<Value> gl_glClientActiveTextureARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    glClientActiveTextureARB(_arg0);

    return Undefined();
  }


  /**
   * glMultiTexCoord1dARB
   *
   * @param GLenum
   * @param GLdouble
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1dARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLdouble _arg1 = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord1dARB(_arg0, _arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord1dvARB
   *
   * @param GLenum
   * @param const GLdouble *
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1dvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLdouble _arg1 = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord1dvARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord1fARB
   *
   * @param GLenum
   * @param GLfloat
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1fARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLfloat _arg1 = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord1fARB(_arg0, _arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord1fvARB
   *
   * @param GLenum
   * @param const GLfloat *
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1fvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLfloat _arg1 = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord1fvARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord1iARB
   *
   * @param GLenum
   * @param GLint
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1iARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLint _arg1 = (GLint)args[1]->Int32Value();
    glMultiTexCoord1iARB(_arg0, _arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord1ivARB
   *
   * @param GLenum
   * @param const GLint *
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1ivARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLint _arg1 = (GLint)args[1]->Int32Value();
    glMultiTexCoord1ivARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord1sARB
   *
   * @param GLenum
   * @param GLshort
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1sARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLshort _arg1 = (GLshort)args[1]->Int32Value();
    glMultiTexCoord1sARB(_arg0, _arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord1svARB
   *
   * @param GLenum
   * @param const GLshort *
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1svARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLshort _arg1 = (GLshort)args[1]->Int32Value();
    glMultiTexCoord1svARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord2dARB
   *
   * @param GLenum
   * @param GLdouble
   * @param GLdouble
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2dARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLdouble _arg1 = (GLdouble)args[1]->NumberValue();
    GLdouble _arg2 = (GLdouble)args[2]->NumberValue();
    glMultiTexCoord2dARB(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glMultiTexCoord2dvARB
   *
   * @param GLenum
   * @param const GLdouble *
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2dvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLdouble _arg1 = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord2dvARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord2fARB
   *
   * @param GLenum
   * @param GLfloat
   * @param GLfloat
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2fARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLfloat _arg1 = (GLfloat)args[1]->NumberValue();
    GLfloat _arg2 = (GLfloat)args[2]->NumberValue();
    glMultiTexCoord2fARB(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glMultiTexCoord2fvARB
   *
   * @param GLenum
   * @param const GLfloat *
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2fvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLfloat _arg1 = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord2fvARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord2iARB
   *
   * @param GLenum
   * @param GLint
   * @param GLint
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2iARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLint _arg1 = (GLint)args[1]->Int32Value();
    GLint _arg2 = (GLint)args[2]->Int32Value();
    glMultiTexCoord2iARB(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glMultiTexCoord2ivARB
   *
   * @param GLenum
   * @param const GLint *
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2ivARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLint _arg1 = (GLint)args[1]->Int32Value();
    glMultiTexCoord2ivARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord2sARB
   *
   * @param GLenum
   * @param GLshort
   * @param GLshort
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2sARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLshort _arg1 = (GLshort)args[1]->Int32Value();
    GLshort _arg2 = (GLshort)args[2]->Int32Value();
    glMultiTexCoord2sARB(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glMultiTexCoord2svARB
   *
   * @param GLenum
   * @param const GLshort *
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2svARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLshort _arg1 = (GLshort)args[1]->Int32Value();
    glMultiTexCoord2svARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord3dARB
   *
   * @param GLenum
   * @param GLdouble
   * @param GLdouble
   * @param GLdouble
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3dARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLdouble _arg1 = (GLdouble)args[1]->NumberValue();
    GLdouble _arg2 = (GLdouble)args[2]->NumberValue();
    GLdouble _arg3 = (GLdouble)args[3]->NumberValue();
    glMultiTexCoord3dARB(_arg0, _arg1, _arg2, _arg3);

    return Undefined();
  }


  /**
   * glMultiTexCoord3dvARB
   *
   * @param GLenum
   * @param const GLdouble *
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3dvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLdouble _arg1 = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord3dvARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord3fARB
   *
   * @param GLenum
   * @param GLfloat
   * @param GLfloat
   * @param GLfloat
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3fARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLfloat _arg1 = (GLfloat)args[1]->NumberValue();
    GLfloat _arg2 = (GLfloat)args[2]->NumberValue();
    GLfloat _arg3 = (GLfloat)args[3]->NumberValue();
    glMultiTexCoord3fARB(_arg0, _arg1, _arg2, _arg3);

    return Undefined();
  }


  /**
   * glMultiTexCoord3fvARB
   *
   * @param GLenum
   * @param const GLfloat *
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3fvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLfloat _arg1 = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord3fvARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord3iARB
   *
   * @param GLenum
   * @param GLint
   * @param GLint
   * @param GLint
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3iARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLint _arg1 = (GLint)args[1]->Int32Value();
    GLint _arg2 = (GLint)args[2]->Int32Value();
    GLint _arg3 = (GLint)args[3]->Int32Value();
    glMultiTexCoord3iARB(_arg0, _arg1, _arg2, _arg3);

    return Undefined();
  }


  /**
   * glMultiTexCoord3ivARB
   *
   * @param GLenum
   * @param const GLint *
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3ivARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLint _arg1 = (GLint)args[1]->Int32Value();
    glMultiTexCoord3ivARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord3sARB
   *
   * @param GLenum
   * @param GLshort
   * @param GLshort
   * @param GLshort
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3sARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLshort _arg1 = (GLshort)args[1]->Int32Value();
    GLshort _arg2 = (GLshort)args[2]->Int32Value();
    GLshort _arg3 = (GLshort)args[3]->Int32Value();
    glMultiTexCoord3sARB(_arg0, _arg1, _arg2, _arg3);

    return Undefined();
  }


  /**
   * glMultiTexCoord3svARB
   *
   * @param GLenum
   * @param const GLshort *
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3svARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLshort _arg1 = (GLshort)args[1]->Int32Value();
    glMultiTexCoord3svARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord4dARB
   *
   * @param GLenum
   * @param GLdouble
   * @param GLdouble
   * @param GLdouble
   * @param GLdouble
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4dARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLdouble _arg1 = (GLdouble)args[1]->NumberValue();
    GLdouble _arg2 = (GLdouble)args[2]->NumberValue();
    GLdouble _arg3 = (GLdouble)args[3]->NumberValue();
    GLdouble _arg4 = (GLdouble)args[4]->NumberValue();
    glMultiTexCoord4dARB(_arg0, _arg1, _arg2, _arg3, _arg4);

    return Undefined();
  }


  /**
   * glMultiTexCoord4dvARB
   *
   * @param GLenum
   * @param const GLdouble *
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4dvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLdouble _arg1 = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord4dvARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord4fARB
   *
   * @param GLenum
   * @param GLfloat
   * @param GLfloat
   * @param GLfloat
   * @param GLfloat
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4fARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLfloat _arg1 = (GLfloat)args[1]->NumberValue();
    GLfloat _arg2 = (GLfloat)args[2]->NumberValue();
    GLfloat _arg3 = (GLfloat)args[3]->NumberValue();
    GLfloat _arg4 = (GLfloat)args[4]->NumberValue();
    glMultiTexCoord4fARB(_arg0, _arg1, _arg2, _arg3, _arg4);

    return Undefined();
  }


  /**
   * glMultiTexCoord4fvARB
   *
   * @param GLenum
   * @param const GLfloat *
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4fvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLfloat _arg1 = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord4fvARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord4iARB
   *
   * @param GLenum
   * @param GLint
   * @param GLint
   * @param GLint
   * @param GLint
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4iARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLint _arg1 = (GLint)args[1]->Int32Value();
    GLint _arg2 = (GLint)args[2]->Int32Value();
    GLint _arg3 = (GLint)args[3]->Int32Value();
    GLint _arg4 = (GLint)args[4]->Int32Value();
    glMultiTexCoord4iARB(_arg0, _arg1, _arg2, _arg3, _arg4);

    return Undefined();
  }


  /**
   * glMultiTexCoord4ivARB
   *
   * @param GLenum
   * @param const GLint *
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4ivARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLint _arg1 = (GLint)args[1]->Int32Value();
    glMultiTexCoord4ivARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glMultiTexCoord4sARB
   *
   * @param GLenum
   * @param GLshort
   * @param GLshort
   * @param GLshort
   * @param GLshort
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4sARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLshort _arg1 = (GLshort)args[1]->Int32Value();
    GLshort _arg2 = (GLshort)args[2]->Int32Value();
    GLshort _arg3 = (GLshort)args[3]->Int32Value();
    GLshort _arg4 = (GLshort)args[4]->Int32Value();
    glMultiTexCoord4sARB(_arg0, _arg1, _arg2, _arg3, _arg4);

    return Undefined();
  }


  /**
   * glMultiTexCoord4svARB
   *
   * @param GLenum
   * @param const GLshort *
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4svARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLshort _arg1 = (GLshort)args[1]->Int32Value();
    glMultiTexCoord4svARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glLoadTransposeMatrixfARB
   *
   * @param const GLfloat *
   * @return void
   */
  Handle<Value> gl_glLoadTransposeMatrixfARB(const Arguments& args) {
    HandleScope scope;
    const GLfloat _arg0 = (GLfloat)args[0]->NumberValue();
    glLoadTransposeMatrixfARB(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glLoadTransposeMatrixdARB
   *
   * @param const GLdouble *
   * @return void
   */
  Handle<Value> gl_glLoadTransposeMatrixdARB(const Arguments& args) {
    HandleScope scope;
    const GLdouble _arg0 = (GLdouble)args[0]->NumberValue();
    glLoadTransposeMatrixdARB(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glMultTransposeMatrixfARB
   *
   * @param const GLfloat *
   * @return void
   */
  Handle<Value> gl_glMultTransposeMatrixfARB(const Arguments& args) {
    HandleScope scope;
    const GLfloat _arg0 = (GLfloat)args[0]->NumberValue();
    glMultTransposeMatrixfARB(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glMultTransposeMatrixdARB
   *
   * @param const GLdouble *
   * @return void
   */
  Handle<Value> gl_glMultTransposeMatrixdARB(const Arguments& args) {
    HandleScope scope;
    const GLdouble _arg0 = (GLdouble)args[0]->NumberValue();
    glMultTransposeMatrixdARB(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glSampleCoverageARB
   *
   * @param GLclampf
   * @param GLboolean
   * @return void
   */
  Handle<Value> gl_glSampleCoverageARB(const Arguments& args) {
    HandleScope scope;
    GLclampf _arg0 = (GLclampf)args[0]->NumberValue();
    GLboolean _arg1 = (GLboolean)args[1]->Int32Value();
    glSampleCoverageARB(_arg0, _arg1);

    return Undefined();
  }


  /**
   * glSamplePassARB
   *
   * @param GLenum
   * @return void
   */
  Handle<Value> gl_glSamplePassARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    glSamplePassARB(_arg0);

    return Undefined();
  }


  /**
   * glCompressedTexImage3DARB
   *
   * @param GLenum
   * @param GLint
   * @param GLenum
   * @param GLsizei
   * @param GLsizei
   * @param GLsizei
   * @param GLint
   * @param GLsizei
   * @param const GLvoid *
   * @return void
   */
  Handle<Value> gl_glCompressedTexImage3DARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLint _arg1 = (GLint)args[1]->Int32Value();
    GLenum _arg2 = (GLenum)args[2]->Int32Value();
    GLsizei _arg3 = (GLsizei)args[3]->Int32Value();
    GLsizei _arg4 = (GLsizei)args[4]->Int32Value();
    GLsizei _arg5 = (GLsizei)args[5]->Int32Value();
    GLint _arg6 = (GLint)args[6]->Int32Value();
    GLsizei _arg7 = (GLsizei)args[7]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[8])) {
        return ThrowException(Exception::Error(
                              String::New("8nth argument needs to be a buffer")));
    }
    Buffer * arg8_buffer = ObjectWrap::Unwrap<Buffer>(args[8]->ToObject());
    const GLvoid *_arg8 = (GLvoid *)arg8_buffer->data();
    glCompressedTexImage3DARB(_arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);

    return Undefined();
  }


  /**
   * glCompressedTexImage2DARB
   *
   * @param GLenum
   * @param GLint
   * @param GLenum
   * @param GLsizei
   * @param GLsizei
   * @param GLint
   * @param GLsizei
   * @param const GLvoid *
   * @return void
   */
  Handle<Value> gl_glCompressedTexImage2DARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLint _arg1 = (GLint)args[1]->Int32Value();
    GLenum _arg2 = (GLenum)args[2]->Int32Value();
    GLsizei _arg3 = (GLsizei)args[3]->Int32Value();
    GLsizei _arg4 = (GLsizei)args[4]->Int32Value();
    GLint _arg5 = (GLint)args[5]->Int32Value();
    GLsizei _arg6 = (GLsizei)args[6]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[7])) {
        return ThrowException(Exception::Error(
                              String::New("7nth argument needs to be a buffer")));
    }
    Buffer * arg7_buffer = ObjectWrap::Unwrap<Buffer>(args[7]->ToObject());
    const GLvoid *_arg7 = (GLvoid *)arg7_buffer->data();
    glCompressedTexImage2DARB(_arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);

    return Undefined();
  }


  /**
   * glCompressedTexImage1DARB
   *
   * @param GLenum
   * @param GLint
   * @param GLenum
   * @param GLsizei
   * @param GLint
   * @param GLsizei
   * @param const GLvoid *
   * @return void
   */
  Handle<Value> gl_glCompressedTexImage1DARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLint _arg1 = (GLint)args[1]->Int32Value();
    GLenum _arg2 = (GLenum)args[2]->Int32Value();
    GLsizei _arg3 = (GLsizei)args[3]->Int32Value();
    GLint _arg4 = (GLint)args[4]->Int32Value();
    GLsizei _arg5 = (GLsizei)args[5]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[6])) {
        return ThrowException(Exception::Error(
                              String::New("6nth argument needs to be a buffer")));
    }
    Buffer * arg6_buffer = ObjectWrap::Unwrap<Buffer>(args[6]->ToObject());
    const GLvoid *_arg6 = (GLvoid *)arg6_buffer->data();
    glCompressedTexImage1DARB(_arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);

    return Undefined();
  }


  /**
   * glCompressedTexSubImage3DARB
   *
   * @param GLenum
   * @param GLint
   * @param GLint
   * @param GLint
   * @param GLint
   * @param GLsizei
   * @param GLsizei
   * @param GLsizei
   * @param GLenum
   * @param GLsizei
   * @param const GLvoid *
   * @return void
   */
  Handle<Value> gl_glCompressedTexSubImage3DARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLint _arg1 = (GLint)args[1]->Int32Value();
    GLint _arg2 = (GLint)args[2]->Int32Value();
    GLint _arg3 = (GLint)args[3]->Int32Value();
    GLint _arg4 = (GLint)args[4]->Int32Value();
    GLsizei _arg5 = (GLsizei)args[5]->Int32Value();
    GLsizei _arg6 = (GLsizei)args[6]->Int32Value();
    GLsizei _arg7 = (GLsizei)args[7]->Int32Value();
    GLenum _arg8 = (GLenum)args[8]->Int32Value();
    GLsizei _arg9 = (GLsizei)args[9]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[10])) {
        return ThrowException(Exception::Error(
                              String::New("10nth argument needs to be a buffer")));
    }
    Buffer * arg10_buffer = ObjectWrap::Unwrap<Buffer>(args[10]->ToObject());
    const GLvoid *_arg10 = (GLvoid *)arg10_buffer->data();
    glCompressedTexSubImage3DARB(_arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10);

    return Undefined();
  }


  /**
   * glCompressedTexSubImage2DARB
   *
   * @param GLenum
   * @param GLint
   * @param GLint
   * @param GLint
   * @param GLsizei
   * @param GLsizei
   * @param GLenum
   * @param GLsizei
   * @param const GLvoid *
   * @return void
   */
  Handle<Value> gl_glCompressedTexSubImage2DARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLint _arg1 = (GLint)args[1]->Int32Value();
    GLint _arg2 = (GLint)args[2]->Int32Value();
    GLint _arg3 = (GLint)args[3]->Int32Value();
    GLsizei _arg4 = (GLsizei)args[4]->Int32Value();
    GLsizei _arg5 = (GLsizei)args[5]->Int32Value();
    GLenum _arg6 = (GLenum)args[6]->Int32Value();
    GLsizei _arg7 = (GLsizei)args[7]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[8])) {
        return ThrowException(Exception::Error(
                              String::New("8nth argument needs to be a buffer")));
    }
    Buffer * arg8_buffer = ObjectWrap::Unwrap<Buffer>(args[8]->ToObject());
    const GLvoid *_arg8 = (GLvoid *)arg8_buffer->data();
    glCompressedTexSubImage2DARB(_arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);

    return Undefined();
  }


  /**
   * glCompressedTexSubImage1DARB
   *
   * @param GLenum
   * @param GLint
   * @param GLint
   * @param GLsizei
   * @param GLenum
   * @param GLsizei
   * @param const GLvoid *
   * @return void
   */
  Handle<Value> gl_glCompressedTexSubImage1DARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLint _arg1 = (GLint)args[1]->Int32Value();
    GLint _arg2 = (GLint)args[2]->Int32Value();
    GLsizei _arg3 = (GLsizei)args[3]->Int32Value();
    GLenum _arg4 = (GLenum)args[4]->Int32Value();
    GLsizei _arg5 = (GLsizei)args[5]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[6])) {
        return ThrowException(Exception::Error(
                              String::New("6nth argument needs to be a buffer")));
    }
    Buffer * arg6_buffer = ObjectWrap::Unwrap<Buffer>(args[6]->ToObject());
    const GLvoid *_arg6 = (GLvoid *)arg6_buffer->data();
    glCompressedTexSubImage1DARB(_arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);

    return Undefined();
  }


  /**
   * glGetCompressedTexImageARB
   *
   * @param GLenum
   * @param GLint
   * @param GLvoid *
   * @return void
   */
  Handle<Value> gl_glGetCompressedTexImageARB(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLint _arg1 = (GLint)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * arg2_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    GLvoid *_arg2 = (GLvoid *)arg2_buffer->data();
    glGetCompressedTexImageARB(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glWeightbvARB
   *
   * @param GLint
   * @param const GLbyte *
   * @return void
   */
  Handle<Value> gl_glWeightbvARB(const Arguments& args) {
    HandleScope scope;
    GLint _arg0 = (GLint)args[0]->Int32Value();
    const GLbyte _arg1 = (GLbyte)args[1]->Int32Value();
    glWeightbvARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glWeightsvARB
   *
   * @param GLint
   * @param const GLshort *
   * @return void
   */
  Handle<Value> gl_glWeightsvARB(const Arguments& args) {
    HandleScope scope;
    GLint _arg0 = (GLint)args[0]->Int32Value();
    const GLshort _arg1 = (GLshort)args[1]->Int32Value();
    glWeightsvARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glWeightivARB
   *
   * @param GLint
   * @param const GLint *
   * @return void
   */
  Handle<Value> gl_glWeightivARB(const Arguments& args) {
    HandleScope scope;
    GLint _arg0 = (GLint)args[0]->Int32Value();
    const GLint _arg1 = (GLint)args[1]->Int32Value();
    glWeightivARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glWeightfvARB
   *
   * @param GLint
   * @param const GLfloat *
   * @return void
   */
  Handle<Value> gl_glWeightfvARB(const Arguments& args) {
    HandleScope scope;
    GLint _arg0 = (GLint)args[0]->Int32Value();
    const GLfloat _arg1 = (GLfloat)args[1]->NumberValue();
    glWeightfvARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glWeightdvARB
   *
   * @param GLint
   * @param const GLdouble *
   * @return void
   */
  Handle<Value> gl_glWeightdvARB(const Arguments& args) {
    HandleScope scope;
    GLint _arg0 = (GLint)args[0]->Int32Value();
    const GLdouble _arg1 = (GLdouble)args[1]->NumberValue();
    glWeightdvARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glWeightubvARB
   *
   * @param GLint
   * @param const GLubyte *
   * @return void
   */
  Handle<Value> gl_glWeightubvARB(const Arguments& args) {
    HandleScope scope;
    GLint _arg0 = (GLint)args[0]->Int32Value();
    const GLubyte _arg1 = (GLubyte)args[1]->Int32Value();
    glWeightubvARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glWeightusvARB
   *
   * @param GLint
   * @param const GLushort *
   * @return void
   */
  Handle<Value> gl_glWeightusvARB(const Arguments& args) {
    HandleScope scope;
    GLint _arg0 = (GLint)args[0]->Int32Value();
    const GLushort _arg1 = (GLushort)args[1]->Uint32Value();
    glWeightusvARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glWeightuivARB
   *
   * @param GLint
   * @param const GLuint *
   * @return void
   */
  Handle<Value> gl_glWeightuivARB(const Arguments& args) {
    HandleScope scope;
    GLint _arg0 = (GLint)args[0]->Int32Value();
    const GLuint _arg1 = (GLuint)args[1]->Uint32Value();
    glWeightuivARB(_arg0, &_arg1);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glWeightPointerARB
   *
   * @param GLint
   * @param GLenum
   * @param GLsizei
   * @param const GLvoid *
   * @return void
   */
  Handle<Value> gl_glWeightPointerARB(const Arguments& args) {
    HandleScope scope;
    GLint _arg0 = (GLint)args[0]->Int32Value();
    GLenum _arg1 = (GLenum)args[1]->Int32Value();
    GLsizei _arg2 = (GLsizei)args[2]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[3])) {
        return ThrowException(Exception::Error(
                              String::New("3nth argument needs to be a buffer")));
    }
    Buffer * arg3_buffer = ObjectWrap::Unwrap<Buffer>(args[3]->ToObject());
    const GLvoid *_arg3 = (GLvoid *)arg3_buffer->data();
    glWeightPointerARB(_arg0, _arg1, _arg2, _arg3);

    return Undefined();
  }


  /**
   * glVertexBlendARB
   *
   * @param GLint
   * @return void
   */
  Handle<Value> gl_glVertexBlendARB(const Arguments& args) {
    HandleScope scope;
    GLint _arg0 = (GLint)args[0]->Int32Value();
    glVertexBlendARB(_arg0);

    return Undefined();
  }


  /**
   * glWindowPos2dARB
   *
   * @param GLdouble
   * @param GLdouble
   * @return void
   */
  Handle<Value> gl_glWindowPos2dARB(const Arguments& args) {
    HandleScope scope;
    GLdouble _arg0 = (GLdouble)args[0]->NumberValue();
    GLdouble _arg1 = (GLdouble)args[1]->NumberValue();
    glWindowPos2dARB(_arg0, _arg1);

    return Undefined();
  }


  /**
   * glWindowPos2dvARB
   *
   * @param const GLdouble *
   * @return void
   */
  Handle<Value> gl_glWindowPos2dvARB(const Arguments& args) {
    HandleScope scope;
    const GLdouble _arg0 = (GLdouble)args[0]->NumberValue();
    glWindowPos2dvARB(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glWindowPos2fARB
   *
   * @param GLfloat
   * @param GLfloat
   * @return void
   */
  Handle<Value> gl_glWindowPos2fARB(const Arguments& args) {
    HandleScope scope;
    GLfloat _arg0 = (GLfloat)args[0]->NumberValue();
    GLfloat _arg1 = (GLfloat)args[1]->NumberValue();
    glWindowPos2fARB(_arg0, _arg1);

    return Undefined();
  }


  /**
   * glWindowPos2fvARB
   *
   * @param const GLfloat *
   * @return void
   */
  Handle<Value> gl_glWindowPos2fvARB(const Arguments& args) {
    HandleScope scope;
    const GLfloat _arg0 = (GLfloat)args[0]->NumberValue();
    glWindowPos2fvARB(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glWindowPos2iARB
   *
   * @param GLint
   * @param GLint
   * @return void
   */
  Handle<Value> gl_glWindowPos2iARB(const Arguments& args) {
    HandleScope scope;
    GLint _arg0 = (GLint)args[0]->Int32Value();
    GLint _arg1 = (GLint)args[1]->Int32Value();
    glWindowPos2iARB(_arg0, _arg1);

    return Undefined();
  }


  /**
   * glWindowPos2ivARB
   *
   * @param const GLint *
   * @return void
   */
  Handle<Value> gl_glWindowPos2ivARB(const Arguments& args) {
    HandleScope scope;
    const GLint _arg0 = (GLint)args[0]->Int32Value();
    glWindowPos2ivARB(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glWindowPos2sARB
   *
   * @param GLshort
   * @param GLshort
   * @return void
   */
  Handle<Value> gl_glWindowPos2sARB(const Arguments& args) {
    HandleScope scope;
    GLshort _arg0 = (GLshort)args[0]->Int32Value();
    GLshort _arg1 = (GLshort)args[1]->Int32Value();
    glWindowPos2sARB(_arg0, _arg1);

    return Undefined();
  }


  /**
   * glWindowPos2svARB
   *
   * @param const GLshort *
   * @return void
   */
  Handle<Value> gl_glWindowPos2svARB(const Arguments& args) {
    HandleScope scope;
    const GLshort _arg0 = (GLshort)args[0]->Int32Value();
    glWindowPos2svARB(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glWindowPos3dARB
   *
   * @param GLdouble
   * @param GLdouble
   * @param GLdouble
   * @return void
   */
  Handle<Value> gl_glWindowPos3dARB(const Arguments& args) {
    HandleScope scope;
    GLdouble _arg0 = (GLdouble)args[0]->NumberValue();
    GLdouble _arg1 = (GLdouble)args[1]->NumberValue();
    GLdouble _arg2 = (GLdouble)args[2]->NumberValue();
    glWindowPos3dARB(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glWindowPos3dvARB
   *
   * @param const GLdouble *
   * @return void
   */
  Handle<Value> gl_glWindowPos3dvARB(const Arguments& args) {
    HandleScope scope;
    const GLdouble _arg0 = (GLdouble)args[0]->NumberValue();
    glWindowPos3dvARB(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glWindowPos3fARB
   *
   * @param GLfloat
   * @param GLfloat
   * @param GLfloat
   * @return void
   */
  Handle<Value> gl_glWindowPos3fARB(const Arguments& args) {
    HandleScope scope;
    GLfloat _arg0 = (GLfloat)args[0]->NumberValue();
    GLfloat _arg1 = (GLfloat)args[1]->NumberValue();
    GLfloat _arg2 = (GLfloat)args[2]->NumberValue();
    glWindowPos3fARB(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glWindowPos3fvARB
   *
   * @param const GLfloat *
   * @return void
   */
  Handle<Value> gl_glWindowPos3fvARB(const Arguments& args) {
    HandleScope scope;
    const GLfloat _arg0 = (GLfloat)args[0]->NumberValue();
    glWindowPos3fvARB(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glWindowPos3iARB
   *
   * @param GLint
   * @param GLint
   * @param GLint
   * @return void
   */
  Handle<Value> gl_glWindowPos3iARB(const Arguments& args) {
    HandleScope scope;
    GLint _arg0 = (GLint)args[0]->Int32Value();
    GLint _arg1 = (GLint)args[1]->Int32Value();
    GLint _arg2 = (GLint)args[2]->Int32Value();
    glWindowPos3iARB(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glWindowPos3ivARB
   *
   * @param const GLint *
   * @return void
   */
  Handle<Value> gl_glWindowPos3ivARB(const Arguments& args) {
    HandleScope scope;
    const GLint _arg0 = (GLint)args[0]->Int32Value();
    glWindowPos3ivARB(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glWindowPos3sARB
   *
   * @param GLshort
   * @param GLshort
   * @param GLshort
   * @return void
   */
  Handle<Value> gl_glWindowPos3sARB(const Arguments& args) {
    HandleScope scope;
    GLshort _arg0 = (GLshort)args[0]->Int32Value();
    GLshort _arg1 = (GLshort)args[1]->Int32Value();
    GLshort _arg2 = (GLshort)args[2]->Int32Value();
    glWindowPos3sARB(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glWindowPos3svARB
   *
   * @param const GLshort *
   * @return void
   */
  Handle<Value> gl_glWindowPos3svARB(const Arguments& args) {
    HandleScope scope;
    const GLshort _arg0 = (GLshort)args[0]->Int32Value();
    glWindowPos3svARB(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glGenQueriesARB
   *
   * @param GLsizei n
   * @param GLuint *ids
   * @return void
   */
  Handle<Value> gl_glGenQueriesARB(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    GLuint _ids = (GLuint)args[1]->Uint32Value();
    glGenQueriesARB(_n, &_ids);

    args[1] = Number::New(_ids);

    return Undefined();
  }


  /**
   * glDeleteQueriesARB
   *
   * @param GLsizei n
   * @param const GLuint *ids
   * @return void
   */
  Handle<Value> gl_glDeleteQueriesARB(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    const GLuint _ids = (GLuint)args[1]->Uint32Value();
    glDeleteQueriesARB(_n, &_ids);

    args[1] = Number::New(_ids);

    return Undefined();
  }


  /**
   * glIsQueryARB
   *
   * @param GLuint id
   * @return GLboolean
   */
  Handle<Value> gl_glIsQueryARB(const Arguments& args) {
    HandleScope scope;
    GLuint _id = (GLuint)args[0]->Uint32Value();
    GLboolean _ret = glIsQueryARB(_id);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glBeginQueryARB
   *
   * @param GLenum target
   * @param GLuint id
   * @return void
   */
  Handle<Value> gl_glBeginQueryARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _id = (GLuint)args[1]->Uint32Value();
    glBeginQueryARB(_target, _id);

    return Undefined();
  }


  /**
   * glEndQueryARB
   *
   * @param GLenum target
   * @return void
   */
  Handle<Value> gl_glEndQueryARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    glEndQueryARB(_target);

    return Undefined();
  }


  /**
   * glGetQueryivARB
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetQueryivARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetQueryivARB(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetQueryObjectivARB
   *
   * @param GLuint id
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetQueryObjectivARB(const Arguments& args) {
    HandleScope scope;
    GLuint _id = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetQueryObjectivARB(_id, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetQueryObjectuivARB
   *
   * @param GLuint id
   * @param GLenum pname
   * @param GLuint *params
   * @return void
   */
  Handle<Value> gl_glGetQueryObjectuivARB(const Arguments& args) {
    HandleScope scope;
    GLuint _id = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLuint _params = (GLuint)args[2]->Uint32Value();
    glGetQueryObjectuivARB(_id, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glPointParameterfARB
   *
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> gl_glPointParameterfARB(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLfloat _param = (GLfloat)args[1]->NumberValue();
    glPointParameterfARB(_pname, _param);

    return Undefined();
  }


  /**
   * glPointParameterfvARB
   *
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> gl_glPointParameterfvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    const GLfloat _params = (GLfloat)args[1]->NumberValue();
    glPointParameterfvARB(_pname, &_params);

    args[1] = Number::New(_params);

    return Undefined();
  }


  /**
   * glBindProgramARB
   *
   * @param GLenum target
   * @param GLuint program
   * @return void
   */
  Handle<Value> gl_glBindProgramARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _program = (GLuint)args[1]->Uint32Value();
    glBindProgramARB(_target, _program);

    return Undefined();
  }


  /**
   * glDeleteProgramsARB
   *
   * @param GLsizei n
   * @param const GLuint *programs
   * @return void
   */
  Handle<Value> gl_glDeleteProgramsARB(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    const GLuint _programs = (GLuint)args[1]->Uint32Value();
    glDeleteProgramsARB(_n, &_programs);

    args[1] = Number::New(_programs);

    return Undefined();
  }


  /**
   * glGenProgramsARB
   *
   * @param GLsizei n
   * @param GLuint *programs
   * @return void
   */
  Handle<Value> gl_glGenProgramsARB(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    GLuint _programs = (GLuint)args[1]->Uint32Value();
    glGenProgramsARB(_n, &_programs);

    args[1] = Number::New(_programs);

    return Undefined();
  }


  /**
   * glIsProgramARB
   *
   * @param GLuint program
   * @return GLboolean
   */
  Handle<Value> gl_glIsProgramARB(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    GLboolean _ret = glIsProgramARB(_program);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glProgramEnvParameter4dARB
   *
   * @param GLenum target
   * @param GLuint index
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @param GLdouble w
   * @return void
   */
  Handle<Value> gl_glProgramEnvParameter4dARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    GLdouble _x = (GLdouble)args[2]->NumberValue();
    GLdouble _y = (GLdouble)args[3]->NumberValue();
    GLdouble _z = (GLdouble)args[4]->NumberValue();
    GLdouble _w = (GLdouble)args[5]->NumberValue();
    glProgramEnvParameter4dARB(_target, _index, _x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glProgramEnvParameter4dvARB
   *
   * @param GLenum target
   * @param GLuint index
   * @param const GLdouble *params
   * @return void
   */
  Handle<Value> gl_glProgramEnvParameter4dvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    const GLdouble _params = (GLdouble)args[2]->NumberValue();
    glProgramEnvParameter4dvARB(_target, _index, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glProgramEnvParameter4fARB
   *
   * @param GLenum target
   * @param GLuint index
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @param GLfloat w
   * @return void
   */
  Handle<Value> gl_glProgramEnvParameter4fARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    GLfloat _x = (GLfloat)args[2]->NumberValue();
    GLfloat _y = (GLfloat)args[3]->NumberValue();
    GLfloat _z = (GLfloat)args[4]->NumberValue();
    GLfloat _w = (GLfloat)args[5]->NumberValue();
    glProgramEnvParameter4fARB(_target, _index, _x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glProgramEnvParameter4fvARB
   *
   * @param GLenum target
   * @param GLuint index
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> gl_glProgramEnvParameter4fvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    const GLfloat _params = (GLfloat)args[2]->NumberValue();
    glProgramEnvParameter4fvARB(_target, _index, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glProgramLocalParameter4dARB
   *
   * @param GLenum target
   * @param GLuint index
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @param GLdouble w
   * @return void
   */
  Handle<Value> gl_glProgramLocalParameter4dARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    GLdouble _x = (GLdouble)args[2]->NumberValue();
    GLdouble _y = (GLdouble)args[3]->NumberValue();
    GLdouble _z = (GLdouble)args[4]->NumberValue();
    GLdouble _w = (GLdouble)args[5]->NumberValue();
    glProgramLocalParameter4dARB(_target, _index, _x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glProgramLocalParameter4dvARB
   *
   * @param GLenum target
   * @param GLuint index
   * @param const GLdouble *params
   * @return void
   */
  Handle<Value> gl_glProgramLocalParameter4dvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    const GLdouble _params = (GLdouble)args[2]->NumberValue();
    glProgramLocalParameter4dvARB(_target, _index, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glProgramLocalParameter4fARB
   *
   * @param GLenum target
   * @param GLuint index
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @param GLfloat w
   * @return void
   */
  Handle<Value> gl_glProgramLocalParameter4fARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    GLfloat _x = (GLfloat)args[2]->NumberValue();
    GLfloat _y = (GLfloat)args[3]->NumberValue();
    GLfloat _z = (GLfloat)args[4]->NumberValue();
    GLfloat _w = (GLfloat)args[5]->NumberValue();
    glProgramLocalParameter4fARB(_target, _index, _x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glProgramLocalParameter4fvARB
   *
   * @param GLenum target
   * @param GLuint index
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> gl_glProgramLocalParameter4fvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    const GLfloat _params = (GLfloat)args[2]->NumberValue();
    glProgramLocalParameter4fvARB(_target, _index, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetProgramEnvParameterdvARB
   *
   * @param GLenum target
   * @param GLuint index
   * @param GLdouble *params
   * @return void
   */
  Handle<Value> gl_glGetProgramEnvParameterdvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    GLdouble _params = (GLdouble)args[2]->NumberValue();
    glGetProgramEnvParameterdvARB(_target, _index, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetProgramEnvParameterfvARB
   *
   * @param GLenum target
   * @param GLuint index
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetProgramEnvParameterfvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glGetProgramEnvParameterfvARB(_target, _index, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glProgramEnvParameters4fvEXT
   *
   * @param GLenum target
   * @param GLuint index
   * @param GLsizei count
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> gl_glProgramEnvParameters4fvEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    GLsizei _count = (GLsizei)args[2]->Int32Value();
    const GLfloat _params = (GLfloat)args[3]->NumberValue();
    glProgramEnvParameters4fvEXT(_target, _index, _count, &_params);

    args[3] = Number::New(_params);

    return Undefined();
  }


  /**
   * glProgramLocalParameters4fvEXT
   *
   * @param GLenum target
   * @param GLuint index
   * @param GLsizei count
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> gl_glProgramLocalParameters4fvEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    GLsizei _count = (GLsizei)args[2]->Int32Value();
    const GLfloat _params = (GLfloat)args[3]->NumberValue();
    glProgramLocalParameters4fvEXT(_target, _index, _count, &_params);

    args[3] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetProgramLocalParameterdvARB
   *
   * @param GLenum target
   * @param GLuint index
   * @param GLdouble *params
   * @return void
   */
  Handle<Value> gl_glGetProgramLocalParameterdvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    GLdouble _params = (GLdouble)args[2]->NumberValue();
    glGetProgramLocalParameterdvARB(_target, _index, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetProgramLocalParameterfvARB
   *
   * @param GLenum target
   * @param GLuint index
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetProgramLocalParameterfvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glGetProgramLocalParameterfvARB(_target, _index, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glProgramStringARB
   *
   * @param GLenum target
   * @param GLenum format
   * @param GLsizei len
   * @param const GLvoid *string
   * @return void
   */
  Handle<Value> gl_glProgramStringARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _format = (GLenum)args[1]->Int32Value();
    GLsizei _len = (GLsizei)args[2]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[3])) {
        return ThrowException(Exception::Error(
                              String::New("3nth argument needs to be a buffer")));
    }
    Buffer * string_buffer = ObjectWrap::Unwrap<Buffer>(args[3]->ToObject());
    const GLvoid *_string = (GLvoid *)string_buffer->data();
    glProgramStringARB(_target, _format, _len, _string);

    return Undefined();
  }


  /**
   * glGetProgramStringARB
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLvoid *string
   * @return void
   */
  Handle<Value> gl_glGetProgramStringARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * string_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    GLvoid *_string = (GLvoid *)string_buffer->data();
    glGetProgramStringARB(_target, _pname, _string);

    return Undefined();
  }


  /**
   * glGetProgramivARB
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetProgramivARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetProgramivARB(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glVertexAttrib1dARB
   *
   * @param GLuint index
   * @param GLdouble x
   * @return void
   */
  Handle<Value> gl_glVertexAttrib1dARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLdouble _x = (GLdouble)args[1]->NumberValue();
    glVertexAttrib1dARB(_index, _x);

    return Undefined();
  }


  /**
   * glVertexAttrib1dvARB
   *
   * @param GLuint index
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib1dvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLdouble _v = (GLdouble)args[1]->NumberValue();
    glVertexAttrib1dvARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib1fARB
   *
   * @param GLuint index
   * @param GLfloat x
   * @return void
   */
  Handle<Value> gl_glVertexAttrib1fARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLfloat _x = (GLfloat)args[1]->NumberValue();
    glVertexAttrib1fARB(_index, _x);

    return Undefined();
  }


  /**
   * glVertexAttrib1fvARB
   *
   * @param GLuint index
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib1fvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLfloat _v = (GLfloat)args[1]->NumberValue();
    glVertexAttrib1fvARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib1sARB
   *
   * @param GLuint index
   * @param GLshort x
   * @return void
   */
  Handle<Value> gl_glVertexAttrib1sARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLshort _x = (GLshort)args[1]->Int32Value();
    glVertexAttrib1sARB(_index, _x);

    return Undefined();
  }


  /**
   * glVertexAttrib1svARB
   *
   * @param GLuint index
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib1svARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glVertexAttrib1svARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib2dARB
   *
   * @param GLuint index
   * @param GLdouble x
   * @param GLdouble y
   * @return void
   */
  Handle<Value> gl_glVertexAttrib2dARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLdouble _x = (GLdouble)args[1]->NumberValue();
    GLdouble _y = (GLdouble)args[2]->NumberValue();
    glVertexAttrib2dARB(_index, _x, _y);

    return Undefined();
  }


  /**
   * glVertexAttrib2dvARB
   *
   * @param GLuint index
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib2dvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLdouble _v = (GLdouble)args[1]->NumberValue();
    glVertexAttrib2dvARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib2fARB
   *
   * @param GLuint index
   * @param GLfloat x
   * @param GLfloat y
   * @return void
   */
  Handle<Value> gl_glVertexAttrib2fARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLfloat _x = (GLfloat)args[1]->NumberValue();
    GLfloat _y = (GLfloat)args[2]->NumberValue();
    glVertexAttrib2fARB(_index, _x, _y);

    return Undefined();
  }


  /**
   * glVertexAttrib2fvARB
   *
   * @param GLuint index
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib2fvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLfloat _v = (GLfloat)args[1]->NumberValue();
    glVertexAttrib2fvARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib2sARB
   *
   * @param GLuint index
   * @param GLshort x
   * @param GLshort y
   * @return void
   */
  Handle<Value> gl_glVertexAttrib2sARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLshort _x = (GLshort)args[1]->Int32Value();
    GLshort _y = (GLshort)args[2]->Int32Value();
    glVertexAttrib2sARB(_index, _x, _y);

    return Undefined();
  }


  /**
   * glVertexAttrib2svARB
   *
   * @param GLuint index
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib2svARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glVertexAttrib2svARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib3dARB
   *
   * @param GLuint index
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @return void
   */
  Handle<Value> gl_glVertexAttrib3dARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLdouble _x = (GLdouble)args[1]->NumberValue();
    GLdouble _y = (GLdouble)args[2]->NumberValue();
    GLdouble _z = (GLdouble)args[3]->NumberValue();
    glVertexAttrib3dARB(_index, _x, _y, _z);

    return Undefined();
  }


  /**
   * glVertexAttrib3dvARB
   *
   * @param GLuint index
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib3dvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLdouble _v = (GLdouble)args[1]->NumberValue();
    glVertexAttrib3dvARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib3fARB
   *
   * @param GLuint index
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @return void
   */
  Handle<Value> gl_glVertexAttrib3fARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLfloat _x = (GLfloat)args[1]->NumberValue();
    GLfloat _y = (GLfloat)args[2]->NumberValue();
    GLfloat _z = (GLfloat)args[3]->NumberValue();
    glVertexAttrib3fARB(_index, _x, _y, _z);

    return Undefined();
  }


  /**
   * glVertexAttrib3fvARB
   *
   * @param GLuint index
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib3fvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLfloat _v = (GLfloat)args[1]->NumberValue();
    glVertexAttrib3fvARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib3sARB
   *
   * @param GLuint index
   * @param GLshort x
   * @param GLshort y
   * @param GLshort z
   * @return void
   */
  Handle<Value> gl_glVertexAttrib3sARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLshort _x = (GLshort)args[1]->Int32Value();
    GLshort _y = (GLshort)args[2]->Int32Value();
    GLshort _z = (GLshort)args[3]->Int32Value();
    glVertexAttrib3sARB(_index, _x, _y, _z);

    return Undefined();
  }


  /**
   * glVertexAttrib3svARB
   *
   * @param GLuint index
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib3svARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glVertexAttrib3svARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4NbvARB
   *
   * @param GLuint index
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4NbvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLbyte _v = (GLbyte)args[1]->Int32Value();
    glVertexAttrib4NbvARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4NivARB
   *
   * @param GLuint index
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4NivARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
    glVertexAttrib4NivARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4NsvARB
   *
   * @param GLuint index
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4NsvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glVertexAttrib4NsvARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4NubARB
   *
   * @param GLuint index
   * @param GLubyte x
   * @param GLubyte y
   * @param GLubyte z
   * @param GLubyte w
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4NubARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLubyte _x = (GLubyte)args[1]->Int32Value();
    GLubyte _y = (GLubyte)args[2]->Int32Value();
    GLubyte _z = (GLubyte)args[3]->Int32Value();
    GLubyte _w = (GLubyte)args[4]->Int32Value();
    glVertexAttrib4NubARB(_index, _x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glVertexAttrib4NubvARB
   *
   * @param GLuint index
   * @param const GLubyte *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4NubvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLubyte _v = (GLubyte)args[1]->Int32Value();
    glVertexAttrib4NubvARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4NuivARB
   *
   * @param GLuint index
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4NuivARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLuint _v = (GLuint)args[1]->Uint32Value();
    glVertexAttrib4NuivARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4NusvARB
   *
   * @param GLuint index
   * @param const GLushort *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4NusvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLushort _v = (GLushort)args[1]->Uint32Value();
    glVertexAttrib4NusvARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4bvARB
   *
   * @param GLuint index
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4bvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLbyte _v = (GLbyte)args[1]->Int32Value();
    glVertexAttrib4bvARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4dARB
   *
   * @param GLuint index
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @param GLdouble w
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4dARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLdouble _x = (GLdouble)args[1]->NumberValue();
    GLdouble _y = (GLdouble)args[2]->NumberValue();
    GLdouble _z = (GLdouble)args[3]->NumberValue();
    GLdouble _w = (GLdouble)args[4]->NumberValue();
    glVertexAttrib4dARB(_index, _x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glVertexAttrib4dvARB
   *
   * @param GLuint index
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4dvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLdouble _v = (GLdouble)args[1]->NumberValue();
    glVertexAttrib4dvARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4fARB
   *
   * @param GLuint index
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @param GLfloat w
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4fARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLfloat _x = (GLfloat)args[1]->NumberValue();
    GLfloat _y = (GLfloat)args[2]->NumberValue();
    GLfloat _z = (GLfloat)args[3]->NumberValue();
    GLfloat _w = (GLfloat)args[4]->NumberValue();
    glVertexAttrib4fARB(_index, _x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glVertexAttrib4fvARB
   *
   * @param GLuint index
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4fvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLfloat _v = (GLfloat)args[1]->NumberValue();
    glVertexAttrib4fvARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4ivARB
   *
   * @param GLuint index
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4ivARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
    glVertexAttrib4ivARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4sARB
   *
   * @param GLuint index
   * @param GLshort x
   * @param GLshort y
   * @param GLshort z
   * @param GLshort w
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4sARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLshort _x = (GLshort)args[1]->Int32Value();
    GLshort _y = (GLshort)args[2]->Int32Value();
    GLshort _z = (GLshort)args[3]->Int32Value();
    GLshort _w = (GLshort)args[4]->Int32Value();
    glVertexAttrib4sARB(_index, _x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glVertexAttrib4svARB
   *
   * @param GLuint index
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4svARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glVertexAttrib4svARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4ubvARB
   *
   * @param GLuint index
   * @param const GLubyte *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4ubvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLubyte _v = (GLubyte)args[1]->Int32Value();
    glVertexAttrib4ubvARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4uivARB
   *
   * @param GLuint index
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4uivARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLuint _v = (GLuint)args[1]->Uint32Value();
    glVertexAttrib4uivARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4usvARB
   *
   * @param GLuint index
   * @param const GLushort *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4usvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLushort _v = (GLushort)args[1]->Uint32Value();
    glVertexAttrib4usvARB(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttribPointerARB
   *
   * @param GLuint index
   * @param GLint size
   * @param GLenum type
   * @param GLboolean normalized
   * @param GLsizei stride
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> gl_glVertexAttribPointerARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLint _size = (GLint)args[1]->Int32Value();
    GLenum _type = (GLenum)args[2]->Int32Value();
    GLboolean _normalized = (GLboolean)args[3]->Int32Value();
    GLsizei _stride = (GLsizei)args[4]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[5])) {
        return ThrowException(Exception::Error(
                              String::New("5nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[5]->ToObject());
    const GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glVertexAttribPointerARB(_index, _size, _type, _normalized, _stride, _pointer);

    return Undefined();
  }


  /**
   * glDisableVertexAttribArrayARB
   *
   * @param GLuint index
   * @return void
   */
  Handle<Value> gl_glDisableVertexAttribArrayARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    glDisableVertexAttribArrayARB(_index);

    return Undefined();
  }


  /**
   * glEnableVertexAttribArrayARB
   *
   * @param GLuint index
   * @return void
   */
  Handle<Value> gl_glEnableVertexAttribArrayARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    glEnableVertexAttribArrayARB(_index);

    return Undefined();
  }


  /**
   * glGetVertexAttribPointervARB
   *
   * @param GLuint index
   * @param GLenum pname
   * @param GLvoid **pointer
   * @return void
   */
  Handle<Value> gl_glGetVertexAttribPointervARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glGetVertexAttribPointervARB(_index, _pname, &_pointer);

    return Undefined();
  }


  /**
   * glGetVertexAttribdvARB
   *
   * @param GLuint index
   * @param GLenum pname
   * @param GLdouble *params
   * @return void
   */
  Handle<Value> gl_glGetVertexAttribdvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLdouble _params = (GLdouble)args[2]->NumberValue();
    glGetVertexAttribdvARB(_index, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetVertexAttribfvARB
   *
   * @param GLuint index
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetVertexAttribfvARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glGetVertexAttribfvARB(_index, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetVertexAttribivARB
   *
   * @param GLuint index
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetVertexAttribivARB(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetVertexAttribivARB(_index, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glDeleteObjectARB
   *
   * @param GLhandleARB obj
   * @return void
   */
  Handle<Value> gl_glDeleteObjectARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glDeleteObjectARB is not implemented!")));
  }


  /**
   * glGetHandleARB
   *
   * @param GLenum pname
   * @return GLhandleARB
   */
  Handle<Value> gl_glGetHandleARB(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLhandleARB _ret = glGetHandleARB(_pname);

    return Undefined();
  }


  /**
   * glDetachObjectARB
   *
   * @param GLhandleARB containerObj
   * @param GLhandleARB attachedObj
   * @return void
   */
  Handle<Value> gl_glDetachObjectARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glDetachObjectARB is not implemented!")));
  }


  /**
   * glCreateShaderObjectARB
   *
   * @param GLenum shaderType
   * @return GLhandleARB
   */
  Handle<Value> gl_glCreateShaderObjectARB(const Arguments& args) {
    HandleScope scope;
    GLenum _shaderType = (GLenum)args[0]->Int32Value();
    GLhandleARB _ret = glCreateShaderObjectARB(_shaderType);

    return Undefined();
  }


  /**
   * glShaderSourceARB
   *
   * @param GLhandleARB shaderObj
   * @param GLsizei count
   * @param const GLcharARB **string
   * @param const GLint *length
   * @return void
   */
  Handle<Value> gl_glShaderSourceARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glShaderSourceARB is not implemented!")));
  }


  /**
   * glCompileShaderARB
   *
   * @param GLhandleARB shaderObj
   * @return void
   */
  Handle<Value> gl_glCompileShaderARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glCompileShaderARB is not implemented!")));
  }


  /**
   * glCreateProgramObjectARB
   *
   * @return GLhandleARB
   */
  Handle<Value> gl_glCreateProgramObjectARB(const Arguments& args) {
    HandleScope scope;
    GLhandleARB _ret = glCreateProgramObjectARB();

    return Undefined();
  }


  /**
   * glAttachObjectARB
   *
   * @param GLhandleARB containerObj
   * @param GLhandleARB obj
   * @return void
   */
  Handle<Value> gl_glAttachObjectARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glAttachObjectARB is not implemented!")));
  }


  /**
   * glLinkProgramARB
   *
   * @param GLhandleARB programObj
   * @return void
   */
  Handle<Value> gl_glLinkProgramARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glLinkProgramARB is not implemented!")));
  }


  /**
   * glUseProgramObjectARB
   *
   * @param GLhandleARB programObj
   * @return void
   */
  Handle<Value> gl_glUseProgramObjectARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glUseProgramObjectARB is not implemented!")));
  }


  /**
   * glValidateProgramARB
   *
   * @param GLhandleARB programObj
   * @return void
   */
  Handle<Value> gl_glValidateProgramARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glValidateProgramARB is not implemented!")));
  }


  /**
   * glUniform1fARB
   *
   * @param GLint location
   * @param GLfloat v0
   * @return void
   */
  Handle<Value> gl_glUniform1fARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLfloat _v0 = (GLfloat)args[1]->NumberValue();
    glUniform1fARB(_location, _v0);

    return Undefined();
  }


  /**
   * glUniform2fARB
   *
   * @param GLint location
   * @param GLfloat v0
   * @param GLfloat v1
   * @return void
   */
  Handle<Value> gl_glUniform2fARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLfloat _v0 = (GLfloat)args[1]->NumberValue();
    GLfloat _v1 = (GLfloat)args[2]->NumberValue();
    glUniform2fARB(_location, _v0, _v1);

    return Undefined();
  }


  /**
   * glUniform3fARB
   *
   * @param GLint location
   * @param GLfloat v0
   * @param GLfloat v1
   * @param GLfloat v2
   * @return void
   */
  Handle<Value> gl_glUniform3fARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLfloat _v0 = (GLfloat)args[1]->NumberValue();
    GLfloat _v1 = (GLfloat)args[2]->NumberValue();
    GLfloat _v2 = (GLfloat)args[3]->NumberValue();
    glUniform3fARB(_location, _v0, _v1, _v2);

    return Undefined();
  }


  /**
   * glUniform4fARB
   *
   * @param GLint location
   * @param GLfloat v0
   * @param GLfloat v1
   * @param GLfloat v2
   * @param GLfloat v3
   * @return void
   */
  Handle<Value> gl_glUniform4fARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLfloat _v0 = (GLfloat)args[1]->NumberValue();
    GLfloat _v1 = (GLfloat)args[2]->NumberValue();
    GLfloat _v2 = (GLfloat)args[3]->NumberValue();
    GLfloat _v3 = (GLfloat)args[4]->NumberValue();
    glUniform4fARB(_location, _v0, _v1, _v2, _v3);

    return Undefined();
  }


  /**
   * glUniform1iARB
   *
   * @param GLint location
   * @param GLint v0
   * @return void
   */
  Handle<Value> gl_glUniform1iARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLint _v0 = (GLint)args[1]->Int32Value();
    glUniform1iARB(_location, _v0);

    return Undefined();
  }


  /**
   * glUniform2iARB
   *
   * @param GLint location
   * @param GLint v0
   * @param GLint v1
   * @return void
   */
  Handle<Value> gl_glUniform2iARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLint _v0 = (GLint)args[1]->Int32Value();
    GLint _v1 = (GLint)args[2]->Int32Value();
    glUniform2iARB(_location, _v0, _v1);

    return Undefined();
  }


  /**
   * glUniform3iARB
   *
   * @param GLint location
   * @param GLint v0
   * @param GLint v1
   * @param GLint v2
   * @return void
   */
  Handle<Value> gl_glUniform3iARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLint _v0 = (GLint)args[1]->Int32Value();
    GLint _v1 = (GLint)args[2]->Int32Value();
    GLint _v2 = (GLint)args[3]->Int32Value();
    glUniform3iARB(_location, _v0, _v1, _v2);

    return Undefined();
  }


  /**
   * glUniform4iARB
   *
   * @param GLint location
   * @param GLint v0
   * @param GLint v1
   * @param GLint v2
   * @param GLint v3
   * @return void
   */
  Handle<Value> gl_glUniform4iARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLint _v0 = (GLint)args[1]->Int32Value();
    GLint _v1 = (GLint)args[2]->Int32Value();
    GLint _v2 = (GLint)args[3]->Int32Value();
    GLint _v3 = (GLint)args[4]->Int32Value();
    glUniform4iARB(_location, _v0, _v1, _v2, _v3);

    return Undefined();
  }


  /**
   * glUniform1fvARB
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniform1fvARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLfloat _value = (GLfloat)args[2]->NumberValue();
    glUniform1fvARB(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform2fvARB
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniform2fvARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLfloat _value = (GLfloat)args[2]->NumberValue();
    glUniform2fvARB(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform3fvARB
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniform3fvARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLfloat _value = (GLfloat)args[2]->NumberValue();
    glUniform3fvARB(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform4fvARB
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniform4fvARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLfloat _value = (GLfloat)args[2]->NumberValue();
    glUniform4fvARB(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform1ivARB
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLint *value
   * @return void
   */
  Handle<Value> gl_glUniform1ivARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLint _value = (GLint)args[2]->Int32Value();
    glUniform1ivARB(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform2ivARB
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLint *value
   * @return void
   */
  Handle<Value> gl_glUniform2ivARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLint _value = (GLint)args[2]->Int32Value();
    glUniform2ivARB(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform3ivARB
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLint *value
   * @return void
   */
  Handle<Value> gl_glUniform3ivARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLint _value = (GLint)args[2]->Int32Value();
    glUniform3ivARB(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform4ivARB
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLint *value
   * @return void
   */
  Handle<Value> gl_glUniform4ivARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLint _value = (GLint)args[2]->Int32Value();
    glUniform4ivARB(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniformMatrix2fvARB
   *
   * @param GLint location
   * @param GLsizei count
   * @param GLboolean transpose
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniformMatrix2fvARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    GLboolean _transpose = (GLboolean)args[2]->Int32Value();
    const GLfloat _value = (GLfloat)args[3]->NumberValue();
    glUniformMatrix2fvARB(_location, _count, _transpose, &_value);

    args[3] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniformMatrix3fvARB
   *
   * @param GLint location
   * @param GLsizei count
   * @param GLboolean transpose
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniformMatrix3fvARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    GLboolean _transpose = (GLboolean)args[2]->Int32Value();
    const GLfloat _value = (GLfloat)args[3]->NumberValue();
    glUniformMatrix3fvARB(_location, _count, _transpose, &_value);

    args[3] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniformMatrix4fvARB
   *
   * @param GLint location
   * @param GLsizei count
   * @param GLboolean transpose
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniformMatrix4fvARB(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    GLboolean _transpose = (GLboolean)args[2]->Int32Value();
    const GLfloat _value = (GLfloat)args[3]->NumberValue();
    glUniformMatrix4fvARB(_location, _count, _transpose, &_value);

    args[3] = Number::New(_value);

    return Undefined();
  }


  /**
   * glGetObjectParameterfvARB
   *
   * @param GLhandleARB obj
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetObjectParameterfvARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetObjectParameterfvARB is not implemented!")));
  }


  /**
   * glGetObjectParameterivARB
   *
   * @param GLhandleARB obj
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetObjectParameterivARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetObjectParameterivARB is not implemented!")));
  }


  /**
   * glGetInfoLogARB
   *
   * @param GLhandleARB obj
   * @param GLsizei maxLength
   * @param GLsizei *length
   * @param GLcharARB *infoLog
   * @return void
   */
  Handle<Value> gl_glGetInfoLogARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetInfoLogARB is not implemented!")));
  }


  /**
   * glGetAttachedObjectsARB
   *
   * @param GLhandleARB containerObj
   * @param GLsizei maxCount
   * @param GLsizei *count
   * @param GLhandleARB *obj
   * @return void
   */
  Handle<Value> gl_glGetAttachedObjectsARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetAttachedObjectsARB is not implemented!")));
  }


  /**
   * glGetUniformLocationARB
   *
   * @param GLhandleARB programObj
   * @param const GLcharARB *name
   * @return GLint
   */
  Handle<Value> gl_glGetUniformLocationARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetUniformLocationARB is not implemented!")));
  }


  /**
   * glGetActiveUniformARB
   *
   * @param GLhandleARB programObj
   * @param GLuint index
   * @param GLsizei maxLength
   * @param GLsizei *length
   * @param GLint *size
   * @param GLenum *type
   * @param GLcharARB *name
   * @return void
   */
  Handle<Value> gl_glGetActiveUniformARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetActiveUniformARB is not implemented!")));
  }


  /**
   * glGetUniformfvARB
   *
   * @param GLhandleARB programObj
   * @param GLint location
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetUniformfvARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetUniformfvARB is not implemented!")));
  }


  /**
   * glGetUniformivARB
   *
   * @param GLhandleARB programObj
   * @param GLint location
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetUniformivARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetUniformivARB is not implemented!")));
  }


  /**
   * glGetShaderSourceARB
   *
   * @param GLhandleARB obj
   * @param GLsizei maxLength
   * @param GLsizei *length
   * @param GLcharARB *source
   * @return void
   */
  Handle<Value> gl_glGetShaderSourceARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetShaderSourceARB is not implemented!")));
  }


  /**
   * glBindAttribLocationARB
   *
   * @param GLhandleARB programObj
   * @param GLuint index
   * @param const GLcharARB *name
   * @return void
   */
  Handle<Value> gl_glBindAttribLocationARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glBindAttribLocationARB is not implemented!")));
  }


  /**
   * glGetActiveAttribARB
   *
   * @param GLhandleARB programObj
   * @param GLuint index
   * @param GLsizei maxLength
   * @param GLsizei *length
   * @param GLint *size
   * @param GLenum *type
   * @param GLcharARB *name
   * @return void
   */
  Handle<Value> gl_glGetActiveAttribARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetActiveAttribARB is not implemented!")));
  }


  /**
   * glGetAttribLocationARB
   *
   * @param GLhandleARB programObj
   * @param const GLcharARB *name
   * @return GLint
   */
  Handle<Value> gl_glGetAttribLocationARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetAttribLocationARB is not implemented!")));
  }


  /**
   * glBindBufferARB
   *
   * @param GLenum target
   * @param GLuint buffer
   * @return void
   */
  Handle<Value> gl_glBindBufferARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _buffer = (GLuint)args[1]->Uint32Value();
    glBindBufferARB(_target, _buffer);

    return Undefined();
  }


  /**
   * glDeleteBuffersARB
   *
   * @param GLsizei n
   * @param const GLuint *buffers
   * @return void
   */
  Handle<Value> gl_glDeleteBuffersARB(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    const GLuint _buffers = (GLuint)args[1]->Uint32Value();
    glDeleteBuffersARB(_n, &_buffers);

    args[1] = Number::New(_buffers);

    return Undefined();
  }


  /**
   * glGenBuffersARB
   *
   * @param GLsizei n
   * @param GLuint *buffers
   * @return void
   */
  Handle<Value> gl_glGenBuffersARB(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    GLuint _buffers = (GLuint)args[1]->Uint32Value();
    glGenBuffersARB(_n, &_buffers);

    args[1] = Number::New(_buffers);

    return Undefined();
  }


  /**
   * glIsBufferARB
   *
   * @param GLuint buffer
   * @return GLboolean
   */
  Handle<Value> gl_glIsBufferARB(const Arguments& args) {
    HandleScope scope;
    GLuint _buffer = (GLuint)args[0]->Uint32Value();
    GLboolean _ret = glIsBufferARB(_buffer);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glBufferDataARB
   *
   * @param GLenum target
   * @param GLsizeiptrARB size
   * @param const GLvoid *data
   * @param GLenum usage
   * @return void
   */
  Handle<Value> gl_glBufferDataARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glBufferDataARB is not implemented!")));
  }


  /**
   * glBufferSubDataARB
   *
   * @param GLenum target
   * @param GLintptrARB offset
   * @param GLsizeiptrARB size
   * @param const GLvoid *data
   * @return void
   */
  Handle<Value> gl_glBufferSubDataARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glBufferSubDataARB is not implemented!")));
  }


  /**
   * glGetBufferSubDataARB
   *
   * @param GLenum target
   * @param GLintptrARB offset
   * @param GLsizeiptrARB size
   * @param GLvoid *data
   * @return void
   */
  Handle<Value> gl_glGetBufferSubDataARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetBufferSubDataARB is not implemented!")));
  }


  /**
   * glUnmapBufferARB
   *
   * @param GLenum target
   * @return GLboolean
   */
  Handle<Value> gl_glUnmapBufferARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLboolean _ret = glUnmapBufferARB(_target);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glGetBufferParameterivARB
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetBufferParameterivARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetBufferParameterivARB(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetBufferPointervARB
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLvoid **params
   * @return void
   */
  Handle<Value> gl_glGetBufferPointervARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * params_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    GLvoid *_params = (GLvoid *)params_buffer->data();
    glGetBufferPointervARB(_target, _pname, &_params);

    return Undefined();
  }


  /**
   * glDrawBuffersARB
   *
   * @param GLsizei n
   * @param const GLenum *bufs
   * @return void
   */
  Handle<Value> gl_glDrawBuffersARB(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    const GLenum _bufs = (GLenum)args[1]->Int32Value();
    glDrawBuffersARB(_n, &_bufs);

    args[1] = Number::New(_bufs);

    return Undefined();
  }


  /**
   * glClampColorARB
   *
   * @param GLenum target
   * @param GLenum clamp
   * @return void
   */
  Handle<Value> gl_glClampColorARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _clamp = (GLenum)args[1]->Int32Value();
    glClampColorARB(_target, _clamp);

    return Undefined();
  }


  /**
   * glBlendColorEXT
   *
   * @param GLclampf
   * @param GLclampf
   * @param GLclampf
   * @param GLclampf
   * @return void
   */
  Handle<Value> gl_glBlendColorEXT(const Arguments& args) {
    HandleScope scope;
    GLclampf _arg0 = (GLclampf)args[0]->NumberValue();
    GLclampf _arg1 = (GLclampf)args[1]->NumberValue();
    GLclampf _arg2 = (GLclampf)args[2]->NumberValue();
    GLclampf _arg3 = (GLclampf)args[3]->NumberValue();
    glBlendColorEXT(_arg0, _arg1, _arg2, _arg3);

    return Undefined();
  }


  /**
   * glBlendEquationEXT
   *
   * @param GLenum
   * @return void
   */
  Handle<Value> gl_glBlendEquationEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    glBlendEquationEXT(_arg0);

    return Undefined();
  }


  /**
   * glLockArraysEXT
   *
   * @param GLint
   * @param GLsizei
   * @return void
   */
  Handle<Value> gl_glLockArraysEXT(const Arguments& args) {
    HandleScope scope;
    GLint _arg0 = (GLint)args[0]->Int32Value();
    GLsizei _arg1 = (GLsizei)args[1]->Int32Value();
    glLockArraysEXT(_arg0, _arg1);

    return Undefined();
  }


  /**
   * glUnlockArraysEXT
   *
   * @return void
   */
  Handle<Value> gl_glUnlockArraysEXT(const Arguments& args) {
    glUnlockArraysEXT();
    return Undefined();
  }


  /**
   * glDrawRangeElementsEXT
   *
   * @param GLenum
   * @param GLuint
   * @param GLuint
   * @param GLsizei
   * @param GLenum
   * @param const GLvoid *
   * @return void
   */
  Handle<Value> gl_glDrawRangeElementsEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLuint _arg1 = (GLuint)args[1]->Uint32Value();
    GLuint _arg2 = (GLuint)args[2]->Uint32Value();
    GLsizei _arg3 = (GLsizei)args[3]->Int32Value();
    GLenum _arg4 = (GLenum)args[4]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[5])) {
        return ThrowException(Exception::Error(
                              String::New("5nth argument needs to be a buffer")));
    }
    Buffer * arg5_buffer = ObjectWrap::Unwrap<Buffer>(args[5]->ToObject());
    const GLvoid *_arg5 = (GLvoid *)arg5_buffer->data();
    glDrawRangeElementsEXT(_arg0, _arg1, _arg2, _arg3, _arg4, _arg5);

    return Undefined();
  }


  /**
   * glSecondaryColor3bEXT
   *
   * @param GLbyte
   * @param GLbyte
   * @param GLbyte
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3bEXT(const Arguments& args) {
    HandleScope scope;
    GLbyte _arg0 = (GLbyte)args[0]->Int32Value();
    GLbyte _arg1 = (GLbyte)args[1]->Int32Value();
    GLbyte _arg2 = (GLbyte)args[2]->Int32Value();
    glSecondaryColor3bEXT(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glSecondaryColor3bvEXT
   *
   * @param const GLbyte *
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3bvEXT(const Arguments& args) {
    HandleScope scope;
    const GLbyte _arg0 = (GLbyte)args[0]->Int32Value();
    glSecondaryColor3bvEXT(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glSecondaryColor3dEXT
   *
   * @param GLdouble
   * @param GLdouble
   * @param GLdouble
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3dEXT(const Arguments& args) {
    HandleScope scope;
    GLdouble _arg0 = (GLdouble)args[0]->NumberValue();
    GLdouble _arg1 = (GLdouble)args[1]->NumberValue();
    GLdouble _arg2 = (GLdouble)args[2]->NumberValue();
    glSecondaryColor3dEXT(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glSecondaryColor3dvEXT
   *
   * @param const GLdouble *
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3dvEXT(const Arguments& args) {
    HandleScope scope;
    const GLdouble _arg0 = (GLdouble)args[0]->NumberValue();
    glSecondaryColor3dvEXT(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glSecondaryColor3fEXT
   *
   * @param GLfloat
   * @param GLfloat
   * @param GLfloat
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3fEXT(const Arguments& args) {
    HandleScope scope;
    GLfloat _arg0 = (GLfloat)args[0]->NumberValue();
    GLfloat _arg1 = (GLfloat)args[1]->NumberValue();
    GLfloat _arg2 = (GLfloat)args[2]->NumberValue();
    glSecondaryColor3fEXT(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glSecondaryColor3fvEXT
   *
   * @param const GLfloat *
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3fvEXT(const Arguments& args) {
    HandleScope scope;
    const GLfloat _arg0 = (GLfloat)args[0]->NumberValue();
    glSecondaryColor3fvEXT(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glSecondaryColor3iEXT
   *
   * @param GLint
   * @param GLint
   * @param GLint
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3iEXT(const Arguments& args) {
    HandleScope scope;
    GLint _arg0 = (GLint)args[0]->Int32Value();
    GLint _arg1 = (GLint)args[1]->Int32Value();
    GLint _arg2 = (GLint)args[2]->Int32Value();
    glSecondaryColor3iEXT(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glSecondaryColor3ivEXT
   *
   * @param const GLint *
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3ivEXT(const Arguments& args) {
    HandleScope scope;
    const GLint _arg0 = (GLint)args[0]->Int32Value();
    glSecondaryColor3ivEXT(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glSecondaryColor3sEXT
   *
   * @param GLshort
   * @param GLshort
   * @param GLshort
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3sEXT(const Arguments& args) {
    HandleScope scope;
    GLshort _arg0 = (GLshort)args[0]->Int32Value();
    GLshort _arg1 = (GLshort)args[1]->Int32Value();
    GLshort _arg2 = (GLshort)args[2]->Int32Value();
    glSecondaryColor3sEXT(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glSecondaryColor3svEXT
   *
   * @param const GLshort *
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3svEXT(const Arguments& args) {
    HandleScope scope;
    const GLshort _arg0 = (GLshort)args[0]->Int32Value();
    glSecondaryColor3svEXT(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glSecondaryColor3ubEXT
   *
   * @param GLubyte
   * @param GLubyte
   * @param GLubyte
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3ubEXT(const Arguments& args) {
    HandleScope scope;
    GLubyte _arg0 = (GLubyte)args[0]->Int32Value();
    GLubyte _arg1 = (GLubyte)args[1]->Int32Value();
    GLubyte _arg2 = (GLubyte)args[2]->Int32Value();
    glSecondaryColor3ubEXT(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glSecondaryColor3ubvEXT
   *
   * @param const GLubyte *
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3ubvEXT(const Arguments& args) {
    HandleScope scope;
    const GLubyte _arg0 = (GLubyte)args[0]->Int32Value();
    glSecondaryColor3ubvEXT(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glSecondaryColor3uiEXT
   *
   * @param GLuint
   * @param GLuint
   * @param GLuint
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3uiEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _arg0 = (GLuint)args[0]->Uint32Value();
    GLuint _arg1 = (GLuint)args[1]->Uint32Value();
    GLuint _arg2 = (GLuint)args[2]->Uint32Value();
    glSecondaryColor3uiEXT(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glSecondaryColor3uivEXT
   *
   * @param const GLuint *
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3uivEXT(const Arguments& args) {
    HandleScope scope;
    const GLuint _arg0 = (GLuint)args[0]->Uint32Value();
    glSecondaryColor3uivEXT(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glSecondaryColor3usEXT
   *
   * @param GLushort
   * @param GLushort
   * @param GLushort
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3usEXT(const Arguments& args) {
    HandleScope scope;
    GLushort _arg0 = (GLushort)args[0]->Uint32Value();
    GLushort _arg1 = (GLushort)args[1]->Uint32Value();
    GLushort _arg2 = (GLushort)args[2]->Uint32Value();
    glSecondaryColor3usEXT(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glSecondaryColor3usvEXT
   *
   * @param const GLushort *
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3usvEXT(const Arguments& args) {
    HandleScope scope;
    const GLushort _arg0 = (GLushort)args[0]->Uint32Value();
    glSecondaryColor3usvEXT(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glSecondaryColorPointerEXT
   *
   * @param GLint
   * @param GLenum
   * @param GLsizei
   * @param const GLvoid *
   * @return void
   */
  Handle<Value> gl_glSecondaryColorPointerEXT(const Arguments& args) {
    HandleScope scope;
    GLint _arg0 = (GLint)args[0]->Int32Value();
    GLenum _arg1 = (GLenum)args[1]->Int32Value();
    GLsizei _arg2 = (GLsizei)args[2]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[3])) {
        return ThrowException(Exception::Error(
                              String::New("3nth argument needs to be a buffer")));
    }
    Buffer * arg3_buffer = ObjectWrap::Unwrap<Buffer>(args[3]->ToObject());
    const GLvoid *_arg3 = (GLvoid *)arg3_buffer->data();
    glSecondaryColorPointerEXT(_arg0, _arg1, _arg2, _arg3);

    return Undefined();
  }


  /**
   * glMultiDrawArraysEXT
   *
   * @param GLenum
   * @param const GLint *
   * @param const GLsizei *
   * @param GLsizei
   * @return void
   */
  Handle<Value> gl_glMultiDrawArraysEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLint _arg1 = (GLint)args[1]->Int32Value();
    const GLsizei _arg2 = (GLsizei)args[2]->Int32Value();
    GLsizei _arg3 = (GLsizei)args[3]->Int32Value();
    glMultiDrawArraysEXT(_arg0, &_arg1, &_arg2, _arg3);

    args[1] = Number::New(_arg1);

    args[2] = Number::New(_arg2);

    return Undefined();
  }


  /**
   * glMultiDrawElementsEXT
   *
   * @param GLenum
   * @param const GLsizei *
   * @param GLenum
   * @param const GLvoid* *
   * @param GLsizei
   * @return void
   */
  Handle<Value> gl_glMultiDrawElementsEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    const GLsizei _arg1 = (GLsizei)args[1]->Int32Value();
    GLenum _arg2 = (GLenum)args[2]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[3])) {
        return ThrowException(Exception::Error(
                              String::New("3nth argument needs to be a buffer")));
    }
    Buffer * arg3_buffer = ObjectWrap::Unwrap<Buffer>(args[3]->ToObject());
    const GLvoid *_arg3 = (GLvoid *)arg3_buffer->data();
    GLsizei _arg4 = (GLsizei)args[4]->Int32Value();
    glMultiDrawElementsEXT(_arg0, &_arg1, _arg2, &_arg3, _arg4);

    args[1] = Number::New(_arg1);

    return Undefined();
  }


  /**
   * glFogCoordfEXT
   *
   * @param GLfloat
   * @return void
   */
  Handle<Value> gl_glFogCoordfEXT(const Arguments& args) {
    HandleScope scope;
    GLfloat _arg0 = (GLfloat)args[0]->NumberValue();
    glFogCoordfEXT(_arg0);

    return Undefined();
  }


  /**
   * glFogCoordfvEXT
   *
   * @param const GLfloat *
   * @return void
   */
  Handle<Value> gl_glFogCoordfvEXT(const Arguments& args) {
    HandleScope scope;
    const GLfloat _arg0 = (GLfloat)args[0]->NumberValue();
    glFogCoordfvEXT(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glFogCoorddEXT
   *
   * @param GLdouble
   * @return void
   */
  Handle<Value> gl_glFogCoorddEXT(const Arguments& args) {
    HandleScope scope;
    GLdouble _arg0 = (GLdouble)args[0]->NumberValue();
    glFogCoorddEXT(_arg0);

    return Undefined();
  }


  /**
   * glFogCoorddvEXT
   *
   * @param const GLdouble *
   * @return void
   */
  Handle<Value> gl_glFogCoorddvEXT(const Arguments& args) {
    HandleScope scope;
    const GLdouble _arg0 = (GLdouble)args[0]->NumberValue();
    glFogCoorddvEXT(&_arg0);

    args[0] = Number::New(_arg0);

    return Undefined();
  }


  /**
   * glFogCoordPointerEXT
   *
   * @param GLenum
   * @param GLsizei
   * @param const GLvoid *
   * @return void
   */
  Handle<Value> gl_glFogCoordPointerEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLsizei _arg1 = (GLsizei)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * arg2_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    const GLvoid *_arg2 = (GLvoid *)arg2_buffer->data();
    glFogCoordPointerEXT(_arg0, _arg1, _arg2);

    return Undefined();
  }


  /**
   * glBlendFuncSeparateEXT
   *
   * @param GLenum
   * @param GLenum
   * @param GLenum
   * @param GLenum
   * @return void
   */
  Handle<Value> gl_glBlendFuncSeparateEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _arg0 = (GLenum)args[0]->Int32Value();
    GLenum _arg1 = (GLenum)args[1]->Int32Value();
    GLenum _arg2 = (GLenum)args[2]->Int32Value();
    GLenum _arg3 = (GLenum)args[3]->Int32Value();
    glBlendFuncSeparateEXT(_arg0, _arg1, _arg2, _arg3);

    return Undefined();
  }


  /**
   * glActiveStencilFaceEXT
   *
   * @param GLenum face
   * @return void
   */
  Handle<Value> gl_glActiveStencilFaceEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _face = (GLenum)args[0]->Int32Value();
    glActiveStencilFaceEXT(_face);

    return Undefined();
  }


  /**
   * glDepthBoundsEXT
   *
   * @param GLclampd zmin
   * @param GLclampd zmax
   * @return void
   */
  Handle<Value> gl_glDepthBoundsEXT(const Arguments& args) {
    HandleScope scope;
    GLclampd _zmin = (GLclampd)args[0]->NumberValue();
    GLclampd _zmax = (GLclampd)args[1]->NumberValue();
    glDepthBoundsEXT(_zmin, _zmax);

    return Undefined();
  }


  /**
   * glBlendEquationSeparateEXT
   *
   * @param GLenum modeRGB
   * @param GLenum modeAlpha
   * @return void
   */
  Handle<Value> gl_glBlendEquationSeparateEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _modeRGB = (GLenum)args[0]->Int32Value();
    GLenum _modeAlpha = (GLenum)args[1]->Int32Value();
    glBlendEquationSeparateEXT(_modeRGB, _modeAlpha);

    return Undefined();
  }


  /**
   * glIsRenderbufferEXT
   *
   * @param GLuint renderbuffer
   * @return GLboolean
   */
  Handle<Value> gl_glIsRenderbufferEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _renderbuffer = (GLuint)args[0]->Uint32Value();
    GLboolean _ret = glIsRenderbufferEXT(_renderbuffer);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glBindRenderbufferEXT
   *
   * @param GLenum target
   * @param GLuint renderbuffer
   * @return void
   */
  Handle<Value> gl_glBindRenderbufferEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _renderbuffer = (GLuint)args[1]->Uint32Value();
    glBindRenderbufferEXT(_target, _renderbuffer);

    return Undefined();
  }


  /**
   * glDeleteRenderbuffersEXT
   *
   * @param GLsizei n
   * @param const GLuint *renderbuffers
   * @return void
   */
  Handle<Value> gl_glDeleteRenderbuffersEXT(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    const GLuint _renderbuffers = (GLuint)args[1]->Uint32Value();
    glDeleteRenderbuffersEXT(_n, &_renderbuffers);

    args[1] = Number::New(_renderbuffers);

    return Undefined();
  }


  /**
   * glGenRenderbuffersEXT
   *
   * @param GLsizei n
   * @param GLuint *renderbuffers
   * @return void
   */
  Handle<Value> gl_glGenRenderbuffersEXT(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    GLuint _renderbuffers = (GLuint)args[1]->Uint32Value();
    glGenRenderbuffersEXT(_n, &_renderbuffers);

    args[1] = Number::New(_renderbuffers);

    return Undefined();
  }


  /**
   * glRenderbufferStorageEXT
   *
   * @param GLenum target
   * @param GLenum internalformat
   * @param GLsizei width
   * @param GLsizei height
   * @return void
   */
  Handle<Value> gl_glRenderbufferStorageEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _internalformat = (GLenum)args[1]->Int32Value();
    GLsizei _width = (GLsizei)args[2]->Int32Value();
    GLsizei _height = (GLsizei)args[3]->Int32Value();
    glRenderbufferStorageEXT(_target, _internalformat, _width, _height);

    return Undefined();
  }


  /**
   * glGetRenderbufferParameterivEXT
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetRenderbufferParameterivEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetRenderbufferParameterivEXT(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glIsFramebufferEXT
   *
   * @param GLuint framebuffer
   * @return GLboolean
   */
  Handle<Value> gl_glIsFramebufferEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _framebuffer = (GLuint)args[0]->Uint32Value();
    GLboolean _ret = glIsFramebufferEXT(_framebuffer);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glBindFramebufferEXT
   *
   * @param GLenum target
   * @param GLuint framebuffer
   * @return void
   */
  Handle<Value> gl_glBindFramebufferEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _framebuffer = (GLuint)args[1]->Uint32Value();
    glBindFramebufferEXT(_target, _framebuffer);

    return Undefined();
  }


  /**
   * glDeleteFramebuffersEXT
   *
   * @param GLsizei n
   * @param const GLuint *framebuffers
   * @return void
   */
  Handle<Value> gl_glDeleteFramebuffersEXT(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    const GLuint _framebuffers = (GLuint)args[1]->Uint32Value();
    glDeleteFramebuffersEXT(_n, &_framebuffers);

    args[1] = Number::New(_framebuffers);

    return Undefined();
  }


  /**
   * glGenFramebuffersEXT
   *
   * @param GLsizei n
   * @param GLuint *framebuffers
   * @return void
   */
  Handle<Value> gl_glGenFramebuffersEXT(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    GLuint _framebuffers = (GLuint)args[1]->Uint32Value();
    glGenFramebuffersEXT(_n, &_framebuffers);

    args[1] = Number::New(_framebuffers);

    return Undefined();
  }


  /**
   * glCheckFramebufferStatusEXT
   *
   * @param GLenum target
   * @return GLenum
   */
  Handle<Value> gl_glCheckFramebufferStatusEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _ret = glCheckFramebufferStatusEXT(_target);

    return scope.Close(Number::New(_ret));
  }


  /**
   * glFramebufferTexture1DEXT
   *
   * @param GLenum target
   * @param GLenum attachment
   * @param GLenum textarget
   * @param GLuint texture
   * @param GLint level
   * @return void
   */
  Handle<Value> gl_glFramebufferTexture1DEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _attachment = (GLenum)args[1]->Int32Value();
    GLenum _textarget = (GLenum)args[2]->Int32Value();
    GLuint _texture = (GLuint)args[3]->Uint32Value();
    GLint _level = (GLint)args[4]->Int32Value();
    glFramebufferTexture1DEXT(_target, _attachment, _textarget, _texture, _level);

    return Undefined();
  }


  /**
   * glFramebufferTexture2DEXT
   *
   * @param GLenum target
   * @param GLenum attachment
   * @param GLenum textarget
   * @param GLuint texture
   * @param GLint level
   * @return void
   */
  Handle<Value> gl_glFramebufferTexture2DEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _attachment = (GLenum)args[1]->Int32Value();
    GLenum _textarget = (GLenum)args[2]->Int32Value();
    GLuint _texture = (GLuint)args[3]->Uint32Value();
    GLint _level = (GLint)args[4]->Int32Value();
    glFramebufferTexture2DEXT(_target, _attachment, _textarget, _texture, _level);

    return Undefined();
  }


  /**
   * glFramebufferTexture3DEXT
   *
   * @param GLenum target
   * @param GLenum attachment
   * @param GLenum textarget
   * @param GLuint texture
   * @param GLint level
   * @param GLint zoffset
   * @return void
   */
  Handle<Value> gl_glFramebufferTexture3DEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _attachment = (GLenum)args[1]->Int32Value();
    GLenum _textarget = (GLenum)args[2]->Int32Value();
    GLuint _texture = (GLuint)args[3]->Uint32Value();
    GLint _level = (GLint)args[4]->Int32Value();
    GLint _zoffset = (GLint)args[5]->Int32Value();
    glFramebufferTexture3DEXT(_target, _attachment, _textarget, _texture, _level, _zoffset);

    return Undefined();
  }


  /**
   * glFramebufferRenderbufferEXT
   *
   * @param GLenum target
   * @param GLenum attachment
   * @param GLenum renderbuffertarget
   * @param GLuint renderbuffer
   * @return void
   */
  Handle<Value> gl_glFramebufferRenderbufferEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _attachment = (GLenum)args[1]->Int32Value();
    GLenum _renderbuffertarget = (GLenum)args[2]->Int32Value();
    GLuint _renderbuffer = (GLuint)args[3]->Uint32Value();
    glFramebufferRenderbufferEXT(_target, _attachment, _renderbuffertarget, _renderbuffer);

    return Undefined();
  }


  /**
   * glGetFramebufferAttachmentParameterivEXT
   *
   * @param GLenum target
   * @param GLenum attachment
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetFramebufferAttachmentParameterivEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _attachment = (GLenum)args[1]->Int32Value();
    GLenum _pname = (GLenum)args[2]->Int32Value();
    GLint _params = (GLint)args[3]->Int32Value();
    glGetFramebufferAttachmentParameterivEXT(_target, _attachment, _pname, &_params);

    args[3] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGenerateMipmapEXT
   *
   * @param GLenum target
   * @return void
   */
  Handle<Value> gl_glGenerateMipmapEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    glGenerateMipmapEXT(_target);

    return Undefined();
  }


  /**
   * glBlitFramebufferEXT
   *
   * @param GLint srcX0
   * @param GLint srcY0
   * @param GLint srcX1
   * @param GLint srcY1
   * @param GLint dstX0
   * @param GLint dstY0
   * @param GLint dstX1
   * @param GLint dstY1
   * @param GLbitfield mask
   * @param GLenum filter
   * @return void
   */
  Handle<Value> gl_glBlitFramebufferEXT(const Arguments& args) {
    HandleScope scope;
    GLint _srcX0 = (GLint)args[0]->Int32Value();
    GLint _srcY0 = (GLint)args[1]->Int32Value();
    GLint _srcX1 = (GLint)args[2]->Int32Value();
    GLint _srcY1 = (GLint)args[3]->Int32Value();
    GLint _dstX0 = (GLint)args[4]->Int32Value();
    GLint _dstY0 = (GLint)args[5]->Int32Value();
    GLint _dstX1 = (GLint)args[6]->Int32Value();
    GLint _dstY1 = (GLint)args[7]->Int32Value();
    GLbitfield _mask = (GLbitfield)args[8]->Uint32Value();
    GLenum _filter = (GLenum)args[9]->Int32Value();
    glBlitFramebufferEXT(_srcX0, _srcY0, _srcX1, _srcY1, _dstX0, _dstY0, _dstX1, _dstY1, _mask, _filter);

    return Undefined();
  }


  /**
   * glRenderbufferStorageMultisampleEXT
   *
   * @param GLenum target
   * @param GLsizei samples
   * @param GLenum internalformat
   * @param GLsizei width
   * @param GLsizei height
   * @return void
   */
  Handle<Value> gl_glRenderbufferStorageMultisampleEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLsizei _samples = (GLsizei)args[1]->Int32Value();
    GLenum _internalformat = (GLenum)args[2]->Int32Value();
    GLsizei _width = (GLsizei)args[3]->Int32Value();
    GLsizei _height = (GLsizei)args[4]->Int32Value();
    glRenderbufferStorageMultisampleEXT(_target, _samples, _internalformat, _width, _height);

    return Undefined();
  }


  /**
   * glProgramParameteriEXT
   *
   * @param GLuint program
   * @param GLenum pname
   * @param GLint value
   * @return void
   */
  Handle<Value> gl_glProgramParameteriEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _value = (GLint)args[2]->Int32Value();
    glProgramParameteriEXT(_program, _pname, _value);

    return Undefined();
  }


  /**
   * glFramebufferTextureEXT
   *
   * @param GLenum target
   * @param GLenum attachment
   * @param GLuint texture
   * @param GLint level
   * @return void
   */
  Handle<Value> gl_glFramebufferTextureEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _attachment = (GLenum)args[1]->Int32Value();
    GLuint _texture = (GLuint)args[2]->Uint32Value();
    GLint _level = (GLint)args[3]->Int32Value();
    glFramebufferTextureEXT(_target, _attachment, _texture, _level);

    return Undefined();
  }


  /**
   * glFramebufferTextureLayerEXT
   *
   * @param GLenum target
   * @param GLenum attachment
   * @param GLuint texture
   * @param GLint level
   * @param GLint layer
   * @return void
   */
  Handle<Value> gl_glFramebufferTextureLayerEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _attachment = (GLenum)args[1]->Int32Value();
    GLuint _texture = (GLuint)args[2]->Uint32Value();
    GLint _level = (GLint)args[3]->Int32Value();
    GLint _layer = (GLint)args[4]->Int32Value();
    glFramebufferTextureLayerEXT(_target, _attachment, _texture, _level, _layer);

    return Undefined();
  }


  /**
   * glFramebufferTextureFaceEXT
   *
   * @param GLenum target
   * @param GLenum attachment
   * @param GLuint texture
   * @param GLint level
   * @param GLenum face
   * @return void
   */
  Handle<Value> gl_glFramebufferTextureFaceEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _attachment = (GLenum)args[1]->Int32Value();
    GLuint _texture = (GLuint)args[2]->Uint32Value();
    GLint _level = (GLint)args[3]->Int32Value();
    GLenum _face = (GLenum)args[4]->Int32Value();
    glFramebufferTextureFaceEXT(_target, _attachment, _texture, _level, _face);

    return Undefined();
  }


  /**
   * glBindBufferRangeEXT
   *
   * @param GLenum target
   * @param GLuint index
   * @param GLuint buffer
   * @param GLintptr offset
   * @param GLsizeiptr size
   * @return void
   */
  Handle<Value> gl_glBindBufferRangeEXT(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glBindBufferRangeEXT is not implemented!")));
  }


  /**
   * glBindBufferOffsetEXT
   *
   * @param GLenum target
   * @param GLuint index
   * @param GLuint buffer
   * @param GLintptr offset
   * @return void
   */
  Handle<Value> gl_glBindBufferOffsetEXT(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glBindBufferOffsetEXT is not implemented!")));
  }


  /**
   * glBindBufferBaseEXT
   *
   * @param GLenum target
   * @param GLuint index
   * @param GLuint buffer
   * @return void
   */
  Handle<Value> gl_glBindBufferBaseEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    GLuint _buffer = (GLuint)args[2]->Uint32Value();
    glBindBufferBaseEXT(_target, _index, _buffer);

    return Undefined();
  }


  /**
   * glBeginTransformFeedbackEXT
   *
   * @param GLenum primitiveMode
   * @return void
   */
  Handle<Value> gl_glBeginTransformFeedbackEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _primitiveMode = (GLenum)args[0]->Int32Value();
    glBeginTransformFeedbackEXT(_primitiveMode);

    return Undefined();
  }


  /**
   * glEndTransformFeedbackEXT
   *
   * @return void
   */
  Handle<Value> gl_glEndTransformFeedbackEXT(const Arguments& args) {
    glEndTransformFeedbackEXT();
    return Undefined();
  }


  /**
   * glTransformFeedbackVaryingsEXT
   *
   * @param GLuint program
   * @param GLsizei count
   * @param const GLchar **varyings
   * @param GLenum bufferMode
   * @return void
   */
  Handle<Value> gl_glTransformFeedbackVaryingsEXT(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glTransformFeedbackVaryingsEXT is not implemented!")));
  }


  /**
   * glGetTransformFeedbackVaryingEXT
   *
   * @param GLuint program
   * @param GLuint index
   * @param GLsizei bufSize
   * @param GLsizei *length
   * @param GLsizei *size
   * @param GLenum *type
   * @param GLchar *name
   * @return void
   */
  Handle<Value> gl_glGetTransformFeedbackVaryingEXT(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetTransformFeedbackVaryingEXT is not implemented!")));
  }


  /**
   * glGetIntegerIndexedvEXT
   *
   * @param GLenum param
   * @param GLuint index
   * @param GLint *values
   * @return void
   */
  Handle<Value> gl_glGetIntegerIndexedvEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _param = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    GLint _values = (GLint)args[2]->Int32Value();
    glGetIntegerIndexedvEXT(_param, _index, &_values);

    args[2] = Number::New(_values);

    return Undefined();
  }


  /**
   * glGetBooleanIndexedvEXT
   *
   * @param GLenum param
   * @param GLuint index
   * @param GLboolean *values
   * @return void
   */
  Handle<Value> gl_glGetBooleanIndexedvEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _param = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    GLboolean _values = (GLboolean)args[2]->Int32Value();
    glGetBooleanIndexedvEXT(_param, _index, &_values);

    args[2] = Number::New(_values);

    return Undefined();
  }


  /**
   * glUniformBufferEXT
   *
   * @param GLuint program
   * @param GLint location
   * @param GLuint buffer
   * @return void
   */
  Handle<Value> gl_glUniformBufferEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    GLint _location = (GLint)args[1]->Int32Value();
    GLuint _buffer = (GLuint)args[2]->Uint32Value();
    glUniformBufferEXT(_program, _location, _buffer);

    return Undefined();
  }


  /**
   * glGetUniformBufferSizeEXT
   *
   * @param GLuint program
   * @param GLint location
   * @return GLint
   */
  Handle<Value> gl_glGetUniformBufferSizeEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    GLint _location = (GLint)args[1]->Int32Value();
    GLint _ret = glGetUniformBufferSizeEXT(_program, _location);

    return scope.Close(Number::New(_ret));
  }


  /**
   * glGetUniformOffsetEXT
   *
   * @param GLuint program
   * @param GLint location
   * @return GLintptr
   */
  Handle<Value> gl_glGetUniformOffsetEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    GLint _location = (GLint)args[1]->Int32Value();
    GLintptr _ret = glGetUniformOffsetEXT(_program, _location);

    return Undefined();
  }


  /**
   * glClearColorIiEXT
   *
   * @param GLint r
   * @param GLint g
   * @param GLint b
   * @param GLint a
   * @return void
   */
  Handle<Value> gl_glClearColorIiEXT(const Arguments& args) {
    HandleScope scope;
    GLint _r = (GLint)args[0]->Int32Value();
    GLint _g = (GLint)args[1]->Int32Value();
    GLint _b = (GLint)args[2]->Int32Value();
    GLint _a = (GLint)args[3]->Int32Value();
    glClearColorIiEXT(_r, _g, _b, _a);

    return Undefined();
  }


  /**
   * glClearColorIuiEXT
   *
   * @param GLuint r
   * @param GLuint g
   * @param GLuint b
   * @param GLuint a
   * @return void
   */
  Handle<Value> gl_glClearColorIuiEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _r = (GLuint)args[0]->Uint32Value();
    GLuint _g = (GLuint)args[1]->Uint32Value();
    GLuint _b = (GLuint)args[2]->Uint32Value();
    GLuint _a = (GLuint)args[3]->Uint32Value();
    glClearColorIuiEXT(_r, _g, _b, _a);

    return Undefined();
  }


  /**
   * glTexParameterIivEXT
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glTexParameterIivEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glTexParameterIivEXT(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glTexParameterIuivEXT
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLuint *params
   * @return void
   */
  Handle<Value> gl_glTexParameterIuivEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLuint _params = (GLuint)args[2]->Uint32Value();
    glTexParameterIuivEXT(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetTexParameterIivEXT
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetTexParameterIivEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetTexParameterIivEXT(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetTexParameterIuivEXT
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLuint *params
   * @return void
   */
  Handle<Value> gl_glGetTexParameterIuivEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLuint _params = (GLuint)args[2]->Uint32Value();
    glGetTexParameterIuivEXT(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glVertexAttribI1iEXT
   *
   * @param GLuint index
   * @param GLint x
   * @return void
   */
  Handle<Value> gl_glVertexAttribI1iEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLint _x = (GLint)args[1]->Int32Value();
    glVertexAttribI1iEXT(_index, _x);

    return Undefined();
  }


  /**
   * glVertexAttribI2iEXT
   *
   * @param GLuint index
   * @param GLint x
   * @param GLint y
   * @return void
   */
  Handle<Value> gl_glVertexAttribI2iEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLint _x = (GLint)args[1]->Int32Value();
    GLint _y = (GLint)args[2]->Int32Value();
    glVertexAttribI2iEXT(_index, _x, _y);

    return Undefined();
  }


  /**
   * glVertexAttribI3iEXT
   *
   * @param GLuint index
   * @param GLint x
   * @param GLint y
   * @param GLint z
   * @return void
   */
  Handle<Value> gl_glVertexAttribI3iEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLint _x = (GLint)args[1]->Int32Value();
    GLint _y = (GLint)args[2]->Int32Value();
    GLint _z = (GLint)args[3]->Int32Value();
    glVertexAttribI3iEXT(_index, _x, _y, _z);

    return Undefined();
  }


  /**
   * glVertexAttribI4iEXT
   *
   * @param GLuint index
   * @param GLint x
   * @param GLint y
   * @param GLint z
   * @param GLint w
   * @return void
   */
  Handle<Value> gl_glVertexAttribI4iEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLint _x = (GLint)args[1]->Int32Value();
    GLint _y = (GLint)args[2]->Int32Value();
    GLint _z = (GLint)args[3]->Int32Value();
    GLint _w = (GLint)args[4]->Int32Value();
    glVertexAttribI4iEXT(_index, _x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glVertexAttribI1uiEXT
   *
   * @param GLuint index
   * @param GLuint x
   * @return void
   */
  Handle<Value> gl_glVertexAttribI1uiEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLuint _x = (GLuint)args[1]->Uint32Value();
    glVertexAttribI1uiEXT(_index, _x);

    return Undefined();
  }


  /**
   * glVertexAttribI2uiEXT
   *
   * @param GLuint index
   * @param GLuint x
   * @param GLuint y
   * @return void
   */
  Handle<Value> gl_glVertexAttribI2uiEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLuint _x = (GLuint)args[1]->Uint32Value();
    GLuint _y = (GLuint)args[2]->Uint32Value();
    glVertexAttribI2uiEXT(_index, _x, _y);

    return Undefined();
  }


  /**
   * glVertexAttribI3uiEXT
   *
   * @param GLuint index
   * @param GLuint x
   * @param GLuint y
   * @param GLuint z
   * @return void
   */
  Handle<Value> gl_glVertexAttribI3uiEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLuint _x = (GLuint)args[1]->Uint32Value();
    GLuint _y = (GLuint)args[2]->Uint32Value();
    GLuint _z = (GLuint)args[3]->Uint32Value();
    glVertexAttribI3uiEXT(_index, _x, _y, _z);

    return Undefined();
  }


  /**
   * glVertexAttribI4uiEXT
   *
   * @param GLuint index
   * @param GLuint x
   * @param GLuint y
   * @param GLuint z
   * @param GLuint w
   * @return void
   */
  Handle<Value> gl_glVertexAttribI4uiEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLuint _x = (GLuint)args[1]->Uint32Value();
    GLuint _y = (GLuint)args[2]->Uint32Value();
    GLuint _z = (GLuint)args[3]->Uint32Value();
    GLuint _w = (GLuint)args[4]->Uint32Value();
    glVertexAttribI4uiEXT(_index, _x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glVertexAttribI1ivEXT
   *
   * @param GLuint index
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glVertexAttribI1ivEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
    glVertexAttribI1ivEXT(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttribI2ivEXT
   *
   * @param GLuint index
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glVertexAttribI2ivEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
    glVertexAttribI2ivEXT(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttribI3ivEXT
   *
   * @param GLuint index
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glVertexAttribI3ivEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
    glVertexAttribI3ivEXT(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttribI4ivEXT
   *
   * @param GLuint index
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glVertexAttribI4ivEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
    glVertexAttribI4ivEXT(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttribI1uivEXT
   *
   * @param GLuint index
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> gl_glVertexAttribI1uivEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLuint _v = (GLuint)args[1]->Uint32Value();
    glVertexAttribI1uivEXT(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttribI2uivEXT
   *
   * @param GLuint index
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> gl_glVertexAttribI2uivEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLuint _v = (GLuint)args[1]->Uint32Value();
    glVertexAttribI2uivEXT(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttribI3uivEXT
   *
   * @param GLuint index
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> gl_glVertexAttribI3uivEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLuint _v = (GLuint)args[1]->Uint32Value();
    glVertexAttribI3uivEXT(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttribI4uivEXT
   *
   * @param GLuint index
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> gl_glVertexAttribI4uivEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLuint _v = (GLuint)args[1]->Uint32Value();
    glVertexAttribI4uivEXT(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttribI4bvEXT
   *
   * @param GLuint index
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> gl_glVertexAttribI4bvEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLbyte _v = (GLbyte)args[1]->Int32Value();
    glVertexAttribI4bvEXT(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttribI4svEXT
   *
   * @param GLuint index
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertexAttribI4svEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glVertexAttribI4svEXT(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttribI4ubvEXT
   *
   * @param GLuint index
   * @param const GLubyte *v
   * @return void
   */
  Handle<Value> gl_glVertexAttribI4ubvEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLubyte _v = (GLubyte)args[1]->Int32Value();
    glVertexAttribI4ubvEXT(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttribI4usvEXT
   *
   * @param GLuint index
   * @param const GLushort *v
   * @return void
   */
  Handle<Value> gl_glVertexAttribI4usvEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLushort _v = (GLushort)args[1]->Uint32Value();
    glVertexAttribI4usvEXT(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttribIPointerEXT
   *
   * @param GLuint index
   * @param GLint size
   * @param GLenum type
   * @param GLsizei stride
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> gl_glVertexAttribIPointerEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLint _size = (GLint)args[1]->Int32Value();
    GLenum _type = (GLenum)args[2]->Int32Value();
    GLsizei _stride = (GLsizei)args[3]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[4])) {
        return ThrowException(Exception::Error(
                              String::New("4nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[4]->ToObject());
    const GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glVertexAttribIPointerEXT(_index, _size, _type, _stride, _pointer);

    return Undefined();
  }


  /**
   * glGetVertexAttribIivEXT
   *
   * @param GLuint index
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetVertexAttribIivEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetVertexAttribIivEXT(_index, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetVertexAttribIuivEXT
   *
   * @param GLuint index
   * @param GLenum pname
   * @param GLuint *params
   * @return void
   */
  Handle<Value> gl_glGetVertexAttribIuivEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLuint _params = (GLuint)args[2]->Uint32Value();
    glGetVertexAttribIuivEXT(_index, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glUniform1uiEXT
   *
   * @param GLint location
   * @param GLuint v0
   * @return void
   */
  Handle<Value> gl_glUniform1uiEXT(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLuint _v0 = (GLuint)args[1]->Uint32Value();
    glUniform1uiEXT(_location, _v0);

    return Undefined();
  }


  /**
   * glUniform2uiEXT
   *
   * @param GLint location
   * @param GLuint v0
   * @param GLuint v1
   * @return void
   */
  Handle<Value> gl_glUniform2uiEXT(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLuint _v0 = (GLuint)args[1]->Uint32Value();
    GLuint _v1 = (GLuint)args[2]->Uint32Value();
    glUniform2uiEXT(_location, _v0, _v1);

    return Undefined();
  }


  /**
   * glUniform3uiEXT
   *
   * @param GLint location
   * @param GLuint v0
   * @param GLuint v1
   * @param GLuint v2
   * @return void
   */
  Handle<Value> gl_glUniform3uiEXT(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLuint _v0 = (GLuint)args[1]->Uint32Value();
    GLuint _v1 = (GLuint)args[2]->Uint32Value();
    GLuint _v2 = (GLuint)args[3]->Uint32Value();
    glUniform3uiEXT(_location, _v0, _v1, _v2);

    return Undefined();
  }


  /**
   * glUniform4uiEXT
   *
   * @param GLint location
   * @param GLuint v0
   * @param GLuint v1
   * @param GLuint v2
   * @param GLuint v3
   * @return void
   */
  Handle<Value> gl_glUniform4uiEXT(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLuint _v0 = (GLuint)args[1]->Uint32Value();
    GLuint _v1 = (GLuint)args[2]->Uint32Value();
    GLuint _v2 = (GLuint)args[3]->Uint32Value();
    GLuint _v3 = (GLuint)args[4]->Uint32Value();
    glUniform4uiEXT(_location, _v0, _v1, _v2, _v3);

    return Undefined();
  }


  /**
   * glUniform1uivEXT
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLuint *value
   * @return void
   */
  Handle<Value> gl_glUniform1uivEXT(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLuint _value = (GLuint)args[2]->Uint32Value();
    glUniform1uivEXT(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform2uivEXT
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLuint *value
   * @return void
   */
  Handle<Value> gl_glUniform2uivEXT(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLuint _value = (GLuint)args[2]->Uint32Value();
    glUniform2uivEXT(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform3uivEXT
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLuint *value
   * @return void
   */
  Handle<Value> gl_glUniform3uivEXT(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLuint _value = (GLuint)args[2]->Uint32Value();
    glUniform3uivEXT(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform4uivEXT
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLuint *value
   * @return void
   */
  Handle<Value> gl_glUniform4uivEXT(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLuint _value = (GLuint)args[2]->Uint32Value();
    glUniform4uivEXT(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glGetUniformuivEXT
   *
   * @param GLuint program
   * @param GLint location
   * @param GLuint *params
   * @return void
   */
  Handle<Value> gl_glGetUniformuivEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    GLint _location = (GLint)args[1]->Int32Value();
    GLuint _params = (GLuint)args[2]->Uint32Value();
    glGetUniformuivEXT(_program, _location, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glBindFragDataLocationEXT
   *
   * @param GLuint program
   * @param GLuint colorNumber
   * @param const GLchar *name
   * @return void
   */
  Handle<Value> gl_glBindFragDataLocationEXT(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glBindFragDataLocationEXT is not implemented!")));
  }


  /**
   * glGetFragDataLocationEXT
   *
   * @param GLuint program
   * @param const GLchar *name
   * @return GLint
   */
  Handle<Value> gl_glGetFragDataLocationEXT(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetFragDataLocationEXT is not implemented!")));
  }


  /**
   * glColorMaskIndexedEXT
   *
   * @param GLuint index
   * @param GLboolean r
   * @param GLboolean g
   * @param GLboolean b
   * @param GLboolean a
   * @return void
   */
  Handle<Value> gl_glColorMaskIndexedEXT(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLboolean _r = (GLboolean)args[1]->Int32Value();
    GLboolean _g = (GLboolean)args[2]->Int32Value();
    GLboolean _b = (GLboolean)args[3]->Int32Value();
    GLboolean _a = (GLboolean)args[4]->Int32Value();
    glColorMaskIndexedEXT(_index, _r, _g, _b, _a);

    return Undefined();
  }


  /**
   * glEnableIndexedEXT
   *
   * @param GLenum target
   * @param GLuint index
   * @return void
   */
  Handle<Value> gl_glEnableIndexedEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    glEnableIndexedEXT(_target, _index);

    return Undefined();
  }


  /**
   * glDisableIndexedEXT
   *
   * @param GLenum target
   * @param GLuint index
   * @return void
   */
  Handle<Value> gl_glDisableIndexedEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    glDisableIndexedEXT(_target, _index);

    return Undefined();
  }


  /**
   * glIsEnabledIndexedEXT
   *
   * @param GLenum target
   * @param GLuint index
   * @return GLboolean
   */
  Handle<Value> gl_glIsEnabledIndexedEXT(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _index = (GLuint)args[1]->Uint32Value();
    GLboolean _ret = glIsEnabledIndexedEXT(_target, _index);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glTextureRangeAPPLE
   *
   * @param GLenum target
   * @param GLsizei length
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> gl_glTextureRangeAPPLE(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLsizei _length = (GLsizei)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    const GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glTextureRangeAPPLE(_target, _length, _pointer);

    return Undefined();
  }


  /**
   * glGetTexParameterPointervAPPLE
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLvoid **params
   * @return void
   */
  Handle<Value> gl_glGetTexParameterPointervAPPLE(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * params_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    GLvoid *_params = (GLvoid *)params_buffer->data();
    glGetTexParameterPointervAPPLE(_target, _pname, &_params);

    return Undefined();
  }


  /**
   * glVertexArrayRangeAPPLE
   *
   * @param GLsizei length
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> gl_glVertexArrayRangeAPPLE(const Arguments& args) {
    HandleScope scope;
    GLsizei _length = (GLsizei)args[0]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[1])) {
        return ThrowException(Exception::Error(
                              String::New("1nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[1]->ToObject());
    const GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glVertexArrayRangeAPPLE(_length, _pointer);

    return Undefined();
  }


  /**
   * glFlushVertexArrayRangeAPPLE
   *
   * @param GLsizei length
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> gl_glFlushVertexArrayRangeAPPLE(const Arguments& args) {
    HandleScope scope;
    GLsizei _length = (GLsizei)args[0]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[1])) {
        return ThrowException(Exception::Error(
                              String::New("1nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[1]->ToObject());
    const GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glFlushVertexArrayRangeAPPLE(_length, _pointer);

    return Undefined();
  }


  /**
   * glVertexArrayParameteriAPPLE
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> gl_glVertexArrayParameteriAPPLE(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLint _param = (GLint)args[1]->Int32Value();
    glVertexArrayParameteriAPPLE(_pname, _param);

    return Undefined();
  }


  /**
   * glBindVertexArrayAPPLE
   *
   * @param GLuint id
   * @return void
   */
  Handle<Value> gl_glBindVertexArrayAPPLE(const Arguments& args) {
    HandleScope scope;
    GLuint _id = (GLuint)args[0]->Uint32Value();
    glBindVertexArrayAPPLE(_id);

    return Undefined();
  }


  /**
   * glDeleteVertexArraysAPPLE
   *
   * @param GLsizei n
   * @param const GLuint *ids
   * @return void
   */
  Handle<Value> gl_glDeleteVertexArraysAPPLE(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    const GLuint _ids = (GLuint)args[1]->Uint32Value();
    glDeleteVertexArraysAPPLE(_n, &_ids);

    args[1] = Number::New(_ids);

    return Undefined();
  }


  /**
   * glGenVertexArraysAPPLE
   *
   * @param GLsizei n
   * @param GLuint *ids
   * @return void
   */
  Handle<Value> gl_glGenVertexArraysAPPLE(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    GLuint _ids = (GLuint)args[1]->Uint32Value();
    glGenVertexArraysAPPLE(_n, &_ids);

    args[1] = Number::New(_ids);

    return Undefined();
  }


  /**
   * glIsVertexArrayAPPLE
   *
   * @param GLuint id
   * @return GLboolean
   */
  Handle<Value> gl_glIsVertexArrayAPPLE(const Arguments& args) {
    HandleScope scope;
    GLuint _id = (GLuint)args[0]->Uint32Value();
    GLboolean _ret = glIsVertexArrayAPPLE(_id);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glGenFencesAPPLE
   *
   * @param GLsizei n
   * @param GLuint *fences
   * @return void
   */
  Handle<Value> gl_glGenFencesAPPLE(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    GLuint _fences = (GLuint)args[1]->Uint32Value();
    glGenFencesAPPLE(_n, &_fences);

    args[1] = Number::New(_fences);

    return Undefined();
  }


  /**
   * glDeleteFencesAPPLE
   *
   * @param GLsizei n
   * @param const GLuint *fences
   * @return void
   */
  Handle<Value> gl_glDeleteFencesAPPLE(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    const GLuint _fences = (GLuint)args[1]->Uint32Value();
    glDeleteFencesAPPLE(_n, &_fences);

    args[1] = Number::New(_fences);

    return Undefined();
  }


  /**
   * glSetFenceAPPLE
   *
   * @param GLuint fence
   * @return void
   */
  Handle<Value> gl_glSetFenceAPPLE(const Arguments& args) {
    HandleScope scope;
    GLuint _fence = (GLuint)args[0]->Uint32Value();
    glSetFenceAPPLE(_fence);

    return Undefined();
  }


  /**
   * glIsFenceAPPLE
   *
   * @param GLuint fence
   * @return GLboolean
   */
  Handle<Value> gl_glIsFenceAPPLE(const Arguments& args) {
    HandleScope scope;
    GLuint _fence = (GLuint)args[0]->Uint32Value();
    GLboolean _ret = glIsFenceAPPLE(_fence);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glTestFenceAPPLE
   *
   * @param GLuint fence
   * @return GLboolean
   */
  Handle<Value> gl_glTestFenceAPPLE(const Arguments& args) {
    HandleScope scope;
    GLuint _fence = (GLuint)args[0]->Uint32Value();
    GLboolean _ret = glTestFenceAPPLE(_fence);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glFinishFenceAPPLE
   *
   * @param GLuint fence
   * @return void
   */
  Handle<Value> gl_glFinishFenceAPPLE(const Arguments& args) {
    HandleScope scope;
    GLuint _fence = (GLuint)args[0]->Uint32Value();
    glFinishFenceAPPLE(_fence);

    return Undefined();
  }


  /**
   * glTestObjectAPPLE
   *
   * @param GLenum object
   * @param GLuint name
   * @return GLboolean
   */
  Handle<Value> gl_glTestObjectAPPLE(const Arguments& args) {
    HandleScope scope;
    GLenum _object = (GLenum)args[0]->Int32Value();
    GLuint _name = (GLuint)args[1]->Uint32Value();
    GLboolean _ret = glTestObjectAPPLE(_object, _name);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glFinishObjectAPPLE
   *
   * @param GLenum object
   * @param GLuint name
   * @return void
   */
  Handle<Value> gl_glFinishObjectAPPLE(const Arguments& args) {
    HandleScope scope;
    GLenum _object = (GLenum)args[0]->Int32Value();
    GLuint _name = (GLuint)args[1]->Uint32Value();
    glFinishObjectAPPLE(_object, _name);

    return Undefined();
  }


  /**
   * glElementPointerAPPLE
   *
   * @param GLenum type
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> gl_glElementPointerAPPLE(const Arguments& args) {
    HandleScope scope;
    GLenum _type = (GLenum)args[0]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[1])) {
        return ThrowException(Exception::Error(
                              String::New("1nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[1]->ToObject());
    const GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glElementPointerAPPLE(_type, _pointer);

    return Undefined();
  }


  /**
   * glDrawElementArrayAPPLE
   *
   * @param GLenum mode
   * @param GLint first
   * @param GLsizei count
   * @return void
   */
  Handle<Value> gl_glDrawElementArrayAPPLE(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    GLint _first = (GLint)args[1]->Int32Value();
    GLsizei _count = (GLsizei)args[2]->Int32Value();
    glDrawElementArrayAPPLE(_mode, _first, _count);

    return Undefined();
  }


  /**
   * glDrawRangeElementArrayAPPLE
   *
   * @param GLenum mode
   * @param GLuint start
   * @param GLuint end
   * @param GLint first
   * @param GLsizei count
   * @return void
   */
  Handle<Value> gl_glDrawRangeElementArrayAPPLE(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    GLuint _start = (GLuint)args[1]->Uint32Value();
    GLuint _end = (GLuint)args[2]->Uint32Value();
    GLint _first = (GLint)args[3]->Int32Value();
    GLsizei _count = (GLsizei)args[4]->Int32Value();
    glDrawRangeElementArrayAPPLE(_mode, _start, _end, _first, _count);

    return Undefined();
  }


  /**
   * glMultiDrawElementArrayAPPLE
   *
   * @param GLenum mode
   * @param const GLint *first
   * @param const GLsizei *count
   * @param GLsizei primcount
   * @return void
   */
  Handle<Value> gl_glMultiDrawElementArrayAPPLE(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    const GLint _first = (GLint)args[1]->Int32Value();
    const GLsizei _count = (GLsizei)args[2]->Int32Value();
    GLsizei _primcount = (GLsizei)args[3]->Int32Value();
    glMultiDrawElementArrayAPPLE(_mode, &_first, &_count, _primcount);

    args[1] = Number::New(_first);

    args[2] = Number::New(_count);

    return Undefined();
  }


  /**
   * glMultiDrawRangeElementArrayAPPLE
   *
   * @param GLenum mode
   * @param GLuint start
   * @param GLuint end
   * @param const GLint *first
   * @param const GLsizei *count
   * @param GLsizei primcount
   * @return void
   */
  Handle<Value> gl_glMultiDrawRangeElementArrayAPPLE(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    GLuint _start = (GLuint)args[1]->Uint32Value();
    GLuint _end = (GLuint)args[2]->Uint32Value();
    const GLint _first = (GLint)args[3]->Int32Value();
    const GLsizei _count = (GLsizei)args[4]->Int32Value();
    GLsizei _primcount = (GLsizei)args[5]->Int32Value();
    glMultiDrawRangeElementArrayAPPLE(_mode, _start, _end, &_first, &_count, _primcount);

    args[3] = Number::New(_first);

    args[4] = Number::New(_count);

    return Undefined();
  }


  /**
   * glFlushRenderAPPLE
   *
   * @return void
   */
  Handle<Value> gl_glFlushRenderAPPLE(const Arguments& args) {
    glFlushRenderAPPLE();
    return Undefined();
  }


  /**
   * glFinishRenderAPPLE
   *
   * @return void
   */
  Handle<Value> gl_glFinishRenderAPPLE(const Arguments& args) {
    glFinishRenderAPPLE();
    return Undefined();
  }


  /**
   * glSwapAPPLE
   *
   * @return void
   */
  Handle<Value> gl_glSwapAPPLE(const Arguments& args) {
    glSwapAPPLE();
    return Undefined();
  }


  /**
   * glEnableVertexAttribAPPLE
   *
   * @param GLuint index
   * @param GLenum pname
   * @return void
   */
  Handle<Value> gl_glEnableVertexAttribAPPLE(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    glEnableVertexAttribAPPLE(_index, _pname);

    return Undefined();
  }


  /**
   * glDisableVertexAttribAPPLE
   *
   * @param GLuint index
   * @param GLenum pname
   * @return void
   */
  Handle<Value> gl_glDisableVertexAttribAPPLE(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    glDisableVertexAttribAPPLE(_index, _pname);

    return Undefined();
  }


  /**
   * glIsVertexAttribEnabledAPPLE
   *
   * @param GLuint index
   * @param GLenum pname
   * @return GLboolean
   */
  Handle<Value> gl_glIsVertexAttribEnabledAPPLE(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLboolean _ret = glIsVertexAttribEnabledAPPLE(_index, _pname);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glMapVertexAttrib1dAPPLE
   *
   * @param GLuint index
   * @param GLuint size
   * @param GLdouble u1
   * @param GLdouble u2
   * @param GLint stride
   * @param GLint order
   * @param const GLdouble *points
   * @return void
   */
  Handle<Value> gl_glMapVertexAttrib1dAPPLE(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLuint _size = (GLuint)args[1]->Uint32Value();
    GLdouble _u1 = (GLdouble)args[2]->NumberValue();
    GLdouble _u2 = (GLdouble)args[3]->NumberValue();
    GLint _stride = (GLint)args[4]->Int32Value();
    GLint _order = (GLint)args[5]->Int32Value();
    const GLdouble _points = (GLdouble)args[6]->NumberValue();
    glMapVertexAttrib1dAPPLE(_index, _size, _u1, _u2, _stride, _order, &_points);

    args[6] = Number::New(_points);

    return Undefined();
  }


  /**
   * glMapVertexAttrib1fAPPLE
   *
   * @param GLuint index
   * @param GLuint size
   * @param GLfloat u1
   * @param GLfloat u2
   * @param GLint stride
   * @param GLint order
   * @param const GLfloat *points
   * @return void
   */
  Handle<Value> gl_glMapVertexAttrib1fAPPLE(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLuint _size = (GLuint)args[1]->Uint32Value();
    GLfloat _u1 = (GLfloat)args[2]->NumberValue();
    GLfloat _u2 = (GLfloat)args[3]->NumberValue();
    GLint _stride = (GLint)args[4]->Int32Value();
    GLint _order = (GLint)args[5]->Int32Value();
    const GLfloat _points = (GLfloat)args[6]->NumberValue();
    glMapVertexAttrib1fAPPLE(_index, _size, _u1, _u2, _stride, _order, &_points);

    args[6] = Number::New(_points);

    return Undefined();
  }


  /**
   * glMapVertexAttrib2dAPPLE
   *
   * @param GLuint index
   * @param GLuint size
   * @param GLdouble u1
   * @param GLdouble u2
   * @param GLint ustride
   * @param GLint uorder
   * @param GLdouble v1
   * @param GLdouble v2
   * @param GLint vstride
   * @param GLint vorder
   * @param const GLdouble *points
   * @return void
   */
  Handle<Value> gl_glMapVertexAttrib2dAPPLE(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLuint _size = (GLuint)args[1]->Uint32Value();
    GLdouble _u1 = (GLdouble)args[2]->NumberValue();
    GLdouble _u2 = (GLdouble)args[3]->NumberValue();
    GLint _ustride = (GLint)args[4]->Int32Value();
    GLint _uorder = (GLint)args[5]->Int32Value();
    GLdouble _v1 = (GLdouble)args[6]->NumberValue();
    GLdouble _v2 = (GLdouble)args[7]->NumberValue();
    GLint _vstride = (GLint)args[8]->Int32Value();
    GLint _vorder = (GLint)args[9]->Int32Value();
    const GLdouble _points = (GLdouble)args[10]->NumberValue();
    glMapVertexAttrib2dAPPLE(_index, _size, _u1, _u2, _ustride, _uorder, _v1, _v2, _vstride, _vorder, &_points);

    args[10] = Number::New(_points);

    return Undefined();
  }


  /**
   * glMapVertexAttrib2fAPPLE
   *
   * @param GLuint index
   * @param GLuint size
   * @param GLfloat u1
   * @param GLfloat u2
   * @param GLint ustride
   * @param GLint uorder
   * @param GLfloat v1
   * @param GLfloat v2
   * @param GLint vstride
   * @param GLint vorder
   * @param const GLfloat *points
   * @return void
   */
  Handle<Value> gl_glMapVertexAttrib2fAPPLE(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLuint _size = (GLuint)args[1]->Uint32Value();
    GLfloat _u1 = (GLfloat)args[2]->NumberValue();
    GLfloat _u2 = (GLfloat)args[3]->NumberValue();
    GLint _ustride = (GLint)args[4]->Int32Value();
    GLint _uorder = (GLint)args[5]->Int32Value();
    GLfloat _v1 = (GLfloat)args[6]->NumberValue();
    GLfloat _v2 = (GLfloat)args[7]->NumberValue();
    GLint _vstride = (GLint)args[8]->Int32Value();
    GLint _vorder = (GLint)args[9]->Int32Value();
    const GLfloat _points = (GLfloat)args[10]->NumberValue();
    glMapVertexAttrib2fAPPLE(_index, _size, _u1, _u2, _ustride, _uorder, _v1, _v2, _vstride, _vorder, &_points);

    args[10] = Number::New(_points);

    return Undefined();
  }


  /**
   * glBufferParameteriAPPLE
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> gl_glBufferParameteriAPPLE(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _param = (GLint)args[2]->Int32Value();
    glBufferParameteriAPPLE(_target, _pname, _param);

    return Undefined();
  }


  /**
   * glFlushMappedBufferRangeAPPLE
   *
   * @param GLenum target
   * @param GLintptr offset
   * @param GLsizeiptr size
   * @return void
   */
  Handle<Value> gl_glFlushMappedBufferRangeAPPLE(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glFlushMappedBufferRangeAPPLE is not implemented!")));
  }


  /**
   * glObjectPurgeableAPPLE
   *
   * @param GLenum objectType
   * @param GLuint name
   * @param GLenum option
   * @return GLenum
   */
  Handle<Value> gl_glObjectPurgeableAPPLE(const Arguments& args) {
    HandleScope scope;
    GLenum _objectType = (GLenum)args[0]->Int32Value();
    GLuint _name = (GLuint)args[1]->Uint32Value();
    GLenum _option = (GLenum)args[2]->Int32Value();
    GLenum _ret = glObjectPurgeableAPPLE(_objectType, _name, _option);

    return scope.Close(Number::New(_ret));
  }


  /**
   * glObjectUnpurgeableAPPLE
   *
   * @param GLenum objectType
   * @param GLuint name
   * @param GLenum option
   * @return GLenum
   */
  Handle<Value> gl_glObjectUnpurgeableAPPLE(const Arguments& args) {
    HandleScope scope;
    GLenum _objectType = (GLenum)args[0]->Int32Value();
    GLuint _name = (GLuint)args[1]->Uint32Value();
    GLenum _option = (GLenum)args[2]->Int32Value();
    GLenum _ret = glObjectUnpurgeableAPPLE(_objectType, _name, _option);

    return scope.Close(Number::New(_ret));
  }


  /**
   * glGetObjectParameterivAPPLE
   *
   * @param GLenum objectType
   * @param GLuint name
   * @param GLenum pname
   * @param GLint* params
   * @return void
   */
  Handle<Value> gl_glGetObjectParameterivAPPLE(const Arguments& args) {
    HandleScope scope;
    GLenum _objectType = (GLenum)args[0]->Int32Value();
    GLuint _name = (GLuint)args[1]->Uint32Value();
    GLenum _pname = (GLenum)args[2]->Int32Value();
    GLint _params = (GLint)args[3]->Int32Value();
    glGetObjectParameterivAPPLE(_objectType, _name, _pname, &_params);

    args[3] = Number::New(_params);

    return Undefined();
  }


  /**
   * glPNTrianglesiATI
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> gl_glPNTrianglesiATI(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLint _param = (GLint)args[1]->Int32Value();
    glPNTrianglesiATI(_pname, _param);

    return Undefined();
  }


  /**
   * glPNTrianglesfATI
   *
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> gl_glPNTrianglesfATI(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLfloat _param = (GLfloat)args[1]->NumberValue();
    glPNTrianglesfATI(_pname, _param);

    return Undefined();
  }


  /**
   * glBlendEquationSeparateATI
   *
   * @param GLenum equationRGB
   * @param GLenum equationAlpha
   * @return void
   */
  Handle<Value> gl_glBlendEquationSeparateATI(const Arguments& args) {
    HandleScope scope;
    GLenum _equationRGB = (GLenum)args[0]->Int32Value();
    GLenum _equationAlpha = (GLenum)args[1]->Int32Value();
    glBlendEquationSeparateATI(_equationRGB, _equationAlpha);

    return Undefined();
  }


  /**
   * glStencilOpSeparateATI
   *
   * @param GLenum face
   * @param GLenum sfail
   * @param GLenum dpfail
   * @param GLenum dppass
   * @return void
   */
  Handle<Value> gl_glStencilOpSeparateATI(const Arguments& args) {
    HandleScope scope;
    GLenum _face = (GLenum)args[0]->Int32Value();
    GLenum _sfail = (GLenum)args[1]->Int32Value();
    GLenum _dpfail = (GLenum)args[2]->Int32Value();
    GLenum _dppass = (GLenum)args[3]->Int32Value();
    glStencilOpSeparateATI(_face, _sfail, _dpfail, _dppass);

    return Undefined();
  }


  /**
   * glStencilFuncSeparateATI
   *
   * @param GLenum frontfunc
   * @param GLenum backfunc
   * @param GLint ref
   * @param GLuint mask
   * @return void
   */
  Handle<Value> gl_glStencilFuncSeparateATI(const Arguments& args) {
    HandleScope scope;
    GLenum _frontfunc = (GLenum)args[0]->Int32Value();
    GLenum _backfunc = (GLenum)args[1]->Int32Value();
    GLint _ref = (GLint)args[2]->Int32Value();
    GLuint _mask = (GLuint)args[3]->Uint32Value();
    glStencilFuncSeparateATI(_frontfunc, _backfunc, _ref, _mask);

    return Undefined();
  }


  /**
   * glPNTrianglesiATIX
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> gl_glPNTrianglesiATIX(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLint _param = (GLint)args[1]->Int32Value();
    glPNTrianglesiATIX(_pname, _param);

    return Undefined();
  }


  /**
   * glPNTrianglesfATIX
   *
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> gl_glPNTrianglesfATIX(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLfloat _param = (GLfloat)args[1]->NumberValue();
    glPNTrianglesfATIX(_pname, _param);

    return Undefined();
  }


  /**
   * glPointParameteriNV
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> gl_glPointParameteriNV(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLint _param = (GLint)args[1]->Int32Value();
    glPointParameteriNV(_pname, _param);

    return Undefined();
  }


  /**
   * glPointParameterivNV
   *
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> gl_glPointParameterivNV(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    const GLint _params = (GLint)args[1]->Int32Value();
    glPointParameterivNV(_pname, &_params);

    args[1] = Number::New(_params);

    return Undefined();
  }


  /**
   * glBeginConditionalRenderNV
   *
   * @param GLuint id
   * @param GLenum mode
   * @return void
   */
  Handle<Value> gl_glBeginConditionalRenderNV(const Arguments& args) {
    HandleScope scope;
    GLuint _id = (GLuint)args[0]->Uint32Value();
    GLenum _mode = (GLenum)args[1]->Int32Value();
    glBeginConditionalRenderNV(_id, _mode);

    return Undefined();
  }


  /**
   * glEndConditionalRenderNV
   *
   * @return void
   */
  Handle<Value> gl_glEndConditionalRenderNV(const Arguments& args) {
    glEndConditionalRenderNV();
    return Undefined();
  }


  /**
   * glAccum
   *
   * @param GLenum op
   * @param GLfloat value
   * @return void
   */
  Handle<Value> gl_glAccum(const Arguments& args) {
    HandleScope scope;
    GLenum _op = (GLenum)args[0]->Int32Value();
    GLfloat _value = (GLfloat)args[1]->NumberValue();
    glAccum(_op, _value);

    return Undefined();
  }


  /**
   * glAlphaFunc
   *
   * @param GLenum func
   * @param GLclampf ref
   * @return void
   */
  Handle<Value> gl_glAlphaFunc(const Arguments& args) {
    HandleScope scope;
    GLenum _func = (GLenum)args[0]->Int32Value();
    GLclampf _ref = (GLclampf)args[1]->NumberValue();
    glAlphaFunc(_func, _ref);

    return Undefined();
  }


  /**
   * glAreTexturesResident
   *
   * @param GLsizei n
   * @param const GLuint *textures
   * @param GLboolean *residences
   * @return GLboolean
   */
  Handle<Value> gl_glAreTexturesResident(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    const GLuint _textures = (GLuint)args[1]->Uint32Value();
    GLboolean _residences = (GLboolean)args[2]->Int32Value();
    GLboolean _ret = glAreTexturesResident(_n, &_textures, &_residences);

    args[1] = Number::New(_textures);

    args[2] = Number::New(_residences);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glArrayElement
   *
   * @param GLint i
   * @return void
   */
  Handle<Value> gl_glArrayElement(const Arguments& args) {
    HandleScope scope;
    GLint _i = (GLint)args[0]->Int32Value();
    glArrayElement(_i);

    return Undefined();
  }


  /**
   * glBegin
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> gl_glBegin(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    glBegin(_mode);

    return Undefined();
  }


  /**
   * glBindTexture
   *
   * @param GLenum target
   * @param GLuint texture
   * @return void
   */
  Handle<Value> gl_glBindTexture(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _texture = (GLuint)args[1]->Uint32Value();
    glBindTexture(_target, _texture);

    return Undefined();
  }


  /**
   * glBitmap
   *
   * @param GLsizei width
   * @param GLsizei height
   * @param GLfloat xorig
   * @param GLfloat yorig
   * @param GLfloat xmove
   * @param GLfloat ymove
   * @param const GLubyte *bitmap
   * @return void
   */
  Handle<Value> gl_glBitmap(const Arguments& args) {
    HandleScope scope;
    GLsizei _width = (GLsizei)args[0]->Int32Value();
    GLsizei _height = (GLsizei)args[1]->Int32Value();
    GLfloat _xorig = (GLfloat)args[2]->NumberValue();
    GLfloat _yorig = (GLfloat)args[3]->NumberValue();
    GLfloat _xmove = (GLfloat)args[4]->NumberValue();
    GLfloat _ymove = (GLfloat)args[5]->NumberValue();
    const GLubyte _bitmap = (GLubyte)args[6]->Int32Value();
    glBitmap(_width, _height, _xorig, _yorig, _xmove, _ymove, &_bitmap);

    args[6] = Number::New(_bitmap);

    return Undefined();
  }


  /**
   * glBlendColor
   *
   * @param GLclampf red
   * @param GLclampf green
   * @param GLclampf blue
   * @param GLclampf alpha
   * @return void
   */
  Handle<Value> gl_glBlendColor(const Arguments& args) {
    HandleScope scope;
    GLclampf _red = (GLclampf)args[0]->NumberValue();
    GLclampf _green = (GLclampf)args[1]->NumberValue();
    GLclampf _blue = (GLclampf)args[2]->NumberValue();
    GLclampf _alpha = (GLclampf)args[3]->NumberValue();
    glBlendColor(_red, _green, _blue, _alpha);

    return Undefined();
  }


  /**
   * glBlendEquation
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> gl_glBlendEquation(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    glBlendEquation(_mode);

    return Undefined();
  }


  /**
   * glBlendEquationSeparate
   *
   * @param GLenum modeRGB
   * @param GLenum modeAlpha
   * @return void
   */
  Handle<Value> gl_glBlendEquationSeparate(const Arguments& args) {
    HandleScope scope;
    GLenum _modeRGB = (GLenum)args[0]->Int32Value();
    GLenum _modeAlpha = (GLenum)args[1]->Int32Value();
    glBlendEquationSeparate(_modeRGB, _modeAlpha);

    return Undefined();
  }


  /**
   * glBlendFunc
   *
   * @param GLenum sfactor
   * @param GLenum dfactor
   * @return void
   */
  Handle<Value> gl_glBlendFunc(const Arguments& args) {
    HandleScope scope;
    GLenum _sfactor = (GLenum)args[0]->Int32Value();
    GLenum _dfactor = (GLenum)args[1]->Int32Value();
    glBlendFunc(_sfactor, _dfactor);

    return Undefined();
  }


  /**
   * glCallList
   *
   * @param GLuint list
   * @return void
   */
  Handle<Value> gl_glCallList(const Arguments& args) {
    HandleScope scope;
    GLuint _list = (GLuint)args[0]->Uint32Value();
    glCallList(_list);

    return Undefined();
  }


  /**
   * glCallLists
   *
   * @param GLsizei n
   * @param GLenum type
   * @param const GLvoid *lists
   * @return void
   */
  Handle<Value> gl_glCallLists(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    GLenum _type = (GLenum)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * lists_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    const GLvoid *_lists = (GLvoid *)lists_buffer->data();
    glCallLists(_n, _type, _lists);

    return Undefined();
  }


  /**
   * glClear
   *
   * @param GLbitfield mask
   * @return void
   */
  Handle<Value> gl_glClear(const Arguments& args) {
    HandleScope scope;
    GLbitfield _mask = (GLbitfield)args[0]->Uint32Value();
    glClear(_mask);

    return Undefined();
  }


  /**
   * glClearAccum
   *
   * @param GLfloat red
   * @param GLfloat green
   * @param GLfloat blue
   * @param GLfloat alpha
   * @return void
   */
  Handle<Value> gl_glClearAccum(const Arguments& args) {
    HandleScope scope;
    GLfloat _red = (GLfloat)args[0]->NumberValue();
    GLfloat _green = (GLfloat)args[1]->NumberValue();
    GLfloat _blue = (GLfloat)args[2]->NumberValue();
    GLfloat _alpha = (GLfloat)args[3]->NumberValue();
    glClearAccum(_red, _green, _blue, _alpha);

    return Undefined();
  }


  /**
   * glClearColor
   *
   * @param GLclampf red
   * @param GLclampf green
   * @param GLclampf blue
   * @param GLclampf alpha
   * @return void
   */
  Handle<Value> gl_glClearColor(const Arguments& args) {
    HandleScope scope;
    GLclampf _red = (GLclampf)args[0]->NumberValue();
    GLclampf _green = (GLclampf)args[1]->NumberValue();
    GLclampf _blue = (GLclampf)args[2]->NumberValue();
    GLclampf _alpha = (GLclampf)args[3]->NumberValue();
    glClearColor(_red, _green, _blue, _alpha);

    return Undefined();
  }


  /**
   * glClearDepth
   *
   * @param GLclampd depth
   * @return void
   */
  Handle<Value> gl_glClearDepth(const Arguments& args) {
    HandleScope scope;
    GLclampd _depth = (GLclampd)args[0]->NumberValue();
    glClearDepth(_depth);

    return Undefined();
  }


  /**
   * glClearIndex
   *
   * @param GLfloat c
   * @return void
   */
  Handle<Value> gl_glClearIndex(const Arguments& args) {
    HandleScope scope;
    GLfloat _c = (GLfloat)args[0]->NumberValue();
    glClearIndex(_c);

    return Undefined();
  }


  /**
   * glClearStencil
   *
   * @param GLint s
   * @return void
   */
  Handle<Value> gl_glClearStencil(const Arguments& args) {
    HandleScope scope;
    GLint _s = (GLint)args[0]->Int32Value();
    glClearStencil(_s);

    return Undefined();
  }


  /**
   * glClipPlane
   *
   * @param GLenum plane
   * @param const GLdouble *equation
   * @return void
   */
  Handle<Value> gl_glClipPlane(const Arguments& args) {
    HandleScope scope;
    GLenum _plane = (GLenum)args[0]->Int32Value();
    const GLdouble _equation = (GLdouble)args[1]->NumberValue();
    glClipPlane(_plane, &_equation);

    args[1] = Number::New(_equation);

    return Undefined();
  }


  /**
   * glColor3b
   *
   * @param GLbyte red
   * @param GLbyte green
   * @param GLbyte blue
   * @return void
   */
  Handle<Value> gl_glColor3b(const Arguments& args) {
    HandleScope scope;
    GLbyte _red = (GLbyte)args[0]->Int32Value();
    GLbyte _green = (GLbyte)args[1]->Int32Value();
    GLbyte _blue = (GLbyte)args[2]->Int32Value();
    glColor3b(_red, _green, _blue);

    return Undefined();
  }


  /**
   * glColor3bv
   *
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> gl_glColor3bv(const Arguments& args) {
    HandleScope scope;
    const GLbyte _v = (GLbyte)args[0]->Int32Value();
    glColor3bv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glColor3d
   *
   * @param GLdouble red
   * @param GLdouble green
   * @param GLdouble blue
   * @return void
   */
  Handle<Value> gl_glColor3d(const Arguments& args) {
    HandleScope scope;
    GLdouble _red = (GLdouble)args[0]->NumberValue();
    GLdouble _green = (GLdouble)args[1]->NumberValue();
    GLdouble _blue = (GLdouble)args[2]->NumberValue();
    glColor3d(_red, _green, _blue);

    return Undefined();
  }


  /**
   * glColor3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glColor3dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v = (GLdouble)args[0]->NumberValue();
    glColor3dv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glColor3f
   *
   * @param GLfloat red
   * @param GLfloat green
   * @param GLfloat blue
   * @return void
   */
  Handle<Value> gl_glColor3f(const Arguments& args) {
    HandleScope scope;
    GLfloat _red = (GLfloat)args[0]->NumberValue();
    GLfloat _green = (GLfloat)args[1]->NumberValue();
    GLfloat _blue = (GLfloat)args[2]->NumberValue();
    glColor3f(_red, _green, _blue);

    return Undefined();
  }


  /**
   * glColor3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glColor3fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v = (GLfloat)args[0]->NumberValue();
    glColor3fv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glColor3i
   *
   * @param GLint red
   * @param GLint green
   * @param GLint blue
   * @return void
   */
  Handle<Value> gl_glColor3i(const Arguments& args) {
    HandleScope scope;
    GLint _red = (GLint)args[0]->Int32Value();
    GLint _green = (GLint)args[1]->Int32Value();
    GLint _blue = (GLint)args[2]->Int32Value();
    glColor3i(_red, _green, _blue);

    return Undefined();
  }


  /**
   * glColor3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glColor3iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glColor3iv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glColor3s
   *
   * @param GLshort red
   * @param GLshort green
   * @param GLshort blue
   * @return void
   */
  Handle<Value> gl_glColor3s(const Arguments& args) {
    HandleScope scope;
    GLshort _red = (GLshort)args[0]->Int32Value();
    GLshort _green = (GLshort)args[1]->Int32Value();
    GLshort _blue = (GLshort)args[2]->Int32Value();
    glColor3s(_red, _green, _blue);

    return Undefined();
  }


  /**
   * glColor3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glColor3sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glColor3sv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glColor3ub
   *
   * @param GLubyte red
   * @param GLubyte green
   * @param GLubyte blue
   * @return void
   */
  Handle<Value> gl_glColor3ub(const Arguments& args) {
    HandleScope scope;
    GLubyte _red = (GLubyte)args[0]->Int32Value();
    GLubyte _green = (GLubyte)args[1]->Int32Value();
    GLubyte _blue = (GLubyte)args[2]->Int32Value();
    glColor3ub(_red, _green, _blue);

    return Undefined();
  }


  /**
   * glColor3ubv
   *
   * @param const GLubyte *v
   * @return void
   */
  Handle<Value> gl_glColor3ubv(const Arguments& args) {
    HandleScope scope;
    const GLubyte _v = (GLubyte)args[0]->Int32Value();
    glColor3ubv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glColor3ui
   *
   * @param GLuint red
   * @param GLuint green
   * @param GLuint blue
   * @return void
   */
  Handle<Value> gl_glColor3ui(const Arguments& args) {
    HandleScope scope;
    GLuint _red = (GLuint)args[0]->Uint32Value();
    GLuint _green = (GLuint)args[1]->Uint32Value();
    GLuint _blue = (GLuint)args[2]->Uint32Value();
    glColor3ui(_red, _green, _blue);

    return Undefined();
  }


  /**
   * glColor3uiv
   *
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> gl_glColor3uiv(const Arguments& args) {
    HandleScope scope;
    const GLuint _v = (GLuint)args[0]->Uint32Value();
    glColor3uiv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glColor3us
   *
   * @param GLushort red
   * @param GLushort green
   * @param GLushort blue
   * @return void
   */
  Handle<Value> gl_glColor3us(const Arguments& args) {
    HandleScope scope;
    GLushort _red = (GLushort)args[0]->Uint32Value();
    GLushort _green = (GLushort)args[1]->Uint32Value();
    GLushort _blue = (GLushort)args[2]->Uint32Value();
    glColor3us(_red, _green, _blue);

    return Undefined();
  }


  /**
   * glColor3usv
   *
   * @param const GLushort *v
   * @return void
   */
  Handle<Value> gl_glColor3usv(const Arguments& args) {
    HandleScope scope;
    const GLushort _v = (GLushort)args[0]->Uint32Value();
    glColor3usv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glColor4b
   *
   * @param GLbyte red
   * @param GLbyte green
   * @param GLbyte blue
   * @param GLbyte alpha
   * @return void
   */
  Handle<Value> gl_glColor4b(const Arguments& args) {
    HandleScope scope;
    GLbyte _red = (GLbyte)args[0]->Int32Value();
    GLbyte _green = (GLbyte)args[1]->Int32Value();
    GLbyte _blue = (GLbyte)args[2]->Int32Value();
    GLbyte _alpha = (GLbyte)args[3]->Int32Value();
    glColor4b(_red, _green, _blue, _alpha);

    return Undefined();
  }


  /**
   * glColor4bv
   *
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> gl_glColor4bv(const Arguments& args) {
    HandleScope scope;
    const GLbyte _v = (GLbyte)args[0]->Int32Value();
    glColor4bv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glColor4d
   *
   * @param GLdouble red
   * @param GLdouble green
   * @param GLdouble blue
   * @param GLdouble alpha
   * @return void
   */
  Handle<Value> gl_glColor4d(const Arguments& args) {
    HandleScope scope;
    GLdouble _red = (GLdouble)args[0]->NumberValue();
    GLdouble _green = (GLdouble)args[1]->NumberValue();
    GLdouble _blue = (GLdouble)args[2]->NumberValue();
    GLdouble _alpha = (GLdouble)args[3]->NumberValue();
    glColor4d(_red, _green, _blue, _alpha);

    return Undefined();
  }


  /**
   * glColor4dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glColor4dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v = (GLdouble)args[0]->NumberValue();
    glColor4dv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glColor4f
   *
   * @param GLfloat red
   * @param GLfloat green
   * @param GLfloat blue
   * @param GLfloat alpha
   * @return void
   */
  Handle<Value> gl_glColor4f(const Arguments& args) {
    HandleScope scope;
    GLfloat _red = (GLfloat)args[0]->NumberValue();
    GLfloat _green = (GLfloat)args[1]->NumberValue();
    GLfloat _blue = (GLfloat)args[2]->NumberValue();
    GLfloat _alpha = (GLfloat)args[3]->NumberValue();
    glColor4f(_red, _green, _blue, _alpha);

    return Undefined();
  }


  /**
   * glColor4fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glColor4fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v = (GLfloat)args[0]->NumberValue();
    glColor4fv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glColor4i
   *
   * @param GLint red
   * @param GLint green
   * @param GLint blue
   * @param GLint alpha
   * @return void
   */
  Handle<Value> gl_glColor4i(const Arguments& args) {
    HandleScope scope;
    GLint _red = (GLint)args[0]->Int32Value();
    GLint _green = (GLint)args[1]->Int32Value();
    GLint _blue = (GLint)args[2]->Int32Value();
    GLint _alpha = (GLint)args[3]->Int32Value();
    glColor4i(_red, _green, _blue, _alpha);

    return Undefined();
  }


  /**
   * glColor4iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glColor4iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glColor4iv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glColor4s
   *
   * @param GLshort red
   * @param GLshort green
   * @param GLshort blue
   * @param GLshort alpha
   * @return void
   */
  Handle<Value> gl_glColor4s(const Arguments& args) {
    HandleScope scope;
    GLshort _red = (GLshort)args[0]->Int32Value();
    GLshort _green = (GLshort)args[1]->Int32Value();
    GLshort _blue = (GLshort)args[2]->Int32Value();
    GLshort _alpha = (GLshort)args[3]->Int32Value();
    glColor4s(_red, _green, _blue, _alpha);

    return Undefined();
  }


  /**
   * glColor4sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glColor4sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glColor4sv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glColor4ub
   *
   * @param GLubyte red
   * @param GLubyte green
   * @param GLubyte blue
   * @param GLubyte alpha
   * @return void
   */
  Handle<Value> gl_glColor4ub(const Arguments& args) {
    HandleScope scope;
    GLubyte _red = (GLubyte)args[0]->Int32Value();
    GLubyte _green = (GLubyte)args[1]->Int32Value();
    GLubyte _blue = (GLubyte)args[2]->Int32Value();
    GLubyte _alpha = (GLubyte)args[3]->Int32Value();
    glColor4ub(_red, _green, _blue, _alpha);

    return Undefined();
  }


  /**
   * glColor4ubv
   *
   * @param const GLubyte *v
   * @return void
   */
  Handle<Value> gl_glColor4ubv(const Arguments& args) {
    HandleScope scope;
    const GLubyte _v = (GLubyte)args[0]->Int32Value();
    glColor4ubv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glColor4ui
   *
   * @param GLuint red
   * @param GLuint green
   * @param GLuint blue
   * @param GLuint alpha
   * @return void
   */
  Handle<Value> gl_glColor4ui(const Arguments& args) {
    HandleScope scope;
    GLuint _red = (GLuint)args[0]->Uint32Value();
    GLuint _green = (GLuint)args[1]->Uint32Value();
    GLuint _blue = (GLuint)args[2]->Uint32Value();
    GLuint _alpha = (GLuint)args[3]->Uint32Value();
    glColor4ui(_red, _green, _blue, _alpha);

    return Undefined();
  }


  /**
   * glColor4uiv
   *
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> gl_glColor4uiv(const Arguments& args) {
    HandleScope scope;
    const GLuint _v = (GLuint)args[0]->Uint32Value();
    glColor4uiv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glColor4us
   *
   * @param GLushort red
   * @param GLushort green
   * @param GLushort blue
   * @param GLushort alpha
   * @return void
   */
  Handle<Value> gl_glColor4us(const Arguments& args) {
    HandleScope scope;
    GLushort _red = (GLushort)args[0]->Uint32Value();
    GLushort _green = (GLushort)args[1]->Uint32Value();
    GLushort _blue = (GLushort)args[2]->Uint32Value();
    GLushort _alpha = (GLushort)args[3]->Uint32Value();
    glColor4us(_red, _green, _blue, _alpha);

    return Undefined();
  }


  /**
   * glColor4usv
   *
   * @param const GLushort *v
   * @return void
   */
  Handle<Value> gl_glColor4usv(const Arguments& args) {
    HandleScope scope;
    const GLushort _v = (GLushort)args[0]->Uint32Value();
    glColor4usv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glColorMask
   *
   * @param GLboolean red
   * @param GLboolean green
   * @param GLboolean blue
   * @param GLboolean alpha
   * @return void
   */
  Handle<Value> gl_glColorMask(const Arguments& args) {
    HandleScope scope;
    GLboolean _red = (GLboolean)args[0]->Int32Value();
    GLboolean _green = (GLboolean)args[1]->Int32Value();
    GLboolean _blue = (GLboolean)args[2]->Int32Value();
    GLboolean _alpha = (GLboolean)args[3]->Int32Value();
    glColorMask(_red, _green, _blue, _alpha);

    return Undefined();
  }


  /**
   * glColorMaterial
   *
   * @param GLenum face
   * @param GLenum mode
   * @return void
   */
  Handle<Value> gl_glColorMaterial(const Arguments& args) {
    HandleScope scope;
    GLenum _face = (GLenum)args[0]->Int32Value();
    GLenum _mode = (GLenum)args[1]->Int32Value();
    glColorMaterial(_face, _mode);

    return Undefined();
  }


  /**
   * glColorPointer
   *
   * @param GLint size
   * @param GLenum type
   * @param GLsizei stride
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> gl_glColorPointer(const Arguments& args) {
    HandleScope scope;
    GLint _size = (GLint)args[0]->Int32Value();
    GLenum _type = (GLenum)args[1]->Int32Value();
    GLsizei _stride = (GLsizei)args[2]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[3])) {
        return ThrowException(Exception::Error(
                              String::New("3nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[3]->ToObject());
    const GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glColorPointer(_size, _type, _stride, _pointer);

    return Undefined();
  }


  /**
   * glColorSubTable
   *
   * @param GLenum target
   * @param GLsizei start
   * @param GLsizei count
   * @param GLenum format
   * @param GLenum type
   * @param const GLvoid *data
   * @return void
   */
  Handle<Value> gl_glColorSubTable(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLsizei _start = (GLsizei)args[1]->Int32Value();
    GLsizei _count = (GLsizei)args[2]->Int32Value();
    GLenum _format = (GLenum)args[3]->Int32Value();
    GLenum _type = (GLenum)args[4]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[5])) {
        return ThrowException(Exception::Error(
                              String::New("5nth argument needs to be a buffer")));
    }
    Buffer * data_buffer = ObjectWrap::Unwrap<Buffer>(args[5]->ToObject());
    const GLvoid *_data = (GLvoid *)data_buffer->data();
    glColorSubTable(_target, _start, _count, _format, _type, _data);

    return Undefined();
  }


  /**
   * glColorTable
   *
   * @param GLenum target
   * @param GLenum internalformat
   * @param GLsizei width
   * @param GLenum format
   * @param GLenum type
   * @param const GLvoid *table
   * @return void
   */
  Handle<Value> gl_glColorTable(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _internalformat = (GLenum)args[1]->Int32Value();
    GLsizei _width = (GLsizei)args[2]->Int32Value();
    GLenum _format = (GLenum)args[3]->Int32Value();
    GLenum _type = (GLenum)args[4]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[5])) {
        return ThrowException(Exception::Error(
                              String::New("5nth argument needs to be a buffer")));
    }
    Buffer * table_buffer = ObjectWrap::Unwrap<Buffer>(args[5]->ToObject());
    const GLvoid *_table = (GLvoid *)table_buffer->data();
    glColorTable(_target, _internalformat, _width, _format, _type, _table);

    return Undefined();
  }


  /**
   * glColorTableParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> gl_glColorTableParameterfv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLfloat _params = (GLfloat)args[2]->NumberValue();
    glColorTableParameterfv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glColorTableParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> gl_glColorTableParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLint _params = (GLint)args[2]->Int32Value();
    glColorTableParameteriv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glConvolutionFilter1D
   *
   * @param GLenum target
   * @param GLenum internalformat
   * @param GLsizei width
   * @param GLenum format
   * @param GLenum type
   * @param const GLvoid *image
   * @return void
   */
  Handle<Value> gl_glConvolutionFilter1D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _internalformat = (GLenum)args[1]->Int32Value();
    GLsizei _width = (GLsizei)args[2]->Int32Value();
    GLenum _format = (GLenum)args[3]->Int32Value();
    GLenum _type = (GLenum)args[4]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[5])) {
        return ThrowException(Exception::Error(
                              String::New("5nth argument needs to be a buffer")));
    }
    Buffer * image_buffer = ObjectWrap::Unwrap<Buffer>(args[5]->ToObject());
    const GLvoid *_image = (GLvoid *)image_buffer->data();
    glConvolutionFilter1D(_target, _internalformat, _width, _format, _type, _image);

    return Undefined();
  }


  /**
   * glConvolutionFilter2D
   *
   * @param GLenum target
   * @param GLenum internalformat
   * @param GLsizei width
   * @param GLsizei height
   * @param GLenum format
   * @param GLenum type
   * @param const GLvoid *image
   * @return void
   */
  Handle<Value> gl_glConvolutionFilter2D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _internalformat = (GLenum)args[1]->Int32Value();
    GLsizei _width = (GLsizei)args[2]->Int32Value();
    GLsizei _height = (GLsizei)args[3]->Int32Value();
    GLenum _format = (GLenum)args[4]->Int32Value();
    GLenum _type = (GLenum)args[5]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[6])) {
        return ThrowException(Exception::Error(
                              String::New("6nth argument needs to be a buffer")));
    }
    Buffer * image_buffer = ObjectWrap::Unwrap<Buffer>(args[6]->ToObject());
    const GLvoid *_image = (GLvoid *)image_buffer->data();
    glConvolutionFilter2D(_target, _internalformat, _width, _height, _format, _type, _image);

    return Undefined();
  }


  /**
   * glConvolutionParameterf
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat params
   * @return void
   */
  Handle<Value> gl_glConvolutionParameterf(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glConvolutionParameterf(_target, _pname, _params);

    return Undefined();
  }


  /**
   * glConvolutionParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> gl_glConvolutionParameterfv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLfloat _params = (GLfloat)args[2]->NumberValue();
    glConvolutionParameterfv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glConvolutionParameteri
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint params
   * @return void
   */
  Handle<Value> gl_glConvolutionParameteri(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glConvolutionParameteri(_target, _pname, _params);

    return Undefined();
  }


  /**
   * glConvolutionParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> gl_glConvolutionParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLint _params = (GLint)args[2]->Int32Value();
    glConvolutionParameteriv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glCopyColorSubTable
   *
   * @param GLenum target
   * @param GLsizei start
   * @param GLint x
   * @param GLint y
   * @param GLsizei width
   * @return void
   */
  Handle<Value> gl_glCopyColorSubTable(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLsizei _start = (GLsizei)args[1]->Int32Value();
    GLint _x = (GLint)args[2]->Int32Value();
    GLint _y = (GLint)args[3]->Int32Value();
    GLsizei _width = (GLsizei)args[4]->Int32Value();
    glCopyColorSubTable(_target, _start, _x, _y, _width);

    return Undefined();
  }


  /**
   * glCopyColorTable
   *
   * @param GLenum target
   * @param GLenum internalformat
   * @param GLint x
   * @param GLint y
   * @param GLsizei width
   * @return void
   */
  Handle<Value> gl_glCopyColorTable(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _internalformat = (GLenum)args[1]->Int32Value();
    GLint _x = (GLint)args[2]->Int32Value();
    GLint _y = (GLint)args[3]->Int32Value();
    GLsizei _width = (GLsizei)args[4]->Int32Value();
    glCopyColorTable(_target, _internalformat, _x, _y, _width);

    return Undefined();
  }


  /**
   * glCopyConvolutionFilter1D
   *
   * @param GLenum target
   * @param GLenum internalformat
   * @param GLint x
   * @param GLint y
   * @param GLsizei width
   * @return void
   */
  Handle<Value> gl_glCopyConvolutionFilter1D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _internalformat = (GLenum)args[1]->Int32Value();
    GLint _x = (GLint)args[2]->Int32Value();
    GLint _y = (GLint)args[3]->Int32Value();
    GLsizei _width = (GLsizei)args[4]->Int32Value();
    glCopyConvolutionFilter1D(_target, _internalformat, _x, _y, _width);

    return Undefined();
  }


  /**
   * glCopyConvolutionFilter2D
   *
   * @param GLenum target
   * @param GLenum internalformat
   * @param GLint x
   * @param GLint y
   * @param GLsizei width
   * @param GLsizei height
   * @return void
   */
  Handle<Value> gl_glCopyConvolutionFilter2D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _internalformat = (GLenum)args[1]->Int32Value();
    GLint _x = (GLint)args[2]->Int32Value();
    GLint _y = (GLint)args[3]->Int32Value();
    GLsizei _width = (GLsizei)args[4]->Int32Value();
    GLsizei _height = (GLsizei)args[5]->Int32Value();
    glCopyConvolutionFilter2D(_target, _internalformat, _x, _y, _width, _height);

    return Undefined();
  }


  /**
   * glCopyPixels
   *
   * @param GLint x
   * @param GLint y
   * @param GLsizei width
   * @param GLsizei height
   * @param GLenum type
   * @return void
   */
  Handle<Value> gl_glCopyPixels(const Arguments& args) {
    HandleScope scope;
    GLint _x = (GLint)args[0]->Int32Value();
    GLint _y = (GLint)args[1]->Int32Value();
    GLsizei _width = (GLsizei)args[2]->Int32Value();
    GLsizei _height = (GLsizei)args[3]->Int32Value();
    GLenum _type = (GLenum)args[4]->Int32Value();
    glCopyPixels(_x, _y, _width, _height, _type);

    return Undefined();
  }


  /**
   * glCopyTexImage1D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLenum internalformat
   * @param GLint x
   * @param GLint y
   * @param GLsizei width
   * @param GLint border
   * @return void
   */
  Handle<Value> gl_glCopyTexImage1D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLenum _internalformat = (GLenum)args[2]->Int32Value();
    GLint _x = (GLint)args[3]->Int32Value();
    GLint _y = (GLint)args[4]->Int32Value();
    GLsizei _width = (GLsizei)args[5]->Int32Value();
    GLint _border = (GLint)args[6]->Int32Value();
    glCopyTexImage1D(_target, _level, _internalformat, _x, _y, _width, _border);

    return Undefined();
  }


  /**
   * glCopyTexImage2D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLenum internalformat
   * @param GLint x
   * @param GLint y
   * @param GLsizei width
   * @param GLsizei height
   * @param GLint border
   * @return void
   */
  Handle<Value> gl_glCopyTexImage2D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLenum _internalformat = (GLenum)args[2]->Int32Value();
    GLint _x = (GLint)args[3]->Int32Value();
    GLint _y = (GLint)args[4]->Int32Value();
    GLsizei _width = (GLsizei)args[5]->Int32Value();
    GLsizei _height = (GLsizei)args[6]->Int32Value();
    GLint _border = (GLint)args[7]->Int32Value();
    glCopyTexImage2D(_target, _level, _internalformat, _x, _y, _width, _height, _border);

    return Undefined();
  }


  /**
   * glCopyTexSubImage1D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLint xoffset
   * @param GLint x
   * @param GLint y
   * @param GLsizei width
   * @return void
   */
  Handle<Value> gl_glCopyTexSubImage1D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLint _xoffset = (GLint)args[2]->Int32Value();
    GLint _x = (GLint)args[3]->Int32Value();
    GLint _y = (GLint)args[4]->Int32Value();
    GLsizei _width = (GLsizei)args[5]->Int32Value();
    glCopyTexSubImage1D(_target, _level, _xoffset, _x, _y, _width);

    return Undefined();
  }


  /**
   * glCopyTexSubImage2D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLint xoffset
   * @param GLint yoffset
   * @param GLint x
   * @param GLint y
   * @param GLsizei width
   * @param GLsizei height
   * @return void
   */
  Handle<Value> gl_glCopyTexSubImage2D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLint _xoffset = (GLint)args[2]->Int32Value();
    GLint _yoffset = (GLint)args[3]->Int32Value();
    GLint _x = (GLint)args[4]->Int32Value();
    GLint _y = (GLint)args[5]->Int32Value();
    GLsizei _width = (GLsizei)args[6]->Int32Value();
    GLsizei _height = (GLsizei)args[7]->Int32Value();
    glCopyTexSubImage2D(_target, _level, _xoffset, _yoffset, _x, _y, _width, _height);

    return Undefined();
  }


  /**
   * glCopyTexSubImage3D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLint xoffset
   * @param GLint yoffset
   * @param GLint zoffset
   * @param GLint x
   * @param GLint y
   * @param GLsizei width
   * @param GLsizei height
   * @return void
   */
  Handle<Value> gl_glCopyTexSubImage3D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLint _xoffset = (GLint)args[2]->Int32Value();
    GLint _yoffset = (GLint)args[3]->Int32Value();
    GLint _zoffset = (GLint)args[4]->Int32Value();
    GLint _x = (GLint)args[5]->Int32Value();
    GLint _y = (GLint)args[6]->Int32Value();
    GLsizei _width = (GLsizei)args[7]->Int32Value();
    GLsizei _height = (GLsizei)args[8]->Int32Value();
    glCopyTexSubImage3D(_target, _level, _xoffset, _yoffset, _zoffset, _x, _y, _width, _height);

    return Undefined();
  }


  /**
   * glCullFace
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> gl_glCullFace(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    glCullFace(_mode);

    return Undefined();
  }


  /**
   * glDeleteLists
   *
   * @param GLuint list
   * @param GLsizei range
   * @return void
   */
  Handle<Value> gl_glDeleteLists(const Arguments& args) {
    HandleScope scope;
    GLuint _list = (GLuint)args[0]->Uint32Value();
    GLsizei _range = (GLsizei)args[1]->Int32Value();
    glDeleteLists(_list, _range);

    return Undefined();
  }


  /**
   * glDeleteTextures
   *
   * @param GLsizei n
   * @param const GLuint *textures
   * @return void
   */
  Handle<Value> gl_glDeleteTextures(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    const GLuint _textures = (GLuint)args[1]->Uint32Value();
    glDeleteTextures(_n, &_textures);

    args[1] = Number::New(_textures);

    return Undefined();
  }


  /**
   * glDepthFunc
   *
   * @param GLenum func
   * @return void
   */
  Handle<Value> gl_glDepthFunc(const Arguments& args) {
    HandleScope scope;
    GLenum _func = (GLenum)args[0]->Int32Value();
    glDepthFunc(_func);

    return Undefined();
  }


  /**
   * glDepthMask
   *
   * @param GLboolean flag
   * @return void
   */
  Handle<Value> gl_glDepthMask(const Arguments& args) {
    HandleScope scope;
    GLboolean _flag = (GLboolean)args[0]->Int32Value();
    glDepthMask(_flag);

    return Undefined();
  }


  /**
   * glDepthRange
   *
   * @param GLclampd zNear
   * @param GLclampd zFar
   * @return void
   */
  Handle<Value> gl_glDepthRange(const Arguments& args) {
    HandleScope scope;
    GLclampd _zNear = (GLclampd)args[0]->NumberValue();
    GLclampd _zFar = (GLclampd)args[1]->NumberValue();
    glDepthRange(_zNear, _zFar);

    return Undefined();
  }


  /**
   * glDisable
   *
   * @param GLenum cap
   * @return void
   */
  Handle<Value> gl_glDisable(const Arguments& args) {
    HandleScope scope;
    GLenum _cap = (GLenum)args[0]->Int32Value();
    glDisable(_cap);

    return Undefined();
  }


  /**
   * glDisableClientState
   *
   * @param GLenum array
   * @return void
   */
  Handle<Value> gl_glDisableClientState(const Arguments& args) {
    HandleScope scope;
    GLenum _array = (GLenum)args[0]->Int32Value();
    glDisableClientState(_array);

    return Undefined();
  }


  /**
   * glDrawArrays
   *
   * @param GLenum mode
   * @param GLint first
   * @param GLsizei count
   * @return void
   */
  Handle<Value> gl_glDrawArrays(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    GLint _first = (GLint)args[1]->Int32Value();
    GLsizei _count = (GLsizei)args[2]->Int32Value();
    glDrawArrays(_mode, _first, _count);

    return Undefined();
  }


  /**
   * glDrawBuffer
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> gl_glDrawBuffer(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    glDrawBuffer(_mode);

    return Undefined();
  }


  /**
   * glDrawElements
   *
   * @param GLenum mode
   * @param GLsizei count
   * @param GLenum type
   * @param const GLvoid *indices
   * @return void
   */
  Handle<Value> gl_glDrawElements(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    GLenum _type = (GLenum)args[2]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[3])) {
        return ThrowException(Exception::Error(
                              String::New("3nth argument needs to be a buffer")));
    }
    Buffer * indices_buffer = ObjectWrap::Unwrap<Buffer>(args[3]->ToObject());
    const GLvoid *_indices = (GLvoid *)indices_buffer->data();
    glDrawElements(_mode, _count, _type, _indices);

    return Undefined();
  }


  /**
   * glDrawPixels
   *
   * @param GLsizei width
   * @param GLsizei height
   * @param GLenum format
   * @param GLenum type
   * @param const GLvoid *pixels
   * @return void
   */
  Handle<Value> gl_glDrawPixels(const Arguments& args) {
    HandleScope scope;
    GLsizei _width = (GLsizei)args[0]->Int32Value();
    GLsizei _height = (GLsizei)args[1]->Int32Value();
    GLenum _format = (GLenum)args[2]->Int32Value();
    GLenum _type = (GLenum)args[3]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[4])) {
        return ThrowException(Exception::Error(
                              String::New("4nth argument needs to be a buffer")));
    }
    Buffer * pixels_buffer = ObjectWrap::Unwrap<Buffer>(args[4]->ToObject());
    const GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glDrawPixels(_width, _height, _format, _type, _pixels);

    return Undefined();
  }


  /**
   * glDrawRangeElements
   *
   * @param GLenum mode
   * @param GLuint start
   * @param GLuint end
   * @param GLsizei count
   * @param GLenum type
   * @param const GLvoid *indices
   * @return void
   */
  Handle<Value> gl_glDrawRangeElements(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    GLuint _start = (GLuint)args[1]->Uint32Value();
    GLuint _end = (GLuint)args[2]->Uint32Value();
    GLsizei _count = (GLsizei)args[3]->Int32Value();
    GLenum _type = (GLenum)args[4]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[5])) {
        return ThrowException(Exception::Error(
                              String::New("5nth argument needs to be a buffer")));
    }
    Buffer * indices_buffer = ObjectWrap::Unwrap<Buffer>(args[5]->ToObject());
    const GLvoid *_indices = (GLvoid *)indices_buffer->data();
    glDrawRangeElements(_mode, _start, _end, _count, _type, _indices);

    return Undefined();
  }


  /**
   * glEdgeFlag
   *
   * @param GLboolean flag
   * @return void
   */
  Handle<Value> gl_glEdgeFlag(const Arguments& args) {
    HandleScope scope;
    GLboolean _flag = (GLboolean)args[0]->Int32Value();
    glEdgeFlag(_flag);

    return Undefined();
  }


  /**
   * glEdgeFlagPointer
   *
   * @param GLsizei stride
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> gl_glEdgeFlagPointer(const Arguments& args) {
    HandleScope scope;
    GLsizei _stride = (GLsizei)args[0]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[1])) {
        return ThrowException(Exception::Error(
                              String::New("1nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[1]->ToObject());
    const GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glEdgeFlagPointer(_stride, _pointer);

    return Undefined();
  }


  /**
   * glEdgeFlagv
   *
   * @param const GLboolean *flag
   * @return void
   */
  Handle<Value> gl_glEdgeFlagv(const Arguments& args) {
    HandleScope scope;
    const GLboolean _flag = (GLboolean)args[0]->Int32Value();
    glEdgeFlagv(&_flag);

    args[0] = Number::New(_flag);

    return Undefined();
  }


  /**
   * glEnable
   *
   * @param GLenum cap
   * @return void
   */
  Handle<Value> gl_glEnable(const Arguments& args) {
    HandleScope scope;
    GLenum _cap = (GLenum)args[0]->Int32Value();
    glEnable(_cap);

    return Undefined();
  }


  /**
   * glEnableClientState
   *
   * @param GLenum array
   * @return void
   */
  Handle<Value> gl_glEnableClientState(const Arguments& args) {
    HandleScope scope;
    GLenum _array = (GLenum)args[0]->Int32Value();
    glEnableClientState(_array);

    return Undefined();
  }


  /**
   * glEnd
   *
   * @return void
   */
  Handle<Value> gl_glEnd(const Arguments& args) {
    glEnd();
    return Undefined();
  }


  /**
   * glEndList
   *
   * @return void
   */
  Handle<Value> gl_glEndList(const Arguments& args) {
    glEndList();
    return Undefined();
  }


  /**
   * glEvalCoord1d
   *
   * @param GLdouble u
   * @return void
   */
  Handle<Value> gl_glEvalCoord1d(const Arguments& args) {
    HandleScope scope;
    GLdouble _u = (GLdouble)args[0]->NumberValue();
    glEvalCoord1d(_u);

    return Undefined();
  }


  /**
   * glEvalCoord1dv
   *
   * @param const GLdouble *u
   * @return void
   */
  Handle<Value> gl_glEvalCoord1dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _u = (GLdouble)args[0]->NumberValue();
    glEvalCoord1dv(&_u);

    args[0] = Number::New(_u);

    return Undefined();
  }


  /**
   * glEvalCoord1f
   *
   * @param GLfloat u
   * @return void
   */
  Handle<Value> gl_glEvalCoord1f(const Arguments& args) {
    HandleScope scope;
    GLfloat _u = (GLfloat)args[0]->NumberValue();
    glEvalCoord1f(_u);

    return Undefined();
  }


  /**
   * glEvalCoord1fv
   *
   * @param const GLfloat *u
   * @return void
   */
  Handle<Value> gl_glEvalCoord1fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _u = (GLfloat)args[0]->NumberValue();
    glEvalCoord1fv(&_u);

    args[0] = Number::New(_u);

    return Undefined();
  }


  /**
   * glEvalCoord2d
   *
   * @param GLdouble u
   * @param GLdouble v
   * @return void
   */
  Handle<Value> gl_glEvalCoord2d(const Arguments& args) {
    HandleScope scope;
    GLdouble _u = (GLdouble)args[0]->NumberValue();
    GLdouble _v = (GLdouble)args[1]->NumberValue();
    glEvalCoord2d(_u, _v);

    return Undefined();
  }


  /**
   * glEvalCoord2dv
   *
   * @param const GLdouble *u
   * @return void
   */
  Handle<Value> gl_glEvalCoord2dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _u = (GLdouble)args[0]->NumberValue();
    glEvalCoord2dv(&_u);

    args[0] = Number::New(_u);

    return Undefined();
  }


  /**
   * glEvalCoord2f
   *
   * @param GLfloat u
   * @param GLfloat v
   * @return void
   */
  Handle<Value> gl_glEvalCoord2f(const Arguments& args) {
    HandleScope scope;
    GLfloat _u = (GLfloat)args[0]->NumberValue();
    GLfloat _v = (GLfloat)args[1]->NumberValue();
    glEvalCoord2f(_u, _v);

    return Undefined();
  }


  /**
   * glEvalCoord2fv
   *
   * @param const GLfloat *u
   * @return void
   */
  Handle<Value> gl_glEvalCoord2fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _u = (GLfloat)args[0]->NumberValue();
    glEvalCoord2fv(&_u);

    args[0] = Number::New(_u);

    return Undefined();
  }


  /**
   * glEvalMesh1
   *
   * @param GLenum mode
   * @param GLint i1
   * @param GLint i2
   * @return void
   */
  Handle<Value> gl_glEvalMesh1(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    GLint _i1 = (GLint)args[1]->Int32Value();
    GLint _i2 = (GLint)args[2]->Int32Value();
    glEvalMesh1(_mode, _i1, _i2);

    return Undefined();
  }


  /**
   * glEvalMesh2
   *
   * @param GLenum mode
   * @param GLint i1
   * @param GLint i2
   * @param GLint j1
   * @param GLint j2
   * @return void
   */
  Handle<Value> gl_glEvalMesh2(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    GLint _i1 = (GLint)args[1]->Int32Value();
    GLint _i2 = (GLint)args[2]->Int32Value();
    GLint _j1 = (GLint)args[3]->Int32Value();
    GLint _j2 = (GLint)args[4]->Int32Value();
    glEvalMesh2(_mode, _i1, _i2, _j1, _j2);

    return Undefined();
  }


  /**
   * glEvalPoint1
   *
   * @param GLint i
   * @return void
   */
  Handle<Value> gl_glEvalPoint1(const Arguments& args) {
    HandleScope scope;
    GLint _i = (GLint)args[0]->Int32Value();
    glEvalPoint1(_i);

    return Undefined();
  }


  /**
   * glEvalPoint2
   *
   * @param GLint i
   * @param GLint j
   * @return void
   */
  Handle<Value> gl_glEvalPoint2(const Arguments& args) {
    HandleScope scope;
    GLint _i = (GLint)args[0]->Int32Value();
    GLint _j = (GLint)args[1]->Int32Value();
    glEvalPoint2(_i, _j);

    return Undefined();
  }


  /**
   * glFeedbackBuffer
   *
   * @param GLsizei size
   * @param GLenum type
   * @param GLfloat *buffer
   * @return void
   */
  Handle<Value> gl_glFeedbackBuffer(const Arguments& args) {
    HandleScope scope;
    GLsizei _size = (GLsizei)args[0]->Int32Value();
    GLenum _type = (GLenum)args[1]->Int32Value();
    GLfloat _buffer = (GLfloat)args[2]->NumberValue();
    glFeedbackBuffer(_size, _type, &_buffer);

    args[2] = Number::New(_buffer);

    return Undefined();
  }


  /**
   * glFinish
   *
   * @return void
   */
  Handle<Value> gl_glFinish(const Arguments& args) {
    glFinish();
    return Undefined();
  }


  /**
   * glFlush
   *
   * @return void
   */
  Handle<Value> gl_glFlush(const Arguments& args) {
    glFlush();
    return Undefined();
  }


  /**
   * glFogf
   *
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> gl_glFogf(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLfloat _param = (GLfloat)args[1]->NumberValue();
    glFogf(_pname, _param);

    return Undefined();
  }


  /**
   * glFogfv
   *
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> gl_glFogfv(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    const GLfloat _params = (GLfloat)args[1]->NumberValue();
    glFogfv(_pname, &_params);

    args[1] = Number::New(_params);

    return Undefined();
  }


  /**
   * glFogi
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> gl_glFogi(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLint _param = (GLint)args[1]->Int32Value();
    glFogi(_pname, _param);

    return Undefined();
  }


  /**
   * glFogiv
   *
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> gl_glFogiv(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    const GLint _params = (GLint)args[1]->Int32Value();
    glFogiv(_pname, &_params);

    args[1] = Number::New(_params);

    return Undefined();
  }


  /**
   * glFrontFace
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> gl_glFrontFace(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    glFrontFace(_mode);

    return Undefined();
  }


  /**
   * glFrustum
   *
   * @param GLdouble left
   * @param GLdouble right
   * @param GLdouble bottom
   * @param GLdouble top
   * @param GLdouble zNear
   * @param GLdouble zFar
   * @return void
   */
  Handle<Value> gl_glFrustum(const Arguments& args) {
    HandleScope scope;
    GLdouble _left = (GLdouble)args[0]->NumberValue();
    GLdouble _right = (GLdouble)args[1]->NumberValue();
    GLdouble _bottom = (GLdouble)args[2]->NumberValue();
    GLdouble _top = (GLdouble)args[3]->NumberValue();
    GLdouble _zNear = (GLdouble)args[4]->NumberValue();
    GLdouble _zFar = (GLdouble)args[5]->NumberValue();
    glFrustum(_left, _right, _bottom, _top, _zNear, _zFar);

    return Undefined();
  }


  /**
   * glGenLists
   *
   * @param GLsizei range
   * @return GLuint
   */
  Handle<Value> gl_glGenLists(const Arguments& args) {
    HandleScope scope;
    GLsizei _range = (GLsizei)args[0]->Int32Value();
    GLuint _ret = glGenLists(_range);

    return scope.Close(Number::New(_ret));
  }


  /**
   * glGenTextures
   *
   * @param GLsizei n
   * @param GLuint *textures
   * @return void
   */
  Handle<Value> gl_glGenTextures(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    GLuint _textures = (GLuint)args[1]->Uint32Value();
    glGenTextures(_n, &_textures);

    args[1] = Number::New(_textures);

    return Undefined();
  }


  /**
   * glGetBooleanv
   *
   * @param GLenum pname
   * @param GLboolean *params
   * @return void
   */
  Handle<Value> gl_glGetBooleanv(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLboolean _params = (GLboolean)args[1]->Int32Value();
    glGetBooleanv(_pname, &_params);

    args[1] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetClipPlane
   *
   * @param GLenum plane
   * @param GLdouble *equation
   * @return void
   */
  Handle<Value> gl_glGetClipPlane(const Arguments& args) {
    HandleScope scope;
    GLenum _plane = (GLenum)args[0]->Int32Value();
    GLdouble _equation = (GLdouble)args[1]->NumberValue();
    glGetClipPlane(_plane, &_equation);

    args[1] = Number::New(_equation);

    return Undefined();
  }


  /**
   * glGetColorTable
   *
   * @param GLenum target
   * @param GLenum format
   * @param GLenum type
   * @param GLvoid *table
   * @return void
   */
  Handle<Value> gl_glGetColorTable(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _format = (GLenum)args[1]->Int32Value();
    GLenum _type = (GLenum)args[2]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[3])) {
        return ThrowException(Exception::Error(
                              String::New("3nth argument needs to be a buffer")));
    }
    Buffer * table_buffer = ObjectWrap::Unwrap<Buffer>(args[3]->ToObject());
    GLvoid *_table = (GLvoid *)table_buffer->data();
    glGetColorTable(_target, _format, _type, _table);

    return Undefined();
  }


  /**
   * glGetColorTableParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetColorTableParameterfv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glGetColorTableParameterfv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetColorTableParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetColorTableParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetColorTableParameteriv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetConvolutionFilter
   *
   * @param GLenum target
   * @param GLenum format
   * @param GLenum type
   * @param GLvoid *image
   * @return void
   */
  Handle<Value> gl_glGetConvolutionFilter(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _format = (GLenum)args[1]->Int32Value();
    GLenum _type = (GLenum)args[2]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[3])) {
        return ThrowException(Exception::Error(
                              String::New("3nth argument needs to be a buffer")));
    }
    Buffer * image_buffer = ObjectWrap::Unwrap<Buffer>(args[3]->ToObject());
    GLvoid *_image = (GLvoid *)image_buffer->data();
    glGetConvolutionFilter(_target, _format, _type, _image);

    return Undefined();
  }


  /**
   * glGetConvolutionParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetConvolutionParameterfv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glGetConvolutionParameterfv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetConvolutionParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetConvolutionParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetConvolutionParameteriv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetDoublev
   *
   * @param GLenum pname
   * @param GLdouble *params
   * @return void
   */
  Handle<Value> gl_glGetDoublev(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLdouble _params = (GLdouble)args[1]->NumberValue();
    glGetDoublev(_pname, &_params);

    args[1] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetError
   *
   * @return GLenum
   */
  Handle<Value> gl_glGetError(const Arguments& args) {
    HandleScope scope;
    GLenum _ret = glGetError();

    return scope.Close(Number::New(_ret));
  }


  /**
   * glGetFloatv
   *
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetFloatv(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLfloat _params = (GLfloat)args[1]->NumberValue();
    glGetFloatv(_pname, &_params);

    args[1] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetHistogram
   *
   * @param GLenum target
   * @param GLboolean reset
   * @param GLenum format
   * @param GLenum type
   * @param GLvoid *values
   * @return void
   */
  Handle<Value> gl_glGetHistogram(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLboolean _reset = (GLboolean)args[1]->Int32Value();
    GLenum _format = (GLenum)args[2]->Int32Value();
    GLenum _type = (GLenum)args[3]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[4])) {
        return ThrowException(Exception::Error(
                              String::New("4nth argument needs to be a buffer")));
    }
    Buffer * values_buffer = ObjectWrap::Unwrap<Buffer>(args[4]->ToObject());
    GLvoid *_values = (GLvoid *)values_buffer->data();
    glGetHistogram(_target, _reset, _format, _type, _values);

    return Undefined();
  }


  /**
   * glGetHistogramParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetHistogramParameterfv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glGetHistogramParameterfv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetHistogramParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetHistogramParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetHistogramParameteriv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetIntegerv
   *
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetIntegerv(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLint _params = (GLint)args[1]->Int32Value();
    glGetIntegerv(_pname, &_params);

    args[1] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetLightfv
   *
   * @param GLenum light
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetLightfv(const Arguments& args) {
    HandleScope scope;
    GLenum _light = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glGetLightfv(_light, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetLightiv
   *
   * @param GLenum light
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetLightiv(const Arguments& args) {
    HandleScope scope;
    GLenum _light = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetLightiv(_light, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetMapdv
   *
   * @param GLenum target
   * @param GLenum query
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glGetMapdv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _query = (GLenum)args[1]->Int32Value();
    GLdouble _v = (GLdouble)args[2]->NumberValue();
    glGetMapdv(_target, _query, &_v);

    args[2] = Number::New(_v);

    return Undefined();
  }


  /**
   * glGetMapfv
   *
   * @param GLenum target
   * @param GLenum query
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glGetMapfv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _query = (GLenum)args[1]->Int32Value();
    GLfloat _v = (GLfloat)args[2]->NumberValue();
    glGetMapfv(_target, _query, &_v);

    args[2] = Number::New(_v);

    return Undefined();
  }


  /**
   * glGetMapiv
   *
   * @param GLenum target
   * @param GLenum query
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glGetMapiv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _query = (GLenum)args[1]->Int32Value();
    GLint _v = (GLint)args[2]->Int32Value();
    glGetMapiv(_target, _query, &_v);

    args[2] = Number::New(_v);

    return Undefined();
  }


  /**
   * glGetMaterialfv
   *
   * @param GLenum face
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetMaterialfv(const Arguments& args) {
    HandleScope scope;
    GLenum _face = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glGetMaterialfv(_face, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetMaterialiv
   *
   * @param GLenum face
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetMaterialiv(const Arguments& args) {
    HandleScope scope;
    GLenum _face = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetMaterialiv(_face, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetMinmax
   *
   * @param GLenum target
   * @param GLboolean reset
   * @param GLenum format
   * @param GLenum type
   * @param GLvoid *values
   * @return void
   */
  Handle<Value> gl_glGetMinmax(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLboolean _reset = (GLboolean)args[1]->Int32Value();
    GLenum _format = (GLenum)args[2]->Int32Value();
    GLenum _type = (GLenum)args[3]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[4])) {
        return ThrowException(Exception::Error(
                              String::New("4nth argument needs to be a buffer")));
    }
    Buffer * values_buffer = ObjectWrap::Unwrap<Buffer>(args[4]->ToObject());
    GLvoid *_values = (GLvoid *)values_buffer->data();
    glGetMinmax(_target, _reset, _format, _type, _values);

    return Undefined();
  }


  /**
   * glGetMinmaxParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetMinmaxParameterfv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glGetMinmaxParameterfv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetMinmaxParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetMinmaxParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetMinmaxParameteriv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetPixelMapfv
   *
   * @param GLenum map
   * @param GLfloat *values
   * @return void
   */
  Handle<Value> gl_glGetPixelMapfv(const Arguments& args) {
    HandleScope scope;
    GLenum _map = (GLenum)args[0]->Int32Value();
    GLfloat _values = (GLfloat)args[1]->NumberValue();
    glGetPixelMapfv(_map, &_values);

    args[1] = Number::New(_values);

    return Undefined();
  }


  /**
   * glGetPixelMapuiv
   *
   * @param GLenum map
   * @param GLuint *values
   * @return void
   */
  Handle<Value> gl_glGetPixelMapuiv(const Arguments& args) {
    HandleScope scope;
    GLenum _map = (GLenum)args[0]->Int32Value();
    GLuint _values = (GLuint)args[1]->Uint32Value();
    glGetPixelMapuiv(_map, &_values);

    args[1] = Number::New(_values);

    return Undefined();
  }


  /**
   * glGetPixelMapusv
   *
   * @param GLenum map
   * @param GLushort *values
   * @return void
   */
  Handle<Value> gl_glGetPixelMapusv(const Arguments& args) {
    HandleScope scope;
    GLenum _map = (GLenum)args[0]->Int32Value();
    GLushort _values = (GLushort)args[1]->Uint32Value();
    glGetPixelMapusv(_map, &_values);

    args[1] = Number::New(_values);

    return Undefined();
  }


  /**
   * glGetPointerv
   *
   * @param GLenum pname
   * @param GLvoid* *params
   * @return void
   */
  Handle<Value> gl_glGetPointerv(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[1])) {
        return ThrowException(Exception::Error(
                              String::New("1nth argument needs to be a buffer")));
    }
    Buffer * params_buffer = ObjectWrap::Unwrap<Buffer>(args[1]->ToObject());
    GLvoid *_params = (GLvoid *)params_buffer->data();
    glGetPointerv(_pname, &_params);

    return Undefined();
  }


  /**
   * glGetPolygonStipple
   *
   * @param GLubyte *mask
   * @return void
   */
  Handle<Value> gl_glGetPolygonStipple(const Arguments& args) {
    HandleScope scope;
    GLubyte _mask = (GLubyte)args[0]->Int32Value();
    glGetPolygonStipple(&_mask);

    args[0] = Number::New(_mask);

    return Undefined();
  }


  /**
   * glGetSeparableFilter
   *
   * @param GLenum target
   * @param GLenum format
   * @param GLenum type
   * @param GLvoid *row
   * @param GLvoid *column
   * @param GLvoid *span
   * @return void
   */
  Handle<Value> gl_glGetSeparableFilter(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _format = (GLenum)args[1]->Int32Value();
    GLenum _type = (GLenum)args[2]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[3])) {
        return ThrowException(Exception::Error(
                              String::New("3nth argument needs to be a buffer")));
    }
    Buffer * row_buffer = ObjectWrap::Unwrap<Buffer>(args[3]->ToObject());
    GLvoid *_row = (GLvoid *)row_buffer->data();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[4])) {
        return ThrowException(Exception::Error(
                              String::New("4nth argument needs to be a buffer")));
    }
    Buffer * column_buffer = ObjectWrap::Unwrap<Buffer>(args[4]->ToObject());
    GLvoid *_column = (GLvoid *)column_buffer->data();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[5])) {
        return ThrowException(Exception::Error(
                              String::New("5nth argument needs to be a buffer")));
    }
    Buffer * span_buffer = ObjectWrap::Unwrap<Buffer>(args[5]->ToObject());
    GLvoid *_span = (GLvoid *)span_buffer->data();
    glGetSeparableFilter(_target, _format, _type, _row, _column, _span);

    return Undefined();
  }


  /**
   * glGetTexEnvfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetTexEnvfv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glGetTexEnvfv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetTexEnviv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetTexEnviv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetTexEnviv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetTexGendv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLdouble *params
   * @return void
   */
  Handle<Value> gl_glGetTexGendv(const Arguments& args) {
    HandleScope scope;
    GLenum _coord = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLdouble _params = (GLdouble)args[2]->NumberValue();
    glGetTexGendv(_coord, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetTexGenfv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetTexGenfv(const Arguments& args) {
    HandleScope scope;
    GLenum _coord = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glGetTexGenfv(_coord, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetTexGeniv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetTexGeniv(const Arguments& args) {
    HandleScope scope;
    GLenum _coord = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetTexGeniv(_coord, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetTexImage
   *
   * @param GLenum target
   * @param GLint level
   * @param GLenum format
   * @param GLenum type
   * @param GLvoid *pixels
   * @return void
   */
  Handle<Value> gl_glGetTexImage(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLenum _format = (GLenum)args[2]->Int32Value();
    GLenum _type = (GLenum)args[3]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[4])) {
        return ThrowException(Exception::Error(
                              String::New("4nth argument needs to be a buffer")));
    }
    Buffer * pixels_buffer = ObjectWrap::Unwrap<Buffer>(args[4]->ToObject());
    GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glGetTexImage(_target, _level, _format, _type, _pixels);

    return Undefined();
  }


  /**
   * glGetTexLevelParameterfv
   *
   * @param GLenum target
   * @param GLint level
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetTexLevelParameterfv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLenum _pname = (GLenum)args[2]->Int32Value();
    GLfloat _params = (GLfloat)args[3]->NumberValue();
    glGetTexLevelParameterfv(_target, _level, _pname, &_params);

    args[3] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetTexLevelParameteriv
   *
   * @param GLenum target
   * @param GLint level
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetTexLevelParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLenum _pname = (GLenum)args[2]->Int32Value();
    GLint _params = (GLint)args[3]->Int32Value();
    glGetTexLevelParameteriv(_target, _level, _pname, &_params);

    args[3] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetTexParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetTexParameterfv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glGetTexParameterfv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetTexParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetTexParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetTexParameteriv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glHint
   *
   * @param GLenum target
   * @param GLenum mode
   * @return void
   */
  Handle<Value> gl_glHint(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _mode = (GLenum)args[1]->Int32Value();
    glHint(_target, _mode);

    return Undefined();
  }


  /**
   * glHistogram
   *
   * @param GLenum target
   * @param GLsizei width
   * @param GLenum internalformat
   * @param GLboolean sink
   * @return void
   */
  Handle<Value> gl_glHistogram(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLsizei _width = (GLsizei)args[1]->Int32Value();
    GLenum _internalformat = (GLenum)args[2]->Int32Value();
    GLboolean _sink = (GLboolean)args[3]->Int32Value();
    glHistogram(_target, _width, _internalformat, _sink);

    return Undefined();
  }


  /**
   * glIndexMask
   *
   * @param GLuint mask
   * @return void
   */
  Handle<Value> gl_glIndexMask(const Arguments& args) {
    HandleScope scope;
    GLuint _mask = (GLuint)args[0]->Uint32Value();
    glIndexMask(_mask);

    return Undefined();
  }


  /**
   * glIndexPointer
   *
   * @param GLenum type
   * @param GLsizei stride
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> gl_glIndexPointer(const Arguments& args) {
    HandleScope scope;
    GLenum _type = (GLenum)args[0]->Int32Value();
    GLsizei _stride = (GLsizei)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    const GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glIndexPointer(_type, _stride, _pointer);

    return Undefined();
  }


  /**
   * glIndexd
   *
   * @param GLdouble c
   * @return void
   */
  Handle<Value> gl_glIndexd(const Arguments& args) {
    HandleScope scope;
    GLdouble _c = (GLdouble)args[0]->NumberValue();
    glIndexd(_c);

    return Undefined();
  }


  /**
   * glIndexdv
   *
   * @param const GLdouble *c
   * @return void
   */
  Handle<Value> gl_glIndexdv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _c = (GLdouble)args[0]->NumberValue();
    glIndexdv(&_c);

    args[0] = Number::New(_c);

    return Undefined();
  }


  /**
   * glIndexf
   *
   * @param GLfloat c
   * @return void
   */
  Handle<Value> gl_glIndexf(const Arguments& args) {
    HandleScope scope;
    GLfloat _c = (GLfloat)args[0]->NumberValue();
    glIndexf(_c);

    return Undefined();
  }


  /**
   * glIndexfv
   *
   * @param const GLfloat *c
   * @return void
   */
  Handle<Value> gl_glIndexfv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _c = (GLfloat)args[0]->NumberValue();
    glIndexfv(&_c);

    args[0] = Number::New(_c);

    return Undefined();
  }


  /**
   * glIndexi
   *
   * @param GLint c
   * @return void
   */
  Handle<Value> gl_glIndexi(const Arguments& args) {
    HandleScope scope;
    GLint _c = (GLint)args[0]->Int32Value();
    glIndexi(_c);

    return Undefined();
  }


  /**
   * glIndexiv
   *
   * @param const GLint *c
   * @return void
   */
  Handle<Value> gl_glIndexiv(const Arguments& args) {
    HandleScope scope;
    const GLint _c = (GLint)args[0]->Int32Value();
    glIndexiv(&_c);

    args[0] = Number::New(_c);

    return Undefined();
  }


  /**
   * glIndexs
   *
   * @param GLshort c
   * @return void
   */
  Handle<Value> gl_glIndexs(const Arguments& args) {
    HandleScope scope;
    GLshort _c = (GLshort)args[0]->Int32Value();
    glIndexs(_c);

    return Undefined();
  }


  /**
   * glIndexsv
   *
   * @param const GLshort *c
   * @return void
   */
  Handle<Value> gl_glIndexsv(const Arguments& args) {
    HandleScope scope;
    const GLshort _c = (GLshort)args[0]->Int32Value();
    glIndexsv(&_c);

    args[0] = Number::New(_c);

    return Undefined();
  }


  /**
   * glIndexub
   *
   * @param GLubyte c
   * @return void
   */
  Handle<Value> gl_glIndexub(const Arguments& args) {
    HandleScope scope;
    GLubyte _c = (GLubyte)args[0]->Int32Value();
    glIndexub(_c);

    return Undefined();
  }


  /**
   * glIndexubv
   *
   * @param const GLubyte *c
   * @return void
   */
  Handle<Value> gl_glIndexubv(const Arguments& args) {
    HandleScope scope;
    const GLubyte _c = (GLubyte)args[0]->Int32Value();
    glIndexubv(&_c);

    args[0] = Number::New(_c);

    return Undefined();
  }


  /**
   * glInitNames
   *
   * @return void
   */
  Handle<Value> gl_glInitNames(const Arguments& args) {
    glInitNames();
    return Undefined();
  }


  /**
   * glInterleavedArrays
   *
   * @param GLenum format
   * @param GLsizei stride
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> gl_glInterleavedArrays(const Arguments& args) {
    HandleScope scope;
    GLenum _format = (GLenum)args[0]->Int32Value();
    GLsizei _stride = (GLsizei)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    const GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glInterleavedArrays(_format, _stride, _pointer);

    return Undefined();
  }


  /**
   * glIsEnabled
   *
   * @param GLenum cap
   * @return GLboolean
   */
  Handle<Value> gl_glIsEnabled(const Arguments& args) {
    HandleScope scope;
    GLenum _cap = (GLenum)args[0]->Int32Value();
    GLboolean _ret = glIsEnabled(_cap);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glIsList
   *
   * @param GLuint list
   * @return GLboolean
   */
  Handle<Value> gl_glIsList(const Arguments& args) {
    HandleScope scope;
    GLuint _list = (GLuint)args[0]->Uint32Value();
    GLboolean _ret = glIsList(_list);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glIsTexture
   *
   * @param GLuint texture
   * @return GLboolean
   */
  Handle<Value> gl_glIsTexture(const Arguments& args) {
    HandleScope scope;
    GLuint _texture = (GLuint)args[0]->Uint32Value();
    GLboolean _ret = glIsTexture(_texture);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glLightModelf
   *
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> gl_glLightModelf(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLfloat _param = (GLfloat)args[1]->NumberValue();
    glLightModelf(_pname, _param);

    return Undefined();
  }


  /**
   * glLightModelfv
   *
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> gl_glLightModelfv(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    const GLfloat _params = (GLfloat)args[1]->NumberValue();
    glLightModelfv(_pname, &_params);

    args[1] = Number::New(_params);

    return Undefined();
  }


  /**
   * glLightModeli
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> gl_glLightModeli(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLint _param = (GLint)args[1]->Int32Value();
    glLightModeli(_pname, _param);

    return Undefined();
  }


  /**
   * glLightModeliv
   *
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> gl_glLightModeliv(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    const GLint _params = (GLint)args[1]->Int32Value();
    glLightModeliv(_pname, &_params);

    args[1] = Number::New(_params);

    return Undefined();
  }


  /**
   * glLightf
   *
   * @param GLenum light
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> gl_glLightf(const Arguments& args) {
    HandleScope scope;
    GLenum _light = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _param = (GLfloat)args[2]->NumberValue();
    glLightf(_light, _pname, _param);

    return Undefined();
  }


  /**
   * glLightfv
   *
   * @param GLenum light
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> gl_glLightfv(const Arguments& args) {
    HandleScope scope;
    GLenum _light = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLfloat _params = (GLfloat)args[2]->NumberValue();
    glLightfv(_light, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glLighti
   *
   * @param GLenum light
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> gl_glLighti(const Arguments& args) {
    HandleScope scope;
    GLenum _light = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _param = (GLint)args[2]->Int32Value();
    glLighti(_light, _pname, _param);

    return Undefined();
  }


  /**
   * glLightiv
   *
   * @param GLenum light
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> gl_glLightiv(const Arguments& args) {
    HandleScope scope;
    GLenum _light = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLint _params = (GLint)args[2]->Int32Value();
    glLightiv(_light, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glLineStipple
   *
   * @param GLint factor
   * @param GLushort pattern
   * @return void
   */
  Handle<Value> gl_glLineStipple(const Arguments& args) {
    HandleScope scope;
    GLint _factor = (GLint)args[0]->Int32Value();
    GLushort _pattern = (GLushort)args[1]->Uint32Value();
    glLineStipple(_factor, _pattern);

    return Undefined();
  }


  /**
   * glLineWidth
   *
   * @param GLfloat width
   * @return void
   */
  Handle<Value> gl_glLineWidth(const Arguments& args) {
    HandleScope scope;
    GLfloat _width = (GLfloat)args[0]->NumberValue();
    glLineWidth(_width);

    return Undefined();
  }


  /**
   * glListBase
   *
   * @param GLuint base
   * @return void
   */
  Handle<Value> gl_glListBase(const Arguments& args) {
    HandleScope scope;
    GLuint _base = (GLuint)args[0]->Uint32Value();
    glListBase(_base);

    return Undefined();
  }


  /**
   * glLoadIdentity
   *
   * @return void
   */
  Handle<Value> gl_glLoadIdentity(const Arguments& args) {
    glLoadIdentity();
    return Undefined();
  }


  /**
   * glLoadMatrixd
   *
   * @param const GLdouble *m
   * @return void
   */
  Handle<Value> gl_glLoadMatrixd(const Arguments& args) {
    HandleScope scope;
    const GLdouble _m = (GLdouble)args[0]->NumberValue();
    glLoadMatrixd(&_m);

    args[0] = Number::New(_m);

    return Undefined();
  }


  /**
   * glLoadMatrixf
   *
   * @param const GLfloat *m
   * @return void
   */
  Handle<Value> gl_glLoadMatrixf(const Arguments& args) {
    HandleScope scope;
    const GLfloat _m = (GLfloat)args[0]->NumberValue();
    glLoadMatrixf(&_m);

    args[0] = Number::New(_m);

    return Undefined();
  }


  /**
   * glLoadName
   *
   * @param GLuint name
   * @return void
   */
  Handle<Value> gl_glLoadName(const Arguments& args) {
    HandleScope scope;
    GLuint _name = (GLuint)args[0]->Uint32Value();
    glLoadName(_name);

    return Undefined();
  }


  /**
   * glLogicOp
   *
   * @param GLenum opcode
   * @return void
   */
  Handle<Value> gl_glLogicOp(const Arguments& args) {
    HandleScope scope;
    GLenum _opcode = (GLenum)args[0]->Int32Value();
    glLogicOp(_opcode);

    return Undefined();
  }


  /**
   * glMap1d
   *
   * @param GLenum target
   * @param GLdouble u1
   * @param GLdouble u2
   * @param GLint stride
   * @param GLint order
   * @param const GLdouble *points
   * @return void
   */
  Handle<Value> gl_glMap1d(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _u1 = (GLdouble)args[1]->NumberValue();
    GLdouble _u2 = (GLdouble)args[2]->NumberValue();
    GLint _stride = (GLint)args[3]->Int32Value();
    GLint _order = (GLint)args[4]->Int32Value();
    const GLdouble _points = (GLdouble)args[5]->NumberValue();
    glMap1d(_target, _u1, _u2, _stride, _order, &_points);

    args[5] = Number::New(_points);

    return Undefined();
  }


  /**
   * glMap1f
   *
   * @param GLenum target
   * @param GLfloat u1
   * @param GLfloat u2
   * @param GLint stride
   * @param GLint order
   * @param const GLfloat *points
   * @return void
   */
  Handle<Value> gl_glMap1f(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _u1 = (GLfloat)args[1]->NumberValue();
    GLfloat _u2 = (GLfloat)args[2]->NumberValue();
    GLint _stride = (GLint)args[3]->Int32Value();
    GLint _order = (GLint)args[4]->Int32Value();
    const GLfloat _points = (GLfloat)args[5]->NumberValue();
    glMap1f(_target, _u1, _u2, _stride, _order, &_points);

    args[5] = Number::New(_points);

    return Undefined();
  }


  /**
   * glMap2d
   *
   * @param GLenum target
   * @param GLdouble u1
   * @param GLdouble u2
   * @param GLint ustride
   * @param GLint uorder
   * @param GLdouble v1
   * @param GLdouble v2
   * @param GLint vstride
   * @param GLint vorder
   * @param const GLdouble *points
   * @return void
   */
  Handle<Value> gl_glMap2d(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _u1 = (GLdouble)args[1]->NumberValue();
    GLdouble _u2 = (GLdouble)args[2]->NumberValue();
    GLint _ustride = (GLint)args[3]->Int32Value();
    GLint _uorder = (GLint)args[4]->Int32Value();
    GLdouble _v1 = (GLdouble)args[5]->NumberValue();
    GLdouble _v2 = (GLdouble)args[6]->NumberValue();
    GLint _vstride = (GLint)args[7]->Int32Value();
    GLint _vorder = (GLint)args[8]->Int32Value();
    const GLdouble _points = (GLdouble)args[9]->NumberValue();
    glMap2d(_target, _u1, _u2, _ustride, _uorder, _v1, _v2, _vstride, _vorder, &_points);

    args[9] = Number::New(_points);

    return Undefined();
  }


  /**
   * glMap2f
   *
   * @param GLenum target
   * @param GLfloat u1
   * @param GLfloat u2
   * @param GLint ustride
   * @param GLint uorder
   * @param GLfloat v1
   * @param GLfloat v2
   * @param GLint vstride
   * @param GLint vorder
   * @param const GLfloat *points
   * @return void
   */
  Handle<Value> gl_glMap2f(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _u1 = (GLfloat)args[1]->NumberValue();
    GLfloat _u2 = (GLfloat)args[2]->NumberValue();
    GLint _ustride = (GLint)args[3]->Int32Value();
    GLint _uorder = (GLint)args[4]->Int32Value();
    GLfloat _v1 = (GLfloat)args[5]->NumberValue();
    GLfloat _v2 = (GLfloat)args[6]->NumberValue();
    GLint _vstride = (GLint)args[7]->Int32Value();
    GLint _vorder = (GLint)args[8]->Int32Value();
    const GLfloat _points = (GLfloat)args[9]->NumberValue();
    glMap2f(_target, _u1, _u2, _ustride, _uorder, _v1, _v2, _vstride, _vorder, &_points);

    args[9] = Number::New(_points);

    return Undefined();
  }


  /**
   * glMapGrid1d
   *
   * @param GLint un
   * @param GLdouble u1
   * @param GLdouble u2
   * @return void
   */
  Handle<Value> gl_glMapGrid1d(const Arguments& args) {
    HandleScope scope;
    GLint _un = (GLint)args[0]->Int32Value();
    GLdouble _u1 = (GLdouble)args[1]->NumberValue();
    GLdouble _u2 = (GLdouble)args[2]->NumberValue();
    glMapGrid1d(_un, _u1, _u2);

    return Undefined();
  }


  /**
   * glMapGrid1f
   *
   * @param GLint un
   * @param GLfloat u1
   * @param GLfloat u2
   * @return void
   */
  Handle<Value> gl_glMapGrid1f(const Arguments& args) {
    HandleScope scope;
    GLint _un = (GLint)args[0]->Int32Value();
    GLfloat _u1 = (GLfloat)args[1]->NumberValue();
    GLfloat _u2 = (GLfloat)args[2]->NumberValue();
    glMapGrid1f(_un, _u1, _u2);

    return Undefined();
  }


  /**
   * glMapGrid2d
   *
   * @param GLint un
   * @param GLdouble u1
   * @param GLdouble u2
   * @param GLint vn
   * @param GLdouble v1
   * @param GLdouble v2
   * @return void
   */
  Handle<Value> gl_glMapGrid2d(const Arguments& args) {
    HandleScope scope;
    GLint _un = (GLint)args[0]->Int32Value();
    GLdouble _u1 = (GLdouble)args[1]->NumberValue();
    GLdouble _u2 = (GLdouble)args[2]->NumberValue();
    GLint _vn = (GLint)args[3]->Int32Value();
    GLdouble _v1 = (GLdouble)args[4]->NumberValue();
    GLdouble _v2 = (GLdouble)args[5]->NumberValue();
    glMapGrid2d(_un, _u1, _u2, _vn, _v1, _v2);

    return Undefined();
  }


  /**
   * glMapGrid2f
   *
   * @param GLint un
   * @param GLfloat u1
   * @param GLfloat u2
   * @param GLint vn
   * @param GLfloat v1
   * @param GLfloat v2
   * @return void
   */
  Handle<Value> gl_glMapGrid2f(const Arguments& args) {
    HandleScope scope;
    GLint _un = (GLint)args[0]->Int32Value();
    GLfloat _u1 = (GLfloat)args[1]->NumberValue();
    GLfloat _u2 = (GLfloat)args[2]->NumberValue();
    GLint _vn = (GLint)args[3]->Int32Value();
    GLfloat _v1 = (GLfloat)args[4]->NumberValue();
    GLfloat _v2 = (GLfloat)args[5]->NumberValue();
    glMapGrid2f(_un, _u1, _u2, _vn, _v1, _v2);

    return Undefined();
  }


  /**
   * glMaterialf
   *
   * @param GLenum face
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> gl_glMaterialf(const Arguments& args) {
    HandleScope scope;
    GLenum _face = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _param = (GLfloat)args[2]->NumberValue();
    glMaterialf(_face, _pname, _param);

    return Undefined();
  }


  /**
   * glMaterialfv
   *
   * @param GLenum face
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> gl_glMaterialfv(const Arguments& args) {
    HandleScope scope;
    GLenum _face = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLfloat _params = (GLfloat)args[2]->NumberValue();
    glMaterialfv(_face, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glMateriali
   *
   * @param GLenum face
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> gl_glMateriali(const Arguments& args) {
    HandleScope scope;
    GLenum _face = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _param = (GLint)args[2]->Int32Value();
    glMateriali(_face, _pname, _param);

    return Undefined();
  }


  /**
   * glMaterialiv
   *
   * @param GLenum face
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> gl_glMaterialiv(const Arguments& args) {
    HandleScope scope;
    GLenum _face = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLint _params = (GLint)args[2]->Int32Value();
    glMaterialiv(_face, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glMatrixMode
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> gl_glMatrixMode(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    glMatrixMode(_mode);

    return Undefined();
  }


  /**
   * glMinmax
   *
   * @param GLenum target
   * @param GLenum internalformat
   * @param GLboolean sink
   * @return void
   */
  Handle<Value> gl_glMinmax(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _internalformat = (GLenum)args[1]->Int32Value();
    GLboolean _sink = (GLboolean)args[2]->Int32Value();
    glMinmax(_target, _internalformat, _sink);

    return Undefined();
  }


  /**
   * glMultMatrixd
   *
   * @param const GLdouble *m
   * @return void
   */
  Handle<Value> gl_glMultMatrixd(const Arguments& args) {
    HandleScope scope;
    const GLdouble _m = (GLdouble)args[0]->NumberValue();
    glMultMatrixd(&_m);

    args[0] = Number::New(_m);

    return Undefined();
  }


  /**
   * glMultMatrixf
   *
   * @param const GLfloat *m
   * @return void
   */
  Handle<Value> gl_glMultMatrixf(const Arguments& args) {
    HandleScope scope;
    const GLfloat _m = (GLfloat)args[0]->NumberValue();
    glMultMatrixf(&_m);

    args[0] = Number::New(_m);

    return Undefined();
  }


  /**
   * glNewList
   *
   * @param GLuint list
   * @param GLenum mode
   * @return void
   */
  Handle<Value> gl_glNewList(const Arguments& args) {
    HandleScope scope;
    GLuint _list = (GLuint)args[0]->Uint32Value();
    GLenum _mode = (GLenum)args[1]->Int32Value();
    glNewList(_list, _mode);

    return Undefined();
  }


  /**
   * glNormal3b
   *
   * @param GLbyte nx
   * @param GLbyte ny
   * @param GLbyte nz
   * @return void
   */
  Handle<Value> gl_glNormal3b(const Arguments& args) {
    HandleScope scope;
    GLbyte _nx = (GLbyte)args[0]->Int32Value();
    GLbyte _ny = (GLbyte)args[1]->Int32Value();
    GLbyte _nz = (GLbyte)args[2]->Int32Value();
    glNormal3b(_nx, _ny, _nz);

    return Undefined();
  }


  /**
   * glNormal3bv
   *
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> gl_glNormal3bv(const Arguments& args) {
    HandleScope scope;
    const GLbyte _v = (GLbyte)args[0]->Int32Value();
    glNormal3bv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glNormal3d
   *
   * @param GLdouble nx
   * @param GLdouble ny
   * @param GLdouble nz
   * @return void
   */
  Handle<Value> gl_glNormal3d(const Arguments& args) {
    HandleScope scope;
    GLdouble _nx = (GLdouble)args[0]->NumberValue();
    GLdouble _ny = (GLdouble)args[1]->NumberValue();
    GLdouble _nz = (GLdouble)args[2]->NumberValue();
    glNormal3d(_nx, _ny, _nz);

    return Undefined();
  }


  /**
   * glNormal3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glNormal3dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v = (GLdouble)args[0]->NumberValue();
    glNormal3dv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glNormal3f
   *
   * @param GLfloat nx
   * @param GLfloat ny
   * @param GLfloat nz
   * @return void
   */
  Handle<Value> gl_glNormal3f(const Arguments& args) {
    HandleScope scope;
    GLfloat _nx = (GLfloat)args[0]->NumberValue();
    GLfloat _ny = (GLfloat)args[1]->NumberValue();
    GLfloat _nz = (GLfloat)args[2]->NumberValue();
    glNormal3f(_nx, _ny, _nz);

    return Undefined();
  }


  /**
   * glNormal3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glNormal3fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v = (GLfloat)args[0]->NumberValue();
    glNormal3fv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glNormal3i
   *
   * @param GLint nx
   * @param GLint ny
   * @param GLint nz
   * @return void
   */
  Handle<Value> gl_glNormal3i(const Arguments& args) {
    HandleScope scope;
    GLint _nx = (GLint)args[0]->Int32Value();
    GLint _ny = (GLint)args[1]->Int32Value();
    GLint _nz = (GLint)args[2]->Int32Value();
    glNormal3i(_nx, _ny, _nz);

    return Undefined();
  }


  /**
   * glNormal3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glNormal3iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glNormal3iv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glNormal3s
   *
   * @param GLshort nx
   * @param GLshort ny
   * @param GLshort nz
   * @return void
   */
  Handle<Value> gl_glNormal3s(const Arguments& args) {
    HandleScope scope;
    GLshort _nx = (GLshort)args[0]->Int32Value();
    GLshort _ny = (GLshort)args[1]->Int32Value();
    GLshort _nz = (GLshort)args[2]->Int32Value();
    glNormal3s(_nx, _ny, _nz);

    return Undefined();
  }


  /**
   * glNormal3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glNormal3sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glNormal3sv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glNormalPointer
   *
   * @param GLenum type
   * @param GLsizei stride
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> gl_glNormalPointer(const Arguments& args) {
    HandleScope scope;
    GLenum _type = (GLenum)args[0]->Int32Value();
    GLsizei _stride = (GLsizei)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    const GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glNormalPointer(_type, _stride, _pointer);

    return Undefined();
  }


  /**
   * glOrtho
   *
   * @param GLdouble left
   * @param GLdouble right
   * @param GLdouble bottom
   * @param GLdouble top
   * @param GLdouble zNear
   * @param GLdouble zFar
   * @return void
   */
  Handle<Value> gl_glOrtho(const Arguments& args) {
    HandleScope scope;
    GLdouble _left = (GLdouble)args[0]->NumberValue();
    GLdouble _right = (GLdouble)args[1]->NumberValue();
    GLdouble _bottom = (GLdouble)args[2]->NumberValue();
    GLdouble _top = (GLdouble)args[3]->NumberValue();
    GLdouble _zNear = (GLdouble)args[4]->NumberValue();
    GLdouble _zFar = (GLdouble)args[5]->NumberValue();
    glOrtho(_left, _right, _bottom, _top, _zNear, _zFar);

    return Undefined();
  }


  /**
   * glPassThrough
   *
   * @param GLfloat token
   * @return void
   */
  Handle<Value> gl_glPassThrough(const Arguments& args) {
    HandleScope scope;
    GLfloat _token = (GLfloat)args[0]->NumberValue();
    glPassThrough(_token);

    return Undefined();
  }


  /**
   * glPixelMapfv
   *
   * @param GLenum map
   * @param GLint mapsize
   * @param const GLfloat *values
   * @return void
   */
  Handle<Value> gl_glPixelMapfv(const Arguments& args) {
    HandleScope scope;
    GLenum _map = (GLenum)args[0]->Int32Value();
    GLint _mapsize = (GLint)args[1]->Int32Value();
    const GLfloat _values = (GLfloat)args[2]->NumberValue();
    glPixelMapfv(_map, _mapsize, &_values);

    args[2] = Number::New(_values);

    return Undefined();
  }


  /**
   * glPixelMapuiv
   *
   * @param GLenum map
   * @param GLint mapsize
   * @param const GLuint *values
   * @return void
   */
  Handle<Value> gl_glPixelMapuiv(const Arguments& args) {
    HandleScope scope;
    GLenum _map = (GLenum)args[0]->Int32Value();
    GLint _mapsize = (GLint)args[1]->Int32Value();
    const GLuint _values = (GLuint)args[2]->Uint32Value();
    glPixelMapuiv(_map, _mapsize, &_values);

    args[2] = Number::New(_values);

    return Undefined();
  }


  /**
   * glPixelMapusv
   *
   * @param GLenum map
   * @param GLint mapsize
   * @param const GLushort *values
   * @return void
   */
  Handle<Value> gl_glPixelMapusv(const Arguments& args) {
    HandleScope scope;
    GLenum _map = (GLenum)args[0]->Int32Value();
    GLint _mapsize = (GLint)args[1]->Int32Value();
    const GLushort _values = (GLushort)args[2]->Uint32Value();
    glPixelMapusv(_map, _mapsize, &_values);

    args[2] = Number::New(_values);

    return Undefined();
  }


  /**
   * glPixelStoref
   *
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> gl_glPixelStoref(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLfloat _param = (GLfloat)args[1]->NumberValue();
    glPixelStoref(_pname, _param);

    return Undefined();
  }


  /**
   * glPixelStorei
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> gl_glPixelStorei(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLint _param = (GLint)args[1]->Int32Value();
    glPixelStorei(_pname, _param);

    return Undefined();
  }


  /**
   * glPixelTransferf
   *
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> gl_glPixelTransferf(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLfloat _param = (GLfloat)args[1]->NumberValue();
    glPixelTransferf(_pname, _param);

    return Undefined();
  }


  /**
   * glPixelTransferi
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> gl_glPixelTransferi(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLint _param = (GLint)args[1]->Int32Value();
    glPixelTransferi(_pname, _param);

    return Undefined();
  }


  /**
   * glPixelZoom
   *
   * @param GLfloat xfactor
   * @param GLfloat yfactor
   * @return void
   */
  Handle<Value> gl_glPixelZoom(const Arguments& args) {
    HandleScope scope;
    GLfloat _xfactor = (GLfloat)args[0]->NumberValue();
    GLfloat _yfactor = (GLfloat)args[1]->NumberValue();
    glPixelZoom(_xfactor, _yfactor);

    return Undefined();
  }


  /**
   * glPointSize
   *
   * @param GLfloat size
   * @return void
   */
  Handle<Value> gl_glPointSize(const Arguments& args) {
    HandleScope scope;
    GLfloat _size = (GLfloat)args[0]->NumberValue();
    glPointSize(_size);

    return Undefined();
  }


  /**
   * glPolygonMode
   *
   * @param GLenum face
   * @param GLenum mode
   * @return void
   */
  Handle<Value> gl_glPolygonMode(const Arguments& args) {
    HandleScope scope;
    GLenum _face = (GLenum)args[0]->Int32Value();
    GLenum _mode = (GLenum)args[1]->Int32Value();
    glPolygonMode(_face, _mode);

    return Undefined();
  }


  /**
   * glPolygonOffset
   *
   * @param GLfloat factor
   * @param GLfloat units
   * @return void
   */
  Handle<Value> gl_glPolygonOffset(const Arguments& args) {
    HandleScope scope;
    GLfloat _factor = (GLfloat)args[0]->NumberValue();
    GLfloat _units = (GLfloat)args[1]->NumberValue();
    glPolygonOffset(_factor, _units);

    return Undefined();
  }


  /**
   * glPolygonStipple
   *
   * @param const GLubyte *mask
   * @return void
   */
  Handle<Value> gl_glPolygonStipple(const Arguments& args) {
    HandleScope scope;
    const GLubyte _mask = (GLubyte)args[0]->Int32Value();
    glPolygonStipple(&_mask);

    args[0] = Number::New(_mask);

    return Undefined();
  }


  /**
   * glPopAttrib
   *
   * @return void
   */
  Handle<Value> gl_glPopAttrib(const Arguments& args) {
    glPopAttrib();
    return Undefined();
  }


  /**
   * glPopClientAttrib
   *
   * @return void
   */
  Handle<Value> gl_glPopClientAttrib(const Arguments& args) {
    glPopClientAttrib();
    return Undefined();
  }


  /**
   * glPopMatrix
   *
   * @return void
   */
  Handle<Value> gl_glPopMatrix(const Arguments& args) {
    glPopMatrix();
    return Undefined();
  }


  /**
   * glPopName
   *
   * @return void
   */
  Handle<Value> gl_glPopName(const Arguments& args) {
    glPopName();
    return Undefined();
  }


  /**
   * glPrioritizeTextures
   *
   * @param GLsizei n
   * @param const GLuint *textures
   * @param const GLclampf *priorities
   * @return void
   */
  Handle<Value> gl_glPrioritizeTextures(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    const GLuint _textures = (GLuint)args[1]->Uint32Value();
    const GLclampf _priorities = (GLclampf)args[2]->NumberValue();
    glPrioritizeTextures(_n, &_textures, &_priorities);

    args[1] = Number::New(_textures);

    args[2] = Number::New(_priorities);

    return Undefined();
  }


  /**
   * glPushAttrib
   *
   * @param GLbitfield mask
   * @return void
   */
  Handle<Value> gl_glPushAttrib(const Arguments& args) {
    HandleScope scope;
    GLbitfield _mask = (GLbitfield)args[0]->Uint32Value();
    glPushAttrib(_mask);

    return Undefined();
  }


  /**
   * glPushClientAttrib
   *
   * @param GLbitfield mask
   * @return void
   */
  Handle<Value> gl_glPushClientAttrib(const Arguments& args) {
    HandleScope scope;
    GLbitfield _mask = (GLbitfield)args[0]->Uint32Value();
    glPushClientAttrib(_mask);

    return Undefined();
  }


  /**
   * glPushMatrix
   *
   * @return void
   */
  Handle<Value> gl_glPushMatrix(const Arguments& args) {
    glPushMatrix();
    return Undefined();
  }


  /**
   * glPushName
   *
   * @param GLuint name
   * @return void
   */
  Handle<Value> gl_glPushName(const Arguments& args) {
    HandleScope scope;
    GLuint _name = (GLuint)args[0]->Uint32Value();
    glPushName(_name);

    return Undefined();
  }


  /**
   * glRasterPos2d
   *
   * @param GLdouble x
   * @param GLdouble y
   * @return void
   */
  Handle<Value> gl_glRasterPos2d(const Arguments& args) {
    HandleScope scope;
    GLdouble _x = (GLdouble)args[0]->NumberValue();
    GLdouble _y = (GLdouble)args[1]->NumberValue();
    glRasterPos2d(_x, _y);

    return Undefined();
  }


  /**
   * glRasterPos2dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glRasterPos2dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v = (GLdouble)args[0]->NumberValue();
    glRasterPos2dv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glRasterPos2f
   *
   * @param GLfloat x
   * @param GLfloat y
   * @return void
   */
  Handle<Value> gl_glRasterPos2f(const Arguments& args) {
    HandleScope scope;
    GLfloat _x = (GLfloat)args[0]->NumberValue();
    GLfloat _y = (GLfloat)args[1]->NumberValue();
    glRasterPos2f(_x, _y);

    return Undefined();
  }


  /**
   * glRasterPos2fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glRasterPos2fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v = (GLfloat)args[0]->NumberValue();
    glRasterPos2fv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glRasterPos2i
   *
   * @param GLint x
   * @param GLint y
   * @return void
   */
  Handle<Value> gl_glRasterPos2i(const Arguments& args) {
    HandleScope scope;
    GLint _x = (GLint)args[0]->Int32Value();
    GLint _y = (GLint)args[1]->Int32Value();
    glRasterPos2i(_x, _y);

    return Undefined();
  }


  /**
   * glRasterPos2iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glRasterPos2iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glRasterPos2iv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glRasterPos2s
   *
   * @param GLshort x
   * @param GLshort y
   * @return void
   */
  Handle<Value> gl_glRasterPos2s(const Arguments& args) {
    HandleScope scope;
    GLshort _x = (GLshort)args[0]->Int32Value();
    GLshort _y = (GLshort)args[1]->Int32Value();
    glRasterPos2s(_x, _y);

    return Undefined();
  }


  /**
   * glRasterPos2sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glRasterPos2sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glRasterPos2sv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glRasterPos3d
   *
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @return void
   */
  Handle<Value> gl_glRasterPos3d(const Arguments& args) {
    HandleScope scope;
    GLdouble _x = (GLdouble)args[0]->NumberValue();
    GLdouble _y = (GLdouble)args[1]->NumberValue();
    GLdouble _z = (GLdouble)args[2]->NumberValue();
    glRasterPos3d(_x, _y, _z);

    return Undefined();
  }


  /**
   * glRasterPos3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glRasterPos3dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v = (GLdouble)args[0]->NumberValue();
    glRasterPos3dv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glRasterPos3f
   *
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @return void
   */
  Handle<Value> gl_glRasterPos3f(const Arguments& args) {
    HandleScope scope;
    GLfloat _x = (GLfloat)args[0]->NumberValue();
    GLfloat _y = (GLfloat)args[1]->NumberValue();
    GLfloat _z = (GLfloat)args[2]->NumberValue();
    glRasterPos3f(_x, _y, _z);

    return Undefined();
  }


  /**
   * glRasterPos3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glRasterPos3fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v = (GLfloat)args[0]->NumberValue();
    glRasterPos3fv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glRasterPos3i
   *
   * @param GLint x
   * @param GLint y
   * @param GLint z
   * @return void
   */
  Handle<Value> gl_glRasterPos3i(const Arguments& args) {
    HandleScope scope;
    GLint _x = (GLint)args[0]->Int32Value();
    GLint _y = (GLint)args[1]->Int32Value();
    GLint _z = (GLint)args[2]->Int32Value();
    glRasterPos3i(_x, _y, _z);

    return Undefined();
  }


  /**
   * glRasterPos3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glRasterPos3iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glRasterPos3iv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glRasterPos3s
   *
   * @param GLshort x
   * @param GLshort y
   * @param GLshort z
   * @return void
   */
  Handle<Value> gl_glRasterPos3s(const Arguments& args) {
    HandleScope scope;
    GLshort _x = (GLshort)args[0]->Int32Value();
    GLshort _y = (GLshort)args[1]->Int32Value();
    GLshort _z = (GLshort)args[2]->Int32Value();
    glRasterPos3s(_x, _y, _z);

    return Undefined();
  }


  /**
   * glRasterPos3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glRasterPos3sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glRasterPos3sv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glRasterPos4d
   *
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @param GLdouble w
   * @return void
   */
  Handle<Value> gl_glRasterPos4d(const Arguments& args) {
    HandleScope scope;
    GLdouble _x = (GLdouble)args[0]->NumberValue();
    GLdouble _y = (GLdouble)args[1]->NumberValue();
    GLdouble _z = (GLdouble)args[2]->NumberValue();
    GLdouble _w = (GLdouble)args[3]->NumberValue();
    glRasterPos4d(_x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glRasterPos4dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glRasterPos4dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v = (GLdouble)args[0]->NumberValue();
    glRasterPos4dv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glRasterPos4f
   *
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @param GLfloat w
   * @return void
   */
  Handle<Value> gl_glRasterPos4f(const Arguments& args) {
    HandleScope scope;
    GLfloat _x = (GLfloat)args[0]->NumberValue();
    GLfloat _y = (GLfloat)args[1]->NumberValue();
    GLfloat _z = (GLfloat)args[2]->NumberValue();
    GLfloat _w = (GLfloat)args[3]->NumberValue();
    glRasterPos4f(_x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glRasterPos4fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glRasterPos4fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v = (GLfloat)args[0]->NumberValue();
    glRasterPos4fv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glRasterPos4i
   *
   * @param GLint x
   * @param GLint y
   * @param GLint z
   * @param GLint w
   * @return void
   */
  Handle<Value> gl_glRasterPos4i(const Arguments& args) {
    HandleScope scope;
    GLint _x = (GLint)args[0]->Int32Value();
    GLint _y = (GLint)args[1]->Int32Value();
    GLint _z = (GLint)args[2]->Int32Value();
    GLint _w = (GLint)args[3]->Int32Value();
    glRasterPos4i(_x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glRasterPos4iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glRasterPos4iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glRasterPos4iv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glRasterPos4s
   *
   * @param GLshort x
   * @param GLshort y
   * @param GLshort z
   * @param GLshort w
   * @return void
   */
  Handle<Value> gl_glRasterPos4s(const Arguments& args) {
    HandleScope scope;
    GLshort _x = (GLshort)args[0]->Int32Value();
    GLshort _y = (GLshort)args[1]->Int32Value();
    GLshort _z = (GLshort)args[2]->Int32Value();
    GLshort _w = (GLshort)args[3]->Int32Value();
    glRasterPos4s(_x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glRasterPos4sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glRasterPos4sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glRasterPos4sv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glReadBuffer
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> gl_glReadBuffer(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    glReadBuffer(_mode);

    return Undefined();
  }


  /**
   * glReadPixels
   *
   * @param GLint x
   * @param GLint y
   * @param GLsizei width
   * @param GLsizei height
   * @param GLenum format
   * @param GLenum type
   * @param GLvoid *pixels
   * @return void
   */
  Handle<Value> gl_glReadPixels(const Arguments& args) {
    HandleScope scope;
    GLint _x = (GLint)args[0]->Int32Value();
    GLint _y = (GLint)args[1]->Int32Value();
    GLsizei _width = (GLsizei)args[2]->Int32Value();
    GLsizei _height = (GLsizei)args[3]->Int32Value();
    GLenum _format = (GLenum)args[4]->Int32Value();
    GLenum _type = (GLenum)args[5]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[6])) {
        return ThrowException(Exception::Error(
                              String::New("6nth argument needs to be a buffer")));
    }
    Buffer * pixels_buffer = ObjectWrap::Unwrap<Buffer>(args[6]->ToObject());
    GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glReadPixels(_x, _y, _width, _height, _format, _type, _pixels);

    return Undefined();
  }


  /**
   * glRectd
   *
   * @param GLdouble x1
   * @param GLdouble y1
   * @param GLdouble x2
   * @param GLdouble y2
   * @return void
   */
  Handle<Value> gl_glRectd(const Arguments& args) {
    HandleScope scope;
    GLdouble _x1 = (GLdouble)args[0]->NumberValue();
    GLdouble _y1 = (GLdouble)args[1]->NumberValue();
    GLdouble _x2 = (GLdouble)args[2]->NumberValue();
    GLdouble _y2 = (GLdouble)args[3]->NumberValue();
    glRectd(_x1, _y1, _x2, _y2);

    return Undefined();
  }


  /**
   * glRectdv
   *
   * @param const GLdouble *v1
   * @param const GLdouble *v2
   * @return void
   */
  Handle<Value> gl_glRectdv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v1 = (GLdouble)args[0]->NumberValue();
    const GLdouble _v2 = (GLdouble)args[1]->NumberValue();
    glRectdv(&_v1, &_v2);

    args[0] = Number::New(_v1);

    args[1] = Number::New(_v2);

    return Undefined();
  }


  /**
   * glRectf
   *
   * @param GLfloat x1
   * @param GLfloat y1
   * @param GLfloat x2
   * @param GLfloat y2
   * @return void
   */
  Handle<Value> gl_glRectf(const Arguments& args) {
    HandleScope scope;
    GLfloat _x1 = (GLfloat)args[0]->NumberValue();
    GLfloat _y1 = (GLfloat)args[1]->NumberValue();
    GLfloat _x2 = (GLfloat)args[2]->NumberValue();
    GLfloat _y2 = (GLfloat)args[3]->NumberValue();
    glRectf(_x1, _y1, _x2, _y2);

    return Undefined();
  }


  /**
   * glRectfv
   *
   * @param const GLfloat *v1
   * @param const GLfloat *v2
   * @return void
   */
  Handle<Value> gl_glRectfv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v1 = (GLfloat)args[0]->NumberValue();
    const GLfloat _v2 = (GLfloat)args[1]->NumberValue();
    glRectfv(&_v1, &_v2);

    args[0] = Number::New(_v1);

    args[1] = Number::New(_v2);

    return Undefined();
  }


  /**
   * glRecti
   *
   * @param GLint x1
   * @param GLint y1
   * @param GLint x2
   * @param GLint y2
   * @return void
   */
  Handle<Value> gl_glRecti(const Arguments& args) {
    HandleScope scope;
    GLint _x1 = (GLint)args[0]->Int32Value();
    GLint _y1 = (GLint)args[1]->Int32Value();
    GLint _x2 = (GLint)args[2]->Int32Value();
    GLint _y2 = (GLint)args[3]->Int32Value();
    glRecti(_x1, _y1, _x2, _y2);

    return Undefined();
  }


  /**
   * glRectiv
   *
   * @param const GLint *v1
   * @param const GLint *v2
   * @return void
   */
  Handle<Value> gl_glRectiv(const Arguments& args) {
    HandleScope scope;
    const GLint _v1 = (GLint)args[0]->Int32Value();
    const GLint _v2 = (GLint)args[1]->Int32Value();
    glRectiv(&_v1, &_v2);

    args[0] = Number::New(_v1);

    args[1] = Number::New(_v2);

    return Undefined();
  }


  /**
   * glRects
   *
   * @param GLshort x1
   * @param GLshort y1
   * @param GLshort x2
   * @param GLshort y2
   * @return void
   */
  Handle<Value> gl_glRects(const Arguments& args) {
    HandleScope scope;
    GLshort _x1 = (GLshort)args[0]->Int32Value();
    GLshort _y1 = (GLshort)args[1]->Int32Value();
    GLshort _x2 = (GLshort)args[2]->Int32Value();
    GLshort _y2 = (GLshort)args[3]->Int32Value();
    glRects(_x1, _y1, _x2, _y2);

    return Undefined();
  }


  /**
   * glRectsv
   *
   * @param const GLshort *v1
   * @param const GLshort *v2
   * @return void
   */
  Handle<Value> gl_glRectsv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v1 = (GLshort)args[0]->Int32Value();
    const GLshort _v2 = (GLshort)args[1]->Int32Value();
    glRectsv(&_v1, &_v2);

    args[0] = Number::New(_v1);

    args[1] = Number::New(_v2);

    return Undefined();
  }


  /**
   * glRenderMode
   *
   * @param GLenum mode
   * @return GLint
   */
  Handle<Value> gl_glRenderMode(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    GLint _ret = glRenderMode(_mode);

    return scope.Close(Number::New(_ret));
  }


  /**
   * glResetHistogram
   *
   * @param GLenum target
   * @return void
   */
  Handle<Value> gl_glResetHistogram(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    glResetHistogram(_target);

    return Undefined();
  }


  /**
   * glResetMinmax
   *
   * @param GLenum target
   * @return void
   */
  Handle<Value> gl_glResetMinmax(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    glResetMinmax(_target);

    return Undefined();
  }


  /**
   * glRotated
   *
   * @param GLdouble angle
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @return void
   */
  Handle<Value> gl_glRotated(const Arguments& args) {
    HandleScope scope;
    GLdouble _angle = (GLdouble)args[0]->NumberValue();
    GLdouble _x = (GLdouble)args[1]->NumberValue();
    GLdouble _y = (GLdouble)args[2]->NumberValue();
    GLdouble _z = (GLdouble)args[3]->NumberValue();
    glRotated(_angle, _x, _y, _z);

    return Undefined();
  }


  /**
   * glRotatef
   *
   * @param GLfloat angle
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @return void
   */
  Handle<Value> gl_glRotatef(const Arguments& args) {
    HandleScope scope;
    GLfloat _angle = (GLfloat)args[0]->NumberValue();
    GLfloat _x = (GLfloat)args[1]->NumberValue();
    GLfloat _y = (GLfloat)args[2]->NumberValue();
    GLfloat _z = (GLfloat)args[3]->NumberValue();
    glRotatef(_angle, _x, _y, _z);

    return Undefined();
  }


  /**
   * glScaled
   *
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @return void
   */
  Handle<Value> gl_glScaled(const Arguments& args) {
    HandleScope scope;
    GLdouble _x = (GLdouble)args[0]->NumberValue();
    GLdouble _y = (GLdouble)args[1]->NumberValue();
    GLdouble _z = (GLdouble)args[2]->NumberValue();
    glScaled(_x, _y, _z);

    return Undefined();
  }


  /**
   * glScalef
   *
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @return void
   */
  Handle<Value> gl_glScalef(const Arguments& args) {
    HandleScope scope;
    GLfloat _x = (GLfloat)args[0]->NumberValue();
    GLfloat _y = (GLfloat)args[1]->NumberValue();
    GLfloat _z = (GLfloat)args[2]->NumberValue();
    glScalef(_x, _y, _z);

    return Undefined();
  }


  /**
   * glScissor
   *
   * @param GLint x
   * @param GLint y
   * @param GLsizei width
   * @param GLsizei height
   * @return void
   */
  Handle<Value> gl_glScissor(const Arguments& args) {
    HandleScope scope;
    GLint _x = (GLint)args[0]->Int32Value();
    GLint _y = (GLint)args[1]->Int32Value();
    GLsizei _width = (GLsizei)args[2]->Int32Value();
    GLsizei _height = (GLsizei)args[3]->Int32Value();
    glScissor(_x, _y, _width, _height);

    return Undefined();
  }


  /**
   * glSelectBuffer
   *
   * @param GLsizei size
   * @param GLuint *buffer
   * @return void
   */
  Handle<Value> gl_glSelectBuffer(const Arguments& args) {
    HandleScope scope;
    GLsizei _size = (GLsizei)args[0]->Int32Value();
    GLuint _buffer = (GLuint)args[1]->Uint32Value();
    glSelectBuffer(_size, &_buffer);

    args[1] = Number::New(_buffer);

    return Undefined();
  }


  /**
   * glSeparableFilter2D
   *
   * @param GLenum target
   * @param GLenum internalformat
   * @param GLsizei width
   * @param GLsizei height
   * @param GLenum format
   * @param GLenum type
   * @param const GLvoid *row
   * @param const GLvoid *column
   * @return void
   */
  Handle<Value> gl_glSeparableFilter2D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _internalformat = (GLenum)args[1]->Int32Value();
    GLsizei _width = (GLsizei)args[2]->Int32Value();
    GLsizei _height = (GLsizei)args[3]->Int32Value();
    GLenum _format = (GLenum)args[4]->Int32Value();
    GLenum _type = (GLenum)args[5]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[6])) {
        return ThrowException(Exception::Error(
                              String::New("6nth argument needs to be a buffer")));
    }
    Buffer * row_buffer = ObjectWrap::Unwrap<Buffer>(args[6]->ToObject());
    const GLvoid *_row = (GLvoid *)row_buffer->data();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[7])) {
        return ThrowException(Exception::Error(
                              String::New("7nth argument needs to be a buffer")));
    }
    Buffer * column_buffer = ObjectWrap::Unwrap<Buffer>(args[7]->ToObject());
    const GLvoid *_column = (GLvoid *)column_buffer->data();
    glSeparableFilter2D(_target, _internalformat, _width, _height, _format, _type, _row, _column);

    return Undefined();
  }


  /**
   * glShadeModel
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> gl_glShadeModel(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    glShadeModel(_mode);

    return Undefined();
  }


  /**
   * glStencilFunc
   *
   * @param GLenum func
   * @param GLint ref
   * @param GLuint mask
   * @return void
   */
  Handle<Value> gl_glStencilFunc(const Arguments& args) {
    HandleScope scope;
    GLenum _func = (GLenum)args[0]->Int32Value();
    GLint _ref = (GLint)args[1]->Int32Value();
    GLuint _mask = (GLuint)args[2]->Uint32Value();
    glStencilFunc(_func, _ref, _mask);

    return Undefined();
  }


  /**
   * glStencilMask
   *
   * @param GLuint mask
   * @return void
   */
  Handle<Value> gl_glStencilMask(const Arguments& args) {
    HandleScope scope;
    GLuint _mask = (GLuint)args[0]->Uint32Value();
    glStencilMask(_mask);

    return Undefined();
  }


  /**
   * glStencilOp
   *
   * @param GLenum fail
   * @param GLenum zfail
   * @param GLenum zpass
   * @return void
   */
  Handle<Value> gl_glStencilOp(const Arguments& args) {
    HandleScope scope;
    GLenum _fail = (GLenum)args[0]->Int32Value();
    GLenum _zfail = (GLenum)args[1]->Int32Value();
    GLenum _zpass = (GLenum)args[2]->Int32Value();
    glStencilOp(_fail, _zfail, _zpass);

    return Undefined();
  }


  /**
   * glTexCoord1d
   *
   * @param GLdouble s
   * @return void
   */
  Handle<Value> gl_glTexCoord1d(const Arguments& args) {
    HandleScope scope;
    GLdouble _s = (GLdouble)args[0]->NumberValue();
    glTexCoord1d(_s);

    return Undefined();
  }


  /**
   * glTexCoord1dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glTexCoord1dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v = (GLdouble)args[0]->NumberValue();
    glTexCoord1dv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glTexCoord1f
   *
   * @param GLfloat s
   * @return void
   */
  Handle<Value> gl_glTexCoord1f(const Arguments& args) {
    HandleScope scope;
    GLfloat _s = (GLfloat)args[0]->NumberValue();
    glTexCoord1f(_s);

    return Undefined();
  }


  /**
   * glTexCoord1fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glTexCoord1fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v = (GLfloat)args[0]->NumberValue();
    glTexCoord1fv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glTexCoord1i
   *
   * @param GLint s
   * @return void
   */
  Handle<Value> gl_glTexCoord1i(const Arguments& args) {
    HandleScope scope;
    GLint _s = (GLint)args[0]->Int32Value();
    glTexCoord1i(_s);

    return Undefined();
  }


  /**
   * glTexCoord1iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glTexCoord1iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glTexCoord1iv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glTexCoord1s
   *
   * @param GLshort s
   * @return void
   */
  Handle<Value> gl_glTexCoord1s(const Arguments& args) {
    HandleScope scope;
    GLshort _s = (GLshort)args[0]->Int32Value();
    glTexCoord1s(_s);

    return Undefined();
  }


  /**
   * glTexCoord1sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glTexCoord1sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glTexCoord1sv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glTexCoord2d
   *
   * @param GLdouble s
   * @param GLdouble t
   * @return void
   */
  Handle<Value> gl_glTexCoord2d(const Arguments& args) {
    HandleScope scope;
    GLdouble _s = (GLdouble)args[0]->NumberValue();
    GLdouble _t = (GLdouble)args[1]->NumberValue();
    glTexCoord2d(_s, _t);

    return Undefined();
  }


  /**
   * glTexCoord2dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glTexCoord2dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v = (GLdouble)args[0]->NumberValue();
    glTexCoord2dv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glTexCoord2f
   *
   * @param GLfloat s
   * @param GLfloat t
   * @return void
   */
  Handle<Value> gl_glTexCoord2f(const Arguments& args) {
    HandleScope scope;
    GLfloat _s = (GLfloat)args[0]->NumberValue();
    GLfloat _t = (GLfloat)args[1]->NumberValue();
    glTexCoord2f(_s, _t);

    return Undefined();
  }


  /**
   * glTexCoord2fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glTexCoord2fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v = (GLfloat)args[0]->NumberValue();
    glTexCoord2fv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glTexCoord2i
   *
   * @param GLint s
   * @param GLint t
   * @return void
   */
  Handle<Value> gl_glTexCoord2i(const Arguments& args) {
    HandleScope scope;
    GLint _s = (GLint)args[0]->Int32Value();
    GLint _t = (GLint)args[1]->Int32Value();
    glTexCoord2i(_s, _t);

    return Undefined();
  }


  /**
   * glTexCoord2iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glTexCoord2iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glTexCoord2iv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glTexCoord2s
   *
   * @param GLshort s
   * @param GLshort t
   * @return void
   */
  Handle<Value> gl_glTexCoord2s(const Arguments& args) {
    HandleScope scope;
    GLshort _s = (GLshort)args[0]->Int32Value();
    GLshort _t = (GLshort)args[1]->Int32Value();
    glTexCoord2s(_s, _t);

    return Undefined();
  }


  /**
   * glTexCoord2sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glTexCoord2sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glTexCoord2sv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glTexCoord3d
   *
   * @param GLdouble s
   * @param GLdouble t
   * @param GLdouble r
   * @return void
   */
  Handle<Value> gl_glTexCoord3d(const Arguments& args) {
    HandleScope scope;
    GLdouble _s = (GLdouble)args[0]->NumberValue();
    GLdouble _t = (GLdouble)args[1]->NumberValue();
    GLdouble _r = (GLdouble)args[2]->NumberValue();
    glTexCoord3d(_s, _t, _r);

    return Undefined();
  }


  /**
   * glTexCoord3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glTexCoord3dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v = (GLdouble)args[0]->NumberValue();
    glTexCoord3dv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glTexCoord3f
   *
   * @param GLfloat s
   * @param GLfloat t
   * @param GLfloat r
   * @return void
   */
  Handle<Value> gl_glTexCoord3f(const Arguments& args) {
    HandleScope scope;
    GLfloat _s = (GLfloat)args[0]->NumberValue();
    GLfloat _t = (GLfloat)args[1]->NumberValue();
    GLfloat _r = (GLfloat)args[2]->NumberValue();
    glTexCoord3f(_s, _t, _r);

    return Undefined();
  }


  /**
   * glTexCoord3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glTexCoord3fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v = (GLfloat)args[0]->NumberValue();
    glTexCoord3fv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glTexCoord3i
   *
   * @param GLint s
   * @param GLint t
   * @param GLint r
   * @return void
   */
  Handle<Value> gl_glTexCoord3i(const Arguments& args) {
    HandleScope scope;
    GLint _s = (GLint)args[0]->Int32Value();
    GLint _t = (GLint)args[1]->Int32Value();
    GLint _r = (GLint)args[2]->Int32Value();
    glTexCoord3i(_s, _t, _r);

    return Undefined();
  }


  /**
   * glTexCoord3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glTexCoord3iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glTexCoord3iv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glTexCoord3s
   *
   * @param GLshort s
   * @param GLshort t
   * @param GLshort r
   * @return void
   */
  Handle<Value> gl_glTexCoord3s(const Arguments& args) {
    HandleScope scope;
    GLshort _s = (GLshort)args[0]->Int32Value();
    GLshort _t = (GLshort)args[1]->Int32Value();
    GLshort _r = (GLshort)args[2]->Int32Value();
    glTexCoord3s(_s, _t, _r);

    return Undefined();
  }


  /**
   * glTexCoord3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glTexCoord3sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glTexCoord3sv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glTexCoord4d
   *
   * @param GLdouble s
   * @param GLdouble t
   * @param GLdouble r
   * @param GLdouble q
   * @return void
   */
  Handle<Value> gl_glTexCoord4d(const Arguments& args) {
    HandleScope scope;
    GLdouble _s = (GLdouble)args[0]->NumberValue();
    GLdouble _t = (GLdouble)args[1]->NumberValue();
    GLdouble _r = (GLdouble)args[2]->NumberValue();
    GLdouble _q = (GLdouble)args[3]->NumberValue();
    glTexCoord4d(_s, _t, _r, _q);

    return Undefined();
  }


  /**
   * glTexCoord4dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glTexCoord4dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v = (GLdouble)args[0]->NumberValue();
    glTexCoord4dv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glTexCoord4f
   *
   * @param GLfloat s
   * @param GLfloat t
   * @param GLfloat r
   * @param GLfloat q
   * @return void
   */
  Handle<Value> gl_glTexCoord4f(const Arguments& args) {
    HandleScope scope;
    GLfloat _s = (GLfloat)args[0]->NumberValue();
    GLfloat _t = (GLfloat)args[1]->NumberValue();
    GLfloat _r = (GLfloat)args[2]->NumberValue();
    GLfloat _q = (GLfloat)args[3]->NumberValue();
    glTexCoord4f(_s, _t, _r, _q);

    return Undefined();
  }


  /**
   * glTexCoord4fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glTexCoord4fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v = (GLfloat)args[0]->NumberValue();
    glTexCoord4fv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glTexCoord4i
   *
   * @param GLint s
   * @param GLint t
   * @param GLint r
   * @param GLint q
   * @return void
   */
  Handle<Value> gl_glTexCoord4i(const Arguments& args) {
    HandleScope scope;
    GLint _s = (GLint)args[0]->Int32Value();
    GLint _t = (GLint)args[1]->Int32Value();
    GLint _r = (GLint)args[2]->Int32Value();
    GLint _q = (GLint)args[3]->Int32Value();
    glTexCoord4i(_s, _t, _r, _q);

    return Undefined();
  }


  /**
   * glTexCoord4iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glTexCoord4iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glTexCoord4iv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glTexCoord4s
   *
   * @param GLshort s
   * @param GLshort t
   * @param GLshort r
   * @param GLshort q
   * @return void
   */
  Handle<Value> gl_glTexCoord4s(const Arguments& args) {
    HandleScope scope;
    GLshort _s = (GLshort)args[0]->Int32Value();
    GLshort _t = (GLshort)args[1]->Int32Value();
    GLshort _r = (GLshort)args[2]->Int32Value();
    GLshort _q = (GLshort)args[3]->Int32Value();
    glTexCoord4s(_s, _t, _r, _q);

    return Undefined();
  }


  /**
   * glTexCoord4sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glTexCoord4sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glTexCoord4sv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glTexCoordPointer
   *
   * @param GLint size
   * @param GLenum type
   * @param GLsizei stride
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> gl_glTexCoordPointer(const Arguments& args) {
    HandleScope scope;
    GLint _size = (GLint)args[0]->Int32Value();
    GLenum _type = (GLenum)args[1]->Int32Value();
    GLsizei _stride = (GLsizei)args[2]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[3])) {
        return ThrowException(Exception::Error(
                              String::New("3nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[3]->ToObject());
    const GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glTexCoordPointer(_size, _type, _stride, _pointer);

    return Undefined();
  }


  /**
   * glTexEnvf
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> gl_glTexEnvf(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _param = (GLfloat)args[2]->NumberValue();
    glTexEnvf(_target, _pname, _param);

    return Undefined();
  }


  /**
   * glTexEnvfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> gl_glTexEnvfv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLfloat _params = (GLfloat)args[2]->NumberValue();
    glTexEnvfv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glTexEnvi
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> gl_glTexEnvi(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _param = (GLint)args[2]->Int32Value();
    glTexEnvi(_target, _pname, _param);

    return Undefined();
  }


  /**
   * glTexEnviv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> gl_glTexEnviv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLint _params = (GLint)args[2]->Int32Value();
    glTexEnviv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glTexGend
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLdouble param
   * @return void
   */
  Handle<Value> gl_glTexGend(const Arguments& args) {
    HandleScope scope;
    GLenum _coord = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLdouble _param = (GLdouble)args[2]->NumberValue();
    glTexGend(_coord, _pname, _param);

    return Undefined();
  }


  /**
   * glTexGendv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param const GLdouble *params
   * @return void
   */
  Handle<Value> gl_glTexGendv(const Arguments& args) {
    HandleScope scope;
    GLenum _coord = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLdouble _params = (GLdouble)args[2]->NumberValue();
    glTexGendv(_coord, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glTexGenf
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> gl_glTexGenf(const Arguments& args) {
    HandleScope scope;
    GLenum _coord = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _param = (GLfloat)args[2]->NumberValue();
    glTexGenf(_coord, _pname, _param);

    return Undefined();
  }


  /**
   * glTexGenfv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> gl_glTexGenfv(const Arguments& args) {
    HandleScope scope;
    GLenum _coord = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLfloat _params = (GLfloat)args[2]->NumberValue();
    glTexGenfv(_coord, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glTexGeni
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> gl_glTexGeni(const Arguments& args) {
    HandleScope scope;
    GLenum _coord = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _param = (GLint)args[2]->Int32Value();
    glTexGeni(_coord, _pname, _param);

    return Undefined();
  }


  /**
   * glTexGeniv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> gl_glTexGeniv(const Arguments& args) {
    HandleScope scope;
    GLenum _coord = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLint _params = (GLint)args[2]->Int32Value();
    glTexGeniv(_coord, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glTexImage1D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLenum internalformat
   * @param GLsizei width
   * @param GLint border
   * @param GLenum format
   * @param GLenum type
   * @param const GLvoid *pixels
   * @return void
   */
  Handle<Value> gl_glTexImage1D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLenum _internalformat = (GLenum)args[2]->Int32Value();
    GLsizei _width = (GLsizei)args[3]->Int32Value();
    GLint _border = (GLint)args[4]->Int32Value();
    GLenum _format = (GLenum)args[5]->Int32Value();
    GLenum _type = (GLenum)args[6]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[7])) {
        return ThrowException(Exception::Error(
                              String::New("7nth argument needs to be a buffer")));
    }
    Buffer * pixels_buffer = ObjectWrap::Unwrap<Buffer>(args[7]->ToObject());
    const GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glTexImage1D(_target, _level, _internalformat, _width, _border, _format, _type, _pixels);

    return Undefined();
  }


  /**
   * glTexImage2D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLenum internalformat
   * @param GLsizei width
   * @param GLsizei height
   * @param GLint border
   * @param GLenum format
   * @param GLenum type
   * @param const GLvoid *pixels
   * @return void
   */
  Handle<Value> gl_glTexImage2D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLenum _internalformat = (GLenum)args[2]->Int32Value();
    GLsizei _width = (GLsizei)args[3]->Int32Value();
    GLsizei _height = (GLsizei)args[4]->Int32Value();
    GLint _border = (GLint)args[5]->Int32Value();
    GLenum _format = (GLenum)args[6]->Int32Value();
    GLenum _type = (GLenum)args[7]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[8])) {
        return ThrowException(Exception::Error(
                              String::New("8nth argument needs to be a buffer")));
    }
    Buffer * pixels_buffer = ObjectWrap::Unwrap<Buffer>(args[8]->ToObject());
    const GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glTexImage2D(_target, _level, _internalformat, _width, _height, _border, _format, _type, _pixels);

    return Undefined();
  }


  /**
   * glTexImage3D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLenum internalformat
   * @param GLsizei width
   * @param GLsizei height
   * @param GLsizei depth
   * @param GLint border
   * @param GLenum format
   * @param GLenum type
   * @param const GLvoid *pixels
   * @return void
   */
  Handle<Value> gl_glTexImage3D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLenum _internalformat = (GLenum)args[2]->Int32Value();
    GLsizei _width = (GLsizei)args[3]->Int32Value();
    GLsizei _height = (GLsizei)args[4]->Int32Value();
    GLsizei _depth = (GLsizei)args[5]->Int32Value();
    GLint _border = (GLint)args[6]->Int32Value();
    GLenum _format = (GLenum)args[7]->Int32Value();
    GLenum _type = (GLenum)args[8]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[9])) {
        return ThrowException(Exception::Error(
                              String::New("9nth argument needs to be a buffer")));
    }
    Buffer * pixels_buffer = ObjectWrap::Unwrap<Buffer>(args[9]->ToObject());
    const GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glTexImage3D(_target, _level, _internalformat, _width, _height, _depth, _border, _format, _type, _pixels);

    return Undefined();
  }


  /**
   * glTexParameterf
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> gl_glTexParameterf(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _param = (GLfloat)args[2]->NumberValue();
    glTexParameterf(_target, _pname, _param);

    return Undefined();
  }


  /**
   * glTexParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> gl_glTexParameterfv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLfloat _params = (GLfloat)args[2]->NumberValue();
    glTexParameterfv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glTexParameteri
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> gl_glTexParameteri(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _param = (GLint)args[2]->Int32Value();
    glTexParameteri(_target, _pname, _param);

    return Undefined();
  }


  /**
   * glTexParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> gl_glTexParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLint _params = (GLint)args[2]->Int32Value();
    glTexParameteriv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glTexSubImage1D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLint xoffset
   * @param GLsizei width
   * @param GLenum format
   * @param GLenum type
   * @param const GLvoid *pixels
   * @return void
   */
  Handle<Value> gl_glTexSubImage1D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLint _xoffset = (GLint)args[2]->Int32Value();
    GLsizei _width = (GLsizei)args[3]->Int32Value();
    GLenum _format = (GLenum)args[4]->Int32Value();
    GLenum _type = (GLenum)args[5]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[6])) {
        return ThrowException(Exception::Error(
                              String::New("6nth argument needs to be a buffer")));
    }
    Buffer * pixels_buffer = ObjectWrap::Unwrap<Buffer>(args[6]->ToObject());
    const GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glTexSubImage1D(_target, _level, _xoffset, _width, _format, _type, _pixels);

    return Undefined();
  }


  /**
   * glTexSubImage2D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLint xoffset
   * @param GLint yoffset
   * @param GLsizei width
   * @param GLsizei height
   * @param GLenum format
   * @param GLenum type
   * @param const GLvoid *pixels
   * @return void
   */
  Handle<Value> gl_glTexSubImage2D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLint _xoffset = (GLint)args[2]->Int32Value();
    GLint _yoffset = (GLint)args[3]->Int32Value();
    GLsizei _width = (GLsizei)args[4]->Int32Value();
    GLsizei _height = (GLsizei)args[5]->Int32Value();
    GLenum _format = (GLenum)args[6]->Int32Value();
    GLenum _type = (GLenum)args[7]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[8])) {
        return ThrowException(Exception::Error(
                              String::New("8nth argument needs to be a buffer")));
    }
    Buffer * pixels_buffer = ObjectWrap::Unwrap<Buffer>(args[8]->ToObject());
    const GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glTexSubImage2D(_target, _level, _xoffset, _yoffset, _width, _height, _format, _type, _pixels);

    return Undefined();
  }


  /**
   * glTexSubImage3D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLint xoffset
   * @param GLint yoffset
   * @param GLint zoffset
   * @param GLsizei width
   * @param GLsizei height
   * @param GLsizei depth
   * @param GLenum format
   * @param GLenum type
   * @param const GLvoid *pixels
   * @return void
   */
  Handle<Value> gl_glTexSubImage3D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLint _xoffset = (GLint)args[2]->Int32Value();
    GLint _yoffset = (GLint)args[3]->Int32Value();
    GLint _zoffset = (GLint)args[4]->Int32Value();
    GLsizei _width = (GLsizei)args[5]->Int32Value();
    GLsizei _height = (GLsizei)args[6]->Int32Value();
    GLsizei _depth = (GLsizei)args[7]->Int32Value();
    GLenum _format = (GLenum)args[8]->Int32Value();
    GLenum _type = (GLenum)args[9]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[10])) {
        return ThrowException(Exception::Error(
                              String::New("10nth argument needs to be a buffer")));
    }
    Buffer * pixels_buffer = ObjectWrap::Unwrap<Buffer>(args[10]->ToObject());
    const GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glTexSubImage3D(_target, _level, _xoffset, _yoffset, _zoffset, _width, _height, _depth, _format, _type, _pixels);

    return Undefined();
  }


  /**
   * glTranslated
   *
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @return void
   */
  Handle<Value> gl_glTranslated(const Arguments& args) {
    HandleScope scope;
    GLdouble _x = (GLdouble)args[0]->NumberValue();
    GLdouble _y = (GLdouble)args[1]->NumberValue();
    GLdouble _z = (GLdouble)args[2]->NumberValue();
    glTranslated(_x, _y, _z);

    return Undefined();
  }


  /**
   * glTranslatef
   *
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @return void
   */
  Handle<Value> gl_glTranslatef(const Arguments& args) {
    HandleScope scope;
    GLfloat _x = (GLfloat)args[0]->NumberValue();
    GLfloat _y = (GLfloat)args[1]->NumberValue();
    GLfloat _z = (GLfloat)args[2]->NumberValue();
    glTranslatef(_x, _y, _z);

    return Undefined();
  }


  /**
   * glVertex2d
   *
   * @param GLdouble x
   * @param GLdouble y
   * @return void
   */
  Handle<Value> gl_glVertex2d(const Arguments& args) {
    HandleScope scope;
    GLdouble _x = (GLdouble)args[0]->NumberValue();
    GLdouble _y = (GLdouble)args[1]->NumberValue();
    glVertex2d(_x, _y);

    return Undefined();
  }


  /**
   * glVertex2dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glVertex2dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v = (GLdouble)args[0]->NumberValue();
    glVertex2dv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertex2f
   *
   * @param GLfloat x
   * @param GLfloat y
   * @return void
   */
  Handle<Value> gl_glVertex2f(const Arguments& args) {
    HandleScope scope;
    GLfloat _x = (GLfloat)args[0]->NumberValue();
    GLfloat _y = (GLfloat)args[1]->NumberValue();
    glVertex2f(_x, _y);

    return Undefined();
  }


  /**
   * glVertex2fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glVertex2fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v = (GLfloat)args[0]->NumberValue();
    glVertex2fv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertex2i
   *
   * @param GLint x
   * @param GLint y
   * @return void
   */
  Handle<Value> gl_glVertex2i(const Arguments& args) {
    HandleScope scope;
    GLint _x = (GLint)args[0]->Int32Value();
    GLint _y = (GLint)args[1]->Int32Value();
    glVertex2i(_x, _y);

    return Undefined();
  }


  /**
   * glVertex2iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glVertex2iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glVertex2iv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertex2s
   *
   * @param GLshort x
   * @param GLshort y
   * @return void
   */
  Handle<Value> gl_glVertex2s(const Arguments& args) {
    HandleScope scope;
    GLshort _x = (GLshort)args[0]->Int32Value();
    GLshort _y = (GLshort)args[1]->Int32Value();
    glVertex2s(_x, _y);

    return Undefined();
  }


  /**
   * glVertex2sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertex2sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glVertex2sv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertex3d
   *
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @return void
   */
  Handle<Value> gl_glVertex3d(const Arguments& args) {
    HandleScope scope;
    GLdouble _x = (GLdouble)args[0]->NumberValue();
    GLdouble _y = (GLdouble)args[1]->NumberValue();
    GLdouble _z = (GLdouble)args[2]->NumberValue();
    glVertex3d(_x, _y, _z);

    return Undefined();
  }


  /**
   * glVertex3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glVertex3dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v = (GLdouble)args[0]->NumberValue();
    glVertex3dv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertex3f
   *
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @return void
   */
  Handle<Value> gl_glVertex3f(const Arguments& args) {
    HandleScope scope;
    GLfloat _x = (GLfloat)args[0]->NumberValue();
    GLfloat _y = (GLfloat)args[1]->NumberValue();
    GLfloat _z = (GLfloat)args[2]->NumberValue();
    glVertex3f(_x, _y, _z);

    return Undefined();
  }


  /**
   * glVertex3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glVertex3fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v = (GLfloat)args[0]->NumberValue();
    glVertex3fv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertex3i
   *
   * @param GLint x
   * @param GLint y
   * @param GLint z
   * @return void
   */
  Handle<Value> gl_glVertex3i(const Arguments& args) {
    HandleScope scope;
    GLint _x = (GLint)args[0]->Int32Value();
    GLint _y = (GLint)args[1]->Int32Value();
    GLint _z = (GLint)args[2]->Int32Value();
    glVertex3i(_x, _y, _z);

    return Undefined();
  }


  /**
   * glVertex3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glVertex3iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glVertex3iv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertex3s
   *
   * @param GLshort x
   * @param GLshort y
   * @param GLshort z
   * @return void
   */
  Handle<Value> gl_glVertex3s(const Arguments& args) {
    HandleScope scope;
    GLshort _x = (GLshort)args[0]->Int32Value();
    GLshort _y = (GLshort)args[1]->Int32Value();
    GLshort _z = (GLshort)args[2]->Int32Value();
    glVertex3s(_x, _y, _z);

    return Undefined();
  }


  /**
   * glVertex3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertex3sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glVertex3sv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertex4d
   *
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @param GLdouble w
   * @return void
   */
  Handle<Value> gl_glVertex4d(const Arguments& args) {
    HandleScope scope;
    GLdouble _x = (GLdouble)args[0]->NumberValue();
    GLdouble _y = (GLdouble)args[1]->NumberValue();
    GLdouble _z = (GLdouble)args[2]->NumberValue();
    GLdouble _w = (GLdouble)args[3]->NumberValue();
    glVertex4d(_x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glVertex4dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glVertex4dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v = (GLdouble)args[0]->NumberValue();
    glVertex4dv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertex4f
   *
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @param GLfloat w
   * @return void
   */
  Handle<Value> gl_glVertex4f(const Arguments& args) {
    HandleScope scope;
    GLfloat _x = (GLfloat)args[0]->NumberValue();
    GLfloat _y = (GLfloat)args[1]->NumberValue();
    GLfloat _z = (GLfloat)args[2]->NumberValue();
    GLfloat _w = (GLfloat)args[3]->NumberValue();
    glVertex4f(_x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glVertex4fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glVertex4fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v = (GLfloat)args[0]->NumberValue();
    glVertex4fv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertex4i
   *
   * @param GLint x
   * @param GLint y
   * @param GLint z
   * @param GLint w
   * @return void
   */
  Handle<Value> gl_glVertex4i(const Arguments& args) {
    HandleScope scope;
    GLint _x = (GLint)args[0]->Int32Value();
    GLint _y = (GLint)args[1]->Int32Value();
    GLint _z = (GLint)args[2]->Int32Value();
    GLint _w = (GLint)args[3]->Int32Value();
    glVertex4i(_x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glVertex4iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glVertex4iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glVertex4iv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertex4s
   *
   * @param GLshort x
   * @param GLshort y
   * @param GLshort z
   * @param GLshort w
   * @return void
   */
  Handle<Value> gl_glVertex4s(const Arguments& args) {
    HandleScope scope;
    GLshort _x = (GLshort)args[0]->Int32Value();
    GLshort _y = (GLshort)args[1]->Int32Value();
    GLshort _z = (GLshort)args[2]->Int32Value();
    GLshort _w = (GLshort)args[3]->Int32Value();
    glVertex4s(_x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glVertex4sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertex4sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glVertex4sv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexPointer
   *
   * @param GLint size
   * @param GLenum type
   * @param GLsizei stride
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> gl_glVertexPointer(const Arguments& args) {
    HandleScope scope;
    GLint _size = (GLint)args[0]->Int32Value();
    GLenum _type = (GLenum)args[1]->Int32Value();
    GLsizei _stride = (GLsizei)args[2]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[3])) {
        return ThrowException(Exception::Error(
                              String::New("3nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[3]->ToObject());
    const GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glVertexPointer(_size, _type, _stride, _pointer);

    return Undefined();
  }


  /**
   * glViewport
   *
   * @param GLint x
   * @param GLint y
   * @param GLsizei width
   * @param GLsizei height
   * @return void
   */
  Handle<Value> gl_glViewport(const Arguments& args) {
    HandleScope scope;
    GLint _x = (GLint)args[0]->Int32Value();
    GLint _y = (GLint)args[1]->Int32Value();
    GLsizei _width = (GLsizei)args[2]->Int32Value();
    GLsizei _height = (GLsizei)args[3]->Int32Value();
    glViewport(_x, _y, _width, _height);

    return Undefined();
  }


  /**
   * glSampleCoverage
   *
   * @param GLclampf value
   * @param GLboolean invert
   * @return void
   */
  Handle<Value> gl_glSampleCoverage(const Arguments& args) {
    HandleScope scope;
    GLclampf _value = (GLclampf)args[0]->NumberValue();
    GLboolean _invert = (GLboolean)args[1]->Int32Value();
    glSampleCoverage(_value, _invert);

    return Undefined();
  }


  /**
   * glSamplePass
   *
   * @param GLenum pass
   * @return void
   */
  Handle<Value> gl_glSamplePass(const Arguments& args) {
    HandleScope scope;
    GLenum _pass = (GLenum)args[0]->Int32Value();
    glSamplePass(_pass);

    return Undefined();
  }


  /**
   * glLoadTransposeMatrixf
   *
   * @param const GLfloat *m
   * @return void
   */
  Handle<Value> gl_glLoadTransposeMatrixf(const Arguments& args) {
    HandleScope scope;
    const GLfloat _m = (GLfloat)args[0]->NumberValue();
    glLoadTransposeMatrixf(&_m);

    args[0] = Number::New(_m);

    return Undefined();
  }


  /**
   * glLoadTransposeMatrixd
   *
   * @param const GLdouble *m
   * @return void
   */
  Handle<Value> gl_glLoadTransposeMatrixd(const Arguments& args) {
    HandleScope scope;
    const GLdouble _m = (GLdouble)args[0]->NumberValue();
    glLoadTransposeMatrixd(&_m);

    args[0] = Number::New(_m);

    return Undefined();
  }


  /**
   * glMultTransposeMatrixf
   *
   * @param const GLfloat *m
   * @return void
   */
  Handle<Value> gl_glMultTransposeMatrixf(const Arguments& args) {
    HandleScope scope;
    const GLfloat _m = (GLfloat)args[0]->NumberValue();
    glMultTransposeMatrixf(&_m);

    args[0] = Number::New(_m);

    return Undefined();
  }


  /**
   * glMultTransposeMatrixd
   *
   * @param const GLdouble *m
   * @return void
   */
  Handle<Value> gl_glMultTransposeMatrixd(const Arguments& args) {
    HandleScope scope;
    const GLdouble _m = (GLdouble)args[0]->NumberValue();
    glMultTransposeMatrixd(&_m);

    args[0] = Number::New(_m);

    return Undefined();
  }


  /**
   * glCompressedTexImage3D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLenum internalformat
   * @param GLsizei width
   * @param GLsizei height
   * @param GLsizei depth
   * @param GLint border
   * @param GLsizei imageSize
   * @param const GLvoid *data
   * @return void
   */
  Handle<Value> gl_glCompressedTexImage3D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLenum _internalformat = (GLenum)args[2]->Int32Value();
    GLsizei _width = (GLsizei)args[3]->Int32Value();
    GLsizei _height = (GLsizei)args[4]->Int32Value();
    GLsizei _depth = (GLsizei)args[5]->Int32Value();
    GLint _border = (GLint)args[6]->Int32Value();
    GLsizei _imageSize = (GLsizei)args[7]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[8])) {
        return ThrowException(Exception::Error(
                              String::New("8nth argument needs to be a buffer")));
    }
    Buffer * data_buffer = ObjectWrap::Unwrap<Buffer>(args[8]->ToObject());
    const GLvoid *_data = (GLvoid *)data_buffer->data();
    glCompressedTexImage3D(_target, _level, _internalformat, _width, _height, _depth, _border, _imageSize, _data);

    return Undefined();
  }


  /**
   * glCompressedTexImage2D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLenum internalformat
   * @param GLsizei width
   * @param GLsizei height
   * @param GLint border
   * @param GLsizei imageSize
   * @param const GLvoid *data
   * @return void
   */
  Handle<Value> gl_glCompressedTexImage2D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLenum _internalformat = (GLenum)args[2]->Int32Value();
    GLsizei _width = (GLsizei)args[3]->Int32Value();
    GLsizei _height = (GLsizei)args[4]->Int32Value();
    GLint _border = (GLint)args[5]->Int32Value();
    GLsizei _imageSize = (GLsizei)args[6]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[7])) {
        return ThrowException(Exception::Error(
                              String::New("7nth argument needs to be a buffer")));
    }
    Buffer * data_buffer = ObjectWrap::Unwrap<Buffer>(args[7]->ToObject());
    const GLvoid *_data = (GLvoid *)data_buffer->data();
    glCompressedTexImage2D(_target, _level, _internalformat, _width, _height, _border, _imageSize, _data);

    return Undefined();
  }


  /**
   * glCompressedTexImage1D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLenum internalformat
   * @param GLsizei width
   * @param GLint border
   * @param GLsizei imageSize
   * @param const GLvoid *data
   * @return void
   */
  Handle<Value> gl_glCompressedTexImage1D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLenum _internalformat = (GLenum)args[2]->Int32Value();
    GLsizei _width = (GLsizei)args[3]->Int32Value();
    GLint _border = (GLint)args[4]->Int32Value();
    GLsizei _imageSize = (GLsizei)args[5]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[6])) {
        return ThrowException(Exception::Error(
                              String::New("6nth argument needs to be a buffer")));
    }
    Buffer * data_buffer = ObjectWrap::Unwrap<Buffer>(args[6]->ToObject());
    const GLvoid *_data = (GLvoid *)data_buffer->data();
    glCompressedTexImage1D(_target, _level, _internalformat, _width, _border, _imageSize, _data);

    return Undefined();
  }


  /**
   * glCompressedTexSubImage3D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLint xoffset
   * @param GLint yoffset
   * @param GLint zoffset
   * @param GLsizei width
   * @param GLsizei height
   * @param GLsizei depth
   * @param GLenum format
   * @param GLsizei imageSize
   * @param const GLvoid *data
   * @return void
   */
  Handle<Value> gl_glCompressedTexSubImage3D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLint _xoffset = (GLint)args[2]->Int32Value();
    GLint _yoffset = (GLint)args[3]->Int32Value();
    GLint _zoffset = (GLint)args[4]->Int32Value();
    GLsizei _width = (GLsizei)args[5]->Int32Value();
    GLsizei _height = (GLsizei)args[6]->Int32Value();
    GLsizei _depth = (GLsizei)args[7]->Int32Value();
    GLenum _format = (GLenum)args[8]->Int32Value();
    GLsizei _imageSize = (GLsizei)args[9]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[10])) {
        return ThrowException(Exception::Error(
                              String::New("10nth argument needs to be a buffer")));
    }
    Buffer * data_buffer = ObjectWrap::Unwrap<Buffer>(args[10]->ToObject());
    const GLvoid *_data = (GLvoid *)data_buffer->data();
    glCompressedTexSubImage3D(_target, _level, _xoffset, _yoffset, _zoffset, _width, _height, _depth, _format, _imageSize, _data);

    return Undefined();
  }


  /**
   * glCompressedTexSubImage2D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLint xoffset
   * @param GLint yoffset
   * @param GLsizei width
   * @param GLsizei height
   * @param GLenum format
   * @param GLsizei imageSize
   * @param const GLvoid *data
   * @return void
   */
  Handle<Value> gl_glCompressedTexSubImage2D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLint _xoffset = (GLint)args[2]->Int32Value();
    GLint _yoffset = (GLint)args[3]->Int32Value();
    GLsizei _width = (GLsizei)args[4]->Int32Value();
    GLsizei _height = (GLsizei)args[5]->Int32Value();
    GLenum _format = (GLenum)args[6]->Int32Value();
    GLsizei _imageSize = (GLsizei)args[7]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[8])) {
        return ThrowException(Exception::Error(
                              String::New("8nth argument needs to be a buffer")));
    }
    Buffer * data_buffer = ObjectWrap::Unwrap<Buffer>(args[8]->ToObject());
    const GLvoid *_data = (GLvoid *)data_buffer->data();
    glCompressedTexSubImage2D(_target, _level, _xoffset, _yoffset, _width, _height, _format, _imageSize, _data);

    return Undefined();
  }


  /**
   * glCompressedTexSubImage1D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLint xoffset
   * @param GLsizei width
   * @param GLenum format
   * @param GLsizei imageSize
   * @param const GLvoid *data
   * @return void
   */
  Handle<Value> gl_glCompressedTexSubImage1D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLint _xoffset = (GLint)args[2]->Int32Value();
    GLsizei _width = (GLsizei)args[3]->Int32Value();
    GLenum _format = (GLenum)args[4]->Int32Value();
    GLsizei _imageSize = (GLsizei)args[5]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[6])) {
        return ThrowException(Exception::Error(
                              String::New("6nth argument needs to be a buffer")));
    }
    Buffer * data_buffer = ObjectWrap::Unwrap<Buffer>(args[6]->ToObject());
    const GLvoid *_data = (GLvoid *)data_buffer->data();
    glCompressedTexSubImage1D(_target, _level, _xoffset, _width, _format, _imageSize, _data);

    return Undefined();
  }


  /**
   * glGetCompressedTexImage
   *
   * @param GLenum target
   * @param GLint lod
   * @param GLvoid *img
   * @return void
   */
  Handle<Value> gl_glGetCompressedTexImage(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _lod = (GLint)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * img_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    GLvoid *_img = (GLvoid *)img_buffer->data();
    glGetCompressedTexImage(_target, _lod, _img);

    return Undefined();
  }


  /**
   * glActiveTexture
   *
   * @param GLenum texture
   * @return void
   */
  Handle<Value> gl_glActiveTexture(const Arguments& args) {
    HandleScope scope;
    GLenum _texture = (GLenum)args[0]->Int32Value();
    glActiveTexture(_texture);

    return Undefined();
  }


  /**
   * glClientActiveTexture
   *
   * @param GLenum texture
   * @return void
   */
  Handle<Value> gl_glClientActiveTexture(const Arguments& args) {
    HandleScope scope;
    GLenum _texture = (GLenum)args[0]->Int32Value();
    glClientActiveTexture(_texture);

    return Undefined();
  }


  /**
   * glMultiTexCoord1d
   *
   * @param GLenum target
   * @param GLdouble s
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1d(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _s = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord1d(_target, _s);

    return Undefined();
  }


  /**
   * glMultiTexCoord1dv
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1dv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLdouble _v = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord1dv(_target, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glMultiTexCoord1f
   *
   * @param GLenum target
   * @param GLfloat s
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1f(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _s = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord1f(_target, _s);

    return Undefined();
  }


  /**
   * glMultiTexCoord1fv
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1fv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLfloat _v = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord1fv(_target, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glMultiTexCoord1i
   *
   * @param GLenum target
   * @param GLint s
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1i(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _s = (GLint)args[1]->Int32Value();
    glMultiTexCoord1i(_target, _s);

    return Undefined();
  }


  /**
   * glMultiTexCoord1iv
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1iv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
    glMultiTexCoord1iv(_target, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glMultiTexCoord1s
   *
   * @param GLenum target
   * @param GLshort s
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1s(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLshort _s = (GLshort)args[1]->Int32Value();
    glMultiTexCoord1s(_target, _s);

    return Undefined();
  }


  /**
   * glMultiTexCoord1sv
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1sv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glMultiTexCoord1sv(_target, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glMultiTexCoord2d
   *
   * @param GLenum target
   * @param GLdouble s
   * @param GLdouble t
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2d(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _s = (GLdouble)args[1]->NumberValue();
    GLdouble _t = (GLdouble)args[2]->NumberValue();
    glMultiTexCoord2d(_target, _s, _t);

    return Undefined();
  }


  /**
   * glMultiTexCoord2dv
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2dv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLdouble _v = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord2dv(_target, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glMultiTexCoord2f
   *
   * @param GLenum target
   * @param GLfloat s
   * @param GLfloat t
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2f(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _s = (GLfloat)args[1]->NumberValue();
    GLfloat _t = (GLfloat)args[2]->NumberValue();
    glMultiTexCoord2f(_target, _s, _t);

    return Undefined();
  }


  /**
   * glMultiTexCoord2fv
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2fv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLfloat _v = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord2fv(_target, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glMultiTexCoord2i
   *
   * @param GLenum target
   * @param GLint s
   * @param GLint t
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2i(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _s = (GLint)args[1]->Int32Value();
    GLint _t = (GLint)args[2]->Int32Value();
    glMultiTexCoord2i(_target, _s, _t);

    return Undefined();
  }


  /**
   * glMultiTexCoord2iv
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2iv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
    glMultiTexCoord2iv(_target, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glMultiTexCoord2s
   *
   * @param GLenum target
   * @param GLshort s
   * @param GLshort t
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2s(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLshort _s = (GLshort)args[1]->Int32Value();
    GLshort _t = (GLshort)args[2]->Int32Value();
    glMultiTexCoord2s(_target, _s, _t);

    return Undefined();
  }


  /**
   * glMultiTexCoord2sv
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2sv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glMultiTexCoord2sv(_target, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glMultiTexCoord3d
   *
   * @param GLenum target
   * @param GLdouble s
   * @param GLdouble t
   * @param GLdouble r
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3d(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _s = (GLdouble)args[1]->NumberValue();
    GLdouble _t = (GLdouble)args[2]->NumberValue();
    GLdouble _r = (GLdouble)args[3]->NumberValue();
    glMultiTexCoord3d(_target, _s, _t, _r);

    return Undefined();
  }


  /**
   * glMultiTexCoord3dv
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3dv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLdouble _v = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord3dv(_target, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glMultiTexCoord3f
   *
   * @param GLenum target
   * @param GLfloat s
   * @param GLfloat t
   * @param GLfloat r
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3f(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _s = (GLfloat)args[1]->NumberValue();
    GLfloat _t = (GLfloat)args[2]->NumberValue();
    GLfloat _r = (GLfloat)args[3]->NumberValue();
    glMultiTexCoord3f(_target, _s, _t, _r);

    return Undefined();
  }


  /**
   * glMultiTexCoord3fv
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3fv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLfloat _v = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord3fv(_target, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glMultiTexCoord3i
   *
   * @param GLenum target
   * @param GLint s
   * @param GLint t
   * @param GLint r
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3i(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _s = (GLint)args[1]->Int32Value();
    GLint _t = (GLint)args[2]->Int32Value();
    GLint _r = (GLint)args[3]->Int32Value();
    glMultiTexCoord3i(_target, _s, _t, _r);

    return Undefined();
  }


  /**
   * glMultiTexCoord3iv
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3iv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
    glMultiTexCoord3iv(_target, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glMultiTexCoord3s
   *
   * @param GLenum target
   * @param GLshort s
   * @param GLshort t
   * @param GLshort r
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3s(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLshort _s = (GLshort)args[1]->Int32Value();
    GLshort _t = (GLshort)args[2]->Int32Value();
    GLshort _r = (GLshort)args[3]->Int32Value();
    glMultiTexCoord3s(_target, _s, _t, _r);

    return Undefined();
  }


  /**
   * glMultiTexCoord3sv
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3sv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glMultiTexCoord3sv(_target, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glMultiTexCoord4d
   *
   * @param GLenum target
   * @param GLdouble s
   * @param GLdouble t
   * @param GLdouble r
   * @param GLdouble q
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4d(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _s = (GLdouble)args[1]->NumberValue();
    GLdouble _t = (GLdouble)args[2]->NumberValue();
    GLdouble _r = (GLdouble)args[3]->NumberValue();
    GLdouble _q = (GLdouble)args[4]->NumberValue();
    glMultiTexCoord4d(_target, _s, _t, _r, _q);

    return Undefined();
  }


  /**
   * glMultiTexCoord4dv
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4dv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLdouble _v = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord4dv(_target, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glMultiTexCoord4f
   *
   * @param GLenum target
   * @param GLfloat s
   * @param GLfloat t
   * @param GLfloat r
   * @param GLfloat q
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4f(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _s = (GLfloat)args[1]->NumberValue();
    GLfloat _t = (GLfloat)args[2]->NumberValue();
    GLfloat _r = (GLfloat)args[3]->NumberValue();
    GLfloat _q = (GLfloat)args[4]->NumberValue();
    glMultiTexCoord4f(_target, _s, _t, _r, _q);

    return Undefined();
  }


  /**
   * glMultiTexCoord4fv
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4fv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLfloat _v = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord4fv(_target, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glMultiTexCoord4i
   *
   * @param GLenum target
   * @param GLint
   * @param GLint s
   * @param GLint t
   * @param GLint r
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4i(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _arg1 = (GLint)args[1]->Int32Value();
    GLint _s = (GLint)args[2]->Int32Value();
    GLint _t = (GLint)args[3]->Int32Value();
    GLint _r = (GLint)args[4]->Int32Value();
    glMultiTexCoord4i(_target, _arg1, _s, _t, _r);

    return Undefined();
  }


  /**
   * glMultiTexCoord4iv
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4iv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
    glMultiTexCoord4iv(_target, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glMultiTexCoord4s
   *
   * @param GLenum target
   * @param GLshort s
   * @param GLshort t
   * @param GLshort r
   * @param GLshort q
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4s(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLshort _s = (GLshort)args[1]->Int32Value();
    GLshort _t = (GLshort)args[2]->Int32Value();
    GLshort _r = (GLshort)args[3]->Int32Value();
    GLshort _q = (GLshort)args[4]->Int32Value();
    glMultiTexCoord4s(_target, _s, _t, _r, _q);

    return Undefined();
  }


  /**
   * glMultiTexCoord4sv
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4sv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glMultiTexCoord4sv(_target, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glFogCoordf
   *
   * @param GLfloat coord
   * @return void
   */
  Handle<Value> gl_glFogCoordf(const Arguments& args) {
    HandleScope scope;
    GLfloat _coord = (GLfloat)args[0]->NumberValue();
    glFogCoordf(_coord);

    return Undefined();
  }


  /**
   * glFogCoordfv
   *
   * @param const GLfloat *coord
   * @return void
   */
  Handle<Value> gl_glFogCoordfv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _coord = (GLfloat)args[0]->NumberValue();
    glFogCoordfv(&_coord);

    args[0] = Number::New(_coord);

    return Undefined();
  }


  /**
   * glFogCoordd
   *
   * @param GLdouble coord
   * @return void
   */
  Handle<Value> gl_glFogCoordd(const Arguments& args) {
    HandleScope scope;
    GLdouble _coord = (GLdouble)args[0]->NumberValue();
    glFogCoordd(_coord);

    return Undefined();
  }


  /**
   * glFogCoorddv
   *
   * @param const GLdouble * coord
   * @return void
   */
  Handle<Value> gl_glFogCoorddv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _coord = (GLdouble)args[0]->NumberValue();
    glFogCoorddv(&_coord);

    args[0] = Number::New(_coord);

    return Undefined();
  }


  /**
   * glFogCoordPointer
   *
   * @param GLenum type
   * @param GLsizei stride
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> gl_glFogCoordPointer(const Arguments& args) {
    HandleScope scope;
    GLenum _type = (GLenum)args[0]->Int32Value();
    GLsizei _stride = (GLsizei)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    const GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glFogCoordPointer(_type, _stride, _pointer);

    return Undefined();
  }


  /**
   * glSecondaryColor3b
   *
   * @param GLbyte red
   * @param GLbyte green
   * @param GLbyte blue
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3b(const Arguments& args) {
    HandleScope scope;
    GLbyte _red = (GLbyte)args[0]->Int32Value();
    GLbyte _green = (GLbyte)args[1]->Int32Value();
    GLbyte _blue = (GLbyte)args[2]->Int32Value();
    glSecondaryColor3b(_red, _green, _blue);

    return Undefined();
  }


  /**
   * glSecondaryColor3bv
   *
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3bv(const Arguments& args) {
    HandleScope scope;
    const GLbyte _v = (GLbyte)args[0]->Int32Value();
    glSecondaryColor3bv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glSecondaryColor3d
   *
   * @param GLdouble red
   * @param GLdouble green
   * @param GLdouble blue
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3d(const Arguments& args) {
    HandleScope scope;
    GLdouble _red = (GLdouble)args[0]->NumberValue();
    GLdouble _green = (GLdouble)args[1]->NumberValue();
    GLdouble _blue = (GLdouble)args[2]->NumberValue();
    glSecondaryColor3d(_red, _green, _blue);

    return Undefined();
  }


  /**
   * glSecondaryColor3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v = (GLdouble)args[0]->NumberValue();
    glSecondaryColor3dv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glSecondaryColor3f
   *
   * @param GLfloat red
   * @param GLfloat green
   * @param GLfloat blue
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3f(const Arguments& args) {
    HandleScope scope;
    GLfloat _red = (GLfloat)args[0]->NumberValue();
    GLfloat _green = (GLfloat)args[1]->NumberValue();
    GLfloat _blue = (GLfloat)args[2]->NumberValue();
    glSecondaryColor3f(_red, _green, _blue);

    return Undefined();
  }


  /**
   * glSecondaryColor3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v = (GLfloat)args[0]->NumberValue();
    glSecondaryColor3fv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glSecondaryColor3i
   *
   * @param GLint red
   * @param GLint green
   * @param GLint blue
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3i(const Arguments& args) {
    HandleScope scope;
    GLint _red = (GLint)args[0]->Int32Value();
    GLint _green = (GLint)args[1]->Int32Value();
    GLint _blue = (GLint)args[2]->Int32Value();
    glSecondaryColor3i(_red, _green, _blue);

    return Undefined();
  }


  /**
   * glSecondaryColor3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glSecondaryColor3iv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glSecondaryColor3s
   *
   * @param GLshort red
   * @param GLshort green
   * @param GLshort blue
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3s(const Arguments& args) {
    HandleScope scope;
    GLshort _red = (GLshort)args[0]->Int32Value();
    GLshort _green = (GLshort)args[1]->Int32Value();
    GLshort _blue = (GLshort)args[2]->Int32Value();
    glSecondaryColor3s(_red, _green, _blue);

    return Undefined();
  }


  /**
   * glSecondaryColor3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glSecondaryColor3sv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glSecondaryColor3ub
   *
   * @param GLubyte red
   * @param GLubyte green
   * @param GLubyte blue
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3ub(const Arguments& args) {
    HandleScope scope;
    GLubyte _red = (GLubyte)args[0]->Int32Value();
    GLubyte _green = (GLubyte)args[1]->Int32Value();
    GLubyte _blue = (GLubyte)args[2]->Int32Value();
    glSecondaryColor3ub(_red, _green, _blue);

    return Undefined();
  }


  /**
   * glSecondaryColor3ubv
   *
   * @param const GLubyte *v
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3ubv(const Arguments& args) {
    HandleScope scope;
    const GLubyte _v = (GLubyte)args[0]->Int32Value();
    glSecondaryColor3ubv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glSecondaryColor3ui
   *
   * @param GLuint red
   * @param GLuint green
   * @param GLuint blue
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3ui(const Arguments& args) {
    HandleScope scope;
    GLuint _red = (GLuint)args[0]->Uint32Value();
    GLuint _green = (GLuint)args[1]->Uint32Value();
    GLuint _blue = (GLuint)args[2]->Uint32Value();
    glSecondaryColor3ui(_red, _green, _blue);

    return Undefined();
  }


  /**
   * glSecondaryColor3uiv
   *
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3uiv(const Arguments& args) {
    HandleScope scope;
    const GLuint _v = (GLuint)args[0]->Uint32Value();
    glSecondaryColor3uiv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glSecondaryColor3us
   *
   * @param GLushort red
   * @param GLushort green
   * @param GLushort blue
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3us(const Arguments& args) {
    HandleScope scope;
    GLushort _red = (GLushort)args[0]->Uint32Value();
    GLushort _green = (GLushort)args[1]->Uint32Value();
    GLushort _blue = (GLushort)args[2]->Uint32Value();
    glSecondaryColor3us(_red, _green, _blue);

    return Undefined();
  }


  /**
   * glSecondaryColor3usv
   *
   * @param const GLushort *v
   * @return void
   */
  Handle<Value> gl_glSecondaryColor3usv(const Arguments& args) {
    HandleScope scope;
    const GLushort _v = (GLushort)args[0]->Uint32Value();
    glSecondaryColor3usv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glSecondaryColorPointer
   *
   * @param GLint size
   * @param GLenum type
   * @param GLsizei stride
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> gl_glSecondaryColorPointer(const Arguments& args) {
    HandleScope scope;
    GLint _size = (GLint)args[0]->Int32Value();
    GLenum _type = (GLenum)args[1]->Int32Value();
    GLsizei _stride = (GLsizei)args[2]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[3])) {
        return ThrowException(Exception::Error(
                              String::New("3nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[3]->ToObject());
    const GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glSecondaryColorPointer(_size, _type, _stride, _pointer);

    return Undefined();
  }


  /**
   * glPointParameterf
   *
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> gl_glPointParameterf(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLfloat _param = (GLfloat)args[1]->NumberValue();
    glPointParameterf(_pname, _param);

    return Undefined();
  }


  /**
   * glPointParameterfv
   *
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> gl_glPointParameterfv(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    const GLfloat _params = (GLfloat)args[1]->NumberValue();
    glPointParameterfv(_pname, &_params);

    args[1] = Number::New(_params);

    return Undefined();
  }


  /**
   * glPointParameteri
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> gl_glPointParameteri(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLint _param = (GLint)args[1]->Int32Value();
    glPointParameteri(_pname, _param);

    return Undefined();
  }


  /**
   * glPointParameteriv
   *
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> gl_glPointParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    const GLint _params = (GLint)args[1]->Int32Value();
    glPointParameteriv(_pname, &_params);

    args[1] = Number::New(_params);

    return Undefined();
  }


  /**
   * glBlendFuncSeparate
   *
   * @param GLenum srcRGB
   * @param GLenum dstRGB
   * @param GLenum srcAlpha
   * @param GLenum dstAlpha
   * @return void
   */
  Handle<Value> gl_glBlendFuncSeparate(const Arguments& args) {
    HandleScope scope;
    GLenum _srcRGB = (GLenum)args[0]->Int32Value();
    GLenum _dstRGB = (GLenum)args[1]->Int32Value();
    GLenum _srcAlpha = (GLenum)args[2]->Int32Value();
    GLenum _dstAlpha = (GLenum)args[3]->Int32Value();
    glBlendFuncSeparate(_srcRGB, _dstRGB, _srcAlpha, _dstAlpha);

    return Undefined();
  }


  /**
   * glMultiDrawArrays
   *
   * @param GLenum mode
   * @param const GLint *first
   * @param const GLsizei *count
   * @param GLsizei primcount
   * @return void
   */
  Handle<Value> gl_glMultiDrawArrays(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    const GLint _first = (GLint)args[1]->Int32Value();
    const GLsizei _count = (GLsizei)args[2]->Int32Value();
    GLsizei _primcount = (GLsizei)args[3]->Int32Value();
    glMultiDrawArrays(_mode, &_first, &_count, _primcount);

    args[1] = Number::New(_first);

    args[2] = Number::New(_count);

    return Undefined();
  }


  /**
   * glMultiDrawElements
   *
   * @param GLenum mode
   * @param const GLsizei *count
   * @param GLenum type
   * @param const GLvoid* *indices
   * @param GLsizei primcount
   * @return void
   */
  Handle<Value> gl_glMultiDrawElements(const Arguments& args) {
    HandleScope scope;
    GLenum _mode = (GLenum)args[0]->Int32Value();
    const GLsizei _count = (GLsizei)args[1]->Int32Value();
    GLenum _type = (GLenum)args[2]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[3])) {
        return ThrowException(Exception::Error(
                              String::New("3nth argument needs to be a buffer")));
    }
    Buffer * indices_buffer = ObjectWrap::Unwrap<Buffer>(args[3]->ToObject());
    const GLvoid *_indices = (GLvoid *)indices_buffer->data();
    GLsizei _primcount = (GLsizei)args[4]->Int32Value();
    glMultiDrawElements(_mode, &_count, _type, &_indices, _primcount);

    args[1] = Number::New(_count);

    return Undefined();
  }


  /**
   * glWindowPos2d
   *
   * @param GLdouble x
   * @param GLdouble y
   * @return void
   */
  Handle<Value> gl_glWindowPos2d(const Arguments& args) {
    HandleScope scope;
    GLdouble _x = (GLdouble)args[0]->NumberValue();
    GLdouble _y = (GLdouble)args[1]->NumberValue();
    glWindowPos2d(_x, _y);

    return Undefined();
  }


  /**
   * glWindowPos2dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glWindowPos2dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v = (GLdouble)args[0]->NumberValue();
    glWindowPos2dv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glWindowPos2f
   *
   * @param GLfloat x
   * @param GLfloat y
   * @return void
   */
  Handle<Value> gl_glWindowPos2f(const Arguments& args) {
    HandleScope scope;
    GLfloat _x = (GLfloat)args[0]->NumberValue();
    GLfloat _y = (GLfloat)args[1]->NumberValue();
    glWindowPos2f(_x, _y);

    return Undefined();
  }


  /**
   * glWindowPos2fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glWindowPos2fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v = (GLfloat)args[0]->NumberValue();
    glWindowPos2fv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glWindowPos2i
   *
   * @param GLint x
   * @param GLint y
   * @return void
   */
  Handle<Value> gl_glWindowPos2i(const Arguments& args) {
    HandleScope scope;
    GLint _x = (GLint)args[0]->Int32Value();
    GLint _y = (GLint)args[1]->Int32Value();
    glWindowPos2i(_x, _y);

    return Undefined();
  }


  /**
   * glWindowPos2iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glWindowPos2iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glWindowPos2iv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glWindowPos2s
   *
   * @param GLshort x
   * @param GLshort y
   * @return void
   */
  Handle<Value> gl_glWindowPos2s(const Arguments& args) {
    HandleScope scope;
    GLshort _x = (GLshort)args[0]->Int32Value();
    GLshort _y = (GLshort)args[1]->Int32Value();
    glWindowPos2s(_x, _y);

    return Undefined();
  }


  /**
   * glWindowPos2sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glWindowPos2sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glWindowPos2sv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glWindowPos3d
   *
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @return void
   */
  Handle<Value> gl_glWindowPos3d(const Arguments& args) {
    HandleScope scope;
    GLdouble _x = (GLdouble)args[0]->NumberValue();
    GLdouble _y = (GLdouble)args[1]->NumberValue();
    GLdouble _z = (GLdouble)args[2]->NumberValue();
    glWindowPos3d(_x, _y, _z);

    return Undefined();
  }


  /**
   * glWindowPos3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glWindowPos3dv(const Arguments& args) {
    HandleScope scope;
    const GLdouble _v = (GLdouble)args[0]->NumberValue();
    glWindowPos3dv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glWindowPos3f
   *
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @return void
   */
  Handle<Value> gl_glWindowPos3f(const Arguments& args) {
    HandleScope scope;
    GLfloat _x = (GLfloat)args[0]->NumberValue();
    GLfloat _y = (GLfloat)args[1]->NumberValue();
    GLfloat _z = (GLfloat)args[2]->NumberValue();
    glWindowPos3f(_x, _y, _z);

    return Undefined();
  }


  /**
   * glWindowPos3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glWindowPos3fv(const Arguments& args) {
    HandleScope scope;
    const GLfloat _v = (GLfloat)args[0]->NumberValue();
    glWindowPos3fv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glWindowPos3i
   *
   * @param GLint x
   * @param GLint y
   * @param GLint z
   * @return void
   */
  Handle<Value> gl_glWindowPos3i(const Arguments& args) {
    HandleScope scope;
    GLint _x = (GLint)args[0]->Int32Value();
    GLint _y = (GLint)args[1]->Int32Value();
    GLint _z = (GLint)args[2]->Int32Value();
    glWindowPos3i(_x, _y, _z);

    return Undefined();
  }


  /**
   * glWindowPos3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glWindowPos3iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glWindowPos3iv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glWindowPos3s
   *
   * @param GLshort x
   * @param GLshort y
   * @param GLshort z
   * @return void
   */
  Handle<Value> gl_glWindowPos3s(const Arguments& args) {
    HandleScope scope;
    GLshort _x = (GLshort)args[0]->Int32Value();
    GLshort _y = (GLshort)args[1]->Int32Value();
    GLshort _z = (GLshort)args[2]->Int32Value();
    glWindowPos3s(_x, _y, _z);

    return Undefined();
  }


  /**
   * glWindowPos3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glWindowPos3sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glWindowPos3sv(&_v);

    args[0] = Number::New(_v);

    return Undefined();
  }


  /**
   * glGenQueries
   *
   * @param GLsizei n
   * @param GLuint *ids
   * @return void
   */
  Handle<Value> gl_glGenQueries(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    GLuint _ids = (GLuint)args[1]->Uint32Value();
    glGenQueries(_n, &_ids);

    args[1] = Number::New(_ids);

    return Undefined();
  }


  /**
   * glDeleteQueries
   *
   * @param GLsizei n
   * @param const GLuint *ids
   * @return void
   */
  Handle<Value> gl_glDeleteQueries(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    const GLuint _ids = (GLuint)args[1]->Uint32Value();
    glDeleteQueries(_n, &_ids);

    args[1] = Number::New(_ids);

    return Undefined();
  }


  /**
   * glIsQuery
   *
   * @param GLuint id
   * @return GLboolean
   */
  Handle<Value> gl_glIsQuery(const Arguments& args) {
    HandleScope scope;
    GLuint _id = (GLuint)args[0]->Uint32Value();
    GLboolean _ret = glIsQuery(_id);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glBeginQuery
   *
   * @param GLenum target
   * @param GLuint id
   * @return void
   */
  Handle<Value> gl_glBeginQuery(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _id = (GLuint)args[1]->Uint32Value();
    glBeginQuery(_target, _id);

    return Undefined();
  }


  /**
   * glEndQuery
   *
   * @param GLenum target
   * @return void
   */
  Handle<Value> gl_glEndQuery(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    glEndQuery(_target);

    return Undefined();
  }


  /**
   * glGetQueryiv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetQueryiv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetQueryiv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetQueryObjectiv
   *
   * @param GLuint id
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetQueryObjectiv(const Arguments& args) {
    HandleScope scope;
    GLuint _id = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetQueryObjectiv(_id, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetQueryObjectuiv
   *
   * @param GLuint id
   * @param GLenum pname
   * @param GLuint *params
   * @return void
   */
  Handle<Value> gl_glGetQueryObjectuiv(const Arguments& args) {
    HandleScope scope;
    GLuint _id = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLuint _params = (GLuint)args[2]->Uint32Value();
    glGetQueryObjectuiv(_id, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glBindBuffer
   *
   * @param GLenum target
   * @param GLuint buffer
   * @return void
   */
  Handle<Value> gl_glBindBuffer(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLuint _buffer = (GLuint)args[1]->Uint32Value();
    glBindBuffer(_target, _buffer);

    return Undefined();
  }


  /**
   * glDeleteBuffers
   *
   * @param GLsizei n
   * @param const GLuint *buffers
   * @return void
   */
  Handle<Value> gl_glDeleteBuffers(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    const GLuint _buffers = (GLuint)args[1]->Uint32Value();
    glDeleteBuffers(_n, &_buffers);

    args[1] = Number::New(_buffers);

    return Undefined();
  }


  /**
   * glGenBuffers
   *
   * @param GLsizei n
   * @param GLuint *buffers
   * @return void
   */
  Handle<Value> gl_glGenBuffers(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    GLuint _buffers = (GLuint)args[1]->Uint32Value();
    glGenBuffers(_n, &_buffers);

    args[1] = Number::New(_buffers);

    return Undefined();
  }


  /**
   * glIsBuffer
   *
   * @param GLuint buffer
   * @return GLboolean
   */
  Handle<Value> gl_glIsBuffer(const Arguments& args) {
    HandleScope scope;
    GLuint _buffer = (GLuint)args[0]->Uint32Value();
    GLboolean _ret = glIsBuffer(_buffer);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glBufferData
   *
   * @param GLenum target
   * @param GLsizeiptr size
   * @param const GLvoid *data
   * @param GLenum usage
   * @return void
   */
  Handle<Value> gl_glBufferData(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glBufferData is not implemented!")));
  }


  /**
   * glBufferSubData
   *
   * @param GLenum target
   * @param GLintptr offset
   * @param GLsizeiptr size
   * @param const GLvoid *data
   * @return void
   */
  Handle<Value> gl_glBufferSubData(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glBufferSubData is not implemented!")));
  }


  /**
   * glGetBufferSubData
   *
   * @param GLenum target
   * @param GLintptr offset
   * @param GLsizeiptr size
   * @param GLvoid *data
   * @return void
   */
  Handle<Value> gl_glGetBufferSubData(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetBufferSubData is not implemented!")));
  }


  /**
   * glUnmapBuffer
   *
   * @param GLenum target
   * @return GLboolean
   */
  Handle<Value> gl_glUnmapBuffer(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLboolean _ret = glUnmapBuffer(_target);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glGetBufferParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetBufferParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetBufferParameteriv(_target, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetBufferPointerv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLvoid **params
   * @return void
   */
  Handle<Value> gl_glGetBufferPointerv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * params_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    GLvoid *_params = (GLvoid *)params_buffer->data();
    glGetBufferPointerv(_target, _pname, &_params);

    return Undefined();
  }


  /**
   * glDrawBuffers
   *
   * @param GLsizei n
   * @param const GLenum *bufs
   * @return void
   */
  Handle<Value> gl_glDrawBuffers(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    const GLenum _bufs = (GLenum)args[1]->Int32Value();
    glDrawBuffers(_n, &_bufs);

    args[1] = Number::New(_bufs);

    return Undefined();
  }


  /**
   * glVertexAttrib1d
   *
   * @param GLuint index
   * @param GLdouble x
   * @return void
   */
  Handle<Value> gl_glVertexAttrib1d(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLdouble _x = (GLdouble)args[1]->NumberValue();
    glVertexAttrib1d(_index, _x);

    return Undefined();
  }


  /**
   * glVertexAttrib1dv
   *
   * @param GLuint index
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib1dv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLdouble _v = (GLdouble)args[1]->NumberValue();
    glVertexAttrib1dv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib1f
   *
   * @param GLuint index
   * @param GLfloat x
   * @return void
   */
  Handle<Value> gl_glVertexAttrib1f(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLfloat _x = (GLfloat)args[1]->NumberValue();
    glVertexAttrib1f(_index, _x);

    return Undefined();
  }


  /**
   * glVertexAttrib1fv
   *
   * @param GLuint index
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib1fv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLfloat _v = (GLfloat)args[1]->NumberValue();
    glVertexAttrib1fv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib1s
   *
   * @param GLuint index
   * @param GLshort x
   * @return void
   */
  Handle<Value> gl_glVertexAttrib1s(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLshort _x = (GLshort)args[1]->Int32Value();
    glVertexAttrib1s(_index, _x);

    return Undefined();
  }


  /**
   * glVertexAttrib1sv
   *
   * @param GLuint index
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib1sv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glVertexAttrib1sv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib2d
   *
   * @param GLuint index
   * @param GLdouble x
   * @param GLdouble y
   * @return void
   */
  Handle<Value> gl_glVertexAttrib2d(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLdouble _x = (GLdouble)args[1]->NumberValue();
    GLdouble _y = (GLdouble)args[2]->NumberValue();
    glVertexAttrib2d(_index, _x, _y);

    return Undefined();
  }


  /**
   * glVertexAttrib2dv
   *
   * @param GLuint index
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib2dv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLdouble _v = (GLdouble)args[1]->NumberValue();
    glVertexAttrib2dv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib2f
   *
   * @param GLuint index
   * @param GLfloat x
   * @param GLfloat y
   * @return void
   */
  Handle<Value> gl_glVertexAttrib2f(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLfloat _x = (GLfloat)args[1]->NumberValue();
    GLfloat _y = (GLfloat)args[2]->NumberValue();
    glVertexAttrib2f(_index, _x, _y);

    return Undefined();
  }


  /**
   * glVertexAttrib2fv
   *
   * @param GLuint index
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib2fv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLfloat _v = (GLfloat)args[1]->NumberValue();
    glVertexAttrib2fv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib2s
   *
   * @param GLuint index
   * @param GLshort x
   * @param GLshort y
   * @return void
   */
  Handle<Value> gl_glVertexAttrib2s(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLshort _x = (GLshort)args[1]->Int32Value();
    GLshort _y = (GLshort)args[2]->Int32Value();
    glVertexAttrib2s(_index, _x, _y);

    return Undefined();
  }


  /**
   * glVertexAttrib2sv
   *
   * @param GLuint index
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib2sv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glVertexAttrib2sv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib3d
   *
   * @param GLuint index
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @return void
   */
  Handle<Value> gl_glVertexAttrib3d(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLdouble _x = (GLdouble)args[1]->NumberValue();
    GLdouble _y = (GLdouble)args[2]->NumberValue();
    GLdouble _z = (GLdouble)args[3]->NumberValue();
    glVertexAttrib3d(_index, _x, _y, _z);

    return Undefined();
  }


  /**
   * glVertexAttrib3dv
   *
   * @param GLuint index
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib3dv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLdouble _v = (GLdouble)args[1]->NumberValue();
    glVertexAttrib3dv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib3f
   *
   * @param GLuint index
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @return void
   */
  Handle<Value> gl_glVertexAttrib3f(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLfloat _x = (GLfloat)args[1]->NumberValue();
    GLfloat _y = (GLfloat)args[2]->NumberValue();
    GLfloat _z = (GLfloat)args[3]->NumberValue();
    glVertexAttrib3f(_index, _x, _y, _z);

    return Undefined();
  }


  /**
   * glVertexAttrib3fv
   *
   * @param GLuint index
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib3fv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLfloat _v = (GLfloat)args[1]->NumberValue();
    glVertexAttrib3fv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib3s
   *
   * @param GLuint index
   * @param GLshort x
   * @param GLshort y
   * @param GLshort z
   * @return void
   */
  Handle<Value> gl_glVertexAttrib3s(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLshort _x = (GLshort)args[1]->Int32Value();
    GLshort _y = (GLshort)args[2]->Int32Value();
    GLshort _z = (GLshort)args[3]->Int32Value();
    glVertexAttrib3s(_index, _x, _y, _z);

    return Undefined();
  }


  /**
   * glVertexAttrib3sv
   *
   * @param GLuint index
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib3sv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glVertexAttrib3sv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4Nbv
   *
   * @param GLuint index
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4Nbv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLbyte _v = (GLbyte)args[1]->Int32Value();
    glVertexAttrib4Nbv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4Niv
   *
   * @param GLuint index
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4Niv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
    glVertexAttrib4Niv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4Nsv
   *
   * @param GLuint index
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4Nsv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glVertexAttrib4Nsv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4Nub
   *
   * @param GLuint index
   * @param GLubyte x
   * @param GLubyte y
   * @param GLubyte z
   * @param GLubyte w
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4Nub(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLubyte _x = (GLubyte)args[1]->Int32Value();
    GLubyte _y = (GLubyte)args[2]->Int32Value();
    GLubyte _z = (GLubyte)args[3]->Int32Value();
    GLubyte _w = (GLubyte)args[4]->Int32Value();
    glVertexAttrib4Nub(_index, _x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glVertexAttrib4Nubv
   *
   * @param GLuint index
   * @param const GLubyte *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4Nubv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLubyte _v = (GLubyte)args[1]->Int32Value();
    glVertexAttrib4Nubv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4Nuiv
   *
   * @param GLuint index
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4Nuiv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLuint _v = (GLuint)args[1]->Uint32Value();
    glVertexAttrib4Nuiv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4Nusv
   *
   * @param GLuint index
   * @param const GLushort *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4Nusv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLushort _v = (GLushort)args[1]->Uint32Value();
    glVertexAttrib4Nusv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4bv
   *
   * @param GLuint index
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4bv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLbyte _v = (GLbyte)args[1]->Int32Value();
    glVertexAttrib4bv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4d
   *
   * @param GLuint index
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @param GLdouble w
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4d(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLdouble _x = (GLdouble)args[1]->NumberValue();
    GLdouble _y = (GLdouble)args[2]->NumberValue();
    GLdouble _z = (GLdouble)args[3]->NumberValue();
    GLdouble _w = (GLdouble)args[4]->NumberValue();
    glVertexAttrib4d(_index, _x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glVertexAttrib4dv
   *
   * @param GLuint index
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4dv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLdouble _v = (GLdouble)args[1]->NumberValue();
    glVertexAttrib4dv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4f
   *
   * @param GLuint index
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @param GLfloat w
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4f(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLfloat _x = (GLfloat)args[1]->NumberValue();
    GLfloat _y = (GLfloat)args[2]->NumberValue();
    GLfloat _z = (GLfloat)args[3]->NumberValue();
    GLfloat _w = (GLfloat)args[4]->NumberValue();
    glVertexAttrib4f(_index, _x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glVertexAttrib4fv
   *
   * @param GLuint index
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4fv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLfloat _v = (GLfloat)args[1]->NumberValue();
    glVertexAttrib4fv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4iv
   *
   * @param GLuint index
   * @param const GLint *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4iv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
    glVertexAttrib4iv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4s
   *
   * @param GLuint index
   * @param GLshort x
   * @param GLshort y
   * @param GLshort z
   * @param GLshort w
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4s(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLshort _x = (GLshort)args[1]->Int32Value();
    GLshort _y = (GLshort)args[2]->Int32Value();
    GLshort _z = (GLshort)args[3]->Int32Value();
    GLshort _w = (GLshort)args[4]->Int32Value();
    glVertexAttrib4s(_index, _x, _y, _z, _w);

    return Undefined();
  }


  /**
   * glVertexAttrib4sv
   *
   * @param GLuint index
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4sv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glVertexAttrib4sv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4ubv
   *
   * @param GLuint index
   * @param const GLubyte *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4ubv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLubyte _v = (GLubyte)args[1]->Int32Value();
    glVertexAttrib4ubv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4uiv
   *
   * @param GLuint index
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4uiv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLuint _v = (GLuint)args[1]->Uint32Value();
    glVertexAttrib4uiv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttrib4usv
   *
   * @param GLuint index
   * @param const GLushort *v
   * @return void
   */
  Handle<Value> gl_glVertexAttrib4usv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    const GLushort _v = (GLushort)args[1]->Uint32Value();
    glVertexAttrib4usv(_index, &_v);

    args[1] = Number::New(_v);

    return Undefined();
  }


  /**
   * glVertexAttribPointer
   *
   * @param GLuint index
   * @param GLint size
   * @param GLenum type
   * @param GLboolean normalized
   * @param GLsizei stride
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> gl_glVertexAttribPointer(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLint _size = (GLint)args[1]->Int32Value();
    GLenum _type = (GLenum)args[2]->Int32Value();
    GLboolean _normalized = (GLboolean)args[3]->Int32Value();
    GLsizei _stride = (GLsizei)args[4]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[5])) {
        return ThrowException(Exception::Error(
                              String::New("5nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[5]->ToObject());
    const GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glVertexAttribPointer(_index, _size, _type, _normalized, _stride, _pointer);

    return Undefined();
  }


  /**
   * glEnableVertexAttribArray
   *
   * @param GLuint index
   * @return void
   */
  Handle<Value> gl_glEnableVertexAttribArray(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    glEnableVertexAttribArray(_index);

    return Undefined();
  }


  /**
   * glDisableVertexAttribArray
   *
   * @param GLuint index
   * @return void
   */
  Handle<Value> gl_glDisableVertexAttribArray(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    glDisableVertexAttribArray(_index);

    return Undefined();
  }


  /**
   * glGetVertexAttribdv
   *
   * @param GLuint index
   * @param GLenum pname
   * @param GLdouble *params
   * @return void
   */
  Handle<Value> gl_glGetVertexAttribdv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLdouble _params = (GLdouble)args[2]->NumberValue();
    glGetVertexAttribdv(_index, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetVertexAttribfv
   *
   * @param GLuint index
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetVertexAttribfv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glGetVertexAttribfv(_index, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetVertexAttribiv
   *
   * @param GLuint index
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetVertexAttribiv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetVertexAttribiv(_index, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetVertexAttribPointerv
   *
   * @param GLuint index
   * @param GLenum pname
   * @param GLvoid* *pointer
   * @return void
   */
  Handle<Value> gl_glGetVertexAttribPointerv(const Arguments& args) {
    HandleScope scope;
    GLuint _index = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * pointer_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glGetVertexAttribPointerv(_index, _pname, &_pointer);

    return Undefined();
  }


  /**
   * glDeleteShader
   *
   * @param GLuint shader
   * @return void
   */
  Handle<Value> gl_glDeleteShader(const Arguments& args) {
    HandleScope scope;
    GLuint _shader = (GLuint)args[0]->Uint32Value();
    glDeleteShader(_shader);

    return Undefined();
  }


  /**
   * glDetachShader
   *
   * @param GLuint program
   * @param GLuint shader
   * @return void
   */
  Handle<Value> gl_glDetachShader(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    GLuint _shader = (GLuint)args[1]->Uint32Value();
    glDetachShader(_program, _shader);

    return Undefined();
  }


  /**
   * glCreateShader
   *
   * @param GLenum type
   * @return GLuint
   */
  Handle<Value> gl_glCreateShader(const Arguments& args) {
    HandleScope scope;
    GLenum _type = (GLenum)args[0]->Int32Value();
    GLuint _ret = glCreateShader(_type);

    return scope.Close(Number::New(_ret));
  }


  /**
   * glShaderSource
   *
   * @param GLuint shader
   * @param GLsizei count
   * @param const GLchar* *string
   * @param const GLint *length
   * @return void
   */
  Handle<Value> gl_glShaderSource(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glShaderSource is not implemented!")));
  }


  /**
   * glCompileShader
   *
   * @param GLuint shader
   * @return void
   */
  Handle<Value> gl_glCompileShader(const Arguments& args) {
    HandleScope scope;
    GLuint _shader = (GLuint)args[0]->Uint32Value();
    glCompileShader(_shader);

    return Undefined();
  }


  /**
   * glCreateProgram
   *
   * @return GLuint
   */
  Handle<Value> gl_glCreateProgram(const Arguments& args) {
    HandleScope scope;
    GLuint _ret = glCreateProgram();

    return scope.Close(Number::New(_ret));
  }


  /**
   * glAttachShader
   *
   * @param GLuint program
   * @param GLuint shader
   * @return void
   */
  Handle<Value> gl_glAttachShader(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    GLuint _shader = (GLuint)args[1]->Uint32Value();
    glAttachShader(_program, _shader);

    return Undefined();
  }


  /**
   * glLinkProgram
   *
   * @param GLuint program
   * @return void
   */
  Handle<Value> gl_glLinkProgram(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    glLinkProgram(_program);

    return Undefined();
  }


  /**
   * glUseProgram
   *
   * @param GLuint program
   * @return void
   */
  Handle<Value> gl_glUseProgram(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    glUseProgram(_program);

    return Undefined();
  }


  /**
   * glDeleteProgram
   *
   * @param GLuint program
   * @return void
   */
  Handle<Value> gl_glDeleteProgram(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    glDeleteProgram(_program);

    return Undefined();
  }


  /**
   * glValidateProgram
   *
   * @param GLuint program
   * @return void
   */
  Handle<Value> gl_glValidateProgram(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    glValidateProgram(_program);

    return Undefined();
  }


  /**
   * glUniform1f
   *
   * @param GLint location
   * @param GLfloat v0
   * @return void
   */
  Handle<Value> gl_glUniform1f(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLfloat _v0 = (GLfloat)args[1]->NumberValue();
    glUniform1f(_location, _v0);

    return Undefined();
  }


  /**
   * glUniform2f
   *
   * @param GLint location
   * @param GLfloat v0
   * @param GLfloat v1
   * @return void
   */
  Handle<Value> gl_glUniform2f(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLfloat _v0 = (GLfloat)args[1]->NumberValue();
    GLfloat _v1 = (GLfloat)args[2]->NumberValue();
    glUniform2f(_location, _v0, _v1);

    return Undefined();
  }


  /**
   * glUniform3f
   *
   * @param GLint location
   * @param GLfloat v0
   * @param GLfloat v1
   * @param GLfloat v2
   * @return void
   */
  Handle<Value> gl_glUniform3f(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLfloat _v0 = (GLfloat)args[1]->NumberValue();
    GLfloat _v1 = (GLfloat)args[2]->NumberValue();
    GLfloat _v2 = (GLfloat)args[3]->NumberValue();
    glUniform3f(_location, _v0, _v1, _v2);

    return Undefined();
  }


  /**
   * glUniform4f
   *
   * @param GLint location
   * @param GLfloat v0
   * @param GLfloat v1
   * @param GLfloat v2
   * @param GLfloat v3
   * @return void
   */
  Handle<Value> gl_glUniform4f(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLfloat _v0 = (GLfloat)args[1]->NumberValue();
    GLfloat _v1 = (GLfloat)args[2]->NumberValue();
    GLfloat _v2 = (GLfloat)args[3]->NumberValue();
    GLfloat _v3 = (GLfloat)args[4]->NumberValue();
    glUniform4f(_location, _v0, _v1, _v2, _v3);

    return Undefined();
  }


  /**
   * glUniform1i
   *
   * @param GLint location
   * @param GLint v0
   * @return void
   */
  Handle<Value> gl_glUniform1i(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLint _v0 = (GLint)args[1]->Int32Value();
    glUniform1i(_location, _v0);

    return Undefined();
  }


  /**
   * glUniform2i
   *
   * @param GLint location
   * @param GLint v0
   * @param GLint v1
   * @return void
   */
  Handle<Value> gl_glUniform2i(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLint _v0 = (GLint)args[1]->Int32Value();
    GLint _v1 = (GLint)args[2]->Int32Value();
    glUniform2i(_location, _v0, _v1);

    return Undefined();
  }


  /**
   * glUniform3i
   *
   * @param GLint location
   * @param GLint v0
   * @param GLint v1
   * @param GLint v2
   * @return void
   */
  Handle<Value> gl_glUniform3i(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLint _v0 = (GLint)args[1]->Int32Value();
    GLint _v1 = (GLint)args[2]->Int32Value();
    GLint _v2 = (GLint)args[3]->Int32Value();
    glUniform3i(_location, _v0, _v1, _v2);

    return Undefined();
  }


  /**
   * glUniform4i
   *
   * @param GLint location
   * @param GLint v0
   * @param GLint v1
   * @param GLint v2
   * @param GLint v3
   * @return void
   */
  Handle<Value> gl_glUniform4i(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLint _v0 = (GLint)args[1]->Int32Value();
    GLint _v1 = (GLint)args[2]->Int32Value();
    GLint _v2 = (GLint)args[3]->Int32Value();
    GLint _v3 = (GLint)args[4]->Int32Value();
    glUniform4i(_location, _v0, _v1, _v2, _v3);

    return Undefined();
  }


  /**
   * glUniform1fv
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniform1fv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLfloat _value = (GLfloat)args[2]->NumberValue();
    glUniform1fv(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform2fv
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniform2fv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLfloat _value = (GLfloat)args[2]->NumberValue();
    glUniform2fv(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform3fv
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniform3fv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLfloat _value = (GLfloat)args[2]->NumberValue();
    glUniform3fv(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform4fv
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniform4fv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLfloat _value = (GLfloat)args[2]->NumberValue();
    glUniform4fv(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform1iv
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLint *value
   * @return void
   */
  Handle<Value> gl_glUniform1iv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLint _value = (GLint)args[2]->Int32Value();
    glUniform1iv(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform2iv
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLint *value
   * @return void
   */
  Handle<Value> gl_glUniform2iv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLint _value = (GLint)args[2]->Int32Value();
    glUniform2iv(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform3iv
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLint *value
   * @return void
   */
  Handle<Value> gl_glUniform3iv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLint _value = (GLint)args[2]->Int32Value();
    glUniform3iv(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniform4iv
   *
   * @param GLint location
   * @param GLsizei count
   * @param const GLint *value
   * @return void
   */
  Handle<Value> gl_glUniform4iv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    const GLint _value = (GLint)args[2]->Int32Value();
    glUniform4iv(_location, _count, &_value);

    args[2] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniformMatrix2fv
   *
   * @param GLint location
   * @param GLsizei count
   * @param GLboolean transpose
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniformMatrix2fv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    GLboolean _transpose = (GLboolean)args[2]->Int32Value();
    const GLfloat _value = (GLfloat)args[3]->NumberValue();
    glUniformMatrix2fv(_location, _count, _transpose, &_value);

    args[3] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniformMatrix3fv
   *
   * @param GLint location
   * @param GLsizei count
   * @param GLboolean transpose
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniformMatrix3fv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    GLboolean _transpose = (GLboolean)args[2]->Int32Value();
    const GLfloat _value = (GLfloat)args[3]->NumberValue();
    glUniformMatrix3fv(_location, _count, _transpose, &_value);

    args[3] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniformMatrix4fv
   *
   * @param GLint location
   * @param GLsizei count
   * @param GLboolean transpose
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniformMatrix4fv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    GLboolean _transpose = (GLboolean)args[2]->Int32Value();
    const GLfloat _value = (GLfloat)args[3]->NumberValue();
    glUniformMatrix4fv(_location, _count, _transpose, &_value);

    args[3] = Number::New(_value);

    return Undefined();
  }


  /**
   * glIsShader
   *
   * @param GLuint shader
   * @return GLboolean
   */
  Handle<Value> gl_glIsShader(const Arguments& args) {
    HandleScope scope;
    GLuint _shader = (GLuint)args[0]->Uint32Value();
    GLboolean _ret = glIsShader(_shader);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glIsProgram
   *
   * @param GLuint program
   * @return GLboolean
   */
  Handle<Value> gl_glIsProgram(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    GLboolean _ret = glIsProgram(_program);

    return scope.Close(Boolean::New(_ret));
  }


  /**
   * glGetShaderiv
   *
   * @param GLuint shader
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetShaderiv(const Arguments& args) {
    HandleScope scope;
    GLuint _shader = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetShaderiv(_shader, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetProgramiv
   *
   * @param GLuint program
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetProgramiv(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetProgramiv(_program, _pname, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetAttachedShaders
   *
   * @param GLuint program
   * @param GLsizei maxCount
   * @param GLsizei *count
   * @param GLuint *shaders
   * @return void
   */
  Handle<Value> gl_glGetAttachedShaders(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    GLsizei _maxCount = (GLsizei)args[1]->Int32Value();
    GLsizei _count = (GLsizei)args[2]->Int32Value();
    GLuint _shaders = (GLuint)args[3]->Uint32Value();
    glGetAttachedShaders(_program, _maxCount, &_count, &_shaders);

    args[2] = Number::New(_count);

    args[3] = Number::New(_shaders);

    return Undefined();
  }


  /**
   * glGetShaderInfoLog
   *
   * @param GLuint shader
   * @param GLsizei bufSize
   * @param GLsizei *length
   * @param GLchar *infoLog
   * @return void
   */
  Handle<Value> gl_glGetShaderInfoLog(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetShaderInfoLog is not implemented!")));
  }


  /**
   * glGetProgramInfoLog
   *
   * @param GLuint program
   * @param GLsizei bufSize
   * @param GLsizei *length
   * @param GLchar *infoLog
   * @return void
   */
  Handle<Value> gl_glGetProgramInfoLog(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetProgramInfoLog is not implemented!")));
  }


  /**
   * glGetUniformLocation
   *
   * @param GLuint program
   * @param const GLchar *name
   * @return GLint
   */
  Handle<Value> gl_glGetUniformLocation(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetUniformLocation is not implemented!")));
  }


  /**
   * glGetActiveUniform
   *
   * @param GLuint program
   * @param GLuint index
   * @param GLsizei bufSize
   * @param GLsizei *length
   * @param GLint *size
   * @param GLenum *type
   * @param GLchar *name
   * @return void
   */
  Handle<Value> gl_glGetActiveUniform(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetActiveUniform is not implemented!")));
  }


  /**
   * glGetUniformfv
   *
   * @param GLuint program
   * @param GLint location
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glGetUniformfv(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    GLint _location = (GLint)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glGetUniformfv(_program, _location, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetUniformiv
   *
   * @param GLuint program
   * @param GLint location
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glGetUniformiv(const Arguments& args) {
    HandleScope scope;
    GLuint _program = (GLuint)args[0]->Uint32Value();
    GLint _location = (GLint)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glGetUniformiv(_program, _location, &_params);

    args[2] = Number::New(_params);

    return Undefined();
  }


  /**
   * glGetShaderSource
   *
   * @param GLuint shader
   * @param GLsizei bufSize
   * @param GLsizei *length
   * @param GLchar *source
   * @return void
   */
  Handle<Value> gl_glGetShaderSource(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetShaderSource is not implemented!")));
  }


  /**
   * glBindAttribLocation
   *
   * @param GLuint program
   * @param GLuint index
   * @param const GLchar *name
   * @return void
   */
  Handle<Value> gl_glBindAttribLocation(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glBindAttribLocation is not implemented!")));
  }


  /**
   * glGetActiveAttrib
   *
   * @param GLuint program
   * @param GLuint index
   * @param GLsizei bufSize
   * @param GLsizei *length
   * @param GLint *size
   * @param GLenum *type
   * @param GLchar *name
   * @return void
   */
  Handle<Value> gl_glGetActiveAttrib(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetActiveAttrib is not implemented!")));
  }


  /**
   * glGetAttribLocation
   *
   * @param GLuint program
   * @param const GLchar *name
   * @return GLint
   */
  Handle<Value> gl_glGetAttribLocation(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetAttribLocation is not implemented!")));
  }


  /**
   * glStencilFuncSeparate
   *
   * @param GLenum face
   * @param GLenum func
   * @param GLint ref
   * @param GLuint mask
   * @return void
   */
  Handle<Value> gl_glStencilFuncSeparate(const Arguments& args) {
    HandleScope scope;
    GLenum _face = (GLenum)args[0]->Int32Value();
    GLenum _func = (GLenum)args[1]->Int32Value();
    GLint _ref = (GLint)args[2]->Int32Value();
    GLuint _mask = (GLuint)args[3]->Uint32Value();
    glStencilFuncSeparate(_face, _func, _ref, _mask);

    return Undefined();
  }


  /**
   * glStencilOpSeparate
   *
   * @param GLenum face
   * @param GLenum fail
   * @param GLenum zfail
   * @param GLenum zpass
   * @return void
   */
  Handle<Value> gl_glStencilOpSeparate(const Arguments& args) {
    HandleScope scope;
    GLenum _face = (GLenum)args[0]->Int32Value();
    GLenum _fail = (GLenum)args[1]->Int32Value();
    GLenum _zfail = (GLenum)args[2]->Int32Value();
    GLenum _zpass = (GLenum)args[3]->Int32Value();
    glStencilOpSeparate(_face, _fail, _zfail, _zpass);

    return Undefined();
  }


  /**
   * glStencilMaskSeparate
   *
   * @param GLenum face
   * @param GLuint mask
   * @return void
   */
  Handle<Value> gl_glStencilMaskSeparate(const Arguments& args) {
    HandleScope scope;
    GLenum _face = (GLenum)args[0]->Int32Value();
    GLuint _mask = (GLuint)args[1]->Uint32Value();
    glStencilMaskSeparate(_face, _mask);

    return Undefined();
  }


  /**
   * glUniformMatrix2x3fv
   *
   * @param GLint location
   * @param GLsizei count
   * @param GLboolean transpose
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniformMatrix2x3fv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    GLboolean _transpose = (GLboolean)args[2]->Int32Value();
    const GLfloat _value = (GLfloat)args[3]->NumberValue();
    glUniformMatrix2x3fv(_location, _count, _transpose, &_value);

    args[3] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniformMatrix3x2fv
   *
   * @param GLint location
   * @param GLsizei count
   * @param GLboolean transpose
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniformMatrix3x2fv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    GLboolean _transpose = (GLboolean)args[2]->Int32Value();
    const GLfloat _value = (GLfloat)args[3]->NumberValue();
    glUniformMatrix3x2fv(_location, _count, _transpose, &_value);

    args[3] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniformMatrix2x4fv
   *
   * @param GLint location
   * @param GLsizei count
   * @param GLboolean transpose
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniformMatrix2x4fv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    GLboolean _transpose = (GLboolean)args[2]->Int32Value();
    const GLfloat _value = (GLfloat)args[3]->NumberValue();
    glUniformMatrix2x4fv(_location, _count, _transpose, &_value);

    args[3] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniformMatrix4x2fv
   *
   * @param GLint location
   * @param GLsizei count
   * @param GLboolean transpose
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniformMatrix4x2fv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    GLboolean _transpose = (GLboolean)args[2]->Int32Value();
    const GLfloat _value = (GLfloat)args[3]->NumberValue();
    glUniformMatrix4x2fv(_location, _count, _transpose, &_value);

    args[3] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniformMatrix3x4fv
   *
   * @param GLint location
   * @param GLsizei count
   * @param GLboolean transpose
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniformMatrix3x4fv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    GLboolean _transpose = (GLboolean)args[2]->Int32Value();
    const GLfloat _value = (GLfloat)args[3]->NumberValue();
    glUniformMatrix3x4fv(_location, _count, _transpose, &_value);

    args[3] = Number::New(_value);

    return Undefined();
  }


  /**
   * glUniformMatrix4x3fv
   *
   * @param GLint location
   * @param GLsizei count
   * @param GLboolean transpose
   * @param const GLfloat *value
   * @return void
   */
  Handle<Value> gl_glUniformMatrix4x3fv(const Arguments& args) {
    HandleScope scope;
    GLint _location = (GLint)args[0]->Int32Value();
    GLsizei _count = (GLsizei)args[1]->Int32Value();
    GLboolean _transpose = (GLboolean)args[2]->Int32Value();
    const GLfloat _value = (GLfloat)args[3]->NumberValue();
    glUniformMatrix4x3fv(_location, _count, _transpose, &_value);

    args[3] = Number::New(_value);

    return Undefined();
  }



  // Constructor
  gl::gl() { }

  void gl::Initialize(v8::Handle<v8::Object> target) {
    HandleScope scope;

    // Constants
    #ifdef GL_GLEXT_FUNCTION_POINTERS
    NODE_DEFINE_CONSTANT(target, GL_GLEXT_FUNCTION_POINTERS);
    #endif

    #ifdef GL_LOGIC_OP
    NODE_DEFINE_CONSTANT(target, GL_LOGIC_OP);
    #endif

    #ifdef GL_TEXTURE_COMPONENTS
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_COMPONENTS);
    #endif

    #ifdef GL_VERSION_1_1
    NODE_DEFINE_CONSTANT(target, GL_VERSION_1_1);
    #endif

    #ifdef GL_VERSION_1_2
    NODE_DEFINE_CONSTANT(target, GL_VERSION_1_2);
    #endif

    #ifdef GL_VERSION_1_3
    NODE_DEFINE_CONSTANT(target, GL_VERSION_1_3);
    #endif

    #ifdef GL_VERSION_1_4
    NODE_DEFINE_CONSTANT(target, GL_VERSION_1_4);
    #endif

    #ifdef GL_VERSION_1_5
    NODE_DEFINE_CONSTANT(target, GL_VERSION_1_5);
    #endif

    #ifdef GL_VERSION_2_0
    NODE_DEFINE_CONSTANT(target, GL_VERSION_2_0);
    #endif

    #ifdef GL_VERSION_2_1
    NODE_DEFINE_CONSTANT(target, GL_VERSION_2_1);
    #endif

    #ifdef GL_ACCUM
    NODE_DEFINE_CONSTANT(target, GL_ACCUM);
    #endif

    #ifdef GL_LOAD
    NODE_DEFINE_CONSTANT(target, GL_LOAD);
    #endif

    #ifdef GL_RETURN
    NODE_DEFINE_CONSTANT(target, GL_RETURN);
    #endif

    #ifdef GL_MULT
    NODE_DEFINE_CONSTANT(target, GL_MULT);
    #endif

    #ifdef GL_ADD
    NODE_DEFINE_CONSTANT(target, GL_ADD);
    #endif

    #ifdef GL_NEVER
    NODE_DEFINE_CONSTANT(target, GL_NEVER);
    #endif

    #ifdef GL_LESS
    NODE_DEFINE_CONSTANT(target, GL_LESS);
    #endif

    #ifdef GL_EQUAL
    NODE_DEFINE_CONSTANT(target, GL_EQUAL);
    #endif

    #ifdef GL_LEQUAL
    NODE_DEFINE_CONSTANT(target, GL_LEQUAL);
    #endif

    #ifdef GL_GREATER
    NODE_DEFINE_CONSTANT(target, GL_GREATER);
    #endif

    #ifdef GL_NOTEQUAL
    NODE_DEFINE_CONSTANT(target, GL_NOTEQUAL);
    #endif

    #ifdef GL_GEQUAL
    NODE_DEFINE_CONSTANT(target, GL_GEQUAL);
    #endif

    #ifdef GL_ALWAYS
    NODE_DEFINE_CONSTANT(target, GL_ALWAYS);
    #endif

    #ifdef GL_CURRENT_BIT
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_BIT);
    #endif

    #ifdef GL_POINT_BIT
    NODE_DEFINE_CONSTANT(target, GL_POINT_BIT);
    #endif

    #ifdef GL_LINE_BIT
    NODE_DEFINE_CONSTANT(target, GL_LINE_BIT);
    #endif

    #ifdef GL_POLYGON_BIT
    NODE_DEFINE_CONSTANT(target, GL_POLYGON_BIT);
    #endif

    #ifdef GL_POLYGON_STIPPLE_BIT
    NODE_DEFINE_CONSTANT(target, GL_POLYGON_STIPPLE_BIT);
    #endif

    #ifdef GL_PIXEL_MODE_BIT
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MODE_BIT);
    #endif

    #ifdef GL_LIGHTING_BIT
    NODE_DEFINE_CONSTANT(target, GL_LIGHTING_BIT);
    #endif

    #ifdef GL_FOG_BIT
    NODE_DEFINE_CONSTANT(target, GL_FOG_BIT);
    #endif

    #ifdef GL_DEPTH_BUFFER_BIT
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_BUFFER_BIT);
    #endif

    #ifdef GL_ACCUM_BUFFER_BIT
    NODE_DEFINE_CONSTANT(target, GL_ACCUM_BUFFER_BIT);
    #endif

    #ifdef GL_STENCIL_BUFFER_BIT
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_BUFFER_BIT);
    #endif

    #ifdef GL_VIEWPORT_BIT
    NODE_DEFINE_CONSTANT(target, GL_VIEWPORT_BIT);
    #endif

    #ifdef GL_TRANSFORM_BIT
    NODE_DEFINE_CONSTANT(target, GL_TRANSFORM_BIT);
    #endif

    #ifdef GL_ENABLE_BIT
    NODE_DEFINE_CONSTANT(target, GL_ENABLE_BIT);
    #endif

    #ifdef GL_COLOR_BUFFER_BIT
    NODE_DEFINE_CONSTANT(target, GL_COLOR_BUFFER_BIT);
    #endif

    #ifdef GL_HINT_BIT
    NODE_DEFINE_CONSTANT(target, GL_HINT_BIT);
    #endif

    #ifdef GL_EVAL_BIT
    NODE_DEFINE_CONSTANT(target, GL_EVAL_BIT);
    #endif

    #ifdef GL_LIST_BIT
    NODE_DEFINE_CONSTANT(target, GL_LIST_BIT);
    #endif

    #ifdef GL_TEXTURE_BIT
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_BIT);
    #endif

    #ifdef GL_SCISSOR_BIT
    NODE_DEFINE_CONSTANT(target, GL_SCISSOR_BIT);
    #endif

    #ifdef GL_ALL_ATTRIB_BITS
    NODE_DEFINE_CONSTANT(target, GL_ALL_ATTRIB_BITS);
    #endif

    #ifdef GL_POINTS
    NODE_DEFINE_CONSTANT(target, GL_POINTS);
    #endif

    #ifdef GL_LINES
    NODE_DEFINE_CONSTANT(target, GL_LINES);
    #endif

    #ifdef GL_LINE_LOOP
    NODE_DEFINE_CONSTANT(target, GL_LINE_LOOP);
    #endif

    #ifdef GL_LINE_STRIP
    NODE_DEFINE_CONSTANT(target, GL_LINE_STRIP);
    #endif

    #ifdef GL_TRIANGLES
    NODE_DEFINE_CONSTANT(target, GL_TRIANGLES);
    #endif

    #ifdef GL_TRIANGLE_STRIP
    NODE_DEFINE_CONSTANT(target, GL_TRIANGLE_STRIP);
    #endif

    #ifdef GL_TRIANGLE_FAN
    NODE_DEFINE_CONSTANT(target, GL_TRIANGLE_FAN);
    #endif

    #ifdef GL_QUADS
    NODE_DEFINE_CONSTANT(target, GL_QUADS);
    #endif

    #ifdef GL_QUAD_STRIP
    NODE_DEFINE_CONSTANT(target, GL_QUAD_STRIP);
    #endif

    #ifdef GL_POLYGON
    NODE_DEFINE_CONSTANT(target, GL_POLYGON);
    #endif

    #ifdef GL_ZERO
    NODE_DEFINE_CONSTANT(target, GL_ZERO);
    #endif

    #ifdef GL_ONE
    NODE_DEFINE_CONSTANT(target, GL_ONE);
    #endif

    #ifdef GL_SRC_COLOR
    NODE_DEFINE_CONSTANT(target, GL_SRC_COLOR);
    #endif

    #ifdef GL_ONE_MINUS_SRC_COLOR
    NODE_DEFINE_CONSTANT(target, GL_ONE_MINUS_SRC_COLOR);
    #endif

    #ifdef GL_SRC_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SRC_ALPHA);
    #endif

    #ifdef GL_ONE_MINUS_SRC_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_ONE_MINUS_SRC_ALPHA);
    #endif

    #ifdef GL_DST_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_DST_ALPHA);
    #endif

    #ifdef GL_ONE_MINUS_DST_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_ONE_MINUS_DST_ALPHA);
    #endif

    #ifdef GL_DST_COLOR
    NODE_DEFINE_CONSTANT(target, GL_DST_COLOR);
    #endif

    #ifdef GL_ONE_MINUS_DST_COLOR
    NODE_DEFINE_CONSTANT(target, GL_ONE_MINUS_DST_COLOR);
    #endif

    #ifdef GL_SRC_ALPHA_SATURATE
    NODE_DEFINE_CONSTANT(target, GL_SRC_ALPHA_SATURATE);
    #endif

    #ifdef GL_TRUE
    NODE_DEFINE_CONSTANT(target, GL_TRUE);
    #endif

    #ifdef GL_FALSE
    NODE_DEFINE_CONSTANT(target, GL_FALSE);
    #endif

    #ifdef GL_CLIP_PLANE0
    NODE_DEFINE_CONSTANT(target, GL_CLIP_PLANE0);
    #endif

    #ifdef GL_CLIP_PLANE1
    NODE_DEFINE_CONSTANT(target, GL_CLIP_PLANE1);
    #endif

    #ifdef GL_CLIP_PLANE2
    NODE_DEFINE_CONSTANT(target, GL_CLIP_PLANE2);
    #endif

    #ifdef GL_CLIP_PLANE3
    NODE_DEFINE_CONSTANT(target, GL_CLIP_PLANE3);
    #endif

    #ifdef GL_CLIP_PLANE4
    NODE_DEFINE_CONSTANT(target, GL_CLIP_PLANE4);
    #endif

    #ifdef GL_CLIP_PLANE5
    NODE_DEFINE_CONSTANT(target, GL_CLIP_PLANE5);
    #endif

    #ifdef GL_BYTE
    NODE_DEFINE_CONSTANT(target, GL_BYTE);
    #endif

    #ifdef GL_UNSIGNED_BYTE
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_BYTE);
    #endif

    #ifdef GL_SHORT
    NODE_DEFINE_CONSTANT(target, GL_SHORT);
    #endif

    #ifdef GL_UNSIGNED_SHORT
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_SHORT);
    #endif

    #ifdef GL_INT
    NODE_DEFINE_CONSTANT(target, GL_INT);
    #endif

    #ifdef GL_UNSIGNED_INT
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_INT);
    #endif

    #ifdef GL_FLOAT
    NODE_DEFINE_CONSTANT(target, GL_FLOAT);
    #endif

    #ifdef GL_2_BYTES
    NODE_DEFINE_CONSTANT(target, GL_2_BYTES);
    #endif

    #ifdef GL_3_BYTES
    NODE_DEFINE_CONSTANT(target, GL_3_BYTES);
    #endif

    #ifdef GL_4_BYTES
    NODE_DEFINE_CONSTANT(target, GL_4_BYTES);
    #endif

    #ifdef GL_DOUBLE
    NODE_DEFINE_CONSTANT(target, GL_DOUBLE);
    #endif

    #ifdef GL_NONE
    NODE_DEFINE_CONSTANT(target, GL_NONE);
    #endif

    #ifdef GL_FRONT_LEFT
    NODE_DEFINE_CONSTANT(target, GL_FRONT_LEFT);
    #endif

    #ifdef GL_FRONT_RIGHT
    NODE_DEFINE_CONSTANT(target, GL_FRONT_RIGHT);
    #endif

    #ifdef GL_BACK_LEFT
    NODE_DEFINE_CONSTANT(target, GL_BACK_LEFT);
    #endif

    #ifdef GL_BACK_RIGHT
    NODE_DEFINE_CONSTANT(target, GL_BACK_RIGHT);
    #endif

    #ifdef GL_FRONT
    NODE_DEFINE_CONSTANT(target, GL_FRONT);
    #endif

    #ifdef GL_BACK
    NODE_DEFINE_CONSTANT(target, GL_BACK);
    #endif

    #ifdef GL_LEFT
    NODE_DEFINE_CONSTANT(target, GL_LEFT);
    #endif

    #ifdef GL_RIGHT
    NODE_DEFINE_CONSTANT(target, GL_RIGHT);
    #endif

    #ifdef GL_FRONT_AND_BACK
    NODE_DEFINE_CONSTANT(target, GL_FRONT_AND_BACK);
    #endif

    #ifdef GL_AUX0
    NODE_DEFINE_CONSTANT(target, GL_AUX0);
    #endif

    #ifdef GL_AUX1
    NODE_DEFINE_CONSTANT(target, GL_AUX1);
    #endif

    #ifdef GL_AUX2
    NODE_DEFINE_CONSTANT(target, GL_AUX2);
    #endif

    #ifdef GL_AUX3
    NODE_DEFINE_CONSTANT(target, GL_AUX3);
    #endif

    #ifdef GL_NO_ERROR
    NODE_DEFINE_CONSTANT(target, GL_NO_ERROR);
    #endif

    #ifdef GL_INVALID_ENUM
    NODE_DEFINE_CONSTANT(target, GL_INVALID_ENUM);
    #endif

    #ifdef GL_INVALID_VALUE
    NODE_DEFINE_CONSTANT(target, GL_INVALID_VALUE);
    #endif

    #ifdef GL_INVALID_OPERATION
    NODE_DEFINE_CONSTANT(target, GL_INVALID_OPERATION);
    #endif

    #ifdef GL_STACK_OVERFLOW
    NODE_DEFINE_CONSTANT(target, GL_STACK_OVERFLOW);
    #endif

    #ifdef GL_STACK_UNDERFLOW
    NODE_DEFINE_CONSTANT(target, GL_STACK_UNDERFLOW);
    #endif

    #ifdef GL_OUT_OF_MEMORY
    NODE_DEFINE_CONSTANT(target, GL_OUT_OF_MEMORY);
    #endif

    #ifdef GL_2D
    NODE_DEFINE_CONSTANT(target, GL_2D);
    #endif

    #ifdef GL_3D
    NODE_DEFINE_CONSTANT(target, GL_3D);
    #endif

    #ifdef GL_3D_COLOR
    NODE_DEFINE_CONSTANT(target, GL_3D_COLOR);
    #endif

    #ifdef GL_3D_COLOR_TEXTURE
    NODE_DEFINE_CONSTANT(target, GL_3D_COLOR_TEXTURE);
    #endif

    #ifdef GL_4D_COLOR_TEXTURE
    NODE_DEFINE_CONSTANT(target, GL_4D_COLOR_TEXTURE);
    #endif

    #ifdef GL_PASS_THROUGH_TOKEN
    NODE_DEFINE_CONSTANT(target, GL_PASS_THROUGH_TOKEN);
    #endif

    #ifdef GL_POINT_TOKEN
    NODE_DEFINE_CONSTANT(target, GL_POINT_TOKEN);
    #endif

    #ifdef GL_LINE_TOKEN
    NODE_DEFINE_CONSTANT(target, GL_LINE_TOKEN);
    #endif

    #ifdef GL_POLYGON_TOKEN
    NODE_DEFINE_CONSTANT(target, GL_POLYGON_TOKEN);
    #endif

    #ifdef GL_BITMAP_TOKEN
    NODE_DEFINE_CONSTANT(target, GL_BITMAP_TOKEN);
    #endif

    #ifdef GL_DRAW_PIXEL_TOKEN
    NODE_DEFINE_CONSTANT(target, GL_DRAW_PIXEL_TOKEN);
    #endif

    #ifdef GL_COPY_PIXEL_TOKEN
    NODE_DEFINE_CONSTANT(target, GL_COPY_PIXEL_TOKEN);
    #endif

    #ifdef GL_LINE_RESET_TOKEN
    NODE_DEFINE_CONSTANT(target, GL_LINE_RESET_TOKEN);
    #endif

    #ifdef GL_EXP
    NODE_DEFINE_CONSTANT(target, GL_EXP);
    #endif

    #ifdef GL_EXP2
    NODE_DEFINE_CONSTANT(target, GL_EXP2);
    #endif

    #ifdef GL_CW
    NODE_DEFINE_CONSTANT(target, GL_CW);
    #endif

    #ifdef GL_CCW
    NODE_DEFINE_CONSTANT(target, GL_CCW);
    #endif

    #ifdef GL_COEFF
    NODE_DEFINE_CONSTANT(target, GL_COEFF);
    #endif

    #ifdef GL_ORDER
    NODE_DEFINE_CONSTANT(target, GL_ORDER);
    #endif

    #ifdef GL_DOMAIN
    NODE_DEFINE_CONSTANT(target, GL_DOMAIN);
    #endif

    #ifdef GL_CURRENT_COLOR
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_COLOR);
    #endif

    #ifdef GL_CURRENT_INDEX
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_INDEX);
    #endif

    #ifdef GL_CURRENT_NORMAL
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_NORMAL);
    #endif

    #ifdef GL_CURRENT_TEXTURE_COORDS
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_TEXTURE_COORDS);
    #endif

    #ifdef GL_CURRENT_RASTER_COLOR
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_COLOR);
    #endif

    #ifdef GL_CURRENT_RASTER_INDEX
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_INDEX);
    #endif

    #ifdef GL_CURRENT_RASTER_TEXTURE_COORDS
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_TEXTURE_COORDS);
    #endif

    #ifdef GL_CURRENT_RASTER_POSITION
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_POSITION);
    #endif

    #ifdef GL_CURRENT_RASTER_POSITION_VALID
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_POSITION_VALID);
    #endif

    #ifdef GL_CURRENT_RASTER_DISTANCE
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_DISTANCE);
    #endif

    #ifdef GL_POINT_SMOOTH
    NODE_DEFINE_CONSTANT(target, GL_POINT_SMOOTH);
    #endif

    #ifdef GL_POINT_SIZE
    NODE_DEFINE_CONSTANT(target, GL_POINT_SIZE);
    #endif

    #ifdef GL_POINT_SIZE_RANGE
    NODE_DEFINE_CONSTANT(target, GL_POINT_SIZE_RANGE);
    #endif

    #ifdef GL_POINT_SIZE_GRANULARITY
    NODE_DEFINE_CONSTANT(target, GL_POINT_SIZE_GRANULARITY);
    #endif

    #ifdef GL_LINE_SMOOTH
    NODE_DEFINE_CONSTANT(target, GL_LINE_SMOOTH);
    #endif

    #ifdef GL_LINE_WIDTH
    NODE_DEFINE_CONSTANT(target, GL_LINE_WIDTH);
    #endif

    #ifdef GL_LINE_WIDTH_RANGE
    NODE_DEFINE_CONSTANT(target, GL_LINE_WIDTH_RANGE);
    #endif

    #ifdef GL_LINE_WIDTH_GRANULARITY
    NODE_DEFINE_CONSTANT(target, GL_LINE_WIDTH_GRANULARITY);
    #endif

    #ifdef GL_LINE_STIPPLE
    NODE_DEFINE_CONSTANT(target, GL_LINE_STIPPLE);
    #endif

    #ifdef GL_LINE_STIPPLE_PATTERN
    NODE_DEFINE_CONSTANT(target, GL_LINE_STIPPLE_PATTERN);
    #endif

    #ifdef GL_LINE_STIPPLE_REPEAT
    NODE_DEFINE_CONSTANT(target, GL_LINE_STIPPLE_REPEAT);
    #endif

    #ifdef GL_LIST_MODE
    NODE_DEFINE_CONSTANT(target, GL_LIST_MODE);
    #endif

    #ifdef GL_MAX_LIST_NESTING
    NODE_DEFINE_CONSTANT(target, GL_MAX_LIST_NESTING);
    #endif

    #ifdef GL_LIST_BASE
    NODE_DEFINE_CONSTANT(target, GL_LIST_BASE);
    #endif

    #ifdef GL_LIST_INDEX
    NODE_DEFINE_CONSTANT(target, GL_LIST_INDEX);
    #endif

    #ifdef GL_POLYGON_MODE
    NODE_DEFINE_CONSTANT(target, GL_POLYGON_MODE);
    #endif

    #ifdef GL_POLYGON_SMOOTH
    NODE_DEFINE_CONSTANT(target, GL_POLYGON_SMOOTH);
    #endif

    #ifdef GL_POLYGON_STIPPLE
    NODE_DEFINE_CONSTANT(target, GL_POLYGON_STIPPLE);
    #endif

    #ifdef GL_EDGE_FLAG
    NODE_DEFINE_CONSTANT(target, GL_EDGE_FLAG);
    #endif

    #ifdef GL_CULL_FACE
    NODE_DEFINE_CONSTANT(target, GL_CULL_FACE);
    #endif

    #ifdef GL_CULL_FACE_MODE
    NODE_DEFINE_CONSTANT(target, GL_CULL_FACE_MODE);
    #endif

    #ifdef GL_FRONT_FACE
    NODE_DEFINE_CONSTANT(target, GL_FRONT_FACE);
    #endif

    #ifdef GL_LIGHTING
    NODE_DEFINE_CONSTANT(target, GL_LIGHTING);
    #endif

    #ifdef GL_LIGHT_MODEL_LOCAL_VIEWER
    NODE_DEFINE_CONSTANT(target, GL_LIGHT_MODEL_LOCAL_VIEWER);
    #endif

    #ifdef GL_LIGHT_MODEL_TWO_SIDE
    NODE_DEFINE_CONSTANT(target, GL_LIGHT_MODEL_TWO_SIDE);
    #endif

    #ifdef GL_LIGHT_MODEL_AMBIENT
    NODE_DEFINE_CONSTANT(target, GL_LIGHT_MODEL_AMBIENT);
    #endif

    #ifdef GL_SHADE_MODEL
    NODE_DEFINE_CONSTANT(target, GL_SHADE_MODEL);
    #endif

    #ifdef GL_COLOR_MATERIAL_FACE
    NODE_DEFINE_CONSTANT(target, GL_COLOR_MATERIAL_FACE);
    #endif

    #ifdef GL_COLOR_MATERIAL_PARAMETER
    NODE_DEFINE_CONSTANT(target, GL_COLOR_MATERIAL_PARAMETER);
    #endif

    #ifdef GL_COLOR_MATERIAL
    NODE_DEFINE_CONSTANT(target, GL_COLOR_MATERIAL);
    #endif

    #ifdef GL_FOG
    NODE_DEFINE_CONSTANT(target, GL_FOG);
    #endif

    #ifdef GL_FOG_INDEX
    NODE_DEFINE_CONSTANT(target, GL_FOG_INDEX);
    #endif

    #ifdef GL_FOG_DENSITY
    NODE_DEFINE_CONSTANT(target, GL_FOG_DENSITY);
    #endif

    #ifdef GL_FOG_START
    NODE_DEFINE_CONSTANT(target, GL_FOG_START);
    #endif

    #ifdef GL_FOG_END
    NODE_DEFINE_CONSTANT(target, GL_FOG_END);
    #endif

    #ifdef GL_FOG_MODE
    NODE_DEFINE_CONSTANT(target, GL_FOG_MODE);
    #endif

    #ifdef GL_FOG_COLOR
    NODE_DEFINE_CONSTANT(target, GL_FOG_COLOR);
    #endif

    #ifdef GL_DEPTH_RANGE
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_RANGE);
    #endif

    #ifdef GL_DEPTH_TEST
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_TEST);
    #endif

    #ifdef GL_DEPTH_WRITEMASK
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_WRITEMASK);
    #endif

    #ifdef GL_DEPTH_CLEAR_VALUE
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_CLEAR_VALUE);
    #endif

    #ifdef GL_DEPTH_FUNC
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_FUNC);
    #endif

    #ifdef GL_ACCUM_CLEAR_VALUE
    NODE_DEFINE_CONSTANT(target, GL_ACCUM_CLEAR_VALUE);
    #endif

    #ifdef GL_STENCIL_TEST
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_TEST);
    #endif

    #ifdef GL_STENCIL_CLEAR_VALUE
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_CLEAR_VALUE);
    #endif

    #ifdef GL_STENCIL_FUNC
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_FUNC);
    #endif

    #ifdef GL_STENCIL_VALUE_MASK
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_VALUE_MASK);
    #endif

    #ifdef GL_STENCIL_FAIL
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_FAIL);
    #endif

    #ifdef GL_STENCIL_PASS_DEPTH_FAIL
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_PASS_DEPTH_FAIL);
    #endif

    #ifdef GL_STENCIL_PASS_DEPTH_PASS
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_PASS_DEPTH_PASS);
    #endif

    #ifdef GL_STENCIL_REF
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_REF);
    #endif

    #ifdef GL_STENCIL_WRITEMASK
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_WRITEMASK);
    #endif

    #ifdef GL_MATRIX_MODE
    NODE_DEFINE_CONSTANT(target, GL_MATRIX_MODE);
    #endif

    #ifdef GL_NORMALIZE
    NODE_DEFINE_CONSTANT(target, GL_NORMALIZE);
    #endif

    #ifdef GL_VIEWPORT
    NODE_DEFINE_CONSTANT(target, GL_VIEWPORT);
    #endif

    #ifdef GL_MODELVIEW_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_MODELVIEW_STACK_DEPTH);
    #endif

    #ifdef GL_PROJECTION_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_PROJECTION_STACK_DEPTH);
    #endif

    #ifdef GL_TEXTURE_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_STACK_DEPTH);
    #endif

    #ifdef GL_MODELVIEW_MATRIX
    NODE_DEFINE_CONSTANT(target, GL_MODELVIEW_MATRIX);
    #endif

    #ifdef GL_PROJECTION_MATRIX
    NODE_DEFINE_CONSTANT(target, GL_PROJECTION_MATRIX);
    #endif

    #ifdef GL_TEXTURE_MATRIX
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_MATRIX);
    #endif

    #ifdef GL_ATTRIB_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_ATTRIB_STACK_DEPTH);
    #endif

    #ifdef GL_CLIENT_ATTRIB_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_CLIENT_ATTRIB_STACK_DEPTH);
    #endif

    #ifdef GL_ALPHA_TEST
    NODE_DEFINE_CONSTANT(target, GL_ALPHA_TEST);
    #endif

    #ifdef GL_ALPHA_TEST_FUNC
    NODE_DEFINE_CONSTANT(target, GL_ALPHA_TEST_FUNC);
    #endif

    #ifdef GL_ALPHA_TEST_REF
    NODE_DEFINE_CONSTANT(target, GL_ALPHA_TEST_REF);
    #endif

    #ifdef GL_DITHER
    NODE_DEFINE_CONSTANT(target, GL_DITHER);
    #endif

    #ifdef GL_BLEND_DST
    NODE_DEFINE_CONSTANT(target, GL_BLEND_DST);
    #endif

    #ifdef GL_BLEND_SRC
    NODE_DEFINE_CONSTANT(target, GL_BLEND_SRC);
    #endif

    #ifdef GL_BLEND
    NODE_DEFINE_CONSTANT(target, GL_BLEND);
    #endif

    #ifdef GL_LOGIC_OP_MODE
    NODE_DEFINE_CONSTANT(target, GL_LOGIC_OP_MODE);
    #endif

    #ifdef GL_INDEX_LOGIC_OP
    NODE_DEFINE_CONSTANT(target, GL_INDEX_LOGIC_OP);
    #endif

    #ifdef GL_COLOR_LOGIC_OP
    NODE_DEFINE_CONSTANT(target, GL_COLOR_LOGIC_OP);
    #endif

    #ifdef GL_AUX_BUFFERS
    NODE_DEFINE_CONSTANT(target, GL_AUX_BUFFERS);
    #endif

    #ifdef GL_DRAW_BUFFER
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER);
    #endif

    #ifdef GL_READ_BUFFER
    NODE_DEFINE_CONSTANT(target, GL_READ_BUFFER);
    #endif

    #ifdef GL_SCISSOR_BOX
    NODE_DEFINE_CONSTANT(target, GL_SCISSOR_BOX);
    #endif

    #ifdef GL_SCISSOR_TEST
    NODE_DEFINE_CONSTANT(target, GL_SCISSOR_TEST);
    #endif

    #ifdef GL_INDEX_CLEAR_VALUE
    NODE_DEFINE_CONSTANT(target, GL_INDEX_CLEAR_VALUE);
    #endif

    #ifdef GL_INDEX_WRITEMASK
    NODE_DEFINE_CONSTANT(target, GL_INDEX_WRITEMASK);
    #endif

    #ifdef GL_COLOR_CLEAR_VALUE
    NODE_DEFINE_CONSTANT(target, GL_COLOR_CLEAR_VALUE);
    #endif

    #ifdef GL_COLOR_WRITEMASK
    NODE_DEFINE_CONSTANT(target, GL_COLOR_WRITEMASK);
    #endif

    #ifdef GL_INDEX_MODE
    NODE_DEFINE_CONSTANT(target, GL_INDEX_MODE);
    #endif

    #ifdef GL_RGBA_MODE
    NODE_DEFINE_CONSTANT(target, GL_RGBA_MODE);
    #endif

    #ifdef GL_DOUBLEBUFFER
    NODE_DEFINE_CONSTANT(target, GL_DOUBLEBUFFER);
    #endif

    #ifdef GL_STEREO
    NODE_DEFINE_CONSTANT(target, GL_STEREO);
    #endif

    #ifdef GL_RENDER_MODE
    NODE_DEFINE_CONSTANT(target, GL_RENDER_MODE);
    #endif

    #ifdef GL_PERSPECTIVE_CORRECTION_HINT
    NODE_DEFINE_CONSTANT(target, GL_PERSPECTIVE_CORRECTION_HINT);
    #endif

    #ifdef GL_POINT_SMOOTH_HINT
    NODE_DEFINE_CONSTANT(target, GL_POINT_SMOOTH_HINT);
    #endif

    #ifdef GL_LINE_SMOOTH_HINT
    NODE_DEFINE_CONSTANT(target, GL_LINE_SMOOTH_HINT);
    #endif

    #ifdef GL_POLYGON_SMOOTH_HINT
    NODE_DEFINE_CONSTANT(target, GL_POLYGON_SMOOTH_HINT);
    #endif

    #ifdef GL_FOG_HINT
    NODE_DEFINE_CONSTANT(target, GL_FOG_HINT);
    #endif

    #ifdef GL_TEXTURE_GEN_S
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_GEN_S);
    #endif

    #ifdef GL_TEXTURE_GEN_T
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_GEN_T);
    #endif

    #ifdef GL_TEXTURE_GEN_R
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_GEN_R);
    #endif

    #ifdef GL_TEXTURE_GEN_Q
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_GEN_Q);
    #endif

    #ifdef GL_PIXEL_MAP_I_TO_I
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_I);
    #endif

    #ifdef GL_PIXEL_MAP_S_TO_S
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_S_TO_S);
    #endif

    #ifdef GL_PIXEL_MAP_I_TO_R
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_R);
    #endif

    #ifdef GL_PIXEL_MAP_I_TO_G
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_G);
    #endif

    #ifdef GL_PIXEL_MAP_I_TO_B
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_B);
    #endif

    #ifdef GL_PIXEL_MAP_I_TO_A
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_A);
    #endif

    #ifdef GL_PIXEL_MAP_R_TO_R
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_R_TO_R);
    #endif

    #ifdef GL_PIXEL_MAP_G_TO_G
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_G_TO_G);
    #endif

    #ifdef GL_PIXEL_MAP_B_TO_B
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_B_TO_B);
    #endif

    #ifdef GL_PIXEL_MAP_A_TO_A
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_A_TO_A);
    #endif

    #ifdef GL_PIXEL_MAP_I_TO_I_SIZE
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_I_SIZE);
    #endif

    #ifdef GL_PIXEL_MAP_S_TO_S_SIZE
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_S_TO_S_SIZE);
    #endif

    #ifdef GL_PIXEL_MAP_I_TO_R_SIZE
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_R_SIZE);
    #endif

    #ifdef GL_PIXEL_MAP_I_TO_G_SIZE
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_G_SIZE);
    #endif

    #ifdef GL_PIXEL_MAP_I_TO_B_SIZE
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_B_SIZE);
    #endif

    #ifdef GL_PIXEL_MAP_I_TO_A_SIZE
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_A_SIZE);
    #endif

    #ifdef GL_PIXEL_MAP_R_TO_R_SIZE
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_R_TO_R_SIZE);
    #endif

    #ifdef GL_PIXEL_MAP_G_TO_G_SIZE
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_G_TO_G_SIZE);
    #endif

    #ifdef GL_PIXEL_MAP_B_TO_B_SIZE
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_B_TO_B_SIZE);
    #endif

    #ifdef GL_PIXEL_MAP_A_TO_A_SIZE
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_A_TO_A_SIZE);
    #endif

    #ifdef GL_UNPACK_SWAP_BYTES
    NODE_DEFINE_CONSTANT(target, GL_UNPACK_SWAP_BYTES);
    #endif

    #ifdef GL_UNPACK_LSB_FIRST
    NODE_DEFINE_CONSTANT(target, GL_UNPACK_LSB_FIRST);
    #endif

    #ifdef GL_UNPACK_ROW_LENGTH
    NODE_DEFINE_CONSTANT(target, GL_UNPACK_ROW_LENGTH);
    #endif

    #ifdef GL_UNPACK_SKIP_ROWS
    NODE_DEFINE_CONSTANT(target, GL_UNPACK_SKIP_ROWS);
    #endif

    #ifdef GL_UNPACK_SKIP_PIXELS
    NODE_DEFINE_CONSTANT(target, GL_UNPACK_SKIP_PIXELS);
    #endif

    #ifdef GL_UNPACK_ALIGNMENT
    NODE_DEFINE_CONSTANT(target, GL_UNPACK_ALIGNMENT);
    #endif

    #ifdef GL_PACK_SWAP_BYTES
    NODE_DEFINE_CONSTANT(target, GL_PACK_SWAP_BYTES);
    #endif

    #ifdef GL_PACK_LSB_FIRST
    NODE_DEFINE_CONSTANT(target, GL_PACK_LSB_FIRST);
    #endif

    #ifdef GL_PACK_ROW_LENGTH
    NODE_DEFINE_CONSTANT(target, GL_PACK_ROW_LENGTH);
    #endif

    #ifdef GL_PACK_SKIP_ROWS
    NODE_DEFINE_CONSTANT(target, GL_PACK_SKIP_ROWS);
    #endif

    #ifdef GL_PACK_SKIP_PIXELS
    NODE_DEFINE_CONSTANT(target, GL_PACK_SKIP_PIXELS);
    #endif

    #ifdef GL_PACK_ALIGNMENT
    NODE_DEFINE_CONSTANT(target, GL_PACK_ALIGNMENT);
    #endif

    #ifdef GL_MAP_COLOR
    NODE_DEFINE_CONSTANT(target, GL_MAP_COLOR);
    #endif

    #ifdef GL_MAP_STENCIL
    NODE_DEFINE_CONSTANT(target, GL_MAP_STENCIL);
    #endif

    #ifdef GL_INDEX_SHIFT
    NODE_DEFINE_CONSTANT(target, GL_INDEX_SHIFT);
    #endif

    #ifdef GL_INDEX_OFFSET
    NODE_DEFINE_CONSTANT(target, GL_INDEX_OFFSET);
    #endif

    #ifdef GL_RED_SCALE
    NODE_DEFINE_CONSTANT(target, GL_RED_SCALE);
    #endif

    #ifdef GL_RED_BIAS
    NODE_DEFINE_CONSTANT(target, GL_RED_BIAS);
    #endif

    #ifdef GL_ZOOM_X
    NODE_DEFINE_CONSTANT(target, GL_ZOOM_X);
    #endif

    #ifdef GL_ZOOM_Y
    NODE_DEFINE_CONSTANT(target, GL_ZOOM_Y);
    #endif

    #ifdef GL_GREEN_SCALE
    NODE_DEFINE_CONSTANT(target, GL_GREEN_SCALE);
    #endif

    #ifdef GL_GREEN_BIAS
    NODE_DEFINE_CONSTANT(target, GL_GREEN_BIAS);
    #endif

    #ifdef GL_BLUE_SCALE
    NODE_DEFINE_CONSTANT(target, GL_BLUE_SCALE);
    #endif

    #ifdef GL_BLUE_BIAS
    NODE_DEFINE_CONSTANT(target, GL_BLUE_BIAS);
    #endif

    #ifdef GL_ALPHA_SCALE
    NODE_DEFINE_CONSTANT(target, GL_ALPHA_SCALE);
    #endif

    #ifdef GL_ALPHA_BIAS
    NODE_DEFINE_CONSTANT(target, GL_ALPHA_BIAS);
    #endif

    #ifdef GL_DEPTH_SCALE
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_SCALE);
    #endif

    #ifdef GL_DEPTH_BIAS
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_BIAS);
    #endif

    #ifdef GL_MAX_EVAL_ORDER
    NODE_DEFINE_CONSTANT(target, GL_MAX_EVAL_ORDER);
    #endif

    #ifdef GL_MAX_LIGHTS
    NODE_DEFINE_CONSTANT(target, GL_MAX_LIGHTS);
    #endif

    #ifdef GL_MAX_CLIP_PLANES
    NODE_DEFINE_CONSTANT(target, GL_MAX_CLIP_PLANES);
    #endif

    #ifdef GL_MAX_TEXTURE_SIZE
    NODE_DEFINE_CONSTANT(target, GL_MAX_TEXTURE_SIZE);
    #endif

    #ifdef GL_MAX_PIXEL_MAP_TABLE
    NODE_DEFINE_CONSTANT(target, GL_MAX_PIXEL_MAP_TABLE);
    #endif

    #ifdef GL_MAX_ATTRIB_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_MAX_ATTRIB_STACK_DEPTH);
    #endif

    #ifdef GL_MAX_MODELVIEW_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_MAX_MODELVIEW_STACK_DEPTH);
    #endif

    #ifdef GL_MAX_NAME_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_MAX_NAME_STACK_DEPTH);
    #endif

    #ifdef GL_MAX_PROJECTION_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_MAX_PROJECTION_STACK_DEPTH);
    #endif

    #ifdef GL_MAX_TEXTURE_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_MAX_TEXTURE_STACK_DEPTH);
    #endif

    #ifdef GL_MAX_VIEWPORT_DIMS
    NODE_DEFINE_CONSTANT(target, GL_MAX_VIEWPORT_DIMS);
    #endif

    #ifdef GL_MAX_CLIENT_ATTRIB_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_MAX_CLIENT_ATTRIB_STACK_DEPTH);
    #endif

    #ifdef GL_SUBPIXEL_BITS
    NODE_DEFINE_CONSTANT(target, GL_SUBPIXEL_BITS);
    #endif

    #ifdef GL_INDEX_BITS
    NODE_DEFINE_CONSTANT(target, GL_INDEX_BITS);
    #endif

    #ifdef GL_RED_BITS
    NODE_DEFINE_CONSTANT(target, GL_RED_BITS);
    #endif

    #ifdef GL_GREEN_BITS
    NODE_DEFINE_CONSTANT(target, GL_GREEN_BITS);
    #endif

    #ifdef GL_BLUE_BITS
    NODE_DEFINE_CONSTANT(target, GL_BLUE_BITS);
    #endif

    #ifdef GL_ALPHA_BITS
    NODE_DEFINE_CONSTANT(target, GL_ALPHA_BITS);
    #endif

    #ifdef GL_DEPTH_BITS
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_BITS);
    #endif

    #ifdef GL_STENCIL_BITS
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_BITS);
    #endif

    #ifdef GL_ACCUM_RED_BITS
    NODE_DEFINE_CONSTANT(target, GL_ACCUM_RED_BITS);
    #endif

    #ifdef GL_ACCUM_GREEN_BITS
    NODE_DEFINE_CONSTANT(target, GL_ACCUM_GREEN_BITS);
    #endif

    #ifdef GL_ACCUM_BLUE_BITS
    NODE_DEFINE_CONSTANT(target, GL_ACCUM_BLUE_BITS);
    #endif

    #ifdef GL_ACCUM_ALPHA_BITS
    NODE_DEFINE_CONSTANT(target, GL_ACCUM_ALPHA_BITS);
    #endif

    #ifdef GL_NAME_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_NAME_STACK_DEPTH);
    #endif

    #ifdef GL_AUTO_NORMAL
    NODE_DEFINE_CONSTANT(target, GL_AUTO_NORMAL);
    #endif

    #ifdef GL_MAP1_COLOR_4
    NODE_DEFINE_CONSTANT(target, GL_MAP1_COLOR_4);
    #endif

    #ifdef GL_MAP1_INDEX
    NODE_DEFINE_CONSTANT(target, GL_MAP1_INDEX);
    #endif

    #ifdef GL_MAP1_NORMAL
    NODE_DEFINE_CONSTANT(target, GL_MAP1_NORMAL);
    #endif

    #ifdef GL_MAP1_TEXTURE_COORD_1
    NODE_DEFINE_CONSTANT(target, GL_MAP1_TEXTURE_COORD_1);
    #endif

    #ifdef GL_MAP1_TEXTURE_COORD_2
    NODE_DEFINE_CONSTANT(target, GL_MAP1_TEXTURE_COORD_2);
    #endif

    #ifdef GL_MAP1_TEXTURE_COORD_3
    NODE_DEFINE_CONSTANT(target, GL_MAP1_TEXTURE_COORD_3);
    #endif

    #ifdef GL_MAP1_TEXTURE_COORD_4
    NODE_DEFINE_CONSTANT(target, GL_MAP1_TEXTURE_COORD_4);
    #endif

    #ifdef GL_MAP1_VERTEX_3
    NODE_DEFINE_CONSTANT(target, GL_MAP1_VERTEX_3);
    #endif

    #ifdef GL_MAP1_VERTEX_4
    NODE_DEFINE_CONSTANT(target, GL_MAP1_VERTEX_4);
    #endif

    #ifdef GL_MAP2_COLOR_4
    NODE_DEFINE_CONSTANT(target, GL_MAP2_COLOR_4);
    #endif

    #ifdef GL_MAP2_INDEX
    NODE_DEFINE_CONSTANT(target, GL_MAP2_INDEX);
    #endif

    #ifdef GL_MAP2_NORMAL
    NODE_DEFINE_CONSTANT(target, GL_MAP2_NORMAL);
    #endif

    #ifdef GL_MAP2_TEXTURE_COORD_1
    NODE_DEFINE_CONSTANT(target, GL_MAP2_TEXTURE_COORD_1);
    #endif

    #ifdef GL_MAP2_TEXTURE_COORD_2
    NODE_DEFINE_CONSTANT(target, GL_MAP2_TEXTURE_COORD_2);
    #endif

    #ifdef GL_MAP2_TEXTURE_COORD_3
    NODE_DEFINE_CONSTANT(target, GL_MAP2_TEXTURE_COORD_3);
    #endif

    #ifdef GL_MAP2_TEXTURE_COORD_4
    NODE_DEFINE_CONSTANT(target, GL_MAP2_TEXTURE_COORD_4);
    #endif

    #ifdef GL_MAP2_VERTEX_3
    NODE_DEFINE_CONSTANT(target, GL_MAP2_VERTEX_3);
    #endif

    #ifdef GL_MAP2_VERTEX_4
    NODE_DEFINE_CONSTANT(target, GL_MAP2_VERTEX_4);
    #endif

    #ifdef GL_MAP1_GRID_DOMAIN
    NODE_DEFINE_CONSTANT(target, GL_MAP1_GRID_DOMAIN);
    #endif

    #ifdef GL_MAP1_GRID_SEGMENTS
    NODE_DEFINE_CONSTANT(target, GL_MAP1_GRID_SEGMENTS);
    #endif

    #ifdef GL_MAP2_GRID_DOMAIN
    NODE_DEFINE_CONSTANT(target, GL_MAP2_GRID_DOMAIN);
    #endif

    #ifdef GL_MAP2_GRID_SEGMENTS
    NODE_DEFINE_CONSTANT(target, GL_MAP2_GRID_SEGMENTS);
    #endif

    #ifdef GL_TEXTURE_1D
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_1D);
    #endif

    #ifdef GL_TEXTURE_2D
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_2D);
    #endif

    #ifdef GL_FEEDBACK_BUFFER_POINTER
    NODE_DEFINE_CONSTANT(target, GL_FEEDBACK_BUFFER_POINTER);
    #endif

    #ifdef GL_FEEDBACK_BUFFER_SIZE
    NODE_DEFINE_CONSTANT(target, GL_FEEDBACK_BUFFER_SIZE);
    #endif

    #ifdef GL_FEEDBACK_BUFFER_TYPE
    NODE_DEFINE_CONSTANT(target, GL_FEEDBACK_BUFFER_TYPE);
    #endif

    #ifdef GL_SELECTION_BUFFER_POINTER
    NODE_DEFINE_CONSTANT(target, GL_SELECTION_BUFFER_POINTER);
    #endif

    #ifdef GL_SELECTION_BUFFER_SIZE
    NODE_DEFINE_CONSTANT(target, GL_SELECTION_BUFFER_SIZE);
    #endif

    #ifdef GL_TEXTURE_WIDTH
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_WIDTH);
    #endif

    #ifdef GL_TEXTURE_HEIGHT
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_HEIGHT);
    #endif

    #ifdef GL_TEXTURE_INTERNAL_FORMAT
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_INTERNAL_FORMAT);
    #endif

    #ifdef GL_TEXTURE_BORDER_COLOR
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_BORDER_COLOR);
    #endif

    #ifdef GL_TEXTURE_BORDER
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_BORDER);
    #endif

    #ifdef GL_DONT_CARE
    NODE_DEFINE_CONSTANT(target, GL_DONT_CARE);
    #endif

    #ifdef GL_FASTEST
    NODE_DEFINE_CONSTANT(target, GL_FASTEST);
    #endif

    #ifdef GL_NICEST
    NODE_DEFINE_CONSTANT(target, GL_NICEST);
    #endif

    #ifdef GL_LIGHT0
    NODE_DEFINE_CONSTANT(target, GL_LIGHT0);
    #endif

    #ifdef GL_LIGHT1
    NODE_DEFINE_CONSTANT(target, GL_LIGHT1);
    #endif

    #ifdef GL_LIGHT2
    NODE_DEFINE_CONSTANT(target, GL_LIGHT2);
    #endif

    #ifdef GL_LIGHT3
    NODE_DEFINE_CONSTANT(target, GL_LIGHT3);
    #endif

    #ifdef GL_LIGHT4
    NODE_DEFINE_CONSTANT(target, GL_LIGHT4);
    #endif

    #ifdef GL_LIGHT5
    NODE_DEFINE_CONSTANT(target, GL_LIGHT5);
    #endif

    #ifdef GL_LIGHT6
    NODE_DEFINE_CONSTANT(target, GL_LIGHT6);
    #endif

    #ifdef GL_LIGHT7
    NODE_DEFINE_CONSTANT(target, GL_LIGHT7);
    #endif

    #ifdef GL_AMBIENT
    NODE_DEFINE_CONSTANT(target, GL_AMBIENT);
    #endif

    #ifdef GL_DIFFUSE
    NODE_DEFINE_CONSTANT(target, GL_DIFFUSE);
    #endif

    #ifdef GL_SPECULAR
    NODE_DEFINE_CONSTANT(target, GL_SPECULAR);
    #endif

    #ifdef GL_POSITION
    NODE_DEFINE_CONSTANT(target, GL_POSITION);
    #endif

    #ifdef GL_SPOT_DIRECTION
    NODE_DEFINE_CONSTANT(target, GL_SPOT_DIRECTION);
    #endif

    #ifdef GL_SPOT_EXPONENT
    NODE_DEFINE_CONSTANT(target, GL_SPOT_EXPONENT);
    #endif

    #ifdef GL_SPOT_CUTOFF
    NODE_DEFINE_CONSTANT(target, GL_SPOT_CUTOFF);
    #endif

    #ifdef GL_CONSTANT_ATTENUATION
    NODE_DEFINE_CONSTANT(target, GL_CONSTANT_ATTENUATION);
    #endif

    #ifdef GL_LINEAR_ATTENUATION
    NODE_DEFINE_CONSTANT(target, GL_LINEAR_ATTENUATION);
    #endif

    #ifdef GL_QUADRATIC_ATTENUATION
    NODE_DEFINE_CONSTANT(target, GL_QUADRATIC_ATTENUATION);
    #endif

    #ifdef GL_COMPILE
    NODE_DEFINE_CONSTANT(target, GL_COMPILE);
    #endif

    #ifdef GL_COMPILE_AND_EXECUTE
    NODE_DEFINE_CONSTANT(target, GL_COMPILE_AND_EXECUTE);
    #endif

    #ifdef GL_CLEAR
    NODE_DEFINE_CONSTANT(target, GL_CLEAR);
    #endif

    #ifdef GL_AND
    NODE_DEFINE_CONSTANT(target, GL_AND);
    #endif

    #ifdef GL_AND_REVERSE
    NODE_DEFINE_CONSTANT(target, GL_AND_REVERSE);
    #endif

    #ifdef GL_COPY
    NODE_DEFINE_CONSTANT(target, GL_COPY);
    #endif

    #ifdef GL_AND_INVERTED
    NODE_DEFINE_CONSTANT(target, GL_AND_INVERTED);
    #endif

    #ifdef GL_NOOP
    NODE_DEFINE_CONSTANT(target, GL_NOOP);
    #endif

    #ifdef GL_XOR
    NODE_DEFINE_CONSTANT(target, GL_XOR);
    #endif

    #ifdef GL_OR
    NODE_DEFINE_CONSTANT(target, GL_OR);
    #endif

    #ifdef GL_NOR
    NODE_DEFINE_CONSTANT(target, GL_NOR);
    #endif

    #ifdef GL_EQUIV
    NODE_DEFINE_CONSTANT(target, GL_EQUIV);
    #endif

    #ifdef GL_INVERT
    NODE_DEFINE_CONSTANT(target, GL_INVERT);
    #endif

    #ifdef GL_OR_REVERSE
    NODE_DEFINE_CONSTANT(target, GL_OR_REVERSE);
    #endif

    #ifdef GL_COPY_INVERTED
    NODE_DEFINE_CONSTANT(target, GL_COPY_INVERTED);
    #endif

    #ifdef GL_OR_INVERTED
    NODE_DEFINE_CONSTANT(target, GL_OR_INVERTED);
    #endif

    #ifdef GL_NAND
    NODE_DEFINE_CONSTANT(target, GL_NAND);
    #endif

    #ifdef GL_SET
    NODE_DEFINE_CONSTANT(target, GL_SET);
    #endif

    #ifdef GL_EMISSION
    NODE_DEFINE_CONSTANT(target, GL_EMISSION);
    #endif

    #ifdef GL_SHININESS
    NODE_DEFINE_CONSTANT(target, GL_SHININESS);
    #endif

    #ifdef GL_AMBIENT_AND_DIFFUSE
    NODE_DEFINE_CONSTANT(target, GL_AMBIENT_AND_DIFFUSE);
    #endif

    #ifdef GL_COLOR_INDEXES
    NODE_DEFINE_CONSTANT(target, GL_COLOR_INDEXES);
    #endif

    #ifdef GL_MODELVIEW
    NODE_DEFINE_CONSTANT(target, GL_MODELVIEW);
    #endif

    #ifdef GL_PROJECTION
    NODE_DEFINE_CONSTANT(target, GL_PROJECTION);
    #endif

    #ifdef GL_TEXTURE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE);
    #endif

    #ifdef GL_COLOR
    NODE_DEFINE_CONSTANT(target, GL_COLOR);
    #endif

    #ifdef GL_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_DEPTH);
    #endif

    #ifdef GL_STENCIL
    NODE_DEFINE_CONSTANT(target, GL_STENCIL);
    #endif

    #ifdef GL_COLOR_INDEX
    NODE_DEFINE_CONSTANT(target, GL_COLOR_INDEX);
    #endif

    #ifdef GL_STENCIL_INDEX
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_INDEX);
    #endif

    #ifdef GL_DEPTH_COMPONENT
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_COMPONENT);
    #endif

    #ifdef GL_RED
    NODE_DEFINE_CONSTANT(target, GL_RED);
    #endif

    #ifdef GL_GREEN
    NODE_DEFINE_CONSTANT(target, GL_GREEN);
    #endif

    #ifdef GL_BLUE
    NODE_DEFINE_CONSTANT(target, GL_BLUE);
    #endif

    #ifdef GL_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_ALPHA);
    #endif

    #ifdef GL_RGB
    NODE_DEFINE_CONSTANT(target, GL_RGB);
    #endif

    #ifdef GL_RGBA
    NODE_DEFINE_CONSTANT(target, GL_RGBA);
    #endif

    #ifdef GL_LUMINANCE
    NODE_DEFINE_CONSTANT(target, GL_LUMINANCE);
    #endif

    #ifdef GL_LUMINANCE_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_LUMINANCE_ALPHA);
    #endif

    #ifdef GL_BITMAP
    NODE_DEFINE_CONSTANT(target, GL_BITMAP);
    #endif

    #ifdef GL_POINT
    NODE_DEFINE_CONSTANT(target, GL_POINT);
    #endif

    #ifdef GL_LINE
    NODE_DEFINE_CONSTANT(target, GL_LINE);
    #endif

    #ifdef GL_FILL
    NODE_DEFINE_CONSTANT(target, GL_FILL);
    #endif

    #ifdef GL_RENDER
    NODE_DEFINE_CONSTANT(target, GL_RENDER);
    #endif

    #ifdef GL_FEEDBACK
    NODE_DEFINE_CONSTANT(target, GL_FEEDBACK);
    #endif

    #ifdef GL_SELECT
    NODE_DEFINE_CONSTANT(target, GL_SELECT);
    #endif

    #ifdef GL_FLAT
    NODE_DEFINE_CONSTANT(target, GL_FLAT);
    #endif

    #ifdef GL_SMOOTH
    NODE_DEFINE_CONSTANT(target, GL_SMOOTH);
    #endif

    #ifdef GL_KEEP
    NODE_DEFINE_CONSTANT(target, GL_KEEP);
    #endif

    #ifdef GL_REPLACE
    NODE_DEFINE_CONSTANT(target, GL_REPLACE);
    #endif

    #ifdef GL_INCR
    NODE_DEFINE_CONSTANT(target, GL_INCR);
    #endif

    #ifdef GL_DECR
    NODE_DEFINE_CONSTANT(target, GL_DECR);
    #endif

    #ifdef GL_VENDOR
    NODE_DEFINE_CONSTANT(target, GL_VENDOR);
    #endif

    #ifdef GL_RENDERER
    NODE_DEFINE_CONSTANT(target, GL_RENDERER);
    #endif

    #ifdef GL_VERSION
    NODE_DEFINE_CONSTANT(target, GL_VERSION);
    #endif

    #ifdef GL_EXTENSIONS
    NODE_DEFINE_CONSTANT(target, GL_EXTENSIONS);
    #endif

    #ifdef GL_S
    NODE_DEFINE_CONSTANT(target, GL_S);
    #endif

    #ifdef GL_T
    NODE_DEFINE_CONSTANT(target, GL_T);
    #endif

    #ifdef GL_R
    NODE_DEFINE_CONSTANT(target, GL_R);
    #endif

    #ifdef GL_Q
    NODE_DEFINE_CONSTANT(target, GL_Q);
    #endif

    #ifdef GL_MODULATE
    NODE_DEFINE_CONSTANT(target, GL_MODULATE);
    #endif

    #ifdef GL_DECAL
    NODE_DEFINE_CONSTANT(target, GL_DECAL);
    #endif

    #ifdef GL_TEXTURE_ENV_MODE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_ENV_MODE);
    #endif

    #ifdef GL_TEXTURE_ENV_COLOR
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_ENV_COLOR);
    #endif

    #ifdef GL_TEXTURE_ENV
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_ENV);
    #endif

    #ifdef GL_EYE_LINEAR
    NODE_DEFINE_CONSTANT(target, GL_EYE_LINEAR);
    #endif

    #ifdef GL_OBJECT_LINEAR
    NODE_DEFINE_CONSTANT(target, GL_OBJECT_LINEAR);
    #endif

    #ifdef GL_SPHERE_MAP
    NODE_DEFINE_CONSTANT(target, GL_SPHERE_MAP);
    #endif

    #ifdef GL_TEXTURE_GEN_MODE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_GEN_MODE);
    #endif

    #ifdef GL_OBJECT_PLANE
    NODE_DEFINE_CONSTANT(target, GL_OBJECT_PLANE);
    #endif

    #ifdef GL_EYE_PLANE
    NODE_DEFINE_CONSTANT(target, GL_EYE_PLANE);
    #endif

    #ifdef GL_NEAREST
    NODE_DEFINE_CONSTANT(target, GL_NEAREST);
    #endif

    #ifdef GL_LINEAR
    NODE_DEFINE_CONSTANT(target, GL_LINEAR);
    #endif

    #ifdef GL_NEAREST_MIPMAP_NEAREST
    NODE_DEFINE_CONSTANT(target, GL_NEAREST_MIPMAP_NEAREST);
    #endif

    #ifdef GL_LINEAR_MIPMAP_NEAREST
    NODE_DEFINE_CONSTANT(target, GL_LINEAR_MIPMAP_NEAREST);
    #endif

    #ifdef GL_NEAREST_MIPMAP_LINEAR
    NODE_DEFINE_CONSTANT(target, GL_NEAREST_MIPMAP_LINEAR);
    #endif

    #ifdef GL_LINEAR_MIPMAP_LINEAR
    NODE_DEFINE_CONSTANT(target, GL_LINEAR_MIPMAP_LINEAR);
    #endif

    #ifdef GL_TEXTURE_MAG_FILTER
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_MAG_FILTER);
    #endif

    #ifdef GL_TEXTURE_MIN_FILTER
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_MIN_FILTER);
    #endif

    #ifdef GL_TEXTURE_WRAP_S
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_WRAP_S);
    #endif

    #ifdef GL_TEXTURE_WRAP_T
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_WRAP_T);
    #endif

    #ifdef GL_CLAMP
    NODE_DEFINE_CONSTANT(target, GL_CLAMP);
    #endif

    #ifdef GL_REPEAT
    NODE_DEFINE_CONSTANT(target, GL_REPEAT);
    #endif

    #ifdef GL_CLIENT_PIXEL_STORE_BIT
    NODE_DEFINE_CONSTANT(target, GL_CLIENT_PIXEL_STORE_BIT);
    #endif

    #ifdef GL_CLIENT_VERTEX_ARRAY_BIT
    NODE_DEFINE_CONSTANT(target, GL_CLIENT_VERTEX_ARRAY_BIT);
    #endif

    #ifdef GL_CLIENT_ALL_ATTRIB_BITS
    NODE_DEFINE_CONSTANT(target, GL_CLIENT_ALL_ATTRIB_BITS);
    #endif

    #ifdef GL_POLYGON_OFFSET_FACTOR
    NODE_DEFINE_CONSTANT(target, GL_POLYGON_OFFSET_FACTOR);
    #endif

    #ifdef GL_POLYGON_OFFSET_UNITS
    NODE_DEFINE_CONSTANT(target, GL_POLYGON_OFFSET_UNITS);
    #endif

    #ifdef GL_POLYGON_OFFSET_POINT
    NODE_DEFINE_CONSTANT(target, GL_POLYGON_OFFSET_POINT);
    #endif

    #ifdef GL_POLYGON_OFFSET_LINE
    NODE_DEFINE_CONSTANT(target, GL_POLYGON_OFFSET_LINE);
    #endif

    #ifdef GL_POLYGON_OFFSET_FILL
    NODE_DEFINE_CONSTANT(target, GL_POLYGON_OFFSET_FILL);
    #endif

    #ifdef GL_ALPHA4
    NODE_DEFINE_CONSTANT(target, GL_ALPHA4);
    #endif

    #ifdef GL_ALPHA8
    NODE_DEFINE_CONSTANT(target, GL_ALPHA8);
    #endif

    #ifdef GL_ALPHA12
    NODE_DEFINE_CONSTANT(target, GL_ALPHA12);
    #endif

    #ifdef GL_ALPHA16
    NODE_DEFINE_CONSTANT(target, GL_ALPHA16);
    #endif

    #ifdef GL_LUMINANCE4
    NODE_DEFINE_CONSTANT(target, GL_LUMINANCE4);
    #endif

    #ifdef GL_LUMINANCE8
    NODE_DEFINE_CONSTANT(target, GL_LUMINANCE8);
    #endif

    #ifdef GL_LUMINANCE12
    NODE_DEFINE_CONSTANT(target, GL_LUMINANCE12);
    #endif

    #ifdef GL_LUMINANCE16
    NODE_DEFINE_CONSTANT(target, GL_LUMINANCE16);
    #endif

    #ifdef GL_LUMINANCE4_ALPHA4
    NODE_DEFINE_CONSTANT(target, GL_LUMINANCE4_ALPHA4);
    #endif

    #ifdef GL_LUMINANCE6_ALPHA2
    NODE_DEFINE_CONSTANT(target, GL_LUMINANCE6_ALPHA2);
    #endif

    #ifdef GL_LUMINANCE8_ALPHA8
    NODE_DEFINE_CONSTANT(target, GL_LUMINANCE8_ALPHA8);
    #endif

    #ifdef GL_LUMINANCE12_ALPHA4
    NODE_DEFINE_CONSTANT(target, GL_LUMINANCE12_ALPHA4);
    #endif

    #ifdef GL_LUMINANCE12_ALPHA12
    NODE_DEFINE_CONSTANT(target, GL_LUMINANCE12_ALPHA12);
    #endif

    #ifdef GL_LUMINANCE16_ALPHA16
    NODE_DEFINE_CONSTANT(target, GL_LUMINANCE16_ALPHA16);
    #endif

    #ifdef GL_INTENSITY
    NODE_DEFINE_CONSTANT(target, GL_INTENSITY);
    #endif

    #ifdef GL_INTENSITY4
    NODE_DEFINE_CONSTANT(target, GL_INTENSITY4);
    #endif

    #ifdef GL_INTENSITY8
    NODE_DEFINE_CONSTANT(target, GL_INTENSITY8);
    #endif

    #ifdef GL_INTENSITY12
    NODE_DEFINE_CONSTANT(target, GL_INTENSITY12);
    #endif

    #ifdef GL_INTENSITY16
    NODE_DEFINE_CONSTANT(target, GL_INTENSITY16);
    #endif

    #ifdef GL_R3_G3_B2
    NODE_DEFINE_CONSTANT(target, GL_R3_G3_B2);
    #endif

    #ifdef GL_RGB4
    NODE_DEFINE_CONSTANT(target, GL_RGB4);
    #endif

    #ifdef GL_RGB5
    NODE_DEFINE_CONSTANT(target, GL_RGB5);
    #endif

    #ifdef GL_RGB8
    NODE_DEFINE_CONSTANT(target, GL_RGB8);
    #endif

    #ifdef GL_RGB10
    NODE_DEFINE_CONSTANT(target, GL_RGB10);
    #endif

    #ifdef GL_RGB12
    NODE_DEFINE_CONSTANT(target, GL_RGB12);
    #endif

    #ifdef GL_RGB16
    NODE_DEFINE_CONSTANT(target, GL_RGB16);
    #endif

    #ifdef GL_RGBA2
    NODE_DEFINE_CONSTANT(target, GL_RGBA2);
    #endif

    #ifdef GL_RGBA4
    NODE_DEFINE_CONSTANT(target, GL_RGBA4);
    #endif

    #ifdef GL_RGB5_A1
    NODE_DEFINE_CONSTANT(target, GL_RGB5_A1);
    #endif

    #ifdef GL_RGBA8
    NODE_DEFINE_CONSTANT(target, GL_RGBA8);
    #endif

    #ifdef GL_RGB10_A2
    NODE_DEFINE_CONSTANT(target, GL_RGB10_A2);
    #endif

    #ifdef GL_RGBA12
    NODE_DEFINE_CONSTANT(target, GL_RGBA12);
    #endif

    #ifdef GL_RGBA16
    NODE_DEFINE_CONSTANT(target, GL_RGBA16);
    #endif

    #ifdef GL_TEXTURE_RED_SIZE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_RED_SIZE);
    #endif

    #ifdef GL_TEXTURE_GREEN_SIZE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_GREEN_SIZE);
    #endif

    #ifdef GL_TEXTURE_BLUE_SIZE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_BLUE_SIZE);
    #endif

    #ifdef GL_TEXTURE_ALPHA_SIZE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_ALPHA_SIZE);
    #endif

    #ifdef GL_TEXTURE_LUMINANCE_SIZE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_LUMINANCE_SIZE);
    #endif

    #ifdef GL_TEXTURE_INTENSITY_SIZE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_INTENSITY_SIZE);
    #endif

    #ifdef GL_PROXY_TEXTURE_1D
    NODE_DEFINE_CONSTANT(target, GL_PROXY_TEXTURE_1D);
    #endif

    #ifdef GL_PROXY_TEXTURE_2D
    NODE_DEFINE_CONSTANT(target, GL_PROXY_TEXTURE_2D);
    #endif

    #ifdef GL_TEXTURE_PRIORITY
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_PRIORITY);
    #endif

    #ifdef GL_TEXTURE_RESIDENT
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_RESIDENT);
    #endif

    #ifdef GL_TEXTURE_BINDING_1D
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_BINDING_1D);
    #endif

    #ifdef GL_TEXTURE_BINDING_2D
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_BINDING_2D);
    #endif

    #ifdef GL_TEXTURE_BINDING_3D
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_BINDING_3D);
    #endif

    #ifdef GL_VERTEX_ARRAY
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY);
    #endif

    #ifdef GL_NORMAL_ARRAY
    NODE_DEFINE_CONSTANT(target, GL_NORMAL_ARRAY);
    #endif

    #ifdef GL_COLOR_ARRAY
    NODE_DEFINE_CONSTANT(target, GL_COLOR_ARRAY);
    #endif

    #ifdef GL_INDEX_ARRAY
    NODE_DEFINE_CONSTANT(target, GL_INDEX_ARRAY);
    #endif

    #ifdef GL_TEXTURE_COORD_ARRAY
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY);
    #endif

    #ifdef GL_EDGE_FLAG_ARRAY
    NODE_DEFINE_CONSTANT(target, GL_EDGE_FLAG_ARRAY);
    #endif

    #ifdef GL_VERTEX_ARRAY_SIZE
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY_SIZE);
    #endif

    #ifdef GL_VERTEX_ARRAY_TYPE
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY_TYPE);
    #endif

    #ifdef GL_VERTEX_ARRAY_STRIDE
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY_STRIDE);
    #endif

    #ifdef GL_NORMAL_ARRAY_TYPE
    NODE_DEFINE_CONSTANT(target, GL_NORMAL_ARRAY_TYPE);
    #endif

    #ifdef GL_NORMAL_ARRAY_STRIDE
    NODE_DEFINE_CONSTANT(target, GL_NORMAL_ARRAY_STRIDE);
    #endif

    #ifdef GL_COLOR_ARRAY_SIZE
    NODE_DEFINE_CONSTANT(target, GL_COLOR_ARRAY_SIZE);
    #endif

    #ifdef GL_COLOR_ARRAY_TYPE
    NODE_DEFINE_CONSTANT(target, GL_COLOR_ARRAY_TYPE);
    #endif

    #ifdef GL_COLOR_ARRAY_STRIDE
    NODE_DEFINE_CONSTANT(target, GL_COLOR_ARRAY_STRIDE);
    #endif

    #ifdef GL_INDEX_ARRAY_TYPE
    NODE_DEFINE_CONSTANT(target, GL_INDEX_ARRAY_TYPE);
    #endif

    #ifdef GL_INDEX_ARRAY_STRIDE
    NODE_DEFINE_CONSTANT(target, GL_INDEX_ARRAY_STRIDE);
    #endif

    #ifdef GL_TEXTURE_COORD_ARRAY_SIZE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY_SIZE);
    #endif

    #ifdef GL_TEXTURE_COORD_ARRAY_TYPE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY_TYPE);
    #endif

    #ifdef GL_TEXTURE_COORD_ARRAY_STRIDE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY_STRIDE);
    #endif

    #ifdef GL_EDGE_FLAG_ARRAY_STRIDE
    NODE_DEFINE_CONSTANT(target, GL_EDGE_FLAG_ARRAY_STRIDE);
    #endif

    #ifdef GL_VERTEX_ARRAY_POINTER
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY_POINTER);
    #endif

    #ifdef GL_NORMAL_ARRAY_POINTER
    NODE_DEFINE_CONSTANT(target, GL_NORMAL_ARRAY_POINTER);
    #endif

    #ifdef GL_COLOR_ARRAY_POINTER
    NODE_DEFINE_CONSTANT(target, GL_COLOR_ARRAY_POINTER);
    #endif

    #ifdef GL_INDEX_ARRAY_POINTER
    NODE_DEFINE_CONSTANT(target, GL_INDEX_ARRAY_POINTER);
    #endif

    #ifdef GL_TEXTURE_COORD_ARRAY_POINTER
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY_POINTER);
    #endif

    #ifdef GL_EDGE_FLAG_ARRAY_POINTER
    NODE_DEFINE_CONSTANT(target, GL_EDGE_FLAG_ARRAY_POINTER);
    #endif

    #ifdef GL_V2F
    NODE_DEFINE_CONSTANT(target, GL_V2F);
    #endif

    #ifdef GL_V3F
    NODE_DEFINE_CONSTANT(target, GL_V3F);
    #endif

    #ifdef GL_C4UB_V2F
    NODE_DEFINE_CONSTANT(target, GL_C4UB_V2F);
    #endif

    #ifdef GL_C4UB_V3F
    NODE_DEFINE_CONSTANT(target, GL_C4UB_V3F);
    #endif

    #ifdef GL_C3F_V3F
    NODE_DEFINE_CONSTANT(target, GL_C3F_V3F);
    #endif

    #ifdef GL_N3F_V3F
    NODE_DEFINE_CONSTANT(target, GL_N3F_V3F);
    #endif

    #ifdef GL_C4F_N3F_V3F
    NODE_DEFINE_CONSTANT(target, GL_C4F_N3F_V3F);
    #endif

    #ifdef GL_T2F_V3F
    NODE_DEFINE_CONSTANT(target, GL_T2F_V3F);
    #endif

    #ifdef GL_T4F_V4F
    NODE_DEFINE_CONSTANT(target, GL_T4F_V4F);
    #endif

    #ifdef GL_T2F_C4UB_V3F
    NODE_DEFINE_CONSTANT(target, GL_T2F_C4UB_V3F);
    #endif

    #ifdef GL_T2F_C3F_V3F
    NODE_DEFINE_CONSTANT(target, GL_T2F_C3F_V3F);
    #endif

    #ifdef GL_T2F_N3F_V3F
    NODE_DEFINE_CONSTANT(target, GL_T2F_N3F_V3F);
    #endif

    #ifdef GL_T2F_C4F_N3F_V3F
    NODE_DEFINE_CONSTANT(target, GL_T2F_C4F_N3F_V3F);
    #endif

    #ifdef GL_T4F_C4F_N3F_V4F
    NODE_DEFINE_CONSTANT(target, GL_T4F_C4F_N3F_V4F);
    #endif

    #ifdef GL_BGR
    NODE_DEFINE_CONSTANT(target, GL_BGR);
    #endif

    #ifdef GL_BGRA
    NODE_DEFINE_CONSTANT(target, GL_BGRA);
    #endif

    #ifdef GL_CONSTANT_COLOR
    NODE_DEFINE_CONSTANT(target, GL_CONSTANT_COLOR);
    #endif

    #ifdef GL_ONE_MINUS_CONSTANT_COLOR
    NODE_DEFINE_CONSTANT(target, GL_ONE_MINUS_CONSTANT_COLOR);
    #endif

    #ifdef GL_CONSTANT_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_CONSTANT_ALPHA);
    #endif

    #ifdef GL_ONE_MINUS_CONSTANT_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_ONE_MINUS_CONSTANT_ALPHA);
    #endif

    #ifdef GL_BLEND_COLOR
    NODE_DEFINE_CONSTANT(target, GL_BLEND_COLOR);
    #endif

    #ifdef GL_FUNC_ADD
    NODE_DEFINE_CONSTANT(target, GL_FUNC_ADD);
    #endif

    #ifdef GL_MIN
    NODE_DEFINE_CONSTANT(target, GL_MIN);
    #endif

    #ifdef GL_MAX
    NODE_DEFINE_CONSTANT(target, GL_MAX);
    #endif

    #ifdef GL_BLEND_EQUATION
    NODE_DEFINE_CONSTANT(target, GL_BLEND_EQUATION);
    #endif

    #ifdef GL_BLEND_EQUATION_RGB
    NODE_DEFINE_CONSTANT(target, GL_BLEND_EQUATION_RGB);
    #endif

    #ifdef GL_BLEND_EQUATION_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_BLEND_EQUATION_ALPHA);
    #endif

    #ifdef GL_FUNC_SUBTRACT
    NODE_DEFINE_CONSTANT(target, GL_FUNC_SUBTRACT);
    #endif

    #ifdef GL_FUNC_REVERSE_SUBTRACT
    NODE_DEFINE_CONSTANT(target, GL_FUNC_REVERSE_SUBTRACT);
    #endif

    #ifdef GL_COLOR_MATRIX
    NODE_DEFINE_CONSTANT(target, GL_COLOR_MATRIX);
    #endif

    #ifdef GL_COLOR_MATRIX_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_COLOR_MATRIX_STACK_DEPTH);
    #endif

    #ifdef GL_MAX_COLOR_MATRIX_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_MAX_COLOR_MATRIX_STACK_DEPTH);
    #endif

    #ifdef GL_POST_COLOR_MATRIX_RED_SCALE
    NODE_DEFINE_CONSTANT(target, GL_POST_COLOR_MATRIX_RED_SCALE);
    #endif

    #ifdef GL_POST_COLOR_MATRIX_GREEN_SCALE
    NODE_DEFINE_CONSTANT(target, GL_POST_COLOR_MATRIX_GREEN_SCALE);
    #endif

    #ifdef GL_POST_COLOR_MATRIX_BLUE_SCALE
    NODE_DEFINE_CONSTANT(target, GL_POST_COLOR_MATRIX_BLUE_SCALE);
    #endif

    #ifdef GL_POST_COLOR_MATRIX_ALPHA_SCALE
    NODE_DEFINE_CONSTANT(target, GL_POST_COLOR_MATRIX_ALPHA_SCALE);
    #endif

    #ifdef GL_POST_COLOR_MATRIX_RED_BIAS
    NODE_DEFINE_CONSTANT(target, GL_POST_COLOR_MATRIX_RED_BIAS);
    #endif

    #ifdef GL_POST_COLOR_MATRIX_GREEN_BIAS
    NODE_DEFINE_CONSTANT(target, GL_POST_COLOR_MATRIX_GREEN_BIAS);
    #endif

    #ifdef GL_POST_COLOR_MATRIX_BLUE_BIAS
    NODE_DEFINE_CONSTANT(target, GL_POST_COLOR_MATRIX_BLUE_BIAS);
    #endif

    #ifdef GL_POST_COLOR_MATRIX_ALPHA_BIAS
    NODE_DEFINE_CONSTANT(target, GL_POST_COLOR_MATRIX_ALPHA_BIAS);
    #endif

    #ifdef GL_COLOR_TABLE
    NODE_DEFINE_CONSTANT(target, GL_COLOR_TABLE);
    #endif

    #ifdef GL_POST_CONVOLUTION_COLOR_TABLE
    NODE_DEFINE_CONSTANT(target, GL_POST_CONVOLUTION_COLOR_TABLE);
    #endif

    #ifdef GL_POST_COLOR_MATRIX_COLOR_TABLE
    NODE_DEFINE_CONSTANT(target, GL_POST_COLOR_MATRIX_COLOR_TABLE);
    #endif

    #ifdef GL_PROXY_COLOR_TABLE
    NODE_DEFINE_CONSTANT(target, GL_PROXY_COLOR_TABLE);
    #endif

    #ifdef GL_PROXY_POST_CONVOLUTION_COLOR_TABLE
    NODE_DEFINE_CONSTANT(target, GL_PROXY_POST_CONVOLUTION_COLOR_TABLE);
    #endif

    #ifdef GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE
    NODE_DEFINE_CONSTANT(target, GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE);
    #endif

    #ifdef GL_COLOR_TABLE_SCALE
    NODE_DEFINE_CONSTANT(target, GL_COLOR_TABLE_SCALE);
    #endif

    #ifdef GL_COLOR_TABLE_BIAS
    NODE_DEFINE_CONSTANT(target, GL_COLOR_TABLE_BIAS);
    #endif

    #ifdef GL_COLOR_TABLE_FORMAT
    NODE_DEFINE_CONSTANT(target, GL_COLOR_TABLE_FORMAT);
    #endif

    #ifdef GL_COLOR_TABLE_WIDTH
    NODE_DEFINE_CONSTANT(target, GL_COLOR_TABLE_WIDTH);
    #endif

    #ifdef GL_COLOR_TABLE_RED_SIZE
    NODE_DEFINE_CONSTANT(target, GL_COLOR_TABLE_RED_SIZE);
    #endif

    #ifdef GL_COLOR_TABLE_GREEN_SIZE
    NODE_DEFINE_CONSTANT(target, GL_COLOR_TABLE_GREEN_SIZE);
    #endif

    #ifdef GL_COLOR_TABLE_BLUE_SIZE
    NODE_DEFINE_CONSTANT(target, GL_COLOR_TABLE_BLUE_SIZE);
    #endif

    #ifdef GL_COLOR_TABLE_ALPHA_SIZE
    NODE_DEFINE_CONSTANT(target, GL_COLOR_TABLE_ALPHA_SIZE);
    #endif

    #ifdef GL_COLOR_TABLE_LUMINANCE_SIZE
    NODE_DEFINE_CONSTANT(target, GL_COLOR_TABLE_LUMINANCE_SIZE);
    #endif

    #ifdef GL_COLOR_TABLE_INTENSITY_SIZE
    NODE_DEFINE_CONSTANT(target, GL_COLOR_TABLE_INTENSITY_SIZE);
    #endif

    #ifdef GL_CONVOLUTION_1D
    NODE_DEFINE_CONSTANT(target, GL_CONVOLUTION_1D);
    #endif

    #ifdef GL_CONVOLUTION_2D
    NODE_DEFINE_CONSTANT(target, GL_CONVOLUTION_2D);
    #endif

    #ifdef GL_SEPARABLE_2D
    NODE_DEFINE_CONSTANT(target, GL_SEPARABLE_2D);
    #endif

    #ifdef GL_CONVOLUTION_BORDER_MODE
    NODE_DEFINE_CONSTANT(target, GL_CONVOLUTION_BORDER_MODE);
    #endif

    #ifdef GL_CONVOLUTION_FILTER_SCALE
    NODE_DEFINE_CONSTANT(target, GL_CONVOLUTION_FILTER_SCALE);
    #endif

    #ifdef GL_CONVOLUTION_FILTER_BIAS
    NODE_DEFINE_CONSTANT(target, GL_CONVOLUTION_FILTER_BIAS);
    #endif

    #ifdef GL_REDUCE
    NODE_DEFINE_CONSTANT(target, GL_REDUCE);
    #endif

    #ifdef GL_CONVOLUTION_FORMAT
    NODE_DEFINE_CONSTANT(target, GL_CONVOLUTION_FORMAT);
    #endif

    #ifdef GL_CONVOLUTION_WIDTH
    NODE_DEFINE_CONSTANT(target, GL_CONVOLUTION_WIDTH);
    #endif

    #ifdef GL_CONVOLUTION_HEIGHT
    NODE_DEFINE_CONSTANT(target, GL_CONVOLUTION_HEIGHT);
    #endif

    #ifdef GL_MAX_CONVOLUTION_WIDTH
    NODE_DEFINE_CONSTANT(target, GL_MAX_CONVOLUTION_WIDTH);
    #endif

    #ifdef GL_MAX_CONVOLUTION_HEIGHT
    NODE_DEFINE_CONSTANT(target, GL_MAX_CONVOLUTION_HEIGHT);
    #endif

    #ifdef GL_POST_CONVOLUTION_RED_SCALE
    NODE_DEFINE_CONSTANT(target, GL_POST_CONVOLUTION_RED_SCALE);
    #endif

    #ifdef GL_POST_CONVOLUTION_GREEN_SCALE
    NODE_DEFINE_CONSTANT(target, GL_POST_CONVOLUTION_GREEN_SCALE);
    #endif

    #ifdef GL_POST_CONVOLUTION_BLUE_SCALE
    NODE_DEFINE_CONSTANT(target, GL_POST_CONVOLUTION_BLUE_SCALE);
    #endif

    #ifdef GL_POST_CONVOLUTION_ALPHA_SCALE
    NODE_DEFINE_CONSTANT(target, GL_POST_CONVOLUTION_ALPHA_SCALE);
    #endif

    #ifdef GL_POST_CONVOLUTION_RED_BIAS
    NODE_DEFINE_CONSTANT(target, GL_POST_CONVOLUTION_RED_BIAS);
    #endif

    #ifdef GL_POST_CONVOLUTION_GREEN_BIAS
    NODE_DEFINE_CONSTANT(target, GL_POST_CONVOLUTION_GREEN_BIAS);
    #endif

    #ifdef GL_POST_CONVOLUTION_BLUE_BIAS
    NODE_DEFINE_CONSTANT(target, GL_POST_CONVOLUTION_BLUE_BIAS);
    #endif

    #ifdef GL_POST_CONVOLUTION_ALPHA_BIAS
    NODE_DEFINE_CONSTANT(target, GL_POST_CONVOLUTION_ALPHA_BIAS);
    #endif

    #ifdef GL_CONSTANT_BORDER
    NODE_DEFINE_CONSTANT(target, GL_CONSTANT_BORDER);
    #endif

    #ifdef GL_REPLICATE_BORDER
    NODE_DEFINE_CONSTANT(target, GL_REPLICATE_BORDER);
    #endif

    #ifdef GL_CONVOLUTION_BORDER_COLOR
    NODE_DEFINE_CONSTANT(target, GL_CONVOLUTION_BORDER_COLOR);
    #endif

    #ifdef GL_MAX_ELEMENTS_VERTICES
    NODE_DEFINE_CONSTANT(target, GL_MAX_ELEMENTS_VERTICES);
    #endif

    #ifdef GL_MAX_ELEMENTS_INDICES
    NODE_DEFINE_CONSTANT(target, GL_MAX_ELEMENTS_INDICES);
    #endif

    #ifdef GL_HISTOGRAM
    NODE_DEFINE_CONSTANT(target, GL_HISTOGRAM);
    #endif

    #ifdef GL_PROXY_HISTOGRAM
    NODE_DEFINE_CONSTANT(target, GL_PROXY_HISTOGRAM);
    #endif

    #ifdef GL_HISTOGRAM_WIDTH
    NODE_DEFINE_CONSTANT(target, GL_HISTOGRAM_WIDTH);
    #endif

    #ifdef GL_HISTOGRAM_FORMAT
    NODE_DEFINE_CONSTANT(target, GL_HISTOGRAM_FORMAT);
    #endif

    #ifdef GL_HISTOGRAM_RED_SIZE
    NODE_DEFINE_CONSTANT(target, GL_HISTOGRAM_RED_SIZE);
    #endif

    #ifdef GL_HISTOGRAM_GREEN_SIZE
    NODE_DEFINE_CONSTANT(target, GL_HISTOGRAM_GREEN_SIZE);
    #endif

    #ifdef GL_HISTOGRAM_BLUE_SIZE
    NODE_DEFINE_CONSTANT(target, GL_HISTOGRAM_BLUE_SIZE);
    #endif

    #ifdef GL_HISTOGRAM_ALPHA_SIZE
    NODE_DEFINE_CONSTANT(target, GL_HISTOGRAM_ALPHA_SIZE);
    #endif

    #ifdef GL_HISTOGRAM_LUMINANCE_SIZE
    NODE_DEFINE_CONSTANT(target, GL_HISTOGRAM_LUMINANCE_SIZE);
    #endif

    #ifdef GL_HISTOGRAM_SINK
    NODE_DEFINE_CONSTANT(target, GL_HISTOGRAM_SINK);
    #endif

    #ifdef GL_MINMAX
    NODE_DEFINE_CONSTANT(target, GL_MINMAX);
    #endif

    #ifdef GL_MINMAX_FORMAT
    NODE_DEFINE_CONSTANT(target, GL_MINMAX_FORMAT);
    #endif

    #ifdef GL_MINMAX_SINK
    NODE_DEFINE_CONSTANT(target, GL_MINMAX_SINK);
    #endif

    #ifdef GL_TABLE_TOO_LARGE
    NODE_DEFINE_CONSTANT(target, GL_TABLE_TOO_LARGE);
    #endif

    #ifdef GL_UNSIGNED_BYTE_3_3_2
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_BYTE_3_3_2);
    #endif

    #ifdef GL_UNSIGNED_SHORT_4_4_4_4
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_SHORT_4_4_4_4);
    #endif

    #ifdef GL_UNSIGNED_SHORT_5_5_5_1
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_SHORT_5_5_5_1);
    #endif

    #ifdef GL_UNSIGNED_INT_8_8_8_8
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_INT_8_8_8_8);
    #endif

    #ifdef GL_UNSIGNED_INT_10_10_10_2
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_INT_10_10_10_2);
    #endif

    #ifdef GL_UNSIGNED_BYTE_2_3_3_REV
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_BYTE_2_3_3_REV);
    #endif

    #ifdef GL_UNSIGNED_SHORT_5_6_5
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_SHORT_5_6_5);
    #endif

    #ifdef GL_UNSIGNED_SHORT_5_6_5_REV
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_SHORT_5_6_5_REV);
    #endif

    #ifdef GL_UNSIGNED_SHORT_4_4_4_4_REV
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_SHORT_4_4_4_4_REV);
    #endif

    #ifdef GL_UNSIGNED_SHORT_1_5_5_5_REV
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_SHORT_1_5_5_5_REV);
    #endif

    #ifdef GL_UNSIGNED_INT_8_8_8_8_REV
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_INT_8_8_8_8_REV);
    #endif

    #ifdef GL_UNSIGNED_INT_2_10_10_10_REV
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_INT_2_10_10_10_REV);
    #endif

    #ifdef GL_RESCALE_NORMAL
    NODE_DEFINE_CONSTANT(target, GL_RESCALE_NORMAL);
    #endif

    #ifdef GL_LIGHT_MODEL_COLOR_CONTROL
    NODE_DEFINE_CONSTANT(target, GL_LIGHT_MODEL_COLOR_CONTROL);
    #endif

    #ifdef GL_SINGLE_COLOR
    NODE_DEFINE_CONSTANT(target, GL_SINGLE_COLOR);
    #endif

    #ifdef GL_SEPARATE_SPECULAR_COLOR
    NODE_DEFINE_CONSTANT(target, GL_SEPARATE_SPECULAR_COLOR);
    #endif

    #ifdef GL_PACK_SKIP_IMAGES
    NODE_DEFINE_CONSTANT(target, GL_PACK_SKIP_IMAGES);
    #endif

    #ifdef GL_PACK_IMAGE_HEIGHT
    NODE_DEFINE_CONSTANT(target, GL_PACK_IMAGE_HEIGHT);
    #endif

    #ifdef GL_UNPACK_SKIP_IMAGES
    NODE_DEFINE_CONSTANT(target, GL_UNPACK_SKIP_IMAGES);
    #endif

    #ifdef GL_UNPACK_IMAGE_HEIGHT
    NODE_DEFINE_CONSTANT(target, GL_UNPACK_IMAGE_HEIGHT);
    #endif

    #ifdef GL_TEXTURE_3D
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_3D);
    #endif

    #ifdef GL_PROXY_TEXTURE_3D
    NODE_DEFINE_CONSTANT(target, GL_PROXY_TEXTURE_3D);
    #endif

    #ifdef GL_TEXTURE_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_DEPTH);
    #endif

    #ifdef GL_TEXTURE_WRAP_R
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_WRAP_R);
    #endif

    #ifdef GL_MAX_3D_TEXTURE_SIZE
    NODE_DEFINE_CONSTANT(target, GL_MAX_3D_TEXTURE_SIZE);
    #endif

    #ifdef GL_CLAMP_TO_EDGE
    NODE_DEFINE_CONSTANT(target, GL_CLAMP_TO_EDGE);
    #endif

    #ifdef GL_CLAMP_TO_BORDER
    NODE_DEFINE_CONSTANT(target, GL_CLAMP_TO_BORDER);
    #endif

    #ifdef GL_TEXTURE_MIN_LOD
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_MIN_LOD);
    #endif

    #ifdef GL_TEXTURE_MAX_LOD
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_MAX_LOD);
    #endif

    #ifdef GL_TEXTURE_BASE_LEVEL
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_BASE_LEVEL);
    #endif

    #ifdef GL_TEXTURE_MAX_LEVEL
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_MAX_LEVEL);
    #endif

    #ifdef GL_SMOOTH_POINT_SIZE_RANGE
    NODE_DEFINE_CONSTANT(target, GL_SMOOTH_POINT_SIZE_RANGE);
    #endif

    #ifdef GL_SMOOTH_POINT_SIZE_GRANULARITY
    NODE_DEFINE_CONSTANT(target, GL_SMOOTH_POINT_SIZE_GRANULARITY);
    #endif

    #ifdef GL_SMOOTH_LINE_WIDTH_RANGE
    NODE_DEFINE_CONSTANT(target, GL_SMOOTH_LINE_WIDTH_RANGE);
    #endif

    #ifdef GL_SMOOTH_LINE_WIDTH_GRANULARITY
    NODE_DEFINE_CONSTANT(target, GL_SMOOTH_LINE_WIDTH_GRANULARITY);
    #endif

    #ifdef GL_ALIASED_POINT_SIZE_RANGE
    NODE_DEFINE_CONSTANT(target, GL_ALIASED_POINT_SIZE_RANGE);
    #endif

    #ifdef GL_ALIASED_LINE_WIDTH_RANGE
    NODE_DEFINE_CONSTANT(target, GL_ALIASED_LINE_WIDTH_RANGE);
    #endif

    #ifdef GL_TEXTURE0
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE0);
    #endif

    #ifdef GL_TEXTURE1
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE1);
    #endif

    #ifdef GL_TEXTURE2
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE2);
    #endif

    #ifdef GL_TEXTURE3
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE3);
    #endif

    #ifdef GL_TEXTURE4
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE4);
    #endif

    #ifdef GL_TEXTURE5
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE5);
    #endif

    #ifdef GL_TEXTURE6
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE6);
    #endif

    #ifdef GL_TEXTURE7
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE7);
    #endif

    #ifdef GL_TEXTURE8
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE8);
    #endif

    #ifdef GL_TEXTURE9
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE9);
    #endif

    #ifdef GL_TEXTURE10
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE10);
    #endif

    #ifdef GL_TEXTURE11
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE11);
    #endif

    #ifdef GL_TEXTURE12
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE12);
    #endif

    #ifdef GL_TEXTURE13
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE13);
    #endif

    #ifdef GL_TEXTURE14
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE14);
    #endif

    #ifdef GL_TEXTURE15
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE15);
    #endif

    #ifdef GL_TEXTURE16
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE16);
    #endif

    #ifdef GL_TEXTURE17
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE17);
    #endif

    #ifdef GL_TEXTURE18
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE18);
    #endif

    #ifdef GL_TEXTURE19
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE19);
    #endif

    #ifdef GL_TEXTURE20
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE20);
    #endif

    #ifdef GL_TEXTURE21
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE21);
    #endif

    #ifdef GL_TEXTURE22
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE22);
    #endif

    #ifdef GL_TEXTURE23
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE23);
    #endif

    #ifdef GL_TEXTURE24
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE24);
    #endif

    #ifdef GL_TEXTURE25
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE25);
    #endif

    #ifdef GL_TEXTURE26
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE26);
    #endif

    #ifdef GL_TEXTURE27
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE27);
    #endif

    #ifdef GL_TEXTURE28
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE28);
    #endif

    #ifdef GL_TEXTURE29
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE29);
    #endif

    #ifdef GL_TEXTURE30
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE30);
    #endif

    #ifdef GL_TEXTURE31
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE31);
    #endif

    #ifdef GL_ACTIVE_TEXTURE
    NODE_DEFINE_CONSTANT(target, GL_ACTIVE_TEXTURE);
    #endif

    #ifdef GL_CLIENT_ACTIVE_TEXTURE
    NODE_DEFINE_CONSTANT(target, GL_CLIENT_ACTIVE_TEXTURE);
    #endif

    #ifdef GL_MAX_TEXTURE_UNITS
    NODE_DEFINE_CONSTANT(target, GL_MAX_TEXTURE_UNITS);
    #endif

    #ifdef GL_COMBINE
    NODE_DEFINE_CONSTANT(target, GL_COMBINE);
    #endif

    #ifdef GL_COMBINE_RGB
    NODE_DEFINE_CONSTANT(target, GL_COMBINE_RGB);
    #endif

    #ifdef GL_COMBINE_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_COMBINE_ALPHA);
    #endif

    #ifdef GL_RGB_SCALE
    NODE_DEFINE_CONSTANT(target, GL_RGB_SCALE);
    #endif

    #ifdef GL_ADD_SIGNED
    NODE_DEFINE_CONSTANT(target, GL_ADD_SIGNED);
    #endif

    #ifdef GL_INTERPOLATE
    NODE_DEFINE_CONSTANT(target, GL_INTERPOLATE);
    #endif

    #ifdef GL_CONSTANT
    NODE_DEFINE_CONSTANT(target, GL_CONSTANT);
    #endif

    #ifdef GL_PRIMARY_COLOR
    NODE_DEFINE_CONSTANT(target, GL_PRIMARY_COLOR);
    #endif

    #ifdef GL_PREVIOUS
    NODE_DEFINE_CONSTANT(target, GL_PREVIOUS);
    #endif

    #ifdef GL_SUBTRACT
    NODE_DEFINE_CONSTANT(target, GL_SUBTRACT);
    #endif

    #ifdef GL_SRC0_RGB
    NODE_DEFINE_CONSTANT(target, GL_SRC0_RGB);
    #endif

    #ifdef GL_SRC1_RGB
    NODE_DEFINE_CONSTANT(target, GL_SRC1_RGB);
    #endif

    #ifdef GL_SRC2_RGB
    NODE_DEFINE_CONSTANT(target, GL_SRC2_RGB);
    #endif

    #ifdef GL_SRC3_RGB
    NODE_DEFINE_CONSTANT(target, GL_SRC3_RGB);
    #endif

    #ifdef GL_SRC4_RGB
    NODE_DEFINE_CONSTANT(target, GL_SRC4_RGB);
    #endif

    #ifdef GL_SRC5_RGB
    NODE_DEFINE_CONSTANT(target, GL_SRC5_RGB);
    #endif

    #ifdef GL_SRC6_RGB
    NODE_DEFINE_CONSTANT(target, GL_SRC6_RGB);
    #endif

    #ifdef GL_SRC7_RGB
    NODE_DEFINE_CONSTANT(target, GL_SRC7_RGB);
    #endif

    #ifdef GL_SRC0_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SRC0_ALPHA);
    #endif

    #ifdef GL_SRC1_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SRC1_ALPHA);
    #endif

    #ifdef GL_SRC2_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SRC2_ALPHA);
    #endif

    #ifdef GL_SRC3_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SRC3_ALPHA);
    #endif

    #ifdef GL_SRC4_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SRC4_ALPHA);
    #endif

    #ifdef GL_SRC5_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SRC5_ALPHA);
    #endif

    #ifdef GL_SRC6_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SRC6_ALPHA);
    #endif

    #ifdef GL_SRC7_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SRC7_ALPHA);
    #endif

    #ifdef GL_SOURCE0_RGB
    NODE_DEFINE_CONSTANT(target, GL_SOURCE0_RGB);
    #endif

    #ifdef GL_SOURCE1_RGB
    NODE_DEFINE_CONSTANT(target, GL_SOURCE1_RGB);
    #endif

    #ifdef GL_SOURCE2_RGB
    NODE_DEFINE_CONSTANT(target, GL_SOURCE2_RGB);
    #endif

    #ifdef GL_SOURCE3_RGB
    NODE_DEFINE_CONSTANT(target, GL_SOURCE3_RGB);
    #endif

    #ifdef GL_SOURCE4_RGB
    NODE_DEFINE_CONSTANT(target, GL_SOURCE4_RGB);
    #endif

    #ifdef GL_SOURCE5_RGB
    NODE_DEFINE_CONSTANT(target, GL_SOURCE5_RGB);
    #endif

    #ifdef GL_SOURCE6_RGB
    NODE_DEFINE_CONSTANT(target, GL_SOURCE6_RGB);
    #endif

    #ifdef GL_SOURCE7_RGB
    NODE_DEFINE_CONSTANT(target, GL_SOURCE7_RGB);
    #endif

    #ifdef GL_SOURCE0_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SOURCE0_ALPHA);
    #endif

    #ifdef GL_SOURCE1_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SOURCE1_ALPHA);
    #endif

    #ifdef GL_SOURCE2_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SOURCE2_ALPHA);
    #endif

    #ifdef GL_SOURCE3_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SOURCE3_ALPHA);
    #endif

    #ifdef GL_SOURCE4_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SOURCE4_ALPHA);
    #endif

    #ifdef GL_SOURCE5_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SOURCE5_ALPHA);
    #endif

    #ifdef GL_SOURCE6_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SOURCE6_ALPHA);
    #endif

    #ifdef GL_SOURCE7_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SOURCE7_ALPHA);
    #endif

    #ifdef GL_OPERAND0_RGB
    NODE_DEFINE_CONSTANT(target, GL_OPERAND0_RGB);
    #endif

    #ifdef GL_OPERAND1_RGB
    NODE_DEFINE_CONSTANT(target, GL_OPERAND1_RGB);
    #endif

    #ifdef GL_OPERAND2_RGB
    NODE_DEFINE_CONSTANT(target, GL_OPERAND2_RGB);
    #endif

    #ifdef GL_OPERAND3_RGB
    NODE_DEFINE_CONSTANT(target, GL_OPERAND3_RGB);
    #endif

    #ifdef GL_OPERAND4_RGB
    NODE_DEFINE_CONSTANT(target, GL_OPERAND4_RGB);
    #endif

    #ifdef GL_OPERAND5_RGB
    NODE_DEFINE_CONSTANT(target, GL_OPERAND5_RGB);
    #endif

    #ifdef GL_OPERAND6_RGB
    NODE_DEFINE_CONSTANT(target, GL_OPERAND6_RGB);
    #endif

    #ifdef GL_OPERAND7_RGB
    NODE_DEFINE_CONSTANT(target, GL_OPERAND7_RGB);
    #endif

    #ifdef GL_OPERAND0_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_OPERAND0_ALPHA);
    #endif

    #ifdef GL_OPERAND1_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_OPERAND1_ALPHA);
    #endif

    #ifdef GL_OPERAND2_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_OPERAND2_ALPHA);
    #endif

    #ifdef GL_OPERAND3_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_OPERAND3_ALPHA);
    #endif

    #ifdef GL_OPERAND4_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_OPERAND4_ALPHA);
    #endif

    #ifdef GL_OPERAND5_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_OPERAND5_ALPHA);
    #endif

    #ifdef GL_OPERAND6_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_OPERAND6_ALPHA);
    #endif

    #ifdef GL_OPERAND7_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_OPERAND7_ALPHA);
    #endif

    #ifdef GL_DOT3_RGB
    NODE_DEFINE_CONSTANT(target, GL_DOT3_RGB);
    #endif

    #ifdef GL_DOT3_RGBA
    NODE_DEFINE_CONSTANT(target, GL_DOT3_RGBA);
    #endif

    #ifdef GL_TRANSPOSE_MODELVIEW_MATRIX
    NODE_DEFINE_CONSTANT(target, GL_TRANSPOSE_MODELVIEW_MATRIX);
    #endif

    #ifdef GL_TRANSPOSE_PROJECTION_MATRIX
    NODE_DEFINE_CONSTANT(target, GL_TRANSPOSE_PROJECTION_MATRIX);
    #endif

    #ifdef GL_TRANSPOSE_TEXTURE_MATRIX
    NODE_DEFINE_CONSTANT(target, GL_TRANSPOSE_TEXTURE_MATRIX);
    #endif

    #ifdef GL_TRANSPOSE_COLOR_MATRIX
    NODE_DEFINE_CONSTANT(target, GL_TRANSPOSE_COLOR_MATRIX);
    #endif

    #ifdef GL_NORMAL_MAP
    NODE_DEFINE_CONSTANT(target, GL_NORMAL_MAP);
    #endif

    #ifdef GL_REFLECTION_MAP
    NODE_DEFINE_CONSTANT(target, GL_REFLECTION_MAP);
    #endif

    #ifdef GL_TEXTURE_CUBE_MAP
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_CUBE_MAP);
    #endif

    #ifdef GL_TEXTURE_BINDING_CUBE_MAP
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_BINDING_CUBE_MAP);
    #endif

    #ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_X
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_CUBE_MAP_POSITIVE_X);
    #endif

    #ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_X
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_CUBE_MAP_NEGATIVE_X);
    #endif

    #ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_Y
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_CUBE_MAP_POSITIVE_Y);
    #endif

    #ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_CUBE_MAP_NEGATIVE_Y);
    #endif

    #ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_Z
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_CUBE_MAP_POSITIVE_Z);
    #endif

    #ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_CUBE_MAP_NEGATIVE_Z);
    #endif

    #ifdef GL_PROXY_TEXTURE_CUBE_MAP
    NODE_DEFINE_CONSTANT(target, GL_PROXY_TEXTURE_CUBE_MAP);
    #endif

    #ifdef GL_MAX_CUBE_MAP_TEXTURE_SIZE
    NODE_DEFINE_CONSTANT(target, GL_MAX_CUBE_MAP_TEXTURE_SIZE);
    #endif

    #ifdef GL_COMPRESSED_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_COMPRESSED_ALPHA);
    #endif

    #ifdef GL_COMPRESSED_LUMINANCE
    NODE_DEFINE_CONSTANT(target, GL_COMPRESSED_LUMINANCE);
    #endif

    #ifdef GL_COMPRESSED_LUMINANCE_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_COMPRESSED_LUMINANCE_ALPHA);
    #endif

    #ifdef GL_COMPRESSED_INTENSITY
    NODE_DEFINE_CONSTANT(target, GL_COMPRESSED_INTENSITY);
    #endif

    #ifdef GL_COMPRESSED_RGB
    NODE_DEFINE_CONSTANT(target, GL_COMPRESSED_RGB);
    #endif

    #ifdef GL_COMPRESSED_RGBA
    NODE_DEFINE_CONSTANT(target, GL_COMPRESSED_RGBA);
    #endif

    #ifdef GL_TEXTURE_COMPRESSION_HINT
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_COMPRESSION_HINT);
    #endif

    #ifdef GL_TEXTURE_COMPRESSED_IMAGE_SIZE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_COMPRESSED_IMAGE_SIZE);
    #endif

    #ifdef GL_TEXTURE_COMPRESSED
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_COMPRESSED);
    #endif

    #ifdef GL_NUM_COMPRESSED_TEXTURE_FORMATS
    NODE_DEFINE_CONSTANT(target, GL_NUM_COMPRESSED_TEXTURE_FORMATS);
    #endif

    #ifdef GL_COMPRESSED_TEXTURE_FORMATS
    NODE_DEFINE_CONSTANT(target, GL_COMPRESSED_TEXTURE_FORMATS);
    #endif

    #ifdef GL_MULTISAMPLE
    NODE_DEFINE_CONSTANT(target, GL_MULTISAMPLE);
    #endif

    #ifdef GL_SAMPLE_ALPHA_TO_COVERAGE
    NODE_DEFINE_CONSTANT(target, GL_SAMPLE_ALPHA_TO_COVERAGE);
    #endif

    #ifdef GL_SAMPLE_ALPHA_TO_ONE
    NODE_DEFINE_CONSTANT(target, GL_SAMPLE_ALPHA_TO_ONE);
    #endif

    #ifdef GL_SAMPLE_COVERAGE
    NODE_DEFINE_CONSTANT(target, GL_SAMPLE_COVERAGE);
    #endif

    #ifdef GL_SAMPLE_BUFFERS
    NODE_DEFINE_CONSTANT(target, GL_SAMPLE_BUFFERS);
    #endif

    #ifdef GL_SAMPLES
    NODE_DEFINE_CONSTANT(target, GL_SAMPLES);
    #endif

    #ifdef GL_SAMPLE_COVERAGE_VALUE
    NODE_DEFINE_CONSTANT(target, GL_SAMPLE_COVERAGE_VALUE);
    #endif

    #ifdef GL_SAMPLE_COVERAGE_INVERT
    NODE_DEFINE_CONSTANT(target, GL_SAMPLE_COVERAGE_INVERT);
    #endif

    #ifdef GL_MULTISAMPLE_BIT
    NODE_DEFINE_CONSTANT(target, GL_MULTISAMPLE_BIT);
    #endif

    #ifdef GL_DEPTH_COMPONENT16
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_COMPONENT16);
    #endif

    #ifdef GL_DEPTH_COMPONENT24
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_COMPONENT24);
    #endif

    #ifdef GL_DEPTH_COMPONENT32
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_COMPONENT32);
    #endif

    #ifdef GL_TEXTURE_DEPTH_SIZE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_DEPTH_SIZE);
    #endif

    #ifdef GL_DEPTH_TEXTURE_MODE
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_TEXTURE_MODE);
    #endif

    #ifdef GL_TEXTURE_COMPARE_MODE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_COMPARE_MODE);
    #endif

    #ifdef GL_TEXTURE_COMPARE_FUNC
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_COMPARE_FUNC);
    #endif

    #ifdef GL_COMPARE_R_TO_TEXTURE
    NODE_DEFINE_CONSTANT(target, GL_COMPARE_R_TO_TEXTURE);
    #endif

    #ifdef GL_QUERY_COUNTER_BITS
    NODE_DEFINE_CONSTANT(target, GL_QUERY_COUNTER_BITS);
    #endif

    #ifdef GL_CURRENT_QUERY
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_QUERY);
    #endif

    #ifdef GL_QUERY_RESULT
    NODE_DEFINE_CONSTANT(target, GL_QUERY_RESULT);
    #endif

    #ifdef GL_QUERY_RESULT_AVAILABLE
    NODE_DEFINE_CONSTANT(target, GL_QUERY_RESULT_AVAILABLE);
    #endif

    #ifdef GL_SAMPLES_PASSED
    NODE_DEFINE_CONSTANT(target, GL_SAMPLES_PASSED);
    #endif

    #ifdef GL_FOG_COORD_SRC
    NODE_DEFINE_CONSTANT(target, GL_FOG_COORD_SRC);
    #endif

    #ifdef GL_FOG_COORD
    NODE_DEFINE_CONSTANT(target, GL_FOG_COORD);
    #endif

    #ifdef GL_FRAGMENT_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_FRAGMENT_DEPTH);
    #endif

    #ifdef GL_CURRENT_FOG_COORD
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_FOG_COORD);
    #endif

    #ifdef GL_FOG_COORD_ARRAY_TYPE
    NODE_DEFINE_CONSTANT(target, GL_FOG_COORD_ARRAY_TYPE);
    #endif

    #ifdef GL_FOG_COORD_ARRAY_STRIDE
    NODE_DEFINE_CONSTANT(target, GL_FOG_COORD_ARRAY_STRIDE);
    #endif

    #ifdef GL_FOG_COORD_ARRAY_POINTER
    NODE_DEFINE_CONSTANT(target, GL_FOG_COORD_ARRAY_POINTER);
    #endif

    #ifdef GL_FOG_COORD_ARRAY
    NODE_DEFINE_CONSTANT(target, GL_FOG_COORD_ARRAY);
    #endif

    #ifdef GL_FOG_COORDINATE_SOURCE
    NODE_DEFINE_CONSTANT(target, GL_FOG_COORDINATE_SOURCE);
    #endif

    #ifdef GL_FOG_COORDINATE
    NODE_DEFINE_CONSTANT(target, GL_FOG_COORDINATE);
    #endif

    #ifdef GL_CURRENT_FOG_COORDINATE
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_FOG_COORDINATE);
    #endif

    #ifdef GL_FOG_COORDINATE_ARRAY_TYPE
    NODE_DEFINE_CONSTANT(target, GL_FOG_COORDINATE_ARRAY_TYPE);
    #endif

    #ifdef GL_FOG_COORDINATE_ARRAY_STRIDE
    NODE_DEFINE_CONSTANT(target, GL_FOG_COORDINATE_ARRAY_STRIDE);
    #endif

    #ifdef GL_FOG_COORDINATE_ARRAY_POINTER
    NODE_DEFINE_CONSTANT(target, GL_FOG_COORDINATE_ARRAY_POINTER);
    #endif

    #ifdef GL_FOG_COORDINATE_ARRAY
    NODE_DEFINE_CONSTANT(target, GL_FOG_COORDINATE_ARRAY);
    #endif

    #ifdef GL_COLOR_SUM
    NODE_DEFINE_CONSTANT(target, GL_COLOR_SUM);
    #endif

    #ifdef GL_CURRENT_SECONDARY_COLOR
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_SECONDARY_COLOR);
    #endif

    #ifdef GL_SECONDARY_COLOR_ARRAY_SIZE
    NODE_DEFINE_CONSTANT(target, GL_SECONDARY_COLOR_ARRAY_SIZE);
    #endif

    #ifdef GL_SECONDARY_COLOR_ARRAY_TYPE
    NODE_DEFINE_CONSTANT(target, GL_SECONDARY_COLOR_ARRAY_TYPE);
    #endif

    #ifdef GL_SECONDARY_COLOR_ARRAY_STRIDE
    NODE_DEFINE_CONSTANT(target, GL_SECONDARY_COLOR_ARRAY_STRIDE);
    #endif

    #ifdef GL_SECONDARY_COLOR_ARRAY_POINTER
    NODE_DEFINE_CONSTANT(target, GL_SECONDARY_COLOR_ARRAY_POINTER);
    #endif

    #ifdef GL_SECONDARY_COLOR_ARRAY
    NODE_DEFINE_CONSTANT(target, GL_SECONDARY_COLOR_ARRAY);
    #endif

    #ifdef GL_POINT_SIZE_MIN
    NODE_DEFINE_CONSTANT(target, GL_POINT_SIZE_MIN);
    #endif

    #ifdef GL_POINT_SIZE_MAX
    NODE_DEFINE_CONSTANT(target, GL_POINT_SIZE_MAX);
    #endif

    #ifdef GL_POINT_FADE_THRESHOLD_SIZE
    NODE_DEFINE_CONSTANT(target, GL_POINT_FADE_THRESHOLD_SIZE);
    #endif

    #ifdef GL_POINT_DISTANCE_ATTENUATION
    NODE_DEFINE_CONSTANT(target, GL_POINT_DISTANCE_ATTENUATION);
    #endif

    #ifdef GL_BLEND_DST_RGB
    NODE_DEFINE_CONSTANT(target, GL_BLEND_DST_RGB);
    #endif

    #ifdef GL_BLEND_SRC_RGB
    NODE_DEFINE_CONSTANT(target, GL_BLEND_SRC_RGB);
    #endif

    #ifdef GL_BLEND_DST_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_BLEND_DST_ALPHA);
    #endif

    #ifdef GL_BLEND_SRC_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_BLEND_SRC_ALPHA);
    #endif

    #ifdef GL_GENERATE_MIPMAP
    NODE_DEFINE_CONSTANT(target, GL_GENERATE_MIPMAP);
    #endif

    #ifdef GL_GENERATE_MIPMAP_HINT
    NODE_DEFINE_CONSTANT(target, GL_GENERATE_MIPMAP_HINT);
    #endif

    #ifdef GL_INCR_WRAP
    NODE_DEFINE_CONSTANT(target, GL_INCR_WRAP);
    #endif

    #ifdef GL_DECR_WRAP
    NODE_DEFINE_CONSTANT(target, GL_DECR_WRAP);
    #endif

    #ifdef GL_MIRRORED_REPEAT
    NODE_DEFINE_CONSTANT(target, GL_MIRRORED_REPEAT);
    #endif

    #ifdef GL_MAX_TEXTURE_LOD_BIAS
    NODE_DEFINE_CONSTANT(target, GL_MAX_TEXTURE_LOD_BIAS);
    #endif

    #ifdef GL_TEXTURE_FILTER_CONTROL
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_FILTER_CONTROL);
    #endif

    #ifdef GL_TEXTURE_LOD_BIAS
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_LOD_BIAS);
    #endif

    #ifdef GL_ARRAY_BUFFER
    NODE_DEFINE_CONSTANT(target, GL_ARRAY_BUFFER);
    #endif

    #ifdef GL_ELEMENT_ARRAY_BUFFER
    NODE_DEFINE_CONSTANT(target, GL_ELEMENT_ARRAY_BUFFER);
    #endif

    #ifdef GL_ARRAY_BUFFER_BINDING
    NODE_DEFINE_CONSTANT(target, GL_ARRAY_BUFFER_BINDING);
    #endif

    #ifdef GL_ELEMENT_ARRAY_BUFFER_BINDING
    NODE_DEFINE_CONSTANT(target, GL_ELEMENT_ARRAY_BUFFER_BINDING);
    #endif

    #ifdef GL_VERTEX_ARRAY_BUFFER_BINDING
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_ARRAY_BUFFER_BINDING);
    #endif

    #ifdef GL_NORMAL_ARRAY_BUFFER_BINDING
    NODE_DEFINE_CONSTANT(target, GL_NORMAL_ARRAY_BUFFER_BINDING);
    #endif

    #ifdef GL_COLOR_ARRAY_BUFFER_BINDING
    NODE_DEFINE_CONSTANT(target, GL_COLOR_ARRAY_BUFFER_BINDING);
    #endif

    #ifdef GL_INDEX_ARRAY_BUFFER_BINDING
    NODE_DEFINE_CONSTANT(target, GL_INDEX_ARRAY_BUFFER_BINDING);
    #endif

    #ifdef GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING);
    #endif

    #ifdef GL_EDGE_FLAG_ARRAY_BUFFER_BINDING
    NODE_DEFINE_CONSTANT(target, GL_EDGE_FLAG_ARRAY_BUFFER_BINDING);
    #endif

    #ifdef GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING
    NODE_DEFINE_CONSTANT(target, GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING);
    #endif

    #ifdef GL_FOG_COORD_ARRAY_BUFFER_BINDING
    NODE_DEFINE_CONSTANT(target, GL_FOG_COORD_ARRAY_BUFFER_BINDING);
    #endif

    #ifdef GL_WEIGHT_ARRAY_BUFFER_BINDING
    NODE_DEFINE_CONSTANT(target, GL_WEIGHT_ARRAY_BUFFER_BINDING);
    #endif

    #ifdef GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING);
    #endif

    #ifdef GL_STREAM_DRAW
    NODE_DEFINE_CONSTANT(target, GL_STREAM_DRAW);
    #endif

    #ifdef GL_STREAM_READ
    NODE_DEFINE_CONSTANT(target, GL_STREAM_READ);
    #endif

    #ifdef GL_STREAM_COPY
    NODE_DEFINE_CONSTANT(target, GL_STREAM_COPY);
    #endif

    #ifdef GL_STATIC_DRAW
    NODE_DEFINE_CONSTANT(target, GL_STATIC_DRAW);
    #endif

    #ifdef GL_STATIC_READ
    NODE_DEFINE_CONSTANT(target, GL_STATIC_READ);
    #endif

    #ifdef GL_STATIC_COPY
    NODE_DEFINE_CONSTANT(target, GL_STATIC_COPY);
    #endif

    #ifdef GL_DYNAMIC_DRAW
    NODE_DEFINE_CONSTANT(target, GL_DYNAMIC_DRAW);
    #endif

    #ifdef GL_DYNAMIC_READ
    NODE_DEFINE_CONSTANT(target, GL_DYNAMIC_READ);
    #endif

    #ifdef GL_DYNAMIC_COPY
    NODE_DEFINE_CONSTANT(target, GL_DYNAMIC_COPY);
    #endif

    #ifdef GL_READ_ONLY
    NODE_DEFINE_CONSTANT(target, GL_READ_ONLY);
    #endif

    #ifdef GL_WRITE_ONLY
    NODE_DEFINE_CONSTANT(target, GL_WRITE_ONLY);
    #endif

    #ifdef GL_READ_WRITE
    NODE_DEFINE_CONSTANT(target, GL_READ_WRITE);
    #endif

    #ifdef GL_BUFFER_SIZE
    NODE_DEFINE_CONSTANT(target, GL_BUFFER_SIZE);
    #endif

    #ifdef GL_BUFFER_USAGE
    NODE_DEFINE_CONSTANT(target, GL_BUFFER_USAGE);
    #endif

    #ifdef GL_BUFFER_ACCESS
    NODE_DEFINE_CONSTANT(target, GL_BUFFER_ACCESS);
    #endif

    #ifdef GL_BUFFER_MAPPED
    NODE_DEFINE_CONSTANT(target, GL_BUFFER_MAPPED);
    #endif

    #ifdef GL_BUFFER_MAP_POINTER
    NODE_DEFINE_CONSTANT(target, GL_BUFFER_MAP_POINTER);
    #endif

    #ifdef GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING
    NODE_DEFINE_CONSTANT(target, GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING);
    #endif

    #ifdef GL_CURRENT_PROGRAM
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_PROGRAM);
    #endif

    #ifdef GL_SHADER_TYPE
    NODE_DEFINE_CONSTANT(target, GL_SHADER_TYPE);
    #endif

    #ifdef GL_DELETE_STATUS
    NODE_DEFINE_CONSTANT(target, GL_DELETE_STATUS);
    #endif

    #ifdef GL_COMPILE_STATUS
    NODE_DEFINE_CONSTANT(target, GL_COMPILE_STATUS);
    #endif

    #ifdef GL_LINK_STATUS
    NODE_DEFINE_CONSTANT(target, GL_LINK_STATUS);
    #endif

    #ifdef GL_VALIDATE_STATUS
    NODE_DEFINE_CONSTANT(target, GL_VALIDATE_STATUS);
    #endif

    #ifdef GL_INFO_LOG_LENGTH
    NODE_DEFINE_CONSTANT(target, GL_INFO_LOG_LENGTH);
    #endif

    #ifdef GL_ATTACHED_SHADERS
    NODE_DEFINE_CONSTANT(target, GL_ATTACHED_SHADERS);
    #endif

    #ifdef GL_ACTIVE_UNIFORMS
    NODE_DEFINE_CONSTANT(target, GL_ACTIVE_UNIFORMS);
    #endif

    #ifdef GL_ACTIVE_UNIFORM_MAX_LENGTH
    NODE_DEFINE_CONSTANT(target, GL_ACTIVE_UNIFORM_MAX_LENGTH);
    #endif

    #ifdef GL_SHADER_SOURCE_LENGTH
    NODE_DEFINE_CONSTANT(target, GL_SHADER_SOURCE_LENGTH);
    #endif

    #ifdef GL_FLOAT_VEC2
    NODE_DEFINE_CONSTANT(target, GL_FLOAT_VEC2);
    #endif

    #ifdef GL_FLOAT_VEC3
    NODE_DEFINE_CONSTANT(target, GL_FLOAT_VEC3);
    #endif

    #ifdef GL_FLOAT_VEC4
    NODE_DEFINE_CONSTANT(target, GL_FLOAT_VEC4);
    #endif

    #ifdef GL_INT_VEC2
    NODE_DEFINE_CONSTANT(target, GL_INT_VEC2);
    #endif

    #ifdef GL_INT_VEC3
    NODE_DEFINE_CONSTANT(target, GL_INT_VEC3);
    #endif

    #ifdef GL_INT_VEC4
    NODE_DEFINE_CONSTANT(target, GL_INT_VEC4);
    #endif

    #ifdef GL_BOOL
    NODE_DEFINE_CONSTANT(target, GL_BOOL);
    #endif

    #ifdef GL_BOOL_VEC2
    NODE_DEFINE_CONSTANT(target, GL_BOOL_VEC2);
    #endif

    #ifdef GL_BOOL_VEC3
    NODE_DEFINE_CONSTANT(target, GL_BOOL_VEC3);
    #endif

    #ifdef GL_BOOL_VEC4
    NODE_DEFINE_CONSTANT(target, GL_BOOL_VEC4);
    #endif

    #ifdef GL_FLOAT_MAT2
    NODE_DEFINE_CONSTANT(target, GL_FLOAT_MAT2);
    #endif

    #ifdef GL_FLOAT_MAT3
    NODE_DEFINE_CONSTANT(target, GL_FLOAT_MAT3);
    #endif

    #ifdef GL_FLOAT_MAT4
    NODE_DEFINE_CONSTANT(target, GL_FLOAT_MAT4);
    #endif

    #ifdef GL_SAMPLER_1D
    NODE_DEFINE_CONSTANT(target, GL_SAMPLER_1D);
    #endif

    #ifdef GL_SAMPLER_2D
    NODE_DEFINE_CONSTANT(target, GL_SAMPLER_2D);
    #endif

    #ifdef GL_SAMPLER_3D
    NODE_DEFINE_CONSTANT(target, GL_SAMPLER_3D);
    #endif

    #ifdef GL_SAMPLER_CUBE
    NODE_DEFINE_CONSTANT(target, GL_SAMPLER_CUBE);
    #endif

    #ifdef GL_SAMPLER_1D_SHADOW
    NODE_DEFINE_CONSTANT(target, GL_SAMPLER_1D_SHADOW);
    #endif

    #ifdef GL_SAMPLER_2D_SHADOW
    NODE_DEFINE_CONSTANT(target, GL_SAMPLER_2D_SHADOW);
    #endif

    #ifdef GL_SHADING_LANGUAGE_VERSION
    NODE_DEFINE_CONSTANT(target, GL_SHADING_LANGUAGE_VERSION);
    #endif

    #ifdef GL_VERTEX_SHADER
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_SHADER);
    #endif

    #ifdef GL_MAX_VERTEX_UNIFORM_COMPONENTS
    NODE_DEFINE_CONSTANT(target, GL_MAX_VERTEX_UNIFORM_COMPONENTS);
    #endif

    #ifdef GL_MAX_VARYING_FLOATS
    NODE_DEFINE_CONSTANT(target, GL_MAX_VARYING_FLOATS);
    #endif

    #ifdef GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS
    NODE_DEFINE_CONSTANT(target, GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS);
    #endif

    #ifdef GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS
    NODE_DEFINE_CONSTANT(target, GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS);
    #endif

    #ifdef GL_ACTIVE_ATTRIBUTES
    NODE_DEFINE_CONSTANT(target, GL_ACTIVE_ATTRIBUTES);
    #endif

    #ifdef GL_ACTIVE_ATTRIBUTE_MAX_LENGTH
    NODE_DEFINE_CONSTANT(target, GL_ACTIVE_ATTRIBUTE_MAX_LENGTH);
    #endif

    #ifdef GL_FRAGMENT_SHADER
    NODE_DEFINE_CONSTANT(target, GL_FRAGMENT_SHADER);
    #endif

    #ifdef GL_MAX_FRAGMENT_UNIFORM_COMPONENTS
    NODE_DEFINE_CONSTANT(target, GL_MAX_FRAGMENT_UNIFORM_COMPONENTS);
    #endif

    #ifdef GL_FRAGMENT_SHADER_DERIVATIVE_HINT
    NODE_DEFINE_CONSTANT(target, GL_FRAGMENT_SHADER_DERIVATIVE_HINT);
    #endif

    #ifdef GL_MAX_VERTEX_ATTRIBS
    NODE_DEFINE_CONSTANT(target, GL_MAX_VERTEX_ATTRIBS);
    #endif

    #ifdef GL_VERTEX_ATTRIB_ARRAY_ENABLED
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_ATTRIB_ARRAY_ENABLED);
    #endif

    #ifdef GL_VERTEX_ATTRIB_ARRAY_SIZE
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_ATTRIB_ARRAY_SIZE);
    #endif

    #ifdef GL_VERTEX_ATTRIB_ARRAY_STRIDE
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_ATTRIB_ARRAY_STRIDE);
    #endif

    #ifdef GL_VERTEX_ATTRIB_ARRAY_TYPE
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_ATTRIB_ARRAY_TYPE);
    #endif

    #ifdef GL_VERTEX_ATTRIB_ARRAY_NORMALIZED
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_ATTRIB_ARRAY_NORMALIZED);
    #endif

    #ifdef GL_CURRENT_VERTEX_ATTRIB
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_VERTEX_ATTRIB);
    #endif

    #ifdef GL_VERTEX_ATTRIB_ARRAY_POINTER
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_ATTRIB_ARRAY_POINTER);
    #endif

    #ifdef GL_VERTEX_PROGRAM_POINT_SIZE
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_PROGRAM_POINT_SIZE);
    #endif

    #ifdef GL_VERTEX_PROGRAM_TWO_SIDE
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_PROGRAM_TWO_SIDE);
    #endif

    #ifdef GL_MAX_TEXTURE_COORDS
    NODE_DEFINE_CONSTANT(target, GL_MAX_TEXTURE_COORDS);
    #endif

    #ifdef GL_MAX_TEXTURE_IMAGE_UNITS
    NODE_DEFINE_CONSTANT(target, GL_MAX_TEXTURE_IMAGE_UNITS);
    #endif

    #ifdef GL_MAX_DRAW_BUFFERS
    NODE_DEFINE_CONSTANT(target, GL_MAX_DRAW_BUFFERS);
    #endif

    #ifdef GL_DRAW_BUFFER0
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER0);
    #endif

    #ifdef GL_DRAW_BUFFER1
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER1);
    #endif

    #ifdef GL_DRAW_BUFFER2
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER2);
    #endif

    #ifdef GL_DRAW_BUFFER3
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER3);
    #endif

    #ifdef GL_DRAW_BUFFER4
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER4);
    #endif

    #ifdef GL_DRAW_BUFFER5
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER5);
    #endif

    #ifdef GL_DRAW_BUFFER6
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER6);
    #endif

    #ifdef GL_DRAW_BUFFER7
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER7);
    #endif

    #ifdef GL_DRAW_BUFFER8
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER8);
    #endif

    #ifdef GL_DRAW_BUFFER9
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER9);
    #endif

    #ifdef GL_DRAW_BUFFER10
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER10);
    #endif

    #ifdef GL_DRAW_BUFFER11
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER11);
    #endif

    #ifdef GL_DRAW_BUFFER12
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER12);
    #endif

    #ifdef GL_DRAW_BUFFER13
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER13);
    #endif

    #ifdef GL_DRAW_BUFFER14
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER14);
    #endif

    #ifdef GL_DRAW_BUFFER15
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER15);
    #endif

    #ifdef GL_POINT_SPRITE
    NODE_DEFINE_CONSTANT(target, GL_POINT_SPRITE);
    #endif

    #ifdef GL_COORD_REPLACE
    NODE_DEFINE_CONSTANT(target, GL_COORD_REPLACE);
    #endif

    #ifdef GL_POINT_SPRITE_COORD_ORIGIN
    NODE_DEFINE_CONSTANT(target, GL_POINT_SPRITE_COORD_ORIGIN);
    #endif

    #ifdef GL_LOWER_LEFT
    NODE_DEFINE_CONSTANT(target, GL_LOWER_LEFT);
    #endif

    #ifdef GL_UPPER_LEFT
    NODE_DEFINE_CONSTANT(target, GL_UPPER_LEFT);
    #endif

    #ifdef GL_STENCIL_BACK_FUNC
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_BACK_FUNC);
    #endif

    #ifdef GL_STENCIL_BACK_VALUE_MASK
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_BACK_VALUE_MASK);
    #endif

    #ifdef GL_STENCIL_BACK_REF
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_BACK_REF);
    #endif

    #ifdef GL_STENCIL_BACK_FAIL
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_BACK_FAIL);
    #endif

    #ifdef GL_STENCIL_BACK_PASS_DEPTH_FAIL
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_BACK_PASS_DEPTH_FAIL);
    #endif

    #ifdef GL_STENCIL_BACK_PASS_DEPTH_PASS
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_BACK_PASS_DEPTH_PASS);
    #endif

    #ifdef GL_STENCIL_BACK_WRITEMASK
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_BACK_WRITEMASK);
    #endif

    #ifdef GL_CURRENT_RASTER_SECONDARY_COLOR
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_SECONDARY_COLOR);
    #endif

    #ifdef GL_PIXEL_PACK_BUFFER
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_PACK_BUFFER);
    #endif

    #ifdef GL_PIXEL_UNPACK_BUFFER
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_UNPACK_BUFFER);
    #endif

    #ifdef GL_PIXEL_PACK_BUFFER_BINDING
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_PACK_BUFFER_BINDING);
    #endif

    #ifdef GL_PIXEL_UNPACK_BUFFER_BINDING
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_UNPACK_BUFFER_BINDING);
    #endif

    #ifdef GL_FLOAT_MAT2x3
    NODE_DEFINE_CONSTANT(target, GL_FLOAT_MAT2x3);
    #endif

    #ifdef GL_FLOAT_MAT2x4
    NODE_DEFINE_CONSTANT(target, GL_FLOAT_MAT2x4);
    #endif

    #ifdef GL_FLOAT_MAT3x2
    NODE_DEFINE_CONSTANT(target, GL_FLOAT_MAT3x2);
    #endif

    #ifdef GL_FLOAT_MAT3x4
    NODE_DEFINE_CONSTANT(target, GL_FLOAT_MAT3x4);
    #endif

    #ifdef GL_FLOAT_MAT4x2
    NODE_DEFINE_CONSTANT(target, GL_FLOAT_MAT4x2);
    #endif

    #ifdef GL_FLOAT_MAT4x3
    NODE_DEFINE_CONSTANT(target, GL_FLOAT_MAT4x3);
    #endif

    #ifdef GL_SRGB
    NODE_DEFINE_CONSTANT(target, GL_SRGB);
    #endif

    #ifdef GL_SRGB8
    NODE_DEFINE_CONSTANT(target, GL_SRGB8);
    #endif

    #ifdef GL_SRGB_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SRGB_ALPHA);
    #endif

    #ifdef GL_SRGB8_ALPHA8
    NODE_DEFINE_CONSTANT(target, GL_SRGB8_ALPHA8);
    #endif

    #ifdef GL_SLUMINANCE_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SLUMINANCE_ALPHA);
    #endif

    #ifdef GL_SLUMINANCE8_ALPHA8
    NODE_DEFINE_CONSTANT(target, GL_SLUMINANCE8_ALPHA8);
    #endif

    #ifdef GL_SLUMINANCE
    NODE_DEFINE_CONSTANT(target, GL_SLUMINANCE);
    #endif

    #ifdef GL_SLUMINANCE8
    NODE_DEFINE_CONSTANT(target, GL_SLUMINANCE8);
    #endif

    #ifdef GL_COMPRESSED_SRGB
    NODE_DEFINE_CONSTANT(target, GL_COMPRESSED_SRGB);
    #endif

    #ifdef GL_COMPRESSED_SRGB_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_COMPRESSED_SRGB_ALPHA);
    #endif

    #ifdef GL_COMPRESSED_SLUMINANCE
    NODE_DEFINE_CONSTANT(target, GL_COMPRESSED_SLUMINANCE);
    #endif

    #ifdef GL_COMPRESSED_SLUMINANCE_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_COMPRESSED_SLUMINANCE_ALPHA);
    #endif


    // Expose this classes methods to v8/javascript
    Local<FunctionTemplate> _gl_glActiveTextureARB = FunctionTemplate::New(gl_glActiveTextureARB);
    target->Set(String::New("glActiveTextureARB"), _gl_glActiveTextureARB->GetFunction());

    Local<FunctionTemplate> _gl_glClientActiveTextureARB = FunctionTemplate::New(gl_glClientActiveTextureARB);
    target->Set(String::New("glClientActiveTextureARB"), _gl_glClientActiveTextureARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord1dARB = FunctionTemplate::New(gl_glMultiTexCoord1dARB);
    target->Set(String::New("glMultiTexCoord1dARB"), _gl_glMultiTexCoord1dARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord1dvARB = FunctionTemplate::New(gl_glMultiTexCoord1dvARB);
    target->Set(String::New("glMultiTexCoord1dvARB"), _gl_glMultiTexCoord1dvARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord1fARB = FunctionTemplate::New(gl_glMultiTexCoord1fARB);
    target->Set(String::New("glMultiTexCoord1fARB"), _gl_glMultiTexCoord1fARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord1fvARB = FunctionTemplate::New(gl_glMultiTexCoord1fvARB);
    target->Set(String::New("glMultiTexCoord1fvARB"), _gl_glMultiTexCoord1fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord1iARB = FunctionTemplate::New(gl_glMultiTexCoord1iARB);
    target->Set(String::New("glMultiTexCoord1iARB"), _gl_glMultiTexCoord1iARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord1ivARB = FunctionTemplate::New(gl_glMultiTexCoord1ivARB);
    target->Set(String::New("glMultiTexCoord1ivARB"), _gl_glMultiTexCoord1ivARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord1sARB = FunctionTemplate::New(gl_glMultiTexCoord1sARB);
    target->Set(String::New("glMultiTexCoord1sARB"), _gl_glMultiTexCoord1sARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord1svARB = FunctionTemplate::New(gl_glMultiTexCoord1svARB);
    target->Set(String::New("glMultiTexCoord1svARB"), _gl_glMultiTexCoord1svARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord2dARB = FunctionTemplate::New(gl_glMultiTexCoord2dARB);
    target->Set(String::New("glMultiTexCoord2dARB"), _gl_glMultiTexCoord2dARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord2dvARB = FunctionTemplate::New(gl_glMultiTexCoord2dvARB);
    target->Set(String::New("glMultiTexCoord2dvARB"), _gl_glMultiTexCoord2dvARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord2fARB = FunctionTemplate::New(gl_glMultiTexCoord2fARB);
    target->Set(String::New("glMultiTexCoord2fARB"), _gl_glMultiTexCoord2fARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord2fvARB = FunctionTemplate::New(gl_glMultiTexCoord2fvARB);
    target->Set(String::New("glMultiTexCoord2fvARB"), _gl_glMultiTexCoord2fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord2iARB = FunctionTemplate::New(gl_glMultiTexCoord2iARB);
    target->Set(String::New("glMultiTexCoord2iARB"), _gl_glMultiTexCoord2iARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord2ivARB = FunctionTemplate::New(gl_glMultiTexCoord2ivARB);
    target->Set(String::New("glMultiTexCoord2ivARB"), _gl_glMultiTexCoord2ivARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord2sARB = FunctionTemplate::New(gl_glMultiTexCoord2sARB);
    target->Set(String::New("glMultiTexCoord2sARB"), _gl_glMultiTexCoord2sARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord2svARB = FunctionTemplate::New(gl_glMultiTexCoord2svARB);
    target->Set(String::New("glMultiTexCoord2svARB"), _gl_glMultiTexCoord2svARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord3dARB = FunctionTemplate::New(gl_glMultiTexCoord3dARB);
    target->Set(String::New("glMultiTexCoord3dARB"), _gl_glMultiTexCoord3dARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord3dvARB = FunctionTemplate::New(gl_glMultiTexCoord3dvARB);
    target->Set(String::New("glMultiTexCoord3dvARB"), _gl_glMultiTexCoord3dvARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord3fARB = FunctionTemplate::New(gl_glMultiTexCoord3fARB);
    target->Set(String::New("glMultiTexCoord3fARB"), _gl_glMultiTexCoord3fARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord3fvARB = FunctionTemplate::New(gl_glMultiTexCoord3fvARB);
    target->Set(String::New("glMultiTexCoord3fvARB"), _gl_glMultiTexCoord3fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord3iARB = FunctionTemplate::New(gl_glMultiTexCoord3iARB);
    target->Set(String::New("glMultiTexCoord3iARB"), _gl_glMultiTexCoord3iARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord3ivARB = FunctionTemplate::New(gl_glMultiTexCoord3ivARB);
    target->Set(String::New("glMultiTexCoord3ivARB"), _gl_glMultiTexCoord3ivARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord3sARB = FunctionTemplate::New(gl_glMultiTexCoord3sARB);
    target->Set(String::New("glMultiTexCoord3sARB"), _gl_glMultiTexCoord3sARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord3svARB = FunctionTemplate::New(gl_glMultiTexCoord3svARB);
    target->Set(String::New("glMultiTexCoord3svARB"), _gl_glMultiTexCoord3svARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord4dARB = FunctionTemplate::New(gl_glMultiTexCoord4dARB);
    target->Set(String::New("glMultiTexCoord4dARB"), _gl_glMultiTexCoord4dARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord4dvARB = FunctionTemplate::New(gl_glMultiTexCoord4dvARB);
    target->Set(String::New("glMultiTexCoord4dvARB"), _gl_glMultiTexCoord4dvARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord4fARB = FunctionTemplate::New(gl_glMultiTexCoord4fARB);
    target->Set(String::New("glMultiTexCoord4fARB"), _gl_glMultiTexCoord4fARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord4fvARB = FunctionTemplate::New(gl_glMultiTexCoord4fvARB);
    target->Set(String::New("glMultiTexCoord4fvARB"), _gl_glMultiTexCoord4fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord4iARB = FunctionTemplate::New(gl_glMultiTexCoord4iARB);
    target->Set(String::New("glMultiTexCoord4iARB"), _gl_glMultiTexCoord4iARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord4ivARB = FunctionTemplate::New(gl_glMultiTexCoord4ivARB);
    target->Set(String::New("glMultiTexCoord4ivARB"), _gl_glMultiTexCoord4ivARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord4sARB = FunctionTemplate::New(gl_glMultiTexCoord4sARB);
    target->Set(String::New("glMultiTexCoord4sARB"), _gl_glMultiTexCoord4sARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord4svARB = FunctionTemplate::New(gl_glMultiTexCoord4svARB);
    target->Set(String::New("glMultiTexCoord4svARB"), _gl_glMultiTexCoord4svARB->GetFunction());

    Local<FunctionTemplate> _gl_glLoadTransposeMatrixfARB = FunctionTemplate::New(gl_glLoadTransposeMatrixfARB);
    target->Set(String::New("glLoadTransposeMatrixfARB"), _gl_glLoadTransposeMatrixfARB->GetFunction());

    Local<FunctionTemplate> _gl_glLoadTransposeMatrixdARB = FunctionTemplate::New(gl_glLoadTransposeMatrixdARB);
    target->Set(String::New("glLoadTransposeMatrixdARB"), _gl_glLoadTransposeMatrixdARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultTransposeMatrixfARB = FunctionTemplate::New(gl_glMultTransposeMatrixfARB);
    target->Set(String::New("glMultTransposeMatrixfARB"), _gl_glMultTransposeMatrixfARB->GetFunction());

    Local<FunctionTemplate> _gl_glMultTransposeMatrixdARB = FunctionTemplate::New(gl_glMultTransposeMatrixdARB);
    target->Set(String::New("glMultTransposeMatrixdARB"), _gl_glMultTransposeMatrixdARB->GetFunction());

    Local<FunctionTemplate> _gl_glSampleCoverageARB = FunctionTemplate::New(gl_glSampleCoverageARB);
    target->Set(String::New("glSampleCoverageARB"), _gl_glSampleCoverageARB->GetFunction());

    Local<FunctionTemplate> _gl_glSamplePassARB = FunctionTemplate::New(gl_glSamplePassARB);
    target->Set(String::New("glSamplePassARB"), _gl_glSamplePassARB->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexImage3DARB = FunctionTemplate::New(gl_glCompressedTexImage3DARB);
    target->Set(String::New("glCompressedTexImage3DARB"), _gl_glCompressedTexImage3DARB->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexImage2DARB = FunctionTemplate::New(gl_glCompressedTexImage2DARB);
    target->Set(String::New("glCompressedTexImage2DARB"), _gl_glCompressedTexImage2DARB->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexImage1DARB = FunctionTemplate::New(gl_glCompressedTexImage1DARB);
    target->Set(String::New("glCompressedTexImage1DARB"), _gl_glCompressedTexImage1DARB->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexSubImage3DARB = FunctionTemplate::New(gl_glCompressedTexSubImage3DARB);
    target->Set(String::New("glCompressedTexSubImage3DARB"), _gl_glCompressedTexSubImage3DARB->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexSubImage2DARB = FunctionTemplate::New(gl_glCompressedTexSubImage2DARB);
    target->Set(String::New("glCompressedTexSubImage2DARB"), _gl_glCompressedTexSubImage2DARB->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexSubImage1DARB = FunctionTemplate::New(gl_glCompressedTexSubImage1DARB);
    target->Set(String::New("glCompressedTexSubImage1DARB"), _gl_glCompressedTexSubImage1DARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetCompressedTexImageARB = FunctionTemplate::New(gl_glGetCompressedTexImageARB);
    target->Set(String::New("glGetCompressedTexImageARB"), _gl_glGetCompressedTexImageARB->GetFunction());

    Local<FunctionTemplate> _gl_glWeightbvARB = FunctionTemplate::New(gl_glWeightbvARB);
    target->Set(String::New("glWeightbvARB"), _gl_glWeightbvARB->GetFunction());

    Local<FunctionTemplate> _gl_glWeightsvARB = FunctionTemplate::New(gl_glWeightsvARB);
    target->Set(String::New("glWeightsvARB"), _gl_glWeightsvARB->GetFunction());

    Local<FunctionTemplate> _gl_glWeightivARB = FunctionTemplate::New(gl_glWeightivARB);
    target->Set(String::New("glWeightivARB"), _gl_glWeightivARB->GetFunction());

    Local<FunctionTemplate> _gl_glWeightfvARB = FunctionTemplate::New(gl_glWeightfvARB);
    target->Set(String::New("glWeightfvARB"), _gl_glWeightfvARB->GetFunction());

    Local<FunctionTemplate> _gl_glWeightdvARB = FunctionTemplate::New(gl_glWeightdvARB);
    target->Set(String::New("glWeightdvARB"), _gl_glWeightdvARB->GetFunction());

    Local<FunctionTemplate> _gl_glWeightubvARB = FunctionTemplate::New(gl_glWeightubvARB);
    target->Set(String::New("glWeightubvARB"), _gl_glWeightubvARB->GetFunction());

    Local<FunctionTemplate> _gl_glWeightusvARB = FunctionTemplate::New(gl_glWeightusvARB);
    target->Set(String::New("glWeightusvARB"), _gl_glWeightusvARB->GetFunction());

    Local<FunctionTemplate> _gl_glWeightuivARB = FunctionTemplate::New(gl_glWeightuivARB);
    target->Set(String::New("glWeightuivARB"), _gl_glWeightuivARB->GetFunction());

    Local<FunctionTemplate> _gl_glWeightPointerARB = FunctionTemplate::New(gl_glWeightPointerARB);
    target->Set(String::New("glWeightPointerARB"), _gl_glWeightPointerARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexBlendARB = FunctionTemplate::New(gl_glVertexBlendARB);
    target->Set(String::New("glVertexBlendARB"), _gl_glVertexBlendARB->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos2dARB = FunctionTemplate::New(gl_glWindowPos2dARB);
    target->Set(String::New("glWindowPos2dARB"), _gl_glWindowPos2dARB->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos2dvARB = FunctionTemplate::New(gl_glWindowPos2dvARB);
    target->Set(String::New("glWindowPos2dvARB"), _gl_glWindowPos2dvARB->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos2fARB = FunctionTemplate::New(gl_glWindowPos2fARB);
    target->Set(String::New("glWindowPos2fARB"), _gl_glWindowPos2fARB->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos2fvARB = FunctionTemplate::New(gl_glWindowPos2fvARB);
    target->Set(String::New("glWindowPos2fvARB"), _gl_glWindowPos2fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos2iARB = FunctionTemplate::New(gl_glWindowPos2iARB);
    target->Set(String::New("glWindowPos2iARB"), _gl_glWindowPos2iARB->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos2ivARB = FunctionTemplate::New(gl_glWindowPos2ivARB);
    target->Set(String::New("glWindowPos2ivARB"), _gl_glWindowPos2ivARB->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos2sARB = FunctionTemplate::New(gl_glWindowPos2sARB);
    target->Set(String::New("glWindowPos2sARB"), _gl_glWindowPos2sARB->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos2svARB = FunctionTemplate::New(gl_glWindowPos2svARB);
    target->Set(String::New("glWindowPos2svARB"), _gl_glWindowPos2svARB->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos3dARB = FunctionTemplate::New(gl_glWindowPos3dARB);
    target->Set(String::New("glWindowPos3dARB"), _gl_glWindowPos3dARB->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos3dvARB = FunctionTemplate::New(gl_glWindowPos3dvARB);
    target->Set(String::New("glWindowPos3dvARB"), _gl_glWindowPos3dvARB->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos3fARB = FunctionTemplate::New(gl_glWindowPos3fARB);
    target->Set(String::New("glWindowPos3fARB"), _gl_glWindowPos3fARB->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos3fvARB = FunctionTemplate::New(gl_glWindowPos3fvARB);
    target->Set(String::New("glWindowPos3fvARB"), _gl_glWindowPos3fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos3iARB = FunctionTemplate::New(gl_glWindowPos3iARB);
    target->Set(String::New("glWindowPos3iARB"), _gl_glWindowPos3iARB->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos3ivARB = FunctionTemplate::New(gl_glWindowPos3ivARB);
    target->Set(String::New("glWindowPos3ivARB"), _gl_glWindowPos3ivARB->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos3sARB = FunctionTemplate::New(gl_glWindowPos3sARB);
    target->Set(String::New("glWindowPos3sARB"), _gl_glWindowPos3sARB->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos3svARB = FunctionTemplate::New(gl_glWindowPos3svARB);
    target->Set(String::New("glWindowPos3svARB"), _gl_glWindowPos3svARB->GetFunction());

    Local<FunctionTemplate> _gl_glGenQueriesARB = FunctionTemplate::New(gl_glGenQueriesARB);
    target->Set(String::New("glGenQueriesARB"), _gl_glGenQueriesARB->GetFunction());

    Local<FunctionTemplate> _gl_glDeleteQueriesARB = FunctionTemplate::New(gl_glDeleteQueriesARB);
    target->Set(String::New("glDeleteQueriesARB"), _gl_glDeleteQueriesARB->GetFunction());

    Local<FunctionTemplate> _gl_glIsQueryARB = FunctionTemplate::New(gl_glIsQueryARB);
    target->Set(String::New("glIsQueryARB"), _gl_glIsQueryARB->GetFunction());

    Local<FunctionTemplate> _gl_glBeginQueryARB = FunctionTemplate::New(gl_glBeginQueryARB);
    target->Set(String::New("glBeginQueryARB"), _gl_glBeginQueryARB->GetFunction());

    Local<FunctionTemplate> _gl_glEndQueryARB = FunctionTemplate::New(gl_glEndQueryARB);
    target->Set(String::New("glEndQueryARB"), _gl_glEndQueryARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetQueryivARB = FunctionTemplate::New(gl_glGetQueryivARB);
    target->Set(String::New("glGetQueryivARB"), _gl_glGetQueryivARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetQueryObjectivARB = FunctionTemplate::New(gl_glGetQueryObjectivARB);
    target->Set(String::New("glGetQueryObjectivARB"), _gl_glGetQueryObjectivARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetQueryObjectuivARB = FunctionTemplate::New(gl_glGetQueryObjectuivARB);
    target->Set(String::New("glGetQueryObjectuivARB"), _gl_glGetQueryObjectuivARB->GetFunction());

    Local<FunctionTemplate> _gl_glPointParameterfARB = FunctionTemplate::New(gl_glPointParameterfARB);
    target->Set(String::New("glPointParameterfARB"), _gl_glPointParameterfARB->GetFunction());

    Local<FunctionTemplate> _gl_glPointParameterfvARB = FunctionTemplate::New(gl_glPointParameterfvARB);
    target->Set(String::New("glPointParameterfvARB"), _gl_glPointParameterfvARB->GetFunction());

    Local<FunctionTemplate> _gl_glBindProgramARB = FunctionTemplate::New(gl_glBindProgramARB);
    target->Set(String::New("glBindProgramARB"), _gl_glBindProgramARB->GetFunction());

    Local<FunctionTemplate> _gl_glDeleteProgramsARB = FunctionTemplate::New(gl_glDeleteProgramsARB);
    target->Set(String::New("glDeleteProgramsARB"), _gl_glDeleteProgramsARB->GetFunction());

    Local<FunctionTemplate> _gl_glGenProgramsARB = FunctionTemplate::New(gl_glGenProgramsARB);
    target->Set(String::New("glGenProgramsARB"), _gl_glGenProgramsARB->GetFunction());

    Local<FunctionTemplate> _gl_glIsProgramARB = FunctionTemplate::New(gl_glIsProgramARB);
    target->Set(String::New("glIsProgramARB"), _gl_glIsProgramARB->GetFunction());

    Local<FunctionTemplate> _gl_glProgramEnvParameter4dARB = FunctionTemplate::New(gl_glProgramEnvParameter4dARB);
    target->Set(String::New("glProgramEnvParameter4dARB"), _gl_glProgramEnvParameter4dARB->GetFunction());

    Local<FunctionTemplate> _gl_glProgramEnvParameter4dvARB = FunctionTemplate::New(gl_glProgramEnvParameter4dvARB);
    target->Set(String::New("glProgramEnvParameter4dvARB"), _gl_glProgramEnvParameter4dvARB->GetFunction());

    Local<FunctionTemplate> _gl_glProgramEnvParameter4fARB = FunctionTemplate::New(gl_glProgramEnvParameter4fARB);
    target->Set(String::New("glProgramEnvParameter4fARB"), _gl_glProgramEnvParameter4fARB->GetFunction());

    Local<FunctionTemplate> _gl_glProgramEnvParameter4fvARB = FunctionTemplate::New(gl_glProgramEnvParameter4fvARB);
    target->Set(String::New("glProgramEnvParameter4fvARB"), _gl_glProgramEnvParameter4fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glProgramLocalParameter4dARB = FunctionTemplate::New(gl_glProgramLocalParameter4dARB);
    target->Set(String::New("glProgramLocalParameter4dARB"), _gl_glProgramLocalParameter4dARB->GetFunction());

    Local<FunctionTemplate> _gl_glProgramLocalParameter4dvARB = FunctionTemplate::New(gl_glProgramLocalParameter4dvARB);
    target->Set(String::New("glProgramLocalParameter4dvARB"), _gl_glProgramLocalParameter4dvARB->GetFunction());

    Local<FunctionTemplate> _gl_glProgramLocalParameter4fARB = FunctionTemplate::New(gl_glProgramLocalParameter4fARB);
    target->Set(String::New("glProgramLocalParameter4fARB"), _gl_glProgramLocalParameter4fARB->GetFunction());

    Local<FunctionTemplate> _gl_glProgramLocalParameter4fvARB = FunctionTemplate::New(gl_glProgramLocalParameter4fvARB);
    target->Set(String::New("glProgramLocalParameter4fvARB"), _gl_glProgramLocalParameter4fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetProgramEnvParameterdvARB = FunctionTemplate::New(gl_glGetProgramEnvParameterdvARB);
    target->Set(String::New("glGetProgramEnvParameterdvARB"), _gl_glGetProgramEnvParameterdvARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetProgramEnvParameterfvARB = FunctionTemplate::New(gl_glGetProgramEnvParameterfvARB);
    target->Set(String::New("glGetProgramEnvParameterfvARB"), _gl_glGetProgramEnvParameterfvARB->GetFunction());

    Local<FunctionTemplate> _gl_glProgramEnvParameters4fvEXT = FunctionTemplate::New(gl_glProgramEnvParameters4fvEXT);
    target->Set(String::New("glProgramEnvParameters4fvEXT"), _gl_glProgramEnvParameters4fvEXT->GetFunction());

    Local<FunctionTemplate> _gl_glProgramLocalParameters4fvEXT = FunctionTemplate::New(gl_glProgramLocalParameters4fvEXT);
    target->Set(String::New("glProgramLocalParameters4fvEXT"), _gl_glProgramLocalParameters4fvEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGetProgramLocalParameterdvARB = FunctionTemplate::New(gl_glGetProgramLocalParameterdvARB);
    target->Set(String::New("glGetProgramLocalParameterdvARB"), _gl_glGetProgramLocalParameterdvARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetProgramLocalParameterfvARB = FunctionTemplate::New(gl_glGetProgramLocalParameterfvARB);
    target->Set(String::New("glGetProgramLocalParameterfvARB"), _gl_glGetProgramLocalParameterfvARB->GetFunction());

    Local<FunctionTemplate> _gl_glProgramStringARB = FunctionTemplate::New(gl_glProgramStringARB);
    target->Set(String::New("glProgramStringARB"), _gl_glProgramStringARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetProgramStringARB = FunctionTemplate::New(gl_glGetProgramStringARB);
    target->Set(String::New("glGetProgramStringARB"), _gl_glGetProgramStringARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetProgramivARB = FunctionTemplate::New(gl_glGetProgramivARB);
    target->Set(String::New("glGetProgramivARB"), _gl_glGetProgramivARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib1dARB = FunctionTemplate::New(gl_glVertexAttrib1dARB);
    target->Set(String::New("glVertexAttrib1dARB"), _gl_glVertexAttrib1dARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib1dvARB = FunctionTemplate::New(gl_glVertexAttrib1dvARB);
    target->Set(String::New("glVertexAttrib1dvARB"), _gl_glVertexAttrib1dvARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib1fARB = FunctionTemplate::New(gl_glVertexAttrib1fARB);
    target->Set(String::New("glVertexAttrib1fARB"), _gl_glVertexAttrib1fARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib1fvARB = FunctionTemplate::New(gl_glVertexAttrib1fvARB);
    target->Set(String::New("glVertexAttrib1fvARB"), _gl_glVertexAttrib1fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib1sARB = FunctionTemplate::New(gl_glVertexAttrib1sARB);
    target->Set(String::New("glVertexAttrib1sARB"), _gl_glVertexAttrib1sARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib1svARB = FunctionTemplate::New(gl_glVertexAttrib1svARB);
    target->Set(String::New("glVertexAttrib1svARB"), _gl_glVertexAttrib1svARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib2dARB = FunctionTemplate::New(gl_glVertexAttrib2dARB);
    target->Set(String::New("glVertexAttrib2dARB"), _gl_glVertexAttrib2dARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib2dvARB = FunctionTemplate::New(gl_glVertexAttrib2dvARB);
    target->Set(String::New("glVertexAttrib2dvARB"), _gl_glVertexAttrib2dvARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib2fARB = FunctionTemplate::New(gl_glVertexAttrib2fARB);
    target->Set(String::New("glVertexAttrib2fARB"), _gl_glVertexAttrib2fARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib2fvARB = FunctionTemplate::New(gl_glVertexAttrib2fvARB);
    target->Set(String::New("glVertexAttrib2fvARB"), _gl_glVertexAttrib2fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib2sARB = FunctionTemplate::New(gl_glVertexAttrib2sARB);
    target->Set(String::New("glVertexAttrib2sARB"), _gl_glVertexAttrib2sARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib2svARB = FunctionTemplate::New(gl_glVertexAttrib2svARB);
    target->Set(String::New("glVertexAttrib2svARB"), _gl_glVertexAttrib2svARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib3dARB = FunctionTemplate::New(gl_glVertexAttrib3dARB);
    target->Set(String::New("glVertexAttrib3dARB"), _gl_glVertexAttrib3dARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib3dvARB = FunctionTemplate::New(gl_glVertexAttrib3dvARB);
    target->Set(String::New("glVertexAttrib3dvARB"), _gl_glVertexAttrib3dvARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib3fARB = FunctionTemplate::New(gl_glVertexAttrib3fARB);
    target->Set(String::New("glVertexAttrib3fARB"), _gl_glVertexAttrib3fARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib3fvARB = FunctionTemplate::New(gl_glVertexAttrib3fvARB);
    target->Set(String::New("glVertexAttrib3fvARB"), _gl_glVertexAttrib3fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib3sARB = FunctionTemplate::New(gl_glVertexAttrib3sARB);
    target->Set(String::New("glVertexAttrib3sARB"), _gl_glVertexAttrib3sARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib3svARB = FunctionTemplate::New(gl_glVertexAttrib3svARB);
    target->Set(String::New("glVertexAttrib3svARB"), _gl_glVertexAttrib3svARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4NbvARB = FunctionTemplate::New(gl_glVertexAttrib4NbvARB);
    target->Set(String::New("glVertexAttrib4NbvARB"), _gl_glVertexAttrib4NbvARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4NivARB = FunctionTemplate::New(gl_glVertexAttrib4NivARB);
    target->Set(String::New("glVertexAttrib4NivARB"), _gl_glVertexAttrib4NivARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4NsvARB = FunctionTemplate::New(gl_glVertexAttrib4NsvARB);
    target->Set(String::New("glVertexAttrib4NsvARB"), _gl_glVertexAttrib4NsvARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4NubARB = FunctionTemplate::New(gl_glVertexAttrib4NubARB);
    target->Set(String::New("glVertexAttrib4NubARB"), _gl_glVertexAttrib4NubARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4NubvARB = FunctionTemplate::New(gl_glVertexAttrib4NubvARB);
    target->Set(String::New("glVertexAttrib4NubvARB"), _gl_glVertexAttrib4NubvARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4NuivARB = FunctionTemplate::New(gl_glVertexAttrib4NuivARB);
    target->Set(String::New("glVertexAttrib4NuivARB"), _gl_glVertexAttrib4NuivARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4NusvARB = FunctionTemplate::New(gl_glVertexAttrib4NusvARB);
    target->Set(String::New("glVertexAttrib4NusvARB"), _gl_glVertexAttrib4NusvARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4bvARB = FunctionTemplate::New(gl_glVertexAttrib4bvARB);
    target->Set(String::New("glVertexAttrib4bvARB"), _gl_glVertexAttrib4bvARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4dARB = FunctionTemplate::New(gl_glVertexAttrib4dARB);
    target->Set(String::New("glVertexAttrib4dARB"), _gl_glVertexAttrib4dARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4dvARB = FunctionTemplate::New(gl_glVertexAttrib4dvARB);
    target->Set(String::New("glVertexAttrib4dvARB"), _gl_glVertexAttrib4dvARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4fARB = FunctionTemplate::New(gl_glVertexAttrib4fARB);
    target->Set(String::New("glVertexAttrib4fARB"), _gl_glVertexAttrib4fARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4fvARB = FunctionTemplate::New(gl_glVertexAttrib4fvARB);
    target->Set(String::New("glVertexAttrib4fvARB"), _gl_glVertexAttrib4fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4ivARB = FunctionTemplate::New(gl_glVertexAttrib4ivARB);
    target->Set(String::New("glVertexAttrib4ivARB"), _gl_glVertexAttrib4ivARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4sARB = FunctionTemplate::New(gl_glVertexAttrib4sARB);
    target->Set(String::New("glVertexAttrib4sARB"), _gl_glVertexAttrib4sARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4svARB = FunctionTemplate::New(gl_glVertexAttrib4svARB);
    target->Set(String::New("glVertexAttrib4svARB"), _gl_glVertexAttrib4svARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4ubvARB = FunctionTemplate::New(gl_glVertexAttrib4ubvARB);
    target->Set(String::New("glVertexAttrib4ubvARB"), _gl_glVertexAttrib4ubvARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4uivARB = FunctionTemplate::New(gl_glVertexAttrib4uivARB);
    target->Set(String::New("glVertexAttrib4uivARB"), _gl_glVertexAttrib4uivARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4usvARB = FunctionTemplate::New(gl_glVertexAttrib4usvARB);
    target->Set(String::New("glVertexAttrib4usvARB"), _gl_glVertexAttrib4usvARB->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribPointerARB = FunctionTemplate::New(gl_glVertexAttribPointerARB);
    target->Set(String::New("glVertexAttribPointerARB"), _gl_glVertexAttribPointerARB->GetFunction());

    Local<FunctionTemplate> _gl_glDisableVertexAttribArrayARB = FunctionTemplate::New(gl_glDisableVertexAttribArrayARB);
    target->Set(String::New("glDisableVertexAttribArrayARB"), _gl_glDisableVertexAttribArrayARB->GetFunction());

    Local<FunctionTemplate> _gl_glEnableVertexAttribArrayARB = FunctionTemplate::New(gl_glEnableVertexAttribArrayARB);
    target->Set(String::New("glEnableVertexAttribArrayARB"), _gl_glEnableVertexAttribArrayARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetVertexAttribPointervARB = FunctionTemplate::New(gl_glGetVertexAttribPointervARB);
    target->Set(String::New("glGetVertexAttribPointervARB"), _gl_glGetVertexAttribPointervARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetVertexAttribdvARB = FunctionTemplate::New(gl_glGetVertexAttribdvARB);
    target->Set(String::New("glGetVertexAttribdvARB"), _gl_glGetVertexAttribdvARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetVertexAttribfvARB = FunctionTemplate::New(gl_glGetVertexAttribfvARB);
    target->Set(String::New("glGetVertexAttribfvARB"), _gl_glGetVertexAttribfvARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetVertexAttribivARB = FunctionTemplate::New(gl_glGetVertexAttribivARB);
    target->Set(String::New("glGetVertexAttribivARB"), _gl_glGetVertexAttribivARB->GetFunction());

    Local<FunctionTemplate> _gl_glDeleteObjectARB = FunctionTemplate::New(gl_glDeleteObjectARB);
    target->Set(String::New("glDeleteObjectARB"), _gl_glDeleteObjectARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetHandleARB = FunctionTemplate::New(gl_glGetHandleARB);
    target->Set(String::New("glGetHandleARB"), _gl_glGetHandleARB->GetFunction());

    Local<FunctionTemplate> _gl_glDetachObjectARB = FunctionTemplate::New(gl_glDetachObjectARB);
    target->Set(String::New("glDetachObjectARB"), _gl_glDetachObjectARB->GetFunction());

    Local<FunctionTemplate> _gl_glCreateShaderObjectARB = FunctionTemplate::New(gl_glCreateShaderObjectARB);
    target->Set(String::New("glCreateShaderObjectARB"), _gl_glCreateShaderObjectARB->GetFunction());

    Local<FunctionTemplate> _gl_glShaderSourceARB = FunctionTemplate::New(gl_glShaderSourceARB);
    target->Set(String::New("glShaderSourceARB"), _gl_glShaderSourceARB->GetFunction());

    Local<FunctionTemplate> _gl_glCompileShaderARB = FunctionTemplate::New(gl_glCompileShaderARB);
    target->Set(String::New("glCompileShaderARB"), _gl_glCompileShaderARB->GetFunction());

    Local<FunctionTemplate> _gl_glCreateProgramObjectARB = FunctionTemplate::New(gl_glCreateProgramObjectARB);
    target->Set(String::New("glCreateProgramObjectARB"), _gl_glCreateProgramObjectARB->GetFunction());

    Local<FunctionTemplate> _gl_glAttachObjectARB = FunctionTemplate::New(gl_glAttachObjectARB);
    target->Set(String::New("glAttachObjectARB"), _gl_glAttachObjectARB->GetFunction());

    Local<FunctionTemplate> _gl_glLinkProgramARB = FunctionTemplate::New(gl_glLinkProgramARB);
    target->Set(String::New("glLinkProgramARB"), _gl_glLinkProgramARB->GetFunction());

    Local<FunctionTemplate> _gl_glUseProgramObjectARB = FunctionTemplate::New(gl_glUseProgramObjectARB);
    target->Set(String::New("glUseProgramObjectARB"), _gl_glUseProgramObjectARB->GetFunction());

    Local<FunctionTemplate> _gl_glValidateProgramARB = FunctionTemplate::New(gl_glValidateProgramARB);
    target->Set(String::New("glValidateProgramARB"), _gl_glValidateProgramARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniform1fARB = FunctionTemplate::New(gl_glUniform1fARB);
    target->Set(String::New("glUniform1fARB"), _gl_glUniform1fARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniform2fARB = FunctionTemplate::New(gl_glUniform2fARB);
    target->Set(String::New("glUniform2fARB"), _gl_glUniform2fARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniform3fARB = FunctionTemplate::New(gl_glUniform3fARB);
    target->Set(String::New("glUniform3fARB"), _gl_glUniform3fARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniform4fARB = FunctionTemplate::New(gl_glUniform4fARB);
    target->Set(String::New("glUniform4fARB"), _gl_glUniform4fARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniform1iARB = FunctionTemplate::New(gl_glUniform1iARB);
    target->Set(String::New("glUniform1iARB"), _gl_glUniform1iARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniform2iARB = FunctionTemplate::New(gl_glUniform2iARB);
    target->Set(String::New("glUniform2iARB"), _gl_glUniform2iARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniform3iARB = FunctionTemplate::New(gl_glUniform3iARB);
    target->Set(String::New("glUniform3iARB"), _gl_glUniform3iARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniform4iARB = FunctionTemplate::New(gl_glUniform4iARB);
    target->Set(String::New("glUniform4iARB"), _gl_glUniform4iARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniform1fvARB = FunctionTemplate::New(gl_glUniform1fvARB);
    target->Set(String::New("glUniform1fvARB"), _gl_glUniform1fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniform2fvARB = FunctionTemplate::New(gl_glUniform2fvARB);
    target->Set(String::New("glUniform2fvARB"), _gl_glUniform2fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniform3fvARB = FunctionTemplate::New(gl_glUniform3fvARB);
    target->Set(String::New("glUniform3fvARB"), _gl_glUniform3fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniform4fvARB = FunctionTemplate::New(gl_glUniform4fvARB);
    target->Set(String::New("glUniform4fvARB"), _gl_glUniform4fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniform1ivARB = FunctionTemplate::New(gl_glUniform1ivARB);
    target->Set(String::New("glUniform1ivARB"), _gl_glUniform1ivARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniform2ivARB = FunctionTemplate::New(gl_glUniform2ivARB);
    target->Set(String::New("glUniform2ivARB"), _gl_glUniform2ivARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniform3ivARB = FunctionTemplate::New(gl_glUniform3ivARB);
    target->Set(String::New("glUniform3ivARB"), _gl_glUniform3ivARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniform4ivARB = FunctionTemplate::New(gl_glUniform4ivARB);
    target->Set(String::New("glUniform4ivARB"), _gl_glUniform4ivARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniformMatrix2fvARB = FunctionTemplate::New(gl_glUniformMatrix2fvARB);
    target->Set(String::New("glUniformMatrix2fvARB"), _gl_glUniformMatrix2fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniformMatrix3fvARB = FunctionTemplate::New(gl_glUniformMatrix3fvARB);
    target->Set(String::New("glUniformMatrix3fvARB"), _gl_glUniformMatrix3fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glUniformMatrix4fvARB = FunctionTemplate::New(gl_glUniformMatrix4fvARB);
    target->Set(String::New("glUniformMatrix4fvARB"), _gl_glUniformMatrix4fvARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetObjectParameterfvARB = FunctionTemplate::New(gl_glGetObjectParameterfvARB);
    target->Set(String::New("glGetObjectParameterfvARB"), _gl_glGetObjectParameterfvARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetObjectParameterivARB = FunctionTemplate::New(gl_glGetObjectParameterivARB);
    target->Set(String::New("glGetObjectParameterivARB"), _gl_glGetObjectParameterivARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetInfoLogARB = FunctionTemplate::New(gl_glGetInfoLogARB);
    target->Set(String::New("glGetInfoLogARB"), _gl_glGetInfoLogARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetAttachedObjectsARB = FunctionTemplate::New(gl_glGetAttachedObjectsARB);
    target->Set(String::New("glGetAttachedObjectsARB"), _gl_glGetAttachedObjectsARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetUniformLocationARB = FunctionTemplate::New(gl_glGetUniformLocationARB);
    target->Set(String::New("glGetUniformLocationARB"), _gl_glGetUniformLocationARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetActiveUniformARB = FunctionTemplate::New(gl_glGetActiveUniformARB);
    target->Set(String::New("glGetActiveUniformARB"), _gl_glGetActiveUniformARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetUniformfvARB = FunctionTemplate::New(gl_glGetUniformfvARB);
    target->Set(String::New("glGetUniformfvARB"), _gl_glGetUniformfvARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetUniformivARB = FunctionTemplate::New(gl_glGetUniformivARB);
    target->Set(String::New("glGetUniformivARB"), _gl_glGetUniformivARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetShaderSourceARB = FunctionTemplate::New(gl_glGetShaderSourceARB);
    target->Set(String::New("glGetShaderSourceARB"), _gl_glGetShaderSourceARB->GetFunction());

    Local<FunctionTemplate> _gl_glBindAttribLocationARB = FunctionTemplate::New(gl_glBindAttribLocationARB);
    target->Set(String::New("glBindAttribLocationARB"), _gl_glBindAttribLocationARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetActiveAttribARB = FunctionTemplate::New(gl_glGetActiveAttribARB);
    target->Set(String::New("glGetActiveAttribARB"), _gl_glGetActiveAttribARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetAttribLocationARB = FunctionTemplate::New(gl_glGetAttribLocationARB);
    target->Set(String::New("glGetAttribLocationARB"), _gl_glGetAttribLocationARB->GetFunction());

    Local<FunctionTemplate> _gl_glBindBufferARB = FunctionTemplate::New(gl_glBindBufferARB);
    target->Set(String::New("glBindBufferARB"), _gl_glBindBufferARB->GetFunction());

    Local<FunctionTemplate> _gl_glDeleteBuffersARB = FunctionTemplate::New(gl_glDeleteBuffersARB);
    target->Set(String::New("glDeleteBuffersARB"), _gl_glDeleteBuffersARB->GetFunction());

    Local<FunctionTemplate> _gl_glGenBuffersARB = FunctionTemplate::New(gl_glGenBuffersARB);
    target->Set(String::New("glGenBuffersARB"), _gl_glGenBuffersARB->GetFunction());

    Local<FunctionTemplate> _gl_glIsBufferARB = FunctionTemplate::New(gl_glIsBufferARB);
    target->Set(String::New("glIsBufferARB"), _gl_glIsBufferARB->GetFunction());

    Local<FunctionTemplate> _gl_glBufferDataARB = FunctionTemplate::New(gl_glBufferDataARB);
    target->Set(String::New("glBufferDataARB"), _gl_glBufferDataARB->GetFunction());

    Local<FunctionTemplate> _gl_glBufferSubDataARB = FunctionTemplate::New(gl_glBufferSubDataARB);
    target->Set(String::New("glBufferSubDataARB"), _gl_glBufferSubDataARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetBufferSubDataARB = FunctionTemplate::New(gl_glGetBufferSubDataARB);
    target->Set(String::New("glGetBufferSubDataARB"), _gl_glGetBufferSubDataARB->GetFunction());

    Local<FunctionTemplate> _gl_glUnmapBufferARB = FunctionTemplate::New(gl_glUnmapBufferARB);
    target->Set(String::New("glUnmapBufferARB"), _gl_glUnmapBufferARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetBufferParameterivARB = FunctionTemplate::New(gl_glGetBufferParameterivARB);
    target->Set(String::New("glGetBufferParameterivARB"), _gl_glGetBufferParameterivARB->GetFunction());

    Local<FunctionTemplate> _gl_glGetBufferPointervARB = FunctionTemplate::New(gl_glGetBufferPointervARB);
    target->Set(String::New("glGetBufferPointervARB"), _gl_glGetBufferPointervARB->GetFunction());

    Local<FunctionTemplate> _gl_glDrawBuffersARB = FunctionTemplate::New(gl_glDrawBuffersARB);
    target->Set(String::New("glDrawBuffersARB"), _gl_glDrawBuffersARB->GetFunction());

    Local<FunctionTemplate> _gl_glClampColorARB = FunctionTemplate::New(gl_glClampColorARB);
    target->Set(String::New("glClampColorARB"), _gl_glClampColorARB->GetFunction());

    Local<FunctionTemplate> _gl_glBlendColorEXT = FunctionTemplate::New(gl_glBlendColorEXT);
    target->Set(String::New("glBlendColorEXT"), _gl_glBlendColorEXT->GetFunction());

    Local<FunctionTemplate> _gl_glBlendEquationEXT = FunctionTemplate::New(gl_glBlendEquationEXT);
    target->Set(String::New("glBlendEquationEXT"), _gl_glBlendEquationEXT->GetFunction());

    Local<FunctionTemplate> _gl_glLockArraysEXT = FunctionTemplate::New(gl_glLockArraysEXT);
    target->Set(String::New("glLockArraysEXT"), _gl_glLockArraysEXT->GetFunction());

    Local<FunctionTemplate> _gl_glUnlockArraysEXT = FunctionTemplate::New(gl_glUnlockArraysEXT);
    target->Set(String::New("glUnlockArraysEXT"), _gl_glUnlockArraysEXT->GetFunction());

    Local<FunctionTemplate> _gl_glDrawRangeElementsEXT = FunctionTemplate::New(gl_glDrawRangeElementsEXT);
    target->Set(String::New("glDrawRangeElementsEXT"), _gl_glDrawRangeElementsEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3bEXT = FunctionTemplate::New(gl_glSecondaryColor3bEXT);
    target->Set(String::New("glSecondaryColor3bEXT"), _gl_glSecondaryColor3bEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3bvEXT = FunctionTemplate::New(gl_glSecondaryColor3bvEXT);
    target->Set(String::New("glSecondaryColor3bvEXT"), _gl_glSecondaryColor3bvEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3dEXT = FunctionTemplate::New(gl_glSecondaryColor3dEXT);
    target->Set(String::New("glSecondaryColor3dEXT"), _gl_glSecondaryColor3dEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3dvEXT = FunctionTemplate::New(gl_glSecondaryColor3dvEXT);
    target->Set(String::New("glSecondaryColor3dvEXT"), _gl_glSecondaryColor3dvEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3fEXT = FunctionTemplate::New(gl_glSecondaryColor3fEXT);
    target->Set(String::New("glSecondaryColor3fEXT"), _gl_glSecondaryColor3fEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3fvEXT = FunctionTemplate::New(gl_glSecondaryColor3fvEXT);
    target->Set(String::New("glSecondaryColor3fvEXT"), _gl_glSecondaryColor3fvEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3iEXT = FunctionTemplate::New(gl_glSecondaryColor3iEXT);
    target->Set(String::New("glSecondaryColor3iEXT"), _gl_glSecondaryColor3iEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3ivEXT = FunctionTemplate::New(gl_glSecondaryColor3ivEXT);
    target->Set(String::New("glSecondaryColor3ivEXT"), _gl_glSecondaryColor3ivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3sEXT = FunctionTemplate::New(gl_glSecondaryColor3sEXT);
    target->Set(String::New("glSecondaryColor3sEXT"), _gl_glSecondaryColor3sEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3svEXT = FunctionTemplate::New(gl_glSecondaryColor3svEXT);
    target->Set(String::New("glSecondaryColor3svEXT"), _gl_glSecondaryColor3svEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3ubEXT = FunctionTemplate::New(gl_glSecondaryColor3ubEXT);
    target->Set(String::New("glSecondaryColor3ubEXT"), _gl_glSecondaryColor3ubEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3ubvEXT = FunctionTemplate::New(gl_glSecondaryColor3ubvEXT);
    target->Set(String::New("glSecondaryColor3ubvEXT"), _gl_glSecondaryColor3ubvEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3uiEXT = FunctionTemplate::New(gl_glSecondaryColor3uiEXT);
    target->Set(String::New("glSecondaryColor3uiEXT"), _gl_glSecondaryColor3uiEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3uivEXT = FunctionTemplate::New(gl_glSecondaryColor3uivEXT);
    target->Set(String::New("glSecondaryColor3uivEXT"), _gl_glSecondaryColor3uivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3usEXT = FunctionTemplate::New(gl_glSecondaryColor3usEXT);
    target->Set(String::New("glSecondaryColor3usEXT"), _gl_glSecondaryColor3usEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3usvEXT = FunctionTemplate::New(gl_glSecondaryColor3usvEXT);
    target->Set(String::New("glSecondaryColor3usvEXT"), _gl_glSecondaryColor3usvEXT->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColorPointerEXT = FunctionTemplate::New(gl_glSecondaryColorPointerEXT);
    target->Set(String::New("glSecondaryColorPointerEXT"), _gl_glSecondaryColorPointerEXT->GetFunction());

    Local<FunctionTemplate> _gl_glMultiDrawArraysEXT = FunctionTemplate::New(gl_glMultiDrawArraysEXT);
    target->Set(String::New("glMultiDrawArraysEXT"), _gl_glMultiDrawArraysEXT->GetFunction());

    Local<FunctionTemplate> _gl_glMultiDrawElementsEXT = FunctionTemplate::New(gl_glMultiDrawElementsEXT);
    target->Set(String::New("glMultiDrawElementsEXT"), _gl_glMultiDrawElementsEXT->GetFunction());

    Local<FunctionTemplate> _gl_glFogCoordfEXT = FunctionTemplate::New(gl_glFogCoordfEXT);
    target->Set(String::New("glFogCoordfEXT"), _gl_glFogCoordfEXT->GetFunction());

    Local<FunctionTemplate> _gl_glFogCoordfvEXT = FunctionTemplate::New(gl_glFogCoordfvEXT);
    target->Set(String::New("glFogCoordfvEXT"), _gl_glFogCoordfvEXT->GetFunction());

    Local<FunctionTemplate> _gl_glFogCoorddEXT = FunctionTemplate::New(gl_glFogCoorddEXT);
    target->Set(String::New("glFogCoorddEXT"), _gl_glFogCoorddEXT->GetFunction());

    Local<FunctionTemplate> _gl_glFogCoorddvEXT = FunctionTemplate::New(gl_glFogCoorddvEXT);
    target->Set(String::New("glFogCoorddvEXT"), _gl_glFogCoorddvEXT->GetFunction());

    Local<FunctionTemplate> _gl_glFogCoordPointerEXT = FunctionTemplate::New(gl_glFogCoordPointerEXT);
    target->Set(String::New("glFogCoordPointerEXT"), _gl_glFogCoordPointerEXT->GetFunction());

    Local<FunctionTemplate> _gl_glBlendFuncSeparateEXT = FunctionTemplate::New(gl_glBlendFuncSeparateEXT);
    target->Set(String::New("glBlendFuncSeparateEXT"), _gl_glBlendFuncSeparateEXT->GetFunction());

    Local<FunctionTemplate> _gl_glActiveStencilFaceEXT = FunctionTemplate::New(gl_glActiveStencilFaceEXT);
    target->Set(String::New("glActiveStencilFaceEXT"), _gl_glActiveStencilFaceEXT->GetFunction());

    Local<FunctionTemplate> _gl_glDepthBoundsEXT = FunctionTemplate::New(gl_glDepthBoundsEXT);
    target->Set(String::New("glDepthBoundsEXT"), _gl_glDepthBoundsEXT->GetFunction());

    Local<FunctionTemplate> _gl_glBlendEquationSeparateEXT = FunctionTemplate::New(gl_glBlendEquationSeparateEXT);
    target->Set(String::New("glBlendEquationSeparateEXT"), _gl_glBlendEquationSeparateEXT->GetFunction());

    Local<FunctionTemplate> _gl_glIsRenderbufferEXT = FunctionTemplate::New(gl_glIsRenderbufferEXT);
    target->Set(String::New("glIsRenderbufferEXT"), _gl_glIsRenderbufferEXT->GetFunction());

    Local<FunctionTemplate> _gl_glBindRenderbufferEXT = FunctionTemplate::New(gl_glBindRenderbufferEXT);
    target->Set(String::New("glBindRenderbufferEXT"), _gl_glBindRenderbufferEXT->GetFunction());

    Local<FunctionTemplate> _gl_glDeleteRenderbuffersEXT = FunctionTemplate::New(gl_glDeleteRenderbuffersEXT);
    target->Set(String::New("glDeleteRenderbuffersEXT"), _gl_glDeleteRenderbuffersEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGenRenderbuffersEXT = FunctionTemplate::New(gl_glGenRenderbuffersEXT);
    target->Set(String::New("glGenRenderbuffersEXT"), _gl_glGenRenderbuffersEXT->GetFunction());

    Local<FunctionTemplate> _gl_glRenderbufferStorageEXT = FunctionTemplate::New(gl_glRenderbufferStorageEXT);
    target->Set(String::New("glRenderbufferStorageEXT"), _gl_glRenderbufferStorageEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGetRenderbufferParameterivEXT = FunctionTemplate::New(gl_glGetRenderbufferParameterivEXT);
    target->Set(String::New("glGetRenderbufferParameterivEXT"), _gl_glGetRenderbufferParameterivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glIsFramebufferEXT = FunctionTemplate::New(gl_glIsFramebufferEXT);
    target->Set(String::New("glIsFramebufferEXT"), _gl_glIsFramebufferEXT->GetFunction());

    Local<FunctionTemplate> _gl_glBindFramebufferEXT = FunctionTemplate::New(gl_glBindFramebufferEXT);
    target->Set(String::New("glBindFramebufferEXT"), _gl_glBindFramebufferEXT->GetFunction());

    Local<FunctionTemplate> _gl_glDeleteFramebuffersEXT = FunctionTemplate::New(gl_glDeleteFramebuffersEXT);
    target->Set(String::New("glDeleteFramebuffersEXT"), _gl_glDeleteFramebuffersEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGenFramebuffersEXT = FunctionTemplate::New(gl_glGenFramebuffersEXT);
    target->Set(String::New("glGenFramebuffersEXT"), _gl_glGenFramebuffersEXT->GetFunction());

    Local<FunctionTemplate> _gl_glCheckFramebufferStatusEXT = FunctionTemplate::New(gl_glCheckFramebufferStatusEXT);
    target->Set(String::New("glCheckFramebufferStatusEXT"), _gl_glCheckFramebufferStatusEXT->GetFunction());

    Local<FunctionTemplate> _gl_glFramebufferTexture1DEXT = FunctionTemplate::New(gl_glFramebufferTexture1DEXT);
    target->Set(String::New("glFramebufferTexture1DEXT"), _gl_glFramebufferTexture1DEXT->GetFunction());

    Local<FunctionTemplate> _gl_glFramebufferTexture2DEXT = FunctionTemplate::New(gl_glFramebufferTexture2DEXT);
    target->Set(String::New("glFramebufferTexture2DEXT"), _gl_glFramebufferTexture2DEXT->GetFunction());

    Local<FunctionTemplate> _gl_glFramebufferTexture3DEXT = FunctionTemplate::New(gl_glFramebufferTexture3DEXT);
    target->Set(String::New("glFramebufferTexture3DEXT"), _gl_glFramebufferTexture3DEXT->GetFunction());

    Local<FunctionTemplate> _gl_glFramebufferRenderbufferEXT = FunctionTemplate::New(gl_glFramebufferRenderbufferEXT);
    target->Set(String::New("glFramebufferRenderbufferEXT"), _gl_glFramebufferRenderbufferEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGetFramebufferAttachmentParameterivEXT = FunctionTemplate::New(gl_glGetFramebufferAttachmentParameterivEXT);
    target->Set(String::New("glGetFramebufferAttachmentParameterivEXT"), _gl_glGetFramebufferAttachmentParameterivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGenerateMipmapEXT = FunctionTemplate::New(gl_glGenerateMipmapEXT);
    target->Set(String::New("glGenerateMipmapEXT"), _gl_glGenerateMipmapEXT->GetFunction());

    Local<FunctionTemplate> _gl_glBlitFramebufferEXT = FunctionTemplate::New(gl_glBlitFramebufferEXT);
    target->Set(String::New("glBlitFramebufferEXT"), _gl_glBlitFramebufferEXT->GetFunction());

    Local<FunctionTemplate> _gl_glRenderbufferStorageMultisampleEXT = FunctionTemplate::New(gl_glRenderbufferStorageMultisampleEXT);
    target->Set(String::New("glRenderbufferStorageMultisampleEXT"), _gl_glRenderbufferStorageMultisampleEXT->GetFunction());

    Local<FunctionTemplate> _gl_glProgramParameteriEXT = FunctionTemplate::New(gl_glProgramParameteriEXT);
    target->Set(String::New("glProgramParameteriEXT"), _gl_glProgramParameteriEXT->GetFunction());

    Local<FunctionTemplate> _gl_glFramebufferTextureEXT = FunctionTemplate::New(gl_glFramebufferTextureEXT);
    target->Set(String::New("glFramebufferTextureEXT"), _gl_glFramebufferTextureEXT->GetFunction());

    Local<FunctionTemplate> _gl_glFramebufferTextureLayerEXT = FunctionTemplate::New(gl_glFramebufferTextureLayerEXT);
    target->Set(String::New("glFramebufferTextureLayerEXT"), _gl_glFramebufferTextureLayerEXT->GetFunction());

    Local<FunctionTemplate> _gl_glFramebufferTextureFaceEXT = FunctionTemplate::New(gl_glFramebufferTextureFaceEXT);
    target->Set(String::New("glFramebufferTextureFaceEXT"), _gl_glFramebufferTextureFaceEXT->GetFunction());

    Local<FunctionTemplate> _gl_glBindBufferRangeEXT = FunctionTemplate::New(gl_glBindBufferRangeEXT);
    target->Set(String::New("glBindBufferRangeEXT"), _gl_glBindBufferRangeEXT->GetFunction());

    Local<FunctionTemplate> _gl_glBindBufferOffsetEXT = FunctionTemplate::New(gl_glBindBufferOffsetEXT);
    target->Set(String::New("glBindBufferOffsetEXT"), _gl_glBindBufferOffsetEXT->GetFunction());

    Local<FunctionTemplate> _gl_glBindBufferBaseEXT = FunctionTemplate::New(gl_glBindBufferBaseEXT);
    target->Set(String::New("glBindBufferBaseEXT"), _gl_glBindBufferBaseEXT->GetFunction());

    Local<FunctionTemplate> _gl_glBeginTransformFeedbackEXT = FunctionTemplate::New(gl_glBeginTransformFeedbackEXT);
    target->Set(String::New("glBeginTransformFeedbackEXT"), _gl_glBeginTransformFeedbackEXT->GetFunction());

    Local<FunctionTemplate> _gl_glEndTransformFeedbackEXT = FunctionTemplate::New(gl_glEndTransformFeedbackEXT);
    target->Set(String::New("glEndTransformFeedbackEXT"), _gl_glEndTransformFeedbackEXT->GetFunction());

    Local<FunctionTemplate> _gl_glTransformFeedbackVaryingsEXT = FunctionTemplate::New(gl_glTransformFeedbackVaryingsEXT);
    target->Set(String::New("glTransformFeedbackVaryingsEXT"), _gl_glTransformFeedbackVaryingsEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGetTransformFeedbackVaryingEXT = FunctionTemplate::New(gl_glGetTransformFeedbackVaryingEXT);
    target->Set(String::New("glGetTransformFeedbackVaryingEXT"), _gl_glGetTransformFeedbackVaryingEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGetIntegerIndexedvEXT = FunctionTemplate::New(gl_glGetIntegerIndexedvEXT);
    target->Set(String::New("glGetIntegerIndexedvEXT"), _gl_glGetIntegerIndexedvEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGetBooleanIndexedvEXT = FunctionTemplate::New(gl_glGetBooleanIndexedvEXT);
    target->Set(String::New("glGetBooleanIndexedvEXT"), _gl_glGetBooleanIndexedvEXT->GetFunction());

    Local<FunctionTemplate> _gl_glUniformBufferEXT = FunctionTemplate::New(gl_glUniformBufferEXT);
    target->Set(String::New("glUniformBufferEXT"), _gl_glUniformBufferEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGetUniformBufferSizeEXT = FunctionTemplate::New(gl_glGetUniformBufferSizeEXT);
    target->Set(String::New("glGetUniformBufferSizeEXT"), _gl_glGetUniformBufferSizeEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGetUniformOffsetEXT = FunctionTemplate::New(gl_glGetUniformOffsetEXT);
    target->Set(String::New("glGetUniformOffsetEXT"), _gl_glGetUniformOffsetEXT->GetFunction());

    Local<FunctionTemplate> _gl_glClearColorIiEXT = FunctionTemplate::New(gl_glClearColorIiEXT);
    target->Set(String::New("glClearColorIiEXT"), _gl_glClearColorIiEXT->GetFunction());

    Local<FunctionTemplate> _gl_glClearColorIuiEXT = FunctionTemplate::New(gl_glClearColorIuiEXT);
    target->Set(String::New("glClearColorIuiEXT"), _gl_glClearColorIuiEXT->GetFunction());

    Local<FunctionTemplate> _gl_glTexParameterIivEXT = FunctionTemplate::New(gl_glTexParameterIivEXT);
    target->Set(String::New("glTexParameterIivEXT"), _gl_glTexParameterIivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glTexParameterIuivEXT = FunctionTemplate::New(gl_glTexParameterIuivEXT);
    target->Set(String::New("glTexParameterIuivEXT"), _gl_glTexParameterIuivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexParameterIivEXT = FunctionTemplate::New(gl_glGetTexParameterIivEXT);
    target->Set(String::New("glGetTexParameterIivEXT"), _gl_glGetTexParameterIivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexParameterIuivEXT = FunctionTemplate::New(gl_glGetTexParameterIuivEXT);
    target->Set(String::New("glGetTexParameterIuivEXT"), _gl_glGetTexParameterIuivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI1iEXT = FunctionTemplate::New(gl_glVertexAttribI1iEXT);
    target->Set(String::New("glVertexAttribI1iEXT"), _gl_glVertexAttribI1iEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI2iEXT = FunctionTemplate::New(gl_glVertexAttribI2iEXT);
    target->Set(String::New("glVertexAttribI2iEXT"), _gl_glVertexAttribI2iEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI3iEXT = FunctionTemplate::New(gl_glVertexAttribI3iEXT);
    target->Set(String::New("glVertexAttribI3iEXT"), _gl_glVertexAttribI3iEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI4iEXT = FunctionTemplate::New(gl_glVertexAttribI4iEXT);
    target->Set(String::New("glVertexAttribI4iEXT"), _gl_glVertexAttribI4iEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI1uiEXT = FunctionTemplate::New(gl_glVertexAttribI1uiEXT);
    target->Set(String::New("glVertexAttribI1uiEXT"), _gl_glVertexAttribI1uiEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI2uiEXT = FunctionTemplate::New(gl_glVertexAttribI2uiEXT);
    target->Set(String::New("glVertexAttribI2uiEXT"), _gl_glVertexAttribI2uiEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI3uiEXT = FunctionTemplate::New(gl_glVertexAttribI3uiEXT);
    target->Set(String::New("glVertexAttribI3uiEXT"), _gl_glVertexAttribI3uiEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI4uiEXT = FunctionTemplate::New(gl_glVertexAttribI4uiEXT);
    target->Set(String::New("glVertexAttribI4uiEXT"), _gl_glVertexAttribI4uiEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI1ivEXT = FunctionTemplate::New(gl_glVertexAttribI1ivEXT);
    target->Set(String::New("glVertexAttribI1ivEXT"), _gl_glVertexAttribI1ivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI2ivEXT = FunctionTemplate::New(gl_glVertexAttribI2ivEXT);
    target->Set(String::New("glVertexAttribI2ivEXT"), _gl_glVertexAttribI2ivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI3ivEXT = FunctionTemplate::New(gl_glVertexAttribI3ivEXT);
    target->Set(String::New("glVertexAttribI3ivEXT"), _gl_glVertexAttribI3ivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI4ivEXT = FunctionTemplate::New(gl_glVertexAttribI4ivEXT);
    target->Set(String::New("glVertexAttribI4ivEXT"), _gl_glVertexAttribI4ivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI1uivEXT = FunctionTemplate::New(gl_glVertexAttribI1uivEXT);
    target->Set(String::New("glVertexAttribI1uivEXT"), _gl_glVertexAttribI1uivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI2uivEXT = FunctionTemplate::New(gl_glVertexAttribI2uivEXT);
    target->Set(String::New("glVertexAttribI2uivEXT"), _gl_glVertexAttribI2uivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI3uivEXT = FunctionTemplate::New(gl_glVertexAttribI3uivEXT);
    target->Set(String::New("glVertexAttribI3uivEXT"), _gl_glVertexAttribI3uivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI4uivEXT = FunctionTemplate::New(gl_glVertexAttribI4uivEXT);
    target->Set(String::New("glVertexAttribI4uivEXT"), _gl_glVertexAttribI4uivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI4bvEXT = FunctionTemplate::New(gl_glVertexAttribI4bvEXT);
    target->Set(String::New("glVertexAttribI4bvEXT"), _gl_glVertexAttribI4bvEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI4svEXT = FunctionTemplate::New(gl_glVertexAttribI4svEXT);
    target->Set(String::New("glVertexAttribI4svEXT"), _gl_glVertexAttribI4svEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI4ubvEXT = FunctionTemplate::New(gl_glVertexAttribI4ubvEXT);
    target->Set(String::New("glVertexAttribI4ubvEXT"), _gl_glVertexAttribI4ubvEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribI4usvEXT = FunctionTemplate::New(gl_glVertexAttribI4usvEXT);
    target->Set(String::New("glVertexAttribI4usvEXT"), _gl_glVertexAttribI4usvEXT->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribIPointerEXT = FunctionTemplate::New(gl_glVertexAttribIPointerEXT);
    target->Set(String::New("glVertexAttribIPointerEXT"), _gl_glVertexAttribIPointerEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGetVertexAttribIivEXT = FunctionTemplate::New(gl_glGetVertexAttribIivEXT);
    target->Set(String::New("glGetVertexAttribIivEXT"), _gl_glGetVertexAttribIivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGetVertexAttribIuivEXT = FunctionTemplate::New(gl_glGetVertexAttribIuivEXT);
    target->Set(String::New("glGetVertexAttribIuivEXT"), _gl_glGetVertexAttribIuivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glUniform1uiEXT = FunctionTemplate::New(gl_glUniform1uiEXT);
    target->Set(String::New("glUniform1uiEXT"), _gl_glUniform1uiEXT->GetFunction());

    Local<FunctionTemplate> _gl_glUniform2uiEXT = FunctionTemplate::New(gl_glUniform2uiEXT);
    target->Set(String::New("glUniform2uiEXT"), _gl_glUniform2uiEXT->GetFunction());

    Local<FunctionTemplate> _gl_glUniform3uiEXT = FunctionTemplate::New(gl_glUniform3uiEXT);
    target->Set(String::New("glUniform3uiEXT"), _gl_glUniform3uiEXT->GetFunction());

    Local<FunctionTemplate> _gl_glUniform4uiEXT = FunctionTemplate::New(gl_glUniform4uiEXT);
    target->Set(String::New("glUniform4uiEXT"), _gl_glUniform4uiEXT->GetFunction());

    Local<FunctionTemplate> _gl_glUniform1uivEXT = FunctionTemplate::New(gl_glUniform1uivEXT);
    target->Set(String::New("glUniform1uivEXT"), _gl_glUniform1uivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glUniform2uivEXT = FunctionTemplate::New(gl_glUniform2uivEXT);
    target->Set(String::New("glUniform2uivEXT"), _gl_glUniform2uivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glUniform3uivEXT = FunctionTemplate::New(gl_glUniform3uivEXT);
    target->Set(String::New("glUniform3uivEXT"), _gl_glUniform3uivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glUniform4uivEXT = FunctionTemplate::New(gl_glUniform4uivEXT);
    target->Set(String::New("glUniform4uivEXT"), _gl_glUniform4uivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGetUniformuivEXT = FunctionTemplate::New(gl_glGetUniformuivEXT);
    target->Set(String::New("glGetUniformuivEXT"), _gl_glGetUniformuivEXT->GetFunction());

    Local<FunctionTemplate> _gl_glBindFragDataLocationEXT = FunctionTemplate::New(gl_glBindFragDataLocationEXT);
    target->Set(String::New("glBindFragDataLocationEXT"), _gl_glBindFragDataLocationEXT->GetFunction());

    Local<FunctionTemplate> _gl_glGetFragDataLocationEXT = FunctionTemplate::New(gl_glGetFragDataLocationEXT);
    target->Set(String::New("glGetFragDataLocationEXT"), _gl_glGetFragDataLocationEXT->GetFunction());

    Local<FunctionTemplate> _gl_glColorMaskIndexedEXT = FunctionTemplate::New(gl_glColorMaskIndexedEXT);
    target->Set(String::New("glColorMaskIndexedEXT"), _gl_glColorMaskIndexedEXT->GetFunction());

    Local<FunctionTemplate> _gl_glEnableIndexedEXT = FunctionTemplate::New(gl_glEnableIndexedEXT);
    target->Set(String::New("glEnableIndexedEXT"), _gl_glEnableIndexedEXT->GetFunction());

    Local<FunctionTemplate> _gl_glDisableIndexedEXT = FunctionTemplate::New(gl_glDisableIndexedEXT);
    target->Set(String::New("glDisableIndexedEXT"), _gl_glDisableIndexedEXT->GetFunction());

    Local<FunctionTemplate> _gl_glIsEnabledIndexedEXT = FunctionTemplate::New(gl_glIsEnabledIndexedEXT);
    target->Set(String::New("glIsEnabledIndexedEXT"), _gl_glIsEnabledIndexedEXT->GetFunction());

    Local<FunctionTemplate> _gl_glTextureRangeAPPLE = FunctionTemplate::New(gl_glTextureRangeAPPLE);
    target->Set(String::New("glTextureRangeAPPLE"), _gl_glTextureRangeAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexParameterPointervAPPLE = FunctionTemplate::New(gl_glGetTexParameterPointervAPPLE);
    target->Set(String::New("glGetTexParameterPointervAPPLE"), _gl_glGetTexParameterPointervAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glVertexArrayRangeAPPLE = FunctionTemplate::New(gl_glVertexArrayRangeAPPLE);
    target->Set(String::New("glVertexArrayRangeAPPLE"), _gl_glVertexArrayRangeAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glFlushVertexArrayRangeAPPLE = FunctionTemplate::New(gl_glFlushVertexArrayRangeAPPLE);
    target->Set(String::New("glFlushVertexArrayRangeAPPLE"), _gl_glFlushVertexArrayRangeAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glVertexArrayParameteriAPPLE = FunctionTemplate::New(gl_glVertexArrayParameteriAPPLE);
    target->Set(String::New("glVertexArrayParameteriAPPLE"), _gl_glVertexArrayParameteriAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glBindVertexArrayAPPLE = FunctionTemplate::New(gl_glBindVertexArrayAPPLE);
    target->Set(String::New("glBindVertexArrayAPPLE"), _gl_glBindVertexArrayAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glDeleteVertexArraysAPPLE = FunctionTemplate::New(gl_glDeleteVertexArraysAPPLE);
    target->Set(String::New("glDeleteVertexArraysAPPLE"), _gl_glDeleteVertexArraysAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glGenVertexArraysAPPLE = FunctionTemplate::New(gl_glGenVertexArraysAPPLE);
    target->Set(String::New("glGenVertexArraysAPPLE"), _gl_glGenVertexArraysAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glIsVertexArrayAPPLE = FunctionTemplate::New(gl_glIsVertexArrayAPPLE);
    target->Set(String::New("glIsVertexArrayAPPLE"), _gl_glIsVertexArrayAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glGenFencesAPPLE = FunctionTemplate::New(gl_glGenFencesAPPLE);
    target->Set(String::New("glGenFencesAPPLE"), _gl_glGenFencesAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glDeleteFencesAPPLE = FunctionTemplate::New(gl_glDeleteFencesAPPLE);
    target->Set(String::New("glDeleteFencesAPPLE"), _gl_glDeleteFencesAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glSetFenceAPPLE = FunctionTemplate::New(gl_glSetFenceAPPLE);
    target->Set(String::New("glSetFenceAPPLE"), _gl_glSetFenceAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glIsFenceAPPLE = FunctionTemplate::New(gl_glIsFenceAPPLE);
    target->Set(String::New("glIsFenceAPPLE"), _gl_glIsFenceAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glTestFenceAPPLE = FunctionTemplate::New(gl_glTestFenceAPPLE);
    target->Set(String::New("glTestFenceAPPLE"), _gl_glTestFenceAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glFinishFenceAPPLE = FunctionTemplate::New(gl_glFinishFenceAPPLE);
    target->Set(String::New("glFinishFenceAPPLE"), _gl_glFinishFenceAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glTestObjectAPPLE = FunctionTemplate::New(gl_glTestObjectAPPLE);
    target->Set(String::New("glTestObjectAPPLE"), _gl_glTestObjectAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glFinishObjectAPPLE = FunctionTemplate::New(gl_glFinishObjectAPPLE);
    target->Set(String::New("glFinishObjectAPPLE"), _gl_glFinishObjectAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glElementPointerAPPLE = FunctionTemplate::New(gl_glElementPointerAPPLE);
    target->Set(String::New("glElementPointerAPPLE"), _gl_glElementPointerAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glDrawElementArrayAPPLE = FunctionTemplate::New(gl_glDrawElementArrayAPPLE);
    target->Set(String::New("glDrawElementArrayAPPLE"), _gl_glDrawElementArrayAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glDrawRangeElementArrayAPPLE = FunctionTemplate::New(gl_glDrawRangeElementArrayAPPLE);
    target->Set(String::New("glDrawRangeElementArrayAPPLE"), _gl_glDrawRangeElementArrayAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glMultiDrawElementArrayAPPLE = FunctionTemplate::New(gl_glMultiDrawElementArrayAPPLE);
    target->Set(String::New("glMultiDrawElementArrayAPPLE"), _gl_glMultiDrawElementArrayAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glMultiDrawRangeElementArrayAPPLE = FunctionTemplate::New(gl_glMultiDrawRangeElementArrayAPPLE);
    target->Set(String::New("glMultiDrawRangeElementArrayAPPLE"), _gl_glMultiDrawRangeElementArrayAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glFlushRenderAPPLE = FunctionTemplate::New(gl_glFlushRenderAPPLE);
    target->Set(String::New("glFlushRenderAPPLE"), _gl_glFlushRenderAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glFinishRenderAPPLE = FunctionTemplate::New(gl_glFinishRenderAPPLE);
    target->Set(String::New("glFinishRenderAPPLE"), _gl_glFinishRenderAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glSwapAPPLE = FunctionTemplate::New(gl_glSwapAPPLE);
    target->Set(String::New("glSwapAPPLE"), _gl_glSwapAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glEnableVertexAttribAPPLE = FunctionTemplate::New(gl_glEnableVertexAttribAPPLE);
    target->Set(String::New("glEnableVertexAttribAPPLE"), _gl_glEnableVertexAttribAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glDisableVertexAttribAPPLE = FunctionTemplate::New(gl_glDisableVertexAttribAPPLE);
    target->Set(String::New("glDisableVertexAttribAPPLE"), _gl_glDisableVertexAttribAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glIsVertexAttribEnabledAPPLE = FunctionTemplate::New(gl_glIsVertexAttribEnabledAPPLE);
    target->Set(String::New("glIsVertexAttribEnabledAPPLE"), _gl_glIsVertexAttribEnabledAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glMapVertexAttrib1dAPPLE = FunctionTemplate::New(gl_glMapVertexAttrib1dAPPLE);
    target->Set(String::New("glMapVertexAttrib1dAPPLE"), _gl_glMapVertexAttrib1dAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glMapVertexAttrib1fAPPLE = FunctionTemplate::New(gl_glMapVertexAttrib1fAPPLE);
    target->Set(String::New("glMapVertexAttrib1fAPPLE"), _gl_glMapVertexAttrib1fAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glMapVertexAttrib2dAPPLE = FunctionTemplate::New(gl_glMapVertexAttrib2dAPPLE);
    target->Set(String::New("glMapVertexAttrib2dAPPLE"), _gl_glMapVertexAttrib2dAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glMapVertexAttrib2fAPPLE = FunctionTemplate::New(gl_glMapVertexAttrib2fAPPLE);
    target->Set(String::New("glMapVertexAttrib2fAPPLE"), _gl_glMapVertexAttrib2fAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glBufferParameteriAPPLE = FunctionTemplate::New(gl_glBufferParameteriAPPLE);
    target->Set(String::New("glBufferParameteriAPPLE"), _gl_glBufferParameteriAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glFlushMappedBufferRangeAPPLE = FunctionTemplate::New(gl_glFlushMappedBufferRangeAPPLE);
    target->Set(String::New("glFlushMappedBufferRangeAPPLE"), _gl_glFlushMappedBufferRangeAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glObjectPurgeableAPPLE = FunctionTemplate::New(gl_glObjectPurgeableAPPLE);
    target->Set(String::New("glObjectPurgeableAPPLE"), _gl_glObjectPurgeableAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glObjectUnpurgeableAPPLE = FunctionTemplate::New(gl_glObjectUnpurgeableAPPLE);
    target->Set(String::New("glObjectUnpurgeableAPPLE"), _gl_glObjectUnpurgeableAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glGetObjectParameterivAPPLE = FunctionTemplate::New(gl_glGetObjectParameterivAPPLE);
    target->Set(String::New("glGetObjectParameterivAPPLE"), _gl_glGetObjectParameterivAPPLE->GetFunction());

    Local<FunctionTemplate> _gl_glPNTrianglesiATI = FunctionTemplate::New(gl_glPNTrianglesiATI);
    target->Set(String::New("glPNTrianglesiATI"), _gl_glPNTrianglesiATI->GetFunction());

    Local<FunctionTemplate> _gl_glPNTrianglesfATI = FunctionTemplate::New(gl_glPNTrianglesfATI);
    target->Set(String::New("glPNTrianglesfATI"), _gl_glPNTrianglesfATI->GetFunction());

    Local<FunctionTemplate> _gl_glBlendEquationSeparateATI = FunctionTemplate::New(gl_glBlendEquationSeparateATI);
    target->Set(String::New("glBlendEquationSeparateATI"), _gl_glBlendEquationSeparateATI->GetFunction());

    Local<FunctionTemplate> _gl_glStencilOpSeparateATI = FunctionTemplate::New(gl_glStencilOpSeparateATI);
    target->Set(String::New("glStencilOpSeparateATI"), _gl_glStencilOpSeparateATI->GetFunction());

    Local<FunctionTemplate> _gl_glStencilFuncSeparateATI = FunctionTemplate::New(gl_glStencilFuncSeparateATI);
    target->Set(String::New("glStencilFuncSeparateATI"), _gl_glStencilFuncSeparateATI->GetFunction());

    Local<FunctionTemplate> _gl_glPNTrianglesiATIX = FunctionTemplate::New(gl_glPNTrianglesiATIX);
    target->Set(String::New("glPNTrianglesiATIX"), _gl_glPNTrianglesiATIX->GetFunction());

    Local<FunctionTemplate> _gl_glPNTrianglesfATIX = FunctionTemplate::New(gl_glPNTrianglesfATIX);
    target->Set(String::New("glPNTrianglesfATIX"), _gl_glPNTrianglesfATIX->GetFunction());

    Local<FunctionTemplate> _gl_glPointParameteriNV = FunctionTemplate::New(gl_glPointParameteriNV);
    target->Set(String::New("glPointParameteriNV"), _gl_glPointParameteriNV->GetFunction());

    Local<FunctionTemplate> _gl_glPointParameterivNV = FunctionTemplate::New(gl_glPointParameterivNV);
    target->Set(String::New("glPointParameterivNV"), _gl_glPointParameterivNV->GetFunction());

    Local<FunctionTemplate> _gl_glBeginConditionalRenderNV = FunctionTemplate::New(gl_glBeginConditionalRenderNV);
    target->Set(String::New("glBeginConditionalRenderNV"), _gl_glBeginConditionalRenderNV->GetFunction());

    Local<FunctionTemplate> _gl_glEndConditionalRenderNV = FunctionTemplate::New(gl_glEndConditionalRenderNV);
    target->Set(String::New("glEndConditionalRenderNV"), _gl_glEndConditionalRenderNV->GetFunction());

    Local<FunctionTemplate> _gl_glAccum = FunctionTemplate::New(gl_glAccum);
    target->Set(String::New("glAccum"), _gl_glAccum->GetFunction());

    Local<FunctionTemplate> _gl_glAlphaFunc = FunctionTemplate::New(gl_glAlphaFunc);
    target->Set(String::New("glAlphaFunc"), _gl_glAlphaFunc->GetFunction());

    Local<FunctionTemplate> _gl_glAreTexturesResident = FunctionTemplate::New(gl_glAreTexturesResident);
    target->Set(String::New("glAreTexturesResident"), _gl_glAreTexturesResident->GetFunction());

    Local<FunctionTemplate> _gl_glArrayElement = FunctionTemplate::New(gl_glArrayElement);
    target->Set(String::New("glArrayElement"), _gl_glArrayElement->GetFunction());

    Local<FunctionTemplate> _gl_glBegin = FunctionTemplate::New(gl_glBegin);
    target->Set(String::New("glBegin"), _gl_glBegin->GetFunction());

    Local<FunctionTemplate> _gl_glBindTexture = FunctionTemplate::New(gl_glBindTexture);
    target->Set(String::New("glBindTexture"), _gl_glBindTexture->GetFunction());

    Local<FunctionTemplate> _gl_glBitmap = FunctionTemplate::New(gl_glBitmap);
    target->Set(String::New("glBitmap"), _gl_glBitmap->GetFunction());

    Local<FunctionTemplate> _gl_glBlendColor = FunctionTemplate::New(gl_glBlendColor);
    target->Set(String::New("glBlendColor"), _gl_glBlendColor->GetFunction());

    Local<FunctionTemplate> _gl_glBlendEquation = FunctionTemplate::New(gl_glBlendEquation);
    target->Set(String::New("glBlendEquation"), _gl_glBlendEquation->GetFunction());

    Local<FunctionTemplate> _gl_glBlendEquationSeparate = FunctionTemplate::New(gl_glBlendEquationSeparate);
    target->Set(String::New("glBlendEquationSeparate"), _gl_glBlendEquationSeparate->GetFunction());

    Local<FunctionTemplate> _gl_glBlendFunc = FunctionTemplate::New(gl_glBlendFunc);
    target->Set(String::New("glBlendFunc"), _gl_glBlendFunc->GetFunction());

    Local<FunctionTemplate> _gl_glCallList = FunctionTemplate::New(gl_glCallList);
    target->Set(String::New("glCallList"), _gl_glCallList->GetFunction());

    Local<FunctionTemplate> _gl_glCallLists = FunctionTemplate::New(gl_glCallLists);
    target->Set(String::New("glCallLists"), _gl_glCallLists->GetFunction());

    Local<FunctionTemplate> _gl_glClear = FunctionTemplate::New(gl_glClear);
    target->Set(String::New("glClear"), _gl_glClear->GetFunction());

    Local<FunctionTemplate> _gl_glClearAccum = FunctionTemplate::New(gl_glClearAccum);
    target->Set(String::New("glClearAccum"), _gl_glClearAccum->GetFunction());

    Local<FunctionTemplate> _gl_glClearColor = FunctionTemplate::New(gl_glClearColor);
    target->Set(String::New("glClearColor"), _gl_glClearColor->GetFunction());

    Local<FunctionTemplate> _gl_glClearDepth = FunctionTemplate::New(gl_glClearDepth);
    target->Set(String::New("glClearDepth"), _gl_glClearDepth->GetFunction());

    Local<FunctionTemplate> _gl_glClearIndex = FunctionTemplate::New(gl_glClearIndex);
    target->Set(String::New("glClearIndex"), _gl_glClearIndex->GetFunction());

    Local<FunctionTemplate> _gl_glClearStencil = FunctionTemplate::New(gl_glClearStencil);
    target->Set(String::New("glClearStencil"), _gl_glClearStencil->GetFunction());

    Local<FunctionTemplate> _gl_glClipPlane = FunctionTemplate::New(gl_glClipPlane);
    target->Set(String::New("glClipPlane"), _gl_glClipPlane->GetFunction());

    Local<FunctionTemplate> _gl_glColor3b = FunctionTemplate::New(gl_glColor3b);
    target->Set(String::New("glColor3b"), _gl_glColor3b->GetFunction());

    Local<FunctionTemplate> _gl_glColor3bv = FunctionTemplate::New(gl_glColor3bv);
    target->Set(String::New("glColor3bv"), _gl_glColor3bv->GetFunction());

    Local<FunctionTemplate> _gl_glColor3d = FunctionTemplate::New(gl_glColor3d);
    target->Set(String::New("glColor3d"), _gl_glColor3d->GetFunction());

    Local<FunctionTemplate> _gl_glColor3dv = FunctionTemplate::New(gl_glColor3dv);
    target->Set(String::New("glColor3dv"), _gl_glColor3dv->GetFunction());

    Local<FunctionTemplate> _gl_glColor3f = FunctionTemplate::New(gl_glColor3f);
    target->Set(String::New("glColor3f"), _gl_glColor3f->GetFunction());

    Local<FunctionTemplate> _gl_glColor3fv = FunctionTemplate::New(gl_glColor3fv);
    target->Set(String::New("glColor3fv"), _gl_glColor3fv->GetFunction());

    Local<FunctionTemplate> _gl_glColor3i = FunctionTemplate::New(gl_glColor3i);
    target->Set(String::New("glColor3i"), _gl_glColor3i->GetFunction());

    Local<FunctionTemplate> _gl_glColor3iv = FunctionTemplate::New(gl_glColor3iv);
    target->Set(String::New("glColor3iv"), _gl_glColor3iv->GetFunction());

    Local<FunctionTemplate> _gl_glColor3s = FunctionTemplate::New(gl_glColor3s);
    target->Set(String::New("glColor3s"), _gl_glColor3s->GetFunction());

    Local<FunctionTemplate> _gl_glColor3sv = FunctionTemplate::New(gl_glColor3sv);
    target->Set(String::New("glColor3sv"), _gl_glColor3sv->GetFunction());

    Local<FunctionTemplate> _gl_glColor3ub = FunctionTemplate::New(gl_glColor3ub);
    target->Set(String::New("glColor3ub"), _gl_glColor3ub->GetFunction());

    Local<FunctionTemplate> _gl_glColor3ubv = FunctionTemplate::New(gl_glColor3ubv);
    target->Set(String::New("glColor3ubv"), _gl_glColor3ubv->GetFunction());

    Local<FunctionTemplate> _gl_glColor3ui = FunctionTemplate::New(gl_glColor3ui);
    target->Set(String::New("glColor3ui"), _gl_glColor3ui->GetFunction());

    Local<FunctionTemplate> _gl_glColor3uiv = FunctionTemplate::New(gl_glColor3uiv);
    target->Set(String::New("glColor3uiv"), _gl_glColor3uiv->GetFunction());

    Local<FunctionTemplate> _gl_glColor3us = FunctionTemplate::New(gl_glColor3us);
    target->Set(String::New("glColor3us"), _gl_glColor3us->GetFunction());

    Local<FunctionTemplate> _gl_glColor3usv = FunctionTemplate::New(gl_glColor3usv);
    target->Set(String::New("glColor3usv"), _gl_glColor3usv->GetFunction());

    Local<FunctionTemplate> _gl_glColor4b = FunctionTemplate::New(gl_glColor4b);
    target->Set(String::New("glColor4b"), _gl_glColor4b->GetFunction());

    Local<FunctionTemplate> _gl_glColor4bv = FunctionTemplate::New(gl_glColor4bv);
    target->Set(String::New("glColor4bv"), _gl_glColor4bv->GetFunction());

    Local<FunctionTemplate> _gl_glColor4d = FunctionTemplate::New(gl_glColor4d);
    target->Set(String::New("glColor4d"), _gl_glColor4d->GetFunction());

    Local<FunctionTemplate> _gl_glColor4dv = FunctionTemplate::New(gl_glColor4dv);
    target->Set(String::New("glColor4dv"), _gl_glColor4dv->GetFunction());

    Local<FunctionTemplate> _gl_glColor4f = FunctionTemplate::New(gl_glColor4f);
    target->Set(String::New("glColor4f"), _gl_glColor4f->GetFunction());

    Local<FunctionTemplate> _gl_glColor4fv = FunctionTemplate::New(gl_glColor4fv);
    target->Set(String::New("glColor4fv"), _gl_glColor4fv->GetFunction());

    Local<FunctionTemplate> _gl_glColor4i = FunctionTemplate::New(gl_glColor4i);
    target->Set(String::New("glColor4i"), _gl_glColor4i->GetFunction());

    Local<FunctionTemplate> _gl_glColor4iv = FunctionTemplate::New(gl_glColor4iv);
    target->Set(String::New("glColor4iv"), _gl_glColor4iv->GetFunction());

    Local<FunctionTemplate> _gl_glColor4s = FunctionTemplate::New(gl_glColor4s);
    target->Set(String::New("glColor4s"), _gl_glColor4s->GetFunction());

    Local<FunctionTemplate> _gl_glColor4sv = FunctionTemplate::New(gl_glColor4sv);
    target->Set(String::New("glColor4sv"), _gl_glColor4sv->GetFunction());

    Local<FunctionTemplate> _gl_glColor4ub = FunctionTemplate::New(gl_glColor4ub);
    target->Set(String::New("glColor4ub"), _gl_glColor4ub->GetFunction());

    Local<FunctionTemplate> _gl_glColor4ubv = FunctionTemplate::New(gl_glColor4ubv);
    target->Set(String::New("glColor4ubv"), _gl_glColor4ubv->GetFunction());

    Local<FunctionTemplate> _gl_glColor4ui = FunctionTemplate::New(gl_glColor4ui);
    target->Set(String::New("glColor4ui"), _gl_glColor4ui->GetFunction());

    Local<FunctionTemplate> _gl_glColor4uiv = FunctionTemplate::New(gl_glColor4uiv);
    target->Set(String::New("glColor4uiv"), _gl_glColor4uiv->GetFunction());

    Local<FunctionTemplate> _gl_glColor4us = FunctionTemplate::New(gl_glColor4us);
    target->Set(String::New("glColor4us"), _gl_glColor4us->GetFunction());

    Local<FunctionTemplate> _gl_glColor4usv = FunctionTemplate::New(gl_glColor4usv);
    target->Set(String::New("glColor4usv"), _gl_glColor4usv->GetFunction());

    Local<FunctionTemplate> _gl_glColorMask = FunctionTemplate::New(gl_glColorMask);
    target->Set(String::New("glColorMask"), _gl_glColorMask->GetFunction());

    Local<FunctionTemplate> _gl_glColorMaterial = FunctionTemplate::New(gl_glColorMaterial);
    target->Set(String::New("glColorMaterial"), _gl_glColorMaterial->GetFunction());

    Local<FunctionTemplate> _gl_glColorPointer = FunctionTemplate::New(gl_glColorPointer);
    target->Set(String::New("glColorPointer"), _gl_glColorPointer->GetFunction());

    Local<FunctionTemplate> _gl_glColorSubTable = FunctionTemplate::New(gl_glColorSubTable);
    target->Set(String::New("glColorSubTable"), _gl_glColorSubTable->GetFunction());

    Local<FunctionTemplate> _gl_glColorTable = FunctionTemplate::New(gl_glColorTable);
    target->Set(String::New("glColorTable"), _gl_glColorTable->GetFunction());

    Local<FunctionTemplate> _gl_glColorTableParameterfv = FunctionTemplate::New(gl_glColorTableParameterfv);
    target->Set(String::New("glColorTableParameterfv"), _gl_glColorTableParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glColorTableParameteriv = FunctionTemplate::New(gl_glColorTableParameteriv);
    target->Set(String::New("glColorTableParameteriv"), _gl_glColorTableParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glConvolutionFilter1D = FunctionTemplate::New(gl_glConvolutionFilter1D);
    target->Set(String::New("glConvolutionFilter1D"), _gl_glConvolutionFilter1D->GetFunction());

    Local<FunctionTemplate> _gl_glConvolutionFilter2D = FunctionTemplate::New(gl_glConvolutionFilter2D);
    target->Set(String::New("glConvolutionFilter2D"), _gl_glConvolutionFilter2D->GetFunction());

    Local<FunctionTemplate> _gl_glConvolutionParameterf = FunctionTemplate::New(gl_glConvolutionParameterf);
    target->Set(String::New("glConvolutionParameterf"), _gl_glConvolutionParameterf->GetFunction());

    Local<FunctionTemplate> _gl_glConvolutionParameterfv = FunctionTemplate::New(gl_glConvolutionParameterfv);
    target->Set(String::New("glConvolutionParameterfv"), _gl_glConvolutionParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glConvolutionParameteri = FunctionTemplate::New(gl_glConvolutionParameteri);
    target->Set(String::New("glConvolutionParameteri"), _gl_glConvolutionParameteri->GetFunction());

    Local<FunctionTemplate> _gl_glConvolutionParameteriv = FunctionTemplate::New(gl_glConvolutionParameteriv);
    target->Set(String::New("glConvolutionParameteriv"), _gl_glConvolutionParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glCopyColorSubTable = FunctionTemplate::New(gl_glCopyColorSubTable);
    target->Set(String::New("glCopyColorSubTable"), _gl_glCopyColorSubTable->GetFunction());

    Local<FunctionTemplate> _gl_glCopyColorTable = FunctionTemplate::New(gl_glCopyColorTable);
    target->Set(String::New("glCopyColorTable"), _gl_glCopyColorTable->GetFunction());

    Local<FunctionTemplate> _gl_glCopyConvolutionFilter1D = FunctionTemplate::New(gl_glCopyConvolutionFilter1D);
    target->Set(String::New("glCopyConvolutionFilter1D"), _gl_glCopyConvolutionFilter1D->GetFunction());

    Local<FunctionTemplate> _gl_glCopyConvolutionFilter2D = FunctionTemplate::New(gl_glCopyConvolutionFilter2D);
    target->Set(String::New("glCopyConvolutionFilter2D"), _gl_glCopyConvolutionFilter2D->GetFunction());

    Local<FunctionTemplate> _gl_glCopyPixels = FunctionTemplate::New(gl_glCopyPixels);
    target->Set(String::New("glCopyPixels"), _gl_glCopyPixels->GetFunction());

    Local<FunctionTemplate> _gl_glCopyTexImage1D = FunctionTemplate::New(gl_glCopyTexImage1D);
    target->Set(String::New("glCopyTexImage1D"), _gl_glCopyTexImage1D->GetFunction());

    Local<FunctionTemplate> _gl_glCopyTexImage2D = FunctionTemplate::New(gl_glCopyTexImage2D);
    target->Set(String::New("glCopyTexImage2D"), _gl_glCopyTexImage2D->GetFunction());

    Local<FunctionTemplate> _gl_glCopyTexSubImage1D = FunctionTemplate::New(gl_glCopyTexSubImage1D);
    target->Set(String::New("glCopyTexSubImage1D"), _gl_glCopyTexSubImage1D->GetFunction());

    Local<FunctionTemplate> _gl_glCopyTexSubImage2D = FunctionTemplate::New(gl_glCopyTexSubImage2D);
    target->Set(String::New("glCopyTexSubImage2D"), _gl_glCopyTexSubImage2D->GetFunction());

    Local<FunctionTemplate> _gl_glCopyTexSubImage3D = FunctionTemplate::New(gl_glCopyTexSubImage3D);
    target->Set(String::New("glCopyTexSubImage3D"), _gl_glCopyTexSubImage3D->GetFunction());

    Local<FunctionTemplate> _gl_glCullFace = FunctionTemplate::New(gl_glCullFace);
    target->Set(String::New("glCullFace"), _gl_glCullFace->GetFunction());

    Local<FunctionTemplate> _gl_glDeleteLists = FunctionTemplate::New(gl_glDeleteLists);
    target->Set(String::New("glDeleteLists"), _gl_glDeleteLists->GetFunction());

    Local<FunctionTemplate> _gl_glDeleteTextures = FunctionTemplate::New(gl_glDeleteTextures);
    target->Set(String::New("glDeleteTextures"), _gl_glDeleteTextures->GetFunction());

    Local<FunctionTemplate> _gl_glDepthFunc = FunctionTemplate::New(gl_glDepthFunc);
    target->Set(String::New("glDepthFunc"), _gl_glDepthFunc->GetFunction());

    Local<FunctionTemplate> _gl_glDepthMask = FunctionTemplate::New(gl_glDepthMask);
    target->Set(String::New("glDepthMask"), _gl_glDepthMask->GetFunction());

    Local<FunctionTemplate> _gl_glDepthRange = FunctionTemplate::New(gl_glDepthRange);
    target->Set(String::New("glDepthRange"), _gl_glDepthRange->GetFunction());

    Local<FunctionTemplate> _gl_glDisable = FunctionTemplate::New(gl_glDisable);
    target->Set(String::New("glDisable"), _gl_glDisable->GetFunction());

    Local<FunctionTemplate> _gl_glDisableClientState = FunctionTemplate::New(gl_glDisableClientState);
    target->Set(String::New("glDisableClientState"), _gl_glDisableClientState->GetFunction());

    Local<FunctionTemplate> _gl_glDrawArrays = FunctionTemplate::New(gl_glDrawArrays);
    target->Set(String::New("glDrawArrays"), _gl_glDrawArrays->GetFunction());

    Local<FunctionTemplate> _gl_glDrawBuffer = FunctionTemplate::New(gl_glDrawBuffer);
    target->Set(String::New("glDrawBuffer"), _gl_glDrawBuffer->GetFunction());

    Local<FunctionTemplate> _gl_glDrawElements = FunctionTemplate::New(gl_glDrawElements);
    target->Set(String::New("glDrawElements"), _gl_glDrawElements->GetFunction());

    Local<FunctionTemplate> _gl_glDrawPixels = FunctionTemplate::New(gl_glDrawPixels);
    target->Set(String::New("glDrawPixels"), _gl_glDrawPixels->GetFunction());

    Local<FunctionTemplate> _gl_glDrawRangeElements = FunctionTemplate::New(gl_glDrawRangeElements);
    target->Set(String::New("glDrawRangeElements"), _gl_glDrawRangeElements->GetFunction());

    Local<FunctionTemplate> _gl_glEdgeFlag = FunctionTemplate::New(gl_glEdgeFlag);
    target->Set(String::New("glEdgeFlag"), _gl_glEdgeFlag->GetFunction());

    Local<FunctionTemplate> _gl_glEdgeFlagPointer = FunctionTemplate::New(gl_glEdgeFlagPointer);
    target->Set(String::New("glEdgeFlagPointer"), _gl_glEdgeFlagPointer->GetFunction());

    Local<FunctionTemplate> _gl_glEdgeFlagv = FunctionTemplate::New(gl_glEdgeFlagv);
    target->Set(String::New("glEdgeFlagv"), _gl_glEdgeFlagv->GetFunction());

    Local<FunctionTemplate> _gl_glEnable = FunctionTemplate::New(gl_glEnable);
    target->Set(String::New("glEnable"), _gl_glEnable->GetFunction());

    Local<FunctionTemplate> _gl_glEnableClientState = FunctionTemplate::New(gl_glEnableClientState);
    target->Set(String::New("glEnableClientState"), _gl_glEnableClientState->GetFunction());

    Local<FunctionTemplate> _gl_glEnd = FunctionTemplate::New(gl_glEnd);
    target->Set(String::New("glEnd"), _gl_glEnd->GetFunction());

    Local<FunctionTemplate> _gl_glEndList = FunctionTemplate::New(gl_glEndList);
    target->Set(String::New("glEndList"), _gl_glEndList->GetFunction());

    Local<FunctionTemplate> _gl_glEvalCoord1d = FunctionTemplate::New(gl_glEvalCoord1d);
    target->Set(String::New("glEvalCoord1d"), _gl_glEvalCoord1d->GetFunction());

    Local<FunctionTemplate> _gl_glEvalCoord1dv = FunctionTemplate::New(gl_glEvalCoord1dv);
    target->Set(String::New("glEvalCoord1dv"), _gl_glEvalCoord1dv->GetFunction());

    Local<FunctionTemplate> _gl_glEvalCoord1f = FunctionTemplate::New(gl_glEvalCoord1f);
    target->Set(String::New("glEvalCoord1f"), _gl_glEvalCoord1f->GetFunction());

    Local<FunctionTemplate> _gl_glEvalCoord1fv = FunctionTemplate::New(gl_glEvalCoord1fv);
    target->Set(String::New("glEvalCoord1fv"), _gl_glEvalCoord1fv->GetFunction());

    Local<FunctionTemplate> _gl_glEvalCoord2d = FunctionTemplate::New(gl_glEvalCoord2d);
    target->Set(String::New("glEvalCoord2d"), _gl_glEvalCoord2d->GetFunction());

    Local<FunctionTemplate> _gl_glEvalCoord2dv = FunctionTemplate::New(gl_glEvalCoord2dv);
    target->Set(String::New("glEvalCoord2dv"), _gl_glEvalCoord2dv->GetFunction());

    Local<FunctionTemplate> _gl_glEvalCoord2f = FunctionTemplate::New(gl_glEvalCoord2f);
    target->Set(String::New("glEvalCoord2f"), _gl_glEvalCoord2f->GetFunction());

    Local<FunctionTemplate> _gl_glEvalCoord2fv = FunctionTemplate::New(gl_glEvalCoord2fv);
    target->Set(String::New("glEvalCoord2fv"), _gl_glEvalCoord2fv->GetFunction());

    Local<FunctionTemplate> _gl_glEvalMesh1 = FunctionTemplate::New(gl_glEvalMesh1);
    target->Set(String::New("glEvalMesh1"), _gl_glEvalMesh1->GetFunction());

    Local<FunctionTemplate> _gl_glEvalMesh2 = FunctionTemplate::New(gl_glEvalMesh2);
    target->Set(String::New("glEvalMesh2"), _gl_glEvalMesh2->GetFunction());

    Local<FunctionTemplate> _gl_glEvalPoint1 = FunctionTemplate::New(gl_glEvalPoint1);
    target->Set(String::New("glEvalPoint1"), _gl_glEvalPoint1->GetFunction());

    Local<FunctionTemplate> _gl_glEvalPoint2 = FunctionTemplate::New(gl_glEvalPoint2);
    target->Set(String::New("glEvalPoint2"), _gl_glEvalPoint2->GetFunction());

    Local<FunctionTemplate> _gl_glFeedbackBuffer = FunctionTemplate::New(gl_glFeedbackBuffer);
    target->Set(String::New("glFeedbackBuffer"), _gl_glFeedbackBuffer->GetFunction());

    Local<FunctionTemplate> _gl_glFinish = FunctionTemplate::New(gl_glFinish);
    target->Set(String::New("glFinish"), _gl_glFinish->GetFunction());

    Local<FunctionTemplate> _gl_glFlush = FunctionTemplate::New(gl_glFlush);
    target->Set(String::New("glFlush"), _gl_glFlush->GetFunction());

    Local<FunctionTemplate> _gl_glFogf = FunctionTemplate::New(gl_glFogf);
    target->Set(String::New("glFogf"), _gl_glFogf->GetFunction());

    Local<FunctionTemplate> _gl_glFogfv = FunctionTemplate::New(gl_glFogfv);
    target->Set(String::New("glFogfv"), _gl_glFogfv->GetFunction());

    Local<FunctionTemplate> _gl_glFogi = FunctionTemplate::New(gl_glFogi);
    target->Set(String::New("glFogi"), _gl_glFogi->GetFunction());

    Local<FunctionTemplate> _gl_glFogiv = FunctionTemplate::New(gl_glFogiv);
    target->Set(String::New("glFogiv"), _gl_glFogiv->GetFunction());

    Local<FunctionTemplate> _gl_glFrontFace = FunctionTemplate::New(gl_glFrontFace);
    target->Set(String::New("glFrontFace"), _gl_glFrontFace->GetFunction());

    Local<FunctionTemplate> _gl_glFrustum = FunctionTemplate::New(gl_glFrustum);
    target->Set(String::New("glFrustum"), _gl_glFrustum->GetFunction());

    Local<FunctionTemplate> _gl_glGenLists = FunctionTemplate::New(gl_glGenLists);
    target->Set(String::New("glGenLists"), _gl_glGenLists->GetFunction());

    Local<FunctionTemplate> _gl_glGenTextures = FunctionTemplate::New(gl_glGenTextures);
    target->Set(String::New("glGenTextures"), _gl_glGenTextures->GetFunction());

    Local<FunctionTemplate> _gl_glGetBooleanv = FunctionTemplate::New(gl_glGetBooleanv);
    target->Set(String::New("glGetBooleanv"), _gl_glGetBooleanv->GetFunction());

    Local<FunctionTemplate> _gl_glGetClipPlane = FunctionTemplate::New(gl_glGetClipPlane);
    target->Set(String::New("glGetClipPlane"), _gl_glGetClipPlane->GetFunction());

    Local<FunctionTemplate> _gl_glGetColorTable = FunctionTemplate::New(gl_glGetColorTable);
    target->Set(String::New("glGetColorTable"), _gl_glGetColorTable->GetFunction());

    Local<FunctionTemplate> _gl_glGetColorTableParameterfv = FunctionTemplate::New(gl_glGetColorTableParameterfv);
    target->Set(String::New("glGetColorTableParameterfv"), _gl_glGetColorTableParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetColorTableParameteriv = FunctionTemplate::New(gl_glGetColorTableParameteriv);
    target->Set(String::New("glGetColorTableParameteriv"), _gl_glGetColorTableParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glGetConvolutionFilter = FunctionTemplate::New(gl_glGetConvolutionFilter);
    target->Set(String::New("glGetConvolutionFilter"), _gl_glGetConvolutionFilter->GetFunction());

    Local<FunctionTemplate> _gl_glGetConvolutionParameterfv = FunctionTemplate::New(gl_glGetConvolutionParameterfv);
    target->Set(String::New("glGetConvolutionParameterfv"), _gl_glGetConvolutionParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetConvolutionParameteriv = FunctionTemplate::New(gl_glGetConvolutionParameteriv);
    target->Set(String::New("glGetConvolutionParameteriv"), _gl_glGetConvolutionParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glGetDoublev = FunctionTemplate::New(gl_glGetDoublev);
    target->Set(String::New("glGetDoublev"), _gl_glGetDoublev->GetFunction());

    Local<FunctionTemplate> _gl_glGetError = FunctionTemplate::New(gl_glGetError);
    target->Set(String::New("glGetError"), _gl_glGetError->GetFunction());

    Local<FunctionTemplate> _gl_glGetFloatv = FunctionTemplate::New(gl_glGetFloatv);
    target->Set(String::New("glGetFloatv"), _gl_glGetFloatv->GetFunction());

    Local<FunctionTemplate> _gl_glGetHistogram = FunctionTemplate::New(gl_glGetHistogram);
    target->Set(String::New("glGetHistogram"), _gl_glGetHistogram->GetFunction());

    Local<FunctionTemplate> _gl_glGetHistogramParameterfv = FunctionTemplate::New(gl_glGetHistogramParameterfv);
    target->Set(String::New("glGetHistogramParameterfv"), _gl_glGetHistogramParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetHistogramParameteriv = FunctionTemplate::New(gl_glGetHistogramParameteriv);
    target->Set(String::New("glGetHistogramParameteriv"), _gl_glGetHistogramParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glGetIntegerv = FunctionTemplate::New(gl_glGetIntegerv);
    target->Set(String::New("glGetIntegerv"), _gl_glGetIntegerv->GetFunction());

    Local<FunctionTemplate> _gl_glGetLightfv = FunctionTemplate::New(gl_glGetLightfv);
    target->Set(String::New("glGetLightfv"), _gl_glGetLightfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetLightiv = FunctionTemplate::New(gl_glGetLightiv);
    target->Set(String::New("glGetLightiv"), _gl_glGetLightiv->GetFunction());

    Local<FunctionTemplate> _gl_glGetMapdv = FunctionTemplate::New(gl_glGetMapdv);
    target->Set(String::New("glGetMapdv"), _gl_glGetMapdv->GetFunction());

    Local<FunctionTemplate> _gl_glGetMapfv = FunctionTemplate::New(gl_glGetMapfv);
    target->Set(String::New("glGetMapfv"), _gl_glGetMapfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetMapiv = FunctionTemplate::New(gl_glGetMapiv);
    target->Set(String::New("glGetMapiv"), _gl_glGetMapiv->GetFunction());

    Local<FunctionTemplate> _gl_glGetMaterialfv = FunctionTemplate::New(gl_glGetMaterialfv);
    target->Set(String::New("glGetMaterialfv"), _gl_glGetMaterialfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetMaterialiv = FunctionTemplate::New(gl_glGetMaterialiv);
    target->Set(String::New("glGetMaterialiv"), _gl_glGetMaterialiv->GetFunction());

    Local<FunctionTemplate> _gl_glGetMinmax = FunctionTemplate::New(gl_glGetMinmax);
    target->Set(String::New("glGetMinmax"), _gl_glGetMinmax->GetFunction());

    Local<FunctionTemplate> _gl_glGetMinmaxParameterfv = FunctionTemplate::New(gl_glGetMinmaxParameterfv);
    target->Set(String::New("glGetMinmaxParameterfv"), _gl_glGetMinmaxParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetMinmaxParameteriv = FunctionTemplate::New(gl_glGetMinmaxParameteriv);
    target->Set(String::New("glGetMinmaxParameteriv"), _gl_glGetMinmaxParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glGetPixelMapfv = FunctionTemplate::New(gl_glGetPixelMapfv);
    target->Set(String::New("glGetPixelMapfv"), _gl_glGetPixelMapfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetPixelMapuiv = FunctionTemplate::New(gl_glGetPixelMapuiv);
    target->Set(String::New("glGetPixelMapuiv"), _gl_glGetPixelMapuiv->GetFunction());

    Local<FunctionTemplate> _gl_glGetPixelMapusv = FunctionTemplate::New(gl_glGetPixelMapusv);
    target->Set(String::New("glGetPixelMapusv"), _gl_glGetPixelMapusv->GetFunction());

    Local<FunctionTemplate> _gl_glGetPointerv = FunctionTemplate::New(gl_glGetPointerv);
    target->Set(String::New("glGetPointerv"), _gl_glGetPointerv->GetFunction());

    Local<FunctionTemplate> _gl_glGetPolygonStipple = FunctionTemplate::New(gl_glGetPolygonStipple);
    target->Set(String::New("glGetPolygonStipple"), _gl_glGetPolygonStipple->GetFunction());

    Local<FunctionTemplate> _gl_glGetSeparableFilter = FunctionTemplate::New(gl_glGetSeparableFilter);
    target->Set(String::New("glGetSeparableFilter"), _gl_glGetSeparableFilter->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexEnvfv = FunctionTemplate::New(gl_glGetTexEnvfv);
    target->Set(String::New("glGetTexEnvfv"), _gl_glGetTexEnvfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexEnviv = FunctionTemplate::New(gl_glGetTexEnviv);
    target->Set(String::New("glGetTexEnviv"), _gl_glGetTexEnviv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexGendv = FunctionTemplate::New(gl_glGetTexGendv);
    target->Set(String::New("glGetTexGendv"), _gl_glGetTexGendv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexGenfv = FunctionTemplate::New(gl_glGetTexGenfv);
    target->Set(String::New("glGetTexGenfv"), _gl_glGetTexGenfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexGeniv = FunctionTemplate::New(gl_glGetTexGeniv);
    target->Set(String::New("glGetTexGeniv"), _gl_glGetTexGeniv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexImage = FunctionTemplate::New(gl_glGetTexImage);
    target->Set(String::New("glGetTexImage"), _gl_glGetTexImage->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexLevelParameterfv = FunctionTemplate::New(gl_glGetTexLevelParameterfv);
    target->Set(String::New("glGetTexLevelParameterfv"), _gl_glGetTexLevelParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexLevelParameteriv = FunctionTemplate::New(gl_glGetTexLevelParameteriv);
    target->Set(String::New("glGetTexLevelParameteriv"), _gl_glGetTexLevelParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexParameterfv = FunctionTemplate::New(gl_glGetTexParameterfv);
    target->Set(String::New("glGetTexParameterfv"), _gl_glGetTexParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexParameteriv = FunctionTemplate::New(gl_glGetTexParameteriv);
    target->Set(String::New("glGetTexParameteriv"), _gl_glGetTexParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glHint = FunctionTemplate::New(gl_glHint);
    target->Set(String::New("glHint"), _gl_glHint->GetFunction());

    Local<FunctionTemplate> _gl_glHistogram = FunctionTemplate::New(gl_glHistogram);
    target->Set(String::New("glHistogram"), _gl_glHistogram->GetFunction());

    Local<FunctionTemplate> _gl_glIndexMask = FunctionTemplate::New(gl_glIndexMask);
    target->Set(String::New("glIndexMask"), _gl_glIndexMask->GetFunction());

    Local<FunctionTemplate> _gl_glIndexPointer = FunctionTemplate::New(gl_glIndexPointer);
    target->Set(String::New("glIndexPointer"), _gl_glIndexPointer->GetFunction());

    Local<FunctionTemplate> _gl_glIndexd = FunctionTemplate::New(gl_glIndexd);
    target->Set(String::New("glIndexd"), _gl_glIndexd->GetFunction());

    Local<FunctionTemplate> _gl_glIndexdv = FunctionTemplate::New(gl_glIndexdv);
    target->Set(String::New("glIndexdv"), _gl_glIndexdv->GetFunction());

    Local<FunctionTemplate> _gl_glIndexf = FunctionTemplate::New(gl_glIndexf);
    target->Set(String::New("glIndexf"), _gl_glIndexf->GetFunction());

    Local<FunctionTemplate> _gl_glIndexfv = FunctionTemplate::New(gl_glIndexfv);
    target->Set(String::New("glIndexfv"), _gl_glIndexfv->GetFunction());

    Local<FunctionTemplate> _gl_glIndexi = FunctionTemplate::New(gl_glIndexi);
    target->Set(String::New("glIndexi"), _gl_glIndexi->GetFunction());

    Local<FunctionTemplate> _gl_glIndexiv = FunctionTemplate::New(gl_glIndexiv);
    target->Set(String::New("glIndexiv"), _gl_glIndexiv->GetFunction());

    Local<FunctionTemplate> _gl_glIndexs = FunctionTemplate::New(gl_glIndexs);
    target->Set(String::New("glIndexs"), _gl_glIndexs->GetFunction());

    Local<FunctionTemplate> _gl_glIndexsv = FunctionTemplate::New(gl_glIndexsv);
    target->Set(String::New("glIndexsv"), _gl_glIndexsv->GetFunction());

    Local<FunctionTemplate> _gl_glIndexub = FunctionTemplate::New(gl_glIndexub);
    target->Set(String::New("glIndexub"), _gl_glIndexub->GetFunction());

    Local<FunctionTemplate> _gl_glIndexubv = FunctionTemplate::New(gl_glIndexubv);
    target->Set(String::New("glIndexubv"), _gl_glIndexubv->GetFunction());

    Local<FunctionTemplate> _gl_glInitNames = FunctionTemplate::New(gl_glInitNames);
    target->Set(String::New("glInitNames"), _gl_glInitNames->GetFunction());

    Local<FunctionTemplate> _gl_glInterleavedArrays = FunctionTemplate::New(gl_glInterleavedArrays);
    target->Set(String::New("glInterleavedArrays"), _gl_glInterleavedArrays->GetFunction());

    Local<FunctionTemplate> _gl_glIsEnabled = FunctionTemplate::New(gl_glIsEnabled);
    target->Set(String::New("glIsEnabled"), _gl_glIsEnabled->GetFunction());

    Local<FunctionTemplate> _gl_glIsList = FunctionTemplate::New(gl_glIsList);
    target->Set(String::New("glIsList"), _gl_glIsList->GetFunction());

    Local<FunctionTemplate> _gl_glIsTexture = FunctionTemplate::New(gl_glIsTexture);
    target->Set(String::New("glIsTexture"), _gl_glIsTexture->GetFunction());

    Local<FunctionTemplate> _gl_glLightModelf = FunctionTemplate::New(gl_glLightModelf);
    target->Set(String::New("glLightModelf"), _gl_glLightModelf->GetFunction());

    Local<FunctionTemplate> _gl_glLightModelfv = FunctionTemplate::New(gl_glLightModelfv);
    target->Set(String::New("glLightModelfv"), _gl_glLightModelfv->GetFunction());

    Local<FunctionTemplate> _gl_glLightModeli = FunctionTemplate::New(gl_glLightModeli);
    target->Set(String::New("glLightModeli"), _gl_glLightModeli->GetFunction());

    Local<FunctionTemplate> _gl_glLightModeliv = FunctionTemplate::New(gl_glLightModeliv);
    target->Set(String::New("glLightModeliv"), _gl_glLightModeliv->GetFunction());

    Local<FunctionTemplate> _gl_glLightf = FunctionTemplate::New(gl_glLightf);
    target->Set(String::New("glLightf"), _gl_glLightf->GetFunction());

    Local<FunctionTemplate> _gl_glLightfv = FunctionTemplate::New(gl_glLightfv);
    target->Set(String::New("glLightfv"), _gl_glLightfv->GetFunction());

    Local<FunctionTemplate> _gl_glLighti = FunctionTemplate::New(gl_glLighti);
    target->Set(String::New("glLighti"), _gl_glLighti->GetFunction());

    Local<FunctionTemplate> _gl_glLightiv = FunctionTemplate::New(gl_glLightiv);
    target->Set(String::New("glLightiv"), _gl_glLightiv->GetFunction());

    Local<FunctionTemplate> _gl_glLineStipple = FunctionTemplate::New(gl_glLineStipple);
    target->Set(String::New("glLineStipple"), _gl_glLineStipple->GetFunction());

    Local<FunctionTemplate> _gl_glLineWidth = FunctionTemplate::New(gl_glLineWidth);
    target->Set(String::New("glLineWidth"), _gl_glLineWidth->GetFunction());

    Local<FunctionTemplate> _gl_glListBase = FunctionTemplate::New(gl_glListBase);
    target->Set(String::New("glListBase"), _gl_glListBase->GetFunction());

    Local<FunctionTemplate> _gl_glLoadIdentity = FunctionTemplate::New(gl_glLoadIdentity);
    target->Set(String::New("glLoadIdentity"), _gl_glLoadIdentity->GetFunction());

    Local<FunctionTemplate> _gl_glLoadMatrixd = FunctionTemplate::New(gl_glLoadMatrixd);
    target->Set(String::New("glLoadMatrixd"), _gl_glLoadMatrixd->GetFunction());

    Local<FunctionTemplate> _gl_glLoadMatrixf = FunctionTemplate::New(gl_glLoadMatrixf);
    target->Set(String::New("glLoadMatrixf"), _gl_glLoadMatrixf->GetFunction());

    Local<FunctionTemplate> _gl_glLoadName = FunctionTemplate::New(gl_glLoadName);
    target->Set(String::New("glLoadName"), _gl_glLoadName->GetFunction());

    Local<FunctionTemplate> _gl_glLogicOp = FunctionTemplate::New(gl_glLogicOp);
    target->Set(String::New("glLogicOp"), _gl_glLogicOp->GetFunction());

    Local<FunctionTemplate> _gl_glMap1d = FunctionTemplate::New(gl_glMap1d);
    target->Set(String::New("glMap1d"), _gl_glMap1d->GetFunction());

    Local<FunctionTemplate> _gl_glMap1f = FunctionTemplate::New(gl_glMap1f);
    target->Set(String::New("glMap1f"), _gl_glMap1f->GetFunction());

    Local<FunctionTemplate> _gl_glMap2d = FunctionTemplate::New(gl_glMap2d);
    target->Set(String::New("glMap2d"), _gl_glMap2d->GetFunction());

    Local<FunctionTemplate> _gl_glMap2f = FunctionTemplate::New(gl_glMap2f);
    target->Set(String::New("glMap2f"), _gl_glMap2f->GetFunction());

    Local<FunctionTemplate> _gl_glMapGrid1d = FunctionTemplate::New(gl_glMapGrid1d);
    target->Set(String::New("glMapGrid1d"), _gl_glMapGrid1d->GetFunction());

    Local<FunctionTemplate> _gl_glMapGrid1f = FunctionTemplate::New(gl_glMapGrid1f);
    target->Set(String::New("glMapGrid1f"), _gl_glMapGrid1f->GetFunction());

    Local<FunctionTemplate> _gl_glMapGrid2d = FunctionTemplate::New(gl_glMapGrid2d);
    target->Set(String::New("glMapGrid2d"), _gl_glMapGrid2d->GetFunction());

    Local<FunctionTemplate> _gl_glMapGrid2f = FunctionTemplate::New(gl_glMapGrid2f);
    target->Set(String::New("glMapGrid2f"), _gl_glMapGrid2f->GetFunction());

    Local<FunctionTemplate> _gl_glMaterialf = FunctionTemplate::New(gl_glMaterialf);
    target->Set(String::New("glMaterialf"), _gl_glMaterialf->GetFunction());

    Local<FunctionTemplate> _gl_glMaterialfv = FunctionTemplate::New(gl_glMaterialfv);
    target->Set(String::New("glMaterialfv"), _gl_glMaterialfv->GetFunction());

    Local<FunctionTemplate> _gl_glMateriali = FunctionTemplate::New(gl_glMateriali);
    target->Set(String::New("glMateriali"), _gl_glMateriali->GetFunction());

    Local<FunctionTemplate> _gl_glMaterialiv = FunctionTemplate::New(gl_glMaterialiv);
    target->Set(String::New("glMaterialiv"), _gl_glMaterialiv->GetFunction());

    Local<FunctionTemplate> _gl_glMatrixMode = FunctionTemplate::New(gl_glMatrixMode);
    target->Set(String::New("glMatrixMode"), _gl_glMatrixMode->GetFunction());

    Local<FunctionTemplate> _gl_glMinmax = FunctionTemplate::New(gl_glMinmax);
    target->Set(String::New("glMinmax"), _gl_glMinmax->GetFunction());

    Local<FunctionTemplate> _gl_glMultMatrixd = FunctionTemplate::New(gl_glMultMatrixd);
    target->Set(String::New("glMultMatrixd"), _gl_glMultMatrixd->GetFunction());

    Local<FunctionTemplate> _gl_glMultMatrixf = FunctionTemplate::New(gl_glMultMatrixf);
    target->Set(String::New("glMultMatrixf"), _gl_glMultMatrixf->GetFunction());

    Local<FunctionTemplate> _gl_glNewList = FunctionTemplate::New(gl_glNewList);
    target->Set(String::New("glNewList"), _gl_glNewList->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3b = FunctionTemplate::New(gl_glNormal3b);
    target->Set(String::New("glNormal3b"), _gl_glNormal3b->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3bv = FunctionTemplate::New(gl_glNormal3bv);
    target->Set(String::New("glNormal3bv"), _gl_glNormal3bv->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3d = FunctionTemplate::New(gl_glNormal3d);
    target->Set(String::New("glNormal3d"), _gl_glNormal3d->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3dv = FunctionTemplate::New(gl_glNormal3dv);
    target->Set(String::New("glNormal3dv"), _gl_glNormal3dv->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3f = FunctionTemplate::New(gl_glNormal3f);
    target->Set(String::New("glNormal3f"), _gl_glNormal3f->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3fv = FunctionTemplate::New(gl_glNormal3fv);
    target->Set(String::New("glNormal3fv"), _gl_glNormal3fv->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3i = FunctionTemplate::New(gl_glNormal3i);
    target->Set(String::New("glNormal3i"), _gl_glNormal3i->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3iv = FunctionTemplate::New(gl_glNormal3iv);
    target->Set(String::New("glNormal3iv"), _gl_glNormal3iv->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3s = FunctionTemplate::New(gl_glNormal3s);
    target->Set(String::New("glNormal3s"), _gl_glNormal3s->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3sv = FunctionTemplate::New(gl_glNormal3sv);
    target->Set(String::New("glNormal3sv"), _gl_glNormal3sv->GetFunction());

    Local<FunctionTemplate> _gl_glNormalPointer = FunctionTemplate::New(gl_glNormalPointer);
    target->Set(String::New("glNormalPointer"), _gl_glNormalPointer->GetFunction());

    Local<FunctionTemplate> _gl_glOrtho = FunctionTemplate::New(gl_glOrtho);
    target->Set(String::New("glOrtho"), _gl_glOrtho->GetFunction());

    Local<FunctionTemplate> _gl_glPassThrough = FunctionTemplate::New(gl_glPassThrough);
    target->Set(String::New("glPassThrough"), _gl_glPassThrough->GetFunction());

    Local<FunctionTemplate> _gl_glPixelMapfv = FunctionTemplate::New(gl_glPixelMapfv);
    target->Set(String::New("glPixelMapfv"), _gl_glPixelMapfv->GetFunction());

    Local<FunctionTemplate> _gl_glPixelMapuiv = FunctionTemplate::New(gl_glPixelMapuiv);
    target->Set(String::New("glPixelMapuiv"), _gl_glPixelMapuiv->GetFunction());

    Local<FunctionTemplate> _gl_glPixelMapusv = FunctionTemplate::New(gl_glPixelMapusv);
    target->Set(String::New("glPixelMapusv"), _gl_glPixelMapusv->GetFunction());

    Local<FunctionTemplate> _gl_glPixelStoref = FunctionTemplate::New(gl_glPixelStoref);
    target->Set(String::New("glPixelStoref"), _gl_glPixelStoref->GetFunction());

    Local<FunctionTemplate> _gl_glPixelStorei = FunctionTemplate::New(gl_glPixelStorei);
    target->Set(String::New("glPixelStorei"), _gl_glPixelStorei->GetFunction());

    Local<FunctionTemplate> _gl_glPixelTransferf = FunctionTemplate::New(gl_glPixelTransferf);
    target->Set(String::New("glPixelTransferf"), _gl_glPixelTransferf->GetFunction());

    Local<FunctionTemplate> _gl_glPixelTransferi = FunctionTemplate::New(gl_glPixelTransferi);
    target->Set(String::New("glPixelTransferi"), _gl_glPixelTransferi->GetFunction());

    Local<FunctionTemplate> _gl_glPixelZoom = FunctionTemplate::New(gl_glPixelZoom);
    target->Set(String::New("glPixelZoom"), _gl_glPixelZoom->GetFunction());

    Local<FunctionTemplate> _gl_glPointSize = FunctionTemplate::New(gl_glPointSize);
    target->Set(String::New("glPointSize"), _gl_glPointSize->GetFunction());

    Local<FunctionTemplate> _gl_glPolygonMode = FunctionTemplate::New(gl_glPolygonMode);
    target->Set(String::New("glPolygonMode"), _gl_glPolygonMode->GetFunction());

    Local<FunctionTemplate> _gl_glPolygonOffset = FunctionTemplate::New(gl_glPolygonOffset);
    target->Set(String::New("glPolygonOffset"), _gl_glPolygonOffset->GetFunction());

    Local<FunctionTemplate> _gl_glPolygonStipple = FunctionTemplate::New(gl_glPolygonStipple);
    target->Set(String::New("glPolygonStipple"), _gl_glPolygonStipple->GetFunction());

    Local<FunctionTemplate> _gl_glPopAttrib = FunctionTemplate::New(gl_glPopAttrib);
    target->Set(String::New("glPopAttrib"), _gl_glPopAttrib->GetFunction());

    Local<FunctionTemplate> _gl_glPopClientAttrib = FunctionTemplate::New(gl_glPopClientAttrib);
    target->Set(String::New("glPopClientAttrib"), _gl_glPopClientAttrib->GetFunction());

    Local<FunctionTemplate> _gl_glPopMatrix = FunctionTemplate::New(gl_glPopMatrix);
    target->Set(String::New("glPopMatrix"), _gl_glPopMatrix->GetFunction());

    Local<FunctionTemplate> _gl_glPopName = FunctionTemplate::New(gl_glPopName);
    target->Set(String::New("glPopName"), _gl_glPopName->GetFunction());

    Local<FunctionTemplate> _gl_glPrioritizeTextures = FunctionTemplate::New(gl_glPrioritizeTextures);
    target->Set(String::New("glPrioritizeTextures"), _gl_glPrioritizeTextures->GetFunction());

    Local<FunctionTemplate> _gl_glPushAttrib = FunctionTemplate::New(gl_glPushAttrib);
    target->Set(String::New("glPushAttrib"), _gl_glPushAttrib->GetFunction());

    Local<FunctionTemplate> _gl_glPushClientAttrib = FunctionTemplate::New(gl_glPushClientAttrib);
    target->Set(String::New("glPushClientAttrib"), _gl_glPushClientAttrib->GetFunction());

    Local<FunctionTemplate> _gl_glPushMatrix = FunctionTemplate::New(gl_glPushMatrix);
    target->Set(String::New("glPushMatrix"), _gl_glPushMatrix->GetFunction());

    Local<FunctionTemplate> _gl_glPushName = FunctionTemplate::New(gl_glPushName);
    target->Set(String::New("glPushName"), _gl_glPushName->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos2d = FunctionTemplate::New(gl_glRasterPos2d);
    target->Set(String::New("glRasterPos2d"), _gl_glRasterPos2d->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos2dv = FunctionTemplate::New(gl_glRasterPos2dv);
    target->Set(String::New("glRasterPos2dv"), _gl_glRasterPos2dv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos2f = FunctionTemplate::New(gl_glRasterPos2f);
    target->Set(String::New("glRasterPos2f"), _gl_glRasterPos2f->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos2fv = FunctionTemplate::New(gl_glRasterPos2fv);
    target->Set(String::New("glRasterPos2fv"), _gl_glRasterPos2fv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos2i = FunctionTemplate::New(gl_glRasterPos2i);
    target->Set(String::New("glRasterPos2i"), _gl_glRasterPos2i->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos2iv = FunctionTemplate::New(gl_glRasterPos2iv);
    target->Set(String::New("glRasterPos2iv"), _gl_glRasterPos2iv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos2s = FunctionTemplate::New(gl_glRasterPos2s);
    target->Set(String::New("glRasterPos2s"), _gl_glRasterPos2s->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos2sv = FunctionTemplate::New(gl_glRasterPos2sv);
    target->Set(String::New("glRasterPos2sv"), _gl_glRasterPos2sv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos3d = FunctionTemplate::New(gl_glRasterPos3d);
    target->Set(String::New("glRasterPos3d"), _gl_glRasterPos3d->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos3dv = FunctionTemplate::New(gl_glRasterPos3dv);
    target->Set(String::New("glRasterPos3dv"), _gl_glRasterPos3dv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos3f = FunctionTemplate::New(gl_glRasterPos3f);
    target->Set(String::New("glRasterPos3f"), _gl_glRasterPos3f->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos3fv = FunctionTemplate::New(gl_glRasterPos3fv);
    target->Set(String::New("glRasterPos3fv"), _gl_glRasterPos3fv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos3i = FunctionTemplate::New(gl_glRasterPos3i);
    target->Set(String::New("glRasterPos3i"), _gl_glRasterPos3i->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos3iv = FunctionTemplate::New(gl_glRasterPos3iv);
    target->Set(String::New("glRasterPos3iv"), _gl_glRasterPos3iv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos3s = FunctionTemplate::New(gl_glRasterPos3s);
    target->Set(String::New("glRasterPos3s"), _gl_glRasterPos3s->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos3sv = FunctionTemplate::New(gl_glRasterPos3sv);
    target->Set(String::New("glRasterPos3sv"), _gl_glRasterPos3sv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos4d = FunctionTemplate::New(gl_glRasterPos4d);
    target->Set(String::New("glRasterPos4d"), _gl_glRasterPos4d->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos4dv = FunctionTemplate::New(gl_glRasterPos4dv);
    target->Set(String::New("glRasterPos4dv"), _gl_glRasterPos4dv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos4f = FunctionTemplate::New(gl_glRasterPos4f);
    target->Set(String::New("glRasterPos4f"), _gl_glRasterPos4f->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos4fv = FunctionTemplate::New(gl_glRasterPos4fv);
    target->Set(String::New("glRasterPos4fv"), _gl_glRasterPos4fv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos4i = FunctionTemplate::New(gl_glRasterPos4i);
    target->Set(String::New("glRasterPos4i"), _gl_glRasterPos4i->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos4iv = FunctionTemplate::New(gl_glRasterPos4iv);
    target->Set(String::New("glRasterPos4iv"), _gl_glRasterPos4iv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos4s = FunctionTemplate::New(gl_glRasterPos4s);
    target->Set(String::New("glRasterPos4s"), _gl_glRasterPos4s->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos4sv = FunctionTemplate::New(gl_glRasterPos4sv);
    target->Set(String::New("glRasterPos4sv"), _gl_glRasterPos4sv->GetFunction());

    Local<FunctionTemplate> _gl_glReadBuffer = FunctionTemplate::New(gl_glReadBuffer);
    target->Set(String::New("glReadBuffer"), _gl_glReadBuffer->GetFunction());

    Local<FunctionTemplate> _gl_glReadPixels = FunctionTemplate::New(gl_glReadPixels);
    target->Set(String::New("glReadPixels"), _gl_glReadPixels->GetFunction());

    Local<FunctionTemplate> _gl_glRectd = FunctionTemplate::New(gl_glRectd);
    target->Set(String::New("glRectd"), _gl_glRectd->GetFunction());

    Local<FunctionTemplate> _gl_glRectdv = FunctionTemplate::New(gl_glRectdv);
    target->Set(String::New("glRectdv"), _gl_glRectdv->GetFunction());

    Local<FunctionTemplate> _gl_glRectf = FunctionTemplate::New(gl_glRectf);
    target->Set(String::New("glRectf"), _gl_glRectf->GetFunction());

    Local<FunctionTemplate> _gl_glRectfv = FunctionTemplate::New(gl_glRectfv);
    target->Set(String::New("glRectfv"), _gl_glRectfv->GetFunction());

    Local<FunctionTemplate> _gl_glRecti = FunctionTemplate::New(gl_glRecti);
    target->Set(String::New("glRecti"), _gl_glRecti->GetFunction());

    Local<FunctionTemplate> _gl_glRectiv = FunctionTemplate::New(gl_glRectiv);
    target->Set(String::New("glRectiv"), _gl_glRectiv->GetFunction());

    Local<FunctionTemplate> _gl_glRects = FunctionTemplate::New(gl_glRects);
    target->Set(String::New("glRects"), _gl_glRects->GetFunction());

    Local<FunctionTemplate> _gl_glRectsv = FunctionTemplate::New(gl_glRectsv);
    target->Set(String::New("glRectsv"), _gl_glRectsv->GetFunction());

    Local<FunctionTemplate> _gl_glRenderMode = FunctionTemplate::New(gl_glRenderMode);
    target->Set(String::New("glRenderMode"), _gl_glRenderMode->GetFunction());

    Local<FunctionTemplate> _gl_glResetHistogram = FunctionTemplate::New(gl_glResetHistogram);
    target->Set(String::New("glResetHistogram"), _gl_glResetHistogram->GetFunction());

    Local<FunctionTemplate> _gl_glResetMinmax = FunctionTemplate::New(gl_glResetMinmax);
    target->Set(String::New("glResetMinmax"), _gl_glResetMinmax->GetFunction());

    Local<FunctionTemplate> _gl_glRotated = FunctionTemplate::New(gl_glRotated);
    target->Set(String::New("glRotated"), _gl_glRotated->GetFunction());

    Local<FunctionTemplate> _gl_glRotatef = FunctionTemplate::New(gl_glRotatef);
    target->Set(String::New("glRotatef"), _gl_glRotatef->GetFunction());

    Local<FunctionTemplate> _gl_glScaled = FunctionTemplate::New(gl_glScaled);
    target->Set(String::New("glScaled"), _gl_glScaled->GetFunction());

    Local<FunctionTemplate> _gl_glScalef = FunctionTemplate::New(gl_glScalef);
    target->Set(String::New("glScalef"), _gl_glScalef->GetFunction());

    Local<FunctionTemplate> _gl_glScissor = FunctionTemplate::New(gl_glScissor);
    target->Set(String::New("glScissor"), _gl_glScissor->GetFunction());

    Local<FunctionTemplate> _gl_glSelectBuffer = FunctionTemplate::New(gl_glSelectBuffer);
    target->Set(String::New("glSelectBuffer"), _gl_glSelectBuffer->GetFunction());

    Local<FunctionTemplate> _gl_glSeparableFilter2D = FunctionTemplate::New(gl_glSeparableFilter2D);
    target->Set(String::New("glSeparableFilter2D"), _gl_glSeparableFilter2D->GetFunction());

    Local<FunctionTemplate> _gl_glShadeModel = FunctionTemplate::New(gl_glShadeModel);
    target->Set(String::New("glShadeModel"), _gl_glShadeModel->GetFunction());

    Local<FunctionTemplate> _gl_glStencilFunc = FunctionTemplate::New(gl_glStencilFunc);
    target->Set(String::New("glStencilFunc"), _gl_glStencilFunc->GetFunction());

    Local<FunctionTemplate> _gl_glStencilMask = FunctionTemplate::New(gl_glStencilMask);
    target->Set(String::New("glStencilMask"), _gl_glStencilMask->GetFunction());

    Local<FunctionTemplate> _gl_glStencilOp = FunctionTemplate::New(gl_glStencilOp);
    target->Set(String::New("glStencilOp"), _gl_glStencilOp->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord1d = FunctionTemplate::New(gl_glTexCoord1d);
    target->Set(String::New("glTexCoord1d"), _gl_glTexCoord1d->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord1dv = FunctionTemplate::New(gl_glTexCoord1dv);
    target->Set(String::New("glTexCoord1dv"), _gl_glTexCoord1dv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord1f = FunctionTemplate::New(gl_glTexCoord1f);
    target->Set(String::New("glTexCoord1f"), _gl_glTexCoord1f->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord1fv = FunctionTemplate::New(gl_glTexCoord1fv);
    target->Set(String::New("glTexCoord1fv"), _gl_glTexCoord1fv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord1i = FunctionTemplate::New(gl_glTexCoord1i);
    target->Set(String::New("glTexCoord1i"), _gl_glTexCoord1i->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord1iv = FunctionTemplate::New(gl_glTexCoord1iv);
    target->Set(String::New("glTexCoord1iv"), _gl_glTexCoord1iv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord1s = FunctionTemplate::New(gl_glTexCoord1s);
    target->Set(String::New("glTexCoord1s"), _gl_glTexCoord1s->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord1sv = FunctionTemplate::New(gl_glTexCoord1sv);
    target->Set(String::New("glTexCoord1sv"), _gl_glTexCoord1sv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord2d = FunctionTemplate::New(gl_glTexCoord2d);
    target->Set(String::New("glTexCoord2d"), _gl_glTexCoord2d->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord2dv = FunctionTemplate::New(gl_glTexCoord2dv);
    target->Set(String::New("glTexCoord2dv"), _gl_glTexCoord2dv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord2f = FunctionTemplate::New(gl_glTexCoord2f);
    target->Set(String::New("glTexCoord2f"), _gl_glTexCoord2f->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord2fv = FunctionTemplate::New(gl_glTexCoord2fv);
    target->Set(String::New("glTexCoord2fv"), _gl_glTexCoord2fv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord2i = FunctionTemplate::New(gl_glTexCoord2i);
    target->Set(String::New("glTexCoord2i"), _gl_glTexCoord2i->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord2iv = FunctionTemplate::New(gl_glTexCoord2iv);
    target->Set(String::New("glTexCoord2iv"), _gl_glTexCoord2iv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord2s = FunctionTemplate::New(gl_glTexCoord2s);
    target->Set(String::New("glTexCoord2s"), _gl_glTexCoord2s->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord2sv = FunctionTemplate::New(gl_glTexCoord2sv);
    target->Set(String::New("glTexCoord2sv"), _gl_glTexCoord2sv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord3d = FunctionTemplate::New(gl_glTexCoord3d);
    target->Set(String::New("glTexCoord3d"), _gl_glTexCoord3d->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord3dv = FunctionTemplate::New(gl_glTexCoord3dv);
    target->Set(String::New("glTexCoord3dv"), _gl_glTexCoord3dv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord3f = FunctionTemplate::New(gl_glTexCoord3f);
    target->Set(String::New("glTexCoord3f"), _gl_glTexCoord3f->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord3fv = FunctionTemplate::New(gl_glTexCoord3fv);
    target->Set(String::New("glTexCoord3fv"), _gl_glTexCoord3fv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord3i = FunctionTemplate::New(gl_glTexCoord3i);
    target->Set(String::New("glTexCoord3i"), _gl_glTexCoord3i->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord3iv = FunctionTemplate::New(gl_glTexCoord3iv);
    target->Set(String::New("glTexCoord3iv"), _gl_glTexCoord3iv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord3s = FunctionTemplate::New(gl_glTexCoord3s);
    target->Set(String::New("glTexCoord3s"), _gl_glTexCoord3s->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord3sv = FunctionTemplate::New(gl_glTexCoord3sv);
    target->Set(String::New("glTexCoord3sv"), _gl_glTexCoord3sv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord4d = FunctionTemplate::New(gl_glTexCoord4d);
    target->Set(String::New("glTexCoord4d"), _gl_glTexCoord4d->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord4dv = FunctionTemplate::New(gl_glTexCoord4dv);
    target->Set(String::New("glTexCoord4dv"), _gl_glTexCoord4dv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord4f = FunctionTemplate::New(gl_glTexCoord4f);
    target->Set(String::New("glTexCoord4f"), _gl_glTexCoord4f->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord4fv = FunctionTemplate::New(gl_glTexCoord4fv);
    target->Set(String::New("glTexCoord4fv"), _gl_glTexCoord4fv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord4i = FunctionTemplate::New(gl_glTexCoord4i);
    target->Set(String::New("glTexCoord4i"), _gl_glTexCoord4i->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord4iv = FunctionTemplate::New(gl_glTexCoord4iv);
    target->Set(String::New("glTexCoord4iv"), _gl_glTexCoord4iv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord4s = FunctionTemplate::New(gl_glTexCoord4s);
    target->Set(String::New("glTexCoord4s"), _gl_glTexCoord4s->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord4sv = FunctionTemplate::New(gl_glTexCoord4sv);
    target->Set(String::New("glTexCoord4sv"), _gl_glTexCoord4sv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoordPointer = FunctionTemplate::New(gl_glTexCoordPointer);
    target->Set(String::New("glTexCoordPointer"), _gl_glTexCoordPointer->GetFunction());

    Local<FunctionTemplate> _gl_glTexEnvf = FunctionTemplate::New(gl_glTexEnvf);
    target->Set(String::New("glTexEnvf"), _gl_glTexEnvf->GetFunction());

    Local<FunctionTemplate> _gl_glTexEnvfv = FunctionTemplate::New(gl_glTexEnvfv);
    target->Set(String::New("glTexEnvfv"), _gl_glTexEnvfv->GetFunction());

    Local<FunctionTemplate> _gl_glTexEnvi = FunctionTemplate::New(gl_glTexEnvi);
    target->Set(String::New("glTexEnvi"), _gl_glTexEnvi->GetFunction());

    Local<FunctionTemplate> _gl_glTexEnviv = FunctionTemplate::New(gl_glTexEnviv);
    target->Set(String::New("glTexEnviv"), _gl_glTexEnviv->GetFunction());

    Local<FunctionTemplate> _gl_glTexGend = FunctionTemplate::New(gl_glTexGend);
    target->Set(String::New("glTexGend"), _gl_glTexGend->GetFunction());

    Local<FunctionTemplate> _gl_glTexGendv = FunctionTemplate::New(gl_glTexGendv);
    target->Set(String::New("glTexGendv"), _gl_glTexGendv->GetFunction());

    Local<FunctionTemplate> _gl_glTexGenf = FunctionTemplate::New(gl_glTexGenf);
    target->Set(String::New("glTexGenf"), _gl_glTexGenf->GetFunction());

    Local<FunctionTemplate> _gl_glTexGenfv = FunctionTemplate::New(gl_glTexGenfv);
    target->Set(String::New("glTexGenfv"), _gl_glTexGenfv->GetFunction());

    Local<FunctionTemplate> _gl_glTexGeni = FunctionTemplate::New(gl_glTexGeni);
    target->Set(String::New("glTexGeni"), _gl_glTexGeni->GetFunction());

    Local<FunctionTemplate> _gl_glTexGeniv = FunctionTemplate::New(gl_glTexGeniv);
    target->Set(String::New("glTexGeniv"), _gl_glTexGeniv->GetFunction());

    Local<FunctionTemplate> _gl_glTexImage1D = FunctionTemplate::New(gl_glTexImage1D);
    target->Set(String::New("glTexImage1D"), _gl_glTexImage1D->GetFunction());

    Local<FunctionTemplate> _gl_glTexImage2D = FunctionTemplate::New(gl_glTexImage2D);
    target->Set(String::New("glTexImage2D"), _gl_glTexImage2D->GetFunction());

    Local<FunctionTemplate> _gl_glTexImage3D = FunctionTemplate::New(gl_glTexImage3D);
    target->Set(String::New("glTexImage3D"), _gl_glTexImage3D->GetFunction());

    Local<FunctionTemplate> _gl_glTexParameterf = FunctionTemplate::New(gl_glTexParameterf);
    target->Set(String::New("glTexParameterf"), _gl_glTexParameterf->GetFunction());

    Local<FunctionTemplate> _gl_glTexParameterfv = FunctionTemplate::New(gl_glTexParameterfv);
    target->Set(String::New("glTexParameterfv"), _gl_glTexParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glTexParameteri = FunctionTemplate::New(gl_glTexParameteri);
    target->Set(String::New("glTexParameteri"), _gl_glTexParameteri->GetFunction());

    Local<FunctionTemplate> _gl_glTexParameteriv = FunctionTemplate::New(gl_glTexParameteriv);
    target->Set(String::New("glTexParameteriv"), _gl_glTexParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glTexSubImage1D = FunctionTemplate::New(gl_glTexSubImage1D);
    target->Set(String::New("glTexSubImage1D"), _gl_glTexSubImage1D->GetFunction());

    Local<FunctionTemplate> _gl_glTexSubImage2D = FunctionTemplate::New(gl_glTexSubImage2D);
    target->Set(String::New("glTexSubImage2D"), _gl_glTexSubImage2D->GetFunction());

    Local<FunctionTemplate> _gl_glTexSubImage3D = FunctionTemplate::New(gl_glTexSubImage3D);
    target->Set(String::New("glTexSubImage3D"), _gl_glTexSubImage3D->GetFunction());

    Local<FunctionTemplate> _gl_glTranslated = FunctionTemplate::New(gl_glTranslated);
    target->Set(String::New("glTranslated"), _gl_glTranslated->GetFunction());

    Local<FunctionTemplate> _gl_glTranslatef = FunctionTemplate::New(gl_glTranslatef);
    target->Set(String::New("glTranslatef"), _gl_glTranslatef->GetFunction());

    Local<FunctionTemplate> _gl_glVertex2d = FunctionTemplate::New(gl_glVertex2d);
    target->Set(String::New("glVertex2d"), _gl_glVertex2d->GetFunction());

    Local<FunctionTemplate> _gl_glVertex2dv = FunctionTemplate::New(gl_glVertex2dv);
    target->Set(String::New("glVertex2dv"), _gl_glVertex2dv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex2f = FunctionTemplate::New(gl_glVertex2f);
    target->Set(String::New("glVertex2f"), _gl_glVertex2f->GetFunction());

    Local<FunctionTemplate> _gl_glVertex2fv = FunctionTemplate::New(gl_glVertex2fv);
    target->Set(String::New("glVertex2fv"), _gl_glVertex2fv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex2i = FunctionTemplate::New(gl_glVertex2i);
    target->Set(String::New("glVertex2i"), _gl_glVertex2i->GetFunction());

    Local<FunctionTemplate> _gl_glVertex2iv = FunctionTemplate::New(gl_glVertex2iv);
    target->Set(String::New("glVertex2iv"), _gl_glVertex2iv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex2s = FunctionTemplate::New(gl_glVertex2s);
    target->Set(String::New("glVertex2s"), _gl_glVertex2s->GetFunction());

    Local<FunctionTemplate> _gl_glVertex2sv = FunctionTemplate::New(gl_glVertex2sv);
    target->Set(String::New("glVertex2sv"), _gl_glVertex2sv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex3d = FunctionTemplate::New(gl_glVertex3d);
    target->Set(String::New("glVertex3d"), _gl_glVertex3d->GetFunction());

    Local<FunctionTemplate> _gl_glVertex3dv = FunctionTemplate::New(gl_glVertex3dv);
    target->Set(String::New("glVertex3dv"), _gl_glVertex3dv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex3f = FunctionTemplate::New(gl_glVertex3f);
    target->Set(String::New("glVertex3f"), _gl_glVertex3f->GetFunction());

    Local<FunctionTemplate> _gl_glVertex3fv = FunctionTemplate::New(gl_glVertex3fv);
    target->Set(String::New("glVertex3fv"), _gl_glVertex3fv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex3i = FunctionTemplate::New(gl_glVertex3i);
    target->Set(String::New("glVertex3i"), _gl_glVertex3i->GetFunction());

    Local<FunctionTemplate> _gl_glVertex3iv = FunctionTemplate::New(gl_glVertex3iv);
    target->Set(String::New("glVertex3iv"), _gl_glVertex3iv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex3s = FunctionTemplate::New(gl_glVertex3s);
    target->Set(String::New("glVertex3s"), _gl_glVertex3s->GetFunction());

    Local<FunctionTemplate> _gl_glVertex3sv = FunctionTemplate::New(gl_glVertex3sv);
    target->Set(String::New("glVertex3sv"), _gl_glVertex3sv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex4d = FunctionTemplate::New(gl_glVertex4d);
    target->Set(String::New("glVertex4d"), _gl_glVertex4d->GetFunction());

    Local<FunctionTemplate> _gl_glVertex4dv = FunctionTemplate::New(gl_glVertex4dv);
    target->Set(String::New("glVertex4dv"), _gl_glVertex4dv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex4f = FunctionTemplate::New(gl_glVertex4f);
    target->Set(String::New("glVertex4f"), _gl_glVertex4f->GetFunction());

    Local<FunctionTemplate> _gl_glVertex4fv = FunctionTemplate::New(gl_glVertex4fv);
    target->Set(String::New("glVertex4fv"), _gl_glVertex4fv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex4i = FunctionTemplate::New(gl_glVertex4i);
    target->Set(String::New("glVertex4i"), _gl_glVertex4i->GetFunction());

    Local<FunctionTemplate> _gl_glVertex4iv = FunctionTemplate::New(gl_glVertex4iv);
    target->Set(String::New("glVertex4iv"), _gl_glVertex4iv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex4s = FunctionTemplate::New(gl_glVertex4s);
    target->Set(String::New("glVertex4s"), _gl_glVertex4s->GetFunction());

    Local<FunctionTemplate> _gl_glVertex4sv = FunctionTemplate::New(gl_glVertex4sv);
    target->Set(String::New("glVertex4sv"), _gl_glVertex4sv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexPointer = FunctionTemplate::New(gl_glVertexPointer);
    target->Set(String::New("glVertexPointer"), _gl_glVertexPointer->GetFunction());

    Local<FunctionTemplate> _gl_glViewport = FunctionTemplate::New(gl_glViewport);
    target->Set(String::New("glViewport"), _gl_glViewport->GetFunction());

    Local<FunctionTemplate> _gl_glSampleCoverage = FunctionTemplate::New(gl_glSampleCoverage);
    target->Set(String::New("glSampleCoverage"), _gl_glSampleCoverage->GetFunction());

    Local<FunctionTemplate> _gl_glSamplePass = FunctionTemplate::New(gl_glSamplePass);
    target->Set(String::New("glSamplePass"), _gl_glSamplePass->GetFunction());

    Local<FunctionTemplate> _gl_glLoadTransposeMatrixf = FunctionTemplate::New(gl_glLoadTransposeMatrixf);
    target->Set(String::New("glLoadTransposeMatrixf"), _gl_glLoadTransposeMatrixf->GetFunction());

    Local<FunctionTemplate> _gl_glLoadTransposeMatrixd = FunctionTemplate::New(gl_glLoadTransposeMatrixd);
    target->Set(String::New("glLoadTransposeMatrixd"), _gl_glLoadTransposeMatrixd->GetFunction());

    Local<FunctionTemplate> _gl_glMultTransposeMatrixf = FunctionTemplate::New(gl_glMultTransposeMatrixf);
    target->Set(String::New("glMultTransposeMatrixf"), _gl_glMultTransposeMatrixf->GetFunction());

    Local<FunctionTemplate> _gl_glMultTransposeMatrixd = FunctionTemplate::New(gl_glMultTransposeMatrixd);
    target->Set(String::New("glMultTransposeMatrixd"), _gl_glMultTransposeMatrixd->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexImage3D = FunctionTemplate::New(gl_glCompressedTexImage3D);
    target->Set(String::New("glCompressedTexImage3D"), _gl_glCompressedTexImage3D->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexImage2D = FunctionTemplate::New(gl_glCompressedTexImage2D);
    target->Set(String::New("glCompressedTexImage2D"), _gl_glCompressedTexImage2D->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexImage1D = FunctionTemplate::New(gl_glCompressedTexImage1D);
    target->Set(String::New("glCompressedTexImage1D"), _gl_glCompressedTexImage1D->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexSubImage3D = FunctionTemplate::New(gl_glCompressedTexSubImage3D);
    target->Set(String::New("glCompressedTexSubImage3D"), _gl_glCompressedTexSubImage3D->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexSubImage2D = FunctionTemplate::New(gl_glCompressedTexSubImage2D);
    target->Set(String::New("glCompressedTexSubImage2D"), _gl_glCompressedTexSubImage2D->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexSubImage1D = FunctionTemplate::New(gl_glCompressedTexSubImage1D);
    target->Set(String::New("glCompressedTexSubImage1D"), _gl_glCompressedTexSubImage1D->GetFunction());

    Local<FunctionTemplate> _gl_glGetCompressedTexImage = FunctionTemplate::New(gl_glGetCompressedTexImage);
    target->Set(String::New("glGetCompressedTexImage"), _gl_glGetCompressedTexImage->GetFunction());

    Local<FunctionTemplate> _gl_glActiveTexture = FunctionTemplate::New(gl_glActiveTexture);
    target->Set(String::New("glActiveTexture"), _gl_glActiveTexture->GetFunction());

    Local<FunctionTemplate> _gl_glClientActiveTexture = FunctionTemplate::New(gl_glClientActiveTexture);
    target->Set(String::New("glClientActiveTexture"), _gl_glClientActiveTexture->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord1d = FunctionTemplate::New(gl_glMultiTexCoord1d);
    target->Set(String::New("glMultiTexCoord1d"), _gl_glMultiTexCoord1d->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord1dv = FunctionTemplate::New(gl_glMultiTexCoord1dv);
    target->Set(String::New("glMultiTexCoord1dv"), _gl_glMultiTexCoord1dv->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord1f = FunctionTemplate::New(gl_glMultiTexCoord1f);
    target->Set(String::New("glMultiTexCoord1f"), _gl_glMultiTexCoord1f->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord1fv = FunctionTemplate::New(gl_glMultiTexCoord1fv);
    target->Set(String::New("glMultiTexCoord1fv"), _gl_glMultiTexCoord1fv->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord1i = FunctionTemplate::New(gl_glMultiTexCoord1i);
    target->Set(String::New("glMultiTexCoord1i"), _gl_glMultiTexCoord1i->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord1iv = FunctionTemplate::New(gl_glMultiTexCoord1iv);
    target->Set(String::New("glMultiTexCoord1iv"), _gl_glMultiTexCoord1iv->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord1s = FunctionTemplate::New(gl_glMultiTexCoord1s);
    target->Set(String::New("glMultiTexCoord1s"), _gl_glMultiTexCoord1s->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord1sv = FunctionTemplate::New(gl_glMultiTexCoord1sv);
    target->Set(String::New("glMultiTexCoord1sv"), _gl_glMultiTexCoord1sv->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord2d = FunctionTemplate::New(gl_glMultiTexCoord2d);
    target->Set(String::New("glMultiTexCoord2d"), _gl_glMultiTexCoord2d->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord2dv = FunctionTemplate::New(gl_glMultiTexCoord2dv);
    target->Set(String::New("glMultiTexCoord2dv"), _gl_glMultiTexCoord2dv->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord2f = FunctionTemplate::New(gl_glMultiTexCoord2f);
    target->Set(String::New("glMultiTexCoord2f"), _gl_glMultiTexCoord2f->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord2fv = FunctionTemplate::New(gl_glMultiTexCoord2fv);
    target->Set(String::New("glMultiTexCoord2fv"), _gl_glMultiTexCoord2fv->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord2i = FunctionTemplate::New(gl_glMultiTexCoord2i);
    target->Set(String::New("glMultiTexCoord2i"), _gl_glMultiTexCoord2i->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord2iv = FunctionTemplate::New(gl_glMultiTexCoord2iv);
    target->Set(String::New("glMultiTexCoord2iv"), _gl_glMultiTexCoord2iv->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord2s = FunctionTemplate::New(gl_glMultiTexCoord2s);
    target->Set(String::New("glMultiTexCoord2s"), _gl_glMultiTexCoord2s->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord2sv = FunctionTemplate::New(gl_glMultiTexCoord2sv);
    target->Set(String::New("glMultiTexCoord2sv"), _gl_glMultiTexCoord2sv->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord3d = FunctionTemplate::New(gl_glMultiTexCoord3d);
    target->Set(String::New("glMultiTexCoord3d"), _gl_glMultiTexCoord3d->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord3dv = FunctionTemplate::New(gl_glMultiTexCoord3dv);
    target->Set(String::New("glMultiTexCoord3dv"), _gl_glMultiTexCoord3dv->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord3f = FunctionTemplate::New(gl_glMultiTexCoord3f);
    target->Set(String::New("glMultiTexCoord3f"), _gl_glMultiTexCoord3f->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord3fv = FunctionTemplate::New(gl_glMultiTexCoord3fv);
    target->Set(String::New("glMultiTexCoord3fv"), _gl_glMultiTexCoord3fv->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord3i = FunctionTemplate::New(gl_glMultiTexCoord3i);
    target->Set(String::New("glMultiTexCoord3i"), _gl_glMultiTexCoord3i->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord3iv = FunctionTemplate::New(gl_glMultiTexCoord3iv);
    target->Set(String::New("glMultiTexCoord3iv"), _gl_glMultiTexCoord3iv->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord3s = FunctionTemplate::New(gl_glMultiTexCoord3s);
    target->Set(String::New("glMultiTexCoord3s"), _gl_glMultiTexCoord3s->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord3sv = FunctionTemplate::New(gl_glMultiTexCoord3sv);
    target->Set(String::New("glMultiTexCoord3sv"), _gl_glMultiTexCoord3sv->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord4d = FunctionTemplate::New(gl_glMultiTexCoord4d);
    target->Set(String::New("glMultiTexCoord4d"), _gl_glMultiTexCoord4d->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord4dv = FunctionTemplate::New(gl_glMultiTexCoord4dv);
    target->Set(String::New("glMultiTexCoord4dv"), _gl_glMultiTexCoord4dv->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord4f = FunctionTemplate::New(gl_glMultiTexCoord4f);
    target->Set(String::New("glMultiTexCoord4f"), _gl_glMultiTexCoord4f->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord4fv = FunctionTemplate::New(gl_glMultiTexCoord4fv);
    target->Set(String::New("glMultiTexCoord4fv"), _gl_glMultiTexCoord4fv->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord4i = FunctionTemplate::New(gl_glMultiTexCoord4i);
    target->Set(String::New("glMultiTexCoord4i"), _gl_glMultiTexCoord4i->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord4iv = FunctionTemplate::New(gl_glMultiTexCoord4iv);
    target->Set(String::New("glMultiTexCoord4iv"), _gl_glMultiTexCoord4iv->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord4s = FunctionTemplate::New(gl_glMultiTexCoord4s);
    target->Set(String::New("glMultiTexCoord4s"), _gl_glMultiTexCoord4s->GetFunction());

    Local<FunctionTemplate> _gl_glMultiTexCoord4sv = FunctionTemplate::New(gl_glMultiTexCoord4sv);
    target->Set(String::New("glMultiTexCoord4sv"), _gl_glMultiTexCoord4sv->GetFunction());

    Local<FunctionTemplate> _gl_glFogCoordf = FunctionTemplate::New(gl_glFogCoordf);
    target->Set(String::New("glFogCoordf"), _gl_glFogCoordf->GetFunction());

    Local<FunctionTemplate> _gl_glFogCoordfv = FunctionTemplate::New(gl_glFogCoordfv);
    target->Set(String::New("glFogCoordfv"), _gl_glFogCoordfv->GetFunction());

    Local<FunctionTemplate> _gl_glFogCoordd = FunctionTemplate::New(gl_glFogCoordd);
    target->Set(String::New("glFogCoordd"), _gl_glFogCoordd->GetFunction());

    Local<FunctionTemplate> _gl_glFogCoorddv = FunctionTemplate::New(gl_glFogCoorddv);
    target->Set(String::New("glFogCoorddv"), _gl_glFogCoorddv->GetFunction());

    Local<FunctionTemplate> _gl_glFogCoordPointer = FunctionTemplate::New(gl_glFogCoordPointer);
    target->Set(String::New("glFogCoordPointer"), _gl_glFogCoordPointer->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3b = FunctionTemplate::New(gl_glSecondaryColor3b);
    target->Set(String::New("glSecondaryColor3b"), _gl_glSecondaryColor3b->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3bv = FunctionTemplate::New(gl_glSecondaryColor3bv);
    target->Set(String::New("glSecondaryColor3bv"), _gl_glSecondaryColor3bv->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3d = FunctionTemplate::New(gl_glSecondaryColor3d);
    target->Set(String::New("glSecondaryColor3d"), _gl_glSecondaryColor3d->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3dv = FunctionTemplate::New(gl_glSecondaryColor3dv);
    target->Set(String::New("glSecondaryColor3dv"), _gl_glSecondaryColor3dv->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3f = FunctionTemplate::New(gl_glSecondaryColor3f);
    target->Set(String::New("glSecondaryColor3f"), _gl_glSecondaryColor3f->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3fv = FunctionTemplate::New(gl_glSecondaryColor3fv);
    target->Set(String::New("glSecondaryColor3fv"), _gl_glSecondaryColor3fv->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3i = FunctionTemplate::New(gl_glSecondaryColor3i);
    target->Set(String::New("glSecondaryColor3i"), _gl_glSecondaryColor3i->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3iv = FunctionTemplate::New(gl_glSecondaryColor3iv);
    target->Set(String::New("glSecondaryColor3iv"), _gl_glSecondaryColor3iv->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3s = FunctionTemplate::New(gl_glSecondaryColor3s);
    target->Set(String::New("glSecondaryColor3s"), _gl_glSecondaryColor3s->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3sv = FunctionTemplate::New(gl_glSecondaryColor3sv);
    target->Set(String::New("glSecondaryColor3sv"), _gl_glSecondaryColor3sv->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3ub = FunctionTemplate::New(gl_glSecondaryColor3ub);
    target->Set(String::New("glSecondaryColor3ub"), _gl_glSecondaryColor3ub->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3ubv = FunctionTemplate::New(gl_glSecondaryColor3ubv);
    target->Set(String::New("glSecondaryColor3ubv"), _gl_glSecondaryColor3ubv->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3ui = FunctionTemplate::New(gl_glSecondaryColor3ui);
    target->Set(String::New("glSecondaryColor3ui"), _gl_glSecondaryColor3ui->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3uiv = FunctionTemplate::New(gl_glSecondaryColor3uiv);
    target->Set(String::New("glSecondaryColor3uiv"), _gl_glSecondaryColor3uiv->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3us = FunctionTemplate::New(gl_glSecondaryColor3us);
    target->Set(String::New("glSecondaryColor3us"), _gl_glSecondaryColor3us->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColor3usv = FunctionTemplate::New(gl_glSecondaryColor3usv);
    target->Set(String::New("glSecondaryColor3usv"), _gl_glSecondaryColor3usv->GetFunction());

    Local<FunctionTemplate> _gl_glSecondaryColorPointer = FunctionTemplate::New(gl_glSecondaryColorPointer);
    target->Set(String::New("glSecondaryColorPointer"), _gl_glSecondaryColorPointer->GetFunction());

    Local<FunctionTemplate> _gl_glPointParameterf = FunctionTemplate::New(gl_glPointParameterf);
    target->Set(String::New("glPointParameterf"), _gl_glPointParameterf->GetFunction());

    Local<FunctionTemplate> _gl_glPointParameterfv = FunctionTemplate::New(gl_glPointParameterfv);
    target->Set(String::New("glPointParameterfv"), _gl_glPointParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glPointParameteri = FunctionTemplate::New(gl_glPointParameteri);
    target->Set(String::New("glPointParameteri"), _gl_glPointParameteri->GetFunction());

    Local<FunctionTemplate> _gl_glPointParameteriv = FunctionTemplate::New(gl_glPointParameteriv);
    target->Set(String::New("glPointParameteriv"), _gl_glPointParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glBlendFuncSeparate = FunctionTemplate::New(gl_glBlendFuncSeparate);
    target->Set(String::New("glBlendFuncSeparate"), _gl_glBlendFuncSeparate->GetFunction());

    Local<FunctionTemplate> _gl_glMultiDrawArrays = FunctionTemplate::New(gl_glMultiDrawArrays);
    target->Set(String::New("glMultiDrawArrays"), _gl_glMultiDrawArrays->GetFunction());

    Local<FunctionTemplate> _gl_glMultiDrawElements = FunctionTemplate::New(gl_glMultiDrawElements);
    target->Set(String::New("glMultiDrawElements"), _gl_glMultiDrawElements->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos2d = FunctionTemplate::New(gl_glWindowPos2d);
    target->Set(String::New("glWindowPos2d"), _gl_glWindowPos2d->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos2dv = FunctionTemplate::New(gl_glWindowPos2dv);
    target->Set(String::New("glWindowPos2dv"), _gl_glWindowPos2dv->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos2f = FunctionTemplate::New(gl_glWindowPos2f);
    target->Set(String::New("glWindowPos2f"), _gl_glWindowPos2f->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos2fv = FunctionTemplate::New(gl_glWindowPos2fv);
    target->Set(String::New("glWindowPos2fv"), _gl_glWindowPos2fv->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos2i = FunctionTemplate::New(gl_glWindowPos2i);
    target->Set(String::New("glWindowPos2i"), _gl_glWindowPos2i->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos2iv = FunctionTemplate::New(gl_glWindowPos2iv);
    target->Set(String::New("glWindowPos2iv"), _gl_glWindowPos2iv->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos2s = FunctionTemplate::New(gl_glWindowPos2s);
    target->Set(String::New("glWindowPos2s"), _gl_glWindowPos2s->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos2sv = FunctionTemplate::New(gl_glWindowPos2sv);
    target->Set(String::New("glWindowPos2sv"), _gl_glWindowPos2sv->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos3d = FunctionTemplate::New(gl_glWindowPos3d);
    target->Set(String::New("glWindowPos3d"), _gl_glWindowPos3d->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos3dv = FunctionTemplate::New(gl_glWindowPos3dv);
    target->Set(String::New("glWindowPos3dv"), _gl_glWindowPos3dv->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos3f = FunctionTemplate::New(gl_glWindowPos3f);
    target->Set(String::New("glWindowPos3f"), _gl_glWindowPos3f->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos3fv = FunctionTemplate::New(gl_glWindowPos3fv);
    target->Set(String::New("glWindowPos3fv"), _gl_glWindowPos3fv->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos3i = FunctionTemplate::New(gl_glWindowPos3i);
    target->Set(String::New("glWindowPos3i"), _gl_glWindowPos3i->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos3iv = FunctionTemplate::New(gl_glWindowPos3iv);
    target->Set(String::New("glWindowPos3iv"), _gl_glWindowPos3iv->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos3s = FunctionTemplate::New(gl_glWindowPos3s);
    target->Set(String::New("glWindowPos3s"), _gl_glWindowPos3s->GetFunction());

    Local<FunctionTemplate> _gl_glWindowPos3sv = FunctionTemplate::New(gl_glWindowPos3sv);
    target->Set(String::New("glWindowPos3sv"), _gl_glWindowPos3sv->GetFunction());

    Local<FunctionTemplate> _gl_glGenQueries = FunctionTemplate::New(gl_glGenQueries);
    target->Set(String::New("glGenQueries"), _gl_glGenQueries->GetFunction());

    Local<FunctionTemplate> _gl_glDeleteQueries = FunctionTemplate::New(gl_glDeleteQueries);
    target->Set(String::New("glDeleteQueries"), _gl_glDeleteQueries->GetFunction());

    Local<FunctionTemplate> _gl_glIsQuery = FunctionTemplate::New(gl_glIsQuery);
    target->Set(String::New("glIsQuery"), _gl_glIsQuery->GetFunction());

    Local<FunctionTemplate> _gl_glBeginQuery = FunctionTemplate::New(gl_glBeginQuery);
    target->Set(String::New("glBeginQuery"), _gl_glBeginQuery->GetFunction());

    Local<FunctionTemplate> _gl_glEndQuery = FunctionTemplate::New(gl_glEndQuery);
    target->Set(String::New("glEndQuery"), _gl_glEndQuery->GetFunction());

    Local<FunctionTemplate> _gl_glGetQueryiv = FunctionTemplate::New(gl_glGetQueryiv);
    target->Set(String::New("glGetQueryiv"), _gl_glGetQueryiv->GetFunction());

    Local<FunctionTemplate> _gl_glGetQueryObjectiv = FunctionTemplate::New(gl_glGetQueryObjectiv);
    target->Set(String::New("glGetQueryObjectiv"), _gl_glGetQueryObjectiv->GetFunction());

    Local<FunctionTemplate> _gl_glGetQueryObjectuiv = FunctionTemplate::New(gl_glGetQueryObjectuiv);
    target->Set(String::New("glGetQueryObjectuiv"), _gl_glGetQueryObjectuiv->GetFunction());

    Local<FunctionTemplate> _gl_glBindBuffer = FunctionTemplate::New(gl_glBindBuffer);
    target->Set(String::New("glBindBuffer"), _gl_glBindBuffer->GetFunction());

    Local<FunctionTemplate> _gl_glDeleteBuffers = FunctionTemplate::New(gl_glDeleteBuffers);
    target->Set(String::New("glDeleteBuffers"), _gl_glDeleteBuffers->GetFunction());

    Local<FunctionTemplate> _gl_glGenBuffers = FunctionTemplate::New(gl_glGenBuffers);
    target->Set(String::New("glGenBuffers"), _gl_glGenBuffers->GetFunction());

    Local<FunctionTemplate> _gl_glIsBuffer = FunctionTemplate::New(gl_glIsBuffer);
    target->Set(String::New("glIsBuffer"), _gl_glIsBuffer->GetFunction());

    Local<FunctionTemplate> _gl_glBufferData = FunctionTemplate::New(gl_glBufferData);
    target->Set(String::New("glBufferData"), _gl_glBufferData->GetFunction());

    Local<FunctionTemplate> _gl_glBufferSubData = FunctionTemplate::New(gl_glBufferSubData);
    target->Set(String::New("glBufferSubData"), _gl_glBufferSubData->GetFunction());

    Local<FunctionTemplate> _gl_glGetBufferSubData = FunctionTemplate::New(gl_glGetBufferSubData);
    target->Set(String::New("glGetBufferSubData"), _gl_glGetBufferSubData->GetFunction());

    Local<FunctionTemplate> _gl_glUnmapBuffer = FunctionTemplate::New(gl_glUnmapBuffer);
    target->Set(String::New("glUnmapBuffer"), _gl_glUnmapBuffer->GetFunction());

    Local<FunctionTemplate> _gl_glGetBufferParameteriv = FunctionTemplate::New(gl_glGetBufferParameteriv);
    target->Set(String::New("glGetBufferParameteriv"), _gl_glGetBufferParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glGetBufferPointerv = FunctionTemplate::New(gl_glGetBufferPointerv);
    target->Set(String::New("glGetBufferPointerv"), _gl_glGetBufferPointerv->GetFunction());

    Local<FunctionTemplate> _gl_glDrawBuffers = FunctionTemplate::New(gl_glDrawBuffers);
    target->Set(String::New("glDrawBuffers"), _gl_glDrawBuffers->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib1d = FunctionTemplate::New(gl_glVertexAttrib1d);
    target->Set(String::New("glVertexAttrib1d"), _gl_glVertexAttrib1d->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib1dv = FunctionTemplate::New(gl_glVertexAttrib1dv);
    target->Set(String::New("glVertexAttrib1dv"), _gl_glVertexAttrib1dv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib1f = FunctionTemplate::New(gl_glVertexAttrib1f);
    target->Set(String::New("glVertexAttrib1f"), _gl_glVertexAttrib1f->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib1fv = FunctionTemplate::New(gl_glVertexAttrib1fv);
    target->Set(String::New("glVertexAttrib1fv"), _gl_glVertexAttrib1fv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib1s = FunctionTemplate::New(gl_glVertexAttrib1s);
    target->Set(String::New("glVertexAttrib1s"), _gl_glVertexAttrib1s->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib1sv = FunctionTemplate::New(gl_glVertexAttrib1sv);
    target->Set(String::New("glVertexAttrib1sv"), _gl_glVertexAttrib1sv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib2d = FunctionTemplate::New(gl_glVertexAttrib2d);
    target->Set(String::New("glVertexAttrib2d"), _gl_glVertexAttrib2d->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib2dv = FunctionTemplate::New(gl_glVertexAttrib2dv);
    target->Set(String::New("glVertexAttrib2dv"), _gl_glVertexAttrib2dv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib2f = FunctionTemplate::New(gl_glVertexAttrib2f);
    target->Set(String::New("glVertexAttrib2f"), _gl_glVertexAttrib2f->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib2fv = FunctionTemplate::New(gl_glVertexAttrib2fv);
    target->Set(String::New("glVertexAttrib2fv"), _gl_glVertexAttrib2fv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib2s = FunctionTemplate::New(gl_glVertexAttrib2s);
    target->Set(String::New("glVertexAttrib2s"), _gl_glVertexAttrib2s->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib2sv = FunctionTemplate::New(gl_glVertexAttrib2sv);
    target->Set(String::New("glVertexAttrib2sv"), _gl_glVertexAttrib2sv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib3d = FunctionTemplate::New(gl_glVertexAttrib3d);
    target->Set(String::New("glVertexAttrib3d"), _gl_glVertexAttrib3d->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib3dv = FunctionTemplate::New(gl_glVertexAttrib3dv);
    target->Set(String::New("glVertexAttrib3dv"), _gl_glVertexAttrib3dv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib3f = FunctionTemplate::New(gl_glVertexAttrib3f);
    target->Set(String::New("glVertexAttrib3f"), _gl_glVertexAttrib3f->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib3fv = FunctionTemplate::New(gl_glVertexAttrib3fv);
    target->Set(String::New("glVertexAttrib3fv"), _gl_glVertexAttrib3fv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib3s = FunctionTemplate::New(gl_glVertexAttrib3s);
    target->Set(String::New("glVertexAttrib3s"), _gl_glVertexAttrib3s->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib3sv = FunctionTemplate::New(gl_glVertexAttrib3sv);
    target->Set(String::New("glVertexAttrib3sv"), _gl_glVertexAttrib3sv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4Nbv = FunctionTemplate::New(gl_glVertexAttrib4Nbv);
    target->Set(String::New("glVertexAttrib4Nbv"), _gl_glVertexAttrib4Nbv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4Niv = FunctionTemplate::New(gl_glVertexAttrib4Niv);
    target->Set(String::New("glVertexAttrib4Niv"), _gl_glVertexAttrib4Niv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4Nsv = FunctionTemplate::New(gl_glVertexAttrib4Nsv);
    target->Set(String::New("glVertexAttrib4Nsv"), _gl_glVertexAttrib4Nsv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4Nub = FunctionTemplate::New(gl_glVertexAttrib4Nub);
    target->Set(String::New("glVertexAttrib4Nub"), _gl_glVertexAttrib4Nub->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4Nubv = FunctionTemplate::New(gl_glVertexAttrib4Nubv);
    target->Set(String::New("glVertexAttrib4Nubv"), _gl_glVertexAttrib4Nubv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4Nuiv = FunctionTemplate::New(gl_glVertexAttrib4Nuiv);
    target->Set(String::New("glVertexAttrib4Nuiv"), _gl_glVertexAttrib4Nuiv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4Nusv = FunctionTemplate::New(gl_glVertexAttrib4Nusv);
    target->Set(String::New("glVertexAttrib4Nusv"), _gl_glVertexAttrib4Nusv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4bv = FunctionTemplate::New(gl_glVertexAttrib4bv);
    target->Set(String::New("glVertexAttrib4bv"), _gl_glVertexAttrib4bv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4d = FunctionTemplate::New(gl_glVertexAttrib4d);
    target->Set(String::New("glVertexAttrib4d"), _gl_glVertexAttrib4d->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4dv = FunctionTemplate::New(gl_glVertexAttrib4dv);
    target->Set(String::New("glVertexAttrib4dv"), _gl_glVertexAttrib4dv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4f = FunctionTemplate::New(gl_glVertexAttrib4f);
    target->Set(String::New("glVertexAttrib4f"), _gl_glVertexAttrib4f->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4fv = FunctionTemplate::New(gl_glVertexAttrib4fv);
    target->Set(String::New("glVertexAttrib4fv"), _gl_glVertexAttrib4fv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4iv = FunctionTemplate::New(gl_glVertexAttrib4iv);
    target->Set(String::New("glVertexAttrib4iv"), _gl_glVertexAttrib4iv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4s = FunctionTemplate::New(gl_glVertexAttrib4s);
    target->Set(String::New("glVertexAttrib4s"), _gl_glVertexAttrib4s->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4sv = FunctionTemplate::New(gl_glVertexAttrib4sv);
    target->Set(String::New("glVertexAttrib4sv"), _gl_glVertexAttrib4sv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4ubv = FunctionTemplate::New(gl_glVertexAttrib4ubv);
    target->Set(String::New("glVertexAttrib4ubv"), _gl_glVertexAttrib4ubv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4uiv = FunctionTemplate::New(gl_glVertexAttrib4uiv);
    target->Set(String::New("glVertexAttrib4uiv"), _gl_glVertexAttrib4uiv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttrib4usv = FunctionTemplate::New(gl_glVertexAttrib4usv);
    target->Set(String::New("glVertexAttrib4usv"), _gl_glVertexAttrib4usv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexAttribPointer = FunctionTemplate::New(gl_glVertexAttribPointer);
    target->Set(String::New("glVertexAttribPointer"), _gl_glVertexAttribPointer->GetFunction());

    Local<FunctionTemplate> _gl_glEnableVertexAttribArray = FunctionTemplate::New(gl_glEnableVertexAttribArray);
    target->Set(String::New("glEnableVertexAttribArray"), _gl_glEnableVertexAttribArray->GetFunction());

    Local<FunctionTemplate> _gl_glDisableVertexAttribArray = FunctionTemplate::New(gl_glDisableVertexAttribArray);
    target->Set(String::New("glDisableVertexAttribArray"), _gl_glDisableVertexAttribArray->GetFunction());

    Local<FunctionTemplate> _gl_glGetVertexAttribdv = FunctionTemplate::New(gl_glGetVertexAttribdv);
    target->Set(String::New("glGetVertexAttribdv"), _gl_glGetVertexAttribdv->GetFunction());

    Local<FunctionTemplate> _gl_glGetVertexAttribfv = FunctionTemplate::New(gl_glGetVertexAttribfv);
    target->Set(String::New("glGetVertexAttribfv"), _gl_glGetVertexAttribfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetVertexAttribiv = FunctionTemplate::New(gl_glGetVertexAttribiv);
    target->Set(String::New("glGetVertexAttribiv"), _gl_glGetVertexAttribiv->GetFunction());

    Local<FunctionTemplate> _gl_glGetVertexAttribPointerv = FunctionTemplate::New(gl_glGetVertexAttribPointerv);
    target->Set(String::New("glGetVertexAttribPointerv"), _gl_glGetVertexAttribPointerv->GetFunction());

    Local<FunctionTemplate> _gl_glDeleteShader = FunctionTemplate::New(gl_glDeleteShader);
    target->Set(String::New("glDeleteShader"), _gl_glDeleteShader->GetFunction());

    Local<FunctionTemplate> _gl_glDetachShader = FunctionTemplate::New(gl_glDetachShader);
    target->Set(String::New("glDetachShader"), _gl_glDetachShader->GetFunction());

    Local<FunctionTemplate> _gl_glCreateShader = FunctionTemplate::New(gl_glCreateShader);
    target->Set(String::New("glCreateShader"), _gl_glCreateShader->GetFunction());

    Local<FunctionTemplate> _gl_glShaderSource = FunctionTemplate::New(gl_glShaderSource);
    target->Set(String::New("glShaderSource"), _gl_glShaderSource->GetFunction());

    Local<FunctionTemplate> _gl_glCompileShader = FunctionTemplate::New(gl_glCompileShader);
    target->Set(String::New("glCompileShader"), _gl_glCompileShader->GetFunction());

    Local<FunctionTemplate> _gl_glCreateProgram = FunctionTemplate::New(gl_glCreateProgram);
    target->Set(String::New("glCreateProgram"), _gl_glCreateProgram->GetFunction());

    Local<FunctionTemplate> _gl_glAttachShader = FunctionTemplate::New(gl_glAttachShader);
    target->Set(String::New("glAttachShader"), _gl_glAttachShader->GetFunction());

    Local<FunctionTemplate> _gl_glLinkProgram = FunctionTemplate::New(gl_glLinkProgram);
    target->Set(String::New("glLinkProgram"), _gl_glLinkProgram->GetFunction());

    Local<FunctionTemplate> _gl_glUseProgram = FunctionTemplate::New(gl_glUseProgram);
    target->Set(String::New("glUseProgram"), _gl_glUseProgram->GetFunction());

    Local<FunctionTemplate> _gl_glDeleteProgram = FunctionTemplate::New(gl_glDeleteProgram);
    target->Set(String::New("glDeleteProgram"), _gl_glDeleteProgram->GetFunction());

    Local<FunctionTemplate> _gl_glValidateProgram = FunctionTemplate::New(gl_glValidateProgram);
    target->Set(String::New("glValidateProgram"), _gl_glValidateProgram->GetFunction());

    Local<FunctionTemplate> _gl_glUniform1f = FunctionTemplate::New(gl_glUniform1f);
    target->Set(String::New("glUniform1f"), _gl_glUniform1f->GetFunction());

    Local<FunctionTemplate> _gl_glUniform2f = FunctionTemplate::New(gl_glUniform2f);
    target->Set(String::New("glUniform2f"), _gl_glUniform2f->GetFunction());

    Local<FunctionTemplate> _gl_glUniform3f = FunctionTemplate::New(gl_glUniform3f);
    target->Set(String::New("glUniform3f"), _gl_glUniform3f->GetFunction());

    Local<FunctionTemplate> _gl_glUniform4f = FunctionTemplate::New(gl_glUniform4f);
    target->Set(String::New("glUniform4f"), _gl_glUniform4f->GetFunction());

    Local<FunctionTemplate> _gl_glUniform1i = FunctionTemplate::New(gl_glUniform1i);
    target->Set(String::New("glUniform1i"), _gl_glUniform1i->GetFunction());

    Local<FunctionTemplate> _gl_glUniform2i = FunctionTemplate::New(gl_glUniform2i);
    target->Set(String::New("glUniform2i"), _gl_glUniform2i->GetFunction());

    Local<FunctionTemplate> _gl_glUniform3i = FunctionTemplate::New(gl_glUniform3i);
    target->Set(String::New("glUniform3i"), _gl_glUniform3i->GetFunction());

    Local<FunctionTemplate> _gl_glUniform4i = FunctionTemplate::New(gl_glUniform4i);
    target->Set(String::New("glUniform4i"), _gl_glUniform4i->GetFunction());

    Local<FunctionTemplate> _gl_glUniform1fv = FunctionTemplate::New(gl_glUniform1fv);
    target->Set(String::New("glUniform1fv"), _gl_glUniform1fv->GetFunction());

    Local<FunctionTemplate> _gl_glUniform2fv = FunctionTemplate::New(gl_glUniform2fv);
    target->Set(String::New("glUniform2fv"), _gl_glUniform2fv->GetFunction());

    Local<FunctionTemplate> _gl_glUniform3fv = FunctionTemplate::New(gl_glUniform3fv);
    target->Set(String::New("glUniform3fv"), _gl_glUniform3fv->GetFunction());

    Local<FunctionTemplate> _gl_glUniform4fv = FunctionTemplate::New(gl_glUniform4fv);
    target->Set(String::New("glUniform4fv"), _gl_glUniform4fv->GetFunction());

    Local<FunctionTemplate> _gl_glUniform1iv = FunctionTemplate::New(gl_glUniform1iv);
    target->Set(String::New("glUniform1iv"), _gl_glUniform1iv->GetFunction());

    Local<FunctionTemplate> _gl_glUniform2iv = FunctionTemplate::New(gl_glUniform2iv);
    target->Set(String::New("glUniform2iv"), _gl_glUniform2iv->GetFunction());

    Local<FunctionTemplate> _gl_glUniform3iv = FunctionTemplate::New(gl_glUniform3iv);
    target->Set(String::New("glUniform3iv"), _gl_glUniform3iv->GetFunction());

    Local<FunctionTemplate> _gl_glUniform4iv = FunctionTemplate::New(gl_glUniform4iv);
    target->Set(String::New("glUniform4iv"), _gl_glUniform4iv->GetFunction());

    Local<FunctionTemplate> _gl_glUniformMatrix2fv = FunctionTemplate::New(gl_glUniformMatrix2fv);
    target->Set(String::New("glUniformMatrix2fv"), _gl_glUniformMatrix2fv->GetFunction());

    Local<FunctionTemplate> _gl_glUniformMatrix3fv = FunctionTemplate::New(gl_glUniformMatrix3fv);
    target->Set(String::New("glUniformMatrix3fv"), _gl_glUniformMatrix3fv->GetFunction());

    Local<FunctionTemplate> _gl_glUniformMatrix4fv = FunctionTemplate::New(gl_glUniformMatrix4fv);
    target->Set(String::New("glUniformMatrix4fv"), _gl_glUniformMatrix4fv->GetFunction());

    Local<FunctionTemplate> _gl_glIsShader = FunctionTemplate::New(gl_glIsShader);
    target->Set(String::New("glIsShader"), _gl_glIsShader->GetFunction());

    Local<FunctionTemplate> _gl_glIsProgram = FunctionTemplate::New(gl_glIsProgram);
    target->Set(String::New("glIsProgram"), _gl_glIsProgram->GetFunction());

    Local<FunctionTemplate> _gl_glGetShaderiv = FunctionTemplate::New(gl_glGetShaderiv);
    target->Set(String::New("glGetShaderiv"), _gl_glGetShaderiv->GetFunction());

    Local<FunctionTemplate> _gl_glGetProgramiv = FunctionTemplate::New(gl_glGetProgramiv);
    target->Set(String::New("glGetProgramiv"), _gl_glGetProgramiv->GetFunction());

    Local<FunctionTemplate> _gl_glGetAttachedShaders = FunctionTemplate::New(gl_glGetAttachedShaders);
    target->Set(String::New("glGetAttachedShaders"), _gl_glGetAttachedShaders->GetFunction());

    Local<FunctionTemplate> _gl_glGetShaderInfoLog = FunctionTemplate::New(gl_glGetShaderInfoLog);
    target->Set(String::New("glGetShaderInfoLog"), _gl_glGetShaderInfoLog->GetFunction());

    Local<FunctionTemplate> _gl_glGetProgramInfoLog = FunctionTemplate::New(gl_glGetProgramInfoLog);
    target->Set(String::New("glGetProgramInfoLog"), _gl_glGetProgramInfoLog->GetFunction());

    Local<FunctionTemplate> _gl_glGetUniformLocation = FunctionTemplate::New(gl_glGetUniformLocation);
    target->Set(String::New("glGetUniformLocation"), _gl_glGetUniformLocation->GetFunction());

    Local<FunctionTemplate> _gl_glGetActiveUniform = FunctionTemplate::New(gl_glGetActiveUniform);
    target->Set(String::New("glGetActiveUniform"), _gl_glGetActiveUniform->GetFunction());

    Local<FunctionTemplate> _gl_glGetUniformfv = FunctionTemplate::New(gl_glGetUniformfv);
    target->Set(String::New("glGetUniformfv"), _gl_glGetUniformfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetUniformiv = FunctionTemplate::New(gl_glGetUniformiv);
    target->Set(String::New("glGetUniformiv"), _gl_glGetUniformiv->GetFunction());

    Local<FunctionTemplate> _gl_glGetShaderSource = FunctionTemplate::New(gl_glGetShaderSource);
    target->Set(String::New("glGetShaderSource"), _gl_glGetShaderSource->GetFunction());

    Local<FunctionTemplate> _gl_glBindAttribLocation = FunctionTemplate::New(gl_glBindAttribLocation);
    target->Set(String::New("glBindAttribLocation"), _gl_glBindAttribLocation->GetFunction());

    Local<FunctionTemplate> _gl_glGetActiveAttrib = FunctionTemplate::New(gl_glGetActiveAttrib);
    target->Set(String::New("glGetActiveAttrib"), _gl_glGetActiveAttrib->GetFunction());

    Local<FunctionTemplate> _gl_glGetAttribLocation = FunctionTemplate::New(gl_glGetAttribLocation);
    target->Set(String::New("glGetAttribLocation"), _gl_glGetAttribLocation->GetFunction());

    Local<FunctionTemplate> _gl_glStencilFuncSeparate = FunctionTemplate::New(gl_glStencilFuncSeparate);
    target->Set(String::New("glStencilFuncSeparate"), _gl_glStencilFuncSeparate->GetFunction());

    Local<FunctionTemplate> _gl_glStencilOpSeparate = FunctionTemplate::New(gl_glStencilOpSeparate);
    target->Set(String::New("glStencilOpSeparate"), _gl_glStencilOpSeparate->GetFunction());

    Local<FunctionTemplate> _gl_glStencilMaskSeparate = FunctionTemplate::New(gl_glStencilMaskSeparate);
    target->Set(String::New("glStencilMaskSeparate"), _gl_glStencilMaskSeparate->GetFunction());

    Local<FunctionTemplate> _gl_glUniformMatrix2x3fv = FunctionTemplate::New(gl_glUniformMatrix2x3fv);
    target->Set(String::New("glUniformMatrix2x3fv"), _gl_glUniformMatrix2x3fv->GetFunction());

    Local<FunctionTemplate> _gl_glUniformMatrix3x2fv = FunctionTemplate::New(gl_glUniformMatrix3x2fv);
    target->Set(String::New("glUniformMatrix3x2fv"), _gl_glUniformMatrix3x2fv->GetFunction());

    Local<FunctionTemplate> _gl_glUniformMatrix2x4fv = FunctionTemplate::New(gl_glUniformMatrix2x4fv);
    target->Set(String::New("glUniformMatrix2x4fv"), _gl_glUniformMatrix2x4fv->GetFunction());

    Local<FunctionTemplate> _gl_glUniformMatrix4x2fv = FunctionTemplate::New(gl_glUniformMatrix4x2fv);
    target->Set(String::New("glUniformMatrix4x2fv"), _gl_glUniformMatrix4x2fv->GetFunction());

    Local<FunctionTemplate> _gl_glUniformMatrix3x4fv = FunctionTemplate::New(gl_glUniformMatrix3x4fv);
    target->Set(String::New("glUniformMatrix3x4fv"), _gl_glUniformMatrix3x4fv->GetFunction());

    Local<FunctionTemplate> _gl_glUniformMatrix4x3fv = FunctionTemplate::New(gl_glUniformMatrix4x3fv);
    target->Set(String::New("glUniformMatrix4x3fv"), _gl_glUniformMatrix4x3fv->GetFunction());


  }
}  // namespace node
