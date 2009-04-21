#ifndef PYTHONQTWRAPPER_QBUFFER_H
#define PYTHONQTWRAPPER_QBUFFER_H

#include <qbuffer.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbuffer.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtShell_QBuffer : public QBuffer
{
public:
    PythonQtShell_QBuffer(QByteArray*  buf, QObject*  parent = 0):QBuffer(buf, parent),_wrapper(NULL) {};
    PythonQtShell_QBuffer(QObject*  parent = 0):QBuffer(parent),_wrapper(NULL) {};

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
virtual bool  open(QIODevice::OpenMode  openMode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  off);
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QBuffer : public QBuffer
{ public:
inline void promoted_close() { QBuffer::close(); }
inline qint64  promoted_pos() const { return QBuffer::pos(); }
inline bool  promoted_seek(qint64  off) { return QBuffer::seek(off); }
inline bool  promoted_canReadLine() const { return QBuffer::canReadLine(); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QBuffer::readData(data, maxlen); }
inline bool  promoted_atEnd() const { return QBuffer::atEnd(); }
inline bool  promoted_open(QIODevice::OpenMode  openMode) { return QBuffer::open(openMode); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QBuffer::writeData(data, len); }
inline qint64  promoted_size() const { return QBuffer::size(); }
};

class PythonQtWrapper_QBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QBuffer* new_QBuffer(QByteArray*  buf, QObject*  parent = 0);
QBuffer* new_QBuffer(QObject*  parent = 0);
void delete_QBuffer(QBuffer* obj) { delete obj; } 
   void close(QBuffer* theWrappedObject);
   qint64  pos(QBuffer* theWrappedObject) const;
   bool  seek(QBuffer* theWrappedObject, qint64  off);
   bool  canReadLine(QBuffer* theWrappedObject) const;
   qint64  readData(QBuffer* theWrappedObject, char*  data, qint64  maxlen);
   bool  atEnd(QBuffer* theWrappedObject) const;
   bool  open(QBuffer* theWrappedObject, QIODevice::OpenMode  openMode);
   void setBuffer(QBuffer* theWrappedObject, QByteArray*  a);
   void setData(QBuffer* theWrappedObject, const QByteArray&  data);
   qint64  writeData(QBuffer* theWrappedObject, const char*  data, qint64  len);
   qint64  size(QBuffer* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QBUFFER_H
