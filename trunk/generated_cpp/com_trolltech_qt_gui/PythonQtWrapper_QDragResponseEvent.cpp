#include "PythonQtWrapper_QDragResponseEvent.h"

#include <QVariant>

QDragResponseEvent* PythonQtWrapper_QDragResponseEvent::new_QDragResponseEvent(bool  accepted)
{ 
return new QDragResponseEvent(accepted); }

bool  PythonQtWrapper_QDragResponseEvent::dragAccepted(QDragResponseEvent* theWrappedObject) const
{
return theWrappedObject->dragAccepted();
}

