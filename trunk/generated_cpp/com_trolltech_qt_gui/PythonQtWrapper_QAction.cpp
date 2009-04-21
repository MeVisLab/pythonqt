#include "PythonQtWrapper_QAction.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qaction.h>
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

void PythonQtShell_QAction::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAction::staticMetaObject,
      "childEvent(QAction*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAction::childEvent(arg__1);
}
void PythonQtShell_QAction::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAction::staticMetaObject,
      "customEvent(QAction*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAction::customEvent(arg__1);
}
bool  PythonQtShell_QAction::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAction::staticMetaObject,
      "event(QAction*,QEvent* )");
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
  return QAction::event(arg__1);
}
bool  PythonQtShell_QAction::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAction::staticMetaObject,
      "eventFilter(QAction*,QObject* ,QEvent* )");
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
  return QAction::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QAction::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAction::staticMetaObject,
      "timerEvent(QAction*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAction::timerEvent(arg__1);
}
QAction* PythonQtWrapper_QAction::new_QAction(QObject*  parent)
{ 
return new PythonQtShell_QAction(parent); }

QAction* PythonQtWrapper_QAction::new_QAction(const QIcon&  icon, const QString&  text, QObject*  parent)
{ 
return new PythonQtShell_QAction(icon, text, parent); }

QAction* PythonQtWrapper_QAction::new_QAction(const QString&  text, QObject*  parent)
{ 
return new PythonQtShell_QAction(text, parent); }

void PythonQtWrapper_QAction::setToolTip(QAction* theWrappedObject, const QString&  tip)
{
 theWrappedObject->setToolTip(tip);
}

QIcon  PythonQtWrapper_QAction::icon(QAction* theWrappedObject) const
{
return  theWrappedObject->icon();
}

Qt::ShortcutContext  PythonQtWrapper_QAction::shortcutContext(QAction* theWrappedObject) const
{
return  theWrappedObject->shortcutContext();
}

void PythonQtWrapper_QAction::setData(QAction* theWrappedObject, const QVariant&  var)
{
 theWrappedObject->setData(var);
}

QFont  PythonQtWrapper_QAction::font(QAction* theWrappedObject) const
{
return  theWrappedObject->font();
}

bool  PythonQtWrapper_QAction::isEnabled(QAction* theWrappedObject) const
{
return  theWrappedObject->isEnabled();
}

QKeySequence  PythonQtWrapper_QAction::shortcut(QAction* theWrappedObject) const
{
return  theWrappedObject->shortcut();
}

void PythonQtWrapper_QAction::setFont(QAction* theWrappedObject, const QFont&  font)
{
 theWrappedObject->setFont(font);
}

QMenu*  PythonQtWrapper_QAction::menu(QAction* theWrappedObject) const
{
return  theWrappedObject->menu();
}

bool  PythonQtWrapper_QAction::autoRepeat(QAction* theWrappedObject) const
{
return  theWrappedObject->autoRepeat();
}

bool  PythonQtWrapper_QAction::showStatusText(QAction* theWrappedObject, QWidget*  widget)
{
return  theWrappedObject->showStatusText(widget);
}

QString  PythonQtWrapper_QAction::whatsThis(QAction* theWrappedObject) const
{
return  theWrappedObject->whatsThis();
}

bool  PythonQtWrapper_QAction::isVisible(QAction* theWrappedObject) const
{
return  theWrappedObject->isVisible();
}

QAction::MenuRole  PythonQtWrapper_QAction::menuRole(QAction* theWrappedObject) const
{
return  theWrappedObject->menuRole();
}

QString  PythonQtWrapper_QAction::text(QAction* theWrappedObject) const
{
return  theWrappedObject->text();
}

void PythonQtWrapper_QAction::setWhatsThis(QAction* theWrappedObject, const QString&  what)
{
 theWrappedObject->setWhatsThis(what);
}

void PythonQtWrapper_QAction::setActionGroup(QAction* theWrappedObject, QActionGroup*  group)
{
 theWrappedObject->setActionGroup(group);
}

void PythonQtWrapper_QAction::setCheckable(QAction* theWrappedObject, bool  arg__1)
{
 theWrappedObject->setCheckable(arg__1);
}

void PythonQtWrapper_QAction::setText(QAction* theWrappedObject, const QString&  text)
{
 theWrappedObject->setText(text);
}

bool  PythonQtWrapper_QAction::isChecked(QAction* theWrappedObject) const
{
return  theWrappedObject->isChecked();
}

void PythonQtWrapper_QAction::setShortcuts(QAction* theWrappedObject, QKeySequence::StandardKey  arg__1)
{
 theWrappedObject->setShortcuts(arg__1);
}

void PythonQtWrapper_QAction::setIconText(QAction* theWrappedObject, const QString&  text)
{
 theWrappedObject->setIconText(text);
}

QList<QKeySequence >  PythonQtWrapper_QAction::shortcuts(QAction* theWrappedObject) const
{
return  theWrappedObject->shortcuts();
}

void PythonQtWrapper_QAction::setShortcuts(QAction* theWrappedObject, const QList<QKeySequence >&  shortcuts)
{
 theWrappedObject->setShortcuts(shortcuts);
}

void PythonQtWrapper_QAction::setShortcut(QAction* theWrappedObject, const QKeySequence&  shortcut)
{
 theWrappedObject->setShortcut(shortcut);
}

QString  PythonQtWrapper_QAction::toolTip(QAction* theWrappedObject) const
{
return  theWrappedObject->toolTip();
}

QString  PythonQtWrapper_QAction::statusTip(QAction* theWrappedObject) const
{
return  theWrappedObject->statusTip();
}

QActionGroup*  PythonQtWrapper_QAction::actionGroup(QAction* theWrappedObject) const
{
return  theWrappedObject->actionGroup();
}

void PythonQtWrapper_QAction::setMenu(QAction* theWrappedObject, QMenu*  menu)
{
 theWrappedObject->setMenu(menu);
}

void PythonQtWrapper_QAction::setMenuRole(QAction* theWrappedObject, QAction::MenuRole  menuRole)
{
 theWrappedObject->setMenuRole(menuRole);
}

QString  PythonQtWrapper_QAction::iconText(QAction* theWrappedObject) const
{
return  theWrappedObject->iconText();
}

void PythonQtWrapper_QAction::setAutoRepeat(QAction* theWrappedObject, bool  arg__1)
{
 theWrappedObject->setAutoRepeat(arg__1);
}

bool  PythonQtWrapper_QAction::isCheckable(QAction* theWrappedObject) const
{
return  theWrappedObject->isCheckable();
}

void PythonQtWrapper_QAction::setShortcutContext(QAction* theWrappedObject, Qt::ShortcutContext  context)
{
 theWrappedObject->setShortcutContext(context);
}

void PythonQtWrapper_QAction::setIconVisibleInMenu(QAction* theWrappedObject, bool  visible)
{
 theWrappedObject->setIconVisibleInMenu(visible);
}

void PythonQtWrapper_QAction::activate(QAction* theWrappedObject, QAction::ActionEvent  event)
{
 theWrappedObject->activate(event);
}

bool  PythonQtWrapper_QAction::event(QAction* theWrappedObject, QEvent*  arg__1)
{
return  ((PythonQtPublicPromoter_QAction*)theWrappedObject)->promoted_event(arg__1);
}

QList<QWidget* >  PythonQtWrapper_QAction::associatedWidgets(QAction* theWrappedObject) const
{
return  theWrappedObject->associatedWidgets();
}

void PythonQtWrapper_QAction::setStatusTip(QAction* theWrappedObject, const QString&  statusTip)
{
 theWrappedObject->setStatusTip(statusTip);
}

bool  PythonQtWrapper_QAction::isIconVisibleInMenu(QAction* theWrappedObject) const
{
return  theWrappedObject->isIconVisibleInMenu();
}

QVariant  PythonQtWrapper_QAction::data(QAction* theWrappedObject) const
{
return  theWrappedObject->data();
}

bool  PythonQtWrapper_QAction::isSeparator(QAction* theWrappedObject) const
{
return  theWrappedObject->isSeparator();
}

QWidget*  PythonQtWrapper_QAction::parentWidget(QAction* theWrappedObject) const
{
return  theWrappedObject->parentWidget();
}

void PythonQtWrapper_QAction::setSeparator(QAction* theWrappedObject, bool  b)
{
 theWrappedObject->setSeparator(b);
}

void PythonQtWrapper_QAction::setIcon(QAction* theWrappedObject, const QIcon&  icon)
{
 theWrappedObject->setIcon(icon);
}

