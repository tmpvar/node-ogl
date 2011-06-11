#include <node.h>
#include "common.h"

// Includes
#include "glu.h"
#include <GL/glu.h>

using namespace v8;
namespace node {

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
   * @param void *data
   * @return GLint
   */
  Handle<Value> glu_gluBuild1DMipmapLevels(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _internalFormat = (GLint)args[1]->Int32Value();
    GLsizei _width = (GLsizei)args[2]->Int32Value();
    GLenum _format = (GLenum)args[3]->Int32Value();
    GLenum _type = (GLenum)args[4]->Int32Value();
    GLint _level = (GLint)args[5]->Int32Value();
    GLint _base = (GLint)args[6]->Int32Value();
    GLint _max = (GLint)args[7]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[8])) {
        return ThrowException(Exception::Error(
                              String::New("8nth argument needs to be a buffer")));
    }
  Local<Object>  _buffer_8 = args[8]->ToObject();    void *_data = (void *)Buffer::Data(_buffer_8);
    GLint _ret = gluBuild1DMipmapLevels(_target, _internalFormat, _width, _format, _type, _level, _base, _max, _data);

    return scope.Close(Number::New(_ret));
  }


  /**
   * gluBuild1DMipmaps
   *
   * @param GLenum target
   * @param GLint internalFormat
   * @param GLsizei width
   * @param GLenum format
   * @param GLenum type
   * @param void *data
   * @return GLint
   */
  Handle<Value> glu_gluBuild1DMipmaps(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _internalFormat = (GLint)args[1]->Int32Value();
    GLsizei _width = (GLsizei)args[2]->Int32Value();
    GLenum _format = (GLenum)args[3]->Int32Value();
    GLenum _type = (GLenum)args[4]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[5])) {
        return ThrowException(Exception::Error(
                              String::New("5nth argument needs to be a buffer")));
    }
  Local<Object>  _buffer_5 = args[5]->ToObject();    void *_data = (void *)Buffer::Data(_buffer_5);
    GLint _ret = gluBuild1DMipmaps(_target, _internalFormat, _width, _format, _type, _data);

    return scope.Close(Number::New(_ret));
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
   * @param void *data
   * @return GLint
   */
  Handle<Value> glu_gluBuild2DMipmapLevels(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _internalFormat = (GLint)args[1]->Int32Value();
    GLsizei _width = (GLsizei)args[2]->Int32Value();
    GLsizei _height = (GLsizei)args[3]->Int32Value();
    GLenum _format = (GLenum)args[4]->Int32Value();
    GLenum _type = (GLenum)args[5]->Int32Value();
    GLint _level = (GLint)args[6]->Int32Value();
    GLint _base = (GLint)args[7]->Int32Value();
    GLint _max = (GLint)args[8]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[9])) {
        return ThrowException(Exception::Error(
                              String::New("9nth argument needs to be a buffer")));
    }
  Local<Object>  _buffer_9 = args[9]->ToObject();    void *_data = (void *)Buffer::Data(_buffer_9);
    GLint _ret = gluBuild2DMipmapLevels(_target, _internalFormat, _width, _height, _format, _type, _level, _base, _max, _data);

    return scope.Close(Number::New(_ret));
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
   * @param void *data
   * @return GLint
   */
  Handle<Value> glu_gluBuild2DMipmaps(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _internalFormat = (GLint)args[1]->Int32Value();
    GLsizei _width = (GLsizei)args[2]->Int32Value();
    GLsizei _height = (GLsizei)args[3]->Int32Value();
    GLenum _format = (GLenum)args[4]->Int32Value();
    GLenum _type = (GLenum)args[5]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[6])) {
        return ThrowException(Exception::Error(
                              String::New("6nth argument needs to be a buffer")));
    }
  Local<Object>  _buffer_6 = args[6]->ToObject();    void *_data = (void *)Buffer::Data(_buffer_6);
    GLint _ret = gluBuild2DMipmaps(_target, _internalFormat, _width, _height, _format, _type, _data);

    return scope.Close(Number::New(_ret));
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
   * @param void *data
   * @return GLint
   */
  Handle<Value> glu_gluBuild3DMipmapLevels(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _internalFormat = (GLint)args[1]->Int32Value();
    GLsizei _width = (GLsizei)args[2]->Int32Value();
    GLsizei _height = (GLsizei)args[3]->Int32Value();
    GLsizei _depth = (GLsizei)args[4]->Int32Value();
    GLenum _format = (GLenum)args[5]->Int32Value();
    GLenum _type = (GLenum)args[6]->Int32Value();
    GLint _level = (GLint)args[7]->Int32Value();
    GLint _base = (GLint)args[8]->Int32Value();
    GLint _max = (GLint)args[9]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[10])) {
        return ThrowException(Exception::Error(
                              String::New("10nth argument needs to be a buffer")));
    }
  Local<Object>  _buffer_10 = args[10]->ToObject();    void *_data = (void *)Buffer::Data(_buffer_10);
    GLint _ret = gluBuild3DMipmapLevels(_target, _internalFormat, _width, _height, _depth, _format, _type, _level, _base, _max, _data);

    return scope.Close(Number::New(_ret));
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
   * @param void *data
   * @return GLint
   */
  Handle<Value> glu_gluBuild3DMipmaps(const Arguments& args) {
    HandleScope scope;
    GLenum _target = (GLenum)args[0]->Int32Value();
    GLint _internalFormat = (GLint)args[1]->Int32Value();
    GLsizei _width = (GLsizei)args[2]->Int32Value();
    GLsizei _height = (GLsizei)args[3]->Int32Value();
    GLsizei _depth = (GLsizei)args[4]->Int32Value();
    GLenum _format = (GLenum)args[5]->Int32Value();
    GLenum _type = (GLenum)args[6]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[7])) {
        return ThrowException(Exception::Error(
                              String::New("7nth argument needs to be a buffer")));
    }
  Local<Object>  _buffer_7 = args[7]->ToObject();    void *_data = (void *)Buffer::Data(_buffer_7);
    GLint _ret = gluBuild3DMipmaps(_target, _internalFormat, _width, _height, _depth, _format, _type, _data);

    return scope.Close(Number::New(_ret));
  }


  /**
   * gluCheckExtension
   *
   * @param GLubyte *extName
   * @param GLubyte *extString
   * @return GLboolean
   */
  Handle<Value> glu_gluCheckExtension(const Arguments& args) {
    HandleScope scope;
    GLubyte _extName = (GLubyte)args[0]->Int32Value();
    GLubyte _extString = (GLubyte)args[1]->Int32Value();
    GLboolean _ret = gluCheckExtension(&_extName, &_extString);

    args[0] = Number::New(_extName);

    args[1] = Number::New(_extString);

    return scope.Close(Boolean::New(_ret));
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
   * @param GLfloat *model
   * @param GLfloat *perspective
   * @param GLint *view
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
    GLdouble _eyeX = (GLdouble)args[0]->NumberValue();
    GLdouble _eyeY = (GLdouble)args[1]->NumberValue();
    GLdouble _eyeZ = (GLdouble)args[2]->NumberValue();
    GLdouble _centerX = (GLdouble)args[3]->NumberValue();
    GLdouble _centerY = (GLdouble)args[4]->NumberValue();
    GLdouble _centerZ = (GLdouble)args[5]->NumberValue();
    GLdouble _upX = (GLdouble)args[6]->NumberValue();
    GLdouble _upY = (GLdouble)args[7]->NumberValue();
    GLdouble _upZ = (GLdouble)args[8]->NumberValue();
    gluLookAt(_eyeX, _eyeY, _eyeZ, _centerX, _centerY, _centerZ, _upX, _upY, _upZ);
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
    GLdouble _left = (GLdouble)args[0]->NumberValue();
    GLdouble _right = (GLdouble)args[1]->NumberValue();
    GLdouble _bottom = (GLdouble)args[2]->NumberValue();
    GLdouble _top = (GLdouble)args[3]->NumberValue();
    gluOrtho2D(_left, _right, _bottom, _top);
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
    GLdouble _fovy = (GLdouble)args[0]->NumberValue();
    GLdouble _aspect = (GLdouble)args[1]->NumberValue();
    GLdouble _zNear = (GLdouble)args[2]->NumberValue();
    GLdouble _zFar = (GLdouble)args[3]->NumberValue();
    gluPerspective(_fovy, _aspect, _zNear, _zFar);
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
    GLdouble _x = (GLdouble)args[0]->NumberValue();
    GLdouble _y = (GLdouble)args[1]->NumberValue();
    GLdouble _delX = (GLdouble)args[2]->NumberValue();
    GLdouble _delY = (GLdouble)args[3]->NumberValue();
    GLint _viewport = (GLint)args[4]->Int32Value();
    gluPickMatrix(_x, _y, _delX, _delY, &_viewport);

    args[4] = Number::New(_viewport);
  }


  /**
   * gluProject
   *
   * @param GLdouble objX
   * @param GLdouble objY
   * @param GLdouble objZ
   * @param GLdouble *model
   * @param GLdouble *proj
   * @param GLint *view
   * @param GLdouble* winX
   * @param GLdouble* winY
   * @param GLdouble* winZ
   * @return GLint
   */
  Handle<Value> glu_gluProject(const Arguments& args) {
    HandleScope scope;
    GLdouble _objX = (GLdouble)args[0]->NumberValue();
    GLdouble _objY = (GLdouble)args[1]->NumberValue();
    GLdouble _objZ = (GLdouble)args[2]->NumberValue();
    GLdouble _model = (GLdouble)args[3]->NumberValue();
    GLdouble _proj = (GLdouble)args[4]->NumberValue();
    GLint _view = (GLint)args[5]->Int32Value();
    GLdouble _winX = (GLdouble)args[6]->NumberValue();
    GLdouble _winY = (GLdouble)args[7]->NumberValue();
    GLdouble _winZ = (GLdouble)args[8]->NumberValue();
    GLint _ret = gluProject(_objX, _objY, _objZ, &_model, &_proj, &_view, &_winX, &_winY, &_winZ);

    args[3] = Number::New(_model);

    args[4] = Number::New(_proj);

    args[5] = Number::New(_view);

    args[6] = Number::New(_winX);

    args[7] = Number::New(_winY);

    args[8] = Number::New(_winZ);

    return scope.Close(Number::New(_ret));
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
   * @param void *dataIn
   * @param GLsizei wOut
   * @param GLsizei hOut
   * @param GLenum typeOut
   * @param GLvoid* dataOut
   * @return GLint
   */
  Handle<Value> glu_gluScaleImage(const Arguments& args) {
    HandleScope scope;
    GLenum _format = (GLenum)args[0]->Int32Value();
    GLsizei _wIn = (GLsizei)args[1]->Int32Value();
    GLsizei _hIn = (GLsizei)args[2]->Int32Value();
    GLenum _typeIn = (GLenum)args[3]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[4])) {
        return ThrowException(Exception::Error(
                              String::New("4nth argument needs to be a buffer")));
    }
  Local<Object>  _buffer_4 = args[4]->ToObject();    void *_dataIn = (void *)Buffer::Data(_buffer_4);
    GLsizei _wOut = (GLsizei)args[5]->Int32Value();
    GLsizei _hOut = (GLsizei)args[6]->Int32Value();
    GLenum _typeOut = (GLenum)args[7]->Int32Value();
    // must be a pointer to a buffer.
    if (!Buffer::HasInstance(args[8])) {
        return ThrowException(Exception::Error(
                              String::New("8nth argument needs to be a buffer")));
    }
  Local<Object>  _buffer_8 = args[8]->ToObject();    GLvoid *_dataOut = (GLvoid *)Buffer::Data(_buffer_8);
    GLint _ret = gluScaleImage(_format, _wIn, _hIn, _typeIn, _dataIn, _wOut, _hOut, _typeOut, _dataOut);

    return scope.Close(Number::New(_ret));
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
   * @param GLdouble *model
   * @param GLdouble *proj
   * @param GLint *view
   * @param GLdouble* objX
   * @param GLdouble* objY
   * @param GLdouble* objZ
   * @return GLint
   */
  Handle<Value> glu_gluUnProject(const Arguments& args) {
    HandleScope scope;
    GLdouble _winX = (GLdouble)args[0]->NumberValue();
    GLdouble _winY = (GLdouble)args[1]->NumberValue();
    GLdouble _winZ = (GLdouble)args[2]->NumberValue();
    GLdouble _model = (GLdouble)args[3]->NumberValue();
    GLdouble _proj = (GLdouble)args[4]->NumberValue();
    GLint _view = (GLint)args[5]->Int32Value();
    GLdouble _objX = (GLdouble)args[6]->NumberValue();
    GLdouble _objY = (GLdouble)args[7]->NumberValue();
    GLdouble _objZ = (GLdouble)args[8]->NumberValue();
    GLint _ret = gluUnProject(_winX, _winY, _winZ, &_model, &_proj, &_view, &_objX, &_objY, &_objZ);

    args[3] = Number::New(_model);

    args[4] = Number::New(_proj);

    args[5] = Number::New(_view);

    args[6] = Number::New(_objX);

    args[7] = Number::New(_objY);

    args[8] = Number::New(_objZ);

    return scope.Close(Number::New(_ret));
  }


  /**
   * gluUnProject4
   *
   * @param GLdouble winX
   * @param GLdouble winY
   * @param GLdouble winZ
   * @param GLdouble clipW
   * @param GLdouble *model
   * @param GLdouble *proj
   * @param GLint *view
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
    GLdouble _winX = (GLdouble)args[0]->NumberValue();
    GLdouble _winY = (GLdouble)args[1]->NumberValue();
    GLdouble _winZ = (GLdouble)args[2]->NumberValue();
    GLdouble _clipW = (GLdouble)args[3]->NumberValue();
    GLdouble _model = (GLdouble)args[4]->NumberValue();
    GLdouble _proj = (GLdouble)args[5]->NumberValue();
    GLint _view = (GLint)args[6]->Int32Value();
    GLdouble _nearVal = (GLdouble)args[7]->NumberValue();
    GLdouble _farVal = (GLdouble)args[8]->NumberValue();
    GLdouble _objX = (GLdouble)args[9]->NumberValue();
    GLdouble _objY = (GLdouble)args[10]->NumberValue();
    GLdouble _objZ = (GLdouble)args[11]->NumberValue();
    GLdouble _objW = (GLdouble)args[12]->NumberValue();
    GLint _ret = gluUnProject4(_winX, _winY, _winZ, _clipW, &_model, &_proj, &_view, _nearVal, _farVal, &_objX, &_objY, &_objZ, &_objW);

    args[4] = Number::New(_model);

    args[5] = Number::New(_proj);

    args[6] = Number::New(_view);

    args[9] = Number::New(_objX);

    args[10] = Number::New(_objY);

    args[11] = Number::New(_objZ);

    args[12] = Number::New(_objW);

    return scope.Close(Number::New(_ret));
  }



  // Constructor
  glu::glu() { }

  void glu::Initialize(v8::Handle<v8::Object> target) {
    HandleScope scope;

    // Constants


    // Expose this classes methods to v8/javascript
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
