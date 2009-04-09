#include "PythonQtWrapper_QApplication.h"

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

QWidget*  PythonQtWrapper_QApplication::static_QApplication_activeModalWidget()
{
return QApplication::activeModalWidget();
}

QWidget*  PythonQtWrapper_QApplication::static_QApplication_activePopupWidget()
{
return QApplication::activePopupWidget();
}

QWidget*  PythonQtWrapper_QApplication::static_QApplication_activeWindow()
{
return QApplication::activeWindow();
}

void PythonQtWrapper_QApplication::static_QApplication_alert(QWidget*  widget, int  duration)
{
QApplication::alert(widget, duration);
}

QList<QWidget* >  PythonQtWrapper_QApplication::static_QApplication_allWidgets()
{
return QApplication::allWidgets();
}

void PythonQtWrapper_QApplication::static_QApplication_beep()
{
QApplication::beep();
}

void PythonQtWrapper_QApplication::static_QApplication_changeOverrideCursor(const QCursor&  arg__1)
{
QApplication::changeOverrideCursor(arg__1);
}

QClipboard*  PythonQtWrapper_QApplication::static_QApplication_clipboard()
{
return QApplication::clipboard();
}

int  PythonQtWrapper_QApplication::static_QApplication_colorSpec()
{
return QApplication::colorSpec();
}

int  PythonQtWrapper_QApplication::static_QApplication_cursorFlashTime()
{
return QApplication::cursorFlashTime();
}

QDesktopWidget*  PythonQtWrapper_QApplication::static_QApplication_desktop()
{
return QApplication::desktop();
}

bool  PythonQtWrapper_QApplication::static_QApplication_desktopSettingsAware()
{
return QApplication::desktopSettingsAware();
}

int  PythonQtWrapper_QApplication::static_QApplication_doubleClickInterval()
{
return QApplication::doubleClickInterval();
}

int  PythonQtWrapper_QApplication::static_QApplication_exec()
{
return QApplication::exec();
}

QWidget*  PythonQtWrapper_QApplication::static_QApplication_focusWidget()
{
return QApplication::focusWidget();
}

QFont  PythonQtWrapper_QApplication::static_QApplication_font()
{
return QApplication::font();
}

QFont  PythonQtWrapper_QApplication::static_QApplication_font(const QWidget*  arg__1)
{
return QApplication::font(arg__1);
}

QSize  PythonQtWrapper_QApplication::static_QApplication_globalStrut()
{
return QApplication::globalStrut();
}

QInputContext*  PythonQtWrapper_QApplication::inputContext(QApplication* theWrappedObject) const
{
return theWrappedObject->inputContext();
}

bool  PythonQtWrapper_QApplication::static_QApplication_isEffectEnabled(Qt::UIEffect  arg__1)
{
return QApplication::isEffectEnabled(arg__1);
}

bool  PythonQtWrapper_QApplication::static_QApplication_isLeftToRight()
{
return QApplication::isLeftToRight();
}

bool  PythonQtWrapper_QApplication::static_QApplication_isRightToLeft()
{
return QApplication::isRightToLeft();
}

bool  PythonQtWrapper_QApplication::isSessionRestored(QApplication* theWrappedObject) const
{
return theWrappedObject->isSessionRestored();
}

Qt::LayoutDirection  PythonQtWrapper_QApplication::static_QApplication_keyboardInputDirection()
{
return QApplication::keyboardInputDirection();
}

int  PythonQtWrapper_QApplication::static_QApplication_keyboardInputInterval()
{
return QApplication::keyboardInputInterval();
}

QLocale  PythonQtWrapper_QApplication::static_QApplication_keyboardInputLocale()
{
return QApplication::keyboardInputLocale();
}

Qt::KeyboardModifiers  PythonQtWrapper_QApplication::static_QApplication_keyboardModifiers()
{
return QApplication::keyboardModifiers();
}

Qt::LayoutDirection  PythonQtWrapper_QApplication::static_QApplication_layoutDirection()
{
return QApplication::layoutDirection();
}

Qt::MouseButtons  PythonQtWrapper_QApplication::static_QApplication_mouseButtons()
{
return QApplication::mouseButtons();
}

bool  PythonQtWrapper_QApplication::notify(QApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2)
{
return theWrappedObject->notify(arg__1, arg__2);
}

QCursor*  PythonQtWrapper_QApplication::static_QApplication_overrideCursor()
{
return QApplication::overrideCursor();
}

QPalette  PythonQtWrapper_QApplication::static_QApplication_palette()
{
return QApplication::palette();
}

QPalette  PythonQtWrapper_QApplication::static_QApplication_palette(const QWidget*  arg__1)
{
return QApplication::palette(arg__1);
}

bool  PythonQtWrapper_QApplication::static_QApplication_quitOnLastWindowClosed()
{
return QApplication::quitOnLastWindowClosed();
}

void PythonQtWrapper_QApplication::static_QApplication_restoreOverrideCursor()
{
QApplication::restoreOverrideCursor();
}

QString  PythonQtWrapper_QApplication::sessionId(QApplication* theWrappedObject) const
{
return theWrappedObject->sessionId();
}

QString  PythonQtWrapper_QApplication::sessionKey(QApplication* theWrappedObject) const
{
return theWrappedObject->sessionKey();
}

void PythonQtWrapper_QApplication::static_QApplication_setActiveWindow(QWidget*  act)
{
QApplication::setActiveWindow(act);
}

void PythonQtWrapper_QApplication::static_QApplication_setColorSpec(int  arg__1)
{
QApplication::setColorSpec(arg__1);
}

void PythonQtWrapper_QApplication::static_QApplication_setCursorFlashTime(int  arg__1)
{
QApplication::setCursorFlashTime(arg__1);
}

void PythonQtWrapper_QApplication::static_QApplication_setDesktopSettingsAware(bool  arg__1)
{
QApplication::setDesktopSettingsAware(arg__1);
}

void PythonQtWrapper_QApplication::static_QApplication_setDoubleClickInterval(int  arg__1)
{
QApplication::setDoubleClickInterval(arg__1);
}

void PythonQtWrapper_QApplication::static_QApplication_setEffectEnabled(Qt::UIEffect  arg__1, bool  enable)
{
QApplication::setEffectEnabled(arg__1, enable);
}

void PythonQtWrapper_QApplication::static_QApplication_setFont(const QFont&  arg__1, const char*  className)
{
QApplication::setFont(arg__1, className);
}

void PythonQtWrapper_QApplication::static_QApplication_setGlobalStrut(const QSize&  arg__1)
{
QApplication::setGlobalStrut(arg__1);
}

void PythonQtWrapper_QApplication::setInputContext(QApplication* theWrappedObject, QInputContext*  arg__1)
{
theWrappedObject->setInputContext(arg__1);
}

void PythonQtWrapper_QApplication::static_QApplication_setKeyboardInputInterval(int  arg__1)
{
QApplication::setKeyboardInputInterval(arg__1);
}

void PythonQtWrapper_QApplication::static_QApplication_setLayoutDirection(Qt::LayoutDirection  direction)
{
QApplication::setLayoutDirection(direction);
}

void PythonQtWrapper_QApplication::static_QApplication_setOverrideCursor(const QCursor&  arg__1)
{
QApplication::setOverrideCursor(arg__1);
}

void PythonQtWrapper_QApplication::static_QApplication_setPalette(const QPalette&  arg__1, const char*  className)
{
QApplication::setPalette(arg__1, className);
}

void PythonQtWrapper_QApplication::static_QApplication_setQuitOnLastWindowClosed(bool  quit)
{
QApplication::setQuitOnLastWindowClosed(quit);
}

void PythonQtWrapper_QApplication::static_QApplication_setStartDragDistance(int  l)
{
QApplication::setStartDragDistance(l);
}

void PythonQtWrapper_QApplication::static_QApplication_setStartDragTime(int  ms)
{
QApplication::setStartDragTime(ms);
}

void PythonQtWrapper_QApplication::static_QApplication_setStyle(QStyle*  arg__1)
{
QApplication::setStyle(arg__1);
}

QStyle*  PythonQtWrapper_QApplication::static_QApplication_setStyle(const QString&  arg__1)
{
return QApplication::setStyle(arg__1);
}

void PythonQtWrapper_QApplication::static_QApplication_setWheelScrollLines(int  arg__1)
{
QApplication::setWheelScrollLines(arg__1);
}

void PythonQtWrapper_QApplication::static_QApplication_setWindowIcon(const QIcon&  icon)
{
QApplication::setWindowIcon(icon);
}

int  PythonQtWrapper_QApplication::static_QApplication_startDragDistance()
{
return QApplication::startDragDistance();
}

int  PythonQtWrapper_QApplication::static_QApplication_startDragTime()
{
return QApplication::startDragTime();
}

QStyle*  PythonQtWrapper_QApplication::static_QApplication_style()
{
return QApplication::style();
}

QString  PythonQtWrapper_QApplication::styleSheet(QApplication* theWrappedObject) const
{
return theWrappedObject->styleSheet();
}

void PythonQtWrapper_QApplication::static_QApplication_syncX()
{
QApplication::syncX();
}

QWidget*  PythonQtWrapper_QApplication::static_QApplication_topLevelAt(const QPoint&  p)
{
return QApplication::topLevelAt(p);
}

QWidget*  PythonQtWrapper_QApplication::static_QApplication_topLevelAt(int  x, int  y)
{
return QApplication::topLevelAt(x, y);
}

QList<QWidget* >  PythonQtWrapper_QApplication::static_QApplication_topLevelWidgets()
{
return QApplication::topLevelWidgets();
}

QApplication::Type  PythonQtWrapper_QApplication::static_QApplication_type()
{
return QApplication::type();
}

int  PythonQtWrapper_QApplication::static_QApplication_wheelScrollLines()
{
return QApplication::wheelScrollLines();
}

QWidget*  PythonQtWrapper_QApplication::static_QApplication_widgetAt(const QPoint&  p)
{
return QApplication::widgetAt(p);
}

QWidget*  PythonQtWrapper_QApplication::static_QApplication_widgetAt(int  x, int  y)
{
return QApplication::widgetAt(x, y);
}

QIcon  PythonQtWrapper_QApplication::static_QApplication_windowIcon()
{
return QApplication::windowIcon();
}

