#include "PythonQtWrapper_QIODevice.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>

bool  PythonQtWrapper_QIODevice::atEnd(QIODevice* theWrappedObject) const
{
return theWrappedObject->atEnd();
}

qint64  PythonQtWrapper_QIODevice::bytesAvailable(QIODevice* theWrappedObject) const
{
return theWrappedObject->bytesAvailable();
}

qint64  PythonQtWrapper_QIODevice::bytesToWrite(QIODevice* theWrappedObject) const
{
return theWrappedObject->bytesToWrite();
}

bool  PythonQtWrapper_QIODevice::canReadLine(QIODevice* theWrappedObject) const
{
return theWrappedObject->canReadLine();
}

void PythonQtWrapper_QIODevice::close(QIODevice* theWrappedObject)
{
theWrappedObject->close();
}

QString  PythonQtWrapper_QIODevice::errorString(QIODevice* theWrappedObject) const
{
return theWrappedObject->errorString();
}

bool  PythonQtWrapper_QIODevice::getChar(QIODevice* theWrappedObject, char*  c)
{
return theWrappedObject->getChar(c);
}

bool  PythonQtWrapper_QIODevice::isOpen(QIODevice* theWrappedObject) const
{
return theWrappedObject->isOpen();
}

bool  PythonQtWrapper_QIODevice::isReadable(QIODevice* theWrappedObject) const
{
return theWrappedObject->isReadable();
}

bool  PythonQtWrapper_QIODevice::isSequential(QIODevice* theWrappedObject) const
{
return theWrappedObject->isSequential();
}

bool  PythonQtWrapper_QIODevice::isTextModeEnabled(QIODevice* theWrappedObject) const
{
return theWrappedObject->isTextModeEnabled();
}

bool  PythonQtWrapper_QIODevice::isWritable(QIODevice* theWrappedObject) const
{
return theWrappedObject->isWritable();
}

bool  PythonQtWrapper_QIODevice::open(QIODevice* theWrappedObject, QIODevice::OpenMode  mode)
{
return theWrappedObject->open(mode);
}

QIODevice::OpenMode  PythonQtWrapper_QIODevice::openMode(QIODevice* theWrappedObject) const
{
return theWrappedObject->openMode();
}

QByteArray  PythonQtWrapper_QIODevice::peek(QIODevice* theWrappedObject, qint64  maxlen)
{
return theWrappedObject->peek(maxlen);
}

qint64  PythonQtWrapper_QIODevice::pos(QIODevice* theWrappedObject) const
{
return theWrappedObject->pos();
}

bool  PythonQtWrapper_QIODevice::putChar(QIODevice* theWrappedObject, char  c)
{
return theWrappedObject->putChar(c);
}

QByteArray  PythonQtWrapper_QIODevice::read(QIODevice* theWrappedObject, qint64  maxlen)
{
return theWrappedObject->read(maxlen);
}

QByteArray  PythonQtWrapper_QIODevice::readAll(QIODevice* theWrappedObject)
{
return theWrappedObject->readAll();
}

QByteArray  PythonQtWrapper_QIODevice::readLine(QIODevice* theWrappedObject, qint64  maxlen)
{
return theWrappedObject->readLine(maxlen);
}

bool  PythonQtWrapper_QIODevice::reset(QIODevice* theWrappedObject)
{
return theWrappedObject->reset();
}

bool  PythonQtWrapper_QIODevice::seek(QIODevice* theWrappedObject, qint64  pos)
{
return theWrappedObject->seek(pos);
}

void PythonQtWrapper_QIODevice::setTextModeEnabled(QIODevice* theWrappedObject, bool  enabled)
{
theWrappedObject->setTextModeEnabled(enabled);
}

qint64  PythonQtWrapper_QIODevice::size(QIODevice* theWrappedObject) const
{
return theWrappedObject->size();
}

void PythonQtWrapper_QIODevice::ungetChar(QIODevice* theWrappedObject, char  c)
{
theWrappedObject->ungetChar(c);
}

bool  PythonQtWrapper_QIODevice::waitForBytesWritten(QIODevice* theWrappedObject, int  msecs)
{
return theWrappedObject->waitForBytesWritten(msecs);
}

bool  PythonQtWrapper_QIODevice::waitForReadyRead(QIODevice* theWrappedObject, int  msecs)
{
return theWrappedObject->waitForReadyRead(msecs);
}

qint64  PythonQtWrapper_QIODevice::write(QIODevice* theWrappedObject, const QByteArray&  data)
{
return theWrappedObject->write(data);
}

