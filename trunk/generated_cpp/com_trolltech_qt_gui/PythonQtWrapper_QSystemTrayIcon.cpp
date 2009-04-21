#include "PythonQtWrapper_QSystemTrayIcon.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qmenu.h>
#include <qobject.h>
#include <qrect.h>
#include <qsystemtrayicon.h>

void PythonQtShell_QSystemTrayIcon::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSystemTrayIcon::staticMetaObject,
      "childEvent(QSystemTrayIcon*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSystemTrayIcon::childEvent(arg__1);
}
void PythonQtShell_QSystemTrayIcon::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSystemTrayIcon::staticMetaObject,
      "customEvent(QSystemTrayIcon*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSystemTrayIcon::customEvent(arg__1);
}
bool  PythonQtShell_QSystemTrayIcon::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSystemTrayIcon::staticMetaObject,
      "event(QSystemTrayIcon*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&event};
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
  return QSystemTrayIcon::event(event);
}
bool  PythonQtShell_QSystemTrayIcon::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSystemTrayIcon::staticMetaObject,
      "eventFilter(QSystemTrayIcon*,QObject* ,QEvent* )");
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
  return QSystemTrayIcon::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSystemTrayIcon::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSystemTrayIcon::staticMetaObject,
      "timerEvent(QSystemTrayIcon*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSystemTrayIcon::timerEvent(arg__1);
}
QSystemTrayIcon* PythonQtWrapper_QSystemTrayIcon::new_QSystemTrayIcon(QObject*  parent)
{ 
return new PythonQtShell_QSystemTrayIcon(parent); }

QSystemTrayIcon* PythonQtWrapper_QSystemTrayIcon::new_QSystemTrayIcon(const QIcon&  icon, QObject*  parent)
{ 
return new PythonQtShell_QSystemTrayIcon(icon, parent); }

bool  PythonQtWrapper_QSystemTrayIcon::static_QSystemTrayIcon_supportsMessages()
{
return QSystemTrayIcon::supportsMessages();
}

QMenu*  PythonQtWrapper_QSystemTrayIcon::contextMenu(QSystemTrayIcon* theWrappedObject) const
{
return  theWrappedObject->contextMenu();
}

void PythonQtWrapper_QSystemTrayIcon::setContextMenu(QSystemTrayIcon* theWrappedObject, QMenu*  menu)
{
 theWrappedObject->setContextMenu(menu);
}

void PythonQtWrapper_QSystemTrayIcon::setToolTip(QSystemTrayIcon* theWrappedObject, const QString&  tip)
{
 theWrappedObject->setToolTip(tip);
}

void PythonQtWrapper_QSystemTrayIcon::showMessage(QSystemTrayIcon* theWrappedObject, const QString&  title, const QString&  msg, QSystemTrayIcon::MessageIcon  icon, int  msecs)
{
 theWrappedObject->showMessage(title, msg, icon, msecs);
}

QRect  PythonQtWrapper_QSystemTrayIcon::geometry(QSystemTrayIcon* theWrappedObject) const
{
return  theWrappedObject->geometry();
}

QString  PythonQtWrapper_QSystemTrayIcon::toolTip(QSystemTrayIcon* theWrappedObject) const
{
return  theWrappedObject->toolTip();
}

bool  PythonQtWrapper_QSystemTrayIcon::event(QSystemTrayIcon* theWrappedObject, QEvent*  event)
{
return  ((PythonQtPublicPromoter_QSystemTrayIcon*)theWrappedObject)->promoted_event(event);
}

QIcon  PythonQtWrapper_QSystemTrayIcon::icon(QSystemTrayIcon* theWrappedObject) const
{
return  theWrappedObject->icon();
}

bool  PythonQtWrapper_QSystemTrayIcon::isVisible(QSystemTrayIcon* theWrappedObject) const
{
return  theWrappedObject->isVisible();
}

bool  PythonQtWrapper_QSystemTrayIcon::static_QSystemTrayIcon_isSystemTrayAvailable()
{
return QSystemTrayIcon::isSystemTrayAvailable();
}

void PythonQtWrapper_QSystemTrayIcon::setIcon(QSystemTrayIcon* theWrappedObject, const QIcon&  icon)
{
 theWrappedObject->setIcon(icon);
}

