#ifndef PYTHONQTWRAPPER_QTCPSERVER_H
#define PYTHONQTWRAPPER_QTCPSERVER_H

#include <qtcpserver.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qtcpserver.h>
#include <qtcpsocket.h>

class PythonQtShell_QTcpServer : public QTcpServer
{
public:
    PythonQtShell_QTcpServer(QObject*  parent = 0):QTcpServer(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  hasPendingConnections() const;
virtual void incomingConnection(int  handle);
virtual QTcpSocket*  nextPendingConnection();
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTcpServer : public QTcpServer
{ public:
inline void promoted_incomingConnection(int  handle) { QTcpServer::incomingConnection(handle); }
inline bool  promoted_hasPendingConnections() const { return QTcpServer::hasPendingConnections(); }
inline QTcpSocket*  promoted_nextPendingConnection() { return QTcpServer::nextPendingConnection(); }
};

class PythonQtWrapper_QTcpServer : public QObject
{ Q_OBJECT
public:
public slots:
QTcpServer* new_QTcpServer(QObject*  parent = 0);
void delete_QTcpServer(QTcpServer* obj) { delete obj; } 
   int  socketDescriptor(QTcpServer* theWrappedObject) const;
   QAbstractSocket::SocketError  serverError(QTcpServer* theWrappedObject) const;
   unsigned short  serverPort(QTcpServer* theWrappedObject) const;
   bool  isListening(QTcpServer* theWrappedObject) const;
   QString  errorString(QTcpServer* theWrappedObject) const;
   QNetworkProxy  proxy(QTcpServer* theWrappedObject) const;
   bool  waitForNewConnection(QTcpServer* theWrappedObject, int  msec = 0, bool*  timedOut = 0);
   bool  setSocketDescriptor(QTcpServer* theWrappedObject, int  socketDescriptor);
   void incomingConnection(QTcpServer* theWrappedObject, int  handle);
   int  maxPendingConnections(QTcpServer* theWrappedObject) const;
   void close(QTcpServer* theWrappedObject);
   bool  listen(QTcpServer* theWrappedObject, const QHostAddress&  address = QHostAddress::Any, unsigned short  port = 0);
   void setProxy(QTcpServer* theWrappedObject, const QNetworkProxy&  networkProxy);
   bool  hasPendingConnections(QTcpServer* theWrappedObject) const;
   QTcpSocket*  nextPendingConnection(QTcpServer* theWrappedObject);
   void setMaxPendingConnections(QTcpServer* theWrappedObject, int  numConnections);
   QHostAddress  serverAddress(QTcpServer* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTCPSERVER_H
