#ifndef PYTHONQTWRAPPER_QHTTP_H
#define PYTHONQTWRAPPER_QHTTP_H

#include <qhttp.h>
#include <QObject>

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
   qint64  bytesAvailable(QHttp* theWrappedObject) const;
   void clearPendingRequests(QHttp* theWrappedObject);
   int  close(QHttp* theWrappedObject);
   QIODevice*  currentDestinationDevice(QHttp* theWrappedObject) const;
   int  currentId(QHttp* theWrappedObject) const;
   QHttpRequestHeader  currentRequest(QHttp* theWrappedObject) const;
   QIODevice*  currentSourceDevice(QHttp* theWrappedObject) const;
   QHttp::Error  error(QHttp* theWrappedObject) const;
   QString  errorString(QHttp* theWrappedObject) const;
   int  get(QHttp* theWrappedObject, const QString&  path, QIODevice*  to = 0);
   bool  hasPendingRequests(QHttp* theWrappedObject) const;
   int  head(QHttp* theWrappedObject, const QString&  path);
   QHttpResponseHeader  lastResponse(QHttp* theWrappedObject) const;
   int  post(QHttp* theWrappedObject, const QString&  path, QIODevice*  data, QIODevice*  to = 0);
   int  post(QHttp* theWrappedObject, const QString&  path, const QByteArray&  data, QIODevice*  to = 0);
   qint64  read(QHttp* theWrappedObject, char*  data, qint64  maxlen);
   QByteArray  readAll(QHttp* theWrappedObject);
   int  request(QHttp* theWrappedObject, const QHttpRequestHeader&  header, QIODevice*  device = 0, QIODevice*  to = 0);
   int  request(QHttp* theWrappedObject, const QHttpRequestHeader&  header, const QByteArray&  data, QIODevice*  to = 0);
   int  setHost(QHttp* theWrappedObject, const QString&  hostname, QHttp::ConnectionMode  mode, unsigned short  port = 0);
   int  setHost(QHttp* theWrappedObject, const QString&  hostname, unsigned short  port = 80);
   int  setProxy(QHttp* theWrappedObject, const QNetworkProxy&  proxy);
   int  setProxy(QHttp* theWrappedObject, const QString&  host, int  port, const QString&  username = QString(), const QString&  password = QString());
   int  setSocket(QHttp* theWrappedObject, QTcpSocket*  socket);
   int  setUser(QHttp* theWrappedObject, const QString&  username, const QString&  password = QString());
   QHttp::State  state(QHttp* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QHTTP_H
