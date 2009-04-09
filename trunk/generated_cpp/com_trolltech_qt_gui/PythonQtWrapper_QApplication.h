#ifndef PYTHONQTWRAPPER_QAPPLICATION_H
#define PYTHONQTWRAPPER_QAPPLICATION_H

#include <qapplication.h>
#include <QObject>

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
   QWidget*  static_QApplication_activeModalWidget();
   QWidget*  static_QApplication_activePopupWidget();
   QWidget*  static_QApplication_activeWindow();
   void static_QApplication_alert(QWidget*  widget, int  duration = 0);
   QList<QWidget* >  static_QApplication_allWidgets();
   void static_QApplication_beep();
   void static_QApplication_changeOverrideCursor(const QCursor&  arg__1);
   QClipboard*  static_QApplication_clipboard();
   int  static_QApplication_colorSpec();
   int  static_QApplication_cursorFlashTime();
   QDesktopWidget*  static_QApplication_desktop();
   bool  static_QApplication_desktopSettingsAware();
   int  static_QApplication_doubleClickInterval();
   int  static_QApplication_exec();
   QWidget*  static_QApplication_focusWidget();
   QFont  static_QApplication_font();
   QFont  static_QApplication_font(const QWidget*  arg__1);
   QSize  static_QApplication_globalStrut();
   QInputContext*  inputContext(QApplication* theWrappedObject) const;
   bool  static_QApplication_isEffectEnabled(Qt::UIEffect  arg__1);
   bool  static_QApplication_isLeftToRight();
   bool  static_QApplication_isRightToLeft();
   bool  isSessionRestored(QApplication* theWrappedObject) const;
   Qt::LayoutDirection  static_QApplication_keyboardInputDirection();
   int  static_QApplication_keyboardInputInterval();
   QLocale  static_QApplication_keyboardInputLocale();
   Qt::KeyboardModifiers  static_QApplication_keyboardModifiers();
   Qt::LayoutDirection  static_QApplication_layoutDirection();
   Qt::MouseButtons  static_QApplication_mouseButtons();
   bool  notify(QApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   QCursor*  static_QApplication_overrideCursor();
   QPalette  static_QApplication_palette();
   QPalette  static_QApplication_palette(const QWidget*  arg__1);
   bool  static_QApplication_quitOnLastWindowClosed();
   void static_QApplication_restoreOverrideCursor();
   QString  sessionId(QApplication* theWrappedObject) const;
   QString  sessionKey(QApplication* theWrappedObject) const;
   void static_QApplication_setActiveWindow(QWidget*  act);
   void static_QApplication_setColorSpec(int  arg__1);
   void static_QApplication_setCursorFlashTime(int  arg__1);
   void static_QApplication_setDesktopSettingsAware(bool  arg__1);
   void static_QApplication_setDoubleClickInterval(int  arg__1);
   void static_QApplication_setEffectEnabled(Qt::UIEffect  arg__1, bool  enable = true);
   void static_QApplication_setFont(const QFont&  arg__1, const char*  className = 0);
   void static_QApplication_setGlobalStrut(const QSize&  arg__1);
   void setInputContext(QApplication* theWrappedObject, QInputContext*  arg__1);
   void static_QApplication_setKeyboardInputInterval(int  arg__1);
   void static_QApplication_setLayoutDirection(Qt::LayoutDirection  direction);
   void static_QApplication_setOverrideCursor(const QCursor&  arg__1);
   void static_QApplication_setPalette(const QPalette&  arg__1, const char*  className = 0);
   void static_QApplication_setQuitOnLastWindowClosed(bool  quit);
   void static_QApplication_setStartDragDistance(int  l);
   void static_QApplication_setStartDragTime(int  ms);
   void static_QApplication_setStyle(QStyle*  arg__1);
   QStyle*  static_QApplication_setStyle(const QString&  arg__1);
   void static_QApplication_setWheelScrollLines(int  arg__1);
   void static_QApplication_setWindowIcon(const QIcon&  icon);
   int  static_QApplication_startDragDistance();
   int  static_QApplication_startDragTime();
   QStyle*  static_QApplication_style();
   QString  styleSheet(QApplication* theWrappedObject) const;
   void static_QApplication_syncX();
   QWidget*  static_QApplication_topLevelAt(const QPoint&  p);
   QWidget*  static_QApplication_topLevelAt(int  x, int  y);
   QList<QWidget* >  static_QApplication_topLevelWidgets();
   QApplication::Type  static_QApplication_type();
   int  static_QApplication_wheelScrollLines();
   QWidget*  static_QApplication_widgetAt(const QPoint&  p);
   QWidget*  static_QApplication_widgetAt(int  x, int  y);
   QIcon  static_QApplication_windowIcon();
};

#endif // PYTHONQTWRAPPER_QAPPLICATION_H
