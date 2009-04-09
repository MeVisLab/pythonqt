#include "PythonQtWrapper_QButtonGroup.h"

#include <QVariant>
#include <qabstractbutton.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

QButtonGroup* PythonQtWrapper_QButtonGroup::new_QButtonGroup(QObject*  parent)
{ 
return new QButtonGroup(parent); }

void PythonQtWrapper_QButtonGroup::addButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1)
{
theWrappedObject->addButton(arg__1);
}

void PythonQtWrapper_QButtonGroup::addButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1, int  id)
{
theWrappedObject->addButton(arg__1, id);
}

QAbstractButton*  PythonQtWrapper_QButtonGroup::button(QButtonGroup* theWrappedObject, int  id) const
{
return theWrappedObject->button(id);
}

QList<QAbstractButton* >  PythonQtWrapper_QButtonGroup::buttons(QButtonGroup* theWrappedObject) const
{
return theWrappedObject->buttons();
}

QAbstractButton*  PythonQtWrapper_QButtonGroup::checkedButton(QButtonGroup* theWrappedObject) const
{
return theWrappedObject->checkedButton();
}

int  PythonQtWrapper_QButtonGroup::checkedId(QButtonGroup* theWrappedObject) const
{
return theWrappedObject->checkedId();
}

bool  PythonQtWrapper_QButtonGroup::exclusive(QButtonGroup* theWrappedObject) const
{
return theWrappedObject->exclusive();
}

int  PythonQtWrapper_QButtonGroup::id(QButtonGroup* theWrappedObject, QAbstractButton*  button) const
{
return theWrappedObject->id(button);
}

void PythonQtWrapper_QButtonGroup::removeButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1)
{
theWrappedObject->removeButton(arg__1);
}

void PythonQtWrapper_QButtonGroup::setExclusive(QButtonGroup* theWrappedObject, bool  arg__1)
{
theWrappedObject->setExclusive(arg__1);
}

void PythonQtWrapper_QButtonGroup::setId(QButtonGroup* theWrappedObject, QAbstractButton*  button, int  id)
{
theWrappedObject->setId(button, id);
}

