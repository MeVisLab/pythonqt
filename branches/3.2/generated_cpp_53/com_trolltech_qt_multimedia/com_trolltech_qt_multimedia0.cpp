#include "com_trolltech_qt_multimedia0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qabstractvideobuffer.h>
#include <qabstractvideosurface.h>
#include <qaction.h>
#include <qaudiobuffer.h>
#include <qaudiodecoder.h>
#include <qaudiodeviceinfo.h>
#include <qaudioformat.h>
#include <qaudioinput.h>
#include <qaudiooutput.h>
#include <qaudiorecorder.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcamera.h>
#include <qcameraexposure.h>
#include <qcamerafocus.h>
#include <qcameraimagecapture.h>
#include <qcameraimageprocessing.h>
#include <qcamerainfo.h>
#include <qcameraviewfinder.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsvideoitem.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmediacontent.h>
#include <qmediaencodersettings.h>
#include <qmediaobject.h>
#include <qmediaplayer.h>
#include <qmediaplaylist.h>
#include <qmediarecorder.h>
#include <qmediaresource.h>
#include <qmediaservice.h>
#include <qmetaobject.h>
#include <qnetworkconfiguration.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qurl.h>
#include <qvideoframe.h>
#include <qvideosurfaceformat.h>
#include <qvideowidget.h>
#include <qwidget.h>
#include <qwindow.h>

PythonQtShell_QAbstractVideoBuffer::~PythonQtShell_QAbstractVideoBuffer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QVariant  PythonQtShell_QAbstractVideoBuffer::handle() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("handle");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QVariant returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("handle", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAbstractVideoBuffer::handle();
}
uchar*  PythonQtShell_QAbstractVideoBuffer::map(QAbstractVideoBuffer::MapMode  mode0, int*  numBytes1, int*  bytesPerLine2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("map");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"uchar*" , "QAbstractVideoBuffer::MapMode" , "int*" , "int*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      uchar* returnValue;
    void* args[4] = {NULL, (void*)&mode0, (void*)&numBytes1, (void*)&bytesPerLine2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("map", methodInfo, result);
        } else {
          returnValue = *((uchar**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return 0;
}
QAbstractVideoBuffer::MapMode  PythonQtShell_QAbstractVideoBuffer::mapMode() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mapMode");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QAbstractVideoBuffer::MapMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAbstractVideoBuffer::MapMode returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mapMode", methodInfo, result);
        } else {
          returnValue = *((QAbstractVideoBuffer::MapMode*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAbstractVideoBuffer::MapMode();
}
void PythonQtShell_QAbstractVideoBuffer::release()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("release");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAbstractVideoBuffer::release();
}
void PythonQtShell_QAbstractVideoBuffer::unmap()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("unmap");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  
}
QAbstractVideoBuffer* PythonQtWrapper_QAbstractVideoBuffer::new_QAbstractVideoBuffer(QAbstractVideoBuffer::HandleType  type)
{ 
return new PythonQtShell_QAbstractVideoBuffer(type); }

QVariant  PythonQtWrapper_QAbstractVideoBuffer::handle(QAbstractVideoBuffer* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QAbstractVideoBuffer*)theWrappedObject)->promoted_handle());
}

QAbstractVideoBuffer::HandleType  PythonQtWrapper_QAbstractVideoBuffer::handleType(QAbstractVideoBuffer* theWrappedObject) const
{
  return ( theWrappedObject->handleType());
}

uchar*  PythonQtWrapper_QAbstractVideoBuffer::map(QAbstractVideoBuffer* theWrappedObject, QAbstractVideoBuffer::MapMode  mode, int*  numBytes, int*  bytesPerLine)
{
  return ( ((PythonQtPublicPromoter_QAbstractVideoBuffer*)theWrappedObject)->promoted_map(mode, numBytes, bytesPerLine));
}

QAbstractVideoBuffer::MapMode  PythonQtWrapper_QAbstractVideoBuffer::mapMode(QAbstractVideoBuffer* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QAbstractVideoBuffer*)theWrappedObject)->promoted_mapMode());
}

void PythonQtWrapper_QAbstractVideoBuffer::release(QAbstractVideoBuffer* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractVideoBuffer*)theWrappedObject)->promoted_release());
}

void PythonQtWrapper_QAbstractVideoBuffer::unmap(QAbstractVideoBuffer* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractVideoBuffer*)theWrappedObject)->promoted_unmap());
}



PythonQtShell_QAbstractVideoSurface::~PythonQtShell_QAbstractVideoSurface() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAbstractVideoSurface::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAbstractVideoSurface::childEvent(arg__1);
}
void PythonQtShell_QAbstractVideoSurface::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAbstractVideoSurface::customEvent(arg__1);
}
bool  PythonQtShell_QAbstractVideoSurface::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAbstractVideoSurface::event(arg__1);
}
bool  PythonQtShell_QAbstractVideoSurface::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAbstractVideoSurface::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QAbstractVideoSurface::isFormatSupported(const QVideoSurfaceFormat&  format0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("isFormatSupported");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QVideoSurfaceFormat&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&format0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isFormatSupported", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAbstractVideoSurface::isFormatSupported(format0);
}
QVideoSurfaceFormat  PythonQtShell_QAbstractVideoSurface::nearestFormat(const QVideoSurfaceFormat&  format0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("nearestFormat");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVideoSurfaceFormat" , "const QVideoSurfaceFormat&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVideoSurfaceFormat returnValue;
    void* args[2] = {NULL, (void*)&format0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("nearestFormat", methodInfo, result);
        } else {
          returnValue = *((QVideoSurfaceFormat*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAbstractVideoSurface::nearestFormat(format0);
}
bool  PythonQtShell_QAbstractVideoSurface::present(const QVideoFrame&  frame0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("present");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QVideoFrame&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&frame0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("present", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return bool();
}
bool  PythonQtShell_QAbstractVideoSurface::start(const QVideoSurfaceFormat&  format0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("start");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QVideoSurfaceFormat&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&format0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("start", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAbstractVideoSurface::start(format0);
}
void PythonQtShell_QAbstractVideoSurface::stop()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("stop");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAbstractVideoSurface::stop();
}
QList<QVideoFrame::PixelFormat >  PythonQtShell_QAbstractVideoSurface::supportedPixelFormats(QAbstractVideoBuffer::HandleType  handleType0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("supportedPixelFormats");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QList<QVideoFrame::PixelFormat >" , "QAbstractVideoBuffer::HandleType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QList<QVideoFrame::PixelFormat > returnValue;
    void* args[2] = {NULL, (void*)&handleType0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportedPixelFormats", methodInfo, result);
        } else {
          returnValue = *((QList<QVideoFrame::PixelFormat >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QList<QVideoFrame::PixelFormat >();
}
void PythonQtShell_QAbstractVideoSurface::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAbstractVideoSurface::timerEvent(arg__1);
}
QAbstractVideoSurface* PythonQtWrapper_QAbstractVideoSurface::new_QAbstractVideoSurface(QObject*  parent)
{ 
return new PythonQtShell_QAbstractVideoSurface(parent); }

QAbstractVideoSurface::Error  PythonQtWrapper_QAbstractVideoSurface::error(QAbstractVideoSurface* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

bool  PythonQtWrapper_QAbstractVideoSurface::isActive(QAbstractVideoSurface* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QAbstractVideoSurface::isFormatSupported(QAbstractVideoSurface* theWrappedObject, const QVideoSurfaceFormat&  format) const
{
  return ( ((PythonQtPublicPromoter_QAbstractVideoSurface*)theWrappedObject)->promoted_isFormatSupported(format));
}

QSize  PythonQtWrapper_QAbstractVideoSurface::nativeResolution(QAbstractVideoSurface* theWrappedObject) const
{
  return ( theWrappedObject->nativeResolution());
}

QVideoSurfaceFormat  PythonQtWrapper_QAbstractVideoSurface::nearestFormat(QAbstractVideoSurface* theWrappedObject, const QVideoSurfaceFormat&  format) const
{
  return ( ((PythonQtPublicPromoter_QAbstractVideoSurface*)theWrappedObject)->promoted_nearestFormat(format));
}

bool  PythonQtWrapper_QAbstractVideoSurface::present(QAbstractVideoSurface* theWrappedObject, const QVideoFrame&  frame)
{
  return ( ((PythonQtPublicPromoter_QAbstractVideoSurface*)theWrappedObject)->promoted_present(frame));
}

void PythonQtWrapper_QAbstractVideoSurface::setError(QAbstractVideoSurface* theWrappedObject, QAbstractVideoSurface::Error  error)
{
  ( ((PythonQtPublicPromoter_QAbstractVideoSurface*)theWrappedObject)->promoted_setError(error));
}

void PythonQtWrapper_QAbstractVideoSurface::setNativeResolution(QAbstractVideoSurface* theWrappedObject, const QSize&  resolution)
{
  ( ((PythonQtPublicPromoter_QAbstractVideoSurface*)theWrappedObject)->promoted_setNativeResolution(resolution));
}

bool  PythonQtWrapper_QAbstractVideoSurface::start(QAbstractVideoSurface* theWrappedObject, const QVideoSurfaceFormat&  format)
{
  return ( ((PythonQtPublicPromoter_QAbstractVideoSurface*)theWrappedObject)->promoted_start(format));
}

void PythonQtWrapper_QAbstractVideoSurface::stop(QAbstractVideoSurface* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractVideoSurface*)theWrappedObject)->promoted_stop());
}

QList<QVideoFrame::PixelFormat >  PythonQtWrapper_QAbstractVideoSurface::supportedPixelFormats(QAbstractVideoSurface* theWrappedObject, QAbstractVideoBuffer::HandleType  handleType) const
{
  return ( ((PythonQtPublicPromoter_QAbstractVideoSurface*)theWrappedObject)->promoted_supportedPixelFormats(handleType));
}

QVideoSurfaceFormat  PythonQtWrapper_QAbstractVideoSurface::surfaceFormat(QAbstractVideoSurface* theWrappedObject) const
{
  return ( theWrappedObject->surfaceFormat());
}





QAudioBuffer* PythonQtWrapper_QAudioBuffer::new_QAudioBuffer()
{ 
return new QAudioBuffer(); }

QAudioBuffer* PythonQtWrapper_QAudioBuffer::new_QAudioBuffer(const QAudioBuffer&  other)
{ 
return new QAudioBuffer(other); }

QAudioBuffer* PythonQtWrapper_QAudioBuffer::new_QAudioBuffer(const QByteArray&  data, const QAudioFormat&  format, qint64  startTime)
{ 
return new QAudioBuffer(data, format, startTime); }

QAudioBuffer* PythonQtWrapper_QAudioBuffer::new_QAudioBuffer(int  numFrames, const QAudioFormat&  format, qint64  startTime)
{ 
return new QAudioBuffer(numFrames, format, startTime); }

int  PythonQtWrapper_QAudioBuffer::byteCount(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->byteCount());
}

const void*  PythonQtWrapper_QAudioBuffer::constData(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->constData());
}

void*  PythonQtWrapper_QAudioBuffer::data(QAudioBuffer* theWrappedObject)
{
  return ( theWrappedObject->data());
}

const void*  PythonQtWrapper_QAudioBuffer::data(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

qint64  PythonQtWrapper_QAudioBuffer::duration(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QAudioFormat  PythonQtWrapper_QAudioBuffer::format(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QAudioBuffer::frameCount(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->frameCount());
}

bool  PythonQtWrapper_QAudioBuffer::isValid(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QAudioBuffer*  PythonQtWrapper_QAudioBuffer::operator_assign(QAudioBuffer* theWrappedObject, const QAudioBuffer&  other)
{
  return &( (*theWrappedObject)= other);
}

int  PythonQtWrapper_QAudioBuffer::sampleCount(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->sampleCount());
}

qint64  PythonQtWrapper_QAudioBuffer::startTime(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->startTime());
}



PythonQtShell_QAudioDecoder::~PythonQtShell_QAudioDecoder() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMultimedia::AvailabilityStatus  PythonQtShell_QAudioDecoder::availability() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("availability");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMultimedia::AvailabilityStatus"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMultimedia::AvailabilityStatus returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("availability", methodInfo, result);
        } else {
          returnValue = *((QMultimedia::AvailabilityStatus*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAudioDecoder::availability();
}
bool  PythonQtShell_QAudioDecoder::bind(QObject*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("bind");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("bind", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAudioDecoder::bind(arg__1);
}
void PythonQtShell_QAudioDecoder::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAudioDecoder::childEvent(arg__1);
}
void PythonQtShell_QAudioDecoder::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAudioDecoder::customEvent(arg__1);
}
bool  PythonQtShell_QAudioDecoder::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAudioDecoder::event(arg__1);
}
bool  PythonQtShell_QAudioDecoder::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAudioDecoder::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QAudioDecoder::isAvailable() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("isAvailable");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isAvailable", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAudioDecoder::isAvailable();
}
QMediaService*  PythonQtShell_QAudioDecoder::service() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("service");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMediaService*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMediaService* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("service", methodInfo, result);
        } else {
          returnValue = *((QMediaService**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAudioDecoder::service();
}
void PythonQtShell_QAudioDecoder::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAudioDecoder::timerEvent(arg__1);
}
void PythonQtShell_QAudioDecoder::unbind(QObject*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("unbind");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAudioDecoder::unbind(arg__1);
}
QAudioDecoder* PythonQtWrapper_QAudioDecoder::new_QAudioDecoder(QObject*  parent)
{ 
return new PythonQtShell_QAudioDecoder(parent); }

QAudioFormat  PythonQtWrapper_QAudioDecoder::audioFormat(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->audioFormat());
}

bool  PythonQtWrapper_QAudioDecoder::bind(QAudioDecoder* theWrappedObject, QObject*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QAudioDecoder*)theWrappedObject)->promoted_bind(arg__1));
}

bool  PythonQtWrapper_QAudioDecoder::bufferAvailable(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->bufferAvailable());
}

qint64  PythonQtWrapper_QAudioDecoder::duration(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QAudioDecoder::Error  PythonQtWrapper_QAudioDecoder::error(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QAudioDecoder::errorString(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QMultimedia::SupportEstimate  PythonQtWrapper_QAudioDecoder::static_QAudioDecoder_hasSupport(const QString&  mimeType, const QStringList&  codecs)
{
  return (QAudioDecoder::hasSupport(mimeType, codecs));
}

qint64  PythonQtWrapper_QAudioDecoder::position(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QAudioBuffer  PythonQtWrapper_QAudioDecoder::read(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->read());
}

void PythonQtWrapper_QAudioDecoder::setAudioFormat(QAudioDecoder* theWrappedObject, const QAudioFormat&  format)
{
  ( theWrappedObject->setAudioFormat(format));
}

void PythonQtWrapper_QAudioDecoder::setSourceDevice(QAudioDecoder* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setSourceDevice(device));
}

void PythonQtWrapper_QAudioDecoder::setSourceFilename(QAudioDecoder* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setSourceFilename(fileName));
}

QIODevice*  PythonQtWrapper_QAudioDecoder::sourceDevice(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->sourceDevice());
}

QString  PythonQtWrapper_QAudioDecoder::sourceFilename(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->sourceFilename());
}

QAudioDecoder::State  PythonQtWrapper_QAudioDecoder::state(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QAudioDecoder::unbind(QAudioDecoder* theWrappedObject, QObject*  arg__1)
{
  ( ((PythonQtPublicPromoter_QAudioDecoder*)theWrappedObject)->promoted_unbind(arg__1));
}



QAudioDeviceInfo* PythonQtWrapper_QAudioDeviceInfo::new_QAudioDeviceInfo()
{ 
return new QAudioDeviceInfo(); }

QAudioDeviceInfo* PythonQtWrapper_QAudioDeviceInfo::new_QAudioDeviceInfo(const QAudioDeviceInfo&  other)
{ 
return new QAudioDeviceInfo(other); }

QList<QAudioDeviceInfo >  PythonQtWrapper_QAudioDeviceInfo::static_QAudioDeviceInfo_availableDevices(QAudio::Mode  mode)
{
  return (QAudioDeviceInfo::availableDevices(mode));
}

QAudioDeviceInfo  PythonQtWrapper_QAudioDeviceInfo::static_QAudioDeviceInfo_defaultInputDevice()
{
  return (QAudioDeviceInfo::defaultInputDevice());
}

QAudioDeviceInfo  PythonQtWrapper_QAudioDeviceInfo::static_QAudioDeviceInfo_defaultOutputDevice()
{
  return (QAudioDeviceInfo::defaultOutputDevice());
}

QString  PythonQtWrapper_QAudioDeviceInfo::deviceName(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->deviceName());
}

bool  PythonQtWrapper_QAudioDeviceInfo::isFormatSupported(QAudioDeviceInfo* theWrappedObject, const QAudioFormat&  format) const
{
  return ( theWrappedObject->isFormatSupported(format));
}

bool  PythonQtWrapper_QAudioDeviceInfo::isNull(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QAudioFormat  PythonQtWrapper_QAudioDeviceInfo::nearestFormat(QAudioDeviceInfo* theWrappedObject, const QAudioFormat&  format) const
{
  return ( theWrappedObject->nearestFormat(format));
}

bool  PythonQtWrapper_QAudioDeviceInfo::__ne__(QAudioDeviceInfo* theWrappedObject, const QAudioDeviceInfo&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QAudioDeviceInfo*  PythonQtWrapper_QAudioDeviceInfo::operator_assign(QAudioDeviceInfo* theWrappedObject, const QAudioDeviceInfo&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QAudioDeviceInfo::__eq__(QAudioDeviceInfo* theWrappedObject, const QAudioDeviceInfo&  other) const
{
  return ( (*theWrappedObject)== other);
}

QAudioFormat  PythonQtWrapper_QAudioDeviceInfo::preferredFormat(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->preferredFormat());
}

QList<QAudioFormat::Endian >  PythonQtWrapper_QAudioDeviceInfo::supportedByteOrders(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->supportedByteOrders());
}

QList<int >  PythonQtWrapper_QAudioDeviceInfo::supportedChannelCounts(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->supportedChannelCounts());
}

QStringList  PythonQtWrapper_QAudioDeviceInfo::supportedCodecs(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->supportedCodecs());
}

QList<int >  PythonQtWrapper_QAudioDeviceInfo::supportedSampleRates(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->supportedSampleRates());
}

QList<int >  PythonQtWrapper_QAudioDeviceInfo::supportedSampleSizes(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->supportedSampleSizes());
}

QList<QAudioFormat::SampleType >  PythonQtWrapper_QAudioDeviceInfo::supportedSampleTypes(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->supportedSampleTypes());
}



QAudioEncoderSettings* PythonQtWrapper_QAudioEncoderSettings::new_QAudioEncoderSettings()
{ 
return new QAudioEncoderSettings(); }

QAudioEncoderSettings* PythonQtWrapper_QAudioEncoderSettings::new_QAudioEncoderSettings(const QAudioEncoderSettings&  other)
{ 
return new QAudioEncoderSettings(other); }

int  PythonQtWrapper_QAudioEncoderSettings::bitRate(QAudioEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->bitRate());
}

int  PythonQtWrapper_QAudioEncoderSettings::channelCount(QAudioEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->channelCount());
}

QString  PythonQtWrapper_QAudioEncoderSettings::codec(QAudioEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->codec());
}

QMultimedia::EncodingMode  PythonQtWrapper_QAudioEncoderSettings::encodingMode(QAudioEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->encodingMode());
}

QVariant  PythonQtWrapper_QAudioEncoderSettings::encodingOption(QAudioEncoderSettings* theWrappedObject, const QString&  option) const
{
  return ( theWrappedObject->encodingOption(option));
}

QMap<QString , QVariant >  PythonQtWrapper_QAudioEncoderSettings::encodingOptions(QAudioEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->encodingOptions());
}

bool  PythonQtWrapper_QAudioEncoderSettings::isNull(QAudioEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QAudioEncoderSettings::__ne__(QAudioEncoderSettings* theWrappedObject, const QAudioEncoderSettings&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QAudioEncoderSettings*  PythonQtWrapper_QAudioEncoderSettings::operator_assign(QAudioEncoderSettings* theWrappedObject, const QAudioEncoderSettings&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QAudioEncoderSettings::__eq__(QAudioEncoderSettings* theWrappedObject, const QAudioEncoderSettings&  other) const
{
  return ( (*theWrappedObject)== other);
}

QMultimedia::EncodingQuality  PythonQtWrapper_QAudioEncoderSettings::quality(QAudioEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->quality());
}

int  PythonQtWrapper_QAudioEncoderSettings::sampleRate(QAudioEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->sampleRate());
}

void PythonQtWrapper_QAudioEncoderSettings::setBitRate(QAudioEncoderSettings* theWrappedObject, int  bitrate)
{
  ( theWrappedObject->setBitRate(bitrate));
}

void PythonQtWrapper_QAudioEncoderSettings::setChannelCount(QAudioEncoderSettings* theWrappedObject, int  channels)
{
  ( theWrappedObject->setChannelCount(channels));
}

void PythonQtWrapper_QAudioEncoderSettings::setCodec(QAudioEncoderSettings* theWrappedObject, const QString&  codec)
{
  ( theWrappedObject->setCodec(codec));
}

void PythonQtWrapper_QAudioEncoderSettings::setEncodingMode(QAudioEncoderSettings* theWrappedObject, QMultimedia::EncodingMode  arg__1)
{
  ( theWrappedObject->setEncodingMode(arg__1));
}

void PythonQtWrapper_QAudioEncoderSettings::setEncodingOption(QAudioEncoderSettings* theWrappedObject, const QString&  option, const QVariant&  value)
{
  ( theWrappedObject->setEncodingOption(option, value));
}

void PythonQtWrapper_QAudioEncoderSettings::setEncodingOptions(QAudioEncoderSettings* theWrappedObject, const QMap<QString , QVariant >&  options)
{
  ( theWrappedObject->setEncodingOptions(options));
}

void PythonQtWrapper_QAudioEncoderSettings::setQuality(QAudioEncoderSettings* theWrappedObject, QMultimedia::EncodingQuality  quality)
{
  ( theWrappedObject->setQuality(quality));
}

void PythonQtWrapper_QAudioEncoderSettings::setSampleRate(QAudioEncoderSettings* theWrappedObject, int  rate)
{
  ( theWrappedObject->setSampleRate(rate));
}



QAudioFormat* PythonQtWrapper_QAudioFormat::new_QAudioFormat()
{ 
return new QAudioFormat(); }

QAudioFormat* PythonQtWrapper_QAudioFormat::new_QAudioFormat(const QAudioFormat&  other)
{ 
return new QAudioFormat(other); }

QAudioFormat::Endian  PythonQtWrapper_QAudioFormat::byteOrder(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->byteOrder());
}

int  PythonQtWrapper_QAudioFormat::bytesForDuration(QAudioFormat* theWrappedObject, qint64  duration) const
{
  return ( theWrappedObject->bytesForDuration(duration));
}

int  PythonQtWrapper_QAudioFormat::bytesForFrames(QAudioFormat* theWrappedObject, int  frameCount) const
{
  return ( theWrappedObject->bytesForFrames(frameCount));
}

int  PythonQtWrapper_QAudioFormat::bytesPerFrame(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->bytesPerFrame());
}

int  PythonQtWrapper_QAudioFormat::channelCount(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->channelCount());
}

QString  PythonQtWrapper_QAudioFormat::codec(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->codec());
}

qint64  PythonQtWrapper_QAudioFormat::durationForBytes(QAudioFormat* theWrappedObject, int  byteCount) const
{
  return ( theWrappedObject->durationForBytes(byteCount));
}

qint64  PythonQtWrapper_QAudioFormat::durationForFrames(QAudioFormat* theWrappedObject, int  frameCount) const
{
  return ( theWrappedObject->durationForFrames(frameCount));
}

int  PythonQtWrapper_QAudioFormat::framesForBytes(QAudioFormat* theWrappedObject, int  byteCount) const
{
  return ( theWrappedObject->framesForBytes(byteCount));
}

int  PythonQtWrapper_QAudioFormat::framesForDuration(QAudioFormat* theWrappedObject, qint64  duration) const
{
  return ( theWrappedObject->framesForDuration(duration));
}

bool  PythonQtWrapper_QAudioFormat::isValid(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QAudioFormat::__ne__(QAudioFormat* theWrappedObject, const QAudioFormat&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QAudioFormat*  PythonQtWrapper_QAudioFormat::operator_assign(QAudioFormat* theWrappedObject, const QAudioFormat&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QAudioFormat::__eq__(QAudioFormat* theWrappedObject, const QAudioFormat&  other) const
{
  return ( (*theWrappedObject)== other);
}

int  PythonQtWrapper_QAudioFormat::sampleRate(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->sampleRate());
}

int  PythonQtWrapper_QAudioFormat::sampleSize(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->sampleSize());
}

QAudioFormat::SampleType  PythonQtWrapper_QAudioFormat::sampleType(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->sampleType());
}

void PythonQtWrapper_QAudioFormat::setByteOrder(QAudioFormat* theWrappedObject, QAudioFormat::Endian  byteOrder)
{
  ( theWrappedObject->setByteOrder(byteOrder));
}

void PythonQtWrapper_QAudioFormat::setChannelCount(QAudioFormat* theWrappedObject, int  channelCount)
{
  ( theWrappedObject->setChannelCount(channelCount));
}

void PythonQtWrapper_QAudioFormat::setCodec(QAudioFormat* theWrappedObject, const QString&  codec)
{
  ( theWrappedObject->setCodec(codec));
}

void PythonQtWrapper_QAudioFormat::setSampleRate(QAudioFormat* theWrappedObject, int  sampleRate)
{
  ( theWrappedObject->setSampleRate(sampleRate));
}

void PythonQtWrapper_QAudioFormat::setSampleSize(QAudioFormat* theWrappedObject, int  sampleSize)
{
  ( theWrappedObject->setSampleSize(sampleSize));
}

void PythonQtWrapper_QAudioFormat::setSampleType(QAudioFormat* theWrappedObject, QAudioFormat::SampleType  sampleType)
{
  ( theWrappedObject->setSampleType(sampleType));
}

QString PythonQtWrapper_QAudioFormat::py_toString(QAudioFormat* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QAudioInput::~PythonQtShell_QAudioInput() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioInput::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAudioInput::childEvent(arg__1);
}
void PythonQtShell_QAudioInput::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAudioInput::customEvent(arg__1);
}
bool  PythonQtShell_QAudioInput::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAudioInput::event(arg__1);
}
bool  PythonQtShell_QAudioInput::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAudioInput::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QAudioInput::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAudioInput::timerEvent(arg__1);
}
QAudioInput* PythonQtWrapper_QAudioInput::new_QAudioInput(const QAudioDeviceInfo&  audioDeviceInfo, const QAudioFormat&  format, QObject*  parent)
{ 
return new PythonQtShell_QAudioInput(audioDeviceInfo, format, parent); }

QAudioInput* PythonQtWrapper_QAudioInput::new_QAudioInput(const QAudioFormat&  format, QObject*  parent)
{ 
return new PythonQtShell_QAudioInput(format, parent); }

int  PythonQtWrapper_QAudioInput::bufferSize(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->bufferSize());
}

int  PythonQtWrapper_QAudioInput::bytesReady(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->bytesReady());
}

qint64  PythonQtWrapper_QAudioInput::elapsedUSecs(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->elapsedUSecs());
}

QAudio::Error  PythonQtWrapper_QAudioInput::error(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QAudioFormat  PythonQtWrapper_QAudioInput::format(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QAudioInput::notifyInterval(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->notifyInterval());
}

int  PythonQtWrapper_QAudioInput::periodSize(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->periodSize());
}

qint64  PythonQtWrapper_QAudioInput::processedUSecs(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->processedUSecs());
}

void PythonQtWrapper_QAudioInput::reset(QAudioInput* theWrappedObject)
{
  ( theWrappedObject->reset());
}

void PythonQtWrapper_QAudioInput::resume(QAudioInput* theWrappedObject)
{
  ( theWrappedObject->resume());
}

void PythonQtWrapper_QAudioInput::setBufferSize(QAudioInput* theWrappedObject, int  bytes)
{
  ( theWrappedObject->setBufferSize(bytes));
}

void PythonQtWrapper_QAudioInput::setNotifyInterval(QAudioInput* theWrappedObject, int  milliSeconds)
{
  ( theWrappedObject->setNotifyInterval(milliSeconds));
}

void PythonQtWrapper_QAudioInput::setVolume(QAudioInput* theWrappedObject, qreal  volume)
{
  ( theWrappedObject->setVolume(volume));
}

QIODevice*  PythonQtWrapper_QAudioInput::start(QAudioInput* theWrappedObject)
{
  return ( theWrappedObject->start());
}

void PythonQtWrapper_QAudioInput::start(QAudioInput* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->start(device));
}

QAudio::State  PythonQtWrapper_QAudioInput::state(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QAudioInput::stop(QAudioInput* theWrappedObject)
{
  ( theWrappedObject->stop());
}

void PythonQtWrapper_QAudioInput::suspend(QAudioInput* theWrappedObject)
{
  ( theWrappedObject->suspend());
}

qreal  PythonQtWrapper_QAudioInput::volume(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



PythonQtShell_QAudioOutput::~PythonQtShell_QAudioOutput() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioOutput::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAudioOutput::childEvent(arg__1);
}
void PythonQtShell_QAudioOutput::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAudioOutput::customEvent(arg__1);
}
bool  PythonQtShell_QAudioOutput::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAudioOutput::event(arg__1);
}
bool  PythonQtShell_QAudioOutput::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAudioOutput::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QAudioOutput::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAudioOutput::timerEvent(arg__1);
}
QAudioOutput* PythonQtWrapper_QAudioOutput::new_QAudioOutput(const QAudioDeviceInfo&  audioDeviceInfo, const QAudioFormat&  format, QObject*  parent)
{ 
return new PythonQtShell_QAudioOutput(audioDeviceInfo, format, parent); }

QAudioOutput* PythonQtWrapper_QAudioOutput::new_QAudioOutput(const QAudioFormat&  format, QObject*  parent)
{ 
return new PythonQtShell_QAudioOutput(format, parent); }

int  PythonQtWrapper_QAudioOutput::bufferSize(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->bufferSize());
}

int  PythonQtWrapper_QAudioOutput::bytesFree(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->bytesFree());
}

QString  PythonQtWrapper_QAudioOutput::category(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->category());
}

qint64  PythonQtWrapper_QAudioOutput::elapsedUSecs(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->elapsedUSecs());
}

QAudio::Error  PythonQtWrapper_QAudioOutput::error(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QAudioFormat  PythonQtWrapper_QAudioOutput::format(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QAudioOutput::notifyInterval(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->notifyInterval());
}

int  PythonQtWrapper_QAudioOutput::periodSize(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->periodSize());
}

qint64  PythonQtWrapper_QAudioOutput::processedUSecs(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->processedUSecs());
}

void PythonQtWrapper_QAudioOutput::reset(QAudioOutput* theWrappedObject)
{
  ( theWrappedObject->reset());
}

void PythonQtWrapper_QAudioOutput::resume(QAudioOutput* theWrappedObject)
{
  ( theWrappedObject->resume());
}

void PythonQtWrapper_QAudioOutput::setBufferSize(QAudioOutput* theWrappedObject, int  bytes)
{
  ( theWrappedObject->setBufferSize(bytes));
}

void PythonQtWrapper_QAudioOutput::setCategory(QAudioOutput* theWrappedObject, const QString&  category)
{
  ( theWrappedObject->setCategory(category));
}

void PythonQtWrapper_QAudioOutput::setNotifyInterval(QAudioOutput* theWrappedObject, int  milliSeconds)
{
  ( theWrappedObject->setNotifyInterval(milliSeconds));
}

void PythonQtWrapper_QAudioOutput::setVolume(QAudioOutput* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setVolume(arg__1));
}

QIODevice*  PythonQtWrapper_QAudioOutput::start(QAudioOutput* theWrappedObject)
{
  return ( theWrappedObject->start());
}

void PythonQtWrapper_QAudioOutput::start(QAudioOutput* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->start(device));
}

QAudio::State  PythonQtWrapper_QAudioOutput::state(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QAudioOutput::stop(QAudioOutput* theWrappedObject)
{
  ( theWrappedObject->stop());
}

void PythonQtWrapper_QAudioOutput::suspend(QAudioOutput* theWrappedObject)
{
  ( theWrappedObject->suspend());
}

qreal  PythonQtWrapper_QAudioOutput::volume(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



PythonQtShell_QAudioProbe::~PythonQtShell_QAudioProbe() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioProbe::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAudioProbe::childEvent(arg__1);
}
void PythonQtShell_QAudioProbe::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAudioProbe::customEvent(arg__1);
}
bool  PythonQtShell_QAudioProbe::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAudioProbe::event(arg__1);
}
bool  PythonQtShell_QAudioProbe::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAudioProbe::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QAudioProbe::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAudioProbe::timerEvent(arg__1);
}
QAudioProbe* PythonQtWrapper_QAudioProbe::new_QAudioProbe(QObject*  parent)
{ 
return new PythonQtShell_QAudioProbe(parent); }

bool  PythonQtWrapper_QAudioProbe::isActive(QAudioProbe* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QAudioProbe::setSource(QAudioProbe* theWrappedObject, QMediaObject*  source)
{
  return ( theWrappedObject->setSource(source));
}

bool  PythonQtWrapper_QAudioProbe::setSource(QAudioProbe* theWrappedObject, QMediaRecorder*  source)
{
  return ( theWrappedObject->setSource(source));
}



PythonQtShell_QAudioRecorder::~PythonQtShell_QAudioRecorder() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioRecorder::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAudioRecorder::childEvent(arg__1);
}
void PythonQtShell_QAudioRecorder::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAudioRecorder::customEvent(arg__1);
}
bool  PythonQtShell_QAudioRecorder::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAudioRecorder::event(arg__1);
}
bool  PythonQtShell_QAudioRecorder::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAudioRecorder::eventFilter(arg__1, arg__2);
}
QMediaObject*  PythonQtShell_QAudioRecorder::mediaObject() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMediaObject* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mediaObject", methodInfo, result);
        } else {
          returnValue = *((QMediaObject**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAudioRecorder::mediaObject();
}
bool  PythonQtShell_QAudioRecorder::setMediaObject(QMediaObject*  object0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setMediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&object0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setMediaObject", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAudioRecorder::setMediaObject(object0);
}
void PythonQtShell_QAudioRecorder::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QAudioRecorder::timerEvent(arg__1);
}
QAudioRecorder* PythonQtWrapper_QAudioRecorder::new_QAudioRecorder(QObject*  parent)
{ 
return new PythonQtShell_QAudioRecorder(parent); }

QString  PythonQtWrapper_QAudioRecorder::audioInput(QAudioRecorder* theWrappedObject) const
{
  return ( theWrappedObject->audioInput());
}

QString  PythonQtWrapper_QAudioRecorder::audioInputDescription(QAudioRecorder* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->audioInputDescription(name));
}

QStringList  PythonQtWrapper_QAudioRecorder::audioInputs(QAudioRecorder* theWrappedObject) const
{
  return ( theWrappedObject->audioInputs());
}

QString  PythonQtWrapper_QAudioRecorder::defaultAudioInput(QAudioRecorder* theWrappedObject) const
{
  return ( theWrappedObject->defaultAudioInput());
}



PythonQtShell_QCamera::~PythonQtShell_QCamera() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMultimedia::AvailabilityStatus  PythonQtShell_QCamera::availability() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("availability");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMultimedia::AvailabilityStatus"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMultimedia::AvailabilityStatus returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("availability", methodInfo, result);
        } else {
          returnValue = *((QMultimedia::AvailabilityStatus*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCamera::availability();
}
bool  PythonQtShell_QCamera::bind(QObject*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("bind");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("bind", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCamera::bind(arg__1);
}
void PythonQtShell_QCamera::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCamera::childEvent(arg__1);
}
void PythonQtShell_QCamera::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCamera::customEvent(arg__1);
}
bool  PythonQtShell_QCamera::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCamera::event(arg__1);
}
bool  PythonQtShell_QCamera::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCamera::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QCamera::isAvailable() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("isAvailable");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isAvailable", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCamera::isAvailable();
}
QMediaService*  PythonQtShell_QCamera::service() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("service");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMediaService*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMediaService* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("service", methodInfo, result);
        } else {
          returnValue = *((QMediaService**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCamera::service();
}
void PythonQtShell_QCamera::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCamera::timerEvent(arg__1);
}
void PythonQtShell_QCamera::unbind(QObject*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("unbind");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCamera::unbind(arg__1);
}
QCamera* PythonQtWrapper_QCamera::new_QCamera(QCamera::Position  position, QObject*  parent)
{ 
return new PythonQtShell_QCamera(position, parent); }

QCamera* PythonQtWrapper_QCamera::new_QCamera(QObject*  parent)
{ 
return new PythonQtShell_QCamera(parent); }

QCamera* PythonQtWrapper_QCamera::new_QCamera(const QByteArray&  deviceName, QObject*  parent)
{ 
return new PythonQtShell_QCamera(deviceName, parent); }

QCamera* PythonQtWrapper_QCamera::new_QCamera(const QCameraInfo&  cameraInfo, QObject*  parent)
{ 
return new PythonQtShell_QCamera(cameraInfo, parent); }

QMultimedia::AvailabilityStatus  PythonQtWrapper_QCamera::availability(QCamera* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QCamera*)theWrappedObject)->promoted_availability());
}

QList<QByteArray >  PythonQtWrapper_QCamera::static_QCamera_availableDevices()
{
  return (QCamera::availableDevices());
}

QCamera::CaptureModes  PythonQtWrapper_QCamera::captureMode(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->captureMode());
}

QString  PythonQtWrapper_QCamera::static_QCamera_deviceDescription(const QByteArray&  device)
{
  return (QCamera::deviceDescription(device));
}

QCamera::Error  PythonQtWrapper_QCamera::error(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QCamera::errorString(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QCameraExposure*  PythonQtWrapper_QCamera::exposure(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->exposure());
}

QCameraFocus*  PythonQtWrapper_QCamera::focus(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->focus());
}

QCameraImageProcessing*  PythonQtWrapper_QCamera::imageProcessing(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->imageProcessing());
}

bool  PythonQtWrapper_QCamera::isCaptureModeSupported(QCamera* theWrappedObject, QCamera::CaptureModes  mode) const
{
  return ( theWrappedObject->isCaptureModeSupported(mode));
}

QCamera::LockStatus  PythonQtWrapper_QCamera::lockStatus(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->lockStatus());
}

QCamera::LockStatus  PythonQtWrapper_QCamera::lockStatus(QCamera* theWrappedObject, QCamera::LockType  lock) const
{
  return ( theWrappedObject->lockStatus(lock));
}

QCamera::LockTypes  PythonQtWrapper_QCamera::requestedLocks(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->requestedLocks());
}

void PythonQtWrapper_QCamera::setViewfinder(QCamera* theWrappedObject, QAbstractVideoSurface*  surface)
{
  ( theWrappedObject->setViewfinder(surface));
}

void PythonQtWrapper_QCamera::setViewfinder(QCamera* theWrappedObject, QGraphicsVideoItem*  viewfinder)
{
  ( theWrappedObject->setViewfinder(viewfinder));
}

void PythonQtWrapper_QCamera::setViewfinder(QCamera* theWrappedObject, QVideoWidget*  viewfinder)
{
  ( theWrappedObject->setViewfinder(viewfinder));
}

QCamera::State  PythonQtWrapper_QCamera::state(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QCamera::Status  PythonQtWrapper_QCamera::status(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

QCamera::LockTypes  PythonQtWrapper_QCamera::supportedLocks(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->supportedLocks());
}



qreal  PythonQtWrapper_QCameraExposure::aperture(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->aperture());
}

qreal  PythonQtWrapper_QCameraExposure::exposureCompensation(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->exposureCompensation());
}

QCameraExposure::ExposureMode  PythonQtWrapper_QCameraExposure::exposureMode(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->exposureMode());
}

QCameraExposure::FlashModes  PythonQtWrapper_QCameraExposure::flashMode(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->flashMode());
}

bool  PythonQtWrapper_QCameraExposure::isAvailable(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->isAvailable());
}

bool  PythonQtWrapper_QCameraExposure::isExposureModeSupported(QCameraExposure* theWrappedObject, QCameraExposure::ExposureMode  mode) const
{
  return ( theWrappedObject->isExposureModeSupported(mode));
}

bool  PythonQtWrapper_QCameraExposure::isFlashModeSupported(QCameraExposure* theWrappedObject, QCameraExposure::FlashModes  mode) const
{
  return ( theWrappedObject->isFlashModeSupported(mode));
}

bool  PythonQtWrapper_QCameraExposure::isFlashReady(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->isFlashReady());
}

bool  PythonQtWrapper_QCameraExposure::isMeteringModeSupported(QCameraExposure* theWrappedObject, QCameraExposure::MeteringMode  mode) const
{
  return ( theWrappedObject->isMeteringModeSupported(mode));
}

int  PythonQtWrapper_QCameraExposure::isoSensitivity(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->isoSensitivity());
}

QCameraExposure::MeteringMode  PythonQtWrapper_QCameraExposure::meteringMode(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->meteringMode());
}

qreal  PythonQtWrapper_QCameraExposure::requestedAperture(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->requestedAperture());
}

int  PythonQtWrapper_QCameraExposure::requestedIsoSensitivity(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->requestedIsoSensitivity());
}

qreal  PythonQtWrapper_QCameraExposure::requestedShutterSpeed(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->requestedShutterSpeed());
}

void PythonQtWrapper_QCameraExposure::setSpotMeteringPoint(QCameraExposure* theWrappedObject, const QPointF&  point)
{
  ( theWrappedObject->setSpotMeteringPoint(point));
}

qreal  PythonQtWrapper_QCameraExposure::shutterSpeed(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->shutterSpeed());
}

QPointF  PythonQtWrapper_QCameraExposure::spotMeteringPoint(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->spotMeteringPoint());
}

QList<qreal >  PythonQtWrapper_QCameraExposure::supportedApertures(QCameraExposure* theWrappedObject, bool*  continuous) const
{
  return ( theWrappedObject->supportedApertures(continuous));
}

QList<int >  PythonQtWrapper_QCameraExposure::supportedIsoSensitivities(QCameraExposure* theWrappedObject, bool*  continuous) const
{
  return ( theWrappedObject->supportedIsoSensitivities(continuous));
}

QList<qreal >  PythonQtWrapper_QCameraExposure::supportedShutterSpeeds(QCameraExposure* theWrappedObject, bool*  continuous) const
{
  return ( theWrappedObject->supportedShutterSpeeds(continuous));
}



QPointF  PythonQtWrapper_QCameraFocus::customFocusPoint(QCameraFocus* theWrappedObject) const
{
  return ( theWrappedObject->customFocusPoint());
}

qreal  PythonQtWrapper_QCameraFocus::digitalZoom(QCameraFocus* theWrappedObject) const
{
  return ( theWrappedObject->digitalZoom());
}

QCameraFocus::FocusModes  PythonQtWrapper_QCameraFocus::focusMode(QCameraFocus* theWrappedObject) const
{
  return ( theWrappedObject->focusMode());
}

QCameraFocus::FocusPointMode  PythonQtWrapper_QCameraFocus::focusPointMode(QCameraFocus* theWrappedObject) const
{
  return ( theWrappedObject->focusPointMode());
}

QList<QCameraFocusZone >  PythonQtWrapper_QCameraFocus::focusZones(QCameraFocus* theWrappedObject) const
{
  return ( theWrappedObject->focusZones());
}

bool  PythonQtWrapper_QCameraFocus::isAvailable(QCameraFocus* theWrappedObject) const
{
  return ( theWrappedObject->isAvailable());
}

bool  PythonQtWrapper_QCameraFocus::isFocusModeSupported(QCameraFocus* theWrappedObject, QCameraFocus::FocusModes  mode) const
{
  return ( theWrappedObject->isFocusModeSupported(mode));
}

bool  PythonQtWrapper_QCameraFocus::isFocusPointModeSupported(QCameraFocus* theWrappedObject, QCameraFocus::FocusPointMode  arg__1) const
{
  return ( theWrappedObject->isFocusPointModeSupported(arg__1));
}

qreal  PythonQtWrapper_QCameraFocus::maximumDigitalZoom(QCameraFocus* theWrappedObject) const
{
  return ( theWrappedObject->maximumDigitalZoom());
}

qreal  PythonQtWrapper_QCameraFocus::maximumOpticalZoom(QCameraFocus* theWrappedObject) const
{
  return ( theWrappedObject->maximumOpticalZoom());
}

qreal  PythonQtWrapper_QCameraFocus::opticalZoom(QCameraFocus* theWrappedObject) const
{
  return ( theWrappedObject->opticalZoom());
}

void PythonQtWrapper_QCameraFocus::setCustomFocusPoint(QCameraFocus* theWrappedObject, const QPointF&  point)
{
  ( theWrappedObject->setCustomFocusPoint(point));
}

void PythonQtWrapper_QCameraFocus::setFocusMode(QCameraFocus* theWrappedObject, QCameraFocus::FocusModes  mode)
{
  ( theWrappedObject->setFocusMode(mode));
}

void PythonQtWrapper_QCameraFocus::setFocusPointMode(QCameraFocus* theWrappedObject, QCameraFocus::FocusPointMode  mode)
{
  ( theWrappedObject->setFocusPointMode(mode));
}

void PythonQtWrapper_QCameraFocus::zoomTo(QCameraFocus* theWrappedObject, qreal  opticalZoom, qreal  digitalZoom)
{
  ( theWrappedObject->zoomTo(opticalZoom, digitalZoom));
}



QCameraFocusZone* PythonQtWrapper_QCameraFocusZone::new_QCameraFocusZone()
{ 
return new QCameraFocusZone(); }

QCameraFocusZone* PythonQtWrapper_QCameraFocusZone::new_QCameraFocusZone(const QCameraFocusZone&  other)
{ 
return new QCameraFocusZone(other); }

QCameraFocusZone* PythonQtWrapper_QCameraFocusZone::new_QCameraFocusZone(const QRectF&  area, QCameraFocusZone::FocusZoneStatus  status)
{ 
return new QCameraFocusZone(area, status); }

QRectF  PythonQtWrapper_QCameraFocusZone::area(QCameraFocusZone* theWrappedObject) const
{
  return ( theWrappedObject->area());
}

bool  PythonQtWrapper_QCameraFocusZone::isValid(QCameraFocusZone* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QCameraFocusZone::__ne__(QCameraFocusZone* theWrappedObject, const QCameraFocusZone&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QCameraFocusZone*  PythonQtWrapper_QCameraFocusZone::operator_assign(QCameraFocusZone* theWrappedObject, const QCameraFocusZone&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QCameraFocusZone::__eq__(QCameraFocusZone* theWrappedObject, const QCameraFocusZone&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QCameraFocusZone::setStatus(QCameraFocusZone* theWrappedObject, QCameraFocusZone::FocusZoneStatus  status)
{
  ( theWrappedObject->setStatus(status));
}

QCameraFocusZone::FocusZoneStatus  PythonQtWrapper_QCameraFocusZone::status(QCameraFocusZone* theWrappedObject) const
{
  return ( theWrappedObject->status());
}



PythonQtShell_QCameraImageCapture::~PythonQtShell_QCameraImageCapture() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QCameraImageCapture::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraImageCapture::childEvent(arg__1);
}
void PythonQtShell_QCameraImageCapture::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraImageCapture::customEvent(arg__1);
}
bool  PythonQtShell_QCameraImageCapture::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraImageCapture::event(arg__1);
}
bool  PythonQtShell_QCameraImageCapture::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraImageCapture::eventFilter(arg__1, arg__2);
}
QMediaObject*  PythonQtShell_QCameraImageCapture::mediaObject() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMediaObject* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mediaObject", methodInfo, result);
        } else {
          returnValue = *((QMediaObject**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraImageCapture::mediaObject();
}
bool  PythonQtShell_QCameraImageCapture::setMediaObject(QMediaObject*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setMediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setMediaObject", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraImageCapture::setMediaObject(arg__1);
}
void PythonQtShell_QCameraImageCapture::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraImageCapture::timerEvent(arg__1);
}
QCameraImageCapture* PythonQtWrapper_QCameraImageCapture::new_QCameraImageCapture(QMediaObject*  mediaObject, QObject*  parent)
{ 
return new PythonQtShell_QCameraImageCapture(mediaObject, parent); }

QMultimedia::AvailabilityStatus  PythonQtWrapper_QCameraImageCapture::availability(QCameraImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->availability());
}

QVideoFrame::PixelFormat  PythonQtWrapper_QCameraImageCapture::bufferFormat(QCameraImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->bufferFormat());
}

QCameraImageCapture::CaptureDestinations  PythonQtWrapper_QCameraImageCapture::captureDestination(QCameraImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->captureDestination());
}

QImageEncoderSettings  PythonQtWrapper_QCameraImageCapture::encodingSettings(QCameraImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->encodingSettings());
}

QCameraImageCapture::Error  PythonQtWrapper_QCameraImageCapture::error(QCameraImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QCameraImageCapture::errorString(QCameraImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QCameraImageCapture::imageCodecDescription(QCameraImageCapture* theWrappedObject, const QString&  codecName) const
{
  return ( theWrappedObject->imageCodecDescription(codecName));
}

bool  PythonQtWrapper_QCameraImageCapture::isAvailable(QCameraImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->isAvailable());
}

bool  PythonQtWrapper_QCameraImageCapture::isCaptureDestinationSupported(QCameraImageCapture* theWrappedObject, QCameraImageCapture::CaptureDestinations  destination) const
{
  return ( theWrappedObject->isCaptureDestinationSupported(destination));
}

bool  PythonQtWrapper_QCameraImageCapture::isReadyForCapture(QCameraImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->isReadyForCapture());
}

QMediaObject*  PythonQtWrapper_QCameraImageCapture::mediaObject(QCameraImageCapture* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QCameraImageCapture*)theWrappedObject)->promoted_mediaObject());
}

void PythonQtWrapper_QCameraImageCapture::setBufferFormat(QCameraImageCapture* theWrappedObject, const QVideoFrame::PixelFormat  format)
{
  ( theWrappedObject->setBufferFormat(format));
}

void PythonQtWrapper_QCameraImageCapture::setCaptureDestination(QCameraImageCapture* theWrappedObject, QCameraImageCapture::CaptureDestinations  destination)
{
  ( theWrappedObject->setCaptureDestination(destination));
}

void PythonQtWrapper_QCameraImageCapture::setEncodingSettings(QCameraImageCapture* theWrappedObject, const QImageEncoderSettings&  settings)
{
  ( theWrappedObject->setEncodingSettings(settings));
}

bool  PythonQtWrapper_QCameraImageCapture::setMediaObject(QCameraImageCapture* theWrappedObject, QMediaObject*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QCameraImageCapture*)theWrappedObject)->promoted_setMediaObject(arg__1));
}

QList<QVideoFrame::PixelFormat >  PythonQtWrapper_QCameraImageCapture::supportedBufferFormats(QCameraImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->supportedBufferFormats());
}

QStringList  PythonQtWrapper_QCameraImageCapture::supportedImageCodecs(QCameraImageCapture* theWrappedObject) const
{
  return ( theWrappedObject->supportedImageCodecs());
}

QList<QSize >  PythonQtWrapper_QCameraImageCapture::supportedResolutions(QCameraImageCapture* theWrappedObject, const QImageEncoderSettings&  settings, bool*  continuous) const
{
  return ( theWrappedObject->supportedResolutions(settings, continuous));
}



qreal  PythonQtWrapper_QCameraImageProcessing::contrast(QCameraImageProcessing* theWrappedObject) const
{
  return ( theWrappedObject->contrast());
}

qreal  PythonQtWrapper_QCameraImageProcessing::denoisingLevel(QCameraImageProcessing* theWrappedObject) const
{
  return ( theWrappedObject->denoisingLevel());
}

bool  PythonQtWrapper_QCameraImageProcessing::isAvailable(QCameraImageProcessing* theWrappedObject) const
{
  return ( theWrappedObject->isAvailable());
}

bool  PythonQtWrapper_QCameraImageProcessing::isWhiteBalanceModeSupported(QCameraImageProcessing* theWrappedObject, QCameraImageProcessing::WhiteBalanceMode  mode) const
{
  return ( theWrappedObject->isWhiteBalanceModeSupported(mode));
}

qreal  PythonQtWrapper_QCameraImageProcessing::manualWhiteBalance(QCameraImageProcessing* theWrappedObject) const
{
  return ( theWrappedObject->manualWhiteBalance());
}

qreal  PythonQtWrapper_QCameraImageProcessing::saturation(QCameraImageProcessing* theWrappedObject) const
{
  return ( theWrappedObject->saturation());
}

void PythonQtWrapper_QCameraImageProcessing::setContrast(QCameraImageProcessing* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setContrast(value));
}

void PythonQtWrapper_QCameraImageProcessing::setDenoisingLevel(QCameraImageProcessing* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setDenoisingLevel(value));
}

void PythonQtWrapper_QCameraImageProcessing::setManualWhiteBalance(QCameraImageProcessing* theWrappedObject, qreal  colorTemperature)
{
  ( theWrappedObject->setManualWhiteBalance(colorTemperature));
}

void PythonQtWrapper_QCameraImageProcessing::setSaturation(QCameraImageProcessing* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setSaturation(value));
}

void PythonQtWrapper_QCameraImageProcessing::setSharpeningLevel(QCameraImageProcessing* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setSharpeningLevel(value));
}

void PythonQtWrapper_QCameraImageProcessing::setWhiteBalanceMode(QCameraImageProcessing* theWrappedObject, QCameraImageProcessing::WhiteBalanceMode  mode)
{
  ( theWrappedObject->setWhiteBalanceMode(mode));
}

qreal  PythonQtWrapper_QCameraImageProcessing::sharpeningLevel(QCameraImageProcessing* theWrappedObject) const
{
  return ( theWrappedObject->sharpeningLevel());
}

QCameraImageProcessing::WhiteBalanceMode  PythonQtWrapper_QCameraImageProcessing::whiteBalanceMode(QCameraImageProcessing* theWrappedObject) const
{
  return ( theWrappedObject->whiteBalanceMode());
}



QCameraInfo* PythonQtWrapper_QCameraInfo::new_QCameraInfo(const QByteArray&  name)
{ 
return new QCameraInfo(name); }

QCameraInfo* PythonQtWrapper_QCameraInfo::new_QCameraInfo(const QCamera&  camera)
{ 
return new QCameraInfo(camera); }

QCameraInfo* PythonQtWrapper_QCameraInfo::new_QCameraInfo(const QCameraInfo&  other)
{ 
return new QCameraInfo(other); }

QList<QCameraInfo >  PythonQtWrapper_QCameraInfo::static_QCameraInfo_availableCameras(QCamera::Position  position)
{
  return (QCameraInfo::availableCameras(position));
}

QCameraInfo  PythonQtWrapper_QCameraInfo::static_QCameraInfo_defaultCamera()
{
  return (QCameraInfo::defaultCamera());
}

QString  PythonQtWrapper_QCameraInfo::description(QCameraInfo* theWrappedObject) const
{
  return ( theWrappedObject->description());
}

QString  PythonQtWrapper_QCameraInfo::deviceName(QCameraInfo* theWrappedObject) const
{
  return ( theWrappedObject->deviceName());
}

bool  PythonQtWrapper_QCameraInfo::isNull(QCameraInfo* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QCameraInfo::__ne__(QCameraInfo* theWrappedObject, const QCameraInfo&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QCameraInfo*  PythonQtWrapper_QCameraInfo::operator_assign(QCameraInfo* theWrappedObject, const QCameraInfo&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QCameraInfo::__eq__(QCameraInfo* theWrappedObject, const QCameraInfo&  other) const
{
  return ( (*theWrappedObject)== other);
}

int  PythonQtWrapper_QCameraInfo::orientation(QCameraInfo* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

QCamera::Position  PythonQtWrapper_QCameraInfo::position(QCameraInfo* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QString PythonQtWrapper_QCameraInfo::py_toString(QCameraInfo* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QCameraViewfinder::~PythonQtShell_QCameraViewfinder() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QCameraViewfinder::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("actionEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::actionEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::changeEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("changeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::changeEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::childEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("closeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::closeEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("contextMenuEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::contextMenuEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::customEvent(arg__1);
}
int  PythonQtShell_QCameraViewfinder::devType() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("devType");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraViewfinder::devType();
}
void PythonQtShell_QCameraViewfinder::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragEnterEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::dragEnterEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragLeaveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::dragLeaveEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::dragMoveEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dropEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::dropEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::enterEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("enterEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::enterEvent(arg__1);
}
bool  PythonQtShell_QCameraViewfinder::event(QEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraViewfinder::event(event0);
}
bool  PythonQtShell_QCameraViewfinder::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraViewfinder::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QCameraViewfinder::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusInEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::focusInEvent(arg__1);
}
bool  PythonQtShell_QCameraViewfinder::focusNextPrevChild(bool  next0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusNextPrevChild");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&next0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("focusNextPrevChild", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraViewfinder::focusNextPrevChild(next0);
}
void PythonQtShell_QCameraViewfinder::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusOutEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::focusOutEvent(arg__1);
}
bool  PythonQtShell_QCameraViewfinder::hasHeightForWidth() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hasHeightForWidth");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hasHeightForWidth", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraViewfinder::hasHeightForWidth();
}
int  PythonQtShell_QCameraViewfinder::heightForWidth(int  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("heightForWidth");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("heightForWidth", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraViewfinder::heightForWidth(arg__1);
}
void PythonQtShell_QCameraViewfinder::hideEvent(QHideEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hideEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::hideEvent(event0);
}
void PythonQtShell_QCameraViewfinder::initPainter(QPainter*  painter0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("initPainter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPainter*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&painter0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::initPainter(painter0);
}
void PythonQtShell_QCameraViewfinder::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("inputMethodEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QCameraViewfinder::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("inputMethodQuery");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraViewfinder::inputMethodQuery(arg__1);
}
void PythonQtShell_QCameraViewfinder::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("keyPressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::keyPressEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("keyReleaseEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::keyReleaseEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::leaveEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("leaveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::leaveEvent(arg__1);
}
QMediaObject*  PythonQtShell_QCameraViewfinder::mediaObject() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMediaObject* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mediaObject", methodInfo, result);
        } else {
          returnValue = *((QMediaObject**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraViewfinder::mediaObject();
}
int  PythonQtShell_QCameraViewfinder::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("metric");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraViewfinder::metric(arg__1);
}
QSize  PythonQtShell_QCameraViewfinder::minimumSizeHint() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("getMinimumSizeHint");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("getMinimumSizeHint", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraViewfinder::minimumSizeHint();
}
void PythonQtShell_QCameraViewfinder::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::mouseMoveEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mousePressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::mousePressEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseReleaseEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::moveEvent(QMoveEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("moveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::moveEvent(event0);
}
bool  PythonQtShell_QCameraViewfinder::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("nativeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&eventType0, (void*)&message1, (void*)&result2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("nativeEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraViewfinder::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QCameraViewfinder::paintEngine() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("paintEngine");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QPaintEngine*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
        } else {
          returnValue = *((QPaintEngine**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraViewfinder::paintEngine();
}
void PythonQtShell_QCameraViewfinder::paintEvent(QPaintEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("paintEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::paintEvent(event0);
}
QPaintDevice*  PythonQtShell_QCameraViewfinder::redirected(QPoint*  offset0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("redirected");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QPaintDevice*" , "QPoint*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QPaintDevice* returnValue;
    void* args[2] = {NULL, (void*)&offset0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("redirected", methodInfo, result);
        } else {
          returnValue = *((QPaintDevice**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraViewfinder::redirected(offset0);
}
void PythonQtShell_QCameraViewfinder::resizeEvent(QResizeEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("resizeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::resizeEvent(event0);
}
bool  PythonQtShell_QCameraViewfinder::setMediaObject(QMediaObject*  object0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setMediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&object0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setMediaObject", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraViewfinder::setMediaObject(object0);
}
QPainter*  PythonQtShell_QCameraViewfinder::sharedPainter() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sharedPainter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QPainter*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainter* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sharedPainter", methodInfo, result);
        } else {
          returnValue = *((QPainter**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QCameraViewfinder::sharedPainter();
}
void PythonQtShell_QCameraViewfinder::showEvent(QShowEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("showEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::showEvent(event0);
}
void PythonQtShell_QCameraViewfinder::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("tabletEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::tabletEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::timerEvent(arg__1);
}
void PythonQtShell_QCameraViewfinder::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("wheelEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QCameraViewfinder::wheelEvent(arg__1);
}
QCameraViewfinder* PythonQtWrapper_QCameraViewfinder::new_QCameraViewfinder(QWidget*  parent)
{ 
return new PythonQtShell_QCameraViewfinder(parent); }

QMediaObject*  PythonQtWrapper_QCameraViewfinder::mediaObject(QCameraViewfinder* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QCameraViewfinder*)theWrappedObject)->promoted_mediaObject());
}

bool  PythonQtWrapper_QCameraViewfinder::setMediaObject(QCameraViewfinder* theWrappedObject, QMediaObject*  object)
{
  return ( ((PythonQtPublicPromoter_QCameraViewfinder*)theWrappedObject)->promoted_setMediaObject(object));
}



PythonQtShell_QGraphicsVideoItem::~PythonQtShell_QGraphicsVideoItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsVideoItem::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QGraphicsVideoItem::childEvent(arg__1);
}
void PythonQtShell_QGraphicsVideoItem::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QGraphicsVideoItem::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsVideoItem::event(QEvent*  ev0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&ev0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QGraphicsVideoItem::event(ev0);
}
bool  PythonQtShell_QGraphicsVideoItem::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QGraphicsVideoItem::eventFilter(arg__1, arg__2);
}
QMediaObject*  PythonQtShell_QGraphicsVideoItem::mediaObject() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMediaObject* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mediaObject", methodInfo, result);
        } else {
          returnValue = *((QMediaObject**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QGraphicsVideoItem::mediaObject();
}
bool  PythonQtShell_QGraphicsVideoItem::setMediaObject(QMediaObject*  object0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setMediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&object0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setMediaObject", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QGraphicsVideoItem::setMediaObject(object0);
}
void PythonQtShell_QGraphicsVideoItem::timerEvent(QTimerEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QGraphicsVideoItem::timerEvent(event0);
}
QGraphicsVideoItem* PythonQtWrapper_QGraphicsVideoItem::new_QGraphicsVideoItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsVideoItem(parent); }

Qt::AspectRatioMode  PythonQtWrapper_QGraphicsVideoItem::aspectRatioMode(QGraphicsVideoItem* theWrappedObject) const
{
  return ( theWrappedObject->aspectRatioMode());
}

QRectF  PythonQtWrapper_QGraphicsVideoItem::boundingRect(QGraphicsVideoItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

QVariant  PythonQtWrapper_QGraphicsVideoItem::itemChange(QGraphicsVideoItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
  return ( ((PythonQtPublicPromoter_QGraphicsVideoItem*)theWrappedObject)->promoted_itemChange(change, value));
}

QMediaObject*  PythonQtWrapper_QGraphicsVideoItem::mediaObject(QGraphicsVideoItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsVideoItem*)theWrappedObject)->promoted_mediaObject());
}

QSizeF  PythonQtWrapper_QGraphicsVideoItem::nativeSize(QGraphicsVideoItem* theWrappedObject) const
{
  return ( theWrappedObject->nativeSize());
}

QPointF  PythonQtWrapper_QGraphicsVideoItem::offset(QGraphicsVideoItem* theWrappedObject) const
{
  return ( theWrappedObject->offset());
}

void PythonQtWrapper_QGraphicsVideoItem::paint(QGraphicsVideoItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

void PythonQtWrapper_QGraphicsVideoItem::setAspectRatioMode(QGraphicsVideoItem* theWrappedObject, Qt::AspectRatioMode  mode)
{
  ( theWrappedObject->setAspectRatioMode(mode));
}

bool  PythonQtWrapper_QGraphicsVideoItem::setMediaObject(QGraphicsVideoItem* theWrappedObject, QMediaObject*  object)
{
  return ( ((PythonQtPublicPromoter_QGraphicsVideoItem*)theWrappedObject)->promoted_setMediaObject(object));
}

void PythonQtWrapper_QGraphicsVideoItem::setOffset(QGraphicsVideoItem* theWrappedObject, const QPointF&  offset)
{
  ( theWrappedObject->setOffset(offset));
}

void PythonQtWrapper_QGraphicsVideoItem::setSize(QGraphicsVideoItem* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setSize(size));
}

QSizeF  PythonQtWrapper_QGraphicsVideoItem::size(QGraphicsVideoItem* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QGraphicsVideoItem::timerEvent(QGraphicsVideoItem* theWrappedObject, QTimerEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsVideoItem*)theWrappedObject)->promoted_timerEvent(event));
}



QImageEncoderSettings* PythonQtWrapper_QImageEncoderSettings::new_QImageEncoderSettings()
{ 
return new QImageEncoderSettings(); }

QImageEncoderSettings* PythonQtWrapper_QImageEncoderSettings::new_QImageEncoderSettings(const QImageEncoderSettings&  other)
{ 
return new QImageEncoderSettings(other); }

QString  PythonQtWrapper_QImageEncoderSettings::codec(QImageEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->codec());
}

QVariant  PythonQtWrapper_QImageEncoderSettings::encodingOption(QImageEncoderSettings* theWrappedObject, const QString&  option) const
{
  return ( theWrappedObject->encodingOption(option));
}

QMap<QString , QVariant >  PythonQtWrapper_QImageEncoderSettings::encodingOptions(QImageEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->encodingOptions());
}

bool  PythonQtWrapper_QImageEncoderSettings::isNull(QImageEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QImageEncoderSettings::__ne__(QImageEncoderSettings* theWrappedObject, const QImageEncoderSettings&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QImageEncoderSettings*  PythonQtWrapper_QImageEncoderSettings::operator_assign(QImageEncoderSettings* theWrappedObject, const QImageEncoderSettings&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QImageEncoderSettings::__eq__(QImageEncoderSettings* theWrappedObject, const QImageEncoderSettings&  other) const
{
  return ( (*theWrappedObject)== other);
}

QMultimedia::EncodingQuality  PythonQtWrapper_QImageEncoderSettings::quality(QImageEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->quality());
}

QSize  PythonQtWrapper_QImageEncoderSettings::resolution(QImageEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->resolution());
}

void PythonQtWrapper_QImageEncoderSettings::setCodec(QImageEncoderSettings* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setCodec(arg__1));
}

void PythonQtWrapper_QImageEncoderSettings::setEncodingOption(QImageEncoderSettings* theWrappedObject, const QString&  option, const QVariant&  value)
{
  ( theWrappedObject->setEncodingOption(option, value));
}

void PythonQtWrapper_QImageEncoderSettings::setEncodingOptions(QImageEncoderSettings* theWrappedObject, const QMap<QString , QVariant >&  options)
{
  ( theWrappedObject->setEncodingOptions(options));
}

void PythonQtWrapper_QImageEncoderSettings::setQuality(QImageEncoderSettings* theWrappedObject, QMultimedia::EncodingQuality  quality)
{
  ( theWrappedObject->setQuality(quality));
}

void PythonQtWrapper_QImageEncoderSettings::setResolution(QImageEncoderSettings* theWrappedObject, const QSize&  arg__1)
{
  ( theWrappedObject->setResolution(arg__1));
}

void PythonQtWrapper_QImageEncoderSettings::setResolution(QImageEncoderSettings* theWrappedObject, int  width, int  height)
{
  ( theWrappedObject->setResolution(width, height));
}



PythonQtShell_QMediaBindableInterface::~PythonQtShell_QMediaBindableInterface() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMediaObject*  PythonQtShell_QMediaBindableInterface::mediaObject() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMediaObject* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mediaObject", methodInfo, result);
        } else {
          returnValue = *((QMediaObject**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return 0;
}
bool  PythonQtShell_QMediaBindableInterface::setMediaObject(QMediaObject*  object0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setMediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&object0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setMediaObject", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return bool();
}
QMediaBindableInterface* PythonQtWrapper_QMediaBindableInterface::new_QMediaBindableInterface()
{ 
return new PythonQtShell_QMediaBindableInterface(); }

QMediaObject*  PythonQtWrapper_QMediaBindableInterface::mediaObject(QMediaBindableInterface* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QMediaBindableInterface*)theWrappedObject)->promoted_mediaObject());
}

bool  PythonQtWrapper_QMediaBindableInterface::setMediaObject(QMediaBindableInterface* theWrappedObject, QMediaObject*  object)
{
  return ( ((PythonQtPublicPromoter_QMediaBindableInterface*)theWrappedObject)->promoted_setMediaObject(object));
}



QMediaContent* PythonQtWrapper_QMediaContent::new_QMediaContent()
{ 
return new QMediaContent(); }

QMediaContent* PythonQtWrapper_QMediaContent::new_QMediaContent(QMediaPlaylist*  playlist, const QUrl&  contentUrl, bool  takeOwnership)
{ 
return new QMediaContent(playlist, contentUrl, takeOwnership); }

QMediaContent* PythonQtWrapper_QMediaContent::new_QMediaContent(const QList<QMediaResource >&  resources)
{ 
return new QMediaContent(resources); }

QMediaContent* PythonQtWrapper_QMediaContent::new_QMediaContent(const QMediaContent&  other)
{ 
return new QMediaContent(other); }

QMediaContent* PythonQtWrapper_QMediaContent::new_QMediaContent(const QMediaResource&  contentResource)
{ 
return new QMediaContent(contentResource); }

QMediaContent* PythonQtWrapper_QMediaContent::new_QMediaContent(const QNetworkRequest&  contentRequest)
{ 
return new QMediaContent(contentRequest); }

QMediaContent* PythonQtWrapper_QMediaContent::new_QMediaContent(const QUrl&  contentUrl)
{ 
return new QMediaContent(contentUrl); }

QNetworkRequest  PythonQtWrapper_QMediaContent::canonicalRequest(QMediaContent* theWrappedObject) const
{
  return ( theWrappedObject->canonicalRequest());
}

QMediaResource  PythonQtWrapper_QMediaContent::canonicalResource(QMediaContent* theWrappedObject) const
{
  return ( theWrappedObject->canonicalResource());
}

QUrl  PythonQtWrapper_QMediaContent::canonicalUrl(QMediaContent* theWrappedObject) const
{
  return ( theWrappedObject->canonicalUrl());
}

bool  PythonQtWrapper_QMediaContent::isNull(QMediaContent* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QMediaContent::__ne__(QMediaContent* theWrappedObject, const QMediaContent&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QMediaContent*  PythonQtWrapper_QMediaContent::operator_assign(QMediaContent* theWrappedObject, const QMediaContent&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QMediaContent::__eq__(QMediaContent* theWrappedObject, const QMediaContent&  other) const
{
  return ( (*theWrappedObject)== other);
}

QMediaPlaylist*  PythonQtWrapper_QMediaContent::playlist(QMediaContent* theWrappedObject) const
{
  return ( theWrappedObject->playlist());
}

QList<QMediaResource >  PythonQtWrapper_QMediaContent::resources(QMediaContent* theWrappedObject) const
{
  return ( theWrappedObject->resources());
}



PythonQtShell_QMediaControl::~PythonQtShell_QMediaControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMediaControl::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaControl::childEvent(arg__1);
}
void PythonQtShell_QMediaControl::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaControl::customEvent(arg__1);
}
bool  PythonQtShell_QMediaControl::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaControl::event(arg__1);
}
bool  PythonQtShell_QMediaControl::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaControl::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QMediaControl::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaControl::timerEvent(arg__1);
}
QMediaControl* PythonQtWrapper_QMediaControl::new_QMediaControl(QObject*  parent)
{ 
return new PythonQtShell_QMediaControl(parent); }



PythonQtShell_QMediaObject::~PythonQtShell_QMediaObject() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMultimedia::AvailabilityStatus  PythonQtShell_QMediaObject::availability() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("availability");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMultimedia::AvailabilityStatus"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMultimedia::AvailabilityStatus returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("availability", methodInfo, result);
        } else {
          returnValue = *((QMultimedia::AvailabilityStatus*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaObject::availability();
}
bool  PythonQtShell_QMediaObject::bind(QObject*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("bind");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("bind", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaObject::bind(arg__1);
}
void PythonQtShell_QMediaObject::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaObject::childEvent(arg__1);
}
void PythonQtShell_QMediaObject::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaObject::customEvent(arg__1);
}
bool  PythonQtShell_QMediaObject::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaObject::event(arg__1);
}
bool  PythonQtShell_QMediaObject::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaObject::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QMediaObject::isAvailable() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("isAvailable");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isAvailable", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaObject::isAvailable();
}
QMediaService*  PythonQtShell_QMediaObject::service() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("service");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMediaService*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMediaService* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("service", methodInfo, result);
        } else {
          returnValue = *((QMediaService**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaObject::service();
}
void PythonQtShell_QMediaObject::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaObject::timerEvent(arg__1);
}
void PythonQtShell_QMediaObject::unbind(QObject*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("unbind");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaObject::unbind(arg__1);
}
QMediaObject* PythonQtWrapper_QMediaObject::new_QMediaObject(QObject*  parent, QMediaService*  service)
{ 
return new PythonQtShell_QMediaObject(parent, service); }

void PythonQtWrapper_QMediaObject::addPropertyWatch(QMediaObject* theWrappedObject, const QByteArray&  name)
{
  ( ((PythonQtPublicPromoter_QMediaObject*)theWrappedObject)->promoted_addPropertyWatch(name));
}

QMultimedia::AvailabilityStatus  PythonQtWrapper_QMediaObject::availability(QMediaObject* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QMediaObject*)theWrappedObject)->promoted_availability());
}

QStringList  PythonQtWrapper_QMediaObject::availableMetaData(QMediaObject* theWrappedObject) const
{
  return ( theWrappedObject->availableMetaData());
}

bool  PythonQtWrapper_QMediaObject::bind(QMediaObject* theWrappedObject, QObject*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QMediaObject*)theWrappedObject)->promoted_bind(arg__1));
}

bool  PythonQtWrapper_QMediaObject::isAvailable(QMediaObject* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QMediaObject*)theWrappedObject)->promoted_isAvailable());
}

bool  PythonQtWrapper_QMediaObject::isMetaDataAvailable(QMediaObject* theWrappedObject) const
{
  return ( theWrappedObject->isMetaDataAvailable());
}

QVariant  PythonQtWrapper_QMediaObject::metaData(QMediaObject* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->metaData(key));
}

int  PythonQtWrapper_QMediaObject::notifyInterval(QMediaObject* theWrappedObject) const
{
  return ( theWrappedObject->notifyInterval());
}

void PythonQtWrapper_QMediaObject::removePropertyWatch(QMediaObject* theWrappedObject, const QByteArray&  name)
{
  ( ((PythonQtPublicPromoter_QMediaObject*)theWrappedObject)->promoted_removePropertyWatch(name));
}

QMediaService*  PythonQtWrapper_QMediaObject::service(QMediaObject* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QMediaObject*)theWrappedObject)->promoted_service());
}

void PythonQtWrapper_QMediaObject::setNotifyInterval(QMediaObject* theWrappedObject, int  milliSeconds)
{
  ( theWrappedObject->setNotifyInterval(milliSeconds));
}

void PythonQtWrapper_QMediaObject::unbind(QMediaObject* theWrappedObject, QObject*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMediaObject*)theWrappedObject)->promoted_unbind(arg__1));
}



PythonQtShell_QMediaPlayer::~PythonQtShell_QMediaPlayer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMultimedia::AvailabilityStatus  PythonQtShell_QMediaPlayer::availability() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("availability");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMultimedia::AvailabilityStatus"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMultimedia::AvailabilityStatus returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("availability", methodInfo, result);
        } else {
          returnValue = *((QMultimedia::AvailabilityStatus*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaPlayer::availability();
}
bool  PythonQtShell_QMediaPlayer::bind(QObject*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("bind");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("bind", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaPlayer::bind(arg__1);
}
void PythonQtShell_QMediaPlayer::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaPlayer::childEvent(arg__1);
}
void PythonQtShell_QMediaPlayer::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaPlayer::customEvent(arg__1);
}
bool  PythonQtShell_QMediaPlayer::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaPlayer::event(arg__1);
}
bool  PythonQtShell_QMediaPlayer::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaPlayer::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QMediaPlayer::isAvailable() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("isAvailable");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isAvailable", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaPlayer::isAvailable();
}
QMediaService*  PythonQtShell_QMediaPlayer::service() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("service");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMediaService*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMediaService* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("service", methodInfo, result);
        } else {
          returnValue = *((QMediaService**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaPlayer::service();
}
void PythonQtShell_QMediaPlayer::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaPlayer::timerEvent(arg__1);
}
void PythonQtShell_QMediaPlayer::unbind(QObject*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("unbind");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaPlayer::unbind(arg__1);
}
QMediaPlayer* PythonQtWrapper_QMediaPlayer::new_QMediaPlayer(QObject*  parent, QMediaPlayer::Flags  flags)
{ 
return new PythonQtShell_QMediaPlayer(parent, flags); }

QMultimedia::AvailabilityStatus  PythonQtWrapper_QMediaPlayer::availability(QMediaPlayer* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QMediaPlayer*)theWrappedObject)->promoted_availability());
}

bool  PythonQtWrapper_QMediaPlayer::bind(QMediaPlayer* theWrappedObject, QObject*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QMediaPlayer*)theWrappedObject)->promoted_bind(arg__1));
}

int  PythonQtWrapper_QMediaPlayer::bufferStatus(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->bufferStatus());
}

QMediaContent  PythonQtWrapper_QMediaPlayer::currentMedia(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->currentMedia());
}

QNetworkConfiguration  PythonQtWrapper_QMediaPlayer::currentNetworkConfiguration(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->currentNetworkConfiguration());
}

qint64  PythonQtWrapper_QMediaPlayer::duration(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QMediaPlayer::Error  PythonQtWrapper_QMediaPlayer::error(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QMediaPlayer::errorString(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QMultimedia::SupportEstimate  PythonQtWrapper_QMediaPlayer::static_QMediaPlayer_hasSupport(const QString&  mimeType, const QStringList&  codecs, QMediaPlayer::Flags  flags)
{
  return (QMediaPlayer::hasSupport(mimeType, codecs, flags));
}

bool  PythonQtWrapper_QMediaPlayer::isAudioAvailable(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->isAudioAvailable());
}

bool  PythonQtWrapper_QMediaPlayer::isMuted(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->isMuted());
}

bool  PythonQtWrapper_QMediaPlayer::isSeekable(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->isSeekable());
}

bool  PythonQtWrapper_QMediaPlayer::isVideoAvailable(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->isVideoAvailable());
}

QMediaContent  PythonQtWrapper_QMediaPlayer::media(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->media());
}

QMediaPlayer::MediaStatus  PythonQtWrapper_QMediaPlayer::mediaStatus(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->mediaStatus());
}

const QIODevice*  PythonQtWrapper_QMediaPlayer::mediaStream(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->mediaStream());
}

qreal  PythonQtWrapper_QMediaPlayer::playbackRate(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->playbackRate());
}

QMediaPlaylist*  PythonQtWrapper_QMediaPlayer::playlist(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->playlist());
}

qint64  PythonQtWrapper_QMediaPlayer::position(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

void PythonQtWrapper_QMediaPlayer::setVideoOutput(QMediaPlayer* theWrappedObject, QAbstractVideoSurface*  surface)
{
  ( theWrappedObject->setVideoOutput(surface));
}

void PythonQtWrapper_QMediaPlayer::setVideoOutput(QMediaPlayer* theWrappedObject, QGraphicsVideoItem*  arg__1)
{
  ( theWrappedObject->setVideoOutput(arg__1));
}

void PythonQtWrapper_QMediaPlayer::setVideoOutput(QMediaPlayer* theWrappedObject, QVideoWidget*  arg__1)
{
  ( theWrappedObject->setVideoOutput(arg__1));
}

QMediaPlayer::State  PythonQtWrapper_QMediaPlayer::state(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QStringList  PythonQtWrapper_QMediaPlayer::static_QMediaPlayer_supportedMimeTypes(QMediaPlayer::Flags  flags)
{
  return (QMediaPlayer::supportedMimeTypes(flags));
}

void PythonQtWrapper_QMediaPlayer::unbind(QMediaPlayer* theWrappedObject, QObject*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMediaPlayer*)theWrappedObject)->promoted_unbind(arg__1));
}

int  PythonQtWrapper_QMediaPlayer::volume(QMediaPlayer* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



PythonQtShell_QMediaPlaylist::~PythonQtShell_QMediaPlaylist() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMediaPlaylist::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaPlaylist::childEvent(arg__1);
}
void PythonQtShell_QMediaPlaylist::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaPlaylist::customEvent(arg__1);
}
bool  PythonQtShell_QMediaPlaylist::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaPlaylist::event(arg__1);
}
bool  PythonQtShell_QMediaPlaylist::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaPlaylist::eventFilter(arg__1, arg__2);
}
QMediaObject*  PythonQtShell_QMediaPlaylist::mediaObject() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMediaObject* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mediaObject", methodInfo, result);
        } else {
          returnValue = *((QMediaObject**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaPlaylist::mediaObject();
}
bool  PythonQtShell_QMediaPlaylist::setMediaObject(QMediaObject*  object0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setMediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&object0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setMediaObject", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaPlaylist::setMediaObject(object0);
}
void PythonQtShell_QMediaPlaylist::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaPlaylist::timerEvent(arg__1);
}
QMediaPlaylist* PythonQtWrapper_QMediaPlaylist::new_QMediaPlaylist(QObject*  parent)
{ 
return new PythonQtShell_QMediaPlaylist(parent); }

bool  PythonQtWrapper_QMediaPlaylist::addMedia(QMediaPlaylist* theWrappedObject, const QList<QMediaContent >&  items)
{
  return ( theWrappedObject->addMedia(items));
}

bool  PythonQtWrapper_QMediaPlaylist::addMedia(QMediaPlaylist* theWrappedObject, const QMediaContent&  content)
{
  return ( theWrappedObject->addMedia(content));
}

bool  PythonQtWrapper_QMediaPlaylist::clear(QMediaPlaylist* theWrappedObject)
{
  return ( theWrappedObject->clear());
}

int  PythonQtWrapper_QMediaPlaylist::currentIndex(QMediaPlaylist* theWrappedObject) const
{
  return ( theWrappedObject->currentIndex());
}

QMediaContent  PythonQtWrapper_QMediaPlaylist::currentMedia(QMediaPlaylist* theWrappedObject) const
{
  return ( theWrappedObject->currentMedia());
}

QMediaPlaylist::Error  PythonQtWrapper_QMediaPlaylist::error(QMediaPlaylist* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QMediaPlaylist::errorString(QMediaPlaylist* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QMediaPlaylist::insertMedia(QMediaPlaylist* theWrappedObject, int  index, const QList<QMediaContent >&  items)
{
  return ( theWrappedObject->insertMedia(index, items));
}

bool  PythonQtWrapper_QMediaPlaylist::insertMedia(QMediaPlaylist* theWrappedObject, int  index, const QMediaContent&  content)
{
  return ( theWrappedObject->insertMedia(index, content));
}

bool  PythonQtWrapper_QMediaPlaylist::isEmpty(QMediaPlaylist* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QMediaPlaylist::isReadOnly(QMediaPlaylist* theWrappedObject) const
{
  return ( theWrappedObject->isReadOnly());
}

void PythonQtWrapper_QMediaPlaylist::load(QMediaPlaylist* theWrappedObject, QIODevice*  device, const char*  format)
{
  ( theWrappedObject->load(device, format));
}

void PythonQtWrapper_QMediaPlaylist::load(QMediaPlaylist* theWrappedObject, const QNetworkRequest&  request, const char*  format)
{
  ( theWrappedObject->load(request, format));
}

void PythonQtWrapper_QMediaPlaylist::load(QMediaPlaylist* theWrappedObject, const QUrl&  location, const char*  format)
{
  ( theWrappedObject->load(location, format));
}

QMediaContent  PythonQtWrapper_QMediaPlaylist::media(QMediaPlaylist* theWrappedObject, int  index) const
{
  return ( theWrappedObject->media(index));
}

int  PythonQtWrapper_QMediaPlaylist::mediaCount(QMediaPlaylist* theWrappedObject) const
{
  return ( theWrappedObject->mediaCount());
}

QMediaObject*  PythonQtWrapper_QMediaPlaylist::mediaObject(QMediaPlaylist* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QMediaPlaylist*)theWrappedObject)->promoted_mediaObject());
}

int  PythonQtWrapper_QMediaPlaylist::nextIndex(QMediaPlaylist* theWrappedObject, int  steps) const
{
  return ( theWrappedObject->nextIndex(steps));
}

QMediaPlaylist::PlaybackMode  PythonQtWrapper_QMediaPlaylist::playbackMode(QMediaPlaylist* theWrappedObject) const
{
  return ( theWrappedObject->playbackMode());
}

int  PythonQtWrapper_QMediaPlaylist::previousIndex(QMediaPlaylist* theWrappedObject, int  steps) const
{
  return ( theWrappedObject->previousIndex(steps));
}

bool  PythonQtWrapper_QMediaPlaylist::removeMedia(QMediaPlaylist* theWrappedObject, int  pos)
{
  return ( theWrappedObject->removeMedia(pos));
}

bool  PythonQtWrapper_QMediaPlaylist::removeMedia(QMediaPlaylist* theWrappedObject, int  start, int  end)
{
  return ( theWrappedObject->removeMedia(start, end));
}

bool  PythonQtWrapper_QMediaPlaylist::save(QMediaPlaylist* theWrappedObject, QIODevice*  device, const char*  format)
{
  return ( theWrappedObject->save(device, format));
}

bool  PythonQtWrapper_QMediaPlaylist::save(QMediaPlaylist* theWrappedObject, const QUrl&  location, const char*  format)
{
  return ( theWrappedObject->save(location, format));
}

bool  PythonQtWrapper_QMediaPlaylist::setMediaObject(QMediaPlaylist* theWrappedObject, QMediaObject*  object)
{
  return ( ((PythonQtPublicPromoter_QMediaPlaylist*)theWrappedObject)->promoted_setMediaObject(object));
}

void PythonQtWrapper_QMediaPlaylist::setPlaybackMode(QMediaPlaylist* theWrappedObject, QMediaPlaylist::PlaybackMode  mode)
{
  ( theWrappedObject->setPlaybackMode(mode));
}



PythonQtShell_QMediaRecorder::~PythonQtShell_QMediaRecorder() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMediaRecorder::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaRecorder::childEvent(arg__1);
}
void PythonQtShell_QMediaRecorder::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaRecorder::customEvent(arg__1);
}
bool  PythonQtShell_QMediaRecorder::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaRecorder::event(arg__1);
}
bool  PythonQtShell_QMediaRecorder::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaRecorder::eventFilter(arg__1, arg__2);
}
QMediaObject*  PythonQtShell_QMediaRecorder::mediaObject() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMediaObject* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mediaObject", methodInfo, result);
        } else {
          returnValue = *((QMediaObject**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaRecorder::mediaObject();
}
bool  PythonQtShell_QMediaRecorder::setMediaObject(QMediaObject*  object0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setMediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&object0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setMediaObject", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMediaRecorder::setMediaObject(object0);
}
void PythonQtShell_QMediaRecorder::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMediaRecorder::timerEvent(arg__1);
}
QMediaRecorder* PythonQtWrapper_QMediaRecorder::new_QMediaRecorder(QMediaObject*  mediaObject, QObject*  parent)
{ 
return new PythonQtShell_QMediaRecorder(mediaObject, parent); }

QUrl  PythonQtWrapper_QMediaRecorder::actualLocation(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->actualLocation());
}

QString  PythonQtWrapper_QMediaRecorder::audioCodecDescription(QMediaRecorder* theWrappedObject, const QString&  codecName) const
{
  return ( theWrappedObject->audioCodecDescription(codecName));
}

QAudioEncoderSettings  PythonQtWrapper_QMediaRecorder::audioSettings(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->audioSettings());
}

QMultimedia::AvailabilityStatus  PythonQtWrapper_QMediaRecorder::availability(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->availability());
}

QStringList  PythonQtWrapper_QMediaRecorder::availableMetaData(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->availableMetaData());
}

QString  PythonQtWrapper_QMediaRecorder::containerDescription(QMediaRecorder* theWrappedObject, const QString&  format) const
{
  return ( theWrappedObject->containerDescription(format));
}

QString  PythonQtWrapper_QMediaRecorder::containerFormat(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->containerFormat());
}

qint64  PythonQtWrapper_QMediaRecorder::duration(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QMediaRecorder::Error  PythonQtWrapper_QMediaRecorder::error(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QMediaRecorder::errorString(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QMediaRecorder::isAvailable(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->isAvailable());
}

bool  PythonQtWrapper_QMediaRecorder::isMetaDataAvailable(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->isMetaDataAvailable());
}

bool  PythonQtWrapper_QMediaRecorder::isMetaDataWritable(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->isMetaDataWritable());
}

bool  PythonQtWrapper_QMediaRecorder::isMuted(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->isMuted());
}

QMediaObject*  PythonQtWrapper_QMediaRecorder::mediaObject(QMediaRecorder* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QMediaRecorder*)theWrappedObject)->promoted_mediaObject());
}

QVariant  PythonQtWrapper_QMediaRecorder::metaData(QMediaRecorder* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->metaData(key));
}

QUrl  PythonQtWrapper_QMediaRecorder::outputLocation(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->outputLocation());
}

void PythonQtWrapper_QMediaRecorder::setAudioSettings(QMediaRecorder* theWrappedObject, const QAudioEncoderSettings&  audioSettings)
{
  ( theWrappedObject->setAudioSettings(audioSettings));
}

void PythonQtWrapper_QMediaRecorder::setContainerFormat(QMediaRecorder* theWrappedObject, const QString&  container)
{
  ( theWrappedObject->setContainerFormat(container));
}

void PythonQtWrapper_QMediaRecorder::setEncodingSettings(QMediaRecorder* theWrappedObject, const QAudioEncoderSettings&  audioSettings, const QVideoEncoderSettings&  videoSettings, const QString&  containerMimeType)
{
  ( theWrappedObject->setEncodingSettings(audioSettings, videoSettings, containerMimeType));
}

bool  PythonQtWrapper_QMediaRecorder::setMediaObject(QMediaRecorder* theWrappedObject, QMediaObject*  object)
{
  return ( ((PythonQtPublicPromoter_QMediaRecorder*)theWrappedObject)->promoted_setMediaObject(object));
}

void PythonQtWrapper_QMediaRecorder::setMetaData(QMediaRecorder* theWrappedObject, const QString&  key, const QVariant&  value)
{
  ( theWrappedObject->setMetaData(key, value));
}

bool  PythonQtWrapper_QMediaRecorder::setOutputLocation(QMediaRecorder* theWrappedObject, const QUrl&  location)
{
  return ( theWrappedObject->setOutputLocation(location));
}

void PythonQtWrapper_QMediaRecorder::setVideoSettings(QMediaRecorder* theWrappedObject, const QVideoEncoderSettings&  videoSettings)
{
  ( theWrappedObject->setVideoSettings(videoSettings));
}

QMediaRecorder::State  PythonQtWrapper_QMediaRecorder::state(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QMediaRecorder::Status  PythonQtWrapper_QMediaRecorder::status(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

QStringList  PythonQtWrapper_QMediaRecorder::supportedAudioCodecs(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->supportedAudioCodecs());
}

QList<int >  PythonQtWrapper_QMediaRecorder::supportedAudioSampleRates(QMediaRecorder* theWrappedObject, const QAudioEncoderSettings&  settings, bool*  continuous) const
{
  return ( theWrappedObject->supportedAudioSampleRates(settings, continuous));
}

QStringList  PythonQtWrapper_QMediaRecorder::supportedContainers(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->supportedContainers());
}

QList<qreal >  PythonQtWrapper_QMediaRecorder::supportedFrameRates(QMediaRecorder* theWrappedObject, const QVideoEncoderSettings&  settings, bool*  continuous) const
{
  return ( theWrappedObject->supportedFrameRates(settings, continuous));
}

QList<QSize >  PythonQtWrapper_QMediaRecorder::supportedResolutions(QMediaRecorder* theWrappedObject, const QVideoEncoderSettings&  settings, bool*  continuous) const
{
  return ( theWrappedObject->supportedResolutions(settings, continuous));
}

QStringList  PythonQtWrapper_QMediaRecorder::supportedVideoCodecs(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->supportedVideoCodecs());
}

QString  PythonQtWrapper_QMediaRecorder::videoCodecDescription(QMediaRecorder* theWrappedObject, const QString&  codecName) const
{
  return ( theWrappedObject->videoCodecDescription(codecName));
}

QVideoEncoderSettings  PythonQtWrapper_QMediaRecorder::videoSettings(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->videoSettings());
}

qreal  PythonQtWrapper_QMediaRecorder::volume(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



QMediaResource* PythonQtWrapper_QMediaResource::new_QMediaResource()
{ 
return new QMediaResource(); }

QMediaResource* PythonQtWrapper_QMediaResource::new_QMediaResource(const QMediaResource&  other)
{ 
return new QMediaResource(other); }

QMediaResource* PythonQtWrapper_QMediaResource::new_QMediaResource(const QNetworkRequest&  request, const QString&  mimeType)
{ 
return new QMediaResource(request, mimeType); }

QMediaResource* PythonQtWrapper_QMediaResource::new_QMediaResource(const QUrl&  url, const QString&  mimeType)
{ 
return new QMediaResource(url, mimeType); }

int  PythonQtWrapper_QMediaResource::audioBitRate(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->audioBitRate());
}

QString  PythonQtWrapper_QMediaResource::audioCodec(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->audioCodec());
}

int  PythonQtWrapper_QMediaResource::channelCount(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->channelCount());
}

qint64  PythonQtWrapper_QMediaResource::dataSize(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->dataSize());
}

bool  PythonQtWrapper_QMediaResource::isNull(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QString  PythonQtWrapper_QMediaResource::language(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->language());
}

QString  PythonQtWrapper_QMediaResource::mimeType(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->mimeType());
}

bool  PythonQtWrapper_QMediaResource::__ne__(QMediaResource* theWrappedObject, const QMediaResource&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QMediaResource*  PythonQtWrapper_QMediaResource::operator_assign(QMediaResource* theWrappedObject, const QMediaResource&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QMediaResource::__eq__(QMediaResource* theWrappedObject, const QMediaResource&  other) const
{
  return ( (*theWrappedObject)== other);
}

QNetworkRequest  PythonQtWrapper_QMediaResource::request(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->request());
}

QSize  PythonQtWrapper_QMediaResource::resolution(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->resolution());
}

int  PythonQtWrapper_QMediaResource::sampleRate(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->sampleRate());
}

void PythonQtWrapper_QMediaResource::setAudioBitRate(QMediaResource* theWrappedObject, int  rate)
{
  ( theWrappedObject->setAudioBitRate(rate));
}

void PythonQtWrapper_QMediaResource::setAudioCodec(QMediaResource* theWrappedObject, const QString&  codec)
{
  ( theWrappedObject->setAudioCodec(codec));
}

void PythonQtWrapper_QMediaResource::setChannelCount(QMediaResource* theWrappedObject, int  channels)
{
  ( theWrappedObject->setChannelCount(channels));
}

void PythonQtWrapper_QMediaResource::setDataSize(QMediaResource* theWrappedObject, const qint64  size)
{
  ( theWrappedObject->setDataSize(size));
}

void PythonQtWrapper_QMediaResource::setLanguage(QMediaResource* theWrappedObject, const QString&  language)
{
  ( theWrappedObject->setLanguage(language));
}

void PythonQtWrapper_QMediaResource::setResolution(QMediaResource* theWrappedObject, const QSize&  resolution)
{
  ( theWrappedObject->setResolution(resolution));
}

void PythonQtWrapper_QMediaResource::setResolution(QMediaResource* theWrappedObject, int  width, int  height)
{
  ( theWrappedObject->setResolution(width, height));
}

void PythonQtWrapper_QMediaResource::setSampleRate(QMediaResource* theWrappedObject, int  frequency)
{
  ( theWrappedObject->setSampleRate(frequency));
}

void PythonQtWrapper_QMediaResource::setVideoBitRate(QMediaResource* theWrappedObject, int  rate)
{
  ( theWrappedObject->setVideoBitRate(rate));
}

void PythonQtWrapper_QMediaResource::setVideoCodec(QMediaResource* theWrappedObject, const QString&  codec)
{
  ( theWrappedObject->setVideoCodec(codec));
}

QUrl  PythonQtWrapper_QMediaResource::url(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

int  PythonQtWrapper_QMediaResource::videoBitRate(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->videoBitRate());
}

QString  PythonQtWrapper_QMediaResource::videoCodec(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->videoCodec());
}


