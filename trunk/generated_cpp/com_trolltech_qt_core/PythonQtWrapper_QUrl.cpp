#include "PythonQtWrapper_QUrl.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>
#include <qurl.h>

QUrl* PythonQtWrapper_QUrl::new_QUrl()
{ 
return new QUrl(); }

QUrl* PythonQtWrapper_QUrl::new_QUrl(const QString&  url)
{ 
return new QUrl(url); }

QUrl* PythonQtWrapper_QUrl::new_QUrl(const QString&  url, QUrl::ParsingMode  mode)
{ 
return new QUrl(url, mode); }

QUrl* PythonQtWrapper_QUrl::new_QUrl(const QUrl&  copy)
{ 
return new QUrl(copy); }

void PythonQtWrapper_QUrl::clear(QUrl* theWrappedObject)
{
 theWrappedObject->clear();
}

void PythonQtWrapper_QUrl::removeQueryItem(QUrl* theWrappedObject, const QString&  key)
{
 theWrappedObject->removeQueryItem(key);
}

int  PythonQtWrapper_QUrl::port(QUrl* theWrappedObject) const
{
return  theWrappedObject->port();
}

bool  PythonQtWrapper_QUrl::isRelative(QUrl* theWrappedObject) const
{
return  theWrappedObject->isRelative();
}

QUrl  PythonQtWrapper_QUrl::resolved(QUrl* theWrappedObject, const QUrl&  relative) const
{
return  theWrappedObject->resolved(relative);
}

void PythonQtWrapper_QUrl::setPath(QUrl* theWrappedObject, const QString&  path)
{
 theWrappedObject->setPath(path);
}

QString  PythonQtWrapper_QUrl::userName(QUrl* theWrappedObject) const
{
return  theWrappedObject->userName();
}

void PythonQtWrapper_QUrl::removeAllQueryItems(QUrl* theWrappedObject, const QString&  key)
{
 theWrappedObject->removeAllQueryItems(key);
}

void PythonQtWrapper_QUrl::setEncodedFragment(QUrl* theWrappedObject, const QByteArray&  fragment)
{
 theWrappedObject->setEncodedFragment(fragment);
}

void PythonQtWrapper_QUrl::setScheme(QUrl* theWrappedObject, const QString&  scheme)
{
 theWrappedObject->setScheme(scheme);
}

bool  PythonQtWrapper_QUrl::hasQuery(QUrl* theWrappedObject) const
{
return  theWrappedObject->hasQuery();
}

bool  PythonQtWrapper_QUrl::isEmpty(QUrl* theWrappedObject) const
{
return  theWrappedObject->isEmpty();
}

QList<QPair<QString , QString >  >  PythonQtWrapper_QUrl::queryItems(QUrl* theWrappedObject) const
{
return  theWrappedObject->queryItems();
}

bool  PythonQtWrapper_QUrl::hasFragment(QUrl* theWrappedObject) const
{
return  theWrappedObject->hasFragment();
}

QByteArray  PythonQtWrapper_QUrl::toEncoded(QUrl* theWrappedObject, QUrl::FormattingOptions  options) const
{
return  theWrappedObject->toEncoded(options);
}

QString  PythonQtWrapper_QUrl::userInfo(QUrl* theWrappedObject) const
{
return  theWrappedObject->userInfo();
}

QString  PythonQtWrapper_QUrl::host(QUrl* theWrappedObject) const
{
return  theWrappedObject->host();
}

void PythonQtWrapper_QUrl::setUrl(QUrl* theWrappedObject, const QString&  url)
{
 theWrappedObject->setUrl(url);
}

QStringList  PythonQtWrapper_QUrl::allQueryItemValues(QUrl* theWrappedObject, const QString&  key) const
{
return  theWrappedObject->allQueryItemValues(key);
}

QString  PythonQtWrapper_QUrl::static_QUrl_fromPercentEncoding(const QByteArray&  arg__1)
{
return QUrl::fromPercentEncoding(arg__1);
}

void PythonQtWrapper_QUrl::setAuthority(QUrl* theWrappedObject, const QString&  authority)
{
 theWrappedObject->setAuthority(authority);
}

QByteArray  PythonQtWrapper_QUrl::encodedFragment(QUrl* theWrappedObject) const
{
return  theWrappedObject->encodedFragment();
}

void PythonQtWrapper_QUrl::setFragment(QUrl* theWrappedObject, const QString&  fragment)
{
 theWrappedObject->setFragment(fragment);
}

QString  PythonQtWrapper_QUrl::scheme(QUrl* theWrappedObject) const
{
return  theWrappedObject->scheme();
}

void PythonQtWrapper_QUrl::setEncodedPath(QUrl* theWrappedObject, const QByteArray&  path)
{
 theWrappedObject->setEncodedPath(path);
}

QString  PythonQtWrapper_QUrl::authority(QUrl* theWrappedObject) const
{
return  theWrappedObject->authority();
}

QByteArray  PythonQtWrapper_QUrl::static_QUrl_toAce(const QString&  arg__1)
{
return QUrl::toAce(arg__1);
}

int  PythonQtWrapper_QUrl::port(QUrl* theWrappedObject, int  defaultPort) const
{
return  theWrappedObject->port(defaultPort);
}

void PythonQtWrapper_QUrl::setEncodedPassword(QUrl* theWrappedObject, const QByteArray&  password)
{
 theWrappedObject->setEncodedPassword(password);
}

QString  PythonQtWrapper_QUrl::toLocalFile(QUrl* theWrappedObject) const
{
return  theWrappedObject->toLocalFile();
}

QByteArray  PythonQtWrapper_QUrl::encodedHost(QUrl* theWrappedObject) const
{
return  theWrappedObject->encodedHost();
}

void PythonQtWrapper_QUrl::writeTo(QUrl* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QUrl::setUserInfo(QUrl* theWrappedObject, const QString&  userInfo)
{
 theWrappedObject->setUserInfo(userInfo);
}

char  PythonQtWrapper_QUrl::queryValueDelimiter(QUrl* theWrappedObject) const
{
return  theWrappedObject->queryValueDelimiter();
}

void PythonQtWrapper_QUrl::setEncodedUserName(QUrl* theWrappedObject, const QByteArray&  userName)
{
 theWrappedObject->setEncodedUserName(userName);
}

QByteArray  PythonQtWrapper_QUrl::static_QUrl_toPercentEncoding(const QString&  arg__1, const QByteArray&  exclude, const QByteArray&  include)
{
return QUrl::toPercentEncoding(arg__1, exclude, include);
}

void PythonQtWrapper_QUrl::static_QUrl_setIdnWhitelist(const QStringList&  arg__1)
{
QUrl::setIdnWhitelist(arg__1);
}

QString  PythonQtWrapper_QUrl::queryItemValue(QUrl* theWrappedObject, const QString&  key) const
{
return  theWrappedObject->queryItemValue(key);
}

void PythonQtWrapper_QUrl::removeAllEncodedQueryItems(QUrl* theWrappedObject, const QByteArray&  key)
{
 theWrappedObject->removeAllEncodedQueryItems(key);
}

void PythonQtWrapper_QUrl::setEncodedUrl(QUrl* theWrappedObject, const QByteArray&  url)
{
 theWrappedObject->setEncodedUrl(url);
}

void PythonQtWrapper_QUrl::setPort(QUrl* theWrappedObject, int  port)
{
 theWrappedObject->setPort(port);
}

void PythonQtWrapper_QUrl::removeEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key)
{
 theWrappedObject->removeEncodedQueryItem(key);
}

void PythonQtWrapper_QUrl::addEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key, const QByteArray&  value)
{
 theWrappedObject->addEncodedQueryItem(key, value);
}

QString  PythonQtWrapper_QUrl::errorString(QUrl* theWrappedObject) const
{
return  theWrappedObject->errorString();
}

QList<QByteArray >  PythonQtWrapper_QUrl::allEncodedQueryItemValues(QUrl* theWrappedObject, const QByteArray&  key) const
{
return  theWrappedObject->allEncodedQueryItemValues(key);
}

QByteArray  PythonQtWrapper_QUrl::encodedUserName(QUrl* theWrappedObject) const
{
return  theWrappedObject->encodedUserName();
}

void PythonQtWrapper_QUrl::setEncodedUrl(QUrl* theWrappedObject, const QByteArray&  url, QUrl::ParsingMode  mode)
{
 theWrappedObject->setEncodedUrl(url, mode);
}

void PythonQtWrapper_QUrl::setPassword(QUrl* theWrappedObject, const QString&  password)
{
 theWrappedObject->setPassword(password);
}

QUrl  PythonQtWrapper_QUrl::static_QUrl_fromLocalFile(const QString&  localfile)
{
return QUrl::fromLocalFile(localfile);
}

QString  PythonQtWrapper_QUrl::static_QUrl_fromAce(const QByteArray&  arg__1)
{
return QUrl::fromAce(arg__1);
}

void PythonQtWrapper_QUrl::readFrom(QUrl* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  (*theWrappedObject);
}

QByteArray  PythonQtWrapper_QUrl::encodedPath(QUrl* theWrappedObject) const
{
return  theWrappedObject->encodedPath();
}

void PythonQtWrapper_QUrl::setQueryDelimiters(QUrl* theWrappedObject, char  valueDelimiter, char  pairDelimiter)
{
 theWrappedObject->setQueryDelimiters(valueDelimiter, pairDelimiter);
}

bool  PythonQtWrapper_QUrl::isValid(QUrl* theWrappedObject) const
{
return  theWrappedObject->isValid();
}

QString  PythonQtWrapper_QUrl::fragment(QUrl* theWrappedObject) const
{
return  theWrappedObject->fragment();
}

bool  PythonQtWrapper_QUrl::hasQueryItem(QUrl* theWrappedObject, const QString&  key) const
{
return  theWrappedObject->hasQueryItem(key);
}

void PythonQtWrapper_QUrl::setUserName(QUrl* theWrappedObject, const QString&  userName)
{
 theWrappedObject->setUserName(userName);
}

bool  PythonQtWrapper_QUrl::operator_equal(QUrl* theWrappedObject, const QUrl&  url) const
{
return  (*theWrappedObject)== url;
}

bool  PythonQtWrapper_QUrl::isParentOf(QUrl* theWrappedObject, const QUrl&  url) const
{
return  theWrappedObject->isParentOf(url);
}

bool  PythonQtWrapper_QUrl::operator_less(QUrl* theWrappedObject, const QUrl&  url) const
{
return  (*theWrappedObject)< url;
}

void PythonQtWrapper_QUrl::setEncodedHost(QUrl* theWrappedObject, const QByteArray&  host)
{
 theWrappedObject->setEncodedHost(host);
}

QUrl  PythonQtWrapper_QUrl::static_QUrl_fromEncoded(const QByteArray&  url)
{
return QUrl::fromEncoded(url);
}

QString  PythonQtWrapper_QUrl::path(QUrl* theWrappedObject) const
{
return  theWrappedObject->path();
}

QStringList  PythonQtWrapper_QUrl::static_QUrl_idnWhitelist()
{
return QUrl::idnWhitelist();
}

QList<QPair<QByteArray , QByteArray >  >  PythonQtWrapper_QUrl::encodedQueryItems(QUrl* theWrappedObject) const
{
return  theWrappedObject->encodedQueryItems();
}

void PythonQtWrapper_QUrl::setQueryItems(QUrl* theWrappedObject, const QList<QPair<QString , QString >  >&  query)
{
 theWrappedObject->setQueryItems(query);
}

QByteArray  PythonQtWrapper_QUrl::encodedPassword(QUrl* theWrappedObject) const
{
return  theWrappedObject->encodedPassword();
}

void PythonQtWrapper_QUrl::setHost(QUrl* theWrappedObject, const QString&  host)
{
 theWrappedObject->setHost(host);
}

void PythonQtWrapper_QUrl::addQueryItem(QUrl* theWrappedObject, const QString&  key, const QString&  value)
{
 theWrappedObject->addQueryItem(key, value);
}

QString  PythonQtWrapper_QUrl::password(QUrl* theWrappedObject) const
{
return  theWrappedObject->password();
}

void PythonQtWrapper_QUrl::setEncodedQuery(QUrl* theWrappedObject, const QByteArray&  query)
{
 theWrappedObject->setEncodedQuery(query);
}

QByteArray  PythonQtWrapper_QUrl::encodedQuery(QUrl* theWrappedObject) const
{
return  theWrappedObject->encodedQuery();
}

QUrl  PythonQtWrapper_QUrl::static_QUrl_fromEncoded(const QByteArray&  url, QUrl::ParsingMode  mode)
{
return QUrl::fromEncoded(url, mode);
}

bool  PythonQtWrapper_QUrl::hasEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key) const
{
return  theWrappedObject->hasEncodedQueryItem(key);
}

char  PythonQtWrapper_QUrl::queryPairDelimiter(QUrl* theWrappedObject) const
{
return  theWrappedObject->queryPairDelimiter();
}

QString  PythonQtWrapper_QUrl::toString(QUrl* theWrappedObject, QUrl::FormattingOptions  options) const
{
return  theWrappedObject->toString(options);
}

QByteArray  PythonQtWrapper_QUrl::encodedQueryItemValue(QUrl* theWrappedObject, const QByteArray&  key) const
{
return  theWrappedObject->encodedQueryItemValue(key);
}

void PythonQtWrapper_QUrl::setEncodedQueryItems(QUrl* theWrappedObject, const QList<QPair<QByteArray , QByteArray >  >&  query)
{
 theWrappedObject->setEncodedQueryItems(query);
}

void PythonQtWrapper_QUrl::setUrl(QUrl* theWrappedObject, const QString&  url, QUrl::ParsingMode  mode)
{
 theWrappedObject->setUrl(url, mode);
}

