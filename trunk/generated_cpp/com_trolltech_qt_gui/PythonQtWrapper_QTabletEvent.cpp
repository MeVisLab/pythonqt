#include "PythonQtWrapper_QTabletEvent.h"

#include <QVariant>
#include <qpoint.h>

QTabletEvent* PythonQtWrapper_QTabletEvent::new_QTabletEvent(QEvent::Type  t, const QPoint&  pos, const QPoint&  globalPos, const QPointF&  hiResGlobalPos, int  device, int  pointerType, qreal  pressure, int  xTilt, int  yTilt, qreal  tangentialPressure, qreal  rotation, int  z, Qt::KeyboardModifiers  keyState, qint64  uniqueID)
{ 
return new QTabletEvent(t, pos, globalPos, hiResGlobalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID); }

QTabletEvent::TabletDevice  PythonQtWrapper_QTabletEvent::device(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->device();
}

const QPoint&  PythonQtWrapper_QTabletEvent::globalPos(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->globalPos();
}

int  PythonQtWrapper_QTabletEvent::globalX(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->globalX();
}

int  PythonQtWrapper_QTabletEvent::globalY(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->globalY();
}

const QPointF&  PythonQtWrapper_QTabletEvent::hiResGlobalPos(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->hiResGlobalPos();
}

qreal  PythonQtWrapper_QTabletEvent::hiResGlobalX(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->hiResGlobalX();
}

qreal  PythonQtWrapper_QTabletEvent::hiResGlobalY(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->hiResGlobalY();
}

QTabletEvent::PointerType  PythonQtWrapper_QTabletEvent::pointerType(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->pointerType();
}

const QPoint&  PythonQtWrapper_QTabletEvent::pos(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->pos();
}

qreal  PythonQtWrapper_QTabletEvent::pressure(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->pressure();
}

qreal  PythonQtWrapper_QTabletEvent::rotation(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->rotation();
}

qreal  PythonQtWrapper_QTabletEvent::tangentialPressure(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->tangentialPressure();
}

qint64  PythonQtWrapper_QTabletEvent::uniqueId(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->uniqueId();
}

int  PythonQtWrapper_QTabletEvent::x(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->x();
}

int  PythonQtWrapper_QTabletEvent::xTilt(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->xTilt();
}

int  PythonQtWrapper_QTabletEvent::y(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->y();
}

int  PythonQtWrapper_QTabletEvent::yTilt(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->yTilt();
}

int  PythonQtWrapper_QTabletEvent::z(QTabletEvent* theWrappedObject) const
{
return theWrappedObject->z();
}

