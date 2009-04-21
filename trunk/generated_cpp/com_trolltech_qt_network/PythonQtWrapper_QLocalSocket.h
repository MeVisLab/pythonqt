#ifndef PYTHONQTWRAPPER_QLOCALSOCKET_H
#define PYTHONQTWRAPPER_QLOCALSOCKET_H

#include <qlocalsocket.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocalsocket.h>
#include <qobject.h>

class PythonQtShell_QLocalSocket : public QLocalSocket
{
public:
    PythonQtShell_QLocalSocket(QObject*  parent = 0):QLocalSocket(parent),_wrapper(NULL) {};

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
virtual qint64  readData(char*  arg__1, qint64  arg__2);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  arg__1, qint64  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLocalSocket : public QLocalSocket
{ public:
inline qint64  promoted_readData(char*  arg__1, qint64  arg__2) { return QLocalSocket::readData(arg__1, arg__2); }
inline bool  promoted_canReadLine() const { return QLocalSocket::canReadLine(); }
inline bool  promoted_isSequential() const { return QLocalSocket::isSequential(); }
inline qint64  promoted_bytesToWrite() const { return QLocalSocket::bytesToWrite(); }
inline qint64  promoted_writeData(const char*  arg__1, qint64  arg__2) { return QLocalSocket::writeData(arg__1, arg__2); }
inline qint64  promoted_bytesAvailable() const { return QLocalSocket::bytesAvailable(); }
inline bool  promoted_waitForReadyRead(int  msecs = 30000) { return QLocalSocket::waitForReadyRead(msecs); }
inline void promoted_close() { QLocalSocket::close(); }
inline bool  promoted_waitForBytesWritten(int  msecs = 30000) { return QLocalSocket::waitForBytesWritten(msecs); }
};

class PythonQtWrapper_QLocalSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LocalSocketState LocalSocketError )
enum LocalSocketState{
  UnconnectedState = QLocalSocket::UnconnectedState,   ConnectingState = QLocalSocket::ConnectingState,   ConnectedState = QLocalSocket::ConnectedState,   ClosingState = QLocalSocket::ClosingState};
enum LocalSocketError{
  ConnectionRefusedError = QLocalSocket::ConnectionRefusedError,   PeerClosedError = QLocalSocket::PeerClosedError,   ServerNotFoundError = QLocalSocket::ServerNotFoundError,   SocketAccessError = QLocalSocket::SocketAccessError,   SocketResourceError = QLocalSocket::SocketResourceError,   SocketTimeoutError = QLocalSocket::SocketTimeoutError,   DatagramTooLargeError = QLocalSocket::DatagramTooLargeError,   ConnectionError = QLocalSocket::ConnectionError,   UnsupportedSocketOperationError = QLocalSocket::UnsupportedSocketOperationError,   UnknownSocketError = QLocalSocket::UnknownSocketError};
public slots:
QLocalSocket* new_QLocalSocket(QObject*  parent = 0);
void delete_QLocalSocket(QLocalSocket* obj) { delete obj; } 
   quintptr  socketDescriptor(QLocalSocket* theWrappedObject) const;
   void disconnectFromServer(QLocalSocket* theWrappedObject);
   qint64  readData(QLocalSocket* theWrappedObject, char*  arg__1, qint64  arg__2);
   bool  waitForDisconnected(QLocalSocket* theWrappedObject, int  msecs = 30000);
   void abort(QLocalSocket* theWrappedObject);
   void connectToServer(QLocalSocket* theWrappedObject, const QString&  name, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   bool  canReadLine(QLocalSocket* theWrappedObject) const;
   bool  isSequential(QLocalSocket* theWrappedObject) const;
   qint64  bytesToWrite(QLocalSocket* theWrappedObject) const;
   qint64  writeData(QLocalSocket* theWrappedObject, const char*  arg__1, qint64  arg__2);
   qint64  readBufferSize(QLocalSocket* theWrappedObject) const;
   QString  fullServerName(QLocalSocket* theWrappedObject) const;
   QLocalSocket::LocalSocketState  state(QLocalSocket* theWrappedObject) const;
   qint64  bytesAvailable(QLocalSocket* theWrappedObject) const;
   bool  waitForConnected(QLocalSocket* theWrappedObject, int  msecs = 30000);
   void setReadBufferSize(QLocalSocket* theWrappedObject, qint64  size);
   QLocalSocket::LocalSocketError  error(QLocalSocket* theWrappedObject) const;
   bool  isValid(QLocalSocket* theWrappedObject) const;
   QString  serverName(QLocalSocket* theWrappedObject) const;
   bool  waitForReadyRead(QLocalSocket* theWrappedObject, int  msecs = 30000);
   bool  setSocketDescriptor(QLocalSocket* theWrappedObject, quintptr  socketDescriptor, QLocalSocket::LocalSocketState  socketState = QLocalSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   bool  flush(QLocalSocket* theWrappedObject);
   void close(QLocalSocket* theWrappedObject);
   bool  waitForBytesWritten(QLocalSocket* theWrappedObject, int  msecs = 30000);
};

#endif // PYTHONQTWRAPPER_QLOCALSOCKET_H
