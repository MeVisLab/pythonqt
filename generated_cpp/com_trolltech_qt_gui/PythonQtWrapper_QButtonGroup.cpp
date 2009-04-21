#include "PythonQtWrapper_QButtonGroup.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractbutton.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

void PythonQtShell_QButtonGroup::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QButtonGroup::staticMetaObject,
      "childEvent(QButtonGroup*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QButtonGroup::childEvent(arg__1);
}
void PythonQtShell_QButtonGroup::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QButtonGroup::staticMetaObject,
      "customEvent(QButtonGroup*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QButtonGroup::customEvent(arg__1);
}
bool  PythonQtShell_QButtonGroup::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QButtonGroup::staticMetaObject,
      "event(QButtonGroup*,QEvent* )");
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
  return QButtonGroup::event(arg__1);
}
bool  PythonQtShell_QButtonGroup::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QButtonGroup::staticMetaObject,
      "eventFilter(QButtonGroup*,QObject* ,QEvent* )");
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
  return QButtonGroup::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QButtonGroup::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QButtonGroup::staticMetaObject,
      "timerEvent(QButtonGroup*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QButtonGroup::timerEvent(arg__1);
}
QButtonGroup* PythonQtWrapper_QButtonGroup::new_QButtonGroup(QObject*  parent)
{ 
return new PythonQtShell_QButtonGroup(parent); }

int  PythonQtWrapper_QButtonGroup::id(QButtonGroup* theWrappedObject, QAbstractButton*  button) const
{
return  theWrappedObject->id(button);
}

void PythonQtWrapper_QButtonGroup::removeButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1)
{
 theWrappedObject->removeButton(arg__1);
}

void PythonQtWrapper_QButtonGroup::setExclusive(QButtonGroup* theWrappedObject, bool  arg__1)
{
 theWrappedObject->setExclusive(arg__1);
}

void PythonQtWrapper_QButtonGroup::addButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1)
{
 theWrappedObject->addButton(arg__1);
}

QAbstractButton*  PythonQtWrapper_QButtonGroup::checkedButton(QButtonGroup* theWrappedObject) const
{
return  theWrappedObject->checkedButton();
}

void PythonQtWrapper_QButtonGroup::setId(QButtonGroup* theWrappedObject, QAbstractButton*  button, int  id)
{
 theWrappedObject->setId(button, id);
}

void PythonQtWrapper_QButtonGroup::addButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1, int  id)
{
 theWrappedObject->addButton(arg__1, id);
}

int  PythonQtWrapper_QButtonGroup::checkedId(QButtonGroup* theWrappedObject) const
{
return  theWrappedObject->checkedId();
}

bool  PythonQtWrapper_QButtonGroup::exclusive(QButtonGroup* theWrappedObject) const
{
return  theWrappedObject->exclusive();
}

QAbstractButton*  PythonQtWrapper_QButtonGroup::button(QButtonGroup* theWrappedObject, int  id) const
{
return  theWrappedObject->button(id);
}

QList<QAbstractButton* >  PythonQtWrapper_QButtonGroup::buttons(QButtonGroup* theWrappedObject) const
{
return  theWrappedObject->buttons();
}

