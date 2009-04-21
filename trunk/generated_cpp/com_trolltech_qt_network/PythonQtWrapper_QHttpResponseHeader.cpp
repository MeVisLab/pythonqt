#include "PythonQtWrapper_QHttpResponseHeader.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qhttp.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

int  PythonQtShell_QHttpResponseHeader::majorVersion() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "majorVersion");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHttpResponseHeader::staticMetaObject,
      "majorVersion(QHttpResponseHeader*)");
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
  return QHttpResponseHeader::majorVersion();
}
int  PythonQtShell_QHttpResponseHeader::minorVersion() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "minorVersion");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHttpResponseHeader::staticMetaObject,
      "minorVersion(QHttpResponseHeader*)");
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
  return QHttpResponseHeader::minorVersion();
}
bool  PythonQtShell_QHttpResponseHeader::parseLine(const QString&  line, int  number)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "parseLine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHttpResponseHeader::staticMetaObject,
      "parseLine(QHttpResponseHeader*,const QString& ,int )");
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
  return QHttpResponseHeader::parseLine(line, number);
}
QString  PythonQtShell_QHttpResponseHeader::toString() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "toString");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHttpResponseHeader::staticMetaObject,
      "toString(QHttpResponseHeader*)");
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
  return QHttpResponseHeader::toString();
}
QHttpResponseHeader* PythonQtWrapper_QHttpResponseHeader::new_QHttpResponseHeader()
{ 
return new PythonQtShell_QHttpResponseHeader(); }

QHttpResponseHeader* PythonQtWrapper_QHttpResponseHeader::new_QHttpResponseHeader(const QHttpResponseHeader&  header)
{ 
return new PythonQtShell_QHttpResponseHeader(header); }

QHttpResponseHeader* PythonQtWrapper_QHttpResponseHeader::new_QHttpResponseHeader(const QString&  str)
{ 
return new PythonQtShell_QHttpResponseHeader(str); }

QHttpResponseHeader* PythonQtWrapper_QHttpResponseHeader::new_QHttpResponseHeader(int  code, const QString&  text, int  majorVer, int  minorVer)
{ 
return new PythonQtShell_QHttpResponseHeader(code, text, majorVer, minorVer); }

int  PythonQtWrapper_QHttpResponseHeader::statusCode(QHttpResponseHeader* theWrappedObject) const
{
return  (*theWrappedObject).statusCode();
}

void PythonQtWrapper_QHttpResponseHeader::setStatusLine(QHttpResponseHeader* theWrappedObject, int  code, const QString&  text, int  majorVer, int  minorVer)
{
 (*theWrappedObject).setStatusLine(code, text, majorVer, minorVer);
}

int  PythonQtWrapper_QHttpResponseHeader::majorVersion(QHttpResponseHeader* theWrappedObject) const
{
return  (*theWrappedObject).majorVersion();
}

int  PythonQtWrapper_QHttpResponseHeader::minorVersion(QHttpResponseHeader* theWrappedObject) const
{
return  (*theWrappedObject).minorVersion();
}

bool  PythonQtWrapper_QHttpResponseHeader::parseLine(QHttpResponseHeader* theWrappedObject, const QString&  line, int  number)
{
return  (*((PythonQtPublicPromoter_QHttpResponseHeader*)theWrappedObject)).parseLine(line, number);
}

QString  PythonQtWrapper_QHttpResponseHeader::reasonPhrase(QHttpResponseHeader* theWrappedObject) const
{
return  (*theWrappedObject).reasonPhrase();
}

QString  PythonQtWrapper_QHttpResponseHeader::toString(QHttpResponseHeader* theWrappedObject) const
{
return  (*theWrappedObject).toString();
}

