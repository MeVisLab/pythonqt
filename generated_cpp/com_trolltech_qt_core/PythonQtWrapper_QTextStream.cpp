#include "PythonQtWrapper_QTextStream.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qtextstream.h>

QTextStream* PythonQtWrapper_QTextStream::new_QTextStream()
{ 
return new PythonQtShell_QTextStream(); }

QTextStream* PythonQtWrapper_QTextStream::new_QTextStream(QIODevice*  device)
{ 
return new PythonQtShell_QTextStream(device); }

QTextStream* PythonQtWrapper_QTextStream::new_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode)
{ 
return new PythonQtShell_QTextStream(array, openMode); }

QTextStream::RealNumberNotation  PythonQtWrapper_QTextStream::realNumberNotation(QTextStream* theWrappedObject) const
{
return  (*theWrappedObject).realNumberNotation();
}

bool  PythonQtWrapper_QTextStream::seek(QTextStream* theWrappedObject, qint64  pos)
{
return  (*theWrappedObject).seek(pos);
}

QString  PythonQtWrapper_QTextStream::readAll(QTextStream* theWrappedObject)
{
return  (*theWrappedObject).readAll();
}

QTextStream&  PythonQtWrapper_QTextStream::readShort(QTextStream* theWrappedObject, signed short&  i)
{
return  (*theWrappedObject) >>i;
}

QTextStream&  PythonQtWrapper_QTextStream::readUShort(QTextStream* theWrappedObject, unsigned short&  i)
{
return  (*theWrappedObject) >>i;
}

void PythonQtWrapper_QTextStream::setCodec(QTextStream* theWrappedObject, QTextCodec*  codec)
{
 (*theWrappedObject).setCodec(codec);
}

QTextStream::NumberFlags  PythonQtWrapper_QTextStream::numberFlags(QTextStream* theWrappedObject) const
{
return  (*theWrappedObject).numberFlags();
}

void PythonQtWrapper_QTextStream::setCodec(QTextStream* theWrappedObject, const char*  codecName)
{
 (*theWrappedObject).setCodec(codecName);
}

void PythonQtWrapper_QTextStream::setStatus(QTextStream* theWrappedObject, QTextStream::Status  status)
{
 (*theWrappedObject).setStatus(status);
}

QTextStream&  PythonQtWrapper_QTextStream::readByte(QTextStream* theWrappedObject, char&  ch)
{
return  (*theWrappedObject) >>ch;
}

void PythonQtWrapper_QTextStream::skipWhiteSpace(QTextStream* theWrappedObject)
{
 (*theWrappedObject).skipWhiteSpace();
}

qint64  PythonQtWrapper_QTextStream::pos(QTextStream* theWrappedObject) const
{
return  (*theWrappedObject).pos();
}

void PythonQtWrapper_QTextStream::setDevice(QTextStream* theWrappedObject, QIODevice*  device)
{
 (*theWrappedObject).setDevice(device);
}

void PythonQtWrapper_QTextStream::setRealNumberPrecision(QTextStream* theWrappedObject, int  precision)
{
 (*theWrappedObject).setRealNumberPrecision(precision);
}

bool  PythonQtWrapper_QTextStream::atEnd(QTextStream* theWrappedObject) const
{
return  (*theWrappedObject).atEnd();
}

QTextStream::Status  PythonQtWrapper_QTextStream::status(QTextStream* theWrappedObject) const
{
return  (*theWrappedObject).status();
}

QTextStream&  PythonQtWrapper_QTextStream::writeDouble(QTextStream* theWrappedObject, double  f)
{
return  (*theWrappedObject) <<f;
}

int  PythonQtWrapper_QTextStream::realNumberPrecision(QTextStream* theWrappedObject) const
{
return  (*theWrappedObject).realNumberPrecision();
}

bool  PythonQtWrapper_QTextStream::generateByteOrderMark(QTextStream* theWrappedObject) const
{
return  (*theWrappedObject).generateByteOrderMark();
}

bool  PythonQtWrapper_QTextStream::autoDetectUnicode(QTextStream* theWrappedObject) const
{
return  (*theWrappedObject).autoDetectUnicode();
}

QTextStream::FieldAlignment  PythonQtWrapper_QTextStream::fieldAlignment(QTextStream* theWrappedObject) const
{
return  (*theWrappedObject).fieldAlignment();
}

QTextCodec*  PythonQtWrapper_QTextStream::codec(QTextStream* theWrappedObject) const
{
return  (*theWrappedObject).codec();
}

void PythonQtWrapper_QTextStream::setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags)
{
 (*theWrappedObject).setNumberFlags(flags);
}

QTextStream&  PythonQtWrapper_QTextStream::writeByteArray(QTextStream* theWrappedObject, const QByteArray&  array)
{
return  (*theWrappedObject) <<array;
}

int  PythonQtWrapper_QTextStream::fieldWidth(QTextStream* theWrappedObject) const
{
return  (*theWrappedObject).fieldWidth();
}

void PythonQtWrapper_QTextStream::setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled)
{
 (*theWrappedObject).setAutoDetectUnicode(enabled);
}

QTextStream&  PythonQtWrapper_QTextStream::writeBoolean(QTextStream* theWrappedObject, QBool  b)
{
return  (*theWrappedObject) <<b;
}

int  PythonQtWrapper_QTextStream::integerBase(QTextStream* theWrappedObject) const
{
return  (*theWrappedObject).integerBase();
}

QTextStream&  PythonQtWrapper_QTextStream::writeInt(QTextStream* theWrappedObject, signed int  i)
{
return  (*theWrappedObject) <<i;
}

void PythonQtWrapper_QTextStream::setIntegerBase(QTextStream* theWrappedObject, int  base)
{
 (*theWrappedObject).setIntegerBase(base);
}

void PythonQtWrapper_QTextStream::setPadChar(QTextStream* theWrappedObject, QChar  ch)
{
 (*theWrappedObject).setPadChar(ch);
}

QString  PythonQtWrapper_QTextStream::read(QTextStream* theWrappedObject, qint64  maxlen)
{
return  (*theWrappedObject).read(maxlen);
}

QTextStream&  PythonQtWrapper_QTextStream::writeString(QTextStream* theWrappedObject, const QString&  s)
{
return  (*theWrappedObject) <<s;
}

QTextStream&  PythonQtWrapper_QTextStream::readInt(QTextStream* theWrappedObject, signed int&  i)
{
return  (*theWrappedObject) >>i;
}

QString  PythonQtWrapper_QTextStream::readLine(QTextStream* theWrappedObject, qint64  maxlen)
{
return  (*theWrappedObject).readLine(maxlen);
}

void PythonQtWrapper_QTextStream::setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment)
{
 (*theWrappedObject).setFieldAlignment(alignment);
}

QIODevice*  PythonQtWrapper_QTextStream::device(QTextStream* theWrappedObject) const
{
return  (*theWrappedObject).device();
}

void PythonQtWrapper_QTextStream::resetStatus(QTextStream* theWrappedObject)
{
 (*theWrappedObject).resetStatus();
}

QChar  PythonQtWrapper_QTextStream::padChar(QTextStream* theWrappedObject) const
{
return  (*theWrappedObject).padChar();
}

void PythonQtWrapper_QTextStream::reset(QTextStream* theWrappedObject)
{
 (*theWrappedObject).reset();
}

void PythonQtWrapper_QTextStream::setFieldWidth(QTextStream* theWrappedObject, int  width)
{
 (*theWrappedObject).setFieldWidth(width);
}

void PythonQtWrapper_QTextStream::setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate)
{
 (*theWrappedObject).setGenerateByteOrderMark(generate);
}

QTextStream&  PythonQtWrapper_QTextStream::writeFloat(QTextStream* theWrappedObject, float  f)
{
return  (*theWrappedObject) <<f;
}

QTextStream&  PythonQtWrapper_QTextStream::writeShort(QTextStream* theWrappedObject, signed short  i)
{
return  (*theWrappedObject) <<i;
}

QTextStream&  PythonQtWrapper_QTextStream::readLongLong(QTextStream* theWrappedObject, qlonglong&  i)
{
return  (*theWrappedObject) >>i;
}

void PythonQtWrapper_QTextStream::flush(QTextStream* theWrappedObject)
{
 (*theWrappedObject).flush();
}

QTextStream&  PythonQtWrapper_QTextStream::readFloat(QTextStream* theWrappedObject, float&  f)
{
return  (*theWrappedObject) >>f;
}

QTextStream&  PythonQtWrapper_QTextStream::writeByte(QTextStream* theWrappedObject, char  ch)
{
return  (*theWrappedObject) <<ch;
}

QTextStream&  PythonQtWrapper_QTextStream::readDouble(QTextStream* theWrappedObject, double&  f)
{
return  (*theWrappedObject) >>f;
}

QTextStream&  PythonQtWrapper_QTextStream::readUInt(QTextStream* theWrappedObject, unsigned int&  i)
{
return  (*theWrappedObject) >>i;
}

void PythonQtWrapper_QTextStream::setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation)
{
 (*theWrappedObject).setRealNumberNotation(notation);
}

