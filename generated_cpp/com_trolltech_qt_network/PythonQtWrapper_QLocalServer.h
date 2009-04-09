#ifndef PYTHONQTWRAPPER_QLOCALSERVER_H
#define PYTHONQTWRAPPER_QLOCALSERVER_H

#include <qlocalserver.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocalserver.h>
#include <qlocalsocket.h>
#include <qobject.h>

class PythonQtWrapper_QLocalServer : public QObject
{ Q_OBJECT
public:
public slots:
QLocalServer* new_QLocalServer(QObject*  parent = 0);
void delete_QLocalServer(QLocalServer* obj) { delete obj; } 
   void close(QLocalServer* theWrappedObject);
   QString  errorString(QLocalServer* theWrappedObject) const;
   QString  fullServerName(QLocalServer* theWrappedObject) const;
   bool  hasPendingConnections(QLocalServer* theWrappedObject) const;
   bool  isListening(QLocalServer* theWrappedObject) const;
   bool  listen(QLocalServer* theWrappedObject, const QString&  name);
   int  maxPendingConnections(QLocalServer* theWrappedObject) const;
   QLocalSocket*  nextPendingConnection(QLocalServer* theWrappedObject);
   QAbstractSocket::SocketError  serverError(QLocalServer* theWrappedObject) const;
   QString  serverName(QLocalServer* theWrappedObject) const;
   void setMaxPendingConnections(QLocalServer* theWrappedObject, int  numConnections);
   bool  waitForNewConnection(QLocalServer* theWrappedObject, int  msec = 0, bool*  timedOut = 0);
};

#endif // PYTHONQTWRAPPER_QLOCALSERVER_H
