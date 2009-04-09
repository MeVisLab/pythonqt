#include "PythonQtWrapper_QPrintEngine.h"

#include <QVariant>

bool  PythonQtWrapper_QPrintEngine::abort(QPrintEngine* theWrappedObject)
{
return theWrappedObject->abort();
}

int  PythonQtWrapper_QPrintEngine::metric(QPrintEngine* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const
{
return theWrappedObject->metric(arg__1);
}

bool  PythonQtWrapper_QPrintEngine::newPage(QPrintEngine* theWrappedObject)
{
return theWrappedObject->newPage();
}

QPrinter::PrinterState  PythonQtWrapper_QPrintEngine::printerState(QPrintEngine* theWrappedObject) const
{
return theWrappedObject->printerState();
}

QVariant  PythonQtWrapper_QPrintEngine::property(QPrintEngine* theWrappedObject, QPrintEngine::PrintEnginePropertyKey  key) const
{
return theWrappedObject->property(key);
}

void PythonQtWrapper_QPrintEngine::setProperty(QPrintEngine* theWrappedObject, QPrintEngine::PrintEnginePropertyKey  key, const QVariant&  value)
{
theWrappedObject->setProperty(key, value);
}

