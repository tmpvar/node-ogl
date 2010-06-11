#include <node.h>
#include "common.h"

// Includes
#include "gl.h"

using namespace v8;
namespace node {

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
  }


  /**
   * glPolygonStipple
   *
   * @param GLubyte *mask
   * @return void
   */
  Handle<Value> gl_glPolygonStipple(const Arguments& args) {
    HandleScope scope;
    GLubyte _mask = (GLubyte)args[0]->Int32Value();
    glPolygonStipple(&_mask);

    args[0] = Number::New(_mask);
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
  }


  /**
   * glEdgeFlagv
   *
   * @param GLboolean *flag
   * @return void
   */
  Handle<Value> gl_glEdgeFlagv(const Arguments& args) {
    HandleScope scope;
    GLboolean _flag = (GLboolean)args[0]->Int32Value();
    glEdgeFlagv(&_flag);

    args[0] = Number::New(_flag);
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
  }


  /**
   * glClipPlane
   *
   * @param GLenum plane
   * @param GLdouble *equation
   * @return void
   */
  Handle<Value> gl_glClipPlane(const Arguments& args) {
    HandleScope scope;
    GLenum _plane = (GLenum)args[0]->Int32Value();
    GLdouble _equation = (GLdouble)args[1]->NumberValue();
    glClipPlane(_plane, &_equation);

    args[1] = Number::New(_equation);
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
   * glEnableClientState
   *
   * @param GLenum cap
   * @return void
   */
  Handle<Value> gl_glEnableClientState(const Arguments& args) {
    HandleScope scope;
    GLenum _cap = (GLenum)args[0]->Int32Value();
    glEnableClientState(_cap);
  }


  /**
   * glDisableClientState
   *
   * @param GLenum cap
   * @return void
   */
  Handle<Value> gl_glDisableClientState(const Arguments& args) {
    HandleScope scope;
    GLenum _cap = (GLenum)args[0]->Int32Value();
    glDisableClientState(_cap);
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
  }


  /**
   * glPopAttrib
   *
   * @return void
   */
  Handle<Value> gl_glPopAttrib(const Arguments& args) {
    HandleScope scope;
    glPopAttrib();
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
  }


  /**
   * glPopClientAttrib
   *
   * @return void
   */
  Handle<Value> gl_glPopClientAttrib(const Arguments& args) {
    HandleScope scope;
    glPopClientAttrib();
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
   * glFinish
   *
   * @return void
   */
  Handle<Value> gl_glFinish(const Arguments& args) {
    HandleScope scope;
    glFinish();
  }


  /**
   * glFlush
   *
   * @return void
   */
  Handle<Value> gl_glFlush(const Arguments& args) {
    HandleScope scope;
    glFlush();
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
  }


  /**
   * glDepthRange
   *
   * @param GLclampd near_val
   * @param GLclampd far_val
   * @return void
   */
  Handle<Value> gl_glDepthRange(const Arguments& args) {
    HandleScope scope;
    GLclampd _near_val = (GLclampd)args[0]->NumberValue();
    GLclampd _far_val = (GLclampd)args[1]->NumberValue();
    glDepthRange(_near_val, _far_val);
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
  }


  /**
   * glOrtho
   *
   * @param GLdouble left
   * @param GLdouble right
   * @param GLdouble bottom
   * @param GLdouble top
   * @param GLdouble near_val
   * @param GLdouble far_val
   * @return void
   */
  Handle<Value> gl_glOrtho(const Arguments& args) {
    HandleScope scope;
    GLdouble _left = (GLdouble)args[0]->NumberValue();
    GLdouble _right = (GLdouble)args[1]->NumberValue();
    GLdouble _bottom = (GLdouble)args[2]->NumberValue();
    GLdouble _top = (GLdouble)args[3]->NumberValue();
    GLdouble _near_val = (GLdouble)args[4]->NumberValue();
    GLdouble _far_val = (GLdouble)args[5]->NumberValue();
    glOrtho(_left, _right, _bottom, _top, _near_val, _far_val);
  }


  /**
   * glFrustum
   *
   * @param GLdouble left
   * @param GLdouble right
   * @param GLdouble bottom
   * @param GLdouble top
   * @param GLdouble near_val
   * @param GLdouble far_val
   * @return void
   */
  Handle<Value> gl_glFrustum(const Arguments& args) {
    HandleScope scope;
    GLdouble _left = (GLdouble)args[0]->NumberValue();
    GLdouble _right = (GLdouble)args[1]->NumberValue();
    GLdouble _bottom = (GLdouble)args[2]->NumberValue();
    GLdouble _top = (GLdouble)args[3]->NumberValue();
    GLdouble _near_val = (GLdouble)args[4]->NumberValue();
    GLdouble _far_val = (GLdouble)args[5]->NumberValue();
    glFrustum(_left, _right, _bottom, _top, _near_val, _far_val);
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
  }


  /**
   * glPushMatrix
   *
   * @return void
   */
  Handle<Value> gl_glPushMatrix(const Arguments& args) {
    HandleScope scope;
    glPushMatrix();
  }


  /**
   * glPopMatrix
   *
   * @return void
   */
  Handle<Value> gl_glPopMatrix(const Arguments& args) {
    HandleScope scope;
    glPopMatrix();
  }


  /**
   * glLoadIdentity
   *
   * @return void
   */
  Handle<Value> gl_glLoadIdentity(const Arguments& args) {
    HandleScope scope;
    glLoadIdentity();
  }


  /**
   * glLoadMatrixd
   *
   * @param GLdouble *m
   * @return void
   */
  Handle<Value> gl_glLoadMatrixd(const Arguments& args) {
    HandleScope scope;
    GLdouble _m = (GLdouble)args[0]->NumberValue();
    glLoadMatrixd(&_m);

    args[0] = Number::New(_m);
  }


  /**
   * glLoadMatrixf
   *
   * @param GLfloat *m
   * @return void
   */
  Handle<Value> gl_glLoadMatrixf(const Arguments& args) {
    HandleScope scope;
    GLfloat _m = (GLfloat)args[0]->NumberValue();
    glLoadMatrixf(&_m);

    args[0] = Number::New(_m);
  }


  /**
   * glMultMatrixd
   *
   * @param GLdouble *m
   * @return void
   */
  Handle<Value> gl_glMultMatrixd(const Arguments& args) {
    HandleScope scope;
    GLdouble _m = (GLdouble)args[0]->NumberValue();
    glMultMatrixd(&_m);

    args[0] = Number::New(_m);
  }


  /**
   * glMultMatrixf
   *
   * @param GLfloat *m
   * @return void
   */
  Handle<Value> gl_glMultMatrixf(const Arguments& args) {
    HandleScope scope;
    GLfloat _m = (GLfloat)args[0]->NumberValue();
    glMultMatrixf(&_m);

    args[0] = Number::New(_m);
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
  }


  /**
   * glEndList
   *
   * @return void
   */
  Handle<Value> gl_glEndList(const Arguments& args) {
    HandleScope scope;
    glEndList();
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
  }


  /**
   * glCallLists
   *
   * @param GLsizei n
   * @param GLenum type
   * @param GLvoid *lists
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
    GLvoid *_lists = (GLvoid *)lists_buffer->data();
    glCallLists(_n, _type, _lists);
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
  }


  /**
   * glEnd
   *
   * @return void
   */
  Handle<Value> gl_glEnd(const Arguments& args) {
    HandleScope scope;
    glEnd();
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
  }


  /**
   * glVertex2dv
   *
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glVertex2dv(const Arguments& args) {
    HandleScope scope;
    GLdouble _v = (GLdouble)args[0]->NumberValue();
    glVertex2dv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glVertex2fv
   *
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glVertex2fv(const Arguments& args) {
    HandleScope scope;
    GLfloat _v = (GLfloat)args[0]->NumberValue();
    glVertex2fv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glVertex2iv
   *
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glVertex2iv(const Arguments& args) {
    HandleScope scope;
    GLint _v = (GLint)args[0]->Int32Value();
    glVertex2iv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glVertex2sv
   *
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertex2sv(const Arguments& args) {
    HandleScope scope;
    GLshort _v = (GLshort)args[0]->Int32Value();
    glVertex2sv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glVertex3dv
   *
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glVertex3dv(const Arguments& args) {
    HandleScope scope;
    GLdouble _v = (GLdouble)args[0]->NumberValue();
    glVertex3dv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glVertex3fv
   *
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glVertex3fv(const Arguments& args) {
    HandleScope scope;
    GLfloat _v = (GLfloat)args[0]->NumberValue();
    glVertex3fv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glVertex3iv
   *
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glVertex3iv(const Arguments& args) {
    HandleScope scope;
    GLint _v = (GLint)args[0]->Int32Value();
    glVertex3iv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glVertex3sv
   *
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertex3sv(const Arguments& args) {
    HandleScope scope;
    GLshort _v = (GLshort)args[0]->Int32Value();
    glVertex3sv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glVertex4dv
   *
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glVertex4dv(const Arguments& args) {
    HandleScope scope;
    GLdouble _v = (GLdouble)args[0]->NumberValue();
    glVertex4dv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glVertex4fv
   *
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glVertex4fv(const Arguments& args) {
    HandleScope scope;
    GLfloat _v = (GLfloat)args[0]->NumberValue();
    glVertex4fv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glVertex4iv
   *
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glVertex4iv(const Arguments& args) {
    HandleScope scope;
    GLint _v = (GLint)args[0]->Int32Value();
    glVertex4iv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glVertex4sv
   *
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glVertex4sv(const Arguments& args) {
    HandleScope scope;
    GLshort _v = (GLshort)args[0]->Int32Value();
    glVertex4sv(&_v);

    args[0] = Number::New(_v);
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
  }


  /**
   * glNormal3bv
   *
   * @param GLbyte *v
   * @return void
   */
  Handle<Value> gl_glNormal3bv(const Arguments& args) {
    HandleScope scope;
    GLbyte _v = (GLbyte)args[0]->Int32Value();
    glNormal3bv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glNormal3dv
   *
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glNormal3dv(const Arguments& args) {
    HandleScope scope;
    GLdouble _v = (GLdouble)args[0]->NumberValue();
    glNormal3dv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glNormal3fv
   *
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glNormal3fv(const Arguments& args) {
    HandleScope scope;
    GLfloat _v = (GLfloat)args[0]->NumberValue();
    glNormal3fv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glNormal3iv
   *
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glNormal3iv(const Arguments& args) {
    HandleScope scope;
    GLint _v = (GLint)args[0]->Int32Value();
    glNormal3iv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glNormal3sv
   *
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glNormal3sv(const Arguments& args) {
    HandleScope scope;
    GLshort _v = (GLshort)args[0]->Int32Value();
    glNormal3sv(&_v);

    args[0] = Number::New(_v);
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
  }


  /**
   * glIndexdv
   *
   * @param GLdouble *c
   * @return void
   */
  Handle<Value> gl_glIndexdv(const Arguments& args) {
    HandleScope scope;
    GLdouble _c = (GLdouble)args[0]->NumberValue();
    glIndexdv(&_c);

    args[0] = Number::New(_c);
  }


  /**
   * glIndexfv
   *
   * @param GLfloat *c
   * @return void
   */
  Handle<Value> gl_glIndexfv(const Arguments& args) {
    HandleScope scope;
    GLfloat _c = (GLfloat)args[0]->NumberValue();
    glIndexfv(&_c);

    args[0] = Number::New(_c);
  }


  /**
   * glIndexiv
   *
   * @param GLint *c
   * @return void
   */
  Handle<Value> gl_glIndexiv(const Arguments& args) {
    HandleScope scope;
    GLint _c = (GLint)args[0]->Int32Value();
    glIndexiv(&_c);

    args[0] = Number::New(_c);
  }


  /**
   * glIndexsv
   *
   * @param GLshort *c
   * @return void
   */
  Handle<Value> gl_glIndexsv(const Arguments& args) {
    HandleScope scope;
    GLshort _c = (GLshort)args[0]->Int32Value();
    glIndexsv(&_c);

    args[0] = Number::New(_c);
  }


  /**
   * glIndexubv
   *
   * @param GLubyte *c
   * @return void
   */
  Handle<Value> gl_glIndexubv(const Arguments& args) {
    HandleScope scope;
    GLubyte _c = (GLubyte)args[0]->Int32Value();
    glIndexubv(&_c);

    args[0] = Number::New(_c);
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
  }


  /**
   * glColor3bv
   *
   * @param GLbyte *v
   * @return void
   */
  Handle<Value> gl_glColor3bv(const Arguments& args) {
    HandleScope scope;
    GLbyte _v = (GLbyte)args[0]->Int32Value();
    glColor3bv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glColor3dv
   *
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glColor3dv(const Arguments& args) {
    HandleScope scope;
    GLdouble _v = (GLdouble)args[0]->NumberValue();
    glColor3dv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glColor3fv
   *
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glColor3fv(const Arguments& args) {
    HandleScope scope;
    GLfloat _v = (GLfloat)args[0]->NumberValue();
    glColor3fv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glColor3iv
   *
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glColor3iv(const Arguments& args) {
    HandleScope scope;
    GLint _v = (GLint)args[0]->Int32Value();
    glColor3iv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glColor3sv
   *
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glColor3sv(const Arguments& args) {
    HandleScope scope;
    GLshort _v = (GLshort)args[0]->Int32Value();
    glColor3sv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glColor3ubv
   *
   * @param GLubyte *v
   * @return void
   */
  Handle<Value> gl_glColor3ubv(const Arguments& args) {
    HandleScope scope;
    GLubyte _v = (GLubyte)args[0]->Int32Value();
    glColor3ubv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glColor3uiv
   *
   * @param GLuint *v
   * @return void
   */
  Handle<Value> gl_glColor3uiv(const Arguments& args) {
    HandleScope scope;
    GLuint _v = (GLuint)args[0]->Uint32Value();
    glColor3uiv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glColor3usv
   *
   * @param GLushort *v
   * @return void
   */
  Handle<Value> gl_glColor3usv(const Arguments& args) {
    HandleScope scope;
    GLushort _v = (GLushort)args[0]->Uint32Value();
    glColor3usv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glColor4bv
   *
   * @param GLbyte *v
   * @return void
   */
  Handle<Value> gl_glColor4bv(const Arguments& args) {
    HandleScope scope;
    GLbyte _v = (GLbyte)args[0]->Int32Value();
    glColor4bv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glColor4dv
   *
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glColor4dv(const Arguments& args) {
    HandleScope scope;
    GLdouble _v = (GLdouble)args[0]->NumberValue();
    glColor4dv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glColor4fv
   *
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glColor4fv(const Arguments& args) {
    HandleScope scope;
    GLfloat _v = (GLfloat)args[0]->NumberValue();
    glColor4fv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glColor4iv
   *
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glColor4iv(const Arguments& args) {
    HandleScope scope;
    GLint _v = (GLint)args[0]->Int32Value();
    glColor4iv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glColor4sv
   *
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glColor4sv(const Arguments& args) {
    HandleScope scope;
    GLshort _v = (GLshort)args[0]->Int32Value();
    glColor4sv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glColor4ubv
   *
   * @param GLubyte *v
   * @return void
   */
  Handle<Value> gl_glColor4ubv(const Arguments& args) {
    HandleScope scope;
    GLubyte _v = (GLubyte)args[0]->Int32Value();
    glColor4ubv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glColor4uiv
   *
   * @param GLuint *v
   * @return void
   */
  Handle<Value> gl_glColor4uiv(const Arguments& args) {
    HandleScope scope;
    GLuint _v = (GLuint)args[0]->Uint32Value();
    glColor4uiv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glColor4usv
   *
   * @param GLushort *v
   * @return void
   */
  Handle<Value> gl_glColor4usv(const Arguments& args) {
    HandleScope scope;
    GLushort _v = (GLushort)args[0]->Uint32Value();
    glColor4usv(&_v);

    args[0] = Number::New(_v);
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
  }


  /**
   * glTexCoord1dv
   *
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glTexCoord1dv(const Arguments& args) {
    HandleScope scope;
    GLdouble _v = (GLdouble)args[0]->NumberValue();
    glTexCoord1dv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glTexCoord1fv
   *
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glTexCoord1fv(const Arguments& args) {
    HandleScope scope;
    GLfloat _v = (GLfloat)args[0]->NumberValue();
    glTexCoord1fv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glTexCoord1iv
   *
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glTexCoord1iv(const Arguments& args) {
    HandleScope scope;
    GLint _v = (GLint)args[0]->Int32Value();
    glTexCoord1iv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glTexCoord1sv
   *
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glTexCoord1sv(const Arguments& args) {
    HandleScope scope;
    GLshort _v = (GLshort)args[0]->Int32Value();
    glTexCoord1sv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glTexCoord2dv
   *
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glTexCoord2dv(const Arguments& args) {
    HandleScope scope;
    GLdouble _v = (GLdouble)args[0]->NumberValue();
    glTexCoord2dv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glTexCoord2fv
   *
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glTexCoord2fv(const Arguments& args) {
    HandleScope scope;
    GLfloat _v = (GLfloat)args[0]->NumberValue();
    glTexCoord2fv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glTexCoord2iv
   *
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glTexCoord2iv(const Arguments& args) {
    HandleScope scope;
    GLint _v = (GLint)args[0]->Int32Value();
    glTexCoord2iv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glTexCoord2sv
   *
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glTexCoord2sv(const Arguments& args) {
    HandleScope scope;
    GLshort _v = (GLshort)args[0]->Int32Value();
    glTexCoord2sv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glTexCoord3dv
   *
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glTexCoord3dv(const Arguments& args) {
    HandleScope scope;
    GLdouble _v = (GLdouble)args[0]->NumberValue();
    glTexCoord3dv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glTexCoord3fv
   *
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glTexCoord3fv(const Arguments& args) {
    HandleScope scope;
    GLfloat _v = (GLfloat)args[0]->NumberValue();
    glTexCoord3fv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glTexCoord3iv
   *
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glTexCoord3iv(const Arguments& args) {
    HandleScope scope;
    GLint _v = (GLint)args[0]->Int32Value();
    glTexCoord3iv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glTexCoord3sv
   *
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glTexCoord3sv(const Arguments& args) {
    HandleScope scope;
    GLshort _v = (GLshort)args[0]->Int32Value();
    glTexCoord3sv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glTexCoord4dv
   *
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glTexCoord4dv(const Arguments& args) {
    HandleScope scope;
    GLdouble _v = (GLdouble)args[0]->NumberValue();
    glTexCoord4dv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glTexCoord4fv
   *
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glTexCoord4fv(const Arguments& args) {
    HandleScope scope;
    GLfloat _v = (GLfloat)args[0]->NumberValue();
    glTexCoord4fv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glTexCoord4iv
   *
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glTexCoord4iv(const Arguments& args) {
    HandleScope scope;
    GLint _v = (GLint)args[0]->Int32Value();
    glTexCoord4iv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glTexCoord4sv
   *
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glTexCoord4sv(const Arguments& args) {
    HandleScope scope;
    GLshort _v = (GLshort)args[0]->Int32Value();
    glTexCoord4sv(&_v);

    args[0] = Number::New(_v);
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
  }


  /**
   * glRasterPos2dv
   *
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glRasterPos2dv(const Arguments& args) {
    HandleScope scope;
    GLdouble _v = (GLdouble)args[0]->NumberValue();
    glRasterPos2dv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glRasterPos2fv
   *
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glRasterPos2fv(const Arguments& args) {
    HandleScope scope;
    GLfloat _v = (GLfloat)args[0]->NumberValue();
    glRasterPos2fv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glRasterPos2iv
   *
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glRasterPos2iv(const Arguments& args) {
    HandleScope scope;
    GLint _v = (GLint)args[0]->Int32Value();
    glRasterPos2iv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glRasterPos2sv
   *
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glRasterPos2sv(const Arguments& args) {
    HandleScope scope;
    GLshort _v = (GLshort)args[0]->Int32Value();
    glRasterPos2sv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glRasterPos3dv
   *
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glRasterPos3dv(const Arguments& args) {
    HandleScope scope;
    GLdouble _v = (GLdouble)args[0]->NumberValue();
    glRasterPos3dv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glRasterPos3fv
   *
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glRasterPos3fv(const Arguments& args) {
    HandleScope scope;
    GLfloat _v = (GLfloat)args[0]->NumberValue();
    glRasterPos3fv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glRasterPos3iv
   *
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glRasterPos3iv(const Arguments& args) {
    HandleScope scope;
    GLint _v = (GLint)args[0]->Int32Value();
    glRasterPos3iv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glRasterPos3sv
   *
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glRasterPos3sv(const Arguments& args) {
    HandleScope scope;
    GLshort _v = (GLshort)args[0]->Int32Value();
    glRasterPos3sv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glRasterPos4dv
   *
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glRasterPos4dv(const Arguments& args) {
    HandleScope scope;
    GLdouble _v = (GLdouble)args[0]->NumberValue();
    glRasterPos4dv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glRasterPos4fv
   *
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glRasterPos4fv(const Arguments& args) {
    HandleScope scope;
    GLfloat _v = (GLfloat)args[0]->NumberValue();
    glRasterPos4fv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glRasterPos4iv
   *
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glRasterPos4iv(const Arguments& args) {
    HandleScope scope;
    GLint _v = (GLint)args[0]->Int32Value();
    glRasterPos4iv(&_v);

    args[0] = Number::New(_v);
  }


  /**
   * glRasterPos4sv
   *
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glRasterPos4sv(const Arguments& args) {
    HandleScope scope;
    GLshort _v = (GLshort)args[0]->Int32Value();
    glRasterPos4sv(&_v);

    args[0] = Number::New(_v);
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
  }


  /**
   * glRectdv
   *
   * @param GLdouble *v1
   * @param GLdouble *v2
   * @return void
   */
  Handle<Value> gl_glRectdv(const Arguments& args) {
    HandleScope scope;
    GLdouble _v1 = (GLdouble)args[0]->NumberValue();
    GLdouble _v2 = (GLdouble)args[1]->NumberValue();
    glRectdv(&_v1, &_v2);

    args[0] = Number::New(_v1);

    args[1] = Number::New(_v2);
  }


  /**
   * glRectfv
   *
   * @param GLfloat *v1
   * @param GLfloat *v2
   * @return void
   */
  Handle<Value> gl_glRectfv(const Arguments& args) {
    HandleScope scope;
    GLfloat _v1 = (GLfloat)args[0]->NumberValue();
    GLfloat _v2 = (GLfloat)args[1]->NumberValue();
    glRectfv(&_v1, &_v2);

    args[0] = Number::New(_v1);

    args[1] = Number::New(_v2);
  }


  /**
   * glRectiv
   *
   * @param GLint *v1
   * @param GLint *v2
   * @return void
   */
  Handle<Value> gl_glRectiv(const Arguments& args) {
    HandleScope scope;
    GLint _v1 = (GLint)args[0]->Int32Value();
    GLint _v2 = (GLint)args[1]->Int32Value();
    glRectiv(&_v1, &_v2);

    args[0] = Number::New(_v1);

    args[1] = Number::New(_v2);
  }


  /**
   * glRectsv
   *
   * @param GLshort *v1
   * @param GLshort *v2
   * @return void
   */
  Handle<Value> gl_glRectsv(const Arguments& args) {
    HandleScope scope;
    GLshort _v1 = (GLshort)args[0]->Int32Value();
    GLshort _v2 = (GLshort)args[1]->Int32Value();
    glRectsv(&_v1, &_v2);

    args[0] = Number::New(_v1);

    args[1] = Number::New(_v2);
  }


  /**
   * glVertexPointer
   *
   * @param GLint size
   * @param GLenum type
   * @param GLsizei stride
   * @param GLvoid *ptr
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
    Buffer * ptr_buffer = ObjectWrap::Unwrap<Buffer>(args[3]->ToObject());
    GLvoid *_ptr = (GLvoid *)ptr_buffer->data();
    glVertexPointer(_size, _type, _stride, _ptr);
  }


  /**
   * glNormalPointer
   *
   * @param GLenum type
   * @param GLsizei stride
   * @param GLvoid *ptr
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
    Buffer * ptr_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    GLvoid *_ptr = (GLvoid *)ptr_buffer->data();
    glNormalPointer(_type, _stride, _ptr);
  }


  /**
   * glColorPointer
   *
   * @param GLint size
   * @param GLenum type
   * @param GLsizei stride
   * @param GLvoid *ptr
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
    Buffer * ptr_buffer = ObjectWrap::Unwrap<Buffer>(args[3]->ToObject());
    GLvoid *_ptr = (GLvoid *)ptr_buffer->data();
    glColorPointer(_size, _type, _stride, _ptr);
  }


  /**
   * glIndexPointer
   *
   * @param GLenum type
   * @param GLsizei stride
   * @param GLvoid *ptr
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
    Buffer * ptr_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    GLvoid *_ptr = (GLvoid *)ptr_buffer->data();
    glIndexPointer(_type, _stride, _ptr);
  }


  /**
   * glTexCoordPointer
   *
   * @param GLint size
   * @param GLenum type
   * @param GLsizei stride
   * @param GLvoid *ptr
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
    Buffer * ptr_buffer = ObjectWrap::Unwrap<Buffer>(args[3]->ToObject());
    GLvoid *_ptr = (GLvoid *)ptr_buffer->data();
    glTexCoordPointer(_size, _type, _stride, _ptr);
  }


  /**
   * glEdgeFlagPointer
   *
   * @param GLsizei stride
   * @param GLvoid *ptr
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
    Buffer * ptr_buffer = ObjectWrap::Unwrap<Buffer>(args[1]->ToObject());
    GLvoid *_ptr = (GLvoid *)ptr_buffer->data();
    glEdgeFlagPointer(_stride, _ptr);
  }


  /**
   * glGetPointerv
   *
   * @param GLenum pname
   * @param GLvoid **params
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
  }


  /**
   * glDrawElements
   *
   * @param GLenum mode
   * @param GLsizei count
   * @param GLenum type
   * @param GLvoid *indices
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
    GLvoid *_indices = (GLvoid *)indices_buffer->data();
    glDrawElements(_mode, _count, _type, _indices);
  }


  /**
   * glInterleavedArrays
   *
   * @param GLenum format
   * @param GLsizei stride
   * @param GLvoid *pointer
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
    GLvoid *_pointer = (GLvoid *)pointer_buffer->data();
    glInterleavedArrays(_format, _stride, _pointer);
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
  }


  /**
   * glLightfv
   *
   * @param GLenum light
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glLightfv(const Arguments& args) {
    HandleScope scope;
    GLenum _light = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glLightfv(_light, _pname, &_params);

    args[2] = Number::New(_params);
  }


  /**
   * glLightiv
   *
   * @param GLenum light
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glLightiv(const Arguments& args) {
    HandleScope scope;
    GLenum _light = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glLightiv(_light, _pname, &_params);

    args[2] = Number::New(_params);
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
  }


  /**
   * glLightModelfv
   *
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glLightModelfv(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLfloat _params = (GLfloat)args[1]->NumberValue();
    glLightModelfv(_pname, &_params);

    args[1] = Number::New(_params);
  }


  /**
   * glLightModeliv
   *
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glLightModeliv(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLint _params = (GLint)args[1]->Int32Value();
    glLightModeliv(_pname, &_params);

    args[1] = Number::New(_params);
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
  }


  /**
   * glMaterialfv
   *
   * @param GLenum face
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glMaterialfv(const Arguments& args) {
    HandleScope scope;
    GLenum _face = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glMaterialfv(_face, _pname, &_params);

    args[2] = Number::New(_params);
  }


  /**
   * glMaterialiv
   *
   * @param GLenum face
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glMaterialiv(const Arguments& args) {
    HandleScope scope;
    GLenum _face = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glMaterialiv(_face, _pname, &_params);

    args[2] = Number::New(_params);
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
  }


  /**
   * glPixelMapfv
   *
   * @param GLenum map
   * @param GLsizei mapsize
   * @param GLfloat *values
   * @return void
   */
  Handle<Value> gl_glPixelMapfv(const Arguments& args) {
    HandleScope scope;
    GLenum _map = (GLenum)args[0]->Int32Value();
    GLsizei _mapsize = (GLsizei)args[1]->Int32Value();
    GLfloat _values = (GLfloat)args[2]->NumberValue();
    glPixelMapfv(_map, _mapsize, &_values);

    args[2] = Number::New(_values);
  }


  /**
   * glPixelMapuiv
   *
   * @param GLenum map
   * @param GLsizei mapsize
   * @param GLuint *values
   * @return void
   */
  Handle<Value> gl_glPixelMapuiv(const Arguments& args) {
    HandleScope scope;
    GLenum _map = (GLenum)args[0]->Int32Value();
    GLsizei _mapsize = (GLsizei)args[1]->Int32Value();
    GLuint _values = (GLuint)args[2]->Uint32Value();
    glPixelMapuiv(_map, _mapsize, &_values);

    args[2] = Number::New(_values);
  }


  /**
   * glPixelMapusv
   *
   * @param GLenum map
   * @param GLsizei mapsize
   * @param GLushort *values
   * @return void
   */
  Handle<Value> gl_glPixelMapusv(const Arguments& args) {
    HandleScope scope;
    GLenum _map = (GLenum)args[0]->Int32Value();
    GLsizei _mapsize = (GLsizei)args[1]->Int32Value();
    GLushort _values = (GLushort)args[2]->Uint32Value();
    glPixelMapusv(_map, _mapsize, &_values);

    args[2] = Number::New(_values);
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
   * @param GLubyte *bitmap
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
    GLubyte _bitmap = (GLubyte)args[6]->Int32Value();
    glBitmap(_width, _height, _xorig, _yorig, _xmove, _ymove, &_bitmap);

    args[6] = Number::New(_bitmap);
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
  }


  /**
   * glDrawPixels
   *
   * @param GLsizei width
   * @param GLsizei height
   * @param GLenum format
   * @param GLenum type
   * @param GLvoid *pixels
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
    GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glDrawPixels(_width, _height, _format, _type, _pixels);
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
  }


  /**
   * glTexGendv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLdouble *params
   * @return void
   */
  Handle<Value> gl_glTexGendv(const Arguments& args) {
    HandleScope scope;
    GLenum _coord = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLdouble _params = (GLdouble)args[2]->NumberValue();
    glTexGendv(_coord, _pname, &_params);

    args[2] = Number::New(_params);
  }


  /**
   * glTexGenfv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glTexGenfv(const Arguments& args) {
    HandleScope scope;
    GLenum _coord = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glTexGenfv(_coord, _pname, &_params);

    args[2] = Number::New(_params);
  }


  /**
   * glTexGeniv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glTexGeniv(const Arguments& args) {
    HandleScope scope;
    GLenum _coord = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glTexGeniv(_coord, _pname, &_params);

    args[2] = Number::New(_params);
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
  }


  /**
   * glTexEnvfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glTexEnvfv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glTexEnvfv(_target, _pname, &_params);

    args[2] = Number::New(_params);
  }


  /**
   * glTexEnviv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glTexEnviv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glTexEnviv(_target, _pname, &_params);

    args[2] = Number::New(_params);
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
  }


  /**
   * glTexParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glTexParameterfv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glTexParameterfv(_target, _pname, &_params);

    args[2] = Number::New(_params);
  }


  /**
   * glTexParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glTexParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glTexParameteriv(_target, _pname, &_params);

    args[2] = Number::New(_params);
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
  }


  /**
   * glTexImage1D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLint internalFormat
   * @param GLsizei width
   * @param GLint border
   * @param GLenum format
   * @param GLenum type
   * @param GLvoid *pixels
   * @return void
   */
  Handle<Value> gl_glTexImage1D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLint _internalFormat = (GLint)args[2]->Int32Value();
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
    GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glTexImage1D(_target, _level, _internalFormat, _width, _border, _format, _type, _pixels);
  }


  /**
   * glTexImage2D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLint internalFormat
   * @param GLsizei width
   * @param GLsizei height
   * @param GLint border
   * @param GLenum format
   * @param GLenum type
   * @param GLvoid *pixels
   * @return void
   */
  Handle<Value> gl_glTexImage2D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLint _internalFormat = (GLint)args[2]->Int32Value();
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
    GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glTexImage2D(_target, _level, _internalFormat, _width, _height, _border, _format, _type, _pixels);
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
  }


  /**
   * glDeleteTextures
   *
   * @param GLsizei n
   * @param GLuint *textures
   * @return void
   */
  Handle<Value> gl_glDeleteTextures(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    GLuint _textures = (GLuint)args[1]->Uint32Value();
    glDeleteTextures(_n, &_textures);

    args[1] = Number::New(_textures);
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
  }


  /**
   * glPrioritizeTextures
   *
   * @param GLsizei n
   * @param GLuint *textures
   * @param GLclampf *priorities
   * @return void
   */
  Handle<Value> gl_glPrioritizeTextures(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    GLuint _textures = (GLuint)args[1]->Uint32Value();
    GLclampf _priorities = (GLclampf)args[2]->NumberValue();
    glPrioritizeTextures(_n, &_textures, &_priorities);

    args[1] = Number::New(_textures);

    args[2] = Number::New(_priorities);
  }


  /**
   * glAreTexturesResident
   *
   * @param GLsizei n
   * @param GLuint *textures
   * @param GLboolean *residences
   * @return GLboolean
   */
  Handle<Value> gl_glAreTexturesResident(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    GLuint _textures = (GLuint)args[1]->Uint32Value();
    GLboolean _residences = (GLboolean)args[2]->Int32Value();
    GLboolean _ret = glAreTexturesResident(_n, &_textures, &_residences);

    args[1] = Number::New(_textures);

    args[2] = Number::New(_residences);

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
   * glTexSubImage1D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLint xoffset
   * @param GLsizei width
   * @param GLenum format
   * @param GLenum type
   * @param GLvoid *pixels
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
    GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glTexSubImage1D(_target, _level, _xoffset, _width, _format, _type, _pixels);
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
   * @param GLvoid *pixels
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
    GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glTexSubImage2D(_target, _level, _xoffset, _yoffset, _width, _height, _format, _type, _pixels);
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
  }


  /**
   * glMap1d
   *
   * @param GLenum target
   * @param GLdouble u1
   * @param GLdouble u2
   * @param GLint stride
   * @param GLint order
   * @param GLdouble *points
   * @return void
   */
  Handle<Value> gl_glMap1d(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _u1 = (GLdouble)args[1]->NumberValue();
    GLdouble _u2 = (GLdouble)args[2]->NumberValue();
    GLint _stride = (GLint)args[3]->Int32Value();
    GLint _order = (GLint)args[4]->Int32Value();
    GLdouble _points = (GLdouble)args[5]->NumberValue();
    glMap1d(_target, _u1, _u2, _stride, _order, &_points);

    args[5] = Number::New(_points);
  }


  /**
   * glMap1f
   *
   * @param GLenum target
   * @param GLfloat u1
   * @param GLfloat u2
   * @param GLint stride
   * @param GLint order
   * @param GLfloat *points
   * @return void
   */
  Handle<Value> gl_glMap1f(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _u1 = (GLfloat)args[1]->NumberValue();
    GLfloat _u2 = (GLfloat)args[2]->NumberValue();
    GLint _stride = (GLint)args[3]->Int32Value();
    GLint _order = (GLint)args[4]->Int32Value();
    GLfloat _points = (GLfloat)args[5]->NumberValue();
    glMap1f(_target, _u1, _u2, _stride, _order, &_points);

    args[5] = Number::New(_points);
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
   * @param GLdouble *points
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
    GLdouble _points = (GLdouble)args[9]->NumberValue();
    glMap2d(_target, _u1, _u2, _ustride, _uorder, _v1, _v2, _vstride, _vorder, &_points);

    args[9] = Number::New(_points);
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
   * @param GLfloat *points
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
    GLfloat _points = (GLfloat)args[9]->NumberValue();
    glMap2f(_target, _u1, _u2, _ustride, _uorder, _v1, _v2, _vstride, _vorder, &_points);

    args[9] = Number::New(_points);
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
  }


  /**
   * glEvalCoord1dv
   *
   * @param GLdouble *u
   * @return void
   */
  Handle<Value> gl_glEvalCoord1dv(const Arguments& args) {
    HandleScope scope;
    GLdouble _u = (GLdouble)args[0]->NumberValue();
    glEvalCoord1dv(&_u);

    args[0] = Number::New(_u);
  }


  /**
   * glEvalCoord1fv
   *
   * @param GLfloat *u
   * @return void
   */
  Handle<Value> gl_glEvalCoord1fv(const Arguments& args) {
    HandleScope scope;
    GLfloat _u = (GLfloat)args[0]->NumberValue();
    glEvalCoord1fv(&_u);

    args[0] = Number::New(_u);
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
  }


  /**
   * glEvalCoord2dv
   *
   * @param GLdouble *u
   * @return void
   */
  Handle<Value> gl_glEvalCoord2dv(const Arguments& args) {
    HandleScope scope;
    GLdouble _u = (GLdouble)args[0]->NumberValue();
    glEvalCoord2dv(&_u);

    args[0] = Number::New(_u);
  }


  /**
   * glEvalCoord2fv
   *
   * @param GLfloat *u
   * @return void
   */
  Handle<Value> gl_glEvalCoord2fv(const Arguments& args) {
    HandleScope scope;
    GLfloat _u = (GLfloat)args[0]->NumberValue();
    glEvalCoord2fv(&_u);

    args[0] = Number::New(_u);
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
  }


  /**
   * glFogfv
   *
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glFogfv(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLfloat _params = (GLfloat)args[1]->NumberValue();
    glFogfv(_pname, &_params);

    args[1] = Number::New(_params);
  }


  /**
   * glFogiv
   *
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glFogiv(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    GLint _params = (GLint)args[1]->Int32Value();
    glFogiv(_pname, &_params);

    args[1] = Number::New(_params);
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
  }


  /**
   * glInitNames
   *
   * @return void
   */
  Handle<Value> gl_glInitNames(const Arguments& args) {
    HandleScope scope;
    glInitNames();
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
  }


  /**
   * glPopName
   *
   * @return void
   */
  Handle<Value> gl_glPopName(const Arguments& args) {
    HandleScope scope;
    glPopName();
  }


  /**
   * glDrawRangeElements
   *
   * @param GLenum mode
   * @param GLuint start
   * @param GLuint end
   * @param GLsizei count
   * @param GLenum type
   * @param GLvoid *indices
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
    GLvoid *_indices = (GLvoid *)indices_buffer->data();
    glDrawRangeElements(_mode, _start, _end, _count, _type, _indices);
  }


  /**
   * glTexImage3D
   *
   * @param GLenum target
   * @param GLint level
   * @param GLint internalFormat
   * @param GLsizei width
   * @param GLsizei height
   * @param GLsizei depth
   * @param GLint border
   * @param GLenum format
   * @param GLenum type
   * @param GLvoid *pixels
   * @return void
   */
  Handle<Value> gl_glTexImage3D(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _level = (GLint)args[1]->Int32Value();
    GLint _internalFormat = (GLint)args[2]->Int32Value();
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
    GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glTexImage3D(_target, _level, _internalFormat, _width, _height, _depth, _border, _format, _type, _pixels);
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
   * @param GLvoid *pixels
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
    GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glTexSubImage3D(_target, _level, _xoffset, _yoffset, _zoffset, _width, _height, _depth, _format, _type, _pixels);
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
  }


  /**
   * glColorTable
   *
   * @param GLenum target
   * @param GLenum internalformat
   * @param GLsizei width
   * @param GLenum format
   * @param GLenum type
   * @param GLvoid *table
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
    GLvoid *_table = (GLvoid *)table_buffer->data();
    glColorTable(_target, _internalformat, _width, _format, _type, _table);
  }


  /**
   * glColorSubTable
   *
   * @param GLenum target
   * @param GLsizei start
   * @param GLsizei count
   * @param GLenum format
   * @param GLenum type
   * @param GLvoid *data
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
    GLvoid *_data = (GLvoid *)data_buffer->data();
    glColorSubTable(_target, _start, _count, _format, _type, _data);
  }


  /**
   * glColorTableParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glColorTableParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glColorTableParameteriv(_target, _pname, &_params);

    args[2] = Number::New(_params);
  }


  /**
   * glColorTableParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glColorTableParameterfv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glColorTableParameterfv(_target, _pname, &_params);

    args[2] = Number::New(_params);
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
  }


  /**
   * glGetMinmax
   *
   * @param GLenum target
   * @param GLboolean reset
   * @param GLenum format
   * @param GLenum types
   * @param GLvoid *values
   * @return void
   */
  Handle<Value> gl_glGetMinmax(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLboolean _reset = (GLboolean)args[1]->Int32Value();
    GLenum _format = (GLenum)args[2]->Int32Value();
    GLenum _types = (GLenum)args[3]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[4])) {
        return ThrowException(Exception::Error(
                              String::New("4nth argument needs to be a buffer")));
    }
    Buffer * values_buffer = ObjectWrap::Unwrap<Buffer>(args[4]->ToObject());
    GLvoid *_values = (GLvoid *)values_buffer->data();
    glGetMinmax(_target, _reset, _format, _types, _values);
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
  }


  /**
   * glConvolutionFilter1D
   *
   * @param GLenum target
   * @param GLenum internalformat
   * @param GLsizei width
   * @param GLenum format
   * @param GLenum type
   * @param GLvoid *image
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
    GLvoid *_image = (GLvoid *)image_buffer->data();
    glConvolutionFilter1D(_target, _internalformat, _width, _format, _type, _image);
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
   * @param GLvoid *image
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
    GLvoid *_image = (GLvoid *)image_buffer->data();
    glConvolutionFilter2D(_target, _internalformat, _width, _height, _format, _type, _image);
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
  }


  /**
   * glConvolutionParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> gl_glConvolutionParameterfv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLfloat _params = (GLfloat)args[2]->NumberValue();
    glConvolutionParameterfv(_target, _pname, &_params);

    args[2] = Number::New(_params);
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
  }


  /**
   * glConvolutionParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> gl_glConvolutionParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    GLint _params = (GLint)args[2]->Int32Value();
    glConvolutionParameteriv(_target, _pname, &_params);

    args[2] = Number::New(_params);
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
   * @param GLvoid *row
   * @param GLvoid *column
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
    GLvoid *_row = (GLvoid *)row_buffer->data();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[7])) {
        return ThrowException(Exception::Error(
                              String::New("7nth argument needs to be a buffer")));
    }
    Buffer * column_buffer = ObjectWrap::Unwrap<Buffer>(args[7]->ToObject());
    GLvoid *_column = (GLvoid *)column_buffer->data();
    glSeparableFilter2D(_target, _internalformat, _width, _height, _format, _type, _row, _column);
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
   * @param GLvoid *data
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
    GLvoid *_data = (GLvoid *)data_buffer->data();
    glCompressedTexImage1D(_target, _level, _internalformat, _width, _border, _imageSize, _data);
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
   * @param GLvoid *data
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
    GLvoid *_data = (GLvoid *)data_buffer->data();
    glCompressedTexImage2D(_target, _level, _internalformat, _width, _height, _border, _imageSize, _data);
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
   * @param GLvoid *data
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
    GLvoid *_data = (GLvoid *)data_buffer->data();
    glCompressedTexImage3D(_target, _level, _internalformat, _width, _height, _depth, _border, _imageSize, _data);
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
   * @param GLvoid *data
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
    GLvoid *_data = (GLvoid *)data_buffer->data();
    glCompressedTexSubImage1D(_target, _level, _xoffset, _width, _format, _imageSize, _data);
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
   * @param GLvoid *data
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
    GLvoid *_data = (GLvoid *)data_buffer->data();
    glCompressedTexSubImage2D(_target, _level, _xoffset, _yoffset, _width, _height, _format, _imageSize, _data);
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
   * @param GLvoid *data
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
    GLvoid *_data = (GLvoid *)data_buffer->data();
    glCompressedTexSubImage3D(_target, _level, _xoffset, _yoffset, _zoffset, _width, _height, _depth, _format, _imageSize, _data);
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
  }


  /**
   * glMultiTexCoord1dv
   *
   * @param GLenum target
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1dv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _v = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord1dv(_target, &_v);

    args[1] = Number::New(_v);
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
  }


  /**
   * glMultiTexCoord1fv
   *
   * @param GLenum target
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1fv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _v = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord1fv(_target, &_v);

    args[1] = Number::New(_v);
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
  }


  /**
   * glMultiTexCoord1iv
   *
   * @param GLenum target
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1iv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _v = (GLint)args[1]->Int32Value();
    glMultiTexCoord1iv(_target, &_v);

    args[1] = Number::New(_v);
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
  }


  /**
   * glMultiTexCoord1sv
   *
   * @param GLenum target
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1sv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLshort _v = (GLshort)args[1]->Int32Value();
    glMultiTexCoord1sv(_target, &_v);

    args[1] = Number::New(_v);
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
  }


  /**
   * glMultiTexCoord2dv
   *
   * @param GLenum target
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2dv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _v = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord2dv(_target, &_v);

    args[1] = Number::New(_v);
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
  }


  /**
   * glMultiTexCoord2fv
   *
   * @param GLenum target
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2fv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _v = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord2fv(_target, &_v);

    args[1] = Number::New(_v);
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
  }


  /**
   * glMultiTexCoord2iv
   *
   * @param GLenum target
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2iv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _v = (GLint)args[1]->Int32Value();
    glMultiTexCoord2iv(_target, &_v);

    args[1] = Number::New(_v);
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
  }


  /**
   * glMultiTexCoord2sv
   *
   * @param GLenum target
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2sv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLshort _v = (GLshort)args[1]->Int32Value();
    glMultiTexCoord2sv(_target, &_v);

    args[1] = Number::New(_v);
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
  }


  /**
   * glMultiTexCoord3dv
   *
   * @param GLenum target
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3dv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _v = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord3dv(_target, &_v);

    args[1] = Number::New(_v);
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
  }


  /**
   * glMultiTexCoord3fv
   *
   * @param GLenum target
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3fv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _v = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord3fv(_target, &_v);

    args[1] = Number::New(_v);
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
  }


  /**
   * glMultiTexCoord3iv
   *
   * @param GLenum target
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3iv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _v = (GLint)args[1]->Int32Value();
    glMultiTexCoord3iv(_target, &_v);

    args[1] = Number::New(_v);
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
  }


  /**
   * glMultiTexCoord3sv
   *
   * @param GLenum target
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3sv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLshort _v = (GLshort)args[1]->Int32Value();
    glMultiTexCoord3sv(_target, &_v);

    args[1] = Number::New(_v);
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
  }


  /**
   * glMultiTexCoord4dv
   *
   * @param GLenum target
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4dv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _v = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord4dv(_target, &_v);

    args[1] = Number::New(_v);
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
  }


  /**
   * glMultiTexCoord4fv
   *
   * @param GLenum target
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4fv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _v = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord4fv(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glMultiTexCoord4i
   *
   * @param GLenum target
   * @param GLint s
   * @param GLint t
   * @param GLint r
   * @param GLint q
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4i(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _s = (GLint)args[1]->Int32Value();
    GLint _t = (GLint)args[2]->Int32Value();
    GLint _r = (GLint)args[3]->Int32Value();
    GLint _q = (GLint)args[4]->Int32Value();
    glMultiTexCoord4i(_target, _s, _t, _r, _q);
  }


  /**
   * glMultiTexCoord4iv
   *
   * @param GLenum target
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4iv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _v = (GLint)args[1]->Int32Value();
    glMultiTexCoord4iv(_target, &_v);

    args[1] = Number::New(_v);
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
  }


  /**
   * glMultiTexCoord4sv
   *
   * @param GLenum target
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4sv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLshort _v = (GLshort)args[1]->Int32Value();
    glMultiTexCoord4sv(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glLoadTransposeMatrixd
   *
   * @param GLdouble m[16]
   * @return void
   */
  Handle<Value> gl_glLoadTransposeMatrixd(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glLoadTransposeMatrixd is not implemented!")));
  }


  /**
   * glLoadTransposeMatrixf
   *
   * @param GLfloat m[16]
   * @return void
   */
  Handle<Value> gl_glLoadTransposeMatrixf(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glLoadTransposeMatrixf is not implemented!")));
  }


  /**
   * glMultTransposeMatrixd
   *
   * @param GLdouble m[16]
   * @return void
   */
  Handle<Value> gl_glMultTransposeMatrixd(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultTransposeMatrixd is not implemented!")));
  }


  /**
   * glMultTransposeMatrixf
   *
   * @param GLfloat m[16]
   * @return void
   */
  Handle<Value> gl_glMultTransposeMatrixf(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultTransposeMatrixf is not implemented!")));
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
  }


  /**
   * glActiveTextureARB
   *
   * @param GLenum texture
   * @return void
   */
  Handle<Value> gl_glActiveTextureARB(const Arguments& args) {
    HandleScope scope;
    GLenum _texture = (GLenum)args[0]->Int32Value();
    glActiveTextureARB(_texture);
  }


  /**
   * glClientActiveTextureARB
   *
   * @param GLenum texture
   * @return void
   */
  Handle<Value> gl_glClientActiveTextureARB(const Arguments& args) {
    HandleScope scope;
    GLenum _texture = (GLenum)args[0]->Int32Value();
    glClientActiveTextureARB(_texture);
  }


  /**
   * glMultiTexCoord1dARB
   *
   * @param GLenum target
   * @param GLdouble s
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1dARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _s = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord1dARB(_target, _s);
  }


  /**
   * glMultiTexCoord1dvARB
   *
   * @param GLenum target
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1dvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _v = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord1dvARB(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glMultiTexCoord1fARB
   *
   * @param GLenum target
   * @param GLfloat s
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1fARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _s = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord1fARB(_target, _s);
  }


  /**
   * glMultiTexCoord1fvARB
   *
   * @param GLenum target
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1fvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _v = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord1fvARB(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glMultiTexCoord1iARB
   *
   * @param GLenum target
   * @param GLint s
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1iARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _s = (GLint)args[1]->Int32Value();
    glMultiTexCoord1iARB(_target, _s);
  }


  /**
   * glMultiTexCoord1ivARB
   *
   * @param GLenum target
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1ivARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _v = (GLint)args[1]->Int32Value();
    glMultiTexCoord1ivARB(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glMultiTexCoord1sARB
   *
   * @param GLenum target
   * @param GLshort s
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1sARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLshort _s = (GLshort)args[1]->Int32Value();
    glMultiTexCoord1sARB(_target, _s);
  }


  /**
   * glMultiTexCoord1svARB
   *
   * @param GLenum target
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord1svARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLshort _v = (GLshort)args[1]->Int32Value();
    glMultiTexCoord1svARB(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glMultiTexCoord2dARB
   *
   * @param GLenum target
   * @param GLdouble s
   * @param GLdouble t
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2dARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _s = (GLdouble)args[1]->NumberValue();
    GLdouble _t = (GLdouble)args[2]->NumberValue();
    glMultiTexCoord2dARB(_target, _s, _t);
  }


  /**
   * glMultiTexCoord2dvARB
   *
   * @param GLenum target
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2dvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _v = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord2dvARB(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glMultiTexCoord2fARB
   *
   * @param GLenum target
   * @param GLfloat s
   * @param GLfloat t
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2fARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _s = (GLfloat)args[1]->NumberValue();
    GLfloat _t = (GLfloat)args[2]->NumberValue();
    glMultiTexCoord2fARB(_target, _s, _t);
  }


  /**
   * glMultiTexCoord2fvARB
   *
   * @param GLenum target
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2fvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _v = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord2fvARB(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glMultiTexCoord2iARB
   *
   * @param GLenum target
   * @param GLint s
   * @param GLint t
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2iARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _s = (GLint)args[1]->Int32Value();
    GLint _t = (GLint)args[2]->Int32Value();
    glMultiTexCoord2iARB(_target, _s, _t);
  }


  /**
   * glMultiTexCoord2ivARB
   *
   * @param GLenum target
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2ivARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _v = (GLint)args[1]->Int32Value();
    glMultiTexCoord2ivARB(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glMultiTexCoord2sARB
   *
   * @param GLenum target
   * @param GLshort s
   * @param GLshort t
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2sARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLshort _s = (GLshort)args[1]->Int32Value();
    GLshort _t = (GLshort)args[2]->Int32Value();
    glMultiTexCoord2sARB(_target, _s, _t);
  }


  /**
   * glMultiTexCoord2svARB
   *
   * @param GLenum target
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord2svARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLshort _v = (GLshort)args[1]->Int32Value();
    glMultiTexCoord2svARB(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glMultiTexCoord3dARB
   *
   * @param GLenum target
   * @param GLdouble s
   * @param GLdouble t
   * @param GLdouble r
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3dARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _s = (GLdouble)args[1]->NumberValue();
    GLdouble _t = (GLdouble)args[2]->NumberValue();
    GLdouble _r = (GLdouble)args[3]->NumberValue();
    glMultiTexCoord3dARB(_target, _s, _t, _r);
  }


  /**
   * glMultiTexCoord3dvARB
   *
   * @param GLenum target
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3dvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _v = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord3dvARB(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glMultiTexCoord3fARB
   *
   * @param GLenum target
   * @param GLfloat s
   * @param GLfloat t
   * @param GLfloat r
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3fARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _s = (GLfloat)args[1]->NumberValue();
    GLfloat _t = (GLfloat)args[2]->NumberValue();
    GLfloat _r = (GLfloat)args[3]->NumberValue();
    glMultiTexCoord3fARB(_target, _s, _t, _r);
  }


  /**
   * glMultiTexCoord3fvARB
   *
   * @param GLenum target
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3fvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _v = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord3fvARB(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glMultiTexCoord3iARB
   *
   * @param GLenum target
   * @param GLint s
   * @param GLint t
   * @param GLint r
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3iARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _s = (GLint)args[1]->Int32Value();
    GLint _t = (GLint)args[2]->Int32Value();
    GLint _r = (GLint)args[3]->Int32Value();
    glMultiTexCoord3iARB(_target, _s, _t, _r);
  }


  /**
   * glMultiTexCoord3ivARB
   *
   * @param GLenum target
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3ivARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _v = (GLint)args[1]->Int32Value();
    glMultiTexCoord3ivARB(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glMultiTexCoord3sARB
   *
   * @param GLenum target
   * @param GLshort s
   * @param GLshort t
   * @param GLshort r
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3sARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLshort _s = (GLshort)args[1]->Int32Value();
    GLshort _t = (GLshort)args[2]->Int32Value();
    GLshort _r = (GLshort)args[3]->Int32Value();
    glMultiTexCoord3sARB(_target, _s, _t, _r);
  }


  /**
   * glMultiTexCoord3svARB
   *
   * @param GLenum target
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord3svARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLshort _v = (GLshort)args[1]->Int32Value();
    glMultiTexCoord3svARB(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glMultiTexCoord4dARB
   *
   * @param GLenum target
   * @param GLdouble s
   * @param GLdouble t
   * @param GLdouble r
   * @param GLdouble q
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4dARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _s = (GLdouble)args[1]->NumberValue();
    GLdouble _t = (GLdouble)args[2]->NumberValue();
    GLdouble _r = (GLdouble)args[3]->NumberValue();
    GLdouble _q = (GLdouble)args[4]->NumberValue();
    glMultiTexCoord4dARB(_target, _s, _t, _r, _q);
  }


  /**
   * glMultiTexCoord4dvARB
   *
   * @param GLenum target
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4dvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLdouble _v = (GLdouble)args[1]->NumberValue();
    glMultiTexCoord4dvARB(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glMultiTexCoord4fARB
   *
   * @param GLenum target
   * @param GLfloat s
   * @param GLfloat t
   * @param GLfloat r
   * @param GLfloat q
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4fARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _s = (GLfloat)args[1]->NumberValue();
    GLfloat _t = (GLfloat)args[2]->NumberValue();
    GLfloat _r = (GLfloat)args[3]->NumberValue();
    GLfloat _q = (GLfloat)args[4]->NumberValue();
    glMultiTexCoord4fARB(_target, _s, _t, _r, _q);
  }


  /**
   * glMultiTexCoord4fvARB
   *
   * @param GLenum target
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4fvARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLfloat _v = (GLfloat)args[1]->NumberValue();
    glMultiTexCoord4fvARB(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glMultiTexCoord4iARB
   *
   * @param GLenum target
   * @param GLint s
   * @param GLint t
   * @param GLint r
   * @param GLint q
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4iARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _s = (GLint)args[1]->Int32Value();
    GLint _t = (GLint)args[2]->Int32Value();
    GLint _r = (GLint)args[3]->Int32Value();
    GLint _q = (GLint)args[4]->Int32Value();
    glMultiTexCoord4iARB(_target, _s, _t, _r, _q);
  }


  /**
   * glMultiTexCoord4ivARB
   *
   * @param GLenum target
   * @param GLint *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4ivARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _v = (GLint)args[1]->Int32Value();
    glMultiTexCoord4ivARB(_target, &_v);

    args[1] = Number::New(_v);
  }


  /**
   * glMultiTexCoord4sARB
   *
   * @param GLenum target
   * @param GLshort s
   * @param GLshort t
   * @param GLshort r
   * @param GLshort q
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4sARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLshort _s = (GLshort)args[1]->Int32Value();
    GLshort _t = (GLshort)args[2]->Int32Value();
    GLshort _r = (GLshort)args[3]->Int32Value();
    GLshort _q = (GLshort)args[4]->Int32Value();
    glMultiTexCoord4sARB(_target, _s, _t, _r, _q);
  }


  /**
   * glMultiTexCoord4svARB
   *
   * @param GLenum target
   * @param GLshort *v
   * @return void
   */
  Handle<Value> gl_glMultiTexCoord4svARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLshort _v = (GLshort)args[1]->Int32Value();
    glMultiTexCoord4svARB(_target, &_v);

    args[1] = Number::New(_v);
  }



  // Constructor
  gl::gl() { }

  void gl::Initialize(v8::Handle<v8::Object> target) {
    HandleScope scope;

    // Constants
    #ifdef GL_VERSION_1_1
    NODE_DEFINE_CONSTANT(target, GL_VERSION_1_1);
    #endif

    #ifdef GL_VERSION_1_2
    NODE_DEFINE_CONSTANT(target, GL_VERSION_1_2);
    #endif

    #ifdef GL_VERSION_1_3
    NODE_DEFINE_CONSTANT(target, GL_VERSION_1_3);
    #endif

    #ifdef GL_ARB_imaging
    NODE_DEFINE_CONSTANT(target, GL_ARB_imaging);
    #endif

    #ifdef GL_FALSE
    NODE_DEFINE_CONSTANT(target, GL_FALSE);
    #endif

    #ifdef GL_TRUE
    NODE_DEFINE_CONSTANT(target, GL_TRUE);
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

    #ifdef GL_MATRIX_MODE
    NODE_DEFINE_CONSTANT(target, GL_MATRIX_MODE);
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

    #ifdef GL_POINT_SMOOTH
    NODE_DEFINE_CONSTANT(target, GL_POINT_SMOOTH);
    #endif

    #ifdef GL_POINT_SIZE
    NODE_DEFINE_CONSTANT(target, GL_POINT_SIZE);
    #endif

    #ifdef GL_POINT_SIZE_GRANULARITY
    NODE_DEFINE_CONSTANT(target, GL_POINT_SIZE_GRANULARITY);
    #endif

    #ifdef GL_POINT_SIZE_RANGE
    NODE_DEFINE_CONSTANT(target, GL_POINT_SIZE_RANGE);
    #endif

    #ifdef GL_LINE_SMOOTH
    NODE_DEFINE_CONSTANT(target, GL_LINE_SMOOTH);
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

    #ifdef GL_LINE_WIDTH
    NODE_DEFINE_CONSTANT(target, GL_LINE_WIDTH);
    #endif

    #ifdef GL_LINE_WIDTH_GRANULARITY
    NODE_DEFINE_CONSTANT(target, GL_LINE_WIDTH_GRANULARITY);
    #endif

    #ifdef GL_LINE_WIDTH_RANGE
    NODE_DEFINE_CONSTANT(target, GL_LINE_WIDTH_RANGE);
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

    #ifdef GL_CW
    NODE_DEFINE_CONSTANT(target, GL_CW);
    #endif

    #ifdef GL_CCW
    NODE_DEFINE_CONSTANT(target, GL_CCW);
    #endif

    #ifdef GL_FRONT
    NODE_DEFINE_CONSTANT(target, GL_FRONT);
    #endif

    #ifdef GL_BACK
    NODE_DEFINE_CONSTANT(target, GL_BACK);
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

    #ifdef GL_COMPILE
    NODE_DEFINE_CONSTANT(target, GL_COMPILE);
    #endif

    #ifdef GL_COMPILE_AND_EXECUTE
    NODE_DEFINE_CONSTANT(target, GL_COMPILE_AND_EXECUTE);
    #endif

    #ifdef GL_LIST_BASE
    NODE_DEFINE_CONSTANT(target, GL_LIST_BASE);
    #endif

    #ifdef GL_LIST_INDEX
    NODE_DEFINE_CONSTANT(target, GL_LIST_INDEX);
    #endif

    #ifdef GL_LIST_MODE
    NODE_DEFINE_CONSTANT(target, GL_LIST_MODE);
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

    #ifdef GL_DEPTH_TEST
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_TEST);
    #endif

    #ifdef GL_DEPTH_BITS
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_BITS);
    #endif

    #ifdef GL_DEPTH_CLEAR_VALUE
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_CLEAR_VALUE);
    #endif

    #ifdef GL_DEPTH_FUNC
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_FUNC);
    #endif

    #ifdef GL_DEPTH_RANGE
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_RANGE);
    #endif

    #ifdef GL_DEPTH_WRITEMASK
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_WRITEMASK);
    #endif

    #ifdef GL_DEPTH_COMPONENT
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_COMPONENT);
    #endif

    #ifdef GL_LIGHTING
    NODE_DEFINE_CONSTANT(target, GL_LIGHTING);
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

    #ifdef GL_AMBIENT
    NODE_DEFINE_CONSTANT(target, GL_AMBIENT);
    #endif

    #ifdef GL_DIFFUSE
    NODE_DEFINE_CONSTANT(target, GL_DIFFUSE);
    #endif

    #ifdef GL_SPECULAR
    NODE_DEFINE_CONSTANT(target, GL_SPECULAR);
    #endif

    #ifdef GL_SHININESS
    NODE_DEFINE_CONSTANT(target, GL_SHININESS);
    #endif

    #ifdef GL_EMISSION
    NODE_DEFINE_CONSTANT(target, GL_EMISSION);
    #endif

    #ifdef GL_POSITION
    NODE_DEFINE_CONSTANT(target, GL_POSITION);
    #endif

    #ifdef GL_SPOT_DIRECTION
    NODE_DEFINE_CONSTANT(target, GL_SPOT_DIRECTION);
    #endif

    #ifdef GL_AMBIENT_AND_DIFFUSE
    NODE_DEFINE_CONSTANT(target, GL_AMBIENT_AND_DIFFUSE);
    #endif

    #ifdef GL_COLOR_INDEXES
    NODE_DEFINE_CONSTANT(target, GL_COLOR_INDEXES);
    #endif

    #ifdef GL_LIGHT_MODEL_TWO_SIDE
    NODE_DEFINE_CONSTANT(target, GL_LIGHT_MODEL_TWO_SIDE);
    #endif

    #ifdef GL_LIGHT_MODEL_LOCAL_VIEWER
    NODE_DEFINE_CONSTANT(target, GL_LIGHT_MODEL_LOCAL_VIEWER);
    #endif

    #ifdef GL_LIGHT_MODEL_AMBIENT
    NODE_DEFINE_CONSTANT(target, GL_LIGHT_MODEL_AMBIENT);
    #endif

    #ifdef GL_FRONT_AND_BACK
    NODE_DEFINE_CONSTANT(target, GL_FRONT_AND_BACK);
    #endif

    #ifdef GL_SHADE_MODEL
    NODE_DEFINE_CONSTANT(target, GL_SHADE_MODEL);
    #endif

    #ifdef GL_FLAT
    NODE_DEFINE_CONSTANT(target, GL_FLAT);
    #endif

    #ifdef GL_SMOOTH
    NODE_DEFINE_CONSTANT(target, GL_SMOOTH);
    #endif

    #ifdef GL_COLOR_MATERIAL
    NODE_DEFINE_CONSTANT(target, GL_COLOR_MATERIAL);
    #endif

    #ifdef GL_COLOR_MATERIAL_FACE
    NODE_DEFINE_CONSTANT(target, GL_COLOR_MATERIAL_FACE);
    #endif

    #ifdef GL_COLOR_MATERIAL_PARAMETER
    NODE_DEFINE_CONSTANT(target, GL_COLOR_MATERIAL_PARAMETER);
    #endif

    #ifdef GL_NORMALIZE
    NODE_DEFINE_CONSTANT(target, GL_NORMALIZE);
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

    #ifdef GL_ACCUM_CLEAR_VALUE
    NODE_DEFINE_CONSTANT(target, GL_ACCUM_CLEAR_VALUE);
    #endif

    #ifdef GL_ACCUM
    NODE_DEFINE_CONSTANT(target, GL_ACCUM);
    #endif

    #ifdef GL_ADD
    NODE_DEFINE_CONSTANT(target, GL_ADD);
    #endif

    #ifdef GL_LOAD
    NODE_DEFINE_CONSTANT(target, GL_LOAD);
    #endif

    #ifdef GL_MULT
    NODE_DEFINE_CONSTANT(target, GL_MULT);
    #endif

    #ifdef GL_RETURN
    NODE_DEFINE_CONSTANT(target, GL_RETURN);
    #endif

    #ifdef GL_ALPHA_TEST
    NODE_DEFINE_CONSTANT(target, GL_ALPHA_TEST);
    #endif

    #ifdef GL_ALPHA_TEST_REF
    NODE_DEFINE_CONSTANT(target, GL_ALPHA_TEST_REF);
    #endif

    #ifdef GL_ALPHA_TEST_FUNC
    NODE_DEFINE_CONSTANT(target, GL_ALPHA_TEST_FUNC);
    #endif

    #ifdef GL_BLEND
    NODE_DEFINE_CONSTANT(target, GL_BLEND);
    #endif

    #ifdef GL_BLEND_SRC
    NODE_DEFINE_CONSTANT(target, GL_BLEND_SRC);
    #endif

    #ifdef GL_BLEND_DST
    NODE_DEFINE_CONSTANT(target, GL_BLEND_DST);
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

    #ifdef GL_FEEDBACK
    NODE_DEFINE_CONSTANT(target, GL_FEEDBACK);
    #endif

    #ifdef GL_RENDER
    NODE_DEFINE_CONSTANT(target, GL_RENDER);
    #endif

    #ifdef GL_SELECT
    NODE_DEFINE_CONSTANT(target, GL_SELECT);
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

    #ifdef GL_POINT_TOKEN
    NODE_DEFINE_CONSTANT(target, GL_POINT_TOKEN);
    #endif

    #ifdef GL_LINE_TOKEN
    NODE_DEFINE_CONSTANT(target, GL_LINE_TOKEN);
    #endif

    #ifdef GL_LINE_RESET_TOKEN
    NODE_DEFINE_CONSTANT(target, GL_LINE_RESET_TOKEN);
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

    #ifdef GL_PASS_THROUGH_TOKEN
    NODE_DEFINE_CONSTANT(target, GL_PASS_THROUGH_TOKEN);
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

    #ifdef GL_FOG
    NODE_DEFINE_CONSTANT(target, GL_FOG);
    #endif

    #ifdef GL_FOG_MODE
    NODE_DEFINE_CONSTANT(target, GL_FOG_MODE);
    #endif

    #ifdef GL_FOG_DENSITY
    NODE_DEFINE_CONSTANT(target, GL_FOG_DENSITY);
    #endif

    #ifdef GL_FOG_COLOR
    NODE_DEFINE_CONSTANT(target, GL_FOG_COLOR);
    #endif

    #ifdef GL_FOG_INDEX
    NODE_DEFINE_CONSTANT(target, GL_FOG_INDEX);
    #endif

    #ifdef GL_FOG_START
    NODE_DEFINE_CONSTANT(target, GL_FOG_START);
    #endif

    #ifdef GL_FOG_END
    NODE_DEFINE_CONSTANT(target, GL_FOG_END);
    #endif

    #ifdef GL_LINEAR
    NODE_DEFINE_CONSTANT(target, GL_LINEAR);
    #endif

    #ifdef GL_EXP
    NODE_DEFINE_CONSTANT(target, GL_EXP);
    #endif

    #ifdef GL_EXP2
    NODE_DEFINE_CONSTANT(target, GL_EXP2);
    #endif

    #ifdef GL_LOGIC_OP
    NODE_DEFINE_CONSTANT(target, GL_LOGIC_OP);
    #endif

    #ifdef GL_INDEX_LOGIC_OP
    NODE_DEFINE_CONSTANT(target, GL_INDEX_LOGIC_OP);
    #endif

    #ifdef GL_COLOR_LOGIC_OP
    NODE_DEFINE_CONSTANT(target, GL_COLOR_LOGIC_OP);
    #endif

    #ifdef GL_LOGIC_OP_MODE
    NODE_DEFINE_CONSTANT(target, GL_LOGIC_OP_MODE);
    #endif

    #ifdef GL_CLEAR
    NODE_DEFINE_CONSTANT(target, GL_CLEAR);
    #endif

    #ifdef GL_SET
    NODE_DEFINE_CONSTANT(target, GL_SET);
    #endif

    #ifdef GL_COPY
    NODE_DEFINE_CONSTANT(target, GL_COPY);
    #endif

    #ifdef GL_COPY_INVERTED
    NODE_DEFINE_CONSTANT(target, GL_COPY_INVERTED);
    #endif

    #ifdef GL_NOOP
    NODE_DEFINE_CONSTANT(target, GL_NOOP);
    #endif

    #ifdef GL_INVERT
    NODE_DEFINE_CONSTANT(target, GL_INVERT);
    #endif

    #ifdef GL_AND
    NODE_DEFINE_CONSTANT(target, GL_AND);
    #endif

    #ifdef GL_NAND
    NODE_DEFINE_CONSTANT(target, GL_NAND);
    #endif

    #ifdef GL_OR
    NODE_DEFINE_CONSTANT(target, GL_OR);
    #endif

    #ifdef GL_NOR
    NODE_DEFINE_CONSTANT(target, GL_NOR);
    #endif

    #ifdef GL_XOR
    NODE_DEFINE_CONSTANT(target, GL_XOR);
    #endif

    #ifdef GL_EQUIV
    NODE_DEFINE_CONSTANT(target, GL_EQUIV);
    #endif

    #ifdef GL_AND_REVERSE
    NODE_DEFINE_CONSTANT(target, GL_AND_REVERSE);
    #endif

    #ifdef GL_AND_INVERTED
    NODE_DEFINE_CONSTANT(target, GL_AND_INVERTED);
    #endif

    #ifdef GL_OR_REVERSE
    NODE_DEFINE_CONSTANT(target, GL_OR_REVERSE);
    #endif

    #ifdef GL_OR_INVERTED
    NODE_DEFINE_CONSTANT(target, GL_OR_INVERTED);
    #endif

    #ifdef GL_STENCIL_BITS
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_BITS);
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

    #ifdef GL_STENCIL_INDEX
    NODE_DEFINE_CONSTANT(target, GL_STENCIL_INDEX);
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

    #ifdef GL_NONE
    NODE_DEFINE_CONSTANT(target, GL_NONE);
    #endif

    #ifdef GL_LEFT
    NODE_DEFINE_CONSTANT(target, GL_LEFT);
    #endif

    #ifdef GL_RIGHT
    NODE_DEFINE_CONSTANT(target, GL_RIGHT);
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

    #ifdef GL_COLOR_INDEX
    NODE_DEFINE_CONSTANT(target, GL_COLOR_INDEX);
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

    #ifdef GL_LUMINANCE
    NODE_DEFINE_CONSTANT(target, GL_LUMINANCE);
    #endif

    #ifdef GL_LUMINANCE_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_LUMINANCE_ALPHA);
    #endif

    #ifdef GL_ALPHA_BITS
    NODE_DEFINE_CONSTANT(target, GL_ALPHA_BITS);
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

    #ifdef GL_INDEX_BITS
    NODE_DEFINE_CONSTANT(target, GL_INDEX_BITS);
    #endif

    #ifdef GL_SUBPIXEL_BITS
    NODE_DEFINE_CONSTANT(target, GL_SUBPIXEL_BITS);
    #endif

    #ifdef GL_AUX_BUFFERS
    NODE_DEFINE_CONSTANT(target, GL_AUX_BUFFERS);
    #endif

    #ifdef GL_READ_BUFFER
    NODE_DEFINE_CONSTANT(target, GL_READ_BUFFER);
    #endif

    #ifdef GL_DRAW_BUFFER
    NODE_DEFINE_CONSTANT(target, GL_DRAW_BUFFER);
    #endif

    #ifdef GL_DOUBLEBUFFER
    NODE_DEFINE_CONSTANT(target, GL_DOUBLEBUFFER);
    #endif

    #ifdef GL_STEREO
    NODE_DEFINE_CONSTANT(target, GL_STEREO);
    #endif

    #ifdef GL_BITMAP
    NODE_DEFINE_CONSTANT(target, GL_BITMAP);
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

    #ifdef GL_DITHER
    NODE_DEFINE_CONSTANT(target, GL_DITHER);
    #endif

    #ifdef GL_RGB
    NODE_DEFINE_CONSTANT(target, GL_RGB);
    #endif

    #ifdef GL_RGBA
    NODE_DEFINE_CONSTANT(target, GL_RGBA);
    #endif

    #ifdef GL_MAX_LIST_NESTING
    NODE_DEFINE_CONSTANT(target, GL_MAX_LIST_NESTING);
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

    #ifdef GL_ATTRIB_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_ATTRIB_STACK_DEPTH);
    #endif

    #ifdef GL_CLIENT_ATTRIB_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_CLIENT_ATTRIB_STACK_DEPTH);
    #endif

    #ifdef GL_COLOR_CLEAR_VALUE
    NODE_DEFINE_CONSTANT(target, GL_COLOR_CLEAR_VALUE);
    #endif

    #ifdef GL_COLOR_WRITEMASK
    NODE_DEFINE_CONSTANT(target, GL_COLOR_WRITEMASK);
    #endif

    #ifdef GL_CURRENT_INDEX
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_INDEX);
    #endif

    #ifdef GL_CURRENT_COLOR
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_COLOR);
    #endif

    #ifdef GL_CURRENT_NORMAL
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_NORMAL);
    #endif

    #ifdef GL_CURRENT_RASTER_COLOR
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_COLOR);
    #endif

    #ifdef GL_CURRENT_RASTER_DISTANCE
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_DISTANCE);
    #endif

    #ifdef GL_CURRENT_RASTER_INDEX
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_INDEX);
    #endif

    #ifdef GL_CURRENT_RASTER_POSITION
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_POSITION);
    #endif

    #ifdef GL_CURRENT_RASTER_TEXTURE_COORDS
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_TEXTURE_COORDS);
    #endif

    #ifdef GL_CURRENT_RASTER_POSITION_VALID
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_RASTER_POSITION_VALID);
    #endif

    #ifdef GL_CURRENT_TEXTURE_COORDS
    NODE_DEFINE_CONSTANT(target, GL_CURRENT_TEXTURE_COORDS);
    #endif

    #ifdef GL_INDEX_CLEAR_VALUE
    NODE_DEFINE_CONSTANT(target, GL_INDEX_CLEAR_VALUE);
    #endif

    #ifdef GL_INDEX_MODE
    NODE_DEFINE_CONSTANT(target, GL_INDEX_MODE);
    #endif

    #ifdef GL_INDEX_WRITEMASK
    NODE_DEFINE_CONSTANT(target, GL_INDEX_WRITEMASK);
    #endif

    #ifdef GL_MODELVIEW_MATRIX
    NODE_DEFINE_CONSTANT(target, GL_MODELVIEW_MATRIX);
    #endif

    #ifdef GL_MODELVIEW_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_MODELVIEW_STACK_DEPTH);
    #endif

    #ifdef GL_NAME_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_NAME_STACK_DEPTH);
    #endif

    #ifdef GL_PROJECTION_MATRIX
    NODE_DEFINE_CONSTANT(target, GL_PROJECTION_MATRIX);
    #endif

    #ifdef GL_PROJECTION_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_PROJECTION_STACK_DEPTH);
    #endif

    #ifdef GL_RENDER_MODE
    NODE_DEFINE_CONSTANT(target, GL_RENDER_MODE);
    #endif

    #ifdef GL_RGBA_MODE
    NODE_DEFINE_CONSTANT(target, GL_RGBA_MODE);
    #endif

    #ifdef GL_TEXTURE_MATRIX
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_MATRIX);
    #endif

    #ifdef GL_TEXTURE_STACK_DEPTH
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_STACK_DEPTH);
    #endif

    #ifdef GL_VIEWPORT
    NODE_DEFINE_CONSTANT(target, GL_VIEWPORT);
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

    #ifdef GL_COEFF
    NODE_DEFINE_CONSTANT(target, GL_COEFF);
    #endif

    #ifdef GL_ORDER
    NODE_DEFINE_CONSTANT(target, GL_ORDER);
    #endif

    #ifdef GL_DOMAIN
    NODE_DEFINE_CONSTANT(target, GL_DOMAIN);
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

    #ifdef GL_DONT_CARE
    NODE_DEFINE_CONSTANT(target, GL_DONT_CARE);
    #endif

    #ifdef GL_FASTEST
    NODE_DEFINE_CONSTANT(target, GL_FASTEST);
    #endif

    #ifdef GL_NICEST
    NODE_DEFINE_CONSTANT(target, GL_NICEST);
    #endif

    #ifdef GL_SCISSOR_BOX
    NODE_DEFINE_CONSTANT(target, GL_SCISSOR_BOX);
    #endif

    #ifdef GL_SCISSOR_TEST
    NODE_DEFINE_CONSTANT(target, GL_SCISSOR_TEST);
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

    #ifdef GL_PIXEL_MAP_S_TO_S_SIZE
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_S_TO_S_SIZE);
    #endif

    #ifdef GL_PIXEL_MAP_I_TO_I_SIZE
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_I_SIZE);
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

    #ifdef GL_PIXEL_MAP_S_TO_S
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_S_TO_S);
    #endif

    #ifdef GL_PIXEL_MAP_I_TO_I
    NODE_DEFINE_CONSTANT(target, GL_PIXEL_MAP_I_TO_I);
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

    #ifdef GL_PACK_ALIGNMENT
    NODE_DEFINE_CONSTANT(target, GL_PACK_ALIGNMENT);
    #endif

    #ifdef GL_PACK_LSB_FIRST
    NODE_DEFINE_CONSTANT(target, GL_PACK_LSB_FIRST);
    #endif

    #ifdef GL_PACK_ROW_LENGTH
    NODE_DEFINE_CONSTANT(target, GL_PACK_ROW_LENGTH);
    #endif

    #ifdef GL_PACK_SKIP_PIXELS
    NODE_DEFINE_CONSTANT(target, GL_PACK_SKIP_PIXELS);
    #endif

    #ifdef GL_PACK_SKIP_ROWS
    NODE_DEFINE_CONSTANT(target, GL_PACK_SKIP_ROWS);
    #endif

    #ifdef GL_PACK_SWAP_BYTES
    NODE_DEFINE_CONSTANT(target, GL_PACK_SWAP_BYTES);
    #endif

    #ifdef GL_UNPACK_ALIGNMENT
    NODE_DEFINE_CONSTANT(target, GL_UNPACK_ALIGNMENT);
    #endif

    #ifdef GL_UNPACK_LSB_FIRST
    NODE_DEFINE_CONSTANT(target, GL_UNPACK_LSB_FIRST);
    #endif

    #ifdef GL_UNPACK_ROW_LENGTH
    NODE_DEFINE_CONSTANT(target, GL_UNPACK_ROW_LENGTH);
    #endif

    #ifdef GL_UNPACK_SKIP_PIXELS
    NODE_DEFINE_CONSTANT(target, GL_UNPACK_SKIP_PIXELS);
    #endif

    #ifdef GL_UNPACK_SKIP_ROWS
    NODE_DEFINE_CONSTANT(target, GL_UNPACK_SKIP_ROWS);
    #endif

    #ifdef GL_UNPACK_SWAP_BYTES
    NODE_DEFINE_CONSTANT(target, GL_UNPACK_SWAP_BYTES);
    #endif

    #ifdef GL_ZOOM_X
    NODE_DEFINE_CONSTANT(target, GL_ZOOM_X);
    #endif

    #ifdef GL_ZOOM_Y
    NODE_DEFINE_CONSTANT(target, GL_ZOOM_Y);
    #endif

    #ifdef GL_TEXTURE_ENV
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_ENV);
    #endif

    #ifdef GL_TEXTURE_ENV_MODE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_ENV_MODE);
    #endif

    #ifdef GL_TEXTURE_1D
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_1D);
    #endif

    #ifdef GL_TEXTURE_2D
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_2D);
    #endif

    #ifdef GL_TEXTURE_WRAP_S
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_WRAP_S);
    #endif

    #ifdef GL_TEXTURE_WRAP_T
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_WRAP_T);
    #endif

    #ifdef GL_TEXTURE_MAG_FILTER
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_MAG_FILTER);
    #endif

    #ifdef GL_TEXTURE_MIN_FILTER
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_MIN_FILTER);
    #endif

    #ifdef GL_TEXTURE_ENV_COLOR
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_ENV_COLOR);
    #endif

    #ifdef GL_TEXTURE_GEN_S
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_GEN_S);
    #endif

    #ifdef GL_TEXTURE_GEN_T
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_GEN_T);
    #endif

    #ifdef GL_TEXTURE_GEN_MODE
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_GEN_MODE);
    #endif

    #ifdef GL_TEXTURE_BORDER_COLOR
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_BORDER_COLOR);
    #endif

    #ifdef GL_TEXTURE_WIDTH
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_WIDTH);
    #endif

    #ifdef GL_TEXTURE_HEIGHT
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_HEIGHT);
    #endif

    #ifdef GL_TEXTURE_BORDER
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_BORDER);
    #endif

    #ifdef GL_TEXTURE_COMPONENTS
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_COMPONENTS);
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

    #ifdef GL_NEAREST_MIPMAP_NEAREST
    NODE_DEFINE_CONSTANT(target, GL_NEAREST_MIPMAP_NEAREST);
    #endif

    #ifdef GL_NEAREST_MIPMAP_LINEAR
    NODE_DEFINE_CONSTANT(target, GL_NEAREST_MIPMAP_LINEAR);
    #endif

    #ifdef GL_LINEAR_MIPMAP_NEAREST
    NODE_DEFINE_CONSTANT(target, GL_LINEAR_MIPMAP_NEAREST);
    #endif

    #ifdef GL_LINEAR_MIPMAP_LINEAR
    NODE_DEFINE_CONSTANT(target, GL_LINEAR_MIPMAP_LINEAR);
    #endif

    #ifdef GL_OBJECT_LINEAR
    NODE_DEFINE_CONSTANT(target, GL_OBJECT_LINEAR);
    #endif

    #ifdef GL_OBJECT_PLANE
    NODE_DEFINE_CONSTANT(target, GL_OBJECT_PLANE);
    #endif

    #ifdef GL_EYE_LINEAR
    NODE_DEFINE_CONSTANT(target, GL_EYE_LINEAR);
    #endif

    #ifdef GL_EYE_PLANE
    NODE_DEFINE_CONSTANT(target, GL_EYE_PLANE);
    #endif

    #ifdef GL_SPHERE_MAP
    NODE_DEFINE_CONSTANT(target, GL_SPHERE_MAP);
    #endif

    #ifdef GL_DECAL
    NODE_DEFINE_CONSTANT(target, GL_DECAL);
    #endif

    #ifdef GL_MODULATE
    NODE_DEFINE_CONSTANT(target, GL_MODULATE);
    #endif

    #ifdef GL_NEAREST
    NODE_DEFINE_CONSTANT(target, GL_NEAREST);
    #endif

    #ifdef GL_REPEAT
    NODE_DEFINE_CONSTANT(target, GL_REPEAT);
    #endif

    #ifdef GL_CLAMP
    NODE_DEFINE_CONSTANT(target, GL_CLAMP);
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

    #ifdef GL_TEXTURE_GEN_R
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_GEN_R);
    #endif

    #ifdef GL_TEXTURE_GEN_Q
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_GEN_Q);
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

    #ifdef GL_TEXTURE_INTERNAL_FORMAT
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_INTERNAL_FORMAT);
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

    #ifdef GL_CLIENT_PIXEL_STORE_BIT
    NODE_DEFINE_CONSTANT(target, GL_CLIENT_PIXEL_STORE_BIT);
    #endif

    #ifdef GL_CLIENT_VERTEX_ARRAY_BIT
    NODE_DEFINE_CONSTANT(target, GL_CLIENT_VERTEX_ARRAY_BIT);
    #endif

    #ifdef GL_ALL_CLIENT_ATTRIB_BITS
    NODE_DEFINE_CONSTANT(target, GL_ALL_CLIENT_ATTRIB_BITS);
    #endif

    #ifdef GL_CLIENT_ALL_ATTRIB_BITS
    NODE_DEFINE_CONSTANT(target, GL_CLIENT_ALL_ATTRIB_BITS);
    #endif

    #ifdef GL_RESCALE_NORMAL
    NODE_DEFINE_CONSTANT(target, GL_RESCALE_NORMAL);
    #endif

    #ifdef GL_CLAMP_TO_EDGE
    NODE_DEFINE_CONSTANT(target, GL_CLAMP_TO_EDGE);
    #endif

    #ifdef GL_MAX_ELEMENTS_VERTICES
    NODE_DEFINE_CONSTANT(target, GL_MAX_ELEMENTS_VERTICES);
    #endif

    #ifdef GL_MAX_ELEMENTS_INDICES
    NODE_DEFINE_CONSTANT(target, GL_MAX_ELEMENTS_INDICES);
    #endif

    #ifdef GL_BGR
    NODE_DEFINE_CONSTANT(target, GL_BGR);
    #endif

    #ifdef GL_BGRA
    NODE_DEFINE_CONSTANT(target, GL_BGRA);
    #endif

    #ifdef GL_UNSIGNED_BYTE_3_3_2
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_BYTE_3_3_2);
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

    #ifdef GL_UNSIGNED_SHORT_4_4_4_4
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_SHORT_4_4_4_4);
    #endif

    #ifdef GL_UNSIGNED_SHORT_4_4_4_4_REV
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_SHORT_4_4_4_4_REV);
    #endif

    #ifdef GL_UNSIGNED_SHORT_5_5_5_1
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_SHORT_5_5_5_1);
    #endif

    #ifdef GL_UNSIGNED_SHORT_1_5_5_5_REV
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_SHORT_1_5_5_5_REV);
    #endif

    #ifdef GL_UNSIGNED_INT_8_8_8_8
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_INT_8_8_8_8);
    #endif

    #ifdef GL_UNSIGNED_INT_8_8_8_8_REV
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_INT_8_8_8_8_REV);
    #endif

    #ifdef GL_UNSIGNED_INT_10_10_10_2
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_INT_10_10_10_2);
    #endif

    #ifdef GL_UNSIGNED_INT_2_10_10_10_REV
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_INT_2_10_10_10_REV);
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

    #ifdef GL_TEXTURE_BINDING_3D
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_BINDING_3D);
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

    #ifdef GL_BLEND_EQUATION
    NODE_DEFINE_CONSTANT(target, GL_BLEND_EQUATION);
    #endif

    #ifdef GL_MIN
    NODE_DEFINE_CONSTANT(target, GL_MIN);
    #endif

    #ifdef GL_MAX
    NODE_DEFINE_CONSTANT(target, GL_MAX);
    #endif

    #ifdef GL_FUNC_ADD
    NODE_DEFINE_CONSTANT(target, GL_FUNC_ADD);
    #endif

    #ifdef GL_FUNC_SUBTRACT
    NODE_DEFINE_CONSTANT(target, GL_FUNC_SUBTRACT);
    #endif

    #ifdef GL_FUNC_REVERSE_SUBTRACT
    NODE_DEFINE_CONSTANT(target, GL_FUNC_REVERSE_SUBTRACT);
    #endif

    #ifdef GL_BLEND_COLOR
    NODE_DEFINE_CONSTANT(target, GL_BLEND_COLOR);
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

    #ifdef GL_COMBINE
    NODE_DEFINE_CONSTANT(target, GL_COMBINE);
    #endif

    #ifdef GL_COMBINE_RGB
    NODE_DEFINE_CONSTANT(target, GL_COMBINE_RGB);
    #endif

    #ifdef GL_COMBINE_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_COMBINE_ALPHA);
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

    #ifdef GL_SOURCE0_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SOURCE0_ALPHA);
    #endif

    #ifdef GL_SOURCE1_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SOURCE1_ALPHA);
    #endif

    #ifdef GL_SOURCE2_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_SOURCE2_ALPHA);
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

    #ifdef GL_OPERAND0_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_OPERAND0_ALPHA);
    #endif

    #ifdef GL_OPERAND1_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_OPERAND1_ALPHA);
    #endif

    #ifdef GL_OPERAND2_ALPHA
    NODE_DEFINE_CONSTANT(target, GL_OPERAND2_ALPHA);
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

    #ifdef GL_SUBTRACT
    NODE_DEFINE_CONSTANT(target, GL_SUBTRACT);
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

    #ifdef GL_DOT3_RGB
    NODE_DEFINE_CONSTANT(target, GL_DOT3_RGB);
    #endif

    #ifdef GL_DOT3_RGBA
    NODE_DEFINE_CONSTANT(target, GL_DOT3_RGBA);
    #endif

    #ifdef GL_CLAMP_TO_BORDER
    NODE_DEFINE_CONSTANT(target, GL_CLAMP_TO_BORDER);
    #endif

    #ifdef GL_ARB_multitexture
    NODE_DEFINE_CONSTANT(target, GL_ARB_multitexture);
    #endif

    #ifdef GL_TEXTURE0_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE0_ARB);
    #endif

    #ifdef GL_TEXTURE1_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE1_ARB);
    #endif

    #ifdef GL_TEXTURE2_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE2_ARB);
    #endif

    #ifdef GL_TEXTURE3_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE3_ARB);
    #endif

    #ifdef GL_TEXTURE4_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE4_ARB);
    #endif

    #ifdef GL_TEXTURE5_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE5_ARB);
    #endif

    #ifdef GL_TEXTURE6_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE6_ARB);
    #endif

    #ifdef GL_TEXTURE7_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE7_ARB);
    #endif

    #ifdef GL_TEXTURE8_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE8_ARB);
    #endif

    #ifdef GL_TEXTURE9_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE9_ARB);
    #endif

    #ifdef GL_TEXTURE10_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE10_ARB);
    #endif

    #ifdef GL_TEXTURE11_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE11_ARB);
    #endif

    #ifdef GL_TEXTURE12_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE12_ARB);
    #endif

    #ifdef GL_TEXTURE13_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE13_ARB);
    #endif

    #ifdef GL_TEXTURE14_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE14_ARB);
    #endif

    #ifdef GL_TEXTURE15_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE15_ARB);
    #endif

    #ifdef GL_TEXTURE16_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE16_ARB);
    #endif

    #ifdef GL_TEXTURE17_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE17_ARB);
    #endif

    #ifdef GL_TEXTURE18_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE18_ARB);
    #endif

    #ifdef GL_TEXTURE19_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE19_ARB);
    #endif

    #ifdef GL_TEXTURE20_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE20_ARB);
    #endif

    #ifdef GL_TEXTURE21_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE21_ARB);
    #endif

    #ifdef GL_TEXTURE22_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE22_ARB);
    #endif

    #ifdef GL_TEXTURE23_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE23_ARB);
    #endif

    #ifdef GL_TEXTURE24_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE24_ARB);
    #endif

    #ifdef GL_TEXTURE25_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE25_ARB);
    #endif

    #ifdef GL_TEXTURE26_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE26_ARB);
    #endif

    #ifdef GL_TEXTURE27_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE27_ARB);
    #endif

    #ifdef GL_TEXTURE28_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE28_ARB);
    #endif

    #ifdef GL_TEXTURE29_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE29_ARB);
    #endif

    #ifdef GL_TEXTURE30_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE30_ARB);
    #endif

    #ifdef GL_TEXTURE31_ARB
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE31_ARB);
    #endif

    #ifdef GL_ACTIVE_TEXTURE_ARB
    NODE_DEFINE_CONSTANT(target, GL_ACTIVE_TEXTURE_ARB);
    #endif

    #ifdef GL_CLIENT_ACTIVE_TEXTURE_ARB
    NODE_DEFINE_CONSTANT(target, GL_CLIENT_ACTIVE_TEXTURE_ARB);
    #endif

    #ifdef GL_MAX_TEXTURE_UNITS_ARB
    NODE_DEFINE_CONSTANT(target, GL_MAX_TEXTURE_UNITS_ARB);
    #endif

    #ifdef GL_MESA_shader_debug
    NODE_DEFINE_CONSTANT(target, GL_MESA_shader_debug);
    #endif

    #ifdef GL_DEBUG_OBJECT_MESA
    NODE_DEFINE_CONSTANT(target, GL_DEBUG_OBJECT_MESA);
    #endif

    #ifdef GL_DEBUG_PRINT_MESA
    NODE_DEFINE_CONSTANT(target, GL_DEBUG_PRINT_MESA);
    #endif

    #ifdef GL_DEBUG_ASSERT_MESA
    NODE_DEFINE_CONSTANT(target, GL_DEBUG_ASSERT_MESA);
    #endif

    #ifdef GL_MESA_packed_depth_stencil
    NODE_DEFINE_CONSTANT(target, GL_MESA_packed_depth_stencil);
    #endif

    #ifdef GL_DEPTH_STENCIL_MESA
    NODE_DEFINE_CONSTANT(target, GL_DEPTH_STENCIL_MESA);
    #endif

    #ifdef GL_UNSIGNED_INT_24_8_MESA
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_INT_24_8_MESA);
    #endif

    #ifdef GL_UNSIGNED_INT_8_24_REV_MESA
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_INT_8_24_REV_MESA);
    #endif

    #ifdef GL_UNSIGNED_SHORT_15_1_MESA
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_SHORT_15_1_MESA);
    #endif

    #ifdef GL_UNSIGNED_SHORT_1_15_REV_MESA
    NODE_DEFINE_CONSTANT(target, GL_UNSIGNED_SHORT_1_15_REV_MESA);
    #endif

    #ifdef GL_MESA_program_debug
    NODE_DEFINE_CONSTANT(target, GL_MESA_program_debug);
    #endif

    #ifdef GL_FRAGMENT_PROGRAM_POSITION_MESA
    NODE_DEFINE_CONSTANT(target, GL_FRAGMENT_PROGRAM_POSITION_MESA);
    #endif

    #ifdef GL_FRAGMENT_PROGRAM_CALLBACK_MESA
    NODE_DEFINE_CONSTANT(target, GL_FRAGMENT_PROGRAM_CALLBACK_MESA);
    #endif

    #ifdef GL_FRAGMENT_PROGRAM_CALLBACK_FUNC_MESA
    NODE_DEFINE_CONSTANT(target, GL_FRAGMENT_PROGRAM_CALLBACK_FUNC_MESA);
    #endif

    #ifdef GL_FRAGMENT_PROGRAM_CALLBACK_DATA_MESA
    NODE_DEFINE_CONSTANT(target, GL_FRAGMENT_PROGRAM_CALLBACK_DATA_MESA);
    #endif

    #ifdef GL_VERTEX_PROGRAM_POSITION_MESA
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_PROGRAM_POSITION_MESA);
    #endif

    #ifdef GL_VERTEX_PROGRAM_CALLBACK_MESA
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_PROGRAM_CALLBACK_MESA);
    #endif

    #ifdef GL_VERTEX_PROGRAM_CALLBACK_FUNC_MESA
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_PROGRAM_CALLBACK_FUNC_MESA);
    #endif

    #ifdef GL_VERTEX_PROGRAM_CALLBACK_DATA_MESA
    NODE_DEFINE_CONSTANT(target, GL_VERTEX_PROGRAM_CALLBACK_DATA_MESA);
    #endif

    #ifdef GL_MESA_texture_array
    NODE_DEFINE_CONSTANT(target, GL_MESA_texture_array);
    #endif

    #ifdef GL_TEXTURE_1D_ARRAY_EXT
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_1D_ARRAY_EXT);
    #endif

    #ifdef GL_PROXY_TEXTURE_1D_ARRAY_EXT
    NODE_DEFINE_CONSTANT(target, GL_PROXY_TEXTURE_1D_ARRAY_EXT);
    #endif

    #ifdef GL_TEXTURE_2D_ARRAY_EXT
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_2D_ARRAY_EXT);
    #endif

    #ifdef GL_PROXY_TEXTURE_2D_ARRAY_EXT
    NODE_DEFINE_CONSTANT(target, GL_PROXY_TEXTURE_2D_ARRAY_EXT);
    #endif

    #ifdef GL_TEXTURE_BINDING_1D_ARRAY_EXT
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_BINDING_1D_ARRAY_EXT);
    #endif

    #ifdef GL_TEXTURE_BINDING_2D_ARRAY_EXT
    NODE_DEFINE_CONSTANT(target, GL_TEXTURE_BINDING_2D_ARRAY_EXT);
    #endif

    #ifdef GL_MAX_ARRAY_TEXTURE_LAYERS_EXT
    NODE_DEFINE_CONSTANT(target, GL_MAX_ARRAY_TEXTURE_LAYERS_EXT);
    #endif

    #ifdef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT
    NODE_DEFINE_CONSTANT(target, GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT);
    #endif

    #ifdef GL_ATI_blend_equation_separate
    NODE_DEFINE_CONSTANT(target, GL_ATI_blend_equation_separate);
    #endif

    #ifdef GL_ALPHA_BLEND_EQUATION_ATI
    NODE_DEFINE_CONSTANT(target, GL_ALPHA_BLEND_EQUATION_ATI);
    #endif

    #ifdef GL_OES_EGL_image
    NODE_DEFINE_CONSTANT(target, GL_OES_EGL_image);
    #endif


    // Expose this classes methods to v8/javascript
    Local<FunctionTemplate> _gl_glClearIndex = FunctionTemplate::New(gl_glClearIndex);
    target->Set(String::New("glClearIndex"), _gl_glClearIndex->GetFunction());

    Local<FunctionTemplate> _gl_glClearColor = FunctionTemplate::New(gl_glClearColor);
    target->Set(String::New("glClearColor"), _gl_glClearColor->GetFunction());

    Local<FunctionTemplate> _gl_glClear = FunctionTemplate::New(gl_glClear);
    target->Set(String::New("glClear"), _gl_glClear->GetFunction());

    Local<FunctionTemplate> _gl_glIndexMask = FunctionTemplate::New(gl_glIndexMask);
    target->Set(String::New("glIndexMask"), _gl_glIndexMask->GetFunction());

    Local<FunctionTemplate> _gl_glColorMask = FunctionTemplate::New(gl_glColorMask);
    target->Set(String::New("glColorMask"), _gl_glColorMask->GetFunction());

    Local<FunctionTemplate> _gl_glAlphaFunc = FunctionTemplate::New(gl_glAlphaFunc);
    target->Set(String::New("glAlphaFunc"), _gl_glAlphaFunc->GetFunction());

    Local<FunctionTemplate> _gl_glBlendFunc = FunctionTemplate::New(gl_glBlendFunc);
    target->Set(String::New("glBlendFunc"), _gl_glBlendFunc->GetFunction());

    Local<FunctionTemplate> _gl_glLogicOp = FunctionTemplate::New(gl_glLogicOp);
    target->Set(String::New("glLogicOp"), _gl_glLogicOp->GetFunction());

    Local<FunctionTemplate> _gl_glCullFace = FunctionTemplate::New(gl_glCullFace);
    target->Set(String::New("glCullFace"), _gl_glCullFace->GetFunction());

    Local<FunctionTemplate> _gl_glFrontFace = FunctionTemplate::New(gl_glFrontFace);
    target->Set(String::New("glFrontFace"), _gl_glFrontFace->GetFunction());

    Local<FunctionTemplate> _gl_glPointSize = FunctionTemplate::New(gl_glPointSize);
    target->Set(String::New("glPointSize"), _gl_glPointSize->GetFunction());

    Local<FunctionTemplate> _gl_glLineWidth = FunctionTemplate::New(gl_glLineWidth);
    target->Set(String::New("glLineWidth"), _gl_glLineWidth->GetFunction());

    Local<FunctionTemplate> _gl_glLineStipple = FunctionTemplate::New(gl_glLineStipple);
    target->Set(String::New("glLineStipple"), _gl_glLineStipple->GetFunction());

    Local<FunctionTemplate> _gl_glPolygonMode = FunctionTemplate::New(gl_glPolygonMode);
    target->Set(String::New("glPolygonMode"), _gl_glPolygonMode->GetFunction());

    Local<FunctionTemplate> _gl_glPolygonOffset = FunctionTemplate::New(gl_glPolygonOffset);
    target->Set(String::New("glPolygonOffset"), _gl_glPolygonOffset->GetFunction());

    Local<FunctionTemplate> _gl_glPolygonStipple = FunctionTemplate::New(gl_glPolygonStipple);
    target->Set(String::New("glPolygonStipple"), _gl_glPolygonStipple->GetFunction());

    Local<FunctionTemplate> _gl_glGetPolygonStipple = FunctionTemplate::New(gl_glGetPolygonStipple);
    target->Set(String::New("glGetPolygonStipple"), _gl_glGetPolygonStipple->GetFunction());

    Local<FunctionTemplate> _gl_glEdgeFlag = FunctionTemplate::New(gl_glEdgeFlag);
    target->Set(String::New("glEdgeFlag"), _gl_glEdgeFlag->GetFunction());

    Local<FunctionTemplate> _gl_glEdgeFlagv = FunctionTemplate::New(gl_glEdgeFlagv);
    target->Set(String::New("glEdgeFlagv"), _gl_glEdgeFlagv->GetFunction());

    Local<FunctionTemplate> _gl_glScissor = FunctionTemplate::New(gl_glScissor);
    target->Set(String::New("glScissor"), _gl_glScissor->GetFunction());

    Local<FunctionTemplate> _gl_glClipPlane = FunctionTemplate::New(gl_glClipPlane);
    target->Set(String::New("glClipPlane"), _gl_glClipPlane->GetFunction());

    Local<FunctionTemplate> _gl_glGetClipPlane = FunctionTemplate::New(gl_glGetClipPlane);
    target->Set(String::New("glGetClipPlane"), _gl_glGetClipPlane->GetFunction());

    Local<FunctionTemplate> _gl_glDrawBuffer = FunctionTemplate::New(gl_glDrawBuffer);
    target->Set(String::New("glDrawBuffer"), _gl_glDrawBuffer->GetFunction());

    Local<FunctionTemplate> _gl_glReadBuffer = FunctionTemplate::New(gl_glReadBuffer);
    target->Set(String::New("glReadBuffer"), _gl_glReadBuffer->GetFunction());

    Local<FunctionTemplate> _gl_glEnable = FunctionTemplate::New(gl_glEnable);
    target->Set(String::New("glEnable"), _gl_glEnable->GetFunction());

    Local<FunctionTemplate> _gl_glDisable = FunctionTemplate::New(gl_glDisable);
    target->Set(String::New("glDisable"), _gl_glDisable->GetFunction());

    Local<FunctionTemplate> _gl_glIsEnabled = FunctionTemplate::New(gl_glIsEnabled);
    target->Set(String::New("glIsEnabled"), _gl_glIsEnabled->GetFunction());

    Local<FunctionTemplate> _gl_glEnableClientState = FunctionTemplate::New(gl_glEnableClientState);
    target->Set(String::New("glEnableClientState"), _gl_glEnableClientState->GetFunction());

    Local<FunctionTemplate> _gl_glDisableClientState = FunctionTemplate::New(gl_glDisableClientState);
    target->Set(String::New("glDisableClientState"), _gl_glDisableClientState->GetFunction());

    Local<FunctionTemplate> _gl_glGetBooleanv = FunctionTemplate::New(gl_glGetBooleanv);
    target->Set(String::New("glGetBooleanv"), _gl_glGetBooleanv->GetFunction());

    Local<FunctionTemplate> _gl_glGetDoublev = FunctionTemplate::New(gl_glGetDoublev);
    target->Set(String::New("glGetDoublev"), _gl_glGetDoublev->GetFunction());

    Local<FunctionTemplate> _gl_glGetFloatv = FunctionTemplate::New(gl_glGetFloatv);
    target->Set(String::New("glGetFloatv"), _gl_glGetFloatv->GetFunction());

    Local<FunctionTemplate> _gl_glGetIntegerv = FunctionTemplate::New(gl_glGetIntegerv);
    target->Set(String::New("glGetIntegerv"), _gl_glGetIntegerv->GetFunction());

    Local<FunctionTemplate> _gl_glPushAttrib = FunctionTemplate::New(gl_glPushAttrib);
    target->Set(String::New("glPushAttrib"), _gl_glPushAttrib->GetFunction());

    Local<FunctionTemplate> _gl_glPopAttrib = FunctionTemplate::New(gl_glPopAttrib);
    target->Set(String::New("glPopAttrib"), _gl_glPopAttrib->GetFunction());

    Local<FunctionTemplate> _gl_glPushClientAttrib = FunctionTemplate::New(gl_glPushClientAttrib);
    target->Set(String::New("glPushClientAttrib"), _gl_glPushClientAttrib->GetFunction());

    Local<FunctionTemplate> _gl_glPopClientAttrib = FunctionTemplate::New(gl_glPopClientAttrib);
    target->Set(String::New("glPopClientAttrib"), _gl_glPopClientAttrib->GetFunction());

    Local<FunctionTemplate> _gl_glRenderMode = FunctionTemplate::New(gl_glRenderMode);
    target->Set(String::New("glRenderMode"), _gl_glRenderMode->GetFunction());

    Local<FunctionTemplate> _gl_glGetError = FunctionTemplate::New(gl_glGetError);
    target->Set(String::New("glGetError"), _gl_glGetError->GetFunction());

    Local<FunctionTemplate> _gl_glFinish = FunctionTemplate::New(gl_glFinish);
    target->Set(String::New("glFinish"), _gl_glFinish->GetFunction());

    Local<FunctionTemplate> _gl_glFlush = FunctionTemplate::New(gl_glFlush);
    target->Set(String::New("glFlush"), _gl_glFlush->GetFunction());

    Local<FunctionTemplate> _gl_glHint = FunctionTemplate::New(gl_glHint);
    target->Set(String::New("glHint"), _gl_glHint->GetFunction());

    Local<FunctionTemplate> _gl_glClearDepth = FunctionTemplate::New(gl_glClearDepth);
    target->Set(String::New("glClearDepth"), _gl_glClearDepth->GetFunction());

    Local<FunctionTemplate> _gl_glDepthFunc = FunctionTemplate::New(gl_glDepthFunc);
    target->Set(String::New("glDepthFunc"), _gl_glDepthFunc->GetFunction());

    Local<FunctionTemplate> _gl_glDepthMask = FunctionTemplate::New(gl_glDepthMask);
    target->Set(String::New("glDepthMask"), _gl_glDepthMask->GetFunction());

    Local<FunctionTemplate> _gl_glDepthRange = FunctionTemplate::New(gl_glDepthRange);
    target->Set(String::New("glDepthRange"), _gl_glDepthRange->GetFunction());

    Local<FunctionTemplate> _gl_glClearAccum = FunctionTemplate::New(gl_glClearAccum);
    target->Set(String::New("glClearAccum"), _gl_glClearAccum->GetFunction());

    Local<FunctionTemplate> _gl_glAccum = FunctionTemplate::New(gl_glAccum);
    target->Set(String::New("glAccum"), _gl_glAccum->GetFunction());

    Local<FunctionTemplate> _gl_glMatrixMode = FunctionTemplate::New(gl_glMatrixMode);
    target->Set(String::New("glMatrixMode"), _gl_glMatrixMode->GetFunction());

    Local<FunctionTemplate> _gl_glOrtho = FunctionTemplate::New(gl_glOrtho);
    target->Set(String::New("glOrtho"), _gl_glOrtho->GetFunction());

    Local<FunctionTemplate> _gl_glFrustum = FunctionTemplate::New(gl_glFrustum);
    target->Set(String::New("glFrustum"), _gl_glFrustum->GetFunction());

    Local<FunctionTemplate> _gl_glViewport = FunctionTemplate::New(gl_glViewport);
    target->Set(String::New("glViewport"), _gl_glViewport->GetFunction());

    Local<FunctionTemplate> _gl_glPushMatrix = FunctionTemplate::New(gl_glPushMatrix);
    target->Set(String::New("glPushMatrix"), _gl_glPushMatrix->GetFunction());

    Local<FunctionTemplate> _gl_glPopMatrix = FunctionTemplate::New(gl_glPopMatrix);
    target->Set(String::New("glPopMatrix"), _gl_glPopMatrix->GetFunction());

    Local<FunctionTemplate> _gl_glLoadIdentity = FunctionTemplate::New(gl_glLoadIdentity);
    target->Set(String::New("glLoadIdentity"), _gl_glLoadIdentity->GetFunction());

    Local<FunctionTemplate> _gl_glLoadMatrixd = FunctionTemplate::New(gl_glLoadMatrixd);
    target->Set(String::New("glLoadMatrixd"), _gl_glLoadMatrixd->GetFunction());

    Local<FunctionTemplate> _gl_glLoadMatrixf = FunctionTemplate::New(gl_glLoadMatrixf);
    target->Set(String::New("glLoadMatrixf"), _gl_glLoadMatrixf->GetFunction());

    Local<FunctionTemplate> _gl_glMultMatrixd = FunctionTemplate::New(gl_glMultMatrixd);
    target->Set(String::New("glMultMatrixd"), _gl_glMultMatrixd->GetFunction());

    Local<FunctionTemplate> _gl_glMultMatrixf = FunctionTemplate::New(gl_glMultMatrixf);
    target->Set(String::New("glMultMatrixf"), _gl_glMultMatrixf->GetFunction());

    Local<FunctionTemplate> _gl_glRotated = FunctionTemplate::New(gl_glRotated);
    target->Set(String::New("glRotated"), _gl_glRotated->GetFunction());

    Local<FunctionTemplate> _gl_glRotatef = FunctionTemplate::New(gl_glRotatef);
    target->Set(String::New("glRotatef"), _gl_glRotatef->GetFunction());

    Local<FunctionTemplate> _gl_glScaled = FunctionTemplate::New(gl_glScaled);
    target->Set(String::New("glScaled"), _gl_glScaled->GetFunction());

    Local<FunctionTemplate> _gl_glScalef = FunctionTemplate::New(gl_glScalef);
    target->Set(String::New("glScalef"), _gl_glScalef->GetFunction());

    Local<FunctionTemplate> _gl_glTranslated = FunctionTemplate::New(gl_glTranslated);
    target->Set(String::New("glTranslated"), _gl_glTranslated->GetFunction());

    Local<FunctionTemplate> _gl_glTranslatef = FunctionTemplate::New(gl_glTranslatef);
    target->Set(String::New("glTranslatef"), _gl_glTranslatef->GetFunction());

    Local<FunctionTemplate> _gl_glIsList = FunctionTemplate::New(gl_glIsList);
    target->Set(String::New("glIsList"), _gl_glIsList->GetFunction());

    Local<FunctionTemplate> _gl_glDeleteLists = FunctionTemplate::New(gl_glDeleteLists);
    target->Set(String::New("glDeleteLists"), _gl_glDeleteLists->GetFunction());

    Local<FunctionTemplate> _gl_glGenLists = FunctionTemplate::New(gl_glGenLists);
    target->Set(String::New("glGenLists"), _gl_glGenLists->GetFunction());

    Local<FunctionTemplate> _gl_glNewList = FunctionTemplate::New(gl_glNewList);
    target->Set(String::New("glNewList"), _gl_glNewList->GetFunction());

    Local<FunctionTemplate> _gl_glEndList = FunctionTemplate::New(gl_glEndList);
    target->Set(String::New("glEndList"), _gl_glEndList->GetFunction());

    Local<FunctionTemplate> _gl_glCallList = FunctionTemplate::New(gl_glCallList);
    target->Set(String::New("glCallList"), _gl_glCallList->GetFunction());

    Local<FunctionTemplate> _gl_glCallLists = FunctionTemplate::New(gl_glCallLists);
    target->Set(String::New("glCallLists"), _gl_glCallLists->GetFunction());

    Local<FunctionTemplate> _gl_glListBase = FunctionTemplate::New(gl_glListBase);
    target->Set(String::New("glListBase"), _gl_glListBase->GetFunction());

    Local<FunctionTemplate> _gl_glBegin = FunctionTemplate::New(gl_glBegin);
    target->Set(String::New("glBegin"), _gl_glBegin->GetFunction());

    Local<FunctionTemplate> _gl_glEnd = FunctionTemplate::New(gl_glEnd);
    target->Set(String::New("glEnd"), _gl_glEnd->GetFunction());

    Local<FunctionTemplate> _gl_glVertex2d = FunctionTemplate::New(gl_glVertex2d);
    target->Set(String::New("glVertex2d"), _gl_glVertex2d->GetFunction());

    Local<FunctionTemplate> _gl_glVertex2f = FunctionTemplate::New(gl_glVertex2f);
    target->Set(String::New("glVertex2f"), _gl_glVertex2f->GetFunction());

    Local<FunctionTemplate> _gl_glVertex2i = FunctionTemplate::New(gl_glVertex2i);
    target->Set(String::New("glVertex2i"), _gl_glVertex2i->GetFunction());

    Local<FunctionTemplate> _gl_glVertex2s = FunctionTemplate::New(gl_glVertex2s);
    target->Set(String::New("glVertex2s"), _gl_glVertex2s->GetFunction());

    Local<FunctionTemplate> _gl_glVertex3d = FunctionTemplate::New(gl_glVertex3d);
    target->Set(String::New("glVertex3d"), _gl_glVertex3d->GetFunction());

    Local<FunctionTemplate> _gl_glVertex3f = FunctionTemplate::New(gl_glVertex3f);
    target->Set(String::New("glVertex3f"), _gl_glVertex3f->GetFunction());

    Local<FunctionTemplate> _gl_glVertex3i = FunctionTemplate::New(gl_glVertex3i);
    target->Set(String::New("glVertex3i"), _gl_glVertex3i->GetFunction());

    Local<FunctionTemplate> _gl_glVertex3s = FunctionTemplate::New(gl_glVertex3s);
    target->Set(String::New("glVertex3s"), _gl_glVertex3s->GetFunction());

    Local<FunctionTemplate> _gl_glVertex4d = FunctionTemplate::New(gl_glVertex4d);
    target->Set(String::New("glVertex4d"), _gl_glVertex4d->GetFunction());

    Local<FunctionTemplate> _gl_glVertex4f = FunctionTemplate::New(gl_glVertex4f);
    target->Set(String::New("glVertex4f"), _gl_glVertex4f->GetFunction());

    Local<FunctionTemplate> _gl_glVertex4i = FunctionTemplate::New(gl_glVertex4i);
    target->Set(String::New("glVertex4i"), _gl_glVertex4i->GetFunction());

    Local<FunctionTemplate> _gl_glVertex4s = FunctionTemplate::New(gl_glVertex4s);
    target->Set(String::New("glVertex4s"), _gl_glVertex4s->GetFunction());

    Local<FunctionTemplate> _gl_glVertex2dv = FunctionTemplate::New(gl_glVertex2dv);
    target->Set(String::New("glVertex2dv"), _gl_glVertex2dv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex2fv = FunctionTemplate::New(gl_glVertex2fv);
    target->Set(String::New("glVertex2fv"), _gl_glVertex2fv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex2iv = FunctionTemplate::New(gl_glVertex2iv);
    target->Set(String::New("glVertex2iv"), _gl_glVertex2iv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex2sv = FunctionTemplate::New(gl_glVertex2sv);
    target->Set(String::New("glVertex2sv"), _gl_glVertex2sv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex3dv = FunctionTemplate::New(gl_glVertex3dv);
    target->Set(String::New("glVertex3dv"), _gl_glVertex3dv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex3fv = FunctionTemplate::New(gl_glVertex3fv);
    target->Set(String::New("glVertex3fv"), _gl_glVertex3fv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex3iv = FunctionTemplate::New(gl_glVertex3iv);
    target->Set(String::New("glVertex3iv"), _gl_glVertex3iv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex3sv = FunctionTemplate::New(gl_glVertex3sv);
    target->Set(String::New("glVertex3sv"), _gl_glVertex3sv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex4dv = FunctionTemplate::New(gl_glVertex4dv);
    target->Set(String::New("glVertex4dv"), _gl_glVertex4dv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex4fv = FunctionTemplate::New(gl_glVertex4fv);
    target->Set(String::New("glVertex4fv"), _gl_glVertex4fv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex4iv = FunctionTemplate::New(gl_glVertex4iv);
    target->Set(String::New("glVertex4iv"), _gl_glVertex4iv->GetFunction());

    Local<FunctionTemplate> _gl_glVertex4sv = FunctionTemplate::New(gl_glVertex4sv);
    target->Set(String::New("glVertex4sv"), _gl_glVertex4sv->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3b = FunctionTemplate::New(gl_glNormal3b);
    target->Set(String::New("glNormal3b"), _gl_glNormal3b->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3d = FunctionTemplate::New(gl_glNormal3d);
    target->Set(String::New("glNormal3d"), _gl_glNormal3d->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3f = FunctionTemplate::New(gl_glNormal3f);
    target->Set(String::New("glNormal3f"), _gl_glNormal3f->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3i = FunctionTemplate::New(gl_glNormal3i);
    target->Set(String::New("glNormal3i"), _gl_glNormal3i->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3s = FunctionTemplate::New(gl_glNormal3s);
    target->Set(String::New("glNormal3s"), _gl_glNormal3s->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3bv = FunctionTemplate::New(gl_glNormal3bv);
    target->Set(String::New("glNormal3bv"), _gl_glNormal3bv->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3dv = FunctionTemplate::New(gl_glNormal3dv);
    target->Set(String::New("glNormal3dv"), _gl_glNormal3dv->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3fv = FunctionTemplate::New(gl_glNormal3fv);
    target->Set(String::New("glNormal3fv"), _gl_glNormal3fv->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3iv = FunctionTemplate::New(gl_glNormal3iv);
    target->Set(String::New("glNormal3iv"), _gl_glNormal3iv->GetFunction());

    Local<FunctionTemplate> _gl_glNormal3sv = FunctionTemplate::New(gl_glNormal3sv);
    target->Set(String::New("glNormal3sv"), _gl_glNormal3sv->GetFunction());

    Local<FunctionTemplate> _gl_glIndexd = FunctionTemplate::New(gl_glIndexd);
    target->Set(String::New("glIndexd"), _gl_glIndexd->GetFunction());

    Local<FunctionTemplate> _gl_glIndexf = FunctionTemplate::New(gl_glIndexf);
    target->Set(String::New("glIndexf"), _gl_glIndexf->GetFunction());

    Local<FunctionTemplate> _gl_glIndexi = FunctionTemplate::New(gl_glIndexi);
    target->Set(String::New("glIndexi"), _gl_glIndexi->GetFunction());

    Local<FunctionTemplate> _gl_glIndexs = FunctionTemplate::New(gl_glIndexs);
    target->Set(String::New("glIndexs"), _gl_glIndexs->GetFunction());

    Local<FunctionTemplate> _gl_glIndexub = FunctionTemplate::New(gl_glIndexub);
    target->Set(String::New("glIndexub"), _gl_glIndexub->GetFunction());

    Local<FunctionTemplate> _gl_glIndexdv = FunctionTemplate::New(gl_glIndexdv);
    target->Set(String::New("glIndexdv"), _gl_glIndexdv->GetFunction());

    Local<FunctionTemplate> _gl_glIndexfv = FunctionTemplate::New(gl_glIndexfv);
    target->Set(String::New("glIndexfv"), _gl_glIndexfv->GetFunction());

    Local<FunctionTemplate> _gl_glIndexiv = FunctionTemplate::New(gl_glIndexiv);
    target->Set(String::New("glIndexiv"), _gl_glIndexiv->GetFunction());

    Local<FunctionTemplate> _gl_glIndexsv = FunctionTemplate::New(gl_glIndexsv);
    target->Set(String::New("glIndexsv"), _gl_glIndexsv->GetFunction());

    Local<FunctionTemplate> _gl_glIndexubv = FunctionTemplate::New(gl_glIndexubv);
    target->Set(String::New("glIndexubv"), _gl_glIndexubv->GetFunction());

    Local<FunctionTemplate> _gl_glColor3b = FunctionTemplate::New(gl_glColor3b);
    target->Set(String::New("glColor3b"), _gl_glColor3b->GetFunction());

    Local<FunctionTemplate> _gl_glColor3d = FunctionTemplate::New(gl_glColor3d);
    target->Set(String::New("glColor3d"), _gl_glColor3d->GetFunction());

    Local<FunctionTemplate> _gl_glColor3f = FunctionTemplate::New(gl_glColor3f);
    target->Set(String::New("glColor3f"), _gl_glColor3f->GetFunction());

    Local<FunctionTemplate> _gl_glColor3i = FunctionTemplate::New(gl_glColor3i);
    target->Set(String::New("glColor3i"), _gl_glColor3i->GetFunction());

    Local<FunctionTemplate> _gl_glColor3s = FunctionTemplate::New(gl_glColor3s);
    target->Set(String::New("glColor3s"), _gl_glColor3s->GetFunction());

    Local<FunctionTemplate> _gl_glColor3ub = FunctionTemplate::New(gl_glColor3ub);
    target->Set(String::New("glColor3ub"), _gl_glColor3ub->GetFunction());

    Local<FunctionTemplate> _gl_glColor3ui = FunctionTemplate::New(gl_glColor3ui);
    target->Set(String::New("glColor3ui"), _gl_glColor3ui->GetFunction());

    Local<FunctionTemplate> _gl_glColor3us = FunctionTemplate::New(gl_glColor3us);
    target->Set(String::New("glColor3us"), _gl_glColor3us->GetFunction());

    Local<FunctionTemplate> _gl_glColor4b = FunctionTemplate::New(gl_glColor4b);
    target->Set(String::New("glColor4b"), _gl_glColor4b->GetFunction());

    Local<FunctionTemplate> _gl_glColor4d = FunctionTemplate::New(gl_glColor4d);
    target->Set(String::New("glColor4d"), _gl_glColor4d->GetFunction());

    Local<FunctionTemplate> _gl_glColor4f = FunctionTemplate::New(gl_glColor4f);
    target->Set(String::New("glColor4f"), _gl_glColor4f->GetFunction());

    Local<FunctionTemplate> _gl_glColor4i = FunctionTemplate::New(gl_glColor4i);
    target->Set(String::New("glColor4i"), _gl_glColor4i->GetFunction());

    Local<FunctionTemplate> _gl_glColor4s = FunctionTemplate::New(gl_glColor4s);
    target->Set(String::New("glColor4s"), _gl_glColor4s->GetFunction());

    Local<FunctionTemplate> _gl_glColor4ub = FunctionTemplate::New(gl_glColor4ub);
    target->Set(String::New("glColor4ub"), _gl_glColor4ub->GetFunction());

    Local<FunctionTemplate> _gl_glColor4ui = FunctionTemplate::New(gl_glColor4ui);
    target->Set(String::New("glColor4ui"), _gl_glColor4ui->GetFunction());

    Local<FunctionTemplate> _gl_glColor4us = FunctionTemplate::New(gl_glColor4us);
    target->Set(String::New("glColor4us"), _gl_glColor4us->GetFunction());

    Local<FunctionTemplate> _gl_glColor3bv = FunctionTemplate::New(gl_glColor3bv);
    target->Set(String::New("glColor3bv"), _gl_glColor3bv->GetFunction());

    Local<FunctionTemplate> _gl_glColor3dv = FunctionTemplate::New(gl_glColor3dv);
    target->Set(String::New("glColor3dv"), _gl_glColor3dv->GetFunction());

    Local<FunctionTemplate> _gl_glColor3fv = FunctionTemplate::New(gl_glColor3fv);
    target->Set(String::New("glColor3fv"), _gl_glColor3fv->GetFunction());

    Local<FunctionTemplate> _gl_glColor3iv = FunctionTemplate::New(gl_glColor3iv);
    target->Set(String::New("glColor3iv"), _gl_glColor3iv->GetFunction());

    Local<FunctionTemplate> _gl_glColor3sv = FunctionTemplate::New(gl_glColor3sv);
    target->Set(String::New("glColor3sv"), _gl_glColor3sv->GetFunction());

    Local<FunctionTemplate> _gl_glColor3ubv = FunctionTemplate::New(gl_glColor3ubv);
    target->Set(String::New("glColor3ubv"), _gl_glColor3ubv->GetFunction());

    Local<FunctionTemplate> _gl_glColor3uiv = FunctionTemplate::New(gl_glColor3uiv);
    target->Set(String::New("glColor3uiv"), _gl_glColor3uiv->GetFunction());

    Local<FunctionTemplate> _gl_glColor3usv = FunctionTemplate::New(gl_glColor3usv);
    target->Set(String::New("glColor3usv"), _gl_glColor3usv->GetFunction());

    Local<FunctionTemplate> _gl_glColor4bv = FunctionTemplate::New(gl_glColor4bv);
    target->Set(String::New("glColor4bv"), _gl_glColor4bv->GetFunction());

    Local<FunctionTemplate> _gl_glColor4dv = FunctionTemplate::New(gl_glColor4dv);
    target->Set(String::New("glColor4dv"), _gl_glColor4dv->GetFunction());

    Local<FunctionTemplate> _gl_glColor4fv = FunctionTemplate::New(gl_glColor4fv);
    target->Set(String::New("glColor4fv"), _gl_glColor4fv->GetFunction());

    Local<FunctionTemplate> _gl_glColor4iv = FunctionTemplate::New(gl_glColor4iv);
    target->Set(String::New("glColor4iv"), _gl_glColor4iv->GetFunction());

    Local<FunctionTemplate> _gl_glColor4sv = FunctionTemplate::New(gl_glColor4sv);
    target->Set(String::New("glColor4sv"), _gl_glColor4sv->GetFunction());

    Local<FunctionTemplate> _gl_glColor4ubv = FunctionTemplate::New(gl_glColor4ubv);
    target->Set(String::New("glColor4ubv"), _gl_glColor4ubv->GetFunction());

    Local<FunctionTemplate> _gl_glColor4uiv = FunctionTemplate::New(gl_glColor4uiv);
    target->Set(String::New("glColor4uiv"), _gl_glColor4uiv->GetFunction());

    Local<FunctionTemplate> _gl_glColor4usv = FunctionTemplate::New(gl_glColor4usv);
    target->Set(String::New("glColor4usv"), _gl_glColor4usv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord1d = FunctionTemplate::New(gl_glTexCoord1d);
    target->Set(String::New("glTexCoord1d"), _gl_glTexCoord1d->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord1f = FunctionTemplate::New(gl_glTexCoord1f);
    target->Set(String::New("glTexCoord1f"), _gl_glTexCoord1f->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord1i = FunctionTemplate::New(gl_glTexCoord1i);
    target->Set(String::New("glTexCoord1i"), _gl_glTexCoord1i->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord1s = FunctionTemplate::New(gl_glTexCoord1s);
    target->Set(String::New("glTexCoord1s"), _gl_glTexCoord1s->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord2d = FunctionTemplate::New(gl_glTexCoord2d);
    target->Set(String::New("glTexCoord2d"), _gl_glTexCoord2d->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord2f = FunctionTemplate::New(gl_glTexCoord2f);
    target->Set(String::New("glTexCoord2f"), _gl_glTexCoord2f->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord2i = FunctionTemplate::New(gl_glTexCoord2i);
    target->Set(String::New("glTexCoord2i"), _gl_glTexCoord2i->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord2s = FunctionTemplate::New(gl_glTexCoord2s);
    target->Set(String::New("glTexCoord2s"), _gl_glTexCoord2s->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord3d = FunctionTemplate::New(gl_glTexCoord3d);
    target->Set(String::New("glTexCoord3d"), _gl_glTexCoord3d->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord3f = FunctionTemplate::New(gl_glTexCoord3f);
    target->Set(String::New("glTexCoord3f"), _gl_glTexCoord3f->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord3i = FunctionTemplate::New(gl_glTexCoord3i);
    target->Set(String::New("glTexCoord3i"), _gl_glTexCoord3i->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord3s = FunctionTemplate::New(gl_glTexCoord3s);
    target->Set(String::New("glTexCoord3s"), _gl_glTexCoord3s->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord4d = FunctionTemplate::New(gl_glTexCoord4d);
    target->Set(String::New("glTexCoord4d"), _gl_glTexCoord4d->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord4f = FunctionTemplate::New(gl_glTexCoord4f);
    target->Set(String::New("glTexCoord4f"), _gl_glTexCoord4f->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord4i = FunctionTemplate::New(gl_glTexCoord4i);
    target->Set(String::New("glTexCoord4i"), _gl_glTexCoord4i->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord4s = FunctionTemplate::New(gl_glTexCoord4s);
    target->Set(String::New("glTexCoord4s"), _gl_glTexCoord4s->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord1dv = FunctionTemplate::New(gl_glTexCoord1dv);
    target->Set(String::New("glTexCoord1dv"), _gl_glTexCoord1dv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord1fv = FunctionTemplate::New(gl_glTexCoord1fv);
    target->Set(String::New("glTexCoord1fv"), _gl_glTexCoord1fv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord1iv = FunctionTemplate::New(gl_glTexCoord1iv);
    target->Set(String::New("glTexCoord1iv"), _gl_glTexCoord1iv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord1sv = FunctionTemplate::New(gl_glTexCoord1sv);
    target->Set(String::New("glTexCoord1sv"), _gl_glTexCoord1sv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord2dv = FunctionTemplate::New(gl_glTexCoord2dv);
    target->Set(String::New("glTexCoord2dv"), _gl_glTexCoord2dv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord2fv = FunctionTemplate::New(gl_glTexCoord2fv);
    target->Set(String::New("glTexCoord2fv"), _gl_glTexCoord2fv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord2iv = FunctionTemplate::New(gl_glTexCoord2iv);
    target->Set(String::New("glTexCoord2iv"), _gl_glTexCoord2iv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord2sv = FunctionTemplate::New(gl_glTexCoord2sv);
    target->Set(String::New("glTexCoord2sv"), _gl_glTexCoord2sv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord3dv = FunctionTemplate::New(gl_glTexCoord3dv);
    target->Set(String::New("glTexCoord3dv"), _gl_glTexCoord3dv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord3fv = FunctionTemplate::New(gl_glTexCoord3fv);
    target->Set(String::New("glTexCoord3fv"), _gl_glTexCoord3fv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord3iv = FunctionTemplate::New(gl_glTexCoord3iv);
    target->Set(String::New("glTexCoord3iv"), _gl_glTexCoord3iv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord3sv = FunctionTemplate::New(gl_glTexCoord3sv);
    target->Set(String::New("glTexCoord3sv"), _gl_glTexCoord3sv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord4dv = FunctionTemplate::New(gl_glTexCoord4dv);
    target->Set(String::New("glTexCoord4dv"), _gl_glTexCoord4dv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord4fv = FunctionTemplate::New(gl_glTexCoord4fv);
    target->Set(String::New("glTexCoord4fv"), _gl_glTexCoord4fv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord4iv = FunctionTemplate::New(gl_glTexCoord4iv);
    target->Set(String::New("glTexCoord4iv"), _gl_glTexCoord4iv->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoord4sv = FunctionTemplate::New(gl_glTexCoord4sv);
    target->Set(String::New("glTexCoord4sv"), _gl_glTexCoord4sv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos2d = FunctionTemplate::New(gl_glRasterPos2d);
    target->Set(String::New("glRasterPos2d"), _gl_glRasterPos2d->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos2f = FunctionTemplate::New(gl_glRasterPos2f);
    target->Set(String::New("glRasterPos2f"), _gl_glRasterPos2f->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos2i = FunctionTemplate::New(gl_glRasterPos2i);
    target->Set(String::New("glRasterPos2i"), _gl_glRasterPos2i->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos2s = FunctionTemplate::New(gl_glRasterPos2s);
    target->Set(String::New("glRasterPos2s"), _gl_glRasterPos2s->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos3d = FunctionTemplate::New(gl_glRasterPos3d);
    target->Set(String::New("glRasterPos3d"), _gl_glRasterPos3d->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos3f = FunctionTemplate::New(gl_glRasterPos3f);
    target->Set(String::New("glRasterPos3f"), _gl_glRasterPos3f->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos3i = FunctionTemplate::New(gl_glRasterPos3i);
    target->Set(String::New("glRasterPos3i"), _gl_glRasterPos3i->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos3s = FunctionTemplate::New(gl_glRasterPos3s);
    target->Set(String::New("glRasterPos3s"), _gl_glRasterPos3s->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos4d = FunctionTemplate::New(gl_glRasterPos4d);
    target->Set(String::New("glRasterPos4d"), _gl_glRasterPos4d->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos4f = FunctionTemplate::New(gl_glRasterPos4f);
    target->Set(String::New("glRasterPos4f"), _gl_glRasterPos4f->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos4i = FunctionTemplate::New(gl_glRasterPos4i);
    target->Set(String::New("glRasterPos4i"), _gl_glRasterPos4i->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos4s = FunctionTemplate::New(gl_glRasterPos4s);
    target->Set(String::New("glRasterPos4s"), _gl_glRasterPos4s->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos2dv = FunctionTemplate::New(gl_glRasterPos2dv);
    target->Set(String::New("glRasterPos2dv"), _gl_glRasterPos2dv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos2fv = FunctionTemplate::New(gl_glRasterPos2fv);
    target->Set(String::New("glRasterPos2fv"), _gl_glRasterPos2fv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos2iv = FunctionTemplate::New(gl_glRasterPos2iv);
    target->Set(String::New("glRasterPos2iv"), _gl_glRasterPos2iv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos2sv = FunctionTemplate::New(gl_glRasterPos2sv);
    target->Set(String::New("glRasterPos2sv"), _gl_glRasterPos2sv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos3dv = FunctionTemplate::New(gl_glRasterPos3dv);
    target->Set(String::New("glRasterPos3dv"), _gl_glRasterPos3dv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos3fv = FunctionTemplate::New(gl_glRasterPos3fv);
    target->Set(String::New("glRasterPos3fv"), _gl_glRasterPos3fv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos3iv = FunctionTemplate::New(gl_glRasterPos3iv);
    target->Set(String::New("glRasterPos3iv"), _gl_glRasterPos3iv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos3sv = FunctionTemplate::New(gl_glRasterPos3sv);
    target->Set(String::New("glRasterPos3sv"), _gl_glRasterPos3sv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos4dv = FunctionTemplate::New(gl_glRasterPos4dv);
    target->Set(String::New("glRasterPos4dv"), _gl_glRasterPos4dv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos4fv = FunctionTemplate::New(gl_glRasterPos4fv);
    target->Set(String::New("glRasterPos4fv"), _gl_glRasterPos4fv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos4iv = FunctionTemplate::New(gl_glRasterPos4iv);
    target->Set(String::New("glRasterPos4iv"), _gl_glRasterPos4iv->GetFunction());

    Local<FunctionTemplate> _gl_glRasterPos4sv = FunctionTemplate::New(gl_glRasterPos4sv);
    target->Set(String::New("glRasterPos4sv"), _gl_glRasterPos4sv->GetFunction());

    Local<FunctionTemplate> _gl_glRectd = FunctionTemplate::New(gl_glRectd);
    target->Set(String::New("glRectd"), _gl_glRectd->GetFunction());

    Local<FunctionTemplate> _gl_glRectf = FunctionTemplate::New(gl_glRectf);
    target->Set(String::New("glRectf"), _gl_glRectf->GetFunction());

    Local<FunctionTemplate> _gl_glRecti = FunctionTemplate::New(gl_glRecti);
    target->Set(String::New("glRecti"), _gl_glRecti->GetFunction());

    Local<FunctionTemplate> _gl_glRects = FunctionTemplate::New(gl_glRects);
    target->Set(String::New("glRects"), _gl_glRects->GetFunction());

    Local<FunctionTemplate> _gl_glRectdv = FunctionTemplate::New(gl_glRectdv);
    target->Set(String::New("glRectdv"), _gl_glRectdv->GetFunction());

    Local<FunctionTemplate> _gl_glRectfv = FunctionTemplate::New(gl_glRectfv);
    target->Set(String::New("glRectfv"), _gl_glRectfv->GetFunction());

    Local<FunctionTemplate> _gl_glRectiv = FunctionTemplate::New(gl_glRectiv);
    target->Set(String::New("glRectiv"), _gl_glRectiv->GetFunction());

    Local<FunctionTemplate> _gl_glRectsv = FunctionTemplate::New(gl_glRectsv);
    target->Set(String::New("glRectsv"), _gl_glRectsv->GetFunction());

    Local<FunctionTemplate> _gl_glVertexPointer = FunctionTemplate::New(gl_glVertexPointer);
    target->Set(String::New("glVertexPointer"), _gl_glVertexPointer->GetFunction());

    Local<FunctionTemplate> _gl_glNormalPointer = FunctionTemplate::New(gl_glNormalPointer);
    target->Set(String::New("glNormalPointer"), _gl_glNormalPointer->GetFunction());

    Local<FunctionTemplate> _gl_glColorPointer = FunctionTemplate::New(gl_glColorPointer);
    target->Set(String::New("glColorPointer"), _gl_glColorPointer->GetFunction());

    Local<FunctionTemplate> _gl_glIndexPointer = FunctionTemplate::New(gl_glIndexPointer);
    target->Set(String::New("glIndexPointer"), _gl_glIndexPointer->GetFunction());

    Local<FunctionTemplate> _gl_glTexCoordPointer = FunctionTemplate::New(gl_glTexCoordPointer);
    target->Set(String::New("glTexCoordPointer"), _gl_glTexCoordPointer->GetFunction());

    Local<FunctionTemplate> _gl_glEdgeFlagPointer = FunctionTemplate::New(gl_glEdgeFlagPointer);
    target->Set(String::New("glEdgeFlagPointer"), _gl_glEdgeFlagPointer->GetFunction());

    Local<FunctionTemplate> _gl_glGetPointerv = FunctionTemplate::New(gl_glGetPointerv);
    target->Set(String::New("glGetPointerv"), _gl_glGetPointerv->GetFunction());

    Local<FunctionTemplate> _gl_glArrayElement = FunctionTemplate::New(gl_glArrayElement);
    target->Set(String::New("glArrayElement"), _gl_glArrayElement->GetFunction());

    Local<FunctionTemplate> _gl_glDrawArrays = FunctionTemplate::New(gl_glDrawArrays);
    target->Set(String::New("glDrawArrays"), _gl_glDrawArrays->GetFunction());

    Local<FunctionTemplate> _gl_glDrawElements = FunctionTemplate::New(gl_glDrawElements);
    target->Set(String::New("glDrawElements"), _gl_glDrawElements->GetFunction());

    Local<FunctionTemplate> _gl_glInterleavedArrays = FunctionTemplate::New(gl_glInterleavedArrays);
    target->Set(String::New("glInterleavedArrays"), _gl_glInterleavedArrays->GetFunction());

    Local<FunctionTemplate> _gl_glShadeModel = FunctionTemplate::New(gl_glShadeModel);
    target->Set(String::New("glShadeModel"), _gl_glShadeModel->GetFunction());

    Local<FunctionTemplate> _gl_glLightf = FunctionTemplate::New(gl_glLightf);
    target->Set(String::New("glLightf"), _gl_glLightf->GetFunction());

    Local<FunctionTemplate> _gl_glLighti = FunctionTemplate::New(gl_glLighti);
    target->Set(String::New("glLighti"), _gl_glLighti->GetFunction());

    Local<FunctionTemplate> _gl_glLightfv = FunctionTemplate::New(gl_glLightfv);
    target->Set(String::New("glLightfv"), _gl_glLightfv->GetFunction());

    Local<FunctionTemplate> _gl_glLightiv = FunctionTemplate::New(gl_glLightiv);
    target->Set(String::New("glLightiv"), _gl_glLightiv->GetFunction());

    Local<FunctionTemplate> _gl_glGetLightfv = FunctionTemplate::New(gl_glGetLightfv);
    target->Set(String::New("glGetLightfv"), _gl_glGetLightfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetLightiv = FunctionTemplate::New(gl_glGetLightiv);
    target->Set(String::New("glGetLightiv"), _gl_glGetLightiv->GetFunction());

    Local<FunctionTemplate> _gl_glLightModelf = FunctionTemplate::New(gl_glLightModelf);
    target->Set(String::New("glLightModelf"), _gl_glLightModelf->GetFunction());

    Local<FunctionTemplate> _gl_glLightModeli = FunctionTemplate::New(gl_glLightModeli);
    target->Set(String::New("glLightModeli"), _gl_glLightModeli->GetFunction());

    Local<FunctionTemplate> _gl_glLightModelfv = FunctionTemplate::New(gl_glLightModelfv);
    target->Set(String::New("glLightModelfv"), _gl_glLightModelfv->GetFunction());

    Local<FunctionTemplate> _gl_glLightModeliv = FunctionTemplate::New(gl_glLightModeliv);
    target->Set(String::New("glLightModeliv"), _gl_glLightModeliv->GetFunction());

    Local<FunctionTemplate> _gl_glMaterialf = FunctionTemplate::New(gl_glMaterialf);
    target->Set(String::New("glMaterialf"), _gl_glMaterialf->GetFunction());

    Local<FunctionTemplate> _gl_glMateriali = FunctionTemplate::New(gl_glMateriali);
    target->Set(String::New("glMateriali"), _gl_glMateriali->GetFunction());

    Local<FunctionTemplate> _gl_glMaterialfv = FunctionTemplate::New(gl_glMaterialfv);
    target->Set(String::New("glMaterialfv"), _gl_glMaterialfv->GetFunction());

    Local<FunctionTemplate> _gl_glMaterialiv = FunctionTemplate::New(gl_glMaterialiv);
    target->Set(String::New("glMaterialiv"), _gl_glMaterialiv->GetFunction());

    Local<FunctionTemplate> _gl_glGetMaterialfv = FunctionTemplate::New(gl_glGetMaterialfv);
    target->Set(String::New("glGetMaterialfv"), _gl_glGetMaterialfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetMaterialiv = FunctionTemplate::New(gl_glGetMaterialiv);
    target->Set(String::New("glGetMaterialiv"), _gl_glGetMaterialiv->GetFunction());

    Local<FunctionTemplate> _gl_glColorMaterial = FunctionTemplate::New(gl_glColorMaterial);
    target->Set(String::New("glColorMaterial"), _gl_glColorMaterial->GetFunction());

    Local<FunctionTemplate> _gl_glPixelZoom = FunctionTemplate::New(gl_glPixelZoom);
    target->Set(String::New("glPixelZoom"), _gl_glPixelZoom->GetFunction());

    Local<FunctionTemplate> _gl_glPixelStoref = FunctionTemplate::New(gl_glPixelStoref);
    target->Set(String::New("glPixelStoref"), _gl_glPixelStoref->GetFunction());

    Local<FunctionTemplate> _gl_glPixelStorei = FunctionTemplate::New(gl_glPixelStorei);
    target->Set(String::New("glPixelStorei"), _gl_glPixelStorei->GetFunction());

    Local<FunctionTemplate> _gl_glPixelTransferf = FunctionTemplate::New(gl_glPixelTransferf);
    target->Set(String::New("glPixelTransferf"), _gl_glPixelTransferf->GetFunction());

    Local<FunctionTemplate> _gl_glPixelTransferi = FunctionTemplate::New(gl_glPixelTransferi);
    target->Set(String::New("glPixelTransferi"), _gl_glPixelTransferi->GetFunction());

    Local<FunctionTemplate> _gl_glPixelMapfv = FunctionTemplate::New(gl_glPixelMapfv);
    target->Set(String::New("glPixelMapfv"), _gl_glPixelMapfv->GetFunction());

    Local<FunctionTemplate> _gl_glPixelMapuiv = FunctionTemplate::New(gl_glPixelMapuiv);
    target->Set(String::New("glPixelMapuiv"), _gl_glPixelMapuiv->GetFunction());

    Local<FunctionTemplate> _gl_glPixelMapusv = FunctionTemplate::New(gl_glPixelMapusv);
    target->Set(String::New("glPixelMapusv"), _gl_glPixelMapusv->GetFunction());

    Local<FunctionTemplate> _gl_glGetPixelMapfv = FunctionTemplate::New(gl_glGetPixelMapfv);
    target->Set(String::New("glGetPixelMapfv"), _gl_glGetPixelMapfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetPixelMapuiv = FunctionTemplate::New(gl_glGetPixelMapuiv);
    target->Set(String::New("glGetPixelMapuiv"), _gl_glGetPixelMapuiv->GetFunction());

    Local<FunctionTemplate> _gl_glGetPixelMapusv = FunctionTemplate::New(gl_glGetPixelMapusv);
    target->Set(String::New("glGetPixelMapusv"), _gl_glGetPixelMapusv->GetFunction());

    Local<FunctionTemplate> _gl_glBitmap = FunctionTemplate::New(gl_glBitmap);
    target->Set(String::New("glBitmap"), _gl_glBitmap->GetFunction());

    Local<FunctionTemplate> _gl_glReadPixels = FunctionTemplate::New(gl_glReadPixels);
    target->Set(String::New("glReadPixels"), _gl_glReadPixels->GetFunction());

    Local<FunctionTemplate> _gl_glDrawPixels = FunctionTemplate::New(gl_glDrawPixels);
    target->Set(String::New("glDrawPixels"), _gl_glDrawPixels->GetFunction());

    Local<FunctionTemplate> _gl_glCopyPixels = FunctionTemplate::New(gl_glCopyPixels);
    target->Set(String::New("glCopyPixels"), _gl_glCopyPixels->GetFunction());

    Local<FunctionTemplate> _gl_glStencilFunc = FunctionTemplate::New(gl_glStencilFunc);
    target->Set(String::New("glStencilFunc"), _gl_glStencilFunc->GetFunction());

    Local<FunctionTemplate> _gl_glStencilMask = FunctionTemplate::New(gl_glStencilMask);
    target->Set(String::New("glStencilMask"), _gl_glStencilMask->GetFunction());

    Local<FunctionTemplate> _gl_glStencilOp = FunctionTemplate::New(gl_glStencilOp);
    target->Set(String::New("glStencilOp"), _gl_glStencilOp->GetFunction());

    Local<FunctionTemplate> _gl_glClearStencil = FunctionTemplate::New(gl_glClearStencil);
    target->Set(String::New("glClearStencil"), _gl_glClearStencil->GetFunction());

    Local<FunctionTemplate> _gl_glTexGend = FunctionTemplate::New(gl_glTexGend);
    target->Set(String::New("glTexGend"), _gl_glTexGend->GetFunction());

    Local<FunctionTemplate> _gl_glTexGenf = FunctionTemplate::New(gl_glTexGenf);
    target->Set(String::New("glTexGenf"), _gl_glTexGenf->GetFunction());

    Local<FunctionTemplate> _gl_glTexGeni = FunctionTemplate::New(gl_glTexGeni);
    target->Set(String::New("glTexGeni"), _gl_glTexGeni->GetFunction());

    Local<FunctionTemplate> _gl_glTexGendv = FunctionTemplate::New(gl_glTexGendv);
    target->Set(String::New("glTexGendv"), _gl_glTexGendv->GetFunction());

    Local<FunctionTemplate> _gl_glTexGenfv = FunctionTemplate::New(gl_glTexGenfv);
    target->Set(String::New("glTexGenfv"), _gl_glTexGenfv->GetFunction());

    Local<FunctionTemplate> _gl_glTexGeniv = FunctionTemplate::New(gl_glTexGeniv);
    target->Set(String::New("glTexGeniv"), _gl_glTexGeniv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexGendv = FunctionTemplate::New(gl_glGetTexGendv);
    target->Set(String::New("glGetTexGendv"), _gl_glGetTexGendv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexGenfv = FunctionTemplate::New(gl_glGetTexGenfv);
    target->Set(String::New("glGetTexGenfv"), _gl_glGetTexGenfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexGeniv = FunctionTemplate::New(gl_glGetTexGeniv);
    target->Set(String::New("glGetTexGeniv"), _gl_glGetTexGeniv->GetFunction());

    Local<FunctionTemplate> _gl_glTexEnvf = FunctionTemplate::New(gl_glTexEnvf);
    target->Set(String::New("glTexEnvf"), _gl_glTexEnvf->GetFunction());

    Local<FunctionTemplate> _gl_glTexEnvi = FunctionTemplate::New(gl_glTexEnvi);
    target->Set(String::New("glTexEnvi"), _gl_glTexEnvi->GetFunction());

    Local<FunctionTemplate> _gl_glTexEnvfv = FunctionTemplate::New(gl_glTexEnvfv);
    target->Set(String::New("glTexEnvfv"), _gl_glTexEnvfv->GetFunction());

    Local<FunctionTemplate> _gl_glTexEnviv = FunctionTemplate::New(gl_glTexEnviv);
    target->Set(String::New("glTexEnviv"), _gl_glTexEnviv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexEnvfv = FunctionTemplate::New(gl_glGetTexEnvfv);
    target->Set(String::New("glGetTexEnvfv"), _gl_glGetTexEnvfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexEnviv = FunctionTemplate::New(gl_glGetTexEnviv);
    target->Set(String::New("glGetTexEnviv"), _gl_glGetTexEnviv->GetFunction());

    Local<FunctionTemplate> _gl_glTexParameterf = FunctionTemplate::New(gl_glTexParameterf);
    target->Set(String::New("glTexParameterf"), _gl_glTexParameterf->GetFunction());

    Local<FunctionTemplate> _gl_glTexParameteri = FunctionTemplate::New(gl_glTexParameteri);
    target->Set(String::New("glTexParameteri"), _gl_glTexParameteri->GetFunction());

    Local<FunctionTemplate> _gl_glTexParameterfv = FunctionTemplate::New(gl_glTexParameterfv);
    target->Set(String::New("glTexParameterfv"), _gl_glTexParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glTexParameteriv = FunctionTemplate::New(gl_glTexParameteriv);
    target->Set(String::New("glTexParameteriv"), _gl_glTexParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexParameterfv = FunctionTemplate::New(gl_glGetTexParameterfv);
    target->Set(String::New("glGetTexParameterfv"), _gl_glGetTexParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexParameteriv = FunctionTemplate::New(gl_glGetTexParameteriv);
    target->Set(String::New("glGetTexParameteriv"), _gl_glGetTexParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexLevelParameterfv = FunctionTemplate::New(gl_glGetTexLevelParameterfv);
    target->Set(String::New("glGetTexLevelParameterfv"), _gl_glGetTexLevelParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexLevelParameteriv = FunctionTemplate::New(gl_glGetTexLevelParameteriv);
    target->Set(String::New("glGetTexLevelParameteriv"), _gl_glGetTexLevelParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glTexImage1D = FunctionTemplate::New(gl_glTexImage1D);
    target->Set(String::New("glTexImage1D"), _gl_glTexImage1D->GetFunction());

    Local<FunctionTemplate> _gl_glTexImage2D = FunctionTemplate::New(gl_glTexImage2D);
    target->Set(String::New("glTexImage2D"), _gl_glTexImage2D->GetFunction());

    Local<FunctionTemplate> _gl_glGetTexImage = FunctionTemplate::New(gl_glGetTexImage);
    target->Set(String::New("glGetTexImage"), _gl_glGetTexImage->GetFunction());

    Local<FunctionTemplate> _gl_glGenTextures = FunctionTemplate::New(gl_glGenTextures);
    target->Set(String::New("glGenTextures"), _gl_glGenTextures->GetFunction());

    Local<FunctionTemplate> _gl_glDeleteTextures = FunctionTemplate::New(gl_glDeleteTextures);
    target->Set(String::New("glDeleteTextures"), _gl_glDeleteTextures->GetFunction());

    Local<FunctionTemplate> _gl_glBindTexture = FunctionTemplate::New(gl_glBindTexture);
    target->Set(String::New("glBindTexture"), _gl_glBindTexture->GetFunction());

    Local<FunctionTemplate> _gl_glPrioritizeTextures = FunctionTemplate::New(gl_glPrioritizeTextures);
    target->Set(String::New("glPrioritizeTextures"), _gl_glPrioritizeTextures->GetFunction());

    Local<FunctionTemplate> _gl_glAreTexturesResident = FunctionTemplate::New(gl_glAreTexturesResident);
    target->Set(String::New("glAreTexturesResident"), _gl_glAreTexturesResident->GetFunction());

    Local<FunctionTemplate> _gl_glIsTexture = FunctionTemplate::New(gl_glIsTexture);
    target->Set(String::New("glIsTexture"), _gl_glIsTexture->GetFunction());

    Local<FunctionTemplate> _gl_glTexSubImage1D = FunctionTemplate::New(gl_glTexSubImage1D);
    target->Set(String::New("glTexSubImage1D"), _gl_glTexSubImage1D->GetFunction());

    Local<FunctionTemplate> _gl_glTexSubImage2D = FunctionTemplate::New(gl_glTexSubImage2D);
    target->Set(String::New("glTexSubImage2D"), _gl_glTexSubImage2D->GetFunction());

    Local<FunctionTemplate> _gl_glCopyTexImage1D = FunctionTemplate::New(gl_glCopyTexImage1D);
    target->Set(String::New("glCopyTexImage1D"), _gl_glCopyTexImage1D->GetFunction());

    Local<FunctionTemplate> _gl_glCopyTexImage2D = FunctionTemplate::New(gl_glCopyTexImage2D);
    target->Set(String::New("glCopyTexImage2D"), _gl_glCopyTexImage2D->GetFunction());

    Local<FunctionTemplate> _gl_glCopyTexSubImage1D = FunctionTemplate::New(gl_glCopyTexSubImage1D);
    target->Set(String::New("glCopyTexSubImage1D"), _gl_glCopyTexSubImage1D->GetFunction());

    Local<FunctionTemplate> _gl_glCopyTexSubImage2D = FunctionTemplate::New(gl_glCopyTexSubImage2D);
    target->Set(String::New("glCopyTexSubImage2D"), _gl_glCopyTexSubImage2D->GetFunction());

    Local<FunctionTemplate> _gl_glMap1d = FunctionTemplate::New(gl_glMap1d);
    target->Set(String::New("glMap1d"), _gl_glMap1d->GetFunction());

    Local<FunctionTemplate> _gl_glMap1f = FunctionTemplate::New(gl_glMap1f);
    target->Set(String::New("glMap1f"), _gl_glMap1f->GetFunction());

    Local<FunctionTemplate> _gl_glMap2d = FunctionTemplate::New(gl_glMap2d);
    target->Set(String::New("glMap2d"), _gl_glMap2d->GetFunction());

    Local<FunctionTemplate> _gl_glMap2f = FunctionTemplate::New(gl_glMap2f);
    target->Set(String::New("glMap2f"), _gl_glMap2f->GetFunction());

    Local<FunctionTemplate> _gl_glGetMapdv = FunctionTemplate::New(gl_glGetMapdv);
    target->Set(String::New("glGetMapdv"), _gl_glGetMapdv->GetFunction());

    Local<FunctionTemplate> _gl_glGetMapfv = FunctionTemplate::New(gl_glGetMapfv);
    target->Set(String::New("glGetMapfv"), _gl_glGetMapfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetMapiv = FunctionTemplate::New(gl_glGetMapiv);
    target->Set(String::New("glGetMapiv"), _gl_glGetMapiv->GetFunction());

    Local<FunctionTemplate> _gl_glEvalCoord1d = FunctionTemplate::New(gl_glEvalCoord1d);
    target->Set(String::New("glEvalCoord1d"), _gl_glEvalCoord1d->GetFunction());

    Local<FunctionTemplate> _gl_glEvalCoord1f = FunctionTemplate::New(gl_glEvalCoord1f);
    target->Set(String::New("glEvalCoord1f"), _gl_glEvalCoord1f->GetFunction());

    Local<FunctionTemplate> _gl_glEvalCoord1dv = FunctionTemplate::New(gl_glEvalCoord1dv);
    target->Set(String::New("glEvalCoord1dv"), _gl_glEvalCoord1dv->GetFunction());

    Local<FunctionTemplate> _gl_glEvalCoord1fv = FunctionTemplate::New(gl_glEvalCoord1fv);
    target->Set(String::New("glEvalCoord1fv"), _gl_glEvalCoord1fv->GetFunction());

    Local<FunctionTemplate> _gl_glEvalCoord2d = FunctionTemplate::New(gl_glEvalCoord2d);
    target->Set(String::New("glEvalCoord2d"), _gl_glEvalCoord2d->GetFunction());

    Local<FunctionTemplate> _gl_glEvalCoord2f = FunctionTemplate::New(gl_glEvalCoord2f);
    target->Set(String::New("glEvalCoord2f"), _gl_glEvalCoord2f->GetFunction());

    Local<FunctionTemplate> _gl_glEvalCoord2dv = FunctionTemplate::New(gl_glEvalCoord2dv);
    target->Set(String::New("glEvalCoord2dv"), _gl_glEvalCoord2dv->GetFunction());

    Local<FunctionTemplate> _gl_glEvalCoord2fv = FunctionTemplate::New(gl_glEvalCoord2fv);
    target->Set(String::New("glEvalCoord2fv"), _gl_glEvalCoord2fv->GetFunction());

    Local<FunctionTemplate> _gl_glMapGrid1d = FunctionTemplate::New(gl_glMapGrid1d);
    target->Set(String::New("glMapGrid1d"), _gl_glMapGrid1d->GetFunction());

    Local<FunctionTemplate> _gl_glMapGrid1f = FunctionTemplate::New(gl_glMapGrid1f);
    target->Set(String::New("glMapGrid1f"), _gl_glMapGrid1f->GetFunction());

    Local<FunctionTemplate> _gl_glMapGrid2d = FunctionTemplate::New(gl_glMapGrid2d);
    target->Set(String::New("glMapGrid2d"), _gl_glMapGrid2d->GetFunction());

    Local<FunctionTemplate> _gl_glMapGrid2f = FunctionTemplate::New(gl_glMapGrid2f);
    target->Set(String::New("glMapGrid2f"), _gl_glMapGrid2f->GetFunction());

    Local<FunctionTemplate> _gl_glEvalPoint1 = FunctionTemplate::New(gl_glEvalPoint1);
    target->Set(String::New("glEvalPoint1"), _gl_glEvalPoint1->GetFunction());

    Local<FunctionTemplate> _gl_glEvalPoint2 = FunctionTemplate::New(gl_glEvalPoint2);
    target->Set(String::New("glEvalPoint2"), _gl_glEvalPoint2->GetFunction());

    Local<FunctionTemplate> _gl_glEvalMesh1 = FunctionTemplate::New(gl_glEvalMesh1);
    target->Set(String::New("glEvalMesh1"), _gl_glEvalMesh1->GetFunction());

    Local<FunctionTemplate> _gl_glEvalMesh2 = FunctionTemplate::New(gl_glEvalMesh2);
    target->Set(String::New("glEvalMesh2"), _gl_glEvalMesh2->GetFunction());

    Local<FunctionTemplate> _gl_glFogf = FunctionTemplate::New(gl_glFogf);
    target->Set(String::New("glFogf"), _gl_glFogf->GetFunction());

    Local<FunctionTemplate> _gl_glFogi = FunctionTemplate::New(gl_glFogi);
    target->Set(String::New("glFogi"), _gl_glFogi->GetFunction());

    Local<FunctionTemplate> _gl_glFogfv = FunctionTemplate::New(gl_glFogfv);
    target->Set(String::New("glFogfv"), _gl_glFogfv->GetFunction());

    Local<FunctionTemplate> _gl_glFogiv = FunctionTemplate::New(gl_glFogiv);
    target->Set(String::New("glFogiv"), _gl_glFogiv->GetFunction());

    Local<FunctionTemplate> _gl_glFeedbackBuffer = FunctionTemplate::New(gl_glFeedbackBuffer);
    target->Set(String::New("glFeedbackBuffer"), _gl_glFeedbackBuffer->GetFunction());

    Local<FunctionTemplate> _gl_glPassThrough = FunctionTemplate::New(gl_glPassThrough);
    target->Set(String::New("glPassThrough"), _gl_glPassThrough->GetFunction());

    Local<FunctionTemplate> _gl_glSelectBuffer = FunctionTemplate::New(gl_glSelectBuffer);
    target->Set(String::New("glSelectBuffer"), _gl_glSelectBuffer->GetFunction());

    Local<FunctionTemplate> _gl_glInitNames = FunctionTemplate::New(gl_glInitNames);
    target->Set(String::New("glInitNames"), _gl_glInitNames->GetFunction());

    Local<FunctionTemplate> _gl_glLoadName = FunctionTemplate::New(gl_glLoadName);
    target->Set(String::New("glLoadName"), _gl_glLoadName->GetFunction());

    Local<FunctionTemplate> _gl_glPushName = FunctionTemplate::New(gl_glPushName);
    target->Set(String::New("glPushName"), _gl_glPushName->GetFunction());

    Local<FunctionTemplate> _gl_glPopName = FunctionTemplate::New(gl_glPopName);
    target->Set(String::New("glPopName"), _gl_glPopName->GetFunction());

    Local<FunctionTemplate> _gl_glDrawRangeElements = FunctionTemplate::New(gl_glDrawRangeElements);
    target->Set(String::New("glDrawRangeElements"), _gl_glDrawRangeElements->GetFunction());

    Local<FunctionTemplate> _gl_glTexImage3D = FunctionTemplate::New(gl_glTexImage3D);
    target->Set(String::New("glTexImage3D"), _gl_glTexImage3D->GetFunction());

    Local<FunctionTemplate> _gl_glTexSubImage3D = FunctionTemplate::New(gl_glTexSubImage3D);
    target->Set(String::New("glTexSubImage3D"), _gl_glTexSubImage3D->GetFunction());

    Local<FunctionTemplate> _gl_glCopyTexSubImage3D = FunctionTemplate::New(gl_glCopyTexSubImage3D);
    target->Set(String::New("glCopyTexSubImage3D"), _gl_glCopyTexSubImage3D->GetFunction());

    Local<FunctionTemplate> _gl_glColorTable = FunctionTemplate::New(gl_glColorTable);
    target->Set(String::New("glColorTable"), _gl_glColorTable->GetFunction());

    Local<FunctionTemplate> _gl_glColorSubTable = FunctionTemplate::New(gl_glColorSubTable);
    target->Set(String::New("glColorSubTable"), _gl_glColorSubTable->GetFunction());

    Local<FunctionTemplate> _gl_glColorTableParameteriv = FunctionTemplate::New(gl_glColorTableParameteriv);
    target->Set(String::New("glColorTableParameteriv"), _gl_glColorTableParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glColorTableParameterfv = FunctionTemplate::New(gl_glColorTableParameterfv);
    target->Set(String::New("glColorTableParameterfv"), _gl_glColorTableParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glCopyColorSubTable = FunctionTemplate::New(gl_glCopyColorSubTable);
    target->Set(String::New("glCopyColorSubTable"), _gl_glCopyColorSubTable->GetFunction());

    Local<FunctionTemplate> _gl_glCopyColorTable = FunctionTemplate::New(gl_glCopyColorTable);
    target->Set(String::New("glCopyColorTable"), _gl_glCopyColorTable->GetFunction());

    Local<FunctionTemplate> _gl_glGetColorTable = FunctionTemplate::New(gl_glGetColorTable);
    target->Set(String::New("glGetColorTable"), _gl_glGetColorTable->GetFunction());

    Local<FunctionTemplate> _gl_glGetColorTableParameterfv = FunctionTemplate::New(gl_glGetColorTableParameterfv);
    target->Set(String::New("glGetColorTableParameterfv"), _gl_glGetColorTableParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetColorTableParameteriv = FunctionTemplate::New(gl_glGetColorTableParameteriv);
    target->Set(String::New("glGetColorTableParameteriv"), _gl_glGetColorTableParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glBlendEquation = FunctionTemplate::New(gl_glBlendEquation);
    target->Set(String::New("glBlendEquation"), _gl_glBlendEquation->GetFunction());

    Local<FunctionTemplate> _gl_glBlendColor = FunctionTemplate::New(gl_glBlendColor);
    target->Set(String::New("glBlendColor"), _gl_glBlendColor->GetFunction());

    Local<FunctionTemplate> _gl_glHistogram = FunctionTemplate::New(gl_glHistogram);
    target->Set(String::New("glHistogram"), _gl_glHistogram->GetFunction());

    Local<FunctionTemplate> _gl_glResetHistogram = FunctionTemplate::New(gl_glResetHistogram);
    target->Set(String::New("glResetHistogram"), _gl_glResetHistogram->GetFunction());

    Local<FunctionTemplate> _gl_glGetHistogram = FunctionTemplate::New(gl_glGetHistogram);
    target->Set(String::New("glGetHistogram"), _gl_glGetHistogram->GetFunction());

    Local<FunctionTemplate> _gl_glGetHistogramParameterfv = FunctionTemplate::New(gl_glGetHistogramParameterfv);
    target->Set(String::New("glGetHistogramParameterfv"), _gl_glGetHistogramParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetHistogramParameteriv = FunctionTemplate::New(gl_glGetHistogramParameteriv);
    target->Set(String::New("glGetHistogramParameteriv"), _gl_glGetHistogramParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glMinmax = FunctionTemplate::New(gl_glMinmax);
    target->Set(String::New("glMinmax"), _gl_glMinmax->GetFunction());

    Local<FunctionTemplate> _gl_glResetMinmax = FunctionTemplate::New(gl_glResetMinmax);
    target->Set(String::New("glResetMinmax"), _gl_glResetMinmax->GetFunction());

    Local<FunctionTemplate> _gl_glGetMinmax = FunctionTemplate::New(gl_glGetMinmax);
    target->Set(String::New("glGetMinmax"), _gl_glGetMinmax->GetFunction());

    Local<FunctionTemplate> _gl_glGetMinmaxParameterfv = FunctionTemplate::New(gl_glGetMinmaxParameterfv);
    target->Set(String::New("glGetMinmaxParameterfv"), _gl_glGetMinmaxParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetMinmaxParameteriv = FunctionTemplate::New(gl_glGetMinmaxParameteriv);
    target->Set(String::New("glGetMinmaxParameteriv"), _gl_glGetMinmaxParameteriv->GetFunction());

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

    Local<FunctionTemplate> _gl_glCopyConvolutionFilter1D = FunctionTemplate::New(gl_glCopyConvolutionFilter1D);
    target->Set(String::New("glCopyConvolutionFilter1D"), _gl_glCopyConvolutionFilter1D->GetFunction());

    Local<FunctionTemplate> _gl_glCopyConvolutionFilter2D = FunctionTemplate::New(gl_glCopyConvolutionFilter2D);
    target->Set(String::New("glCopyConvolutionFilter2D"), _gl_glCopyConvolutionFilter2D->GetFunction());

    Local<FunctionTemplate> _gl_glGetConvolutionFilter = FunctionTemplate::New(gl_glGetConvolutionFilter);
    target->Set(String::New("glGetConvolutionFilter"), _gl_glGetConvolutionFilter->GetFunction());

    Local<FunctionTemplate> _gl_glGetConvolutionParameterfv = FunctionTemplate::New(gl_glGetConvolutionParameterfv);
    target->Set(String::New("glGetConvolutionParameterfv"), _gl_glGetConvolutionParameterfv->GetFunction());

    Local<FunctionTemplate> _gl_glGetConvolutionParameteriv = FunctionTemplate::New(gl_glGetConvolutionParameteriv);
    target->Set(String::New("glGetConvolutionParameteriv"), _gl_glGetConvolutionParameteriv->GetFunction());

    Local<FunctionTemplate> _gl_glSeparableFilter2D = FunctionTemplate::New(gl_glSeparableFilter2D);
    target->Set(String::New("glSeparableFilter2D"), _gl_glSeparableFilter2D->GetFunction());

    Local<FunctionTemplate> _gl_glGetSeparableFilter = FunctionTemplate::New(gl_glGetSeparableFilter);
    target->Set(String::New("glGetSeparableFilter"), _gl_glGetSeparableFilter->GetFunction());

    Local<FunctionTemplate> _gl_glActiveTexture = FunctionTemplate::New(gl_glActiveTexture);
    target->Set(String::New("glActiveTexture"), _gl_glActiveTexture->GetFunction());

    Local<FunctionTemplate> _gl_glClientActiveTexture = FunctionTemplate::New(gl_glClientActiveTexture);
    target->Set(String::New("glClientActiveTexture"), _gl_glClientActiveTexture->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexImage1D = FunctionTemplate::New(gl_glCompressedTexImage1D);
    target->Set(String::New("glCompressedTexImage1D"), _gl_glCompressedTexImage1D->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexImage2D = FunctionTemplate::New(gl_glCompressedTexImage2D);
    target->Set(String::New("glCompressedTexImage2D"), _gl_glCompressedTexImage2D->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexImage3D = FunctionTemplate::New(gl_glCompressedTexImage3D);
    target->Set(String::New("glCompressedTexImage3D"), _gl_glCompressedTexImage3D->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexSubImage1D = FunctionTemplate::New(gl_glCompressedTexSubImage1D);
    target->Set(String::New("glCompressedTexSubImage1D"), _gl_glCompressedTexSubImage1D->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexSubImage2D = FunctionTemplate::New(gl_glCompressedTexSubImage2D);
    target->Set(String::New("glCompressedTexSubImage2D"), _gl_glCompressedTexSubImage2D->GetFunction());

    Local<FunctionTemplate> _gl_glCompressedTexSubImage3D = FunctionTemplate::New(gl_glCompressedTexSubImage3D);
    target->Set(String::New("glCompressedTexSubImage3D"), _gl_glCompressedTexSubImage3D->GetFunction());

    Local<FunctionTemplate> _gl_glGetCompressedTexImage = FunctionTemplate::New(gl_glGetCompressedTexImage);
    target->Set(String::New("glGetCompressedTexImage"), _gl_glGetCompressedTexImage->GetFunction());

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

    Local<FunctionTemplate> _gl_glLoadTransposeMatrixd = FunctionTemplate::New(gl_glLoadTransposeMatrixd);
    target->Set(String::New("glLoadTransposeMatrixd"), _gl_glLoadTransposeMatrixd->GetFunction());

    Local<FunctionTemplate> _gl_glLoadTransposeMatrixf = FunctionTemplate::New(gl_glLoadTransposeMatrixf);
    target->Set(String::New("glLoadTransposeMatrixf"), _gl_glLoadTransposeMatrixf->GetFunction());

    Local<FunctionTemplate> _gl_glMultTransposeMatrixd = FunctionTemplate::New(gl_glMultTransposeMatrixd);
    target->Set(String::New("glMultTransposeMatrixd"), _gl_glMultTransposeMatrixd->GetFunction());

    Local<FunctionTemplate> _gl_glMultTransposeMatrixf = FunctionTemplate::New(gl_glMultTransposeMatrixf);
    target->Set(String::New("glMultTransposeMatrixf"), _gl_glMultTransposeMatrixf->GetFunction());

    Local<FunctionTemplate> _gl_glSampleCoverage = FunctionTemplate::New(gl_glSampleCoverage);
    target->Set(String::New("glSampleCoverage"), _gl_glSampleCoverage->GetFunction());

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

  }
}  // namespace node
