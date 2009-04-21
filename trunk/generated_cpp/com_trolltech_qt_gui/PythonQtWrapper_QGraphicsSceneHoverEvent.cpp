#include "PythonQtWrapper_QGraphicsSceneHoverEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qpoint.h>
#include <qwidget.h>

QGraphicsSceneHoverEvent* PythonQtWrapper_QGraphicsSceneHoverEvent::new_QGraphicsSceneHoverEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneHoverEvent(type); }

QPointF  PythonQtWrapper_QGraphicsSceneHoverEvent::lastPos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
return  theWrappedObject->lastPos();
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setLastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos)
{
 theWrappedObject->setLastScreenPos(pos);
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setLastPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos)
{
 theWrappedObject->setLastPos(pos);
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos)
{
 theWrappedObject->setPos(pos);
}

QPointF  PythonQtWrapper_QGraphicsSceneHoverEvent::lastScenePos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
return  theWrappedObject->lastScenePos();
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos)
{
 theWrappedObject->setScenePos(pos);
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setLastScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos)
{
 theWrappedObject->setLastScenePos(pos);
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos)
{
 theWrappedObject->setScreenPos(pos);
}

QPointF  PythonQtWrapper_QGraphicsSceneHoverEvent::scenePos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
return  theWrappedObject->scenePos();
}

QPoint  PythonQtWrapper_QGraphicsSceneHoverEvent::lastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
return  theWrappedObject->lastScreenPos();
}

QPoint  PythonQtWrapper_QGraphicsSceneHoverEvent::screenPos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
return  theWrappedObject->screenPos();
}

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneHoverEvent::modifiers(QGraphicsSceneHoverEvent* theWrappedObject) const
{
return  theWrappedObject->modifiers();
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setModifiers(QGraphicsSceneHoverEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
 theWrappedObject->setModifiers(modifiers);
}

QPointF  PythonQtWrapper_QGraphicsSceneHoverEvent::pos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
return  theWrappedObject->pos();
}

