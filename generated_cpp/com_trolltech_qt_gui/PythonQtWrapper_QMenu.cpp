#include "PythonQtWrapper_QMenu.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmenu.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

QMenu* PythonQtWrapper_QMenu::new_QMenu(QWidget*  parent)
{ 
return new QMenu(parent); }

QMenu* PythonQtWrapper_QMenu::new_QMenu(const QString&  title, QWidget*  parent)
{ 
return new QMenu(title, parent); }

QAction*  PythonQtWrapper_QMenu::actionAt(QMenu* theWrappedObject, const QPoint&  arg__1) const
{
return theWrappedObject->actionAt(arg__1);
}

QRect  PythonQtWrapper_QMenu::actionGeometry(QMenu* theWrappedObject, QAction*  arg__1) const
{
return theWrappedObject->actionGeometry(arg__1);
}

QAction*  PythonQtWrapper_QMenu::activeAction(QMenu* theWrappedObject) const
{
return theWrappedObject->activeAction();
}

QAction*  PythonQtWrapper_QMenu::addAction(QMenu* theWrappedObject, const QIcon&  icon, const QString&  text)
{
return theWrappedObject->addAction(icon, text);
}

QAction*  PythonQtWrapper_QMenu::addAction(QMenu* theWrappedObject, const QString&  text)
{
return theWrappedObject->addAction(text);
}

QAction*  PythonQtWrapper_QMenu::addMenu(QMenu* theWrappedObject, QMenu*  menu)
{
return theWrappedObject->addMenu(menu);
}

QMenu*  PythonQtWrapper_QMenu::addMenu(QMenu* theWrappedObject, const QIcon&  icon, const QString&  title)
{
return theWrappedObject->addMenu(icon, title);
}

QMenu*  PythonQtWrapper_QMenu::addMenu(QMenu* theWrappedObject, const QString&  title)
{
return theWrappedObject->addMenu(title);
}

QAction*  PythonQtWrapper_QMenu::addSeparator(QMenu* theWrappedObject)
{
return theWrappedObject->addSeparator();
}

void PythonQtWrapper_QMenu::clear(QMenu* theWrappedObject)
{
theWrappedObject->clear();
}

QAction*  PythonQtWrapper_QMenu::defaultAction(QMenu* theWrappedObject) const
{
return theWrappedObject->defaultAction();
}

QAction*  PythonQtWrapper_QMenu::exec(QMenu* theWrappedObject)
{
return theWrappedObject->exec();
}

QAction*  PythonQtWrapper_QMenu::static_QMenu_exec(QList<QAction* >  actions, const QPoint&  pos, QAction*  at)
{
return QMenu::exec(actions, pos, at);
}

QAction*  PythonQtWrapper_QMenu::exec(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at)
{
return theWrappedObject->exec(pos, at);
}

void PythonQtWrapper_QMenu::hideTearOffMenu(QMenu* theWrappedObject)
{
theWrappedObject->hideTearOffMenu();
}

QIcon  PythonQtWrapper_QMenu::icon(QMenu* theWrappedObject) const
{
return theWrappedObject->icon();
}

QAction*  PythonQtWrapper_QMenu::insertMenu(QMenu* theWrappedObject, QAction*  before, QMenu*  menu)
{
return theWrappedObject->insertMenu(before, menu);
}

QAction*  PythonQtWrapper_QMenu::insertSeparator(QMenu* theWrappedObject, QAction*  before)
{
return theWrappedObject->insertSeparator(before);
}

bool  PythonQtWrapper_QMenu::isEmpty(QMenu* theWrappedObject) const
{
return theWrappedObject->isEmpty();
}

bool  PythonQtWrapper_QMenu::isTearOffEnabled(QMenu* theWrappedObject) const
{
return theWrappedObject->isTearOffEnabled();
}

bool  PythonQtWrapper_QMenu::isTearOffMenuVisible(QMenu* theWrappedObject) const
{
return theWrappedObject->isTearOffMenuVisible();
}

QAction*  PythonQtWrapper_QMenu::menuAction(QMenu* theWrappedObject) const
{
return theWrappedObject->menuAction();
}

void PythonQtWrapper_QMenu::popup(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at)
{
theWrappedObject->popup(pos, at);
}

bool  PythonQtWrapper_QMenu::separatorsCollapsible(QMenu* theWrappedObject) const
{
return theWrappedObject->separatorsCollapsible();
}

void PythonQtWrapper_QMenu::setActiveAction(QMenu* theWrappedObject, QAction*  act)
{
theWrappedObject->setActiveAction(act);
}

void PythonQtWrapper_QMenu::setDefaultAction(QMenu* theWrappedObject, QAction*  arg__1)
{
theWrappedObject->setDefaultAction(arg__1);
}

void PythonQtWrapper_QMenu::setIcon(QMenu* theWrappedObject, const QIcon&  icon)
{
theWrappedObject->setIcon(icon);
}

void PythonQtWrapper_QMenu::setSeparatorsCollapsible(QMenu* theWrappedObject, bool  collapse)
{
theWrappedObject->setSeparatorsCollapsible(collapse);
}

void PythonQtWrapper_QMenu::setTearOffEnabled(QMenu* theWrappedObject, bool  arg__1)
{
theWrappedObject->setTearOffEnabled(arg__1);
}

void PythonQtWrapper_QMenu::setTitle(QMenu* theWrappedObject, const QString&  title)
{
theWrappedObject->setTitle(title);
}

QSize  PythonQtWrapper_QMenu::sizeHint(QMenu* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QString  PythonQtWrapper_QMenu::title(QMenu* theWrappedObject) const
{
return theWrappedObject->title();
}

