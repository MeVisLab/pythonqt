#ifndef PYTHONQTWRAPPER_QDATASTREAM_H
#define PYTHONQTWRAPPER_QDATASTREAM_H

#include <qdatastream.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qiodevice.h>

class PythonQtShell_QDataStream : public QDataStream
{
public:
    PythonQtShell_QDataStream():QDataStream(),_wrapper(NULL) {};
    PythonQtShell_QDataStream(QByteArray*  arg__1, QIODevice::OpenMode  flags):QDataStream(arg__1, flags),_wrapper(NULL) {};
    PythonQtShell_QDataStream(QIODevice*  arg__1):QDataStream(arg__1),_wrapper(NULL) {};
    PythonQtShell_QDataStream(const QByteArray&  arg__1):QDataStream(arg__1),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDataStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Version Status )
enum Version{
  Qt_1_0 = QDataStream::Qt_1_0,   Qt_2_0 = QDataStream::Qt_2_0,   Qt_2_1 = QDataStream::Qt_2_1,   Qt_3_0 = QDataStream::Qt_3_0,   Qt_3_1 = QDataStream::Qt_3_1,   Qt_3_3 = QDataStream::Qt_3_3,   Qt_4_0 = QDataStream::Qt_4_0,   Qt_4_1 = QDataStream::Qt_4_1,   Qt_4_2 = QDataStream::Qt_4_2,   Qt_4_3 = QDataStream::Qt_4_3,   Qt_4_4 = QDataStream::Qt_4_4};
enum Status{
  Ok = QDataStream::Ok,   ReadPastEnd = QDataStream::ReadPastEnd,   ReadCorruptData = QDataStream::ReadCorruptData};
public slots:
QDataStream* new_QDataStream();
QDataStream* new_QDataStream(QByteArray*  arg__1, QIODevice::OpenMode  flags);
QDataStream* new_QDataStream(QIODevice*  arg__1);
QDataStream* new_QDataStream(const QByteArray&  arg__1);
void delete_QDataStream(QDataStream* obj) { delete obj; } 
   void setStatus(QDataStream* theWrappedObject, QDataStream::Status  status);
   QDataStream&  readUInt(QDataStream* theWrappedObject, unsigned int&  i);
   QDataStream&  readULongLong(QDataStream* theWrappedObject, quint64&  i);
   bool  atEnd(QDataStream* theWrappedObject) const;
   void setDevice(QDataStream* theWrappedObject, QIODevice*  arg__1);
   int  version(QDataStream* theWrappedObject) const;
   QDataStream&  readUShort(QDataStream* theWrappedObject, unsigned short&  i);
   QDataStream&  readDouble(QDataStream* theWrappedObject, double&  f);
   void resetStatus(QDataStream* theWrappedObject);
   void setVersion(QDataStream* theWrappedObject, int  arg__1);
   QDataStream&  readBoolean(QDataStream* theWrappedObject, bool&  i);
   QDataStream&  readLongLong(QDataStream* theWrappedObject, qint64&  i);
   QDataStream&  readFloat(QDataStream* theWrappedObject, float&  f);
   QDataStream&  writeFloat(QDataStream* theWrappedObject, float  f);
   QDataStream&  readByte(QDataStream* theWrappedObject, unsigned char&  i);
   QDataStream&  writeDouble(QDataStream* theWrappedObject, double  f);
   QDataStream&  writeShort(QDataStream* theWrappedObject, short  i);
   QDataStream&  writeLongLong(QDataStream* theWrappedObject, qint64  i);
   QDataStream&  writeBoolean(QDataStream* theWrappedObject, bool  i);
   QIODevice*  device(QDataStream* theWrappedObject) const;
   QDataStream&  writeInt(QDataStream* theWrappedObject, int  i);
   QDataStream&  readShort(QDataStream* theWrappedObject, short&  i);
   int  skipRawData(QDataStream* theWrappedObject, int  len);
   void unsetDevice(QDataStream* theWrappedObject);
   QDataStream::Status  status(QDataStream* theWrappedObject) const;
   QDataStream&  readInt(QDataStream* theWrappedObject, int&  i);
   QDataStream&  writeByte(QDataStream* theWrappedObject, unsigned char  i);
};

#endif // PYTHONQTWRAPPER_QDATASTREAM_H
