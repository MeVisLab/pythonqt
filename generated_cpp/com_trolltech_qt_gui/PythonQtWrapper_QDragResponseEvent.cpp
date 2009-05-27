#include "PythonQtWrapper_QDragResponseEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>

QDragResponseEvent* PythonQtWrapper_QDragResponseEvent::new_QDragResponseEvent(bool  accepted)
{ 
return new PythonQtShell_QDragResponseEvent(accepted); }

bool  PythonQtWrapper_QDragResponseEvent::dragAccepted(QDragResponseEvent* theWrappedObject) const
{
  return ( theWrappedObject->dragAccepted());
}

