#include "PythonQtWrapper_QPaintDevice.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qpaintdevice.h>
#include <qpaintengine.h>

int  PythonQtShell_QPaintDevice::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintDevice::staticMetaObject,
      "devType(QPaintDevice*)");
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
  return QPaintDevice::devType();
}
int  PythonQtShell_QPaintDevice::metric(QPaintDevice::PaintDeviceMetric  metric) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintDevice::staticMetaObject,
      "metric(QPaintDevice*,QPaintDevice::PaintDeviceMetric )");
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
  return QPaintDevice::metric(metric);
}
QPaintEngine*  PythonQtShell_QPaintDevice::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintDevice::staticMetaObject,
      "paintEngine(QPaintDevice*)");
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
  QPaintEngine*  result;
return result;
}
QPaintDevice* PythonQtWrapper_QPaintDevice::new_QPaintDevice()
{ 
return new PythonQtShell_QPaintDevice(); }

bool  PythonQtWrapper_QPaintDevice::paintingActive(QPaintDevice* theWrappedObject) const
{
return  (*theWrappedObject).paintingActive();
}

int  PythonQtWrapper_QPaintDevice::depth(QPaintDevice* theWrappedObject) const
{
return  (*theWrappedObject).depth();
}

int  PythonQtWrapper_QPaintDevice::widthMM(QPaintDevice* theWrappedObject) const
{
return  (*theWrappedObject).widthMM();
}

int  PythonQtWrapper_QPaintDevice::physicalDpiX(QPaintDevice* theWrappedObject) const
{
return  (*theWrappedObject).physicalDpiX();
}

int  PythonQtWrapper_QPaintDevice::heightMM(QPaintDevice* theWrappedObject) const
{
return  (*theWrappedObject).heightMM();
}

int  PythonQtWrapper_QPaintDevice::logicalDpiY(QPaintDevice* theWrappedObject) const
{
return  (*theWrappedObject).logicalDpiY();
}

int  PythonQtWrapper_QPaintDevice::logicalDpiX(QPaintDevice* theWrappedObject) const
{
return  (*theWrappedObject).logicalDpiX();
}

int  PythonQtWrapper_QPaintDevice::width(QPaintDevice* theWrappedObject) const
{
return  (*theWrappedObject).width();
}

int  PythonQtWrapper_QPaintDevice::metric(QPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const
{
return  (*((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)).metric(metric);
}

int  PythonQtWrapper_QPaintDevice::devType(QPaintDevice* theWrappedObject) const
{
return  (*theWrappedObject).devType();
}

int  PythonQtWrapper_QPaintDevice::height(QPaintDevice* theWrappedObject) const
{
return  (*theWrappedObject).height();
}

int  PythonQtWrapper_QPaintDevice::numColors(QPaintDevice* theWrappedObject) const
{
return  (*theWrappedObject).numColors();
}

int  PythonQtWrapper_QPaintDevice::physicalDpiY(QPaintDevice* theWrappedObject) const
{
return  (*theWrappedObject).physicalDpiY();
}

