#include "PythonQtWrapper_QChildEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qobject.h>

QChildEvent* PythonQtWrapper_QChildEvent::new_QChildEvent(QEvent::Type  type, QObject*  child)
{ 
return new PythonQtShell_QChildEvent(type, child); }

bool  PythonQtWrapper_QChildEvent::added(QChildEvent* theWrappedObject) const
{
return  theWrappedObject->added();
}

QObject*  PythonQtWrapper_QChildEvent::child(QChildEvent* theWrappedObject) const
{
return  theWrappedObject->child();
}

bool  PythonQtWrapper_QChildEvent::removed(QChildEvent* theWrappedObject) const
{
return  theWrappedObject->removed();
}

bool  PythonQtWrapper_QChildEvent::polished(QChildEvent* theWrappedObject) const
{
return  theWrappedObject->polished();
}

