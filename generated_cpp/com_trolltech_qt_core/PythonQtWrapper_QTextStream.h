#ifndef PYTHONQTWRAPPER_QTEXTSTREAM_H
#define PYTHONQTWRAPPER_QTEXTSTREAM_H

#include <qtextstream.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qtextstream.h>

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
   bool  atEnd(QTextStream* theWrappedObject) const;
   bool  autoDetectUnicode(QTextStream* theWrappedObject) const;
   QTextCodec*  codec(QTextStream* theWrappedObject) const;
   QIODevice*  device(QTextStream* theWrappedObject) const;
   QTextStream::FieldAlignment  fieldAlignment(QTextStream* theWrappedObject) const;
   int  fieldWidth(QTextStream* theWrappedObject) const;
   void flush(QTextStream* theWrappedObject);
   bool  generateByteOrderMark(QTextStream* theWrappedObject) const;
   int  integerBase(QTextStream* theWrappedObject) const;
   QTextStream::NumberFlags  numberFlags(QTextStream* theWrappedObject) const;
   QTextStream&  writeBoolean(QTextStream* theWrappedObject, QBool  b);
   QTextStream&  writeByte(QTextStream* theWrappedObject, char  ch);
   QTextStream&  writeByteArray(QTextStream* theWrappedObject, const QByteArray&  array);
   QTextStream&  writeString(QTextStream* theWrappedObject, const QString&  s);
   QTextStream&  writeDouble(QTextStream* theWrappedObject, double  f);
   QTextStream&  writeFloat(QTextStream* theWrappedObject, float  f);
   QTextStream&  writeInt(QTextStream* theWrappedObject, signed int  i);
   QTextStream&  writeShort(QTextStream* theWrappedObject, signed short  i);
   QTextStream&  readByte(QTextStream* theWrappedObject, char&  ch);
   QTextStream&  readDouble(QTextStream* theWrappedObject, double&  f);
   QTextStream&  readFloat(QTextStream* theWrappedObject, float&  f);
   QTextStream&  readLongLong(QTextStream* theWrappedObject, qlonglong&  i);
   QTextStream&  readInt(QTextStream* theWrappedObject, signed int&  i);
   QTextStream&  readShort(QTextStream* theWrappedObject, signed short&  i);
   QTextStream&  readUInt(QTextStream* theWrappedObject, unsigned int&  i);
   QTextStream&  readUShort(QTextStream* theWrappedObject, unsigned short&  i);
   QChar  padChar(QTextStream* theWrappedObject) const;
   qint64  pos(QTextStream* theWrappedObject) const;
   QString  read(QTextStream* theWrappedObject, qint64  maxlen);
   QString  readAll(QTextStream* theWrappedObject);
   QString  readLine(QTextStream* theWrappedObject, qint64  maxlen = 0);
   QTextStream::RealNumberNotation  realNumberNotation(QTextStream* theWrappedObject) const;
   int  realNumberPrecision(QTextStream* theWrappedObject) const;
   void reset(QTextStream* theWrappedObject);
   void resetStatus(QTextStream* theWrappedObject);
   bool  seek(QTextStream* theWrappedObject, qint64  pos);
   void setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled);
   void setCodec(QTextStream* theWrappedObject, QTextCodec*  codec);
   void setCodec(QTextStream* theWrappedObject, const char*  codecName);
   void setDevice(QTextStream* theWrappedObject, QIODevice*  device);
   void setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment);
   void setFieldWidth(QTextStream* theWrappedObject, int  width);
   void setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate);
   void setIntegerBase(QTextStream* theWrappedObject, int  base);
   void setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags);
   void setPadChar(QTextStream* theWrappedObject, QChar  ch);
   void setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation);
   void setRealNumberPrecision(QTextStream* theWrappedObject, int  precision);
   void setStatus(QTextStream* theWrappedObject, QTextStream::Status  status);
   void skipWhiteSpace(QTextStream* theWrappedObject);
   QTextStream::Status  status(QTextStream* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTSTREAM_H
