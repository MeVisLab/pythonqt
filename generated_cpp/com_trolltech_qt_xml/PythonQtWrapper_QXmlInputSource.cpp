#include "PythonQtWrapper_QXmlInputSource.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>

QString  PythonQtShell_QXmlInputSource::data() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "data");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlInputSource::staticMetaObject,
      "data(QXmlInputSource*)");
      QString  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QString *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QXmlInputSource::data();
}
void PythonQtShell_QXmlInputSource::fetchData()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetchData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlInputSource::staticMetaObject,
      "fetchData(QXmlInputSource*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlInputSource::fetchData();
}
QString  PythonQtShell_QXmlInputSource::fromRawData(const QByteArray&  data, bool  beginning)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fromRawData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlInputSource::staticMetaObject,
      "fromRawData(QXmlInputSource*,const QByteArray& ,bool )");
      QString  returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&beginning};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QString *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QXmlInputSource::fromRawData(data, beginning);
}
QChar  PythonQtShell_QXmlInputSource::next()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "next");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlInputSource::staticMetaObject,
      "next(QXmlInputSource*)");
      QChar  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QChar *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QXmlInputSource::next();
}
void PythonQtShell_QXmlInputSource::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlInputSource::staticMetaObject,
      "reset(QXmlInputSource*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlInputSource::reset();
}
void PythonQtShell_QXmlInputSource::setData(const QByteArray&  dat)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlInputSource::staticMetaObject,
      "setData(QXmlInputSource*,const QByteArray& )");
    void* args[2] = {NULL, (void*)&dat};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlInputSource::setData(dat);
}
void PythonQtShell_QXmlInputSource::setData(const QString&  dat)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlInputSource::staticMetaObject,
      "setData(QXmlInputSource*,const QString& )");
    void* args[2] = {NULL, (void*)&dat};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlInputSource::setData(dat);
}
QXmlInputSource* PythonQtWrapper_QXmlInputSource::new_QXmlInputSource()
{ 
return new PythonQtShell_QXmlInputSource(); }

QXmlInputSource* PythonQtWrapper_QXmlInputSource::new_QXmlInputSource(QIODevice*  dev)
{ 
return new PythonQtShell_QXmlInputSource(dev); }

void PythonQtWrapper_QXmlInputSource::reset(QXmlInputSource* theWrappedObject)
{
 (*theWrappedObject).reset();
}

void PythonQtWrapper_QXmlInputSource::setData(QXmlInputSource* theWrappedObject, const QByteArray&  dat)
{
 (*theWrappedObject).setData(dat);
}

void PythonQtWrapper_QXmlInputSource::fetchData(QXmlInputSource* theWrappedObject)
{
 (*theWrappedObject).fetchData();
}

QChar  PythonQtWrapper_QXmlInputSource::next(QXmlInputSource* theWrappedObject)
{
return  (*theWrappedObject).next();
}

QString  PythonQtWrapper_QXmlInputSource::fromRawData(QXmlInputSource* theWrappedObject, const QByteArray&  data, bool  beginning)
{
return  (*((PythonQtPublicPromoter_QXmlInputSource*)theWrappedObject)).fromRawData(data, beginning);
}

void PythonQtWrapper_QXmlInputSource::setData(QXmlInputSource* theWrappedObject, const QString&  dat)
{
 (*theWrappedObject).setData(dat);
}

QString  PythonQtWrapper_QXmlInputSource::data(QXmlInputSource* theWrappedObject) const
{
return  (*theWrappedObject).data();
}

