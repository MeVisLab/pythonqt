#include "PythonQtWrapper_QAction.h"

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

QAction* PythonQtWrapper_QAction::new_QAction(QObject*  parent)
{ 
return new QAction(parent); }

QAction* PythonQtWrapper_QAction::new_QAction(const QIcon&  icon, const QString&  text, QObject*  parent)
{ 
return new QAction(icon, text, parent); }

QAction* PythonQtWrapper_QAction::new_QAction(const QString&  text, QObject*  parent)
{ 
return new QAction(text, parent); }

QActionGroup*  PythonQtWrapper_QAction::actionGroup(QAction* theWrappedObject) const
{
return theWrappedObject->actionGroup();
}

void PythonQtWrapper_QAction::activate(QAction* theWrappedObject, QAction::ActionEvent  event)
{
theWrappedObject->activate(event);
}

QList<QWidget* >  PythonQtWrapper_QAction::associatedWidgets(QAction* theWrappedObject) const
{
return theWrappedObject->associatedWidgets();
}

bool  PythonQtWrapper_QAction::autoRepeat(QAction* theWrappedObject) const
{
return theWrappedObject->autoRepeat();
}

QVariant  PythonQtWrapper_QAction::data(QAction* theWrappedObject) const
{
return theWrappedObject->data();
}

QFont  PythonQtWrapper_QAction::font(QAction* theWrappedObject) const
{
return theWrappedObject->font();
}

QIcon  PythonQtWrapper_QAction::icon(QAction* theWrappedObject) const
{
return theWrappedObject->icon();
}

QString  PythonQtWrapper_QAction::iconText(QAction* theWrappedObject) const
{
return theWrappedObject->iconText();
}

bool  PythonQtWrapper_QAction::isCheckable(QAction* theWrappedObject) const
{
return theWrappedObject->isCheckable();
}

bool  PythonQtWrapper_QAction::isChecked(QAction* theWrappedObject) const
{
return theWrappedObject->isChecked();
}

bool  PythonQtWrapper_QAction::isEnabled(QAction* theWrappedObject) const
{
return theWrappedObject->isEnabled();
}

bool  PythonQtWrapper_QAction::isIconVisibleInMenu(QAction* theWrappedObject) const
{
return theWrappedObject->isIconVisibleInMenu();
}

bool  PythonQtWrapper_QAction::isSeparator(QAction* theWrappedObject) const
{
return theWrappedObject->isSeparator();
}

bool  PythonQtWrapper_QAction::isVisible(QAction* theWrappedObject) const
{
return theWrappedObject->isVisible();
}

QMenu*  PythonQtWrapper_QAction::menu(QAction* theWrappedObject) const
{
return theWrappedObject->menu();
}

QAction::MenuRole  PythonQtWrapper_QAction::menuRole(QAction* theWrappedObject) const
{
return theWrappedObject->menuRole();
}

QWidget*  PythonQtWrapper_QAction::parentWidget(QAction* theWrappedObject) const
{
return theWrappedObject->parentWidget();
}

void PythonQtWrapper_QAction::setActionGroup(QAction* theWrappedObject, QActionGroup*  group)
{
theWrappedObject->setActionGroup(group);
}

void PythonQtWrapper_QAction::setAutoRepeat(QAction* theWrappedObject, bool  arg__1)
{
theWrappedObject->setAutoRepeat(arg__1);
}

void PythonQtWrapper_QAction::setCheckable(QAction* theWrappedObject, bool  arg__1)
{
theWrappedObject->setCheckable(arg__1);
}

void PythonQtWrapper_QAction::setData(QAction* theWrappedObject, const QVariant&  var)
{
theWrappedObject->setData(var);
}

void PythonQtWrapper_QAction::setFont(QAction* theWrappedObject, const QFont&  font)
{
theWrappedObject->setFont(font);
}

void PythonQtWrapper_QAction::setIcon(QAction* theWrappedObject, const QIcon&  icon)
{
theWrappedObject->setIcon(icon);
}

void PythonQtWrapper_QAction::setIconText(QAction* theWrappedObject, const QString&  text)
{
theWrappedObject->setIconText(text);
}

void PythonQtWrapper_QAction::setIconVisibleInMenu(QAction* theWrappedObject, bool  visible)
{
theWrappedObject->setIconVisibleInMenu(visible);
}

void PythonQtWrapper_QAction::setMenu(QAction* theWrappedObject, QMenu*  menu)
{
theWrappedObject->setMenu(menu);
}

void PythonQtWrapper_QAction::setMenuRole(QAction* theWrappedObject, QAction::MenuRole  menuRole)
{
theWrappedObject->setMenuRole(menuRole);
}

void PythonQtWrapper_QAction::setSeparator(QAction* theWrappedObject, bool  b)
{
theWrappedObject->setSeparator(b);
}

void PythonQtWrapper_QAction::setShortcut(QAction* theWrappedObject, const QKeySequence&  shortcut)
{
theWrappedObject->setShortcut(shortcut);
}

void PythonQtWrapper_QAction::setShortcutContext(QAction* theWrappedObject, Qt::ShortcutContext  context)
{
theWrappedObject->setShortcutContext(context);
}

void PythonQtWrapper_QAction::setShortcuts(QAction* theWrappedObject, QKeySequence::StandardKey  arg__1)
{
theWrappedObject->setShortcuts(arg__1);
}

void PythonQtWrapper_QAction::setShortcuts(QAction* theWrappedObject, const QList<QKeySequence >&  shortcuts)
{
theWrappedObject->setShortcuts(shortcuts);
}

void PythonQtWrapper_QAction::setStatusTip(QAction* theWrappedObject, const QString&  statusTip)
{
theWrappedObject->setStatusTip(statusTip);
}

void PythonQtWrapper_QAction::setText(QAction* theWrappedObject, const QString&  text)
{
theWrappedObject->setText(text);
}

void PythonQtWrapper_QAction::setToolTip(QAction* theWrappedObject, const QString&  tip)
{
theWrappedObject->setToolTip(tip);
}

void PythonQtWrapper_QAction::setWhatsThis(QAction* theWrappedObject, const QString&  what)
{
theWrappedObject->setWhatsThis(what);
}

QKeySequence  PythonQtWrapper_QAction::shortcut(QAction* theWrappedObject) const
{
return theWrappedObject->shortcut();
}

Qt::ShortcutContext  PythonQtWrapper_QAction::shortcutContext(QAction* theWrappedObject) const
{
return theWrappedObject->shortcutContext();
}

QList<QKeySequence >  PythonQtWrapper_QAction::shortcuts(QAction* theWrappedObject) const
{
return theWrappedObject->shortcuts();
}

bool  PythonQtWrapper_QAction::showStatusText(QAction* theWrappedObject, QWidget*  widget)
{
return theWrappedObject->showStatusText(widget);
}

QString  PythonQtWrapper_QAction::statusTip(QAction* theWrappedObject) const
{
return theWrappedObject->statusTip();
}

QString  PythonQtWrapper_QAction::text(QAction* theWrappedObject) const
{
return theWrappedObject->text();
}

QString  PythonQtWrapper_QAction::toolTip(QAction* theWrappedObject) const
{
return theWrappedObject->toolTip();
}

QString  PythonQtWrapper_QAction::whatsThis(QAction* theWrappedObject) const
{
return theWrappedObject->whatsThis();
}

