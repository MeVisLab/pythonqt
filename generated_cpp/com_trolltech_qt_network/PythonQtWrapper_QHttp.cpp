#include "PythonQtWrapper_QHttp.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhttp.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qtcpsocket.h>

void PythonQtShell_QHttp::childEvent(QChildEvent*  arg__1)
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
  QHttp::childEvent(arg__1);
}
void PythonQtShell_QHttp::customEvent(QEvent*  arg__1)
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
  QHttp::customEvent(arg__1);
}
bool  PythonQtShell_QHttp::event(QEvent*  arg__1)
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
  return QHttp::event(arg__1);
}
bool  PythonQtShell_QHttp::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QHttp::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QHttp::timerEvent(QTimerEvent*  arg__1)
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
  QHttp::timerEvent(arg__1);
}
QHttp* PythonQtWrapper_QHttp::new_QHttp(QObject*  parent)
{ 
return new PythonQtShell_QHttp(parent); }

QHttp* PythonQtWrapper_QHttp::new_QHttp(const QString&  hostname, QHttp::ConnectionMode  mode, unsigned short  port, QObject*  parent)
{ 
return new PythonQtShell_QHttp(hostname, mode, port, parent); }

QHttp* PythonQtWrapper_QHttp::new_QHttp(const QString&  hostname, unsigned short  port, QObject*  parent)
{ 
return new PythonQtShell_QHttp(hostname, port, parent); }

int  PythonQtWrapper_QHttp::setProxy(QHttp* theWrappedObject, const QNetworkProxy&  proxy)
{
  return ( theWrappedObject->setProxy(proxy));
}

int  PythonQtWrapper_QHttp::request(QHttp* theWrappedObject, const QHttpRequestHeader&  header, QIODevice*  device, QIODevice*  to)
{
  return ( theWrappedObject->request(header, device, to));
}

QHttpRequestHeader  PythonQtWrapper_QHttp::currentRequest(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->currentRequest());
}

QHttp::State  PythonQtWrapper_QHttp::state(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QHttp::Error  PythonQtWrapper_QHttp::error(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

int  PythonQtWrapper_QHttp::request(QHttp* theWrappedObject, const QHttpRequestHeader&  header, const QByteArray&  data, QIODevice*  to)
{
  return ( theWrappedObject->request(header, data, to));
}

bool  PythonQtWrapper_QHttp::hasPendingRequests(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->hasPendingRequests());
}

int  PythonQtWrapper_QHttp::setSocket(QHttp* theWrappedObject, QTcpSocket*  socket)
{
  return ( theWrappedObject->setSocket(socket));
}

int  PythonQtWrapper_QHttp::setUser(QHttp* theWrappedObject, const QString&  username, const QString&  password)
{
  return ( theWrappedObject->setUser(username, password));
}

int  PythonQtWrapper_QHttp::post(QHttp* theWrappedObject, const QString&  path, const QByteArray&  data, QIODevice*  to)
{
  return ( theWrappedObject->post(path, data, to));
}

QIODevice*  PythonQtWrapper_QHttp::currentDestinationDevice(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->currentDestinationDevice());
}

qint64  PythonQtWrapper_QHttp::bytesAvailable(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->bytesAvailable());
}

QByteArray  PythonQtWrapper_QHttp::readAll(QHttp* theWrappedObject)
{
  return ( theWrappedObject->readAll());
}

int  PythonQtWrapper_QHttp::setHost(QHttp* theWrappedObject, const QString&  hostname, QHttp::ConnectionMode  mode, unsigned short  port)
{
  return ( theWrappedObject->setHost(hostname, mode, port));
}

int  PythonQtWrapper_QHttp::currentId(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->currentId());
}

int  PythonQtWrapper_QHttp::setHost(QHttp* theWrappedObject, const QString&  hostname, unsigned short  port)
{
  return ( theWrappedObject->setHost(hostname, port));
}

int  PythonQtWrapper_QHttp::setProxy(QHttp* theWrappedObject, const QString&  host, int  port, const QString&  username, const QString&  password)
{
  return ( theWrappedObject->setProxy(host, port, username, password));
}

void PythonQtWrapper_QHttp::clearPendingRequests(QHttp* theWrappedObject)
{
  ( theWrappedObject->clearPendingRequests());
}

QHttpResponseHeader  PythonQtWrapper_QHttp::lastResponse(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->lastResponse());
}

qint64  PythonQtWrapper_QHttp::read(QHttp* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( theWrappedObject->read(data, maxlen));
}

QIODevice*  PythonQtWrapper_QHttp::currentSourceDevice(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->currentSourceDevice());
}

int  PythonQtWrapper_QHttp::get(QHttp* theWrappedObject, const QString&  path, QIODevice*  to)
{
  return ( theWrappedObject->get(path, to));
}

QString  PythonQtWrapper_QHttp::errorString(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

int  PythonQtWrapper_QHttp::close(QHttp* theWrappedObject)
{
  return ( theWrappedObject->close());
}

int  PythonQtWrapper_QHttp::head(QHttp* theWrappedObject, const QString&  path)
{
  return ( theWrappedObject->head(path));
}

int  PythonQtWrapper_QHttp::post(QHttp* theWrappedObject, const QString&  path, QIODevice*  data, QIODevice*  to)
{
  return ( theWrappedObject->post(path, data, to));
}

