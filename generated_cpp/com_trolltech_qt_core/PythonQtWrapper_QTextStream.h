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
enum RealNumberNotation{
  SmartNotation = QTextStream::SmartNotation,   FixedNotation = QTextStream::FixedNotation,   ScientificNotation = QTextStream::ScientificNotation};
enum NumberFlag{
  ShowBase = QTextStream::ShowBase,   ForcePoint = QTextStream::ForcePoint,   ForceSign = QTextStream::ForceSign,   UppercaseBase = QTextStream::UppercaseBase,   UppercaseDigits = QTextStream::UppercaseDigits};
enum FieldAlignment{
  AlignLeft = QTextStream::AlignLeft,   AlignRight = QTextStream::AlignRight,   AlignCenter = QTextStream::AlignCenter,   AlignAccountingStyle = QTextStream::AlignAccountingStyle};
enum Status{
  Ok = QTextStream::Ok,   ReadPastEnd = QTextStream::ReadPastEnd,   ReadCorruptData = QTextStream::ReadCorruptData};
public slots:
QTextStream* new_QTextStream();
QTextStream* new_QTextStream(QIODevice*  device);
QTextStream* new_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode = QIODevice::ReadOnly);
void delete_QTextStream(QTextStream* obj) { delete obj; } 
   QTextStream&  writeShort(QTextStream* theWrappedObject, signed short  i);
   QString  read(QTextStream* theWrappedObject, qint64  maxlen);
   void flush(QTextStream* theWrappedObject);
   void setIntegerBase(QTextStream* theWrappedObject, int  base);
   QTextStream::NumberFlags  numberFlags(QTextStream* theWrappedObject) const;
   QTextStream&  writeDouble(QTextStream* theWrappedObject, double  f);
   void setPadChar(QTextStream* theWrappedObject, QChar  ch);
   void setRealNumberPrecision(QTextStream* theWrappedObject, int  precision);
   QTextStream&  readLongLong(QTextStream* theWrappedObject, qlonglong&  i);
   void setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation);
   QTextStream&  readFloat(QTextStream* theWrappedObject, float&  f);
   QTextStream::RealNumberNotation  realNumberNotation(QTextStream* theWrappedObject) const;
   QTextStream&  writeByteArray(QTextStream* theWrappedObject, const QByteArray&  array);
   QTextStream&  readUInt(QTextStream* theWrappedObject, unsigned int&  i);
   void setCodec(QTextStream* theWrappedObject, QTextCodec*  codec);
   void setDevice(QTextStream* theWrappedObject, QIODevice*  device);
   void setCodec(QTextStream* theWrappedObject, const char*  codecName);
   void setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled);
   qint64  pos(QTextStream* theWrappedObject) const;
   QTextStream&  writeInt(QTextStream* theWrappedObject, signed int  i);
   void setStatus(QTextStream* theWrappedObject, QTextStream::Status  status);
   QTextStream::Status  status(QTextStream* theWrappedObject) const;
   QIODevice*  device(QTextStream* theWrappedObject) const;
   bool  atEnd(QTextStream* theWrappedObject) const;
   QTextStream&  writeBoolean(QTextStream* theWrappedObject, QBool  b);
   void reset(QTextStream* theWrappedObject);
   void setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate);
   bool  generateByteOrderMark(QTextStream* theWrappedObject) const;
   QTextStream&  writeFloat(QTextStream* theWrappedObject, float  f);
   QTextCodec*  codec(QTextStream* theWrappedObject) const;
   QTextStream&  readDouble(QTextStream* theWrappedObject, double&  f);
   void skipWhiteSpace(QTextStream* theWrappedObject);
   int  integerBase(QTextStream* theWrappedObject) const;
   QTextStream&  readByte(QTextStream* theWrappedObject, char&  ch);
   QTextStream&  readShort(QTextStream* theWrappedObject, signed short&  i);
   QString  readLine(QTextStream* theWrappedObject, qint64  maxlen = 0);
   QTextStream&  writeString(QTextStream* theWrappedObject, const QString&  s);
   int  realNumberPrecision(QTextStream* theWrappedObject) const;
   int  fieldWidth(QTextStream* theWrappedObject) const;
   bool  seek(QTextStream* theWrappedObject, qint64  pos);
   bool  autoDetectUnicode(QTextStream* theWrappedObject) const;
   QTextStream::FieldAlignment  fieldAlignment(QTextStream* theWrappedObject) const;
   QChar  padChar(QTextStream* theWrappedObject) const;
   void resetStatus(QTextStream* theWrappedObject);
   void setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags);
   QTextStream&  readInt(QTextStream* theWrappedObject, signed int&  i);
   QTextStream&  writeByte(QTextStream* theWrappedObject, char  ch);
   QTextStream&  readUShort(QTextStream* theWrappedObject, unsigned short&  i);
   QString  readAll(QTextStream* theWrappedObject);
   void setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment);
   void setFieldWidth(QTextStream* theWrappedObject, int  width);
};

#endif // PYTHONQTWRAPPER_QTEXTSTREAM_H
