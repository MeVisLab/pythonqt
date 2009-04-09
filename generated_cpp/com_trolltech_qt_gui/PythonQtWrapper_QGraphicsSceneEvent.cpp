#include "PythonQtWrapper_QGraphicsSceneEvent.h"

#include <QVariant>
#include <qwidget.h>

QGraphicsSceneEvent* PythonQtWrapper_QGraphicsSceneEvent::new_QGraphicsSceneEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneEvent(type); }

QWidget*  PythonQtWrapper_QGraphicsSceneEvent::widget(QGraphicsSceneEvent* theWrappedObject) const
{
return theWrappedObject->widget();
}

