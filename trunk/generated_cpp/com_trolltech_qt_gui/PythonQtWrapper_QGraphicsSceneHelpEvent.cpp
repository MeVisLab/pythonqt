#include "PythonQtWrapper_QGraphicsSceneHelpEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qpoint.h>
#include <qwidget.h>

QGraphicsSceneHelpEvent* PythonQtWrapper_QGraphicsSceneHelpEvent::new_QGraphicsSceneHelpEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneHelpEvent(type); }

QPointF  PythonQtWrapper_QGraphicsSceneHelpEvent::scenePos(QGraphicsSceneHelpEvent* theWrappedObject) const
{
return  (*theWrappedObject).scenePos();
}

void PythonQtWrapper_QGraphicsSceneHelpEvent::setScreenPos(QGraphicsSceneHelpEvent* theWrappedObject, const QPoint&  pos)
{
 (*theWrappedObject).setScreenPos(pos);
}

void PythonQtWrapper_QGraphicsSceneHelpEvent::setScenePos(QGraphicsSceneHelpEvent* theWrappedObject, const QPointF&  pos)
{
 (*theWrappedObject).setScenePos(pos);
}

QPoint  PythonQtWrapper_QGraphicsSceneHelpEvent::screenPos(QGraphicsSceneHelpEvent* theWrappedObject) const
{
return  (*theWrappedObject).screenPos();
}

