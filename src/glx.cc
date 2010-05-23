#include <node.h>

// Includes
#include "glx.h"
#include <GL/glx.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <GL/gl.h>
#include <GL/glxext.h>

using namespace v8;
namespace node {

  /**
   * XInitImage
   *
   * @param XImage*
   * @return int
   */
  Handle<Value> glx_XInitImage(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XrmInitialize
   *
   * @param void
   * @return void
   */
  Handle<Value> glx_XrmInitialize(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetAtomNames
   *
   * @param Display*
   * @param Atom*
   * @param int
   * @param char**
   * @return int
   */
  Handle<Value> glx_XGetAtomNames(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XInternAtom
   *
   * @param Display*
   * @param const char*
   * @param int
   * @return Atom
   */
  Handle<Value> glx_XInternAtom(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XInternAtoms
   *
   * @param Display*
   * @param char**
   * @param int
   * @param int
   * @param Atom*
   * @return int
   */
  Handle<Value> glx_XInternAtoms(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCopyColormapAndFree
   *
   * @param Display*
   * @param Colormap
   * @return Colormap
   */
  Handle<Value> glx_XCopyColormapAndFree(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCreateColormap
   *
   * @param Display*
   * @param Window
   * @param Visual*
   * @param int
   * @return Colormap
   */
  Handle<Value> glx_XCreateColormap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCreatePixmapCursor
   *
   * @param Display*
   * @param Pixmap
   * @param Pixmap
   * @param XColor*
   * @param XColor*
   * @param unsigned int
   * @param unsigned int
   * @return Cursor
   */
  Handle<Value> glx_XCreatePixmapCursor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCreateGlyphCursor
   *
   * @param Display*
   * @param Font
   * @param Font
   * @param unsigned int
   * @param unsigned int
   * @param XColor const *
   * @param XColor const *
   * @return Cursor
   */
  Handle<Value> glx_XCreateGlyphCursor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCreateFontCursor
   *
   * @param Display*
   * @param unsigned int
   * @return Cursor
   */
  Handle<Value> glx_XCreateFontCursor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XLoadFont
   *
   * @param Display*
   * @param const char*
   * @return Font
   */
  Handle<Value> glx_XLoadFont(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCreateGC
   *
   * @param Display*
   * @param Drawable
   * @param unsigned long
   * @param XGCValues*
   * @return GC
   */
  Handle<Value> glx_XCreateGC(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGContextFromGC
   *
   * @param GC
   * @return GContext
   */
  Handle<Value> glx_XGContextFromGC(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFlushGC
   *
   * @param Display*
   * @param GC
   * @return void
   */
  Handle<Value> glx_XFlushGC(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCreatePixmap
   *
   * @param Display*
   * @param Drawable
   * @param unsigned int
   * @param unsigned int
   * @param unsigned int
   * @return Pixmap
   */
  Handle<Value> glx_XCreatePixmap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCreateBitmapFromData
   *
   * @param Display*
   * @param Drawable
   * @param const char*
   * @param unsigned int
   * @param unsigned int
   * @return Pixmap
   */
  Handle<Value> glx_XCreateBitmapFromData(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCreatePixmapFromBitmapData
   *
   * @param Display*
   * @param Drawable
   * @param char*
   * @param unsigned int
   * @param unsigned int
   * @param unsigned long
   * @param unsigned long
   * @param unsigned int
   * @return Pixmap
   */
  Handle<Value> glx_XCreatePixmapFromBitmapData(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCreateSimpleWindow
   *
   * @param Display*
   * @param Window
   * @param int
   * @param int
   * @param unsigned int
   * @param unsigned int
   * @param unsigned int
   * @param unsigned long
   * @param unsigned long
   * @return Window
   */
  Handle<Value> glx_XCreateSimpleWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetSelectionOwner
   *
   * @param Display*
   * @param Atom
   * @return Window
   */
  Handle<Value> glx_XGetSelectionOwner(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCreateWindow
   *
   * @param Display*
   * @param Window
   * @param int
   * @param int
   * @param unsigned int
   * @param unsigned int
   * @param unsigned int
   * @param int
   * @param unsigned int
   * @param Visual*
   * @param unsigned long
   * @param XSetWindowAttributes*
   * @return Window
   */
  Handle<Value> glx_XCreateWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XKeycodeToKeysym
   *
   * @param Display*
   * @param KeyCode
   * @param int
   * @return KeySym
   */
  Handle<Value> glx_XKeycodeToKeysym(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XLookupKeysym
   *
   * @param XKeyEvent*
   * @param int
   * @return KeySym
   */
  Handle<Value> glx_XLookupKeysym(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XStringToKeysym
   *
   * @param const char*
   * @return KeySym
   */
  Handle<Value> glx_XStringToKeysym(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XMaxRequestSize
   *
   * @param Display*
   * @return long
   */
  Handle<Value> glx_XMaxRequestSize(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XExtendedMaxRequestSize
   *
   * @param Display*
   * @return long
   */
  Handle<Value> glx_XExtendedMaxRequestSize(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDisplayMotionBufferSize
   *
   * @param Display*
   * @return long
   */
  Handle<Value> glx_XDisplayMotionBufferSize(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XVisualIDFromVisual
   *
   * @param Visual*
   * @return VisualID
   */
  Handle<Value> glx_XVisualIDFromVisual(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XInitThreads
   *
   * @param void
   * @return int
   */
  Handle<Value> glx_XInitThreads(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XLockDisplay
   *
   * @param Display*
   * @return void
   */
  Handle<Value> glx_XLockDisplay(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XUnlockDisplay
   *
   * @param Display*
   * @return void
   */
  Handle<Value> glx_XUnlockDisplay(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XRootWindow
   *
   * @param Display*
   * @param int
   * @return Window
   */
  Handle<Value> glx_XRootWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDefaultRootWindow
   *
   * @param Display*
   * @return Window
   */
  Handle<Value> glx_XDefaultRootWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XRootWindowOfScreen
   *
   * @param Screen*
   * @return Window
   */
  Handle<Value> glx_XRootWindowOfScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDefaultGC
   *
   * @param Display*
   * @param int
   * @return GC
   */
  Handle<Value> glx_XDefaultGC(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDefaultGCOfScreen
   *
   * @param Screen*
   * @return GC
   */
  Handle<Value> glx_XDefaultGCOfScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XBlackPixel
   *
   * @param Display*
   * @param int
   * @return long
   */
  Handle<Value> glx_XBlackPixel(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XWhitePixel
   *
   * @param Display*
   * @param int
   * @return long
   */
  Handle<Value> glx_XWhitePixel(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XAllPlanes
   *
   * @param void
   * @return long
   */
  Handle<Value> glx_XAllPlanes(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XBlackPixelOfScreen
   *
   * @param Screen*
   * @return long
   */
  Handle<Value> glx_XBlackPixelOfScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XWhitePixelOfScreen
   *
   * @param Screen*
   * @return long
   */
  Handle<Value> glx_XWhitePixelOfScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XNextRequest
   *
   * @param Display*
   * @return long
   */
  Handle<Value> glx_XNextRequest(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XLastKnownRequestProcessed
   *
   * @param Display*
   * @return long
   */
  Handle<Value> glx_XLastKnownRequestProcessed(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDefaultColormap
   *
   * @param Display*
   * @param int
   * @return Colormap
   */
  Handle<Value> glx_XDefaultColormap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDefaultColormapOfScreen
   *
   * @param Screen*
   * @return Colormap
   */
  Handle<Value> glx_XDefaultColormapOfScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XEventMaskOfScreen
   *
   * @param Screen*
   * @return long
   */
  Handle<Value> glx_XEventMaskOfScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XScreenNumberOfScreen
   *
   * @param Screen*
   * @return int
   */
  Handle<Value> glx_XScreenNumberOfScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XReconfigureWMWindow
   *
   * @param Display*
   * @param Window
   * @param int
   * @param unsigned int
   * @param XWindowChanges*
   * @return int
   */
  Handle<Value> glx_XReconfigureWMWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetWMProtocols
   *
   * @param Display*
   * @param Window
   * @param Atom**
   * @param int*
   * @return int
   */
  Handle<Value> glx_XGetWMProtocols(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetWMProtocols
   *
   * @param Display*
   * @param Window
   * @param Atom*
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetWMProtocols(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XIconifyWindow
   *
   * @param Display*
   * @param Window
   * @param int
   * @return int
   */
  Handle<Value> glx_XIconifyWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XWithdrawWindow
   *
   * @param Display*
   * @param Window
   * @param int
   * @return int
   */
  Handle<Value> glx_XWithdrawWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetCommand
   *
   * @param Display*
   * @param Window
   * @param char***
   * @param int*
   * @return int
   */
  Handle<Value> glx_XGetCommand(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetWMColormapWindows
   *
   * @param Display*
   * @param Window
   * @param Window**
   * @param int*
   * @return int
   */
  Handle<Value> glx_XGetWMColormapWindows(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetWMColormapWindows
   *
   * @param Display*
   * @param Window
   * @param Window*
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetWMColormapWindows(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFreeStringList
   *
   * @param char**
   * @return void
   */
  Handle<Value> glx_XFreeStringList(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetTransientForHint
   *
   * @param Display*
   * @param Window
   * @param Window
   * @return int
   */
  Handle<Value> glx_XSetTransientForHint(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XActivateScreenSaver
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XActivateScreenSaver(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XAddHost
   *
   * @param Display*
   * @param XHostAddress*
   * @return int
   */
  Handle<Value> glx_XAddHost(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XAddHosts
   *
   * @param Display*
   * @param XHostAddress*
   * @param int
   * @return int
   */
  Handle<Value> glx_XAddHosts(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XAddToExtensionList
   *
   * @param struct _XExtData**
   * @param XExtData*
   * @return int
   */
  Handle<Value> glx_XAddToExtensionList(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XAddToSaveSet
   *
   * @param Display*
   * @param Window
   * @return int
   */
  Handle<Value> glx_XAddToSaveSet(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XAllocColor
   *
   * @param Display*
   * @param Colormap
   * @param XColor*
   * @return int
   */
  Handle<Value> glx_XAllocColor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XAllocColorCells
   *
   * @param Display*
   * @param Colormap
   * @param int
   * @param unsigned long*
   * @param unsigned int
   * @param unsigned long*
   * @param unsigned int
   * @return int
   */
  Handle<Value> glx_XAllocColorCells(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XAllocColorPlanes
   *
   * @param Display*
   * @param Colormap
   * @param int
   * @param unsigned long*
   * @param int
   * @param int
   * @param int
   * @param int
   * @param unsigned long*
   * @param unsigned long*
   * @param unsigned long*
   * @return int
   */
  Handle<Value> glx_XAllocColorPlanes(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XAllocNamedColor
   *
   * @param Display*
   * @param Colormap
   * @param const char*
   * @param XColor*
   * @param XColor*
   * @return int
   */
  Handle<Value> glx_XAllocNamedColor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XAllowEvents
   *
   * @param Display*
   * @param int
   * @param Time
   * @return int
   */
  Handle<Value> glx_XAllowEvents(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XAutoRepeatOff
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XAutoRepeatOff(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XAutoRepeatOn
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XAutoRepeatOn(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XBell
   *
   * @param Display*
   * @param int
   * @return int
   */
  Handle<Value> glx_XBell(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XBitmapBitOrder
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XBitmapBitOrder(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XBitmapPad
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XBitmapPad(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XBitmapUnit
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XBitmapUnit(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCellsOfScreen
   *
   * @param Screen*
   * @return int
   */
  Handle<Value> glx_XCellsOfScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XChangeActivePointerGrab
   *
   * @param Display*
   * @param unsigned int
   * @param Cursor
   * @param Time
   * @return int
   */
  Handle<Value> glx_XChangeActivePointerGrab(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XChangeGC
   *
   * @param Display*
   * @param GC
   * @param unsigned long
   * @param XGCValues*
   * @return int
   */
  Handle<Value> glx_XChangeGC(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XChangeKeyboardControl
   *
   * @param Display*
   * @param unsigned long
   * @param XKeyboardControl*
   * @return int
   */
  Handle<Value> glx_XChangeKeyboardControl(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XChangeKeyboardMapping
   *
   * @param Display*
   * @param int
   * @param int
   * @param KeySym*
   * @param int
   * @return int
   */
  Handle<Value> glx_XChangeKeyboardMapping(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XChangePointerControl
   *
   * @param Display*
   * @param int
   * @param int
   * @param int
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XChangePointerControl(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XChangeProperty
   *
   * @param Display*
   * @param Window
   * @param Atom
   * @param Atom
   * @param int
   * @param int
   * @param const unsigned char*
   * @param int
   * @return int
   */
  Handle<Value> glx_XChangeProperty(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XChangeSaveSet
   *
   * @param Display*
   * @param Window
   * @param int
   * @return int
   */
  Handle<Value> glx_XChangeSaveSet(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XChangeWindowAttributes
   *
   * @param Display*
   * @param Window
   * @param unsigned long
   * @param XSetWindowAttributes*
   * @return int
   */
  Handle<Value> glx_XChangeWindowAttributes(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCheckIfEvent
   *
   * @param Display*
   * @param XEvent*
   * @param int (*
   * @return int
   */
  Handle<Value> glx_XCheckIfEvent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCheckMaskEvent
   *
   * @param Display*
   * @param long
   * @param XEvent*
   * @return int
   */
  Handle<Value> glx_XCheckMaskEvent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCheckTypedEvent
   *
   * @param Display*
   * @param int
   * @param XEvent*
   * @return int
   */
  Handle<Value> glx_XCheckTypedEvent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCheckTypedWindowEvent
   *
   * @param Display*
   * @param Window
   * @param int
   * @param XEvent*
   * @return int
   */
  Handle<Value> glx_XCheckTypedWindowEvent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCheckWindowEvent
   *
   * @param Display*
   * @param Window
   * @param long
   * @param XEvent*
   * @return int
   */
  Handle<Value> glx_XCheckWindowEvent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCirculateSubwindows
   *
   * @param Display*
   * @param Window
   * @param int
   * @return int
   */
  Handle<Value> glx_XCirculateSubwindows(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCirculateSubwindowsDown
   *
   * @param Display*
   * @param Window
   * @return int
   */
  Handle<Value> glx_XCirculateSubwindowsDown(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCirculateSubwindowsUp
   *
   * @param Display*
   * @param Window
   * @return int
   */
  Handle<Value> glx_XCirculateSubwindowsUp(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XClearArea
   *
   * @param Display*
   * @param Window
   * @param int
   * @param int
   * @param unsigned int
   * @param unsigned int
   * @param int
   * @return int
   */
  Handle<Value> glx_XClearArea(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XClearWindow
   *
   * @param Display*
   * @param Window
   * @return int
   */
  Handle<Value> glx_XClearWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCloseDisplay
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XCloseDisplay(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XConfigureWindow
   *
   * @param Display*
   * @param Window
   * @param unsigned int
   * @param XWindowChanges*
   * @return int
   */
  Handle<Value> glx_XConfigureWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XConnectionNumber
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XConnectionNumber(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XConvertSelection
   *
   * @param Display*
   * @param Atom
   * @param Atom
   * @param Atom
   * @param Window
   * @param Time
   * @return int
   */
  Handle<Value> glx_XConvertSelection(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCopyArea
   *
   * @param Display*
   * @param Drawable
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @param unsigned int
   * @param unsigned int
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XCopyArea(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCopyGC
   *
   * @param Display*
   * @param GC
   * @param unsigned long
   * @param GC
   * @return int
   */
  Handle<Value> glx_XCopyGC(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCopyPlane
   *
   * @param Display*
   * @param Drawable
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @param unsigned int
   * @param unsigned int
   * @param int
   * @param int
   * @param unsigned long
   * @return int
   */
  Handle<Value> glx_XCopyPlane(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDefaultDepth
   *
   * @param Display*
   * @param int
   * @return int
   */
  Handle<Value> glx_XDefaultDepth(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDefaultDepthOfScreen
   *
   * @param Screen*
   * @return int
   */
  Handle<Value> glx_XDefaultDepthOfScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDefaultScreen
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XDefaultScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDefineCursor
   *
   * @param Display*
   * @param Window
   * @param Cursor
   * @return int
   */
  Handle<Value> glx_XDefineCursor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDeleteProperty
   *
   * @param Display*
   * @param Window
   * @param Atom
   * @return int
   */
  Handle<Value> glx_XDeleteProperty(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDestroyWindow
   *
   * @param Display*
   * @param Window
   * @return int
   */
  Handle<Value> glx_XDestroyWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDestroySubwindows
   *
   * @param Display*
   * @param Window
   * @return int
   */
  Handle<Value> glx_XDestroySubwindows(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDoesBackingStore
   *
   * @param Screen*
   * @return int
   */
  Handle<Value> glx_XDoesBackingStore(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDoesSaveUnders
   *
   * @param Screen*
   * @return int
   */
  Handle<Value> glx_XDoesSaveUnders(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDisableAccessControl
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XDisableAccessControl(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDisplayCells
   *
   * @param Display*
   * @param int
   * @return int
   */
  Handle<Value> glx_XDisplayCells(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDisplayHeight
   *
   * @param Display*
   * @param int
   * @return int
   */
  Handle<Value> glx_XDisplayHeight(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDisplayHeightMM
   *
   * @param Display*
   * @param int
   * @return int
   */
  Handle<Value> glx_XDisplayHeightMM(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDisplayKeycodes
   *
   * @param Display*
   * @param int*
   * @param int*
   * @return int
   */
  Handle<Value> glx_XDisplayKeycodes(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDisplayPlanes
   *
   * @param Display*
   * @param int
   * @return int
   */
  Handle<Value> glx_XDisplayPlanes(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDisplayWidth
   *
   * @param Display*
   * @param int
   * @return int
   */
  Handle<Value> glx_XDisplayWidth(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDisplayWidthMM
   *
   * @param Display*
   * @param int
   * @return int
   */
  Handle<Value> glx_XDisplayWidthMM(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDrawArc
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @param unsigned int
   * @param unsigned int
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XDrawArc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDrawArcs
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param XArc*
   * @param int
   * @return int
   */
  Handle<Value> glx_XDrawArcs(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDrawImageString
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @param const char*
   * @param int
   * @return int
   */
  Handle<Value> glx_XDrawImageString(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDrawImageString16
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @param const XChar2b*
   * @param int
   * @return int
   */
  Handle<Value> glx_XDrawImageString16(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDrawLine
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XDrawLine(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDrawLines
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param XPoint*
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XDrawLines(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDrawPoint
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XDrawPoint(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDrawPoints
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param XPoint*
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XDrawPoints(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDrawRectangle
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @param unsigned int
   * @param unsigned int
   * @return int
   */
  Handle<Value> glx_XDrawRectangle(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDrawRectangles
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param XRectangle*
   * @param int
   * @return int
   */
  Handle<Value> glx_XDrawRectangles(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDrawSegments
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param XSegment*
   * @param int
   * @return int
   */
  Handle<Value> glx_XDrawSegments(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDrawString
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @param const char*
   * @param int
   * @return int
   */
  Handle<Value> glx_XDrawString(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDrawString16
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @param const XChar2b*
   * @param int
   * @return int
   */
  Handle<Value> glx_XDrawString16(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDrawText
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @param XTextItem*
   * @param int
   * @return int
   */
  Handle<Value> glx_XDrawText(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDrawText16
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @param XTextItem16*
   * @param int
   * @return int
   */
  Handle<Value> glx_XDrawText16(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XEnableAccessControl
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XEnableAccessControl(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XEventsQueued
   *
   * @param Display*
   * @param int
   * @return int
   */
  Handle<Value> glx_XEventsQueued(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFetchName
   *
   * @param Display*
   * @param Window
   * @param char**
   * @return int
   */
  Handle<Value> glx_XFetchName(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFillArc
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @param unsigned int
   * @param unsigned int
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XFillArc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFillArcs
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param XArc*
   * @param int
   * @return int
   */
  Handle<Value> glx_XFillArcs(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFillPolygon
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param XPoint*
   * @param int
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XFillPolygon(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFillRectangle
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @param unsigned int
   * @param unsigned int
   * @return int
   */
  Handle<Value> glx_XFillRectangle(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFillRectangles
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param XRectangle*
   * @param int
   * @return int
   */
  Handle<Value> glx_XFillRectangles(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFlush
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XFlush(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XForceScreenSaver
   *
   * @param Display*
   * @param int
   * @return int
   */
  Handle<Value> glx_XForceScreenSaver(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFree
   *
   * @param void*
   * @return int
   */
  Handle<Value> glx_XFree(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFreeColormap
   *
   * @param Display*
   * @param Colormap
   * @return int
   */
  Handle<Value> glx_XFreeColormap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFreeColors
   *
   * @param Display*
   * @param Colormap
   * @param unsigned long*
   * @param int
   * @param unsigned long
   * @return int
   */
  Handle<Value> glx_XFreeColors(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFreeCursor
   *
   * @param Display*
   * @param Cursor
   * @return int
   */
  Handle<Value> glx_XFreeCursor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFreeExtensionList
   *
   * @param char**
   * @return int
   */
  Handle<Value> glx_XFreeExtensionList(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFreeFont
   *
   * @param Display*
   * @param XFontStruct*
   * @return int
   */
  Handle<Value> glx_XFreeFont(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFreeFontInfo
   *
   * @param char**
   * @param XFontStruct*
   * @param int
   * @return int
   */
  Handle<Value> glx_XFreeFontInfo(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFreeFontNames
   *
   * @param char**
   * @return int
   */
  Handle<Value> glx_XFreeFontNames(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFreeFontPath
   *
   * @param char**
   * @return int
   */
  Handle<Value> glx_XFreeFontPath(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFreeGC
   *
   * @param Display*
   * @param GC
   * @return int
   */
  Handle<Value> glx_XFreeGC(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFreeModifiermap
   *
   * @param XModifierKeymap*
   * @return int
   */
  Handle<Value> glx_XFreeModifiermap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFreePixmap
   *
   * @param Display*
   * @param Pixmap
   * @return int
   */
  Handle<Value> glx_XFreePixmap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGeometry
   *
   * @param Display*
   * @param int
   * @param const char*
   * @param const char*
   * @param unsigned int
   * @param unsigned int
   * @param unsigned int
   * @param int
   * @param int
   * @param int*
   * @param int*
   * @param int*
   * @param int*
   * @return int
   */
  Handle<Value> glx_XGeometry(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetErrorDatabaseText
   *
   * @param Display*
   * @param const char*
   * @param const char*
   * @param const char*
   * @param char*
   * @param int
   * @return int
   */
  Handle<Value> glx_XGetErrorDatabaseText(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetErrorText
   *
   * @param Display*
   * @param int
   * @param char*
   * @param int
   * @return int
   */
  Handle<Value> glx_XGetErrorText(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetFontProperty
   *
   * @param XFontStruct*
   * @param Atom
   * @param unsigned long*
   * @return int
   */
  Handle<Value> glx_XGetFontProperty(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetGCValues
   *
   * @param Display*
   * @param GC
   * @param unsigned long
   * @param XGCValues*
   * @return int
   */
  Handle<Value> glx_XGetGCValues(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetGeometry
   *
   * @param Display*
   * @param Drawable
   * @param Window*
   * @param int*
   * @param int*
   * @param unsigned int*
   * @param unsigned int*
   * @param unsigned int*
   * @param unsigned int*
   * @return int
   */
  Handle<Value> glx_XGetGeometry(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetIconName
   *
   * @param Display*
   * @param Window
   * @param char**
   * @return int
   */
  Handle<Value> glx_XGetIconName(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetInputFocus
   *
   * @param Display*
   * @param Window*
   * @param int*
   * @return int
   */
  Handle<Value> glx_XGetInputFocus(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetKeyboardControl
   *
   * @param Display*
   * @param XKeyboardState*
   * @return int
   */
  Handle<Value> glx_XGetKeyboardControl(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetPointerControl
   *
   * @param Display*
   * @param int*
   * @param int*
   * @param int*
   * @return int
   */
  Handle<Value> glx_XGetPointerControl(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetPointerMapping
   *
   * @param Display*
   * @param unsigned char*
   * @param int
   * @return int
   */
  Handle<Value> glx_XGetPointerMapping(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetScreenSaver
   *
   * @param Display*
   * @param int*
   * @param int*
   * @param int*
   * @param int*
   * @return int
   */
  Handle<Value> glx_XGetScreenSaver(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetTransientForHint
   *
   * @param Display*
   * @param Window
   * @param Window*
   * @return int
   */
  Handle<Value> glx_XGetTransientForHint(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetWindowProperty
   *
   * @param Display*
   * @param Window
   * @param Atom
   * @param long
   * @param long
   * @param int
   * @param Atom
   * @param Atom*
   * @param int*
   * @param unsigned long*
   * @param unsigned long*
   * @param unsigned char**
   * @return int
   */
  Handle<Value> glx_XGetWindowProperty(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetWindowAttributes
   *
   * @param Display*
   * @param Window
   * @param XWindowAttributes*
   * @return int
   */
  Handle<Value> glx_XGetWindowAttributes(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGrabButton
   *
   * @param Display*
   * @param unsigned int
   * @param unsigned int
   * @param Window
   * @param int
   * @param unsigned int
   * @param int
   * @param int
   * @param Window
   * @param Cursor
   * @return int
   */
  Handle<Value> glx_XGrabButton(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGrabKey
   *
   * @param Display*
   * @param int
   * @param unsigned int
   * @param Window
   * @param int
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XGrabKey(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGrabKeyboard
   *
   * @param Display*
   * @param Window
   * @param int
   * @param int
   * @param int
   * @param Time
   * @return int
   */
  Handle<Value> glx_XGrabKeyboard(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGrabPointer
   *
   * @param Display*
   * @param Window
   * @param int
   * @param unsigned int
   * @param int
   * @param int
   * @param Window
   * @param Cursor
   * @param Time
   * @return int
   */
  Handle<Value> glx_XGrabPointer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGrabServer
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XGrabServer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XHeightMMOfScreen
   *
   * @param Screen*
   * @return int
   */
  Handle<Value> glx_XHeightMMOfScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XHeightOfScreen
   *
   * @param Screen*
   * @return int
   */
  Handle<Value> glx_XHeightOfScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XIfEvent
   *
   * @param Display*
   * @param XEvent*
   * @param int (*
   * @return int
   */
  Handle<Value> glx_XIfEvent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XImageByteOrder
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XImageByteOrder(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XInstallColormap
   *
   * @param Display*
   * @param Colormap
   * @return int
   */
  Handle<Value> glx_XInstallColormap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XKeysymToKeycode
   *
   * @param Display*
   * @param KeySym
   * @return KeyCode
   */
  Handle<Value> glx_XKeysymToKeycode(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XKillClient
   *
   * @param Display*
   * @param XID
   * @return int
   */
  Handle<Value> glx_XKillClient(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XLookupColor
   *
   * @param Display*
   * @param Colormap
   * @param const char*
   * @param XColor*
   * @param XColor*
   * @return int
   */
  Handle<Value> glx_XLookupColor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XLowerWindow
   *
   * @param Display*
   * @param Window
   * @return int
   */
  Handle<Value> glx_XLowerWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XMapRaised
   *
   * @param Display*
   * @param Window
   * @return int
   */
  Handle<Value> glx_XMapRaised(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XMapSubwindows
   *
   * @param Display*
   * @param Window
   * @return int
   */
  Handle<Value> glx_XMapSubwindows(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XMapWindow
   *
   * @param Display*
   * @param Window
   * @return int
   */
  Handle<Value> glx_XMapWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XMaskEvent
   *
   * @param Display*
   * @param long
   * @param XEvent*
   * @return int
   */
  Handle<Value> glx_XMaskEvent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XMaxCmapsOfScreen
   *
   * @param Screen*
   * @return int
   */
  Handle<Value> glx_XMaxCmapsOfScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XMinCmapsOfScreen
   *
   * @param Screen*
   * @return int
   */
  Handle<Value> glx_XMinCmapsOfScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XMoveResizeWindow
   *
   * @param Display*
   * @param Window
   * @param int
   * @param int
   * @param unsigned int
   * @param unsigned int
   * @return int
   */
  Handle<Value> glx_XMoveResizeWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XMoveWindow
   *
   * @param Display*
   * @param Window
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XMoveWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XNextEvent
   *
   * @param Display*
   * @param XEvent*
   * @return int
   */
  Handle<Value> glx_XNextEvent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XNoOp
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XNoOp(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XParseColor
   *
   * @param Display*
   * @param Colormap
   * @param const char*
   * @param XColor*
   * @return int
   */
  Handle<Value> glx_XParseColor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XParseGeometry
   *
   * @param const char*
   * @param int*
   * @param int*
   * @param unsigned int*
   * @param unsigned int*
   * @return int
   */
  Handle<Value> glx_XParseGeometry(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XPeekEvent
   *
   * @param Display*
   * @param XEvent*
   * @return int
   */
  Handle<Value> glx_XPeekEvent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XPeekIfEvent
   *
   * @param Display*
   * @param XEvent*
   * @param int (*
   * @return int
   */
  Handle<Value> glx_XPeekIfEvent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XPending
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XPending(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XPlanesOfScreen
   *
   * @param Screen*
   * @return int
   */
  Handle<Value> glx_XPlanesOfScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XProtocolRevision
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XProtocolRevision(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XProtocolVersion
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XProtocolVersion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XPutBackEvent
   *
   * @param Display*
   * @param XEvent*
   * @return int
   */
  Handle<Value> glx_XPutBackEvent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XPutImage
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param XImage*
   * @param int
   * @param int
   * @param int
   * @param int
   * @param unsigned int
   * @param unsigned int
   * @return int
   */
  Handle<Value> glx_XPutImage(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XQLength
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XQLength(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XQueryBestCursor
   *
   * @param Display*
   * @param Drawable
   * @param unsigned int
   * @param unsigned int
   * @param unsigned int*
   * @param unsigned int*
   * @return int
   */
  Handle<Value> glx_XQueryBestCursor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XQueryBestSize
   *
   * @param Display*
   * @param int
   * @param Drawable
   * @param unsigned int
   * @param unsigned int
   * @param unsigned int*
   * @param unsigned int*
   * @return int
   */
  Handle<Value> glx_XQueryBestSize(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XQueryBestStipple
   *
   * @param Display*
   * @param Drawable
   * @param unsigned int
   * @param unsigned int
   * @param unsigned int*
   * @param unsigned int*
   * @return int
   */
  Handle<Value> glx_XQueryBestStipple(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XQueryBestTile
   *
   * @param Display*
   * @param Drawable
   * @param unsigned int
   * @param unsigned int
   * @param unsigned int*
   * @param unsigned int*
   * @return int
   */
  Handle<Value> glx_XQueryBestTile(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XQueryColor
   *
   * @param Display*
   * @param Colormap
   * @param XColor*
   * @return int
   */
  Handle<Value> glx_XQueryColor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XQueryColors
   *
   * @param Display*
   * @param Colormap
   * @param XColor*
   * @param int
   * @return int
   */
  Handle<Value> glx_XQueryColors(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XQueryExtension
   *
   * @param Display*
   * @param const char*
   * @param int*
   * @param int*
   * @param int*
   * @return int
   */
  Handle<Value> glx_XQueryExtension(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XQueryKeymap
   *
   * @param Display*
   * @param char [32]
   * @return int
   */
  Handle<Value> glx_XQueryKeymap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XQueryPointer
   *
   * @param Display*
   * @param Window
   * @param Window*
   * @param Window*
   * @param int*
   * @param int*
   * @param int*
   * @param int*
   * @param unsigned int*
   * @return int
   */
  Handle<Value> glx_XQueryPointer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XQueryTextExtents
   *
   * @param Display*
   * @param XID
   * @param const char*
   * @param int
   * @param int*
   * @param int*
   * @param int*
   * @param XCharStruct*
   * @return int
   */
  Handle<Value> glx_XQueryTextExtents(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XQueryTextExtents16
   *
   * @param Display*
   * @param XID
   * @param const XChar2b*
   * @param int
   * @param int*
   * @param int*
   * @param int*
   * @param XCharStruct*
   * @return int
   */
  Handle<Value> glx_XQueryTextExtents16(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XQueryTree
   *
   * @param Display*
   * @param Window
   * @param Window*
   * @param Window*
   * @param Window**
   * @param unsigned int*
   * @return int
   */
  Handle<Value> glx_XQueryTree(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XRaiseWindow
   *
   * @param Display*
   * @param Window
   * @return int
   */
  Handle<Value> glx_XRaiseWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XReadBitmapFile
   *
   * @param Display*
   * @param Drawable
   * @param const char*
   * @param unsigned int*
   * @param unsigned int*
   * @param Pixmap*
   * @param int*
   * @param int*
   * @return int
   */
  Handle<Value> glx_XReadBitmapFile(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XReadBitmapFileData
   *
   * @param const char*
   * @param unsigned int*
   * @param unsigned int*
   * @param unsigned char**
   * @param int*
   * @param int*
   * @return int
   */
  Handle<Value> glx_XReadBitmapFileData(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XRebindKeysym
   *
   * @param Display*
   * @param KeySym
   * @param KeySym*
   * @param int
   * @param const unsigned char*
   * @param int
   * @return int
   */
  Handle<Value> glx_XRebindKeysym(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XRecolorCursor
   *
   * @param Display*
   * @param Cursor
   * @param XColor*
   * @param XColor*
   * @return int
   */
  Handle<Value> glx_XRecolorCursor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XRefreshKeyboardMapping
   *
   * @param XMappingEvent*
   * @return int
   */
  Handle<Value> glx_XRefreshKeyboardMapping(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XRemoveFromSaveSet
   *
   * @param Display*
   * @param Window
   * @return int
   */
  Handle<Value> glx_XRemoveFromSaveSet(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XRemoveHost
   *
   * @param Display*
   * @param XHostAddress*
   * @return int
   */
  Handle<Value> glx_XRemoveHost(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XRemoveHosts
   *
   * @param Display*
   * @param XHostAddress*
   * @param int
   * @return int
   */
  Handle<Value> glx_XRemoveHosts(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XReparentWindow
   *
   * @param Display*
   * @param Window
   * @param Window
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XReparentWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XResetScreenSaver
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XResetScreenSaver(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XResizeWindow
   *
   * @param Display*
   * @param Window
   * @param unsigned int
   * @param unsigned int
   * @return int
   */
  Handle<Value> glx_XResizeWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XRestackWindows
   *
   * @param Display*
   * @param Window*
   * @param int
   * @return int
   */
  Handle<Value> glx_XRestackWindows(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XRotateBuffers
   *
   * @param Display*
   * @param int
   * @return int
   */
  Handle<Value> glx_XRotateBuffers(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XRotateWindowProperties
   *
   * @param Display*
   * @param Window
   * @param Atom*
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XRotateWindowProperties(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XScreenCount
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XScreenCount(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSelectInput
   *
   * @param Display*
   * @param Window
   * @param long
   * @return int
   */
  Handle<Value> glx_XSelectInput(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSendEvent
   *
   * @param Display*
   * @param Window
   * @param int
   * @param long
   * @param XEvent*
   * @return int
   */
  Handle<Value> glx_XSendEvent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetAccessControl
   *
   * @param Display*
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetAccessControl(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetArcMode
   *
   * @param Display*
   * @param GC
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetArcMode(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetBackground
   *
   * @param Display*
   * @param GC
   * @param unsigned long
   * @return int
   */
  Handle<Value> glx_XSetBackground(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetClipMask
   *
   * @param Display*
   * @param GC
   * @param Pixmap
   * @return int
   */
  Handle<Value> glx_XSetClipMask(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetClipOrigin
   *
   * @param Display*
   * @param GC
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetClipOrigin(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetClipRectangles
   *
   * @param Display*
   * @param GC
   * @param int
   * @param int
   * @param XRectangle*
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetClipRectangles(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetCloseDownMode
   *
   * @param Display*
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetCloseDownMode(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetCommand
   *
   * @param Display*
   * @param Window
   * @param char**
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetCommand(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetDashes
   *
   * @param Display*
   * @param GC
   * @param int
   * @param const char*
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetDashes(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetFillRule
   *
   * @param Display*
   * @param GC
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetFillRule(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetFillStyle
   *
   * @param Display*
   * @param GC
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetFillStyle(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetFont
   *
   * @param Display*
   * @param GC
   * @param Font
   * @return int
   */
  Handle<Value> glx_XSetFont(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetFontPath
   *
   * @param Display*
   * @param char**
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetFontPath(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetForeground
   *
   * @param Display*
   * @param GC
   * @param unsigned long
   * @return int
   */
  Handle<Value> glx_XSetForeground(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetFunction
   *
   * @param Display*
   * @param GC
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetFunction(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetGraphicsExposures
   *
   * @param Display*
   * @param GC
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetGraphicsExposures(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetIconName
   *
   * @param Display*
   * @param Window
   * @param const char*
   * @return int
   */
  Handle<Value> glx_XSetIconName(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetInputFocus
   *
   * @param Display*
   * @param Window
   * @param int
   * @param Time
   * @return int
   */
  Handle<Value> glx_XSetInputFocus(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetLineAttributes
   *
   * @param Display*
   * @param GC
   * @param unsigned int
   * @param int
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetLineAttributes(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetModifierMapping
   *
   * @param Display*
   * @param XModifierKeymap*
   * @return int
   */
  Handle<Value> glx_XSetModifierMapping(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetPlaneMask
   *
   * @param Display*
   * @param GC
   * @param unsigned long
   * @return int
   */
  Handle<Value> glx_XSetPlaneMask(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetPointerMapping
   *
   * @param Display*
   * @param const unsigned char*
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetPointerMapping(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetScreenSaver
   *
   * @param Display*
   * @param int
   * @param int
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetScreenSaver(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetSelectionOwner
   *
   * @param Display*
   * @param Atom
   * @param Window
   * @param Time
   * @return int
   */
  Handle<Value> glx_XSetSelectionOwner(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetState
   *
   * @param Display*
   * @param GC
   * @param unsigned long
   * @param unsigned long
   * @param int
   * @param unsigned long
   * @return int
   */
  Handle<Value> glx_XSetState(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetStipple
   *
   * @param Display*
   * @param GC
   * @param Pixmap
   * @return int
   */
  Handle<Value> glx_XSetStipple(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetSubwindowMode
   *
   * @param Display*
   * @param GC
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetSubwindowMode(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetTSOrigin
   *
   * @param Display*
   * @param GC
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetTSOrigin(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetTile
   *
   * @param Display*
   * @param GC
   * @param Pixmap
   * @return int
   */
  Handle<Value> glx_XSetTile(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetWindowBackground
   *
   * @param Display*
   * @param Window
   * @param unsigned long
   * @return int
   */
  Handle<Value> glx_XSetWindowBackground(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetWindowBackgroundPixmap
   *
   * @param Display*
   * @param Window
   * @param Pixmap
   * @return int
   */
  Handle<Value> glx_XSetWindowBackgroundPixmap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetWindowBorder
   *
   * @param Display*
   * @param Window
   * @param unsigned long
   * @return int
   */
  Handle<Value> glx_XSetWindowBorder(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetWindowBorderPixmap
   *
   * @param Display*
   * @param Window
   * @param Pixmap
   * @return int
   */
  Handle<Value> glx_XSetWindowBorderPixmap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetWindowBorderWidth
   *
   * @param Display*
   * @param Window
   * @param unsigned int
   * @return int
   */
  Handle<Value> glx_XSetWindowBorderWidth(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetWindowColormap
   *
   * @param Display*
   * @param Window
   * @param Colormap
   * @return int
   */
  Handle<Value> glx_XSetWindowColormap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XStoreBuffer
   *
   * @param Display*
   * @param const char*
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XStoreBuffer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XStoreBytes
   *
   * @param Display*
   * @param const char*
   * @param int
   * @return int
   */
  Handle<Value> glx_XStoreBytes(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XStoreColor
   *
   * @param Display*
   * @param Colormap
   * @param XColor*
   * @return int
   */
  Handle<Value> glx_XStoreColor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XStoreColors
   *
   * @param Display*
   * @param Colormap
   * @param XColor*
   * @param int
   * @return int
   */
  Handle<Value> glx_XStoreColors(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XStoreName
   *
   * @param Display*
   * @param Window
   * @param const char*
   * @return int
   */
  Handle<Value> glx_XStoreName(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XStoreNamedColor
   *
   * @param Display*
   * @param Colormap
   * @param const char*
   * @param unsigned long
   * @param int
   * @return int
   */
  Handle<Value> glx_XStoreNamedColor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSync
   *
   * @param Display*
   * @param int
   * @return int
   */
  Handle<Value> glx_XSync(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XTextExtents
   *
   * @param XFontStruct*
   * @param const char*
   * @param int
   * @param int*
   * @param int*
   * @param int*
   * @param XCharStruct*
   * @return int
   */
  Handle<Value> glx_XTextExtents(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XTextExtents16
   *
   * @param XFontStruct*
   * @param const XChar2b*
   * @param int
   * @param int*
   * @param int*
   * @param int*
   * @param XCharStruct*
   * @return int
   */
  Handle<Value> glx_XTextExtents16(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XTextWidth
   *
   * @param XFontStruct*
   * @param const char*
   * @param int
   * @return int
   */
  Handle<Value> glx_XTextWidth(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XTextWidth16
   *
   * @param XFontStruct*
   * @param const XChar2b*
   * @param int
   * @return int
   */
  Handle<Value> glx_XTextWidth16(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XTranslateCoordinates
   *
   * @param Display*
   * @param Window
   * @param Window
   * @param int
   * @param int
   * @param int*
   * @param int*
   * @param Window*
   * @return int
   */
  Handle<Value> glx_XTranslateCoordinates(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XUndefineCursor
   *
   * @param Display*
   * @param Window
   * @return int
   */
  Handle<Value> glx_XUndefineCursor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XUngrabButton
   *
   * @param Display*
   * @param unsigned int
   * @param unsigned int
   * @param Window
   * @return int
   */
  Handle<Value> glx_XUngrabButton(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XUngrabKey
   *
   * @param Display*
   * @param int
   * @param unsigned int
   * @param Window
   * @return int
   */
  Handle<Value> glx_XUngrabKey(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XUngrabKeyboard
   *
   * @param Display*
   * @param Time
   * @return int
   */
  Handle<Value> glx_XUngrabKeyboard(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XUngrabPointer
   *
   * @param Display*
   * @param Time
   * @return int
   */
  Handle<Value> glx_XUngrabPointer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XUngrabServer
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XUngrabServer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XUninstallColormap
   *
   * @param Display*
   * @param Colormap
   * @return int
   */
  Handle<Value> glx_XUninstallColormap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XUnloadFont
   *
   * @param Display*
   * @param Font
   * @return int
   */
  Handle<Value> glx_XUnloadFont(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XUnmapSubwindows
   *
   * @param Display*
   * @param Window
   * @return int
   */
  Handle<Value> glx_XUnmapSubwindows(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XUnmapWindow
   *
   * @param Display*
   * @param Window
   * @return int
   */
  Handle<Value> glx_XUnmapWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XVendorRelease
   *
   * @param Display*
   * @return int
   */
  Handle<Value> glx_XVendorRelease(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XWarpPointer
   *
   * @param Display*
   * @param Window
   * @param Window
   * @param int
   * @param int
   * @param unsigned int
   * @param unsigned int
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XWarpPointer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XWidthMMOfScreen
   *
   * @param Screen*
   * @return int
   */
  Handle<Value> glx_XWidthMMOfScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XWidthOfScreen
   *
   * @param Screen*
   * @return int
   */
  Handle<Value> glx_XWidthOfScreen(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XWindowEvent
   *
   * @param Display*
   * @param Window
   * @param long
   * @param XEvent*
   * @return int
   */
  Handle<Value> glx_XWindowEvent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XWriteBitmapFile
   *
   * @param Display*
   * @param const char*
   * @param Pixmap
   * @param unsigned int
   * @param unsigned int
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XWriteBitmapFile(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XOpenOM
   *
   * @param Display*
   * @param struct _XrmHashBucketRec*
   * @param const char*
   * @param const char*
   * @return XOM
   */
  Handle<Value> glx_XOpenOM(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCloseOM
   *
   * @param XOM
   * @return int
   */
  Handle<Value> glx_XCloseOM(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCreateOC
   *
   * @param XOM
   * @param ...
   * @return XOC
   */
  Handle<Value> glx_XCreateOC(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDestroyOC
   *
   * @param XOC
   * @return void
   */
  Handle<Value> glx_XDestroyOC(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XOMOfOC
   *
   * @param XOC
   * @return XOM
   */
  Handle<Value> glx_XOMOfOC(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCreateFontSet
   *
   * @param Display*
   * @param const char*
   * @param char***
   * @param int*
   * @param char**
   * @return XFontSet
   */
  Handle<Value> glx_XCreateFontSet(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFreeFontSet
   *
   * @param Display*
   * @param XFontSet
   * @return void
   */
  Handle<Value> glx_XFreeFontSet(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFontsOfFontSet
   *
   * @param XFontSet
   * @param XFontStruct***
   * @param char***
   * @return int
   */
  Handle<Value> glx_XFontsOfFontSet(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XContextDependentDrawing
   *
   * @param XFontSet
   * @return int
   */
  Handle<Value> glx_XContextDependentDrawing(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDirectionalDependentDrawing
   *
   * @param XFontSet
   * @return int
   */
  Handle<Value> glx_XDirectionalDependentDrawing(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XContextualDrawing
   *
   * @param XFontSet
   * @return int
   */
  Handle<Value> glx_XContextualDrawing(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XmbTextEscapement
   *
   * @param XFontSet
   * @param const char*
   * @param int
   * @return int
   */
  Handle<Value> glx_XmbTextEscapement(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XwcTextEscapement
   *
   * @param XFontSet
   * @param const wchar_t*
   * @param int
   * @return int
   */
  Handle<Value> glx_XwcTextEscapement(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * Xutf8TextEscapement
   *
   * @param XFontSet
   * @param const char*
   * @param int
   * @return int
   */
  Handle<Value> glx_Xutf8TextEscapement(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XmbTextExtents
   *
   * @param XFontSet
   * @param const char*
   * @param int
   * @param XRectangle*
   * @param XRectangle*
   * @return int
   */
  Handle<Value> glx_XmbTextExtents(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XwcTextExtents
   *
   * @param XFontSet
   * @param const wchar_t*
   * @param int
   * @param XRectangle*
   * @param XRectangle*
   * @return int
   */
  Handle<Value> glx_XwcTextExtents(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * Xutf8TextExtents
   *
   * @param XFontSet
   * @param const char*
   * @param int
   * @param XRectangle*
   * @param XRectangle*
   * @return int
   */
  Handle<Value> glx_Xutf8TextExtents(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XmbTextPerCharExtents
   *
   * @param XFontSet
   * @param const char*
   * @param int
   * @param XRectangle*
   * @param XRectangle*
   * @param int
   * @param int*
   * @param XRectangle*
   * @param XRectangle*
   * @return int
   */
  Handle<Value> glx_XmbTextPerCharExtents(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XwcTextPerCharExtents
   *
   * @param XFontSet
   * @param const wchar_t*
   * @param int
   * @param XRectangle*
   * @param XRectangle*
   * @param int
   * @param int*
   * @param XRectangle*
   * @param XRectangle*
   * @return int
   */
  Handle<Value> glx_XwcTextPerCharExtents(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * Xutf8TextPerCharExtents
   *
   * @param XFontSet
   * @param const char*
   * @param int
   * @param XRectangle*
   * @param XRectangle*
   * @param int
   * @param int*
   * @param XRectangle*
   * @param XRectangle*
   * @return int
   */
  Handle<Value> glx_Xutf8TextPerCharExtents(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XmbDrawText
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @param XmbTextItem*
   * @param int
   * @return void
   */
  Handle<Value> glx_XmbDrawText(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XwcDrawText
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @param XwcTextItem*
   * @param int
   * @return void
   */
  Handle<Value> glx_XwcDrawText(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * Xutf8DrawText
   *
   * @param Display*
   * @param Drawable
   * @param GC
   * @param int
   * @param int
   * @param XmbTextItem*
   * @param int
   * @return void
   */
  Handle<Value> glx_Xutf8DrawText(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XmbDrawString
   *
   * @param Display*
   * @param Drawable
   * @param XFontSet
   * @param GC
   * @param int
   * @param int
   * @param const char*
   * @param int
   * @return void
   */
  Handle<Value> glx_XmbDrawString(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XwcDrawString
   *
   * @param Display*
   * @param Drawable
   * @param XFontSet
   * @param GC
   * @param int
   * @param int
   * @param const wchar_t*
   * @param int
   * @return void
   */
  Handle<Value> glx_XwcDrawString(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * Xutf8DrawString
   *
   * @param Display*
   * @param Drawable
   * @param XFontSet
   * @param GC
   * @param int
   * @param int
   * @param const char*
   * @param int
   * @return void
   */
  Handle<Value> glx_Xutf8DrawString(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XmbDrawImageString
   *
   * @param Display*
   * @param Drawable
   * @param XFontSet
   * @param GC
   * @param int
   * @param int
   * @param const char*
   * @param int
   * @return void
   */
  Handle<Value> glx_XmbDrawImageString(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XwcDrawImageString
   *
   * @param Display*
   * @param Drawable
   * @param XFontSet
   * @param GC
   * @param int
   * @param int
   * @param const wchar_t*
   * @param int
   * @return void
   */
  Handle<Value> glx_XwcDrawImageString(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * Xutf8DrawImageString
   *
   * @param Display*
   * @param Drawable
   * @param XFontSet
   * @param GC
   * @param int
   * @param int
   * @param const char*
   * @param int
   * @return void
   */
  Handle<Value> glx_Xutf8DrawImageString(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XOpenIM
   *
   * @param Display*
   * @param struct _XrmHashBucketRec*
   * @param char*
   * @param char*
   * @return XIM
   */
  Handle<Value> glx_XOpenIM(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCloseIM
   *
   * @param XIM
   * @return int
   */
  Handle<Value> glx_XCloseIM(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCreateIC
   *
   * @param XIM
   * @param ...
   * @return XIC
   */
  Handle<Value> glx_XCreateIC(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDestroyIC
   *
   * @param XIC
   * @return void
   */
  Handle<Value> glx_XDestroyIC(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetICFocus
   *
   * @param XIC
   * @return void
   */
  Handle<Value> glx_XSetICFocus(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XUnsetICFocus
   *
   * @param XIC
   * @return void
   */
  Handle<Value> glx_XUnsetICFocus(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XIMOfIC
   *
   * @param XIC
   * @return XIM
   */
  Handle<Value> glx_XIMOfIC(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFilterEvent
   *
   * @param XEvent*
   * @param Window
   * @return int
   */
  Handle<Value> glx_XFilterEvent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XmbLookupString
   *
   * @param XIC
   * @param XKeyPressedEvent*
   * @param char*
   * @param int
   * @param KeySym*
   * @param int*
   * @return int
   */
  Handle<Value> glx_XmbLookupString(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XwcLookupString
   *
   * @param XIC
   * @param XKeyPressedEvent*
   * @param wchar_t*
   * @param int
   * @param KeySym*
   * @param int*
   * @return int
   */
  Handle<Value> glx_XwcLookupString(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * Xutf8LookupString
   *
   * @param XIC
   * @param XKeyPressedEvent*
   * @param char*
   * @param int
   * @param KeySym*
   * @param int*
   * @return int
   */
  Handle<Value> glx_Xutf8LookupString(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XVaCreateNestedList
   *
   * @param int
   * @param ...
   * @return XVaNestedList
   */
  Handle<Value> glx_XVaCreateNestedList(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XRegisterIMInstantiateCallback
   *
   * @param Display*
   * @param struct _XrmHashBucketRec*
   * @param char*
   * @param char*
   * @param XIDProc
   * @param XPointer
   * @return int
   */
  Handle<Value> glx_XRegisterIMInstantiateCallback(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XUnregisterIMInstantiateCallback
   *
   * @param Display*
   * @param struct _XrmHashBucketRec*
   * @param char*
   * @param char*
   * @param XIDProc
   * @param XPointer
   * @return int
   */
  Handle<Value> glx_XUnregisterIMInstantiateCallback(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XInternalConnectionNumbers
   *
   * @param Display*
   * @param int**
   * @param int*
   * @return int
   */
  Handle<Value> glx_XInternalConnectionNumbers(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XProcessInternalConnection
   *
   * @param Display*
   * @param int
   * @return void
   */
  Handle<Value> glx_XProcessInternalConnection(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XAddConnectionWatch
   *
   * @param Display*
   * @param XConnectionWatchProc
   * @param XPointer
   * @return int
   */
  Handle<Value> glx_XAddConnectionWatch(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XRemoveConnectionWatch
   *
   * @param Display*
   * @param XConnectionWatchProc
   * @param XPointer
   * @return void
   */
  Handle<Value> glx_XRemoveConnectionWatch(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetAuthorization
   *
   * @param char *
   * @param int
   * @param char *
   * @param int
   * @return void
   */
  Handle<Value> glx_XSetAuthorization(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * _Xmbtowc
   *
   * @param wchar_t *
   * @param char *
   * @param int
   * @return int
   */
  Handle<Value> glx__Xmbtowc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * _Xwctomb
   *
   * @param char *
   * @param wchar_t
   * @return int
   */
  Handle<Value> glx__Xwctomb(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetEventData
   *
   * @param Display*
   * @param XGenericEventCookie*
   * @return int
   */
  Handle<Value> glx_XGetEventData(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFreeEventData
   *
   * @param Display*
   * @param XGenericEventCookie*
   * @return void
   */
  Handle<Value> glx_XFreeEventData(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XClipBox
   *
   * @param Region
   * @param XRectangle*
   * @return int
   */
  Handle<Value> glx_XClipBox(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XCreateRegion
   *
   * @param void
   * @return Region
   */
  Handle<Value> glx_XCreateRegion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDeleteContext
   *
   * @param Display*
   * @param XID
   * @param XContext
   * @return int
   */
  Handle<Value> glx_XDeleteContext(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XDestroyRegion
   *
   * @param Region
   * @return int
   */
  Handle<Value> glx_XDestroyRegion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XEmptyRegion
   *
   * @param Region
   * @return int
   */
  Handle<Value> glx_XEmptyRegion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XEqualRegion
   *
   * @param Region
   * @param Region
   * @return int
   */
  Handle<Value> glx_XEqualRegion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XFindContext
   *
   * @param Display*
   * @param XID
   * @param XContext
   * @param XPointer*
   * @return int
   */
  Handle<Value> glx_XFindContext(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetClassHint
   *
   * @param Display*
   * @param Window
   * @param XClassHint*
   * @return int
   */
  Handle<Value> glx_XGetClassHint(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetIconSizes
   *
   * @param Display*
   * @param Window
   * @param XIconSize**
   * @param int*
   * @return int
   */
  Handle<Value> glx_XGetIconSizes(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetNormalHints
   *
   * @param Display*
   * @param Window
   * @param XSizeHints*
   * @return int
   */
  Handle<Value> glx_XGetNormalHints(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetRGBColormaps
   *
   * @param Display*
   * @param Window
   * @param XStandardColormap**
   * @param int*
   * @param Atom
   * @return int
   */
  Handle<Value> glx_XGetRGBColormaps(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetSizeHints
   *
   * @param Display*
   * @param Window
   * @param XSizeHints*
   * @param Atom
   * @return int
   */
  Handle<Value> glx_XGetSizeHints(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetStandardColormap
   *
   * @param Display*
   * @param Window
   * @param XStandardColormap*
   * @param Atom
   * @return int
   */
  Handle<Value> glx_XGetStandardColormap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetTextProperty
   *
   * @param Display*
   * @param Window
   * @param XTextProperty*
   * @param Atom
   * @return int
   */
  Handle<Value> glx_XGetTextProperty(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetWMClientMachine
   *
   * @param Display*
   * @param Window
   * @param XTextProperty*
   * @return int
   */
  Handle<Value> glx_XGetWMClientMachine(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetWMIconName
   *
   * @param Display*
   * @param Window
   * @param XTextProperty*
   * @return int
   */
  Handle<Value> glx_XGetWMIconName(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetWMName
   *
   * @param Display*
   * @param Window
   * @param XTextProperty*
   * @return int
   */
  Handle<Value> glx_XGetWMName(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetWMNormalHints
   *
   * @param Display*
   * @param Window
   * @param XSizeHints*
   * @param long*
   * @return int
   */
  Handle<Value> glx_XGetWMNormalHints(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetWMSizeHints
   *
   * @param Display*
   * @param Window
   * @param XSizeHints*
   * @param long*
   * @param Atom
   * @return int
   */
  Handle<Value> glx_XGetWMSizeHints(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XGetZoomHints
   *
   * @param Display*
   * @param Window
   * @param XSizeHints*
   * @return int
   */
  Handle<Value> glx_XGetZoomHints(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XIntersectRegion
   *
   * @param Region
   * @param Region
   * @param Region
   * @return int
   */
  Handle<Value> glx_XIntersectRegion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XConvertCase
   *
   * @param KeySym
   * @param KeySym*
   * @param KeySym*
   * @return void
   */
  Handle<Value> glx_XConvertCase(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XLookupString
   *
   * @param XKeyEvent*
   * @param char*
   * @param int
   * @param KeySym*
   * @param XComposeStatus*
   * @return int
   */
  Handle<Value> glx_XLookupString(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XMatchVisualInfo
   *
   * @param Display*
   * @param int
   * @param int
   * @param int
   * @param XVisualInfo*
   * @return int
   */
  Handle<Value> glx_XMatchVisualInfo(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XOffsetRegion
   *
   * @param Region
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XOffsetRegion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XPointInRegion
   *
   * @param Region
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XPointInRegion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XPolygonRegion
   *
   * @param XPoint*
   * @param int
   * @param int
   * @return Region
   */
  Handle<Value> glx_XPolygonRegion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XRectInRegion
   *
   * @param Region
   * @param int
   * @param int
   * @param unsigned int
   * @param unsigned int
   * @return int
   */
  Handle<Value> glx_XRectInRegion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSaveContext
   *
   * @param Display*
   * @param XID
   * @param XContext
   * @param const char*
   * @return int
   */
  Handle<Value> glx_XSaveContext(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetClassHint
   *
   * @param Display*
   * @param Window
   * @param XClassHint*
   * @return int
   */
  Handle<Value> glx_XSetClassHint(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetIconSizes
   *
   * @param Display*
   * @param Window
   * @param XIconSize*
   * @param int
   * @return int
   */
  Handle<Value> glx_XSetIconSizes(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetNormalHints
   *
   * @param Display*
   * @param Window
   * @param XSizeHints*
   * @return int
   */
  Handle<Value> glx_XSetNormalHints(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetRGBColormaps
   *
   * @param Display*
   * @param Window
   * @param XStandardColormap*
   * @param int
   * @param Atom
   * @return void
   */
  Handle<Value> glx_XSetRGBColormaps(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetSizeHints
   *
   * @param Display*
   * @param Window
   * @param XSizeHints*
   * @param Atom
   * @return int
   */
  Handle<Value> glx_XSetSizeHints(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetStandardProperties
   *
   * @param Display*
   * @param Window
   * @param const char*
   * @param const char*
   * @param Pixmap
   * @param char**
   * @param int
   * @param XSizeHints*
   * @return int
   */
  Handle<Value> glx_XSetStandardProperties(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetTextProperty
   *
   * @param Display*
   * @param Window
   * @param XTextProperty*
   * @param Atom
   * @return void
   */
  Handle<Value> glx_XSetTextProperty(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetWMClientMachine
   *
   * @param Display*
   * @param Window
   * @param XTextProperty*
   * @return void
   */
  Handle<Value> glx_XSetWMClientMachine(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetWMHints
   *
   * @param Display*
   * @param Window
   * @param XWMHints*
   * @return int
   */
  Handle<Value> glx_XSetWMHints(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetWMIconName
   *
   * @param Display*
   * @param Window
   * @param XTextProperty*
   * @return void
   */
  Handle<Value> glx_XSetWMIconName(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetWMName
   *
   * @param Display*
   * @param Window
   * @param XTextProperty*
   * @return void
   */
  Handle<Value> glx_XSetWMName(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetWMNormalHints
   *
   * @param Display*
   * @param Window
   * @param XSizeHints*
   * @return void
   */
  Handle<Value> glx_XSetWMNormalHints(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetWMProperties
   *
   * @param Display*
   * @param Window
   * @param XTextProperty*
   * @param XTextProperty*
   * @param char**
   * @param int
   * @param XSizeHints*
   * @param XWMHints*
   * @param XClassHint*
   * @return void
   */
  Handle<Value> glx_XSetWMProperties(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XmbSetWMProperties
   *
   * @param Display*
   * @param Window
   * @param const char*
   * @param const char*
   * @param char**
   * @param int
   * @param XSizeHints*
   * @param XWMHints*
   * @param XClassHint*
   * @return void
   */
  Handle<Value> glx_XmbSetWMProperties(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * Xutf8SetWMProperties
   *
   * @param Display*
   * @param Window
   * @param const char*
   * @param const char*
   * @param char**
   * @param int
   * @param XSizeHints*
   * @param XWMHints*
   * @param XClassHint*
   * @return void
   */
  Handle<Value> glx_Xutf8SetWMProperties(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetWMSizeHints
   *
   * @param Display*
   * @param Window
   * @param XSizeHints*
   * @param Atom
   * @return void
   */
  Handle<Value> glx_XSetWMSizeHints(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetRegion
   *
   * @param Display*
   * @param GC
   * @param Region
   * @return int
   */
  Handle<Value> glx_XSetRegion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetStandardColormap
   *
   * @param Display*
   * @param Window
   * @param XStandardColormap*
   * @param Atom
   * @return void
   */
  Handle<Value> glx_XSetStandardColormap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSetZoomHints
   *
   * @param Display*
   * @param Window
   * @param XSizeHints*
   * @return int
   */
  Handle<Value> glx_XSetZoomHints(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XShrinkRegion
   *
   * @param Region
   * @param int
   * @param int
   * @return int
   */
  Handle<Value> glx_XShrinkRegion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XStringListToTextProperty
   *
   * @param char**
   * @param int
   * @param XTextProperty*
   * @return int
   */
  Handle<Value> glx_XStringListToTextProperty(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XSubtractRegion
   *
   * @param Region
   * @param Region
   * @param Region
   * @return int
   */
  Handle<Value> glx_XSubtractRegion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XmbTextListToTextProperty
   *
   * @param Display* display
   * @param char** list
   * @param int count
   * @param XICCEncodingStyle style
   * @param XTextProperty* text_prop_return
   * @return int
   */
  Handle<Value> glx_XmbTextListToTextProperty(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XwcTextListToTextProperty
   *
   * @param Display* display
   * @param wchar_t** list
   * @param int count
   * @param XICCEncodingStyle style
   * @param XTextProperty* text_prop_return
   * @return int
   */
  Handle<Value> glx_XwcTextListToTextProperty(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * Xutf8TextListToTextProperty
   *
   * @param Display* display
   * @param char** list
   * @param int count
   * @param XICCEncodingStyle style
   * @param XTextProperty* text_prop_return
   * @return int
   */
  Handle<Value> glx_Xutf8TextListToTextProperty(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XwcFreeStringList
   *
   * @param wchar_t** list
   * @return void
   */
  Handle<Value> glx_XwcFreeStringList(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XTextPropertyToStringList
   *
   * @param XTextProperty*
   * @param char***
   * @param int*
   * @return int
   */
  Handle<Value> glx_XTextPropertyToStringList(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XmbTextPropertyToTextList
   *
   * @param Display* display
   * @param const XTextProperty* text_prop
   * @param char*** list_return
   * @param int* count_return
   * @return int
   */
  Handle<Value> glx_XmbTextPropertyToTextList(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XwcTextPropertyToTextList
   *
   * @param Display* display
   * @param const XTextProperty* text_prop
   * @param wchar_t*** list_return
   * @param int* count_return
   * @return int
   */
  Handle<Value> glx_XwcTextPropertyToTextList(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * Xutf8TextPropertyToTextList
   *
   * @param Display* display
   * @param const XTextProperty* text_prop
   * @param char*** list_return
   * @param int* count_return
   * @return int
   */
  Handle<Value> glx_Xutf8TextPropertyToTextList(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XUnionRectWithRegion
   *
   * @param XRectangle*
   * @param Region
   * @param Region
   * @return int
   */
  Handle<Value> glx_XUnionRectWithRegion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XUnionRegion
   *
   * @param Region
   * @param Region
   * @param Region
   * @return int
   */
  Handle<Value> glx_XUnionRegion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XWMGeometry
   *
   * @param Display*
   * @param int
   * @param const char*
   * @param const char*
   * @param unsigned int
   * @param XSizeHints*
   * @param int*
   * @param int*
   * @param int*
   * @param int*
   * @param int*
   * @return int
   */
  Handle<Value> glx_XWMGeometry(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * XXorRegion
   *
   * @param Region
   * @param Region
   * @param Region
   * @return int
   */
  Handle<Value> glx_XXorRegion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glClearIndex
   *
   * @param GLfloat c
   * @return void
   */
  Handle<Value> glx_glClearIndex(const Arguments& args) {
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
  Handle<Value> glx_glClearColor(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glClear
   *
   * @param GLbitfield mask
   * @return void
   */
  Handle<Value> glx_glClear(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexMask
   *
   * @param GLuint mask
   * @return void
   */
  Handle<Value> glx_glIndexMask(const Arguments& args) {
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
  Handle<Value> glx_glColorMask(const Arguments& args) {
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
  Handle<Value> glx_glAlphaFunc(const Arguments& args) {
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
  Handle<Value> glx_glBlendFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLogicOp
   *
   * @param GLenum opcode
   * @return void
   */
  Handle<Value> glx_glLogicOp(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glCullFace
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glx_glCullFace(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glFrontFace
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glx_glFrontFace(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPointSize
   *
   * @param GLfloat size
   * @return void
   */
  Handle<Value> glx_glPointSize(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLineWidth
   *
   * @param GLfloat width
   * @return void
   */
  Handle<Value> glx_glLineWidth(const Arguments& args) {
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
  Handle<Value> glx_glLineStipple(const Arguments& args) {
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
  Handle<Value> glx_glPolygonMode(const Arguments& args) {
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
  Handle<Value> glx_glPolygonOffset(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPolygonStipple
   *
   * @param const GLubyte *mask
   * @return void
   */
  Handle<Value> glx_glPolygonStipple(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetPolygonStipple
   *
   * @param GLubyte *mask
   * @return void
   */
  Handle<Value> glx_glGetPolygonStipple(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEdgeFlag
   *
   * @param GLboolean flag
   * @return void
   */
  Handle<Value> glx_glEdgeFlag(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEdgeFlagv
   *
   * @param const GLboolean *flag
   * @return void
   */
  Handle<Value> glx_glEdgeFlagv(const Arguments& args) {
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
  Handle<Value> glx_glScissor(const Arguments& args) {
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
  Handle<Value> glx_glClipPlane(const Arguments& args) {
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
  Handle<Value> glx_glGetClipPlane(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glDrawBuffer
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glx_glDrawBuffer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glReadBuffer
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glx_glReadBuffer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEnable
   *
   * @param GLenum cap
   * @return void
   */
  Handle<Value> glx_glEnable(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glDisable
   *
   * @param GLenum cap
   * @return void
   */
  Handle<Value> glx_glDisable(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIsEnabled
   *
   * @param GLenum cap
   * @return GLboolean
   */
  Handle<Value> glx_glIsEnabled(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEnableClientState
   *
   * @param GLenum cap
   * @return void
   */
  Handle<Value> glx_glEnableClientState(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glDisableClientState
   *
   * @param GLenum cap
   * @return void
   */
  Handle<Value> glx_glDisableClientState(const Arguments& args) {
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
  Handle<Value> glx_glGetBooleanv(const Arguments& args) {
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
  Handle<Value> glx_glGetDoublev(const Arguments& args) {
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
  Handle<Value> glx_glGetFloatv(const Arguments& args) {
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
  Handle<Value> glx_glGetIntegerv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPushAttrib
   *
   * @param GLbitfield mask
   * @return void
   */
  Handle<Value> glx_glPushAttrib(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPopAttrib
   *
   * @param void
   * @return void
   */
  Handle<Value> glx_glPopAttrib(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPushClientAttrib
   *
   * @param GLbitfield mask
   * @return void
   */
  Handle<Value> glx_glPushClientAttrib(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPopClientAttrib
   *
   * @param void
   * @return void
   */
  Handle<Value> glx_glPopClientAttrib(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRenderMode
   *
   * @param GLenum mode
   * @return GLint
   */
  Handle<Value> glx_glRenderMode(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGetError
   *
   * @param void
   * @return GLenum
   */
  Handle<Value> glx_glGetError(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glFinish
   *
   * @param void
   * @return void
   */
  Handle<Value> glx_glFinish(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glFlush
   *
   * @param void
   * @return void
   */
  Handle<Value> glx_glFlush(const Arguments& args) {
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
  Handle<Value> glx_glHint(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glClearDepth
   *
   * @param GLclampd depth
   * @return void
   */
  Handle<Value> glx_glClearDepth(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glDepthFunc
   *
   * @param GLenum func
   * @return void
   */
  Handle<Value> glx_glDepthFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glDepthMask
   *
   * @param GLboolean flag
   * @return void
   */
  Handle<Value> glx_glDepthMask(const Arguments& args) {
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
  Handle<Value> glx_glDepthRange(const Arguments& args) {
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
  Handle<Value> glx_glClearAccum(const Arguments& args) {
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
  Handle<Value> glx_glAccum(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMatrixMode
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glx_glMatrixMode(const Arguments& args) {
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
  Handle<Value> glx_glOrtho(const Arguments& args) {
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
  Handle<Value> glx_glFrustum(const Arguments& args) {
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
  Handle<Value> glx_glViewport(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPushMatrix
   *
   * @param void
   * @return void
   */
  Handle<Value> glx_glPushMatrix(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPopMatrix
   *
   * @param void
   * @return void
   */
  Handle<Value> glx_glPopMatrix(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLoadIdentity
   *
   * @param void
   * @return void
   */
  Handle<Value> glx_glLoadIdentity(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLoadMatrixd
   *
   * @param const GLdouble *m
   * @return void
   */
  Handle<Value> glx_glLoadMatrixd(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLoadMatrixf
   *
   * @param const GLfloat *m
   * @return void
   */
  Handle<Value> glx_glLoadMatrixf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultMatrixd
   *
   * @param const GLdouble *m
   * @return void
   */
  Handle<Value> glx_glMultMatrixd(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultMatrixf
   *
   * @param const GLfloat *m
   * @return void
   */
  Handle<Value> glx_glMultMatrixf(const Arguments& args) {
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
  Handle<Value> glx_glRotated(const Arguments& args) {
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
  Handle<Value> glx_glRotatef(const Arguments& args) {
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
  Handle<Value> glx_glScaled(const Arguments& args) {
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
  Handle<Value> glx_glScalef(const Arguments& args) {
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
  Handle<Value> glx_glTranslated(const Arguments& args) {
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
  Handle<Value> glx_glTranslatef(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIsList
   *
   * @param GLuint list
   * @return GLboolean
   */
  Handle<Value> glx_glIsList(const Arguments& args) {
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
  Handle<Value> glx_glDeleteLists(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glGenLists
   *
   * @param GLsizei range
   * @return GLuint
   */
  Handle<Value> glx_glGenLists(const Arguments& args) {
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
  Handle<Value> glx_glNewList(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEndList
   *
   * @param void
   * @return void
   */
  Handle<Value> glx_glEndList(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glCallList
   *
   * @param GLuint list
   * @return void
   */
  Handle<Value> glx_glCallList(const Arguments& args) {
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
  Handle<Value> glx_glCallLists(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glListBase
   *
   * @param GLuint base
   * @return void
   */
  Handle<Value> glx_glListBase(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glBegin
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glx_glBegin(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEnd
   *
   * @param void
   * @return void
   */
  Handle<Value> glx_glEnd(const Arguments& args) {
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
  Handle<Value> glx_glVertex2d(const Arguments& args) {
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
  Handle<Value> glx_glVertex2f(const Arguments& args) {
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
  Handle<Value> glx_glVertex2i(const Arguments& args) {
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
  Handle<Value> glx_glVertex2s(const Arguments& args) {
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
  Handle<Value> glx_glVertex3d(const Arguments& args) {
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
  Handle<Value> glx_glVertex3f(const Arguments& args) {
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
  Handle<Value> glx_glVertex3i(const Arguments& args) {
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
  Handle<Value> glx_glVertex3s(const Arguments& args) {
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
  Handle<Value> glx_glVertex4d(const Arguments& args) {
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
  Handle<Value> glx_glVertex4f(const Arguments& args) {
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
  Handle<Value> glx_glVertex4i(const Arguments& args) {
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
  Handle<Value> glx_glVertex4s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex2dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glx_glVertex2dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex2fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glx_glVertex2fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex2iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glx_glVertex2iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex2sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glx_glVertex2sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glx_glVertex3dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glx_glVertex3fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glx_glVertex3iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glx_glVertex3sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex4dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glx_glVertex4dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex4fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glx_glVertex4fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex4iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glx_glVertex4iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glVertex4sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glx_glVertex4sv(const Arguments& args) {
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
  Handle<Value> glx_glNormal3b(const Arguments& args) {
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
  Handle<Value> glx_glNormal3d(const Arguments& args) {
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
  Handle<Value> glx_glNormal3f(const Arguments& args) {
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
  Handle<Value> glx_glNormal3i(const Arguments& args) {
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
  Handle<Value> glx_glNormal3s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNormal3bv
   *
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> glx_glNormal3bv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNormal3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glx_glNormal3dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNormal3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glx_glNormal3fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNormal3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glx_glNormal3iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glNormal3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glx_glNormal3sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexd
   *
   * @param GLdouble c
   * @return void
   */
  Handle<Value> glx_glIndexd(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexf
   *
   * @param GLfloat c
   * @return void
   */
  Handle<Value> glx_glIndexf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexi
   *
   * @param GLint c
   * @return void
   */
  Handle<Value> glx_glIndexi(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexs
   *
   * @param GLshort c
   * @return void
   */
  Handle<Value> glx_glIndexs(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexub
   *
   * @param GLubyte c
   * @return void
   */
  Handle<Value> glx_glIndexub(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexdv
   *
   * @param const GLdouble *c
   * @return void
   */
  Handle<Value> glx_glIndexdv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexfv
   *
   * @param const GLfloat *c
   * @return void
   */
  Handle<Value> glx_glIndexfv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexiv
   *
   * @param const GLint *c
   * @return void
   */
  Handle<Value> glx_glIndexiv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexsv
   *
   * @param const GLshort *c
   * @return void
   */
  Handle<Value> glx_glIndexsv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIndexubv
   *
   * @param const GLubyte *c
   * @return void
   */
  Handle<Value> glx_glIndexubv(const Arguments& args) {
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
  Handle<Value> glx_glColor3b(const Arguments& args) {
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
  Handle<Value> glx_glColor3d(const Arguments& args) {
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
  Handle<Value> glx_glColor3f(const Arguments& args) {
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
  Handle<Value> glx_glColor3i(const Arguments& args) {
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
  Handle<Value> glx_glColor3s(const Arguments& args) {
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
  Handle<Value> glx_glColor3ub(const Arguments& args) {
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
  Handle<Value> glx_glColor3ui(const Arguments& args) {
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
  Handle<Value> glx_glColor3us(const Arguments& args) {
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
  Handle<Value> glx_glColor4b(const Arguments& args) {
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
  Handle<Value> glx_glColor4d(const Arguments& args) {
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
  Handle<Value> glx_glColor4f(const Arguments& args) {
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
  Handle<Value> glx_glColor4i(const Arguments& args) {
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
  Handle<Value> glx_glColor4s(const Arguments& args) {
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
  Handle<Value> glx_glColor4ub(const Arguments& args) {
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
  Handle<Value> glx_glColor4ui(const Arguments& args) {
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
  Handle<Value> glx_glColor4us(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3bv
   *
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> glx_glColor3bv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glx_glColor3dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glx_glColor3fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glx_glColor3iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glx_glColor3sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3ubv
   *
   * @param const GLubyte *v
   * @return void
   */
  Handle<Value> glx_glColor3ubv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3uiv
   *
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> glx_glColor3uiv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor3usv
   *
   * @param const GLushort *v
   * @return void
   */
  Handle<Value> glx_glColor3usv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor4bv
   *
   * @param const GLbyte *v
   * @return void
   */
  Handle<Value> glx_glColor4bv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor4dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glx_glColor4dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor4fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glx_glColor4fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor4iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glx_glColor4iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor4sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glx_glColor4sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor4ubv
   *
   * @param const GLubyte *v
   * @return void
   */
  Handle<Value> glx_glColor4ubv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor4uiv
   *
   * @param const GLuint *v
   * @return void
   */
  Handle<Value> glx_glColor4uiv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glColor4usv
   *
   * @param const GLushort *v
   * @return void
   */
  Handle<Value> glx_glColor4usv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord1d
   *
   * @param GLdouble s
   * @return void
   */
  Handle<Value> glx_glTexCoord1d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord1f
   *
   * @param GLfloat s
   * @return void
   */
  Handle<Value> glx_glTexCoord1f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord1i
   *
   * @param GLint s
   * @return void
   */
  Handle<Value> glx_glTexCoord1i(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord1s
   *
   * @param GLshort s
   * @return void
   */
  Handle<Value> glx_glTexCoord1s(const Arguments& args) {
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
  Handle<Value> glx_glTexCoord2d(const Arguments& args) {
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
  Handle<Value> glx_glTexCoord2f(const Arguments& args) {
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
  Handle<Value> glx_glTexCoord2i(const Arguments& args) {
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
  Handle<Value> glx_glTexCoord2s(const Arguments& args) {
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
  Handle<Value> glx_glTexCoord3d(const Arguments& args) {
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
  Handle<Value> glx_glTexCoord3f(const Arguments& args) {
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
  Handle<Value> glx_glTexCoord3i(const Arguments& args) {
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
  Handle<Value> glx_glTexCoord3s(const Arguments& args) {
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
  Handle<Value> glx_glTexCoord4d(const Arguments& args) {
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
  Handle<Value> glx_glTexCoord4f(const Arguments& args) {
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
  Handle<Value> glx_glTexCoord4i(const Arguments& args) {
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
  Handle<Value> glx_glTexCoord4s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord1dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glx_glTexCoord1dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord1fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glx_glTexCoord1fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord1iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glx_glTexCoord1iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord1sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glx_glTexCoord1sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord2dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glx_glTexCoord2dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord2fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glx_glTexCoord2fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord2iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glx_glTexCoord2iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord2sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glx_glTexCoord2sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glx_glTexCoord3dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glx_glTexCoord3fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glx_glTexCoord3iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glx_glTexCoord3sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord4dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glx_glTexCoord4dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord4fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glx_glTexCoord4fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord4iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glx_glTexCoord4iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glTexCoord4sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glx_glTexCoord4sv(const Arguments& args) {
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
  Handle<Value> glx_glRasterPos2d(const Arguments& args) {
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
  Handle<Value> glx_glRasterPos2f(const Arguments& args) {
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
  Handle<Value> glx_glRasterPos2i(const Arguments& args) {
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
  Handle<Value> glx_glRasterPos2s(const Arguments& args) {
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
  Handle<Value> glx_glRasterPos3d(const Arguments& args) {
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
  Handle<Value> glx_glRasterPos3f(const Arguments& args) {
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
  Handle<Value> glx_glRasterPos3i(const Arguments& args) {
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
  Handle<Value> glx_glRasterPos3s(const Arguments& args) {
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
  Handle<Value> glx_glRasterPos4d(const Arguments& args) {
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
  Handle<Value> glx_glRasterPos4f(const Arguments& args) {
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
  Handle<Value> glx_glRasterPos4i(const Arguments& args) {
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
  Handle<Value> glx_glRasterPos4s(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos2dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glx_glRasterPos2dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos2fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glx_glRasterPos2fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos2iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glx_glRasterPos2iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos2sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glx_glRasterPos2sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos3dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glx_glRasterPos3dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos3fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glx_glRasterPos3fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos3iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glx_glRasterPos3iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos3sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glx_glRasterPos3sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos4dv
   *
   * @param const GLdouble *v
   * @return void
   */
  Handle<Value> glx_glRasterPos4dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos4fv
   *
   * @param const GLfloat *v
   * @return void
   */
  Handle<Value> glx_glRasterPos4fv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos4iv
   *
   * @param const GLint *v
   * @return void
   */
  Handle<Value> glx_glRasterPos4iv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glRasterPos4sv
   *
   * @param const GLshort *v
   * @return void
   */
  Handle<Value> glx_glRasterPos4sv(const Arguments& args) {
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
  Handle<Value> glx_glRectd(const Arguments& args) {
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
  Handle<Value> glx_glRectf(const Arguments& args) {
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
  Handle<Value> glx_glRecti(const Arguments& args) {
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
  Handle<Value> glx_glRects(const Arguments& args) {
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
  Handle<Value> glx_glRectdv(const Arguments& args) {
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
  Handle<Value> glx_glRectfv(const Arguments& args) {
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
  Handle<Value> glx_glRectiv(const Arguments& args) {
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
  Handle<Value> glx_glRectsv(const Arguments& args) {
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
  Handle<Value> glx_glVertexPointer(const Arguments& args) {
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
  Handle<Value> glx_glNormalPointer(const Arguments& args) {
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
  Handle<Value> glx_glColorPointer(const Arguments& args) {
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
  Handle<Value> glx_glIndexPointer(const Arguments& args) {
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
  Handle<Value> glx_glTexCoordPointer(const Arguments& args) {
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
  Handle<Value> glx_glEdgeFlagPointer(const Arguments& args) {
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
  Handle<Value> glx_glGetPointerv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glArrayElement
   *
   * @param GLint i
   * @return void
   */
  Handle<Value> glx_glArrayElement(const Arguments& args) {
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
  Handle<Value> glx_glDrawArrays(const Arguments& args) {
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
  Handle<Value> glx_glDrawElements(const Arguments& args) {
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
  Handle<Value> glx_glInterleavedArrays(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glShadeModel
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glx_glShadeModel(const Arguments& args) {
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
  Handle<Value> glx_glLightf(const Arguments& args) {
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
  Handle<Value> glx_glLighti(const Arguments& args) {
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
  Handle<Value> glx_glLightfv(const Arguments& args) {
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
  Handle<Value> glx_glLightiv(const Arguments& args) {
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
  Handle<Value> glx_glGetLightfv(const Arguments& args) {
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
  Handle<Value> glx_glGetLightiv(const Arguments& args) {
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
  Handle<Value> glx_glLightModelf(const Arguments& args) {
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
  Handle<Value> glx_glLightModeli(const Arguments& args) {
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
  Handle<Value> glx_glLightModelfv(const Arguments& args) {
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
  Handle<Value> glx_glLightModeliv(const Arguments& args) {
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
  Handle<Value> glx_glMaterialf(const Arguments& args) {
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
  Handle<Value> glx_glMateriali(const Arguments& args) {
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
  Handle<Value> glx_glMaterialfv(const Arguments& args) {
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
  Handle<Value> glx_glMaterialiv(const Arguments& args) {
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
  Handle<Value> glx_glGetMaterialfv(const Arguments& args) {
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
  Handle<Value> glx_glGetMaterialiv(const Arguments& args) {
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
  Handle<Value> glx_glColorMaterial(const Arguments& args) {
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
  Handle<Value> glx_glPixelZoom(const Arguments& args) {
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
  Handle<Value> glx_glPixelStoref(const Arguments& args) {
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
  Handle<Value> glx_glPixelStorei(const Arguments& args) {
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
  Handle<Value> glx_glPixelTransferf(const Arguments& args) {
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
  Handle<Value> glx_glPixelTransferi(const Arguments& args) {
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
  Handle<Value> glx_glPixelMapfv(const Arguments& args) {
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
  Handle<Value> glx_glPixelMapuiv(const Arguments& args) {
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
  Handle<Value> glx_glPixelMapusv(const Arguments& args) {
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
  Handle<Value> glx_glGetPixelMapfv(const Arguments& args) {
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
  Handle<Value> glx_glGetPixelMapuiv(const Arguments& args) {
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
  Handle<Value> glx_glGetPixelMapusv(const Arguments& args) {
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
  Handle<Value> glx_glBitmap(const Arguments& args) {
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
  Handle<Value> glx_glReadPixels(const Arguments& args) {
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
  Handle<Value> glx_glDrawPixels(const Arguments& args) {
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
  Handle<Value> glx_glCopyPixels(const Arguments& args) {
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
  Handle<Value> glx_glStencilFunc(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glStencilMask
   *
   * @param GLuint mask
   * @return void
   */
  Handle<Value> glx_glStencilMask(const Arguments& args) {
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
  Handle<Value> glx_glStencilOp(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glClearStencil
   *
   * @param GLint s
   * @return void
   */
  Handle<Value> glx_glClearStencil(const Arguments& args) {
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
  Handle<Value> glx_glTexGend(const Arguments& args) {
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
  Handle<Value> glx_glTexGenf(const Arguments& args) {
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
  Handle<Value> glx_glTexGeni(const Arguments& args) {
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
  Handle<Value> glx_glTexGendv(const Arguments& args) {
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
  Handle<Value> glx_glTexGenfv(const Arguments& args) {
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
  Handle<Value> glx_glTexGeniv(const Arguments& args) {
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
  Handle<Value> glx_glGetTexGendv(const Arguments& args) {
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
  Handle<Value> glx_glGetTexGenfv(const Arguments& args) {
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
  Handle<Value> glx_glGetTexGeniv(const Arguments& args) {
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
  Handle<Value> glx_glTexEnvf(const Arguments& args) {
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
  Handle<Value> glx_glTexEnvi(const Arguments& args) {
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
  Handle<Value> glx_glTexEnvfv(const Arguments& args) {
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
  Handle<Value> glx_glTexEnviv(const Arguments& args) {
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
  Handle<Value> glx_glGetTexEnvfv(const Arguments& args) {
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
  Handle<Value> glx_glGetTexEnviv(const Arguments& args) {
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
  Handle<Value> glx_glTexParameterf(const Arguments& args) {
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
  Handle<Value> glx_glTexParameteri(const Arguments& args) {
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
  Handle<Value> glx_glTexParameterfv(const Arguments& args) {
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
  Handle<Value> glx_glTexParameteriv(const Arguments& args) {
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
  Handle<Value> glx_glGetTexParameterfv(const Arguments& args) {
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
  Handle<Value> glx_glGetTexParameteriv(const Arguments& args) {
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
  Handle<Value> glx_glGetTexLevelParameterfv(const Arguments& args) {
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
  Handle<Value> glx_glGetTexLevelParameteriv(const Arguments& args) {
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
  Handle<Value> glx_glTexImage1D(const Arguments& args) {
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
  Handle<Value> glx_glTexImage2D(const Arguments& args) {
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
  Handle<Value> glx_glGetTexImage(const Arguments& args) {
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
  Handle<Value> glx_glGenTextures(const Arguments& args) {
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
  Handle<Value> glx_glDeleteTextures(const Arguments& args) {
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
  Handle<Value> glx_glBindTexture(const Arguments& args) {
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
  Handle<Value> glx_glPrioritizeTextures(const Arguments& args) {
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
  Handle<Value> glx_glAreTexturesResident(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glIsTexture
   *
   * @param GLuint texture
   * @return GLboolean
   */
  Handle<Value> glx_glIsTexture(const Arguments& args) {
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
  Handle<Value> glx_glTexSubImage1D(const Arguments& args) {
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
  Handle<Value> glx_glTexSubImage2D(const Arguments& args) {
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
  Handle<Value> glx_glCopyTexImage1D(const Arguments& args) {
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
  Handle<Value> glx_glCopyTexImage2D(const Arguments& args) {
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
  Handle<Value> glx_glCopyTexSubImage1D(const Arguments& args) {
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
  Handle<Value> glx_glCopyTexSubImage2D(const Arguments& args) {
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
  Handle<Value> glx_glMap1d(const Arguments& args) {
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
  Handle<Value> glx_glMap1f(const Arguments& args) {
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
  Handle<Value> glx_glMap2d(const Arguments& args) {
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
  Handle<Value> glx_glMap2f(const Arguments& args) {
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
  Handle<Value> glx_glGetMapdv(const Arguments& args) {
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
  Handle<Value> glx_glGetMapfv(const Arguments& args) {
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
  Handle<Value> glx_glGetMapiv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalCoord1d
   *
   * @param GLdouble u
   * @return void
   */
  Handle<Value> glx_glEvalCoord1d(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalCoord1f
   *
   * @param GLfloat u
   * @return void
   */
  Handle<Value> glx_glEvalCoord1f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalCoord1dv
   *
   * @param const GLdouble *u
   * @return void
   */
  Handle<Value> glx_glEvalCoord1dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalCoord1fv
   *
   * @param const GLfloat *u
   * @return void
   */
  Handle<Value> glx_glEvalCoord1fv(const Arguments& args) {
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
  Handle<Value> glx_glEvalCoord2d(const Arguments& args) {
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
  Handle<Value> glx_glEvalCoord2f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalCoord2dv
   *
   * @param const GLdouble *u
   * @return void
   */
  Handle<Value> glx_glEvalCoord2dv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalCoord2fv
   *
   * @param const GLfloat *u
   * @return void
   */
  Handle<Value> glx_glEvalCoord2fv(const Arguments& args) {
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
  Handle<Value> glx_glMapGrid1d(const Arguments& args) {
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
  Handle<Value> glx_glMapGrid1f(const Arguments& args) {
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
  Handle<Value> glx_glMapGrid2d(const Arguments& args) {
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
  Handle<Value> glx_glMapGrid2f(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glEvalPoint1
   *
   * @param GLint i
   * @return void
   */
  Handle<Value> glx_glEvalPoint1(const Arguments& args) {
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
  Handle<Value> glx_glEvalPoint2(const Arguments& args) {
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
  Handle<Value> glx_glEvalMesh1(const Arguments& args) {
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
  Handle<Value> glx_glEvalMesh2(const Arguments& args) {
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
  Handle<Value> glx_glFogf(const Arguments& args) {
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
  Handle<Value> glx_glFogi(const Arguments& args) {
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
  Handle<Value> glx_glFogfv(const Arguments& args) {
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
  Handle<Value> glx_glFogiv(const Arguments& args) {
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
  Handle<Value> glx_glFeedbackBuffer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPassThrough
   *
   * @param GLfloat token
   * @return void
   */
  Handle<Value> glx_glPassThrough(const Arguments& args) {
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
  Handle<Value> glx_glSelectBuffer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glInitNames
   *
   * @param void
   * @return void
   */
  Handle<Value> glx_glInitNames(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLoadName
   *
   * @param GLuint name
   * @return void
   */
  Handle<Value> glx_glLoadName(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPushName
   *
   * @param GLuint name
   * @return void
   */
  Handle<Value> glx_glPushName(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glPopName
   *
   * @param void
   * @return void
   */
  Handle<Value> glx_glPopName(const Arguments& args) {
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
  Handle<Value> glx_glDrawRangeElements(const Arguments& args) {
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
  Handle<Value> glx_glTexImage3D(const Arguments& args) {
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
  Handle<Value> glx_glTexSubImage3D(const Arguments& args) {
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
  Handle<Value> glx_glCopyTexSubImage3D(const Arguments& args) {
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
  Handle<Value> glx_glColorTable(const Arguments& args) {
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
  Handle<Value> glx_glColorSubTable(const Arguments& args) {
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
  Handle<Value> glx_glColorTableParameteriv(const Arguments& args) {
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
  Handle<Value> glx_glColorTableParameterfv(const Arguments& args) {
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
  Handle<Value> glx_glCopyColorSubTable(const Arguments& args) {
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
  Handle<Value> glx_glCopyColorTable(const Arguments& args) {
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
  Handle<Value> glx_glGetColorTable(const Arguments& args) {
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
  Handle<Value> glx_glGetColorTableParameterfv(const Arguments& args) {
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
  Handle<Value> glx_glGetColorTableParameteriv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glBlendEquation
   *
   * @param GLenum mode
   * @return void
   */
  Handle<Value> glx_glBlendEquation(const Arguments& args) {
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
  Handle<Value> glx_glBlendColor(const Arguments& args) {
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
  Handle<Value> glx_glHistogram(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glResetHistogram
   *
   * @param GLenum target
   * @return void
   */
  Handle<Value> glx_glResetHistogram(const Arguments& args) {
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
  Handle<Value> glx_glGetHistogram(const Arguments& args) {
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
  Handle<Value> glx_glGetHistogramParameterfv(const Arguments& args) {
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
  Handle<Value> glx_glGetHistogramParameteriv(const Arguments& args) {
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
  Handle<Value> glx_glMinmax(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glResetMinmax
   *
   * @param GLenum target
   * @return void
   */
  Handle<Value> glx_glResetMinmax(const Arguments& args) {
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
  Handle<Value> glx_glGetMinmax(const Arguments& args) {
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
  Handle<Value> glx_glGetMinmaxParameterfv(const Arguments& args) {
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
  Handle<Value> glx_glGetMinmaxParameteriv(const Arguments& args) {
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
  Handle<Value> glx_glConvolutionFilter1D(const Arguments& args) {
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
  Handle<Value> glx_glConvolutionFilter2D(const Arguments& args) {
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
  Handle<Value> glx_glConvolutionParameterf(const Arguments& args) {
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
  Handle<Value> glx_glConvolutionParameterfv(const Arguments& args) {
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
  Handle<Value> glx_glConvolutionParameteri(const Arguments& args) {
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
  Handle<Value> glx_glConvolutionParameteriv(const Arguments& args) {
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
  Handle<Value> glx_glCopyConvolutionFilter1D(const Arguments& args) {
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
  Handle<Value> glx_glCopyConvolutionFilter2D(const Arguments& args) {
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
  Handle<Value> glx_glGetConvolutionFilter(const Arguments& args) {
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
  Handle<Value> glx_glGetConvolutionParameterfv(const Arguments& args) {
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
  Handle<Value> glx_glGetConvolutionParameteriv(const Arguments& args) {
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
  Handle<Value> glx_glSeparableFilter2D(const Arguments& args) {
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
  Handle<Value> glx_glGetSeparableFilter(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glActiveTexture
   *
   * @param GLenum texture
   * @return void
   */
  Handle<Value> glx_glActiveTexture(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glClientActiveTexture
   *
   * @param GLenum texture
   * @return void
   */
  Handle<Value> glx_glClientActiveTexture(const Arguments& args) {
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
  Handle<Value> glx_glCompressedTexImage1D(const Arguments& args) {
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
  Handle<Value> glx_glCompressedTexImage2D(const Arguments& args) {
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
  Handle<Value> glx_glCompressedTexImage3D(const Arguments& args) {
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
  Handle<Value> glx_glCompressedTexSubImage1D(const Arguments& args) {
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
  Handle<Value> glx_glCompressedTexSubImage2D(const Arguments& args) {
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
  Handle<Value> glx_glCompressedTexSubImage3D(const Arguments& args) {
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
  Handle<Value> glx_glGetCompressedTexImage(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord1d(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord1dv(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord1f(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord1fv(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord1i(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord1iv(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord1s(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord1sv(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord2d(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord2dv(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord2f(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord2fv(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord2i(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord2iv(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord2s(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord2sv(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord3d(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord3dv(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord3f(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord3fv(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord3i(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord3iv(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord3s(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord3sv(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord4d(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord4dv(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord4f(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord4fv(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord4i(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord4iv(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord4s(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord4sv(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLoadTransposeMatrixd
   *
   * @param const GLdouble m[16]
   * @return void
   */
  Handle<Value> glx_glLoadTransposeMatrixd(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glLoadTransposeMatrixf
   *
   * @param const GLfloat m[16]
   * @return void
   */
  Handle<Value> glx_glLoadTransposeMatrixf(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultTransposeMatrixd
   *
   * @param const GLdouble m[16]
   * @return void
   */
  Handle<Value> glx_glMultTransposeMatrixd(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glMultTransposeMatrixf
   *
   * @param const GLfloat m[16]
   * @return void
   */
  Handle<Value> glx_glMultTransposeMatrixf(const Arguments& args) {
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
  Handle<Value> glx_glSampleCoverage(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glActiveTextureARB
   *
   * @param GLenum texture
   * @return void
   */
  Handle<Value> glx_glActiveTextureARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glClientActiveTextureARB
   *
   * @param GLenum texture
   * @return void
   */
  Handle<Value> glx_glClientActiveTextureARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord1dARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord1dvARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord1fARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord1fvARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord1iARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord1ivARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord1sARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord1svARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord2dARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord2dvARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord2fARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord2fvARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord2iARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord2ivARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord2sARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord2svARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord3dARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord3dvARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord3fARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord3fvARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord3iARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord3ivARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord3sARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord3svARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord4dARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord4dvARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord4fARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord4fvARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord4iARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord4ivARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord4sARB(const Arguments& args) {
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
  Handle<Value> glx_glMultiTexCoord4svARB(const Arguments& args) {
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
  Handle<Value> glx_glProgramCallbackMESA(const Arguments& args) {
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
  Handle<Value> glx_glGetProgramRegisterfvMESA(const Arguments& args) {
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
  Handle<Value> glx_glBlendEquationSeparateATI(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXCreateContext
   *
   * @param Display *dpy
   * @param XVisualInfo *vis
   * @param GLXContext shareList
   * @param int direct
   * @return GLXContext
   */
  Handle<Value> glx_glXCreateContext(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXDestroyContext
   *
   * @param Display *dpy
   * @param GLXContext ctx
   * @return void
   */
  Handle<Value> glx_glXDestroyContext(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXMakeCurrent
   *
   * @param Display *dpy
   * @param GLXDrawable drawable
   * @param GLXContext ctx
   * @return int
   */
  Handle<Value> glx_glXMakeCurrent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXCopyContext
   *
   * @param Display *dpy
   * @param GLXContext src
   * @param GLXContext dst
   * @param unsigned long mask
   * @return void
   */
  Handle<Value> glx_glXCopyContext(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXSwapBuffers
   *
   * @param Display *dpy
   * @param GLXDrawable drawable
   * @return void
   */
  Handle<Value> glx_glXSwapBuffers(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXCreateGLXPixmap
   *
   * @param Display *dpy
   * @param XVisualInfo *visual
   * @param Pixmap pixmap
   * @return GLXPixmap
   */
  Handle<Value> glx_glXCreateGLXPixmap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXDestroyGLXPixmap
   *
   * @param Display *dpy
   * @param GLXPixmap pixmap
   * @return void
   */
  Handle<Value> glx_glXDestroyGLXPixmap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXQueryExtension
   *
   * @param Display *dpy
   * @param int *errorb
   * @param int *event
   * @return int
   */
  Handle<Value> glx_glXQueryExtension(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXQueryVersion
   *
   * @param Display *dpy
   * @param int *maj
   * @param int *min
   * @return int
   */
  Handle<Value> glx_glXQueryVersion(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXIsDirect
   *
   * @param Display *dpy
   * @param GLXContext ctx
   * @return int
   */
  Handle<Value> glx_glXIsDirect(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXGetConfig
   *
   * @param Display *dpy
   * @param XVisualInfo *visual
   * @param int attrib
   * @param int *value
   * @return int
   */
  Handle<Value> glx_glXGetConfig(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXGetCurrentContext
   *
   * @param void
   * @return GLXContext
   */
  Handle<Value> glx_glXGetCurrentContext(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXGetCurrentDrawable
   *
   * @param void
   * @return GLXDrawable
   */
  Handle<Value> glx_glXGetCurrentDrawable(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXWaitGL
   *
   * @param void
   * @return void
   */
  Handle<Value> glx_glXWaitGL(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXWaitX
   *
   * @param void
   * @return void
   */
  Handle<Value> glx_glXWaitX(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXUseXFont
   *
   * @param Font font
   * @param int first
   * @param int count
   * @param int list
   * @return void
   */
  Handle<Value> glx_glXUseXFont(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXGetFBConfigAttrib
   *
   * @param Display *dpy
   * @param GLXFBConfig config
   * @param int attribute
   * @param int *value
   * @return int
   */
  Handle<Value> glx_glXGetFBConfigAttrib(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXCreateWindow
   *
   * @param Display *dpy
   * @param GLXFBConfig config
   * @param Window win
   * @param const int *attribList
   * @return GLXWindow
   */
  Handle<Value> glx_glXCreateWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXDestroyWindow
   *
   * @param Display *dpy
   * @param GLXWindow window
   * @return void
   */
  Handle<Value> glx_glXDestroyWindow(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXCreatePixmap
   *
   * @param Display *dpy
   * @param GLXFBConfig config
   * @param Pixmap pixmap
   * @param const int *attribList
   * @return GLXPixmap
   */
  Handle<Value> glx_glXCreatePixmap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXDestroyPixmap
   *
   * @param Display *dpy
   * @param GLXPixmap pixmap
   * @return void
   */
  Handle<Value> glx_glXDestroyPixmap(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXCreatePbuffer
   *
   * @param Display *dpy
   * @param GLXFBConfig config
   * @param const int *attribList
   * @return GLXPbuffer
   */
  Handle<Value> glx_glXCreatePbuffer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXDestroyPbuffer
   *
   * @param Display *dpy
   * @param GLXPbuffer pbuf
   * @return void
   */
  Handle<Value> glx_glXDestroyPbuffer(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXQueryDrawable
   *
   * @param Display *dpy
   * @param GLXDrawable draw
   * @param int attribute
   * @param unsigned int *value
   * @return void
   */
  Handle<Value> glx_glXQueryDrawable(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXCreateNewContext
   *
   * @param Display *dpy
   * @param GLXFBConfig config
   * @param int renderType
   * @param GLXContext shareList
   * @param int direct
   * @return GLXContext
   */
  Handle<Value> glx_glXCreateNewContext(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXMakeContextCurrent
   *
   * @param Display *dpy
   * @param GLXDrawable draw
   * @param GLXDrawable read
   * @param GLXContext ctx
   * @return int
   */
  Handle<Value> glx_glXMakeContextCurrent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXGetCurrentReadDrawable
   *
   * @param void
   * @return GLXDrawable
   */
  Handle<Value> glx_glXGetCurrentReadDrawable(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXQueryContext
   *
   * @param Display *dpy
   * @param GLXContext ctx
   * @param int attribute
   * @param int *value
   * @return int
   */
  Handle<Value> glx_glXQueryContext(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXSelectEvent
   *
   * @param Display *dpy
   * @param GLXDrawable drawable
   * @param unsigned long mask
   * @return void
   */
  Handle<Value> glx_glXSelectEvent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXGetSelectedEvent
   *
   * @param Display *dpy
   * @param GLXDrawable drawable
   * @param unsigned long *mask
   * @return void
   */
  Handle<Value> glx_glXGetSelectedEvent(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXFreeMemoryNV
   *
   * @param GLvoid *pointer
   * @return void
   */
  Handle<Value> glx_glXFreeMemoryNV(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXFreeMemoryMESA
   *
   * @param Display *dpy
   * @param int scrn
   * @param void *pointer
   * @return void
   */
  Handle<Value> glx_glXFreeMemoryMESA(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXGetMemoryOffsetMESA
   *
   * @param Display *dpy
   * @param int scrn
   * @param const void *pointer
   * @return GLuint
   */
  Handle<Value> glx_glXGetMemoryOffsetMESA(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXBindTexImageARB
   *
   * @param Display *dpy
   * @param GLXPbuffer pbuffer
   * @param int buffer
   * @return int
   */
  Handle<Value> glx_glXBindTexImageARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXReleaseTexImageARB
   *
   * @param Display *dpy
   * @param GLXPbuffer pbuffer
   * @param int buffer
   * @return int
   */
  Handle<Value> glx_glXReleaseTexImageARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXDrawableAttribARB
   *
   * @param Display *dpy
   * @param GLXDrawable draw
   * @param const int *attribList
   * @return int
   */
  Handle<Value> glx_glXDrawableAttribARB(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXGetFrameUsageMESA
   *
   * @param Display *dpy
   * @param GLXDrawable drawable
   * @param float *usage
   * @return int
   */
  Handle<Value> glx_glXGetFrameUsageMESA(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXBeginFrameTrackingMESA
   *
   * @param Display *dpy
   * @param GLXDrawable drawable
   * @return int
   */
  Handle<Value> glx_glXBeginFrameTrackingMESA(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXEndFrameTrackingMESA
   *
   * @param Display *dpy
   * @param GLXDrawable drawable
   * @return int
   */
  Handle<Value> glx_glXEndFrameTrackingMESA(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXQueryFrameTrackingMESA
   *
   * @param Display *dpy
   * @param GLXDrawable drawable
   * @param int64_t *swapCount
   * @param int64_t *missedFrames
   * @param float *lastMissedUsage
   * @return int
   */
  Handle<Value> glx_glXQueryFrameTrackingMESA(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


  /**
   * glXSwapIntervalMESA
   *
   * @param unsigned int interval
   * @return int
   */
  Handle<Value> glx_glXSwapIntervalMESA(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }


    Handle<Value> glx_glXGetSwapIntervalMESA(const Arguments& args) {
    HandleScope scope;

    return scope.Close(Number::New(123));
  }



  // Constructor
  glx::glx()
  {
  
  }

  void glx::Initialize(v8::Handle<v8::Object> target) {
    HandleScope scope;
   /* Local<FunctionTemplate> t = FunctionTemplate::New(New);
    
    t->InstanceTemplate()->SetInternalFieldCount(1);
    t->SetClassName(String::NewSymbol("glx"));
    t->Inherit(EventEmitter::constructor_template);
*/
    // Constants


   // target->Set(String::NewSymbol("glx"), t->GetFunction());

    // Expose this classes methods to v8/javascript
    Local<FunctionTemplate> _glx_XInitImage = FunctionTemplate::New(glx_XInitImage);
    target->Set(String::New("XInitImage"), _glx_XInitImage->GetFunction());

    Local<FunctionTemplate> _glx_XrmInitialize = FunctionTemplate::New(glx_XrmInitialize);
    target->Set(String::New("XrmInitialize"), _glx_XrmInitialize->GetFunction());

    Local<FunctionTemplate> _glx_XGetAtomNames = FunctionTemplate::New(glx_XGetAtomNames);
    target->Set(String::New("XGetAtomNames"), _glx_XGetAtomNames->GetFunction());

    Local<FunctionTemplate> _glx_XInternAtom = FunctionTemplate::New(glx_XInternAtom);
    target->Set(String::New("XInternAtom"), _glx_XInternAtom->GetFunction());

    Local<FunctionTemplate> _glx_XInternAtoms = FunctionTemplate::New(glx_XInternAtoms);
    target->Set(String::New("XInternAtoms"), _glx_XInternAtoms->GetFunction());

    Local<FunctionTemplate> _glx_XCopyColormapAndFree = FunctionTemplate::New(glx_XCopyColormapAndFree);
    target->Set(String::New("XCopyColormapAndFree"), _glx_XCopyColormapAndFree->GetFunction());

    Local<FunctionTemplate> _glx_XCreateColormap = FunctionTemplate::New(glx_XCreateColormap);
    target->Set(String::New("XCreateColormap"), _glx_XCreateColormap->GetFunction());

    Local<FunctionTemplate> _glx_XCreatePixmapCursor = FunctionTemplate::New(glx_XCreatePixmapCursor);
    target->Set(String::New("XCreatePixmapCursor"), _glx_XCreatePixmapCursor->GetFunction());

    Local<FunctionTemplate> _glx_XCreateGlyphCursor = FunctionTemplate::New(glx_XCreateGlyphCursor);
    target->Set(String::New("XCreateGlyphCursor"), _glx_XCreateGlyphCursor->GetFunction());

    Local<FunctionTemplate> _glx_XCreateFontCursor = FunctionTemplate::New(glx_XCreateFontCursor);
    target->Set(String::New("XCreateFontCursor"), _glx_XCreateFontCursor->GetFunction());

    Local<FunctionTemplate> _glx_XLoadFont = FunctionTemplate::New(glx_XLoadFont);
    target->Set(String::New("XLoadFont"), _glx_XLoadFont->GetFunction());

    Local<FunctionTemplate> _glx_XCreateGC = FunctionTemplate::New(glx_XCreateGC);
    target->Set(String::New("XCreateGC"), _glx_XCreateGC->GetFunction());

    Local<FunctionTemplate> _glx_XGContextFromGC = FunctionTemplate::New(glx_XGContextFromGC);
    target->Set(String::New("XGContextFromGC"), _glx_XGContextFromGC->GetFunction());

    Local<FunctionTemplate> _glx_XFlushGC = FunctionTemplate::New(glx_XFlushGC);
    target->Set(String::New("XFlushGC"), _glx_XFlushGC->GetFunction());

    Local<FunctionTemplate> _glx_XCreatePixmap = FunctionTemplate::New(glx_XCreatePixmap);
    target->Set(String::New("XCreatePixmap"), _glx_XCreatePixmap->GetFunction());

    Local<FunctionTemplate> _glx_XCreateBitmapFromData = FunctionTemplate::New(glx_XCreateBitmapFromData);
    target->Set(String::New("XCreateBitmapFromData"), _glx_XCreateBitmapFromData->GetFunction());

    Local<FunctionTemplate> _glx_XCreatePixmapFromBitmapData = FunctionTemplate::New(glx_XCreatePixmapFromBitmapData);
    target->Set(String::New("XCreatePixmapFromBitmapData"), _glx_XCreatePixmapFromBitmapData->GetFunction());

    Local<FunctionTemplate> _glx_XCreateSimpleWindow = FunctionTemplate::New(glx_XCreateSimpleWindow);
    target->Set(String::New("XCreateSimpleWindow"), _glx_XCreateSimpleWindow->GetFunction());

    Local<FunctionTemplate> _glx_XGetSelectionOwner = FunctionTemplate::New(glx_XGetSelectionOwner);
    target->Set(String::New("XGetSelectionOwner"), _glx_XGetSelectionOwner->GetFunction());

    Local<FunctionTemplate> _glx_XCreateWindow = FunctionTemplate::New(glx_XCreateWindow);
    target->Set(String::New("XCreateWindow"), _glx_XCreateWindow->GetFunction());

    Local<FunctionTemplate> _glx_XKeycodeToKeysym = FunctionTemplate::New(glx_XKeycodeToKeysym);
    target->Set(String::New("XKeycodeToKeysym"), _glx_XKeycodeToKeysym->GetFunction());

    Local<FunctionTemplate> _glx_XLookupKeysym = FunctionTemplate::New(glx_XLookupKeysym);
    target->Set(String::New("XLookupKeysym"), _glx_XLookupKeysym->GetFunction());

    Local<FunctionTemplate> _glx_XStringToKeysym = FunctionTemplate::New(glx_XStringToKeysym);
    target->Set(String::New("XStringToKeysym"), _glx_XStringToKeysym->GetFunction());

    Local<FunctionTemplate> _glx_XMaxRequestSize = FunctionTemplate::New(glx_XMaxRequestSize);
    target->Set(String::New("XMaxRequestSize"), _glx_XMaxRequestSize->GetFunction());

    Local<FunctionTemplate> _glx_XExtendedMaxRequestSize = FunctionTemplate::New(glx_XExtendedMaxRequestSize);
    target->Set(String::New("XExtendedMaxRequestSize"), _glx_XExtendedMaxRequestSize->GetFunction());

    Local<FunctionTemplate> _glx_XDisplayMotionBufferSize = FunctionTemplate::New(glx_XDisplayMotionBufferSize);
    target->Set(String::New("XDisplayMotionBufferSize"), _glx_XDisplayMotionBufferSize->GetFunction());

    Local<FunctionTemplate> _glx_XVisualIDFromVisual = FunctionTemplate::New(glx_XVisualIDFromVisual);
    target->Set(String::New("XVisualIDFromVisual"), _glx_XVisualIDFromVisual->GetFunction());

    Local<FunctionTemplate> _glx_XInitThreads = FunctionTemplate::New(glx_XInitThreads);
    target->Set(String::New("XInitThreads"), _glx_XInitThreads->GetFunction());

    Local<FunctionTemplate> _glx_XLockDisplay = FunctionTemplate::New(glx_XLockDisplay);
    target->Set(String::New("XLockDisplay"), _glx_XLockDisplay->GetFunction());

    Local<FunctionTemplate> _glx_XUnlockDisplay = FunctionTemplate::New(glx_XUnlockDisplay);
    target->Set(String::New("XUnlockDisplay"), _glx_XUnlockDisplay->GetFunction());

    Local<FunctionTemplate> _glx_XRootWindow = FunctionTemplate::New(glx_XRootWindow);
    target->Set(String::New("XRootWindow"), _glx_XRootWindow->GetFunction());

    Local<FunctionTemplate> _glx_XDefaultRootWindow = FunctionTemplate::New(glx_XDefaultRootWindow);
    target->Set(String::New("XDefaultRootWindow"), _glx_XDefaultRootWindow->GetFunction());

    Local<FunctionTemplate> _glx_XRootWindowOfScreen = FunctionTemplate::New(glx_XRootWindowOfScreen);
    target->Set(String::New("XRootWindowOfScreen"), _glx_XRootWindowOfScreen->GetFunction());

    Local<FunctionTemplate> _glx_XDefaultGC = FunctionTemplate::New(glx_XDefaultGC);
    target->Set(String::New("XDefaultGC"), _glx_XDefaultGC->GetFunction());

    Local<FunctionTemplate> _glx_XDefaultGCOfScreen = FunctionTemplate::New(glx_XDefaultGCOfScreen);
    target->Set(String::New("XDefaultGCOfScreen"), _glx_XDefaultGCOfScreen->GetFunction());

    Local<FunctionTemplate> _glx_XBlackPixel = FunctionTemplate::New(glx_XBlackPixel);
    target->Set(String::New("XBlackPixel"), _glx_XBlackPixel->GetFunction());

    Local<FunctionTemplate> _glx_XWhitePixel = FunctionTemplate::New(glx_XWhitePixel);
    target->Set(String::New("XWhitePixel"), _glx_XWhitePixel->GetFunction());

    Local<FunctionTemplate> _glx_XAllPlanes = FunctionTemplate::New(glx_XAllPlanes);
    target->Set(String::New("XAllPlanes"), _glx_XAllPlanes->GetFunction());

    Local<FunctionTemplate> _glx_XBlackPixelOfScreen = FunctionTemplate::New(glx_XBlackPixelOfScreen);
    target->Set(String::New("XBlackPixelOfScreen"), _glx_XBlackPixelOfScreen->GetFunction());

    Local<FunctionTemplate> _glx_XWhitePixelOfScreen = FunctionTemplate::New(glx_XWhitePixelOfScreen);
    target->Set(String::New("XWhitePixelOfScreen"), _glx_XWhitePixelOfScreen->GetFunction());

    Local<FunctionTemplate> _glx_XNextRequest = FunctionTemplate::New(glx_XNextRequest);
    target->Set(String::New("XNextRequest"), _glx_XNextRequest->GetFunction());

    Local<FunctionTemplate> _glx_XLastKnownRequestProcessed = FunctionTemplate::New(glx_XLastKnownRequestProcessed);
    target->Set(String::New("XLastKnownRequestProcessed"), _glx_XLastKnownRequestProcessed->GetFunction());

    Local<FunctionTemplate> _glx_XDefaultColormap = FunctionTemplate::New(glx_XDefaultColormap);
    target->Set(String::New("XDefaultColormap"), _glx_XDefaultColormap->GetFunction());

    Local<FunctionTemplate> _glx_XDefaultColormapOfScreen = FunctionTemplate::New(glx_XDefaultColormapOfScreen);
    target->Set(String::New("XDefaultColormapOfScreen"), _glx_XDefaultColormapOfScreen->GetFunction());

    Local<FunctionTemplate> _glx_XEventMaskOfScreen = FunctionTemplate::New(glx_XEventMaskOfScreen);
    target->Set(String::New("XEventMaskOfScreen"), _glx_XEventMaskOfScreen->GetFunction());

    Local<FunctionTemplate> _glx_XScreenNumberOfScreen = FunctionTemplate::New(glx_XScreenNumberOfScreen);
    target->Set(String::New("XScreenNumberOfScreen"), _glx_XScreenNumberOfScreen->GetFunction());

    Local<FunctionTemplate> _glx_XReconfigureWMWindow = FunctionTemplate::New(glx_XReconfigureWMWindow);
    target->Set(String::New("XReconfigureWMWindow"), _glx_XReconfigureWMWindow->GetFunction());

    Local<FunctionTemplate> _glx_XGetWMProtocols = FunctionTemplate::New(glx_XGetWMProtocols);
    target->Set(String::New("XGetWMProtocols"), _glx_XGetWMProtocols->GetFunction());

    Local<FunctionTemplate> _glx_XSetWMProtocols = FunctionTemplate::New(glx_XSetWMProtocols);
    target->Set(String::New("XSetWMProtocols"), _glx_XSetWMProtocols->GetFunction());

    Local<FunctionTemplate> _glx_XIconifyWindow = FunctionTemplate::New(glx_XIconifyWindow);
    target->Set(String::New("XIconifyWindow"), _glx_XIconifyWindow->GetFunction());

    Local<FunctionTemplate> _glx_XWithdrawWindow = FunctionTemplate::New(glx_XWithdrawWindow);
    target->Set(String::New("XWithdrawWindow"), _glx_XWithdrawWindow->GetFunction());

    Local<FunctionTemplate> _glx_XGetCommand = FunctionTemplate::New(glx_XGetCommand);
    target->Set(String::New("XGetCommand"), _glx_XGetCommand->GetFunction());

    Local<FunctionTemplate> _glx_XGetWMColormapWindows = FunctionTemplate::New(glx_XGetWMColormapWindows);
    target->Set(String::New("XGetWMColormapWindows"), _glx_XGetWMColormapWindows->GetFunction());

    Local<FunctionTemplate> _glx_XSetWMColormapWindows = FunctionTemplate::New(glx_XSetWMColormapWindows);
    target->Set(String::New("XSetWMColormapWindows"), _glx_XSetWMColormapWindows->GetFunction());

    Local<FunctionTemplate> _glx_XFreeStringList = FunctionTemplate::New(glx_XFreeStringList);
    target->Set(String::New("XFreeStringList"), _glx_XFreeStringList->GetFunction());

    Local<FunctionTemplate> _glx_XSetTransientForHint = FunctionTemplate::New(glx_XSetTransientForHint);
    target->Set(String::New("XSetTransientForHint"), _glx_XSetTransientForHint->GetFunction());

    Local<FunctionTemplate> _glx_XActivateScreenSaver = FunctionTemplate::New(glx_XActivateScreenSaver);
    target->Set(String::New("XActivateScreenSaver"), _glx_XActivateScreenSaver->GetFunction());

    Local<FunctionTemplate> _glx_XAddHost = FunctionTemplate::New(glx_XAddHost);
    target->Set(String::New("XAddHost"), _glx_XAddHost->GetFunction());

    Local<FunctionTemplate> _glx_XAddHosts = FunctionTemplate::New(glx_XAddHosts);
    target->Set(String::New("XAddHosts"), _glx_XAddHosts->GetFunction());

    Local<FunctionTemplate> _glx_XAddToExtensionList = FunctionTemplate::New(glx_XAddToExtensionList);
    target->Set(String::New("XAddToExtensionList"), _glx_XAddToExtensionList->GetFunction());

    Local<FunctionTemplate> _glx_XAddToSaveSet = FunctionTemplate::New(glx_XAddToSaveSet);
    target->Set(String::New("XAddToSaveSet"), _glx_XAddToSaveSet->GetFunction());

    Local<FunctionTemplate> _glx_XAllocColor = FunctionTemplate::New(glx_XAllocColor);
    target->Set(String::New("XAllocColor"), _glx_XAllocColor->GetFunction());

    Local<FunctionTemplate> _glx_XAllocColorCells = FunctionTemplate::New(glx_XAllocColorCells);
    target->Set(String::New("XAllocColorCells"), _glx_XAllocColorCells->GetFunction());

    Local<FunctionTemplate> _glx_XAllocColorPlanes = FunctionTemplate::New(glx_XAllocColorPlanes);
    target->Set(String::New("XAllocColorPlanes"), _glx_XAllocColorPlanes->GetFunction());

    Local<FunctionTemplate> _glx_XAllocNamedColor = FunctionTemplate::New(glx_XAllocNamedColor);
    target->Set(String::New("XAllocNamedColor"), _glx_XAllocNamedColor->GetFunction());

    Local<FunctionTemplate> _glx_XAllowEvents = FunctionTemplate::New(glx_XAllowEvents);
    target->Set(String::New("XAllowEvents"), _glx_XAllowEvents->GetFunction());

    Local<FunctionTemplate> _glx_XAutoRepeatOff = FunctionTemplate::New(glx_XAutoRepeatOff);
    target->Set(String::New("XAutoRepeatOff"), _glx_XAutoRepeatOff->GetFunction());

    Local<FunctionTemplate> _glx_XAutoRepeatOn = FunctionTemplate::New(glx_XAutoRepeatOn);
    target->Set(String::New("XAutoRepeatOn"), _glx_XAutoRepeatOn->GetFunction());

    Local<FunctionTemplate> _glx_XBell = FunctionTemplate::New(glx_XBell);
    target->Set(String::New("XBell"), _glx_XBell->GetFunction());

    Local<FunctionTemplate> _glx_XBitmapBitOrder = FunctionTemplate::New(glx_XBitmapBitOrder);
    target->Set(String::New("XBitmapBitOrder"), _glx_XBitmapBitOrder->GetFunction());

    Local<FunctionTemplate> _glx_XBitmapPad = FunctionTemplate::New(glx_XBitmapPad);
    target->Set(String::New("XBitmapPad"), _glx_XBitmapPad->GetFunction());

    Local<FunctionTemplate> _glx_XBitmapUnit = FunctionTemplate::New(glx_XBitmapUnit);
    target->Set(String::New("XBitmapUnit"), _glx_XBitmapUnit->GetFunction());

    Local<FunctionTemplate> _glx_XCellsOfScreen = FunctionTemplate::New(glx_XCellsOfScreen);
    target->Set(String::New("XCellsOfScreen"), _glx_XCellsOfScreen->GetFunction());

    Local<FunctionTemplate> _glx_XChangeActivePointerGrab = FunctionTemplate::New(glx_XChangeActivePointerGrab);
    target->Set(String::New("XChangeActivePointerGrab"), _glx_XChangeActivePointerGrab->GetFunction());

    Local<FunctionTemplate> _glx_XChangeGC = FunctionTemplate::New(glx_XChangeGC);
    target->Set(String::New("XChangeGC"), _glx_XChangeGC->GetFunction());

    Local<FunctionTemplate> _glx_XChangeKeyboardControl = FunctionTemplate::New(glx_XChangeKeyboardControl);
    target->Set(String::New("XChangeKeyboardControl"), _glx_XChangeKeyboardControl->GetFunction());

    Local<FunctionTemplate> _glx_XChangeKeyboardMapping = FunctionTemplate::New(glx_XChangeKeyboardMapping);
    target->Set(String::New("XChangeKeyboardMapping"), _glx_XChangeKeyboardMapping->GetFunction());

    Local<FunctionTemplate> _glx_XChangePointerControl = FunctionTemplate::New(glx_XChangePointerControl);
    target->Set(String::New("XChangePointerControl"), _glx_XChangePointerControl->GetFunction());

    Local<FunctionTemplate> _glx_XChangeProperty = FunctionTemplate::New(glx_XChangeProperty);
    target->Set(String::New("XChangeProperty"), _glx_XChangeProperty->GetFunction());

    Local<FunctionTemplate> _glx_XChangeSaveSet = FunctionTemplate::New(glx_XChangeSaveSet);
    target->Set(String::New("XChangeSaveSet"), _glx_XChangeSaveSet->GetFunction());

    Local<FunctionTemplate> _glx_XChangeWindowAttributes = FunctionTemplate::New(glx_XChangeWindowAttributes);
    target->Set(String::New("XChangeWindowAttributes"), _glx_XChangeWindowAttributes->GetFunction());

    Local<FunctionTemplate> _glx_XCheckIfEvent = FunctionTemplate::New(glx_XCheckIfEvent);
    target->Set(String::New("XCheckIfEvent"), _glx_XCheckIfEvent->GetFunction());

    Local<FunctionTemplate> _glx_XCheckMaskEvent = FunctionTemplate::New(glx_XCheckMaskEvent);
    target->Set(String::New("XCheckMaskEvent"), _glx_XCheckMaskEvent->GetFunction());

    Local<FunctionTemplate> _glx_XCheckTypedEvent = FunctionTemplate::New(glx_XCheckTypedEvent);
    target->Set(String::New("XCheckTypedEvent"), _glx_XCheckTypedEvent->GetFunction());

    Local<FunctionTemplate> _glx_XCheckTypedWindowEvent = FunctionTemplate::New(glx_XCheckTypedWindowEvent);
    target->Set(String::New("XCheckTypedWindowEvent"), _glx_XCheckTypedWindowEvent->GetFunction());

    Local<FunctionTemplate> _glx_XCheckWindowEvent = FunctionTemplate::New(glx_XCheckWindowEvent);
    target->Set(String::New("XCheckWindowEvent"), _glx_XCheckWindowEvent->GetFunction());

    Local<FunctionTemplate> _glx_XCirculateSubwindows = FunctionTemplate::New(glx_XCirculateSubwindows);
    target->Set(String::New("XCirculateSubwindows"), _glx_XCirculateSubwindows->GetFunction());

    Local<FunctionTemplate> _glx_XCirculateSubwindowsDown = FunctionTemplate::New(glx_XCirculateSubwindowsDown);
    target->Set(String::New("XCirculateSubwindowsDown"), _glx_XCirculateSubwindowsDown->GetFunction());

    Local<FunctionTemplate> _glx_XCirculateSubwindowsUp = FunctionTemplate::New(glx_XCirculateSubwindowsUp);
    target->Set(String::New("XCirculateSubwindowsUp"), _glx_XCirculateSubwindowsUp->GetFunction());

    Local<FunctionTemplate> _glx_XClearArea = FunctionTemplate::New(glx_XClearArea);
    target->Set(String::New("XClearArea"), _glx_XClearArea->GetFunction());

    Local<FunctionTemplate> _glx_XClearWindow = FunctionTemplate::New(glx_XClearWindow);
    target->Set(String::New("XClearWindow"), _glx_XClearWindow->GetFunction());

    Local<FunctionTemplate> _glx_XCloseDisplay = FunctionTemplate::New(glx_XCloseDisplay);
    target->Set(String::New("XCloseDisplay"), _glx_XCloseDisplay->GetFunction());

    Local<FunctionTemplate> _glx_XConfigureWindow = FunctionTemplate::New(glx_XConfigureWindow);
    target->Set(String::New("XConfigureWindow"), _glx_XConfigureWindow->GetFunction());

    Local<FunctionTemplate> _glx_XConnectionNumber = FunctionTemplate::New(glx_XConnectionNumber);
    target->Set(String::New("XConnectionNumber"), _glx_XConnectionNumber->GetFunction());

    Local<FunctionTemplate> _glx_XConvertSelection = FunctionTemplate::New(glx_XConvertSelection);
    target->Set(String::New("XConvertSelection"), _glx_XConvertSelection->GetFunction());

    Local<FunctionTemplate> _glx_XCopyArea = FunctionTemplate::New(glx_XCopyArea);
    target->Set(String::New("XCopyArea"), _glx_XCopyArea->GetFunction());

    Local<FunctionTemplate> _glx_XCopyGC = FunctionTemplate::New(glx_XCopyGC);
    target->Set(String::New("XCopyGC"), _glx_XCopyGC->GetFunction());

    Local<FunctionTemplate> _glx_XCopyPlane = FunctionTemplate::New(glx_XCopyPlane);
    target->Set(String::New("XCopyPlane"), _glx_XCopyPlane->GetFunction());

    Local<FunctionTemplate> _glx_XDefaultDepth = FunctionTemplate::New(glx_XDefaultDepth);
    target->Set(String::New("XDefaultDepth"), _glx_XDefaultDepth->GetFunction());

    Local<FunctionTemplate> _glx_XDefaultDepthOfScreen = FunctionTemplate::New(glx_XDefaultDepthOfScreen);
    target->Set(String::New("XDefaultDepthOfScreen"), _glx_XDefaultDepthOfScreen->GetFunction());

    Local<FunctionTemplate> _glx_XDefaultScreen = FunctionTemplate::New(glx_XDefaultScreen);
    target->Set(String::New("XDefaultScreen"), _glx_XDefaultScreen->GetFunction());

    Local<FunctionTemplate> _glx_XDefineCursor = FunctionTemplate::New(glx_XDefineCursor);
    target->Set(String::New("XDefineCursor"), _glx_XDefineCursor->GetFunction());

    Local<FunctionTemplate> _glx_XDeleteProperty = FunctionTemplate::New(glx_XDeleteProperty);
    target->Set(String::New("XDeleteProperty"), _glx_XDeleteProperty->GetFunction());

    Local<FunctionTemplate> _glx_XDestroyWindow = FunctionTemplate::New(glx_XDestroyWindow);
    target->Set(String::New("XDestroyWindow"), _glx_XDestroyWindow->GetFunction());

    Local<FunctionTemplate> _glx_XDestroySubwindows = FunctionTemplate::New(glx_XDestroySubwindows);
    target->Set(String::New("XDestroySubwindows"), _glx_XDestroySubwindows->GetFunction());

    Local<FunctionTemplate> _glx_XDoesBackingStore = FunctionTemplate::New(glx_XDoesBackingStore);
    target->Set(String::New("XDoesBackingStore"), _glx_XDoesBackingStore->GetFunction());

    Local<FunctionTemplate> _glx_XDoesSaveUnders = FunctionTemplate::New(glx_XDoesSaveUnders);
    target->Set(String::New("XDoesSaveUnders"), _glx_XDoesSaveUnders->GetFunction());

    Local<FunctionTemplate> _glx_XDisableAccessControl = FunctionTemplate::New(glx_XDisableAccessControl);
    target->Set(String::New("XDisableAccessControl"), _glx_XDisableAccessControl->GetFunction());

    Local<FunctionTemplate> _glx_XDisplayCells = FunctionTemplate::New(glx_XDisplayCells);
    target->Set(String::New("XDisplayCells"), _glx_XDisplayCells->GetFunction());

    Local<FunctionTemplate> _glx_XDisplayHeight = FunctionTemplate::New(glx_XDisplayHeight);
    target->Set(String::New("XDisplayHeight"), _glx_XDisplayHeight->GetFunction());

    Local<FunctionTemplate> _glx_XDisplayHeightMM = FunctionTemplate::New(glx_XDisplayHeightMM);
    target->Set(String::New("XDisplayHeightMM"), _glx_XDisplayHeightMM->GetFunction());

    Local<FunctionTemplate> _glx_XDisplayKeycodes = FunctionTemplate::New(glx_XDisplayKeycodes);
    target->Set(String::New("XDisplayKeycodes"), _glx_XDisplayKeycodes->GetFunction());

    Local<FunctionTemplate> _glx_XDisplayPlanes = FunctionTemplate::New(glx_XDisplayPlanes);
    target->Set(String::New("XDisplayPlanes"), _glx_XDisplayPlanes->GetFunction());

    Local<FunctionTemplate> _glx_XDisplayWidth = FunctionTemplate::New(glx_XDisplayWidth);
    target->Set(String::New("XDisplayWidth"), _glx_XDisplayWidth->GetFunction());

    Local<FunctionTemplate> _glx_XDisplayWidthMM = FunctionTemplate::New(glx_XDisplayWidthMM);
    target->Set(String::New("XDisplayWidthMM"), _glx_XDisplayWidthMM->GetFunction());

    Local<FunctionTemplate> _glx_XDrawArc = FunctionTemplate::New(glx_XDrawArc);
    target->Set(String::New("XDrawArc"), _glx_XDrawArc->GetFunction());

    Local<FunctionTemplate> _glx_XDrawArcs = FunctionTemplate::New(glx_XDrawArcs);
    target->Set(String::New("XDrawArcs"), _glx_XDrawArcs->GetFunction());

    Local<FunctionTemplate> _glx_XDrawImageString = FunctionTemplate::New(glx_XDrawImageString);
    target->Set(String::New("XDrawImageString"), _glx_XDrawImageString->GetFunction());

    Local<FunctionTemplate> _glx_XDrawImageString16 = FunctionTemplate::New(glx_XDrawImageString16);
    target->Set(String::New("XDrawImageString16"), _glx_XDrawImageString16->GetFunction());

    Local<FunctionTemplate> _glx_XDrawLine = FunctionTemplate::New(glx_XDrawLine);
    target->Set(String::New("XDrawLine"), _glx_XDrawLine->GetFunction());

    Local<FunctionTemplate> _glx_XDrawLines = FunctionTemplate::New(glx_XDrawLines);
    target->Set(String::New("XDrawLines"), _glx_XDrawLines->GetFunction());

    Local<FunctionTemplate> _glx_XDrawPoint = FunctionTemplate::New(glx_XDrawPoint);
    target->Set(String::New("XDrawPoint"), _glx_XDrawPoint->GetFunction());

    Local<FunctionTemplate> _glx_XDrawPoints = FunctionTemplate::New(glx_XDrawPoints);
    target->Set(String::New("XDrawPoints"), _glx_XDrawPoints->GetFunction());

    Local<FunctionTemplate> _glx_XDrawRectangle = FunctionTemplate::New(glx_XDrawRectangle);
    target->Set(String::New("XDrawRectangle"), _glx_XDrawRectangle->GetFunction());

    Local<FunctionTemplate> _glx_XDrawRectangles = FunctionTemplate::New(glx_XDrawRectangles);
    target->Set(String::New("XDrawRectangles"), _glx_XDrawRectangles->GetFunction());

    Local<FunctionTemplate> _glx_XDrawSegments = FunctionTemplate::New(glx_XDrawSegments);
    target->Set(String::New("XDrawSegments"), _glx_XDrawSegments->GetFunction());

    Local<FunctionTemplate> _glx_XDrawString = FunctionTemplate::New(glx_XDrawString);
    target->Set(String::New("XDrawString"), _glx_XDrawString->GetFunction());

    Local<FunctionTemplate> _glx_XDrawString16 = FunctionTemplate::New(glx_XDrawString16);
    target->Set(String::New("XDrawString16"), _glx_XDrawString16->GetFunction());

    Local<FunctionTemplate> _glx_XDrawText = FunctionTemplate::New(glx_XDrawText);
    target->Set(String::New("XDrawText"), _glx_XDrawText->GetFunction());

    Local<FunctionTemplate> _glx_XDrawText16 = FunctionTemplate::New(glx_XDrawText16);
    target->Set(String::New("XDrawText16"), _glx_XDrawText16->GetFunction());

    Local<FunctionTemplate> _glx_XEnableAccessControl = FunctionTemplate::New(glx_XEnableAccessControl);
    target->Set(String::New("XEnableAccessControl"), _glx_XEnableAccessControl->GetFunction());

    Local<FunctionTemplate> _glx_XEventsQueued = FunctionTemplate::New(glx_XEventsQueued);
    target->Set(String::New("XEventsQueued"), _glx_XEventsQueued->GetFunction());

    Local<FunctionTemplate> _glx_XFetchName = FunctionTemplate::New(glx_XFetchName);
    target->Set(String::New("XFetchName"), _glx_XFetchName->GetFunction());

    Local<FunctionTemplate> _glx_XFillArc = FunctionTemplate::New(glx_XFillArc);
    target->Set(String::New("XFillArc"), _glx_XFillArc->GetFunction());

    Local<FunctionTemplate> _glx_XFillArcs = FunctionTemplate::New(glx_XFillArcs);
    target->Set(String::New("XFillArcs"), _glx_XFillArcs->GetFunction());

    Local<FunctionTemplate> _glx_XFillPolygon = FunctionTemplate::New(glx_XFillPolygon);
    target->Set(String::New("XFillPolygon"), _glx_XFillPolygon->GetFunction());

    Local<FunctionTemplate> _glx_XFillRectangle = FunctionTemplate::New(glx_XFillRectangle);
    target->Set(String::New("XFillRectangle"), _glx_XFillRectangle->GetFunction());

    Local<FunctionTemplate> _glx_XFillRectangles = FunctionTemplate::New(glx_XFillRectangles);
    target->Set(String::New("XFillRectangles"), _glx_XFillRectangles->GetFunction());

    Local<FunctionTemplate> _glx_XFlush = FunctionTemplate::New(glx_XFlush);
    target->Set(String::New("XFlush"), _glx_XFlush->GetFunction());

    Local<FunctionTemplate> _glx_XForceScreenSaver = FunctionTemplate::New(glx_XForceScreenSaver);
    target->Set(String::New("XForceScreenSaver"), _glx_XForceScreenSaver->GetFunction());

    Local<FunctionTemplate> _glx_XFree = FunctionTemplate::New(glx_XFree);
    target->Set(String::New("XFree"), _glx_XFree->GetFunction());

    Local<FunctionTemplate> _glx_XFreeColormap = FunctionTemplate::New(glx_XFreeColormap);
    target->Set(String::New("XFreeColormap"), _glx_XFreeColormap->GetFunction());

    Local<FunctionTemplate> _glx_XFreeColors = FunctionTemplate::New(glx_XFreeColors);
    target->Set(String::New("XFreeColors"), _glx_XFreeColors->GetFunction());

    Local<FunctionTemplate> _glx_XFreeCursor = FunctionTemplate::New(glx_XFreeCursor);
    target->Set(String::New("XFreeCursor"), _glx_XFreeCursor->GetFunction());

    Local<FunctionTemplate> _glx_XFreeExtensionList = FunctionTemplate::New(glx_XFreeExtensionList);
    target->Set(String::New("XFreeExtensionList"), _glx_XFreeExtensionList->GetFunction());

    Local<FunctionTemplate> _glx_XFreeFont = FunctionTemplate::New(glx_XFreeFont);
    target->Set(String::New("XFreeFont"), _glx_XFreeFont->GetFunction());

    Local<FunctionTemplate> _glx_XFreeFontInfo = FunctionTemplate::New(glx_XFreeFontInfo);
    target->Set(String::New("XFreeFontInfo"), _glx_XFreeFontInfo->GetFunction());

    Local<FunctionTemplate> _glx_XFreeFontNames = FunctionTemplate::New(glx_XFreeFontNames);
    target->Set(String::New("XFreeFontNames"), _glx_XFreeFontNames->GetFunction());

    Local<FunctionTemplate> _glx_XFreeFontPath = FunctionTemplate::New(glx_XFreeFontPath);
    target->Set(String::New("XFreeFontPath"), _glx_XFreeFontPath->GetFunction());

    Local<FunctionTemplate> _glx_XFreeGC = FunctionTemplate::New(glx_XFreeGC);
    target->Set(String::New("XFreeGC"), _glx_XFreeGC->GetFunction());

    Local<FunctionTemplate> _glx_XFreeModifiermap = FunctionTemplate::New(glx_XFreeModifiermap);
    target->Set(String::New("XFreeModifiermap"), _glx_XFreeModifiermap->GetFunction());

    Local<FunctionTemplate> _glx_XFreePixmap = FunctionTemplate::New(glx_XFreePixmap);
    target->Set(String::New("XFreePixmap"), _glx_XFreePixmap->GetFunction());

    Local<FunctionTemplate> _glx_XGeometry = FunctionTemplate::New(glx_XGeometry);
    target->Set(String::New("XGeometry"), _glx_XGeometry->GetFunction());

    Local<FunctionTemplate> _glx_XGetErrorDatabaseText = FunctionTemplate::New(glx_XGetErrorDatabaseText);
    target->Set(String::New("XGetErrorDatabaseText"), _glx_XGetErrorDatabaseText->GetFunction());

    Local<FunctionTemplate> _glx_XGetErrorText = FunctionTemplate::New(glx_XGetErrorText);
    target->Set(String::New("XGetErrorText"), _glx_XGetErrorText->GetFunction());

    Local<FunctionTemplate> _glx_XGetFontProperty = FunctionTemplate::New(glx_XGetFontProperty);
    target->Set(String::New("XGetFontProperty"), _glx_XGetFontProperty->GetFunction());

    Local<FunctionTemplate> _glx_XGetGCValues = FunctionTemplate::New(glx_XGetGCValues);
    target->Set(String::New("XGetGCValues"), _glx_XGetGCValues->GetFunction());

    Local<FunctionTemplate> _glx_XGetGeometry = FunctionTemplate::New(glx_XGetGeometry);
    target->Set(String::New("XGetGeometry"), _glx_XGetGeometry->GetFunction());

    Local<FunctionTemplate> _glx_XGetIconName = FunctionTemplate::New(glx_XGetIconName);
    target->Set(String::New("XGetIconName"), _glx_XGetIconName->GetFunction());

    Local<FunctionTemplate> _glx_XGetInputFocus = FunctionTemplate::New(glx_XGetInputFocus);
    target->Set(String::New("XGetInputFocus"), _glx_XGetInputFocus->GetFunction());

    Local<FunctionTemplate> _glx_XGetKeyboardControl = FunctionTemplate::New(glx_XGetKeyboardControl);
    target->Set(String::New("XGetKeyboardControl"), _glx_XGetKeyboardControl->GetFunction());

    Local<FunctionTemplate> _glx_XGetPointerControl = FunctionTemplate::New(glx_XGetPointerControl);
    target->Set(String::New("XGetPointerControl"), _glx_XGetPointerControl->GetFunction());

    Local<FunctionTemplate> _glx_XGetPointerMapping = FunctionTemplate::New(glx_XGetPointerMapping);
    target->Set(String::New("XGetPointerMapping"), _glx_XGetPointerMapping->GetFunction());

    Local<FunctionTemplate> _glx_XGetScreenSaver = FunctionTemplate::New(glx_XGetScreenSaver);
    target->Set(String::New("XGetScreenSaver"), _glx_XGetScreenSaver->GetFunction());

    Local<FunctionTemplate> _glx_XGetTransientForHint = FunctionTemplate::New(glx_XGetTransientForHint);
    target->Set(String::New("XGetTransientForHint"), _glx_XGetTransientForHint->GetFunction());

    Local<FunctionTemplate> _glx_XGetWindowProperty = FunctionTemplate::New(glx_XGetWindowProperty);
    target->Set(String::New("XGetWindowProperty"), _glx_XGetWindowProperty->GetFunction());

    Local<FunctionTemplate> _glx_XGetWindowAttributes = FunctionTemplate::New(glx_XGetWindowAttributes);
    target->Set(String::New("XGetWindowAttributes"), _glx_XGetWindowAttributes->GetFunction());

    Local<FunctionTemplate> _glx_XGrabButton = FunctionTemplate::New(glx_XGrabButton);
    target->Set(String::New("XGrabButton"), _glx_XGrabButton->GetFunction());

    Local<FunctionTemplate> _glx_XGrabKey = FunctionTemplate::New(glx_XGrabKey);
    target->Set(String::New("XGrabKey"), _glx_XGrabKey->GetFunction());

    Local<FunctionTemplate> _glx_XGrabKeyboard = FunctionTemplate::New(glx_XGrabKeyboard);
    target->Set(String::New("XGrabKeyboard"), _glx_XGrabKeyboard->GetFunction());

    Local<FunctionTemplate> _glx_XGrabPointer = FunctionTemplate::New(glx_XGrabPointer);
    target->Set(String::New("XGrabPointer"), _glx_XGrabPointer->GetFunction());

    Local<FunctionTemplate> _glx_XGrabServer = FunctionTemplate::New(glx_XGrabServer);
    target->Set(String::New("XGrabServer"), _glx_XGrabServer->GetFunction());

    Local<FunctionTemplate> _glx_XHeightMMOfScreen = FunctionTemplate::New(glx_XHeightMMOfScreen);
    target->Set(String::New("XHeightMMOfScreen"), _glx_XHeightMMOfScreen->GetFunction());

    Local<FunctionTemplate> _glx_XHeightOfScreen = FunctionTemplate::New(glx_XHeightOfScreen);
    target->Set(String::New("XHeightOfScreen"), _glx_XHeightOfScreen->GetFunction());

    Local<FunctionTemplate> _glx_XIfEvent = FunctionTemplate::New(glx_XIfEvent);
    target->Set(String::New("XIfEvent"), _glx_XIfEvent->GetFunction());

    Local<FunctionTemplate> _glx_XImageByteOrder = FunctionTemplate::New(glx_XImageByteOrder);
    target->Set(String::New("XImageByteOrder"), _glx_XImageByteOrder->GetFunction());

    Local<FunctionTemplate> _glx_XInstallColormap = FunctionTemplate::New(glx_XInstallColormap);
    target->Set(String::New("XInstallColormap"), _glx_XInstallColormap->GetFunction());

    Local<FunctionTemplate> _glx_XKeysymToKeycode = FunctionTemplate::New(glx_XKeysymToKeycode);
    target->Set(String::New("XKeysymToKeycode"), _glx_XKeysymToKeycode->GetFunction());

    Local<FunctionTemplate> _glx_XKillClient = FunctionTemplate::New(glx_XKillClient);
    target->Set(String::New("XKillClient"), _glx_XKillClient->GetFunction());

    Local<FunctionTemplate> _glx_XLookupColor = FunctionTemplate::New(glx_XLookupColor);
    target->Set(String::New("XLookupColor"), _glx_XLookupColor->GetFunction());

    Local<FunctionTemplate> _glx_XLowerWindow = FunctionTemplate::New(glx_XLowerWindow);
    target->Set(String::New("XLowerWindow"), _glx_XLowerWindow->GetFunction());

    Local<FunctionTemplate> _glx_XMapRaised = FunctionTemplate::New(glx_XMapRaised);
    target->Set(String::New("XMapRaised"), _glx_XMapRaised->GetFunction());

    Local<FunctionTemplate> _glx_XMapSubwindows = FunctionTemplate::New(glx_XMapSubwindows);
    target->Set(String::New("XMapSubwindows"), _glx_XMapSubwindows->GetFunction());

    Local<FunctionTemplate> _glx_XMapWindow = FunctionTemplate::New(glx_XMapWindow);
    target->Set(String::New("XMapWindow"), _glx_XMapWindow->GetFunction());

    Local<FunctionTemplate> _glx_XMaskEvent = FunctionTemplate::New(glx_XMaskEvent);
    target->Set(String::New("XMaskEvent"), _glx_XMaskEvent->GetFunction());

    Local<FunctionTemplate> _glx_XMaxCmapsOfScreen = FunctionTemplate::New(glx_XMaxCmapsOfScreen);
    target->Set(String::New("XMaxCmapsOfScreen"), _glx_XMaxCmapsOfScreen->GetFunction());

    Local<FunctionTemplate> _glx_XMinCmapsOfScreen = FunctionTemplate::New(glx_XMinCmapsOfScreen);
    target->Set(String::New("XMinCmapsOfScreen"), _glx_XMinCmapsOfScreen->GetFunction());

    Local<FunctionTemplate> _glx_XMoveResizeWindow = FunctionTemplate::New(glx_XMoveResizeWindow);
    target->Set(String::New("XMoveResizeWindow"), _glx_XMoveResizeWindow->GetFunction());

    Local<FunctionTemplate> _glx_XMoveWindow = FunctionTemplate::New(glx_XMoveWindow);
    target->Set(String::New("XMoveWindow"), _glx_XMoveWindow->GetFunction());

    Local<FunctionTemplate> _glx_XNextEvent = FunctionTemplate::New(glx_XNextEvent);
    target->Set(String::New("XNextEvent"), _glx_XNextEvent->GetFunction());

    Local<FunctionTemplate> _glx_XNoOp = FunctionTemplate::New(glx_XNoOp);
    target->Set(String::New("XNoOp"), _glx_XNoOp->GetFunction());

    Local<FunctionTemplate> _glx_XParseColor = FunctionTemplate::New(glx_XParseColor);
    target->Set(String::New("XParseColor"), _glx_XParseColor->GetFunction());

    Local<FunctionTemplate> _glx_XParseGeometry = FunctionTemplate::New(glx_XParseGeometry);
    target->Set(String::New("XParseGeometry"), _glx_XParseGeometry->GetFunction());

    Local<FunctionTemplate> _glx_XPeekEvent = FunctionTemplate::New(glx_XPeekEvent);
    target->Set(String::New("XPeekEvent"), _glx_XPeekEvent->GetFunction());

    Local<FunctionTemplate> _glx_XPeekIfEvent = FunctionTemplate::New(glx_XPeekIfEvent);
    target->Set(String::New("XPeekIfEvent"), _glx_XPeekIfEvent->GetFunction());

    Local<FunctionTemplate> _glx_XPending = FunctionTemplate::New(glx_XPending);
    target->Set(String::New("XPending"), _glx_XPending->GetFunction());

    Local<FunctionTemplate> _glx_XPlanesOfScreen = FunctionTemplate::New(glx_XPlanesOfScreen);
    target->Set(String::New("XPlanesOfScreen"), _glx_XPlanesOfScreen->GetFunction());

    Local<FunctionTemplate> _glx_XProtocolRevision = FunctionTemplate::New(glx_XProtocolRevision);
    target->Set(String::New("XProtocolRevision"), _glx_XProtocolRevision->GetFunction());

    Local<FunctionTemplate> _glx_XProtocolVersion = FunctionTemplate::New(glx_XProtocolVersion);
    target->Set(String::New("XProtocolVersion"), _glx_XProtocolVersion->GetFunction());

    Local<FunctionTemplate> _glx_XPutBackEvent = FunctionTemplate::New(glx_XPutBackEvent);
    target->Set(String::New("XPutBackEvent"), _glx_XPutBackEvent->GetFunction());

    Local<FunctionTemplate> _glx_XPutImage = FunctionTemplate::New(glx_XPutImage);
    target->Set(String::New("XPutImage"), _glx_XPutImage->GetFunction());

    Local<FunctionTemplate> _glx_XQLength = FunctionTemplate::New(glx_XQLength);
    target->Set(String::New("XQLength"), _glx_XQLength->GetFunction());

    Local<FunctionTemplate> _glx_XQueryBestCursor = FunctionTemplate::New(glx_XQueryBestCursor);
    target->Set(String::New("XQueryBestCursor"), _glx_XQueryBestCursor->GetFunction());

    Local<FunctionTemplate> _glx_XQueryBestSize = FunctionTemplate::New(glx_XQueryBestSize);
    target->Set(String::New("XQueryBestSize"), _glx_XQueryBestSize->GetFunction());

    Local<FunctionTemplate> _glx_XQueryBestStipple = FunctionTemplate::New(glx_XQueryBestStipple);
    target->Set(String::New("XQueryBestStipple"), _glx_XQueryBestStipple->GetFunction());

    Local<FunctionTemplate> _glx_XQueryBestTile = FunctionTemplate::New(glx_XQueryBestTile);
    target->Set(String::New("XQueryBestTile"), _glx_XQueryBestTile->GetFunction());

    Local<FunctionTemplate> _glx_XQueryColor = FunctionTemplate::New(glx_XQueryColor);
    target->Set(String::New("XQueryColor"), _glx_XQueryColor->GetFunction());

    Local<FunctionTemplate> _glx_XQueryColors = FunctionTemplate::New(glx_XQueryColors);
    target->Set(String::New("XQueryColors"), _glx_XQueryColors->GetFunction());

    Local<FunctionTemplate> _glx_XQueryExtension = FunctionTemplate::New(glx_XQueryExtension);
    target->Set(String::New("XQueryExtension"), _glx_XQueryExtension->GetFunction());

    Local<FunctionTemplate> _glx_XQueryKeymap = FunctionTemplate::New(glx_XQueryKeymap);
    target->Set(String::New("XQueryKeymap"), _glx_XQueryKeymap->GetFunction());

    Local<FunctionTemplate> _glx_XQueryPointer = FunctionTemplate::New(glx_XQueryPointer);
    target->Set(String::New("XQueryPointer"), _glx_XQueryPointer->GetFunction());

    Local<FunctionTemplate> _glx_XQueryTextExtents = FunctionTemplate::New(glx_XQueryTextExtents);
    target->Set(String::New("XQueryTextExtents"), _glx_XQueryTextExtents->GetFunction());

    Local<FunctionTemplate> _glx_XQueryTextExtents16 = FunctionTemplate::New(glx_XQueryTextExtents16);
    target->Set(String::New("XQueryTextExtents16"), _glx_XQueryTextExtents16->GetFunction());

    Local<FunctionTemplate> _glx_XQueryTree = FunctionTemplate::New(glx_XQueryTree);
    target->Set(String::New("XQueryTree"), _glx_XQueryTree->GetFunction());

    Local<FunctionTemplate> _glx_XRaiseWindow = FunctionTemplate::New(glx_XRaiseWindow);
    target->Set(String::New("XRaiseWindow"), _glx_XRaiseWindow->GetFunction());

    Local<FunctionTemplate> _glx_XReadBitmapFile = FunctionTemplate::New(glx_XReadBitmapFile);
    target->Set(String::New("XReadBitmapFile"), _glx_XReadBitmapFile->GetFunction());

    Local<FunctionTemplate> _glx_XReadBitmapFileData = FunctionTemplate::New(glx_XReadBitmapFileData);
    target->Set(String::New("XReadBitmapFileData"), _glx_XReadBitmapFileData->GetFunction());

    Local<FunctionTemplate> _glx_XRebindKeysym = FunctionTemplate::New(glx_XRebindKeysym);
    target->Set(String::New("XRebindKeysym"), _glx_XRebindKeysym->GetFunction());

    Local<FunctionTemplate> _glx_XRecolorCursor = FunctionTemplate::New(glx_XRecolorCursor);
    target->Set(String::New("XRecolorCursor"), _glx_XRecolorCursor->GetFunction());

    Local<FunctionTemplate> _glx_XRefreshKeyboardMapping = FunctionTemplate::New(glx_XRefreshKeyboardMapping);
    target->Set(String::New("XRefreshKeyboardMapping"), _glx_XRefreshKeyboardMapping->GetFunction());

    Local<FunctionTemplate> _glx_XRemoveFromSaveSet = FunctionTemplate::New(glx_XRemoveFromSaveSet);
    target->Set(String::New("XRemoveFromSaveSet"), _glx_XRemoveFromSaveSet->GetFunction());

    Local<FunctionTemplate> _glx_XRemoveHost = FunctionTemplate::New(glx_XRemoveHost);
    target->Set(String::New("XRemoveHost"), _glx_XRemoveHost->GetFunction());

    Local<FunctionTemplate> _glx_XRemoveHosts = FunctionTemplate::New(glx_XRemoveHosts);
    target->Set(String::New("XRemoveHosts"), _glx_XRemoveHosts->GetFunction());

    Local<FunctionTemplate> _glx_XReparentWindow = FunctionTemplate::New(glx_XReparentWindow);
    target->Set(String::New("XReparentWindow"), _glx_XReparentWindow->GetFunction());

    Local<FunctionTemplate> _glx_XResetScreenSaver = FunctionTemplate::New(glx_XResetScreenSaver);
    target->Set(String::New("XResetScreenSaver"), _glx_XResetScreenSaver->GetFunction());

    Local<FunctionTemplate> _glx_XResizeWindow = FunctionTemplate::New(glx_XResizeWindow);
    target->Set(String::New("XResizeWindow"), _glx_XResizeWindow->GetFunction());

    Local<FunctionTemplate> _glx_XRestackWindows = FunctionTemplate::New(glx_XRestackWindows);
    target->Set(String::New("XRestackWindows"), _glx_XRestackWindows->GetFunction());

    Local<FunctionTemplate> _glx_XRotateBuffers = FunctionTemplate::New(glx_XRotateBuffers);
    target->Set(String::New("XRotateBuffers"), _glx_XRotateBuffers->GetFunction());

    Local<FunctionTemplate> _glx_XRotateWindowProperties = FunctionTemplate::New(glx_XRotateWindowProperties);
    target->Set(String::New("XRotateWindowProperties"), _glx_XRotateWindowProperties->GetFunction());

    Local<FunctionTemplate> _glx_XScreenCount = FunctionTemplate::New(glx_XScreenCount);
    target->Set(String::New("XScreenCount"), _glx_XScreenCount->GetFunction());

    Local<FunctionTemplate> _glx_XSelectInput = FunctionTemplate::New(glx_XSelectInput);
    target->Set(String::New("XSelectInput"), _glx_XSelectInput->GetFunction());

    Local<FunctionTemplate> _glx_XSendEvent = FunctionTemplate::New(glx_XSendEvent);
    target->Set(String::New("XSendEvent"), _glx_XSendEvent->GetFunction());

    Local<FunctionTemplate> _glx_XSetAccessControl = FunctionTemplate::New(glx_XSetAccessControl);
    target->Set(String::New("XSetAccessControl"), _glx_XSetAccessControl->GetFunction());

    Local<FunctionTemplate> _glx_XSetArcMode = FunctionTemplate::New(glx_XSetArcMode);
    target->Set(String::New("XSetArcMode"), _glx_XSetArcMode->GetFunction());

    Local<FunctionTemplate> _glx_XSetBackground = FunctionTemplate::New(glx_XSetBackground);
    target->Set(String::New("XSetBackground"), _glx_XSetBackground->GetFunction());

    Local<FunctionTemplate> _glx_XSetClipMask = FunctionTemplate::New(glx_XSetClipMask);
    target->Set(String::New("XSetClipMask"), _glx_XSetClipMask->GetFunction());

    Local<FunctionTemplate> _glx_XSetClipOrigin = FunctionTemplate::New(glx_XSetClipOrigin);
    target->Set(String::New("XSetClipOrigin"), _glx_XSetClipOrigin->GetFunction());

    Local<FunctionTemplate> _glx_XSetClipRectangles = FunctionTemplate::New(glx_XSetClipRectangles);
    target->Set(String::New("XSetClipRectangles"), _glx_XSetClipRectangles->GetFunction());

    Local<FunctionTemplate> _glx_XSetCloseDownMode = FunctionTemplate::New(glx_XSetCloseDownMode);
    target->Set(String::New("XSetCloseDownMode"), _glx_XSetCloseDownMode->GetFunction());

    Local<FunctionTemplate> _glx_XSetCommand = FunctionTemplate::New(glx_XSetCommand);
    target->Set(String::New("XSetCommand"), _glx_XSetCommand->GetFunction());

    Local<FunctionTemplate> _glx_XSetDashes = FunctionTemplate::New(glx_XSetDashes);
    target->Set(String::New("XSetDashes"), _glx_XSetDashes->GetFunction());

    Local<FunctionTemplate> _glx_XSetFillRule = FunctionTemplate::New(glx_XSetFillRule);
    target->Set(String::New("XSetFillRule"), _glx_XSetFillRule->GetFunction());

    Local<FunctionTemplate> _glx_XSetFillStyle = FunctionTemplate::New(glx_XSetFillStyle);
    target->Set(String::New("XSetFillStyle"), _glx_XSetFillStyle->GetFunction());

    Local<FunctionTemplate> _glx_XSetFont = FunctionTemplate::New(glx_XSetFont);
    target->Set(String::New("XSetFont"), _glx_XSetFont->GetFunction());

    Local<FunctionTemplate> _glx_XSetFontPath = FunctionTemplate::New(glx_XSetFontPath);
    target->Set(String::New("XSetFontPath"), _glx_XSetFontPath->GetFunction());

    Local<FunctionTemplate> _glx_XSetForeground = FunctionTemplate::New(glx_XSetForeground);
    target->Set(String::New("XSetForeground"), _glx_XSetForeground->GetFunction());

    Local<FunctionTemplate> _glx_XSetFunction = FunctionTemplate::New(glx_XSetFunction);
    target->Set(String::New("XSetFunction"), _glx_XSetFunction->GetFunction());

    Local<FunctionTemplate> _glx_XSetGraphicsExposures = FunctionTemplate::New(glx_XSetGraphicsExposures);
    target->Set(String::New("XSetGraphicsExposures"), _glx_XSetGraphicsExposures->GetFunction());

    Local<FunctionTemplate> _glx_XSetIconName = FunctionTemplate::New(glx_XSetIconName);
    target->Set(String::New("XSetIconName"), _glx_XSetIconName->GetFunction());

    Local<FunctionTemplate> _glx_XSetInputFocus = FunctionTemplate::New(glx_XSetInputFocus);
    target->Set(String::New("XSetInputFocus"), _glx_XSetInputFocus->GetFunction());

    Local<FunctionTemplate> _glx_XSetLineAttributes = FunctionTemplate::New(glx_XSetLineAttributes);
    target->Set(String::New("XSetLineAttributes"), _glx_XSetLineAttributes->GetFunction());

    Local<FunctionTemplate> _glx_XSetModifierMapping = FunctionTemplate::New(glx_XSetModifierMapping);
    target->Set(String::New("XSetModifierMapping"), _glx_XSetModifierMapping->GetFunction());

    Local<FunctionTemplate> _glx_XSetPlaneMask = FunctionTemplate::New(glx_XSetPlaneMask);
    target->Set(String::New("XSetPlaneMask"), _glx_XSetPlaneMask->GetFunction());

    Local<FunctionTemplate> _glx_XSetPointerMapping = FunctionTemplate::New(glx_XSetPointerMapping);
    target->Set(String::New("XSetPointerMapping"), _glx_XSetPointerMapping->GetFunction());

    Local<FunctionTemplate> _glx_XSetScreenSaver = FunctionTemplate::New(glx_XSetScreenSaver);
    target->Set(String::New("XSetScreenSaver"), _glx_XSetScreenSaver->GetFunction());

    Local<FunctionTemplate> _glx_XSetSelectionOwner = FunctionTemplate::New(glx_XSetSelectionOwner);
    target->Set(String::New("XSetSelectionOwner"), _glx_XSetSelectionOwner->GetFunction());

    Local<FunctionTemplate> _glx_XSetState = FunctionTemplate::New(glx_XSetState);
    target->Set(String::New("XSetState"), _glx_XSetState->GetFunction());

    Local<FunctionTemplate> _glx_XSetStipple = FunctionTemplate::New(glx_XSetStipple);
    target->Set(String::New("XSetStipple"), _glx_XSetStipple->GetFunction());

    Local<FunctionTemplate> _glx_XSetSubwindowMode = FunctionTemplate::New(glx_XSetSubwindowMode);
    target->Set(String::New("XSetSubwindowMode"), _glx_XSetSubwindowMode->GetFunction());

    Local<FunctionTemplate> _glx_XSetTSOrigin = FunctionTemplate::New(glx_XSetTSOrigin);
    target->Set(String::New("XSetTSOrigin"), _glx_XSetTSOrigin->GetFunction());

    Local<FunctionTemplate> _glx_XSetTile = FunctionTemplate::New(glx_XSetTile);
    target->Set(String::New("XSetTile"), _glx_XSetTile->GetFunction());

    Local<FunctionTemplate> _glx_XSetWindowBackground = FunctionTemplate::New(glx_XSetWindowBackground);
    target->Set(String::New("XSetWindowBackground"), _glx_XSetWindowBackground->GetFunction());

    Local<FunctionTemplate> _glx_XSetWindowBackgroundPixmap = FunctionTemplate::New(glx_XSetWindowBackgroundPixmap);
    target->Set(String::New("XSetWindowBackgroundPixmap"), _glx_XSetWindowBackgroundPixmap->GetFunction());

    Local<FunctionTemplate> _glx_XSetWindowBorder = FunctionTemplate::New(glx_XSetWindowBorder);
    target->Set(String::New("XSetWindowBorder"), _glx_XSetWindowBorder->GetFunction());

    Local<FunctionTemplate> _glx_XSetWindowBorderPixmap = FunctionTemplate::New(glx_XSetWindowBorderPixmap);
    target->Set(String::New("XSetWindowBorderPixmap"), _glx_XSetWindowBorderPixmap->GetFunction());

    Local<FunctionTemplate> _glx_XSetWindowBorderWidth = FunctionTemplate::New(glx_XSetWindowBorderWidth);
    target->Set(String::New("XSetWindowBorderWidth"), _glx_XSetWindowBorderWidth->GetFunction());

    Local<FunctionTemplate> _glx_XSetWindowColormap = FunctionTemplate::New(glx_XSetWindowColormap);
    target->Set(String::New("XSetWindowColormap"), _glx_XSetWindowColormap->GetFunction());

    Local<FunctionTemplate> _glx_XStoreBuffer = FunctionTemplate::New(glx_XStoreBuffer);
    target->Set(String::New("XStoreBuffer"), _glx_XStoreBuffer->GetFunction());

    Local<FunctionTemplate> _glx_XStoreBytes = FunctionTemplate::New(glx_XStoreBytes);
    target->Set(String::New("XStoreBytes"), _glx_XStoreBytes->GetFunction());

    Local<FunctionTemplate> _glx_XStoreColor = FunctionTemplate::New(glx_XStoreColor);
    target->Set(String::New("XStoreColor"), _glx_XStoreColor->GetFunction());

    Local<FunctionTemplate> _glx_XStoreColors = FunctionTemplate::New(glx_XStoreColors);
    target->Set(String::New("XStoreColors"), _glx_XStoreColors->GetFunction());

    Local<FunctionTemplate> _glx_XStoreName = FunctionTemplate::New(glx_XStoreName);
    target->Set(String::New("XStoreName"), _glx_XStoreName->GetFunction());

    Local<FunctionTemplate> _glx_XStoreNamedColor = FunctionTemplate::New(glx_XStoreNamedColor);
    target->Set(String::New("XStoreNamedColor"), _glx_XStoreNamedColor->GetFunction());

    Local<FunctionTemplate> _glx_XSync = FunctionTemplate::New(glx_XSync);
    target->Set(String::New("XSync"), _glx_XSync->GetFunction());

    Local<FunctionTemplate> _glx_XTextExtents = FunctionTemplate::New(glx_XTextExtents);
    target->Set(String::New("XTextExtents"), _glx_XTextExtents->GetFunction());

    Local<FunctionTemplate> _glx_XTextExtents16 = FunctionTemplate::New(glx_XTextExtents16);
    target->Set(String::New("XTextExtents16"), _glx_XTextExtents16->GetFunction());

    Local<FunctionTemplate> _glx_XTextWidth = FunctionTemplate::New(glx_XTextWidth);
    target->Set(String::New("XTextWidth"), _glx_XTextWidth->GetFunction());

    Local<FunctionTemplate> _glx_XTextWidth16 = FunctionTemplate::New(glx_XTextWidth16);
    target->Set(String::New("XTextWidth16"), _glx_XTextWidth16->GetFunction());

    Local<FunctionTemplate> _glx_XTranslateCoordinates = FunctionTemplate::New(glx_XTranslateCoordinates);
    target->Set(String::New("XTranslateCoordinates"), _glx_XTranslateCoordinates->GetFunction());

    Local<FunctionTemplate> _glx_XUndefineCursor = FunctionTemplate::New(glx_XUndefineCursor);
    target->Set(String::New("XUndefineCursor"), _glx_XUndefineCursor->GetFunction());

    Local<FunctionTemplate> _glx_XUngrabButton = FunctionTemplate::New(glx_XUngrabButton);
    target->Set(String::New("XUngrabButton"), _glx_XUngrabButton->GetFunction());

    Local<FunctionTemplate> _glx_XUngrabKey = FunctionTemplate::New(glx_XUngrabKey);
    target->Set(String::New("XUngrabKey"), _glx_XUngrabKey->GetFunction());

    Local<FunctionTemplate> _glx_XUngrabKeyboard = FunctionTemplate::New(glx_XUngrabKeyboard);
    target->Set(String::New("XUngrabKeyboard"), _glx_XUngrabKeyboard->GetFunction());

    Local<FunctionTemplate> _glx_XUngrabPointer = FunctionTemplate::New(glx_XUngrabPointer);
    target->Set(String::New("XUngrabPointer"), _glx_XUngrabPointer->GetFunction());

    Local<FunctionTemplate> _glx_XUngrabServer = FunctionTemplate::New(glx_XUngrabServer);
    target->Set(String::New("XUngrabServer"), _glx_XUngrabServer->GetFunction());

    Local<FunctionTemplate> _glx_XUninstallColormap = FunctionTemplate::New(glx_XUninstallColormap);
    target->Set(String::New("XUninstallColormap"), _glx_XUninstallColormap->GetFunction());

    Local<FunctionTemplate> _glx_XUnloadFont = FunctionTemplate::New(glx_XUnloadFont);
    target->Set(String::New("XUnloadFont"), _glx_XUnloadFont->GetFunction());

    Local<FunctionTemplate> _glx_XUnmapSubwindows = FunctionTemplate::New(glx_XUnmapSubwindows);
    target->Set(String::New("XUnmapSubwindows"), _glx_XUnmapSubwindows->GetFunction());

    Local<FunctionTemplate> _glx_XUnmapWindow = FunctionTemplate::New(glx_XUnmapWindow);
    target->Set(String::New("XUnmapWindow"), _glx_XUnmapWindow->GetFunction());

    Local<FunctionTemplate> _glx_XVendorRelease = FunctionTemplate::New(glx_XVendorRelease);
    target->Set(String::New("XVendorRelease"), _glx_XVendorRelease->GetFunction());

    Local<FunctionTemplate> _glx_XWarpPointer = FunctionTemplate::New(glx_XWarpPointer);
    target->Set(String::New("XWarpPointer"), _glx_XWarpPointer->GetFunction());

    Local<FunctionTemplate> _glx_XWidthMMOfScreen = FunctionTemplate::New(glx_XWidthMMOfScreen);
    target->Set(String::New("XWidthMMOfScreen"), _glx_XWidthMMOfScreen->GetFunction());

    Local<FunctionTemplate> _glx_XWidthOfScreen = FunctionTemplate::New(glx_XWidthOfScreen);
    target->Set(String::New("XWidthOfScreen"), _glx_XWidthOfScreen->GetFunction());

    Local<FunctionTemplate> _glx_XWindowEvent = FunctionTemplate::New(glx_XWindowEvent);
    target->Set(String::New("XWindowEvent"), _glx_XWindowEvent->GetFunction());

    Local<FunctionTemplate> _glx_XWriteBitmapFile = FunctionTemplate::New(glx_XWriteBitmapFile);
    target->Set(String::New("XWriteBitmapFile"), _glx_XWriteBitmapFile->GetFunction());

    Local<FunctionTemplate> _glx_XOpenOM = FunctionTemplate::New(glx_XOpenOM);
    target->Set(String::New("XOpenOM"), _glx_XOpenOM->GetFunction());

    Local<FunctionTemplate> _glx_XCloseOM = FunctionTemplate::New(glx_XCloseOM);
    target->Set(String::New("XCloseOM"), _glx_XCloseOM->GetFunction());

    Local<FunctionTemplate> _glx_XCreateOC = FunctionTemplate::New(glx_XCreateOC);
    target->Set(String::New("XCreateOC"), _glx_XCreateOC->GetFunction());

    Local<FunctionTemplate> _glx_XDestroyOC = FunctionTemplate::New(glx_XDestroyOC);
    target->Set(String::New("XDestroyOC"), _glx_XDestroyOC->GetFunction());

    Local<FunctionTemplate> _glx_XOMOfOC = FunctionTemplate::New(glx_XOMOfOC);
    target->Set(String::New("XOMOfOC"), _glx_XOMOfOC->GetFunction());

    Local<FunctionTemplate> _glx_XCreateFontSet = FunctionTemplate::New(glx_XCreateFontSet);
    target->Set(String::New("XCreateFontSet"), _glx_XCreateFontSet->GetFunction());

    Local<FunctionTemplate> _glx_XFreeFontSet = FunctionTemplate::New(glx_XFreeFontSet);
    target->Set(String::New("XFreeFontSet"), _glx_XFreeFontSet->GetFunction());

    Local<FunctionTemplate> _glx_XFontsOfFontSet = FunctionTemplate::New(glx_XFontsOfFontSet);
    target->Set(String::New("XFontsOfFontSet"), _glx_XFontsOfFontSet->GetFunction());

    Local<FunctionTemplate> _glx_XContextDependentDrawing = FunctionTemplate::New(glx_XContextDependentDrawing);
    target->Set(String::New("XContextDependentDrawing"), _glx_XContextDependentDrawing->GetFunction());

    Local<FunctionTemplate> _glx_XDirectionalDependentDrawing = FunctionTemplate::New(glx_XDirectionalDependentDrawing);
    target->Set(String::New("XDirectionalDependentDrawing"), _glx_XDirectionalDependentDrawing->GetFunction());

    Local<FunctionTemplate> _glx_XContextualDrawing = FunctionTemplate::New(glx_XContextualDrawing);
    target->Set(String::New("XContextualDrawing"), _glx_XContextualDrawing->GetFunction());

    Local<FunctionTemplate> _glx_XmbTextEscapement = FunctionTemplate::New(glx_XmbTextEscapement);
    target->Set(String::New("XmbTextEscapement"), _glx_XmbTextEscapement->GetFunction());

    Local<FunctionTemplate> _glx_XwcTextEscapement = FunctionTemplate::New(glx_XwcTextEscapement);
    target->Set(String::New("XwcTextEscapement"), _glx_XwcTextEscapement->GetFunction());

    Local<FunctionTemplate> _glx_Xutf8TextEscapement = FunctionTemplate::New(glx_Xutf8TextEscapement);
    target->Set(String::New("Xutf8TextEscapement"), _glx_Xutf8TextEscapement->GetFunction());

    Local<FunctionTemplate> _glx_XmbTextExtents = FunctionTemplate::New(glx_XmbTextExtents);
    target->Set(String::New("XmbTextExtents"), _glx_XmbTextExtents->GetFunction());

    Local<FunctionTemplate> _glx_XwcTextExtents = FunctionTemplate::New(glx_XwcTextExtents);
    target->Set(String::New("XwcTextExtents"), _glx_XwcTextExtents->GetFunction());

    Local<FunctionTemplate> _glx_Xutf8TextExtents = FunctionTemplate::New(glx_Xutf8TextExtents);
    target->Set(String::New("Xutf8TextExtents"), _glx_Xutf8TextExtents->GetFunction());

    Local<FunctionTemplate> _glx_XmbTextPerCharExtents = FunctionTemplate::New(glx_XmbTextPerCharExtents);
    target->Set(String::New("XmbTextPerCharExtents"), _glx_XmbTextPerCharExtents->GetFunction());

    Local<FunctionTemplate> _glx_XwcTextPerCharExtents = FunctionTemplate::New(glx_XwcTextPerCharExtents);
    target->Set(String::New("XwcTextPerCharExtents"), _glx_XwcTextPerCharExtents->GetFunction());

    Local<FunctionTemplate> _glx_Xutf8TextPerCharExtents = FunctionTemplate::New(glx_Xutf8TextPerCharExtents);
    target->Set(String::New("Xutf8TextPerCharExtents"), _glx_Xutf8TextPerCharExtents->GetFunction());

    Local<FunctionTemplate> _glx_XmbDrawText = FunctionTemplate::New(glx_XmbDrawText);
    target->Set(String::New("XmbDrawText"), _glx_XmbDrawText->GetFunction());

    Local<FunctionTemplate> _glx_XwcDrawText = FunctionTemplate::New(glx_XwcDrawText);
    target->Set(String::New("XwcDrawText"), _glx_XwcDrawText->GetFunction());

    Local<FunctionTemplate> _glx_Xutf8DrawText = FunctionTemplate::New(glx_Xutf8DrawText);
    target->Set(String::New("Xutf8DrawText"), _glx_Xutf8DrawText->GetFunction());

    Local<FunctionTemplate> _glx_XmbDrawString = FunctionTemplate::New(glx_XmbDrawString);
    target->Set(String::New("XmbDrawString"), _glx_XmbDrawString->GetFunction());

    Local<FunctionTemplate> _glx_XwcDrawString = FunctionTemplate::New(glx_XwcDrawString);
    target->Set(String::New("XwcDrawString"), _glx_XwcDrawString->GetFunction());

    Local<FunctionTemplate> _glx_Xutf8DrawString = FunctionTemplate::New(glx_Xutf8DrawString);
    target->Set(String::New("Xutf8DrawString"), _glx_Xutf8DrawString->GetFunction());

    Local<FunctionTemplate> _glx_XmbDrawImageString = FunctionTemplate::New(glx_XmbDrawImageString);
    target->Set(String::New("XmbDrawImageString"), _glx_XmbDrawImageString->GetFunction());

    Local<FunctionTemplate> _glx_XwcDrawImageString = FunctionTemplate::New(glx_XwcDrawImageString);
    target->Set(String::New("XwcDrawImageString"), _glx_XwcDrawImageString->GetFunction());

    Local<FunctionTemplate> _glx_Xutf8DrawImageString = FunctionTemplate::New(glx_Xutf8DrawImageString);
    target->Set(String::New("Xutf8DrawImageString"), _glx_Xutf8DrawImageString->GetFunction());

    Local<FunctionTemplate> _glx_XOpenIM = FunctionTemplate::New(glx_XOpenIM);
    target->Set(String::New("XOpenIM"), _glx_XOpenIM->GetFunction());

    Local<FunctionTemplate> _glx_XCloseIM = FunctionTemplate::New(glx_XCloseIM);
    target->Set(String::New("XCloseIM"), _glx_XCloseIM->GetFunction());

    Local<FunctionTemplate> _glx_XCreateIC = FunctionTemplate::New(glx_XCreateIC);
    target->Set(String::New("XCreateIC"), _glx_XCreateIC->GetFunction());

    Local<FunctionTemplate> _glx_XDestroyIC = FunctionTemplate::New(glx_XDestroyIC);
    target->Set(String::New("XDestroyIC"), _glx_XDestroyIC->GetFunction());

    Local<FunctionTemplate> _glx_XSetICFocus = FunctionTemplate::New(glx_XSetICFocus);
    target->Set(String::New("XSetICFocus"), _glx_XSetICFocus->GetFunction());

    Local<FunctionTemplate> _glx_XUnsetICFocus = FunctionTemplate::New(glx_XUnsetICFocus);
    target->Set(String::New("XUnsetICFocus"), _glx_XUnsetICFocus->GetFunction());

    Local<FunctionTemplate> _glx_XIMOfIC = FunctionTemplate::New(glx_XIMOfIC);
    target->Set(String::New("XIMOfIC"), _glx_XIMOfIC->GetFunction());

    Local<FunctionTemplate> _glx_XFilterEvent = FunctionTemplate::New(glx_XFilterEvent);
    target->Set(String::New("XFilterEvent"), _glx_XFilterEvent->GetFunction());

    Local<FunctionTemplate> _glx_XmbLookupString = FunctionTemplate::New(glx_XmbLookupString);
    target->Set(String::New("XmbLookupString"), _glx_XmbLookupString->GetFunction());

    Local<FunctionTemplate> _glx_XwcLookupString = FunctionTemplate::New(glx_XwcLookupString);
    target->Set(String::New("XwcLookupString"), _glx_XwcLookupString->GetFunction());

    Local<FunctionTemplate> _glx_Xutf8LookupString = FunctionTemplate::New(glx_Xutf8LookupString);
    target->Set(String::New("Xutf8LookupString"), _glx_Xutf8LookupString->GetFunction());

    Local<FunctionTemplate> _glx_XVaCreateNestedList = FunctionTemplate::New(glx_XVaCreateNestedList);
    target->Set(String::New("XVaCreateNestedList"), _glx_XVaCreateNestedList->GetFunction());

    Local<FunctionTemplate> _glx_XRegisterIMInstantiateCallback = FunctionTemplate::New(glx_XRegisterIMInstantiateCallback);
    target->Set(String::New("XRegisterIMInstantiateCallback"), _glx_XRegisterIMInstantiateCallback->GetFunction());

    Local<FunctionTemplate> _glx_XUnregisterIMInstantiateCallback = FunctionTemplate::New(glx_XUnregisterIMInstantiateCallback);
    target->Set(String::New("XUnregisterIMInstantiateCallback"), _glx_XUnregisterIMInstantiateCallback->GetFunction());

    Local<FunctionTemplate> _glx_XInternalConnectionNumbers = FunctionTemplate::New(glx_XInternalConnectionNumbers);
    target->Set(String::New("XInternalConnectionNumbers"), _glx_XInternalConnectionNumbers->GetFunction());

    Local<FunctionTemplate> _glx_XProcessInternalConnection = FunctionTemplate::New(glx_XProcessInternalConnection);
    target->Set(String::New("XProcessInternalConnection"), _glx_XProcessInternalConnection->GetFunction());

    Local<FunctionTemplate> _glx_XAddConnectionWatch = FunctionTemplate::New(glx_XAddConnectionWatch);
    target->Set(String::New("XAddConnectionWatch"), _glx_XAddConnectionWatch->GetFunction());

    Local<FunctionTemplate> _glx_XRemoveConnectionWatch = FunctionTemplate::New(glx_XRemoveConnectionWatch);
    target->Set(String::New("XRemoveConnectionWatch"), _glx_XRemoveConnectionWatch->GetFunction());

    Local<FunctionTemplate> _glx_XSetAuthorization = FunctionTemplate::New(glx_XSetAuthorization);
    target->Set(String::New("XSetAuthorization"), _glx_XSetAuthorization->GetFunction());

    Local<FunctionTemplate> _glx__Xmbtowc = FunctionTemplate::New(glx__Xmbtowc);
    target->Set(String::New("_Xmbtowc"), _glx__Xmbtowc->GetFunction());

    Local<FunctionTemplate> _glx__Xwctomb = FunctionTemplate::New(glx__Xwctomb);
    target->Set(String::New("_Xwctomb"), _glx__Xwctomb->GetFunction());

    Local<FunctionTemplate> _glx_XGetEventData = FunctionTemplate::New(glx_XGetEventData);
    target->Set(String::New("XGetEventData"), _glx_XGetEventData->GetFunction());

    Local<FunctionTemplate> _glx_XFreeEventData = FunctionTemplate::New(glx_XFreeEventData);
    target->Set(String::New("XFreeEventData"), _glx_XFreeEventData->GetFunction());

    Local<FunctionTemplate> _glx_XClipBox = FunctionTemplate::New(glx_XClipBox);
    target->Set(String::New("XClipBox"), _glx_XClipBox->GetFunction());

    Local<FunctionTemplate> _glx_XCreateRegion = FunctionTemplate::New(glx_XCreateRegion);
    target->Set(String::New("XCreateRegion"), _glx_XCreateRegion->GetFunction());

    Local<FunctionTemplate> _glx_XDeleteContext = FunctionTemplate::New(glx_XDeleteContext);
    target->Set(String::New("XDeleteContext"), _glx_XDeleteContext->GetFunction());

    Local<FunctionTemplate> _glx_XDestroyRegion = FunctionTemplate::New(glx_XDestroyRegion);
    target->Set(String::New("XDestroyRegion"), _glx_XDestroyRegion->GetFunction());

    Local<FunctionTemplate> _glx_XEmptyRegion = FunctionTemplate::New(glx_XEmptyRegion);
    target->Set(String::New("XEmptyRegion"), _glx_XEmptyRegion->GetFunction());

    Local<FunctionTemplate> _glx_XEqualRegion = FunctionTemplate::New(glx_XEqualRegion);
    target->Set(String::New("XEqualRegion"), _glx_XEqualRegion->GetFunction());

    Local<FunctionTemplate> _glx_XFindContext = FunctionTemplate::New(glx_XFindContext);
    target->Set(String::New("XFindContext"), _glx_XFindContext->GetFunction());

    Local<FunctionTemplate> _glx_XGetClassHint = FunctionTemplate::New(glx_XGetClassHint);
    target->Set(String::New("XGetClassHint"), _glx_XGetClassHint->GetFunction());

    Local<FunctionTemplate> _glx_XGetIconSizes = FunctionTemplate::New(glx_XGetIconSizes);
    target->Set(String::New("XGetIconSizes"), _glx_XGetIconSizes->GetFunction());

    Local<FunctionTemplate> _glx_XGetNormalHints = FunctionTemplate::New(glx_XGetNormalHints);
    target->Set(String::New("XGetNormalHints"), _glx_XGetNormalHints->GetFunction());

    Local<FunctionTemplate> _glx_XGetRGBColormaps = FunctionTemplate::New(glx_XGetRGBColormaps);
    target->Set(String::New("XGetRGBColormaps"), _glx_XGetRGBColormaps->GetFunction());

    Local<FunctionTemplate> _glx_XGetSizeHints = FunctionTemplate::New(glx_XGetSizeHints);
    target->Set(String::New("XGetSizeHints"), _glx_XGetSizeHints->GetFunction());

    Local<FunctionTemplate> _glx_XGetStandardColormap = FunctionTemplate::New(glx_XGetStandardColormap);
    target->Set(String::New("XGetStandardColormap"), _glx_XGetStandardColormap->GetFunction());

    Local<FunctionTemplate> _glx_XGetTextProperty = FunctionTemplate::New(glx_XGetTextProperty);
    target->Set(String::New("XGetTextProperty"), _glx_XGetTextProperty->GetFunction());

    Local<FunctionTemplate> _glx_XGetWMClientMachine = FunctionTemplate::New(glx_XGetWMClientMachine);
    target->Set(String::New("XGetWMClientMachine"), _glx_XGetWMClientMachine->GetFunction());

    Local<FunctionTemplate> _glx_XGetWMIconName = FunctionTemplate::New(glx_XGetWMIconName);
    target->Set(String::New("XGetWMIconName"), _glx_XGetWMIconName->GetFunction());

    Local<FunctionTemplate> _glx_XGetWMName = FunctionTemplate::New(glx_XGetWMName);
    target->Set(String::New("XGetWMName"), _glx_XGetWMName->GetFunction());

    Local<FunctionTemplate> _glx_XGetWMNormalHints = FunctionTemplate::New(glx_XGetWMNormalHints);
    target->Set(String::New("XGetWMNormalHints"), _glx_XGetWMNormalHints->GetFunction());

    Local<FunctionTemplate> _glx_XGetWMSizeHints = FunctionTemplate::New(glx_XGetWMSizeHints);
    target->Set(String::New("XGetWMSizeHints"), _glx_XGetWMSizeHints->GetFunction());

    Local<FunctionTemplate> _glx_XGetZoomHints = FunctionTemplate::New(glx_XGetZoomHints);
    target->Set(String::New("XGetZoomHints"), _glx_XGetZoomHints->GetFunction());

    Local<FunctionTemplate> _glx_XIntersectRegion = FunctionTemplate::New(glx_XIntersectRegion);
    target->Set(String::New("XIntersectRegion"), _glx_XIntersectRegion->GetFunction());

    Local<FunctionTemplate> _glx_XConvertCase = FunctionTemplate::New(glx_XConvertCase);
    target->Set(String::New("XConvertCase"), _glx_XConvertCase->GetFunction());

    Local<FunctionTemplate> _glx_XLookupString = FunctionTemplate::New(glx_XLookupString);
    target->Set(String::New("XLookupString"), _glx_XLookupString->GetFunction());

    Local<FunctionTemplate> _glx_XMatchVisualInfo = FunctionTemplate::New(glx_XMatchVisualInfo);
    target->Set(String::New("XMatchVisualInfo"), _glx_XMatchVisualInfo->GetFunction());

    Local<FunctionTemplate> _glx_XOffsetRegion = FunctionTemplate::New(glx_XOffsetRegion);
    target->Set(String::New("XOffsetRegion"), _glx_XOffsetRegion->GetFunction());

    Local<FunctionTemplate> _glx_XPointInRegion = FunctionTemplate::New(glx_XPointInRegion);
    target->Set(String::New("XPointInRegion"), _glx_XPointInRegion->GetFunction());

    Local<FunctionTemplate> _glx_XPolygonRegion = FunctionTemplate::New(glx_XPolygonRegion);
    target->Set(String::New("XPolygonRegion"), _glx_XPolygonRegion->GetFunction());

    Local<FunctionTemplate> _glx_XRectInRegion = FunctionTemplate::New(glx_XRectInRegion);
    target->Set(String::New("XRectInRegion"), _glx_XRectInRegion->GetFunction());

    Local<FunctionTemplate> _glx_XSaveContext = FunctionTemplate::New(glx_XSaveContext);
    target->Set(String::New("XSaveContext"), _glx_XSaveContext->GetFunction());

    Local<FunctionTemplate> _glx_XSetClassHint = FunctionTemplate::New(glx_XSetClassHint);
    target->Set(String::New("XSetClassHint"), _glx_XSetClassHint->GetFunction());

    Local<FunctionTemplate> _glx_XSetIconSizes = FunctionTemplate::New(glx_XSetIconSizes);
    target->Set(String::New("XSetIconSizes"), _glx_XSetIconSizes->GetFunction());

    Local<FunctionTemplate> _glx_XSetNormalHints = FunctionTemplate::New(glx_XSetNormalHints);
    target->Set(String::New("XSetNormalHints"), _glx_XSetNormalHints->GetFunction());

    Local<FunctionTemplate> _glx_XSetRGBColormaps = FunctionTemplate::New(glx_XSetRGBColormaps);
    target->Set(String::New("XSetRGBColormaps"), _glx_XSetRGBColormaps->GetFunction());

    Local<FunctionTemplate> _glx_XSetSizeHints = FunctionTemplate::New(glx_XSetSizeHints);
    target->Set(String::New("XSetSizeHints"), _glx_XSetSizeHints->GetFunction());

    Local<FunctionTemplate> _glx_XSetStandardProperties = FunctionTemplate::New(glx_XSetStandardProperties);
    target->Set(String::New("XSetStandardProperties"), _glx_XSetStandardProperties->GetFunction());

    Local<FunctionTemplate> _glx_XSetTextProperty = FunctionTemplate::New(glx_XSetTextProperty);
    target->Set(String::New("XSetTextProperty"), _glx_XSetTextProperty->GetFunction());

    Local<FunctionTemplate> _glx_XSetWMClientMachine = FunctionTemplate::New(glx_XSetWMClientMachine);
    target->Set(String::New("XSetWMClientMachine"), _glx_XSetWMClientMachine->GetFunction());

    Local<FunctionTemplate> _glx_XSetWMHints = FunctionTemplate::New(glx_XSetWMHints);
    target->Set(String::New("XSetWMHints"), _glx_XSetWMHints->GetFunction());

    Local<FunctionTemplate> _glx_XSetWMIconName = FunctionTemplate::New(glx_XSetWMIconName);
    target->Set(String::New("XSetWMIconName"), _glx_XSetWMIconName->GetFunction());

    Local<FunctionTemplate> _glx_XSetWMName = FunctionTemplate::New(glx_XSetWMName);
    target->Set(String::New("XSetWMName"), _glx_XSetWMName->GetFunction());

    Local<FunctionTemplate> _glx_XSetWMNormalHints = FunctionTemplate::New(glx_XSetWMNormalHints);
    target->Set(String::New("XSetWMNormalHints"), _glx_XSetWMNormalHints->GetFunction());

    Local<FunctionTemplate> _glx_XSetWMProperties = FunctionTemplate::New(glx_XSetWMProperties);
    target->Set(String::New("XSetWMProperties"), _glx_XSetWMProperties->GetFunction());

    Local<FunctionTemplate> _glx_XmbSetWMProperties = FunctionTemplate::New(glx_XmbSetWMProperties);
    target->Set(String::New("XmbSetWMProperties"), _glx_XmbSetWMProperties->GetFunction());

    Local<FunctionTemplate> _glx_Xutf8SetWMProperties = FunctionTemplate::New(glx_Xutf8SetWMProperties);
    target->Set(String::New("Xutf8SetWMProperties"), _glx_Xutf8SetWMProperties->GetFunction());

    Local<FunctionTemplate> _glx_XSetWMSizeHints = FunctionTemplate::New(glx_XSetWMSizeHints);
    target->Set(String::New("XSetWMSizeHints"), _glx_XSetWMSizeHints->GetFunction());

    Local<FunctionTemplate> _glx_XSetRegion = FunctionTemplate::New(glx_XSetRegion);
    target->Set(String::New("XSetRegion"), _glx_XSetRegion->GetFunction());

    Local<FunctionTemplate> _glx_XSetStandardColormap = FunctionTemplate::New(glx_XSetStandardColormap);
    target->Set(String::New("XSetStandardColormap"), _glx_XSetStandardColormap->GetFunction());

    Local<FunctionTemplate> _glx_XSetZoomHints = FunctionTemplate::New(glx_XSetZoomHints);
    target->Set(String::New("XSetZoomHints"), _glx_XSetZoomHints->GetFunction());

    Local<FunctionTemplate> _glx_XShrinkRegion = FunctionTemplate::New(glx_XShrinkRegion);
    target->Set(String::New("XShrinkRegion"), _glx_XShrinkRegion->GetFunction());

    Local<FunctionTemplate> _glx_XStringListToTextProperty = FunctionTemplate::New(glx_XStringListToTextProperty);
    target->Set(String::New("XStringListToTextProperty"), _glx_XStringListToTextProperty->GetFunction());

    Local<FunctionTemplate> _glx_XSubtractRegion = FunctionTemplate::New(glx_XSubtractRegion);
    target->Set(String::New("XSubtractRegion"), _glx_XSubtractRegion->GetFunction());

    Local<FunctionTemplate> _glx_XmbTextListToTextProperty = FunctionTemplate::New(glx_XmbTextListToTextProperty);
    target->Set(String::New("XmbTextListToTextProperty"), _glx_XmbTextListToTextProperty->GetFunction());

    Local<FunctionTemplate> _glx_XwcTextListToTextProperty = FunctionTemplate::New(glx_XwcTextListToTextProperty);
    target->Set(String::New("XwcTextListToTextProperty"), _glx_XwcTextListToTextProperty->GetFunction());

    Local<FunctionTemplate> _glx_Xutf8TextListToTextProperty = FunctionTemplate::New(glx_Xutf8TextListToTextProperty);
    target->Set(String::New("Xutf8TextListToTextProperty"), _glx_Xutf8TextListToTextProperty->GetFunction());

    Local<FunctionTemplate> _glx_XwcFreeStringList = FunctionTemplate::New(glx_XwcFreeStringList);
    target->Set(String::New("XwcFreeStringList"), _glx_XwcFreeStringList->GetFunction());

    Local<FunctionTemplate> _glx_XTextPropertyToStringList = FunctionTemplate::New(glx_XTextPropertyToStringList);
    target->Set(String::New("XTextPropertyToStringList"), _glx_XTextPropertyToStringList->GetFunction());

    Local<FunctionTemplate> _glx_XmbTextPropertyToTextList = FunctionTemplate::New(glx_XmbTextPropertyToTextList);
    target->Set(String::New("XmbTextPropertyToTextList"), _glx_XmbTextPropertyToTextList->GetFunction());

    Local<FunctionTemplate> _glx_XwcTextPropertyToTextList = FunctionTemplate::New(glx_XwcTextPropertyToTextList);
    target->Set(String::New("XwcTextPropertyToTextList"), _glx_XwcTextPropertyToTextList->GetFunction());

    Local<FunctionTemplate> _glx_Xutf8TextPropertyToTextList = FunctionTemplate::New(glx_Xutf8TextPropertyToTextList);
    target->Set(String::New("Xutf8TextPropertyToTextList"), _glx_Xutf8TextPropertyToTextList->GetFunction());

    Local<FunctionTemplate> _glx_XUnionRectWithRegion = FunctionTemplate::New(glx_XUnionRectWithRegion);
    target->Set(String::New("XUnionRectWithRegion"), _glx_XUnionRectWithRegion->GetFunction());

    Local<FunctionTemplate> _glx_XUnionRegion = FunctionTemplate::New(glx_XUnionRegion);
    target->Set(String::New("XUnionRegion"), _glx_XUnionRegion->GetFunction());

    Local<FunctionTemplate> _glx_XWMGeometry = FunctionTemplate::New(glx_XWMGeometry);
    target->Set(String::New("XWMGeometry"), _glx_XWMGeometry->GetFunction());

    Local<FunctionTemplate> _glx_XXorRegion = FunctionTemplate::New(glx_XXorRegion);
    target->Set(String::New("XXorRegion"), _glx_XXorRegion->GetFunction());

    Local<FunctionTemplate> _glx_glClearIndex = FunctionTemplate::New(glx_glClearIndex);
    target->Set(String::New("glClearIndex"), _glx_glClearIndex->GetFunction());

    Local<FunctionTemplate> _glx_glClearColor = FunctionTemplate::New(glx_glClearColor);
    target->Set(String::New("glClearColor"), _glx_glClearColor->GetFunction());

    Local<FunctionTemplate> _glx_glClear = FunctionTemplate::New(glx_glClear);
    target->Set(String::New("glClear"), _glx_glClear->GetFunction());

    Local<FunctionTemplate> _glx_glIndexMask = FunctionTemplate::New(glx_glIndexMask);
    target->Set(String::New("glIndexMask"), _glx_glIndexMask->GetFunction());

    Local<FunctionTemplate> _glx_glColorMask = FunctionTemplate::New(glx_glColorMask);
    target->Set(String::New("glColorMask"), _glx_glColorMask->GetFunction());

    Local<FunctionTemplate> _glx_glAlphaFunc = FunctionTemplate::New(glx_glAlphaFunc);
    target->Set(String::New("glAlphaFunc"), _glx_glAlphaFunc->GetFunction());

    Local<FunctionTemplate> _glx_glBlendFunc = FunctionTemplate::New(glx_glBlendFunc);
    target->Set(String::New("glBlendFunc"), _glx_glBlendFunc->GetFunction());

    Local<FunctionTemplate> _glx_glLogicOp = FunctionTemplate::New(glx_glLogicOp);
    target->Set(String::New("glLogicOp"), _glx_glLogicOp->GetFunction());

    Local<FunctionTemplate> _glx_glCullFace = FunctionTemplate::New(glx_glCullFace);
    target->Set(String::New("glCullFace"), _glx_glCullFace->GetFunction());

    Local<FunctionTemplate> _glx_glFrontFace = FunctionTemplate::New(glx_glFrontFace);
    target->Set(String::New("glFrontFace"), _glx_glFrontFace->GetFunction());

    Local<FunctionTemplate> _glx_glPointSize = FunctionTemplate::New(glx_glPointSize);
    target->Set(String::New("glPointSize"), _glx_glPointSize->GetFunction());

    Local<FunctionTemplate> _glx_glLineWidth = FunctionTemplate::New(glx_glLineWidth);
    target->Set(String::New("glLineWidth"), _glx_glLineWidth->GetFunction());

    Local<FunctionTemplate> _glx_glLineStipple = FunctionTemplate::New(glx_glLineStipple);
    target->Set(String::New("glLineStipple"), _glx_glLineStipple->GetFunction());

    Local<FunctionTemplate> _glx_glPolygonMode = FunctionTemplate::New(glx_glPolygonMode);
    target->Set(String::New("glPolygonMode"), _glx_glPolygonMode->GetFunction());

    Local<FunctionTemplate> _glx_glPolygonOffset = FunctionTemplate::New(glx_glPolygonOffset);
    target->Set(String::New("glPolygonOffset"), _glx_glPolygonOffset->GetFunction());

    Local<FunctionTemplate> _glx_glPolygonStipple = FunctionTemplate::New(glx_glPolygonStipple);
    target->Set(String::New("glPolygonStipple"), _glx_glPolygonStipple->GetFunction());

    Local<FunctionTemplate> _glx_glGetPolygonStipple = FunctionTemplate::New(glx_glGetPolygonStipple);
    target->Set(String::New("glGetPolygonStipple"), _glx_glGetPolygonStipple->GetFunction());

    Local<FunctionTemplate> _glx_glEdgeFlag = FunctionTemplate::New(glx_glEdgeFlag);
    target->Set(String::New("glEdgeFlag"), _glx_glEdgeFlag->GetFunction());

    Local<FunctionTemplate> _glx_glEdgeFlagv = FunctionTemplate::New(glx_glEdgeFlagv);
    target->Set(String::New("glEdgeFlagv"), _glx_glEdgeFlagv->GetFunction());

    Local<FunctionTemplate> _glx_glScissor = FunctionTemplate::New(glx_glScissor);
    target->Set(String::New("glScissor"), _glx_glScissor->GetFunction());

    Local<FunctionTemplate> _glx_glClipPlane = FunctionTemplate::New(glx_glClipPlane);
    target->Set(String::New("glClipPlane"), _glx_glClipPlane->GetFunction());

    Local<FunctionTemplate> _glx_glGetClipPlane = FunctionTemplate::New(glx_glGetClipPlane);
    target->Set(String::New("glGetClipPlane"), _glx_glGetClipPlane->GetFunction());

    Local<FunctionTemplate> _glx_glDrawBuffer = FunctionTemplate::New(glx_glDrawBuffer);
    target->Set(String::New("glDrawBuffer"), _glx_glDrawBuffer->GetFunction());

    Local<FunctionTemplate> _glx_glReadBuffer = FunctionTemplate::New(glx_glReadBuffer);
    target->Set(String::New("glReadBuffer"), _glx_glReadBuffer->GetFunction());

    Local<FunctionTemplate> _glx_glEnable = FunctionTemplate::New(glx_glEnable);
    target->Set(String::New("glEnable"), _glx_glEnable->GetFunction());

    Local<FunctionTemplate> _glx_glDisable = FunctionTemplate::New(glx_glDisable);
    target->Set(String::New("glDisable"), _glx_glDisable->GetFunction());

    Local<FunctionTemplate> _glx_glIsEnabled = FunctionTemplate::New(glx_glIsEnabled);
    target->Set(String::New("glIsEnabled"), _glx_glIsEnabled->GetFunction());

    Local<FunctionTemplate> _glx_glEnableClientState = FunctionTemplate::New(glx_glEnableClientState);
    target->Set(String::New("glEnableClientState"), _glx_glEnableClientState->GetFunction());

    Local<FunctionTemplate> _glx_glDisableClientState = FunctionTemplate::New(glx_glDisableClientState);
    target->Set(String::New("glDisableClientState"), _glx_glDisableClientState->GetFunction());

    Local<FunctionTemplate> _glx_glGetBooleanv = FunctionTemplate::New(glx_glGetBooleanv);
    target->Set(String::New("glGetBooleanv"), _glx_glGetBooleanv->GetFunction());

    Local<FunctionTemplate> _glx_glGetDoublev = FunctionTemplate::New(glx_glGetDoublev);
    target->Set(String::New("glGetDoublev"), _glx_glGetDoublev->GetFunction());

    Local<FunctionTemplate> _glx_glGetFloatv = FunctionTemplate::New(glx_glGetFloatv);
    target->Set(String::New("glGetFloatv"), _glx_glGetFloatv->GetFunction());

    Local<FunctionTemplate> _glx_glGetIntegerv = FunctionTemplate::New(glx_glGetIntegerv);
    target->Set(String::New("glGetIntegerv"), _glx_glGetIntegerv->GetFunction());

    Local<FunctionTemplate> _glx_glPushAttrib = FunctionTemplate::New(glx_glPushAttrib);
    target->Set(String::New("glPushAttrib"), _glx_glPushAttrib->GetFunction());

    Local<FunctionTemplate> _glx_glPopAttrib = FunctionTemplate::New(glx_glPopAttrib);
    target->Set(String::New("glPopAttrib"), _glx_glPopAttrib->GetFunction());

    Local<FunctionTemplate> _glx_glPushClientAttrib = FunctionTemplate::New(glx_glPushClientAttrib);
    target->Set(String::New("glPushClientAttrib"), _glx_glPushClientAttrib->GetFunction());

    Local<FunctionTemplate> _glx_glPopClientAttrib = FunctionTemplate::New(glx_glPopClientAttrib);
    target->Set(String::New("glPopClientAttrib"), _glx_glPopClientAttrib->GetFunction());

    Local<FunctionTemplate> _glx_glRenderMode = FunctionTemplate::New(glx_glRenderMode);
    target->Set(String::New("glRenderMode"), _glx_glRenderMode->GetFunction());

    Local<FunctionTemplate> _glx_glGetError = FunctionTemplate::New(glx_glGetError);
    target->Set(String::New("glGetError"), _glx_glGetError->GetFunction());

    Local<FunctionTemplate> _glx_glFinish = FunctionTemplate::New(glx_glFinish);
    target->Set(String::New("glFinish"), _glx_glFinish->GetFunction());

    Local<FunctionTemplate> _glx_glFlush = FunctionTemplate::New(glx_glFlush);
    target->Set(String::New("glFlush"), _glx_glFlush->GetFunction());

    Local<FunctionTemplate> _glx_glHint = FunctionTemplate::New(glx_glHint);
    target->Set(String::New("glHint"), _glx_glHint->GetFunction());

    Local<FunctionTemplate> _glx_glClearDepth = FunctionTemplate::New(glx_glClearDepth);
    target->Set(String::New("glClearDepth"), _glx_glClearDepth->GetFunction());

    Local<FunctionTemplate> _glx_glDepthFunc = FunctionTemplate::New(glx_glDepthFunc);
    target->Set(String::New("glDepthFunc"), _glx_glDepthFunc->GetFunction());

    Local<FunctionTemplate> _glx_glDepthMask = FunctionTemplate::New(glx_glDepthMask);
    target->Set(String::New("glDepthMask"), _glx_glDepthMask->GetFunction());

    Local<FunctionTemplate> _glx_glDepthRange = FunctionTemplate::New(glx_glDepthRange);
    target->Set(String::New("glDepthRange"), _glx_glDepthRange->GetFunction());

    Local<FunctionTemplate> _glx_glClearAccum = FunctionTemplate::New(glx_glClearAccum);
    target->Set(String::New("glClearAccum"), _glx_glClearAccum->GetFunction());

    Local<FunctionTemplate> _glx_glAccum = FunctionTemplate::New(glx_glAccum);
    target->Set(String::New("glAccum"), _glx_glAccum->GetFunction());

    Local<FunctionTemplate> _glx_glMatrixMode = FunctionTemplate::New(glx_glMatrixMode);
    target->Set(String::New("glMatrixMode"), _glx_glMatrixMode->GetFunction());

    Local<FunctionTemplate> _glx_glOrtho = FunctionTemplate::New(glx_glOrtho);
    target->Set(String::New("glOrtho"), _glx_glOrtho->GetFunction());

    Local<FunctionTemplate> _glx_glFrustum = FunctionTemplate::New(glx_glFrustum);
    target->Set(String::New("glFrustum"), _glx_glFrustum->GetFunction());

    Local<FunctionTemplate> _glx_glViewport = FunctionTemplate::New(glx_glViewport);
    target->Set(String::New("glViewport"), _glx_glViewport->GetFunction());

    Local<FunctionTemplate> _glx_glPushMatrix = FunctionTemplate::New(glx_glPushMatrix);
    target->Set(String::New("glPushMatrix"), _glx_glPushMatrix->GetFunction());

    Local<FunctionTemplate> _glx_glPopMatrix = FunctionTemplate::New(glx_glPopMatrix);
    target->Set(String::New("glPopMatrix"), _glx_glPopMatrix->GetFunction());

    Local<FunctionTemplate> _glx_glLoadIdentity = FunctionTemplate::New(glx_glLoadIdentity);
    target->Set(String::New("glLoadIdentity"), _glx_glLoadIdentity->GetFunction());

    Local<FunctionTemplate> _glx_glLoadMatrixd = FunctionTemplate::New(glx_glLoadMatrixd);
    target->Set(String::New("glLoadMatrixd"), _glx_glLoadMatrixd->GetFunction());

    Local<FunctionTemplate> _glx_glLoadMatrixf = FunctionTemplate::New(glx_glLoadMatrixf);
    target->Set(String::New("glLoadMatrixf"), _glx_glLoadMatrixf->GetFunction());

    Local<FunctionTemplate> _glx_glMultMatrixd = FunctionTemplate::New(glx_glMultMatrixd);
    target->Set(String::New("glMultMatrixd"), _glx_glMultMatrixd->GetFunction());

    Local<FunctionTemplate> _glx_glMultMatrixf = FunctionTemplate::New(glx_glMultMatrixf);
    target->Set(String::New("glMultMatrixf"), _glx_glMultMatrixf->GetFunction());

    Local<FunctionTemplate> _glx_glRotated = FunctionTemplate::New(glx_glRotated);
    target->Set(String::New("glRotated"), _glx_glRotated->GetFunction());

    Local<FunctionTemplate> _glx_glRotatef = FunctionTemplate::New(glx_glRotatef);
    target->Set(String::New("glRotatef"), _glx_glRotatef->GetFunction());

    Local<FunctionTemplate> _glx_glScaled = FunctionTemplate::New(glx_glScaled);
    target->Set(String::New("glScaled"), _glx_glScaled->GetFunction());

    Local<FunctionTemplate> _glx_glScalef = FunctionTemplate::New(glx_glScalef);
    target->Set(String::New("glScalef"), _glx_glScalef->GetFunction());

    Local<FunctionTemplate> _glx_glTranslated = FunctionTemplate::New(glx_glTranslated);
    target->Set(String::New("glTranslated"), _glx_glTranslated->GetFunction());

    Local<FunctionTemplate> _glx_glTranslatef = FunctionTemplate::New(glx_glTranslatef);
    target->Set(String::New("glTranslatef"), _glx_glTranslatef->GetFunction());

    Local<FunctionTemplate> _glx_glIsList = FunctionTemplate::New(glx_glIsList);
    target->Set(String::New("glIsList"), _glx_glIsList->GetFunction());

    Local<FunctionTemplate> _glx_glDeleteLists = FunctionTemplate::New(glx_glDeleteLists);
    target->Set(String::New("glDeleteLists"), _glx_glDeleteLists->GetFunction());

    Local<FunctionTemplate> _glx_glGenLists = FunctionTemplate::New(glx_glGenLists);
    target->Set(String::New("glGenLists"), _glx_glGenLists->GetFunction());

    Local<FunctionTemplate> _glx_glNewList = FunctionTemplate::New(glx_glNewList);
    target->Set(String::New("glNewList"), _glx_glNewList->GetFunction());

    Local<FunctionTemplate> _glx_glEndList = FunctionTemplate::New(glx_glEndList);
    target->Set(String::New("glEndList"), _glx_glEndList->GetFunction());

    Local<FunctionTemplate> _glx_glCallList = FunctionTemplate::New(glx_glCallList);
    target->Set(String::New("glCallList"), _glx_glCallList->GetFunction());

    Local<FunctionTemplate> _glx_glCallLists = FunctionTemplate::New(glx_glCallLists);
    target->Set(String::New("glCallLists"), _glx_glCallLists->GetFunction());

    Local<FunctionTemplate> _glx_glListBase = FunctionTemplate::New(glx_glListBase);
    target->Set(String::New("glListBase"), _glx_glListBase->GetFunction());

    Local<FunctionTemplate> _glx_glBegin = FunctionTemplate::New(glx_glBegin);
    target->Set(String::New("glBegin"), _glx_glBegin->GetFunction());

    Local<FunctionTemplate> _glx_glEnd = FunctionTemplate::New(glx_glEnd);
    target->Set(String::New("glEnd"), _glx_glEnd->GetFunction());

    Local<FunctionTemplate> _glx_glVertex2d = FunctionTemplate::New(glx_glVertex2d);
    target->Set(String::New("glVertex2d"), _glx_glVertex2d->GetFunction());

    Local<FunctionTemplate> _glx_glVertex2f = FunctionTemplate::New(glx_glVertex2f);
    target->Set(String::New("glVertex2f"), _glx_glVertex2f->GetFunction());

    Local<FunctionTemplate> _glx_glVertex2i = FunctionTemplate::New(glx_glVertex2i);
    target->Set(String::New("glVertex2i"), _glx_glVertex2i->GetFunction());

    Local<FunctionTemplate> _glx_glVertex2s = FunctionTemplate::New(glx_glVertex2s);
    target->Set(String::New("glVertex2s"), _glx_glVertex2s->GetFunction());

    Local<FunctionTemplate> _glx_glVertex3d = FunctionTemplate::New(glx_glVertex3d);
    target->Set(String::New("glVertex3d"), _glx_glVertex3d->GetFunction());

    Local<FunctionTemplate> _glx_glVertex3f = FunctionTemplate::New(glx_glVertex3f);
    target->Set(String::New("glVertex3f"), _glx_glVertex3f->GetFunction());

    Local<FunctionTemplate> _glx_glVertex3i = FunctionTemplate::New(glx_glVertex3i);
    target->Set(String::New("glVertex3i"), _glx_glVertex3i->GetFunction());

    Local<FunctionTemplate> _glx_glVertex3s = FunctionTemplate::New(glx_glVertex3s);
    target->Set(String::New("glVertex3s"), _glx_glVertex3s->GetFunction());

    Local<FunctionTemplate> _glx_glVertex4d = FunctionTemplate::New(glx_glVertex4d);
    target->Set(String::New("glVertex4d"), _glx_glVertex4d->GetFunction());

    Local<FunctionTemplate> _glx_glVertex4f = FunctionTemplate::New(glx_glVertex4f);
    target->Set(String::New("glVertex4f"), _glx_glVertex4f->GetFunction());

    Local<FunctionTemplate> _glx_glVertex4i = FunctionTemplate::New(glx_glVertex4i);
    target->Set(String::New("glVertex4i"), _glx_glVertex4i->GetFunction());

    Local<FunctionTemplate> _glx_glVertex4s = FunctionTemplate::New(glx_glVertex4s);
    target->Set(String::New("glVertex4s"), _glx_glVertex4s->GetFunction());

    Local<FunctionTemplate> _glx_glVertex2dv = FunctionTemplate::New(glx_glVertex2dv);
    target->Set(String::New("glVertex2dv"), _glx_glVertex2dv->GetFunction());

    Local<FunctionTemplate> _glx_glVertex2fv = FunctionTemplate::New(glx_glVertex2fv);
    target->Set(String::New("glVertex2fv"), _glx_glVertex2fv->GetFunction());

    Local<FunctionTemplate> _glx_glVertex2iv = FunctionTemplate::New(glx_glVertex2iv);
    target->Set(String::New("glVertex2iv"), _glx_glVertex2iv->GetFunction());

    Local<FunctionTemplate> _glx_glVertex2sv = FunctionTemplate::New(glx_glVertex2sv);
    target->Set(String::New("glVertex2sv"), _glx_glVertex2sv->GetFunction());

    Local<FunctionTemplate> _glx_glVertex3dv = FunctionTemplate::New(glx_glVertex3dv);
    target->Set(String::New("glVertex3dv"), _glx_glVertex3dv->GetFunction());

    Local<FunctionTemplate> _glx_glVertex3fv = FunctionTemplate::New(glx_glVertex3fv);
    target->Set(String::New("glVertex3fv"), _glx_glVertex3fv->GetFunction());

    Local<FunctionTemplate> _glx_glVertex3iv = FunctionTemplate::New(glx_glVertex3iv);
    target->Set(String::New("glVertex3iv"), _glx_glVertex3iv->GetFunction());

    Local<FunctionTemplate> _glx_glVertex3sv = FunctionTemplate::New(glx_glVertex3sv);
    target->Set(String::New("glVertex3sv"), _glx_glVertex3sv->GetFunction());

    Local<FunctionTemplate> _glx_glVertex4dv = FunctionTemplate::New(glx_glVertex4dv);
    target->Set(String::New("glVertex4dv"), _glx_glVertex4dv->GetFunction());

    Local<FunctionTemplate> _glx_glVertex4fv = FunctionTemplate::New(glx_glVertex4fv);
    target->Set(String::New("glVertex4fv"), _glx_glVertex4fv->GetFunction());

    Local<FunctionTemplate> _glx_glVertex4iv = FunctionTemplate::New(glx_glVertex4iv);
    target->Set(String::New("glVertex4iv"), _glx_glVertex4iv->GetFunction());

    Local<FunctionTemplate> _glx_glVertex4sv = FunctionTemplate::New(glx_glVertex4sv);
    target->Set(String::New("glVertex4sv"), _glx_glVertex4sv->GetFunction());

    Local<FunctionTemplate> _glx_glNormal3b = FunctionTemplate::New(glx_glNormal3b);
    target->Set(String::New("glNormal3b"), _glx_glNormal3b->GetFunction());

    Local<FunctionTemplate> _glx_glNormal3d = FunctionTemplate::New(glx_glNormal3d);
    target->Set(String::New("glNormal3d"), _glx_glNormal3d->GetFunction());

    Local<FunctionTemplate> _glx_glNormal3f = FunctionTemplate::New(glx_glNormal3f);
    target->Set(String::New("glNormal3f"), _glx_glNormal3f->GetFunction());

    Local<FunctionTemplate> _glx_glNormal3i = FunctionTemplate::New(glx_glNormal3i);
    target->Set(String::New("glNormal3i"), _glx_glNormal3i->GetFunction());

    Local<FunctionTemplate> _glx_glNormal3s = FunctionTemplate::New(glx_glNormal3s);
    target->Set(String::New("glNormal3s"), _glx_glNormal3s->GetFunction());

    Local<FunctionTemplate> _glx_glNormal3bv = FunctionTemplate::New(glx_glNormal3bv);
    target->Set(String::New("glNormal3bv"), _glx_glNormal3bv->GetFunction());

    Local<FunctionTemplate> _glx_glNormal3dv = FunctionTemplate::New(glx_glNormal3dv);
    target->Set(String::New("glNormal3dv"), _glx_glNormal3dv->GetFunction());

    Local<FunctionTemplate> _glx_glNormal3fv = FunctionTemplate::New(glx_glNormal3fv);
    target->Set(String::New("glNormal3fv"), _glx_glNormal3fv->GetFunction());

    Local<FunctionTemplate> _glx_glNormal3iv = FunctionTemplate::New(glx_glNormal3iv);
    target->Set(String::New("glNormal3iv"), _glx_glNormal3iv->GetFunction());

    Local<FunctionTemplate> _glx_glNormal3sv = FunctionTemplate::New(glx_glNormal3sv);
    target->Set(String::New("glNormal3sv"), _glx_glNormal3sv->GetFunction());

    Local<FunctionTemplate> _glx_glIndexd = FunctionTemplate::New(glx_glIndexd);
    target->Set(String::New("glIndexd"), _glx_glIndexd->GetFunction());

    Local<FunctionTemplate> _glx_glIndexf = FunctionTemplate::New(glx_glIndexf);
    target->Set(String::New("glIndexf"), _glx_glIndexf->GetFunction());

    Local<FunctionTemplate> _glx_glIndexi = FunctionTemplate::New(glx_glIndexi);
    target->Set(String::New("glIndexi"), _glx_glIndexi->GetFunction());

    Local<FunctionTemplate> _glx_glIndexs = FunctionTemplate::New(glx_glIndexs);
    target->Set(String::New("glIndexs"), _glx_glIndexs->GetFunction());

    Local<FunctionTemplate> _glx_glIndexub = FunctionTemplate::New(glx_glIndexub);
    target->Set(String::New("glIndexub"), _glx_glIndexub->GetFunction());

    Local<FunctionTemplate> _glx_glIndexdv = FunctionTemplate::New(glx_glIndexdv);
    target->Set(String::New("glIndexdv"), _glx_glIndexdv->GetFunction());

    Local<FunctionTemplate> _glx_glIndexfv = FunctionTemplate::New(glx_glIndexfv);
    target->Set(String::New("glIndexfv"), _glx_glIndexfv->GetFunction());

    Local<FunctionTemplate> _glx_glIndexiv = FunctionTemplate::New(glx_glIndexiv);
    target->Set(String::New("glIndexiv"), _glx_glIndexiv->GetFunction());

    Local<FunctionTemplate> _glx_glIndexsv = FunctionTemplate::New(glx_glIndexsv);
    target->Set(String::New("glIndexsv"), _glx_glIndexsv->GetFunction());

    Local<FunctionTemplate> _glx_glIndexubv = FunctionTemplate::New(glx_glIndexubv);
    target->Set(String::New("glIndexubv"), _glx_glIndexubv->GetFunction());

    Local<FunctionTemplate> _glx_glColor3b = FunctionTemplate::New(glx_glColor3b);
    target->Set(String::New("glColor3b"), _glx_glColor3b->GetFunction());

    Local<FunctionTemplate> _glx_glColor3d = FunctionTemplate::New(glx_glColor3d);
    target->Set(String::New("glColor3d"), _glx_glColor3d->GetFunction());

    Local<FunctionTemplate> _glx_glColor3f = FunctionTemplate::New(glx_glColor3f);
    target->Set(String::New("glColor3f"), _glx_glColor3f->GetFunction());

    Local<FunctionTemplate> _glx_glColor3i = FunctionTemplate::New(glx_glColor3i);
    target->Set(String::New("glColor3i"), _glx_glColor3i->GetFunction());

    Local<FunctionTemplate> _glx_glColor3s = FunctionTemplate::New(glx_glColor3s);
    target->Set(String::New("glColor3s"), _glx_glColor3s->GetFunction());

    Local<FunctionTemplate> _glx_glColor3ub = FunctionTemplate::New(glx_glColor3ub);
    target->Set(String::New("glColor3ub"), _glx_glColor3ub->GetFunction());

    Local<FunctionTemplate> _glx_glColor3ui = FunctionTemplate::New(glx_glColor3ui);
    target->Set(String::New("glColor3ui"), _glx_glColor3ui->GetFunction());

    Local<FunctionTemplate> _glx_glColor3us = FunctionTemplate::New(glx_glColor3us);
    target->Set(String::New("glColor3us"), _glx_glColor3us->GetFunction());

    Local<FunctionTemplate> _glx_glColor4b = FunctionTemplate::New(glx_glColor4b);
    target->Set(String::New("glColor4b"), _glx_glColor4b->GetFunction());

    Local<FunctionTemplate> _glx_glColor4d = FunctionTemplate::New(glx_glColor4d);
    target->Set(String::New("glColor4d"), _glx_glColor4d->GetFunction());

    Local<FunctionTemplate> _glx_glColor4f = FunctionTemplate::New(glx_glColor4f);
    target->Set(String::New("glColor4f"), _glx_glColor4f->GetFunction());

    Local<FunctionTemplate> _glx_glColor4i = FunctionTemplate::New(glx_glColor4i);
    target->Set(String::New("glColor4i"), _glx_glColor4i->GetFunction());

    Local<FunctionTemplate> _glx_glColor4s = FunctionTemplate::New(glx_glColor4s);
    target->Set(String::New("glColor4s"), _glx_glColor4s->GetFunction());

    Local<FunctionTemplate> _glx_glColor4ub = FunctionTemplate::New(glx_glColor4ub);
    target->Set(String::New("glColor4ub"), _glx_glColor4ub->GetFunction());

    Local<FunctionTemplate> _glx_glColor4ui = FunctionTemplate::New(glx_glColor4ui);
    target->Set(String::New("glColor4ui"), _glx_glColor4ui->GetFunction());

    Local<FunctionTemplate> _glx_glColor4us = FunctionTemplate::New(glx_glColor4us);
    target->Set(String::New("glColor4us"), _glx_glColor4us->GetFunction());

    Local<FunctionTemplate> _glx_glColor3bv = FunctionTemplate::New(glx_glColor3bv);
    target->Set(String::New("glColor3bv"), _glx_glColor3bv->GetFunction());

    Local<FunctionTemplate> _glx_glColor3dv = FunctionTemplate::New(glx_glColor3dv);
    target->Set(String::New("glColor3dv"), _glx_glColor3dv->GetFunction());

    Local<FunctionTemplate> _glx_glColor3fv = FunctionTemplate::New(glx_glColor3fv);
    target->Set(String::New("glColor3fv"), _glx_glColor3fv->GetFunction());

    Local<FunctionTemplate> _glx_glColor3iv = FunctionTemplate::New(glx_glColor3iv);
    target->Set(String::New("glColor3iv"), _glx_glColor3iv->GetFunction());

    Local<FunctionTemplate> _glx_glColor3sv = FunctionTemplate::New(glx_glColor3sv);
    target->Set(String::New("glColor3sv"), _glx_glColor3sv->GetFunction());

    Local<FunctionTemplate> _glx_glColor3ubv = FunctionTemplate::New(glx_glColor3ubv);
    target->Set(String::New("glColor3ubv"), _glx_glColor3ubv->GetFunction());

    Local<FunctionTemplate> _glx_glColor3uiv = FunctionTemplate::New(glx_glColor3uiv);
    target->Set(String::New("glColor3uiv"), _glx_glColor3uiv->GetFunction());

    Local<FunctionTemplate> _glx_glColor3usv = FunctionTemplate::New(glx_glColor3usv);
    target->Set(String::New("glColor3usv"), _glx_glColor3usv->GetFunction());

    Local<FunctionTemplate> _glx_glColor4bv = FunctionTemplate::New(glx_glColor4bv);
    target->Set(String::New("glColor4bv"), _glx_glColor4bv->GetFunction());

    Local<FunctionTemplate> _glx_glColor4dv = FunctionTemplate::New(glx_glColor4dv);
    target->Set(String::New("glColor4dv"), _glx_glColor4dv->GetFunction());

    Local<FunctionTemplate> _glx_glColor4fv = FunctionTemplate::New(glx_glColor4fv);
    target->Set(String::New("glColor4fv"), _glx_glColor4fv->GetFunction());

    Local<FunctionTemplate> _glx_glColor4iv = FunctionTemplate::New(glx_glColor4iv);
    target->Set(String::New("glColor4iv"), _glx_glColor4iv->GetFunction());

    Local<FunctionTemplate> _glx_glColor4sv = FunctionTemplate::New(glx_glColor4sv);
    target->Set(String::New("glColor4sv"), _glx_glColor4sv->GetFunction());

    Local<FunctionTemplate> _glx_glColor4ubv = FunctionTemplate::New(glx_glColor4ubv);
    target->Set(String::New("glColor4ubv"), _glx_glColor4ubv->GetFunction());

    Local<FunctionTemplate> _glx_glColor4uiv = FunctionTemplate::New(glx_glColor4uiv);
    target->Set(String::New("glColor4uiv"), _glx_glColor4uiv->GetFunction());

    Local<FunctionTemplate> _glx_glColor4usv = FunctionTemplate::New(glx_glColor4usv);
    target->Set(String::New("glColor4usv"), _glx_glColor4usv->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord1d = FunctionTemplate::New(glx_glTexCoord1d);
    target->Set(String::New("glTexCoord1d"), _glx_glTexCoord1d->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord1f = FunctionTemplate::New(glx_glTexCoord1f);
    target->Set(String::New("glTexCoord1f"), _glx_glTexCoord1f->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord1i = FunctionTemplate::New(glx_glTexCoord1i);
    target->Set(String::New("glTexCoord1i"), _glx_glTexCoord1i->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord1s = FunctionTemplate::New(glx_glTexCoord1s);
    target->Set(String::New("glTexCoord1s"), _glx_glTexCoord1s->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord2d = FunctionTemplate::New(glx_glTexCoord2d);
    target->Set(String::New("glTexCoord2d"), _glx_glTexCoord2d->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord2f = FunctionTemplate::New(glx_glTexCoord2f);
    target->Set(String::New("glTexCoord2f"), _glx_glTexCoord2f->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord2i = FunctionTemplate::New(glx_glTexCoord2i);
    target->Set(String::New("glTexCoord2i"), _glx_glTexCoord2i->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord2s = FunctionTemplate::New(glx_glTexCoord2s);
    target->Set(String::New("glTexCoord2s"), _glx_glTexCoord2s->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord3d = FunctionTemplate::New(glx_glTexCoord3d);
    target->Set(String::New("glTexCoord3d"), _glx_glTexCoord3d->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord3f = FunctionTemplate::New(glx_glTexCoord3f);
    target->Set(String::New("glTexCoord3f"), _glx_glTexCoord3f->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord3i = FunctionTemplate::New(glx_glTexCoord3i);
    target->Set(String::New("glTexCoord3i"), _glx_glTexCoord3i->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord3s = FunctionTemplate::New(glx_glTexCoord3s);
    target->Set(String::New("glTexCoord3s"), _glx_glTexCoord3s->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord4d = FunctionTemplate::New(glx_glTexCoord4d);
    target->Set(String::New("glTexCoord4d"), _glx_glTexCoord4d->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord4f = FunctionTemplate::New(glx_glTexCoord4f);
    target->Set(String::New("glTexCoord4f"), _glx_glTexCoord4f->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord4i = FunctionTemplate::New(glx_glTexCoord4i);
    target->Set(String::New("glTexCoord4i"), _glx_glTexCoord4i->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord4s = FunctionTemplate::New(glx_glTexCoord4s);
    target->Set(String::New("glTexCoord4s"), _glx_glTexCoord4s->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord1dv = FunctionTemplate::New(glx_glTexCoord1dv);
    target->Set(String::New("glTexCoord1dv"), _glx_glTexCoord1dv->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord1fv = FunctionTemplate::New(glx_glTexCoord1fv);
    target->Set(String::New("glTexCoord1fv"), _glx_glTexCoord1fv->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord1iv = FunctionTemplate::New(glx_glTexCoord1iv);
    target->Set(String::New("glTexCoord1iv"), _glx_glTexCoord1iv->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord1sv = FunctionTemplate::New(glx_glTexCoord1sv);
    target->Set(String::New("glTexCoord1sv"), _glx_glTexCoord1sv->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord2dv = FunctionTemplate::New(glx_glTexCoord2dv);
    target->Set(String::New("glTexCoord2dv"), _glx_glTexCoord2dv->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord2fv = FunctionTemplate::New(glx_glTexCoord2fv);
    target->Set(String::New("glTexCoord2fv"), _glx_glTexCoord2fv->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord2iv = FunctionTemplate::New(glx_glTexCoord2iv);
    target->Set(String::New("glTexCoord2iv"), _glx_glTexCoord2iv->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord2sv = FunctionTemplate::New(glx_glTexCoord2sv);
    target->Set(String::New("glTexCoord2sv"), _glx_glTexCoord2sv->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord3dv = FunctionTemplate::New(glx_glTexCoord3dv);
    target->Set(String::New("glTexCoord3dv"), _glx_glTexCoord3dv->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord3fv = FunctionTemplate::New(glx_glTexCoord3fv);
    target->Set(String::New("glTexCoord3fv"), _glx_glTexCoord3fv->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord3iv = FunctionTemplate::New(glx_glTexCoord3iv);
    target->Set(String::New("glTexCoord3iv"), _glx_glTexCoord3iv->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord3sv = FunctionTemplate::New(glx_glTexCoord3sv);
    target->Set(String::New("glTexCoord3sv"), _glx_glTexCoord3sv->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord4dv = FunctionTemplate::New(glx_glTexCoord4dv);
    target->Set(String::New("glTexCoord4dv"), _glx_glTexCoord4dv->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord4fv = FunctionTemplate::New(glx_glTexCoord4fv);
    target->Set(String::New("glTexCoord4fv"), _glx_glTexCoord4fv->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord4iv = FunctionTemplate::New(glx_glTexCoord4iv);
    target->Set(String::New("glTexCoord4iv"), _glx_glTexCoord4iv->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoord4sv = FunctionTemplate::New(glx_glTexCoord4sv);
    target->Set(String::New("glTexCoord4sv"), _glx_glTexCoord4sv->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos2d = FunctionTemplate::New(glx_glRasterPos2d);
    target->Set(String::New("glRasterPos2d"), _glx_glRasterPos2d->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos2f = FunctionTemplate::New(glx_glRasterPos2f);
    target->Set(String::New("glRasterPos2f"), _glx_glRasterPos2f->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos2i = FunctionTemplate::New(glx_glRasterPos2i);
    target->Set(String::New("glRasterPos2i"), _glx_glRasterPos2i->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos2s = FunctionTemplate::New(glx_glRasterPos2s);
    target->Set(String::New("glRasterPos2s"), _glx_glRasterPos2s->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos3d = FunctionTemplate::New(glx_glRasterPos3d);
    target->Set(String::New("glRasterPos3d"), _glx_glRasterPos3d->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos3f = FunctionTemplate::New(glx_glRasterPos3f);
    target->Set(String::New("glRasterPos3f"), _glx_glRasterPos3f->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos3i = FunctionTemplate::New(glx_glRasterPos3i);
    target->Set(String::New("glRasterPos3i"), _glx_glRasterPos3i->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos3s = FunctionTemplate::New(glx_glRasterPos3s);
    target->Set(String::New("glRasterPos3s"), _glx_glRasterPos3s->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos4d = FunctionTemplate::New(glx_glRasterPos4d);
    target->Set(String::New("glRasterPos4d"), _glx_glRasterPos4d->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos4f = FunctionTemplate::New(glx_glRasterPos4f);
    target->Set(String::New("glRasterPos4f"), _glx_glRasterPos4f->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos4i = FunctionTemplate::New(glx_glRasterPos4i);
    target->Set(String::New("glRasterPos4i"), _glx_glRasterPos4i->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos4s = FunctionTemplate::New(glx_glRasterPos4s);
    target->Set(String::New("glRasterPos4s"), _glx_glRasterPos4s->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos2dv = FunctionTemplate::New(glx_glRasterPos2dv);
    target->Set(String::New("glRasterPos2dv"), _glx_glRasterPos2dv->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos2fv = FunctionTemplate::New(glx_glRasterPos2fv);
    target->Set(String::New("glRasterPos2fv"), _glx_glRasterPos2fv->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos2iv = FunctionTemplate::New(glx_glRasterPos2iv);
    target->Set(String::New("glRasterPos2iv"), _glx_glRasterPos2iv->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos2sv = FunctionTemplate::New(glx_glRasterPos2sv);
    target->Set(String::New("glRasterPos2sv"), _glx_glRasterPos2sv->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos3dv = FunctionTemplate::New(glx_glRasterPos3dv);
    target->Set(String::New("glRasterPos3dv"), _glx_glRasterPos3dv->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos3fv = FunctionTemplate::New(glx_glRasterPos3fv);
    target->Set(String::New("glRasterPos3fv"), _glx_glRasterPos3fv->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos3iv = FunctionTemplate::New(glx_glRasterPos3iv);
    target->Set(String::New("glRasterPos3iv"), _glx_glRasterPos3iv->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos3sv = FunctionTemplate::New(glx_glRasterPos3sv);
    target->Set(String::New("glRasterPos3sv"), _glx_glRasterPos3sv->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos4dv = FunctionTemplate::New(glx_glRasterPos4dv);
    target->Set(String::New("glRasterPos4dv"), _glx_glRasterPos4dv->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos4fv = FunctionTemplate::New(glx_glRasterPos4fv);
    target->Set(String::New("glRasterPos4fv"), _glx_glRasterPos4fv->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos4iv = FunctionTemplate::New(glx_glRasterPos4iv);
    target->Set(String::New("glRasterPos4iv"), _glx_glRasterPos4iv->GetFunction());

    Local<FunctionTemplate> _glx_glRasterPos4sv = FunctionTemplate::New(glx_glRasterPos4sv);
    target->Set(String::New("glRasterPos4sv"), _glx_glRasterPos4sv->GetFunction());

    Local<FunctionTemplate> _glx_glRectd = FunctionTemplate::New(glx_glRectd);
    target->Set(String::New("glRectd"), _glx_glRectd->GetFunction());

    Local<FunctionTemplate> _glx_glRectf = FunctionTemplate::New(glx_glRectf);
    target->Set(String::New("glRectf"), _glx_glRectf->GetFunction());

    Local<FunctionTemplate> _glx_glRecti = FunctionTemplate::New(glx_glRecti);
    target->Set(String::New("glRecti"), _glx_glRecti->GetFunction());

    Local<FunctionTemplate> _glx_glRects = FunctionTemplate::New(glx_glRects);
    target->Set(String::New("glRects"), _glx_glRects->GetFunction());

    Local<FunctionTemplate> _glx_glRectdv = FunctionTemplate::New(glx_glRectdv);
    target->Set(String::New("glRectdv"), _glx_glRectdv->GetFunction());

    Local<FunctionTemplate> _glx_glRectfv = FunctionTemplate::New(glx_glRectfv);
    target->Set(String::New("glRectfv"), _glx_glRectfv->GetFunction());

    Local<FunctionTemplate> _glx_glRectiv = FunctionTemplate::New(glx_glRectiv);
    target->Set(String::New("glRectiv"), _glx_glRectiv->GetFunction());

    Local<FunctionTemplate> _glx_glRectsv = FunctionTemplate::New(glx_glRectsv);
    target->Set(String::New("glRectsv"), _glx_glRectsv->GetFunction());

    Local<FunctionTemplate> _glx_glVertexPointer = FunctionTemplate::New(glx_glVertexPointer);
    target->Set(String::New("glVertexPointer"), _glx_glVertexPointer->GetFunction());

    Local<FunctionTemplate> _glx_glNormalPointer = FunctionTemplate::New(glx_glNormalPointer);
    target->Set(String::New("glNormalPointer"), _glx_glNormalPointer->GetFunction());

    Local<FunctionTemplate> _glx_glColorPointer = FunctionTemplate::New(glx_glColorPointer);
    target->Set(String::New("glColorPointer"), _glx_glColorPointer->GetFunction());

    Local<FunctionTemplate> _glx_glIndexPointer = FunctionTemplate::New(glx_glIndexPointer);
    target->Set(String::New("glIndexPointer"), _glx_glIndexPointer->GetFunction());

    Local<FunctionTemplate> _glx_glTexCoordPointer = FunctionTemplate::New(glx_glTexCoordPointer);
    target->Set(String::New("glTexCoordPointer"), _glx_glTexCoordPointer->GetFunction());

    Local<FunctionTemplate> _glx_glEdgeFlagPointer = FunctionTemplate::New(glx_glEdgeFlagPointer);
    target->Set(String::New("glEdgeFlagPointer"), _glx_glEdgeFlagPointer->GetFunction());

    Local<FunctionTemplate> _glx_glGetPointerv = FunctionTemplate::New(glx_glGetPointerv);
    target->Set(String::New("glGetPointerv"), _glx_glGetPointerv->GetFunction());

    Local<FunctionTemplate> _glx_glArrayElement = FunctionTemplate::New(glx_glArrayElement);
    target->Set(String::New("glArrayElement"), _glx_glArrayElement->GetFunction());

    Local<FunctionTemplate> _glx_glDrawArrays = FunctionTemplate::New(glx_glDrawArrays);
    target->Set(String::New("glDrawArrays"), _glx_glDrawArrays->GetFunction());

    Local<FunctionTemplate> _glx_glDrawElements = FunctionTemplate::New(glx_glDrawElements);
    target->Set(String::New("glDrawElements"), _glx_glDrawElements->GetFunction());

    Local<FunctionTemplate> _glx_glInterleavedArrays = FunctionTemplate::New(glx_glInterleavedArrays);
    target->Set(String::New("glInterleavedArrays"), _glx_glInterleavedArrays->GetFunction());

    Local<FunctionTemplate> _glx_glShadeModel = FunctionTemplate::New(glx_glShadeModel);
    target->Set(String::New("glShadeModel"), _glx_glShadeModel->GetFunction());

    Local<FunctionTemplate> _glx_glLightf = FunctionTemplate::New(glx_glLightf);
    target->Set(String::New("glLightf"), _glx_glLightf->GetFunction());

    Local<FunctionTemplate> _glx_glLighti = FunctionTemplate::New(glx_glLighti);
    target->Set(String::New("glLighti"), _glx_glLighti->GetFunction());

    Local<FunctionTemplate> _glx_glLightfv = FunctionTemplate::New(glx_glLightfv);
    target->Set(String::New("glLightfv"), _glx_glLightfv->GetFunction());

    Local<FunctionTemplate> _glx_glLightiv = FunctionTemplate::New(glx_glLightiv);
    target->Set(String::New("glLightiv"), _glx_glLightiv->GetFunction());

    Local<FunctionTemplate> _glx_glGetLightfv = FunctionTemplate::New(glx_glGetLightfv);
    target->Set(String::New("glGetLightfv"), _glx_glGetLightfv->GetFunction());

    Local<FunctionTemplate> _glx_glGetLightiv = FunctionTemplate::New(glx_glGetLightiv);
    target->Set(String::New("glGetLightiv"), _glx_glGetLightiv->GetFunction());

    Local<FunctionTemplate> _glx_glLightModelf = FunctionTemplate::New(glx_glLightModelf);
    target->Set(String::New("glLightModelf"), _glx_glLightModelf->GetFunction());

    Local<FunctionTemplate> _glx_glLightModeli = FunctionTemplate::New(glx_glLightModeli);
    target->Set(String::New("glLightModeli"), _glx_glLightModeli->GetFunction());

    Local<FunctionTemplate> _glx_glLightModelfv = FunctionTemplate::New(glx_glLightModelfv);
    target->Set(String::New("glLightModelfv"), _glx_glLightModelfv->GetFunction());

    Local<FunctionTemplate> _glx_glLightModeliv = FunctionTemplate::New(glx_glLightModeliv);
    target->Set(String::New("glLightModeliv"), _glx_glLightModeliv->GetFunction());

    Local<FunctionTemplate> _glx_glMaterialf = FunctionTemplate::New(glx_glMaterialf);
    target->Set(String::New("glMaterialf"), _glx_glMaterialf->GetFunction());

    Local<FunctionTemplate> _glx_glMateriali = FunctionTemplate::New(glx_glMateriali);
    target->Set(String::New("glMateriali"), _glx_glMateriali->GetFunction());

    Local<FunctionTemplate> _glx_glMaterialfv = FunctionTemplate::New(glx_glMaterialfv);
    target->Set(String::New("glMaterialfv"), _glx_glMaterialfv->GetFunction());

    Local<FunctionTemplate> _glx_glMaterialiv = FunctionTemplate::New(glx_glMaterialiv);
    target->Set(String::New("glMaterialiv"), _glx_glMaterialiv->GetFunction());

    Local<FunctionTemplate> _glx_glGetMaterialfv = FunctionTemplate::New(glx_glGetMaterialfv);
    target->Set(String::New("glGetMaterialfv"), _glx_glGetMaterialfv->GetFunction());

    Local<FunctionTemplate> _glx_glGetMaterialiv = FunctionTemplate::New(glx_glGetMaterialiv);
    target->Set(String::New("glGetMaterialiv"), _glx_glGetMaterialiv->GetFunction());

    Local<FunctionTemplate> _glx_glColorMaterial = FunctionTemplate::New(glx_glColorMaterial);
    target->Set(String::New("glColorMaterial"), _glx_glColorMaterial->GetFunction());

    Local<FunctionTemplate> _glx_glPixelZoom = FunctionTemplate::New(glx_glPixelZoom);
    target->Set(String::New("glPixelZoom"), _glx_glPixelZoom->GetFunction());

    Local<FunctionTemplate> _glx_glPixelStoref = FunctionTemplate::New(glx_glPixelStoref);
    target->Set(String::New("glPixelStoref"), _glx_glPixelStoref->GetFunction());

    Local<FunctionTemplate> _glx_glPixelStorei = FunctionTemplate::New(glx_glPixelStorei);
    target->Set(String::New("glPixelStorei"), _glx_glPixelStorei->GetFunction());

    Local<FunctionTemplate> _glx_glPixelTransferf = FunctionTemplate::New(glx_glPixelTransferf);
    target->Set(String::New("glPixelTransferf"), _glx_glPixelTransferf->GetFunction());

    Local<FunctionTemplate> _glx_glPixelTransferi = FunctionTemplate::New(glx_glPixelTransferi);
    target->Set(String::New("glPixelTransferi"), _glx_glPixelTransferi->GetFunction());

    Local<FunctionTemplate> _glx_glPixelMapfv = FunctionTemplate::New(glx_glPixelMapfv);
    target->Set(String::New("glPixelMapfv"), _glx_glPixelMapfv->GetFunction());

    Local<FunctionTemplate> _glx_glPixelMapuiv = FunctionTemplate::New(glx_glPixelMapuiv);
    target->Set(String::New("glPixelMapuiv"), _glx_glPixelMapuiv->GetFunction());

    Local<FunctionTemplate> _glx_glPixelMapusv = FunctionTemplate::New(glx_glPixelMapusv);
    target->Set(String::New("glPixelMapusv"), _glx_glPixelMapusv->GetFunction());

    Local<FunctionTemplate> _glx_glGetPixelMapfv = FunctionTemplate::New(glx_glGetPixelMapfv);
    target->Set(String::New("glGetPixelMapfv"), _glx_glGetPixelMapfv->GetFunction());

    Local<FunctionTemplate> _glx_glGetPixelMapuiv = FunctionTemplate::New(glx_glGetPixelMapuiv);
    target->Set(String::New("glGetPixelMapuiv"), _glx_glGetPixelMapuiv->GetFunction());

    Local<FunctionTemplate> _glx_glGetPixelMapusv = FunctionTemplate::New(glx_glGetPixelMapusv);
    target->Set(String::New("glGetPixelMapusv"), _glx_glGetPixelMapusv->GetFunction());

    Local<FunctionTemplate> _glx_glBitmap = FunctionTemplate::New(glx_glBitmap);
    target->Set(String::New("glBitmap"), _glx_glBitmap->GetFunction());

    Local<FunctionTemplate> _glx_glReadPixels = FunctionTemplate::New(glx_glReadPixels);
    target->Set(String::New("glReadPixels"), _glx_glReadPixels->GetFunction());

    Local<FunctionTemplate> _glx_glDrawPixels = FunctionTemplate::New(glx_glDrawPixels);
    target->Set(String::New("glDrawPixels"), _glx_glDrawPixels->GetFunction());

    Local<FunctionTemplate> _glx_glCopyPixels = FunctionTemplate::New(glx_glCopyPixels);
    target->Set(String::New("glCopyPixels"), _glx_glCopyPixels->GetFunction());

    Local<FunctionTemplate> _glx_glStencilFunc = FunctionTemplate::New(glx_glStencilFunc);
    target->Set(String::New("glStencilFunc"), _glx_glStencilFunc->GetFunction());

    Local<FunctionTemplate> _glx_glStencilMask = FunctionTemplate::New(glx_glStencilMask);
    target->Set(String::New("glStencilMask"), _glx_glStencilMask->GetFunction());

    Local<FunctionTemplate> _glx_glStencilOp = FunctionTemplate::New(glx_glStencilOp);
    target->Set(String::New("glStencilOp"), _glx_glStencilOp->GetFunction());

    Local<FunctionTemplate> _glx_glClearStencil = FunctionTemplate::New(glx_glClearStencil);
    target->Set(String::New("glClearStencil"), _glx_glClearStencil->GetFunction());

    Local<FunctionTemplate> _glx_glTexGend = FunctionTemplate::New(glx_glTexGend);
    target->Set(String::New("glTexGend"), _glx_glTexGend->GetFunction());

    Local<FunctionTemplate> _glx_glTexGenf = FunctionTemplate::New(glx_glTexGenf);
    target->Set(String::New("glTexGenf"), _glx_glTexGenf->GetFunction());

    Local<FunctionTemplate> _glx_glTexGeni = FunctionTemplate::New(glx_glTexGeni);
    target->Set(String::New("glTexGeni"), _glx_glTexGeni->GetFunction());

    Local<FunctionTemplate> _glx_glTexGendv = FunctionTemplate::New(glx_glTexGendv);
    target->Set(String::New("glTexGendv"), _glx_glTexGendv->GetFunction());

    Local<FunctionTemplate> _glx_glTexGenfv = FunctionTemplate::New(glx_glTexGenfv);
    target->Set(String::New("glTexGenfv"), _glx_glTexGenfv->GetFunction());

    Local<FunctionTemplate> _glx_glTexGeniv = FunctionTemplate::New(glx_glTexGeniv);
    target->Set(String::New("glTexGeniv"), _glx_glTexGeniv->GetFunction());

    Local<FunctionTemplate> _glx_glGetTexGendv = FunctionTemplate::New(glx_glGetTexGendv);
    target->Set(String::New("glGetTexGendv"), _glx_glGetTexGendv->GetFunction());

    Local<FunctionTemplate> _glx_glGetTexGenfv = FunctionTemplate::New(glx_glGetTexGenfv);
    target->Set(String::New("glGetTexGenfv"), _glx_glGetTexGenfv->GetFunction());

    Local<FunctionTemplate> _glx_glGetTexGeniv = FunctionTemplate::New(glx_glGetTexGeniv);
    target->Set(String::New("glGetTexGeniv"), _glx_glGetTexGeniv->GetFunction());

    Local<FunctionTemplate> _glx_glTexEnvf = FunctionTemplate::New(glx_glTexEnvf);
    target->Set(String::New("glTexEnvf"), _glx_glTexEnvf->GetFunction());

    Local<FunctionTemplate> _glx_glTexEnvi = FunctionTemplate::New(glx_glTexEnvi);
    target->Set(String::New("glTexEnvi"), _glx_glTexEnvi->GetFunction());

    Local<FunctionTemplate> _glx_glTexEnvfv = FunctionTemplate::New(glx_glTexEnvfv);
    target->Set(String::New("glTexEnvfv"), _glx_glTexEnvfv->GetFunction());

    Local<FunctionTemplate> _glx_glTexEnviv = FunctionTemplate::New(glx_glTexEnviv);
    target->Set(String::New("glTexEnviv"), _glx_glTexEnviv->GetFunction());

    Local<FunctionTemplate> _glx_glGetTexEnvfv = FunctionTemplate::New(glx_glGetTexEnvfv);
    target->Set(String::New("glGetTexEnvfv"), _glx_glGetTexEnvfv->GetFunction());

    Local<FunctionTemplate> _glx_glGetTexEnviv = FunctionTemplate::New(glx_glGetTexEnviv);
    target->Set(String::New("glGetTexEnviv"), _glx_glGetTexEnviv->GetFunction());

    Local<FunctionTemplate> _glx_glTexParameterf = FunctionTemplate::New(glx_glTexParameterf);
    target->Set(String::New("glTexParameterf"), _glx_glTexParameterf->GetFunction());

    Local<FunctionTemplate> _glx_glTexParameteri = FunctionTemplate::New(glx_glTexParameteri);
    target->Set(String::New("glTexParameteri"), _glx_glTexParameteri->GetFunction());

    Local<FunctionTemplate> _glx_glTexParameterfv = FunctionTemplate::New(glx_glTexParameterfv);
    target->Set(String::New("glTexParameterfv"), _glx_glTexParameterfv->GetFunction());

    Local<FunctionTemplate> _glx_glTexParameteriv = FunctionTemplate::New(glx_glTexParameteriv);
    target->Set(String::New("glTexParameteriv"), _glx_glTexParameteriv->GetFunction());

    Local<FunctionTemplate> _glx_glGetTexParameterfv = FunctionTemplate::New(glx_glGetTexParameterfv);
    target->Set(String::New("glGetTexParameterfv"), _glx_glGetTexParameterfv->GetFunction());

    Local<FunctionTemplate> _glx_glGetTexParameteriv = FunctionTemplate::New(glx_glGetTexParameteriv);
    target->Set(String::New("glGetTexParameteriv"), _glx_glGetTexParameteriv->GetFunction());

    Local<FunctionTemplate> _glx_glGetTexLevelParameterfv = FunctionTemplate::New(glx_glGetTexLevelParameterfv);
    target->Set(String::New("glGetTexLevelParameterfv"), _glx_glGetTexLevelParameterfv->GetFunction());

    Local<FunctionTemplate> _glx_glGetTexLevelParameteriv = FunctionTemplate::New(glx_glGetTexLevelParameteriv);
    target->Set(String::New("glGetTexLevelParameteriv"), _glx_glGetTexLevelParameteriv->GetFunction());

    Local<FunctionTemplate> _glx_glTexImage1D = FunctionTemplate::New(glx_glTexImage1D);
    target->Set(String::New("glTexImage1D"), _glx_glTexImage1D->GetFunction());

    Local<FunctionTemplate> _glx_glTexImage2D = FunctionTemplate::New(glx_glTexImage2D);
    target->Set(String::New("glTexImage2D"), _glx_glTexImage2D->GetFunction());

    Local<FunctionTemplate> _glx_glGetTexImage = FunctionTemplate::New(glx_glGetTexImage);
    target->Set(String::New("glGetTexImage"), _glx_glGetTexImage->GetFunction());

    Local<FunctionTemplate> _glx_glGenTextures = FunctionTemplate::New(glx_glGenTextures);
    target->Set(String::New("glGenTextures"), _glx_glGenTextures->GetFunction());

    Local<FunctionTemplate> _glx_glDeleteTextures = FunctionTemplate::New(glx_glDeleteTextures);
    target->Set(String::New("glDeleteTextures"), _glx_glDeleteTextures->GetFunction());

    Local<FunctionTemplate> _glx_glBindTexture = FunctionTemplate::New(glx_glBindTexture);
    target->Set(String::New("glBindTexture"), _glx_glBindTexture->GetFunction());

    Local<FunctionTemplate> _glx_glPrioritizeTextures = FunctionTemplate::New(glx_glPrioritizeTextures);
    target->Set(String::New("glPrioritizeTextures"), _glx_glPrioritizeTextures->GetFunction());

    Local<FunctionTemplate> _glx_glAreTexturesResident = FunctionTemplate::New(glx_glAreTexturesResident);
    target->Set(String::New("glAreTexturesResident"), _glx_glAreTexturesResident->GetFunction());

    Local<FunctionTemplate> _glx_glIsTexture = FunctionTemplate::New(glx_glIsTexture);
    target->Set(String::New("glIsTexture"), _glx_glIsTexture->GetFunction());

    Local<FunctionTemplate> _glx_glTexSubImage1D = FunctionTemplate::New(glx_glTexSubImage1D);
    target->Set(String::New("glTexSubImage1D"), _glx_glTexSubImage1D->GetFunction());

    Local<FunctionTemplate> _glx_glTexSubImage2D = FunctionTemplate::New(glx_glTexSubImage2D);
    target->Set(String::New("glTexSubImage2D"), _glx_glTexSubImage2D->GetFunction());

    Local<FunctionTemplate> _glx_glCopyTexImage1D = FunctionTemplate::New(glx_glCopyTexImage1D);
    target->Set(String::New("glCopyTexImage1D"), _glx_glCopyTexImage1D->GetFunction());

    Local<FunctionTemplate> _glx_glCopyTexImage2D = FunctionTemplate::New(glx_glCopyTexImage2D);
    target->Set(String::New("glCopyTexImage2D"), _glx_glCopyTexImage2D->GetFunction());

    Local<FunctionTemplate> _glx_glCopyTexSubImage1D = FunctionTemplate::New(glx_glCopyTexSubImage1D);
    target->Set(String::New("glCopyTexSubImage1D"), _glx_glCopyTexSubImage1D->GetFunction());

    Local<FunctionTemplate> _glx_glCopyTexSubImage2D = FunctionTemplate::New(glx_glCopyTexSubImage2D);
    target->Set(String::New("glCopyTexSubImage2D"), _glx_glCopyTexSubImage2D->GetFunction());

    Local<FunctionTemplate> _glx_glMap1d = FunctionTemplate::New(glx_glMap1d);
    target->Set(String::New("glMap1d"), _glx_glMap1d->GetFunction());

    Local<FunctionTemplate> _glx_glMap1f = FunctionTemplate::New(glx_glMap1f);
    target->Set(String::New("glMap1f"), _glx_glMap1f->GetFunction());

    Local<FunctionTemplate> _glx_glMap2d = FunctionTemplate::New(glx_glMap2d);
    target->Set(String::New("glMap2d"), _glx_glMap2d->GetFunction());

    Local<FunctionTemplate> _glx_glMap2f = FunctionTemplate::New(glx_glMap2f);
    target->Set(String::New("glMap2f"), _glx_glMap2f->GetFunction());

    Local<FunctionTemplate> _glx_glGetMapdv = FunctionTemplate::New(glx_glGetMapdv);
    target->Set(String::New("glGetMapdv"), _glx_glGetMapdv->GetFunction());

    Local<FunctionTemplate> _glx_glGetMapfv = FunctionTemplate::New(glx_glGetMapfv);
    target->Set(String::New("glGetMapfv"), _glx_glGetMapfv->GetFunction());

    Local<FunctionTemplate> _glx_glGetMapiv = FunctionTemplate::New(glx_glGetMapiv);
    target->Set(String::New("glGetMapiv"), _glx_glGetMapiv->GetFunction());

    Local<FunctionTemplate> _glx_glEvalCoord1d = FunctionTemplate::New(glx_glEvalCoord1d);
    target->Set(String::New("glEvalCoord1d"), _glx_glEvalCoord1d->GetFunction());

    Local<FunctionTemplate> _glx_glEvalCoord1f = FunctionTemplate::New(glx_glEvalCoord1f);
    target->Set(String::New("glEvalCoord1f"), _glx_glEvalCoord1f->GetFunction());

    Local<FunctionTemplate> _glx_glEvalCoord1dv = FunctionTemplate::New(glx_glEvalCoord1dv);
    target->Set(String::New("glEvalCoord1dv"), _glx_glEvalCoord1dv->GetFunction());

    Local<FunctionTemplate> _glx_glEvalCoord1fv = FunctionTemplate::New(glx_glEvalCoord1fv);
    target->Set(String::New("glEvalCoord1fv"), _glx_glEvalCoord1fv->GetFunction());

    Local<FunctionTemplate> _glx_glEvalCoord2d = FunctionTemplate::New(glx_glEvalCoord2d);
    target->Set(String::New("glEvalCoord2d"), _glx_glEvalCoord2d->GetFunction());

    Local<FunctionTemplate> _glx_glEvalCoord2f = FunctionTemplate::New(glx_glEvalCoord2f);
    target->Set(String::New("glEvalCoord2f"), _glx_glEvalCoord2f->GetFunction());

    Local<FunctionTemplate> _glx_glEvalCoord2dv = FunctionTemplate::New(glx_glEvalCoord2dv);
    target->Set(String::New("glEvalCoord2dv"), _glx_glEvalCoord2dv->GetFunction());

    Local<FunctionTemplate> _glx_glEvalCoord2fv = FunctionTemplate::New(glx_glEvalCoord2fv);
    target->Set(String::New("glEvalCoord2fv"), _glx_glEvalCoord2fv->GetFunction());

    Local<FunctionTemplate> _glx_glMapGrid1d = FunctionTemplate::New(glx_glMapGrid1d);
    target->Set(String::New("glMapGrid1d"), _glx_glMapGrid1d->GetFunction());

    Local<FunctionTemplate> _glx_glMapGrid1f = FunctionTemplate::New(glx_glMapGrid1f);
    target->Set(String::New("glMapGrid1f"), _glx_glMapGrid1f->GetFunction());

    Local<FunctionTemplate> _glx_glMapGrid2d = FunctionTemplate::New(glx_glMapGrid2d);
    target->Set(String::New("glMapGrid2d"), _glx_glMapGrid2d->GetFunction());

    Local<FunctionTemplate> _glx_glMapGrid2f = FunctionTemplate::New(glx_glMapGrid2f);
    target->Set(String::New("glMapGrid2f"), _glx_glMapGrid2f->GetFunction());

    Local<FunctionTemplate> _glx_glEvalPoint1 = FunctionTemplate::New(glx_glEvalPoint1);
    target->Set(String::New("glEvalPoint1"), _glx_glEvalPoint1->GetFunction());

    Local<FunctionTemplate> _glx_glEvalPoint2 = FunctionTemplate::New(glx_glEvalPoint2);
    target->Set(String::New("glEvalPoint2"), _glx_glEvalPoint2->GetFunction());

    Local<FunctionTemplate> _glx_glEvalMesh1 = FunctionTemplate::New(glx_glEvalMesh1);
    target->Set(String::New("glEvalMesh1"), _glx_glEvalMesh1->GetFunction());

    Local<FunctionTemplate> _glx_glEvalMesh2 = FunctionTemplate::New(glx_glEvalMesh2);
    target->Set(String::New("glEvalMesh2"), _glx_glEvalMesh2->GetFunction());

    Local<FunctionTemplate> _glx_glFogf = FunctionTemplate::New(glx_glFogf);
    target->Set(String::New("glFogf"), _glx_glFogf->GetFunction());

    Local<FunctionTemplate> _glx_glFogi = FunctionTemplate::New(glx_glFogi);
    target->Set(String::New("glFogi"), _glx_glFogi->GetFunction());

    Local<FunctionTemplate> _glx_glFogfv = FunctionTemplate::New(glx_glFogfv);
    target->Set(String::New("glFogfv"), _glx_glFogfv->GetFunction());

    Local<FunctionTemplate> _glx_glFogiv = FunctionTemplate::New(glx_glFogiv);
    target->Set(String::New("glFogiv"), _glx_glFogiv->GetFunction());

    Local<FunctionTemplate> _glx_glFeedbackBuffer = FunctionTemplate::New(glx_glFeedbackBuffer);
    target->Set(String::New("glFeedbackBuffer"), _glx_glFeedbackBuffer->GetFunction());

    Local<FunctionTemplate> _glx_glPassThrough = FunctionTemplate::New(glx_glPassThrough);
    target->Set(String::New("glPassThrough"), _glx_glPassThrough->GetFunction());

    Local<FunctionTemplate> _glx_glSelectBuffer = FunctionTemplate::New(glx_glSelectBuffer);
    target->Set(String::New("glSelectBuffer"), _glx_glSelectBuffer->GetFunction());

    Local<FunctionTemplate> _glx_glInitNames = FunctionTemplate::New(glx_glInitNames);
    target->Set(String::New("glInitNames"), _glx_glInitNames->GetFunction());

    Local<FunctionTemplate> _glx_glLoadName = FunctionTemplate::New(glx_glLoadName);
    target->Set(String::New("glLoadName"), _glx_glLoadName->GetFunction());

    Local<FunctionTemplate> _glx_glPushName = FunctionTemplate::New(glx_glPushName);
    target->Set(String::New("glPushName"), _glx_glPushName->GetFunction());

    Local<FunctionTemplate> _glx_glPopName = FunctionTemplate::New(glx_glPopName);
    target->Set(String::New("glPopName"), _glx_glPopName->GetFunction());

    Local<FunctionTemplate> _glx_glDrawRangeElements = FunctionTemplate::New(glx_glDrawRangeElements);
    target->Set(String::New("glDrawRangeElements"), _glx_glDrawRangeElements->GetFunction());

    Local<FunctionTemplate> _glx_glTexImage3D = FunctionTemplate::New(glx_glTexImage3D);
    target->Set(String::New("glTexImage3D"), _glx_glTexImage3D->GetFunction());

    Local<FunctionTemplate> _glx_glTexSubImage3D = FunctionTemplate::New(glx_glTexSubImage3D);
    target->Set(String::New("glTexSubImage3D"), _glx_glTexSubImage3D->GetFunction());

    Local<FunctionTemplate> _glx_glCopyTexSubImage3D = FunctionTemplate::New(glx_glCopyTexSubImage3D);
    target->Set(String::New("glCopyTexSubImage3D"), _glx_glCopyTexSubImage3D->GetFunction());

    Local<FunctionTemplate> _glx_glColorTable = FunctionTemplate::New(glx_glColorTable);
    target->Set(String::New("glColorTable"), _glx_glColorTable->GetFunction());

    Local<FunctionTemplate> _glx_glColorSubTable = FunctionTemplate::New(glx_glColorSubTable);
    target->Set(String::New("glColorSubTable"), _glx_glColorSubTable->GetFunction());

    Local<FunctionTemplate> _glx_glColorTableParameteriv = FunctionTemplate::New(glx_glColorTableParameteriv);
    target->Set(String::New("glColorTableParameteriv"), _glx_glColorTableParameteriv->GetFunction());

    Local<FunctionTemplate> _glx_glColorTableParameterfv = FunctionTemplate::New(glx_glColorTableParameterfv);
    target->Set(String::New("glColorTableParameterfv"), _glx_glColorTableParameterfv->GetFunction());

    Local<FunctionTemplate> _glx_glCopyColorSubTable = FunctionTemplate::New(glx_glCopyColorSubTable);
    target->Set(String::New("glCopyColorSubTable"), _glx_glCopyColorSubTable->GetFunction());

    Local<FunctionTemplate> _glx_glCopyColorTable = FunctionTemplate::New(glx_glCopyColorTable);
    target->Set(String::New("glCopyColorTable"), _glx_glCopyColorTable->GetFunction());

    Local<FunctionTemplate> _glx_glGetColorTable = FunctionTemplate::New(glx_glGetColorTable);
    target->Set(String::New("glGetColorTable"), _glx_glGetColorTable->GetFunction());

    Local<FunctionTemplate> _glx_glGetColorTableParameterfv = FunctionTemplate::New(glx_glGetColorTableParameterfv);
    target->Set(String::New("glGetColorTableParameterfv"), _glx_glGetColorTableParameterfv->GetFunction());

    Local<FunctionTemplate> _glx_glGetColorTableParameteriv = FunctionTemplate::New(glx_glGetColorTableParameteriv);
    target->Set(String::New("glGetColorTableParameteriv"), _glx_glGetColorTableParameteriv->GetFunction());

    Local<FunctionTemplate> _glx_glBlendEquation = FunctionTemplate::New(glx_glBlendEquation);
    target->Set(String::New("glBlendEquation"), _glx_glBlendEquation->GetFunction());

    Local<FunctionTemplate> _glx_glBlendColor = FunctionTemplate::New(glx_glBlendColor);
    target->Set(String::New("glBlendColor"), _glx_glBlendColor->GetFunction());

    Local<FunctionTemplate> _glx_glHistogram = FunctionTemplate::New(glx_glHistogram);
    target->Set(String::New("glHistogram"), _glx_glHistogram->GetFunction());

    Local<FunctionTemplate> _glx_glResetHistogram = FunctionTemplate::New(glx_glResetHistogram);
    target->Set(String::New("glResetHistogram"), _glx_glResetHistogram->GetFunction());

    Local<FunctionTemplate> _glx_glGetHistogram = FunctionTemplate::New(glx_glGetHistogram);
    target->Set(String::New("glGetHistogram"), _glx_glGetHistogram->GetFunction());

    Local<FunctionTemplate> _glx_glGetHistogramParameterfv = FunctionTemplate::New(glx_glGetHistogramParameterfv);
    target->Set(String::New("glGetHistogramParameterfv"), _glx_glGetHistogramParameterfv->GetFunction());

    Local<FunctionTemplate> _glx_glGetHistogramParameteriv = FunctionTemplate::New(glx_glGetHistogramParameteriv);
    target->Set(String::New("glGetHistogramParameteriv"), _glx_glGetHistogramParameteriv->GetFunction());

    Local<FunctionTemplate> _glx_glMinmax = FunctionTemplate::New(glx_glMinmax);
    target->Set(String::New("glMinmax"), _glx_glMinmax->GetFunction());

    Local<FunctionTemplate> _glx_glResetMinmax = FunctionTemplate::New(glx_glResetMinmax);
    target->Set(String::New("glResetMinmax"), _glx_glResetMinmax->GetFunction());

    Local<FunctionTemplate> _glx_glGetMinmax = FunctionTemplate::New(glx_glGetMinmax);
    target->Set(String::New("glGetMinmax"), _glx_glGetMinmax->GetFunction());

    Local<FunctionTemplate> _glx_glGetMinmaxParameterfv = FunctionTemplate::New(glx_glGetMinmaxParameterfv);
    target->Set(String::New("glGetMinmaxParameterfv"), _glx_glGetMinmaxParameterfv->GetFunction());

    Local<FunctionTemplate> _glx_glGetMinmaxParameteriv = FunctionTemplate::New(glx_glGetMinmaxParameteriv);
    target->Set(String::New("glGetMinmaxParameteriv"), _glx_glGetMinmaxParameteriv->GetFunction());

    Local<FunctionTemplate> _glx_glConvolutionFilter1D = FunctionTemplate::New(glx_glConvolutionFilter1D);
    target->Set(String::New("glConvolutionFilter1D"), _glx_glConvolutionFilter1D->GetFunction());

    Local<FunctionTemplate> _glx_glConvolutionFilter2D = FunctionTemplate::New(glx_glConvolutionFilter2D);
    target->Set(String::New("glConvolutionFilter2D"), _glx_glConvolutionFilter2D->GetFunction());

    Local<FunctionTemplate> _glx_glConvolutionParameterf = FunctionTemplate::New(glx_glConvolutionParameterf);
    target->Set(String::New("glConvolutionParameterf"), _glx_glConvolutionParameterf->GetFunction());

    Local<FunctionTemplate> _glx_glConvolutionParameterfv = FunctionTemplate::New(glx_glConvolutionParameterfv);
    target->Set(String::New("glConvolutionParameterfv"), _glx_glConvolutionParameterfv->GetFunction());

    Local<FunctionTemplate> _glx_glConvolutionParameteri = FunctionTemplate::New(glx_glConvolutionParameteri);
    target->Set(String::New("glConvolutionParameteri"), _glx_glConvolutionParameteri->GetFunction());

    Local<FunctionTemplate> _glx_glConvolutionParameteriv = FunctionTemplate::New(glx_glConvolutionParameteriv);
    target->Set(String::New("glConvolutionParameteriv"), _glx_glConvolutionParameteriv->GetFunction());

    Local<FunctionTemplate> _glx_glCopyConvolutionFilter1D = FunctionTemplate::New(glx_glCopyConvolutionFilter1D);
    target->Set(String::New("glCopyConvolutionFilter1D"), _glx_glCopyConvolutionFilter1D->GetFunction());

    Local<FunctionTemplate> _glx_glCopyConvolutionFilter2D = FunctionTemplate::New(glx_glCopyConvolutionFilter2D);
    target->Set(String::New("glCopyConvolutionFilter2D"), _glx_glCopyConvolutionFilter2D->GetFunction());

    Local<FunctionTemplate> _glx_glGetConvolutionFilter = FunctionTemplate::New(glx_glGetConvolutionFilter);
    target->Set(String::New("glGetConvolutionFilter"), _glx_glGetConvolutionFilter->GetFunction());

    Local<FunctionTemplate> _glx_glGetConvolutionParameterfv = FunctionTemplate::New(glx_glGetConvolutionParameterfv);
    target->Set(String::New("glGetConvolutionParameterfv"), _glx_glGetConvolutionParameterfv->GetFunction());

    Local<FunctionTemplate> _glx_glGetConvolutionParameteriv = FunctionTemplate::New(glx_glGetConvolutionParameteriv);
    target->Set(String::New("glGetConvolutionParameteriv"), _glx_glGetConvolutionParameteriv->GetFunction());

    Local<FunctionTemplate> _glx_glSeparableFilter2D = FunctionTemplate::New(glx_glSeparableFilter2D);
    target->Set(String::New("glSeparableFilter2D"), _glx_glSeparableFilter2D->GetFunction());

    Local<FunctionTemplate> _glx_glGetSeparableFilter = FunctionTemplate::New(glx_glGetSeparableFilter);
    target->Set(String::New("glGetSeparableFilter"), _glx_glGetSeparableFilter->GetFunction());

    Local<FunctionTemplate> _glx_glActiveTexture = FunctionTemplate::New(glx_glActiveTexture);
    target->Set(String::New("glActiveTexture"), _glx_glActiveTexture->GetFunction());

    Local<FunctionTemplate> _glx_glClientActiveTexture = FunctionTemplate::New(glx_glClientActiveTexture);
    target->Set(String::New("glClientActiveTexture"), _glx_glClientActiveTexture->GetFunction());

    Local<FunctionTemplate> _glx_glCompressedTexImage1D = FunctionTemplate::New(glx_glCompressedTexImage1D);
    target->Set(String::New("glCompressedTexImage1D"), _glx_glCompressedTexImage1D->GetFunction());

    Local<FunctionTemplate> _glx_glCompressedTexImage2D = FunctionTemplate::New(glx_glCompressedTexImage2D);
    target->Set(String::New("glCompressedTexImage2D"), _glx_glCompressedTexImage2D->GetFunction());

    Local<FunctionTemplate> _glx_glCompressedTexImage3D = FunctionTemplate::New(glx_glCompressedTexImage3D);
    target->Set(String::New("glCompressedTexImage3D"), _glx_glCompressedTexImage3D->GetFunction());

    Local<FunctionTemplate> _glx_glCompressedTexSubImage1D = FunctionTemplate::New(glx_glCompressedTexSubImage1D);
    target->Set(String::New("glCompressedTexSubImage1D"), _glx_glCompressedTexSubImage1D->GetFunction());

    Local<FunctionTemplate> _glx_glCompressedTexSubImage2D = FunctionTemplate::New(glx_glCompressedTexSubImage2D);
    target->Set(String::New("glCompressedTexSubImage2D"), _glx_glCompressedTexSubImage2D->GetFunction());

    Local<FunctionTemplate> _glx_glCompressedTexSubImage3D = FunctionTemplate::New(glx_glCompressedTexSubImage3D);
    target->Set(String::New("glCompressedTexSubImage3D"), _glx_glCompressedTexSubImage3D->GetFunction());

    Local<FunctionTemplate> _glx_glGetCompressedTexImage = FunctionTemplate::New(glx_glGetCompressedTexImage);
    target->Set(String::New("glGetCompressedTexImage"), _glx_glGetCompressedTexImage->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord1d = FunctionTemplate::New(glx_glMultiTexCoord1d);
    target->Set(String::New("glMultiTexCoord1d"), _glx_glMultiTexCoord1d->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord1dv = FunctionTemplate::New(glx_glMultiTexCoord1dv);
    target->Set(String::New("glMultiTexCoord1dv"), _glx_glMultiTexCoord1dv->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord1f = FunctionTemplate::New(glx_glMultiTexCoord1f);
    target->Set(String::New("glMultiTexCoord1f"), _glx_glMultiTexCoord1f->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord1fv = FunctionTemplate::New(glx_glMultiTexCoord1fv);
    target->Set(String::New("glMultiTexCoord1fv"), _glx_glMultiTexCoord1fv->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord1i = FunctionTemplate::New(glx_glMultiTexCoord1i);
    target->Set(String::New("glMultiTexCoord1i"), _glx_glMultiTexCoord1i->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord1iv = FunctionTemplate::New(glx_glMultiTexCoord1iv);
    target->Set(String::New("glMultiTexCoord1iv"), _glx_glMultiTexCoord1iv->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord1s = FunctionTemplate::New(glx_glMultiTexCoord1s);
    target->Set(String::New("glMultiTexCoord1s"), _glx_glMultiTexCoord1s->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord1sv = FunctionTemplate::New(glx_glMultiTexCoord1sv);
    target->Set(String::New("glMultiTexCoord1sv"), _glx_glMultiTexCoord1sv->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord2d = FunctionTemplate::New(glx_glMultiTexCoord2d);
    target->Set(String::New("glMultiTexCoord2d"), _glx_glMultiTexCoord2d->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord2dv = FunctionTemplate::New(glx_glMultiTexCoord2dv);
    target->Set(String::New("glMultiTexCoord2dv"), _glx_glMultiTexCoord2dv->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord2f = FunctionTemplate::New(glx_glMultiTexCoord2f);
    target->Set(String::New("glMultiTexCoord2f"), _glx_glMultiTexCoord2f->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord2fv = FunctionTemplate::New(glx_glMultiTexCoord2fv);
    target->Set(String::New("glMultiTexCoord2fv"), _glx_glMultiTexCoord2fv->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord2i = FunctionTemplate::New(glx_glMultiTexCoord2i);
    target->Set(String::New("glMultiTexCoord2i"), _glx_glMultiTexCoord2i->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord2iv = FunctionTemplate::New(glx_glMultiTexCoord2iv);
    target->Set(String::New("glMultiTexCoord2iv"), _glx_glMultiTexCoord2iv->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord2s = FunctionTemplate::New(glx_glMultiTexCoord2s);
    target->Set(String::New("glMultiTexCoord2s"), _glx_glMultiTexCoord2s->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord2sv = FunctionTemplate::New(glx_glMultiTexCoord2sv);
    target->Set(String::New("glMultiTexCoord2sv"), _glx_glMultiTexCoord2sv->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord3d = FunctionTemplate::New(glx_glMultiTexCoord3d);
    target->Set(String::New("glMultiTexCoord3d"), _glx_glMultiTexCoord3d->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord3dv = FunctionTemplate::New(glx_glMultiTexCoord3dv);
    target->Set(String::New("glMultiTexCoord3dv"), _glx_glMultiTexCoord3dv->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord3f = FunctionTemplate::New(glx_glMultiTexCoord3f);
    target->Set(String::New("glMultiTexCoord3f"), _glx_glMultiTexCoord3f->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord3fv = FunctionTemplate::New(glx_glMultiTexCoord3fv);
    target->Set(String::New("glMultiTexCoord3fv"), _glx_glMultiTexCoord3fv->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord3i = FunctionTemplate::New(glx_glMultiTexCoord3i);
    target->Set(String::New("glMultiTexCoord3i"), _glx_glMultiTexCoord3i->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord3iv = FunctionTemplate::New(glx_glMultiTexCoord3iv);
    target->Set(String::New("glMultiTexCoord3iv"), _glx_glMultiTexCoord3iv->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord3s = FunctionTemplate::New(glx_glMultiTexCoord3s);
    target->Set(String::New("glMultiTexCoord3s"), _glx_glMultiTexCoord3s->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord3sv = FunctionTemplate::New(glx_glMultiTexCoord3sv);
    target->Set(String::New("glMultiTexCoord3sv"), _glx_glMultiTexCoord3sv->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord4d = FunctionTemplate::New(glx_glMultiTexCoord4d);
    target->Set(String::New("glMultiTexCoord4d"), _glx_glMultiTexCoord4d->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord4dv = FunctionTemplate::New(glx_glMultiTexCoord4dv);
    target->Set(String::New("glMultiTexCoord4dv"), _glx_glMultiTexCoord4dv->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord4f = FunctionTemplate::New(glx_glMultiTexCoord4f);
    target->Set(String::New("glMultiTexCoord4f"), _glx_glMultiTexCoord4f->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord4fv = FunctionTemplate::New(glx_glMultiTexCoord4fv);
    target->Set(String::New("glMultiTexCoord4fv"), _glx_glMultiTexCoord4fv->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord4i = FunctionTemplate::New(glx_glMultiTexCoord4i);
    target->Set(String::New("glMultiTexCoord4i"), _glx_glMultiTexCoord4i->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord4iv = FunctionTemplate::New(glx_glMultiTexCoord4iv);
    target->Set(String::New("glMultiTexCoord4iv"), _glx_glMultiTexCoord4iv->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord4s = FunctionTemplate::New(glx_glMultiTexCoord4s);
    target->Set(String::New("glMultiTexCoord4s"), _glx_glMultiTexCoord4s->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord4sv = FunctionTemplate::New(glx_glMultiTexCoord4sv);
    target->Set(String::New("glMultiTexCoord4sv"), _glx_glMultiTexCoord4sv->GetFunction());

    Local<FunctionTemplate> _glx_glLoadTransposeMatrixd = FunctionTemplate::New(glx_glLoadTransposeMatrixd);
    target->Set(String::New("glLoadTransposeMatrixd"), _glx_glLoadTransposeMatrixd->GetFunction());

    Local<FunctionTemplate> _glx_glLoadTransposeMatrixf = FunctionTemplate::New(glx_glLoadTransposeMatrixf);
    target->Set(String::New("glLoadTransposeMatrixf"), _glx_glLoadTransposeMatrixf->GetFunction());

    Local<FunctionTemplate> _glx_glMultTransposeMatrixd = FunctionTemplate::New(glx_glMultTransposeMatrixd);
    target->Set(String::New("glMultTransposeMatrixd"), _glx_glMultTransposeMatrixd->GetFunction());

    Local<FunctionTemplate> _glx_glMultTransposeMatrixf = FunctionTemplate::New(glx_glMultTransposeMatrixf);
    target->Set(String::New("glMultTransposeMatrixf"), _glx_glMultTransposeMatrixf->GetFunction());

    Local<FunctionTemplate> _glx_glSampleCoverage = FunctionTemplate::New(glx_glSampleCoverage);
    target->Set(String::New("glSampleCoverage"), _glx_glSampleCoverage->GetFunction());

    Local<FunctionTemplate> _glx_glActiveTextureARB = FunctionTemplate::New(glx_glActiveTextureARB);
    target->Set(String::New("glActiveTextureARB"), _glx_glActiveTextureARB->GetFunction());

    Local<FunctionTemplate> _glx_glClientActiveTextureARB = FunctionTemplate::New(glx_glClientActiveTextureARB);
    target->Set(String::New("glClientActiveTextureARB"), _glx_glClientActiveTextureARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord1dARB = FunctionTemplate::New(glx_glMultiTexCoord1dARB);
    target->Set(String::New("glMultiTexCoord1dARB"), _glx_glMultiTexCoord1dARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord1dvARB = FunctionTemplate::New(glx_glMultiTexCoord1dvARB);
    target->Set(String::New("glMultiTexCoord1dvARB"), _glx_glMultiTexCoord1dvARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord1fARB = FunctionTemplate::New(glx_glMultiTexCoord1fARB);
    target->Set(String::New("glMultiTexCoord1fARB"), _glx_glMultiTexCoord1fARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord1fvARB = FunctionTemplate::New(glx_glMultiTexCoord1fvARB);
    target->Set(String::New("glMultiTexCoord1fvARB"), _glx_glMultiTexCoord1fvARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord1iARB = FunctionTemplate::New(glx_glMultiTexCoord1iARB);
    target->Set(String::New("glMultiTexCoord1iARB"), _glx_glMultiTexCoord1iARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord1ivARB = FunctionTemplate::New(glx_glMultiTexCoord1ivARB);
    target->Set(String::New("glMultiTexCoord1ivARB"), _glx_glMultiTexCoord1ivARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord1sARB = FunctionTemplate::New(glx_glMultiTexCoord1sARB);
    target->Set(String::New("glMultiTexCoord1sARB"), _glx_glMultiTexCoord1sARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord1svARB = FunctionTemplate::New(glx_glMultiTexCoord1svARB);
    target->Set(String::New("glMultiTexCoord1svARB"), _glx_glMultiTexCoord1svARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord2dARB = FunctionTemplate::New(glx_glMultiTexCoord2dARB);
    target->Set(String::New("glMultiTexCoord2dARB"), _glx_glMultiTexCoord2dARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord2dvARB = FunctionTemplate::New(glx_glMultiTexCoord2dvARB);
    target->Set(String::New("glMultiTexCoord2dvARB"), _glx_glMultiTexCoord2dvARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord2fARB = FunctionTemplate::New(glx_glMultiTexCoord2fARB);
    target->Set(String::New("glMultiTexCoord2fARB"), _glx_glMultiTexCoord2fARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord2fvARB = FunctionTemplate::New(glx_glMultiTexCoord2fvARB);
    target->Set(String::New("glMultiTexCoord2fvARB"), _glx_glMultiTexCoord2fvARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord2iARB = FunctionTemplate::New(glx_glMultiTexCoord2iARB);
    target->Set(String::New("glMultiTexCoord2iARB"), _glx_glMultiTexCoord2iARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord2ivARB = FunctionTemplate::New(glx_glMultiTexCoord2ivARB);
    target->Set(String::New("glMultiTexCoord2ivARB"), _glx_glMultiTexCoord2ivARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord2sARB = FunctionTemplate::New(glx_glMultiTexCoord2sARB);
    target->Set(String::New("glMultiTexCoord2sARB"), _glx_glMultiTexCoord2sARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord2svARB = FunctionTemplate::New(glx_glMultiTexCoord2svARB);
    target->Set(String::New("glMultiTexCoord2svARB"), _glx_glMultiTexCoord2svARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord3dARB = FunctionTemplate::New(glx_glMultiTexCoord3dARB);
    target->Set(String::New("glMultiTexCoord3dARB"), _glx_glMultiTexCoord3dARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord3dvARB = FunctionTemplate::New(glx_glMultiTexCoord3dvARB);
    target->Set(String::New("glMultiTexCoord3dvARB"), _glx_glMultiTexCoord3dvARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord3fARB = FunctionTemplate::New(glx_glMultiTexCoord3fARB);
    target->Set(String::New("glMultiTexCoord3fARB"), _glx_glMultiTexCoord3fARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord3fvARB = FunctionTemplate::New(glx_glMultiTexCoord3fvARB);
    target->Set(String::New("glMultiTexCoord3fvARB"), _glx_glMultiTexCoord3fvARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord3iARB = FunctionTemplate::New(glx_glMultiTexCoord3iARB);
    target->Set(String::New("glMultiTexCoord3iARB"), _glx_glMultiTexCoord3iARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord3ivARB = FunctionTemplate::New(glx_glMultiTexCoord3ivARB);
    target->Set(String::New("glMultiTexCoord3ivARB"), _glx_glMultiTexCoord3ivARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord3sARB = FunctionTemplate::New(glx_glMultiTexCoord3sARB);
    target->Set(String::New("glMultiTexCoord3sARB"), _glx_glMultiTexCoord3sARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord3svARB = FunctionTemplate::New(glx_glMultiTexCoord3svARB);
    target->Set(String::New("glMultiTexCoord3svARB"), _glx_glMultiTexCoord3svARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord4dARB = FunctionTemplate::New(glx_glMultiTexCoord4dARB);
    target->Set(String::New("glMultiTexCoord4dARB"), _glx_glMultiTexCoord4dARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord4dvARB = FunctionTemplate::New(glx_glMultiTexCoord4dvARB);
    target->Set(String::New("glMultiTexCoord4dvARB"), _glx_glMultiTexCoord4dvARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord4fARB = FunctionTemplate::New(glx_glMultiTexCoord4fARB);
    target->Set(String::New("glMultiTexCoord4fARB"), _glx_glMultiTexCoord4fARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord4fvARB = FunctionTemplate::New(glx_glMultiTexCoord4fvARB);
    target->Set(String::New("glMultiTexCoord4fvARB"), _glx_glMultiTexCoord4fvARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord4iARB = FunctionTemplate::New(glx_glMultiTexCoord4iARB);
    target->Set(String::New("glMultiTexCoord4iARB"), _glx_glMultiTexCoord4iARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord4ivARB = FunctionTemplate::New(glx_glMultiTexCoord4ivARB);
    target->Set(String::New("glMultiTexCoord4ivARB"), _glx_glMultiTexCoord4ivARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord4sARB = FunctionTemplate::New(glx_glMultiTexCoord4sARB);
    target->Set(String::New("glMultiTexCoord4sARB"), _glx_glMultiTexCoord4sARB->GetFunction());

    Local<FunctionTemplate> _glx_glMultiTexCoord4svARB = FunctionTemplate::New(glx_glMultiTexCoord4svARB);
    target->Set(String::New("glMultiTexCoord4svARB"), _glx_glMultiTexCoord4svARB->GetFunction());

    Local<FunctionTemplate> _glx_glProgramCallbackMESA = FunctionTemplate::New(glx_glProgramCallbackMESA);
    target->Set(String::New("glProgramCallbackMESA"), _glx_glProgramCallbackMESA->GetFunction());

    Local<FunctionTemplate> _glx_glGetProgramRegisterfvMESA = FunctionTemplate::New(glx_glGetProgramRegisterfvMESA);
    target->Set(String::New("glGetProgramRegisterfvMESA"), _glx_glGetProgramRegisterfvMESA->GetFunction());

    Local<FunctionTemplate> _glx_glBlendEquationSeparateATI = FunctionTemplate::New(glx_glBlendEquationSeparateATI);
    target->Set(String::New("glBlendEquationSeparateATI"), _glx_glBlendEquationSeparateATI->GetFunction());

    Local<FunctionTemplate> _glx_glXCreateContext = FunctionTemplate::New(glx_glXCreateContext);
    target->Set(String::New("glXCreateContext"), _glx_glXCreateContext->GetFunction());

    Local<FunctionTemplate> _glx_glXDestroyContext = FunctionTemplate::New(glx_glXDestroyContext);
    target->Set(String::New("glXDestroyContext"), _glx_glXDestroyContext->GetFunction());

    Local<FunctionTemplate> _glx_glXMakeCurrent = FunctionTemplate::New(glx_glXMakeCurrent);
    target->Set(String::New("glXMakeCurrent"), _glx_glXMakeCurrent->GetFunction());

    Local<FunctionTemplate> _glx_glXCopyContext = FunctionTemplate::New(glx_glXCopyContext);
    target->Set(String::New("glXCopyContext"), _glx_glXCopyContext->GetFunction());

    Local<FunctionTemplate> _glx_glXSwapBuffers = FunctionTemplate::New(glx_glXSwapBuffers);
    target->Set(String::New("glXSwapBuffers"), _glx_glXSwapBuffers->GetFunction());

    Local<FunctionTemplate> _glx_glXCreateGLXPixmap = FunctionTemplate::New(glx_glXCreateGLXPixmap);
    target->Set(String::New("glXCreateGLXPixmap"), _glx_glXCreateGLXPixmap->GetFunction());

    Local<FunctionTemplate> _glx_glXDestroyGLXPixmap = FunctionTemplate::New(glx_glXDestroyGLXPixmap);
    target->Set(String::New("glXDestroyGLXPixmap"), _glx_glXDestroyGLXPixmap->GetFunction());

    Local<FunctionTemplate> _glx_glXQueryExtension = FunctionTemplate::New(glx_glXQueryExtension);
    target->Set(String::New("glXQueryExtension"), _glx_glXQueryExtension->GetFunction());

    Local<FunctionTemplate> _glx_glXQueryVersion = FunctionTemplate::New(glx_glXQueryVersion);
    target->Set(String::New("glXQueryVersion"), _glx_glXQueryVersion->GetFunction());

    Local<FunctionTemplate> _glx_glXIsDirect = FunctionTemplate::New(glx_glXIsDirect);
    target->Set(String::New("glXIsDirect"), _glx_glXIsDirect->GetFunction());

    Local<FunctionTemplate> _glx_glXGetConfig = FunctionTemplate::New(glx_glXGetConfig);
    target->Set(String::New("glXGetConfig"), _glx_glXGetConfig->GetFunction());

    Local<FunctionTemplate> _glx_glXGetCurrentContext = FunctionTemplate::New(glx_glXGetCurrentContext);
    target->Set(String::New("glXGetCurrentContext"), _glx_glXGetCurrentContext->GetFunction());

    Local<FunctionTemplate> _glx_glXGetCurrentDrawable = FunctionTemplate::New(glx_glXGetCurrentDrawable);
    target->Set(String::New("glXGetCurrentDrawable"), _glx_glXGetCurrentDrawable->GetFunction());

    Local<FunctionTemplate> _glx_glXWaitGL = FunctionTemplate::New(glx_glXWaitGL);
    target->Set(String::New("glXWaitGL"), _glx_glXWaitGL->GetFunction());

    Local<FunctionTemplate> _glx_glXWaitX = FunctionTemplate::New(glx_glXWaitX);
    target->Set(String::New("glXWaitX"), _glx_glXWaitX->GetFunction());

    Local<FunctionTemplate> _glx_glXUseXFont = FunctionTemplate::New(glx_glXUseXFont);
    target->Set(String::New("glXUseXFont"), _glx_glXUseXFont->GetFunction());

    Local<FunctionTemplate> _glx_glXGetFBConfigAttrib = FunctionTemplate::New(glx_glXGetFBConfigAttrib);
    target->Set(String::New("glXGetFBConfigAttrib"), _glx_glXGetFBConfigAttrib->GetFunction());

    Local<FunctionTemplate> _glx_glXCreateWindow = FunctionTemplate::New(glx_glXCreateWindow);
    target->Set(String::New("glXCreateWindow"), _glx_glXCreateWindow->GetFunction());

    Local<FunctionTemplate> _glx_glXDestroyWindow = FunctionTemplate::New(glx_glXDestroyWindow);
    target->Set(String::New("glXDestroyWindow"), _glx_glXDestroyWindow->GetFunction());

    Local<FunctionTemplate> _glx_glXCreatePixmap = FunctionTemplate::New(glx_glXCreatePixmap);
    target->Set(String::New("glXCreatePixmap"), _glx_glXCreatePixmap->GetFunction());

    Local<FunctionTemplate> _glx_glXDestroyPixmap = FunctionTemplate::New(glx_glXDestroyPixmap);
    target->Set(String::New("glXDestroyPixmap"), _glx_glXDestroyPixmap->GetFunction());

    Local<FunctionTemplate> _glx_glXCreatePbuffer = FunctionTemplate::New(glx_glXCreatePbuffer);
    target->Set(String::New("glXCreatePbuffer"), _glx_glXCreatePbuffer->GetFunction());

    Local<FunctionTemplate> _glx_glXDestroyPbuffer = FunctionTemplate::New(glx_glXDestroyPbuffer);
    target->Set(String::New("glXDestroyPbuffer"), _glx_glXDestroyPbuffer->GetFunction());

    Local<FunctionTemplate> _glx_glXQueryDrawable = FunctionTemplate::New(glx_glXQueryDrawable);
    target->Set(String::New("glXQueryDrawable"), _glx_glXQueryDrawable->GetFunction());

    Local<FunctionTemplate> _glx_glXCreateNewContext = FunctionTemplate::New(glx_glXCreateNewContext);
    target->Set(String::New("glXCreateNewContext"), _glx_glXCreateNewContext->GetFunction());

    Local<FunctionTemplate> _glx_glXMakeContextCurrent = FunctionTemplate::New(glx_glXMakeContextCurrent);
    target->Set(String::New("glXMakeContextCurrent"), _glx_glXMakeContextCurrent->GetFunction());

    Local<FunctionTemplate> _glx_glXGetCurrentReadDrawable = FunctionTemplate::New(glx_glXGetCurrentReadDrawable);
    target->Set(String::New("glXGetCurrentReadDrawable"), _glx_glXGetCurrentReadDrawable->GetFunction());

    Local<FunctionTemplate> _glx_glXQueryContext = FunctionTemplate::New(glx_glXQueryContext);
    target->Set(String::New("glXQueryContext"), _glx_glXQueryContext->GetFunction());

    Local<FunctionTemplate> _glx_glXSelectEvent = FunctionTemplate::New(glx_glXSelectEvent);
    target->Set(String::New("glXSelectEvent"), _glx_glXSelectEvent->GetFunction());

    Local<FunctionTemplate> _glx_glXGetSelectedEvent = FunctionTemplate::New(glx_glXGetSelectedEvent);
    target->Set(String::New("glXGetSelectedEvent"), _glx_glXGetSelectedEvent->GetFunction());

    Local<FunctionTemplate> _glx_glXFreeMemoryNV = FunctionTemplate::New(glx_glXFreeMemoryNV);
    target->Set(String::New("glXFreeMemoryNV"), _glx_glXFreeMemoryNV->GetFunction());

    Local<FunctionTemplate> _glx_glXFreeMemoryMESA = FunctionTemplate::New(glx_glXFreeMemoryMESA);
    target->Set(String::New("glXFreeMemoryMESA"), _glx_glXFreeMemoryMESA->GetFunction());

    Local<FunctionTemplate> _glx_glXGetMemoryOffsetMESA = FunctionTemplate::New(glx_glXGetMemoryOffsetMESA);
    target->Set(String::New("glXGetMemoryOffsetMESA"), _glx_glXGetMemoryOffsetMESA->GetFunction());

    Local<FunctionTemplate> _glx_glXBindTexImageARB = FunctionTemplate::New(glx_glXBindTexImageARB);
    target->Set(String::New("glXBindTexImageARB"), _glx_glXBindTexImageARB->GetFunction());

    Local<FunctionTemplate> _glx_glXReleaseTexImageARB = FunctionTemplate::New(glx_glXReleaseTexImageARB);
    target->Set(String::New("glXReleaseTexImageARB"), _glx_glXReleaseTexImageARB->GetFunction());

    Local<FunctionTemplate> _glx_glXDrawableAttribARB = FunctionTemplate::New(glx_glXDrawableAttribARB);
    target->Set(String::New("glXDrawableAttribARB"), _glx_glXDrawableAttribARB->GetFunction());

    Local<FunctionTemplate> _glx_glXGetFrameUsageMESA = FunctionTemplate::New(glx_glXGetFrameUsageMESA);
    target->Set(String::New("glXGetFrameUsageMESA"), _glx_glXGetFrameUsageMESA->GetFunction());

    Local<FunctionTemplate> _glx_glXBeginFrameTrackingMESA = FunctionTemplate::New(glx_glXBeginFrameTrackingMESA);
    target->Set(String::New("glXBeginFrameTrackingMESA"), _glx_glXBeginFrameTrackingMESA->GetFunction());

    Local<FunctionTemplate> _glx_glXEndFrameTrackingMESA = FunctionTemplate::New(glx_glXEndFrameTrackingMESA);
    target->Set(String::New("glXEndFrameTrackingMESA"), _glx_glXEndFrameTrackingMESA->GetFunction());

    Local<FunctionTemplate> _glx_glXQueryFrameTrackingMESA = FunctionTemplate::New(glx_glXQueryFrameTrackingMESA);
    target->Set(String::New("glXQueryFrameTrackingMESA"), _glx_glXQueryFrameTrackingMESA->GetFunction());

    Local<FunctionTemplate> _glx_glXSwapIntervalMESA = FunctionTemplate::New(glx_glXSwapIntervalMESA);
    target->Set(String::New("glXSwapIntervalMESA"), _glx_glXSwapIntervalMESA->GetFunction());

    Local<FunctionTemplate> _glx_glXGetSwapIntervalMESA = FunctionTemplate::New(glx_glXGetSwapIntervalMESA);
    target->Set(String::New("glXGetSwapIntervalMESA"), _glx_glXGetSwapIntervalMESA->GetFunction());


  }

}  // namespace node
