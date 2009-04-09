#include "PythonQtWrapper_QEventLoop.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

QEventLoop* PythonQtWrapper_QEventLoop::new_QEventLoop(QObject*  parent)
{ 
return new QEventLoop(parent); }

int  PythonQtWrapper_QEventLoop::exec(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags)
{
return theWrappedObject->exec(flags);
}

void PythonQtWrapper_QEventLoop::exit(QEventLoop* theWrappedObject, int  returnCode)
{
theWrappedObject->exit(returnCode);
}

bool  PythonQtWrapper_QEventLoop::isRunning(QEventLoop* theWrappedObject) const
{
return theWrappedObject->isRunning();
}

bool  PythonQtWrapper_QEventLoop::processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags)
{
return theWrappedObject->processEvents(flags);
}

void PythonQtWrapper_QEventLoop::processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags, int  maximumTime)
{
theWrappedObject->processEvents(flags, maximumTime);
}

void PythonQtWrapper_QEventLoop::wakeUp(QEventLoop* theWrappedObject)
{
theWrappedObject->wakeUp();
}

