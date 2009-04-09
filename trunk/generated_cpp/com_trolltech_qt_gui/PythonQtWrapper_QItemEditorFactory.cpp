#include "PythonQtWrapper_QItemEditorFactory.h"

#include <QVariant>
#include <qbytearray.h>
#include <qitemeditorfactory.h>
#include <qwidget.h>

QItemEditorFactory* PythonQtWrapper_QItemEditorFactory::new_QItemEditorFactory()
{ 
return new QItemEditorFactory(); }

QWidget*  PythonQtWrapper_QItemEditorFactory::createEditor(QItemEditorFactory* theWrappedObject, QVariant::Type  type, QWidget*  parent) const
{
return theWrappedObject->createEditor(type, parent);
}

const QItemEditorFactory*  PythonQtWrapper_QItemEditorFactory::static_QItemEditorFactory_defaultFactory()
{
return QItemEditorFactory::defaultFactory();
}

void PythonQtWrapper_QItemEditorFactory::registerEditor(QItemEditorFactory* theWrappedObject, QVariant::Type  type, QItemEditorCreatorBase*  creator)
{
theWrappedObject->registerEditor(type, creator);
}

void PythonQtWrapper_QItemEditorFactory::static_QItemEditorFactory_setDefaultFactory(QItemEditorFactory*  factory)
{
QItemEditorFactory::setDefaultFactory(factory);
}

QByteArray  PythonQtWrapper_QItemEditorFactory::valuePropertyName(QItemEditorFactory* theWrappedObject, QVariant::Type  type) const
{
return theWrappedObject->valuePropertyName(type);
}

