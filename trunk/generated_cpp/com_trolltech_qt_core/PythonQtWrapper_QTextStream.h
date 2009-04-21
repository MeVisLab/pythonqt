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
   QTextStream::RealNumberNotation  realNumberNotation(QTextStream* theWrappedObject) const;
   bool  seek(QTextStream* theWrappedObject, qint64  pos);
   QString  readAll(QTextStream* theWrappedObject);
   QTextStream&  readShort(QTextStream* theWrappedObject, signed short&  i);
   QTextStream&  readUShort(QTextStream* theWrappedObject, unsigned short&  i);
   void setCodec(QTextStream* theWrappedObject, QTextCodec*  codec);
   QTextStream::NumberFlags  numberFlags(QTextStream* theWrappedObject) const;
   void setCodec(QTextStream* theWrappedObject, const char*  codecName);
   void setStatus(QTextStream* theWrappedObject, QTextStream::Status  status);
   QTextStream&  readByte(QTextStream* theWrappedObject, char&  ch);
   void skipWhiteSpace(QTextStream* theWrappedObject);
   qint64  pos(QTextStream* theWrappedObject) const;
   void setDevice(QTextStream* theWrappedObject, QIODevice*  device);
   void setRealNumberPrecision(QTextStream* theWrappedObject, int  precision);
   bool  atEnd(QTextStream* theWrappedObject) const;
   QTextStream::Status  status(QTextStream* theWrappedObject) const;
   QTextStream&  writeDouble(QTextStream* theWrappedObject, double  f);
   int  realNumberPrecision(QTextStream* theWrappedObject) const;
   bool  generateByteOrderMark(QTextStream* theWrappedObject) const;
   bool  autoDetectUnicode(QTextStream* theWrappedObject) const;
   QTextStream::FieldAlignment  fieldAlignment(QTextStream* theWrappedObject) const;
   QTextCodec*  codec(QTextStream* theWrappedObject) const;
   void setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags);
   QTextStream&  writeByteArray(QTextStream* theWrappedObject, const QByteArray&  array);
   int  fieldWidth(QTextStream* theWrappedObject) const;
   void setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled);
   QTextStream&  writeBoolean(QTextStream* theWrappedObject, QBool  b);
   int  integerBase(QTextStream* theWrappedObject) const;
   QTextStream&  writeInt(QTextStream* theWrappedObject, signed int  i);
   void setIntegerBase(QTextStream* theWrappedObject, int  base);
   void setPadChar(QTextStream* theWrappedObject, QChar  ch);
   QString  read(QTextStream* theWrappedObject, qint64  maxlen);
   QTextStream&  writeString(QTextStream* theWrappedObject, const QString&  s);
   QTextStream&  readInt(QTextStream* theWrappedObject, signed int&  i);
   QString  readLine(QTextStream* theWrappedObject, qint64  maxlen = 0);
   void setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment);
   QIODevice*  device(QTextStream* theWrappedObject) const;
   void resetStatus(QTextStream* theWrappedObject);
   QChar  padChar(QTextStream* theWrappedObject) const;
   void reset(QTextStream* theWrappedObject);
   void setFieldWidth(QTextStream* theWrappedObject, int  width);
   void setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate);
   QTextStream&  writeFloat(QTextStream* theWrappedObject, float  f);
   QTextStream&  writeShort(QTextStream* theWrappedObject, signed short  i);
   QTextStream&  readLongLong(QTextStream* theWrappedObject, qlonglong&  i);
   void flush(QTextStream* theWrappedObject);
   QTextStream&  readFloat(QTextStream* theWrappedObject, float&  f);
   QTextStream&  writeByte(QTextStream* theWrappedObject, char  ch);
   QTextStream&  readDouble(QTextStream* theWrappedObject, double&  f);
   QTextStream&  readUInt(QTextStream* theWrappedObject, unsigned int&  i);
   void setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation);
};

#endif // PYTHONQTWRAPPER_QTEXTSTREAM_H
