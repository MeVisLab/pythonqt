#ifndef PYTHONQTWRAPPER_QTEXTSTREAM_H
#define PYTHONQTWRAPPER_QTEXTSTREAM_H

#include <qtextstream.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qtextstream.h>

class PythonQtShell_QTextStream : public QTextStream
{
public:
    PythonQtShell_QTextStream():QTextStream(),_wrapper(NULL) {};
    PythonQtShell_QTextStream(QIODevice*  device):QTextStream(device),_wrapper(NULL) {};
    PythonQtShell_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode = QIODevice::ReadOnly):QTextStream(array, openMode),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RealNumberNotation NumberFlag FieldAlignment Status )
Q_FLAGS(NumberFlags )
enum RealNumberNotation{
  SmartNotation = QTextStream::SmartNotation,   FixedNotation = QTextStream::FixedNotation,   ScientificNotation = QTextStream::ScientificNotation};
enum NumberFlag{
  ShowBase = QTextStream::ShowBase,   ForcePoint = QTextStream::ForcePoint,   ForceSign = QTextStream::ForceSign,   UppercaseBase = QTextStream::UppercaseBase,   UppercaseDigits = QTextStream::UppercaseDigits};
enum FieldAlignment{
  AlignLeft = QTextStream::AlignLeft,   AlignRight = QTextStream::AlignRight,   AlignCenter = QTextStream::AlignCenter,   AlignAccountingStyle = QTextStream::AlignAccountingStyle};
enum Status{
  Ok = QTextStream::Ok,   ReadPastEnd = QTextStream::ReadPastEnd,   ReadCorruptData = QTextStream::ReadCorruptData};
Q_DECLARE_FLAGS(NumberFlags, NumberFlag)
public slots:
QTextStream* new_QTextStream();
QTextStream* new_QTextStream(QIODevice*  device);
QTextStream* new_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode = QIODevice::ReadOnly);
void delete_QTextStream(QTextStream* obj) { delete obj; } 
   QTextCodec*  codec(QTextStream* theWrappedObject) const;
   void skipWhiteSpace(QTextStream* theWrappedObject);
   bool  generateByteOrderMark(QTextStream* theWrappedObject) const;
   void setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment);
   void setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate);
   QTextStream*  readShort(QTextStream* theWrappedObject, signed short&  i);
   int  fieldWidth(QTextStream* theWrappedObject) const;
   QTextStream*  writeFloat(QTextStream* theWrappedObject, float  f);
   bool  seek(QTextStream* theWrappedObject, qint64  pos);
   bool  autoDetectUnicode(QTextStream* theWrappedObject) const;
   QTextStream::FieldAlignment  fieldAlignment(QTextStream* theWrappedObject) const;
   void setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags);
   void setPadChar(QTextStream* theWrappedObject, QChar  ch);
   int  integerBase(QTextStream* theWrappedObject) const;
   bool  atEnd(QTextStream* theWrappedObject) const;
   QTextStream*  writeShort(QTextStream* theWrappedObject, signed short  i);
   QString  read(QTextStream* theWrappedObject, qint64  maxlen);
   QTextStream*  writeBoolean(QTextStream* theWrappedObject, QBool  b);
   QString  readLine(QTextStream* theWrappedObject, qint64  maxlen = 0);
   QTextStream*  readUShort(QTextStream* theWrappedObject, unsigned short&  i);
   void resetStatus(QTextStream* theWrappedObject);
   QIODevice*  device(QTextStream* theWrappedObject) const;
   QTextStream*  readLongLong(QTextStream* theWrappedObject, qlonglong&  i);
   QChar  padChar(QTextStream* theWrappedObject) const;
   QTextStream*  writeInt(QTextStream* theWrappedObject, signed int  i);
   void setFieldWidth(QTextStream* theWrappedObject, int  width);
   QTextStream*  writeString(QTextStream* theWrappedObject, const QString&  s);
   void flush(QTextStream* theWrappedObject);
   QString  readAll(QTextStream* theWrappedObject);
   QTextStream*  writeByte(QTextStream* theWrappedObject, char  ch);
   QTextStream::NumberFlags  numberFlags(QTextStream* theWrappedObject) const;
   QTextStream*  readUInt(QTextStream* theWrappedObject, unsigned int&  i);
   void setIntegerBase(QTextStream* theWrappedObject, int  base);
   QTextStream::RealNumberNotation  realNumberNotation(QTextStream* theWrappedObject) const;
   void setCodec(QTextStream* theWrappedObject, QTextCodec*  codec);
   int  realNumberPrecision(QTextStream* theWrappedObject) const;
   void setCodec(QTextStream* theWrappedObject, const char*  codecName);
   QTextStream*  writeByteArray(QTextStream* theWrappedObject, const QByteArray&  array);
   QTextStream*  readDouble(QTextStream* theWrappedObject, double&  f);
   void setStatus(QTextStream* theWrappedObject, QTextStream::Status  status);
   QTextStream*  writeDouble(QTextStream* theWrappedObject, double  f);
   qint64  pos(QTextStream* theWrappedObject) const;
   void setDevice(QTextStream* theWrappedObject, QIODevice*  device);
   QTextStream*  readFloat(QTextStream* theWrappedObject, float&  f);
   QTextStream::Status  status(QTextStream* theWrappedObject) const;
   void setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled);
   void setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation);
   QTextStream*  readInt(QTextStream* theWrappedObject, signed int&  i);
   void reset(QTextStream* theWrappedObject);
   void setRealNumberPrecision(QTextStream* theWrappedObject, int  precision);
   QTextStream*  readByte(QTextStream* theWrappedObject, char&  ch);
};

#endif // PYTHONQTWRAPPER_QTEXTSTREAM_H
