#include "PythonQtWrapper_QGraphicsSceneWheelEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qpoint.h>
#include <qwidget.h>

QGraphicsSceneWheelEvent* PythonQtWrapper_QGraphicsSceneWheelEvent::new_QGraphicsSceneWheelEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneWheelEvent(type); }

void PythonQtWrapper_QGraphicsSceneWheelEvent::setPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos)
{
 theWrappedObject->setPos(pos);
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setScenePos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos)
{
 theWrappedObject->setScenePos(pos);
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setButtons(QGraphicsSceneWheelEvent* theWrappedObject, Qt::MouseButtons  buttons)
{
 theWrappedObject->setButtons(buttons);
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setDelta(QGraphicsSceneWheelEvent* theWrappedObject, int  delta)
{
 theWrappedObject->setDelta(delta);
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setScreenPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPoint&  pos)
{
 theWrappedObject->setScreenPos(pos);
}

QPoint  PythonQtWrapper_QGraphicsSceneWheelEvent::screenPos(QGraphicsSceneWheelEvent* theWrappedObject) const
{
return  theWrappedObject->screenPos();
}

int  PythonQtWrapper_QGraphicsSceneWheelEvent::delta(QGraphicsSceneWheelEvent* theWrappedObject) const
{
return  theWrappedObject->delta();
}

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneWheelEvent::modifiers(QGraphicsSceneWheelEvent* theWrappedObject) const
{
return  theWrappedObject->modifiers();
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsSceneWheelEvent::buttons(QGraphicsSceneWheelEvent* theWrappedObject) const
{
return  theWrappedObject->buttons();
}

QPointF  PythonQtWrapper_QGraphicsSceneWheelEvent::pos(QGraphicsSceneWheelEvent* theWrappedObject) const
{
return  theWrappedObject->pos();
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setOrientation(QGraphicsSceneWheelEvent* theWrappedObject, Qt::Orientation  orientation)
{
 theWrappedObject->setOrientation(orientation);
}

QPointF  PythonQtWrapper_QGraphicsSceneWheelEvent::scenePos(QGraphicsSceneWheelEvent* theWrappedObject) const
{
return  theWrappedObject->scenePos();
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setModifiers(QGraphicsSceneWheelEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
 theWrappedObject->setModifiers(modifiers);
}

Qt::Orientation  PythonQtWrapper_QGraphicsSceneWheelEvent::orientation(QGraphicsSceneWheelEvent* theWrappedObject) const
{
return  theWrappedObject->orientation();
}

