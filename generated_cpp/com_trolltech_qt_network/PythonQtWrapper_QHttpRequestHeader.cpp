#include "PythonQtWrapper_QHttpRequestHeader.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qhttp.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

int  PythonQtShell_QHttpRequestHeader::majorVersion() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "majorVersion");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("majorVersion", methodInfo, result);
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
  return QHttpRequestHeader::majorVersion();
}
int  PythonQtShell_QHttpRequestHeader::minorVersion() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "minorVersion");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("minorVersion", methodInfo, result);
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
  return QHttpRequestHeader::minorVersion();
}
bool  PythonQtShell_QHttpRequestHeader::parseLine(const QString&  line, int  number)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "parseLine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QString&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&line, (void*)&number};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("parseLine", methodInfo, result);
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
  return QHttpRequestHeader::parseLine(line, number);
}
QString  PythonQtShell_QHttpRequestHeader::toString() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "toString");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("toString", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHttpRequestHeader::toString();
}
QHttpRequestHeader* PythonQtWrapper_QHttpRequestHeader::new_QHttpRequestHeader()
{ 
return new PythonQtShell_QHttpRequestHeader(); }

QHttpRequestHeader* PythonQtWrapper_QHttpRequestHeader::new_QHttpRequestHeader(const QHttpRequestHeader&  header)
{ 
return new PythonQtShell_QHttpRequestHeader(header); }

QHttpRequestHeader* PythonQtWrapper_QHttpRequestHeader::new_QHttpRequestHeader(const QString&  method, const QString&  path, int  majorVer, int  minorVer)
{ 
return new PythonQtShell_QHttpRequestHeader(method, path, majorVer, minorVer); }

QHttpRequestHeader* PythonQtWrapper_QHttpRequestHeader::new_QHttpRequestHeader(const QString&  str)
{ 
return new PythonQtShell_QHttpRequestHeader(str); }

bool  PythonQtWrapper_QHttpRequestHeader::parseLine(QHttpRequestHeader* theWrappedObject, const QString&  line, int  number)
{
  return ( ((PythonQtPublicPromoter_QHttpRequestHeader*)theWrappedObject)->promoted_parseLine(line, number));
}

QString  PythonQtWrapper_QHttpRequestHeader::toString(QHttpRequestHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpRequestHeader*)theWrappedObject)->promoted_toString());
}

QString  PythonQtWrapper_QHttpRequestHeader::path(QHttpRequestHeader* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

void PythonQtWrapper_QHttpRequestHeader::setRequest(QHttpRequestHeader* theWrappedObject, const QString&  method, const QString&  path, int  majorVer, int  minorVer)
{
  ( theWrappedObject->setRequest(method, path, majorVer, minorVer));
}

int  PythonQtWrapper_QHttpRequestHeader::majorVersion(QHttpRequestHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpRequestHeader*)theWrappedObject)->promoted_majorVersion());
}

QString  PythonQtWrapper_QHttpRequestHeader::method(QHttpRequestHeader* theWrappedObject) const
{
  return ( theWrappedObject->method());
}

int  PythonQtWrapper_QHttpRequestHeader::minorVersion(QHttpRequestHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpRequestHeader*)theWrappedObject)->promoted_minorVersion());
}

