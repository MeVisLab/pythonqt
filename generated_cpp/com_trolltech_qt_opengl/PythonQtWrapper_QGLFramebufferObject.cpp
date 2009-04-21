#include "PythonQtWrapper_QGLFramebufferObject.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qglframebufferobject.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>

int  PythonQtShell_QGLFramebufferObject::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGLFramebufferObject::staticMetaObject,
      "devType(QGLFramebufferObject*)");
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
  return QGLFramebufferObject::devType();
}
int  PythonQtShell_QGLFramebufferObject::metric(QPaintDevice::PaintDeviceMetric  metric) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGLFramebufferObject::staticMetaObject,
      "metric(QGLFramebufferObject*,QPaintDevice::PaintDeviceMetric )");
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
  return QGLFramebufferObject::metric(metric);
}
QPaintEngine*  PythonQtShell_QGLFramebufferObject::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGLFramebufferObject::staticMetaObject,
      "paintEngine(QGLFramebufferObject*)");
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
  return QGLFramebufferObject::paintEngine();
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

unsigned int  PythonQtWrapper_QGLFramebufferObject::texture(QGLFramebufferObject* theWrappedObject) const
{
return  theWrappedObject->texture();
}

int  PythonQtWrapper_QGLFramebufferObject::devType(QGLFramebufferObject* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QGLFramebufferObject*)theWrappedObject)->promoted_devType();
}

bool  PythonQtWrapper_QGLFramebufferObject::bind(QGLFramebufferObject* theWrappedObject)
{
return  theWrappedObject->bind();
}

void PythonQtWrapper_QGLFramebufferObject::drawTexture(QGLFramebufferObject* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget)
{
 theWrappedObject->drawTexture(point, textureId, textureTarget);
}

bool  PythonQtWrapper_QGLFramebufferObject::release(QGLFramebufferObject* theWrappedObject)
{
return  theWrappedObject->release();
}

bool  PythonQtWrapper_QGLFramebufferObject::isValid(QGLFramebufferObject* theWrappedObject) const
{
return  theWrappedObject->isValid();
}

QSize  PythonQtWrapper_QGLFramebufferObject::size(QGLFramebufferObject* theWrappedObject) const
{
return  theWrappedObject->size();
}

QImage  PythonQtWrapper_QGLFramebufferObject::toImage(QGLFramebufferObject* theWrappedObject) const
{
return  theWrappedObject->toImage();
}

int  PythonQtWrapper_QGLFramebufferObject::metric(QGLFramebufferObject* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const
{
return  ((PythonQtPublicPromoter_QGLFramebufferObject*)theWrappedObject)->promoted_metric(metric);
}

QPaintEngine*  PythonQtWrapper_QGLFramebufferObject::paintEngine(QGLFramebufferObject* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QGLFramebufferObject*)theWrappedObject)->promoted_paintEngine();
}

QGLFramebufferObject::Attachment  PythonQtWrapper_QGLFramebufferObject::attachment(QGLFramebufferObject* theWrappedObject) const
{
return  theWrappedObject->attachment();
}

void PythonQtWrapper_QGLFramebufferObject::drawTexture(QGLFramebufferObject* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget)
{
 theWrappedObject->drawTexture(target, textureId, textureTarget);
}

unsigned int  PythonQtWrapper_QGLFramebufferObject::handle(QGLFramebufferObject* theWrappedObject) const
{
return  theWrappedObject->handle();
}

bool  PythonQtWrapper_QGLFramebufferObject::static_QGLFramebufferObject_hasOpenGLFramebufferObjects()
{
return QGLFramebufferObject::hasOpenGLFramebufferObjects();
}

