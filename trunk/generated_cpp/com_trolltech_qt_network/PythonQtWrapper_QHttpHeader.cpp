#include "PythonQtWrapper_QHttpHeader.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

int  PythonQtShell_QHttpHeader::majorVersion() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "majorVersion");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHttpHeader::staticMetaObject,
      "majorVersion(QHttpHeader*)");
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
  int  result;
return result;
}
int  PythonQtShell_QHttpHeader::minorVersion() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "minorVersion");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHttpHeader::staticMetaObject,
      "minorVersion(QHttpHeader*)");
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
  int  result;
return result;
}
bool  PythonQtShell_QHttpHeader::parseLine(const QString&  line, int  number)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "parseLine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHttpHeader::staticMetaObject,
      "parseLine(QHttpHeader*,const QString& ,int )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&line, (void*)&number};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHttpHeader::parseLine(line, number);
}
QString  PythonQtShell_QHttpHeader::toString() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "toString");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHttpHeader::staticMetaObject,
      "toString(QHttpHeader*)");
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
  return QHttpHeader::toString();
}
QHttpHeader* PythonQtWrapper_QHttpHeader::new_QHttpHeader()
{ 
return new PythonQtShell_QHttpHeader(); }

QHttpHeader* PythonQtWrapper_QHttpHeader::new_QHttpHeader(const QString&  str)
{ 
return new PythonQtShell_QHttpHeader(str); }

void PythonQtWrapper_QHttpHeader::setValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value)
{
 (*theWrappedObject).setValue(key, value);
}

void PythonQtWrapper_QHttpHeader::removeAllValues(QHttpHeader* theWrappedObject, const QString&  key)
{
 (*theWrappedObject).removeAllValues(key);
}

QStringList  PythonQtWrapper_QHttpHeader::allValues(QHttpHeader* theWrappedObject, const QString&  key) const
{
return  (*theWrappedObject).allValues(key);
}

void PythonQtWrapper_QHttpHeader::addValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value)
{
 (*theWrappedObject).addValue(key, value);
}

QString  PythonQtWrapper_QHttpHeader::value(QHttpHeader* theWrappedObject, const QString&  key) const
{
return  (*theWrappedObject).value(key);
}

bool  PythonQtWrapper_QHttpHeader::hasKey(QHttpHeader* theWrappedObject, const QString&  key) const
{
return  (*theWrappedObject).hasKey(key);
}

bool  PythonQtWrapper_QHttpHeader::isValid(QHttpHeader* theWrappedObject) const
{
return  (*theWrappedObject).isValid();
}

bool  PythonQtWrapper_QHttpHeader::parseLine(QHttpHeader* theWrappedObject, const QString&  line, int  number)
{
return  (*((PythonQtPublicPromoter_QHttpHeader*)theWrappedObject)).parseLine(line, number);
}

void PythonQtWrapper_QHttpHeader::removeValue(QHttpHeader* theWrappedObject, const QString&  key)
{
 (*theWrappedObject).removeValue(key);
}

uint  PythonQtWrapper_QHttpHeader::contentLength(QHttpHeader* theWrappedObject) const
{
return  (*theWrappedObject).contentLength();
}

bool  PythonQtWrapper_QHttpHeader::hasContentLength(QHttpHeader* theWrappedObject) const
{
return  (*theWrappedObject).hasContentLength();
}

QStringList  PythonQtWrapper_QHttpHeader::keys(QHttpHeader* theWrappedObject) const
{
return  (*theWrappedObject).keys();
}

void PythonQtWrapper_QHttpHeader::setContentType(QHttpHeader* theWrappedObject, const QString&  type)
{
 (*theWrappedObject).setContentType(type);
}

void PythonQtWrapper_QHttpHeader::setValues(QHttpHeader* theWrappedObject, const QList<QPair<QString , QString >  >&  values)
{
 (*theWrappedObject).setValues(values);
}

bool  PythonQtWrapper_QHttpHeader::hasContentType(QHttpHeader* theWrappedObject) const
{
return  (*theWrappedObject).hasContentType();
}

void PythonQtWrapper_QHttpHeader::setContentLength(QHttpHeader* theWrappedObject, int  len)
{
 (*theWrappedObject).setContentLength(len);
}

QList<QPair<QString , QString >  >  PythonQtWrapper_QHttpHeader::values(QHttpHeader* theWrappedObject) const
{
return  (*theWrappedObject).values();
}

QString  PythonQtWrapper_QHttpHeader::contentType(QHttpHeader* theWrappedObject) const
{
return  (*theWrappedObject).contentType();
}

QString  PythonQtWrapper_QHttpHeader::toString(QHttpHeader* theWrappedObject) const
{
return  (*theWrappedObject).toString();
}

