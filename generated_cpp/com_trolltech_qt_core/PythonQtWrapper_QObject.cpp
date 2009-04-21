#include "PythonQtWrapper_QObject.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVarLengthArray>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

void PythonQtShell_QObject::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QObject::staticMetaObject,
      "childEvent(QObject*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QObject::childEvent(arg__1);
}
void PythonQtShell_QObject::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QObject::staticMetaObject,
      "customEvent(QObject*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QObject::customEvent(arg__1);
}
bool  PythonQtShell_QObject::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QObject::staticMetaObject,
      "event(QObject*,QEvent* )");
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
  return QObject::event(arg__1);
}
bool  PythonQtShell_QObject::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QObject::staticMetaObject,
      "eventFilter(QObject*,QObject* ,QEvent* )");
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
  return QObject::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QObject::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QObject::staticMetaObject,
      "timerEvent(QObject*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QObject::timerEvent(arg__1);
}
QObject* PythonQtWrapper_QObject::new_QObject(QObject*  parent)
{ 
return new PythonQtShell_QObject(parent); }

bool  PythonQtWrapper_QObject::signalsBlocked(QObject* theWrappedObject) const
{
return  (*theWrappedObject).signalsBlocked();
}

bool  PythonQtWrapper_QObject::setProperty(QObject* theWrappedObject, const char*  name, const QVariant&  value)
{
return  (*theWrappedObject).setProperty(name, value);
}

void PythonQtWrapper_QObject::killTimer(QObject* theWrappedObject, int  id)
{
 (*theWrappedObject).killTimer(id);
}

void PythonQtWrapper_QObject::dumpObjectTree(QObject* theWrappedObject)
{
 (*theWrappedObject).dumpObjectTree();
}

QVariant  PythonQtWrapper_QObject::property(QObject* theWrappedObject, const char*  name) const
{
return  (*theWrappedObject).property(name);
}

void PythonQtWrapper_QObject::timerEvent(QObject* theWrappedObject, QTimerEvent*  arg__1)
{
 (*((PythonQtPublicPromoter_QObject*)theWrappedObject)).timerEvent(arg__1);
}

void PythonQtWrapper_QObject::installEventFilter(QObject* theWrappedObject, QObject*  arg__1)
{
 (*theWrappedObject).installEventFilter(arg__1);
}

QObject*  PythonQtWrapper_QObject::parent(QObject* theWrappedObject) const
{
return  (*theWrappedObject).parent();
}

void PythonQtWrapper_QObject::setParent(QObject* theWrappedObject, QObject*  arg__1)
{
 (*theWrappedObject).setParent(arg__1);
}

void PythonQtWrapper_QObject::childEvent(QObject* theWrappedObject, QChildEvent*  arg__1)
{
 (*((PythonQtPublicPromoter_QObject*)theWrappedObject)).childEvent(arg__1);
}

bool  PythonQtWrapper_QObject::blockSignals(QObject* theWrappedObject, bool  b)
{
return  (*theWrappedObject).blockSignals(b);
}

int  PythonQtWrapper_QObject::startTimer(QObject* theWrappedObject, int  interval)
{
return  (*theWrappedObject).startTimer(interval);
}

QString  PythonQtWrapper_QObject::objectName(QObject* theWrappedObject) const
{
return  (*theWrappedObject).objectName();
}

QList<QByteArray >  PythonQtWrapper_QObject::dynamicPropertyNames(QObject* theWrappedObject) const
{
return  (*theWrappedObject).dynamicPropertyNames();
}

bool  PythonQtWrapper_QObject::event(QObject* theWrappedObject, QEvent*  arg__1)
{
return  (*theWrappedObject).event(arg__1);
}

void PythonQtWrapper_QObject::removeEventFilter(QObject* theWrappedObject, QObject*  arg__1)
{
 (*theWrappedObject).removeEventFilter(arg__1);
}

void PythonQtWrapper_QObject::setObjectName(QObject* theWrappedObject, const QString&  name)
{
 (*theWrappedObject).setObjectName(name);
}

bool  PythonQtWrapper_QObject::inherits(QObject* theWrappedObject, const char*  classname) const
{
return  (*theWrappedObject).inherits(classname);
}

void PythonQtWrapper_QObject::customEvent(QObject* theWrappedObject, QEvent*  arg__1)
{
 (*((PythonQtPublicPromoter_QObject*)theWrappedObject)).customEvent(arg__1);
}

bool  PythonQtWrapper_QObject::eventFilter(QObject* theWrappedObject, QObject*  arg__1, QEvent*  arg__2)
{
return  (*theWrappedObject).eventFilter(arg__1, arg__2);
}

bool  PythonQtWrapper_QObject::isWidgetType(QObject* theWrappedObject) const
{
return  (*theWrappedObject).isWidgetType();
}

QThread*  PythonQtWrapper_QObject::thread(QObject* theWrappedObject) const
{
return  (*theWrappedObject).thread();
}

void PythonQtWrapper_QObject::moveToThread(QObject* theWrappedObject, QThread*  thread)
{
 (*theWrappedObject).moveToThread(thread);
}

void PythonQtWrapper_QObject::dumpObjectInfo(QObject* theWrappedObject)
{
 (*theWrappedObject).dumpObjectInfo();
}

const QList<QObject* >&  PythonQtWrapper_QObject::children(QObject* theWrappedObject) const
{
return  (*theWrappedObject).children();
}

