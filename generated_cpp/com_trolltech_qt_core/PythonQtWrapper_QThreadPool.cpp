#include "PythonQtWrapper_QThreadPool.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qrunnable.h>
#include <qthreadpool.h>

void PythonQtShell_QThreadPool::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QThreadPool::staticMetaObject,
      "childEvent(QThreadPool*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QThreadPool::childEvent(arg__1);
}
void PythonQtShell_QThreadPool::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QThreadPool::staticMetaObject,
      "customEvent(QThreadPool*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QThreadPool::customEvent(arg__1);
}
bool  PythonQtShell_QThreadPool::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QThreadPool::staticMetaObject,
      "event(QThreadPool*,QEvent* )");
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
  return QThreadPool::event(arg__1);
}
bool  PythonQtShell_QThreadPool::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QThreadPool::staticMetaObject,
      "eventFilter(QThreadPool*,QObject* ,QEvent* )");
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
  return QThreadPool::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QThreadPool::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QThreadPool::staticMetaObject,
      "timerEvent(QThreadPool*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QThreadPool::timerEvent(arg__1);
}
QThreadPool* PythonQtWrapper_QThreadPool::new_QThreadPool(QObject*  parent)
{ 
return new PythonQtShell_QThreadPool(parent); }

void PythonQtWrapper_QThreadPool::reserveThread(QThreadPool* theWrappedObject)
{
 (*theWrappedObject).reserveThread();
}

int  PythonQtWrapper_QThreadPool::expiryTimeout(QThreadPool* theWrappedObject) const
{
return  (*theWrappedObject).expiryTimeout();
}

void PythonQtWrapper_QThreadPool::start(QThreadPool* theWrappedObject, QRunnable*  runnable, int  priority)
{
 (*theWrappedObject).start(runnable, priority);
}

bool  PythonQtWrapper_QThreadPool::tryStart(QThreadPool* theWrappedObject, QRunnable*  runnable)
{
return  (*theWrappedObject).tryStart(runnable);
}

void PythonQtWrapper_QThreadPool::waitForDone(QThreadPool* theWrappedObject)
{
 (*theWrappedObject).waitForDone();
}

int  PythonQtWrapper_QThreadPool::maxThreadCount(QThreadPool* theWrappedObject) const
{
return  (*theWrappedObject).maxThreadCount();
}

QThreadPool*  PythonQtWrapper_QThreadPool::static_QThreadPool_globalInstance()
{
return QThreadPool::globalInstance();
}

void PythonQtWrapper_QThreadPool::releaseThread(QThreadPool* theWrappedObject)
{
 (*theWrappedObject).releaseThread();
}

void PythonQtWrapper_QThreadPool::setExpiryTimeout(QThreadPool* theWrappedObject, int  expiryTimeout)
{
 (*theWrappedObject).setExpiryTimeout(expiryTimeout);
}

void PythonQtWrapper_QThreadPool::setMaxThreadCount(QThreadPool* theWrappedObject, int  maxThreadCount)
{
 (*theWrappedObject).setMaxThreadCount(maxThreadCount);
}

int  PythonQtWrapper_QThreadPool::activeThreadCount(QThreadPool* theWrappedObject) const
{
return  (*theWrappedObject).activeThreadCount();
}

