#ifndef PYTHONQTWRAPPER_QLOCALSERVER_H
#define PYTHONQTWRAPPER_QLOCALSERVER_H

#include <qlocalserver.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocalserver.h>
#include <qlocalsocket.h>
#include <qobject.h>

class PythonQtShell_QLocalServer : public QLocalServer
{
public:
    PythonQtShell_QLocalServer(QObject*  parent = 0):QLocalServer(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  hasPendingConnections() const;
virtual void incomingConnection(quintptr  socketDescriptor);
virtual QLocalSocket*  nextPendingConnection();
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLocalServer : public QLocalServer
{ public:
inline QLocalSocket*  promoted_nextPendingConnection() { return QLocalServer::nextPendingConnection(); }
inline bool  promoted_hasPendingConnections() const { return QLocalServer::hasPendingConnections(); }
inline void promoted_incomingConnection(quintptr  socketDescriptor) { QLocalServer::incomingConnection(socketDescriptor); }
};

class PythonQtWrapper_QLocalServer : public QObject
{ Q_OBJECT
public:
public slots:
QLocalServer* new_QLocalServer(QObject*  parent = 0);
void delete_QLocalServer(QLocalServer* obj) { delete obj; } 
   bool  listen(QLocalServer* theWrappedObject, const QString&  name);
   int  maxPendingConnections(QLocalServer* theWrappedObject) const;
   QLocalSocket*  nextPendingConnection(QLocalServer* theWrappedObject);
   void close(QLocalServer* theWrappedObject);
   QString  errorString(QLocalServer* theWrappedObject) const;
   void setMaxPendingConnections(QLocalServer* theWrappedObject, int  numConnections);
   bool  hasPendingConnections(QLocalServer* theWrappedObject) const;
   bool  isListening(QLocalServer* theWrappedObject) const;
   QAbstractSocket::SocketError  serverError(QLocalServer* theWrappedObject) const;
   QString  fullServerName(QLocalServer* theWrappedObject) const;
   void incomingConnection(QLocalServer* theWrappedObject, quintptr  socketDescriptor);
   bool  waitForNewConnection(QLocalServer* theWrappedObject, int  msec = 0, bool*  timedOut = 0);
   QString  serverName(QLocalServer* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QLOCALSERVER_H
