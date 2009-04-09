#ifndef PYTHONQTWRAPPER_QURL_H
#define PYTHONQTWRAPPER_QURL_H

#include <qurl.h>
#include <QObject>

#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>
#include <qurl.h>

class PythonQtWrapper_QUrl : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ParsingMode FormattingOption )
enum ParsingMode{
  TolerantMode = QUrl::TolerantMode,   StrictMode = QUrl::StrictMode};
enum FormattingOption{
  None = QUrl::None,   RemoveScheme = QUrl::RemoveScheme,   RemovePassword = QUrl::RemovePassword,   RemoveUserInfo = QUrl::RemoveUserInfo,   RemovePort = QUrl::RemovePort,   RemoveAuthority = QUrl::RemoveAuthority,   RemovePath = QUrl::RemovePath,   RemoveQuery = QUrl::RemoveQuery,   RemoveFragment = QUrl::RemoveFragment,   StripTrailingSlash = QUrl::StripTrailingSlash};
public slots:
QUrl* new_QUrl();
QUrl* new_QUrl(const QString&  url);
QUrl* new_QUrl(const QString&  url, QUrl::ParsingMode  mode);
QUrl* new_QUrl(const QUrl&  copy);
void delete_QUrl(QUrl* obj) { delete obj; } 
   void addEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key, const QByteArray&  value);
   void addQueryItem(QUrl* theWrappedObject, const QString&  key, const QString&  value);
   QList<QByteArray >  allEncodedQueryItemValues(QUrl* theWrappedObject, const QByteArray&  key) const;
   QStringList  allQueryItemValues(QUrl* theWrappedObject, const QString&  key) const;
   QString  authority(QUrl* theWrappedObject) const;
   void clear(QUrl* theWrappedObject);
   QByteArray  encodedFragment(QUrl* theWrappedObject) const;
   QByteArray  encodedHost(QUrl* theWrappedObject) const;
   QByteArray  encodedPassword(QUrl* theWrappedObject) const;
   QByteArray  encodedPath(QUrl* theWrappedObject) const;
   QByteArray  encodedQuery(QUrl* theWrappedObject) const;
   QByteArray  encodedQueryItemValue(QUrl* theWrappedObject, const QByteArray&  key) const;
   QList<QPair<QByteArray , QByteArray >  >  encodedQueryItems(QUrl* theWrappedObject) const;
   QByteArray  encodedUserName(QUrl* theWrappedObject) const;
   QString  errorString(QUrl* theWrappedObject) const;
   QString  fragment(QUrl* theWrappedObject) const;
   QString  static_QUrl_fromAce(const QByteArray&  arg__1);
   QUrl  static_QUrl_fromEncoded(const QByteArray&  url);
   QUrl  static_QUrl_fromEncoded(const QByteArray&  url, QUrl::ParsingMode  mode);
   QUrl  static_QUrl_fromLocalFile(const QString&  localfile);
   QString  static_QUrl_fromPercentEncoding(const QByteArray&  arg__1);
   bool  hasEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key) const;
   bool  hasFragment(QUrl* theWrappedObject) const;
   bool  hasQuery(QUrl* theWrappedObject) const;
   bool  hasQueryItem(QUrl* theWrappedObject, const QString&  key) const;
   QString  host(QUrl* theWrappedObject) const;
   QStringList  static_QUrl_idnWhitelist();
   bool  isEmpty(QUrl* theWrappedObject) const;
   bool  isParentOf(QUrl* theWrappedObject, const QUrl&  url) const;
   bool  isRelative(QUrl* theWrappedObject) const;
   bool  isValid(QUrl* theWrappedObject) const;
   bool  operator_less(QUrl* theWrappedObject, const QUrl&  url) const;
   void writeTo(QUrl* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QUrl* theWrappedObject, const QUrl&  url) const;
   void readFrom(QUrl* theWrappedObject, QDataStream&  arg__1);
   QString  password(QUrl* theWrappedObject) const;
   QString  path(QUrl* theWrappedObject) const;
   int  port(QUrl* theWrappedObject) const;
   int  port(QUrl* theWrappedObject, int  defaultPort) const;
   QString  queryItemValue(QUrl* theWrappedObject, const QString&  key) const;
   QList<QPair<QString , QString >  >  queryItems(QUrl* theWrappedObject) const;
   char  queryPairDelimiter(QUrl* theWrappedObject) const;
   char  queryValueDelimiter(QUrl* theWrappedObject) const;
   void removeAllEncodedQueryItems(QUrl* theWrappedObject, const QByteArray&  key);
   void removeAllQueryItems(QUrl* theWrappedObject, const QString&  key);
   void removeEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key);
   void removeQueryItem(QUrl* theWrappedObject, const QString&  key);
   QUrl  resolved(QUrl* theWrappedObject, const QUrl&  relative) const;
   QString  scheme(QUrl* theWrappedObject) const;
   void setAuthority(QUrl* theWrappedObject, const QString&  authority);
   void setEncodedFragment(QUrl* theWrappedObject, const QByteArray&  fragment);
   void setEncodedHost(QUrl* theWrappedObject, const QByteArray&  host);
   void setEncodedPassword(QUrl* theWrappedObject, const QByteArray&  password);
   void setEncodedPath(QUrl* theWrappedObject, const QByteArray&  path);
   void setEncodedQuery(QUrl* theWrappedObject, const QByteArray&  query);
   void setEncodedQueryItems(QUrl* theWrappedObject, const QList<QPair<QByteArray , QByteArray >  >&  query);
   void setEncodedUrl(QUrl* theWrappedObject, const QByteArray&  url);
   void setEncodedUrl(QUrl* theWrappedObject, const QByteArray&  url, QUrl::ParsingMode  mode);
   void setEncodedUserName(QUrl* theWrappedObject, const QByteArray&  userName);
   void setFragment(QUrl* theWrappedObject, const QString&  fragment);
   void setHost(QUrl* theWrappedObject, const QString&  host);
   void static_QUrl_setIdnWhitelist(const QStringList&  arg__1);
   void setPassword(QUrl* theWrappedObject, const QString&  password);
   void setPath(QUrl* theWrappedObject, const QString&  path);
   void setPort(QUrl* theWrappedObject, int  port);
   void setQueryDelimiters(QUrl* theWrappedObject, char  valueDelimiter, char  pairDelimiter);
   void setQueryItems(QUrl* theWrappedObject, const QList<QPair<QString , QString >  >&  query);
   void setScheme(QUrl* theWrappedObject, const QString&  scheme);
   void setUrl(QUrl* theWrappedObject, const QString&  url);
   void setUrl(QUrl* theWrappedObject, const QString&  url, QUrl::ParsingMode  mode);
   void setUserInfo(QUrl* theWrappedObject, const QString&  userInfo);
   void setUserName(QUrl* theWrappedObject, const QString&  userName);
   QByteArray  static_QUrl_toAce(const QString&  arg__1);
   QByteArray  toEncoded(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::None) const;
   QString  toLocalFile(QUrl* theWrappedObject) const;
   QByteArray  static_QUrl_toPercentEncoding(const QString&  arg__1, const QByteArray&  exclude = QByteArray(), const QByteArray&  include = QByteArray());
   QString  toString(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::None) const;
   QString  userInfo(QUrl* theWrappedObject) const;
   QString  userName(QUrl* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QURL_H
