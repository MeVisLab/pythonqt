#ifndef PYTHONQTWRAPPER_QNETWORKREQUEST_H
#define PYTHONQTWRAPPER_QNETWORKREQUEST_H

#include <qnetworkrequest.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qlist.h>
#include <qnetworkrequest.h>
#include <qurl.h>

class PythonQtWrapper_QNetworkRequest : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CacheLoadControl KnownHeaders Attribute )
enum CacheLoadControl{
  AlwaysNetwork = QNetworkRequest::AlwaysNetwork,   PreferNetwork = QNetworkRequest::PreferNetwork,   PreferCache = QNetworkRequest::PreferCache,   AlwaysCache = QNetworkRequest::AlwaysCache};
enum KnownHeaders{
  ContentTypeHeader = QNetworkRequest::ContentTypeHeader,   ContentLengthHeader = QNetworkRequest::ContentLengthHeader,   LocationHeader = QNetworkRequest::LocationHeader,   LastModifiedHeader = QNetworkRequest::LastModifiedHeader,   CookieHeader = QNetworkRequest::CookieHeader,   SetCookieHeader = QNetworkRequest::SetCookieHeader};
enum Attribute{
  HttpStatusCodeAttribute = QNetworkRequest::HttpStatusCodeAttribute,   HttpReasonPhraseAttribute = QNetworkRequest::HttpReasonPhraseAttribute,   RedirectionTargetAttribute = QNetworkRequest::RedirectionTargetAttribute,   ConnectionEncryptedAttribute = QNetworkRequest::ConnectionEncryptedAttribute,   CacheLoadControlAttribute = QNetworkRequest::CacheLoadControlAttribute,   CacheSaveControlAttribute = QNetworkRequest::CacheSaveControlAttribute,   User = QNetworkRequest::User,   UserMax = QNetworkRequest::UserMax};
public slots:
QNetworkRequest* new_QNetworkRequest(const QNetworkRequest&  other);
QNetworkRequest* new_QNetworkRequest(const QUrl&  url = QUrl());
void delete_QNetworkRequest(QNetworkRequest* obj) { delete obj; } 
   void setUrl(QNetworkRequest* theWrappedObject, const QUrl&  url);
   QVariant  attribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  defaultValue = QVariant()) const;
   void setHeader(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value);
   void setAttribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  value);
   bool  operator_equal(QNetworkRequest* theWrappedObject, const QNetworkRequest&  other) const;
   QVariant  header(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header) const;
   void setRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value);
   bool  hasRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName) const;
   QByteArray  rawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName) const;
   QList<QByteArray >  rawHeaderList(QNetworkRequest* theWrappedObject) const;
   QUrl  url(QNetworkRequest* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QNETWORKREQUEST_H
