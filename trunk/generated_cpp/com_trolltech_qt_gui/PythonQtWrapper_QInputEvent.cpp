#include "PythonQtWrapper_QInputEvent.h"

#include <QVariant>

QInputEvent* PythonQtWrapper_QInputEvent::new_QInputEvent(QEvent::Type  type, Qt::KeyboardModifiers  modifiers)
{ 
return new QInputEvent(type, modifiers); }

Qt::KeyboardModifiers  PythonQtWrapper_QInputEvent::modifiers(QInputEvent* theWrappedObject) const
{
return theWrappedObject->modifiers();
}

