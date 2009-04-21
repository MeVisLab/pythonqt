#include "PythonQtWrapper_QImageWriter.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qimage.h>
#include <qimagewriter.h>
#include <qiodevice.h>
#include <qlist.h>

QImageWriter* PythonQtWrapper_QImageWriter::new_QImageWriter()
{ 
return new QImageWriter(); }

QImageWriter* PythonQtWrapper_QImageWriter::new_QImageWriter(QIODevice*  device, const QByteArray&  format)
{ 
return new QImageWriter(device, format); }

QImageWriter* PythonQtWrapper_QImageWriter::new_QImageWriter(const QString&  fileName, const QByteArray&  format)
{ 
return new QImageWriter(fileName, format); }

QByteArray  PythonQtWrapper_QImageWriter::format(QImageWriter* theWrappedObject) const
{
return  (*theWrappedObject).format();
}

bool  PythonQtWrapper_QImageWriter::supportsOption(QImageWriter* theWrappedObject, QImageIOHandler::ImageOption  option) const
{
return  (*theWrappedObject).supportsOption(option);
}

QString  PythonQtWrapper_QImageWriter::fileName(QImageWriter* theWrappedObject) const
{
return  (*theWrappedObject).fileName();
}

QIODevice*  PythonQtWrapper_QImageWriter::device(QImageWriter* theWrappedObject) const
{
return  (*theWrappedObject).device();
}

QList<QByteArray >  PythonQtWrapper_QImageWriter::static_QImageWriter_supportedImageFormats()
{
return QImageWriter::supportedImageFormats();
}

float  PythonQtWrapper_QImageWriter::gamma(QImageWriter* theWrappedObject) const
{
return  (*theWrappedObject).gamma();
}

void PythonQtWrapper_QImageWriter::setGamma(QImageWriter* theWrappedObject, float  gamma)
{
 (*theWrappedObject).setGamma(gamma);
}

void PythonQtWrapper_QImageWriter::setFormat(QImageWriter* theWrappedObject, const QByteArray&  format)
{
 (*theWrappedObject).setFormat(format);
}

bool  PythonQtWrapper_QImageWriter::canWrite(QImageWriter* theWrappedObject) const
{
return  (*theWrappedObject).canWrite();
}

QImageWriter::ImageWriterError  PythonQtWrapper_QImageWriter::error(QImageWriter* theWrappedObject) const
{
return  (*theWrappedObject).error();
}

void PythonQtWrapper_QImageWriter::setQuality(QImageWriter* theWrappedObject, int  quality)
{
 (*theWrappedObject).setQuality(quality);
}

void PythonQtWrapper_QImageWriter::setDevice(QImageWriter* theWrappedObject, QIODevice*  device)
{
 (*theWrappedObject).setDevice(device);
}

void PythonQtWrapper_QImageWriter::setText(QImageWriter* theWrappedObject, const QString&  key, const QString&  text)
{
 (*theWrappedObject).setText(key, text);
}

int  PythonQtWrapper_QImageWriter::quality(QImageWriter* theWrappedObject) const
{
return  (*theWrappedObject).quality();
}

int  PythonQtWrapper_QImageWriter::compression(QImageWriter* theWrappedObject) const
{
return  (*theWrappedObject).compression();
}

QString  PythonQtWrapper_QImageWriter::errorString(QImageWriter* theWrappedObject) const
{
return  (*theWrappedObject).errorString();
}

void PythonQtWrapper_QImageWriter::setFileName(QImageWriter* theWrappedObject, const QString&  fileName)
{
 (*theWrappedObject).setFileName(fileName);
}

void PythonQtWrapper_QImageWriter::setCompression(QImageWriter* theWrappedObject, int  compression)
{
 (*theWrappedObject).setCompression(compression);
}

bool  PythonQtWrapper_QImageWriter::write(QImageWriter* theWrappedObject, const QImage&  image)
{
return  (*theWrappedObject).write(image);
}

