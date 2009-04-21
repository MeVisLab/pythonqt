#include "PythonQtWrapper_QGLPixelBuffer.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QImage>
#include <QVariant>
#include <qgl.h>
#include <qglpixelbuffer.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>

int  PythonQtShell_QGLPixelBuffer::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGLPixelBuffer::staticMetaObject,
      "devType(QGLPixelBuffer*)");
      int  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((int *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGLPixelBuffer::devType();
}
int  PythonQtShell_QGLPixelBuffer::metric(QPaintDevice::PaintDeviceMetric  metric) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGLPixelBuffer::staticMetaObject,
      "metric(QGLPixelBuffer*,QPaintDevice::PaintDeviceMetric )");
      int  returnValue;
    void* args[2] = {NULL, (void*)&metric};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((int *)args[0]);
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
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGLPixelBuffer::staticMetaObject,
      "paintEngine(QGLPixelBuffer*)");
      QPaintEngine*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QPaintEngine* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGLPixelBuffer::paintEngine();
}
QGLPixelBuffer* PythonQtWrapper_QGLPixelBuffer::new_QGLPixelBuffer(const QSize&  size, const QGLFormat&  format, QGLWidget*  shareWidget)
{ 
return new PythonQtShell_QGLPixelBuffer(size, format, shareWidget); }

QGLPixelBuffer* PythonQtWrapper_QGLPixelBuffer::new_QGLPixelBuffer(int  width, int  height, const QGLFormat&  format, QGLWidget*  shareWidget)
{ 
return new PythonQtShell_QGLPixelBuffer(width, height, format, shareWidget); }

bool  PythonQtWrapper_QGLPixelBuffer::static_QGLPixelBuffer_hasOpenGLPbuffers()
{
return QGLPixelBuffer::hasOpenGLPbuffers();
}

void PythonQtWrapper_QGLPixelBuffer::drawTexture(QGLPixelBuffer* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget)
{
 theWrappedObject->drawTexture(target, textureId, textureTarget);
}

QGLFormat  PythonQtWrapper_QGLPixelBuffer::format(QGLPixelBuffer* theWrappedObject) const
{
return  theWrappedObject->format();
}

QPaintEngine*  PythonQtWrapper_QGLPixelBuffer::paintEngine(QGLPixelBuffer* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QGLPixelBuffer*)theWrappedObject)->promoted_paintEngine();
}

unsigned int  PythonQtWrapper_QGLPixelBuffer::bindTexture(QGLPixelBuffer* theWrappedObject, const QImage&  image, unsigned int  target)
{
return  theWrappedObject->bindTexture(image, target);
}

bool  PythonQtWrapper_QGLPixelBuffer::bindToDynamicTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture)
{
return  theWrappedObject->bindToDynamicTexture(texture);
}

bool  PythonQtWrapper_QGLPixelBuffer::isValid(QGLPixelBuffer* theWrappedObject) const
{
return  theWrappedObject->isValid();
}

int  PythonQtWrapper_QGLPixelBuffer::metric(QGLPixelBuffer* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const
{
return  ((PythonQtPublicPromoter_QGLPixelBuffer*)theWrappedObject)->promoted_metric(metric);
}

void PythonQtWrapper_QGLPixelBuffer::updateDynamicTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture_id) const
{
 theWrappedObject->updateDynamicTexture(texture_id);
}

unsigned int  PythonQtWrapper_QGLPixelBuffer::bindTexture(QGLPixelBuffer* theWrappedObject, const QPixmap&  pixmap, unsigned int  target)
{
return  theWrappedObject->bindTexture(pixmap, target);
}

void PythonQtWrapper_QGLPixelBuffer::deleteTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture_id)
{
 theWrappedObject->deleteTexture(texture_id);
}

bool  PythonQtWrapper_QGLPixelBuffer::doneCurrent(QGLPixelBuffer* theWrappedObject)
{
return  theWrappedObject->doneCurrent();
}

Qt::HANDLE  PythonQtWrapper_QGLPixelBuffer::handle(QGLPixelBuffer* theWrappedObject) const
{
return  theWrappedObject->handle();
}

unsigned int  PythonQtWrapper_QGLPixelBuffer::generateDynamicTexture(QGLPixelBuffer* theWrappedObject) const
{
return  theWrappedObject->generateDynamicTexture();
}

bool  PythonQtWrapper_QGLPixelBuffer::makeCurrent(QGLPixelBuffer* theWrappedObject)
{
return  theWrappedObject->makeCurrent();
}

QSize  PythonQtWrapper_QGLPixelBuffer::size(QGLPixelBuffer* theWrappedObject) const
{
return  theWrappedObject->size();
}

void PythonQtWrapper_QGLPixelBuffer::drawTexture(QGLPixelBuffer* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget)
{
 theWrappedObject->drawTexture(point, textureId, textureTarget);
}

QImage  PythonQtWrapper_QGLPixelBuffer::toImage(QGLPixelBuffer* theWrappedObject) const
{
return  theWrappedObject->toImage();
}

void PythonQtWrapper_QGLPixelBuffer::releaseFromDynamicTexture(QGLPixelBuffer* theWrappedObject)
{
 theWrappedObject->releaseFromDynamicTexture();
}

int  PythonQtWrapper_QGLPixelBuffer::devType(QGLPixelBuffer* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QGLPixelBuffer*)theWrappedObject)->promoted_devType();
}

unsigned int  PythonQtWrapper_QGLPixelBuffer::bindTexture(QGLPixelBuffer* theWrappedObject, const QString&  fileName)
{
return  theWrappedObject->bindTexture(fileName);
}

