#include "PythonQtWrapper_QHoverEvent.h"

#include <QVariant>
#include <qpoint.h>

QHoverEvent* PythonQtWrapper_QHoverEvent::new_QHoverEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  oldPos)
{ 
return new QHoverEvent(type, pos, oldPos); }

const QPoint&  PythonQtWrapper_QHoverEvent::oldPos(QHoverEvent* theWrappedObject) const
{
return theWrappedObject->oldPos();
}

const QPoint&  PythonQtWrapper_QHoverEvent::pos(QHoverEvent* theWrappedObject) const
{
return theWrappedObject->pos();
}

