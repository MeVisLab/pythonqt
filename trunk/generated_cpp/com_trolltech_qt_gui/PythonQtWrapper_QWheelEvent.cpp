#include "PythonQtWrapper_QWheelEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qpoint.h>

QWheelEvent* PythonQtWrapper_QWheelEvent::new_QWheelEvent(const QPoint&  pos, const QPoint&  globalPos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient)
{ 
return new PythonQtShell_QWheelEvent(pos, globalPos, delta, buttons, modifiers, orient); }

QWheelEvent* PythonQtWrapper_QWheelEvent::new_QWheelEvent(const QPoint&  pos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient)
{ 
return new PythonQtShell_QWheelEvent(pos, delta, buttons, modifiers, orient); }

int  PythonQtWrapper_QWheelEvent::y(QWheelEvent* theWrappedObject) const
{
return  theWrappedObject->y();
}

int  PythonQtWrapper_QWheelEvent::x(QWheelEvent* theWrappedObject) const
{
return  theWrappedObject->x();
}

int  PythonQtWrapper_QWheelEvent::globalY(QWheelEvent* theWrappedObject) const
{
return  theWrappedObject->globalY();
}

const QPoint&  PythonQtWrapper_QWheelEvent::pos(QWheelEvent* theWrappedObject) const
{
return  theWrappedObject->pos();
}

int  PythonQtWrapper_QWheelEvent::delta(QWheelEvent* theWrappedObject) const
{
return  theWrappedObject->delta();
}

Qt::Orientation  PythonQtWrapper_QWheelEvent::orientation(QWheelEvent* theWrappedObject) const
{
return  theWrappedObject->orientation();
}

const QPoint&  PythonQtWrapper_QWheelEvent::globalPos(QWheelEvent* theWrappedObject) const
{
return  theWrappedObject->globalPos();
}

Qt::MouseButtons  PythonQtWrapper_QWheelEvent::buttons(QWheelEvent* theWrappedObject) const
{
return  theWrappedObject->buttons();
}

int  PythonQtWrapper_QWheelEvent::globalX(QWheelEvent* theWrappedObject) const
{
return  theWrappedObject->globalX();
}

