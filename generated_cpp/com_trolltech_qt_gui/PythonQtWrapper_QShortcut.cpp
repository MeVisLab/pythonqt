#include "PythonQtWrapper_QShortcut.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qobject.h>
#include <qwidget.h>

void PythonQtShell_QShortcut::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QShortcut::staticMetaObject,
      "childEvent(QShortcut*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QShortcut::childEvent(arg__1);
}
void PythonQtShell_QShortcut::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QShortcut::staticMetaObject,
      "customEvent(QShortcut*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QShortcut::customEvent(arg__1);
}
bool  PythonQtShell_QShortcut::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QShortcut::staticMetaObject,
      "event(QShortcut*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&e};
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
  return QShortcut::event(e);
}
bool  PythonQtShell_QShortcut::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QShortcut::staticMetaObject,
      "eventFilter(QShortcut*,QObject* ,QEvent* )");
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
  return QShortcut::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QShortcut::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QShortcut::staticMetaObject,
      "timerEvent(QShortcut*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QShortcut::timerEvent(arg__1);
}
QShortcut* PythonQtWrapper_QShortcut::new_QShortcut(QWidget*  parent)
{ 
return new PythonQtShell_QShortcut(parent); }

QShortcut* PythonQtWrapper_QShortcut::new_QShortcut(const QKeySequence&  key, QWidget*  parent, const char*  member, const char*  ambiguousMember, Qt::ShortcutContext  context)
{ 
return new PythonQtShell_QShortcut(key, parent, member, ambiguousMember, context); }

bool  PythonQtWrapper_QShortcut::autoRepeat(QShortcut* theWrappedObject) const
{
return  theWrappedObject->autoRepeat();
}

QWidget*  PythonQtWrapper_QShortcut::parentWidget(QShortcut* theWrappedObject) const
{
return  theWrappedObject->parentWidget();
}

void PythonQtWrapper_QShortcut::setAutoRepeat(QShortcut* theWrappedObject, bool  on)
{
 theWrappedObject->setAutoRepeat(on);
}

QKeySequence  PythonQtWrapper_QShortcut::key(QShortcut* theWrappedObject) const
{
return  theWrappedObject->key();
}

void PythonQtWrapper_QShortcut::setKey(QShortcut* theWrappedObject, const QKeySequence&  key)
{
 theWrappedObject->setKey(key);
}

bool  PythonQtWrapper_QShortcut::isEnabled(QShortcut* theWrappedObject) const
{
return  theWrappedObject->isEnabled();
}

void PythonQtWrapper_QShortcut::setContext(QShortcut* theWrappedObject, Qt::ShortcutContext  context)
{
 theWrappedObject->setContext(context);
}

void PythonQtWrapper_QShortcut::setEnabled(QShortcut* theWrappedObject, bool  enable)
{
 theWrappedObject->setEnabled(enable);
}

void PythonQtWrapper_QShortcut::setWhatsThis(QShortcut* theWrappedObject, const QString&  text)
{
 theWrappedObject->setWhatsThis(text);
}

QString  PythonQtWrapper_QShortcut::whatsThis(QShortcut* theWrappedObject) const
{
return  theWrappedObject->whatsThis();
}

bool  PythonQtWrapper_QShortcut::event(QShortcut* theWrappedObject, QEvent*  e)
{
return  ((PythonQtPublicPromoter_QShortcut*)theWrappedObject)->promoted_event(e);
}

Qt::ShortcutContext  PythonQtWrapper_QShortcut::context(QShortcut* theWrappedObject)
{
return  theWrappedObject->context();
}

int  PythonQtWrapper_QShortcut::id(QShortcut* theWrappedObject) const
{
return  theWrappedObject->id();
}

