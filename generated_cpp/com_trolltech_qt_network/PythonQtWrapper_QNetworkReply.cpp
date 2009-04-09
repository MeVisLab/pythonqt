#include "PythonQtWrapper_QNetworkReply.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qurl.h>

void PythonQtWrapper_QNetworkReply::abort(QNetworkReply* theWrappedObject)
{
theWrappedObject->abort();
}

QVariant  PythonQtWrapper_QNetworkReply::attribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code) const
{
return theWrappedObject->attribute(code);
}

void PythonQtWrapper_QNetworkReply::close(QNetworkReply* theWrappedObject)
{
theWrappedObject->close();
}

QNetworkReply::NetworkError  PythonQtWrapper_QNetworkReply::error(QNetworkReply* theWrappedObject) const
{
return theWrappedObject->error();
}

bool  PythonQtWrapper_QNetworkReply::hasRawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const
{
return theWrappedObject->hasRawHeader(headerName);
}

QVariant  PythonQtWrapper_QNetworkReply::header(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header) const
{
return theWrappedObject->header(header);
}

bool  PythonQtWrapper_QNetworkReply::isSequential(QNetworkReply* theWrappedObject) const
{
return theWrappedObject->isSequential();
}

QNetworkAccessManager*  PythonQtWrapper_QNetworkReply::manager(QNetworkReply* theWrappedObject) const
{
return theWrappedObject->manager();
}

QNetworkAccessManager::Operation  PythonQtWrapper_QNetworkReply::operation(QNetworkReply* theWrappedObject) const
{
return theWrappedObject->operation();
}

QByteArray  PythonQtWrapper_QNetworkReply::rawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const
{
return theWrappedObject->rawHeader(headerName);
}

QList<QByteArray >  PythonQtWrapper_QNetworkReply::rawHeaderList(QNetworkReply* theWrappedObject) const
{
return theWrappedObject->rawHeaderList();
}

qint64  PythonQtWrapper_QNetworkReply::readBufferSize(QNetworkReply* theWrappedObject) const
{
return theWrappedObject->readBufferSize();
}

QNetworkRequest  PythonQtWrapper_QNetworkReply::request(QNetworkReply* theWrappedObject) const
{
return theWrappedObject->request();
}

void PythonQtWrapper_QNetworkReply::setReadBufferSize(QNetworkReply* theWrappedObject, qint64  size)
{
theWrappedObject->setReadBufferSize(size);
}

QUrl  PythonQtWrapper_QNetworkReply::url(QNetworkReply* theWrappedObject) const
{
return theWrappedObject->url();
}

