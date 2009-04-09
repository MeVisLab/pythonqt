#include "PythonQtWrapper_QPictureIO.h"

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qpicture.h>

QPictureIO* PythonQtWrapper_QPictureIO::new_QPictureIO()
{ 
return new QPictureIO(); }

QPictureIO* PythonQtWrapper_QPictureIO::new_QPictureIO(QIODevice*  ioDevice, const char*  format)
{ 
return new QPictureIO(ioDevice, format); }

QPictureIO* PythonQtWrapper_QPictureIO::new_QPictureIO(const QString&  fileName, const char*  format)
{ 
return new QPictureIO(fileName, format); }

QString  PythonQtWrapper_QPictureIO::description(QPictureIO* theWrappedObject) const
{
return theWrappedObject->description();
}

QString  PythonQtWrapper_QPictureIO::fileName(QPictureIO* theWrappedObject) const
{
return theWrappedObject->fileName();
}

const char*  PythonQtWrapper_QPictureIO::format(QPictureIO* theWrappedObject) const
{
return theWrappedObject->format();
}

float  PythonQtWrapper_QPictureIO::gamma(QPictureIO* theWrappedObject) const
{
return theWrappedObject->gamma();
}

QList<QByteArray >  PythonQtWrapper_QPictureIO::static_QPictureIO_inputFormats()
{
return QPictureIO::inputFormats();
}

QIODevice*  PythonQtWrapper_QPictureIO::ioDevice(QPictureIO* theWrappedObject) const
{
return theWrappedObject->ioDevice();
}

QList<QByteArray >  PythonQtWrapper_QPictureIO::static_QPictureIO_outputFormats()
{
return QPictureIO::outputFormats();
}

const char*  PythonQtWrapper_QPictureIO::parameters(QPictureIO* theWrappedObject) const
{
return theWrappedObject->parameters();
}

const QPicture&  PythonQtWrapper_QPictureIO::picture(QPictureIO* theWrappedObject) const
{
return theWrappedObject->picture();
}

QByteArray  PythonQtWrapper_QPictureIO::static_QPictureIO_pictureFormat(QIODevice*  arg__1)
{
return QPictureIO::pictureFormat(arg__1);
}

QByteArray  PythonQtWrapper_QPictureIO::static_QPictureIO_pictureFormat(const QString&  fileName)
{
return QPictureIO::pictureFormat(fileName);
}

int  PythonQtWrapper_QPictureIO::quality(QPictureIO* theWrappedObject) const
{
return theWrappedObject->quality();
}

bool  PythonQtWrapper_QPictureIO::read(QPictureIO* theWrappedObject)
{
return theWrappedObject->read();
}

void PythonQtWrapper_QPictureIO::setDescription(QPictureIO* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->setDescription(arg__1);
}

void PythonQtWrapper_QPictureIO::setFileName(QPictureIO* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->setFileName(arg__1);
}

void PythonQtWrapper_QPictureIO::setFormat(QPictureIO* theWrappedObject, const char*  arg__1)
{
theWrappedObject->setFormat(arg__1);
}

void PythonQtWrapper_QPictureIO::setGamma(QPictureIO* theWrappedObject, float  arg__1)
{
theWrappedObject->setGamma(arg__1);
}

void PythonQtWrapper_QPictureIO::setIODevice(QPictureIO* theWrappedObject, QIODevice*  arg__1)
{
theWrappedObject->setIODevice(arg__1);
}

void PythonQtWrapper_QPictureIO::setParameters(QPictureIO* theWrappedObject, const char*  arg__1)
{
theWrappedObject->setParameters(arg__1);
}

void PythonQtWrapper_QPictureIO::setPicture(QPictureIO* theWrappedObject, const QPicture&  arg__1)
{
theWrappedObject->setPicture(arg__1);
}

void PythonQtWrapper_QPictureIO::setQuality(QPictureIO* theWrappedObject, int  arg__1)
{
theWrappedObject->setQuality(arg__1);
}

void PythonQtWrapper_QPictureIO::setStatus(QPictureIO* theWrappedObject, int  arg__1)
{
theWrappedObject->setStatus(arg__1);
}

int  PythonQtWrapper_QPictureIO::status(QPictureIO* theWrappedObject) const
{
return theWrappedObject->status();
}

bool  PythonQtWrapper_QPictureIO::write(QPictureIO* theWrappedObject)
{
return theWrappedObject->write();
}

