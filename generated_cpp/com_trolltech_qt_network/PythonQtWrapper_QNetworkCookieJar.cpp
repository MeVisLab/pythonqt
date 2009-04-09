#include "PythonQtWrapper_QNetworkCookieJar.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qnetworkcookie.h>
#include <qobject.h>
#include <qurl.h>

QNetworkCookieJar* PythonQtWrapper_QNetworkCookieJar::new_QNetworkCookieJar(QObject*  parent)
{ 
return new QNetworkCookieJar(parent); }

QList<QNetworkCookie >  PythonQtWrapper_QNetworkCookieJar::cookiesForUrl(QNetworkCookieJar* theWrappedObject, const QUrl&  url) const
{
return theWrappedObject->cookiesForUrl(url);
}

bool  PythonQtWrapper_QNetworkCookieJar::setCookiesFromUrl(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList, const QUrl&  url)
{
return theWrappedObject->setCookiesFromUrl(cookieList, url);
}

