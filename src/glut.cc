#include <node.h>

// Includes
#include "glut.h"
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>

using namespace v8;
namespace node {

  /**
   * glClearIndex
   *
   * @param GLfloat c
   * @return void
   */
  Handle<Value> glut_glClearIndex(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glClearColor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glClear
   *
   * @param GLbitfield mask
   * @return void
   */
  Handle<Value> glut_glClear(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexMask
   *
   * @param GLuint mask
   * @return void
   */
  Handle<Value> glut_glIndexMask(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glColorMask(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glAlphaFunc
   *
   * @param GLenum func
   * @param GLclampf ref
   * @return void
   */
  Handle<Value> glut_glAlphaFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glBlendFunc
   *
   * @param GLenum sfactor
   * @param GLenum dfactor
   * @return void
   */
  Handle<Value> glut_glBlendFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLogicOp
   *
   * @param GLenum opcode
   * @return void
   */
  Handle<Value> glut_glLogicOp(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glCullFace
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glut_glCullFace(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glFrontFace
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glut_glFrontFace(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPointSize
   *
   * @param GLfloat size
   * @return void
   */
  Handle<Value> glut_glPointSize(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLineWidth
   *
   * @param GLfloat width
   * @return void
   */
  Handle<Value> glut_glLineWidth(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLineStipple
   *
   * @param GLint factor
   * @param GLushort pattern
   * @return void
   */
  Handle<Value> glut_glLineStipple(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPolygonMode
   *
   * @param GLenum face
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glut_glPolygonMode(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPolygonOffset
   *
   * @param GLfloat factor
   * @param GLfloat units
   * @return void
   */
  Handle<Value> glut_glPolygonOffset(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPolygonStipple
   *
   * @param const GLubyte *mask
   * @return void
   */
  Handle<Value> glut_glPolygonStipple(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetPolygonStipple
   *
   * @param GLubyte *mask
   * @return void
   */
  Handle<Value> glut_glGetPolygonStipple(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEdgeFlag
   *
   * @param GLboolean flag
   * @return void
   */
  Handle<Value> glut_glEdgeFlag(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEdgeFlagv
   *
   * @param const GLboolean *flag
   * @return void
   */
  Handle<Value> glut_glEdgeFlagv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glScissor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glClipPlane
   *
   * @param GLenum plane
   * @param const GLdouble *equation
   * @return void
   */
  Handle<Value> glut_glClipPlane(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetClipPlane
   *
   * @param GLenum plane
   * @param GLdouble *equation
   * @return void
   */
  Handle<Value> glut_glGetClipPlane(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glDrawBuffer
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glut_glDrawBuffer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glReadBuffer
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glut_glReadBuffer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEnable
   *
   * @param GLenum cap
   * @return void
   */
  Handle<Value> glut_glEnable(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glDisable
   *
   * @param GLenum cap
   * @return void
   */
  Handle<Value> glut_glDisable(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIsEnabled
   *
   * @param GLenum cap
   * @return GLboolean
   */
  Handle<Value> glut_glIsEnabled(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEnableClientState
   *
   * @param GLenum cap
   * @return void
   */
  Handle<Value> glut_glEnableClientState(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glDisableClientState
   *
   * @param GLenum cap
   * @return void
   */
  Handle<Value> glut_glDisableClientState(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetBooleanv
   *
   * @param GLenum pname
   * @param GLboolean *params
   * @return void
   */
  Handle<Value> glut_glGetBooleanv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetDoublev
   *
   * @param GLenum pname
   * @param GLdouble *params
   * @return void
   */
  Handle<Value> glut_glGetDoublev(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetFloatv
   *
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> glut_glGetFloatv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetIntegerv
   *
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glut_glGetIntegerv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPushAttrib
   *
   * @param GLbitfield mask
   * @return void
   */
  Handle<Value> glut_glPushAttrib(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPopAttrib
   *
   * @param void
   * @return void
   */
  Handle<Value> glut_glPopAttrib(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPushClientAttrib
   *
   * @param GLbitfield mask
   * @return void
   */
  Handle<Value> glut_glPushClientAttrib(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPopClientAttrib
   *
   * @param void
   * @return void
   */
  Handle<Value> glut_glPopClientAttrib(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRenderMode
   *
   * @param GLenum mode
   * @return GLint
   */
  Handle<Value> glut_glRenderMode(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetError
   *
   * @param void
   * @return GLenum
   */
  Handle<Value> glut_glGetError(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glFinish
   *
   * @param void
   * @return void
   */
  Handle<Value> glut_glFinish(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glFlush
   *
   * @param void
   * @return void
   */
  Handle<Value> glut_glFlush(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glHint
   *
   * @param GLenum target
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glut_glHint(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glClearDepth
   *
   * @param GLclampd depth
   * @return void
   */
  Handle<Value> glut_glClearDepth(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glDepthFunc
   *
   * @param GLenum func
   * @return void
   */
  Handle<Value> glut_glDepthFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glDepthMask
   *
   * @param GLboolean flag
   * @return void
   */
  Handle<Value> glut_glDepthMask(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glDepthRange
   *
   * @param GLclampd near_val
   * @param GLclampd far_val
   * @return void
   */
  Handle<Value> glut_glDepthRange(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glClearAccum(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glAccum
   *
   * @param GLenum op
   * @param GLfloat value
   * @return void
   */
  Handle<Value> glut_glAccum(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMatrixMode
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glut_glMatrixMode(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glOrtho(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glFrustum(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glViewport(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPushMatrix
   *
   * @param void
   * @return void
   */
  Handle<Value> glut_glPushMatrix(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPopMatrix
   *
   * @param void
   * @return void
   */
  Handle<Value> glut_glPopMatrix(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLoadIdentity
   *
   * @param void
   * @return void
   */
  Handle<Value> glut_glLoadIdentity(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLoadMatrixd
   *
   * @param const GLdouble *m
   * @return void
   */
  Handle<Value> glut_glLoadMatrixd(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLoadMatrixf
   *
   * @param const GLfloat *m
   * @return void
   */
  Handle<Value> glut_glLoadMatrixf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultMatrixd
   *
   * @param const GLdouble *m
   * @return void
   */
  Handle<Value> glut_glMultMatrixd(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultMatrixf
   *
   * @param const GLfloat *m
   * @return void
   */
  Handle<Value> glut_glMultMatrixf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glRotated(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glRotatef(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glScaled
   *
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @return void
   */
  Handle<Value> glut_glScaled(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glScalef
   *
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @return void
   */
  Handle<Value> glut_glScalef(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTranslated
   *
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @return void
   */
  Handle<Value> glut_glTranslated(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTranslatef
   *
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @return void
   */
  Handle<Value> glut_glTranslatef(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIsList
   *
   * @param GLuint list
   * @return GLboolean
   */
  Handle<Value> glut_glIsList(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glDeleteLists
   *
   * @param GLuint list
   * @param GLsizei range
   * @return void
   */
  Handle<Value> glut_glDeleteLists(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGenLists
   *
   * @param GLsizei range
   * @return GLuint
   */
  Handle<Value> glut_glGenLists(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNewList
   *
   * @param GLuint list
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glut_glNewList(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEndList
   *
   * @param void
   * @return void
   */
  Handle<Value> glut_glEndList(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glCallList
   *
   * @param GLuint list
   * @return void
   */
  Handle<Value> glut_glCallList(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glCallLists
   *
   * @param GLsizei n
   * @param GLenum type
   * @param const GLvoid *lists
   * @return void
   */
  Handle<Value> glut_glCallLists(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glListBase
   *
   * @param GLuint base
   * @return void
   */
  Handle<Value> glut_glListBase(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glBegin
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glut_glBegin(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEnd
   *
   * @param void
   * @return void
   */
  Handle<Value> glut_glEnd(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex2d
   *
   * @param GLdouble x
   * @param GLdouble y
   * @return void
   */
  Handle<Value> glut_glVertex2d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex2f
   *
   * @param GLfloat x
   * @param GLfloat y
   * @return void
   */
  Handle<Value> glut_glVertex2f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex2i
   *
   * @param GLint x
   * @param GLint y
   * @return void
   */
  Handle<Value> glut_glVertex2i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex2s
   *
   * @param GLshort x
   * @param GLshort y
   * @return void
   */
  Handle<Value> glut_glVertex2s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex3d
   *
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @return void
   */
  Handle<Value> glut_glVertex3d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex3f
   *
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @return void
   */
  Handle<Value> glut_glVertex3f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex3i
   *
   * @param GLint x
   * @param GLint y
   * @param GLint z
   * @return void
   */
  Handle<Value> glut_glVertex3i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex3s
   *
   * @param GLshort x
   * @param GLshort y
   * @param GLshort z
   * @return void
   */
  Handle<Value> glut_glVertex3s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glVertex4d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glVertex4f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glVertex4i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glVertex4s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex2dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glVertex2dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex2fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glVertex2fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex2iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glVertex2iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex2sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glVertex2sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glVertex3dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glVertex3fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glVertex3iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glVertex3sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex4dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glVertex4dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex4fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glVertex4fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex4iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glVertex4iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex4sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glVertex4sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNormal3b
   *
   * @param GLbyte nx
   * @param GLbyte ny
   * @param GLbyte nz
   * @return void
   */
  Handle<Value> glut_glNormal3b(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNormal3d
   *
   * @param GLdouble nx
   * @param GLdouble ny
   * @param GLdouble nz
   * @return void
   */
  Handle<Value> glut_glNormal3d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNormal3f
   *
   * @param GLfloat nx
   * @param GLfloat ny
   * @param GLfloat nz
   * @return void
   */
  Handle<Value> glut_glNormal3f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNormal3i
   *
   * @param GLint nx
   * @param GLint ny
   * @param GLint nz
   * @return void
   */
  Handle<Value> glut_glNormal3i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNormal3s
   *
   * @param GLshort nx
   * @param GLshort ny
   * @param GLshort nz
   * @return void
   */
  Handle<Value> glut_glNormal3s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNormal3bv
   *
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> glut_glNormal3bv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNormal3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glNormal3dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNormal3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glNormal3fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNormal3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glNormal3iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNormal3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glNormal3sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexd
   *
   * @param GLdouble c
   * @return void
   */
  Handle<Value> glut_glIndexd(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexf
   *
   * @param GLfloat c
   * @return void
   */
  Handle<Value> glut_glIndexf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexi
   *
   * @param GLint c
   * @return void
   */
  Handle<Value> glut_glIndexi(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexs
   *
   * @param GLshort c
   * @return void
   */
  Handle<Value> glut_glIndexs(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexub
   *
   * @param GLubyte c
   * @return void
   */
  Handle<Value> glut_glIndexub(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexdv
   *
   * @param const GLdouble *c
   * @return void
   */
  Handle<Value> glut_glIndexdv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexfv
   *
   * @param const GLfloat *c
   * @return void
   */
  Handle<Value> glut_glIndexfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexiv
   *
   * @param const GLint *c
   * @return void
   */
  Handle<Value> glut_glIndexiv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexsv
   *
   * @param const GLshort *c
   * @return void
   */
  Handle<Value> glut_glIndexsv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexubv
   *
   * @param const GLubyte *c
   * @return void
   */
  Handle<Value> glut_glIndexubv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3b
   *
   * @param GLbyte red
   * @param GLbyte green
   * @param GLbyte blue
   * @return void
   */
  Handle<Value> glut_glColor3b(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3d
   *
   * @param GLdouble red
   * @param GLdouble green
   * @param GLdouble blue
   * @return void
   */
  Handle<Value> glut_glColor3d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3f
   *
   * @param GLfloat red
   * @param GLfloat green
   * @param GLfloat blue
   * @return void
   */
  Handle<Value> glut_glColor3f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3i
   *
   * @param GLint red
   * @param GLint green
   * @param GLint blue
   * @return void
   */
  Handle<Value> glut_glColor3i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3s
   *
   * @param GLshort red
   * @param GLshort green
   * @param GLshort blue
   * @return void
   */
  Handle<Value> glut_glColor3s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3ub
   *
   * @param GLubyte red
   * @param GLubyte green
   * @param GLubyte blue
   * @return void
   */
  Handle<Value> glut_glColor3ub(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3ui
   *
   * @param GLuint red
   * @param GLuint green
   * @param GLuint blue
   * @return void
   */
  Handle<Value> glut_glColor3ui(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3us
   *
   * @param GLushort red
   * @param GLushort green
   * @param GLushort blue
   * @return void
   */
  Handle<Value> glut_glColor3us(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glColor4b(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glColor4d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glColor4f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glColor4i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glColor4s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glColor4ub(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glColor4ui(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glColor4us(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3bv
   *
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> glut_glColor3bv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glColor3dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glColor3fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glColor3iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glColor3sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3ubv
   *
   * @param const GLubyte *v
   * @return void
   */
  Handle<Value> glut_glColor3ubv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3uiv
   *
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> glut_glColor3uiv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3usv
   *
   * @param const GLushort *v
   * @return void
   */
  Handle<Value> glut_glColor3usv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor4bv
   *
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> glut_glColor4bv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor4dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glColor4dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor4fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glColor4fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor4iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glColor4iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor4sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glColor4sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor4ubv
   *
   * @param const GLubyte *v
   * @return void
   */
  Handle<Value> glut_glColor4ubv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor4uiv
   *
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> glut_glColor4uiv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor4usv
   *
   * @param const GLushort *v
   * @return void
   */
  Handle<Value> glut_glColor4usv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord1d
   *
   * @param GLdouble s
   * @return void
   */
  Handle<Value> glut_glTexCoord1d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord1f
   *
   * @param GLfloat s
   * @return void
   */
  Handle<Value> glut_glTexCoord1f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord1i
   *
   * @param GLint s
   * @return void
   */
  Handle<Value> glut_glTexCoord1i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord1s
   *
   * @param GLshort s
   * @return void
   */
  Handle<Value> glut_glTexCoord1s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord2d
   *
   * @param GLdouble s
   * @param GLdouble t
   * @return void
   */
  Handle<Value> glut_glTexCoord2d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord2f
   *
   * @param GLfloat s
   * @param GLfloat t
   * @return void
   */
  Handle<Value> glut_glTexCoord2f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord2i
   *
   * @param GLint s
   * @param GLint t
   * @return void
   */
  Handle<Value> glut_glTexCoord2i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord2s
   *
   * @param GLshort s
   * @param GLshort t
   * @return void
   */
  Handle<Value> glut_glTexCoord2s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord3d
   *
   * @param GLdouble s
   * @param GLdouble t
   * @param GLdouble r
   * @return void
   */
  Handle<Value> glut_glTexCoord3d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord3f
   *
   * @param GLfloat s
   * @param GLfloat t
   * @param GLfloat r
   * @return void
   */
  Handle<Value> glut_glTexCoord3f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord3i
   *
   * @param GLint s
   * @param GLint t
   * @param GLint r
   * @return void
   */
  Handle<Value> glut_glTexCoord3i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord3s
   *
   * @param GLshort s
   * @param GLshort t
   * @param GLshort r
   * @return void
   */
  Handle<Value> glut_glTexCoord3s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glTexCoord4d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glTexCoord4f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glTexCoord4i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glTexCoord4s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord1dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glTexCoord1dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord1fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glTexCoord1fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord1iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glTexCoord1iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord1sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glTexCoord1sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord2dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glTexCoord2dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord2fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glTexCoord2fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord2iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glTexCoord2iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord2sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glTexCoord2sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glTexCoord3dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glTexCoord3fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glTexCoord3iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glTexCoord3sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord4dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glTexCoord4dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord4fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glTexCoord4fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord4iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glTexCoord4iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord4sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glTexCoord4sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos2d
   *
   * @param GLdouble x
   * @param GLdouble y
   * @return void
   */
  Handle<Value> glut_glRasterPos2d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos2f
   *
   * @param GLfloat x
   * @param GLfloat y
   * @return void
   */
  Handle<Value> glut_glRasterPos2f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos2i
   *
   * @param GLint x
   * @param GLint y
   * @return void
   */
  Handle<Value> glut_glRasterPos2i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos2s
   *
   * @param GLshort x
   * @param GLshort y
   * @return void
   */
  Handle<Value> glut_glRasterPos2s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos3d
   *
   * @param GLdouble x
   * @param GLdouble y
   * @param GLdouble z
   * @return void
   */
  Handle<Value> glut_glRasterPos3d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos3f
   *
   * @param GLfloat x
   * @param GLfloat y
   * @param GLfloat z
   * @return void
   */
  Handle<Value> glut_glRasterPos3f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos3i
   *
   * @param GLint x
   * @param GLint y
   * @param GLint z
   * @return void
   */
  Handle<Value> glut_glRasterPos3i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos3s
   *
   * @param GLshort x
   * @param GLshort y
   * @param GLshort z
   * @return void
   */
  Handle<Value> glut_glRasterPos3s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glRasterPos4d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glRasterPos4f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glRasterPos4i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glRasterPos4s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos2dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glRasterPos2dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos2fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glRasterPos2fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos2iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glRasterPos2iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos2sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glRasterPos2sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glRasterPos3dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glRasterPos3fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glRasterPos3iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glRasterPos3sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos4dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glRasterPos4dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos4fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glRasterPos4fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos4iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glRasterPos4iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos4sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glRasterPos4sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glRectd(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glRectf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glRecti(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glRects(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRectdv
   *
   * @param const GLdouble *v1
   * @param const GLdouble *v2
   * @return void
   */
  Handle<Value> glut_glRectdv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRectfv
   *
   * @param const GLfloat *v1
   * @param const GLfloat *v2
   * @return void
   */
  Handle<Value> glut_glRectfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRectiv
   *
   * @param const GLint *v1
   * @param const GLint *v2
   * @return void
   */
  Handle<Value> glut_glRectiv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRectsv
   *
   * @param const GLshort *v1
   * @param const GLshort *v2
   * @return void
   */
  Handle<Value> glut_glRectsv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glVertexPointer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNormalPointer
   *
   * @param GLenum type
   * @param GLsizei stride
   * @param const GLvoid *ptr
   * @return void
   */
  Handle<Value> glut_glNormalPointer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glColorPointer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexPointer
   *
   * @param GLenum type
   * @param GLsizei stride
   * @param const GLvoid *ptr
   * @return void
   */
  Handle<Value> glut_glIndexPointer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glTexCoordPointer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEdgeFlagPointer
   *
   * @param GLsizei stride
   * @param const GLvoid *ptr
   * @return void
   */
  Handle<Value> glut_glEdgeFlagPointer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetPointerv
   *
   * @param GLenum pname
   * @param GLvoid **params
   * @return void
   */
  Handle<Value> glut_glGetPointerv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glArrayElement
   *
   * @param GLint i
   * @return void
   */
  Handle<Value> glut_glArrayElement(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glDrawArrays
   *
   * @param GLenum mode
   * @param GLint first
   * @param GLsizei count
   * @return void
   */
  Handle<Value> glut_glDrawArrays(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glDrawElements(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glInterleavedArrays
   *
   * @param GLenum format
   * @param GLsizei stride
   * @param const GLvoid *pointer
   * @return void
   */
  Handle<Value> glut_glInterleavedArrays(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glShadeModel
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glut_glShadeModel(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLightf
   *
   * @param GLenum light
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> glut_glLightf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLighti
   *
   * @param GLenum light
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glut_glLighti(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLightfv
   *
   * @param GLenum light
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glut_glLightfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLightiv
   *
   * @param GLenum light
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glut_glLightiv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetLightfv
   *
   * @param GLenum light
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> glut_glGetLightfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetLightiv
   *
   * @param GLenum light
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glut_glGetLightiv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLightModelf
   *
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> glut_glLightModelf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLightModeli
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glut_glLightModeli(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLightModelfv
   *
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glut_glLightModelfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLightModeliv
   *
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glut_glLightModeliv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMaterialf
   *
   * @param GLenum face
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> glut_glMaterialf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMateriali
   *
   * @param GLenum face
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glut_glMateriali(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMaterialfv
   *
   * @param GLenum face
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glut_glMaterialfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMaterialiv
   *
   * @param GLenum face
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glut_glMaterialiv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetMaterialfv
   *
   * @param GLenum face
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> glut_glGetMaterialfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetMaterialiv
   *
   * @param GLenum face
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glut_glGetMaterialiv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColorMaterial
   *
   * @param GLenum face
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glut_glColorMaterial(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPixelZoom
   *
   * @param GLfloat xfactor
   * @param GLfloat yfactor
   * @return void
   */
  Handle<Value> glut_glPixelZoom(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPixelStoref
   *
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> glut_glPixelStoref(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPixelStorei
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glut_glPixelStorei(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPixelTransferf
   *
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> glut_glPixelTransferf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPixelTransferi
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glut_glPixelTransferi(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPixelMapfv
   *
   * @param GLenum map
   * @param GLsizei mapsize
   * @param const GLfloat *values
   * @return void
   */
  Handle<Value> glut_glPixelMapfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPixelMapuiv
   *
   * @param GLenum map
   * @param GLsizei mapsize
   * @param const GLuint *values
   * @return void
   */
  Handle<Value> glut_glPixelMapuiv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPixelMapusv
   *
   * @param GLenum map
   * @param GLsizei mapsize
   * @param const GLushort *values
   * @return void
   */
  Handle<Value> glut_glPixelMapusv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetPixelMapfv
   *
   * @param GLenum map
   * @param GLfloat *values
   * @return void
   */
  Handle<Value> glut_glGetPixelMapfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetPixelMapuiv
   *
   * @param GLenum map
   * @param GLuint *values
   * @return void
   */
  Handle<Value> glut_glGetPixelMapuiv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetPixelMapusv
   *
   * @param GLenum map
   * @param GLushort *values
   * @return void
   */
  Handle<Value> glut_glGetPixelMapusv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glBitmap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glReadPixels(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glDrawPixels(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glCopyPixels(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glStencilFunc
   *
   * @param GLenum func
   * @param GLint ref
   * @param GLuint mask
   * @return void
   */
  Handle<Value> glut_glStencilFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glStencilMask
   *
   * @param GLuint mask
   * @return void
   */
  Handle<Value> glut_glStencilMask(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glStencilOp
   *
   * @param GLenum fail
   * @param GLenum zfail
   * @param GLenum zpass
   * @return void
   */
  Handle<Value> glut_glStencilOp(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glClearStencil
   *
   * @param GLint s
   * @return void
   */
  Handle<Value> glut_glClearStencil(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexGend
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLdouble param
   * @return void
   */
  Handle<Value> glut_glTexGend(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexGenf
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> glut_glTexGenf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexGeni
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glut_glTexGeni(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexGendv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param const GLdouble *params
   * @return void
   */
  Handle<Value> glut_glTexGendv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexGenfv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glut_glTexGenfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexGeniv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glut_glTexGeniv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetTexGendv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLdouble *params
   * @return void
   */
  Handle<Value> glut_glGetTexGendv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetTexGenfv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> glut_glGetTexGenfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetTexGeniv
   *
   * @param GLenum coord
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glut_glGetTexGeniv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexEnvf
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> glut_glTexEnvf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexEnvi
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glut_glTexEnvi(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexEnvfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glut_glTexEnvfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexEnviv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glut_glTexEnviv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetTexEnvfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> glut_glGetTexEnvfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetTexEnviv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glut_glGetTexEnviv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexParameterf
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> glut_glTexParameterf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexParameteri
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glut_glTexParameteri(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glut_glTexParameterfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glut_glTexParameteriv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetTexParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> glut_glGetTexParameterfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetTexParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glut_glGetTexParameteriv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glGetTexLevelParameterfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glGetTexLevelParameteriv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glTexImage1D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glTexImage2D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glGetTexImage(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGenTextures
   *
   * @param GLsizei n
   * @param GLuint *textures
   * @return void
   */
  Handle<Value> glut_glGenTextures(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glDeleteTextures
   *
   * @param GLsizei n
   * @param const GLuint *textures
   * @return void
   */
  Handle<Value> glut_glDeleteTextures(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glBindTexture
   *
   * @param GLenum target
   * @param GLuint texture
   * @return void
   */
  Handle<Value> glut_glBindTexture(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPrioritizeTextures
   *
   * @param GLsizei n
   * @param const GLuint *textures
   * @param const GLclampf *priorities
   * @return void
   */
  Handle<Value> glut_glPrioritizeTextures(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glAreTexturesResident
   *
   * @param GLsizei n
   * @param const GLuint *textures
   * @param GLboolean *residences
   * @return GLboolean
   */
  Handle<Value> glut_glAreTexturesResident(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIsTexture
   *
   * @param GLuint texture
   * @return GLboolean
   */
  Handle<Value> glut_glIsTexture(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glTexSubImage1D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glTexSubImage2D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glCopyTexImage1D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glCopyTexImage2D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glCopyTexSubImage1D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glCopyTexSubImage2D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMap1d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMap1f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMap2d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMap2f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetMapdv
   *
   * @param GLenum target
   * @param GLenum query
   * @param GLdouble *v
   * @return void
   */
  Handle<Value> glut_glGetMapdv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetMapfv
   *
   * @param GLenum target
   * @param GLenum query
   * @param GLfloat *v
   * @return void
   */
  Handle<Value> glut_glGetMapfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetMapiv
   *
   * @param GLenum target
   * @param GLenum query
   * @param GLint *v
   * @return void
   */
  Handle<Value> glut_glGetMapiv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalCoord1d
   *
   * @param GLdouble u
   * @return void
   */
  Handle<Value> glut_glEvalCoord1d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalCoord1f
   *
   * @param GLfloat u
   * @return void
   */
  Handle<Value> glut_glEvalCoord1f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalCoord1dv
   *
   * @param const GLdouble *u
   * @return void
   */
  Handle<Value> glut_glEvalCoord1dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalCoord1fv
   *
   * @param const GLfloat *u
   * @return void
   */
  Handle<Value> glut_glEvalCoord1fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalCoord2d
   *
   * @param GLdouble u
   * @param GLdouble v
   * @return void
   */
  Handle<Value> glut_glEvalCoord2d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalCoord2f
   *
   * @param GLfloat u
   * @param GLfloat v
   * @return void
   */
  Handle<Value> glut_glEvalCoord2f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalCoord2dv
   *
   * @param const GLdouble *u
   * @return void
   */
  Handle<Value> glut_glEvalCoord2dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalCoord2fv
   *
   * @param const GLfloat *u
   * @return void
   */
  Handle<Value> glut_glEvalCoord2fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMapGrid1d
   *
   * @param GLint un
   * @param GLdouble u1
   * @param GLdouble u2
   * @return void
   */
  Handle<Value> glut_glMapGrid1d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMapGrid1f
   *
   * @param GLint un
   * @param GLfloat u1
   * @param GLfloat u2
   * @return void
   */
  Handle<Value> glut_glMapGrid1f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMapGrid2d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMapGrid2f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalPoint1
   *
   * @param GLint i
   * @return void
   */
  Handle<Value> glut_glEvalPoint1(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalPoint2
   *
   * @param GLint i
   * @param GLint j
   * @return void
   */
  Handle<Value> glut_glEvalPoint2(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalMesh1
   *
   * @param GLenum mode
   * @param GLint i1
   * @param GLint i2
   * @return void
   */
  Handle<Value> glut_glEvalMesh1(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glEvalMesh2(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glFogf
   *
   * @param GLenum pname
   * @param GLfloat param
   * @return void
   */
  Handle<Value> glut_glFogf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glFogi
   *
   * @param GLenum pname
   * @param GLint param
   * @return void
   */
  Handle<Value> glut_glFogi(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glFogfv
   *
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glut_glFogfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glFogiv
   *
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glut_glFogiv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glFeedbackBuffer
   *
   * @param GLsizei size
   * @param GLenum type
   * @param GLfloat *buffer
   * @return void
   */
  Handle<Value> glut_glFeedbackBuffer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPassThrough
   *
   * @param GLfloat token
   * @return void
   */
  Handle<Value> glut_glPassThrough(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glSelectBuffer
   *
   * @param GLsizei size
   * @param GLuint *buffer
   * @return void
   */
  Handle<Value> glut_glSelectBuffer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glInitNames
   *
   * @param void
   * @return void
   */
  Handle<Value> glut_glInitNames(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLoadName
   *
   * @param GLuint name
   * @return void
   */
  Handle<Value> glut_glLoadName(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPushName
   *
   * @param GLuint name
   * @return void
   */
  Handle<Value> glut_glPushName(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPopName
   *
   * @param void
   * @return void
   */
  Handle<Value> glut_glPopName(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glDrawRangeElements(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glTexImage3D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glTexSubImage3D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glCopyTexSubImage3D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glColorTable(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glColorSubTable(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColorTableParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glut_glColorTableParameteriv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColorTableParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glut_glColorTableParameterfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glCopyColorSubTable(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glCopyColorTable(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glGetColorTable(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetColorTableParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> glut_glGetColorTableParameterfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetColorTableParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glut_glGetColorTableParameteriv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glBlendEquation
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glut_glBlendEquation(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glBlendColor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glHistogram(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glResetHistogram
   *
   * @param GLenum target
   * @return void
   */
  Handle<Value> glut_glResetHistogram(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glGetHistogram(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetHistogramParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> glut_glGetHistogramParameterfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetHistogramParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glut_glGetHistogramParameteriv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMinmax
   *
   * @param GLenum target
   * @param GLenum internalformat
   * @param GLboolean sink
   * @return void
   */
  Handle<Value> glut_glMinmax(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glResetMinmax
   *
   * @param GLenum target
   * @return void
   */
  Handle<Value> glut_glResetMinmax(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glGetMinmax(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetMinmaxParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> glut_glGetMinmaxParameterfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetMinmaxParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glut_glGetMinmaxParameteriv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glConvolutionFilter1D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glConvolutionFilter2D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glConvolutionParameterf
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat params
   * @return void
   */
  Handle<Value> glut_glConvolutionParameterf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glConvolutionParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLfloat *params
   * @return void
   */
  Handle<Value> glut_glConvolutionParameterfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glConvolutionParameteri
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint params
   * @return void
   */
  Handle<Value> glut_glConvolutionParameteri(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glConvolutionParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param const GLint *params
   * @return void
   */
  Handle<Value> glut_glConvolutionParameteriv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glCopyConvolutionFilter1D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glCopyConvolutionFilter2D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glGetConvolutionFilter(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetConvolutionParameterfv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLfloat *params
   * @return void
   */
  Handle<Value> glut_glGetConvolutionParameterfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetConvolutionParameteriv
   *
   * @param GLenum target
   * @param GLenum pname
   * @param GLint *params
   * @return void
   */
  Handle<Value> glut_glGetConvolutionParameteriv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glSeparableFilter2D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glGetSeparableFilter(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glActiveTexture
   *
   * @param GLenum texture
   * @return void
   */
  Handle<Value> glut_glActiveTexture(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glClientActiveTexture
   *
   * @param GLenum texture
   * @return void
   */
  Handle<Value> glut_glClientActiveTexture(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glCompressedTexImage1D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glCompressedTexImage2D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glCompressedTexImage3D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glCompressedTexSubImage1D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glCompressedTexSubImage2D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glCompressedTexSubImage3D(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetCompressedTexImage
   *
   * @param GLenum target
   * @param GLint lod
   * @param GLvoid *img
   * @return void
   */
  Handle<Value> glut_glGetCompressedTexImage(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord1d
   *
   * @param GLenum target
   * @param GLdouble s
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord1d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord1dv
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord1dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord1f
   *
   * @param GLenum target
   * @param GLfloat s
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord1f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord1fv
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord1fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord1i
   *
   * @param GLenum target
   * @param GLint s
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord1i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord1iv
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord1iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord1s
   *
   * @param GLenum target
   * @param GLshort s
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord1s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord1sv
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord1sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord2d
   *
   * @param GLenum target
   * @param GLdouble s
   * @param GLdouble t
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord2d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord2dv
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord2dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord2f
   *
   * @param GLenum target
   * @param GLfloat s
   * @param GLfloat t
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord2f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord2fv
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord2fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord2i
   *
   * @param GLenum target
   * @param GLint s
   * @param GLint t
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord2i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord2iv
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord2iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord2s
   *
   * @param GLenum target
   * @param GLshort s
   * @param GLshort t
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord2s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord2sv
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord2sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMultiTexCoord3d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord3dv
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord3dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMultiTexCoord3f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord3fv
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord3fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMultiTexCoord3i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord3iv
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord3iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMultiTexCoord3s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord3sv
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord3sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMultiTexCoord4d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord4dv
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord4dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMultiTexCoord4f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord4fv
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord4fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMultiTexCoord4i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord4iv
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord4iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMultiTexCoord4s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord4sv
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord4sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLoadTransposeMatrixd
   *
   * @param const GLdouble m[16]
   * @return void
   */
  Handle<Value> glut_glLoadTransposeMatrixd(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLoadTransposeMatrixf
   *
   * @param const GLfloat m[16]
   * @return void
   */
  Handle<Value> glut_glLoadTransposeMatrixf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultTransposeMatrixd
   *
   * @param const GLdouble m[16]
   * @return void
   */
  Handle<Value> glut_glMultTransposeMatrixd(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultTransposeMatrixf
   *
   * @param const GLfloat m[16]
   * @return void
   */
  Handle<Value> glut_glMultTransposeMatrixf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glSampleCoverage
   *
   * @param GLclampf value
   * @param GLboolean invert
   * @return void
   */
  Handle<Value> glut_glSampleCoverage(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glActiveTextureARB
   *
   * @param GLenum texture
   * @return void
   */
  Handle<Value> glut_glActiveTextureARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glClientActiveTextureARB
   *
   * @param GLenum texture
   * @return void
   */
  Handle<Value> glut_glClientActiveTextureARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord1dARB
   *
   * @param GLenum target
   * @param GLdouble s
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord1dARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord1dvARB
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord1dvARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord1fARB
   *
   * @param GLenum target
   * @param GLfloat s
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord1fARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord1fvARB
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord1fvARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord1iARB
   *
   * @param GLenum target
   * @param GLint s
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord1iARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord1ivARB
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord1ivARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord1sARB
   *
   * @param GLenum target
   * @param GLshort s
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord1sARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord1svARB
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord1svARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord2dARB
   *
   * @param GLenum target
   * @param GLdouble s
   * @param GLdouble t
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord2dARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord2dvARB
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord2dvARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord2fARB
   *
   * @param GLenum target
   * @param GLfloat s
   * @param GLfloat t
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord2fARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord2fvARB
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord2fvARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord2iARB
   *
   * @param GLenum target
   * @param GLint s
   * @param GLint t
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord2iARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord2ivARB
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord2ivARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord2sARB
   *
   * @param GLenum target
   * @param GLshort s
   * @param GLshort t
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord2sARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord2svARB
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord2svARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMultiTexCoord3dARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord3dvARB
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord3dvARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMultiTexCoord3fARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord3fvARB
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord3fvARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMultiTexCoord3iARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord3ivARB
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord3ivARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMultiTexCoord3sARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord3svARB
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord3svARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMultiTexCoord4dARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord4dvARB
   *
   * @param GLenum target
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord4dvARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMultiTexCoord4fARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord4fvARB
   *
   * @param GLenum target
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord4fvARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMultiTexCoord4iARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord4ivARB
   *
   * @param GLenum target
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord4ivARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glMultiTexCoord4sARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultiTexCoord4svARB
   *
   * @param GLenum target
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glut_glMultiTexCoord4svARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glProgramCallbackMESA
   *
   * @param GLenum target
   * @param GLprogramcallbackMESA callback
   * @param GLvoid *data
   * @return void
   */
  Handle<Value> glut_glProgramCallbackMESA(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
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
  Handle<Value> glut_glGetProgramRegisterfvMESA(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glBlendEquationSeparateATI
   *
   * @param GLenum modeRGB
   * @param GLenum modeA
   * @return void
   */
  Handle<Value> glut_glBlendEquationSeparateATI(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutInit
   *
   * @param int *argcp
   * @param char **argv
   * @return void
   */
  Handle<Value> glut_glutInit(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutInitDisplayMode
   *
   * @param unsigned int mode
   * @return void
   */
  Handle<Value> glut_glutInitDisplayMode(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutInitDisplayString
   *
   * @param const char *string
   * @return void
   */
  Handle<Value> glut_glutInitDisplayString(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutInitWindowPosition
   *
   * @param int x
   * @param int y
   * @return void
   */
  Handle<Value> glut_glutInitWindowPosition(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutInitWindowSize
   *
   * @param int width
   * @param int height
   * @return void
   */
  Handle<Value> glut_glutInitWindowSize(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutMainLoop(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutCreateWindow
   *
   * @param const char *title
   * @return int
   */
  Handle<Value> glut_glutCreateWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutCreateSubWindow
   *
   * @param int win
   * @param int x
   * @param int y
   * @param int width
   * @param int height
   * @return int
   */
  Handle<Value> glut_glutCreateSubWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutDestroyWindow
   *
   * @param int win
   * @return void
   */
  Handle<Value> glut_glutDestroyWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutPostRedisplay(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutPostWindowRedisplay
   *
   * @param int win
   * @return void
   */
  Handle<Value> glut_glutPostWindowRedisplay(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutSwapBuffers(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutGetWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSetWindow
   *
   * @param int win
   * @return void
   */
  Handle<Value> glut_glutSetWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSetWindowTitle
   *
   * @param const char *title
   * @return void
   */
  Handle<Value> glut_glutSetWindowTitle(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSetIconTitle
   *
   * @param const char *title
   * @return void
   */
  Handle<Value> glut_glutSetIconTitle(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutPositionWindow
   *
   * @param int x
   * @param int y
   * @return void
   */
  Handle<Value> glut_glutPositionWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutReshapeWindow
   *
   * @param int width
   * @param int height
   * @return void
   */
  Handle<Value> glut_glutReshapeWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutPopWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutPushWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutIconifyWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutShowWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutHideWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutFullScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSetCursor
   *
   * @param int cursor
   * @return void
   */
  Handle<Value> glut_glutSetCursor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutWarpPointer
   *
   * @param int x
   * @param int y
   * @return void
   */
  Handle<Value> glut_glutWarpPointer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutEstablishOverlay(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutRemoveOverlay(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutUseLayer
   *
   * @param GLenum layer
   * @return void
   */
  Handle<Value> glut_glutUseLayer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutPostOverlayRedisplay(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutPostWindowOverlayRedisplay
   *
   * @param int win
   * @return void
   */
  Handle<Value> glut_glutPostWindowOverlayRedisplay(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutShowOverlay(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutHideOverlay(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutCreateMenu
   *
   * @param void ( *func
   * @return int
   */
  Handle<Value> glut_glutCreateMenu(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutDestroyMenu
   *
   * @param int menu
   * @return void
   */
  Handle<Value> glut_glutDestroyMenu(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutGetMenu(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSetMenu
   *
   * @param int menu
   * @return void
   */
  Handle<Value> glut_glutSetMenu(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutAddMenuEntry
   *
   * @param const char *label
   * @param int value
   * @return void
   */
  Handle<Value> glut_glutAddMenuEntry(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutAddSubMenu
   *
   * @param const char *label
   * @param int submenu
   * @return void
   */
  Handle<Value> glut_glutAddSubMenu(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutChangeToMenuEntry
   *
   * @param int item
   * @param const char *label
   * @param int value
   * @return void
   */
  Handle<Value> glut_glutChangeToMenuEntry(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutChangeToSubMenu
   *
   * @param int item
   * @param const char *label
   * @param int submenu
   * @return void
   */
  Handle<Value> glut_glutChangeToSubMenu(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutRemoveMenuItem
   *
   * @param int item
   * @return void
   */
  Handle<Value> glut_glutRemoveMenuItem(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutAttachMenu
   *
   * @param int button
   * @return void
   */
  Handle<Value> glut_glutAttachMenu(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutDetachMenu
   *
   * @param int button
   * @return void
   */
  Handle<Value> glut_glutDetachMenu(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutDisplayFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutDisplayFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutReshapeFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutReshapeFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutKeyboardFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutKeyboardFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutMouseFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutMouseFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutMotionFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutMotionFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutPassiveMotionFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutPassiveMotionFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutEntryFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutEntryFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutVisibilityFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutVisibilityFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutIdleFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutIdleFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutTimerFunc
   *
   * @param unsigned int millis
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutTimerFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutMenuStateFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutMenuStateFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSpecialFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutSpecialFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSpaceballMotionFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutSpaceballMotionFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSpaceballRotateFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutSpaceballRotateFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSpaceballButtonFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutSpaceballButtonFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutButtonBoxFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutButtonBoxFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutDialsFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutDialsFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutTabletMotionFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutTabletMotionFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutTabletButtonFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutTabletButtonFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutMenuStatusFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutMenuStatusFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutOverlayDisplayFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutOverlayDisplayFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutWindowStatusFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutWindowStatusFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutKeyboardUpFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutKeyboardUpFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSpecialUpFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutSpecialUpFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutJoystickFunc
   *
   * @param void ( *func
   * @return void
   */
  Handle<Value> glut_glutJoystickFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSetColor
   *
   * @param int ndx
   * @param GLfloat red
   * @param GLfloat green
   * @param GLfloat blue
   * @return void
   */
  Handle<Value> glut_glutSetColor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutGetColor
   *
   * @param int ndx
   * @param int component
   * @return GLfloat
   */
  Handle<Value> glut_glutGetColor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutCopyColormap
   *
   * @param int win
   * @return void
   */
  Handle<Value> glut_glutCopyColormap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutGet
   *
   * @param GLenum type
   * @return int
   */
  Handle<Value> glut_glutGet(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutDeviceGet
   *
   * @param GLenum type
   * @return int
   */
  Handle<Value> glut_glutDeviceGet(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutExtensionSupported
   *
   * @param const char *name
   * @return int
   */
  Handle<Value> glut_glutExtensionSupported(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutGetModifiers(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutLayerGet
   *
   * @param GLenum type
   * @return int
   */
  Handle<Value> glut_glutLayerGet(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutGetProcAddress
   *
   * @param const char *procName
   * @return GLUTproc
   */
  Handle<Value> glut_glutGetProcAddress(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutBitmapCharacter
   *
   * @param void *font
   * @param int character
   * @return void
   */
  Handle<Value> glut_glutBitmapCharacter(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutBitmapWidth
   *
   * @param void *font
   * @param int character
   * @return int
   */
  Handle<Value> glut_glutBitmapWidth(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutStrokeCharacter
   *
   * @param void *font
   * @param int character
   * @return void
   */
  Handle<Value> glut_glutStrokeCharacter(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutStrokeWidth
   *
   * @param void *font
   * @param int character
   * @return int
   */
  Handle<Value> glut_glutStrokeWidth(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutBitmapLength
   *
   * @param void *font
   * @param const unsigned char *string
   * @return int
   */
  Handle<Value> glut_glutBitmapLength(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutStrokeLength
   *
   * @param void *font
   * @param const unsigned char *string
   * @return int
   */
  Handle<Value> glut_glutStrokeLength(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutWireSphere
   *
   * @param GLdouble radius
   * @param GLint slices
   * @param GLint stacks
   * @return void
   */
  Handle<Value> glut_glutWireSphere(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSolidSphere
   *
   * @param GLdouble radius
   * @param GLint slices
   * @param GLint stacks
   * @return void
   */
  Handle<Value> glut_glutSolidSphere(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutWireCone
   *
   * @param GLdouble base
   * @param GLdouble height
   * @param GLint slices
   * @param GLint stacks
   * @return void
   */
  Handle<Value> glut_glutWireCone(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSolidCone
   *
   * @param GLdouble base
   * @param GLdouble height
   * @param GLint slices
   * @param GLint stacks
   * @return void
   */
  Handle<Value> glut_glutSolidCone(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutWireCube
   *
   * @param GLdouble size
   * @return void
   */
  Handle<Value> glut_glutWireCube(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSolidCube
   *
   * @param GLdouble size
   * @return void
   */
  Handle<Value> glut_glutSolidCube(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutWireTorus
   *
   * @param GLdouble innerRadius
   * @param GLdouble outerRadius
   * @param GLint sides
   * @param GLint rings
   * @return void
   */
  Handle<Value> glut_glutWireTorus(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSolidTorus
   *
   * @param GLdouble innerRadius
   * @param GLdouble outerRadius
   * @param GLint sides
   * @param GLint rings
   * @return void
   */
  Handle<Value> glut_glutSolidTorus(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutWireDodecahedron(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutSolidDodecahedron(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutWireTeapot
   *
   * @param GLdouble size
   * @return void
   */
  Handle<Value> glut_glutWireTeapot(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSolidTeapot
   *
   * @param GLdouble size
   * @return void
   */
  Handle<Value> glut_glutSolidTeapot(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutWireOctahedron(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutSolidOctahedron(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutWireTetrahedron(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutSolidTetrahedron(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutWireIcosahedron(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutSolidIcosahedron(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutVideoResizeGet
   *
   * @param GLenum param
   * @return int
   */
  Handle<Value> glut_glutVideoResizeGet(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutSetupVideoResizing(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutStopVideoResizing(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutVideoResize
   *
   * @param int x
   * @param int y
   * @param int width
   * @param int height
   * @return void
   */
  Handle<Value> glut_glutVideoResize(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutVideoPan
   *
   * @param int x
   * @param int y
   * @param int width
   * @param int height
   * @return void
   */
  Handle<Value> glut_glutVideoPan(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutReportErrors(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutIgnoreKeyRepeat
   *
   * @param int ignore
   * @return void
   */
  Handle<Value> glut_glutIgnoreKeyRepeat(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutSetKeyRepeat
   *
   * @param int repeatMode
   * @return void
   */
  Handle<Value> glut_glutSetKeyRepeat(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutForceJoystickFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutGameModeString
   *
   * @param const char *string
   * @return void
   */
  Handle<Value> glut_glutGameModeString(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutEnterGameMode(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glut_glutLeaveGameMode(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glutGameModeGet
   *
   * @param GLenum mode
   * @return int
   */
  Handle<Value> glut_glutGameModeGet(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }



  // Constructor
  glut::glut()
  {
  
  }

  void glut::Initialize(v8::Handle<v8::Object> target) {
    HandleScope scope;
   /* Local<FunctionTemplate> t = FunctionTemplate::New(New);
    
    t->InstanceTemplate()->SetInternalFieldCount(1);
    t->SetClassName(String::NewSymbol("glut"));
    t->Inherit(EventEmitter::constructor_template);
*/
    // Constants


   // target->Set(String::NewSymbol("glut"), t->GetFunction());

    // Expose this classes methods to v8/javascript
    Local<FunctionTemplate> _glut_glClearIndex = FunctionTemplate::New(glut_glClearIndex);
    target->Set(String::New("glClearIndex"), _glut_glClearIndex->GetFunction());

    Local<FunctionTemplate> _glut_glClearColor = FunctionTemplate::New(glut_glClearColor);
    target->Set(String::New("glClearColor"), _glut_glClearColor->GetFunction());

    Local<FunctionTemplate> _glut_glClear = FunctionTemplate::New(glut_glClear);
    target->Set(String::New("glClear"), _glut_glClear->GetFunction());

    Local<FunctionTemplate> _glut_glIndexMask = FunctionTemplate::New(glut_glIndexMask);
    target->Set(String::New("glIndexMask"), _glut_glIndexMask->GetFunction());

    Local<FunctionTemplate> _glut_glColorMask = FunctionTemplate::New(glut_glColorMask);
    target->Set(String::New("glColorMask"), _glut_glColorMask->GetFunction());

    Local<FunctionTemplate> _glut_glAlphaFunc = FunctionTemplate::New(glut_glAlphaFunc);
    target->Set(String::New("glAlphaFunc"), _glut_glAlphaFunc->GetFunction());

    Local<FunctionTemplate> _glut_glBlendFunc = FunctionTemplate::New(glut_glBlendFunc);
    target->Set(String::New("glBlendFunc"), _glut_glBlendFunc->GetFunction());

    Local<FunctionTemplate> _glut_glLogicOp = FunctionTemplate::New(glut_glLogicOp);
    target->Set(String::New("glLogicOp"), _glut_glLogicOp->GetFunction());

    Local<FunctionTemplate> _glut_glCullFace = FunctionTemplate::New(glut_glCullFace);
    target->Set(String::New("glCullFace"), _glut_glCullFace->GetFunction());

    Local<FunctionTemplate> _glut_glFrontFace = FunctionTemplate::New(glut_glFrontFace);
    target->Set(String::New("glFrontFace"), _glut_glFrontFace->GetFunction());

    Local<FunctionTemplate> _glut_glPointSize = FunctionTemplate::New(glut_glPointSize);
    target->Set(String::New("glPointSize"), _glut_glPointSize->GetFunction());

    Local<FunctionTemplate> _glut_glLineWidth = FunctionTemplate::New(glut_glLineWidth);
    target->Set(String::New("glLineWidth"), _glut_glLineWidth->GetFunction());

    Local<FunctionTemplate> _glut_glLineStipple = FunctionTemplate::New(glut_glLineStipple);
    target->Set(String::New("glLineStipple"), _glut_glLineStipple->GetFunction());

    Local<FunctionTemplate> _glut_glPolygonMode = FunctionTemplate::New(glut_glPolygonMode);
    target->Set(String::New("glPolygonMode"), _glut_glPolygonMode->GetFunction());

    Local<FunctionTemplate> _glut_glPolygonOffset = FunctionTemplate::New(glut_glPolygonOffset);
    target->Set(String::New("glPolygonOffset"), _glut_glPolygonOffset->GetFunction());

    Local<FunctionTemplate> _glut_glPolygonStipple = FunctionTemplate::New(glut_glPolygonStipple);
    target->Set(String::New("glPolygonStipple"), _glut_glPolygonStipple->GetFunction());

    Local<FunctionTemplate> _glut_glGetPolygonStipple = FunctionTemplate::New(glut_glGetPolygonStipple);
    target->Set(String::New("glGetPolygonStipple"), _glut_glGetPolygonStipple->GetFunction());

    Local<FunctionTemplate> _glut_glEdgeFlag = FunctionTemplate::New(glut_glEdgeFlag);
    target->Set(String::New("glEdgeFlag"), _glut_glEdgeFlag->GetFunction());

    Local<FunctionTemplate> _glut_glEdgeFlagv = FunctionTemplate::New(glut_glEdgeFlagv);
    target->Set(String::New("glEdgeFlagv"), _glut_glEdgeFlagv->GetFunction());

    Local<FunctionTemplate> _glut_glScissor = FunctionTemplate::New(glut_glScissor);
    target->Set(String::New("glScissor"), _glut_glScissor->GetFunction());

    Local<FunctionTemplate> _glut_glClipPlane = FunctionTemplate::New(glut_glClipPlane);
    target->Set(String::New("glClipPlane"), _glut_glClipPlane->GetFunction());

    Local<FunctionTemplate> _glut_glGetClipPlane = FunctionTemplate::New(glut_glGetClipPlane);
    target->Set(String::New("glGetClipPlane"), _glut_glGetClipPlane->GetFunction());

    Local<FunctionTemplate> _glut_glDrawBuffer = FunctionTemplate::New(glut_glDrawBuffer);
    target->Set(String::New("glDrawBuffer"), _glut_glDrawBuffer->GetFunction());

    Local<FunctionTemplate> _glut_glReadBuffer = FunctionTemplate::New(glut_glReadBuffer);
    target->Set(String::New("glReadBuffer"), _glut_glReadBuffer->GetFunction());

    Local<FunctionTemplate> _glut_glEnable = FunctionTemplate::New(glut_glEnable);
    target->Set(String::New("glEnable"), _glut_glEnable->GetFunction());

    Local<FunctionTemplate> _glut_glDisable = FunctionTemplate::New(glut_glDisable);
    target->Set(String::New("glDisable"), _glut_glDisable->GetFunction());

    Local<FunctionTemplate> _glut_glIsEnabled = FunctionTemplate::New(glut_glIsEnabled);
    target->Set(String::New("glIsEnabled"), _glut_glIsEnabled->GetFunction());

    Local<FunctionTemplate> _glut_glEnableClientState = FunctionTemplate::New(glut_glEnableClientState);
    target->Set(String::New("glEnableClientState"), _glut_glEnableClientState->GetFunction());

    Local<FunctionTemplate> _glut_glDisableClientState = FunctionTemplate::New(glut_glDisableClientState);
    target->Set(String::New("glDisableClientState"), _glut_glDisableClientState->GetFunction());

    Local<FunctionTemplate> _glut_glGetBooleanv = FunctionTemplate::New(glut_glGetBooleanv);
    target->Set(String::New("glGetBooleanv"), _glut_glGetBooleanv->GetFunction());

    Local<FunctionTemplate> _glut_glGetDoublev = FunctionTemplate::New(glut_glGetDoublev);
    target->Set(String::New("glGetDoublev"), _glut_glGetDoublev->GetFunction());

    Local<FunctionTemplate> _glut_glGetFloatv = FunctionTemplate::New(glut_glGetFloatv);
    target->Set(String::New("glGetFloatv"), _glut_glGetFloatv->GetFunction());

    Local<FunctionTemplate> _glut_glGetIntegerv = FunctionTemplate::New(glut_glGetIntegerv);
    target->Set(String::New("glGetIntegerv"), _glut_glGetIntegerv->GetFunction());

    Local<FunctionTemplate> _glut_glPushAttrib = FunctionTemplate::New(glut_glPushAttrib);
    target->Set(String::New("glPushAttrib"), _glut_glPushAttrib->GetFunction());

    Local<FunctionTemplate> _glut_glPopAttrib = FunctionTemplate::New(glut_glPopAttrib);
    target->Set(String::New("glPopAttrib"), _glut_glPopAttrib->GetFunction());

    Local<FunctionTemplate> _glut_glPushClientAttrib = FunctionTemplate::New(glut_glPushClientAttrib);
    target->Set(String::New("glPushClientAttrib"), _glut_glPushClientAttrib->GetFunction());

    Local<FunctionTemplate> _glut_glPopClientAttrib = FunctionTemplate::New(glut_glPopClientAttrib);
    target->Set(String::New("glPopClientAttrib"), _glut_glPopClientAttrib->GetFunction());

    Local<FunctionTemplate> _glut_glRenderMode = FunctionTemplate::New(glut_glRenderMode);
    target->Set(String::New("glRenderMode"), _glut_glRenderMode->GetFunction());

    Local<FunctionTemplate> _glut_glGetError = FunctionTemplate::New(glut_glGetError);
    target->Set(String::New("glGetError"), _glut_glGetError->GetFunction());

    Local<FunctionTemplate> _glut_glFinish = FunctionTemplate::New(glut_glFinish);
    target->Set(String::New("glFinish"), _glut_glFinish->GetFunction());

    Local<FunctionTemplate> _glut_glFlush = FunctionTemplate::New(glut_glFlush);
    target->Set(String::New("glFlush"), _glut_glFlush->GetFunction());

    Local<FunctionTemplate> _glut_glHint = FunctionTemplate::New(glut_glHint);
    target->Set(String::New("glHint"), _glut_glHint->GetFunction());

    Local<FunctionTemplate> _glut_glClearDepth = FunctionTemplate::New(glut_glClearDepth);
    target->Set(String::New("glClearDepth"), _glut_glClearDepth->GetFunction());

    Local<FunctionTemplate> _glut_glDepthFunc = FunctionTemplate::New(glut_glDepthFunc);
    target->Set(String::New("glDepthFunc"), _glut_glDepthFunc->GetFunction());

    Local<FunctionTemplate> _glut_glDepthMask = FunctionTemplate::New(glut_glDepthMask);
    target->Set(String::New("glDepthMask"), _glut_glDepthMask->GetFunction());

    Local<FunctionTemplate> _glut_glDepthRange = FunctionTemplate::New(glut_glDepthRange);
    target->Set(String::New("glDepthRange"), _glut_glDepthRange->GetFunction());

    Local<FunctionTemplate> _glut_glClearAccum = FunctionTemplate::New(glut_glClearAccum);
    target->Set(String::New("glClearAccum"), _glut_glClearAccum->GetFunction());

    Local<FunctionTemplate> _glut_glAccum = FunctionTemplate::New(glut_glAccum);
    target->Set(String::New("glAccum"), _glut_glAccum->GetFunction());

    Local<FunctionTemplate> _glut_glMatrixMode = FunctionTemplate::New(glut_glMatrixMode);
    target->Set(String::New("glMatrixMode"), _glut_glMatrixMode->GetFunction());

    Local<FunctionTemplate> _glut_glOrtho = FunctionTemplate::New(glut_glOrtho);
    target->Set(String::New("glOrtho"), _glut_glOrtho->GetFunction());

    Local<FunctionTemplate> _glut_glFrustum = FunctionTemplate::New(glut_glFrustum);
    target->Set(String::New("glFrustum"), _glut_glFrustum->GetFunction());

    Local<FunctionTemplate> _glut_glViewport = FunctionTemplate::New(glut_glViewport);
    target->Set(String::New("glViewport"), _glut_glViewport->GetFunction());

    Local<FunctionTemplate> _glut_glPushMatrix = FunctionTemplate::New(glut_glPushMatrix);
    target->Set(String::New("glPushMatrix"), _glut_glPushMatrix->GetFunction());

    Local<FunctionTemplate> _glut_glPopMatrix = FunctionTemplate::New(glut_glPopMatrix);
    target->Set(String::New("glPopMatrix"), _glut_glPopMatrix->GetFunction());

    Local<FunctionTemplate> _glut_glLoadIdentity = FunctionTemplate::New(glut_glLoadIdentity);
    target->Set(String::New("glLoadIdentity"), _glut_glLoadIdentity->GetFunction());

    Local<FunctionTemplate> _glut_glLoadMatrixd = FunctionTemplate::New(glut_glLoadMatrixd);
    target->Set(String::New("glLoadMatrixd"), _glut_glLoadMatrixd->GetFunction());

    Local<FunctionTemplate> _glut_glLoadMatrixf = FunctionTemplate::New(glut_glLoadMatrixf);
    target->Set(String::New("glLoadMatrixf"), _glut_glLoadMatrixf->GetFunction());

    Local<FunctionTemplate> _glut_glMultMatrixd = FunctionTemplate::New(glut_glMultMatrixd);
    target->Set(String::New("glMultMatrixd"), _glut_glMultMatrixd->GetFunction());

    Local<FunctionTemplate> _glut_glMultMatrixf = FunctionTemplate::New(glut_glMultMatrixf);
    target->Set(String::New("glMultMatrixf"), _glut_glMultMatrixf->GetFunction());

    Local<FunctionTemplate> _glut_glRotated = FunctionTemplate::New(glut_glRotated);
    target->Set(String::New("glRotated"), _glut_glRotated->GetFunction());

    Local<FunctionTemplate> _glut_glRotatef = FunctionTemplate::New(glut_glRotatef);
    target->Set(String::New("glRotatef"), _glut_glRotatef->GetFunction());

    Local<FunctionTemplate> _glut_glScaled = FunctionTemplate::New(glut_glScaled);
    target->Set(String::New("glScaled"), _glut_glScaled->GetFunction());

    Local<FunctionTemplate> _glut_glScalef = FunctionTemplate::New(glut_glScalef);
    target->Set(String::New("glScalef"), _glut_glScalef->GetFunction());

    Local<FunctionTemplate> _glut_glTranslated = FunctionTemplate::New(glut_glTranslated);
    target->Set(String::New("glTranslated"), _glut_glTranslated->GetFunction());

    Local<FunctionTemplate> _glut_glTranslatef = FunctionTemplate::New(glut_glTranslatef);
    target->Set(String::New("glTranslatef"), _glut_glTranslatef->GetFunction());

    Local<FunctionTemplate> _glut_glIsList = FunctionTemplate::New(glut_glIsList);
    target->Set(String::New("glIsList"), _glut_glIsList->GetFunction());

    Local<FunctionTemplate> _glut_glDeleteLists = FunctionTemplate::New(glut_glDeleteLists);
    target->Set(String::New("glDeleteLists"), _glut_glDeleteLists->GetFunction());

    Local<FunctionTemplate> _glut_glGenLists = FunctionTemplate::New(glut_glGenLists);
    target->Set(String::New("glGenLists"), _glut_glGenLists->GetFunction());

    Local<FunctionTemplate> _glut_glNewList = FunctionTemplate::New(glut_glNewList);
    target->Set(String::New("glNewList"), _glut_glNewList->GetFunction());

    Local<FunctionTemplate> _glut_glEndList = FunctionTemplate::New(glut_glEndList);
    target->Set(String::New("glEndList"), _glut_glEndList->GetFunction());

    Local<FunctionTemplate> _glut_glCallList = FunctionTemplate::New(glut_glCallList);
    target->Set(String::New("glCallList"), _glut_glCallList->GetFunction());

    Local<FunctionTemplate> _glut_glCallLists = FunctionTemplate::New(glut_glCallLists);
    target->Set(String::New("glCallLists"), _glut_glCallLists->GetFunction());

    Local<FunctionTemplate> _glut_glListBase = FunctionTemplate::New(glut_glListBase);
    target->Set(String::New("glListBase"), _glut_glListBase->GetFunction());

    Local<FunctionTemplate> _glut_glBegin = FunctionTemplate::New(glut_glBegin);
    target->Set(String::New("glBegin"), _glut_glBegin->GetFunction());

    Local<FunctionTemplate> _glut_glEnd = FunctionTemplate::New(glut_glEnd);
    target->Set(String::New("glEnd"), _glut_glEnd->GetFunction());

    Local<FunctionTemplate> _glut_glVertex2d = FunctionTemplate::New(glut_glVertex2d);
    target->Set(String::New("glVertex2d"), _glut_glVertex2d->GetFunction());

    Local<FunctionTemplate> _glut_glVertex2f = FunctionTemplate::New(glut_glVertex2f);
    target->Set(String::New("glVertex2f"), _glut_glVertex2f->GetFunction());

    Local<FunctionTemplate> _glut_glVertex2i = FunctionTemplate::New(glut_glVertex2i);
    target->Set(String::New("glVertex2i"), _glut_glVertex2i->GetFunction());

    Local<FunctionTemplate> _glut_glVertex2s = FunctionTemplate::New(glut_glVertex2s);
    target->Set(String::New("glVertex2s"), _glut_glVertex2s->GetFunction());

    Local<FunctionTemplate> _glut_glVertex3d = FunctionTemplate::New(glut_glVertex3d);
    target->Set(String::New("glVertex3d"), _glut_glVertex3d->GetFunction());

    Local<FunctionTemplate> _glut_glVertex3f = FunctionTemplate::New(glut_glVertex3f);
    target->Set(String::New("glVertex3f"), _glut_glVertex3f->GetFunction());

    Local<FunctionTemplate> _glut_glVertex3i = FunctionTemplate::New(glut_glVertex3i);
    target->Set(String::New("glVertex3i"), _glut_glVertex3i->GetFunction());

    Local<FunctionTemplate> _glut_glVertex3s = FunctionTemplate::New(glut_glVertex3s);
    target->Set(String::New("glVertex3s"), _glut_glVertex3s->GetFunction());

    Local<FunctionTemplate> _glut_glVertex4d = FunctionTemplate::New(glut_glVertex4d);
    target->Set(String::New("glVertex4d"), _glut_glVertex4d->GetFunction());

    Local<FunctionTemplate> _glut_glVertex4f = FunctionTemplate::New(glut_glVertex4f);
    target->Set(String::New("glVertex4f"), _glut_glVertex4f->GetFunction());

    Local<FunctionTemplate> _glut_glVertex4i = FunctionTemplate::New(glut_glVertex4i);
    target->Set(String::New("glVertex4i"), _glut_glVertex4i->GetFunction());

    Local<FunctionTemplate> _glut_glVertex4s = FunctionTemplate::New(glut_glVertex4s);
    target->Set(String::New("glVertex4s"), _glut_glVertex4s->GetFunction());

    Local<FunctionTemplate> _glut_glVertex2dv = FunctionTemplate::New(glut_glVertex2dv);
    target->Set(String::New("glVertex2dv"), _glut_glVertex2dv->GetFunction());

    Local<FunctionTemplate> _glut_glVertex2fv = FunctionTemplate::New(glut_glVertex2fv);
    target->Set(String::New("glVertex2fv"), _glut_glVertex2fv->GetFunction());

    Local<FunctionTemplate> _glut_glVertex2iv = FunctionTemplate::New(glut_glVertex2iv);
    target->Set(String::New("glVertex2iv"), _glut_glVertex2iv->GetFunction());

    Local<FunctionTemplate> _glut_glVertex2sv = FunctionTemplate::New(glut_glVertex2sv);
    target->Set(String::New("glVertex2sv"), _glut_glVertex2sv->GetFunction());

    Local<FunctionTemplate> _glut_glVertex3dv = FunctionTemplate::New(glut_glVertex3dv);
    target->Set(String::New("glVertex3dv"), _glut_glVertex3dv->GetFunction());

    Local<FunctionTemplate> _glut_glVertex3fv = FunctionTemplate::New(glut_glVertex3fv);
    target->Set(String::New("glVertex3fv"), _glut_glVertex3fv->GetFunction());

    Local<FunctionTemplate> _glut_glVertex3iv = FunctionTemplate::New(glut_glVertex3iv);
    target->Set(String::New("glVertex3iv"), _glut_glVertex3iv->GetFunction());

    Local<FunctionTemplate> _glut_glVertex3sv = FunctionTemplate::New(glut_glVertex3sv);
    target->Set(String::New("glVertex3sv"), _glut_glVertex3sv->GetFunction());

    Local<FunctionTemplate> _glut_glVertex4dv = FunctionTemplate::New(glut_glVertex4dv);
    target->Set(String::New("glVertex4dv"), _glut_glVertex4dv->GetFunction());

    Local<FunctionTemplate> _glut_glVertex4fv = FunctionTemplate::New(glut_glVertex4fv);
    target->Set(String::New("glVertex4fv"), _glut_glVertex4fv->GetFunction());

    Local<FunctionTemplate> _glut_glVertex4iv = FunctionTemplate::New(glut_glVertex4iv);
    target->Set(String::New("glVertex4iv"), _glut_glVertex4iv->GetFunction());

    Local<FunctionTemplate> _glut_glVertex4sv = FunctionTemplate::New(glut_glVertex4sv);
    target->Set(String::New("glVertex4sv"), _glut_glVertex4sv->GetFunction());

    Local<FunctionTemplate> _glut_glNormal3b = FunctionTemplate::New(glut_glNormal3b);
    target->Set(String::New("glNormal3b"), _glut_glNormal3b->GetFunction());

    Local<FunctionTemplate> _glut_glNormal3d = FunctionTemplate::New(glut_glNormal3d);
    target->Set(String::New("glNormal3d"), _glut_glNormal3d->GetFunction());

    Local<FunctionTemplate> _glut_glNormal3f = FunctionTemplate::New(glut_glNormal3f);
    target->Set(String::New("glNormal3f"), _glut_glNormal3f->GetFunction());

    Local<FunctionTemplate> _glut_glNormal3i = FunctionTemplate::New(glut_glNormal3i);
    target->Set(String::New("glNormal3i"), _glut_glNormal3i->GetFunction());

    Local<FunctionTemplate> _glut_glNormal3s = FunctionTemplate::New(glut_glNormal3s);
    target->Set(String::New("glNormal3s"), _glut_glNormal3s->GetFunction());

    Local<FunctionTemplate> _glut_glNormal3bv = FunctionTemplate::New(glut_glNormal3bv);
    target->Set(String::New("glNormal3bv"), _glut_glNormal3bv->GetFunction());

    Local<FunctionTemplate> _glut_glNormal3dv = FunctionTemplate::New(glut_glNormal3dv);
    target->Set(String::New("glNormal3dv"), _glut_glNormal3dv->GetFunction());

    Local<FunctionTemplate> _glut_glNormal3fv = FunctionTemplate::New(glut_glNormal3fv);
    target->Set(String::New("glNormal3fv"), _glut_glNormal3fv->GetFunction());

    Local<FunctionTemplate> _glut_glNormal3iv = FunctionTemplate::New(glut_glNormal3iv);
    target->Set(String::New("glNormal3iv"), _glut_glNormal3iv->GetFunction());

    Local<FunctionTemplate> _glut_glNormal3sv = FunctionTemplate::New(glut_glNormal3sv);
    target->Set(String::New("glNormal3sv"), _glut_glNormal3sv->GetFunction());

    Local<FunctionTemplate> _glut_glIndexd = FunctionTemplate::New(glut_glIndexd);
    target->Set(String::New("glIndexd"), _glut_glIndexd->GetFunction());

    Local<FunctionTemplate> _glut_glIndexf = FunctionTemplate::New(glut_glIndexf);
    target->Set(String::New("glIndexf"), _glut_glIndexf->GetFunction());

    Local<FunctionTemplate> _glut_glIndexi = FunctionTemplate::New(glut_glIndexi);
    target->Set(String::New("glIndexi"), _glut_glIndexi->GetFunction());

    Local<FunctionTemplate> _glut_glIndexs = FunctionTemplate::New(glut_glIndexs);
    target->Set(String::New("glIndexs"), _glut_glIndexs->GetFunction());

    Local<FunctionTemplate> _glut_glIndexub = FunctionTemplate::New(glut_glIndexub);
    target->Set(String::New("glIndexub"), _glut_glIndexub->GetFunction());

    Local<FunctionTemplate> _glut_glIndexdv = FunctionTemplate::New(glut_glIndexdv);
    target->Set(String::New("glIndexdv"), _glut_glIndexdv->GetFunction());

    Local<FunctionTemplate> _glut_glIndexfv = FunctionTemplate::New(glut_glIndexfv);
    target->Set(String::New("glIndexfv"), _glut_glIndexfv->GetFunction());

    Local<FunctionTemplate> _glut_glIndexiv = FunctionTemplate::New(glut_glIndexiv);
    target->Set(String::New("glIndexiv"), _glut_glIndexiv->GetFunction());

    Local<FunctionTemplate> _glut_glIndexsv = FunctionTemplate::New(glut_glIndexsv);
    target->Set(String::New("glIndexsv"), _glut_glIndexsv->GetFunction());

    Local<FunctionTemplate> _glut_glIndexubv = FunctionTemplate::New(glut_glIndexubv);
    target->Set(String::New("glIndexubv"), _glut_glIndexubv->GetFunction());

    Local<FunctionTemplate> _glut_glColor3b = FunctionTemplate::New(glut_glColor3b);
    target->Set(String::New("glColor3b"), _glut_glColor3b->GetFunction());

    Local<FunctionTemplate> _glut_glColor3d = FunctionTemplate::New(glut_glColor3d);
    target->Set(String::New("glColor3d"), _glut_glColor3d->GetFunction());

    Local<FunctionTemplate> _glut_glColor3f = FunctionTemplate::New(glut_glColor3f);
    target->Set(String::New("glColor3f"), _glut_glColor3f->GetFunction());

    Local<FunctionTemplate> _glut_glColor3i = FunctionTemplate::New(glut_glColor3i);
    target->Set(String::New("glColor3i"), _glut_glColor3i->GetFunction());

    Local<FunctionTemplate> _glut_glColor3s = FunctionTemplate::New(glut_glColor3s);
    target->Set(String::New("glColor3s"), _glut_glColor3s->GetFunction());

    Local<FunctionTemplate> _glut_glColor3ub = FunctionTemplate::New(glut_glColor3ub);
    target->Set(String::New("glColor3ub"), _glut_glColor3ub->GetFunction());

    Local<FunctionTemplate> _glut_glColor3ui = FunctionTemplate::New(glut_glColor3ui);
    target->Set(String::New("glColor3ui"), _glut_glColor3ui->GetFunction());

    Local<FunctionTemplate> _glut_glColor3us = FunctionTemplate::New(glut_glColor3us);
    target->Set(String::New("glColor3us"), _glut_glColor3us->GetFunction());

    Local<FunctionTemplate> _glut_glColor4b = FunctionTemplate::New(glut_glColor4b);
    target->Set(String::New("glColor4b"), _glut_glColor4b->GetFunction());

    Local<FunctionTemplate> _glut_glColor4d = FunctionTemplate::New(glut_glColor4d);
    target->Set(String::New("glColor4d"), _glut_glColor4d->GetFunction());

    Local<FunctionTemplate> _glut_glColor4f = FunctionTemplate::New(glut_glColor4f);
    target->Set(String::New("glColor4f"), _glut_glColor4f->GetFunction());

    Local<FunctionTemplate> _glut_glColor4i = FunctionTemplate::New(glut_glColor4i);
    target->Set(String::New("glColor4i"), _glut_glColor4i->GetFunction());

    Local<FunctionTemplate> _glut_glColor4s = FunctionTemplate::New(glut_glColor4s);
    target->Set(String::New("glColor4s"), _glut_glColor4s->GetFunction());

    Local<FunctionTemplate> _glut_glColor4ub = FunctionTemplate::New(glut_glColor4ub);
    target->Set(String::New("glColor4ub"), _glut_glColor4ub->GetFunction());

    Local<FunctionTemplate> _glut_glColor4ui = FunctionTemplate::New(glut_glColor4ui);
    target->Set(String::New("glColor4ui"), _glut_glColor4ui->GetFunction());

    Local<FunctionTemplate> _glut_glColor4us = FunctionTemplate::New(glut_glColor4us);
    target->Set(String::New("glColor4us"), _glut_glColor4us->GetFunction());

    Local<FunctionTemplate> _glut_glColor3bv = FunctionTemplate::New(glut_glColor3bv);
    target->Set(String::New("glColor3bv"), _glut_glColor3bv->GetFunction());

    Local<FunctionTemplate> _glut_glColor3dv = FunctionTemplate::New(glut_glColor3dv);
    target->Set(String::New("glColor3dv"), _glut_glColor3dv->GetFunction());

    Local<FunctionTemplate> _glut_glColor3fv = FunctionTemplate::New(glut_glColor3fv);
    target->Set(String::New("glColor3fv"), _glut_glColor3fv->GetFunction());

    Local<FunctionTemplate> _glut_glColor3iv = FunctionTemplate::New(glut_glColor3iv);
    target->Set(String::New("glColor3iv"), _glut_glColor3iv->GetFunction());

    Local<FunctionTemplate> _glut_glColor3sv = FunctionTemplate::New(glut_glColor3sv);
    target->Set(String::New("glColor3sv"), _glut_glColor3sv->GetFunction());

    Local<FunctionTemplate> _glut_glColor3ubv = FunctionTemplate::New(glut_glColor3ubv);
    target->Set(String::New("glColor3ubv"), _glut_glColor3ubv->GetFunction());

    Local<FunctionTemplate> _glut_glColor3uiv = FunctionTemplate::New(glut_glColor3uiv);
    target->Set(String::New("glColor3uiv"), _glut_glColor3uiv->GetFunction());

    Local<FunctionTemplate> _glut_glColor3usv = FunctionTemplate::New(glut_glColor3usv);
    target->Set(String::New("glColor3usv"), _glut_glColor3usv->GetFunction());

    Local<FunctionTemplate> _glut_glColor4bv = FunctionTemplate::New(glut_glColor4bv);
    target->Set(String::New("glColor4bv"), _glut_glColor4bv->GetFunction());

    Local<FunctionTemplate> _glut_glColor4dv = FunctionTemplate::New(glut_glColor4dv);
    target->Set(String::New("glColor4dv"), _glut_glColor4dv->GetFunction());

    Local<FunctionTemplate> _glut_glColor4fv = FunctionTemplate::New(glut_glColor4fv);
    target->Set(String::New("glColor4fv"), _glut_glColor4fv->GetFunction());

    Local<FunctionTemplate> _glut_glColor4iv = FunctionTemplate::New(glut_glColor4iv);
    target->Set(String::New("glColor4iv"), _glut_glColor4iv->GetFunction());

    Local<FunctionTemplate> _glut_glColor4sv = FunctionTemplate::New(glut_glColor4sv);
    target->Set(String::New("glColor4sv"), _glut_glColor4sv->GetFunction());

    Local<FunctionTemplate> _glut_glColor4ubv = FunctionTemplate::New(glut_glColor4ubv);
    target->Set(String::New("glColor4ubv"), _glut_glColor4ubv->GetFunction());

    Local<FunctionTemplate> _glut_glColor4uiv = FunctionTemplate::New(glut_glColor4uiv);
    target->Set(String::New("glColor4uiv"), _glut_glColor4uiv->GetFunction());

    Local<FunctionTemplate> _glut_glColor4usv = FunctionTemplate::New(glut_glColor4usv);
    target->Set(String::New("glColor4usv"), _glut_glColor4usv->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord1d = FunctionTemplate::New(glut_glTexCoord1d);
    target->Set(String::New("glTexCoord1d"), _glut_glTexCoord1d->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord1f = FunctionTemplate::New(glut_glTexCoord1f);
    target->Set(String::New("glTexCoord1f"), _glut_glTexCoord1f->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord1i = FunctionTemplate::New(glut_glTexCoord1i);
    target->Set(String::New("glTexCoord1i"), _glut_glTexCoord1i->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord1s = FunctionTemplate::New(glut_glTexCoord1s);
    target->Set(String::New("glTexCoord1s"), _glut_glTexCoord1s->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord2d = FunctionTemplate::New(glut_glTexCoord2d);
    target->Set(String::New("glTexCoord2d"), _glut_glTexCoord2d->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord2f = FunctionTemplate::New(glut_glTexCoord2f);
    target->Set(String::New("glTexCoord2f"), _glut_glTexCoord2f->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord2i = FunctionTemplate::New(glut_glTexCoord2i);
    target->Set(String::New("glTexCoord2i"), _glut_glTexCoord2i->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord2s = FunctionTemplate::New(glut_glTexCoord2s);
    target->Set(String::New("glTexCoord2s"), _glut_glTexCoord2s->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord3d = FunctionTemplate::New(glut_glTexCoord3d);
    target->Set(String::New("glTexCoord3d"), _glut_glTexCoord3d->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord3f = FunctionTemplate::New(glut_glTexCoord3f);
    target->Set(String::New("glTexCoord3f"), _glut_glTexCoord3f->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord3i = FunctionTemplate::New(glut_glTexCoord3i);
    target->Set(String::New("glTexCoord3i"), _glut_glTexCoord3i->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord3s = FunctionTemplate::New(glut_glTexCoord3s);
    target->Set(String::New("glTexCoord3s"), _glut_glTexCoord3s->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord4d = FunctionTemplate::New(glut_glTexCoord4d);
    target->Set(String::New("glTexCoord4d"), _glut_glTexCoord4d->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord4f = FunctionTemplate::New(glut_glTexCoord4f);
    target->Set(String::New("glTexCoord4f"), _glut_glTexCoord4f->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord4i = FunctionTemplate::New(glut_glTexCoord4i);
    target->Set(String::New("glTexCoord4i"), _glut_glTexCoord4i->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord4s = FunctionTemplate::New(glut_glTexCoord4s);
    target->Set(String::New("glTexCoord4s"), _glut_glTexCoord4s->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord1dv = FunctionTemplate::New(glut_glTexCoord1dv);
    target->Set(String::New("glTexCoord1dv"), _glut_glTexCoord1dv->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord1fv = FunctionTemplate::New(glut_glTexCoord1fv);
    target->Set(String::New("glTexCoord1fv"), _glut_glTexCoord1fv->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord1iv = FunctionTemplate::New(glut_glTexCoord1iv);
    target->Set(String::New("glTexCoord1iv"), _glut_glTexCoord1iv->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord1sv = FunctionTemplate::New(glut_glTexCoord1sv);
    target->Set(String::New("glTexCoord1sv"), _glut_glTexCoord1sv->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord2dv = FunctionTemplate::New(glut_glTexCoord2dv);
    target->Set(String::New("glTexCoord2dv"), _glut_glTexCoord2dv->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord2fv = FunctionTemplate::New(glut_glTexCoord2fv);
    target->Set(String::New("glTexCoord2fv"), _glut_glTexCoord2fv->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord2iv = FunctionTemplate::New(glut_glTexCoord2iv);
    target->Set(String::New("glTexCoord2iv"), _glut_glTexCoord2iv->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord2sv = FunctionTemplate::New(glut_glTexCoord2sv);
    target->Set(String::New("glTexCoord2sv"), _glut_glTexCoord2sv->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord3dv = FunctionTemplate::New(glut_glTexCoord3dv);
    target->Set(String::New("glTexCoord3dv"), _glut_glTexCoord3dv->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord3fv = FunctionTemplate::New(glut_glTexCoord3fv);
    target->Set(String::New("glTexCoord3fv"), _glut_glTexCoord3fv->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord3iv = FunctionTemplate::New(glut_glTexCoord3iv);
    target->Set(String::New("glTexCoord3iv"), _glut_glTexCoord3iv->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord3sv = FunctionTemplate::New(glut_glTexCoord3sv);
    target->Set(String::New("glTexCoord3sv"), _glut_glTexCoord3sv->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord4dv = FunctionTemplate::New(glut_glTexCoord4dv);
    target->Set(String::New("glTexCoord4dv"), _glut_glTexCoord4dv->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord4fv = FunctionTemplate::New(glut_glTexCoord4fv);
    target->Set(String::New("glTexCoord4fv"), _glut_glTexCoord4fv->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord4iv = FunctionTemplate::New(glut_glTexCoord4iv);
    target->Set(String::New("glTexCoord4iv"), _glut_glTexCoord4iv->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoord4sv = FunctionTemplate::New(glut_glTexCoord4sv);
    target->Set(String::New("glTexCoord4sv"), _glut_glTexCoord4sv->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos2d = FunctionTemplate::New(glut_glRasterPos2d);
    target->Set(String::New("glRasterPos2d"), _glut_glRasterPos2d->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos2f = FunctionTemplate::New(glut_glRasterPos2f);
    target->Set(String::New("glRasterPos2f"), _glut_glRasterPos2f->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos2i = FunctionTemplate::New(glut_glRasterPos2i);
    target->Set(String::New("glRasterPos2i"), _glut_glRasterPos2i->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos2s = FunctionTemplate::New(glut_glRasterPos2s);
    target->Set(String::New("glRasterPos2s"), _glut_glRasterPos2s->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos3d = FunctionTemplate::New(glut_glRasterPos3d);
    target->Set(String::New("glRasterPos3d"), _glut_glRasterPos3d->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos3f = FunctionTemplate::New(glut_glRasterPos3f);
    target->Set(String::New("glRasterPos3f"), _glut_glRasterPos3f->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos3i = FunctionTemplate::New(glut_glRasterPos3i);
    target->Set(String::New("glRasterPos3i"), _glut_glRasterPos3i->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos3s = FunctionTemplate::New(glut_glRasterPos3s);
    target->Set(String::New("glRasterPos3s"), _glut_glRasterPos3s->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos4d = FunctionTemplate::New(glut_glRasterPos4d);
    target->Set(String::New("glRasterPos4d"), _glut_glRasterPos4d->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos4f = FunctionTemplate::New(glut_glRasterPos4f);
    target->Set(String::New("glRasterPos4f"), _glut_glRasterPos4f->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos4i = FunctionTemplate::New(glut_glRasterPos4i);
    target->Set(String::New("glRasterPos4i"), _glut_glRasterPos4i->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos4s = FunctionTemplate::New(glut_glRasterPos4s);
    target->Set(String::New("glRasterPos4s"), _glut_glRasterPos4s->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos2dv = FunctionTemplate::New(glut_glRasterPos2dv);
    target->Set(String::New("glRasterPos2dv"), _glut_glRasterPos2dv->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos2fv = FunctionTemplate::New(glut_glRasterPos2fv);
    target->Set(String::New("glRasterPos2fv"), _glut_glRasterPos2fv->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos2iv = FunctionTemplate::New(glut_glRasterPos2iv);
    target->Set(String::New("glRasterPos2iv"), _glut_glRasterPos2iv->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos2sv = FunctionTemplate::New(glut_glRasterPos2sv);
    target->Set(String::New("glRasterPos2sv"), _glut_glRasterPos2sv->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos3dv = FunctionTemplate::New(glut_glRasterPos3dv);
    target->Set(String::New("glRasterPos3dv"), _glut_glRasterPos3dv->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos3fv = FunctionTemplate::New(glut_glRasterPos3fv);
    target->Set(String::New("glRasterPos3fv"), _glut_glRasterPos3fv->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos3iv = FunctionTemplate::New(glut_glRasterPos3iv);
    target->Set(String::New("glRasterPos3iv"), _glut_glRasterPos3iv->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos3sv = FunctionTemplate::New(glut_glRasterPos3sv);
    target->Set(String::New("glRasterPos3sv"), _glut_glRasterPos3sv->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos4dv = FunctionTemplate::New(glut_glRasterPos4dv);
    target->Set(String::New("glRasterPos4dv"), _glut_glRasterPos4dv->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos4fv = FunctionTemplate::New(glut_glRasterPos4fv);
    target->Set(String::New("glRasterPos4fv"), _glut_glRasterPos4fv->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos4iv = FunctionTemplate::New(glut_glRasterPos4iv);
    target->Set(String::New("glRasterPos4iv"), _glut_glRasterPos4iv->GetFunction());

    Local<FunctionTemplate> _glut_glRasterPos4sv = FunctionTemplate::New(glut_glRasterPos4sv);
    target->Set(String::New("glRasterPos4sv"), _glut_glRasterPos4sv->GetFunction());

    Local<FunctionTemplate> _glut_glRectd = FunctionTemplate::New(glut_glRectd);
    target->Set(String::New("glRectd"), _glut_glRectd->GetFunction());

    Local<FunctionTemplate> _glut_glRectf = FunctionTemplate::New(glut_glRectf);
    target->Set(String::New("glRectf"), _glut_glRectf->GetFunction());

    Local<FunctionTemplate> _glut_glRecti = FunctionTemplate::New(glut_glRecti);
    target->Set(String::New("glRecti"), _glut_glRecti->GetFunction());

    Local<FunctionTemplate> _glut_glRects = FunctionTemplate::New(glut_glRects);
    target->Set(String::New("glRects"), _glut_glRects->GetFunction());

    Local<FunctionTemplate> _glut_glRectdv = FunctionTemplate::New(glut_glRectdv);
    target->Set(String::New("glRectdv"), _glut_glRectdv->GetFunction());

    Local<FunctionTemplate> _glut_glRectfv = FunctionTemplate::New(glut_glRectfv);
    target->Set(String::New("glRectfv"), _glut_glRectfv->GetFunction());

    Local<FunctionTemplate> _glut_glRectiv = FunctionTemplate::New(glut_glRectiv);
    target->Set(String::New("glRectiv"), _glut_glRectiv->GetFunction());

    Local<FunctionTemplate> _glut_glRectsv = FunctionTemplate::New(glut_glRectsv);
    target->Set(String::New("glRectsv"), _glut_glRectsv->GetFunction());

    Local<FunctionTemplate> _glut_glVertexPointer = FunctionTemplate::New(glut_glVertexPointer);
    target->Set(String::New("glVertexPointer"), _glut_glVertexPointer->GetFunction());

    Local<FunctionTemplate> _glut_glNormalPointer = FunctionTemplate::New(glut_glNormalPointer);
    target->Set(String::New("glNormalPointer"), _glut_glNormalPointer->GetFunction());

    Local<FunctionTemplate> _glut_glColorPointer = FunctionTemplate::New(glut_glColorPointer);
    target->Set(String::New("glColorPointer"), _glut_glColorPointer->GetFunction());

    Local<FunctionTemplate> _glut_glIndexPointer = FunctionTemplate::New(glut_glIndexPointer);
    target->Set(String::New("glIndexPointer"), _glut_glIndexPointer->GetFunction());

    Local<FunctionTemplate> _glut_glTexCoordPointer = FunctionTemplate::New(glut_glTexCoordPointer);
    target->Set(String::New("glTexCoordPointer"), _glut_glTexCoordPointer->GetFunction());

    Local<FunctionTemplate> _glut_glEdgeFlagPointer = FunctionTemplate::New(glut_glEdgeFlagPointer);
    target->Set(String::New("glEdgeFlagPointer"), _glut_glEdgeFlagPointer->GetFunction());

    Local<FunctionTemplate> _glut_glGetPointerv = FunctionTemplate::New(glut_glGetPointerv);
    target->Set(String::New("glGetPointerv"), _glut_glGetPointerv->GetFunction());

    Local<FunctionTemplate> _glut_glArrayElement = FunctionTemplate::New(glut_glArrayElement);
    target->Set(String::New("glArrayElement"), _glut_glArrayElement->GetFunction());

    Local<FunctionTemplate> _glut_glDrawArrays = FunctionTemplate::New(glut_glDrawArrays);
    target->Set(String::New("glDrawArrays"), _glut_glDrawArrays->GetFunction());

    Local<FunctionTemplate> _glut_glDrawElements = FunctionTemplate::New(glut_glDrawElements);
    target->Set(String::New("glDrawElements"), _glut_glDrawElements->GetFunction());

    Local<FunctionTemplate> _glut_glInterleavedArrays = FunctionTemplate::New(glut_glInterleavedArrays);
    target->Set(String::New("glInterleavedArrays"), _glut_glInterleavedArrays->GetFunction());

    Local<FunctionTemplate> _glut_glShadeModel = FunctionTemplate::New(glut_glShadeModel);
    target->Set(String::New("glShadeModel"), _glut_glShadeModel->GetFunction());

    Local<FunctionTemplate> _glut_glLightf = FunctionTemplate::New(glut_glLightf);
    target->Set(String::New("glLightf"), _glut_glLightf->GetFunction());

    Local<FunctionTemplate> _glut_glLighti = FunctionTemplate::New(glut_glLighti);
    target->Set(String::New("glLighti"), _glut_glLighti->GetFunction());

    Local<FunctionTemplate> _glut_glLightfv = FunctionTemplate::New(glut_glLightfv);
    target->Set(String::New("glLightfv"), _glut_glLightfv->GetFunction());

    Local<FunctionTemplate> _glut_glLightiv = FunctionTemplate::New(glut_glLightiv);
    target->Set(String::New("glLightiv"), _glut_glLightiv->GetFunction());

    Local<FunctionTemplate> _glut_glGetLightfv = FunctionTemplate::New(glut_glGetLightfv);
    target->Set(String::New("glGetLightfv"), _glut_glGetLightfv->GetFunction());

    Local<FunctionTemplate> _glut_glGetLightiv = FunctionTemplate::New(glut_glGetLightiv);
    target->Set(String::New("glGetLightiv"), _glut_glGetLightiv->GetFunction());

    Local<FunctionTemplate> _glut_glLightModelf = FunctionTemplate::New(glut_glLightModelf);
    target->Set(String::New("glLightModelf"), _glut_glLightModelf->GetFunction());

    Local<FunctionTemplate> _glut_glLightModeli = FunctionTemplate::New(glut_glLightModeli);
    target->Set(String::New("glLightModeli"), _glut_glLightModeli->GetFunction());

    Local<FunctionTemplate> _glut_glLightModelfv = FunctionTemplate::New(glut_glLightModelfv);
    target->Set(String::New("glLightModelfv"), _glut_glLightModelfv->GetFunction());

    Local<FunctionTemplate> _glut_glLightModeliv = FunctionTemplate::New(glut_glLightModeliv);
    target->Set(String::New("glLightModeliv"), _glut_glLightModeliv->GetFunction());

    Local<FunctionTemplate> _glut_glMaterialf = FunctionTemplate::New(glut_glMaterialf);
    target->Set(String::New("glMaterialf"), _glut_glMaterialf->GetFunction());

    Local<FunctionTemplate> _glut_glMateriali = FunctionTemplate::New(glut_glMateriali);
    target->Set(String::New("glMateriali"), _glut_glMateriali->GetFunction());

    Local<FunctionTemplate> _glut_glMaterialfv = FunctionTemplate::New(glut_glMaterialfv);
    target->Set(String::New("glMaterialfv"), _glut_glMaterialfv->GetFunction());

    Local<FunctionTemplate> _glut_glMaterialiv = FunctionTemplate::New(glut_glMaterialiv);
    target->Set(String::New("glMaterialiv"), _glut_glMaterialiv->GetFunction());

    Local<FunctionTemplate> _glut_glGetMaterialfv = FunctionTemplate::New(glut_glGetMaterialfv);
    target->Set(String::New("glGetMaterialfv"), _glut_glGetMaterialfv->GetFunction());

    Local<FunctionTemplate> _glut_glGetMaterialiv = FunctionTemplate::New(glut_glGetMaterialiv);
    target->Set(String::New("glGetMaterialiv"), _glut_glGetMaterialiv->GetFunction());

    Local<FunctionTemplate> _glut_glColorMaterial = FunctionTemplate::New(glut_glColorMaterial);
    target->Set(String::New("glColorMaterial"), _glut_glColorMaterial->GetFunction());

    Local<FunctionTemplate> _glut_glPixelZoom = FunctionTemplate::New(glut_glPixelZoom);
    target->Set(String::New("glPixelZoom"), _glut_glPixelZoom->GetFunction());

    Local<FunctionTemplate> _glut_glPixelStoref = FunctionTemplate::New(glut_glPixelStoref);
    target->Set(String::New("glPixelStoref"), _glut_glPixelStoref->GetFunction());

    Local<FunctionTemplate> _glut_glPixelStorei = FunctionTemplate::New(glut_glPixelStorei);
    target->Set(String::New("glPixelStorei"), _glut_glPixelStorei->GetFunction());

    Local<FunctionTemplate> _glut_glPixelTransferf = FunctionTemplate::New(glut_glPixelTransferf);
    target->Set(String::New("glPixelTransferf"), _glut_glPixelTransferf->GetFunction());

    Local<FunctionTemplate> _glut_glPixelTransferi = FunctionTemplate::New(glut_glPixelTransferi);
    target->Set(String::New("glPixelTransferi"), _glut_glPixelTransferi->GetFunction());

    Local<FunctionTemplate> _glut_glPixelMapfv = FunctionTemplate::New(glut_glPixelMapfv);
    target->Set(String::New("glPixelMapfv"), _glut_glPixelMapfv->GetFunction());

    Local<FunctionTemplate> _glut_glPixelMapuiv = FunctionTemplate::New(glut_glPixelMapuiv);
    target->Set(String::New("glPixelMapuiv"), _glut_glPixelMapuiv->GetFunction());

    Local<FunctionTemplate> _glut_glPixelMapusv = FunctionTemplate::New(glut_glPixelMapusv);
    target->Set(String::New("glPixelMapusv"), _glut_glPixelMapusv->GetFunction());

    Local<FunctionTemplate> _glut_glGetPixelMapfv = FunctionTemplate::New(glut_glGetPixelMapfv);
    target->Set(String::New("glGetPixelMapfv"), _glut_glGetPixelMapfv->GetFunction());

    Local<FunctionTemplate> _glut_glGetPixelMapuiv = FunctionTemplate::New(glut_glGetPixelMapuiv);
    target->Set(String::New("glGetPixelMapuiv"), _glut_glGetPixelMapuiv->GetFunction());

    Local<FunctionTemplate> _glut_glGetPixelMapusv = FunctionTemplate::New(glut_glGetPixelMapusv);
    target->Set(String::New("glGetPixelMapusv"), _glut_glGetPixelMapusv->GetFunction());

    Local<FunctionTemplate> _glut_glBitmap = FunctionTemplate::New(glut_glBitmap);
    target->Set(String::New("glBitmap"), _glut_glBitmap->GetFunction());

    Local<FunctionTemplate> _glut_glReadPixels = FunctionTemplate::New(glut_glReadPixels);
    target->Set(String::New("glReadPixels"), _glut_glReadPixels->GetFunction());

    Local<FunctionTemplate> _glut_glDrawPixels = FunctionTemplate::New(glut_glDrawPixels);
    target->Set(String::New("glDrawPixels"), _glut_glDrawPixels->GetFunction());

    Local<FunctionTemplate> _glut_glCopyPixels = FunctionTemplate::New(glut_glCopyPixels);
    target->Set(String::New("glCopyPixels"), _glut_glCopyPixels->GetFunction());

    Local<FunctionTemplate> _glut_glStencilFunc = FunctionTemplate::New(glut_glStencilFunc);
    target->Set(String::New("glStencilFunc"), _glut_glStencilFunc->GetFunction());

    Local<FunctionTemplate> _glut_glStencilMask = FunctionTemplate::New(glut_glStencilMask);
    target->Set(String::New("glStencilMask"), _glut_glStencilMask->GetFunction());

    Local<FunctionTemplate> _glut_glStencilOp = FunctionTemplate::New(glut_glStencilOp);
    target->Set(String::New("glStencilOp"), _glut_glStencilOp->GetFunction());

    Local<FunctionTemplate> _glut_glClearStencil = FunctionTemplate::New(glut_glClearStencil);
    target->Set(String::New("glClearStencil"), _glut_glClearStencil->GetFunction());

    Local<FunctionTemplate> _glut_glTexGend = FunctionTemplate::New(glut_glTexGend);
    target->Set(String::New("glTexGend"), _glut_glTexGend->GetFunction());

    Local<FunctionTemplate> _glut_glTexGenf = FunctionTemplate::New(glut_glTexGenf);
    target->Set(String::New("glTexGenf"), _glut_glTexGenf->GetFunction());

    Local<FunctionTemplate> _glut_glTexGeni = FunctionTemplate::New(glut_glTexGeni);
    target->Set(String::New("glTexGeni"), _glut_glTexGeni->GetFunction());

    Local<FunctionTemplate> _glut_glTexGendv = FunctionTemplate::New(glut_glTexGendv);
    target->Set(String::New("glTexGendv"), _glut_glTexGendv->GetFunction());

    Local<FunctionTemplate> _glut_glTexGenfv = FunctionTemplate::New(glut_glTexGenfv);
    target->Set(String::New("glTexGenfv"), _glut_glTexGenfv->GetFunction());

    Local<FunctionTemplate> _glut_glTexGeniv = FunctionTemplate::New(glut_glTexGeniv);
    target->Set(String::New("glTexGeniv"), _glut_glTexGeniv->GetFunction());

    Local<FunctionTemplate> _glut_glGetTexGendv = FunctionTemplate::New(glut_glGetTexGendv);
    target->Set(String::New("glGetTexGendv"), _glut_glGetTexGendv->GetFunction());

    Local<FunctionTemplate> _glut_glGetTexGenfv = FunctionTemplate::New(glut_glGetTexGenfv);
    target->Set(String::New("glGetTexGenfv"), _glut_glGetTexGenfv->GetFunction());

    Local<FunctionTemplate> _glut_glGetTexGeniv = FunctionTemplate::New(glut_glGetTexGeniv);
    target->Set(String::New("glGetTexGeniv"), _glut_glGetTexGeniv->GetFunction());

    Local<FunctionTemplate> _glut_glTexEnvf = FunctionTemplate::New(glut_glTexEnvf);
    target->Set(String::New("glTexEnvf"), _glut_glTexEnvf->GetFunction());

    Local<FunctionTemplate> _glut_glTexEnvi = FunctionTemplate::New(glut_glTexEnvi);
    target->Set(String::New("glTexEnvi"), _glut_glTexEnvi->GetFunction());

    Local<FunctionTemplate> _glut_glTexEnvfv = FunctionTemplate::New(glut_glTexEnvfv);
    target->Set(String::New("glTexEnvfv"), _glut_glTexEnvfv->GetFunction());

    Local<FunctionTemplate> _glut_glTexEnviv = FunctionTemplate::New(glut_glTexEnviv);
    target->Set(String::New("glTexEnviv"), _glut_glTexEnviv->GetFunction());

    Local<FunctionTemplate> _glut_glGetTexEnvfv = FunctionTemplate::New(glut_glGetTexEnvfv);
    target->Set(String::New("glGetTexEnvfv"), _glut_glGetTexEnvfv->GetFunction());

    Local<FunctionTemplate> _glut_glGetTexEnviv = FunctionTemplate::New(glut_glGetTexEnviv);
    target->Set(String::New("glGetTexEnviv"), _glut_glGetTexEnviv->GetFunction());

    Local<FunctionTemplate> _glut_glTexParameterf = FunctionTemplate::New(glut_glTexParameterf);
    target->Set(String::New("glTexParameterf"), _glut_glTexParameterf->GetFunction());

    Local<FunctionTemplate> _glut_glTexParameteri = FunctionTemplate::New(glut_glTexParameteri);
    target->Set(String::New("glTexParameteri"), _glut_glTexParameteri->GetFunction());

    Local<FunctionTemplate> _glut_glTexParameterfv = FunctionTemplate::New(glut_glTexParameterfv);
    target->Set(String::New("glTexParameterfv"), _glut_glTexParameterfv->GetFunction());

    Local<FunctionTemplate> _glut_glTexParameteriv = FunctionTemplate::New(glut_glTexParameteriv);
    target->Set(String::New("glTexParameteriv"), _glut_glTexParameteriv->GetFunction());

    Local<FunctionTemplate> _glut_glGetTexParameterfv = FunctionTemplate::New(glut_glGetTexParameterfv);
    target->Set(String::New("glGetTexParameterfv"), _glut_glGetTexParameterfv->GetFunction());

    Local<FunctionTemplate> _glut_glGetTexParameteriv = FunctionTemplate::New(glut_glGetTexParameteriv);
    target->Set(String::New("glGetTexParameteriv"), _glut_glGetTexParameteriv->GetFunction());

    Local<FunctionTemplate> _glut_glGetTexLevelParameterfv = FunctionTemplate::New(glut_glGetTexLevelParameterfv);
    target->Set(String::New("glGetTexLevelParameterfv"), _glut_glGetTexLevelParameterfv->GetFunction());

    Local<FunctionTemplate> _glut_glGetTexLevelParameteriv = FunctionTemplate::New(glut_glGetTexLevelParameteriv);
    target->Set(String::New("glGetTexLevelParameteriv"), _glut_glGetTexLevelParameteriv->GetFunction());

    Local<FunctionTemplate> _glut_glTexImage1D = FunctionTemplate::New(glut_glTexImage1D);
    target->Set(String::New("glTexImage1D"), _glut_glTexImage1D->GetFunction());

    Local<FunctionTemplate> _glut_glTexImage2D = FunctionTemplate::New(glut_glTexImage2D);
    target->Set(String::New("glTexImage2D"), _glut_glTexImage2D->GetFunction());

    Local<FunctionTemplate> _glut_glGetTexImage = FunctionTemplate::New(glut_glGetTexImage);
    target->Set(String::New("glGetTexImage"), _glut_glGetTexImage->GetFunction());

    Local<FunctionTemplate> _glut_glGenTextures = FunctionTemplate::New(glut_glGenTextures);
    target->Set(String::New("glGenTextures"), _glut_glGenTextures->GetFunction());

    Local<FunctionTemplate> _glut_glDeleteTextures = FunctionTemplate::New(glut_glDeleteTextures);
    target->Set(String::New("glDeleteTextures"), _glut_glDeleteTextures->GetFunction());

    Local<FunctionTemplate> _glut_glBindTexture = FunctionTemplate::New(glut_glBindTexture);
    target->Set(String::New("glBindTexture"), _glut_glBindTexture->GetFunction());

    Local<FunctionTemplate> _glut_glPrioritizeTextures = FunctionTemplate::New(glut_glPrioritizeTextures);
    target->Set(String::New("glPrioritizeTextures"), _glut_glPrioritizeTextures->GetFunction());

    Local<FunctionTemplate> _glut_glAreTexturesResident = FunctionTemplate::New(glut_glAreTexturesResident);
    target->Set(String::New("glAreTexturesResident"), _glut_glAreTexturesResident->GetFunction());

    Local<FunctionTemplate> _glut_glIsTexture = FunctionTemplate::New(glut_glIsTexture);
    target->Set(String::New("glIsTexture"), _glut_glIsTexture->GetFunction());

    Local<FunctionTemplate> _glut_glTexSubImage1D = FunctionTemplate::New(glut_glTexSubImage1D);
    target->Set(String::New("glTexSubImage1D"), _glut_glTexSubImage1D->GetFunction());

    Local<FunctionTemplate> _glut_glTexSubImage2D = FunctionTemplate::New(glut_glTexSubImage2D);
    target->Set(String::New("glTexSubImage2D"), _glut_glTexSubImage2D->GetFunction());

    Local<FunctionTemplate> _glut_glCopyTexImage1D = FunctionTemplate::New(glut_glCopyTexImage1D);
    target->Set(String::New("glCopyTexImage1D"), _glut_glCopyTexImage1D->GetFunction());

    Local<FunctionTemplate> _glut_glCopyTexImage2D = FunctionTemplate::New(glut_glCopyTexImage2D);
    target->Set(String::New("glCopyTexImage2D"), _glut_glCopyTexImage2D->GetFunction());

    Local<FunctionTemplate> _glut_glCopyTexSubImage1D = FunctionTemplate::New(glut_glCopyTexSubImage1D);
    target->Set(String::New("glCopyTexSubImage1D"), _glut_glCopyTexSubImage1D->GetFunction());

    Local<FunctionTemplate> _glut_glCopyTexSubImage2D = FunctionTemplate::New(glut_glCopyTexSubImage2D);
    target->Set(String::New("glCopyTexSubImage2D"), _glut_glCopyTexSubImage2D->GetFunction());

    Local<FunctionTemplate> _glut_glMap1d = FunctionTemplate::New(glut_glMap1d);
    target->Set(String::New("glMap1d"), _glut_glMap1d->GetFunction());

    Local<FunctionTemplate> _glut_glMap1f = FunctionTemplate::New(glut_glMap1f);
    target->Set(String::New("glMap1f"), _glut_glMap1f->GetFunction());

    Local<FunctionTemplate> _glut_glMap2d = FunctionTemplate::New(glut_glMap2d);
    target->Set(String::New("glMap2d"), _glut_glMap2d->GetFunction());

    Local<FunctionTemplate> _glut_glMap2f = FunctionTemplate::New(glut_glMap2f);
    target->Set(String::New("glMap2f"), _glut_glMap2f->GetFunction());

    Local<FunctionTemplate> _glut_glGetMapdv = FunctionTemplate::New(glut_glGetMapdv);
    target->Set(String::New("glGetMapdv"), _glut_glGetMapdv->GetFunction());

    Local<FunctionTemplate> _glut_glGetMapfv = FunctionTemplate::New(glut_glGetMapfv);
    target->Set(String::New("glGetMapfv"), _glut_glGetMapfv->GetFunction());

    Local<FunctionTemplate> _glut_glGetMapiv = FunctionTemplate::New(glut_glGetMapiv);
    target->Set(String::New("glGetMapiv"), _glut_glGetMapiv->GetFunction());

    Local<FunctionTemplate> _glut_glEvalCoord1d = FunctionTemplate::New(glut_glEvalCoord1d);
    target->Set(String::New("glEvalCoord1d"), _glut_glEvalCoord1d->GetFunction());

    Local<FunctionTemplate> _glut_glEvalCoord1f = FunctionTemplate::New(glut_glEvalCoord1f);
    target->Set(String::New("glEvalCoord1f"), _glut_glEvalCoord1f->GetFunction());

    Local<FunctionTemplate> _glut_glEvalCoord1dv = FunctionTemplate::New(glut_glEvalCoord1dv);
    target->Set(String::New("glEvalCoord1dv"), _glut_glEvalCoord1dv->GetFunction());

    Local<FunctionTemplate> _glut_glEvalCoord1fv = FunctionTemplate::New(glut_glEvalCoord1fv);
    target->Set(String::New("glEvalCoord1fv"), _glut_glEvalCoord1fv->GetFunction());

    Local<FunctionTemplate> _glut_glEvalCoord2d = FunctionTemplate::New(glut_glEvalCoord2d);
    target->Set(String::New("glEvalCoord2d"), _glut_glEvalCoord2d->GetFunction());

    Local<FunctionTemplate> _glut_glEvalCoord2f = FunctionTemplate::New(glut_glEvalCoord2f);
    target->Set(String::New("glEvalCoord2f"), _glut_glEvalCoord2f->GetFunction());

    Local<FunctionTemplate> _glut_glEvalCoord2dv = FunctionTemplate::New(glut_glEvalCoord2dv);
    target->Set(String::New("glEvalCoord2dv"), _glut_glEvalCoord2dv->GetFunction());

    Local<FunctionTemplate> _glut_glEvalCoord2fv = FunctionTemplate::New(glut_glEvalCoord2fv);
    target->Set(String::New("glEvalCoord2fv"), _glut_glEvalCoord2fv->GetFunction());

    Local<FunctionTemplate> _glut_glMapGrid1d = FunctionTemplate::New(glut_glMapGrid1d);
    target->Set(String::New("glMapGrid1d"), _glut_glMapGrid1d->GetFunction());

    Local<FunctionTemplate> _glut_glMapGrid1f = FunctionTemplate::New(glut_glMapGrid1f);
    target->Set(String::New("glMapGrid1f"), _glut_glMapGrid1f->GetFunction());

    Local<FunctionTemplate> _glut_glMapGrid2d = FunctionTemplate::New(glut_glMapGrid2d);
    target->Set(String::New("glMapGrid2d"), _glut_glMapGrid2d->GetFunction());

    Local<FunctionTemplate> _glut_glMapGrid2f = FunctionTemplate::New(glut_glMapGrid2f);
    target->Set(String::New("glMapGrid2f"), _glut_glMapGrid2f->GetFunction());

    Local<FunctionTemplate> _glut_glEvalPoint1 = FunctionTemplate::New(glut_glEvalPoint1);
    target->Set(String::New("glEvalPoint1"), _glut_glEvalPoint1->GetFunction());

    Local<FunctionTemplate> _glut_glEvalPoint2 = FunctionTemplate::New(glut_glEvalPoint2);
    target->Set(String::New("glEvalPoint2"), _glut_glEvalPoint2->GetFunction());

    Local<FunctionTemplate> _glut_glEvalMesh1 = FunctionTemplate::New(glut_glEvalMesh1);
    target->Set(String::New("glEvalMesh1"), _glut_glEvalMesh1->GetFunction());

    Local<FunctionTemplate> _glut_glEvalMesh2 = FunctionTemplate::New(glut_glEvalMesh2);
    target->Set(String::New("glEvalMesh2"), _glut_glEvalMesh2->GetFunction());

    Local<FunctionTemplate> _glut_glFogf = FunctionTemplate::New(glut_glFogf);
    target->Set(String::New("glFogf"), _glut_glFogf->GetFunction());

    Local<FunctionTemplate> _glut_glFogi = FunctionTemplate::New(glut_glFogi);
    target->Set(String::New("glFogi"), _glut_glFogi->GetFunction());

    Local<FunctionTemplate> _glut_glFogfv = FunctionTemplate::New(glut_glFogfv);
    target->Set(String::New("glFogfv"), _glut_glFogfv->GetFunction());

    Local<FunctionTemplate> _glut_glFogiv = FunctionTemplate::New(glut_glFogiv);
    target->Set(String::New("glFogiv"), _glut_glFogiv->GetFunction());

    Local<FunctionTemplate> _glut_glFeedbackBuffer = FunctionTemplate::New(glut_glFeedbackBuffer);
    target->Set(String::New("glFeedbackBuffer"), _glut_glFeedbackBuffer->GetFunction());

    Local<FunctionTemplate> _glut_glPassThrough = FunctionTemplate::New(glut_glPassThrough);
    target->Set(String::New("glPassThrough"), _glut_glPassThrough->GetFunction());

    Local<FunctionTemplate> _glut_glSelectBuffer = FunctionTemplate::New(glut_glSelectBuffer);
    target->Set(String::New("glSelectBuffer"), _glut_glSelectBuffer->GetFunction());

    Local<FunctionTemplate> _glut_glInitNames = FunctionTemplate::New(glut_glInitNames);
    target->Set(String::New("glInitNames"), _glut_glInitNames->GetFunction());

    Local<FunctionTemplate> _glut_glLoadName = FunctionTemplate::New(glut_glLoadName);
    target->Set(String::New("glLoadName"), _glut_glLoadName->GetFunction());

    Local<FunctionTemplate> _glut_glPushName = FunctionTemplate::New(glut_glPushName);
    target->Set(String::New("glPushName"), _glut_glPushName->GetFunction());

    Local<FunctionTemplate> _glut_glPopName = FunctionTemplate::New(glut_glPopName);
    target->Set(String::New("glPopName"), _glut_glPopName->GetFunction());

    Local<FunctionTemplate> _glut_glDrawRangeElements = FunctionTemplate::New(glut_glDrawRangeElements);
    target->Set(String::New("glDrawRangeElements"), _glut_glDrawRangeElements->GetFunction());

    Local<FunctionTemplate> _glut_glTexImage3D = FunctionTemplate::New(glut_glTexImage3D);
    target->Set(String::New("glTexImage3D"), _glut_glTexImage3D->GetFunction());

    Local<FunctionTemplate> _glut_glTexSubImage3D = FunctionTemplate::New(glut_glTexSubImage3D);
    target->Set(String::New("glTexSubImage3D"), _glut_glTexSubImage3D->GetFunction());

    Local<FunctionTemplate> _glut_glCopyTexSubImage3D = FunctionTemplate::New(glut_glCopyTexSubImage3D);
    target->Set(String::New("glCopyTexSubImage3D"), _glut_glCopyTexSubImage3D->GetFunction());

    Local<FunctionTemplate> _glut_glColorTable = FunctionTemplate::New(glut_glColorTable);
    target->Set(String::New("glColorTable"), _glut_glColorTable->GetFunction());

    Local<FunctionTemplate> _glut_glColorSubTable = FunctionTemplate::New(glut_glColorSubTable);
    target->Set(String::New("glColorSubTable"), _glut_glColorSubTable->GetFunction());

    Local<FunctionTemplate> _glut_glColorTableParameteriv = FunctionTemplate::New(glut_glColorTableParameteriv);
    target->Set(String::New("glColorTableParameteriv"), _glut_glColorTableParameteriv->GetFunction());

    Local<FunctionTemplate> _glut_glColorTableParameterfv = FunctionTemplate::New(glut_glColorTableParameterfv);
    target->Set(String::New("glColorTableParameterfv"), _glut_glColorTableParameterfv->GetFunction());

    Local<FunctionTemplate> _glut_glCopyColorSubTable = FunctionTemplate::New(glut_glCopyColorSubTable);
    target->Set(String::New("glCopyColorSubTable"), _glut_glCopyColorSubTable->GetFunction());

    Local<FunctionTemplate> _glut_glCopyColorTable = FunctionTemplate::New(glut_glCopyColorTable);
    target->Set(String::New("glCopyColorTable"), _glut_glCopyColorTable->GetFunction());

    Local<FunctionTemplate> _glut_glGetColorTable = FunctionTemplate::New(glut_glGetColorTable);
    target->Set(String::New("glGetColorTable"), _glut_glGetColorTable->GetFunction());

    Local<FunctionTemplate> _glut_glGetColorTableParameterfv = FunctionTemplate::New(glut_glGetColorTableParameterfv);
    target->Set(String::New("glGetColorTableParameterfv"), _glut_glGetColorTableParameterfv->GetFunction());

    Local<FunctionTemplate> _glut_glGetColorTableParameteriv = FunctionTemplate::New(glut_glGetColorTableParameteriv);
    target->Set(String::New("glGetColorTableParameteriv"), _glut_glGetColorTableParameteriv->GetFunction());

    Local<FunctionTemplate> _glut_glBlendEquation = FunctionTemplate::New(glut_glBlendEquation);
    target->Set(String::New("glBlendEquation"), _glut_glBlendEquation->GetFunction());

    Local<FunctionTemplate> _glut_glBlendColor = FunctionTemplate::New(glut_glBlendColor);
    target->Set(String::New("glBlendColor"), _glut_glBlendColor->GetFunction());

    Local<FunctionTemplate> _glut_glHistogram = FunctionTemplate::New(glut_glHistogram);
    target->Set(String::New("glHistogram"), _glut_glHistogram->GetFunction());

    Local<FunctionTemplate> _glut_glResetHistogram = FunctionTemplate::New(glut_glResetHistogram);
    target->Set(String::New("glResetHistogram"), _glut_glResetHistogram->GetFunction());

    Local<FunctionTemplate> _glut_glGetHistogram = FunctionTemplate::New(glut_glGetHistogram);
    target->Set(String::New("glGetHistogram"), _glut_glGetHistogram->GetFunction());

    Local<FunctionTemplate> _glut_glGetHistogramParameterfv = FunctionTemplate::New(glut_glGetHistogramParameterfv);
    target->Set(String::New("glGetHistogramParameterfv"), _glut_glGetHistogramParameterfv->GetFunction());

    Local<FunctionTemplate> _glut_glGetHistogramParameteriv = FunctionTemplate::New(glut_glGetHistogramParameteriv);
    target->Set(String::New("glGetHistogramParameteriv"), _glut_glGetHistogramParameteriv->GetFunction());

    Local<FunctionTemplate> _glut_glMinmax = FunctionTemplate::New(glut_glMinmax);
    target->Set(String::New("glMinmax"), _glut_glMinmax->GetFunction());

    Local<FunctionTemplate> _glut_glResetMinmax = FunctionTemplate::New(glut_glResetMinmax);
    target->Set(String::New("glResetMinmax"), _glut_glResetMinmax->GetFunction());

    Local<FunctionTemplate> _glut_glGetMinmax = FunctionTemplate::New(glut_glGetMinmax);
    target->Set(String::New("glGetMinmax"), _glut_glGetMinmax->GetFunction());

    Local<FunctionTemplate> _glut_glGetMinmaxParameterfv = FunctionTemplate::New(glut_glGetMinmaxParameterfv);
    target->Set(String::New("glGetMinmaxParameterfv"), _glut_glGetMinmaxParameterfv->GetFunction());

    Local<FunctionTemplate> _glut_glGetMinmaxParameteriv = FunctionTemplate::New(glut_glGetMinmaxParameteriv);
    target->Set(String::New("glGetMinmaxParameteriv"), _glut_glGetMinmaxParameteriv->GetFunction());

    Local<FunctionTemplate> _glut_glConvolutionFilter1D = FunctionTemplate::New(glut_glConvolutionFilter1D);
    target->Set(String::New("glConvolutionFilter1D"), _glut_glConvolutionFilter1D->GetFunction());

    Local<FunctionTemplate> _glut_glConvolutionFilter2D = FunctionTemplate::New(glut_glConvolutionFilter2D);
    target->Set(String::New("glConvolutionFilter2D"), _glut_glConvolutionFilter2D->GetFunction());

    Local<FunctionTemplate> _glut_glConvolutionParameterf = FunctionTemplate::New(glut_glConvolutionParameterf);
    target->Set(String::New("glConvolutionParameterf"), _glut_glConvolutionParameterf->GetFunction());

    Local<FunctionTemplate> _glut_glConvolutionParameterfv = FunctionTemplate::New(glut_glConvolutionParameterfv);
    target->Set(String::New("glConvolutionParameterfv"), _glut_glConvolutionParameterfv->GetFunction());

    Local<FunctionTemplate> _glut_glConvolutionParameteri = FunctionTemplate::New(glut_glConvolutionParameteri);
    target->Set(String::New("glConvolutionParameteri"), _glut_glConvolutionParameteri->GetFunction());

    Local<FunctionTemplate> _glut_glConvolutionParameteriv = FunctionTemplate::New(glut_glConvolutionParameteriv);
    target->Set(String::New("glConvolutionParameteriv"), _glut_glConvolutionParameteriv->GetFunction());

    Local<FunctionTemplate> _glut_glCopyConvolutionFilter1D = FunctionTemplate::New(glut_glCopyConvolutionFilter1D);
    target->Set(String::New("glCopyConvolutionFilter1D"), _glut_glCopyConvolutionFilter1D->GetFunction());

    Local<FunctionTemplate> _glut_glCopyConvolutionFilter2D = FunctionTemplate::New(glut_glCopyConvolutionFilter2D);
    target->Set(String::New("glCopyConvolutionFilter2D"), _glut_glCopyConvolutionFilter2D->GetFunction());

    Local<FunctionTemplate> _glut_glGetConvolutionFilter = FunctionTemplate::New(glut_glGetConvolutionFilter);
    target->Set(String::New("glGetConvolutionFilter"), _glut_glGetConvolutionFilter->GetFunction());

    Local<FunctionTemplate> _glut_glGetConvolutionParameterfv = FunctionTemplate::New(glut_glGetConvolutionParameterfv);
    target->Set(String::New("glGetConvolutionParameterfv"), _glut_glGetConvolutionParameterfv->GetFunction());

    Local<FunctionTemplate> _glut_glGetConvolutionParameteriv = FunctionTemplate::New(glut_glGetConvolutionParameteriv);
    target->Set(String::New("glGetConvolutionParameteriv"), _glut_glGetConvolutionParameteriv->GetFunction());

    Local<FunctionTemplate> _glut_glSeparableFilter2D = FunctionTemplate::New(glut_glSeparableFilter2D);
    target->Set(String::New("glSeparableFilter2D"), _glut_glSeparableFilter2D->GetFunction());

    Local<FunctionTemplate> _glut_glGetSeparableFilter = FunctionTemplate::New(glut_glGetSeparableFilter);
    target->Set(String::New("glGetSeparableFilter"), _glut_glGetSeparableFilter->GetFunction());

    Local<FunctionTemplate> _glut_glActiveTexture = FunctionTemplate::New(glut_glActiveTexture);
    target->Set(String::New("glActiveTexture"), _glut_glActiveTexture->GetFunction());

    Local<FunctionTemplate> _glut_glClientActiveTexture = FunctionTemplate::New(glut_glClientActiveTexture);
    target->Set(String::New("glClientActiveTexture"), _glut_glClientActiveTexture->GetFunction());

    Local<FunctionTemplate> _glut_glCompressedTexImage1D = FunctionTemplate::New(glut_glCompressedTexImage1D);
    target->Set(String::New("glCompressedTexImage1D"), _glut_glCompressedTexImage1D->GetFunction());

    Local<FunctionTemplate> _glut_glCompressedTexImage2D = FunctionTemplate::New(glut_glCompressedTexImage2D);
    target->Set(String::New("glCompressedTexImage2D"), _glut_glCompressedTexImage2D->GetFunction());

    Local<FunctionTemplate> _glut_glCompressedTexImage3D = FunctionTemplate::New(glut_glCompressedTexImage3D);
    target->Set(String::New("glCompressedTexImage3D"), _glut_glCompressedTexImage3D->GetFunction());

    Local<FunctionTemplate> _glut_glCompressedTexSubImage1D = FunctionTemplate::New(glut_glCompressedTexSubImage1D);
    target->Set(String::New("glCompressedTexSubImage1D"), _glut_glCompressedTexSubImage1D->GetFunction());

    Local<FunctionTemplate> _glut_glCompressedTexSubImage2D = FunctionTemplate::New(glut_glCompressedTexSubImage2D);
    target->Set(String::New("glCompressedTexSubImage2D"), _glut_glCompressedTexSubImage2D->GetFunction());

    Local<FunctionTemplate> _glut_glCompressedTexSubImage3D = FunctionTemplate::New(glut_glCompressedTexSubImage3D);
    target->Set(String::New("glCompressedTexSubImage3D"), _glut_glCompressedTexSubImage3D->GetFunction());

    Local<FunctionTemplate> _glut_glGetCompressedTexImage = FunctionTemplate::New(glut_glGetCompressedTexImage);
    target->Set(String::New("glGetCompressedTexImage"), _glut_glGetCompressedTexImage->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord1d = FunctionTemplate::New(glut_glMultiTexCoord1d);
    target->Set(String::New("glMultiTexCoord1d"), _glut_glMultiTexCoord1d->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord1dv = FunctionTemplate::New(glut_glMultiTexCoord1dv);
    target->Set(String::New("glMultiTexCoord1dv"), _glut_glMultiTexCoord1dv->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord1f = FunctionTemplate::New(glut_glMultiTexCoord1f);
    target->Set(String::New("glMultiTexCoord1f"), _glut_glMultiTexCoord1f->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord1fv = FunctionTemplate::New(glut_glMultiTexCoord1fv);
    target->Set(String::New("glMultiTexCoord1fv"), _glut_glMultiTexCoord1fv->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord1i = FunctionTemplate::New(glut_glMultiTexCoord1i);
    target->Set(String::New("glMultiTexCoord1i"), _glut_glMultiTexCoord1i->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord1iv = FunctionTemplate::New(glut_glMultiTexCoord1iv);
    target->Set(String::New("glMultiTexCoord1iv"), _glut_glMultiTexCoord1iv->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord1s = FunctionTemplate::New(glut_glMultiTexCoord1s);
    target->Set(String::New("glMultiTexCoord1s"), _glut_glMultiTexCoord1s->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord1sv = FunctionTemplate::New(glut_glMultiTexCoord1sv);
    target->Set(String::New("glMultiTexCoord1sv"), _glut_glMultiTexCoord1sv->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord2d = FunctionTemplate::New(glut_glMultiTexCoord2d);
    target->Set(String::New("glMultiTexCoord2d"), _glut_glMultiTexCoord2d->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord2dv = FunctionTemplate::New(glut_glMultiTexCoord2dv);
    target->Set(String::New("glMultiTexCoord2dv"), _glut_glMultiTexCoord2dv->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord2f = FunctionTemplate::New(glut_glMultiTexCoord2f);
    target->Set(String::New("glMultiTexCoord2f"), _glut_glMultiTexCoord2f->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord2fv = FunctionTemplate::New(glut_glMultiTexCoord2fv);
    target->Set(String::New("glMultiTexCoord2fv"), _glut_glMultiTexCoord2fv->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord2i = FunctionTemplate::New(glut_glMultiTexCoord2i);
    target->Set(String::New("glMultiTexCoord2i"), _glut_glMultiTexCoord2i->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord2iv = FunctionTemplate::New(glut_glMultiTexCoord2iv);
    target->Set(String::New("glMultiTexCoord2iv"), _glut_glMultiTexCoord2iv->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord2s = FunctionTemplate::New(glut_glMultiTexCoord2s);
    target->Set(String::New("glMultiTexCoord2s"), _glut_glMultiTexCoord2s->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord2sv = FunctionTemplate::New(glut_glMultiTexCoord2sv);
    target->Set(String::New("glMultiTexCoord2sv"), _glut_glMultiTexCoord2sv->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord3d = FunctionTemplate::New(glut_glMultiTexCoord3d);
    target->Set(String::New("glMultiTexCoord3d"), _glut_glMultiTexCoord3d->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord3dv = FunctionTemplate::New(glut_glMultiTexCoord3dv);
    target->Set(String::New("glMultiTexCoord3dv"), _glut_glMultiTexCoord3dv->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord3f = FunctionTemplate::New(glut_glMultiTexCoord3f);
    target->Set(String::New("glMultiTexCoord3f"), _glut_glMultiTexCoord3f->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord3fv = FunctionTemplate::New(glut_glMultiTexCoord3fv);
    target->Set(String::New("glMultiTexCoord3fv"), _glut_glMultiTexCoord3fv->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord3i = FunctionTemplate::New(glut_glMultiTexCoord3i);
    target->Set(String::New("glMultiTexCoord3i"), _glut_glMultiTexCoord3i->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord3iv = FunctionTemplate::New(glut_glMultiTexCoord3iv);
    target->Set(String::New("glMultiTexCoord3iv"), _glut_glMultiTexCoord3iv->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord3s = FunctionTemplate::New(glut_glMultiTexCoord3s);
    target->Set(String::New("glMultiTexCoord3s"), _glut_glMultiTexCoord3s->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord3sv = FunctionTemplate::New(glut_glMultiTexCoord3sv);
    target->Set(String::New("glMultiTexCoord3sv"), _glut_glMultiTexCoord3sv->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord4d = FunctionTemplate::New(glut_glMultiTexCoord4d);
    target->Set(String::New("glMultiTexCoord4d"), _glut_glMultiTexCoord4d->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord4dv = FunctionTemplate::New(glut_glMultiTexCoord4dv);
    target->Set(String::New("glMultiTexCoord4dv"), _glut_glMultiTexCoord4dv->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord4f = FunctionTemplate::New(glut_glMultiTexCoord4f);
    target->Set(String::New("glMultiTexCoord4f"), _glut_glMultiTexCoord4f->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord4fv = FunctionTemplate::New(glut_glMultiTexCoord4fv);
    target->Set(String::New("glMultiTexCoord4fv"), _glut_glMultiTexCoord4fv->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord4i = FunctionTemplate::New(glut_glMultiTexCoord4i);
    target->Set(String::New("glMultiTexCoord4i"), _glut_glMultiTexCoord4i->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord4iv = FunctionTemplate::New(glut_glMultiTexCoord4iv);
    target->Set(String::New("glMultiTexCoord4iv"), _glut_glMultiTexCoord4iv->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord4s = FunctionTemplate::New(glut_glMultiTexCoord4s);
    target->Set(String::New("glMultiTexCoord4s"), _glut_glMultiTexCoord4s->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord4sv = FunctionTemplate::New(glut_glMultiTexCoord4sv);
    target->Set(String::New("glMultiTexCoord4sv"), _glut_glMultiTexCoord4sv->GetFunction());

    Local<FunctionTemplate> _glut_glLoadTransposeMatrixd = FunctionTemplate::New(glut_glLoadTransposeMatrixd);
    target->Set(String::New("glLoadTransposeMatrixd"), _glut_glLoadTransposeMatrixd->GetFunction());

    Local<FunctionTemplate> _glut_glLoadTransposeMatrixf = FunctionTemplate::New(glut_glLoadTransposeMatrixf);
    target->Set(String::New("glLoadTransposeMatrixf"), _glut_glLoadTransposeMatrixf->GetFunction());

    Local<FunctionTemplate> _glut_glMultTransposeMatrixd = FunctionTemplate::New(glut_glMultTransposeMatrixd);
    target->Set(String::New("glMultTransposeMatrixd"), _glut_glMultTransposeMatrixd->GetFunction());

    Local<FunctionTemplate> _glut_glMultTransposeMatrixf = FunctionTemplate::New(glut_glMultTransposeMatrixf);
    target->Set(String::New("glMultTransposeMatrixf"), _glut_glMultTransposeMatrixf->GetFunction());

    Local<FunctionTemplate> _glut_glSampleCoverage = FunctionTemplate::New(glut_glSampleCoverage);
    target->Set(String::New("glSampleCoverage"), _glut_glSampleCoverage->GetFunction());

    Local<FunctionTemplate> _glut_glActiveTextureARB = FunctionTemplate::New(glut_glActiveTextureARB);
    target->Set(String::New("glActiveTextureARB"), _glut_glActiveTextureARB->GetFunction());

    Local<FunctionTemplate> _glut_glClientActiveTextureARB = FunctionTemplate::New(glut_glClientActiveTextureARB);
    target->Set(String::New("glClientActiveTextureARB"), _glut_glClientActiveTextureARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord1dARB = FunctionTemplate::New(glut_glMultiTexCoord1dARB);
    target->Set(String::New("glMultiTexCoord1dARB"), _glut_glMultiTexCoord1dARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord1dvARB = FunctionTemplate::New(glut_glMultiTexCoord1dvARB);
    target->Set(String::New("glMultiTexCoord1dvARB"), _glut_glMultiTexCoord1dvARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord1fARB = FunctionTemplate::New(glut_glMultiTexCoord1fARB);
    target->Set(String::New("glMultiTexCoord1fARB"), _glut_glMultiTexCoord1fARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord1fvARB = FunctionTemplate::New(glut_glMultiTexCoord1fvARB);
    target->Set(String::New("glMultiTexCoord1fvARB"), _glut_glMultiTexCoord1fvARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord1iARB = FunctionTemplate::New(glut_glMultiTexCoord1iARB);
    target->Set(String::New("glMultiTexCoord1iARB"), _glut_glMultiTexCoord1iARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord1ivARB = FunctionTemplate::New(glut_glMultiTexCoord1ivARB);
    target->Set(String::New("glMultiTexCoord1ivARB"), _glut_glMultiTexCoord1ivARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord1sARB = FunctionTemplate::New(glut_glMultiTexCoord1sARB);
    target->Set(String::New("glMultiTexCoord1sARB"), _glut_glMultiTexCoord1sARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord1svARB = FunctionTemplate::New(glut_glMultiTexCoord1svARB);
    target->Set(String::New("glMultiTexCoord1svARB"), _glut_glMultiTexCoord1svARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord2dARB = FunctionTemplate::New(glut_glMultiTexCoord2dARB);
    target->Set(String::New("glMultiTexCoord2dARB"), _glut_glMultiTexCoord2dARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord2dvARB = FunctionTemplate::New(glut_glMultiTexCoord2dvARB);
    target->Set(String::New("glMultiTexCoord2dvARB"), _glut_glMultiTexCoord2dvARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord2fARB = FunctionTemplate::New(glut_glMultiTexCoord2fARB);
    target->Set(String::New("glMultiTexCoord2fARB"), _glut_glMultiTexCoord2fARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord2fvARB = FunctionTemplate::New(glut_glMultiTexCoord2fvARB);
    target->Set(String::New("glMultiTexCoord2fvARB"), _glut_glMultiTexCoord2fvARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord2iARB = FunctionTemplate::New(glut_glMultiTexCoord2iARB);
    target->Set(String::New("glMultiTexCoord2iARB"), _glut_glMultiTexCoord2iARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord2ivARB = FunctionTemplate::New(glut_glMultiTexCoord2ivARB);
    target->Set(String::New("glMultiTexCoord2ivARB"), _glut_glMultiTexCoord2ivARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord2sARB = FunctionTemplate::New(glut_glMultiTexCoord2sARB);
    target->Set(String::New("glMultiTexCoord2sARB"), _glut_glMultiTexCoord2sARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord2svARB = FunctionTemplate::New(glut_glMultiTexCoord2svARB);
    target->Set(String::New("glMultiTexCoord2svARB"), _glut_glMultiTexCoord2svARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord3dARB = FunctionTemplate::New(glut_glMultiTexCoord3dARB);
    target->Set(String::New("glMultiTexCoord3dARB"), _glut_glMultiTexCoord3dARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord3dvARB = FunctionTemplate::New(glut_glMultiTexCoord3dvARB);
    target->Set(String::New("glMultiTexCoord3dvARB"), _glut_glMultiTexCoord3dvARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord3fARB = FunctionTemplate::New(glut_glMultiTexCoord3fARB);
    target->Set(String::New("glMultiTexCoord3fARB"), _glut_glMultiTexCoord3fARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord3fvARB = FunctionTemplate::New(glut_glMultiTexCoord3fvARB);
    target->Set(String::New("glMultiTexCoord3fvARB"), _glut_glMultiTexCoord3fvARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord3iARB = FunctionTemplate::New(glut_glMultiTexCoord3iARB);
    target->Set(String::New("glMultiTexCoord3iARB"), _glut_glMultiTexCoord3iARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord3ivARB = FunctionTemplate::New(glut_glMultiTexCoord3ivARB);
    target->Set(String::New("glMultiTexCoord3ivARB"), _glut_glMultiTexCoord3ivARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord3sARB = FunctionTemplate::New(glut_glMultiTexCoord3sARB);
    target->Set(String::New("glMultiTexCoord3sARB"), _glut_glMultiTexCoord3sARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord3svARB = FunctionTemplate::New(glut_glMultiTexCoord3svARB);
    target->Set(String::New("glMultiTexCoord3svARB"), _glut_glMultiTexCoord3svARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord4dARB = FunctionTemplate::New(glut_glMultiTexCoord4dARB);
    target->Set(String::New("glMultiTexCoord4dARB"), _glut_glMultiTexCoord4dARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord4dvARB = FunctionTemplate::New(glut_glMultiTexCoord4dvARB);
    target->Set(String::New("glMultiTexCoord4dvARB"), _glut_glMultiTexCoord4dvARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord4fARB = FunctionTemplate::New(glut_glMultiTexCoord4fARB);
    target->Set(String::New("glMultiTexCoord4fARB"), _glut_glMultiTexCoord4fARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord4fvARB = FunctionTemplate::New(glut_glMultiTexCoord4fvARB);
    target->Set(String::New("glMultiTexCoord4fvARB"), _glut_glMultiTexCoord4fvARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord4iARB = FunctionTemplate::New(glut_glMultiTexCoord4iARB);
    target->Set(String::New("glMultiTexCoord4iARB"), _glut_glMultiTexCoord4iARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord4ivARB = FunctionTemplate::New(glut_glMultiTexCoord4ivARB);
    target->Set(String::New("glMultiTexCoord4ivARB"), _glut_glMultiTexCoord4ivARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord4sARB = FunctionTemplate::New(glut_glMultiTexCoord4sARB);
    target->Set(String::New("glMultiTexCoord4sARB"), _glut_glMultiTexCoord4sARB->GetFunction());

    Local<FunctionTemplate> _glut_glMultiTexCoord4svARB = FunctionTemplate::New(glut_glMultiTexCoord4svARB);
    target->Set(String::New("glMultiTexCoord4svARB"), _glut_glMultiTexCoord4svARB->GetFunction());

    Local<FunctionTemplate> _glut_glProgramCallbackMESA = FunctionTemplate::New(glut_glProgramCallbackMESA);
    target->Set(String::New("glProgramCallbackMESA"), _glut_glProgramCallbackMESA->GetFunction());

    Local<FunctionTemplate> _glut_glGetProgramRegisterfvMESA = FunctionTemplate::New(glut_glGetProgramRegisterfvMESA);
    target->Set(String::New("glGetProgramRegisterfvMESA"), _glut_glGetProgramRegisterfvMESA->GetFunction());

    Local<FunctionTemplate> _glut_glBlendEquationSeparateATI = FunctionTemplate::New(glut_glBlendEquationSeparateATI);
    target->Set(String::New("glBlendEquationSeparateATI"), _glut_glBlendEquationSeparateATI->GetFunction());

    Local<FunctionTemplate> _glut_glutInit = FunctionTemplate::New(glut_glutInit);
    target->Set(String::New("glutInit"), _glut_glutInit->GetFunction());

    Local<FunctionTemplate> _glut_glutInitDisplayMode = FunctionTemplate::New(glut_glutInitDisplayMode);
    target->Set(String::New("glutInitDisplayMode"), _glut_glutInitDisplayMode->GetFunction());

    Local<FunctionTemplate> _glut_glutInitDisplayString = FunctionTemplate::New(glut_glutInitDisplayString);
    target->Set(String::New("glutInitDisplayString"), _glut_glutInitDisplayString->GetFunction());

    Local<FunctionTemplate> _glut_glutInitWindowPosition = FunctionTemplate::New(glut_glutInitWindowPosition);
    target->Set(String::New("glutInitWindowPosition"), _glut_glutInitWindowPosition->GetFunction());

    Local<FunctionTemplate> _glut_glutInitWindowSize = FunctionTemplate::New(glut_glutInitWindowSize);
    target->Set(String::New("glutInitWindowSize"), _glut_glutInitWindowSize->GetFunction());

    Local<FunctionTemplate> _glut_glutMainLoop = FunctionTemplate::New(glut_glutMainLoop);
    target->Set(String::New("glutMainLoop"), _glut_glutMainLoop->GetFunction());

    Local<FunctionTemplate> _glut_glutCreateWindow = FunctionTemplate::New(glut_glutCreateWindow);
    target->Set(String::New("glutCreateWindow"), _glut_glutCreateWindow->GetFunction());

    Local<FunctionTemplate> _glut_glutCreateSubWindow = FunctionTemplate::New(glut_glutCreateSubWindow);
    target->Set(String::New("glutCreateSubWindow"), _glut_glutCreateSubWindow->GetFunction());

    Local<FunctionTemplate> _glut_glutDestroyWindow = FunctionTemplate::New(glut_glutDestroyWindow);
    target->Set(String::New("glutDestroyWindow"), _glut_glutDestroyWindow->GetFunction());

    Local<FunctionTemplate> _glut_glutPostRedisplay = FunctionTemplate::New(glut_glutPostRedisplay);
    target->Set(String::New("glutPostRedisplay"), _glut_glutPostRedisplay->GetFunction());

    Local<FunctionTemplate> _glut_glutPostWindowRedisplay = FunctionTemplate::New(glut_glutPostWindowRedisplay);
    target->Set(String::New("glutPostWindowRedisplay"), _glut_glutPostWindowRedisplay->GetFunction());

    Local<FunctionTemplate> _glut_glutSwapBuffers = FunctionTemplate::New(glut_glutSwapBuffers);
    target->Set(String::New("glutSwapBuffers"), _glut_glutSwapBuffers->GetFunction());

    Local<FunctionTemplate> _glut_glutGetWindow = FunctionTemplate::New(glut_glutGetWindow);
    target->Set(String::New("glutGetWindow"), _glut_glutGetWindow->GetFunction());

    Local<FunctionTemplate> _glut_glutSetWindow = FunctionTemplate::New(glut_glutSetWindow);
    target->Set(String::New("glutSetWindow"), _glut_glutSetWindow->GetFunction());

    Local<FunctionTemplate> _glut_glutSetWindowTitle = FunctionTemplate::New(glut_glutSetWindowTitle);
    target->Set(String::New("glutSetWindowTitle"), _glut_glutSetWindowTitle->GetFunction());

    Local<FunctionTemplate> _glut_glutSetIconTitle = FunctionTemplate::New(glut_glutSetIconTitle);
    target->Set(String::New("glutSetIconTitle"), _glut_glutSetIconTitle->GetFunction());

    Local<FunctionTemplate> _glut_glutPositionWindow = FunctionTemplate::New(glut_glutPositionWindow);
    target->Set(String::New("glutPositionWindow"), _glut_glutPositionWindow->GetFunction());

    Local<FunctionTemplate> _glut_glutReshapeWindow = FunctionTemplate::New(glut_glutReshapeWindow);
    target->Set(String::New("glutReshapeWindow"), _glut_glutReshapeWindow->GetFunction());

    Local<FunctionTemplate> _glut_glutPopWindow = FunctionTemplate::New(glut_glutPopWindow);
    target->Set(String::New("glutPopWindow"), _glut_glutPopWindow->GetFunction());

    Local<FunctionTemplate> _glut_glutPushWindow = FunctionTemplate::New(glut_glutPushWindow);
    target->Set(String::New("glutPushWindow"), _glut_glutPushWindow->GetFunction());

    Local<FunctionTemplate> _glut_glutIconifyWindow = FunctionTemplate::New(glut_glutIconifyWindow);
    target->Set(String::New("glutIconifyWindow"), _glut_glutIconifyWindow->GetFunction());

    Local<FunctionTemplate> _glut_glutShowWindow = FunctionTemplate::New(glut_glutShowWindow);
    target->Set(String::New("glutShowWindow"), _glut_glutShowWindow->GetFunction());

    Local<FunctionTemplate> _glut_glutHideWindow = FunctionTemplate::New(glut_glutHideWindow);
    target->Set(String::New("glutHideWindow"), _glut_glutHideWindow->GetFunction());

    Local<FunctionTemplate> _glut_glutFullScreen = FunctionTemplate::New(glut_glutFullScreen);
    target->Set(String::New("glutFullScreen"), _glut_glutFullScreen->GetFunction());

    Local<FunctionTemplate> _glut_glutSetCursor = FunctionTemplate::New(glut_glutSetCursor);
    target->Set(String::New("glutSetCursor"), _glut_glutSetCursor->GetFunction());

    Local<FunctionTemplate> _glut_glutWarpPointer = FunctionTemplate::New(glut_glutWarpPointer);
    target->Set(String::New("glutWarpPointer"), _glut_glutWarpPointer->GetFunction());

    Local<FunctionTemplate> _glut_glutEstablishOverlay = FunctionTemplate::New(glut_glutEstablishOverlay);
    target->Set(String::New("glutEstablishOverlay"), _glut_glutEstablishOverlay->GetFunction());

    Local<FunctionTemplate> _glut_glutRemoveOverlay = FunctionTemplate::New(glut_glutRemoveOverlay);
    target->Set(String::New("glutRemoveOverlay"), _glut_glutRemoveOverlay->GetFunction());

    Local<FunctionTemplate> _glut_glutUseLayer = FunctionTemplate::New(glut_glutUseLayer);
    target->Set(String::New("glutUseLayer"), _glut_glutUseLayer->GetFunction());

    Local<FunctionTemplate> _glut_glutPostOverlayRedisplay = FunctionTemplate::New(glut_glutPostOverlayRedisplay);
    target->Set(String::New("glutPostOverlayRedisplay"), _glut_glutPostOverlayRedisplay->GetFunction());

    Local<FunctionTemplate> _glut_glutPostWindowOverlayRedisplay = FunctionTemplate::New(glut_glutPostWindowOverlayRedisplay);
    target->Set(String::New("glutPostWindowOverlayRedisplay"), _glut_glutPostWindowOverlayRedisplay->GetFunction());

    Local<FunctionTemplate> _glut_glutShowOverlay = FunctionTemplate::New(glut_glutShowOverlay);
    target->Set(String::New("glutShowOverlay"), _glut_glutShowOverlay->GetFunction());

    Local<FunctionTemplate> _glut_glutHideOverlay = FunctionTemplate::New(glut_glutHideOverlay);
    target->Set(String::New("glutHideOverlay"), _glut_glutHideOverlay->GetFunction());

    Local<FunctionTemplate> _glut_glutCreateMenu = FunctionTemplate::New(glut_glutCreateMenu);
    target->Set(String::New("glutCreateMenu"), _glut_glutCreateMenu->GetFunction());

    Local<FunctionTemplate> _glut_glutDestroyMenu = FunctionTemplate::New(glut_glutDestroyMenu);
    target->Set(String::New("glutDestroyMenu"), _glut_glutDestroyMenu->GetFunction());

    Local<FunctionTemplate> _glut_glutGetMenu = FunctionTemplate::New(glut_glutGetMenu);
    target->Set(String::New("glutGetMenu"), _glut_glutGetMenu->GetFunction());

    Local<FunctionTemplate> _glut_glutSetMenu = FunctionTemplate::New(glut_glutSetMenu);
    target->Set(String::New("glutSetMenu"), _glut_glutSetMenu->GetFunction());

    Local<FunctionTemplate> _glut_glutAddMenuEntry = FunctionTemplate::New(glut_glutAddMenuEntry);
    target->Set(String::New("glutAddMenuEntry"), _glut_glutAddMenuEntry->GetFunction());

    Local<FunctionTemplate> _glut_glutAddSubMenu = FunctionTemplate::New(glut_glutAddSubMenu);
    target->Set(String::New("glutAddSubMenu"), _glut_glutAddSubMenu->GetFunction());

    Local<FunctionTemplate> _glut_glutChangeToMenuEntry = FunctionTemplate::New(glut_glutChangeToMenuEntry);
    target->Set(String::New("glutChangeToMenuEntry"), _glut_glutChangeToMenuEntry->GetFunction());

    Local<FunctionTemplate> _glut_glutChangeToSubMenu = FunctionTemplate::New(glut_glutChangeToSubMenu);
    target->Set(String::New("glutChangeToSubMenu"), _glut_glutChangeToSubMenu->GetFunction());

    Local<FunctionTemplate> _glut_glutRemoveMenuItem = FunctionTemplate::New(glut_glutRemoveMenuItem);
    target->Set(String::New("glutRemoveMenuItem"), _glut_glutRemoveMenuItem->GetFunction());

    Local<FunctionTemplate> _glut_glutAttachMenu = FunctionTemplate::New(glut_glutAttachMenu);
    target->Set(String::New("glutAttachMenu"), _glut_glutAttachMenu->GetFunction());

    Local<FunctionTemplate> _glut_glutDetachMenu = FunctionTemplate::New(glut_glutDetachMenu);
    target->Set(String::New("glutDetachMenu"), _glut_glutDetachMenu->GetFunction());

    Local<FunctionTemplate> _glut_glutDisplayFunc = FunctionTemplate::New(glut_glutDisplayFunc);
    target->Set(String::New("glutDisplayFunc"), _glut_glutDisplayFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutReshapeFunc = FunctionTemplate::New(glut_glutReshapeFunc);
    target->Set(String::New("glutReshapeFunc"), _glut_glutReshapeFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutKeyboardFunc = FunctionTemplate::New(glut_glutKeyboardFunc);
    target->Set(String::New("glutKeyboardFunc"), _glut_glutKeyboardFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutMouseFunc = FunctionTemplate::New(glut_glutMouseFunc);
    target->Set(String::New("glutMouseFunc"), _glut_glutMouseFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutMotionFunc = FunctionTemplate::New(glut_glutMotionFunc);
    target->Set(String::New("glutMotionFunc"), _glut_glutMotionFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutPassiveMotionFunc = FunctionTemplate::New(glut_glutPassiveMotionFunc);
    target->Set(String::New("glutPassiveMotionFunc"), _glut_glutPassiveMotionFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutEntryFunc = FunctionTemplate::New(glut_glutEntryFunc);
    target->Set(String::New("glutEntryFunc"), _glut_glutEntryFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutVisibilityFunc = FunctionTemplate::New(glut_glutVisibilityFunc);
    target->Set(String::New("glutVisibilityFunc"), _glut_glutVisibilityFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutIdleFunc = FunctionTemplate::New(glut_glutIdleFunc);
    target->Set(String::New("glutIdleFunc"), _glut_glutIdleFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutTimerFunc = FunctionTemplate::New(glut_glutTimerFunc);
    target->Set(String::New("glutTimerFunc"), _glut_glutTimerFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutMenuStateFunc = FunctionTemplate::New(glut_glutMenuStateFunc);
    target->Set(String::New("glutMenuStateFunc"), _glut_glutMenuStateFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutSpecialFunc = FunctionTemplate::New(glut_glutSpecialFunc);
    target->Set(String::New("glutSpecialFunc"), _glut_glutSpecialFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutSpaceballMotionFunc = FunctionTemplate::New(glut_glutSpaceballMotionFunc);
    target->Set(String::New("glutSpaceballMotionFunc"), _glut_glutSpaceballMotionFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutSpaceballRotateFunc = FunctionTemplate::New(glut_glutSpaceballRotateFunc);
    target->Set(String::New("glutSpaceballRotateFunc"), _glut_glutSpaceballRotateFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutSpaceballButtonFunc = FunctionTemplate::New(glut_glutSpaceballButtonFunc);
    target->Set(String::New("glutSpaceballButtonFunc"), _glut_glutSpaceballButtonFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutButtonBoxFunc = FunctionTemplate::New(glut_glutButtonBoxFunc);
    target->Set(String::New("glutButtonBoxFunc"), _glut_glutButtonBoxFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutDialsFunc = FunctionTemplate::New(glut_glutDialsFunc);
    target->Set(String::New("glutDialsFunc"), _glut_glutDialsFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutTabletMotionFunc = FunctionTemplate::New(glut_glutTabletMotionFunc);
    target->Set(String::New("glutTabletMotionFunc"), _glut_glutTabletMotionFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutTabletButtonFunc = FunctionTemplate::New(glut_glutTabletButtonFunc);
    target->Set(String::New("glutTabletButtonFunc"), _glut_glutTabletButtonFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutMenuStatusFunc = FunctionTemplate::New(glut_glutMenuStatusFunc);
    target->Set(String::New("glutMenuStatusFunc"), _glut_glutMenuStatusFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutOverlayDisplayFunc = FunctionTemplate::New(glut_glutOverlayDisplayFunc);
    target->Set(String::New("glutOverlayDisplayFunc"), _glut_glutOverlayDisplayFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutWindowStatusFunc = FunctionTemplate::New(glut_glutWindowStatusFunc);
    target->Set(String::New("glutWindowStatusFunc"), _glut_glutWindowStatusFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutKeyboardUpFunc = FunctionTemplate::New(glut_glutKeyboardUpFunc);
    target->Set(String::New("glutKeyboardUpFunc"), _glut_glutKeyboardUpFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutSpecialUpFunc = FunctionTemplate::New(glut_glutSpecialUpFunc);
    target->Set(String::New("glutSpecialUpFunc"), _glut_glutSpecialUpFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutJoystickFunc = FunctionTemplate::New(glut_glutJoystickFunc);
    target->Set(String::New("glutJoystickFunc"), _glut_glutJoystickFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutSetColor = FunctionTemplate::New(glut_glutSetColor);
    target->Set(String::New("glutSetColor"), _glut_glutSetColor->GetFunction());

    Local<FunctionTemplate> _glut_glutGetColor = FunctionTemplate::New(glut_glutGetColor);
    target->Set(String::New("glutGetColor"), _glut_glutGetColor->GetFunction());

    Local<FunctionTemplate> _glut_glutCopyColormap = FunctionTemplate::New(glut_glutCopyColormap);
    target->Set(String::New("glutCopyColormap"), _glut_glutCopyColormap->GetFunction());

    Local<FunctionTemplate> _glut_glutGet = FunctionTemplate::New(glut_glutGet);
    target->Set(String::New("glutGet"), _glut_glutGet->GetFunction());

    Local<FunctionTemplate> _glut_glutDeviceGet = FunctionTemplate::New(glut_glutDeviceGet);
    target->Set(String::New("glutDeviceGet"), _glut_glutDeviceGet->GetFunction());

    Local<FunctionTemplate> _glut_glutExtensionSupported = FunctionTemplate::New(glut_glutExtensionSupported);
    target->Set(String::New("glutExtensionSupported"), _glut_glutExtensionSupported->GetFunction());

    Local<FunctionTemplate> _glut_glutGetModifiers = FunctionTemplate::New(glut_glutGetModifiers);
    target->Set(String::New("glutGetModifiers"), _glut_glutGetModifiers->GetFunction());

    Local<FunctionTemplate> _glut_glutLayerGet = FunctionTemplate::New(glut_glutLayerGet);
    target->Set(String::New("glutLayerGet"), _glut_glutLayerGet->GetFunction());

    Local<FunctionTemplate> _glut_glutGetProcAddress = FunctionTemplate::New(glut_glutGetProcAddress);
    target->Set(String::New("glutGetProcAddress"), _glut_glutGetProcAddress->GetFunction());

    Local<FunctionTemplate> _glut_glutBitmapCharacter = FunctionTemplate::New(glut_glutBitmapCharacter);
    target->Set(String::New("glutBitmapCharacter"), _glut_glutBitmapCharacter->GetFunction());

    Local<FunctionTemplate> _glut_glutBitmapWidth = FunctionTemplate::New(glut_glutBitmapWidth);
    target->Set(String::New("glutBitmapWidth"), _glut_glutBitmapWidth->GetFunction());

    Local<FunctionTemplate> _glut_glutStrokeCharacter = FunctionTemplate::New(glut_glutStrokeCharacter);
    target->Set(String::New("glutStrokeCharacter"), _glut_glutStrokeCharacter->GetFunction());

    Local<FunctionTemplate> _glut_glutStrokeWidth = FunctionTemplate::New(glut_glutStrokeWidth);
    target->Set(String::New("glutStrokeWidth"), _glut_glutStrokeWidth->GetFunction());

    Local<FunctionTemplate> _glut_glutBitmapLength = FunctionTemplate::New(glut_glutBitmapLength);
    target->Set(String::New("glutBitmapLength"), _glut_glutBitmapLength->GetFunction());

    Local<FunctionTemplate> _glut_glutStrokeLength = FunctionTemplate::New(glut_glutStrokeLength);
    target->Set(String::New("glutStrokeLength"), _glut_glutStrokeLength->GetFunction());

    Local<FunctionTemplate> _glut_glutWireSphere = FunctionTemplate::New(glut_glutWireSphere);
    target->Set(String::New("glutWireSphere"), _glut_glutWireSphere->GetFunction());

    Local<FunctionTemplate> _glut_glutSolidSphere = FunctionTemplate::New(glut_glutSolidSphere);
    target->Set(String::New("glutSolidSphere"), _glut_glutSolidSphere->GetFunction());

    Local<FunctionTemplate> _glut_glutWireCone = FunctionTemplate::New(glut_glutWireCone);
    target->Set(String::New("glutWireCone"), _glut_glutWireCone->GetFunction());

    Local<FunctionTemplate> _glut_glutSolidCone = FunctionTemplate::New(glut_glutSolidCone);
    target->Set(String::New("glutSolidCone"), _glut_glutSolidCone->GetFunction());

    Local<FunctionTemplate> _glut_glutWireCube = FunctionTemplate::New(glut_glutWireCube);
    target->Set(String::New("glutWireCube"), _glut_glutWireCube->GetFunction());

    Local<FunctionTemplate> _glut_glutSolidCube = FunctionTemplate::New(glut_glutSolidCube);
    target->Set(String::New("glutSolidCube"), _glut_glutSolidCube->GetFunction());

    Local<FunctionTemplate> _glut_glutWireTorus = FunctionTemplate::New(glut_glutWireTorus);
    target->Set(String::New("glutWireTorus"), _glut_glutWireTorus->GetFunction());

    Local<FunctionTemplate> _glut_glutSolidTorus = FunctionTemplate::New(glut_glutSolidTorus);
    target->Set(String::New("glutSolidTorus"), _glut_glutSolidTorus->GetFunction());

    Local<FunctionTemplate> _glut_glutWireDodecahedron = FunctionTemplate::New(glut_glutWireDodecahedron);
    target->Set(String::New("glutWireDodecahedron"), _glut_glutWireDodecahedron->GetFunction());

    Local<FunctionTemplate> _glut_glutSolidDodecahedron = FunctionTemplate::New(glut_glutSolidDodecahedron);
    target->Set(String::New("glutSolidDodecahedron"), _glut_glutSolidDodecahedron->GetFunction());

    Local<FunctionTemplate> _glut_glutWireTeapot = FunctionTemplate::New(glut_glutWireTeapot);
    target->Set(String::New("glutWireTeapot"), _glut_glutWireTeapot->GetFunction());

    Local<FunctionTemplate> _glut_glutSolidTeapot = FunctionTemplate::New(glut_glutSolidTeapot);
    target->Set(String::New("glutSolidTeapot"), _glut_glutSolidTeapot->GetFunction());

    Local<FunctionTemplate> _glut_glutWireOctahedron = FunctionTemplate::New(glut_glutWireOctahedron);
    target->Set(String::New("glutWireOctahedron"), _glut_glutWireOctahedron->GetFunction());

    Local<FunctionTemplate> _glut_glutSolidOctahedron = FunctionTemplate::New(glut_glutSolidOctahedron);
    target->Set(String::New("glutSolidOctahedron"), _glut_glutSolidOctahedron->GetFunction());

    Local<FunctionTemplate> _glut_glutWireTetrahedron = FunctionTemplate::New(glut_glutWireTetrahedron);
    target->Set(String::New("glutWireTetrahedron"), _glut_glutWireTetrahedron->GetFunction());

    Local<FunctionTemplate> _glut_glutSolidTetrahedron = FunctionTemplate::New(glut_glutSolidTetrahedron);
    target->Set(String::New("glutSolidTetrahedron"), _glut_glutSolidTetrahedron->GetFunction());

    Local<FunctionTemplate> _glut_glutWireIcosahedron = FunctionTemplate::New(glut_glutWireIcosahedron);
    target->Set(String::New("glutWireIcosahedron"), _glut_glutWireIcosahedron->GetFunction());

    Local<FunctionTemplate> _glut_glutSolidIcosahedron = FunctionTemplate::New(glut_glutSolidIcosahedron);
    target->Set(String::New("glutSolidIcosahedron"), _glut_glutSolidIcosahedron->GetFunction());

    Local<FunctionTemplate> _glut_glutVideoResizeGet = FunctionTemplate::New(glut_glutVideoResizeGet);
    target->Set(String::New("glutVideoResizeGet"), _glut_glutVideoResizeGet->GetFunction());

    Local<FunctionTemplate> _glut_glutSetupVideoResizing = FunctionTemplate::New(glut_glutSetupVideoResizing);
    target->Set(String::New("glutSetupVideoResizing"), _glut_glutSetupVideoResizing->GetFunction());

    Local<FunctionTemplate> _glut_glutStopVideoResizing = FunctionTemplate::New(glut_glutStopVideoResizing);
    target->Set(String::New("glutStopVideoResizing"), _glut_glutStopVideoResizing->GetFunction());

    Local<FunctionTemplate> _glut_glutVideoResize = FunctionTemplate::New(glut_glutVideoResize);
    target->Set(String::New("glutVideoResize"), _glut_glutVideoResize->GetFunction());

    Local<FunctionTemplate> _glut_glutVideoPan = FunctionTemplate::New(glut_glutVideoPan);
    target->Set(String::New("glutVideoPan"), _glut_glutVideoPan->GetFunction());

    Local<FunctionTemplate> _glut_glutReportErrors = FunctionTemplate::New(glut_glutReportErrors);
    target->Set(String::New("glutReportErrors"), _glut_glutReportErrors->GetFunction());

    Local<FunctionTemplate> _glut_glutIgnoreKeyRepeat = FunctionTemplate::New(glut_glutIgnoreKeyRepeat);
    target->Set(String::New("glutIgnoreKeyRepeat"), _glut_glutIgnoreKeyRepeat->GetFunction());

    Local<FunctionTemplate> _glut_glutSetKeyRepeat = FunctionTemplate::New(glut_glutSetKeyRepeat);
    target->Set(String::New("glutSetKeyRepeat"), _glut_glutSetKeyRepeat->GetFunction());

    Local<FunctionTemplate> _glut_glutForceJoystickFunc = FunctionTemplate::New(glut_glutForceJoystickFunc);
    target->Set(String::New("glutForceJoystickFunc"), _glut_glutForceJoystickFunc->GetFunction());

    Local<FunctionTemplate> _glut_glutGameModeString = FunctionTemplate::New(glut_glutGameModeString);
    target->Set(String::New("glutGameModeString"), _glut_glutGameModeString->GetFunction());

    Local<FunctionTemplate> _glut_glutEnterGameMode = FunctionTemplate::New(glut_glutEnterGameMode);
    target->Set(String::New("glutEnterGameMode"), _glut_glutEnterGameMode->GetFunction());

    Local<FunctionTemplate> _glut_glutLeaveGameMode = FunctionTemplate::New(glut_glutLeaveGameMode);
    target->Set(String::New("glutLeaveGameMode"), _glut_glutLeaveGameMode->GetFunction());

    Local<FunctionTemplate> _glut_glutGameModeGet = FunctionTemplate::New(glut_glutGameModeGet);
    target->Set(String::New("glutGameModeGet"), _glut_glutGameModeGet->GetFunction());


  }

}  // namespace node
