#ifndef PYTHONQTWRAPPER_QNETWORKACCESSMANAGER_H
#define PYTHONQTWRAPPER_QNETWORKACCESSMANAGER_H

#include <qnetworkaccessmanager.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkcookie.h>
#include <qnetworkproxy.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>

class PythonQtShell_QNetworkAccessManager : public QNetworkAccessManager
{
public:
    PythonQtShell_QNetworkAccessManager(QObject*  parent = 0):QNetworkAccessManager(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual QNetworkReply*  createRequest(QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = 0);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkAccessManager : public QNetworkAccessManager
{ public:
inline QNetworkReply*  promoted_createRequest(QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = 0) { return QNetworkAccessManager::createRequest(op, request, outgoingData); }
};

class PythonQtWrapper_QNetworkAccessManager : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Operation )
enum Operation{
  HeadOperation = QNetworkAccessManager::HeadOperation,   GetOperation = QNetworkAccessManager::GetOperation,   PutOperation = QNetworkAccessManager::PutOperation,   PostOperation = QNetworkAccessManager::PostOperation,   UnknownOperation = QNetworkAccessManager::UnknownOperation};
public slots:
QNetworkAccessManager* new_QNetworkAccessManager(QObject*  parent = 0);
void delete_QNetworkAccessManager(QNetworkAccessManager* obj) { delete obj; } 
   QNetworkReply*  get(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request);
   QNetworkProxy  proxy(QNetworkAccessManager* theWrappedObject) const;
   QNetworkCookieJar*  cookieJar(QNetworkAccessManager* theWrappedObject) const;
   void setCookieJar(QNetworkAccessManager* theWrappedObject, QNetworkCookieJar*  cookieJar);
   QNetworkReply*  post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data);
   QNetworkReply*  post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data);
   QNetworkReply*  put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data);
   void setProxy(QNetworkAccessManager* theWrappedObject, const QNetworkProxy&  proxy);
   QNetworkReply*  head(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request);
   QNetworkReply*  createRequest(QNetworkAccessManager* theWrappedObject, QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = 0);
   QNetworkReply*  put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data);
};

#endif // PYTHONQTWRAPPER_QNETWORKACCESSMANAGER_H
