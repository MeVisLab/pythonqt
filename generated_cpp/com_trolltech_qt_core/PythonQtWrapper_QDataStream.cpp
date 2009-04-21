#include "PythonQtWrapper_QDataStream.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qiodevice.h>

QDataStream* PythonQtWrapper_QDataStream::new_QDataStream()
{ 
return new PythonQtShell_QDataStream(); }

QDataStream* PythonQtWrapper_QDataStream::new_QDataStream(QByteArray*  arg__1, QIODevice::OpenMode  flags)
{ 
return new PythonQtShell_QDataStream(arg__1, flags); }

QDataStream* PythonQtWrapper_QDataStream::new_QDataStream(QIODevice*  arg__1)
{ 
return new PythonQtShell_QDataStream(arg__1); }

QDataStream* PythonQtWrapper_QDataStream::new_QDataStream(const QByteArray&  arg__1)
{ 
return new PythonQtShell_QDataStream(arg__1); }

void PythonQtWrapper_QDataStream::setStatus(QDataStream* theWrappedObject, QDataStream::Status  status)
{
 (*theWrappedObject).setStatus(status);
}

QDataStream&  PythonQtWrapper_QDataStream::readUInt(QDataStream* theWrappedObject, unsigned int&  i)
{
return  (*theWrappedObject) >>i;
}

QDataStream&  PythonQtWrapper_QDataStream::readULongLong(QDataStream* theWrappedObject, quint64&  i)
{
return  (*theWrappedObject) >>i;
}

bool  PythonQtWrapper_QDataStream::atEnd(QDataStream* theWrappedObject) const
{
return  (*theWrappedObject).atEnd();
}

void PythonQtWrapper_QDataStream::setDevice(QDataStream* theWrappedObject, QIODevice*  arg__1)
{
 (*theWrappedObject).setDevice(arg__1);
}

int  PythonQtWrapper_QDataStream::version(QDataStream* theWrappedObject) const
{
return  (*theWrappedObject).version();
}

QDataStream&  PythonQtWrapper_QDataStream::readUShort(QDataStream* theWrappedObject, unsigned short&  i)
{
return  (*theWrappedObject) >>i;
}

QDataStream&  PythonQtWrapper_QDataStream::readDouble(QDataStream* theWrappedObject, double&  f)
{
return  (*theWrappedObject) >>f;
}

void PythonQtWrapper_QDataStream::resetStatus(QDataStream* theWrappedObject)
{
 (*theWrappedObject).resetStatus();
}

void PythonQtWrapper_QDataStream::setVersion(QDataStream* theWrappedObject, int  arg__1)
{
 (*theWrappedObject).setVersion(arg__1);
}

QDataStream&  PythonQtWrapper_QDataStream::readBoolean(QDataStream* theWrappedObject, bool&  i)
{
return  (*theWrappedObject) >>i;
}

QDataStream&  PythonQtWrapper_QDataStream::readLongLong(QDataStream* theWrappedObject, qint64&  i)
{
return  (*theWrappedObject) >>i;
}

QDataStream&  PythonQtWrapper_QDataStream::readFloat(QDataStream* theWrappedObject, float&  f)
{
return  (*theWrappedObject) >>f;
}

QDataStream&  PythonQtWrapper_QDataStream::writeFloat(QDataStream* theWrappedObject, float  f)
{
return  (*theWrappedObject) <<f;
}

QDataStream&  PythonQtWrapper_QDataStream::readByte(QDataStream* theWrappedObject, unsigned char&  i)
{
return  (*theWrappedObject) >>i;
}

QDataStream&  PythonQtWrapper_QDataStream::writeDouble(QDataStream* theWrappedObject, double  f)
{
return  (*theWrappedObject) <<f;
}

QDataStream&  PythonQtWrapper_QDataStream::writeShort(QDataStream* theWrappedObject, short  i)
{
return  (*theWrappedObject) <<i;
}

QDataStream&  PythonQtWrapper_QDataStream::writeLongLong(QDataStream* theWrappedObject, qint64  i)
{
return  (*theWrappedObject) <<i;
}

QDataStream&  PythonQtWrapper_QDataStream::writeBoolean(QDataStream* theWrappedObject, bool  i)
{
return  (*theWrappedObject) <<i;
}

QIODevice*  PythonQtWrapper_QDataStream::device(QDataStream* theWrappedObject) const
{
return  (*theWrappedObject).device();
}

QDataStream&  PythonQtWrapper_QDataStream::writeInt(QDataStream* theWrappedObject, int  i)
{
return  (*theWrappedObject) <<i;
}

QDataStream&  PythonQtWrapper_QDataStream::readShort(QDataStream* theWrappedObject, short&  i)
{
return  (*theWrappedObject) >>i;
}

int  PythonQtWrapper_QDataStream::skipRawData(QDataStream* theWrappedObject, int  len)
{
return  (*theWrappedObject).skipRawData(len);
}

void PythonQtWrapper_QDataStream::unsetDevice(QDataStream* theWrappedObject)
{
 (*theWrappedObject).unsetDevice();
}

QDataStream::Status  PythonQtWrapper_QDataStream::status(QDataStream* theWrappedObject) const
{
return  (*theWrappedObject).status();
}

QDataStream&  PythonQtWrapper_QDataStream::readInt(QDataStream* theWrappedObject, int&  i)
{
return  (*theWrappedObject) >>i;
}

QDataStream&  PythonQtWrapper_QDataStream::writeByte(QDataStream* theWrappedObject, unsigned char  i)
{
return  (*theWrappedObject) <<i;
}

