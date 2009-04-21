#include "PythonQtWrapper_QWidgetAction.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qactiongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qmenu.h>
#include <qobject.h>
#include <qwidget.h>
#include <qwidgetaction.h>

void PythonQtShell_QWidgetAction::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidgetAction::staticMetaObject,
      "childEvent(QWidgetAction*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidgetAction::childEvent(arg__1);
}
QWidget*  PythonQtShell_QWidgetAction::createWidget(QWidget*  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createWidget");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidgetAction::staticMetaObject,
      "createWidget(QWidgetAction*,QWidget* )");
      QWidget*  returnValue;
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QWidget* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QWidgetAction::createWidget(parent);
}
void PythonQtShell_QWidgetAction::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidgetAction::staticMetaObject,
      "customEvent(QWidgetAction*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidgetAction::customEvent(arg__1);
}
void PythonQtShell_QWidgetAction::deleteWidget(QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "deleteWidget");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidgetAction::staticMetaObject,
      "deleteWidget(QWidgetAction*,QWidget* )");
    void* args[2] = {NULL, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidgetAction::deleteWidget(widget);
}
bool  PythonQtShell_QWidgetAction::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidgetAction::staticMetaObject,
      "event(QWidgetAction*,QEvent* )");
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
  return QWidgetAction::event(arg__1);
}
bool  PythonQtShell_QWidgetAction::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidgetAction::staticMetaObject,
      "eventFilter(QWidgetAction*,QObject* ,QEvent* )");
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
  return QWidgetAction::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QWidgetAction::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidgetAction::staticMetaObject,
      "timerEvent(QWidgetAction*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidgetAction::timerEvent(arg__1);
}
QWidgetAction* PythonQtWrapper_QWidgetAction::new_QWidgetAction(QObject*  parent)
{ 
return new PythonQtShell_QWidgetAction(parent); }

void PythonQtWrapper_QWidgetAction::releaseWidget(QWidgetAction* theWrappedObject, QWidget*  widget)
{
 (*theWrappedObject).releaseWidget(widget);
}

void PythonQtWrapper_QWidgetAction::deleteWidget(QWidgetAction* theWrappedObject, QWidget*  widget)
{
 (*((PythonQtPublicPromoter_QWidgetAction*)theWrappedObject)).deleteWidget(widget);
}

QWidget*  PythonQtWrapper_QWidgetAction::defaultWidget(QWidgetAction* theWrappedObject) const
{
return  (*theWrappedObject).defaultWidget();
}

QWidget*  PythonQtWrapper_QWidgetAction::createWidget(QWidgetAction* theWrappedObject, QWidget*  parent)
{
return  (*((PythonQtPublicPromoter_QWidgetAction*)theWrappedObject)).createWidget(parent);
}

bool  PythonQtWrapper_QWidgetAction::eventFilter(QWidgetAction* theWrappedObject, QObject*  arg__1, QEvent*  arg__2)
{
return  (*((PythonQtPublicPromoter_QWidgetAction*)theWrappedObject)).eventFilter(arg__1, arg__2);
}

bool  PythonQtWrapper_QWidgetAction::event(QWidgetAction* theWrappedObject, QEvent*  arg__1)
{
return  (*((PythonQtPublicPromoter_QWidgetAction*)theWrappedObject)).event(arg__1);
}

QWidget*  PythonQtWrapper_QWidgetAction::requestWidget(QWidgetAction* theWrappedObject, QWidget*  parent)
{
return  (*theWrappedObject).requestWidget(parent);
}

void PythonQtWrapper_QWidgetAction::setDefaultWidget(QWidgetAction* theWrappedObject, QWidget*  w)
{
 (*theWrappedObject).setDefaultWidget(w);
}

