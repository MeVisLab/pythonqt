#ifndef PYTHONQTWRAPPER_QNETWORKPROXY_H
#define PYTHONQTWRAPPER_QNETWORKPROXY_H

#include <qnetworkproxy.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qnetworkproxy.h>

class PythonQtWrapper_QNetworkProxy : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ProxyType )
enum ProxyType{
  DefaultProxy = QNetworkProxy::DefaultProxy,   Socks5Proxy = QNetworkProxy::Socks5Proxy,   NoProxy = QNetworkProxy::NoProxy,   HttpProxy = QNetworkProxy::HttpProxy,   HttpCachingProxy = QNetworkProxy::HttpCachingProxy,   FtpCachingProxy = QNetworkProxy::FtpCachingProxy};
public slots:
QNetworkProxy* new_QNetworkProxy();
QNetworkProxy* new_QNetworkProxy(QNetworkProxy::ProxyType  type, const QString&  hostName = QString(), unsigned short  port = 0, const QString&  user = QString(), const QString&  password = QString());
QNetworkProxy* new_QNetworkProxy(const QNetworkProxy&  other);
void delete_QNetworkProxy(QNetworkProxy* obj) { delete obj; } 
   QString  password(QNetworkProxy* theWrappedObject) const;
   QString  hostName(QNetworkProxy* theWrappedObject) const;
   bool  operator_equal(QNetworkProxy* theWrappedObject, const QNetworkProxy&  other) const;
   void setUser(QNetworkProxy* theWrappedObject, const QString&  userName);
   QNetworkProxy::ProxyType  type(QNetworkProxy* theWrappedObject) const;
   void setPort(QNetworkProxy* theWrappedObject, unsigned short  port);
   bool  isTransparentProxy(QNetworkProxy* theWrappedObject) const;
   void setHostName(QNetworkProxy* theWrappedObject, const QString&  hostName);
   QNetworkProxy  static_QNetworkProxy_applicationProxy();
   unsigned short  port(QNetworkProxy* theWrappedObject) const;
   bool  isCachingProxy(QNetworkProxy* theWrappedObject) const;
   void static_QNetworkProxy_setApplicationProxy(const QNetworkProxy&  proxy);
   void setType(QNetworkProxy* theWrappedObject, QNetworkProxy::ProxyType  type);
   QString  user(QNetworkProxy* theWrappedObject) const;
   void setPassword(QNetworkProxy* theWrappedObject, const QString&  password);
};

#endif // PYTHONQTWRAPPER_QNETWORKPROXY_H
