#include "PythonQtWrapper_QDataWidgetMapper.h"

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatawidgetmapper.h>
#include <qlist.h>
#include <qobject.h>
#include <qwidget.h>

QDataWidgetMapper* PythonQtWrapper_QDataWidgetMapper::new_QDataWidgetMapper(QObject*  parent)
{ 
return new QDataWidgetMapper(parent); }

void PythonQtWrapper_QDataWidgetMapper::addMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget, int  section)
{
theWrappedObject->addMapping(widget, section);
}

void PythonQtWrapper_QDataWidgetMapper::addMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget, int  section, const QByteArray&  propertyName)
{
theWrappedObject->addMapping(widget, section, propertyName);
}

void PythonQtWrapper_QDataWidgetMapper::clearMapping(QDataWidgetMapper* theWrappedObject)
{
theWrappedObject->clearMapping();
}

int  PythonQtWrapper_QDataWidgetMapper::currentIndex(QDataWidgetMapper* theWrappedObject) const
{
return theWrappedObject->currentIndex();
}

QAbstractItemDelegate*  PythonQtWrapper_QDataWidgetMapper::itemDelegate(QDataWidgetMapper* theWrappedObject) const
{
return theWrappedObject->itemDelegate();
}

QByteArray  PythonQtWrapper_QDataWidgetMapper::mappedPropertyName(QDataWidgetMapper* theWrappedObject, QWidget*  widget) const
{
return theWrappedObject->mappedPropertyName(widget);
}

int  PythonQtWrapper_QDataWidgetMapper::mappedSection(QDataWidgetMapper* theWrappedObject, QWidget*  widget) const
{
return theWrappedObject->mappedSection(widget);
}

QWidget*  PythonQtWrapper_QDataWidgetMapper::mappedWidgetAt(QDataWidgetMapper* theWrappedObject, int  section) const
{
return theWrappedObject->mappedWidgetAt(section);
}

QAbstractItemModel*  PythonQtWrapper_QDataWidgetMapper::model(QDataWidgetMapper* theWrappedObject) const
{
return theWrappedObject->model();
}

Qt::Orientation  PythonQtWrapper_QDataWidgetMapper::orientation(QDataWidgetMapper* theWrappedObject) const
{
return theWrappedObject->orientation();
}

void PythonQtWrapper_QDataWidgetMapper::removeMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget)
{
theWrappedObject->removeMapping(widget);
}

QModelIndex  PythonQtWrapper_QDataWidgetMapper::rootIndex(QDataWidgetMapper* theWrappedObject) const
{
return theWrappedObject->rootIndex();
}

void PythonQtWrapper_QDataWidgetMapper::setItemDelegate(QDataWidgetMapper* theWrappedObject, QAbstractItemDelegate*  delegate)
{
theWrappedObject->setItemDelegate(delegate);
}

void PythonQtWrapper_QDataWidgetMapper::setModel(QDataWidgetMapper* theWrappedObject, QAbstractItemModel*  model)
{
theWrappedObject->setModel(model);
}

void PythonQtWrapper_QDataWidgetMapper::setOrientation(QDataWidgetMapper* theWrappedObject, Qt::Orientation  aOrientation)
{
theWrappedObject->setOrientation(aOrientation);
}

void PythonQtWrapper_QDataWidgetMapper::setRootIndex(QDataWidgetMapper* theWrappedObject, const QModelIndex&  index)
{
theWrappedObject->setRootIndex(index);
}

void PythonQtWrapper_QDataWidgetMapper::setSubmitPolicy(QDataWidgetMapper* theWrappedObject, QDataWidgetMapper::SubmitPolicy  policy)
{
theWrappedObject->setSubmitPolicy(policy);
}

QDataWidgetMapper::SubmitPolicy  PythonQtWrapper_QDataWidgetMapper::submitPolicy(QDataWidgetMapper* theWrappedObject) const
{
return theWrappedObject->submitPolicy();
}

