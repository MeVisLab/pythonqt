#ifndef PYTHONQTWRAPPER_QNETWORKCOOKIEJAR_H
#define PYTHONQTWRAPPER_QNETWORKCOOKIEJAR_H

#include <qnetworkcookie.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qnetworkcookie.h>
#include <qobject.h>
#include <qurl.h>

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
