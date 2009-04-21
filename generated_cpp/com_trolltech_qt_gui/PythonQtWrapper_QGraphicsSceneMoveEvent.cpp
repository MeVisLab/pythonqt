#include "PythonQtWrapper_QGraphicsSceneMoveEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qpoint.h>
#include <qwidget.h>

QGraphicsSceneMoveEvent* PythonQtWrapper_QGraphicsSceneMoveEvent::new_QGraphicsSceneMoveEvent()
{ 
return new QGraphicsSceneMoveEvent(); }

void PythonQtWrapper_QGraphicsSceneMoveEvent::setOldPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos)
{
 theWrappedObject->setOldPos(pos);
}

QPointF  PythonQtWrapper_QGraphicsSceneMoveEvent::newPos(QGraphicsSceneMoveEvent* theWrappedObject) const
{
return  theWrappedObject->newPos();
}

void PythonQtWrapper_QGraphicsSceneMoveEvent::setNewPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos)
{
 theWrappedObject->setNewPos(pos);
}

QPointF  PythonQtWrapper_QGraphicsSceneMoveEvent::oldPos(QGraphicsSceneMoveEvent* theWrappedObject) const
{
return  theWrappedObject->oldPos();
}

