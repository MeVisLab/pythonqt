#include "PythonQtWrapper_QSvgGenerator.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qiodevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qsize.h>

int  PythonQtShell_QSvgGenerator::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSvgGenerator::staticMetaObject,
      "devType(QSvgGenerator*)");
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
  return QSvgGenerator::devType();
}
int  PythonQtShell_QSvgGenerator::metric(QPaintDevice::PaintDeviceMetric  metric) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSvgGenerator::staticMetaObject,
      "metric(QSvgGenerator*,QPaintDevice::PaintDeviceMetric )");
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
  return QSvgGenerator::metric(metric);
}
QPaintEngine*  PythonQtShell_QSvgGenerator::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSvgGenerator::staticMetaObject,
      "paintEngine(QSvgGenerator*)");
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
  return QSvgGenerator::paintEngine();
}
QSvgGenerator* PythonQtWrapper_QSvgGenerator::new_QSvgGenerator()
{ 
return new PythonQtShell_QSvgGenerator(); }

QSize  PythonQtWrapper_QSvgGenerator::size(QSvgGenerator* theWrappedObject) const
{
return  (*theWrappedObject).size();
}

QIODevice*  PythonQtWrapper_QSvgGenerator::outputDevice(QSvgGenerator* theWrappedObject) const
{
return  (*theWrappedObject).outputDevice();
}

int  PythonQtWrapper_QSvgGenerator::resolution(QSvgGenerator* theWrappedObject) const
{
return  (*theWrappedObject).resolution();
}

QString  PythonQtWrapper_QSvgGenerator::fileName(QSvgGenerator* theWrappedObject) const
{
return  (*theWrappedObject).fileName();
}

void PythonQtWrapper_QSvgGenerator::setSize(QSvgGenerator* theWrappedObject, const QSize&  size)
{
 (*theWrappedObject).setSize(size);
}

void PythonQtWrapper_QSvgGenerator::setOutputDevice(QSvgGenerator* theWrappedObject, QIODevice*  outputDevice)
{
 (*theWrappedObject).setOutputDevice(outputDevice);
}

QPaintEngine*  PythonQtWrapper_QSvgGenerator::paintEngine(QSvgGenerator* theWrappedObject) const
{
return  (*((PythonQtPublicPromoter_QSvgGenerator*)theWrappedObject)).paintEngine();
}

void PythonQtWrapper_QSvgGenerator::setResolution(QSvgGenerator* theWrappedObject, int  dpi)
{
 (*theWrappedObject).setResolution(dpi);
}

int  PythonQtWrapper_QSvgGenerator::metric(QSvgGenerator* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const
{
return  (*((PythonQtPublicPromoter_QSvgGenerator*)theWrappedObject)).metric(metric);
}

void PythonQtWrapper_QSvgGenerator::setFileName(QSvgGenerator* theWrappedObject, const QString&  fileName)
{
 (*theWrappedObject).setFileName(fileName);
}

