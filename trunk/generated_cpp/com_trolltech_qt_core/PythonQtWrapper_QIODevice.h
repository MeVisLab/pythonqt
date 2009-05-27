#ifndef PYTHONQTWRAPPER_QIODEVICE_H
#define PYTHONQTWRAPPER_QIODEVICE_H

#include <qiodevice.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtShell_QIODevice : public QIODevice
{
public:
    PythonQtShell_QIODevice():QIODevice(),_wrapper(NULL) {};
    PythonQtShell_QIODevice(QObject*  parent):QIODevice(parent),_wrapper(NULL) {};

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void close();
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIODevice : public QIODevice
{ public:
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return QIODevice::readLineData(data, maxlen); }
inline void promoted_close() { QIODevice::close(); }
inline qint64  promoted_bytesAvailable() const { return QIODevice::bytesAvailable(); }
inline bool  promoted_open(QIODevice::OpenMode  mode) { return QIODevice::open(mode); }
inline bool  promoted_atEnd() const { return QIODevice::atEnd(); }
inline bool  promoted_seek(qint64  pos) { return QIODevice::seek(pos); }
inline bool  promoted_isSequential() const { return QIODevice::isSequential(); }
inline qint64  promoted_bytesToWrite() const { return QIODevice::bytesToWrite(); }
inline bool  promoted_canReadLine() const { return QIODevice::canReadLine(); }
inline bool  promoted_waitForBytesWritten(int  msecs) { return QIODevice::waitForBytesWritten(msecs); }
inline bool  promoted_waitForReadyRead(int  msecs) { return QIODevice::waitForReadyRead(msecs); }
inline qint64  promoted_pos() const { return QIODevice::pos(); }
inline bool  promoted_reset() { return QIODevice::reset(); }
inline qint64  promoted_size() const { return QIODevice::size(); }
};

class PythonQtWrapper_QIODevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OpenModeFlag )
Q_FLAGS(OpenMode )
enum OpenModeFlag{
  NotOpen = QIODevice::NotOpen,   ReadOnly = QIODevice::ReadOnly,   WriteOnly = QIODevice::WriteOnly,   ReadWrite = QIODevice::ReadWrite,   Append = QIODevice::Append,   Truncate = QIODevice::Truncate,   Text = QIODevice::Text,   Unbuffered = QIODevice::Unbuffered};
Q_DECLARE_FLAGS(OpenMode, OpenModeFlag)
public slots:
QIODevice* new_QIODevice();
QIODevice* new_QIODevice(QObject*  parent);
void delete_QIODevice(QIODevice* obj) { delete obj; } 
   qint64  readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen);
   bool  isOpen(QIODevice* theWrappedObject) const;
   void close(QIODevice* theWrappedObject);
   qint64  bytesAvailable(QIODevice* theWrappedObject) const;
   QIODevice::OpenMode  openMode(QIODevice* theWrappedObject) const;
   bool  isReadable(QIODevice* theWrappedObject) const;
   void setTextModeEnabled(QIODevice* theWrappedObject, bool  enabled);
   bool  open(QIODevice* theWrappedObject, QIODevice::OpenMode  mode);
   bool  atEnd(QIODevice* theWrappedObject) const;
   bool  seek(QIODevice* theWrappedObject, qint64  pos);
   bool  getChar(QIODevice* theWrappedObject, char*  c);
   bool  isSequential(QIODevice* theWrappedObject) const;
   QByteArray  readLine(QIODevice* theWrappedObject, qint64  maxlen = 0);
   qint64  bytesToWrite(QIODevice* theWrappedObject) const;
   qint64  write(QIODevice* theWrappedObject, const QByteArray&  data);
   bool  canReadLine(QIODevice* theWrappedObject) const;
   void ungetChar(QIODevice* theWrappedObject, char  c);
   bool  waitForBytesWritten(QIODevice* theWrappedObject, int  msecs);
   bool  waitForReadyRead(QIODevice* theWrappedObject, int  msecs);
   bool  isWritable(QIODevice* theWrappedObject) const;
   qint64  pos(QIODevice* theWrappedObject) const;
   bool  putChar(QIODevice* theWrappedObject, char  c);
   bool  reset(QIODevice* theWrappedObject);
   QString  errorString(QIODevice* theWrappedObject) const;
   QByteArray  peek(QIODevice* theWrappedObject, qint64  maxlen);
   QByteArray  read(QIODevice* theWrappedObject, qint64  maxlen);
   QByteArray  readAll(QIODevice* theWrappedObject);
   qint64  size(QIODevice* theWrappedObject) const;
   bool  isTextModeEnabled(QIODevice* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QIODEVICE_H
