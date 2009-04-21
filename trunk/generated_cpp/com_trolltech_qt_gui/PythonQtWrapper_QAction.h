#ifndef PYTHONQTWRAPPER_QACTION_H
#define PYTHONQTWRAPPER_QACTION_H

#include <qaction.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtShell_QAction : public QAction
{
public:
    PythonQtShell_QAction(QObject*  parent):QAction(parent),_wrapper(NULL) {};
    PythonQtShell_QAction(const QIcon&  icon, const QString&  text, QObject*  parent):QAction(icon, text, parent),_wrapper(NULL) {};
    PythonQtShell_QAction(const QString&  text, QObject*  parent):QAction(text, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAction : public QAction
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QAction::event(arg__1); }
};

class PythonQtWrapper_QAction : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ActionEvent )
enum ActionEvent{
  Trigger = QAction::Trigger,   Hover = QAction::Hover};
public slots:
QAction* new_QAction(QObject*  parent);
QAction* new_QAction(const QIcon&  icon, const QString&  text, QObject*  parent);
QAction* new_QAction(const QString&  text, QObject*  parent);
void delete_QAction(QAction* obj) { delete obj; } 
   void setToolTip(QAction* theWrappedObject, const QString&  tip);
   QIcon  icon(QAction* theWrappedObject) const;
   Qt::ShortcutContext  shortcutContext(QAction* theWrappedObject) const;
   void setData(QAction* theWrappedObject, const QVariant&  var);
   QFont  font(QAction* theWrappedObject) const;
   bool  isEnabled(QAction* theWrappedObject) const;
   QKeySequence  shortcut(QAction* theWrappedObject) const;
   void setFont(QAction* theWrappedObject, const QFont&  font);
   QMenu*  menu(QAction* theWrappedObject) const;
   bool  autoRepeat(QAction* theWrappedObject) const;
   bool  showStatusText(QAction* theWrappedObject, QWidget*  widget = 0);
   QString  whatsThis(QAction* theWrappedObject) const;
   bool  isVisible(QAction* theWrappedObject) const;
   QAction::MenuRole  menuRole(QAction* theWrappedObject) const;
   QString  text(QAction* theWrappedObject) const;
   void setWhatsThis(QAction* theWrappedObject, const QString&  what);
   void setActionGroup(QAction* theWrappedObject, QActionGroup*  group);
   void setCheckable(QAction* theWrappedObject, bool  arg__1);
   void setText(QAction* theWrappedObject, const QString&  text);
   bool  isChecked(QAction* theWrappedObject) const;
   void setShortcuts(QAction* theWrappedObject, QKeySequence::StandardKey  arg__1);
   void setIconText(QAction* theWrappedObject, const QString&  text);
   QList<QKeySequence >  shortcuts(QAction* theWrappedObject) const;
   void setShortcuts(QAction* theWrappedObject, const QList<QKeySequence >&  shortcuts);
   void setShortcut(QAction* theWrappedObject, const QKeySequence&  shortcut);
   QString  toolTip(QAction* theWrappedObject) const;
   QString  statusTip(QAction* theWrappedObject) const;
   QActionGroup*  actionGroup(QAction* theWrappedObject) const;
   void setMenu(QAction* theWrappedObject, QMenu*  menu);
   void setMenuRole(QAction* theWrappedObject, QAction::MenuRole  menuRole);
   QString  iconText(QAction* theWrappedObject) const;
   void setAutoRepeat(QAction* theWrappedObject, bool  arg__1);
   bool  isCheckable(QAction* theWrappedObject) const;
   void setShortcutContext(QAction* theWrappedObject, Qt::ShortcutContext  context);
   void setIconVisibleInMenu(QAction* theWrappedObject, bool  visible);
   void activate(QAction* theWrappedObject, QAction::ActionEvent  event);
   bool  event(QAction* theWrappedObject, QEvent*  arg__1);
   QList<QWidget* >  associatedWidgets(QAction* theWrappedObject) const;
   void setStatusTip(QAction* theWrappedObject, const QString&  statusTip);
   bool  isIconVisibleInMenu(QAction* theWrappedObject) const;
   QVariant  data(QAction* theWrappedObject) const;
   bool  isSeparator(QAction* theWrappedObject) const;
   QWidget*  parentWidget(QAction* theWrappedObject) const;
   void setSeparator(QAction* theWrappedObject, bool  b);
   void setIcon(QAction* theWrappedObject, const QIcon&  icon);
};

#endif // PYTHONQTWRAPPER_QACTION_H
