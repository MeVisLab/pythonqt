#include "PythonQtWrapper_QGraphicsSceneMouseEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qpoint.h>
#include <qwidget.h>

QGraphicsSceneMouseEvent* PythonQtWrapper_QGraphicsSceneMouseEvent::new_QGraphicsSceneMouseEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneMouseEvent(type); }

Qt::MouseButton  PythonQtWrapper_QGraphicsSceneMouseEvent::button(QGraphicsSceneMouseEvent* theWrappedObject) const
{
return  (*theWrappedObject).button();
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos)
{
 (*theWrappedObject).setPos(pos);
}

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneMouseEvent::modifiers(QGraphicsSceneMouseEvent* theWrappedObject) const
{
return  (*theWrappedObject).modifiers();
}

QPoint  PythonQtWrapper_QGraphicsSceneMouseEvent::buttonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const
{
return  (*theWrappedObject).buttonDownScreenPos(button);
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::pos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
return  (*theWrappedObject).pos();
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos)
{
 (*theWrappedObject).setScreenPos(pos);
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::buttonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const
{
return  (*theWrappedObject).buttonDownPos(button);
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButton(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button)
{
 (*theWrappedObject).setButton(button);
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButtonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos)
{
 (*theWrappedObject).setButtonDownPos(button, pos);
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::lastPos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
return  (*theWrappedObject).lastPos();
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButtonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPoint&  pos)
{
 (*theWrappedObject).setButtonDownScreenPos(button, pos);
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButtons(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButtons  buttons)
{
 (*theWrappedObject).setButtons(buttons);
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setLastScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos)
{
 (*theWrappedObject).setLastScenePos(pos);
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setModifiers(QGraphicsSceneMouseEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
 (*theWrappedObject).setModifiers(modifiers);
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::lastScenePos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
return  (*theWrappedObject).lastScenePos();
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos)
{
 (*theWrappedObject).setScenePos(pos);
}

QPoint  PythonQtWrapper_QGraphicsSceneMouseEvent::screenPos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
return  (*theWrappedObject).screenPos();
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::buttonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const
{
return  (*theWrappedObject).buttonDownScenePos(button);
}

QPoint  PythonQtWrapper_QGraphicsSceneMouseEvent::lastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
return  (*theWrappedObject).lastScreenPos();
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::scenePos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
return  (*theWrappedObject).scenePos();
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsSceneMouseEvent::buttons(QGraphicsSceneMouseEvent* theWrappedObject) const
{
return  (*theWrappedObject).buttons();
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setLastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos)
{
 (*theWrappedObject).setLastScreenPos(pos);
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButtonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos)
{
 (*theWrappedObject).setButtonDownScenePos(button, pos);
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setLastPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos)
{
 (*theWrappedObject).setLastPos(pos);
}

