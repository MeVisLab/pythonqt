#include "PythonQtWrapper_QRunnable.h"

#include <QVariant>

bool  PythonQtWrapper_QRunnable::autoDelete(QRunnable* theWrappedObject) const
{
return theWrappedObject->autoDelete();
}

void PythonQtWrapper_QRunnable::run(QRunnable* theWrappedObject)
{
theWrappedObject->run();
}

void PythonQtWrapper_QRunnable::setAutoDelete(QRunnable* theWrappedObject, bool  _autoDelete)
{
theWrappedObject->setAutoDelete(_autoDelete);
}

