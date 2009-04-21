#include "PythonQtWrapper_QEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>

QEvent* PythonQtWrapper_QEvent::new_QEvent(QEvent::Type  type)
{ 
return new PythonQtShell_QEvent(type); }

bool  PythonQtWrapper_QEvent::spontaneous(QEvent* theWrappedObject) const
{
return  (*theWrappedObject).spontaneous();
}

bool  PythonQtWrapper_QEvent::isAccepted(QEvent* theWrappedObject) const
{
return  (*theWrappedObject).isAccepted();
}

void PythonQtWrapper_QEvent::accept(QEvent* theWrappedObject)
{
 (*theWrappedObject).accept();
}

QEvent::Type  PythonQtWrapper_QEvent::type(QEvent* theWrappedObject) const
{
return  (*theWrappedObject).type();
}

void PythonQtWrapper_QEvent::setAccepted(QEvent* theWrappedObject, bool  accepted)
{
 (*theWrappedObject).setAccepted(accepted);
}

void PythonQtWrapper_QEvent::ignore(QEvent* theWrappedObject)
{
 (*theWrappedObject).ignore();
}

int  PythonQtWrapper_QEvent::static_QEvent_registerEventType(int  hint)
{
return QEvent::registerEventType(hint);
}

