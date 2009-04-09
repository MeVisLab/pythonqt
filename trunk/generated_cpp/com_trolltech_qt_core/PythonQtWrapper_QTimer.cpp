#include "PythonQtWrapper_QTimer.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtimer.h>

QTimer* PythonQtWrapper_QTimer::new_QTimer(QObject*  parent)
{ 
return new QTimer(parent); }

int  PythonQtWrapper_QTimer::interval(QTimer* theWrappedObject) const
{
return theWrappedObject->interval();
}

bool  PythonQtWrapper_QTimer::isActive(QTimer* theWrappedObject) const
{
return theWrappedObject->isActive();
}

bool  PythonQtWrapper_QTimer::isSingleShot(QTimer* theWrappedObject) const
{
return theWrappedObject->isSingleShot();
}

void PythonQtWrapper_QTimer::setInterval(QTimer* theWrappedObject, int  msec)
{
theWrappedObject->setInterval(msec);
}

void PythonQtWrapper_QTimer::setSingleShot(QTimer* theWrappedObject, bool  singleShot)
{
theWrappedObject->setSingleShot(singleShot);
}

int  PythonQtWrapper_QTimer::timerId(QTimer* theWrappedObject) const
{
return theWrappedObject->timerId();
}

