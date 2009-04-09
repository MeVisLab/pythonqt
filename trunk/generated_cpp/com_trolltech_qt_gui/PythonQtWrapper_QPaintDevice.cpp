#include "PythonQtWrapper_QPaintDevice.h"

#include <QVariant>
#include <qpaintdevice.h>
#include <qpaintengine.h>

int  PythonQtWrapper_QPaintDevice::depth(QPaintDevice* theWrappedObject) const
{
return theWrappedObject->depth();
}

int  PythonQtWrapper_QPaintDevice::devType(QPaintDevice* theWrappedObject) const
{
return theWrappedObject->devType();
}

int  PythonQtWrapper_QPaintDevice::height(QPaintDevice* theWrappedObject) const
{
return theWrappedObject->height();
}

int  PythonQtWrapper_QPaintDevice::heightMM(QPaintDevice* theWrappedObject) const
{
return theWrappedObject->heightMM();
}

int  PythonQtWrapper_QPaintDevice::logicalDpiX(QPaintDevice* theWrappedObject) const
{
return theWrappedObject->logicalDpiX();
}

int  PythonQtWrapper_QPaintDevice::logicalDpiY(QPaintDevice* theWrappedObject) const
{
return theWrappedObject->logicalDpiY();
}

int  PythonQtWrapper_QPaintDevice::numColors(QPaintDevice* theWrappedObject) const
{
return theWrappedObject->numColors();
}

QPaintEngine*  PythonQtWrapper_QPaintDevice::paintEngine(QPaintDevice* theWrappedObject) const
{
return theWrappedObject->paintEngine();
}

bool  PythonQtWrapper_QPaintDevice::paintingActive(QPaintDevice* theWrappedObject) const
{
return theWrappedObject->paintingActive();
}

int  PythonQtWrapper_QPaintDevice::physicalDpiX(QPaintDevice* theWrappedObject) const
{
return theWrappedObject->physicalDpiX();
}

int  PythonQtWrapper_QPaintDevice::physicalDpiY(QPaintDevice* theWrappedObject) const
{
return theWrappedObject->physicalDpiY();
}

int  PythonQtWrapper_QPaintDevice::width(QPaintDevice* theWrappedObject) const
{
return theWrappedObject->width();
}

int  PythonQtWrapper_QPaintDevice::widthMM(QPaintDevice* theWrappedObject) const
{
return theWrappedObject->widthMM();
}

