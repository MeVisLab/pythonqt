#ifndef PYTHONQTWRAPPER_QNETWORKREPLY_H
#define PYTHONQTWRAPPER_QNETWORKREPLY_H

#include <qnetworkreply.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qurl.h>

class PythonQtWrapper_QNetworkReply : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QNetworkReply(QNetworkReply* obj) { delete obj; } 
   void abort(QNetworkReply* theWrappedObject);
   QVariant  attribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code) const;
   void close(QNetworkReply* theWrappedObject);
   QNetworkReply::NetworkError  error(QNetworkReply* theWrappedObject) const;
   bool  hasRawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const;
   QVariant  header(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header) const;
   bool  isSequential(QNetworkReply* theWrappedObject) const;
   QNetworkAccessManager*  manager(QNetworkReply* theWrappedObject) const;
   QNetworkAccessManager::Operation  operation(QNetworkReply* theWrappedObject) const;
   QByteArray  rawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const;
   QList<QByteArray >  rawHeaderList(QNetworkReply* theWrappedObject) const;
   qint64  readBufferSize(QNetworkReply* theWrappedObject) const;
   QNetworkRequest  request(QNetworkReply* theWrappedObject) const;
   void setReadBufferSize(QNetworkReply* theWrappedObject, qint64  size);
   QUrl  url(QNetworkReply* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QNETWORKREPLY_H
