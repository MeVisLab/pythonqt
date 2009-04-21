#include "PythonQtWrapper_QApplication.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QBasicTimer>
#include <QFont>
#include <QFontMetrics>
#include <QIcon>
#include <QLocale>
#include <QPalette>
#include <QVariant>
#include <qapplication.h>
#include <qbytearray.h>
#include <qclipboard.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdesktopwidget.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qsessionmanager.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qtranslator.h>
#include <qwidget.h>

void PythonQtShell_QApplication::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QApplication::staticMetaObject,
      "childEvent(QApplication*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QApplication::childEvent(arg__1);
}
void PythonQtShell_QApplication::commitData(QSessionManager&  sm)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "commitData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QApplication::staticMetaObject,
      "commitData(QApplication*,QSessionManager& )");
    void* args[2] = {NULL, (void*)&sm};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QApplication::commitData(sm);
}
void PythonQtShell_QApplication::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QApplication::staticMetaObject,
      "customEvent(QApplication*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QApplication::customEvent(arg__1);
}
bool  PythonQtShell_QApplication::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QApplication::staticMetaObject,
      "event(QApplication*,QEvent* )");
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
  return QApplication::event(arg__1);
}
bool  PythonQtShell_QApplication::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QApplication::staticMetaObject,
      "eventFilter(QApplication*,QObject* ,QEvent* )");
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
  return QApplication::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QApplication::notify(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "notify");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QApplication::staticMetaObject,
      "notify(QApplication*,QObject* ,QEvent* )");
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
  return QApplication::notify(arg__1, arg__2);
}
void PythonQtShell_QApplication::saveState(QSessionManager&  sm)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "saveState");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QApplication::staticMetaObject,
      "saveState(QApplication*,QSessionManager& )");
    void* args[2] = {NULL, (void*)&sm};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QApplication::saveState(sm);
}
void PythonQtShell_QApplication::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QApplication::staticMetaObject,
      "timerEvent(QApplication*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QApplication::timerEvent(arg__1);
}
void PythonQtWrapper_QApplication::static_QApplication_restoreOverrideCursor()
{
QApplication::restoreOverrideCursor();
}

QString  PythonQtWrapper_QApplication::sessionId(QApplication* theWrappedObject) const
{
return  theWrappedObject->sessionId();
}

int  PythonQtWrapper_QApplication::static_QApplication_doubleClickInterval()
{
return QApplication::doubleClickInterval();
}

void PythonQtWrapper_QApplication::static_QApplication_setDoubleClickInterval(int  arg__1)
{
QApplication::setDoubleClickInterval(arg__1);
}

void PythonQtWrapper_QApplication::static_QApplication_setCursorFlashTime(int  arg__1)
{
QApplication::setCursorFlashTime(arg__1);
}

bool  PythonQtWrapper_QApplication::static_QApplication_isRightToLeft()
{
return QApplication::isRightToLeft();
}

QString  PythonQtWrapper_QApplication::styleSheet(QApplication* theWrappedObject) const
{
return  theWrappedObject->styleSheet();
}

QWidget*  PythonQtWrapper_QApplication::static_QApplication_topLevelAt(const QPoint&  p)
{
return QApplication::topLevelAt(p);
}

void PythonQtWrapper_QApplication::static_QApplication_setActiveWindow(QWidget*  act)
{
QApplication::setActiveWindow(act);
}

bool  PythonQtWrapper_QApplication::notify(QApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2)
{
return  ((PythonQtPublicPromoter_QApplication*)theWrappedObject)->promoted_notify(arg__1, arg__2);
}

Qt::MouseButtons  PythonQtWrapper_QApplication::static_QApplication_mouseButtons()
{
return QApplication::mouseButtons();
}

void PythonQtWrapper_QApplication::setInputContext(QApplication* theWrappedObject, QInputContext*  arg__1)
{
 theWrappedObject->setInputContext(arg__1);
}

void PythonQtWrapper_QApplication::static_QApplication_setStartDragTime(int  ms)
{
QApplication::setStartDragTime(ms);
}

void PythonQtWrapper_QApplication::static_QApplication_setColorSpec(int  arg__1)
{
QApplication::setColorSpec(arg__1);
}

QWidget*  PythonQtWrapper_QApplication::static_QApplication_activeModalWidget()
{
return QApplication::activeModalWidget();
}

QSize  PythonQtWrapper_QApplication::static_QApplication_globalStrut()
{
return QApplication::globalStrut();
}

void PythonQtWrapper_QApplication::static_QApplication_setFont(const QFont&  arg__1, const char*  className)
{
QApplication::setFont(arg__1, className);
}

QInputContext*  PythonQtWrapper_QApplication::inputContext(QApplication* theWrappedObject) const
{
return  theWrappedObject->inputContext();
}

int  PythonQtWrapper_QApplication::static_QApplication_keyboardInputInterval()
{
return QApplication::keyboardInputInterval();
}

int  PythonQtWrapper_QApplication::static_QApplication_exec()
{
return QApplication::exec();
}

void PythonQtWrapper_QApplication::static_QApplication_syncX()
{
QApplication::syncX();
}

QFont  PythonQtWrapper_QApplication::static_QApplication_font()
{
return QApplication::font();
}

bool  PythonQtWrapper_QApplication::static_QApplication_desktopSettingsAware()
{
return QApplication::desktopSettingsAware();
}

int  PythonQtWrapper_QApplication::static_QApplication_startDragTime()
{
return QApplication::startDragTime();
}

void PythonQtWrapper_QApplication::static_QApplication_setEffectEnabled(Qt::UIEffect  arg__1, bool  enable)
{
QApplication::setEffectEnabled(arg__1, enable);
}

bool  PythonQtWrapper_QApplication::isSessionRestored(QApplication* theWrappedObject) const
{
return  theWrappedObject->isSessionRestored();
}

bool  PythonQtWrapper_QApplication::static_QApplication_isEffectEnabled(Qt::UIEffect  arg__1)
{
return QApplication::isEffectEnabled(arg__1);
}

int  PythonQtWrapper_QApplication::static_QApplication_wheelScrollLines()
{
return QApplication::wheelScrollLines();
}

void PythonQtWrapper_QApplication::static_QApplication_setOverrideCursor(const QCursor&  arg__1)
{
QApplication::setOverrideCursor(arg__1);
}

void PythonQtWrapper_QApplication::static_QApplication_setPalette(const QPalette&  arg__1, const char*  className)
{
QApplication::setPalette(arg__1, className);
}

void PythonQtWrapper_QApplication::static_QApplication_changeOverrideCursor(const QCursor&  arg__1)
{
QApplication::changeOverrideCursor(arg__1);
}

QWidget*  PythonQtWrapper_QApplication::static_QApplication_activePopupWidget()
{
return QApplication::activePopupWidget();
}

QString  PythonQtWrapper_QApplication::sessionKey(QApplication* theWrappedObject) const
{
return  theWrappedObject->sessionKey();
}

QLocale  PythonQtWrapper_QApplication::static_QApplication_keyboardInputLocale()
{
return QApplication::keyboardInputLocale();
}

void PythonQtWrapper_QApplication::static_QApplication_setKeyboardInputInterval(int  arg__1)
{
QApplication::setKeyboardInputInterval(arg__1);
}

bool  PythonQtWrapper_QApplication::static_QApplication_isLeftToRight()
{
return QApplication::isLeftToRight();
}

QWidget*  PythonQtWrapper_QApplication::static_QApplication_activeWindow()
{
return QApplication::activeWindow();
}

bool  PythonQtWrapper_QApplication::event(QApplication* theWrappedObject, QEvent*  arg__1)
{
return  ((PythonQtPublicPromoter_QApplication*)theWrappedObject)->promoted_event(arg__1);
}

QClipboard*  PythonQtWrapper_QApplication::static_QApplication_clipboard()
{
return QApplication::clipboard();
}

QList<QWidget* >  PythonQtWrapper_QApplication::static_QApplication_allWidgets()
{
return QApplication::allWidgets();
}

void PythonQtWrapper_QApplication::static_QApplication_setWheelScrollLines(int  arg__1)
{
QApplication::setWheelScrollLines(arg__1);
}

QApplication::Type  PythonQtWrapper_QApplication::static_QApplication_type()
{
return QApplication::type();
}

int  PythonQtWrapper_QApplication::static_QApplication_cursorFlashTime()
{
return QApplication::cursorFlashTime();
}

QWidget*  PythonQtWrapper_QApplication::static_QApplication_focusWidget()
{
return QApplication::focusWidget();
}

void PythonQtWrapper_QApplication::static_QApplication_setStartDragDistance(int  l)
{
QApplication::setStartDragDistance(l);
}

QStyle*  PythonQtWrapper_QApplication::static_QApplication_setStyle(const QString&  arg__1)
{
return QApplication::setStyle(arg__1);
}

void PythonQtWrapper_QApplication::static_QApplication_setWindowIcon(const QIcon&  icon)
{
QApplication::setWindowIcon(icon);
}

Qt::LayoutDirection  PythonQtWrapper_QApplication::static_QApplication_keyboardInputDirection()
{
return QApplication::keyboardInputDirection();
}

void PythonQtWrapper_QApplication::static_QApplication_alert(QWidget*  widget, int  duration)
{
QApplication::alert(widget, duration);
}

void PythonQtWrapper_QApplication::static_QApplication_beep()
{
QApplication::beep();
}

QFont  PythonQtWrapper_QApplication::static_QApplication_font(const QWidget*  arg__1)
{
return QApplication::font(arg__1);
}

QWidget*  PythonQtWrapper_QApplication::static_QApplication_widgetAt(const QPoint&  p)
{
return QApplication::widgetAt(p);
}

QList<QWidget* >  PythonQtWrapper_QApplication::static_QApplication_topLevelWidgets()
{
return QApplication::topLevelWidgets();
}

void PythonQtWrapper_QApplication::static_QApplication_setGlobalStrut(const QSize&  arg__1)
{
QApplication::setGlobalStrut(arg__1);
}

bool  PythonQtWrapper_QApplication::static_QApplication_quitOnLastWindowClosed()
{
return QApplication::quitOnLastWindowClosed();
}

void PythonQtWrapper_QApplication::static_QApplication_setLayoutDirection(Qt::LayoutDirection  direction)
{
QApplication::setLayoutDirection(direction);
}

QCursor*  PythonQtWrapper_QApplication::static_QApplication_overrideCursor()
{
return QApplication::overrideCursor();
}

Qt::KeyboardModifiers  PythonQtWrapper_QApplication::static_QApplication_keyboardModifiers()
{
return QApplication::keyboardModifiers();
}

QPalette  PythonQtWrapper_QApplication::static_QApplication_palette(const QWidget*  arg__1)
{
return QApplication::palette(arg__1);
}

QStyle*  PythonQtWrapper_QApplication::static_QApplication_style()
{
return QApplication::style();
}

Qt::LayoutDirection  PythonQtWrapper_QApplication::static_QApplication_layoutDirection()
{
return QApplication::layoutDirection();
}

void PythonQtWrapper_QApplication::static_QApplication_setQuitOnLastWindowClosed(bool  quit)
{
QApplication::setQuitOnLastWindowClosed(quit);
}

QWidget*  PythonQtWrapper_QApplication::static_QApplication_topLevelAt(int  x, int  y)
{
return QApplication::topLevelAt(x, y);
}

QPalette  PythonQtWrapper_QApplication::static_QApplication_palette()
{
return QApplication::palette();
}

int  PythonQtWrapper_QApplication::static_QApplication_startDragDistance()
{
return QApplication::startDragDistance();
}

QDesktopWidget*  PythonQtWrapper_QApplication::static_QApplication_desktop()
{
return QApplication::desktop();
}

void PythonQtWrapper_QApplication::static_QApplication_setStyle(QStyle*  arg__1)
{
QApplication::setStyle(arg__1);
}

void PythonQtWrapper_QApplication::static_QApplication_setDesktopSettingsAware(bool  arg__1)
{
QApplication::setDesktopSettingsAware(arg__1);
}

QWidget*  PythonQtWrapper_QApplication::static_QApplication_widgetAt(int  x, int  y)
{
return QApplication::widgetAt(x, y);
}

QIcon  PythonQtWrapper_QApplication::static_QApplication_windowIcon()
{
return QApplication::windowIcon();
}

int  PythonQtWrapper_QApplication::static_QApplication_colorSpec()
{
return QApplication::colorSpec();
}

