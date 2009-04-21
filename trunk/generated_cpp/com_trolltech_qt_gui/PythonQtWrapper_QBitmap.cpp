#include "PythonQtWrapper_QBitmap.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qimage.h>
#include <qimagewriter.h>
#include <qiodevice.h>
#include <qmatrix.h>
#include <qpaintengine.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qtransform.h>
#include <qwidget.h>

int  PythonQtShell_QBitmap::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBitmap::staticMetaObject,
      "devType(QBitmap*)");
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
  return QBitmap::devType();
}
int  PythonQtShell_QBitmap::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBitmap::staticMetaObject,
      "metric(QBitmap*,QPaintDevice::PaintDeviceMetric )");
      int  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QBitmap::metric(arg__1);
}
QPaintEngine*  PythonQtShell_QBitmap::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QBitmap::staticMetaObject,
      "paintEngine(QBitmap*)");
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
  return QBitmap::paintEngine();
}
QBitmap* PythonQtWrapper_QBitmap::new_QBitmap()
{ 
return new PythonQtShell_QBitmap(); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(const QPixmap&  arg__1)
{ 
return new PythonQtShell_QBitmap(arg__1); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(const QSize&  arg__1)
{ 
return new PythonQtShell_QBitmap(arg__1); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(const QString&  fileName, const char*  format)
{ 
return new PythonQtShell_QBitmap(fileName, format); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(int  w, int  h)
{ 
return new PythonQtShell_QBitmap(w, h); }

QBitmap  PythonQtWrapper_QBitmap::static_QBitmap_fromImage(const QImage&  image, Qt::ImageConversionFlags  flags)
{
return QBitmap::fromImage(image, flags);
}

void PythonQtWrapper_QBitmap::clear(QBitmap* theWrappedObject)
{
 (*theWrappedObject).clear();
}

QBitmap  PythonQtWrapper_QBitmap::transformed(QBitmap* theWrappedObject, const QMatrix&  arg__1) const
{
return  (*theWrappedObject).transformed(arg__1);
}

QBitmap  PythonQtWrapper_QBitmap::transformed(QBitmap* theWrappedObject, const QTransform&  matrix) const
{
return  (*theWrappedObject).transformed(matrix);
}

