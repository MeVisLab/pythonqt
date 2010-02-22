#include "com_trolltech_qt_opengl0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QImage>
#include <QPixmap>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgl.h>
#include <qglcolormap.h>
#include <qglframebufferobject.h>
#include <qglpixelbuffer.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
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
#include <qstyle.h>
#include <qwidget.h>

QGLColormap* PythonQtWrapper_QGLColormap::new_QGLColormap()
{ 
return new PythonQtShell_QGLColormap(); }

QGLColormap* PythonQtWrapper_QGLColormap::new_QGLColormap(const QGLColormap&  arg__1)
{ 
return new PythonQtShell_QGLColormap(arg__1); }

unsigned int  PythonQtWrapper_QGLColormap::entryRgb(QGLColormap* theWrappedObject, int  idx) const
{
  return ( theWrappedObject->entryRgb(idx));
}

void PythonQtWrapper_QGLColormap::setEntries(QGLColormap* theWrappedObject, int  count, const unsigned int*  colors, int  base)
{
  ( theWrappedObject->setEntries(count, colors, base));
}

void PythonQtWrapper_QGLColormap::setEntry(QGLColormap* theWrappedObject, int  idx, unsigned int  color)
{
  ( theWrappedObject->setEntry(idx, color));
}

int  PythonQtWrapper_QGLColormap::find(QGLColormap* theWrappedObject, unsigned int  color) const
{
  return ( theWrappedObject->find(color));
}

void PythonQtWrapper_QGLColormap::setEntry(QGLColormap* theWrappedObject, int  idx, const QColor&  color)
{
  ( theWrappedObject->setEntry(idx, color));
}

int  PythonQtWrapper_QGLColormap::findNearest(QGLColormap* theWrappedObject, unsigned int  color) const
{
  return ( theWrappedObject->findNearest(color));
}

int  PythonQtWrapper_QGLColormap::size(QGLColormap* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

bool  PythonQtWrapper_QGLColormap::isEmpty(QGLColormap* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QColor  PythonQtWrapper_QGLColormap::entryColor(QGLColormap* theWrappedObject, int  idx) const
{
  return ( theWrappedObject->entryColor(idx));
}



void PythonQtShell_QGLContext::doneCurrent()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "doneCurrent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLContext::doneCurrent();
}
bool  PythonQtShell_QGLContext::create(const QGLContext*  shareContext)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "create");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGLContext*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&shareContext};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("create", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGLContext::create(shareContext);
}
void PythonQtShell_QGLContext::makeCurrent()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "makeCurrent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLContext::makeCurrent();
}
void PythonQtShell_QGLContext::swapBuffers() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "swapBuffers");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLContext::swapBuffers();
}
bool  PythonQtShell_QGLContext::chooseContext(const QGLContext*  shareContext)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "chooseContext");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGLContext*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&shareContext};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("chooseContext", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGLContext::chooseContext(shareContext);
}
QGLContext* PythonQtWrapper_QGLContext::new_QGLContext(const QGLFormat&  format)
{ 
return new PythonQtShell_QGLContext(format); }

QGLContext* PythonQtWrapper_QGLContext::new_QGLContext(const QGLFormat&  format, QPaintDevice*  device)
{ 
return new PythonQtShell_QGLContext(format, device); }

QGLFormat  PythonQtWrapper_QGLContext::format(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

const QGLContext*  PythonQtWrapper_QGLContext::static_QGLContext_currentContext()
{
  return (QGLContext::currentContext());
}

QColor  PythonQtWrapper_QGLContext::overlayTransparentColor(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->overlayTransparentColor());
}

QPaintDevice*  PythonQtWrapper_QGLContext::device(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

void PythonQtWrapper_QGLContext::doneCurrent(QGLContext* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_doneCurrent());
}

QGLFormat  PythonQtWrapper_QGLContext::requestedFormat(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->requestedFormat());
}

bool  PythonQtWrapper_QGLContext::isSharing(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->isSharing());
}

unsigned int  PythonQtWrapper_QGLContext::bindTexture(QGLContext* theWrappedObject, const QImage&  image, unsigned int  target, int  format)
{
  return ( theWrappedObject->bindTexture(image, target, format));
}

unsigned int  PythonQtWrapper_QGLContext::bindTexture(QGLContext* theWrappedObject, const QString&  fileName)
{
  return ( theWrappedObject->bindTexture(fileName));
}

unsigned int  PythonQtWrapper_QGLContext::bindTexture(QGLContext* theWrappedObject, const QPixmap&  pixmap, unsigned int  target, int  format)
{
  return ( theWrappedObject->bindTexture(pixmap, target, format));
}

void PythonQtWrapper_QGLContext::static_QGLContext_setTextureCacheLimit(int  size)
{
  (QGLContext::setTextureCacheLimit(size));
}

void PythonQtWrapper_QGLContext::setFormat(QGLContext* theWrappedObject, const QGLFormat&  format)
{
  ( theWrappedObject->setFormat(format));
}

void PythonQtWrapper_QGLContext::deleteTexture(QGLContext* theWrappedObject, unsigned int  tx_id)
{
  ( theWrappedObject->deleteTexture(tx_id));
}

int  PythonQtWrapper_QGLContext::static_QGLContext_textureCacheLimit()
{
  return (QGLContext::textureCacheLimit());
}

bool  PythonQtWrapper_QGLContext::isValid(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QGLContext::create(QGLContext* theWrappedObject, const QGLContext*  shareContext)
{
  return ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_create(shareContext));
}

void PythonQtWrapper_QGLContext::drawTexture(QGLContext* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget)
{
  ( theWrappedObject->drawTexture(point, textureId, textureTarget));
}

void PythonQtWrapper_QGLContext::makeCurrent(QGLContext* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_makeCurrent());
}

void PythonQtWrapper_QGLContext::drawTexture(QGLContext* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget)
{
  ( theWrappedObject->drawTexture(target, textureId, textureTarget));
}

void PythonQtWrapper_QGLContext::reset(QGLContext* theWrappedObject)
{
  ( theWrappedObject->reset());
}

void PythonQtWrapper_QGLContext::swapBuffers(QGLContext* theWrappedObject) const
{
  ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_swapBuffers());
}

bool  PythonQtWrapper_QGLContext::chooseContext(QGLContext* theWrappedObject, const QGLContext*  shareContext)
{
  return ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_chooseContext(shareContext));
}



int  PythonQtShell_QGLFramebufferObject::metric(QPaintDevice::PaintDeviceMetric  metric) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&metric};
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
  }
}
  return QGLFramebufferObject::metric(metric);
}
QPaintEngine*  PythonQtShell_QGLFramebufferObject::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QGLFramebufferObject::paintEngine();
}
int  PythonQtShell_QGLFramebufferObject::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QGLFramebufferObject::devType();
}
QGLFramebufferObject* PythonQtWrapper_QGLFramebufferObject::new_QGLFramebufferObject(const QSize&  size, QGLFramebufferObject::Attachment  attachment, unsigned int  target, unsigned int  internal_format)
{ 
return new PythonQtShell_QGLFramebufferObject(size, attachment, target, internal_format); }

QGLFramebufferObject* PythonQtWrapper_QGLFramebufferObject::new_QGLFramebufferObject(const QSize&  size, unsigned int  target)
{ 
return new PythonQtShell_QGLFramebufferObject(size, target); }

QGLFramebufferObject* PythonQtWrapper_QGLFramebufferObject::new_QGLFramebufferObject(int  width, int  height, QGLFramebufferObject::Attachment  attachment, unsigned int  target, unsigned int  internal_format)
{ 
return new PythonQtShell_QGLFramebufferObject(width, height, attachment, target, internal_format); }

QGLFramebufferObject* PythonQtWrapper_QGLFramebufferObject::new_QGLFramebufferObject(int  width, int  height, unsigned int  target)
{ 
return new PythonQtShell_QGLFramebufferObject(width, height, target); }

QGLFramebufferObject::Attachment  PythonQtWrapper_QGLFramebufferObject::attachment(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->attachment());
}

bool  PythonQtWrapper_QGLFramebufferObject::isValid(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QGLFramebufferObject::metric(QGLFramebufferObject* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const
{
  return ( ((PythonQtPublicPromoter_QGLFramebufferObject*)theWrappedObject)->promoted_metric(metric));
}

unsigned int  PythonQtWrapper_QGLFramebufferObject::texture(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->texture());
}

QImage  PythonQtWrapper_QGLFramebufferObject::toImage(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->toImage());
}

bool  PythonQtWrapper_QGLFramebufferObject::bind(QGLFramebufferObject* theWrappedObject)
{
  return ( theWrappedObject->bind());
}

void PythonQtWrapper_QGLFramebufferObject::drawTexture(QGLFramebufferObject* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget)
{
  ( theWrappedObject->drawTexture(point, textureId, textureTarget));
}

bool  PythonQtWrapper_QGLFramebufferObject::release(QGLFramebufferObject* theWrappedObject)
{
  return ( theWrappedObject->release());
}

QPaintEngine*  PythonQtWrapper_QGLFramebufferObject::paintEngine(QGLFramebufferObject* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGLFramebufferObject*)theWrappedObject)->promoted_paintEngine());
}

bool  PythonQtWrapper_QGLFramebufferObject::static_QGLFramebufferObject_hasOpenGLFramebufferObjects()
{
  return (QGLFramebufferObject::hasOpenGLFramebufferObjects());
}

void PythonQtWrapper_QGLFramebufferObject::drawTexture(QGLFramebufferObject* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget)
{
  ( theWrappedObject->drawTexture(target, textureId, textureTarget));
}

QSize  PythonQtWrapper_QGLFramebufferObject::size(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

unsigned int  PythonQtWrapper_QGLFramebufferObject::handle(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->handle());
}

int  PythonQtWrapper_QGLFramebufferObject::devType(QGLFramebufferObject* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGLFramebufferObject*)theWrappedObject)->promoted_devType());
}



int  PythonQtShell_QGLPixelBuffer::metric(QPaintDevice::PaintDeviceMetric  metric) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&metric};
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
  }
}
  return QGLPixelBuffer::metric(metric);
}
QPaintEngine*  PythonQtShell_QGLPixelBuffer::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QGLPixelBuffer::paintEngine();
}
int  PythonQtShell_QGLPixelBuffer::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QGLPixelBuffer::devType();
}
QGLPixelBuffer* PythonQtWrapper_QGLPixelBuffer::new_QGLPixelBuffer(const QSize&  size, const QGLFormat&  format, QGLWidget*  shareWidget)
{ 
return new PythonQtShell_QGLPixelBuffer(size, format, shareWidget); }

QGLPixelBuffer* PythonQtWrapper_QGLPixelBuffer::new_QGLPixelBuffer(int  width, int  height, const QGLFormat&  format, QGLWidget*  shareWidget)
{ 
return new PythonQtShell_QGLPixelBuffer(width, height, format, shareWidget); }

void PythonQtWrapper_QGLPixelBuffer::releaseFromDynamicTexture(QGLPixelBuffer* theWrappedObject)
{
  ( theWrappedObject->releaseFromDynamicTexture());
}

bool  PythonQtWrapper_QGLPixelBuffer::makeCurrent(QGLPixelBuffer* theWrappedObject)
{
  return ( theWrappedObject->makeCurrent());
}

int  PythonQtWrapper_QGLPixelBuffer::metric(QGLPixelBuffer* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const
{
  return ( ((PythonQtPublicPromoter_QGLPixelBuffer*)theWrappedObject)->promoted_metric(metric));
}

bool  PythonQtWrapper_QGLPixelBuffer::bindToDynamicTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture)
{
  return ( theWrappedObject->bindToDynamicTexture(texture));
}

void PythonQtWrapper_QGLPixelBuffer::updateDynamicTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture_id) const
{
  ( theWrappedObject->updateDynamicTexture(texture_id));
}

bool  PythonQtWrapper_QGLPixelBuffer::isValid(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QGLFormat  PythonQtWrapper_QGLPixelBuffer::format(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

unsigned int  PythonQtWrapper_QGLPixelBuffer::bindTexture(QGLPixelBuffer* theWrappedObject, const QImage&  image, unsigned int  target)
{
  return ( theWrappedObject->bindTexture(image, target));
}

unsigned int  PythonQtWrapper_QGLPixelBuffer::generateDynamicTexture(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->generateDynamicTexture());
}

QImage  PythonQtWrapper_QGLPixelBuffer::toImage(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->toImage());
}

void PythonQtWrapper_QGLPixelBuffer::deleteTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture_id)
{
  ( theWrappedObject->deleteTexture(texture_id));
}

unsigned int  PythonQtWrapper_QGLPixelBuffer::bindTexture(QGLPixelBuffer* theWrappedObject, const QString&  fileName)
{
  return ( theWrappedObject->bindTexture(fileName));
}

unsigned int  PythonQtWrapper_QGLPixelBuffer::bindTexture(QGLPixelBuffer* theWrappedObject, const QPixmap&  pixmap, unsigned int  target)
{
  return ( theWrappedObject->bindTexture(pixmap, target));
}

void PythonQtWrapper_QGLPixelBuffer::drawTexture(QGLPixelBuffer* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget)
{
  ( theWrappedObject->drawTexture(target, textureId, textureTarget));
}

bool  PythonQtWrapper_QGLPixelBuffer::static_QGLPixelBuffer_hasOpenGLPbuffers()
{
  return (QGLPixelBuffer::hasOpenGLPbuffers());
}

void PythonQtWrapper_QGLPixelBuffer::drawTexture(QGLPixelBuffer* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget)
{
  ( theWrappedObject->drawTexture(point, textureId, textureTarget));
}

QPaintEngine*  PythonQtWrapper_QGLPixelBuffer::paintEngine(QGLPixelBuffer* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGLPixelBuffer*)theWrappedObject)->promoted_paintEngine());
}

QSize  PythonQtWrapper_QGLPixelBuffer::size(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

bool  PythonQtWrapper_QGLPixelBuffer::doneCurrent(QGLPixelBuffer* theWrappedObject)
{
  return ( theWrappedObject->doneCurrent());
}

Qt::HANDLE  PythonQtWrapper_QGLPixelBuffer::handle(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->handle());
}

int  PythonQtWrapper_QGLPixelBuffer::devType(QGLPixelBuffer* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGLPixelBuffer*)theWrappedObject)->promoted_devType());
}



void PythonQtShell_QGLWidget::glInit()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "glInit");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::glInit();
}
void PythonQtShell_QGLWidget::initializeGL()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "initializeGL");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::initializeGL();
}
void PythonQtShell_QGLWidget::resizeGL(int  w, int  h)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeGL");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&w, (void*)&h};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::resizeGL(w, h);
}
void PythonQtShell_QGLWidget::updateOverlayGL()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateOverlayGL");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::updateOverlayGL();
}
void PythonQtShell_QGLWidget::updateGL()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGL");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::updateGL();
}
void PythonQtShell_QGLWidget::initializeOverlayGL()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "initializeOverlayGL");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::initializeOverlayGL();
}
void PythonQtShell_QGLWidget::resizeOverlayGL(int  w, int  h)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeOverlayGL");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&w, (void*)&h};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::resizeOverlayGL(w, h);
}
QPaintEngine*  PythonQtShell_QGLWidget::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QGLWidget::paintEngine();
}
void PythonQtShell_QGLWidget::glDraw()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "glDraw");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::glDraw();
}
void PythonQtShell_QGLWidget::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::paintEvent(arg__1);
}
void PythonQtShell_QGLWidget::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::resizeEvent(arg__1);
}
void PythonQtShell_QGLWidget::paintOverlayGL()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintOverlayGL");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::paintOverlayGL();
}
bool  PythonQtShell_QGLWidget::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QGLWidget::event(arg__1);
}
void PythonQtShell_QGLWidget::paintGL()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintGL");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::paintGL();
}
void PythonQtShell_QGLWidget::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::dragEnterEvent(arg__1);
}
void PythonQtShell_QGLWidget::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::inputMethodEvent(arg__1);
}
void PythonQtShell_QGLWidget::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::moveEvent(arg__1);
}
void PythonQtShell_QGLWidget::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::wheelEvent(arg__1);
}
void PythonQtShell_QGLWidget::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::keyPressEvent(arg__1);
}
void PythonQtShell_QGLWidget::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::languageChange();
}
void PythonQtShell_QGLWidget::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::showEvent(arg__1);
}
void PythonQtShell_QGLWidget::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::mousePressEvent(arg__1);
}
void PythonQtShell_QGLWidget::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::enterEvent(arg__1);
}
void PythonQtShell_QGLWidget::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::focusInEvent(arg__1);
}
void PythonQtShell_QGLWidget::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::dragMoveEvent(arg__1);
}
int  PythonQtShell_QGLWidget::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QGLWidget::devType();
}
void PythonQtShell_QGLWidget::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::closeEvent(arg__1);
}
void PythonQtShell_QGLWidget::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::mouseMoveEvent(arg__1);
}
void PythonQtShell_QGLWidget::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::dropEvent(arg__1);
}
void PythonQtShell_QGLWidget::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::contextMenuEvent(arg__1);
}
void PythonQtShell_QGLWidget::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::focusOutEvent(arg__1);
}
void PythonQtShell_QGLWidget::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::mouseReleaseEvent(arg__1);
}
QVariant  PythonQtShell_QGLWidget::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QGLWidget::inputMethodQuery(arg__1);
}
bool  PythonQtShell_QGLWidget::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&next};
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
  }
}
  return QGLWidget::focusNextPrevChild(next);
}
void PythonQtShell_QGLWidget::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::tabletEvent(arg__1);
}
int  PythonQtShell_QGLWidget::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QGLWidget::metric(arg__1);
}
int  PythonQtShell_QGLWidget::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QGLWidget::heightForWidth(arg__1);
}
QSize  PythonQtShell_QGLWidget::sizeHint() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getSizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("getSizeHint", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGLWidget::sizeHint();
}
void PythonQtShell_QGLWidget::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::leaveEvent(arg__1);
}
void PythonQtShell_QGLWidget::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::changeEvent(arg__1);
}
void PythonQtShell_QGLWidget::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QGLWidget::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::keyReleaseEvent(arg__1);
}
QSize  PythonQtShell_QGLWidget::minimumSizeHint() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getMinimumSizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QGLWidget::minimumSizeHint();
}
void PythonQtShell_QGLWidget::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::hideEvent(arg__1);
}
void PythonQtShell_QGLWidget::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::actionEvent(arg__1);
}
void PythonQtShell_QGLWidget::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::dragLeaveEvent(arg__1);
}
void PythonQtShell_QGLWidget::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::timerEvent(arg__1);
}
void PythonQtShell_QGLWidget::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::childEvent(arg__1);
}
void PythonQtShell_QGLWidget::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLWidget::customEvent(arg__1);
}
bool  PythonQtShell_QGLWidget::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QGLWidget::eventFilter(arg__1, arg__2);
}
QGLWidget* PythonQtWrapper_QGLWidget::new_QGLWidget(QGLContext*  context, QWidget*  parent, const QGLWidget*  shareWidget, Qt::WindowFlags  f)
{ 
return new PythonQtShell_QGLWidget(context, parent, shareWidget, f); }

QGLWidget* PythonQtWrapper_QGLWidget::new_QGLWidget(QWidget*  parent, const QGLWidget*  shareWidget, Qt::WindowFlags  f)
{ 
return new PythonQtShell_QGLWidget(parent, shareWidget, f); }

QGLWidget* PythonQtWrapper_QGLWidget::new_QGLWidget(const QGLFormat&  format, QWidget*  parent, const QGLWidget*  shareWidget, Qt::WindowFlags  f)
{ 
return new PythonQtShell_QGLWidget(format, parent, shareWidget, f); }

void PythonQtWrapper_QGLWidget::glInit(QGLWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_glInit());
}

const QGLContext*  PythonQtWrapper_QGLWidget::overlayContext(QGLWidget* theWrappedObject) const
{
  return ( theWrappedObject->overlayContext());
}

void PythonQtWrapper_QGLWidget::doneCurrent(QGLWidget* theWrappedObject)
{
  ( theWrappedObject->doneCurrent());
}

const QGLContext*  PythonQtWrapper_QGLWidget::context(QGLWidget* theWrappedObject) const
{
  return ( theWrappedObject->context());
}

void PythonQtWrapper_QGLWidget::setColormap(QGLWidget* theWrappedObject, const QGLColormap&  map)
{
  ( theWrappedObject->setColormap(map));
}

void PythonQtWrapper_QGLWidget::initializeGL(QGLWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_initializeGL());
}

void PythonQtWrapper_QGLWidget::resizeGL(QGLWidget* theWrappedObject, int  w, int  h)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_resizeGL(w, h));
}

bool  PythonQtWrapper_QGLWidget::isSharing(QGLWidget* theWrappedObject) const
{
  return ( theWrappedObject->isSharing());
}

void PythonQtWrapper_QGLWidget::renderText(QGLWidget* theWrappedObject, double  x, double  y, double  z, const QString&  str, const QFont&  fnt, int  listBase)
{
  ( theWrappedObject->renderText(x, y, z, str, fnt, listBase));
}

void PythonQtWrapper_QGLWidget::renderText(QGLWidget* theWrappedObject, int  x, int  y, const QString&  str, const QFont&  fnt, int  listBase)
{
  ( theWrappedObject->renderText(x, y, str, fnt, listBase));
}

QImage  PythonQtWrapper_QGLWidget::grabFrameBuffer(QGLWidget* theWrappedObject, bool  withAlpha)
{
  return ( theWrappedObject->grabFrameBuffer(withAlpha));
}

bool  PythonQtWrapper_QGLWidget::doubleBuffer(QGLWidget* theWrappedObject) const
{
  return ( theWrappedObject->doubleBuffer());
}

unsigned int  PythonQtWrapper_QGLWidget::bindTexture(QGLWidget* theWrappedObject, const QString&  fileName)
{
  return ( theWrappedObject->bindTexture(fileName));
}

unsigned int  PythonQtWrapper_QGLWidget::bindTexture(QGLWidget* theWrappedObject, const QPixmap&  pixmap, unsigned int  target, int  format)
{
  return ( theWrappedObject->bindTexture(pixmap, target, format));
}

unsigned int  PythonQtWrapper_QGLWidget::bindTexture(QGLWidget* theWrappedObject, const QImage&  image, unsigned int  target, int  format)
{
  return ( theWrappedObject->bindTexture(image, target, format));
}

void PythonQtWrapper_QGLWidget::makeOverlayCurrent(QGLWidget* theWrappedObject)
{
  ( theWrappedObject->makeOverlayCurrent());
}

void PythonQtWrapper_QGLWidget::initializeOverlayGL(QGLWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_initializeOverlayGL());
}

void PythonQtWrapper_QGLWidget::deleteTexture(QGLWidget* theWrappedObject, unsigned int  tx_id)
{
  ( theWrappedObject->deleteTexture(tx_id));
}

void PythonQtWrapper_QGLWidget::resizeOverlayGL(QGLWidget* theWrappedObject, int  w, int  h)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_resizeOverlayGL(w, h));
}

QPaintEngine*  PythonQtWrapper_QGLWidget::paintEngine(QGLWidget* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_paintEngine());
}

void PythonQtWrapper_QGLWidget::glDraw(QGLWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_glDraw());
}

void PythonQtWrapper_QGLWidget::paintEvent(QGLWidget* theWrappedObject, QPaintEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_paintEvent(arg__1));
}

bool  PythonQtWrapper_QGLWidget::isValid(QGLWidget* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QGLWidget::drawTexture(QGLWidget* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget)
{
  ( theWrappedObject->drawTexture(point, textureId, textureTarget));
}

QImage  PythonQtWrapper_QGLWidget::static_QGLWidget_convertToGLFormat(const QImage&  img)
{
  return (QGLWidget::convertToGLFormat(img));
}

void PythonQtWrapper_QGLWidget::drawTexture(QGLWidget* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget)
{
  ( theWrappedObject->drawTexture(target, textureId, textureTarget));
}

void PythonQtWrapper_QGLWidget::resizeEvent(QGLWidget* theWrappedObject, QResizeEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_resizeEvent(arg__1));
}

void PythonQtWrapper_QGLWidget::makeCurrent(QGLWidget* theWrappedObject)
{
  ( theWrappedObject->makeCurrent());
}

void PythonQtWrapper_QGLWidget::paintOverlayGL(QGLWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_paintOverlayGL());
}

QGLFormat  PythonQtWrapper_QGLWidget::format(QGLWidget* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

bool  PythonQtWrapper_QGLWidget::event(QGLWidget* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_event(arg__1));
}

void PythonQtWrapper_QGLWidget::qglColor(QGLWidget* theWrappedObject, const QColor&  c) const
{
  ( theWrappedObject->qglColor(c));
}

void PythonQtWrapper_QGLWidget::swapBuffers(QGLWidget* theWrappedObject)
{
  ( theWrappedObject->swapBuffers());
}

void PythonQtWrapper_QGLWidget::paintGL(QGLWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_paintGL());
}

const QGLColormap*  PythonQtWrapper_QGLWidget::colormap(QGLWidget* theWrappedObject) const
{
  return &( theWrappedObject->colormap());
}

QPixmap  PythonQtWrapper_QGLWidget::renderPixmap(QGLWidget* theWrappedObject, int  w, int  h, bool  useContext)
{
  return ( theWrappedObject->renderPixmap(w, h, useContext));
}

void PythonQtWrapper_QGLWidget::qglClearColor(QGLWidget* theWrappedObject, const QColor&  c) const
{
  ( theWrappedObject->qglClearColor(c));
}


