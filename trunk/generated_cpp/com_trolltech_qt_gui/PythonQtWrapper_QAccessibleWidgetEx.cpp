#include "PythonQtWrapper_QAccessibleWidgetEx.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qaccessible.h>
#include <qaccessiblewidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qwidget.h>

QString  PythonQtShell_QAccessibleWidgetEx::actionText(int  action, QAccessible::Text  t, int  child) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionText");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "actionText(QAccessibleWidgetEx*,int ,QAccessible::Text ,int )");
      QString  returnValue;
    void* args[4] = {NULL, (void*)&action, (void*)&t, (void*)&child};
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
  return QAccessibleWidgetEx::actionText(action, t, child);
}
int  PythonQtShell_QAccessibleWidgetEx::childAt(int  x, int  y) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "childAt(QAccessibleWidgetEx*,int ,int )");
      int  returnValue;
    void* args[3] = {NULL, (void*)&x, (void*)&y};
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
  return QAccessibleWidgetEx::childAt(x, y);
}
int  PythonQtShell_QAccessibleWidgetEx::childCount() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childCount");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "childCount(QAccessibleWidgetEx*)");
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
  return QAccessibleWidgetEx::childCount();
}
bool  PythonQtShell_QAccessibleWidgetEx::doAction(int  action, int  child, const QList<QVariant >&  params)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "doAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "doAction(QAccessibleWidgetEx*,int ,int ,const QList<QVariant >& )");
      bool  returnValue;
    void* args[4] = {NULL, (void*)&action, (void*)&child, (void*)&params};
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
  return QAccessibleWidgetEx::doAction(action, child, params);
}
int  PythonQtShell_QAccessibleWidgetEx::indexOfChild(const QAccessibleInterface*  child) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "indexOfChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "indexOfChild(QAccessibleWidgetEx*,const QAccessibleInterface* )");
      int  returnValue;
    void* args[2] = {NULL, (void*)&child};
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
  return QAccessibleWidgetEx::indexOfChild(child);
}
QVariant  PythonQtShell_QAccessibleWidgetEx::invokeMethodEx(QAccessible::Method  method, int  child, const QList<QVariant >&  params)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "invokeMethodEx");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "invokeMethodEx(QAccessibleWidgetEx*,QAccessible::Method ,int ,const QList<QVariant >& )");
      QVariant  returnValue;
    void* args[4] = {NULL, (void*)&method, (void*)&child, (void*)&params};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QVariant *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QAccessibleWidgetEx::invokeMethodEx(method, child, params);
}
bool  PythonQtShell_QAccessibleWidgetEx::isValid() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isValid");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "isValid(QAccessibleWidgetEx*)");
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
  return QAccessibleWidgetEx::isValid();
}
int  PythonQtShell_QAccessibleWidgetEx::navigate(QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "navigate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "navigate(QAccessibleWidgetEx*,QAccessible::RelationFlag ,int ,QAccessibleInterface** )");
      int  returnValue;
    void* args[4] = {NULL, (void*)&rel, (void*)&entry, (void*)&target};
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
  return QAccessibleWidgetEx::navigate(rel, entry, target);
}
QObject*  PythonQtShell_QAccessibleWidgetEx::object() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "object");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "object(QAccessibleWidgetEx*)");
      QObject*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QObject* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QAccessibleWidgetEx::object();
}
QRect  PythonQtShell_QAccessibleWidgetEx::rect(int  child) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "rect(QAccessibleWidgetEx*,int )");
      QRect  returnValue;
    void* args[2] = {NULL, (void*)&child};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QRect *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QAccessibleWidgetEx::rect(child);
}
QAccessible::Relation  PythonQtShell_QAccessibleWidgetEx::relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "relationTo");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "relationTo(QAccessibleWidgetEx*,int ,const QAccessibleInterface* ,int )");
      QAccessible::Relation  returnValue;
    void* args[4] = {NULL, (void*)&child, (void*)&other, (void*)&otherChild};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QAccessible::Relation *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QAccessibleWidgetEx::relationTo(child, other, otherChild);
}
QAccessible::Role  PythonQtShell_QAccessibleWidgetEx::role(int  child) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "role");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "role(QAccessibleWidgetEx*,int )");
      QAccessible::Role  returnValue;
    void* args[2] = {NULL, (void*)&child};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QAccessible::Role *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QAccessibleWidgetEx::role(child);
}
void PythonQtShell_QAccessibleWidgetEx::setText(QAccessible::Text  t, int  child, const QString&  text)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setText");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "setText(QAccessibleWidgetEx*,QAccessible::Text ,int ,const QString& )");
    void* args[4] = {NULL, (void*)&t, (void*)&child, (void*)&text};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAccessibleWidgetEx::setText(t, child, text);
}
QAccessible::State  PythonQtShell_QAccessibleWidgetEx::state(int  child) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "state");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "state(QAccessibleWidgetEx*,int )");
      QAccessible::State  returnValue;
    void* args[2] = {NULL, (void*)&child};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QAccessible::State *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QAccessibleWidgetEx::state(child);
}
QString  PythonQtShell_QAccessibleWidgetEx::text(QAccessible::Text  t, int  child) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "text");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "text(QAccessibleWidgetEx*,QAccessible::Text ,int )");
      QString  returnValue;
    void* args[3] = {NULL, (void*)&t, (void*)&child};
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
  return QAccessibleWidgetEx::text(t, child);
}
int  PythonQtShell_QAccessibleWidgetEx::userActionCount(int  child) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "userActionCount");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "userActionCount(QAccessibleWidgetEx*,int )");
      int  returnValue;
    void* args[2] = {NULL, (void*)&child};
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
  return QAccessibleWidgetEx::userActionCount(child);
}
QVariant  PythonQtShell_QAccessibleWidgetEx::virtual_hook(const QVariant&  data)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "virtual_hook");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAccessibleWidgetEx::staticMetaObject,
      "virtual_hook(QAccessibleWidgetEx*,const QVariant& )");
      QVariant  returnValue;
    void* args[2] = {NULL, (void*)&data};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QVariant *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QAccessibleWidgetEx::virtual_hook(data);
}
QAccessibleWidgetEx* PythonQtWrapper_QAccessibleWidgetEx::new_QAccessibleWidgetEx(QWidget*  o, QAccessible::Role  r, const QString&  name)
{ 
return new PythonQtShell_QAccessibleWidgetEx(o, r, name); }

int  PythonQtWrapper_QAccessibleWidgetEx::childCount(QAccessibleWidgetEx* theWrappedObject) const
{
return  (*theWrappedObject).childCount();
}

QRect  PythonQtWrapper_QAccessibleWidgetEx::rect(QAccessibleWidgetEx* theWrappedObject, int  child) const
{
return  (*theWrappedObject).rect(child);
}

QAccessible::Role  PythonQtWrapper_QAccessibleWidgetEx::role(QAccessibleWidgetEx* theWrappedObject, int  child) const
{
return  (*theWrappedObject).role(child);
}

QString  PythonQtWrapper_QAccessibleWidgetEx::actionText(QAccessibleWidgetEx* theWrappedObject, int  action, QAccessible::Text  t, int  child) const
{
return  (*theWrappedObject).actionText(action, t, child);
}

bool  PythonQtWrapper_QAccessibleWidgetEx::doAction(QAccessibleWidgetEx* theWrappedObject, int  action, int  child, const QList<QVariant >&  params)
{
return  (*theWrappedObject).doAction(action, child, params);
}

int  PythonQtWrapper_QAccessibleWidgetEx::navigate(QAccessibleWidgetEx* theWrappedObject, QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const
{
return  (*theWrappedObject).navigate(rel, entry, target);
}

QAccessible::Relation  PythonQtWrapper_QAccessibleWidgetEx::relationTo(QAccessibleWidgetEx* theWrappedObject, int  child, const QAccessibleInterface*  other, int  otherChild) const
{
return  (*theWrappedObject).relationTo(child, other, otherChild);
}

int  PythonQtWrapper_QAccessibleWidgetEx::indexOfChild(QAccessibleWidgetEx* theWrappedObject, const QAccessibleInterface*  child) const
{
return  (*theWrappedObject).indexOfChild(child);
}

QString  PythonQtWrapper_QAccessibleWidgetEx::text(QAccessibleWidgetEx* theWrappedObject, QAccessible::Text  t, int  child) const
{
return  (*theWrappedObject).text(t, child);
}

int  PythonQtWrapper_QAccessibleWidgetEx::childAt(QAccessibleWidgetEx* theWrappedObject, int  x, int  y) const
{
return  (*theWrappedObject).childAt(x, y);
}

QVariant  PythonQtWrapper_QAccessibleWidgetEx::invokeMethodEx(QAccessibleWidgetEx* theWrappedObject, QAccessible::Method  method, int  child, const QList<QVariant >&  params)
{
return  (*theWrappedObject).invokeMethodEx(method, child, params);
}

QAccessible::State  PythonQtWrapper_QAccessibleWidgetEx::state(QAccessibleWidgetEx* theWrappedObject, int  child) const
{
return  (*theWrappedObject).state(child);
}

