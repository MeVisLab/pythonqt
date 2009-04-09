#include "PythonQtWrapper_QWindowStateChangeEvent.h"

#include <QVariant>

QWindowStateChangeEvent* PythonQtWrapper_QWindowStateChangeEvent::new_QWindowStateChangeEvent(Qt::WindowStates  aOldState)
{ 
return new QWindowStateChangeEvent(aOldState); }

QWindowStateChangeEvent* PythonQtWrapper_QWindowStateChangeEvent::new_QWindowStateChangeEvent(Qt::WindowStates  aOldState, bool  isOverride)
{ 
return new QWindowStateChangeEvent(aOldState, isOverride); }

bool  PythonQtWrapper_QWindowStateChangeEvent::isOverride(QWindowStateChangeEvent* theWrappedObject) const
{
return theWrappedObject->isOverride();
}

Qt::WindowStates  PythonQtWrapper_QWindowStateChangeEvent::oldState(QWindowStateChangeEvent* theWrappedObject) const
{
return theWrappedObject->oldState();
}

