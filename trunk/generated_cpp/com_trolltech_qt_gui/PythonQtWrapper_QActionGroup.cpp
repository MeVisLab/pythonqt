#include "PythonQtWrapper_QActionGroup.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qaction.h>
#include <qactiongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qobject.h>

void PythonQtShell_QActionGroup::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QActionGroup::staticMetaObject,
      "childEvent(QActionGroup*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QActionGroup::childEvent(arg__1);
}
void PythonQtShell_QActionGroup::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QActionGroup::staticMetaObject,
      "customEvent(QActionGroup*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QActionGroup::customEvent(arg__1);
}
bool  PythonQtShell_QActionGroup::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QActionGroup::staticMetaObject,
      "event(QActionGroup*,QEvent* )");
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
  return QActionGroup::event(arg__1);
}
bool  PythonQtShell_QActionGroup::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QActionGroup::staticMetaObject,
      "eventFilter(QActionGroup*,QObject* ,QEvent* )");
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
  return QActionGroup::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QActionGroup::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QActionGroup::staticMetaObject,
      "timerEvent(QActionGroup*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QActionGroup::timerEvent(arg__1);
}
QActionGroup* PythonQtWrapper_QActionGroup::new_QActionGroup(QObject*  parent)
{ 
return new PythonQtShell_QActionGroup(parent); }

bool  PythonQtWrapper_QActionGroup::isVisible(QActionGroup* theWrappedObject) const
{
return  (*theWrappedObject).isVisible();
}

QAction*  PythonQtWrapper_QActionGroup::addAction(QActionGroup* theWrappedObject, const QIcon&  icon, const QString&  text)
{
return  (*theWrappedObject).addAction(icon, text);
}

bool  PythonQtWrapper_QActionGroup::isExclusive(QActionGroup* theWrappedObject) const
{
return  (*theWrappedObject).isExclusive();
}

void PythonQtWrapper_QActionGroup::removeAction(QActionGroup* theWrappedObject, QAction*  a)
{
 (*theWrappedObject).removeAction(a);
}

QAction*  PythonQtWrapper_QActionGroup::addAction(QActionGroup* theWrappedObject, QAction*  a)
{
return  (*theWrappedObject).addAction(a);
}

QAction*  PythonQtWrapper_QActionGroup::addAction(QActionGroup* theWrappedObject, const QString&  text)
{
return  (*theWrappedObject).addAction(text);
}

QList<QAction* >  PythonQtWrapper_QActionGroup::actions(QActionGroup* theWrappedObject) const
{
return  (*theWrappedObject).actions();
}

bool  PythonQtWrapper_QActionGroup::isEnabled(QActionGroup* theWrappedObject) const
{
return  (*theWrappedObject).isEnabled();
}

QAction*  PythonQtWrapper_QActionGroup::checkedAction(QActionGroup* theWrappedObject) const
{
return  (*theWrappedObject).checkedAction();
}

