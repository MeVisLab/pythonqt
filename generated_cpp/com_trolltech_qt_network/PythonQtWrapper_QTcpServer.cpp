#include "PythonQtWrapper_QTcpServer.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qtcpserver.h>
#include <qtcpsocket.h>

void PythonQtShell_QTcpServer::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTcpServer::staticMetaObject,
      "childEvent(QTcpServer*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTcpServer::childEvent(arg__1);
}
void PythonQtShell_QTcpServer::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTcpServer::staticMetaObject,
      "customEvent(QTcpServer*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTcpServer::customEvent(arg__1);
}
bool  PythonQtShell_QTcpServer::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTcpServer::staticMetaObject,
      "event(QTcpServer*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QTcpServer::event(arg__1);
}
bool  PythonQtShell_QTcpServer::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTcpServer::staticMetaObject,
      "eventFilter(QTcpServer*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QTcpServer::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QTcpServer::hasPendingConnections() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasPendingConnections");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTcpServer::staticMetaObject,
      "hasPendingConnections(QTcpServer*)");
      bool  returnValue;
    void* args[1] = {NULL};
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
  return QTcpServer::hasPendingConnections();
}
void PythonQtShell_QTcpServer::incomingConnection(int  handle)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "incomingConnection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTcpServer::staticMetaObject,
      "incomingConnection(QTcpServer*,int )");
    void* args[2] = {NULL, (void*)&handle};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTcpServer::incomingConnection(handle);
}
QTcpSocket*  PythonQtShell_QTcpServer::nextPendingConnection()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "nextPendingConnection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTcpServer::staticMetaObject,
      "nextPendingConnection(QTcpServer*)");
      QTcpSocket*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QTcpSocket* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTcpServer::nextPendingConnection();
}
void PythonQtShell_QTcpServer::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTcpServer::staticMetaObject,
      "timerEvent(QTcpServer*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTcpServer::timerEvent(arg__1);
}
QTcpServer* PythonQtWrapper_QTcpServer::new_QTcpServer(QObject*  parent)
{ 
return new PythonQtShell_QTcpServer(parent); }

bool  PythonQtWrapper_QTcpServer::hasPendingConnections(QTcpServer* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->promoted_hasPendingConnections();
}

void PythonQtWrapper_QTcpServer::close(QTcpServer* theWrappedObject)
{
 theWrappedObject->close();
}

QAbstractSocket::SocketError  PythonQtWrapper_QTcpServer::serverError(QTcpServer* theWrappedObject) const
{
return  theWrappedObject->serverError();
}

void PythonQtWrapper_QTcpServer::incomingConnection(QTcpServer* theWrappedObject, int  handle)
{
 ((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->promoted_incomingConnection(handle);
}

void PythonQtWrapper_QTcpServer::setProxy(QTcpServer* theWrappedObject, const QNetworkProxy&  networkProxy)
{
 theWrappedObject->setProxy(networkProxy);
}

bool  PythonQtWrapper_QTcpServer::listen(QTcpServer* theWrappedObject, const QHostAddress&  address, unsigned short  port)
{
return  theWrappedObject->listen(address, port);
}

QTcpSocket*  PythonQtWrapper_QTcpServer::nextPendingConnection(QTcpServer* theWrappedObject)
{
return  ((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->promoted_nextPendingConnection();
}

void PythonQtWrapper_QTcpServer::setMaxPendingConnections(QTcpServer* theWrappedObject, int  numConnections)
{
 theWrappedObject->setMaxPendingConnections(numConnections);
}

QHostAddress  PythonQtWrapper_QTcpServer::serverAddress(QTcpServer* theWrappedObject) const
{
return  theWrappedObject->serverAddress();
}

bool  PythonQtWrapper_QTcpServer::waitForNewConnection(QTcpServer* theWrappedObject, int  msec, bool*  timedOut)
{
return  theWrappedObject->waitForNewConnection(msec, timedOut);
}

int  PythonQtWrapper_QTcpServer::socketDescriptor(QTcpServer* theWrappedObject) const
{
return  theWrappedObject->socketDescriptor();
}

QString  PythonQtWrapper_QTcpServer::errorString(QTcpServer* theWrappedObject) const
{
return  theWrappedObject->errorString();
}

int  PythonQtWrapper_QTcpServer::maxPendingConnections(QTcpServer* theWrappedObject) const
{
return  theWrappedObject->maxPendingConnections();
}

unsigned short  PythonQtWrapper_QTcpServer::serverPort(QTcpServer* theWrappedObject) const
{
return  theWrappedObject->serverPort();
}

bool  PythonQtWrapper_QTcpServer::isListening(QTcpServer* theWrappedObject) const
{
return  theWrappedObject->isListening();
}

QNetworkProxy  PythonQtWrapper_QTcpServer::proxy(QTcpServer* theWrappedObject) const
{
return  theWrappedObject->proxy();
}

bool  PythonQtWrapper_QTcpServer::setSocketDescriptor(QTcpServer* theWrappedObject, int  socketDescriptor)
{
return  theWrappedObject->setSocketDescriptor(socketDescriptor);
}

