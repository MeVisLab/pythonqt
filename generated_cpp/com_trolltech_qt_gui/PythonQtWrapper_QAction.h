#ifndef PYTHONQTWRAPPER_QACTION_H
#define PYTHONQTWRAPPER_QACTION_H

#include <qaction.h>
#include <QObject>

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
   QActionGroup*  actionGroup(QAction* theWrappedObject) const;
   void activate(QAction* theWrappedObject, QAction::ActionEvent  event);
   QList<QWidget* >  associatedWidgets(QAction* theWrappedObject) const;
   bool  autoRepeat(QAction* theWrappedObject) const;
   QVariant  data(QAction* theWrappedObject) const;
   QFont  font(QAction* theWrappedObject) const;
   QIcon  icon(QAction* theWrappedObject) const;
   QString  iconText(QAction* theWrappedObject) const;
   bool  isCheckable(QAction* theWrappedObject) const;
   bool  isChecked(QAction* theWrappedObject) const;
   bool  isEnabled(QAction* theWrappedObject) const;
   bool  isIconVisibleInMenu(QAction* theWrappedObject) const;
   bool  isSeparator(QAction* theWrappedObject) const;
   bool  isVisible(QAction* theWrappedObject) const;
   QMenu*  menu(QAction* theWrappedObject) const;
   QAction::MenuRole  menuRole(QAction* theWrappedObject) const;
   QWidget*  parentWidget(QAction* theWrappedObject) const;
   void setActionGroup(QAction* theWrappedObject, QActionGroup*  group);
   void setAutoRepeat(QAction* theWrappedObject, bool  arg__1);
   void setCheckable(QAction* theWrappedObject, bool  arg__1);
   void setData(QAction* theWrappedObject, const QVariant&  var);
   void setFont(QAction* theWrappedObject, const QFont&  font);
   void setIcon(QAction* theWrappedObject, const QIcon&  icon);
   void setIconText(QAction* theWrappedObject, const QString&  text);
   void setIconVisibleInMenu(QAction* theWrappedObject, bool  visible);
   void setMenu(QAction* theWrappedObject, QMenu*  menu);
   void setMenuRole(QAction* theWrappedObject, QAction::MenuRole  menuRole);
   void setSeparator(QAction* theWrappedObject, bool  b);
   void setShortcut(QAction* theWrappedObject, const QKeySequence&  shortcut);
   void setShortcutContext(QAction* theWrappedObject, Qt::ShortcutContext  context);
   void setShortcuts(QAction* theWrappedObject, QKeySequence::StandardKey  arg__1);
   void setShortcuts(QAction* theWrappedObject, const QList<QKeySequence >&  shortcuts);
   void setStatusTip(QAction* theWrappedObject, const QString&  statusTip);
   void setText(QAction* theWrappedObject, const QString&  text);
   void setToolTip(QAction* theWrappedObject, const QString&  tip);
   void setWhatsThis(QAction* theWrappedObject, const QString&  what);
   QKeySequence  shortcut(QAction* theWrappedObject) const;
   Qt::ShortcutContext  shortcutContext(QAction* theWrappedObject) const;
   QList<QKeySequence >  shortcuts(QAction* theWrappedObject) const;
   bool  showStatusText(QAction* theWrappedObject, QWidget*  widget = 0);
   QString  statusTip(QAction* theWrappedObject) const;
   QString  text(QAction* theWrappedObject) const;
   QString  toolTip(QAction* theWrappedObject) const;
   QString  whatsThis(QAction* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QACTION_H
