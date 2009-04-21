#ifndef PYTHONQTWRAPPER_QNETWORKCOOKIEJAR_H
#define PYTHONQTWRAPPER_QNETWORKCOOKIEJAR_H

#include <qnetworkcookie.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qnetworkcookie.h>
#include <qobject.h>
#include <qurl.h>

class PythonQtShell_QNetworkCookieJar : public QNetworkCookieJar
{
public:
    PythonQtShell_QNetworkCookieJar(QObject*  parent = 0):QNetworkCookieJar(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual QList<QNetworkCookie >  cookiesForUrl(const QUrl&  url) const;
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList, const QUrl&  url);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkCookieJar : public QNetworkCookieJar
{ public:
inline QList<QNetworkCookie >  promoted_cookiesForUrl(const QUrl&  url) const { return QNetworkCookieJar::cookiesForUrl(url); }
inline bool  promoted_setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList, const QUrl&  url) { return QNetworkCookieJar::setCookiesFromUrl(cookieList, url); }
};

class PythonQtWrapper_QNetworkCookieJar : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkCookieJar* new_QNetworkCookieJar(QObject*  parent = 0);
void delete_QNetworkCookieJar(QNetworkCookieJar* obj) { delete obj; } 
   QList<QNetworkCookie >  cookiesForUrl(QNetworkCookieJar* theWrappedObject, const QUrl&  url) const;
   bool  setCookiesFromUrl(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList, const QUrl&  url);
};

#endif // PYTHONQTWRAPPER_QNETWORKCOOKIEJAR_H
