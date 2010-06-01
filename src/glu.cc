#include <node.h>

// Includes
#include "glu.h"
#include <GL/glu.h>
#include <GL/gl.h>

using namespace v8;
namespace node {

  /**
   * glClearIndex
   *
   * @param GLfloat c
   * @return void
   */
  Handle<Value> glu_glClearIndex(const Arguments& args) {
    HandleScope scope;
    glClearIndex(args[0]->NumberValue());
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
  Handle<Value> glu_glClearColor(const Arguments& args) {
    HandleScope scope;
    glClearColor(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
  }


  /**
   * glClear
   *
   * @param GLbitfield mask
   * @return void
   */
  Handle<Value> glu_glClear(const Arguments& args) {
    HandleScope scope;
    glClear(args[0]->NumberValue());
  }


  /**
   * glIndexMask
   *
   * @param GLuint mask
   * @return void
   */
  Handle<Value> glu_glIndexMask(const Arguments& args) {
    HandleScope scope;
    glIndexMask(args[0]->NumberValue());
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
  Handle<Value> glu_glColorMask(const Arguments& args) {
    HandleScope scope;
    glColorMask(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
  }


  /**
   * glAlphaFunc
   *
   * @param GLenum func
   * @param GLclampf ref
   * @return void
   */
  Handle<Value> glu_glAlphaFunc(const Arguments& args) {
    HandleScope scope;
    glAlphaFunc((GLenum) args[0]->Int32Value(), args[1]->NumberValue());
  }


  /**
   * glBlendFunc
   *
   * @param GLenum sfactor
   * @param GLenum dfactor
   * @return void
   */
  Handle<Value> glu_glBlendFunc(const Arguments& args) {
    HandleScope scope;
    glBlendFunc((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value());
  }


  /**
   * glLogicOp
   *
   * @param GLenum opcode
   * @return void
   */
  Handle<Value> glu_glLogicOp(const Arguments& args) {
    HandleScope scope;
    glLogicOp((GLenum) args[0]->Int32Value());
  }


  /**
   * glCullFace
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glu_glCullFace(const Arguments& args) {
    HandleScope scope;
    glCullFace((GLenum) args[0]->Int32Value());
  }


  /**
   * glFrontFace
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glu_glFrontFace(const Arguments& args) {
    HandleScope scope;
    glFrontFace((GLenum) args[0]->Int32Value());
  }


  /**
   * glPointSize
   *
   * @param GLfloat size
   * @return void
   */
  Handle<Value> glu_glPointSize(const Arguments& args) {
    HandleScope scope;
    glPointSize(args[0]->NumberValue());
  }


  /**
   * glLineWidth
   *
   * @param GLfloat width
   * @return void
   */
  Handle<Value> glu_glLineWidth(const Arguments& args) {
    HandleScope scope;
    glLineWidth(args[0]->NumberValue());
  }


  /**
   * glLineStipple
   *
   * @param GLint factor
   * @param GLushort pattern
   * @return void
   */
  Handle<Value> glu_glLineStipple(const Arguments& args) {
    HandleScope scope;
    glLineStipple((GLint) args[0]->Int32Value(), args[1]->NumberValue());
  }


  /**
   * glPolygonMode
   *
   * @param GLenum face
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glu_glPolygonMode(const Arguments& args) {
    HandleScope scope;
    glPolygonMode((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value());
  }


  /**
   * glPolygonOffset
   *
   * @param GLfloat factor
   * @param GLfloat units
   * @return void
   */
  Handle<Value> glu_glPolygonOffset(const Arguments& args) {
    HandleScope scope;
    glPolygonOffset(args[0]->NumberValue(), args[1]->NumberValue());
  }


  /**
   * glPolygonStipple
   *
   * @param const GLubyte *mask
   * @return void
   */
  Handle<Value> glu_glPolygonStipple(const Arguments& args) {
    HandleScope scope;
    const GLubyte _mask = (GLubyte)args[0]->Int32Value();
    glPolygonStipple(&_mask);
    args[0] = Number::New(_mask);

  }


  /**
   * glGetPolygonStipple
   *
   * @param GLubyte *mask
   * @return void
   */
  Handle<Value> glu_glGetPolygonStipple(const Arguments& args) {
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
  Handle<Value> glu_glEdgeFlag(const Arguments& args) {
    HandleScope scope;
    glEdgeFlag(args[0]->NumberValue());
  }


  /**
   * glEdgeFlagv
   *
   * @param const GLboolean *flag
   * @return void
   */
  Handle<Value> glu_glEdgeFlagv(const Arguments& args) {
    HandleScope scope;
    const GLboolean _flag = (GLboolean)args[0]->Int32Value();
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
  Handle<Value> glu_glScissor(const Arguments& args) {
    HandleScope scope;
    glScissor((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLsizei) args[2]->Int32Value(), (GLsizei) args[3]->Int32Value());
  }


  /**
   * glClipPlane
   *
   * @param GLenum plane
   * @param const GLdouble *equation
   * @return void
   */
  Handle<Value> glu_glClipPlane(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glClipPlane is not implemented!")));

  }


  /**
   * glGetClipPlane
   *
   * @param GLenum plane
   * @param GLdouble *equation
   * @return void
   */
  Handle<Value> glu_glGetClipPlane(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetClipPlane is not implemented!")));

  }


  /**
   * glDrawBuffer
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glu_glDrawBuffer(const Arguments& args) {
    HandleScope scope;
    glDrawBuffer((GLenum) args[0]->Int32Value());
  }


  /**
   * glReadBuffer
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glu_glReadBuffer(const Arguments& args) {
    HandleScope scope;
    glReadBuffer((GLenum) args[0]->Int32Value());
  }


  /**
   * glEnable
   *
   * @param GLenum cap
   * @return void
   */
  Handle<Value> glu_glEnable(const Arguments& args) {
    HandleScope scope;
    glEnable((GLenum) args[0]->Int32Value());
  }


  /**
   * glDisable
   *
   * @param GLenum cap
   * @return void
   */
  Handle<Value> glu_glDisable(const Arguments& args) {
    HandleScope scope;
    glDisable((GLenum) args[0]->Int32Value());
  }


  /**
   * glIsEnabled
   *
   * @param GLenum cap
   * @return GLboolean
   */
  Handle<Value> glu_glIsEnabled(const Arguments& args) {
    HandleScope scope;
    glIsEnabled((GLenum) args[0]->Int32Value());
  }


  /**
   * glEnableClientState
   *
   * @param GLenum cap
   * @return void
   */
  Handle<Value> glu_glEnableClientState(const Arguments& args) {
    HandleScope scope;
    glEnableClientState((GLenum) args[0]->Int32Value());
  }


  /**
   * glDisableClientState
   *
   * @param GLenum cap
   * @return void
   */
  Handle<Value> glu_glDisableClientState(const Arguments& args) {
    HandleScope scope;
    glDisableClientState((GLenum) args[0]->Int32Value());
  }


  /**
   * glGetBooleanv
   *
   * @param GLenum pname
   * @param GLboolean *params
   * @return void
   */
  Handle<Value> glu_glGetBooleanv(const Arguments& args) {
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
  Handle<Value> glu_glGetDoublev(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetDoublev is not implemented!")));

  }


  /**
   * glGetFloatv
   *
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> glu_glGetFloatv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetFloatv is not implemented!")));

  }


  /**
   * glGetIntegerv
   *
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glu_glGetIntegerv(const Arguments& args) {
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
  Handle<Value> glu_glPushAttrib(const Arguments& args) {
    HandleScope scope;
    glPushAttrib(args[0]->NumberValue());
  }


  /**
   * @return void
   */
  Handle<Value> glu_glPopAttrib(const Arguments& args) {
    HandleScope scope;
    glPopAttrib();
  }


  /**
   * glPushClientAttrib
   *
   * @param GLbitfield mask
   * @return void
   */
  Handle<Value> glu_glPushClientAttrib(const Arguments& args) {
    HandleScope scope;
    glPushClientAttrib(args[0]->NumberValue());
  }


  /**
   * @return void
   */
  Handle<Value> glu_glPopClientAttrib(const Arguments& args) {
    HandleScope scope;
    glPopClientAttrib();
  }


  /**
   * glRenderMode
   *
   * @param GLenum mode
   * @return GLint
   */
  Handle<Value> glu_glRenderMode(const Arguments& args) {
    HandleScope scope;
    glRenderMode((GLenum) args[0]->Int32Value());
  }


  /**
   * @return GLenum
   */
  Handle<Value> glu_glGetError(const Arguments& args) {
    HandleScope scope;
    glGetError();
  }


  /**
   * @return void
   */
  Handle<Value> glu_glFinish(const Arguments& args) {
    HandleScope scope;
    glFinish();
  }


  /**
   * @return void
   */
  Handle<Value> glu_glFlush(const Arguments& args) {
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
  Handle<Value> glu_glHint(const Arguments& args) {
    HandleScope scope;
    glHint((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value());
  }


  /**
   * glClearDepth
   *
   * @param GLclampd depth
   * @return void
   */
  Handle<Value> glu_glClearDepth(const Arguments& args) {
    HandleScope scope;
    glClearDepth(args[0]->NumberValue());
  }


  /**
   * glDepthFunc
   *
   * @param GLenum func
   * @return void
   */
  Handle<Value> glu_glDepthFunc(const Arguments& args) {
    HandleScope scope;
    glDepthFunc((GLenum) args[0]->Int32Value());
  }


  /**
   * glDepthMask
   *
   * @param GLboolean flag
   * @return void
   */
  Handle<Value> glu_glDepthMask(const Arguments& args) {
    HandleScope scope;
    glDepthMask(args[0]->NumberValue());
  }


  /**
   * glDepthRange
   *
   * @param GLclampd near_val
   * @param GLclampd far_val
   * @return void
   */
  Handle<Value> glu_glDepthRange(const Arguments& args) {
    HandleScope scope;
    glDepthRange(args[0]->NumberValue(), args[1]->NumberValue());
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
  Handle<Value> glu_glClearAccum(const Arguments& args) {
    HandleScope scope;
    glClearAccum(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
  }


  /**
   * glAccum
   *
   * @param GLenum op
   * @param GLfloat value
   * @return void
   */
  Handle<Value> glu_glAccum(const Arguments& args) {
    HandleScope scope;
    glAccum((GLenum) args[0]->Int32Value(), args[1]->NumberValue());
  }


  /**
   * glMatrixMode
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glu_glMatrixMode(const Arguments& args) {
    HandleScope scope;
    glMatrixMode((GLenum) args[0]->Int32Value());
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
  Handle<Value> glu_glOrtho(const Arguments& args) {
    HandleScope scope;
    glOrtho(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue(), args[4]->NumberValue(), args[5]->NumberValue());
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
  Handle<Value> glu_glFrustum(const Arguments& args) {
    HandleScope scope;
    glFrustum(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue(), args[4]->NumberValue(), args[5]->NumberValue());
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
  Handle<Value> glu_glViewport(const Arguments& args) {
    HandleScope scope;
    glViewport((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLsizei) args[2]->Int32Value(), (GLsizei) args[3]->Int32Value());
  }


  /**
   * @return void
   */
  Handle<Value> glu_glPushMatrix(const Arguments& args) {
    HandleScope scope;
    glPushMatrix();
  }


  /**
   * @return void
   */
  Handle<Value> glu_glPopMatrix(const Arguments& args) {
    HandleScope scope;
    glPopMatrix();
  }


  /**
   * @return void
   */
  Handle<Value> glu_glLoadIdentity(const Arguments& args) {
    HandleScope scope;
    glLoadIdentity();
  }


  /**
   * glLoadMatrixd
   *
   * @param const GLdouble *m
   * @return void
   */
  Handle<Value> glu_glLoadMatrixd(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glLoadMatrixd is not implemented!")));

  }


  /**
   * glLoadMatrixf
   *
   * @param const GLfloat *m
   * @return void
   */
  Handle<Value> glu_glLoadMatrixf(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glLoadMatrixf is not implemented!")));

  }


  /**
   * glMultMatrixd
   *
   * @param const GLdouble *m
   * @return void
   */
  Handle<Value> glu_glMultMatrixd(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultMatrixd is not implemented!")));

  }


  /**
   * glMultMatrixf
   *
   * @param const GLfloat *m
   * @return void
   */
  Handle<Value> glu_glMultMatrixf(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultMatrixf is not implemented!")));

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
  Handle<Value> glu_glRotated(const Arguments& args) {
    HandleScope scope;
    glRotated(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
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
  Handle<Value> glu_glRotatef(const Arguments& args) {
    HandleScope scope;
    glRotatef(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
  }


  /**
   * glScaled
   *
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @return void
   */
  Handle<Value> glu_glScaled(const Arguments& args) {
    HandleScope scope;
    glScaled(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glScalef
   *
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @return void
   */
  Handle<Value> glu_glScalef(const Arguments& args) {
    HandleScope scope;
    glScalef(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glTranslated
   *
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @return void
   */
  Handle<Value> glu_glTranslated(const Arguments& args) {
    HandleScope scope;
    glTranslated(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glTranslatef
   *
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @return void
   */
  Handle<Value> glu_glTranslatef(const Arguments& args) {
    HandleScope scope;
    glTranslatef(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glIsList
   *
   * @param GLuint list
   * @return GLboolean
   */
  Handle<Value> glu_glIsList(const Arguments& args) {
    HandleScope scope;
    glIsList(args[0]->NumberValue());
  }


  /**
   * glDeleteLists
   *
   * @param GLuint list
   * @param GLsizei range
   * @return void
   */
  Handle<Value> glu_glDeleteLists(const Arguments& args) {
    HandleScope scope;
    glDeleteLists(args[0]->NumberValue(), (GLsizei) args[1]->Int32Value());
  }


  /**
   * glGenLists
   *
   * @param GLsizei range
   * @return GLuint
   */
  Handle<Value> glu_glGenLists(const Arguments& args) {
    HandleScope scope;
    glGenLists((GLsizei) args[0]->Int32Value());
  }


  /**
   * glNewList
   *
   * @param GLuint list
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glu_glNewList(const Arguments& args) {
    HandleScope scope;
    glNewList(args[0]->NumberValue(), (GLenum) args[1]->Int32Value());
  }


  /**
   * @return void
   */
  Handle<Value> glu_glEndList(const Arguments& args) {
    HandleScope scope;
    glEndList();
  }


  /**
   * glCallList
   *
   * @param GLuint list
   * @return void
   */
  Handle<Value> glu_glCallList(const Arguments& args) {
    HandleScope scope;
    glCallList(args[0]->NumberValue());
  }


  /**
   * glCallLists
   *
   * @param GLsizei n
   * @param GLenum type
   * @param const GLvoid *lists
   * @return void
   */
  Handle<Value> glu_glCallLists(const Arguments& args) {
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
    glCallLists(_n, _type, &_lists);
  }


  /**
   * glListBase
   *
   * @param GLuint base
   * @return void
   */
  Handle<Value> glu_glListBase(const Arguments& args) {
    HandleScope scope;
    glListBase(args[0]->NumberValue());
  }


  /**
   * glBegin
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glu_glBegin(const Arguments& args) {
    HandleScope scope;
    glBegin((GLenum) args[0]->Int32Value());
  }


  /**
   * @return void
   */
  Handle<Value> glu_glEnd(const Arguments& args) {
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
  Handle<Value> glu_glVertex2d(const Arguments& args) {
    HandleScope scope;
    glVertex2d(args[0]->NumberValue(), args[1]->NumberValue());
  }


  /**
   * glVertex2f
   *
   * @param GLfloat x
   * @param GLfloat y
   * @return void
   */
  Handle<Value> glu_glVertex2f(const Arguments& args) {
    HandleScope scope;
    glVertex2f(args[0]->NumberValue(), args[1]->NumberValue());
  }


  /**
   * glVertex2i
   *
   * @param GLint x
   * @param GLint y
   * @return void
   */
  Handle<Value> glu_glVertex2i(const Arguments& args) {
    HandleScope scope;
    glVertex2i((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value());
  }


  /**
   * glVertex2s
   *
   * @param GLshort x
   * @param GLshort y
   * @return void
   */
  Handle<Value> glu_glVertex2s(const Arguments& args) {
    HandleScope scope;
    glVertex2s((GLshort) args[0]->Int32Value(), (GLshort) args[1]->Int32Value());
  }


  /**
   * glVertex3d
   *
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @return void
   */
  Handle<Value> glu_glVertex3d(const Arguments& args) {
    HandleScope scope;
    glVertex3d(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glVertex3f
   *
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @return void
   */
  Handle<Value> glu_glVertex3f(const Arguments& args) {
    HandleScope scope;
    glVertex3f(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glVertex3i
   *
   * @param GLint x
   * @param GLint y
   * @param GLint z
   * @return void
   */
  Handle<Value> glu_glVertex3i(const Arguments& args) {
    HandleScope scope;
    glVertex3i((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value());
  }


  /**
   * glVertex3s
   *
   * @param GLshort x
   * @param GLshort y
   * @param GLshort z
   * @return void
   */
  Handle<Value> glu_glVertex3s(const Arguments& args) {
    HandleScope scope;
    glVertex3s((GLshort) args[0]->Int32Value(), (GLshort) args[1]->Int32Value(), (GLshort) args[2]->Int32Value());
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
  Handle<Value> glu_glVertex4d(const Arguments& args) {
    HandleScope scope;
    glVertex4d(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
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
  Handle<Value> glu_glVertex4f(const Arguments& args) {
    HandleScope scope;
    glVertex4f(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
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
  Handle<Value> glu_glVertex4i(const Arguments& args) {
    HandleScope scope;
    glVertex4i((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value());
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
  Handle<Value> glu_glVertex4s(const Arguments& args) {
    HandleScope scope;
    glVertex4s((GLshort) args[0]->Int32Value(), (GLshort) args[1]->Int32Value(), (GLshort) args[2]->Int32Value(), (GLshort) args[3]->Int32Value());
  }


  /**
   * glVertex2dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glVertex2dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glVertex2dv is not implemented!")));

  }


  /**
   * glVertex2fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glVertex2fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glVertex2fv is not implemented!")));

  }


  /**
   * glVertex2iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glVertex2iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glVertex2iv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glVertex2sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glVertex2sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glVertex2sv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glVertex3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glVertex3dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glVertex3dv is not implemented!")));

  }


  /**
   * glVertex3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glVertex3fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glVertex3fv is not implemented!")));

  }


  /**
   * glVertex3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glVertex3iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glVertex3iv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glVertex3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glVertex3sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glVertex3sv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glVertex4dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glVertex4dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glVertex4dv is not implemented!")));

  }


  /**
   * glVertex4fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glVertex4fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glVertex4fv is not implemented!")));

  }


  /**
   * glVertex4iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glVertex4iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glVertex4iv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glVertex4sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glVertex4sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
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
  Handle<Value> glu_glNormal3b(const Arguments& args) {
    HandleScope scope;
    glNormal3b((GLbyte) args[0]->Int32Value(), (GLbyte) args[1]->Int32Value(), (GLbyte) args[2]->Int32Value());
  }


  /**
   * glNormal3d
   *
   * @param GLdouble nx
   * @param GLdouble ny
   * @param GLdouble nz
   * @return void
   */
  Handle<Value> glu_glNormal3d(const Arguments& args) {
    HandleScope scope;
    glNormal3d(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glNormal3f
   *
   * @param GLfloat nx
   * @param GLfloat ny
   * @param GLfloat nz
   * @return void
   */
  Handle<Value> glu_glNormal3f(const Arguments& args) {
    HandleScope scope;
    glNormal3f(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glNormal3i
   *
   * @param GLint nx
   * @param GLint ny
   * @param GLint nz
   * @return void
   */
  Handle<Value> glu_glNormal3i(const Arguments& args) {
    HandleScope scope;
    glNormal3i((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value());
  }


  /**
   * glNormal3s
   *
   * @param GLshort nx
   * @param GLshort ny
   * @param GLshort nz
   * @return void
   */
  Handle<Value> glu_glNormal3s(const Arguments& args) {
    HandleScope scope;
    glNormal3s((GLshort) args[0]->Int32Value(), (GLshort) args[1]->Int32Value(), (GLshort) args[2]->Int32Value());
  }


  /**
   * glNormal3bv
   *
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> glu_glNormal3bv(const Arguments& args) {
    HandleScope scope;
    const GLbyte _v = (GLbyte)args[0]->Int32Value();
    glNormal3bv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glNormal3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glNormal3dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glNormal3dv is not implemented!")));

  }


  /**
   * glNormal3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glNormal3fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glNormal3fv is not implemented!")));

  }


  /**
   * glNormal3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glNormal3iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glNormal3iv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glNormal3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glNormal3sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glNormal3sv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glIndexd
   *
   * @param GLdouble c
   * @return void
   */
  Handle<Value> glu_glIndexd(const Arguments& args) {
    HandleScope scope;
    glIndexd(args[0]->NumberValue());
  }


  /**
   * glIndexf
   *
   * @param GLfloat c
   * @return void
   */
  Handle<Value> glu_glIndexf(const Arguments& args) {
    HandleScope scope;
    glIndexf(args[0]->NumberValue());
  }


  /**
   * glIndexi
   *
   * @param GLint c
   * @return void
   */
  Handle<Value> glu_glIndexi(const Arguments& args) {
    HandleScope scope;
    glIndexi((GLint) args[0]->Int32Value());
  }


  /**
   * glIndexs
   *
   * @param GLshort c
   * @return void
   */
  Handle<Value> glu_glIndexs(const Arguments& args) {
    HandleScope scope;
    glIndexs((GLshort) args[0]->Int32Value());
  }


  /**
   * glIndexub
   *
   * @param GLubyte c
   * @return void
   */
  Handle<Value> glu_glIndexub(const Arguments& args) {
    HandleScope scope;
    glIndexub((GLubyte) args[0]->Int32Value());
  }


  /**
   * glIndexdv
   *
   * @param const GLdouble *c
   * @return void
   */
  Handle<Value> glu_glIndexdv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glIndexdv is not implemented!")));

  }


  /**
   * glIndexfv
   *
   * @param const GLfloat *c
   * @return void
   */
  Handle<Value> glu_glIndexfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glIndexfv is not implemented!")));

  }


  /**
   * glIndexiv
   *
   * @param const GLint *c
   * @return void
   */
  Handle<Value> glu_glIndexiv(const Arguments& args) {
    HandleScope scope;
    const GLint _c = (GLint)args[0]->Int32Value();
    glIndexiv(&_c);
    args[0] = Number::New(_c);

  }


  /**
   * glIndexsv
   *
   * @param const GLshort *c
   * @return void
   */
  Handle<Value> glu_glIndexsv(const Arguments& args) {
    HandleScope scope;
    const GLshort _c = (GLshort)args[0]->Int32Value();
    glIndexsv(&_c);
    args[0] = Number::New(_c);

  }


  /**
   * glIndexubv
   *
   * @param const GLubyte *c
   * @return void
   */
  Handle<Value> glu_glIndexubv(const Arguments& args) {
    HandleScope scope;
    const GLubyte _c = (GLubyte)args[0]->Int32Value();
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
  Handle<Value> glu_glColor3b(const Arguments& args) {
    HandleScope scope;
    glColor3b((GLbyte) args[0]->Int32Value(), (GLbyte) args[1]->Int32Value(), (GLbyte) args[2]->Int32Value());
  }


  /**
   * glColor3d
   *
   * @param GLdouble red
   * @param GLdouble green
   * @param GLdouble blue
   * @return void
   */
  Handle<Value> glu_glColor3d(const Arguments& args) {
    HandleScope scope;
    glColor3d(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glColor3f
   *
   * @param GLfloat red
   * @param GLfloat green
   * @param GLfloat blue
   * @return void
   */
  Handle<Value> glu_glColor3f(const Arguments& args) {
    HandleScope scope;
    glColor3f(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glColor3i
   *
   * @param GLint red
   * @param GLint green
   * @param GLint blue
   * @return void
   */
  Handle<Value> glu_glColor3i(const Arguments& args) {
    HandleScope scope;
    glColor3i((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value());
  }


  /**
   * glColor3s
   *
   * @param GLshort red
   * @param GLshort green
   * @param GLshort blue
   * @return void
   */
  Handle<Value> glu_glColor3s(const Arguments& args) {
    HandleScope scope;
    glColor3s((GLshort) args[0]->Int32Value(), (GLshort) args[1]->Int32Value(), (GLshort) args[2]->Int32Value());
  }


  /**
   * glColor3ub
   *
   * @param GLubyte red
   * @param GLubyte green
   * @param GLubyte blue
   * @return void
   */
  Handle<Value> glu_glColor3ub(const Arguments& args) {
    HandleScope scope;
    glColor3ub((GLubyte) args[0]->Int32Value(), (GLubyte) args[1]->Int32Value(), (GLubyte) args[2]->Int32Value());
  }


  /**
   * glColor3ui
   *
   * @param GLuint red
   * @param GLuint green
   * @param GLuint blue
   * @return void
   */
  Handle<Value> glu_glColor3ui(const Arguments& args) {
    HandleScope scope;
    glColor3ui(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glColor3us
   *
   * @param GLushort red
   * @param GLushort green
   * @param GLushort blue
   * @return void
   */
  Handle<Value> glu_glColor3us(const Arguments& args) {
    HandleScope scope;
    glColor3us(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
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
  Handle<Value> glu_glColor4b(const Arguments& args) {
    HandleScope scope;
    glColor4b((GLbyte) args[0]->Int32Value(), (GLbyte) args[1]->Int32Value(), (GLbyte) args[2]->Int32Value(), (GLbyte) args[3]->Int32Value());
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
  Handle<Value> glu_glColor4d(const Arguments& args) {
    HandleScope scope;
    glColor4d(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
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
  Handle<Value> glu_glColor4f(const Arguments& args) {
    HandleScope scope;
    glColor4f(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
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
  Handle<Value> glu_glColor4i(const Arguments& args) {
    HandleScope scope;
    glColor4i((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value());
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
  Handle<Value> glu_glColor4s(const Arguments& args) {
    HandleScope scope;
    glColor4s((GLshort) args[0]->Int32Value(), (GLshort) args[1]->Int32Value(), (GLshort) args[2]->Int32Value(), (GLshort) args[3]->Int32Value());
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
  Handle<Value> glu_glColor4ub(const Arguments& args) {
    HandleScope scope;
    glColor4ub((GLubyte) args[0]->Int32Value(), (GLubyte) args[1]->Int32Value(), (GLubyte) args[2]->Int32Value(), (GLubyte) args[3]->Int32Value());
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
  Handle<Value> glu_glColor4ui(const Arguments& args) {
    HandleScope scope;
    glColor4ui(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
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
  Handle<Value> glu_glColor4us(const Arguments& args) {
    HandleScope scope;
    glColor4us(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
  }


  /**
   * glColor3bv
   *
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> glu_glColor3bv(const Arguments& args) {
    HandleScope scope;
    const GLbyte _v = (GLbyte)args[0]->Int32Value();
    glColor3bv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glColor3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glColor3dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glColor3dv is not implemented!")));

  }


  /**
   * glColor3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glColor3fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glColor3fv is not implemented!")));

  }


  /**
   * glColor3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glColor3iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glColor3iv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glColor3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glColor3sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glColor3sv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glColor3ubv
   *
   * @param const GLubyte *v
   * @return void
   */
  Handle<Value> glu_glColor3ubv(const Arguments& args) {
    HandleScope scope;
    const GLubyte _v = (GLubyte)args[0]->Int32Value();
    glColor3ubv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glColor3uiv
   *
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> glu_glColor3uiv(const Arguments& args) {
    HandleScope scope;
    const GLuint _v = (GLuint)args[0]->Uint32Value();
    glColor3uiv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glColor3usv
   *
   * @param const GLushort *v
   * @return void
   */
  Handle<Value> glu_glColor3usv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glColor3usv is not implemented!")));

  }


  /**
   * glColor4bv
   *
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> glu_glColor4bv(const Arguments& args) {
    HandleScope scope;
    const GLbyte _v = (GLbyte)args[0]->Int32Value();
    glColor4bv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glColor4dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glColor4dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glColor4dv is not implemented!")));

  }


  /**
   * glColor4fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glColor4fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glColor4fv is not implemented!")));

  }


  /**
   * glColor4iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glColor4iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glColor4iv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glColor4sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glColor4sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glColor4sv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glColor4ubv
   *
   * @param const GLubyte *v
   * @return void
   */
  Handle<Value> glu_glColor4ubv(const Arguments& args) {
    HandleScope scope;
    const GLubyte _v = (GLubyte)args[0]->Int32Value();
    glColor4ubv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glColor4uiv
   *
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> glu_glColor4uiv(const Arguments& args) {
    HandleScope scope;
    const GLuint _v = (GLuint)args[0]->Uint32Value();
    glColor4uiv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glColor4usv
   *
   * @param const GLushort *v
   * @return void
   */
  Handle<Value> glu_glColor4usv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glColor4usv is not implemented!")));

  }


  /**
   * glTexCoord1d
   *
   * @param GLdouble s
   * @return void
   */
  Handle<Value> glu_glTexCoord1d(const Arguments& args) {
    HandleScope scope;
    glTexCoord1d(args[0]->NumberValue());
  }


  /**
   * glTexCoord1f
   *
   * @param GLfloat s
   * @return void
   */
  Handle<Value> glu_glTexCoord1f(const Arguments& args) {
    HandleScope scope;
    glTexCoord1f(args[0]->NumberValue());
  }


  /**
   * glTexCoord1i
   *
   * @param GLint s
   * @return void
   */
  Handle<Value> glu_glTexCoord1i(const Arguments& args) {
    HandleScope scope;
    glTexCoord1i((GLint) args[0]->Int32Value());
  }


  /**
   * glTexCoord1s
   *
   * @param GLshort s
   * @return void
   */
  Handle<Value> glu_glTexCoord1s(const Arguments& args) {
    HandleScope scope;
    glTexCoord1s((GLshort) args[0]->Int32Value());
  }


  /**
   * glTexCoord2d
   *
   * @param GLdouble s
   * @param GLdouble t
   * @return void
   */
  Handle<Value> glu_glTexCoord2d(const Arguments& args) {
    HandleScope scope;
    glTexCoord2d(args[0]->NumberValue(), args[1]->NumberValue());
  }


  /**
   * glTexCoord2f
   *
   * @param GLfloat s
   * @param GLfloat t
   * @return void
   */
  Handle<Value> glu_glTexCoord2f(const Arguments& args) {
    HandleScope scope;
    glTexCoord2f(args[0]->NumberValue(), args[1]->NumberValue());
  }


  /**
   * glTexCoord2i
   *
   * @param GLint s
   * @param GLint t
   * @return void
   */
  Handle<Value> glu_glTexCoord2i(const Arguments& args) {
    HandleScope scope;
    glTexCoord2i((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value());
  }


  /**
   * glTexCoord2s
   *
   * @param GLshort s
   * @param GLshort t
   * @return void
   */
  Handle<Value> glu_glTexCoord2s(const Arguments& args) {
    HandleScope scope;
    glTexCoord2s((GLshort) args[0]->Int32Value(), (GLshort) args[1]->Int32Value());
  }


  /**
   * glTexCoord3d
   *
   * @param GLdouble s
   * @param GLdouble t
   * @param GLdouble r
   * @return void
   */
  Handle<Value> glu_glTexCoord3d(const Arguments& args) {
    HandleScope scope;
    glTexCoord3d(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glTexCoord3f
   *
   * @param GLfloat s
   * @param GLfloat t
   * @param GLfloat r
   * @return void
   */
  Handle<Value> glu_glTexCoord3f(const Arguments& args) {
    HandleScope scope;
    glTexCoord3f(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glTexCoord3i
   *
   * @param GLint s
   * @param GLint t
   * @param GLint r
   * @return void
   */
  Handle<Value> glu_glTexCoord3i(const Arguments& args) {
    HandleScope scope;
    glTexCoord3i((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value());
  }


  /**
   * glTexCoord3s
   *
   * @param GLshort s
   * @param GLshort t
   * @param GLshort r
   * @return void
   */
  Handle<Value> glu_glTexCoord3s(const Arguments& args) {
    HandleScope scope;
    glTexCoord3s((GLshort) args[0]->Int32Value(), (GLshort) args[1]->Int32Value(), (GLshort) args[2]->Int32Value());
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
  Handle<Value> glu_glTexCoord4d(const Arguments& args) {
    HandleScope scope;
    glTexCoord4d(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
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
  Handle<Value> glu_glTexCoord4f(const Arguments& args) {
    HandleScope scope;
    glTexCoord4f(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
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
  Handle<Value> glu_glTexCoord4i(const Arguments& args) {
    HandleScope scope;
    glTexCoord4i((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value());
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
  Handle<Value> glu_glTexCoord4s(const Arguments& args) {
    HandleScope scope;
    glTexCoord4s((GLshort) args[0]->Int32Value(), (GLshort) args[1]->Int32Value(), (GLshort) args[2]->Int32Value(), (GLshort) args[3]->Int32Value());
  }


  /**
   * glTexCoord1dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glTexCoord1dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glTexCoord1dv is not implemented!")));

  }


  /**
   * glTexCoord1fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glTexCoord1fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glTexCoord1fv is not implemented!")));

  }


  /**
   * glTexCoord1iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glTexCoord1iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glTexCoord1iv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glTexCoord1sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glTexCoord1sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glTexCoord1sv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glTexCoord2dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glTexCoord2dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glTexCoord2dv is not implemented!")));

  }


  /**
   * glTexCoord2fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glTexCoord2fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glTexCoord2fv is not implemented!")));

  }


  /**
   * glTexCoord2iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glTexCoord2iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glTexCoord2iv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glTexCoord2sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glTexCoord2sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glTexCoord2sv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glTexCoord3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glTexCoord3dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glTexCoord3dv is not implemented!")));

  }


  /**
   * glTexCoord3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glTexCoord3fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glTexCoord3fv is not implemented!")));

  }


  /**
   * glTexCoord3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glTexCoord3iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glTexCoord3iv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glTexCoord3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glTexCoord3sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glTexCoord3sv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glTexCoord4dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glTexCoord4dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glTexCoord4dv is not implemented!")));

  }


  /**
   * glTexCoord4fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glTexCoord4fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glTexCoord4fv is not implemented!")));

  }


  /**
   * glTexCoord4iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glTexCoord4iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glTexCoord4iv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glTexCoord4sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glTexCoord4sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
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
  Handle<Value> glu_glRasterPos2d(const Arguments& args) {
    HandleScope scope;
    glRasterPos2d(args[0]->NumberValue(), args[1]->NumberValue());
  }


  /**
   * glRasterPos2f
   *
   * @param GLfloat x
   * @param GLfloat y
   * @return void
   */
  Handle<Value> glu_glRasterPos2f(const Arguments& args) {
    HandleScope scope;
    glRasterPos2f(args[0]->NumberValue(), args[1]->NumberValue());
  }


  /**
   * glRasterPos2i
   *
   * @param GLint x
   * @param GLint y
   * @return void
   */
  Handle<Value> glu_glRasterPos2i(const Arguments& args) {
    HandleScope scope;
    glRasterPos2i((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value());
  }


  /**
   * glRasterPos2s
   *
   * @param GLshort x
   * @param GLshort y
   * @return void
   */
  Handle<Value> glu_glRasterPos2s(const Arguments& args) {
    HandleScope scope;
    glRasterPos2s((GLshort) args[0]->Int32Value(), (GLshort) args[1]->Int32Value());
  }


  /**
   * glRasterPos3d
   *
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @return void
   */
  Handle<Value> glu_glRasterPos3d(const Arguments& args) {
    HandleScope scope;
    glRasterPos3d(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glRasterPos3f
   *
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @return void
   */
  Handle<Value> glu_glRasterPos3f(const Arguments& args) {
    HandleScope scope;
    glRasterPos3f(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glRasterPos3i
   *
   * @param GLint x
   * @param GLint y
   * @param GLint z
   * @return void
   */
  Handle<Value> glu_glRasterPos3i(const Arguments& args) {
    HandleScope scope;
    glRasterPos3i((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value());
  }


  /**
   * glRasterPos3s
   *
   * @param GLshort x
   * @param GLshort y
   * @param GLshort z
   * @return void
   */
  Handle<Value> glu_glRasterPos3s(const Arguments& args) {
    HandleScope scope;
    glRasterPos3s((GLshort) args[0]->Int32Value(), (GLshort) args[1]->Int32Value(), (GLshort) args[2]->Int32Value());
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
  Handle<Value> glu_glRasterPos4d(const Arguments& args) {
    HandleScope scope;
    glRasterPos4d(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
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
  Handle<Value> glu_glRasterPos4f(const Arguments& args) {
    HandleScope scope;
    glRasterPos4f(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
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
  Handle<Value> glu_glRasterPos4i(const Arguments& args) {
    HandleScope scope;
    glRasterPos4i((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value());
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
  Handle<Value> glu_glRasterPos4s(const Arguments& args) {
    HandleScope scope;
    glRasterPos4s((GLshort) args[0]->Int32Value(), (GLshort) args[1]->Int32Value(), (GLshort) args[2]->Int32Value(), (GLshort) args[3]->Int32Value());
  }


  /**
   * glRasterPos2dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glRasterPos2dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glRasterPos2dv is not implemented!")));

  }


  /**
   * glRasterPos2fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glRasterPos2fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glRasterPos2fv is not implemented!")));

  }


  /**
   * glRasterPos2iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glRasterPos2iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glRasterPos2iv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glRasterPos2sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glRasterPos2sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glRasterPos2sv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glRasterPos3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glRasterPos3dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glRasterPos3dv is not implemented!")));

  }


  /**
   * glRasterPos3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glRasterPos3fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glRasterPos3fv is not implemented!")));

  }


  /**
   * glRasterPos3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glRasterPos3iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glRasterPos3iv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glRasterPos3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glRasterPos3sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
    glRasterPos3sv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glRasterPos4dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glRasterPos4dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glRasterPos4dv is not implemented!")));

  }


  /**
   * glRasterPos4fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glRasterPos4fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glRasterPos4fv is not implemented!")));

  }


  /**
   * glRasterPos4iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glRasterPos4iv(const Arguments& args) {
    HandleScope scope;
    const GLint _v = (GLint)args[0]->Int32Value();
    glRasterPos4iv(&_v);
    args[0] = Number::New(_v);

  }


  /**
   * glRasterPos4sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glRasterPos4sv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v = (GLshort)args[0]->Int32Value();
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
  Handle<Value> glu_glRectd(const Arguments& args) {
    HandleScope scope;
    glRectd(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
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
  Handle<Value> glu_glRectf(const Arguments& args) {
    HandleScope scope;
    glRectf(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
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
  Handle<Value> glu_glRecti(const Arguments& args) {
    HandleScope scope;
    glRecti((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value());
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
  Handle<Value> glu_glRects(const Arguments& args) {
    HandleScope scope;
    glRects((GLshort) args[0]->Int32Value(), (GLshort) args[1]->Int32Value(), (GLshort) args[2]->Int32Value(), (GLshort) args[3]->Int32Value());
  }


  /**
   * glRectdv
   *
   * @param const GLdouble *v1
   * @param const GLdouble *v2
   * @return void
   */
  Handle<Value> glu_glRectdv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glRectdv is not implemented!")));

  }


  /**
   * glRectfv
   *
   * @param const GLfloat *v1
   * @param const GLfloat *v2
   * @return void
   */
  Handle<Value> glu_glRectfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glRectfv is not implemented!")));

  }


  /**
   * glRectiv
   *
   * @param const GLint *v1
   * @param const GLint *v2
   * @return void
   */
  Handle<Value> glu_glRectiv(const Arguments& args) {
    HandleScope scope;
    const GLint _v1 = (GLint)args[0]->Int32Value();
    const GLint _v2 = (GLint)args[1]->Int32Value();
    glRectiv(&_v1, &_v2);
    args[0] = Number::New(_v1);

    args[1] = Number::New(_v2);

  }


  /**
   * glRectsv
   *
   * @param const GLshort *v1
   * @param const GLshort *v2
   * @return void
   */
  Handle<Value> glu_glRectsv(const Arguments& args) {
    HandleScope scope;
    const GLshort _v1 = (GLshort)args[0]->Int32Value();
    const GLshort _v2 = (GLshort)args[1]->Int32Value();
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
   * @param const GLvoid *ptr
   * @return void
   */
  Handle<Value> glu_glVertexPointer(const Arguments& args) {
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
    const GLvoid *_ptr = (GLvoid *)ptr_buffer->data();
    glVertexPointer(_size, _type, _stride, &_ptr);
  }


  /**
   * glNormalPointer
   *
   * @param GLenum type
   * @param GLsizei stride
   * @param const GLvoid *ptr
   * @return void
   */
  Handle<Value> glu_glNormalPointer(const Arguments& args) {
    HandleScope scope;
    GLenum _type = (GLenum)args[0]->Int32Value();
    GLsizei _stride = (GLsizei)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * ptr_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    const GLvoid *_ptr = (GLvoid *)ptr_buffer->data();
    glNormalPointer(_type, _stride, &_ptr);
  }


  /**
   * glColorPointer
   *
   * @param GLint size
   * @param GLenum type
   * @param GLsizei stride
   * @param const GLvoid *ptr
   * @return void
   */
  Handle<Value> glu_glColorPointer(const Arguments& args) {
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
    const GLvoid *_ptr = (GLvoid *)ptr_buffer->data();
    glColorPointer(_size, _type, _stride, &_ptr);
  }


  /**
   * glIndexPointer
   *
   * @param GLenum type
   * @param GLsizei stride
   * @param const GLvoid *ptr
   * @return void
   */
  Handle<Value> glu_glIndexPointer(const Arguments& args) {
    HandleScope scope;
    GLenum _type = (GLenum)args[0]->Int32Value();
    GLsizei _stride = (GLsizei)args[1]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[2])) {
        return ThrowException(Exception::Error(
                              String::New("2nth argument needs to be a buffer")));
    }
    Buffer * ptr_buffer = ObjectWrap::Unwrap<Buffer>(args[2]->ToObject());
    const GLvoid *_ptr = (GLvoid *)ptr_buffer->data();
    glIndexPointer(_type, _stride, &_ptr);
  }


  /**
   * glTexCoordPointer
   *
   * @param GLint size
   * @param GLenum type
   * @param GLsizei stride
   * @param const GLvoid *ptr
   * @return void
   */
  Handle<Value> glu_glTexCoordPointer(const Arguments& args) {
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
    const GLvoid *_ptr = (GLvoid *)ptr_buffer->data();
    glTexCoordPointer(_size, _type, _stride, &_ptr);
  }


  /**
   * glEdgeFlagPointer
   *
   * @param GLsizei stride
   * @param const GLvoid *ptr
   * @return void
   */
  Handle<Value> glu_glEdgeFlagPointer(const Arguments& args) {
    HandleScope scope;
    GLsizei _stride = (GLsizei)args[0]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[1])) {
        return ThrowException(Exception::Error(
                              String::New("1nth argument needs to be a buffer")));
    }
    Buffer * ptr_buffer = ObjectWrap::Unwrap<Buffer>(args[1]->ToObject());
    const GLvoid *_ptr = (GLvoid *)ptr_buffer->data();
    glEdgeFlagPointer(_stride, &_ptr);
  }


  /**
   * glGetPointerv
   *
   * @param GLenum pname
   * @param GLvoid **params
   * @return void
   */
  Handle<Value> glu_glGetPointerv(const Arguments& args) {
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
  Handle<Value> glu_glArrayElement(const Arguments& args) {
    HandleScope scope;
    glArrayElement((GLint) args[0]->Int32Value());
  }


  /**
   * glDrawArrays
   *
   * @param GLenum mode
   * @param GLint first
   * @param GLsizei count
   * @return void
   */
  Handle<Value> glu_glDrawArrays(const Arguments& args) {
    HandleScope scope;
    glDrawArrays((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLsizei) args[2]->Int32Value());
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
  Handle<Value> glu_glDrawElements(const Arguments& args) {
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
    glDrawElements(_mode, _count, _type, &_indices);
  }


  /**
   * glInterleavedArrays
   *
   * @param GLenum format
   * @param GLsizei stride
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> glu_glInterleavedArrays(const Arguments& args) {
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
    glInterleavedArrays(_format, _stride, &_pointer);
  }


  /**
   * glShadeModel
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glu_glShadeModel(const Arguments& args) {
    HandleScope scope;
    glShadeModel((GLenum) args[0]->Int32Value());
  }


  /**
   * glLightf
   *
   * @param GLenum light
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> glu_glLightf(const Arguments& args) {
    HandleScope scope;
    glLightf((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), args[2]->NumberValue());
  }


  /**
   * glLighti
   *
   * @param GLenum light
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glu_glLighti(const Arguments& args) {
    HandleScope scope;
    glLighti((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), (GLint) args[2]->Int32Value());
  }


  /**
   * glLightfv
   *
   * @param GLenum light
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glu_glLightfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glLightfv is not implemented!")));

  }


  /**
   * glLightiv
   *
   * @param GLenum light
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glu_glLightiv(const Arguments& args) {
    HandleScope scope;
    GLenum _light = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLint _params = (GLint)args[2]->Int32Value();
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
  Handle<Value> glu_glGetLightfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetLightfv is not implemented!")));

  }


  /**
   * glGetLightiv
   *
   * @param GLenum light
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glu_glGetLightiv(const Arguments& args) {
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
  Handle<Value> glu_glLightModelf(const Arguments& args) {
    HandleScope scope;
    glLightModelf((GLenum) args[0]->Int32Value(), args[1]->NumberValue());
  }


  /**
   * glLightModeli
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glu_glLightModeli(const Arguments& args) {
    HandleScope scope;
    glLightModeli((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value());
  }


  /**
   * glLightModelfv
   *
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glu_glLightModelfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glLightModelfv is not implemented!")));

  }


  /**
   * glLightModeliv
   *
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glu_glLightModeliv(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    const GLint _params = (GLint)args[1]->Int32Value();
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
  Handle<Value> glu_glMaterialf(const Arguments& args) {
    HandleScope scope;
    glMaterialf((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), args[2]->NumberValue());
  }


  /**
   * glMateriali
   *
   * @param GLenum face
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glu_glMateriali(const Arguments& args) {
    HandleScope scope;
    glMateriali((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), (GLint) args[2]->Int32Value());
  }


  /**
   * glMaterialfv
   *
   * @param GLenum face
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glu_glMaterialfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMaterialfv is not implemented!")));

  }


  /**
   * glMaterialiv
   *
   * @param GLenum face
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glu_glMaterialiv(const Arguments& args) {
    HandleScope scope;
    GLenum _face = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLint _params = (GLint)args[2]->Int32Value();
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
  Handle<Value> glu_glGetMaterialfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetMaterialfv is not implemented!")));

  }


  /**
   * glGetMaterialiv
   *
   * @param GLenum face
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glu_glGetMaterialiv(const Arguments& args) {
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
  Handle<Value> glu_glColorMaterial(const Arguments& args) {
    HandleScope scope;
    glColorMaterial((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value());
  }


  /**
   * glPixelZoom
   *
   * @param GLfloat xfactor
   * @param GLfloat yfactor
   * @return void
   */
  Handle<Value> glu_glPixelZoom(const Arguments& args) {
    HandleScope scope;
    glPixelZoom(args[0]->NumberValue(), args[1]->NumberValue());
  }


  /**
   * glPixelStoref
   *
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> glu_glPixelStoref(const Arguments& args) {
    HandleScope scope;
    glPixelStoref((GLenum) args[0]->Int32Value(), args[1]->NumberValue());
  }


  /**
   * glPixelStorei
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glu_glPixelStorei(const Arguments& args) {
    HandleScope scope;
    glPixelStorei((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value());
  }


  /**
   * glPixelTransferf
   *
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> glu_glPixelTransferf(const Arguments& args) {
    HandleScope scope;
    glPixelTransferf((GLenum) args[0]->Int32Value(), args[1]->NumberValue());
  }


  /**
   * glPixelTransferi
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glu_glPixelTransferi(const Arguments& args) {
    HandleScope scope;
    glPixelTransferi((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value());
  }


  /**
   * glPixelMapfv
   *
   * @param GLenum map
   * @param GLsizei mapsize
   * @param const GLfloat *values
   * @return void
   */
  Handle<Value> glu_glPixelMapfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glPixelMapfv is not implemented!")));

  }


  /**
   * glPixelMapuiv
   *
   * @param GLenum map
   * @param GLsizei mapsize
   * @param const GLuint *values
   * @return void
   */
  Handle<Value> glu_glPixelMapuiv(const Arguments& args) {
    HandleScope scope;
    GLenum _map = (GLenum)args[0]->Int32Value();
    GLsizei _mapsize = (GLsizei)args[1]->Int32Value();
    const GLuint _values = (GLuint)args[2]->Uint32Value();
    glPixelMapuiv(_map, _mapsize, &_values);
    args[2] = Number::New(_values);

  }


  /**
   * glPixelMapusv
   *
   * @param GLenum map
   * @param GLsizei mapsize
   * @param const GLushort *values
   * @return void
   */
  Handle<Value> glu_glPixelMapusv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glPixelMapusv is not implemented!")));

  }


  /**
   * glGetPixelMapfv
   *
   * @param GLenum map
   * @param GLfloat *values
   * @return void
   */
  Handle<Value> glu_glGetPixelMapfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetPixelMapfv is not implemented!")));

  }


  /**
   * glGetPixelMapuiv
   *
   * @param GLenum map
   * @param GLuint *values
   * @return void
   */
  Handle<Value> glu_glGetPixelMapuiv(const Arguments& args) {
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
  Handle<Value> glu_glGetPixelMapusv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetPixelMapusv is not implemented!")));

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
  Handle<Value> glu_glBitmap(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glBitmap is not implemented!")));

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
  Handle<Value> glu_glReadPixels(const Arguments& args) {
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
    glReadPixels(_x, _y, _width, _height, _format, _type, &_pixels);
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
  Handle<Value> glu_glDrawPixels(const Arguments& args) {
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
    glDrawPixels(_width, _height, _format, _type, &_pixels);
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
  Handle<Value> glu_glCopyPixels(const Arguments& args) {
    HandleScope scope;
    glCopyPixels((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLsizei) args[2]->Int32Value(), (GLsizei) args[3]->Int32Value(), (GLenum) args[4]->Int32Value());
  }


  /**
   * glStencilFunc
   *
   * @param GLenum func
   * @param GLint ref
   * @param GLuint mask
   * @return void
   */
  Handle<Value> glu_glStencilFunc(const Arguments& args) {
    HandleScope scope;
    glStencilFunc((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), args[2]->NumberValue());
  }


  /**
   * glStencilMask
   *
   * @param GLuint mask
   * @return void
   */
  Handle<Value> glu_glStencilMask(const Arguments& args) {
    HandleScope scope;
    glStencilMask(args[0]->NumberValue());
  }


  /**
   * glStencilOp
   *
   * @param GLenum fail
   * @param GLenum zfail
   * @param GLenum zpass
   * @return void
   */
  Handle<Value> glu_glStencilOp(const Arguments& args) {
    HandleScope scope;
    glStencilOp((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), (GLenum) args[2]->Int32Value());
  }


  /**
   * glClearStencil
   *
   * @param GLint s
   * @return void
   */
  Handle<Value> glu_glClearStencil(const Arguments& args) {
    HandleScope scope;
    glClearStencil((GLint) args[0]->Int32Value());
  }


  /**
   * glTexGend
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLdouble param
   * @return void
   */
  Handle<Value> glu_glTexGend(const Arguments& args) {
    HandleScope scope;
    glTexGend((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), args[2]->NumberValue());
  }


  /**
   * glTexGenf
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> glu_glTexGenf(const Arguments& args) {
    HandleScope scope;
    glTexGenf((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), args[2]->NumberValue());
  }


  /**
   * glTexGeni
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glu_glTexGeni(const Arguments& args) {
    HandleScope scope;
    glTexGeni((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), (GLint) args[2]->Int32Value());
  }


  /**
   * glTexGendv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param const GLdouble *params
   * @return void
   */
  Handle<Value> glu_glTexGendv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glTexGendv is not implemented!")));

  }


  /**
   * glTexGenfv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glu_glTexGenfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glTexGenfv is not implemented!")));

  }


  /**
   * glTexGeniv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glu_glTexGeniv(const Arguments& args) {
    HandleScope scope;
    GLenum _coord = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLint _params = (GLint)args[2]->Int32Value();
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
  Handle<Value> glu_glGetTexGendv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetTexGendv is not implemented!")));

  }


  /**
   * glGetTexGenfv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> glu_glGetTexGenfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetTexGenfv is not implemented!")));

  }


  /**
   * glGetTexGeniv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glu_glGetTexGeniv(const Arguments& args) {
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
  Handle<Value> glu_glTexEnvf(const Arguments& args) {
    HandleScope scope;
    glTexEnvf((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), args[2]->NumberValue());
  }


  /**
   * glTexEnvi
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glu_glTexEnvi(const Arguments& args) {
    HandleScope scope;
    glTexEnvi((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), (GLint) args[2]->Int32Value());
  }


  /**
   * glTexEnvfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glu_glTexEnvfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glTexEnvfv is not implemented!")));

  }


  /**
   * glTexEnviv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glu_glTexEnviv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLint _params = (GLint)args[2]->Int32Value();
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
  Handle<Value> glu_glGetTexEnvfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetTexEnvfv is not implemented!")));

  }


  /**
   * glGetTexEnviv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glu_glGetTexEnviv(const Arguments& args) {
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
  Handle<Value> glu_glTexParameterf(const Arguments& args) {
    HandleScope scope;
    glTexParameterf((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), args[2]->NumberValue());
  }


  /**
   * glTexParameteri
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glu_glTexParameteri(const Arguments& args) {
    HandleScope scope;
    glTexParameteri((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), (GLint) args[2]->Int32Value());
  }


  /**
   * glTexParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glu_glTexParameterfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glTexParameterfv is not implemented!")));

  }


  /**
   * glTexParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glu_glTexParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLint _params = (GLint)args[2]->Int32Value();
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
  Handle<Value> glu_glGetTexParameterfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetTexParameterfv is not implemented!")));

  }


  /**
   * glGetTexParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glu_glGetTexParameteriv(const Arguments& args) {
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
  Handle<Value> glu_glGetTexLevelParameterfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetTexLevelParameterfv is not implemented!")));

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
  Handle<Value> glu_glGetTexLevelParameteriv(const Arguments& args) {
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
   * @param const GLvoid *pixels
   * @return void
   */
  Handle<Value> glu_glTexImage1D(const Arguments& args) {
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
    const GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glTexImage1D(_target, _level, _internalFormat, _width, _border, _format, _type, &_pixels);
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
   * @param const GLvoid *pixels
   * @return void
   */
  Handle<Value> glu_glTexImage2D(const Arguments& args) {
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
    const GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glTexImage2D(_target, _level, _internalFormat, _width, _height, _border, _format, _type, &_pixels);
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
  Handle<Value> glu_glGetTexImage(const Arguments& args) {
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
    glGetTexImage(_target, _level, _format, _type, &_pixels);
  }


  /**
   * glGenTextures
   *
   * @param GLsizei n
   * @param GLuint *textures
   * @return void
   */
  Handle<Value> glu_glGenTextures(const Arguments& args) {
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
   * @param const GLuint *textures
   * @return void
   */
  Handle<Value> glu_glDeleteTextures(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    const GLuint _textures = (GLuint)args[1]->Uint32Value();
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
  Handle<Value> glu_glBindTexture(const Arguments& args) {
    HandleScope scope;
    glBindTexture((GLenum) args[0]->Int32Value(), args[1]->NumberValue());
  }


  /**
   * glPrioritizeTextures
   *
   * @param GLsizei n
   * @param const GLuint *textures
   * @param const GLclampf *priorities
   * @return void
   */
  Handle<Value> glu_glPrioritizeTextures(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glPrioritizeTextures is not implemented!")));

  }


  /**
   * glAreTexturesResident
   *
   * @param GLsizei n
   * @param const GLuint *textures
   * @param GLboolean *residences
   * @return GLboolean
   */
  Handle<Value> glu_glAreTexturesResident(const Arguments& args) {
    HandleScope scope;
    GLsizei _n = (GLsizei)args[0]->Int32Value();
    const GLuint _textures = (GLuint)args[1]->Uint32Value();
    GLboolean _residences = (GLboolean)args[2]->Int32Value();
    glAreTexturesResident(_n, &_textures, &_residences);
    args[1] = Number::New(_textures);

    args[2] = Number::New(_residences);

  }


  /**
   * glIsTexture
   *
   * @param GLuint texture
   * @return GLboolean
   */
  Handle<Value> glu_glIsTexture(const Arguments& args) {
    HandleScope scope;
    glIsTexture(args[0]->NumberValue());
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
  Handle<Value> glu_glTexSubImage1D(const Arguments& args) {
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
    glTexSubImage1D(_target, _level, _xoffset, _width, _format, _type, &_pixels);
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
  Handle<Value> glu_glTexSubImage2D(const Arguments& args) {
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
    glTexSubImage2D(_target, _level, _xoffset, _yoffset, _width, _height, _format, _type, &_pixels);
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
  Handle<Value> glu_glCopyTexImage1D(const Arguments& args) {
    HandleScope scope;
    glCopyTexImage1D((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLenum) args[2]->Int32Value(), (GLint) args[3]->Int32Value(), (GLint) args[4]->Int32Value(), (GLsizei) args[5]->Int32Value(), (GLint) args[6]->Int32Value());
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
  Handle<Value> glu_glCopyTexImage2D(const Arguments& args) {
    HandleScope scope;
    glCopyTexImage2D((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLenum) args[2]->Int32Value(), (GLint) args[3]->Int32Value(), (GLint) args[4]->Int32Value(), (GLsizei) args[5]->Int32Value(), (GLsizei) args[6]->Int32Value(), (GLint) args[7]->Int32Value());
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
  Handle<Value> glu_glCopyTexSubImage1D(const Arguments& args) {
    HandleScope scope;
    glCopyTexSubImage1D((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value(), (GLint) args[4]->Int32Value(), (GLsizei) args[5]->Int32Value());
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
  Handle<Value> glu_glCopyTexSubImage2D(const Arguments& args) {
    HandleScope scope;
    glCopyTexSubImage2D((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value(), (GLint) args[4]->Int32Value(), (GLint) args[5]->Int32Value(), (GLsizei) args[6]->Int32Value(), (GLsizei) args[7]->Int32Value());
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
  Handle<Value> glu_glMap1d(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMap1d is not implemented!")));

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
  Handle<Value> glu_glMap1f(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMap1f is not implemented!")));

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
  Handle<Value> glu_glMap2d(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMap2d is not implemented!")));

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
  Handle<Value> glu_glMap2f(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMap2f is not implemented!")));

  }


  /**
   * glGetMapdv
   *
   * @param GLenum target
   * @param GLenum query
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> glu_glGetMapdv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetMapdv is not implemented!")));

  }


  /**
   * glGetMapfv
   *
   * @param GLenum target
   * @param GLenum query
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> glu_glGetMapfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetMapfv is not implemented!")));

  }


  /**
   * glGetMapiv
   *
   * @param GLenum target
   * @param GLenum query
   * @param GLint *v
   * @return void
   */
  Handle<Value> glu_glGetMapiv(const Arguments& args) {
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
  Handle<Value> glu_glEvalCoord1d(const Arguments& args) {
    HandleScope scope;
    glEvalCoord1d(args[0]->NumberValue());
  }


  /**
   * glEvalCoord1f
   *
   * @param GLfloat u
   * @return void
   */
  Handle<Value> glu_glEvalCoord1f(const Arguments& args) {
    HandleScope scope;
    glEvalCoord1f(args[0]->NumberValue());
  }


  /**
   * glEvalCoord1dv
   *
   * @param const GLdouble *u
   * @return void
   */
  Handle<Value> glu_glEvalCoord1dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glEvalCoord1dv is not implemented!")));

  }


  /**
   * glEvalCoord1fv
   *
   * @param const GLfloat *u
   * @return void
   */
  Handle<Value> glu_glEvalCoord1fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glEvalCoord1fv is not implemented!")));

  }


  /**
   * glEvalCoord2d
   *
   * @param GLdouble u
   * @param GLdouble v
   * @return void
   */
  Handle<Value> glu_glEvalCoord2d(const Arguments& args) {
    HandleScope scope;
    glEvalCoord2d(args[0]->NumberValue(), args[1]->NumberValue());
  }


  /**
   * glEvalCoord2f
   *
   * @param GLfloat u
   * @param GLfloat v
   * @return void
   */
  Handle<Value> glu_glEvalCoord2f(const Arguments& args) {
    HandleScope scope;
    glEvalCoord2f(args[0]->NumberValue(), args[1]->NumberValue());
  }


  /**
   * glEvalCoord2dv
   *
   * @param const GLdouble *u
   * @return void
   */
  Handle<Value> glu_glEvalCoord2dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glEvalCoord2dv is not implemented!")));

  }


  /**
   * glEvalCoord2fv
   *
   * @param const GLfloat *u
   * @return void
   */
  Handle<Value> glu_glEvalCoord2fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glEvalCoord2fv is not implemented!")));

  }


  /**
   * glMapGrid1d
   *
   * @param GLint un
   * @param GLdouble u1
   * @param GLdouble u2
   * @return void
   */
  Handle<Value> glu_glMapGrid1d(const Arguments& args) {
    HandleScope scope;
    glMapGrid1d((GLint) args[0]->Int32Value(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glMapGrid1f
   *
   * @param GLint un
   * @param GLfloat u1
   * @param GLfloat u2
   * @return void
   */
  Handle<Value> glu_glMapGrid1f(const Arguments& args) {
    HandleScope scope;
    glMapGrid1f((GLint) args[0]->Int32Value(), args[1]->NumberValue(), args[2]->NumberValue());
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
  Handle<Value> glu_glMapGrid2d(const Arguments& args) {
    HandleScope scope;
    glMapGrid2d((GLint) args[0]->Int32Value(), args[1]->NumberValue(), args[2]->NumberValue(), (GLint) args[3]->Int32Value(), args[4]->NumberValue(), args[5]->NumberValue());
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
  Handle<Value> glu_glMapGrid2f(const Arguments& args) {
    HandleScope scope;
    glMapGrid2f((GLint) args[0]->Int32Value(), args[1]->NumberValue(), args[2]->NumberValue(), (GLint) args[3]->Int32Value(), args[4]->NumberValue(), args[5]->NumberValue());
  }


  /**
   * glEvalPoint1
   *
   * @param GLint i
   * @return void
   */
  Handle<Value> glu_glEvalPoint1(const Arguments& args) {
    HandleScope scope;
    glEvalPoint1((GLint) args[0]->Int32Value());
  }


  /**
   * glEvalPoint2
   *
   * @param GLint i
   * @param GLint j
   * @return void
   */
  Handle<Value> glu_glEvalPoint2(const Arguments& args) {
    HandleScope scope;
    glEvalPoint2((GLint) args[0]->Int32Value(), (GLint) args[1]->Int32Value());
  }


  /**
   * glEvalMesh1
   *
   * @param GLenum mode
   * @param GLint i1
   * @param GLint i2
   * @return void
   */
  Handle<Value> glu_glEvalMesh1(const Arguments& args) {
    HandleScope scope;
    glEvalMesh1((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value());
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
  Handle<Value> glu_glEvalMesh2(const Arguments& args) {
    HandleScope scope;
    glEvalMesh2((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value(), (GLint) args[4]->Int32Value());
  }


  /**
   * glFogf
   *
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> glu_glFogf(const Arguments& args) {
    HandleScope scope;
    glFogf((GLenum) args[0]->Int32Value(), args[1]->NumberValue());
  }


  /**
   * glFogi
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glu_glFogi(const Arguments& args) {
    HandleScope scope;
    glFogi((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value());
  }


  /**
   * glFogfv
   *
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glu_glFogfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glFogfv is not implemented!")));

  }


  /**
   * glFogiv
   *
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glu_glFogiv(const Arguments& args) {
    HandleScope scope;
    GLenum _pname = (GLenum)args[0]->Int32Value();
    const GLint _params = (GLint)args[1]->Int32Value();
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
  Handle<Value> glu_glFeedbackBuffer(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glFeedbackBuffer is not implemented!")));

  }


  /**
   * glPassThrough
   *
   * @param GLfloat token
   * @return void
   */
  Handle<Value> glu_glPassThrough(const Arguments& args) {
    HandleScope scope;
    glPassThrough(args[0]->NumberValue());
  }


  /**
   * glSelectBuffer
   *
   * @param GLsizei size
   * @param GLuint *buffer
   * @return void
   */
  Handle<Value> glu_glSelectBuffer(const Arguments& args) {
    HandleScope scope;
    GLsizei _size = (GLsizei)args[0]->Int32Value();
    GLuint _buffer = (GLuint)args[1]->Uint32Value();
    glSelectBuffer(_size, &_buffer);
    args[1] = Number::New(_buffer);

  }


  /**
   * @return void
   */
  Handle<Value> glu_glInitNames(const Arguments& args) {
    HandleScope scope;
    glInitNames();
  }


  /**
   * glLoadName
   *
   * @param GLuint name
   * @return void
   */
  Handle<Value> glu_glLoadName(const Arguments& args) {
    HandleScope scope;
    glLoadName(args[0]->NumberValue());
  }


  /**
   * glPushName
   *
   * @param GLuint name
   * @return void
   */
  Handle<Value> glu_glPushName(const Arguments& args) {
    HandleScope scope;
    glPushName(args[0]->NumberValue());
  }


  /**
   * @return void
   */
  Handle<Value> glu_glPopName(const Arguments& args) {
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
   * @param const GLvoid *indices
   * @return void
   */
  Handle<Value> glu_glDrawRangeElements(const Arguments& args) {
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
    glDrawRangeElements(_mode, _start, _end, _count, _type, &_indices);
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
   * @param const GLvoid *pixels
   * @return void
   */
  Handle<Value> glu_glTexImage3D(const Arguments& args) {
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
    const GLvoid *_pixels = (GLvoid *)pixels_buffer->data();
    glTexImage3D(_target, _level, _internalFormat, _width, _height, _depth, _border, _format, _type, &_pixels);
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
  Handle<Value> glu_glTexSubImage3D(const Arguments& args) {
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
    glTexSubImage3D(_target, _level, _xoffset, _yoffset, _zoffset, _width, _height, _depth, _format, _type, &_pixels);
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
  Handle<Value> glu_glCopyTexSubImage3D(const Arguments& args) {
    HandleScope scope;
    glCopyTexSubImage3D((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value(), (GLint) args[4]->Int32Value(), (GLint) args[5]->Int32Value(), (GLint) args[6]->Int32Value(), (GLsizei) args[7]->Int32Value(), (GLsizei) args[8]->Int32Value());
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
  Handle<Value> glu_glColorTable(const Arguments& args) {
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
    glColorTable(_target, _internalformat, _width, _format, _type, &_table);
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
  Handle<Value> glu_glColorSubTable(const Arguments& args) {
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
    glColorSubTable(_target, _start, _count, _format, _type, &_data);
  }


  /**
   * glColorTableParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glu_glColorTableParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLint _params = (GLint)args[2]->Int32Value();
    glColorTableParameteriv(_target, _pname, &_params);
    args[2] = Number::New(_params);

  }


  /**
   * glColorTableParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glu_glColorTableParameterfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glColorTableParameterfv is not implemented!")));

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
  Handle<Value> glu_glCopyColorSubTable(const Arguments& args) {
    HandleScope scope;
    glCopyColorSubTable((GLenum) args[0]->Int32Value(), (GLsizei) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value(), (GLsizei) args[4]->Int32Value());
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
  Handle<Value> glu_glCopyColorTable(const Arguments& args) {
    HandleScope scope;
    glCopyColorTable((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value(), (GLsizei) args[4]->Int32Value());
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
  Handle<Value> glu_glGetColorTable(const Arguments& args) {
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
    glGetColorTable(_target, _format, _type, &_table);
  }


  /**
   * glGetColorTableParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> glu_glGetColorTableParameterfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetColorTableParameterfv is not implemented!")));

  }


  /**
   * glGetColorTableParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glu_glGetColorTableParameteriv(const Arguments& args) {
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
  Handle<Value> glu_glBlendEquation(const Arguments& args) {
    HandleScope scope;
    glBlendEquation((GLenum) args[0]->Int32Value());
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
  Handle<Value> glu_glBlendColor(const Arguments& args) {
    HandleScope scope;
    glBlendColor(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
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
  Handle<Value> glu_glHistogram(const Arguments& args) {
    HandleScope scope;
    glHistogram((GLenum) args[0]->Int32Value(), (GLsizei) args[1]->Int32Value(), (GLenum) args[2]->Int32Value(), args[3]->NumberValue());
  }


  /**
   * glResetHistogram
   *
   * @param GLenum target
   * @return void
   */
  Handle<Value> glu_glResetHistogram(const Arguments& args) {
    HandleScope scope;
    glResetHistogram((GLenum) args[0]->Int32Value());
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
  Handle<Value> glu_glGetHistogram(const Arguments& args) {
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
    glGetHistogram(_target, _reset, _format, _type, &_values);
  }


  /**
   * glGetHistogramParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> glu_glGetHistogramParameterfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetHistogramParameterfv is not implemented!")));

  }


  /**
   * glGetHistogramParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glu_glGetHistogramParameteriv(const Arguments& args) {
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
  Handle<Value> glu_glMinmax(const Arguments& args) {
    HandleScope scope;
    glMinmax((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), args[2]->NumberValue());
  }


  /**
   * glResetMinmax
   *
   * @param GLenum target
   * @return void
   */
  Handle<Value> glu_glResetMinmax(const Arguments& args) {
    HandleScope scope;
    glResetMinmax((GLenum) args[0]->Int32Value());
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
  Handle<Value> glu_glGetMinmax(const Arguments& args) {
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
    glGetMinmax(_target, _reset, _format, _types, &_values);
  }


  /**
   * glGetMinmaxParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> glu_glGetMinmaxParameterfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetMinmaxParameterfv is not implemented!")));

  }


  /**
   * glGetMinmaxParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glu_glGetMinmaxParameteriv(const Arguments& args) {
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
   * @param const GLvoid *image
   * @return void
   */
  Handle<Value> glu_glConvolutionFilter1D(const Arguments& args) {
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
    glConvolutionFilter1D(_target, _internalformat, _width, _format, _type, &_image);
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
  Handle<Value> glu_glConvolutionFilter2D(const Arguments& args) {
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
    glConvolutionFilter2D(_target, _internalformat, _width, _height, _format, _type, &_image);
  }


  /**
   * glConvolutionParameterf
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat params
   * @return void
   */
  Handle<Value> glu_glConvolutionParameterf(const Arguments& args) {
    HandleScope scope;
    glConvolutionParameterf((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), args[2]->NumberValue());
  }


  /**
   * glConvolutionParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glu_glConvolutionParameterfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glConvolutionParameterfv is not implemented!")));

  }


  /**
   * glConvolutionParameteri
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint params
   * @return void
   */
  Handle<Value> glu_glConvolutionParameteri(const Arguments& args) {
    HandleScope scope;
    glConvolutionParameteri((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), (GLint) args[2]->Int32Value());
  }


  /**
   * glConvolutionParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glu_glConvolutionParameteriv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLenum _pname = (GLenum)args[1]->Int32Value();
    const GLint _params = (GLint)args[2]->Int32Value();
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
  Handle<Value> glu_glCopyConvolutionFilter1D(const Arguments& args) {
    HandleScope scope;
    glCopyConvolutionFilter1D((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value(), (GLsizei) args[4]->Int32Value());
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
  Handle<Value> glu_glCopyConvolutionFilter2D(const Arguments& args) {
    HandleScope scope;
    glCopyConvolutionFilter2D((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value(), (GLsizei) args[4]->Int32Value(), (GLsizei) args[5]->Int32Value());
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
  Handle<Value> glu_glGetConvolutionFilter(const Arguments& args) {
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
    glGetConvolutionFilter(_target, _format, _type, &_image);
  }


  /**
   * glGetConvolutionParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> glu_glGetConvolutionParameterfv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetConvolutionParameterfv is not implemented!")));

  }


  /**
   * glGetConvolutionParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glu_glGetConvolutionParameteriv(const Arguments& args) {
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
   * @param const GLvoid *row
   * @param const GLvoid *column
   * @return void
   */
  Handle<Value> glu_glSeparableFilter2D(const Arguments& args) {
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
    glSeparableFilter2D(_target, _internalformat, _width, _height, _format, _type, &_row, &_column);
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
  Handle<Value> glu_glGetSeparableFilter(const Arguments& args) {
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
    glGetSeparableFilter(_target, _format, _type, &_row, &_column, &_span);
  }


  /**
   * glActiveTexture
   *
   * @param GLenum texture
   * @return void
   */
  Handle<Value> glu_glActiveTexture(const Arguments& args) {
    HandleScope scope;
    glActiveTexture((GLenum) args[0]->Int32Value());
  }


  /**
   * glClientActiveTexture
   *
   * @param GLenum texture
   * @return void
   */
  Handle<Value> glu_glClientActiveTexture(const Arguments& args) {
    HandleScope scope;
    glClientActiveTexture((GLenum) args[0]->Int32Value());
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
  Handle<Value> glu_glCompressedTexImage1D(const Arguments& args) {
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
    glCompressedTexImage1D(_target, _level, _internalformat, _width, _border, _imageSize, &_data);
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
  Handle<Value> glu_glCompressedTexImage2D(const Arguments& args) {
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
    glCompressedTexImage2D(_target, _level, _internalformat, _width, _height, _border, _imageSize, &_data);
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
  Handle<Value> glu_glCompressedTexImage3D(const Arguments& args) {
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
    glCompressedTexImage3D(_target, _level, _internalformat, _width, _height, _depth, _border, _imageSize, &_data);
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
  Handle<Value> glu_glCompressedTexSubImage1D(const Arguments& args) {
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
    glCompressedTexSubImage1D(_target, _level, _xoffset, _width, _format, _imageSize, &_data);
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
  Handle<Value> glu_glCompressedTexSubImage2D(const Arguments& args) {
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
    glCompressedTexSubImage2D(_target, _level, _xoffset, _yoffset, _width, _height, _format, _imageSize, &_data);
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
  Handle<Value> glu_glCompressedTexSubImage3D(const Arguments& args) {
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
    glCompressedTexSubImage3D(_target, _level, _xoffset, _yoffset, _zoffset, _width, _height, _depth, _format, _imageSize, &_data);
  }


  /**
   * glGetCompressedTexImage
   *
   * @param GLenum target
   * @param GLint lod
   * @param GLvoid *img
   * @return void
   */
  Handle<Value> glu_glGetCompressedTexImage(const Arguments& args) {
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
    glGetCompressedTexImage(_target, _lod, &_img);
  }


  /**
   * glMultiTexCoord1d
   *
   * @param GLenum target
   * @param GLdouble s
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord1d(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord1d((GLenum) args[0]->Int32Value(), args[1]->NumberValue());
  }


  /**
   * glMultiTexCoord1dv
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord1dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultiTexCoord1dv is not implemented!")));

  }


  /**
   * glMultiTexCoord1f
   *
   * @param GLenum target
   * @param GLfloat s
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord1f(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord1f((GLenum) args[0]->Int32Value(), args[1]->NumberValue());
  }


  /**
   * glMultiTexCoord1fv
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord1fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultiTexCoord1fv is not implemented!")));

  }


  /**
   * glMultiTexCoord1i
   *
   * @param GLenum target
   * @param GLint s
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord1i(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord1i((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value());
  }


  /**
   * glMultiTexCoord1iv
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord1iv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
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
  Handle<Value> glu_glMultiTexCoord1s(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord1s((GLenum) args[0]->Int32Value(), (GLshort) args[1]->Int32Value());
  }


  /**
   * glMultiTexCoord1sv
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord1sv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
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
  Handle<Value> glu_glMultiTexCoord2d(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord2d((GLenum) args[0]->Int32Value(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glMultiTexCoord2dv
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord2dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultiTexCoord2dv is not implemented!")));

  }


  /**
   * glMultiTexCoord2f
   *
   * @param GLenum target
   * @param GLfloat s
   * @param GLfloat t
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord2f(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord2f((GLenum) args[0]->Int32Value(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glMultiTexCoord2fv
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord2fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultiTexCoord2fv is not implemented!")));

  }


  /**
   * glMultiTexCoord2i
   *
   * @param GLenum target
   * @param GLint s
   * @param GLint t
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord2i(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord2i((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value());
  }


  /**
   * glMultiTexCoord2iv
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord2iv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
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
  Handle<Value> glu_glMultiTexCoord2s(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord2s((GLenum) args[0]->Int32Value(), (GLshort) args[1]->Int32Value(), (GLshort) args[2]->Int32Value());
  }


  /**
   * glMultiTexCoord2sv
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord2sv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
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
  Handle<Value> glu_glMultiTexCoord3d(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord3d((GLenum) args[0]->Int32Value(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
  }


  /**
   * glMultiTexCoord3dv
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord3dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultiTexCoord3dv is not implemented!")));

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
  Handle<Value> glu_glMultiTexCoord3f(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord3f((GLenum) args[0]->Int32Value(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
  }


  /**
   * glMultiTexCoord3fv
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord3fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultiTexCoord3fv is not implemented!")));

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
  Handle<Value> glu_glMultiTexCoord3i(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord3i((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value());
  }


  /**
   * glMultiTexCoord3iv
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord3iv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
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
  Handle<Value> glu_glMultiTexCoord3s(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord3s((GLenum) args[0]->Int32Value(), (GLshort) args[1]->Int32Value(), (GLshort) args[2]->Int32Value(), (GLshort) args[3]->Int32Value());
  }


  /**
   * glMultiTexCoord3sv
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord3sv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
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
  Handle<Value> glu_glMultiTexCoord4d(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord4d((GLenum) args[0]->Int32Value(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue(), args[4]->NumberValue());
  }


  /**
   * glMultiTexCoord4dv
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord4dv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultiTexCoord4dv is not implemented!")));

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
  Handle<Value> glu_glMultiTexCoord4f(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord4f((GLenum) args[0]->Int32Value(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue(), args[4]->NumberValue());
  }


  /**
   * glMultiTexCoord4fv
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord4fv(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultiTexCoord4fv is not implemented!")));

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
  Handle<Value> glu_glMultiTexCoord4i(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord4i((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value(), (GLint) args[4]->Int32Value());
  }


  /**
   * glMultiTexCoord4iv
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord4iv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
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
  Handle<Value> glu_glMultiTexCoord4s(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord4s((GLenum) args[0]->Int32Value(), (GLshort) args[1]->Int32Value(), (GLshort) args[2]->Int32Value(), (GLshort) args[3]->Int32Value(), (GLshort) args[4]->Int32Value());
  }


  /**
   * glMultiTexCoord4sv
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord4sv(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glMultiTexCoord4sv(_target, &_v);
    args[1] = Number::New(_v);

  }


  /**
   * glLoadTransposeMatrixd
   *
   * @param const GLdouble m[16]
   * @return void
   */
  Handle<Value> glu_glLoadTransposeMatrixd(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glLoadTransposeMatrixd is not implemented!")));

  }


  /**
   * glLoadTransposeMatrixf
   *
   * @param const GLfloat m[16]
   * @return void
   */
  Handle<Value> glu_glLoadTransposeMatrixf(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glLoadTransposeMatrixf is not implemented!")));

  }


  /**
   * glMultTransposeMatrixd
   *
   * @param const GLdouble m[16]
   * @return void
   */
  Handle<Value> glu_glMultTransposeMatrixd(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultTransposeMatrixd is not implemented!")));

  }


  /**
   * glMultTransposeMatrixf
   *
   * @param const GLfloat m[16]
   * @return void
   */
  Handle<Value> glu_glMultTransposeMatrixf(const Arguments& args) {
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
  Handle<Value> glu_glSampleCoverage(const Arguments& args) {
    HandleScope scope;
    glSampleCoverage(args[0]->NumberValue(), args[1]->NumberValue());
  }


  /**
   * glActiveTextureARB
   *
   * @param GLenum texture
   * @return void
   */
  Handle<Value> glu_glActiveTextureARB(const Arguments& args) {
    HandleScope scope;
    glActiveTextureARB((GLenum) args[0]->Int32Value());
  }


  /**
   * glClientActiveTextureARB
   *
   * @param GLenum texture
   * @return void
   */
  Handle<Value> glu_glClientActiveTextureARB(const Arguments& args) {
    HandleScope scope;
    glClientActiveTextureARB((GLenum) args[0]->Int32Value());
  }


  /**
   * glMultiTexCoord1dARB
   *
   * @param GLenum target
   * @param GLdouble s
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord1dARB(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord1dARB((GLenum) args[0]->Int32Value(), args[1]->NumberValue());
  }


  /**
   * glMultiTexCoord1dvARB
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord1dvARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultiTexCoord1dvARB is not implemented!")));

  }


  /**
   * glMultiTexCoord1fARB
   *
   * @param GLenum target
   * @param GLfloat s
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord1fARB(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord1fARB((GLenum) args[0]->Int32Value(), args[1]->NumberValue());
  }


  /**
   * glMultiTexCoord1fvARB
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord1fvARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultiTexCoord1fvARB is not implemented!")));

  }


  /**
   * glMultiTexCoord1iARB
   *
   * @param GLenum target
   * @param GLint s
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord1iARB(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord1iARB((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value());
  }


  /**
   * glMultiTexCoord1ivARB
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord1ivARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
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
  Handle<Value> glu_glMultiTexCoord1sARB(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord1sARB((GLenum) args[0]->Int32Value(), (GLshort) args[1]->Int32Value());
  }


  /**
   * glMultiTexCoord1svARB
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord1svARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
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
  Handle<Value> glu_glMultiTexCoord2dARB(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord2dARB((GLenum) args[0]->Int32Value(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glMultiTexCoord2dvARB
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord2dvARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultiTexCoord2dvARB is not implemented!")));

  }


  /**
   * glMultiTexCoord2fARB
   *
   * @param GLenum target
   * @param GLfloat s
   * @param GLfloat t
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord2fARB(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord2fARB((GLenum) args[0]->Int32Value(), args[1]->NumberValue(), args[2]->NumberValue());
  }


  /**
   * glMultiTexCoord2fvARB
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord2fvARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultiTexCoord2fvARB is not implemented!")));

  }


  /**
   * glMultiTexCoord2iARB
   *
   * @param GLenum target
   * @param GLint s
   * @param GLint t
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord2iARB(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord2iARB((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value());
  }


  /**
   * glMultiTexCoord2ivARB
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord2ivARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
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
  Handle<Value> glu_glMultiTexCoord2sARB(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord2sARB((GLenum) args[0]->Int32Value(), (GLshort) args[1]->Int32Value(), (GLshort) args[2]->Int32Value());
  }


  /**
   * glMultiTexCoord2svARB
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord2svARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
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
  Handle<Value> glu_glMultiTexCoord3dARB(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord3dARB((GLenum) args[0]->Int32Value(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
  }


  /**
   * glMultiTexCoord3dvARB
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord3dvARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultiTexCoord3dvARB is not implemented!")));

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
  Handle<Value> glu_glMultiTexCoord3fARB(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord3fARB((GLenum) args[0]->Int32Value(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
  }


  /**
   * glMultiTexCoord3fvARB
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord3fvARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultiTexCoord3fvARB is not implemented!")));

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
  Handle<Value> glu_glMultiTexCoord3iARB(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord3iARB((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value());
  }


  /**
   * glMultiTexCoord3ivARB
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord3ivARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
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
  Handle<Value> glu_glMultiTexCoord3sARB(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord3sARB((GLenum) args[0]->Int32Value(), (GLshort) args[1]->Int32Value(), (GLshort) args[2]->Int32Value(), (GLshort) args[3]->Int32Value());
  }


  /**
   * glMultiTexCoord3svARB
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord3svARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
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
  Handle<Value> glu_glMultiTexCoord4dARB(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord4dARB((GLenum) args[0]->Int32Value(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue(), args[4]->NumberValue());
  }


  /**
   * glMultiTexCoord4dvARB
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord4dvARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultiTexCoord4dvARB is not implemented!")));

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
  Handle<Value> glu_glMultiTexCoord4fARB(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord4fARB((GLenum) args[0]->Int32Value(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue(), args[4]->NumberValue());
  }


  /**
   * glMultiTexCoord4fvARB
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord4fvARB(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glMultiTexCoord4fvARB is not implemented!")));

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
  Handle<Value> glu_glMultiTexCoord4iARB(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord4iARB((GLenum) args[0]->Int32Value(), (GLint) args[1]->Int32Value(), (GLint) args[2]->Int32Value(), (GLint) args[3]->Int32Value(), (GLint) args[4]->Int32Value());
  }


  /**
   * glMultiTexCoord4ivARB
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord4ivARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLint _v = (GLint)args[1]->Int32Value();
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
  Handle<Value> glu_glMultiTexCoord4sARB(const Arguments& args) {
    HandleScope scope;
    glMultiTexCoord4sARB((GLenum) args[0]->Int32Value(), (GLshort) args[1]->Int32Value(), (GLshort) args[2]->Int32Value(), (GLshort) args[3]->Int32Value(), (GLshort) args[4]->Int32Value());
  }


  /**
   * glMultiTexCoord4svARB
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glu_glMultiTexCoord4svARB(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    const GLshort _v = (GLshort)args[1]->Int32Value();
    glMultiTexCoord4svARB(_target, &_v);
    args[1] = Number::New(_v);

  }


  /**
   * imaxabs
   *
   * @param intmax_t __n
   * @return intmax_t
   */
  Handle<Value> glu_imaxabs(const Arguments& args) {
    HandleScope scope;
    imaxabs(args[0]->NumberValue());
  }


  /**
   * imaxdiv
   *
   * @param intmax_t __numer
   * @param intmax_t __denom
   * @return imaxdiv_t
   */
  Handle<Value> glu_imaxdiv(const Arguments& args) {
    HandleScope scope;
    imaxdiv(args[0]->NumberValue(), args[1]->NumberValue());
  }


  /**
   * strtoimax
   *
   * @param __const char *__restrict __nptr
   * @param char **__restrict __endptr
   * @param int __base
   * @return intmax_t
   */
  Handle<Value> glu_strtoimax(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("strtoimax is not implemented!")));

  }


  /**
   * strtoumax
   *
   * @param __const char *__restrict __nptr
   * @param char ** __restrict __endptr
   * @param int __base
   * @return uintmax_t
   */
  Handle<Value> glu_strtoumax(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("strtoumax is not implemented!")));

  }


  /**
   * wcstoimax
   *
   * @param __const __gwchar_t *__restrict __nptr
   * @param __gwchar_t **__restrict __endptr
   * @param int __base
   * @return intmax_t
   */
  Handle<Value> glu_wcstoimax(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("wcstoimax is not implemented!")));

  }


  /**
   * wcstoumax
   *
   * @param __const __gwchar_t *__restrict __nptr
   * @param __gwchar_t ** __restrict __endptr
   * @param int __base
   * @return uintmax_t
   */
  Handle<Value> glu_wcstoumax(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("wcstoumax is not implemented!")));

  }


  /**
   * @return GLhandleARB
   */
  Handle<Value> glu_glCreateDebugObjectMESA(const Arguments& args) {
    HandleScope scope;
    glCreateDebugObjectMESA();
  }


  /**
   * glClearDebugLogMESA
   *
   * @param GLhandleARB obj
   * @param GLenum logType
   * @param GLenum shaderType
   * @return void
   */
  Handle<Value> glu_glClearDebugLogMESA(const Arguments& args) {
    HandleScope scope;
    glClearDebugLogMESA(args[0]->NumberValue(), (GLenum) args[1]->Int32Value(), (GLenum) args[2]->Int32Value());
  }


  /**
   * glGetDebugLogMESA
   *
   * @param GLhandleARB obj
   * @param GLenum logType
   * @param GLenum shaderType
   * @param GLsizei maxLength
   * @param GLsizei *length
   * @param GLcharARB *debugLog
   * @return void
   */
  Handle<Value> glu_glGetDebugLogMESA(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetDebugLogMESA is not implemented!")));

  }


  /**
   * glGetDebugLogLengthMESA
   *
   * @param GLhandleARB obj
   * @param GLenum logType
   * @param GLenum shaderType
   * @return GLsizei
   */
  Handle<Value> glu_glGetDebugLogLengthMESA(const Arguments& args) {
    HandleScope scope;
    glGetDebugLogLengthMESA(args[0]->NumberValue(), (GLenum) args[1]->Int32Value(), (GLenum) args[2]->Int32Value());
  }


  /**
   * glProgramCallbackMESA
   *
   * @param GLenum target
   * @param GLprogramcallbackMESA callback
   * @param GLvoid *data
   * @return void
   */
  Handle<Value> glu_glProgramCallbackMESA(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glProgramCallbackMESA is not implemented!")));

  }


  /**
   * glGetProgramRegisterfvMESA
   *
   * @param GLenum target
   * @param GLsizei len
   * @param const GLubyte *name
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> glu_glGetProgramRegisterfvMESA(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("glGetProgramRegisterfvMESA is not implemented!")));

  }


  /**
   * glBlendEquationSeparateATI
   *
   * @param GLenum modeRGB
   * @param GLenum modeA
   * @return void
   */
  Handle<Value> glu_glBlendEquationSeparateATI(const Arguments& args) {
    HandleScope scope;
    glBlendEquationSeparateATI((GLenum) args[0]->Int32Value(), (GLenum) args[1]->Int32Value());
  }


  /**
   * gluBeginCurve
   *
   * @param GLUnurbs* nurb
   * @return void
   */
  Handle<Value> glu_gluBeginCurve(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluBeginCurve is not implemented!")));

  }


  /**
   * gluBeginPolygon
   *
   * @param GLUtesselator* tess
   * @return void
   */
  Handle<Value> glu_gluBeginPolygon(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluBeginPolygon is not implemented!")));

  }


  /**
   * gluBeginSurface
   *
   * @param GLUnurbs* nurb
   * @return void
   */
  Handle<Value> glu_gluBeginSurface(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluBeginSurface is not implemented!")));

  }


  /**
   * gluBeginTrim
   *
   * @param GLUnurbs* nurb
   * @return void
   */
  Handle<Value> glu_gluBeginTrim(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluBeginTrim is not implemented!")));

  }


  /**
   * gluBuild1DMipmapLevels
   *
   * @param GLenum target
   * @param GLint internalFormat
   * @param GLsizei width
   * @param GLenum format
   * @param GLenum type
   * @param GLint level
   * @param GLint base
   * @param GLint max
   * @param const void *data
   * @return GLint
   */
  Handle<Value> glu_gluBuild1DMipmapLevels(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluBuild1DMipmapLevels is not implemented!")));

  }


  /**
   * gluBuild1DMipmaps
   *
   * @param GLenum target
   * @param GLint internalFormat
   * @param GLsizei width
   * @param GLenum format
   * @param GLenum type
   * @param const void *data
   * @return GLint
   */
  Handle<Value> glu_gluBuild1DMipmaps(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluBuild1DMipmaps is not implemented!")));

  }


  /**
   * gluBuild2DMipmapLevels
   *
   * @param GLenum target
   * @param GLint internalFormat
   * @param GLsizei width
   * @param GLsizei height
   * @param GLenum format
   * @param GLenum type
   * @param GLint level
   * @param GLint base
   * @param GLint max
   * @param const void *data
   * @return GLint
   */
  Handle<Value> glu_gluBuild2DMipmapLevels(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluBuild2DMipmapLevels is not implemented!")));

  }


  /**
   * gluBuild2DMipmaps
   *
   * @param GLenum target
   * @param GLint internalFormat
   * @param GLsizei width
   * @param GLsizei height
   * @param GLenum format
   * @param GLenum type
   * @param const void *data
   * @return GLint
   */
  Handle<Value> glu_gluBuild2DMipmaps(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluBuild2DMipmaps is not implemented!")));

  }


  /**
   * gluBuild3DMipmapLevels
   *
   * @param GLenum target
   * @param GLint internalFormat
   * @param GLsizei width
   * @param GLsizei height
   * @param GLsizei depth
   * @param GLenum format
   * @param GLenum type
   * @param GLint level
   * @param GLint base
   * @param GLint max
   * @param const void *data
   * @return GLint
   */
  Handle<Value> glu_gluBuild3DMipmapLevels(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluBuild3DMipmapLevels is not implemented!")));

  }


  /**
   * gluBuild3DMipmaps
   *
   * @param GLenum target
   * @param GLint internalFormat
   * @param GLsizei width
   * @param GLsizei height
   * @param GLsizei depth
   * @param GLenum format
   * @param GLenum type
   * @param const void *data
   * @return GLint
   */
  Handle<Value> glu_gluBuild3DMipmaps(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluBuild3DMipmaps is not implemented!")));

  }


  /**
   * gluCheckExtension
   *
   * @param const GLubyte *extName
   * @param const GLubyte *extString
   * @return GLboolean
   */
  Handle<Value> glu_gluCheckExtension(const Arguments& args) {
    HandleScope scope;
    const GLubyte _extName = (GLubyte)args[0]->Int32Value();
    const GLubyte _extString = (GLubyte)args[1]->Int32Value();
    gluCheckExtension(&_extName, &_extString);
    args[0] = Number::New(_extName);

    args[1] = Number::New(_extString);

  }


  /**
   * gluCylinder
   *
   * @param GLUquadric* quad
   * @param GLdouble base
   * @param GLdouble top
   * @param GLdouble height
   * @param GLint slices
   * @param GLint stacks
   * @return void
   */
  Handle<Value> glu_gluCylinder(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluCylinder is not implemented!")));

  }


  /**
   * gluDeleteNurbsRenderer
   *
   * @param GLUnurbs* nurb
   * @return void
   */
  Handle<Value> glu_gluDeleteNurbsRenderer(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluDeleteNurbsRenderer is not implemented!")));

  }


  /**
   * gluDeleteQuadric
   *
   * @param GLUquadric* quad
   * @return void
   */
  Handle<Value> glu_gluDeleteQuadric(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluDeleteQuadric is not implemented!")));

  }


  /**
   * gluDeleteTess
   *
   * @param GLUtesselator* tess
   * @return void
   */
  Handle<Value> glu_gluDeleteTess(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluDeleteTess is not implemented!")));

  }


  /**
   * gluDisk
   *
   * @param GLUquadric* quad
   * @param GLdouble inner
   * @param GLdouble outer
   * @param GLint slices
   * @param GLint loops
   * @return void
   */
  Handle<Value> glu_gluDisk(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluDisk is not implemented!")));

  }


  /**
   * gluEndCurve
   *
   * @param GLUnurbs* nurb
   * @return void
   */
  Handle<Value> glu_gluEndCurve(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluEndCurve is not implemented!")));

  }


  /**
   * gluEndPolygon
   *
   * @param GLUtesselator* tess
   * @return void
   */
  Handle<Value> glu_gluEndPolygon(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluEndPolygon is not implemented!")));

  }


  /**
   * gluEndSurface
   *
   * @param GLUnurbs* nurb
   * @return void
   */
  Handle<Value> glu_gluEndSurface(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluEndSurface is not implemented!")));

  }


  /**
   * gluEndTrim
   *
   * @param GLUnurbs* nurb
   * @return void
   */
  Handle<Value> glu_gluEndTrim(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluEndTrim is not implemented!")));

  }


  /**
   * gluGetNurbsProperty
   *
   * @param GLUnurbs* nurb
   * @param GLenum property
   * @param GLfloat* data
   * @return void
   */
  Handle<Value> glu_gluGetNurbsProperty(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluGetNurbsProperty is not implemented!")));

  }


  /**
   * gluGetTessProperty
   *
   * @param GLUtesselator* tess
   * @param GLenum which
   * @param GLdouble* data
   * @return void
   */
  Handle<Value> glu_gluGetTessProperty(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluGetTessProperty is not implemented!")));

  }


  /**
   * gluLoadSamplingMatrices
   *
   * @param GLUnurbs* nurb
   * @param const GLfloat *model
   * @param const GLfloat *perspective
   * @param const GLint *view
   * @return void
   */
  Handle<Value> glu_gluLoadSamplingMatrices(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluLoadSamplingMatrices is not implemented!")));

  }


  /**
   * gluLookAt
   *
   * @param GLdouble eyeX
   * @param GLdouble eyeY
   * @param GLdouble eyeZ
   * @param GLdouble centerX
   * @param GLdouble centerY
   * @param GLdouble centerZ
   * @param GLdouble upX
   * @param GLdouble upY
   * @param GLdouble upZ
   * @return void
   */
  Handle<Value> glu_gluLookAt(const Arguments& args) {
    HandleScope scope;
    gluLookAt(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue(), args[4]->NumberValue(), args[5]->NumberValue(), args[6]->NumberValue(), args[7]->NumberValue(), args[8]->NumberValue());
  }


  /**
   * gluNextContour
   *
   * @param GLUtesselator* tess
   * @param GLenum type
   * @return void
   */
  Handle<Value> glu_gluNextContour(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluNextContour is not implemented!")));

  }


  /**
   * gluNurbsCallback
   *
   * @param GLUnurbs* nurb
   * @param GLenum which
   * @param _GLUfuncptr CallBackFunc
   * @return void
   */
  Handle<Value> glu_gluNurbsCallback(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluNurbsCallback is not implemented!")));

  }


  /**
   * gluNurbsCallbackData
   *
   * @param GLUnurbs* nurb
   * @param GLvoid* userData
   * @return void
   */
  Handle<Value> glu_gluNurbsCallbackData(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluNurbsCallbackData is not implemented!")));

  }


  /**
   * gluNurbsCallbackDataEXT
   *
   * @param GLUnurbs* nurb
   * @param GLvoid* userData
   * @return void
   */
  Handle<Value> glu_gluNurbsCallbackDataEXT(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluNurbsCallbackDataEXT is not implemented!")));

  }


  /**
   * gluNurbsCurve
   *
   * @param GLUnurbs* nurb
   * @param GLint knotCount
   * @param GLfloat *knots
   * @param GLint stride
   * @param GLfloat *control
   * @param GLint order
   * @param GLenum type
   * @return void
   */
  Handle<Value> glu_gluNurbsCurve(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluNurbsCurve is not implemented!")));

  }


  /**
   * gluNurbsProperty
   *
   * @param GLUnurbs* nurb
   * @param GLenum property
   * @param GLfloat value
   * @return void
   */
  Handle<Value> glu_gluNurbsProperty(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluNurbsProperty is not implemented!")));

  }


  /**
   * gluNurbsSurface
   *
   * @param GLUnurbs* nurb
   * @param GLint sKnotCount
   * @param GLfloat* sKnots
   * @param GLint tKnotCount
   * @param GLfloat* tKnots
   * @param GLint sStride
   * @param GLint tStride
   * @param GLfloat* control
   * @param GLint sOrder
   * @param GLint tOrder
   * @param GLenum type
   * @return void
   */
  Handle<Value> glu_gluNurbsSurface(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluNurbsSurface is not implemented!")));

  }


  /**
   * gluOrtho2D
   *
   * @param GLdouble left
   * @param GLdouble right
   * @param GLdouble bottom
   * @param GLdouble top
   * @return void
   */
  Handle<Value> glu_gluOrtho2D(const Arguments& args) {
    HandleScope scope;
    gluOrtho2D(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
  }


  /**
   * gluPartialDisk
   *
   * @param GLUquadric* quad
   * @param GLdouble inner
   * @param GLdouble outer
   * @param GLint slices
   * @param GLint loops
   * @param GLdouble start
   * @param GLdouble sweep
   * @return void
   */
  Handle<Value> glu_gluPartialDisk(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluPartialDisk is not implemented!")));

  }


  /**
   * gluPerspective
   *
   * @param GLdouble fovy
   * @param GLdouble aspect
   * @param GLdouble zNear
   * @param GLdouble zFar
   * @return void
   */
  Handle<Value> glu_gluPerspective(const Arguments& args) {
    HandleScope scope;
    gluPerspective(args[0]->NumberValue(), args[1]->NumberValue(), args[2]->NumberValue(), args[3]->NumberValue());
  }


  /**
   * gluPickMatrix
   *
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble delX
   * @param GLdouble delY
   * @param GLint *viewport
   * @return void
   */
  Handle<Value> glu_gluPickMatrix(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluPickMatrix is not implemented!")));

  }


  /**
   * gluProject
   *
   * @param GLdouble objX
   * @param GLdouble objY
   * @param GLdouble objZ
   * @param const GLdouble *model
   * @param const GLdouble *proj
   * @param const GLint *view
   * @param GLdouble* winX
   * @param GLdouble* winY
   * @param GLdouble* winZ
   * @return GLint
   */
  Handle<Value> glu_gluProject(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluProject is not implemented!")));

  }


  /**
   * gluPwlCurve
   *
   * @param GLUnurbs* nurb
   * @param GLint count
   * @param GLfloat* data
   * @param GLint stride
   * @param GLenum type
   * @return void
   */
  Handle<Value> glu_gluPwlCurve(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluPwlCurve is not implemented!")));

  }


  /**
   * gluQuadricCallback
   *
   * @param GLUquadric* quad
   * @param GLenum which
   * @param _GLUfuncptr CallBackFunc
   * @return void
   */
  Handle<Value> glu_gluQuadricCallback(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluQuadricCallback is not implemented!")));

  }


  /**
   * gluQuadricDrawStyle
   *
   * @param GLUquadric* quad
   * @param GLenum draw
   * @return void
   */
  Handle<Value> glu_gluQuadricDrawStyle(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluQuadricDrawStyle is not implemented!")));

  }


  /**
   * gluQuadricNormals
   *
   * @param GLUquadric* quad
   * @param GLenum normal
   * @return void
   */
  Handle<Value> glu_gluQuadricNormals(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluQuadricNormals is not implemented!")));

  }


  /**
   * gluQuadricOrientation
   *
   * @param GLUquadric* quad
   * @param GLenum orientation
   * @return void
   */
  Handle<Value> glu_gluQuadricOrientation(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluQuadricOrientation is not implemented!")));

  }


  /**
   * gluQuadricTexture
   *
   * @param GLUquadric* quad
   * @param GLboolean texture
   * @return void
   */
  Handle<Value> glu_gluQuadricTexture(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluQuadricTexture is not implemented!")));

  }


  /**
   * gluScaleImage
   *
   * @param GLenum format
   * @param GLsizei wIn
   * @param GLsizei hIn
   * @param GLenum typeIn
   * @param const void *dataIn
   * @param GLsizei wOut
   * @param GLsizei hOut
   * @param GLenum typeOut
   * @param GLvoid* dataOut
   * @return GLint
   */
  Handle<Value> glu_gluScaleImage(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluScaleImage is not implemented!")));

  }


  /**
   * gluSphere
   *
   * @param GLUquadric* quad
   * @param GLdouble radius
   * @param GLint slices
   * @param GLint stacks
   * @return void
   */
  Handle<Value> glu_gluSphere(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluSphere is not implemented!")));

  }


  /**
   * gluTessBeginContour
   *
   * @param GLUtesselator* tess
   * @return void
   */
  Handle<Value> glu_gluTessBeginContour(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluTessBeginContour is not implemented!")));

  }


  /**
   * gluTessBeginPolygon
   *
   * @param GLUtesselator* tess
   * @param GLvoid* data
   * @return void
   */
  Handle<Value> glu_gluTessBeginPolygon(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluTessBeginPolygon is not implemented!")));

  }


  /**
   * gluTessCallback
   *
   * @param GLUtesselator* tess
   * @param GLenum which
   * @param _GLUfuncptr CallBackFunc
   * @return void
   */
  Handle<Value> glu_gluTessCallback(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluTessCallback is not implemented!")));

  }


  /**
   * gluTessEndContour
   *
   * @param GLUtesselator* tess
   * @return void
   */
  Handle<Value> glu_gluTessEndContour(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluTessEndContour is not implemented!")));

  }


  /**
   * gluTessEndPolygon
   *
   * @param GLUtesselator* tess
   * @return void
   */
  Handle<Value> glu_gluTessEndPolygon(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluTessEndPolygon is not implemented!")));

  }


  /**
   * gluTessNormal
   *
   * @param GLUtesselator* tess
   * @param GLdouble valueX
   * @param GLdouble valueY
   * @param GLdouble valueZ
   * @return void
   */
  Handle<Value> glu_gluTessNormal(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluTessNormal is not implemented!")));

  }


  /**
   * gluTessProperty
   *
   * @param GLUtesselator* tess
   * @param GLenum which
   * @param GLdouble data
   * @return void
   */
  Handle<Value> glu_gluTessProperty(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluTessProperty is not implemented!")));

  }


  /**
   * gluTessVertex
   *
   * @param GLUtesselator* tess
   * @param GLdouble *location
   * @param GLvoid* data
   * @return void
   */
  Handle<Value> glu_gluTessVertex(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluTessVertex is not implemented!")));

  }


  /**
   * gluUnProject
   *
   * @param GLdouble winX
   * @param GLdouble winY
   * @param GLdouble winZ
   * @param const GLdouble *model
   * @param const GLdouble *proj
   * @param const GLint *view
   * @param GLdouble* objX
   * @param GLdouble* objY
   * @param GLdouble* objZ
   * @return GLint
   */
  Handle<Value> glu_gluUnProject(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluUnProject is not implemented!")));

  }


  /**
   * gluUnProject4
   *
   * @param GLdouble winX
   * @param GLdouble winY
   * @param GLdouble winZ
   * @param GLdouble clipW
   * @param const GLdouble *model
   * @param const GLdouble *proj
   * @param const GLint *view
   * @param GLdouble nearVal
   * @param GLdouble farVal
   * @param GLdouble* objX
   * @param GLdouble* objY
   * @param GLdouble* objZ
   * @param GLdouble* objW
   * @return GLint
   */
  Handle<Value> glu_gluUnProject4(const Arguments& args) {
    HandleScope scope;

    return ThrowException(Exception::Error(
    String::New("gluUnProject4 is not implemented!")));

  }



  // Constructor
  glu::glu()
  {
  
  }

  void glu::Initialize(v8::Handle<v8::Object> target) {
    HandleScope scope;
   /* Local<FunctionTemplate> t = FunctionTemplate::New(New);
    
    t->InstanceTemplate()->SetInternalFieldCount(1);
    t->SetClassName(String::NewSymbol("glu"));
    t->Inherit(EventEmitter::constructor_template);
*/
    // Constants


   // target->Set(String::NewSymbol("glu"), t->GetFunction());

    // Expose this classes methods to v8/javascript
    Local<FunctionTemplate> _glu_glClearIndex = FunctionTemplate::New(glu_glClearIndex);
    target->Set(String::New("glClearIndex"), _glu_glClearIndex->GetFunction());

    Local<FunctionTemplate> _glu_glClearColor = FunctionTemplate::New(glu_glClearColor);
    target->Set(String::New("glClearColor"), _glu_glClearColor->GetFunction());

    Local<FunctionTemplate> _glu_glClear = FunctionTemplate::New(glu_glClear);
    target->Set(String::New("glClear"), _glu_glClear->GetFunction());

    Local<FunctionTemplate> _glu_glIndexMask = FunctionTemplate::New(glu_glIndexMask);
    target->Set(String::New("glIndexMask"), _glu_glIndexMask->GetFunction());

    Local<FunctionTemplate> _glu_glColorMask = FunctionTemplate::New(glu_glColorMask);
    target->Set(String::New("glColorMask"), _glu_glColorMask->GetFunction());

    Local<FunctionTemplate> _glu_glAlphaFunc = FunctionTemplate::New(glu_glAlphaFunc);
    target->Set(String::New("glAlphaFunc"), _glu_glAlphaFunc->GetFunction());

    Local<FunctionTemplate> _glu_glBlendFunc = FunctionTemplate::New(glu_glBlendFunc);
    target->Set(String::New("glBlendFunc"), _glu_glBlendFunc->GetFunction());

    Local<FunctionTemplate> _glu_glLogicOp = FunctionTemplate::New(glu_glLogicOp);
    target->Set(String::New("glLogicOp"), _glu_glLogicOp->GetFunction());

    Local<FunctionTemplate> _glu_glCullFace = FunctionTemplate::New(glu_glCullFace);
    target->Set(String::New("glCullFace"), _glu_glCullFace->GetFunction());

    Local<FunctionTemplate> _glu_glFrontFace = FunctionTemplate::New(glu_glFrontFace);
    target->Set(String::New("glFrontFace"), _glu_glFrontFace->GetFunction());

    Local<FunctionTemplate> _glu_glPointSize = FunctionTemplate::New(glu_glPointSize);
    target->Set(String::New("glPointSize"), _glu_glPointSize->GetFunction());

    Local<FunctionTemplate> _glu_glLineWidth = FunctionTemplate::New(glu_glLineWidth);
    target->Set(String::New("glLineWidth"), _glu_glLineWidth->GetFunction());

    Local<FunctionTemplate> _glu_glLineStipple = FunctionTemplate::New(glu_glLineStipple);
    target->Set(String::New("glLineStipple"), _glu_glLineStipple->GetFunction());

    Local<FunctionTemplate> _glu_glPolygonMode = FunctionTemplate::New(glu_glPolygonMode);
    target->Set(String::New("glPolygonMode"), _glu_glPolygonMode->GetFunction());

    Local<FunctionTemplate> _glu_glPolygonOffset = FunctionTemplate::New(glu_glPolygonOffset);
    target->Set(String::New("glPolygonOffset"), _glu_glPolygonOffset->GetFunction());

    Local<FunctionTemplate> _glu_glPolygonStipple = FunctionTemplate::New(glu_glPolygonStipple);
    target->Set(String::New("glPolygonStipple"), _glu_glPolygonStipple->GetFunction());

    Local<FunctionTemplate> _glu_glGetPolygonStipple = FunctionTemplate::New(glu_glGetPolygonStipple);
    target->Set(String::New("glGetPolygonStipple"), _glu_glGetPolygonStipple->GetFunction());

    Local<FunctionTemplate> _glu_glEdgeFlag = FunctionTemplate::New(glu_glEdgeFlag);
    target->Set(String::New("glEdgeFlag"), _glu_glEdgeFlag->GetFunction());

    Local<FunctionTemplate> _glu_glEdgeFlagv = FunctionTemplate::New(glu_glEdgeFlagv);
    target->Set(String::New("glEdgeFlagv"), _glu_glEdgeFlagv->GetFunction());

    Local<FunctionTemplate> _glu_glScissor = FunctionTemplate::New(glu_glScissor);
    target->Set(String::New("glScissor"), _glu_glScissor->GetFunction());

    Local<FunctionTemplate> _glu_glClipPlane = FunctionTemplate::New(glu_glClipPlane);
    target->Set(String::New("glClipPlane"), _glu_glClipPlane->GetFunction());

    Local<FunctionTemplate> _glu_glGetClipPlane = FunctionTemplate::New(glu_glGetClipPlane);
    target->Set(String::New("glGetClipPlane"), _glu_glGetClipPlane->GetFunction());

    Local<FunctionTemplate> _glu_glDrawBuffer = FunctionTemplate::New(glu_glDrawBuffer);
    target->Set(String::New("glDrawBuffer"), _glu_glDrawBuffer->GetFunction());

    Local<FunctionTemplate> _glu_glReadBuffer = FunctionTemplate::New(glu_glReadBuffer);
    target->Set(String::New("glReadBuffer"), _glu_glReadBuffer->GetFunction());

    Local<FunctionTemplate> _glu_glEnable = FunctionTemplate::New(glu_glEnable);
    target->Set(String::New("glEnable"), _glu_glEnable->GetFunction());

    Local<FunctionTemplate> _glu_glDisable = FunctionTemplate::New(glu_glDisable);
    target->Set(String::New("glDisable"), _glu_glDisable->GetFunction());

    Local<FunctionTemplate> _glu_glIsEnabled = FunctionTemplate::New(glu_glIsEnabled);
    target->Set(String::New("glIsEnabled"), _glu_glIsEnabled->GetFunction());

    Local<FunctionTemplate> _glu_glEnableClientState = FunctionTemplate::New(glu_glEnableClientState);
    target->Set(String::New("glEnableClientState"), _glu_glEnableClientState->GetFunction());

    Local<FunctionTemplate> _glu_glDisableClientState = FunctionTemplate::New(glu_glDisableClientState);
    target->Set(String::New("glDisableClientState"), _glu_glDisableClientState->GetFunction());

    Local<FunctionTemplate> _glu_glGetBooleanv = FunctionTemplate::New(glu_glGetBooleanv);
    target->Set(String::New("glGetBooleanv"), _glu_glGetBooleanv->GetFunction());

    Local<FunctionTemplate> _glu_glGetDoublev = FunctionTemplate::New(glu_glGetDoublev);
    target->Set(String::New("glGetDoublev"), _glu_glGetDoublev->GetFunction());

    Local<FunctionTemplate> _glu_glGetFloatv = FunctionTemplate::New(glu_glGetFloatv);
    target->Set(String::New("glGetFloatv"), _glu_glGetFloatv->GetFunction());

    Local<FunctionTemplate> _glu_glGetIntegerv = FunctionTemplate::New(glu_glGetIntegerv);
    target->Set(String::New("glGetIntegerv"), _glu_glGetIntegerv->GetFunction());

    Local<FunctionTemplate> _glu_glPushAttrib = FunctionTemplate::New(glu_glPushAttrib);
    target->Set(String::New("glPushAttrib"), _glu_glPushAttrib->GetFunction());

    Local<FunctionTemplate> _glu_glPopAttrib = FunctionTemplate::New(glu_glPopAttrib);
    target->Set(String::New("glPopAttrib"), _glu_glPopAttrib->GetFunction());

    Local<FunctionTemplate> _glu_glPushClientAttrib = FunctionTemplate::New(glu_glPushClientAttrib);
    target->Set(String::New("glPushClientAttrib"), _glu_glPushClientAttrib->GetFunction());

    Local<FunctionTemplate> _glu_glPopClientAttrib = FunctionTemplate::New(glu_glPopClientAttrib);
    target->Set(String::New("glPopClientAttrib"), _glu_glPopClientAttrib->GetFunction());

    Local<FunctionTemplate> _glu_glRenderMode = FunctionTemplate::New(glu_glRenderMode);
    target->Set(String::New("glRenderMode"), _glu_glRenderMode->GetFunction());

    Local<FunctionTemplate> _glu_glGetError = FunctionTemplate::New(glu_glGetError);
    target->Set(String::New("glGetError"), _glu_glGetError->GetFunction());

    Local<FunctionTemplate> _glu_glFinish = FunctionTemplate::New(glu_glFinish);
    target->Set(String::New("glFinish"), _glu_glFinish->GetFunction());

    Local<FunctionTemplate> _glu_glFlush = FunctionTemplate::New(glu_glFlush);
    target->Set(String::New("glFlush"), _glu_glFlush->GetFunction());

    Local<FunctionTemplate> _glu_glHint = FunctionTemplate::New(glu_glHint);
    target->Set(String::New("glHint"), _glu_glHint->GetFunction());

    Local<FunctionTemplate> _glu_glClearDepth = FunctionTemplate::New(glu_glClearDepth);
    target->Set(String::New("glClearDepth"), _glu_glClearDepth->GetFunction());

    Local<FunctionTemplate> _glu_glDepthFunc = FunctionTemplate::New(glu_glDepthFunc);
    target->Set(String::New("glDepthFunc"), _glu_glDepthFunc->GetFunction());

    Local<FunctionTemplate> _glu_glDepthMask = FunctionTemplate::New(glu_glDepthMask);
    target->Set(String::New("glDepthMask"), _glu_glDepthMask->GetFunction());

    Local<FunctionTemplate> _glu_glDepthRange = FunctionTemplate::New(glu_glDepthRange);
    target->Set(String::New("glDepthRange"), _glu_glDepthRange->GetFunction());

    Local<FunctionTemplate> _glu_glClearAccum = FunctionTemplate::New(glu_glClearAccum);
    target->Set(String::New("glClearAccum"), _glu_glClearAccum->GetFunction());

    Local<FunctionTemplate> _glu_glAccum = FunctionTemplate::New(glu_glAccum);
    target->Set(String::New("glAccum"), _glu_glAccum->GetFunction());

    Local<FunctionTemplate> _glu_glMatrixMode = FunctionTemplate::New(glu_glMatrixMode);
    target->Set(String::New("glMatrixMode"), _glu_glMatrixMode->GetFunction());

    Local<FunctionTemplate> _glu_glOrtho = FunctionTemplate::New(glu_glOrtho);
    target->Set(String::New("glOrtho"), _glu_glOrtho->GetFunction());

    Local<FunctionTemplate> _glu_glFrustum = FunctionTemplate::New(glu_glFrustum);
    target->Set(String::New("glFrustum"), _glu_glFrustum->GetFunction());

    Local<FunctionTemplate> _glu_glViewport = FunctionTemplate::New(glu_glViewport);
    target->Set(String::New("glViewport"), _glu_glViewport->GetFunction());

    Local<FunctionTemplate> _glu_glPushMatrix = FunctionTemplate::New(glu_glPushMatrix);
    target->Set(String::New("glPushMatrix"), _glu_glPushMatrix->GetFunction());

    Local<FunctionTemplate> _glu_glPopMatrix = FunctionTemplate::New(glu_glPopMatrix);
    target->Set(String::New("glPopMatrix"), _glu_glPopMatrix->GetFunction());

    Local<FunctionTemplate> _glu_glLoadIdentity = FunctionTemplate::New(glu_glLoadIdentity);
    target->Set(String::New("glLoadIdentity"), _glu_glLoadIdentity->GetFunction());

    Local<FunctionTemplate> _glu_glLoadMatrixd = FunctionTemplate::New(glu_glLoadMatrixd);
    target->Set(String::New("glLoadMatrixd"), _glu_glLoadMatrixd->GetFunction());

    Local<FunctionTemplate> _glu_glLoadMatrixf = FunctionTemplate::New(glu_glLoadMatrixf);
    target->Set(String::New("glLoadMatrixf"), _glu_glLoadMatrixf->GetFunction());

    Local<FunctionTemplate> _glu_glMultMatrixd = FunctionTemplate::New(glu_glMultMatrixd);
    target->Set(String::New("glMultMatrixd"), _glu_glMultMatrixd->GetFunction());

    Local<FunctionTemplate> _glu_glMultMatrixf = FunctionTemplate::New(glu_glMultMatrixf);
    target->Set(String::New("glMultMatrixf"), _glu_glMultMatrixf->GetFunction());

    Local<FunctionTemplate> _glu_glRotated = FunctionTemplate::New(glu_glRotated);
    target->Set(String::New("glRotated"), _glu_glRotated->GetFunction());

    Local<FunctionTemplate> _glu_glRotatef = FunctionTemplate::New(glu_glRotatef);
    target->Set(String::New("glRotatef"), _glu_glRotatef->GetFunction());

    Local<FunctionTemplate> _glu_glScaled = FunctionTemplate::New(glu_glScaled);
    target->Set(String::New("glScaled"), _glu_glScaled->GetFunction());

    Local<FunctionTemplate> _glu_glScalef = FunctionTemplate::New(glu_glScalef);
    target->Set(String::New("glScalef"), _glu_glScalef->GetFunction());

    Local<FunctionTemplate> _glu_glTranslated = FunctionTemplate::New(glu_glTranslated);
    target->Set(String::New("glTranslated"), _glu_glTranslated->GetFunction());

    Local<FunctionTemplate> _glu_glTranslatef = FunctionTemplate::New(glu_glTranslatef);
    target->Set(String::New("glTranslatef"), _glu_glTranslatef->GetFunction());

    Local<FunctionTemplate> _glu_glIsList = FunctionTemplate::New(glu_glIsList);
    target->Set(String::New("glIsList"), _glu_glIsList->GetFunction());

    Local<FunctionTemplate> _glu_glDeleteLists = FunctionTemplate::New(glu_glDeleteLists);
    target->Set(String::New("glDeleteLists"), _glu_glDeleteLists->GetFunction());

    Local<FunctionTemplate> _glu_glGenLists = FunctionTemplate::New(glu_glGenLists);
    target->Set(String::New("glGenLists"), _glu_glGenLists->GetFunction());

    Local<FunctionTemplate> _glu_glNewList = FunctionTemplate::New(glu_glNewList);
    target->Set(String::New("glNewList"), _glu_glNewList->GetFunction());

    Local<FunctionTemplate> _glu_glEndList = FunctionTemplate::New(glu_glEndList);
    target->Set(String::New("glEndList"), _glu_glEndList->GetFunction());

    Local<FunctionTemplate> _glu_glCallList = FunctionTemplate::New(glu_glCallList);
    target->Set(String::New("glCallList"), _glu_glCallList->GetFunction());

    Local<FunctionTemplate> _glu_glCallLists = FunctionTemplate::New(glu_glCallLists);
    target->Set(String::New("glCallLists"), _glu_glCallLists->GetFunction());

    Local<FunctionTemplate> _glu_glListBase = FunctionTemplate::New(glu_glListBase);
    target->Set(String::New("glListBase"), _glu_glListBase->GetFunction());

    Local<FunctionTemplate> _glu_glBegin = FunctionTemplate::New(glu_glBegin);
    target->Set(String::New("glBegin"), _glu_glBegin->GetFunction());

    Local<FunctionTemplate> _glu_glEnd = FunctionTemplate::New(glu_glEnd);
    target->Set(String::New("glEnd"), _glu_glEnd->GetFunction());

    Local<FunctionTemplate> _glu_glVertex2d = FunctionTemplate::New(glu_glVertex2d);
    target->Set(String::New("glVertex2d"), _glu_glVertex2d->GetFunction());

    Local<FunctionTemplate> _glu_glVertex2f = FunctionTemplate::New(glu_glVertex2f);
    target->Set(String::New("glVertex2f"), _glu_glVertex2f->GetFunction());

    Local<FunctionTemplate> _glu_glVertex2i = FunctionTemplate::New(glu_glVertex2i);
    target->Set(String::New("glVertex2i"), _glu_glVertex2i->GetFunction());

    Local<FunctionTemplate> _glu_glVertex2s = FunctionTemplate::New(glu_glVertex2s);
    target->Set(String::New("glVertex2s"), _glu_glVertex2s->GetFunction());

    Local<FunctionTemplate> _glu_glVertex3d = FunctionTemplate::New(glu_glVertex3d);
    target->Set(String::New("glVertex3d"), _glu_glVertex3d->GetFunction());

    Local<FunctionTemplate> _glu_glVertex3f = FunctionTemplate::New(glu_glVertex3f);
    target->Set(String::New("glVertex3f"), _glu_glVertex3f->GetFunction());

    Local<FunctionTemplate> _glu_glVertex3i = FunctionTemplate::New(glu_glVertex3i);
    target->Set(String::New("glVertex3i"), _glu_glVertex3i->GetFunction());

    Local<FunctionTemplate> _glu_glVertex3s = FunctionTemplate::New(glu_glVertex3s);
    target->Set(String::New("glVertex3s"), _glu_glVertex3s->GetFunction());

    Local<FunctionTemplate> _glu_glVertex4d = FunctionTemplate::New(glu_glVertex4d);
    target->Set(String::New("glVertex4d"), _glu_glVertex4d->GetFunction());

    Local<FunctionTemplate> _glu_glVertex4f = FunctionTemplate::New(glu_glVertex4f);
    target->Set(String::New("glVertex4f"), _glu_glVertex4f->GetFunction());

    Local<FunctionTemplate> _glu_glVertex4i = FunctionTemplate::New(glu_glVertex4i);
    target->Set(String::New("glVertex4i"), _glu_glVertex4i->GetFunction());

    Local<FunctionTemplate> _glu_glVertex4s = FunctionTemplate::New(glu_glVertex4s);
    target->Set(String::New("glVertex4s"), _glu_glVertex4s->GetFunction());

    Local<FunctionTemplate> _glu_glVertex2dv = FunctionTemplate::New(glu_glVertex2dv);
    target->Set(String::New("glVertex2dv"), _glu_glVertex2dv->GetFunction());

    Local<FunctionTemplate> _glu_glVertex2fv = FunctionTemplate::New(glu_glVertex2fv);
    target->Set(String::New("glVertex2fv"), _glu_glVertex2fv->GetFunction());

    Local<FunctionTemplate> _glu_glVertex2iv = FunctionTemplate::New(glu_glVertex2iv);
    target->Set(String::New("glVertex2iv"), _glu_glVertex2iv->GetFunction());

    Local<FunctionTemplate> _glu_glVertex2sv = FunctionTemplate::New(glu_glVertex2sv);
    target->Set(String::New("glVertex2sv"), _glu_glVertex2sv->GetFunction());

    Local<FunctionTemplate> _glu_glVertex3dv = FunctionTemplate::New(glu_glVertex3dv);
    target->Set(String::New("glVertex3dv"), _glu_glVertex3dv->GetFunction());

    Local<FunctionTemplate> _glu_glVertex3fv = FunctionTemplate::New(glu_glVertex3fv);
    target->Set(String::New("glVertex3fv"), _glu_glVertex3fv->GetFunction());

    Local<FunctionTemplate> _glu_glVertex3iv = FunctionTemplate::New(glu_glVertex3iv);
    target->Set(String::New("glVertex3iv"), _glu_glVertex3iv->GetFunction());

    Local<FunctionTemplate> _glu_glVertex3sv = FunctionTemplate::New(glu_glVertex3sv);
    target->Set(String::New("glVertex3sv"), _glu_glVertex3sv->GetFunction());

    Local<FunctionTemplate> _glu_glVertex4dv = FunctionTemplate::New(glu_glVertex4dv);
    target->Set(String::New("glVertex4dv"), _glu_glVertex4dv->GetFunction());

    Local<FunctionTemplate> _glu_glVertex4fv = FunctionTemplate::New(glu_glVertex4fv);
    target->Set(String::New("glVertex4fv"), _glu_glVertex4fv->GetFunction());

    Local<FunctionTemplate> _glu_glVertex4iv = FunctionTemplate::New(glu_glVertex4iv);
    target->Set(String::New("glVertex4iv"), _glu_glVertex4iv->GetFunction());

    Local<FunctionTemplate> _glu_glVertex4sv = FunctionTemplate::New(glu_glVertex4sv);
    target->Set(String::New("glVertex4sv"), _glu_glVertex4sv->GetFunction());

    Local<FunctionTemplate> _glu_glNormal3b = FunctionTemplate::New(glu_glNormal3b);
    target->Set(String::New("glNormal3b"), _glu_glNormal3b->GetFunction());

    Local<FunctionTemplate> _glu_glNormal3d = FunctionTemplate::New(glu_glNormal3d);
    target->Set(String::New("glNormal3d"), _glu_glNormal3d->GetFunction());

    Local<FunctionTemplate> _glu_glNormal3f = FunctionTemplate::New(glu_glNormal3f);
    target->Set(String::New("glNormal3f"), _glu_glNormal3f->GetFunction());

    Local<FunctionTemplate> _glu_glNormal3i = FunctionTemplate::New(glu_glNormal3i);
    target->Set(String::New("glNormal3i"), _glu_glNormal3i->GetFunction());

    Local<FunctionTemplate> _glu_glNormal3s = FunctionTemplate::New(glu_glNormal3s);
    target->Set(String::New("glNormal3s"), _glu_glNormal3s->GetFunction());

    Local<FunctionTemplate> _glu_glNormal3bv = FunctionTemplate::New(glu_glNormal3bv);
    target->Set(String::New("glNormal3bv"), _glu_glNormal3bv->GetFunction());

    Local<FunctionTemplate> _glu_glNormal3dv = FunctionTemplate::New(glu_glNormal3dv);
    target->Set(String::New("glNormal3dv"), _glu_glNormal3dv->GetFunction());

    Local<FunctionTemplate> _glu_glNormal3fv = FunctionTemplate::New(glu_glNormal3fv);
    target->Set(String::New("glNormal3fv"), _glu_glNormal3fv->GetFunction());

    Local<FunctionTemplate> _glu_glNormal3iv = FunctionTemplate::New(glu_glNormal3iv);
    target->Set(String::New("glNormal3iv"), _glu_glNormal3iv->GetFunction());

    Local<FunctionTemplate> _glu_glNormal3sv = FunctionTemplate::New(glu_glNormal3sv);
    target->Set(String::New("glNormal3sv"), _glu_glNormal3sv->GetFunction());

    Local<FunctionTemplate> _glu_glIndexd = FunctionTemplate::New(glu_glIndexd);
    target->Set(String::New("glIndexd"), _glu_glIndexd->GetFunction());

    Local<FunctionTemplate> _glu_glIndexf = FunctionTemplate::New(glu_glIndexf);
    target->Set(String::New("glIndexf"), _glu_glIndexf->GetFunction());

    Local<FunctionTemplate> _glu_glIndexi = FunctionTemplate::New(glu_glIndexi);
    target->Set(String::New("glIndexi"), _glu_glIndexi->GetFunction());

    Local<FunctionTemplate> _glu_glIndexs = FunctionTemplate::New(glu_glIndexs);
    target->Set(String::New("glIndexs"), _glu_glIndexs->GetFunction());

    Local<FunctionTemplate> _glu_glIndexub = FunctionTemplate::New(glu_glIndexub);
    target->Set(String::New("glIndexub"), _glu_glIndexub->GetFunction());

    Local<FunctionTemplate> _glu_glIndexdv = FunctionTemplate::New(glu_glIndexdv);
    target->Set(String::New("glIndexdv"), _glu_glIndexdv->GetFunction());

    Local<FunctionTemplate> _glu_glIndexfv = FunctionTemplate::New(glu_glIndexfv);
    target->Set(String::New("glIndexfv"), _glu_glIndexfv->GetFunction());

    Local<FunctionTemplate> _glu_glIndexiv = FunctionTemplate::New(glu_glIndexiv);
    target->Set(String::New("glIndexiv"), _glu_glIndexiv->GetFunction());

    Local<FunctionTemplate> _glu_glIndexsv = FunctionTemplate::New(glu_glIndexsv);
    target->Set(String::New("glIndexsv"), _glu_glIndexsv->GetFunction());

    Local<FunctionTemplate> _glu_glIndexubv = FunctionTemplate::New(glu_glIndexubv);
    target->Set(String::New("glIndexubv"), _glu_glIndexubv->GetFunction());

    Local<FunctionTemplate> _glu_glColor3b = FunctionTemplate::New(glu_glColor3b);
    target->Set(String::New("glColor3b"), _glu_glColor3b->GetFunction());

    Local<FunctionTemplate> _glu_glColor3d = FunctionTemplate::New(glu_glColor3d);
    target->Set(String::New("glColor3d"), _glu_glColor3d->GetFunction());

    Local<FunctionTemplate> _glu_glColor3f = FunctionTemplate::New(glu_glColor3f);
    target->Set(String::New("glColor3f"), _glu_glColor3f->GetFunction());

    Local<FunctionTemplate> _glu_glColor3i = FunctionTemplate::New(glu_glColor3i);
    target->Set(String::New("glColor3i"), _glu_glColor3i->GetFunction());

    Local<FunctionTemplate> _glu_glColor3s = FunctionTemplate::New(glu_glColor3s);
    target->Set(String::New("glColor3s"), _glu_glColor3s->GetFunction());

    Local<FunctionTemplate> _glu_glColor3ub = FunctionTemplate::New(glu_glColor3ub);
    target->Set(String::New("glColor3ub"), _glu_glColor3ub->GetFunction());

    Local<FunctionTemplate> _glu_glColor3ui = FunctionTemplate::New(glu_glColor3ui);
    target->Set(String::New("glColor3ui"), _glu_glColor3ui->GetFunction());

    Local<FunctionTemplate> _glu_glColor3us = FunctionTemplate::New(glu_glColor3us);
    target->Set(String::New("glColor3us"), _glu_glColor3us->GetFunction());

    Local<FunctionTemplate> _glu_glColor4b = FunctionTemplate::New(glu_glColor4b);
    target->Set(String::New("glColor4b"), _glu_glColor4b->GetFunction());

    Local<FunctionTemplate> _glu_glColor4d = FunctionTemplate::New(glu_glColor4d);
    target->Set(String::New("glColor4d"), _glu_glColor4d->GetFunction());

    Local<FunctionTemplate> _glu_glColor4f = FunctionTemplate::New(glu_glColor4f);
    target->Set(String::New("glColor4f"), _glu_glColor4f->GetFunction());

    Local<FunctionTemplate> _glu_glColor4i = FunctionTemplate::New(glu_glColor4i);
    target->Set(String::New("glColor4i"), _glu_glColor4i->GetFunction());

    Local<FunctionTemplate> _glu_glColor4s = FunctionTemplate::New(glu_glColor4s);
    target->Set(String::New("glColor4s"), _glu_glColor4s->GetFunction());

    Local<FunctionTemplate> _glu_glColor4ub = FunctionTemplate::New(glu_glColor4ub);
    target->Set(String::New("glColor4ub"), _glu_glColor4ub->GetFunction());

    Local<FunctionTemplate> _glu_glColor4ui = FunctionTemplate::New(glu_glColor4ui);
    target->Set(String::New("glColor4ui"), _glu_glColor4ui->GetFunction());

    Local<FunctionTemplate> _glu_glColor4us = FunctionTemplate::New(glu_glColor4us);
    target->Set(String::New("glColor4us"), _glu_glColor4us->GetFunction());

    Local<FunctionTemplate> _glu_glColor3bv = FunctionTemplate::New(glu_glColor3bv);
    target->Set(String::New("glColor3bv"), _glu_glColor3bv->GetFunction());

    Local<FunctionTemplate> _glu_glColor3dv = FunctionTemplate::New(glu_glColor3dv);
    target->Set(String::New("glColor3dv"), _glu_glColor3dv->GetFunction());

    Local<FunctionTemplate> _glu_glColor3fv = FunctionTemplate::New(glu_glColor3fv);
    target->Set(String::New("glColor3fv"), _glu_glColor3fv->GetFunction());

    Local<FunctionTemplate> _glu_glColor3iv = FunctionTemplate::New(glu_glColor3iv);
    target->Set(String::New("glColor3iv"), _glu_glColor3iv->GetFunction());

    Local<FunctionTemplate> _glu_glColor3sv = FunctionTemplate::New(glu_glColor3sv);
    target->Set(String::New("glColor3sv"), _glu_glColor3sv->GetFunction());

    Local<FunctionTemplate> _glu_glColor3ubv = FunctionTemplate::New(glu_glColor3ubv);
    target->Set(String::New("glColor3ubv"), _glu_glColor3ubv->GetFunction());

    Local<FunctionTemplate> _glu_glColor3uiv = FunctionTemplate::New(glu_glColor3uiv);
    target->Set(String::New("glColor3uiv"), _glu_glColor3uiv->GetFunction());

    Local<FunctionTemplate> _glu_glColor3usv = FunctionTemplate::New(glu_glColor3usv);
    target->Set(String::New("glColor3usv"), _glu_glColor3usv->GetFunction());

    Local<FunctionTemplate> _glu_glColor4bv = FunctionTemplate::New(glu_glColor4bv);
    target->Set(String::New("glColor4bv"), _glu_glColor4bv->GetFunction());

    Local<FunctionTemplate> _glu_glColor4dv = FunctionTemplate::New(glu_glColor4dv);
    target->Set(String::New("glColor4dv"), _glu_glColor4dv->GetFunction());

    Local<FunctionTemplate> _glu_glColor4fv = FunctionTemplate::New(glu_glColor4fv);
    target->Set(String::New("glColor4fv"), _glu_glColor4fv->GetFunction());

    Local<FunctionTemplate> _glu_glColor4iv = FunctionTemplate::New(glu_glColor4iv);
    target->Set(String::New("glColor4iv"), _glu_glColor4iv->GetFunction());

    Local<FunctionTemplate> _glu_glColor4sv = FunctionTemplate::New(glu_glColor4sv);
    target->Set(String::New("glColor4sv"), _glu_glColor4sv->GetFunction());

    Local<FunctionTemplate> _glu_glColor4ubv = FunctionTemplate::New(glu_glColor4ubv);
    target->Set(String::New("glColor4ubv"), _glu_glColor4ubv->GetFunction());

    Local<FunctionTemplate> _glu_glColor4uiv = FunctionTemplate::New(glu_glColor4uiv);
    target->Set(String::New("glColor4uiv"), _glu_glColor4uiv->GetFunction());

    Local<FunctionTemplate> _glu_glColor4usv = FunctionTemplate::New(glu_glColor4usv);
    target->Set(String::New("glColor4usv"), _glu_glColor4usv->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord1d = FunctionTemplate::New(glu_glTexCoord1d);
    target->Set(String::New("glTexCoord1d"), _glu_glTexCoord1d->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord1f = FunctionTemplate::New(glu_glTexCoord1f);
    target->Set(String::New("glTexCoord1f"), _glu_glTexCoord1f->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord1i = FunctionTemplate::New(glu_glTexCoord1i);
    target->Set(String::New("glTexCoord1i"), _glu_glTexCoord1i->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord1s = FunctionTemplate::New(glu_glTexCoord1s);
    target->Set(String::New("glTexCoord1s"), _glu_glTexCoord1s->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord2d = FunctionTemplate::New(glu_glTexCoord2d);
    target->Set(String::New("glTexCoord2d"), _glu_glTexCoord2d->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord2f = FunctionTemplate::New(glu_glTexCoord2f);
    target->Set(String::New("glTexCoord2f"), _glu_glTexCoord2f->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord2i = FunctionTemplate::New(glu_glTexCoord2i);
    target->Set(String::New("glTexCoord2i"), _glu_glTexCoord2i->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord2s = FunctionTemplate::New(glu_glTexCoord2s);
    target->Set(String::New("glTexCoord2s"), _glu_glTexCoord2s->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord3d = FunctionTemplate::New(glu_glTexCoord3d);
    target->Set(String::New("glTexCoord3d"), _glu_glTexCoord3d->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord3f = FunctionTemplate::New(glu_glTexCoord3f);
    target->Set(String::New("glTexCoord3f"), _glu_glTexCoord3f->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord3i = FunctionTemplate::New(glu_glTexCoord3i);
    target->Set(String::New("glTexCoord3i"), _glu_glTexCoord3i->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord3s = FunctionTemplate::New(glu_glTexCoord3s);
    target->Set(String::New("glTexCoord3s"), _glu_glTexCoord3s->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord4d = FunctionTemplate::New(glu_glTexCoord4d);
    target->Set(String::New("glTexCoord4d"), _glu_glTexCoord4d->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord4f = FunctionTemplate::New(glu_glTexCoord4f);
    target->Set(String::New("glTexCoord4f"), _glu_glTexCoord4f->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord4i = FunctionTemplate::New(glu_glTexCoord4i);
    target->Set(String::New("glTexCoord4i"), _glu_glTexCoord4i->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord4s = FunctionTemplate::New(glu_glTexCoord4s);
    target->Set(String::New("glTexCoord4s"), _glu_glTexCoord4s->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord1dv = FunctionTemplate::New(glu_glTexCoord1dv);
    target->Set(String::New("glTexCoord1dv"), _glu_glTexCoord1dv->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord1fv = FunctionTemplate::New(glu_glTexCoord1fv);
    target->Set(String::New("glTexCoord1fv"), _glu_glTexCoord1fv->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord1iv = FunctionTemplate::New(glu_glTexCoord1iv);
    target->Set(String::New("glTexCoord1iv"), _glu_glTexCoord1iv->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord1sv = FunctionTemplate::New(glu_glTexCoord1sv);
    target->Set(String::New("glTexCoord1sv"), _glu_glTexCoord1sv->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord2dv = FunctionTemplate::New(glu_glTexCoord2dv);
    target->Set(String::New("glTexCoord2dv"), _glu_glTexCoord2dv->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord2fv = FunctionTemplate::New(glu_glTexCoord2fv);
    target->Set(String::New("glTexCoord2fv"), _glu_glTexCoord2fv->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord2iv = FunctionTemplate::New(glu_glTexCoord2iv);
    target->Set(String::New("glTexCoord2iv"), _glu_glTexCoord2iv->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord2sv = FunctionTemplate::New(glu_glTexCoord2sv);
    target->Set(String::New("glTexCoord2sv"), _glu_glTexCoord2sv->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord3dv = FunctionTemplate::New(glu_glTexCoord3dv);
    target->Set(String::New("glTexCoord3dv"), _glu_glTexCoord3dv->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord3fv = FunctionTemplate::New(glu_glTexCoord3fv);
    target->Set(String::New("glTexCoord3fv"), _glu_glTexCoord3fv->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord3iv = FunctionTemplate::New(glu_glTexCoord3iv);
    target->Set(String::New("glTexCoord3iv"), _glu_glTexCoord3iv->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord3sv = FunctionTemplate::New(glu_glTexCoord3sv);
    target->Set(String::New("glTexCoord3sv"), _glu_glTexCoord3sv->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord4dv = FunctionTemplate::New(glu_glTexCoord4dv);
    target->Set(String::New("glTexCoord4dv"), _glu_glTexCoord4dv->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord4fv = FunctionTemplate::New(glu_glTexCoord4fv);
    target->Set(String::New("glTexCoord4fv"), _glu_glTexCoord4fv->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord4iv = FunctionTemplate::New(glu_glTexCoord4iv);
    target->Set(String::New("glTexCoord4iv"), _glu_glTexCoord4iv->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoord4sv = FunctionTemplate::New(glu_glTexCoord4sv);
    target->Set(String::New("glTexCoord4sv"), _glu_glTexCoord4sv->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos2d = FunctionTemplate::New(glu_glRasterPos2d);
    target->Set(String::New("glRasterPos2d"), _glu_glRasterPos2d->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos2f = FunctionTemplate::New(glu_glRasterPos2f);
    target->Set(String::New("glRasterPos2f"), _glu_glRasterPos2f->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos2i = FunctionTemplate::New(glu_glRasterPos2i);
    target->Set(String::New("glRasterPos2i"), _glu_glRasterPos2i->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos2s = FunctionTemplate::New(glu_glRasterPos2s);
    target->Set(String::New("glRasterPos2s"), _glu_glRasterPos2s->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos3d = FunctionTemplate::New(glu_glRasterPos3d);
    target->Set(String::New("glRasterPos3d"), _glu_glRasterPos3d->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos3f = FunctionTemplate::New(glu_glRasterPos3f);
    target->Set(String::New("glRasterPos3f"), _glu_glRasterPos3f->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos3i = FunctionTemplate::New(glu_glRasterPos3i);
    target->Set(String::New("glRasterPos3i"), _glu_glRasterPos3i->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos3s = FunctionTemplate::New(glu_glRasterPos3s);
    target->Set(String::New("glRasterPos3s"), _glu_glRasterPos3s->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos4d = FunctionTemplate::New(glu_glRasterPos4d);
    target->Set(String::New("glRasterPos4d"), _glu_glRasterPos4d->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos4f = FunctionTemplate::New(glu_glRasterPos4f);
    target->Set(String::New("glRasterPos4f"), _glu_glRasterPos4f->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos4i = FunctionTemplate::New(glu_glRasterPos4i);
    target->Set(String::New("glRasterPos4i"), _glu_glRasterPos4i->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos4s = FunctionTemplate::New(glu_glRasterPos4s);
    target->Set(String::New("glRasterPos4s"), _glu_glRasterPos4s->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos2dv = FunctionTemplate::New(glu_glRasterPos2dv);
    target->Set(String::New("glRasterPos2dv"), _glu_glRasterPos2dv->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos2fv = FunctionTemplate::New(glu_glRasterPos2fv);
    target->Set(String::New("glRasterPos2fv"), _glu_glRasterPos2fv->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos2iv = FunctionTemplate::New(glu_glRasterPos2iv);
    target->Set(String::New("glRasterPos2iv"), _glu_glRasterPos2iv->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos2sv = FunctionTemplate::New(glu_glRasterPos2sv);
    target->Set(String::New("glRasterPos2sv"), _glu_glRasterPos2sv->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos3dv = FunctionTemplate::New(glu_glRasterPos3dv);
    target->Set(String::New("glRasterPos3dv"), _glu_glRasterPos3dv->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos3fv = FunctionTemplate::New(glu_glRasterPos3fv);
    target->Set(String::New("glRasterPos3fv"), _glu_glRasterPos3fv->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos3iv = FunctionTemplate::New(glu_glRasterPos3iv);
    target->Set(String::New("glRasterPos3iv"), _glu_glRasterPos3iv->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos3sv = FunctionTemplate::New(glu_glRasterPos3sv);
    target->Set(String::New("glRasterPos3sv"), _glu_glRasterPos3sv->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos4dv = FunctionTemplate::New(glu_glRasterPos4dv);
    target->Set(String::New("glRasterPos4dv"), _glu_glRasterPos4dv->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos4fv = FunctionTemplate::New(glu_glRasterPos4fv);
    target->Set(String::New("glRasterPos4fv"), _glu_glRasterPos4fv->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos4iv = FunctionTemplate::New(glu_glRasterPos4iv);
    target->Set(String::New("glRasterPos4iv"), _glu_glRasterPos4iv->GetFunction());

    Local<FunctionTemplate> _glu_glRasterPos4sv = FunctionTemplate::New(glu_glRasterPos4sv);
    target->Set(String::New("glRasterPos4sv"), _glu_glRasterPos4sv->GetFunction());

    Local<FunctionTemplate> _glu_glRectd = FunctionTemplate::New(glu_glRectd);
    target->Set(String::New("glRectd"), _glu_glRectd->GetFunction());

    Local<FunctionTemplate> _glu_glRectf = FunctionTemplate::New(glu_glRectf);
    target->Set(String::New("glRectf"), _glu_glRectf->GetFunction());

    Local<FunctionTemplate> _glu_glRecti = FunctionTemplate::New(glu_glRecti);
    target->Set(String::New("glRecti"), _glu_glRecti->GetFunction());

    Local<FunctionTemplate> _glu_glRects = FunctionTemplate::New(glu_glRects);
    target->Set(String::New("glRects"), _glu_glRects->GetFunction());

    Local<FunctionTemplate> _glu_glRectdv = FunctionTemplate::New(glu_glRectdv);
    target->Set(String::New("glRectdv"), _glu_glRectdv->GetFunction());

    Local<FunctionTemplate> _glu_glRectfv = FunctionTemplate::New(glu_glRectfv);
    target->Set(String::New("glRectfv"), _glu_glRectfv->GetFunction());

    Local<FunctionTemplate> _glu_glRectiv = FunctionTemplate::New(glu_glRectiv);
    target->Set(String::New("glRectiv"), _glu_glRectiv->GetFunction());

    Local<FunctionTemplate> _glu_glRectsv = FunctionTemplate::New(glu_glRectsv);
    target->Set(String::New("glRectsv"), _glu_glRectsv->GetFunction());

    Local<FunctionTemplate> _glu_glVertexPointer = FunctionTemplate::New(glu_glVertexPointer);
    target->Set(String::New("glVertexPointer"), _glu_glVertexPointer->GetFunction());

    Local<FunctionTemplate> _glu_glNormalPointer = FunctionTemplate::New(glu_glNormalPointer);
    target->Set(String::New("glNormalPointer"), _glu_glNormalPointer->GetFunction());

    Local<FunctionTemplate> _glu_glColorPointer = FunctionTemplate::New(glu_glColorPointer);
    target->Set(String::New("glColorPointer"), _glu_glColorPointer->GetFunction());

    Local<FunctionTemplate> _glu_glIndexPointer = FunctionTemplate::New(glu_glIndexPointer);
    target->Set(String::New("glIndexPointer"), _glu_glIndexPointer->GetFunction());

    Local<FunctionTemplate> _glu_glTexCoordPointer = FunctionTemplate::New(glu_glTexCoordPointer);
    target->Set(String::New("glTexCoordPointer"), _glu_glTexCoordPointer->GetFunction());

    Local<FunctionTemplate> _glu_glEdgeFlagPointer = FunctionTemplate::New(glu_glEdgeFlagPointer);
    target->Set(String::New("glEdgeFlagPointer"), _glu_glEdgeFlagPointer->GetFunction());

    Local<FunctionTemplate> _glu_glGetPointerv = FunctionTemplate::New(glu_glGetPointerv);
    target->Set(String::New("glGetPointerv"), _glu_glGetPointerv->GetFunction());

    Local<FunctionTemplate> _glu_glArrayElement = FunctionTemplate::New(glu_glArrayElement);
    target->Set(String::New("glArrayElement"), _glu_glArrayElement->GetFunction());

    Local<FunctionTemplate> _glu_glDrawArrays = FunctionTemplate::New(glu_glDrawArrays);
    target->Set(String::New("glDrawArrays"), _glu_glDrawArrays->GetFunction());

    Local<FunctionTemplate> _glu_glDrawElements = FunctionTemplate::New(glu_glDrawElements);
    target->Set(String::New("glDrawElements"), _glu_glDrawElements->GetFunction());

    Local<FunctionTemplate> _glu_glInterleavedArrays = FunctionTemplate::New(glu_glInterleavedArrays);
    target->Set(String::New("glInterleavedArrays"), _glu_glInterleavedArrays->GetFunction());

    Local<FunctionTemplate> _glu_glShadeModel = FunctionTemplate::New(glu_glShadeModel);
    target->Set(String::New("glShadeModel"), _glu_glShadeModel->GetFunction());

    Local<FunctionTemplate> _glu_glLightf = FunctionTemplate::New(glu_glLightf);
    target->Set(String::New("glLightf"), _glu_glLightf->GetFunction());

    Local<FunctionTemplate> _glu_glLighti = FunctionTemplate::New(glu_glLighti);
    target->Set(String::New("glLighti"), _glu_glLighti->GetFunction());

    Local<FunctionTemplate> _glu_glLightfv = FunctionTemplate::New(glu_glLightfv);
    target->Set(String::New("glLightfv"), _glu_glLightfv->GetFunction());

    Local<FunctionTemplate> _glu_glLightiv = FunctionTemplate::New(glu_glLightiv);
    target->Set(String::New("glLightiv"), _glu_glLightiv->GetFunction());

    Local<FunctionTemplate> _glu_glGetLightfv = FunctionTemplate::New(glu_glGetLightfv);
    target->Set(String::New("glGetLightfv"), _glu_glGetLightfv->GetFunction());

    Local<FunctionTemplate> _glu_glGetLightiv = FunctionTemplate::New(glu_glGetLightiv);
    target->Set(String::New("glGetLightiv"), _glu_glGetLightiv->GetFunction());

    Local<FunctionTemplate> _glu_glLightModelf = FunctionTemplate::New(glu_glLightModelf);
    target->Set(String::New("glLightModelf"), _glu_glLightModelf->GetFunction());

    Local<FunctionTemplate> _glu_glLightModeli = FunctionTemplate::New(glu_glLightModeli);
    target->Set(String::New("glLightModeli"), _glu_glLightModeli->GetFunction());

    Local<FunctionTemplate> _glu_glLightModelfv = FunctionTemplate::New(glu_glLightModelfv);
    target->Set(String::New("glLightModelfv"), _glu_glLightModelfv->GetFunction());

    Local<FunctionTemplate> _glu_glLightModeliv = FunctionTemplate::New(glu_glLightModeliv);
    target->Set(String::New("glLightModeliv"), _glu_glLightModeliv->GetFunction());

    Local<FunctionTemplate> _glu_glMaterialf = FunctionTemplate::New(glu_glMaterialf);
    target->Set(String::New("glMaterialf"), _glu_glMaterialf->GetFunction());

    Local<FunctionTemplate> _glu_glMateriali = FunctionTemplate::New(glu_glMateriali);
    target->Set(String::New("glMateriali"), _glu_glMateriali->GetFunction());

    Local<FunctionTemplate> _glu_glMaterialfv = FunctionTemplate::New(glu_glMaterialfv);
    target->Set(String::New("glMaterialfv"), _glu_glMaterialfv->GetFunction());

    Local<FunctionTemplate> _glu_glMaterialiv = FunctionTemplate::New(glu_glMaterialiv);
    target->Set(String::New("glMaterialiv"), _glu_glMaterialiv->GetFunction());

    Local<FunctionTemplate> _glu_glGetMaterialfv = FunctionTemplate::New(glu_glGetMaterialfv);
    target->Set(String::New("glGetMaterialfv"), _glu_glGetMaterialfv->GetFunction());

    Local<FunctionTemplate> _glu_glGetMaterialiv = FunctionTemplate::New(glu_glGetMaterialiv);
    target->Set(String::New("glGetMaterialiv"), _glu_glGetMaterialiv->GetFunction());

    Local<FunctionTemplate> _glu_glColorMaterial = FunctionTemplate::New(glu_glColorMaterial);
    target->Set(String::New("glColorMaterial"), _glu_glColorMaterial->GetFunction());

    Local<FunctionTemplate> _glu_glPixelZoom = FunctionTemplate::New(glu_glPixelZoom);
    target->Set(String::New("glPixelZoom"), _glu_glPixelZoom->GetFunction());

    Local<FunctionTemplate> _glu_glPixelStoref = FunctionTemplate::New(glu_glPixelStoref);
    target->Set(String::New("glPixelStoref"), _glu_glPixelStoref->GetFunction());

    Local<FunctionTemplate> _glu_glPixelStorei = FunctionTemplate::New(glu_glPixelStorei);
    target->Set(String::New("glPixelStorei"), _glu_glPixelStorei->GetFunction());

    Local<FunctionTemplate> _glu_glPixelTransferf = FunctionTemplate::New(glu_glPixelTransferf);
    target->Set(String::New("glPixelTransferf"), _glu_glPixelTransferf->GetFunction());

    Local<FunctionTemplate> _glu_glPixelTransferi = FunctionTemplate::New(glu_glPixelTransferi);
    target->Set(String::New("glPixelTransferi"), _glu_glPixelTransferi->GetFunction());

    Local<FunctionTemplate> _glu_glPixelMapfv = FunctionTemplate::New(glu_glPixelMapfv);
    target->Set(String::New("glPixelMapfv"), _glu_glPixelMapfv->GetFunction());

    Local<FunctionTemplate> _glu_glPixelMapuiv = FunctionTemplate::New(glu_glPixelMapuiv);
    target->Set(String::New("glPixelMapuiv"), _glu_glPixelMapuiv->GetFunction());

    Local<FunctionTemplate> _glu_glPixelMapusv = FunctionTemplate::New(glu_glPixelMapusv);
    target->Set(String::New("glPixelMapusv"), _glu_glPixelMapusv->GetFunction());

    Local<FunctionTemplate> _glu_glGetPixelMapfv = FunctionTemplate::New(glu_glGetPixelMapfv);
    target->Set(String::New("glGetPixelMapfv"), _glu_glGetPixelMapfv->GetFunction());

    Local<FunctionTemplate> _glu_glGetPixelMapuiv = FunctionTemplate::New(glu_glGetPixelMapuiv);
    target->Set(String::New("glGetPixelMapuiv"), _glu_glGetPixelMapuiv->GetFunction());

    Local<FunctionTemplate> _glu_glGetPixelMapusv = FunctionTemplate::New(glu_glGetPixelMapusv);
    target->Set(String::New("glGetPixelMapusv"), _glu_glGetPixelMapusv->GetFunction());

    Local<FunctionTemplate> _glu_glBitmap = FunctionTemplate::New(glu_glBitmap);
    target->Set(String::New("glBitmap"), _glu_glBitmap->GetFunction());

    Local<FunctionTemplate> _glu_glReadPixels = FunctionTemplate::New(glu_glReadPixels);
    target->Set(String::New("glReadPixels"), _glu_glReadPixels->GetFunction());

    Local<FunctionTemplate> _glu_glDrawPixels = FunctionTemplate::New(glu_glDrawPixels);
    target->Set(String::New("glDrawPixels"), _glu_glDrawPixels->GetFunction());

    Local<FunctionTemplate> _glu_glCopyPixels = FunctionTemplate::New(glu_glCopyPixels);
    target->Set(String::New("glCopyPixels"), _glu_glCopyPixels->GetFunction());

    Local<FunctionTemplate> _glu_glStencilFunc = FunctionTemplate::New(glu_glStencilFunc);
    target->Set(String::New("glStencilFunc"), _glu_glStencilFunc->GetFunction());

    Local<FunctionTemplate> _glu_glStencilMask = FunctionTemplate::New(glu_glStencilMask);
    target->Set(String::New("glStencilMask"), _glu_glStencilMask->GetFunction());

    Local<FunctionTemplate> _glu_glStencilOp = FunctionTemplate::New(glu_glStencilOp);
    target->Set(String::New("glStencilOp"), _glu_glStencilOp->GetFunction());

    Local<FunctionTemplate> _glu_glClearStencil = FunctionTemplate::New(glu_glClearStencil);
    target->Set(String::New("glClearStencil"), _glu_glClearStencil->GetFunction());

    Local<FunctionTemplate> _glu_glTexGend = FunctionTemplate::New(glu_glTexGend);
    target->Set(String::New("glTexGend"), _glu_glTexGend->GetFunction());

    Local<FunctionTemplate> _glu_glTexGenf = FunctionTemplate::New(glu_glTexGenf);
    target->Set(String::New("glTexGenf"), _glu_glTexGenf->GetFunction());

    Local<FunctionTemplate> _glu_glTexGeni = FunctionTemplate::New(glu_glTexGeni);
    target->Set(String::New("glTexGeni"), _glu_glTexGeni->GetFunction());

    Local<FunctionTemplate> _glu_glTexGendv = FunctionTemplate::New(glu_glTexGendv);
    target->Set(String::New("glTexGendv"), _glu_glTexGendv->GetFunction());

    Local<FunctionTemplate> _glu_glTexGenfv = FunctionTemplate::New(glu_glTexGenfv);
    target->Set(String::New("glTexGenfv"), _glu_glTexGenfv->GetFunction());

    Local<FunctionTemplate> _glu_glTexGeniv = FunctionTemplate::New(glu_glTexGeniv);
    target->Set(String::New("glTexGeniv"), _glu_glTexGeniv->GetFunction());

    Local<FunctionTemplate> _glu_glGetTexGendv = FunctionTemplate::New(glu_glGetTexGendv);
    target->Set(String::New("glGetTexGendv"), _glu_glGetTexGendv->GetFunction());

    Local<FunctionTemplate> _glu_glGetTexGenfv = FunctionTemplate::New(glu_glGetTexGenfv);
    target->Set(String::New("glGetTexGenfv"), _glu_glGetTexGenfv->GetFunction());

    Local<FunctionTemplate> _glu_glGetTexGeniv = FunctionTemplate::New(glu_glGetTexGeniv);
    target->Set(String::New("glGetTexGeniv"), _glu_glGetTexGeniv->GetFunction());

    Local<FunctionTemplate> _glu_glTexEnvf = FunctionTemplate::New(glu_glTexEnvf);
    target->Set(String::New("glTexEnvf"), _glu_glTexEnvf->GetFunction());

    Local<FunctionTemplate> _glu_glTexEnvi = FunctionTemplate::New(glu_glTexEnvi);
    target->Set(String::New("glTexEnvi"), _glu_glTexEnvi->GetFunction());

    Local<FunctionTemplate> _glu_glTexEnvfv = FunctionTemplate::New(glu_glTexEnvfv);
    target->Set(String::New("glTexEnvfv"), _glu_glTexEnvfv->GetFunction());

    Local<FunctionTemplate> _glu_glTexEnviv = FunctionTemplate::New(glu_glTexEnviv);
    target->Set(String::New("glTexEnviv"), _glu_glTexEnviv->GetFunction());

    Local<FunctionTemplate> _glu_glGetTexEnvfv = FunctionTemplate::New(glu_glGetTexEnvfv);
    target->Set(String::New("glGetTexEnvfv"), _glu_glGetTexEnvfv->GetFunction());

    Local<FunctionTemplate> _glu_glGetTexEnviv = FunctionTemplate::New(glu_glGetTexEnviv);
    target->Set(String::New("glGetTexEnviv"), _glu_glGetTexEnviv->GetFunction());

    Local<FunctionTemplate> _glu_glTexParameterf = FunctionTemplate::New(glu_glTexParameterf);
    target->Set(String::New("glTexParameterf"), _glu_glTexParameterf->GetFunction());

    Local<FunctionTemplate> _glu_glTexParameteri = FunctionTemplate::New(glu_glTexParameteri);
    target->Set(String::New("glTexParameteri"), _glu_glTexParameteri->GetFunction());

    Local<FunctionTemplate> _glu_glTexParameterfv = FunctionTemplate::New(glu_glTexParameterfv);
    target->Set(String::New("glTexParameterfv"), _glu_glTexParameterfv->GetFunction());

    Local<FunctionTemplate> _glu_glTexParameteriv = FunctionTemplate::New(glu_glTexParameteriv);
    target->Set(String::New("glTexParameteriv"), _glu_glTexParameteriv->GetFunction());

    Local<FunctionTemplate> _glu_glGetTexParameterfv = FunctionTemplate::New(glu_glGetTexParameterfv);
    target->Set(String::New("glGetTexParameterfv"), _glu_glGetTexParameterfv->GetFunction());

    Local<FunctionTemplate> _glu_glGetTexParameteriv = FunctionTemplate::New(glu_glGetTexParameteriv);
    target->Set(String::New("glGetTexParameteriv"), _glu_glGetTexParameteriv->GetFunction());

    Local<FunctionTemplate> _glu_glGetTexLevelParameterfv = FunctionTemplate::New(glu_glGetTexLevelParameterfv);
    target->Set(String::New("glGetTexLevelParameterfv"), _glu_glGetTexLevelParameterfv->GetFunction());

    Local<FunctionTemplate> _glu_glGetTexLevelParameteriv = FunctionTemplate::New(glu_glGetTexLevelParameteriv);
    target->Set(String::New("glGetTexLevelParameteriv"), _glu_glGetTexLevelParameteriv->GetFunction());

    Local<FunctionTemplate> _glu_glTexImage1D = FunctionTemplate::New(glu_glTexImage1D);
    target->Set(String::New("glTexImage1D"), _glu_glTexImage1D->GetFunction());

    Local<FunctionTemplate> _glu_glTexImage2D = FunctionTemplate::New(glu_glTexImage2D);
    target->Set(String::New("glTexImage2D"), _glu_glTexImage2D->GetFunction());

    Local<FunctionTemplate> _glu_glGetTexImage = FunctionTemplate::New(glu_glGetTexImage);
    target->Set(String::New("glGetTexImage"), _glu_glGetTexImage->GetFunction());

    Local<FunctionTemplate> _glu_glGenTextures = FunctionTemplate::New(glu_glGenTextures);
    target->Set(String::New("glGenTextures"), _glu_glGenTextures->GetFunction());

    Local<FunctionTemplate> _glu_glDeleteTextures = FunctionTemplate::New(glu_glDeleteTextures);
    target->Set(String::New("glDeleteTextures"), _glu_glDeleteTextures->GetFunction());

    Local<FunctionTemplate> _glu_glBindTexture = FunctionTemplate::New(glu_glBindTexture);
    target->Set(String::New("glBindTexture"), _glu_glBindTexture->GetFunction());

    Local<FunctionTemplate> _glu_glPrioritizeTextures = FunctionTemplate::New(glu_glPrioritizeTextures);
    target->Set(String::New("glPrioritizeTextures"), _glu_glPrioritizeTextures->GetFunction());

    Local<FunctionTemplate> _glu_glAreTexturesResident = FunctionTemplate::New(glu_glAreTexturesResident);
    target->Set(String::New("glAreTexturesResident"), _glu_glAreTexturesResident->GetFunction());

    Local<FunctionTemplate> _glu_glIsTexture = FunctionTemplate::New(glu_glIsTexture);
    target->Set(String::New("glIsTexture"), _glu_glIsTexture->GetFunction());

    Local<FunctionTemplate> _glu_glTexSubImage1D = FunctionTemplate::New(glu_glTexSubImage1D);
    target->Set(String::New("glTexSubImage1D"), _glu_glTexSubImage1D->GetFunction());

    Local<FunctionTemplate> _glu_glTexSubImage2D = FunctionTemplate::New(glu_glTexSubImage2D);
    target->Set(String::New("glTexSubImage2D"), _glu_glTexSubImage2D->GetFunction());

    Local<FunctionTemplate> _glu_glCopyTexImage1D = FunctionTemplate::New(glu_glCopyTexImage1D);
    target->Set(String::New("glCopyTexImage1D"), _glu_glCopyTexImage1D->GetFunction());

    Local<FunctionTemplate> _glu_glCopyTexImage2D = FunctionTemplate::New(glu_glCopyTexImage2D);
    target->Set(String::New("glCopyTexImage2D"), _glu_glCopyTexImage2D->GetFunction());

    Local<FunctionTemplate> _glu_glCopyTexSubImage1D = FunctionTemplate::New(glu_glCopyTexSubImage1D);
    target->Set(String::New("glCopyTexSubImage1D"), _glu_glCopyTexSubImage1D->GetFunction());

    Local<FunctionTemplate> _glu_glCopyTexSubImage2D = FunctionTemplate::New(glu_glCopyTexSubImage2D);
    target->Set(String::New("glCopyTexSubImage2D"), _glu_glCopyTexSubImage2D->GetFunction());

    Local<FunctionTemplate> _glu_glMap1d = FunctionTemplate::New(glu_glMap1d);
    target->Set(String::New("glMap1d"), _glu_glMap1d->GetFunction());

    Local<FunctionTemplate> _glu_glMap1f = FunctionTemplate::New(glu_glMap1f);
    target->Set(String::New("glMap1f"), _glu_glMap1f->GetFunction());

    Local<FunctionTemplate> _glu_glMap2d = FunctionTemplate::New(glu_glMap2d);
    target->Set(String::New("glMap2d"), _glu_glMap2d->GetFunction());

    Local<FunctionTemplate> _glu_glMap2f = FunctionTemplate::New(glu_glMap2f);
    target->Set(String::New("glMap2f"), _glu_glMap2f->GetFunction());

    Local<FunctionTemplate> _glu_glGetMapdv = FunctionTemplate::New(glu_glGetMapdv);
    target->Set(String::New("glGetMapdv"), _glu_glGetMapdv->GetFunction());

    Local<FunctionTemplate> _glu_glGetMapfv = FunctionTemplate::New(glu_glGetMapfv);
    target->Set(String::New("glGetMapfv"), _glu_glGetMapfv->GetFunction());

    Local<FunctionTemplate> _glu_glGetMapiv = FunctionTemplate::New(glu_glGetMapiv);
    target->Set(String::New("glGetMapiv"), _glu_glGetMapiv->GetFunction());

    Local<FunctionTemplate> _glu_glEvalCoord1d = FunctionTemplate::New(glu_glEvalCoord1d);
    target->Set(String::New("glEvalCoord1d"), _glu_glEvalCoord1d->GetFunction());

    Local<FunctionTemplate> _glu_glEvalCoord1f = FunctionTemplate::New(glu_glEvalCoord1f);
    target->Set(String::New("glEvalCoord1f"), _glu_glEvalCoord1f->GetFunction());

    Local<FunctionTemplate> _glu_glEvalCoord1dv = FunctionTemplate::New(glu_glEvalCoord1dv);
    target->Set(String::New("glEvalCoord1dv"), _glu_glEvalCoord1dv->GetFunction());

    Local<FunctionTemplate> _glu_glEvalCoord1fv = FunctionTemplate::New(glu_glEvalCoord1fv);
    target->Set(String::New("glEvalCoord1fv"), _glu_glEvalCoord1fv->GetFunction());

    Local<FunctionTemplate> _glu_glEvalCoord2d = FunctionTemplate::New(glu_glEvalCoord2d);
    target->Set(String::New("glEvalCoord2d"), _glu_glEvalCoord2d->GetFunction());

    Local<FunctionTemplate> _glu_glEvalCoord2f = FunctionTemplate::New(glu_glEvalCoord2f);
    target->Set(String::New("glEvalCoord2f"), _glu_glEvalCoord2f->GetFunction());

    Local<FunctionTemplate> _glu_glEvalCoord2dv = FunctionTemplate::New(glu_glEvalCoord2dv);
    target->Set(String::New("glEvalCoord2dv"), _glu_glEvalCoord2dv->GetFunction());

    Local<FunctionTemplate> _glu_glEvalCoord2fv = FunctionTemplate::New(glu_glEvalCoord2fv);
    target->Set(String::New("glEvalCoord2fv"), _glu_glEvalCoord2fv->GetFunction());

    Local<FunctionTemplate> _glu_glMapGrid1d = FunctionTemplate::New(glu_glMapGrid1d);
    target->Set(String::New("glMapGrid1d"), _glu_glMapGrid1d->GetFunction());

    Local<FunctionTemplate> _glu_glMapGrid1f = FunctionTemplate::New(glu_glMapGrid1f);
    target->Set(String::New("glMapGrid1f"), _glu_glMapGrid1f->GetFunction());

    Local<FunctionTemplate> _glu_glMapGrid2d = FunctionTemplate::New(glu_glMapGrid2d);
    target->Set(String::New("glMapGrid2d"), _glu_glMapGrid2d->GetFunction());

    Local<FunctionTemplate> _glu_glMapGrid2f = FunctionTemplate::New(glu_glMapGrid2f);
    target->Set(String::New("glMapGrid2f"), _glu_glMapGrid2f->GetFunction());

    Local<FunctionTemplate> _glu_glEvalPoint1 = FunctionTemplate::New(glu_glEvalPoint1);
    target->Set(String::New("glEvalPoint1"), _glu_glEvalPoint1->GetFunction());

    Local<FunctionTemplate> _glu_glEvalPoint2 = FunctionTemplate::New(glu_glEvalPoint2);
    target->Set(String::New("glEvalPoint2"), _glu_glEvalPoint2->GetFunction());

    Local<FunctionTemplate> _glu_glEvalMesh1 = FunctionTemplate::New(glu_glEvalMesh1);
    target->Set(String::New("glEvalMesh1"), _glu_glEvalMesh1->GetFunction());

    Local<FunctionTemplate> _glu_glEvalMesh2 = FunctionTemplate::New(glu_glEvalMesh2);
    target->Set(String::New("glEvalMesh2"), _glu_glEvalMesh2->GetFunction());

    Local<FunctionTemplate> _glu_glFogf = FunctionTemplate::New(glu_glFogf);
    target->Set(String::New("glFogf"), _glu_glFogf->GetFunction());

    Local<FunctionTemplate> _glu_glFogi = FunctionTemplate::New(glu_glFogi);
    target->Set(String::New("glFogi"), _glu_glFogi->GetFunction());

    Local<FunctionTemplate> _glu_glFogfv = FunctionTemplate::New(glu_glFogfv);
    target->Set(String::New("glFogfv"), _glu_glFogfv->GetFunction());

    Local<FunctionTemplate> _glu_glFogiv = FunctionTemplate::New(glu_glFogiv);
    target->Set(String::New("glFogiv"), _glu_glFogiv->GetFunction());

    Local<FunctionTemplate> _glu_glFeedbackBuffer = FunctionTemplate::New(glu_glFeedbackBuffer);
    target->Set(String::New("glFeedbackBuffer"), _glu_glFeedbackBuffer->GetFunction());

    Local<FunctionTemplate> _glu_glPassThrough = FunctionTemplate::New(glu_glPassThrough);
    target->Set(String::New("glPassThrough"), _glu_glPassThrough->GetFunction());

    Local<FunctionTemplate> _glu_glSelectBuffer = FunctionTemplate::New(glu_glSelectBuffer);
    target->Set(String::New("glSelectBuffer"), _glu_glSelectBuffer->GetFunction());

    Local<FunctionTemplate> _glu_glInitNames = FunctionTemplate::New(glu_glInitNames);
    target->Set(String::New("glInitNames"), _glu_glInitNames->GetFunction());

    Local<FunctionTemplate> _glu_glLoadName = FunctionTemplate::New(glu_glLoadName);
    target->Set(String::New("glLoadName"), _glu_glLoadName->GetFunction());

    Local<FunctionTemplate> _glu_glPushName = FunctionTemplate::New(glu_glPushName);
    target->Set(String::New("glPushName"), _glu_glPushName->GetFunction());

    Local<FunctionTemplate> _glu_glPopName = FunctionTemplate::New(glu_glPopName);
    target->Set(String::New("glPopName"), _glu_glPopName->GetFunction());

    Local<FunctionTemplate> _glu_glDrawRangeElements = FunctionTemplate::New(glu_glDrawRangeElements);
    target->Set(String::New("glDrawRangeElements"), _glu_glDrawRangeElements->GetFunction());

    Local<FunctionTemplate> _glu_glTexImage3D = FunctionTemplate::New(glu_glTexImage3D);
    target->Set(String::New("glTexImage3D"), _glu_glTexImage3D->GetFunction());

    Local<FunctionTemplate> _glu_glTexSubImage3D = FunctionTemplate::New(glu_glTexSubImage3D);
    target->Set(String::New("glTexSubImage3D"), _glu_glTexSubImage3D->GetFunction());

    Local<FunctionTemplate> _glu_glCopyTexSubImage3D = FunctionTemplate::New(glu_glCopyTexSubImage3D);
    target->Set(String::New("glCopyTexSubImage3D"), _glu_glCopyTexSubImage3D->GetFunction());

    Local<FunctionTemplate> _glu_glColorTable = FunctionTemplate::New(glu_glColorTable);
    target->Set(String::New("glColorTable"), _glu_glColorTable->GetFunction());

    Local<FunctionTemplate> _glu_glColorSubTable = FunctionTemplate::New(glu_glColorSubTable);
    target->Set(String::New("glColorSubTable"), _glu_glColorSubTable->GetFunction());

    Local<FunctionTemplate> _glu_glColorTableParameteriv = FunctionTemplate::New(glu_glColorTableParameteriv);
    target->Set(String::New("glColorTableParameteriv"), _glu_glColorTableParameteriv->GetFunction());

    Local<FunctionTemplate> _glu_glColorTableParameterfv = FunctionTemplate::New(glu_glColorTableParameterfv);
    target->Set(String::New("glColorTableParameterfv"), _glu_glColorTableParameterfv->GetFunction());

    Local<FunctionTemplate> _glu_glCopyColorSubTable = FunctionTemplate::New(glu_glCopyColorSubTable);
    target->Set(String::New("glCopyColorSubTable"), _glu_glCopyColorSubTable->GetFunction());

    Local<FunctionTemplate> _glu_glCopyColorTable = FunctionTemplate::New(glu_glCopyColorTable);
    target->Set(String::New("glCopyColorTable"), _glu_glCopyColorTable->GetFunction());

    Local<FunctionTemplate> _glu_glGetColorTable = FunctionTemplate::New(glu_glGetColorTable);
    target->Set(String::New("glGetColorTable"), _glu_glGetColorTable->GetFunction());

    Local<FunctionTemplate> _glu_glGetColorTableParameterfv = FunctionTemplate::New(glu_glGetColorTableParameterfv);
    target->Set(String::New("glGetColorTableParameterfv"), _glu_glGetColorTableParameterfv->GetFunction());

    Local<FunctionTemplate> _glu_glGetColorTableParameteriv = FunctionTemplate::New(glu_glGetColorTableParameteriv);
    target->Set(String::New("glGetColorTableParameteriv"), _glu_glGetColorTableParameteriv->GetFunction());

    Local<FunctionTemplate> _glu_glBlendEquation = FunctionTemplate::New(glu_glBlendEquation);
    target->Set(String::New("glBlendEquation"), _glu_glBlendEquation->GetFunction());

    Local<FunctionTemplate> _glu_glBlendColor = FunctionTemplate::New(glu_glBlendColor);
    target->Set(String::New("glBlendColor"), _glu_glBlendColor->GetFunction());

    Local<FunctionTemplate> _glu_glHistogram = FunctionTemplate::New(glu_glHistogram);
    target->Set(String::New("glHistogram"), _glu_glHistogram->GetFunction());

    Local<FunctionTemplate> _glu_glResetHistogram = FunctionTemplate::New(glu_glResetHistogram);
    target->Set(String::New("glResetHistogram"), _glu_glResetHistogram->GetFunction());

    Local<FunctionTemplate> _glu_glGetHistogram = FunctionTemplate::New(glu_glGetHistogram);
    target->Set(String::New("glGetHistogram"), _glu_glGetHistogram->GetFunction());

    Local<FunctionTemplate> _glu_glGetHistogramParameterfv = FunctionTemplate::New(glu_glGetHistogramParameterfv);
    target->Set(String::New("glGetHistogramParameterfv"), _glu_glGetHistogramParameterfv->GetFunction());

    Local<FunctionTemplate> _glu_glGetHistogramParameteriv = FunctionTemplate::New(glu_glGetHistogramParameteriv);
    target->Set(String::New("glGetHistogramParameteriv"), _glu_glGetHistogramParameteriv->GetFunction());

    Local<FunctionTemplate> _glu_glMinmax = FunctionTemplate::New(glu_glMinmax);
    target->Set(String::New("glMinmax"), _glu_glMinmax->GetFunction());

    Local<FunctionTemplate> _glu_glResetMinmax = FunctionTemplate::New(glu_glResetMinmax);
    target->Set(String::New("glResetMinmax"), _glu_glResetMinmax->GetFunction());

    Local<FunctionTemplate> _glu_glGetMinmax = FunctionTemplate::New(glu_glGetMinmax);
    target->Set(String::New("glGetMinmax"), _glu_glGetMinmax->GetFunction());

    Local<FunctionTemplate> _glu_glGetMinmaxParameterfv = FunctionTemplate::New(glu_glGetMinmaxParameterfv);
    target->Set(String::New("glGetMinmaxParameterfv"), _glu_glGetMinmaxParameterfv->GetFunction());

    Local<FunctionTemplate> _glu_glGetMinmaxParameteriv = FunctionTemplate::New(glu_glGetMinmaxParameteriv);
    target->Set(String::New("glGetMinmaxParameteriv"), _glu_glGetMinmaxParameteriv->GetFunction());

    Local<FunctionTemplate> _glu_glConvolutionFilter1D = FunctionTemplate::New(glu_glConvolutionFilter1D);
    target->Set(String::New("glConvolutionFilter1D"), _glu_glConvolutionFilter1D->GetFunction());

    Local<FunctionTemplate> _glu_glConvolutionFilter2D = FunctionTemplate::New(glu_glConvolutionFilter2D);
    target->Set(String::New("glConvolutionFilter2D"), _glu_glConvolutionFilter2D->GetFunction());

    Local<FunctionTemplate> _glu_glConvolutionParameterf = FunctionTemplate::New(glu_glConvolutionParameterf);
    target->Set(String::New("glConvolutionParameterf"), _glu_glConvolutionParameterf->GetFunction());

    Local<FunctionTemplate> _glu_glConvolutionParameterfv = FunctionTemplate::New(glu_glConvolutionParameterfv);
    target->Set(String::New("glConvolutionParameterfv"), _glu_glConvolutionParameterfv->GetFunction());

    Local<FunctionTemplate> _glu_glConvolutionParameteri = FunctionTemplate::New(glu_glConvolutionParameteri);
    target->Set(String::New("glConvolutionParameteri"), _glu_glConvolutionParameteri->GetFunction());

    Local<FunctionTemplate> _glu_glConvolutionParameteriv = FunctionTemplate::New(glu_glConvolutionParameteriv);
    target->Set(String::New("glConvolutionParameteriv"), _glu_glConvolutionParameteriv->GetFunction());

    Local<FunctionTemplate> _glu_glCopyConvolutionFilter1D = FunctionTemplate::New(glu_glCopyConvolutionFilter1D);
    target->Set(String::New("glCopyConvolutionFilter1D"), _glu_glCopyConvolutionFilter1D->GetFunction());

    Local<FunctionTemplate> _glu_glCopyConvolutionFilter2D = FunctionTemplate::New(glu_glCopyConvolutionFilter2D);
    target->Set(String::New("glCopyConvolutionFilter2D"), _glu_glCopyConvolutionFilter2D->GetFunction());

    Local<FunctionTemplate> _glu_glGetConvolutionFilter = FunctionTemplate::New(glu_glGetConvolutionFilter);
    target->Set(String::New("glGetConvolutionFilter"), _glu_glGetConvolutionFilter->GetFunction());

    Local<FunctionTemplate> _glu_glGetConvolutionParameterfv = FunctionTemplate::New(glu_glGetConvolutionParameterfv);
    target->Set(String::New("glGetConvolutionParameterfv"), _glu_glGetConvolutionParameterfv->GetFunction());

    Local<FunctionTemplate> _glu_glGetConvolutionParameteriv = FunctionTemplate::New(glu_glGetConvolutionParameteriv);
    target->Set(String::New("glGetConvolutionParameteriv"), _glu_glGetConvolutionParameteriv->GetFunction());

    Local<FunctionTemplate> _glu_glSeparableFilter2D = FunctionTemplate::New(glu_glSeparableFilter2D);
    target->Set(String::New("glSeparableFilter2D"), _glu_glSeparableFilter2D->GetFunction());

    Local<FunctionTemplate> _glu_glGetSeparableFilter = FunctionTemplate::New(glu_glGetSeparableFilter);
    target->Set(String::New("glGetSeparableFilter"), _glu_glGetSeparableFilter->GetFunction());

    Local<FunctionTemplate> _glu_glActiveTexture = FunctionTemplate::New(glu_glActiveTexture);
    target->Set(String::New("glActiveTexture"), _glu_glActiveTexture->GetFunction());

    Local<FunctionTemplate> _glu_glClientActiveTexture = FunctionTemplate::New(glu_glClientActiveTexture);
    target->Set(String::New("glClientActiveTexture"), _glu_glClientActiveTexture->GetFunction());

    Local<FunctionTemplate> _glu_glCompressedTexImage1D = FunctionTemplate::New(glu_glCompressedTexImage1D);
    target->Set(String::New("glCompressedTexImage1D"), _glu_glCompressedTexImage1D->GetFunction());

    Local<FunctionTemplate> _glu_glCompressedTexImage2D = FunctionTemplate::New(glu_glCompressedTexImage2D);
    target->Set(String::New("glCompressedTexImage2D"), _glu_glCompressedTexImage2D->GetFunction());

    Local<FunctionTemplate> _glu_glCompressedTexImage3D = FunctionTemplate::New(glu_glCompressedTexImage3D);
    target->Set(String::New("glCompressedTexImage3D"), _glu_glCompressedTexImage3D->GetFunction());

    Local<FunctionTemplate> _glu_glCompressedTexSubImage1D = FunctionTemplate::New(glu_glCompressedTexSubImage1D);
    target->Set(String::New("glCompressedTexSubImage1D"), _glu_glCompressedTexSubImage1D->GetFunction());

    Local<FunctionTemplate> _glu_glCompressedTexSubImage2D = FunctionTemplate::New(glu_glCompressedTexSubImage2D);
    target->Set(String::New("glCompressedTexSubImage2D"), _glu_glCompressedTexSubImage2D->GetFunction());

    Local<FunctionTemplate> _glu_glCompressedTexSubImage3D = FunctionTemplate::New(glu_glCompressedTexSubImage3D);
    target->Set(String::New("glCompressedTexSubImage3D"), _glu_glCompressedTexSubImage3D->GetFunction());

    Local<FunctionTemplate> _glu_glGetCompressedTexImage = FunctionTemplate::New(glu_glGetCompressedTexImage);
    target->Set(String::New("glGetCompressedTexImage"), _glu_glGetCompressedTexImage->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord1d = FunctionTemplate::New(glu_glMultiTexCoord1d);
    target->Set(String::New("glMultiTexCoord1d"), _glu_glMultiTexCoord1d->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord1dv = FunctionTemplate::New(glu_glMultiTexCoord1dv);
    target->Set(String::New("glMultiTexCoord1dv"), _glu_glMultiTexCoord1dv->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord1f = FunctionTemplate::New(glu_glMultiTexCoord1f);
    target->Set(String::New("glMultiTexCoord1f"), _glu_glMultiTexCoord1f->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord1fv = FunctionTemplate::New(glu_glMultiTexCoord1fv);
    target->Set(String::New("glMultiTexCoord1fv"), _glu_glMultiTexCoord1fv->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord1i = FunctionTemplate::New(glu_glMultiTexCoord1i);
    target->Set(String::New("glMultiTexCoord1i"), _glu_glMultiTexCoord1i->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord1iv = FunctionTemplate::New(glu_glMultiTexCoord1iv);
    target->Set(String::New("glMultiTexCoord1iv"), _glu_glMultiTexCoord1iv->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord1s = FunctionTemplate::New(glu_glMultiTexCoord1s);
    target->Set(String::New("glMultiTexCoord1s"), _glu_glMultiTexCoord1s->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord1sv = FunctionTemplate::New(glu_glMultiTexCoord1sv);
    target->Set(String::New("glMultiTexCoord1sv"), _glu_glMultiTexCoord1sv->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord2d = FunctionTemplate::New(glu_glMultiTexCoord2d);
    target->Set(String::New("glMultiTexCoord2d"), _glu_glMultiTexCoord2d->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord2dv = FunctionTemplate::New(glu_glMultiTexCoord2dv);
    target->Set(String::New("glMultiTexCoord2dv"), _glu_glMultiTexCoord2dv->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord2f = FunctionTemplate::New(glu_glMultiTexCoord2f);
    target->Set(String::New("glMultiTexCoord2f"), _glu_glMultiTexCoord2f->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord2fv = FunctionTemplate::New(glu_glMultiTexCoord2fv);
    target->Set(String::New("glMultiTexCoord2fv"), _glu_glMultiTexCoord2fv->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord2i = FunctionTemplate::New(glu_glMultiTexCoord2i);
    target->Set(String::New("glMultiTexCoord2i"), _glu_glMultiTexCoord2i->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord2iv = FunctionTemplate::New(glu_glMultiTexCoord2iv);
    target->Set(String::New("glMultiTexCoord2iv"), _glu_glMultiTexCoord2iv->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord2s = FunctionTemplate::New(glu_glMultiTexCoord2s);
    target->Set(String::New("glMultiTexCoord2s"), _glu_glMultiTexCoord2s->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord2sv = FunctionTemplate::New(glu_glMultiTexCoord2sv);
    target->Set(String::New("glMultiTexCoord2sv"), _glu_glMultiTexCoord2sv->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord3d = FunctionTemplate::New(glu_glMultiTexCoord3d);
    target->Set(String::New("glMultiTexCoord3d"), _glu_glMultiTexCoord3d->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord3dv = FunctionTemplate::New(glu_glMultiTexCoord3dv);
    target->Set(String::New("glMultiTexCoord3dv"), _glu_glMultiTexCoord3dv->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord3f = FunctionTemplate::New(glu_glMultiTexCoord3f);
    target->Set(String::New("glMultiTexCoord3f"), _glu_glMultiTexCoord3f->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord3fv = FunctionTemplate::New(glu_glMultiTexCoord3fv);
    target->Set(String::New("glMultiTexCoord3fv"), _glu_glMultiTexCoord3fv->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord3i = FunctionTemplate::New(glu_glMultiTexCoord3i);
    target->Set(String::New("glMultiTexCoord3i"), _glu_glMultiTexCoord3i->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord3iv = FunctionTemplate::New(glu_glMultiTexCoord3iv);
    target->Set(String::New("glMultiTexCoord3iv"), _glu_glMultiTexCoord3iv->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord3s = FunctionTemplate::New(glu_glMultiTexCoord3s);
    target->Set(String::New("glMultiTexCoord3s"), _glu_glMultiTexCoord3s->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord3sv = FunctionTemplate::New(glu_glMultiTexCoord3sv);
    target->Set(String::New("glMultiTexCoord3sv"), _glu_glMultiTexCoord3sv->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord4d = FunctionTemplate::New(glu_glMultiTexCoord4d);
    target->Set(String::New("glMultiTexCoord4d"), _glu_glMultiTexCoord4d->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord4dv = FunctionTemplate::New(glu_glMultiTexCoord4dv);
    target->Set(String::New("glMultiTexCoord4dv"), _glu_glMultiTexCoord4dv->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord4f = FunctionTemplate::New(glu_glMultiTexCoord4f);
    target->Set(String::New("glMultiTexCoord4f"), _glu_glMultiTexCoord4f->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord4fv = FunctionTemplate::New(glu_glMultiTexCoord4fv);
    target->Set(String::New("glMultiTexCoord4fv"), _glu_glMultiTexCoord4fv->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord4i = FunctionTemplate::New(glu_glMultiTexCoord4i);
    target->Set(String::New("glMultiTexCoord4i"), _glu_glMultiTexCoord4i->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord4iv = FunctionTemplate::New(glu_glMultiTexCoord4iv);
    target->Set(String::New("glMultiTexCoord4iv"), _glu_glMultiTexCoord4iv->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord4s = FunctionTemplate::New(glu_glMultiTexCoord4s);
    target->Set(String::New("glMultiTexCoord4s"), _glu_glMultiTexCoord4s->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord4sv = FunctionTemplate::New(glu_glMultiTexCoord4sv);
    target->Set(String::New("glMultiTexCoord4sv"), _glu_glMultiTexCoord4sv->GetFunction());

    Local<FunctionTemplate> _glu_glLoadTransposeMatrixd = FunctionTemplate::New(glu_glLoadTransposeMatrixd);
    target->Set(String::New("glLoadTransposeMatrixd"), _glu_glLoadTransposeMatrixd->GetFunction());

    Local<FunctionTemplate> _glu_glLoadTransposeMatrixf = FunctionTemplate::New(glu_glLoadTransposeMatrixf);
    target->Set(String::New("glLoadTransposeMatrixf"), _glu_glLoadTransposeMatrixf->GetFunction());

    Local<FunctionTemplate> _glu_glMultTransposeMatrixd = FunctionTemplate::New(glu_glMultTransposeMatrixd);
    target->Set(String::New("glMultTransposeMatrixd"), _glu_glMultTransposeMatrixd->GetFunction());

    Local<FunctionTemplate> _glu_glMultTransposeMatrixf = FunctionTemplate::New(glu_glMultTransposeMatrixf);
    target->Set(String::New("glMultTransposeMatrixf"), _glu_glMultTransposeMatrixf->GetFunction());

    Local<FunctionTemplate> _glu_glSampleCoverage = FunctionTemplate::New(glu_glSampleCoverage);
    target->Set(String::New("glSampleCoverage"), _glu_glSampleCoverage->GetFunction());

    Local<FunctionTemplate> _glu_glActiveTextureARB = FunctionTemplate::New(glu_glActiveTextureARB);
    target->Set(String::New("glActiveTextureARB"), _glu_glActiveTextureARB->GetFunction());

    Local<FunctionTemplate> _glu_glClientActiveTextureARB = FunctionTemplate::New(glu_glClientActiveTextureARB);
    target->Set(String::New("glClientActiveTextureARB"), _glu_glClientActiveTextureARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord1dARB = FunctionTemplate::New(glu_glMultiTexCoord1dARB);
    target->Set(String::New("glMultiTexCoord1dARB"), _glu_glMultiTexCoord1dARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord1dvARB = FunctionTemplate::New(glu_glMultiTexCoord1dvARB);
    target->Set(String::New("glMultiTexCoord1dvARB"), _glu_glMultiTexCoord1dvARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord1fARB = FunctionTemplate::New(glu_glMultiTexCoord1fARB);
    target->Set(String::New("glMultiTexCoord1fARB"), _glu_glMultiTexCoord1fARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord1fvARB = FunctionTemplate::New(glu_glMultiTexCoord1fvARB);
    target->Set(String::New("glMultiTexCoord1fvARB"), _glu_glMultiTexCoord1fvARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord1iARB = FunctionTemplate::New(glu_glMultiTexCoord1iARB);
    target->Set(String::New("glMultiTexCoord1iARB"), _glu_glMultiTexCoord1iARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord1ivARB = FunctionTemplate::New(glu_glMultiTexCoord1ivARB);
    target->Set(String::New("glMultiTexCoord1ivARB"), _glu_glMultiTexCoord1ivARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord1sARB = FunctionTemplate::New(glu_glMultiTexCoord1sARB);
    target->Set(String::New("glMultiTexCoord1sARB"), _glu_glMultiTexCoord1sARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord1svARB = FunctionTemplate::New(glu_glMultiTexCoord1svARB);
    target->Set(String::New("glMultiTexCoord1svARB"), _glu_glMultiTexCoord1svARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord2dARB = FunctionTemplate::New(glu_glMultiTexCoord2dARB);
    target->Set(String::New("glMultiTexCoord2dARB"), _glu_glMultiTexCoord2dARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord2dvARB = FunctionTemplate::New(glu_glMultiTexCoord2dvARB);
    target->Set(String::New("glMultiTexCoord2dvARB"), _glu_glMultiTexCoord2dvARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord2fARB = FunctionTemplate::New(glu_glMultiTexCoord2fARB);
    target->Set(String::New("glMultiTexCoord2fARB"), _glu_glMultiTexCoord2fARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord2fvARB = FunctionTemplate::New(glu_glMultiTexCoord2fvARB);
    target->Set(String::New("glMultiTexCoord2fvARB"), _glu_glMultiTexCoord2fvARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord2iARB = FunctionTemplate::New(glu_glMultiTexCoord2iARB);
    target->Set(String::New("glMultiTexCoord2iARB"), _glu_glMultiTexCoord2iARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord2ivARB = FunctionTemplate::New(glu_glMultiTexCoord2ivARB);
    target->Set(String::New("glMultiTexCoord2ivARB"), _glu_glMultiTexCoord2ivARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord2sARB = FunctionTemplate::New(glu_glMultiTexCoord2sARB);
    target->Set(String::New("glMultiTexCoord2sARB"), _glu_glMultiTexCoord2sARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord2svARB = FunctionTemplate::New(glu_glMultiTexCoord2svARB);
    target->Set(String::New("glMultiTexCoord2svARB"), _glu_glMultiTexCoord2svARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord3dARB = FunctionTemplate::New(glu_glMultiTexCoord3dARB);
    target->Set(String::New("glMultiTexCoord3dARB"), _glu_glMultiTexCoord3dARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord3dvARB = FunctionTemplate::New(glu_glMultiTexCoord3dvARB);
    target->Set(String::New("glMultiTexCoord3dvARB"), _glu_glMultiTexCoord3dvARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord3fARB = FunctionTemplate::New(glu_glMultiTexCoord3fARB);
    target->Set(String::New("glMultiTexCoord3fARB"), _glu_glMultiTexCoord3fARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord3fvARB = FunctionTemplate::New(glu_glMultiTexCoord3fvARB);
    target->Set(String::New("glMultiTexCoord3fvARB"), _glu_glMultiTexCoord3fvARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord3iARB = FunctionTemplate::New(glu_glMultiTexCoord3iARB);
    target->Set(String::New("glMultiTexCoord3iARB"), _glu_glMultiTexCoord3iARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord3ivARB = FunctionTemplate::New(glu_glMultiTexCoord3ivARB);
    target->Set(String::New("glMultiTexCoord3ivARB"), _glu_glMultiTexCoord3ivARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord3sARB = FunctionTemplate::New(glu_glMultiTexCoord3sARB);
    target->Set(String::New("glMultiTexCoord3sARB"), _glu_glMultiTexCoord3sARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord3svARB = FunctionTemplate::New(glu_glMultiTexCoord3svARB);
    target->Set(String::New("glMultiTexCoord3svARB"), _glu_glMultiTexCoord3svARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord4dARB = FunctionTemplate::New(glu_glMultiTexCoord4dARB);
    target->Set(String::New("glMultiTexCoord4dARB"), _glu_glMultiTexCoord4dARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord4dvARB = FunctionTemplate::New(glu_glMultiTexCoord4dvARB);
    target->Set(String::New("glMultiTexCoord4dvARB"), _glu_glMultiTexCoord4dvARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord4fARB = FunctionTemplate::New(glu_glMultiTexCoord4fARB);
    target->Set(String::New("glMultiTexCoord4fARB"), _glu_glMultiTexCoord4fARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord4fvARB = FunctionTemplate::New(glu_glMultiTexCoord4fvARB);
    target->Set(String::New("glMultiTexCoord4fvARB"), _glu_glMultiTexCoord4fvARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord4iARB = FunctionTemplate::New(glu_glMultiTexCoord4iARB);
    target->Set(String::New("glMultiTexCoord4iARB"), _glu_glMultiTexCoord4iARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord4ivARB = FunctionTemplate::New(glu_glMultiTexCoord4ivARB);
    target->Set(String::New("glMultiTexCoord4ivARB"), _glu_glMultiTexCoord4ivARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord4sARB = FunctionTemplate::New(glu_glMultiTexCoord4sARB);
    target->Set(String::New("glMultiTexCoord4sARB"), _glu_glMultiTexCoord4sARB->GetFunction());

    Local<FunctionTemplate> _glu_glMultiTexCoord4svARB = FunctionTemplate::New(glu_glMultiTexCoord4svARB);
    target->Set(String::New("glMultiTexCoord4svARB"), _glu_glMultiTexCoord4svARB->GetFunction());

    Local<FunctionTemplate> _glu_imaxabs = FunctionTemplate::New(glu_imaxabs);
    target->Set(String::New("imaxabs"), _glu_imaxabs->GetFunction());

    Local<FunctionTemplate> _glu_imaxdiv = FunctionTemplate::New(glu_imaxdiv);
    target->Set(String::New("imaxdiv"), _glu_imaxdiv->GetFunction());

    Local<FunctionTemplate> _glu_strtoimax = FunctionTemplate::New(glu_strtoimax);
    target->Set(String::New("strtoimax"), _glu_strtoimax->GetFunction());

    Local<FunctionTemplate> _glu_strtoumax = FunctionTemplate::New(glu_strtoumax);
    target->Set(String::New("strtoumax"), _glu_strtoumax->GetFunction());

    Local<FunctionTemplate> _glu_wcstoimax = FunctionTemplate::New(glu_wcstoimax);
    target->Set(String::New("wcstoimax"), _glu_wcstoimax->GetFunction());

    Local<FunctionTemplate> _glu_wcstoumax = FunctionTemplate::New(glu_wcstoumax);
    target->Set(String::New("wcstoumax"), _glu_wcstoumax->GetFunction());

    Local<FunctionTemplate> _glu_glCreateDebugObjectMESA = FunctionTemplate::New(glu_glCreateDebugObjectMESA);
    target->Set(String::New("glCreateDebugObjectMESA"), _glu_glCreateDebugObjectMESA->GetFunction());

    Local<FunctionTemplate> _glu_glClearDebugLogMESA = FunctionTemplate::New(glu_glClearDebugLogMESA);
    target->Set(String::New("glClearDebugLogMESA"), _glu_glClearDebugLogMESA->GetFunction());

    Local<FunctionTemplate> _glu_glGetDebugLogMESA = FunctionTemplate::New(glu_glGetDebugLogMESA);
    target->Set(String::New("glGetDebugLogMESA"), _glu_glGetDebugLogMESA->GetFunction());

    Local<FunctionTemplate> _glu_glGetDebugLogLengthMESA = FunctionTemplate::New(glu_glGetDebugLogLengthMESA);
    target->Set(String::New("glGetDebugLogLengthMESA"), _glu_glGetDebugLogLengthMESA->GetFunction());

    Local<FunctionTemplate> _glu_glProgramCallbackMESA = FunctionTemplate::New(glu_glProgramCallbackMESA);
    target->Set(String::New("glProgramCallbackMESA"), _glu_glProgramCallbackMESA->GetFunction());

    Local<FunctionTemplate> _glu_glGetProgramRegisterfvMESA = FunctionTemplate::New(glu_glGetProgramRegisterfvMESA);
    target->Set(String::New("glGetProgramRegisterfvMESA"), _glu_glGetProgramRegisterfvMESA->GetFunction());

    Local<FunctionTemplate> _glu_glBlendEquationSeparateATI = FunctionTemplate::New(glu_glBlendEquationSeparateATI);
    target->Set(String::New("glBlendEquationSeparateATI"), _glu_glBlendEquationSeparateATI->GetFunction());

    Local<FunctionTemplate> _glu_gluBeginCurve = FunctionTemplate::New(glu_gluBeginCurve);
    target->Set(String::New("gluBeginCurve"), _glu_gluBeginCurve->GetFunction());

    Local<FunctionTemplate> _glu_gluBeginPolygon = FunctionTemplate::New(glu_gluBeginPolygon);
    target->Set(String::New("gluBeginPolygon"), _glu_gluBeginPolygon->GetFunction());

    Local<FunctionTemplate> _glu_gluBeginSurface = FunctionTemplate::New(glu_gluBeginSurface);
    target->Set(String::New("gluBeginSurface"), _glu_gluBeginSurface->GetFunction());

    Local<FunctionTemplate> _glu_gluBeginTrim = FunctionTemplate::New(glu_gluBeginTrim);
    target->Set(String::New("gluBeginTrim"), _glu_gluBeginTrim->GetFunction());

    Local<FunctionTemplate> _glu_gluBuild1DMipmapLevels = FunctionTemplate::New(glu_gluBuild1DMipmapLevels);
    target->Set(String::New("gluBuild1DMipmapLevels"), _glu_gluBuild1DMipmapLevels->GetFunction());

    Local<FunctionTemplate> _glu_gluBuild1DMipmaps = FunctionTemplate::New(glu_gluBuild1DMipmaps);
    target->Set(String::New("gluBuild1DMipmaps"), _glu_gluBuild1DMipmaps->GetFunction());

    Local<FunctionTemplate> _glu_gluBuild2DMipmapLevels = FunctionTemplate::New(glu_gluBuild2DMipmapLevels);
    target->Set(String::New("gluBuild2DMipmapLevels"), _glu_gluBuild2DMipmapLevels->GetFunction());

    Local<FunctionTemplate> _glu_gluBuild2DMipmaps = FunctionTemplate::New(glu_gluBuild2DMipmaps);
    target->Set(String::New("gluBuild2DMipmaps"), _glu_gluBuild2DMipmaps->GetFunction());

    Local<FunctionTemplate> _glu_gluBuild3DMipmapLevels = FunctionTemplate::New(glu_gluBuild3DMipmapLevels);
    target->Set(String::New("gluBuild3DMipmapLevels"), _glu_gluBuild3DMipmapLevels->GetFunction());

    Local<FunctionTemplate> _glu_gluBuild3DMipmaps = FunctionTemplate::New(glu_gluBuild3DMipmaps);
    target->Set(String::New("gluBuild3DMipmaps"), _glu_gluBuild3DMipmaps->GetFunction());

    Local<FunctionTemplate> _glu_gluCheckExtension = FunctionTemplate::New(glu_gluCheckExtension);
    target->Set(String::New("gluCheckExtension"), _glu_gluCheckExtension->GetFunction());

    Local<FunctionTemplate> _glu_gluCylinder = FunctionTemplate::New(glu_gluCylinder);
    target->Set(String::New("gluCylinder"), _glu_gluCylinder->GetFunction());

    Local<FunctionTemplate> _glu_gluDeleteNurbsRenderer = FunctionTemplate::New(glu_gluDeleteNurbsRenderer);
    target->Set(String::New("gluDeleteNurbsRenderer"), _glu_gluDeleteNurbsRenderer->GetFunction());

    Local<FunctionTemplate> _glu_gluDeleteQuadric = FunctionTemplate::New(glu_gluDeleteQuadric);
    target->Set(String::New("gluDeleteQuadric"), _glu_gluDeleteQuadric->GetFunction());

    Local<FunctionTemplate> _glu_gluDeleteTess = FunctionTemplate::New(glu_gluDeleteTess);
    target->Set(String::New("gluDeleteTess"), _glu_gluDeleteTess->GetFunction());

    Local<FunctionTemplate> _glu_gluDisk = FunctionTemplate::New(glu_gluDisk);
    target->Set(String::New("gluDisk"), _glu_gluDisk->GetFunction());

    Local<FunctionTemplate> _glu_gluEndCurve = FunctionTemplate::New(glu_gluEndCurve);
    target->Set(String::New("gluEndCurve"), _glu_gluEndCurve->GetFunction());

    Local<FunctionTemplate> _glu_gluEndPolygon = FunctionTemplate::New(glu_gluEndPolygon);
    target->Set(String::New("gluEndPolygon"), _glu_gluEndPolygon->GetFunction());

    Local<FunctionTemplate> _glu_gluEndSurface = FunctionTemplate::New(glu_gluEndSurface);
    target->Set(String::New("gluEndSurface"), _glu_gluEndSurface->GetFunction());

    Local<FunctionTemplate> _glu_gluEndTrim = FunctionTemplate::New(glu_gluEndTrim);
    target->Set(String::New("gluEndTrim"), _glu_gluEndTrim->GetFunction());

    Local<FunctionTemplate> _glu_gluGetNurbsProperty = FunctionTemplate::New(glu_gluGetNurbsProperty);
    target->Set(String::New("gluGetNurbsProperty"), _glu_gluGetNurbsProperty->GetFunction());

    Local<FunctionTemplate> _glu_gluGetTessProperty = FunctionTemplate::New(glu_gluGetTessProperty);
    target->Set(String::New("gluGetTessProperty"), _glu_gluGetTessProperty->GetFunction());

    Local<FunctionTemplate> _glu_gluLoadSamplingMatrices = FunctionTemplate::New(glu_gluLoadSamplingMatrices);
    target->Set(String::New("gluLoadSamplingMatrices"), _glu_gluLoadSamplingMatrices->GetFunction());

    Local<FunctionTemplate> _glu_gluLookAt = FunctionTemplate::New(glu_gluLookAt);
    target->Set(String::New("gluLookAt"), _glu_gluLookAt->GetFunction());

    Local<FunctionTemplate> _glu_gluNextContour = FunctionTemplate::New(glu_gluNextContour);
    target->Set(String::New("gluNextContour"), _glu_gluNextContour->GetFunction());

    Local<FunctionTemplate> _glu_gluNurbsCallback = FunctionTemplate::New(glu_gluNurbsCallback);
    target->Set(String::New("gluNurbsCallback"), _glu_gluNurbsCallback->GetFunction());

    Local<FunctionTemplate> _glu_gluNurbsCallbackData = FunctionTemplate::New(glu_gluNurbsCallbackData);
    target->Set(String::New("gluNurbsCallbackData"), _glu_gluNurbsCallbackData->GetFunction());

    Local<FunctionTemplate> _glu_gluNurbsCallbackDataEXT = FunctionTemplate::New(glu_gluNurbsCallbackDataEXT);
    target->Set(String::New("gluNurbsCallbackDataEXT"), _glu_gluNurbsCallbackDataEXT->GetFunction());

    Local<FunctionTemplate> _glu_gluNurbsCurve = FunctionTemplate::New(glu_gluNurbsCurve);
    target->Set(String::New("gluNurbsCurve"), _glu_gluNurbsCurve->GetFunction());

    Local<FunctionTemplate> _glu_gluNurbsProperty = FunctionTemplate::New(glu_gluNurbsProperty);
    target->Set(String::New("gluNurbsProperty"), _glu_gluNurbsProperty->GetFunction());

    Local<FunctionTemplate> _glu_gluNurbsSurface = FunctionTemplate::New(glu_gluNurbsSurface);
    target->Set(String::New("gluNurbsSurface"), _glu_gluNurbsSurface->GetFunction());

    Local<FunctionTemplate> _glu_gluOrtho2D = FunctionTemplate::New(glu_gluOrtho2D);
    target->Set(String::New("gluOrtho2D"), _glu_gluOrtho2D->GetFunction());

    Local<FunctionTemplate> _glu_gluPartialDisk = FunctionTemplate::New(glu_gluPartialDisk);
    target->Set(String::New("gluPartialDisk"), _glu_gluPartialDisk->GetFunction());

    Local<FunctionTemplate> _glu_gluPerspective = FunctionTemplate::New(glu_gluPerspective);
    target->Set(String::New("gluPerspective"), _glu_gluPerspective->GetFunction());

    Local<FunctionTemplate> _glu_gluPickMatrix = FunctionTemplate::New(glu_gluPickMatrix);
    target->Set(String::New("gluPickMatrix"), _glu_gluPickMatrix->GetFunction());

    Local<FunctionTemplate> _glu_gluProject = FunctionTemplate::New(glu_gluProject);
    target->Set(String::New("gluProject"), _glu_gluProject->GetFunction());

    Local<FunctionTemplate> _glu_gluPwlCurve = FunctionTemplate::New(glu_gluPwlCurve);
    target->Set(String::New("gluPwlCurve"), _glu_gluPwlCurve->GetFunction());

    Local<FunctionTemplate> _glu_gluQuadricCallback = FunctionTemplate::New(glu_gluQuadricCallback);
    target->Set(String::New("gluQuadricCallback"), _glu_gluQuadricCallback->GetFunction());

    Local<FunctionTemplate> _glu_gluQuadricDrawStyle = FunctionTemplate::New(glu_gluQuadricDrawStyle);
    target->Set(String::New("gluQuadricDrawStyle"), _glu_gluQuadricDrawStyle->GetFunction());

    Local<FunctionTemplate> _glu_gluQuadricNormals = FunctionTemplate::New(glu_gluQuadricNormals);
    target->Set(String::New("gluQuadricNormals"), _glu_gluQuadricNormals->GetFunction());

    Local<FunctionTemplate> _glu_gluQuadricOrientation = FunctionTemplate::New(glu_gluQuadricOrientation);
    target->Set(String::New("gluQuadricOrientation"), _glu_gluQuadricOrientation->GetFunction());

    Local<FunctionTemplate> _glu_gluQuadricTexture = FunctionTemplate::New(glu_gluQuadricTexture);
    target->Set(String::New("gluQuadricTexture"), _glu_gluQuadricTexture->GetFunction());

    Local<FunctionTemplate> _glu_gluScaleImage = FunctionTemplate::New(glu_gluScaleImage);
    target->Set(String::New("gluScaleImage"), _glu_gluScaleImage->GetFunction());

    Local<FunctionTemplate> _glu_gluSphere = FunctionTemplate::New(glu_gluSphere);
    target->Set(String::New("gluSphere"), _glu_gluSphere->GetFunction());

    Local<FunctionTemplate> _glu_gluTessBeginContour = FunctionTemplate::New(glu_gluTessBeginContour);
    target->Set(String::New("gluTessBeginContour"), _glu_gluTessBeginContour->GetFunction());

    Local<FunctionTemplate> _glu_gluTessBeginPolygon = FunctionTemplate::New(glu_gluTessBeginPolygon);
    target->Set(String::New("gluTessBeginPolygon"), _glu_gluTessBeginPolygon->GetFunction());

    Local<FunctionTemplate> _glu_gluTessCallback = FunctionTemplate::New(glu_gluTessCallback);
    target->Set(String::New("gluTessCallback"), _glu_gluTessCallback->GetFunction());

    Local<FunctionTemplate> _glu_gluTessEndContour = FunctionTemplate::New(glu_gluTessEndContour);
    target->Set(String::New("gluTessEndContour"), _glu_gluTessEndContour->GetFunction());

    Local<FunctionTemplate> _glu_gluTessEndPolygon = FunctionTemplate::New(glu_gluTessEndPolygon);
    target->Set(String::New("gluTessEndPolygon"), _glu_gluTessEndPolygon->GetFunction());

    Local<FunctionTemplate> _glu_gluTessNormal = FunctionTemplate::New(glu_gluTessNormal);
    target->Set(String::New("gluTessNormal"), _glu_gluTessNormal->GetFunction());

    Local<FunctionTemplate> _glu_gluTessProperty = FunctionTemplate::New(glu_gluTessProperty);
    target->Set(String::New("gluTessProperty"), _glu_gluTessProperty->GetFunction());

    Local<FunctionTemplate> _glu_gluTessVertex = FunctionTemplate::New(glu_gluTessVertex);
    target->Set(String::New("gluTessVertex"), _glu_gluTessVertex->GetFunction());

    Local<FunctionTemplate> _glu_gluUnProject = FunctionTemplate::New(glu_gluUnProject);
    target->Set(String::New("gluUnProject"), _glu_gluUnProject->GetFunction());

    Local<FunctionTemplate> _glu_gluUnProject4 = FunctionTemplate::New(glu_gluUnProject4);
    target->Set(String::New("gluUnProject4"), _glu_gluUnProject4->GetFunction());


  }

}  // namespace node
