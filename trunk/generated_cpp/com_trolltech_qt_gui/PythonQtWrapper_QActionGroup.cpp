#include "PythonQtWrapper_QActionGroup.h"

#include <QVariant>
#include <qaction.h>
#include <qactiongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qobject.h>

QActionGroup* PythonQtWrapper_QActionGroup::new_QActionGroup(QObject*  parent)
{ 
return new QActionGroup(parent); }

QList<QAction* >  PythonQtWrapper_QActionGroup::actions(QActionGroup* theWrappedObject) const
{
return theWrappedObject->actions();
}

QAction*  PythonQtWrapper_QActionGroup::addAction(QActionGroup* theWrappedObject, QAction*  a)
{
return theWrappedObject->addAction(a);
}

QAction*  PythonQtWrapper_QActionGroup::addAction(QActionGroup* theWrappedObject, const QIcon&  icon, const QString&  text)
{
return theWrappedObject->addAction(icon, text);
}

QAction*  PythonQtWrapper_QActionGroup::addAction(QActionGroup* theWrappedObject, const QString&  text)
{
return theWrappedObject->addAction(text);
}

QAction*  PythonQtWrapper_QActionGroup::checkedAction(QActionGroup* theWrappedObject) const
{
return theWrappedObject->checkedAction();
}

bool  PythonQtWrapper_QActionGroup::isEnabled(QActionGroup* theWrappedObject) const
{
return theWrappedObject->isEnabled();
}

bool  PythonQtWrapper_QActionGroup::isExclusive(QActionGroup* theWrappedObject) const
{
return theWrappedObject->isExclusive();
}

bool  PythonQtWrapper_QActionGroup::isVisible(QActionGroup* theWrappedObject) const
{
return theWrappedObject->isVisible();
}

void PythonQtWrapper_QActionGroup::removeAction(QActionGroup* theWrappedObject, QAction*  a)
{
theWrappedObject->removeAction(a);
}

