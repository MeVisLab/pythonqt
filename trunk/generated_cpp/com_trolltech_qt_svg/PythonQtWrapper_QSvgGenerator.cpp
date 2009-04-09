#include "PythonQtWrapper_QSvgGenerator.h"

#include <QVariant>
#include <qiodevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qsize.h>

QSvgGenerator* PythonQtWrapper_QSvgGenerator::new_QSvgGenerator()
{ 
return new QSvgGenerator(); }

int  PythonQtWrapper_QSvgGenerator::depth(QSvgGenerator* theWrappedObject) const
{
return theWrappedObject->depth();
}

int  PythonQtWrapper_QSvgGenerator::devType(QSvgGenerator* theWrappedObject) const
{
return theWrappedObject->devType();
}

QString  PythonQtWrapper_QSvgGenerator::fileName(QSvgGenerator* theWrappedObject) const
{
return theWrappedObject->fileName();
}

int  PythonQtWrapper_QSvgGenerator::height(QSvgGenerator* theWrappedObject) const
{
return theWrappedObject->height();
}

int  PythonQtWrapper_QSvgGenerator::heightMM(QSvgGenerator* theWrappedObject) const
{
return theWrappedObject->heightMM();
}

int  PythonQtWrapper_QSvgGenerator::logicalDpiX(QSvgGenerator* theWrappedObject) const
{
return theWrappedObject->logicalDpiX();
}

int  PythonQtWrapper_QSvgGenerator::logicalDpiY(QSvgGenerator* theWrappedObject) const
{
return theWrappedObject->logicalDpiY();
}

int  PythonQtWrapper_QSvgGenerator::numColors(QSvgGenerator* theWrappedObject) const
{
return theWrappedObject->numColors();
}

QIODevice*  PythonQtWrapper_QSvgGenerator::outputDevice(QSvgGenerator* theWrappedObject) const
{
return theWrappedObject->outputDevice();
}

bool  PythonQtWrapper_QSvgGenerator::paintingActive(QSvgGenerator* theWrappedObject) const
{
return theWrappedObject->paintingActive();
}

int  PythonQtWrapper_QSvgGenerator::physicalDpiX(QSvgGenerator* theWrappedObject) const
{
return theWrappedObject->physicalDpiX();
}

int  PythonQtWrapper_QSvgGenerator::physicalDpiY(QSvgGenerator* theWrappedObject) const
{
return theWrappedObject->physicalDpiY();
}

int  PythonQtWrapper_QSvgGenerator::resolution(QSvgGenerator* theWrappedObject) const
{
return theWrappedObject->resolution();
}

void PythonQtWrapper_QSvgGenerator::setFileName(QSvgGenerator* theWrappedObject, const QString&  fileName)
{
theWrappedObject->setFileName(fileName);
}

void PythonQtWrapper_QSvgGenerator::setOutputDevice(QSvgGenerator* theWrappedObject, QIODevice*  outputDevice)
{
theWrappedObject->setOutputDevice(outputDevice);
}

void PythonQtWrapper_QSvgGenerator::setResolution(QSvgGenerator* theWrappedObject, int  dpi)
{
theWrappedObject->setResolution(dpi);
}

void PythonQtWrapper_QSvgGenerator::setSize(QSvgGenerator* theWrappedObject, const QSize&  size)
{
theWrappedObject->setSize(size);
}

QSize  PythonQtWrapper_QSvgGenerator::size(QSvgGenerator* theWrappedObject) const
{
return theWrappedObject->size();
}

int  PythonQtWrapper_QSvgGenerator::width(QSvgGenerator* theWrappedObject) const
{
return theWrappedObject->width();
}

int  PythonQtWrapper_QSvgGenerator::widthMM(QSvgGenerator* theWrappedObject) const
{
return theWrappedObject->widthMM();
}

