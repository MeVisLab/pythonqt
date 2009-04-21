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
inline bool  event(QEvent*  arg__1) { return QApplication::event(arg__1); }
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
   bool  static_QApplication_desktopSettingsAware();
   QWidget*  static_QApplication_activeModalWidget();
   QPalette  static_QApplication_palette();
   void static_QApplication_setEffectEnabled(Qt::UIEffect  arg__1, bool  enable = true);
   void static_QApplication_setKeyboardInputInterval(int  arg__1);
   QIcon  static_QApplication_windowIcon();
   void static_QApplication_beep();
   void static_QApplication_changeOverrideCursor(const QCursor&  arg__1);
   QWidget*  static_QApplication_widgetAt(int  x, int  y);
   int  static_QApplication_doubleClickInterval();
   int  static_QApplication_startDragDistance();
   QWidget*  static_QApplication_activeWindow();
   void static_QApplication_setWindowIcon(const QIcon&  icon);
   void static_QApplication_syncX();
   QWidget*  static_QApplication_topLevelAt(int  x, int  y);
   QStyle*  static_QApplication_setStyle(const QString&  arg__1);
   QString  sessionKey(QApplication* theWrappedObject) const;
   QLocale  static_QApplication_keyboardInputLocale();
   void static_QApplication_setGlobalStrut(const QSize&  arg__1);
   bool  event(QApplication* theWrappedObject, QEvent*  arg__1);
   QFont  static_QApplication_font(const QWidget*  arg__1);
   QWidget*  static_QApplication_topLevelAt(const QPoint&  p);
   bool  static_QApplication_quitOnLastWindowClosed();
   QWidget*  static_QApplication_activePopupWidget();
   void static_QApplication_setLayoutDirection(Qt::LayoutDirection  direction);
   QCursor*  static_QApplication_overrideCursor();
   void static_QApplication_setCursorFlashTime(int  arg__1);
   QList<QWidget* >  static_QApplication_allWidgets();
   Qt::LayoutDirection  static_QApplication_layoutDirection();
   Qt::KeyboardModifiers  static_QApplication_keyboardModifiers();
   void static_QApplication_setQuitOnLastWindowClosed(bool  quit);
   void static_QApplication_alert(QWidget*  widget, int  duration = 0);
   void static_QApplication_setColorSpec(int  arg__1);
   QWidget*  static_QApplication_widgetAt(const QPoint&  p);
   bool  static_QApplication_isLeftToRight();
   QApplication::Type  static_QApplication_type();
   int  static_QApplication_startDragTime();
   void setInputContext(QApplication* theWrappedObject, QInputContext*  arg__1);
   QFont  static_QApplication_font();
   void static_QApplication_setDoubleClickInterval(int  arg__1);
   bool  static_QApplication_isEffectEnabled(Qt::UIEffect  arg__1);
   QDesktopWidget*  static_QApplication_desktop();
   int  static_QApplication_keyboardInputInterval();
   QWidget*  static_QApplication_focusWidget();
   bool  notify(QApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void static_QApplication_setOverrideCursor(const QCursor&  arg__1);
   int  static_QApplication_wheelScrollLines();
   QPalette  static_QApplication_palette(const QWidget*  arg__1);
   void static_QApplication_setStyle(QStyle*  arg__1);
   bool  isSessionRestored(QApplication* theWrappedObject) const;
   void static_QApplication_setStartDragDistance(int  l);
   void static_QApplication_setStartDragTime(int  ms);
   bool  static_QApplication_isRightToLeft();
   QString  styleSheet(QApplication* theWrappedObject) const;
   int  static_QApplication_cursorFlashTime();
   Qt::MouseButtons  static_QApplication_mouseButtons();
   void static_QApplication_setFont(const QFont&  arg__1, const char*  className = 0);
   QClipboard*  static_QApplication_clipboard();
   void static_QApplication_setWheelScrollLines(int  arg__1);
   void static_QApplication_restoreOverrideCursor();
   QStyle*  static_QApplication_style();
   void static_QApplication_setPalette(const QPalette&  arg__1, const char*  className = 0);
   QSize  static_QApplication_globalStrut();
   void static_QApplication_setActiveWindow(QWidget*  act);
   void static_QApplication_setDesktopSettingsAware(bool  arg__1);
   int  static_QApplication_colorSpec();
   Qt::LayoutDirection  static_QApplication_keyboardInputDirection();
   QList<QWidget* >  static_QApplication_topLevelWidgets();
   QString  sessionId(QApplication* theWrappedObject) const;
   int  static_QApplication_exec();
   QInputContext*  inputContext(QApplication* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QAPPLICATION_H
