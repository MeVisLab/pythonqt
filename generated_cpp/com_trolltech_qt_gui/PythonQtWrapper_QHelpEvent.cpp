#include "PythonQtWrapper_QHelpEvent.h"

#include <QVariant>
#include <qpoint.h>

QHelpEvent* PythonQtWrapper_QHelpEvent::new_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos)
{ 
return new QHelpEvent(type, pos, globalPos); }

const QPoint&  PythonQtWrapper_QHelpEvent::globalPos(QHelpEvent* theWrappedObject) const
{
return theWrappedObject->globalPos();
}

int  PythonQtWrapper_QHelpEvent::globalX(QHelpEvent* theWrappedObject) const
{
return theWrappedObject->globalX();
}

int  PythonQtWrapper_QHelpEvent::globalY(QHelpEvent* theWrappedObject) const
{
return theWrappedObject->globalY();
}

const QPoint&  PythonQtWrapper_QHelpEvent::pos(QHelpEvent* theWrappedObject) const
{
return theWrappedObject->pos();
}

int  PythonQtWrapper_QHelpEvent::x(QHelpEvent* theWrappedObject) const
{
return theWrappedObject->x();
}

int  PythonQtWrapper_QHelpEvent::y(QHelpEvent* theWrappedObject) const
{
return theWrappedObject->y();
}

