#ifndef PYTHONQTWRAPPER_QSYSTEMTRAYICON_H
#define PYTHONQTWRAPPER_QSYSTEMTRAYICON_H

#include <qsystemtrayicon.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qmenu.h>
#include <qobject.h>
#include <qrect.h>
#include <qsystemtrayicon.h>

class PythonQtShell_QSystemTrayIcon : public QSystemTrayIcon
{
public:
    PythonQtShell_QSystemTrayIcon(QObject*  parent = 0):QSystemTrayIcon(parent),_wrapper(NULL) {};
    PythonQtShell_QSystemTrayIcon(const QIcon&  icon, QObject*  parent = 0):QSystemTrayIcon(icon, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSystemTrayIcon : public QSystemTrayIcon
{ public:
inline bool  promoted_event(QEvent*  event) { return QSystemTrayIcon::event(event); }
};

class PythonQtWrapper_QSystemTrayIcon : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MessageIcon ActivationReason )
enum MessageIcon{
  NoIcon = QSystemTrayIcon::NoIcon,   Information = QSystemTrayIcon::Information,   Warning = QSystemTrayIcon::Warning,   Critical = QSystemTrayIcon::Critical};
enum ActivationReason{
  Unknown = QSystemTrayIcon::Unknown,   Context = QSystemTrayIcon::Context,   DoubleClick = QSystemTrayIcon::DoubleClick,   Trigger = QSystemTrayIcon::Trigger,   MiddleClick = QSystemTrayIcon::MiddleClick};
public slots:
QSystemTrayIcon* new_QSystemTrayIcon(QObject*  parent = 0);
QSystemTrayIcon* new_QSystemTrayIcon(const QIcon&  icon, QObject*  parent = 0);
void delete_QSystemTrayIcon(QSystemTrayIcon* obj) { delete obj; } 
   bool  static_QSystemTrayIcon_isSystemTrayAvailable();
   QIcon  icon(QSystemTrayIcon* theWrappedObject) const;
   bool  isVisible(QSystemTrayIcon* theWrappedObject) const;
   void showMessage(QSystemTrayIcon* theWrappedObject, const QString&  title, const QString&  msg, QSystemTrayIcon::MessageIcon  icon = QSystemTrayIcon::Information, int  msecs = 10000);
   void setIcon(QSystemTrayIcon* theWrappedObject, const QIcon&  icon);
   bool  static_QSystemTrayIcon_supportsMessages();
   void setContextMenu(QSystemTrayIcon* theWrappedObject, QMenu*  menu);
   QMenu*  contextMenu(QSystemTrayIcon* theWrappedObject) const;
   void setToolTip(QSystemTrayIcon* theWrappedObject, const QString&  tip);
   bool  event(QSystemTrayIcon* theWrappedObject, QEvent*  event);
   QRect  geometry(QSystemTrayIcon* theWrappedObject) const;
   QString  toolTip(QSystemTrayIcon* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSYSTEMTRAYICON_H
