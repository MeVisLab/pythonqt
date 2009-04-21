#ifndef PYTHONQTWRAPPER_QHTTP_H
#define PYTHONQTWRAPPER_QHTTP_H

#include <qhttp.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhttp.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qtcpsocket.h>

class PythonQtShell_QHttp : public QHttp
{
public:
    PythonQtShell_QHttp(QObject*  parent = 0):QHttp(parent),_wrapper(NULL) {};
    PythonQtShell_QHttp(const QString&  hostname, QHttp::ConnectionMode  mode, unsigned short  port = 0, QObject*  parent = 0):QHttp(hostname, mode, port, parent),_wrapper(NULL) {};
    PythonQtShell_QHttp(const QString&  hostname, unsigned short  port = 80, QObject*  parent = 0):QHttp(hostname, port, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QHttp : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error ConnectionMode State )
enum Error{
  NoError = QHttp::NoError,   UnknownError = QHttp::UnknownError,   HostNotFound = QHttp::HostNotFound,   ConnectionRefused = QHttp::ConnectionRefused,   UnexpectedClose = QHttp::UnexpectedClose,   InvalidResponseHeader = QHttp::InvalidResponseHeader,   WrongContentLength = QHttp::WrongContentLength,   Aborted = QHttp::Aborted,   AuthenticationRequiredError = QHttp::AuthenticationRequiredError,   ProxyAuthenticationRequiredError = QHttp::ProxyAuthenticationRequiredError};
enum ConnectionMode{
  ConnectionModeHttp = QHttp::ConnectionModeHttp,   ConnectionModeHttps = QHttp::ConnectionModeHttps};
enum State{
  Unconnected = QHttp::Unconnected,   HostLookup = QHttp::HostLookup,   Connecting = QHttp::Connecting,   Sending = QHttp::Sending,   Reading = QHttp::Reading,   Connected = QHttp::Connected,   Closing = QHttp::Closing};
public slots:
QHttp* new_QHttp(QObject*  parent = 0);
QHttp* new_QHttp(const QString&  hostname, QHttp::ConnectionMode  mode, unsigned short  port = 0, QObject*  parent = 0);
QHttp* new_QHttp(const QString&  hostname, unsigned short  port = 80, QObject*  parent = 0);
void delete_QHttp(QHttp* obj) { delete obj; } 
   int  setProxy(QHttp* theWrappedObject, const QString&  host, int  port, const QString&  username = QString(), const QString&  password = QString());
   int  setSocket(QHttp* theWrappedObject, QTcpSocket*  socket);
   QHttpResponseHeader  lastResponse(QHttp* theWrappedObject) const;
   int  currentId(QHttp* theWrappedObject) const;
   QHttpRequestHeader  currentRequest(QHttp* theWrappedObject) const;
   QHttp::Error  error(QHttp* theWrappedObject) const;
   int  setProxy(QHttp* theWrappedObject, const QNetworkProxy&  proxy);
   qint64  bytesAvailable(QHttp* theWrappedObject) const;
   QHttp::State  state(QHttp* theWrappedObject) const;
   int  setUser(QHttp* theWrappedObject, const QString&  username, const QString&  password = QString());
   bool  hasPendingRequests(QHttp* theWrappedObject) const;
   int  setHost(QHttp* theWrappedObject, const QString&  hostname, unsigned short  port = 80);
   int  head(QHttp* theWrappedObject, const QString&  path);
   QIODevice*  currentDestinationDevice(QHttp* theWrappedObject) const;
   QIODevice*  currentSourceDevice(QHttp* theWrappedObject) const;
   int  get(QHttp* theWrappedObject, const QString&  path, QIODevice*  to = 0);
   int  request(QHttp* theWrappedObject, const QHttpRequestHeader&  header, QIODevice*  device = 0, QIODevice*  to = 0);
   int  setHost(QHttp* theWrappedObject, const QString&  hostname, QHttp::ConnectionMode  mode, unsigned short  port = 0);
   qint64  read(QHttp* theWrappedObject, char*  data, qint64  maxlen);
   void clearPendingRequests(QHttp* theWrappedObject);
   int  post(QHttp* theWrappedObject, const QString&  path, QIODevice*  data, QIODevice*  to = 0);
   QByteArray  readAll(QHttp* theWrappedObject);
   QString  errorString(QHttp* theWrappedObject) const;
   int  close(QHttp* theWrappedObject);
   int  request(QHttp* theWrappedObject, const QHttpRequestHeader&  header, const QByteArray&  data, QIODevice*  to = 0);
   int  post(QHttp* theWrappedObject, const QString&  path, const QByteArray&  data, QIODevice*  to = 0);
};

#endif // PYTHONQTWRAPPER_QHTTP_H
