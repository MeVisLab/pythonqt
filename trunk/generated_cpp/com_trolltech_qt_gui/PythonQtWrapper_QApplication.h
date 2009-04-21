#ifndef PYTHONQTWRAPPER_QAPPLICATION_H
#define PYTHONQTWRAPPER_QAPPLICATION_H

#include <qapplication.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtShell_QApplication : public QApplication
{
public:

virtual void childEvent(QChildEvent*  arg__1);
virtual void commitData(QSessionManager&  sm);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  notify(QObject*  arg__1, QEvent*  arg__2);
virtual void saveState(QSessionManager&  sm);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QApplication : public QApplication
{ public:
inline bool  promoted_notify(QObject*  arg__1, QEvent*  arg__2) { return QApplication::notify(arg__1, arg__2); }
inline bool  promoted_event(QEvent*  arg__1) { return QApplication::event(arg__1); }
};

class PythonQtWrapper_QApplication : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type ColorSpec )
enum Type{
  Tty = QApplication::Tty,   GuiClient = QApplication::GuiClient,   GuiServer = QApplication::GuiServer};
enum ColorSpec{
  NormalColor = QApplication::NormalColor,   CustomColor = QApplication::CustomColor,   ManyColor = QApplication::ManyColor};
public slots:
void delete_QApplication(QApplication* obj) { delete obj; } 
   void static_QApplication_restoreOverrideCursor();
   QString  sessionId(QApplication* theWrappedObject) const;
   int  static_QApplication_doubleClickInterval();
   void static_QApplication_setDoubleClickInterval(int  arg__1);
   void static_QApplication_setCursorFlashTime(int  arg__1);
   bool  static_QApplication_isRightToLeft();
   QString  styleSheet(QApplication* theWrappedObject) const;
   QWidget*  static_QApplication_topLevelAt(const QPoint&  p);
   void static_QApplication_setActiveWindow(QWidget*  act);
   bool  notify(QApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   Qt::MouseButtons  static_QApplication_mouseButtons();
   void setInputContext(QApplication* theWrappedObject, QInputContext*  arg__1);
   void static_QApplication_setStartDragTime(int  ms);
   void static_QApplication_setColorSpec(int  arg__1);
   QWidget*  static_QApplication_activeModalWidget();
   QSize  static_QApplication_globalStrut();
   void static_QApplication_setFont(const QFont&  arg__1, const char*  className = 0);
   QInputContext*  inputContext(QApplication* theWrappedObject) const;
   int  static_QApplication_keyboardInputInterval();
   int  static_QApplication_exec();
   void static_QApplication_syncX();
   QFont  static_QApplication_font();
   bool  static_QApplication_desktopSettingsAware();
   int  static_QApplication_startDragTime();
   void static_QApplication_setEffectEnabled(Qt::UIEffect  arg__1, bool  enable = true);
   bool  isSessionRestored(QApplication* theWrappedObject) const;
   bool  static_QApplication_isEffectEnabled(Qt::UIEffect  arg__1);
   int  static_QApplication_wheelScrollLines();
   void static_QApplication_setOverrideCursor(const QCursor&  arg__1);
   void static_QApplication_setPalette(const QPalette&  arg__1, const char*  className = 0);
   void static_QApplication_changeOverrideCursor(const QCursor&  arg__1);
   QWidget*  static_QApplication_activePopupWidget();
   QString  sessionKey(QApplication* theWrappedObject) const;
   QLocale  static_QApplication_keyboardInputLocale();
   void static_QApplication_setKeyboardInputInterval(int  arg__1);
   bool  static_QApplication_isLeftToRight();
   QWidget*  static_QApplication_activeWindow();
   bool  event(QApplication* theWrappedObject, QEvent*  arg__1);
   QClipboard*  static_QApplication_clipboard();
   QList<QWidget* >  static_QApplication_allWidgets();
   void static_QApplication_setWheelScrollLines(int  arg__1);
   QApplication::Type  static_QApplication_type();
   int  static_QApplication_cursorFlashTime();
   QWidget*  static_QApplication_focusWidget();
   void static_QApplication_setStartDragDistance(int  l);
   QStyle*  static_QApplication_setStyle(const QString&  arg__1);
   void static_QApplication_setWindowIcon(const QIcon&  icon);
   Qt::LayoutDirection  static_QApplication_keyboardInputDirection();
   void static_QApplication_alert(QWidget*  widget, int  duration = 0);
   void static_QApplication_beep();
   QFont  static_QApplication_font(const QWidget*  arg__1);
   QWidget*  static_QApplication_widgetAt(const QPoint&  p);
   QList<QWidget* >  static_QApplication_topLevelWidgets();
   void static_QApplication_setGlobalStrut(const QSize&  arg__1);
   bool  static_QApplication_quitOnLastWindowClosed();
   void static_QApplication_setLayoutDirection(Qt::LayoutDirection  direction);
   QCursor*  static_QApplication_overrideCursor();
   Qt::KeyboardModifiers  static_QApplication_keyboardModifiers();
   QPalette  static_QApplication_palette(const QWidget*  arg__1);
   QStyle*  static_QApplication_style();
   Qt::LayoutDirection  static_QApplication_layoutDirection();
   void static_QApplication_setQuitOnLastWindowClosed(bool  quit);
   QWidget*  static_QApplication_topLevelAt(int  x, int  y);
   QPalette  static_QApplication_palette();
   int  static_QApplication_startDragDistance();
   QDesktopWidget*  static_QApplication_desktop();
   void static_QApplication_setStyle(QStyle*  arg__1);
   void static_QApplication_setDesktopSettingsAware(bool  arg__1);
   QWidget*  static_QApplication_widgetAt(int  x, int  y);
   QIcon  static_QApplication_windowIcon();
   int  static_QApplication_colorSpec();
};

#endif // PYTHONQTWRAPPER_QAPPLICATION_H
