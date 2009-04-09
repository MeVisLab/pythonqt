#include "PythonQtWrapper_QContextMenuEvent.h"

#include <QVariant>
#include <qpoint.h>

QContextMenuEvent* PythonQtWrapper_QContextMenuEvent::new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos)
{ 
return new QContextMenuEvent(reason, pos); }

QContextMenuEvent* PythonQtWrapper_QContextMenuEvent::new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos)
{ 
return new QContextMenuEvent(reason, pos, globalPos); }

QContextMenuEvent* PythonQtWrapper_QContextMenuEvent::new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos, Qt::KeyboardModifiers  modifiers)
{ 
return new QContextMenuEvent(reason, pos, globalPos, modifiers); }

const QPoint&  PythonQtWrapper_QContextMenuEvent::globalPos(QContextMenuEvent* theWrappedObject) const
{
return theWrappedObject->globalPos();
}

int  PythonQtWrapper_QContextMenuEvent::globalX(QContextMenuEvent* theWrappedObject) const
{
return theWrappedObject->globalX();
}

int  PythonQtWrapper_QContextMenuEvent::globalY(QContextMenuEvent* theWrappedObject) const
{
return theWrappedObject->globalY();
}

const QPoint&  PythonQtWrapper_QContextMenuEvent::pos(QContextMenuEvent* theWrappedObject) const
{
return theWrappedObject->pos();
}

QContextMenuEvent::Reason  PythonQtWrapper_QContextMenuEvent::reason(QContextMenuEvent* theWrappedObject) const
{
return theWrappedObject->reason();
}

int  PythonQtWrapper_QContextMenuEvent::x(QContextMenuEvent* theWrappedObject) const
{
return theWrappedObject->x();
}

int  PythonQtWrapper_QContextMenuEvent::y(QContextMenuEvent* theWrappedObject) const
{
return theWrappedObject->y();
}

