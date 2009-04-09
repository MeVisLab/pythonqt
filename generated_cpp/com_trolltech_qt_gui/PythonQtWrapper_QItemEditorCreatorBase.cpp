#include "PythonQtWrapper_QItemEditorCreatorBase.h"

#include <QVariant>
#include <qbytearray.h>
#include <qwidget.h>

QWidget*  PythonQtWrapper_QItemEditorCreatorBase::createWidget(QItemEditorCreatorBase* theWrappedObject, QWidget*  parent) const
{
return theWrappedObject->createWidget(parent);
}

QByteArray  PythonQtWrapper_QItemEditorCreatorBase::valuePropertyName(QItemEditorCreatorBase* theWrappedObject) const
{
return theWrappedObject->valuePropertyName();
}

