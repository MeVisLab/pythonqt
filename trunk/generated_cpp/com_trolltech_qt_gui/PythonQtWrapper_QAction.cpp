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
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
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
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
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
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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

void PythonQtWrapper_QAction::setData(QAction* theWrappedObject, const QVariant&  var)
{
  ( theWrappedObject->setData(var));
}

QIcon  PythonQtWrapper_QAction::icon(QAction* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

void PythonQtWrapper_QAction::setShortcuts(QAction* theWrappedObject, const QList<QKeySequence >&  shortcuts)
{
  ( theWrappedObject->setShortcuts(shortcuts));
}

QString  PythonQtWrapper_QAction::whatsThis(QAction* theWrappedObject) const
{
  return ( theWrappedObject->whatsThis());
}

void PythonQtWrapper_QAction::setIconText(QAction* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setIconText(text));
}

bool  PythonQtWrapper_QAction::isVisible(QAction* theWrappedObject) const
{
  return ( theWrappedObject->isVisible());
}

void PythonQtWrapper_QAction::setSeparator(QAction* theWrappedObject, bool  b)
{
  ( theWrappedObject->setSeparator(b));
}

bool  PythonQtWrapper_QAction::isEnabled(QAction* theWrappedObject) const
{
  return ( theWrappedObject->isEnabled());
}

void PythonQtWrapper_QAction::setText(QAction* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}

QList<QKeySequence >  PythonQtWrapper_QAction::shortcuts(QAction* theWrappedObject) const
{
  return ( theWrappedObject->shortcuts());
}

QWidget*  PythonQtWrapper_QAction::parentWidget(QAction* theWrappedObject) const
{
  return ( theWrappedObject->parentWidget());
}

void PythonQtWrapper_QAction::setWhatsThis(QAction* theWrappedObject, const QString&  what)
{
  ( theWrappedObject->setWhatsThis(what));
}

void PythonQtWrapper_QAction::setIconVisibleInMenu(QAction* theWrappedObject, bool  visible)
{
  ( theWrappedObject->setIconVisibleInMenu(visible));
}

QActionGroup*  PythonQtWrapper_QAction::actionGroup(QAction* theWrappedObject) const
{
  return ( theWrappedObject->actionGroup());
}

void PythonQtWrapper_QAction::setMenuRole(QAction* theWrappedObject, QAction::MenuRole  menuRole)
{
  ( theWrappedObject->setMenuRole(menuRole));
}

QString  PythonQtWrapper_QAction::statusTip(QAction* theWrappedObject) const
{
  return ( theWrappedObject->statusTip());
}

void PythonQtWrapper_QAction::setShortcutContext(QAction* theWrappedObject, Qt::ShortcutContext  context)
{
  ( theWrappedObject->setShortcutContext(context));
}

QString  PythonQtWrapper_QAction::iconText(QAction* theWrappedObject) const
{
  return ( theWrappedObject->iconText());
}

void PythonQtWrapper_QAction::setAutoRepeat(QAction* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setAutoRepeat(arg__1));
}

bool  PythonQtWrapper_QAction::isChecked(QAction* theWrappedObject) const
{
  return ( theWrappedObject->isChecked());
}

void PythonQtWrapper_QAction::setStatusTip(QAction* theWrappedObject, const QString&  statusTip)
{
  ( theWrappedObject->setStatusTip(statusTip));
}

bool  PythonQtWrapper_QAction::showStatusText(QAction* theWrappedObject, QWidget*  widget)
{
  return ( theWrappedObject->showStatusText(widget));
}

QVariant  PythonQtWrapper_QAction::data(QAction* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

void PythonQtWrapper_QAction::setFont(QAction* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QAction::setShortcuts(QAction* theWrappedObject, QKeySequence::StandardKey  arg__1)
{
  ( theWrappedObject->setShortcuts(arg__1));
}

bool  PythonQtWrapper_QAction::isSeparator(QAction* theWrappedObject) const
{
  return ( theWrappedObject->isSeparator());
}

bool  PythonQtWrapper_QAction::autoRepeat(QAction* theWrappedObject) const
{
  return ( theWrappedObject->autoRepeat());
}

void PythonQtWrapper_QAction::setActionGroup(QAction* theWrappedObject, QActionGroup*  group)
{
  ( theWrappedObject->setActionGroup(group));
}

QFont  PythonQtWrapper_QAction::font(QAction* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

void PythonQtWrapper_QAction::setToolTip(QAction* theWrappedObject, const QString&  tip)
{
  ( theWrappedObject->setToolTip(tip));
}

void PythonQtWrapper_QAction::setShortcut(QAction* theWrappedObject, const QKeySequence&  shortcut)
{
  ( theWrappedObject->setShortcut(shortcut));
}

void PythonQtWrapper_QAction::activate(QAction* theWrappedObject, QAction::ActionEvent  event)
{
  ( theWrappedObject->activate(event));
}

QAction::MenuRole  PythonQtWrapper_QAction::menuRole(QAction* theWrappedObject) const
{
  return ( theWrappedObject->menuRole());
}

bool  PythonQtWrapper_QAction::event(QAction* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QAction*)theWrappedObject)->promoted_event(arg__1));
}

Qt::ShortcutContext  PythonQtWrapper_QAction::shortcutContext(QAction* theWrappedObject) const
{
  return ( theWrappedObject->shortcutContext());
}

void PythonQtWrapper_QAction::setMenu(QAction* theWrappedObject, QMenu*  menu)
{
  ( theWrappedObject->setMenu(menu));
}

QString  PythonQtWrapper_QAction::toolTip(QAction* theWrappedObject) const
{
  return ( theWrappedObject->toolTip());
}

QKeySequence  PythonQtWrapper_QAction::shortcut(QAction* theWrappedObject) const
{
  return ( theWrappedObject->shortcut());
}

bool  PythonQtWrapper_QAction::isCheckable(QAction* theWrappedObject) const
{
  return ( theWrappedObject->isCheckable());
}

QString  PythonQtWrapper_QAction::text(QAction* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

QList<QWidget* >  PythonQtWrapper_QAction::associatedWidgets(QAction* theWrappedObject) const
{
  return ( theWrappedObject->associatedWidgets());
}

void PythonQtWrapper_QAction::setIcon(QAction* theWrappedObject, const QIcon&  icon)
{
  ( theWrappedObject->setIcon(icon));
}

QMenu*  PythonQtWrapper_QAction::menu(QAction* theWrappedObject) const
{
  return ( theWrappedObject->menu());
}

void PythonQtWrapper_QAction::setCheckable(QAction* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setCheckable(arg__1));
}

bool  PythonQtWrapper_QAction::isIconVisibleInMenu(QAction* theWrappedObject) const
{
  return ( theWrappedObject->isIconVisibleInMenu());
}

