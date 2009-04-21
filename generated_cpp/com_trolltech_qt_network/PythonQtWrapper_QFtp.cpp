#include "PythonQtWrapper_QFtp.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qftp.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>
#include <qurlinfo.h>

void PythonQtShell_QFtp::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFtp::staticMetaObject,
      "childEvent(QFtp*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QFtp::childEvent(arg__1);
}
void PythonQtShell_QFtp::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFtp::staticMetaObject,
      "customEvent(QFtp*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QFtp::customEvent(arg__1);
}
bool  PythonQtShell_QFtp::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFtp::staticMetaObject,
      "event(QFtp*,QEvent* )");
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
  return QFtp::event(arg__1);
}
bool  PythonQtShell_QFtp::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFtp::staticMetaObject,
      "eventFilter(QFtp*,QObject* ,QEvent* )");
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
  return QFtp::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QFtp::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QFtp::staticMetaObject,
      "timerEvent(QFtp*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QFtp::timerEvent(arg__1);
}
QFtp* PythonQtWrapper_QFtp::new_QFtp(QObject*  parent)
{ 
return new PythonQtShell_QFtp(parent); }

QFtp::Error  PythonQtWrapper_QFtp::error(QFtp* theWrappedObject) const
{
return  (*theWrappedObject).error();
}

int  PythonQtWrapper_QFtp::setProxy(QFtp* theWrappedObject, const QString&  host, unsigned short  port)
{
return  (*theWrappedObject).setProxy(host, port);
}

int  PythonQtWrapper_QFtp::rename(QFtp* theWrappedObject, const QString&  oldname, const QString&  newname)
{
return  (*theWrappedObject).rename(oldname, newname);
}

int  PythonQtWrapper_QFtp::mkdir(QFtp* theWrappedObject, const QString&  dir)
{
return  (*theWrappedObject).mkdir(dir);
}

int  PythonQtWrapper_QFtp::rawCommand(QFtp* theWrappedObject, const QString&  command)
{
return  (*theWrappedObject).rawCommand(command);
}

int  PythonQtWrapper_QFtp::put(QFtp* theWrappedObject, QIODevice*  dev, const QString&  file, QFtp::TransferType  type)
{
return  (*theWrappedObject).put(dev, file, type);
}

QString  PythonQtWrapper_QFtp::errorString(QFtp* theWrappedObject) const
{
return  (*theWrappedObject).errorString();
}

int  PythonQtWrapper_QFtp::rmdir(QFtp* theWrappedObject, const QString&  dir)
{
return  (*theWrappedObject).rmdir(dir);
}

int  PythonQtWrapper_QFtp::close(QFtp* theWrappedObject)
{
return  (*theWrappedObject).close();
}

int  PythonQtWrapper_QFtp::setTransferMode(QFtp* theWrappedObject, QFtp::TransferMode  mode)
{
return  (*theWrappedObject).setTransferMode(mode);
}

int  PythonQtWrapper_QFtp::login(QFtp* theWrappedObject, const QString&  user, const QString&  password)
{
return  (*theWrappedObject).login(user, password);
}

int  PythonQtWrapper_QFtp::remove(QFtp* theWrappedObject, const QString&  file)
{
return  (*theWrappedObject).remove(file);
}

QFtp::Command  PythonQtWrapper_QFtp::currentCommand(QFtp* theWrappedObject) const
{
return  (*theWrappedObject).currentCommand();
}

QIODevice*  PythonQtWrapper_QFtp::currentDevice(QFtp* theWrappedObject) const
{
return  (*theWrappedObject).currentDevice();
}

int  PythonQtWrapper_QFtp::put(QFtp* theWrappedObject, const QByteArray&  data, const QString&  file, QFtp::TransferType  type)
{
return  (*theWrappedObject).put(data, file, type);
}

int  PythonQtWrapper_QFtp::cd(QFtp* theWrappedObject, const QString&  dir)
{
return  (*theWrappedObject).cd(dir);
}

int  PythonQtWrapper_QFtp::connectToHost(QFtp* theWrappedObject, const QString&  host, unsigned short  port)
{
return  (*theWrappedObject).connectToHost(host, port);
}

bool  PythonQtWrapper_QFtp::hasPendingCommands(QFtp* theWrappedObject) const
{
return  (*theWrappedObject).hasPendingCommands();
}

int  PythonQtWrapper_QFtp::list(QFtp* theWrappedObject, const QString&  dir)
{
return  (*theWrappedObject).list(dir);
}

qint64  PythonQtWrapper_QFtp::bytesAvailable(QFtp* theWrappedObject) const
{
return  (*theWrappedObject).bytesAvailable();
}

QFtp::State  PythonQtWrapper_QFtp::state(QFtp* theWrappedObject) const
{
return  (*theWrappedObject).state();
}

qint64  PythonQtWrapper_QFtp::read(QFtp* theWrappedObject, char*  data, qint64  maxlen)
{
return  (*theWrappedObject).read(data, maxlen);
}

QByteArray  PythonQtWrapper_QFtp::readAll(QFtp* theWrappedObject)
{
return  (*theWrappedObject).readAll();
}

int  PythonQtWrapper_QFtp::get(QFtp* theWrappedObject, const QString&  file, QIODevice*  dev, QFtp::TransferType  type)
{
return  (*theWrappedObject).get(file, dev, type);
}

void PythonQtWrapper_QFtp::clearPendingCommands(QFtp* theWrappedObject)
{
 (*theWrappedObject).clearPendingCommands();
}

int  PythonQtWrapper_QFtp::currentId(QFtp* theWrappedObject) const
{
return  (*theWrappedObject).currentId();
}

