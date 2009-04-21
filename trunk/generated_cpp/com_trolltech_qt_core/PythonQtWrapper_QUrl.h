#ifndef PYTHONQTWRAPPER_QURL_H
#define PYTHONQTWRAPPER_QURL_H

#include <qurl.h>
#include <QObject>

#include <PythonQt.h>

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
   QByteArray  encodedFragment(QUrl* theWrappedObject) const;
   void setHost(QUrl* theWrappedObject, const QString&  host);
   QString  static_QUrl_fromPercentEncoding(const QByteArray&  arg__1);
   int  port(QUrl* theWrappedObject, int  defaultPort) const;
   bool  isRelative(QUrl* theWrappedObject) const;
   void removeAllQueryItems(QUrl* theWrappedObject, const QString&  key);
   void setUrl(QUrl* theWrappedObject, const QString&  url);
   void removeAllEncodedQueryItems(QUrl* theWrappedObject, const QByteArray&  key);
   QString  fragment(QUrl* theWrappedObject) const;
   void setEncodedQuery(QUrl* theWrappedObject, const QByteArray&  query);
   void setQueryDelimiters(QUrl* theWrappedObject, char  valueDelimiter, char  pairDelimiter);
   QByteArray  encodedHost(QUrl* theWrappedObject) const;
   QByteArray  encodedPassword(QUrl* theWrappedObject) const;
   QUrl  static_QUrl_fromLocalFile(const QString&  localfile);
   QString  queryItemValue(QUrl* theWrappedObject, const QString&  key) const;
   void setFragment(QUrl* theWrappedObject, const QString&  fragment);
   char  queryValueDelimiter(QUrl* theWrappedObject) const;
   void setEncodedUrl(QUrl* theWrappedObject, const QByteArray&  url);
   QByteArray  encodedPath(QUrl* theWrappedObject) const;
   void setEncodedPath(QUrl* theWrappedObject, const QByteArray&  path);
   void setEncodedQueryItems(QUrl* theWrappedObject, const QList<QPair<QByteArray , QByteArray >  >&  query);
   QUrl  static_QUrl_fromEncoded(const QByteArray&  url, QUrl::ParsingMode  mode);
   QString  userInfo(QUrl* theWrappedObject) const;
   QList<QByteArray >  allEncodedQueryItemValues(QUrl* theWrappedObject, const QByteArray&  key) const;
   bool  isParentOf(QUrl* theWrappedObject, const QUrl&  url) const;
   bool  hasQuery(QUrl* theWrappedObject) const;
   bool  operator_less(QUrl* theWrappedObject, const QUrl&  url) const;
   QStringList  allQueryItemValues(QUrl* theWrappedObject, const QString&  key) const;
   QString  errorString(QUrl* theWrappedObject) const;
   QString  toString(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::None) const;
   void removeQueryItem(QUrl* theWrappedObject, const QString&  key);
   QByteArray  encodedQueryItemValue(QUrl* theWrappedObject, const QByteArray&  key) const;
   QUrl  resolved(QUrl* theWrappedObject, const QUrl&  relative) const;
   QString  userName(QUrl* theWrappedObject) const;
   bool  isValid(QUrl* theWrappedObject) const;
   QString  scheme(QUrl* theWrappedObject) const;
   void setScheme(QUrl* theWrappedObject, const QString&  scheme);
   void setUserName(QUrl* theWrappedObject, const QString&  userName);
   QStringList  static_QUrl_idnWhitelist();
   void static_QUrl_setIdnWhitelist(const QStringList&  arg__1);
   QString  authority(QUrl* theWrappedObject) const;
   void writeTo(QUrl* theWrappedObject, QDataStream&  arg__1);
   void setPath(QUrl* theWrappedObject, const QString&  path);
   void addEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key, const QByteArray&  value);
   bool  isEmpty(QUrl* theWrappedObject) const;
   void setEncodedUrl(QUrl* theWrappedObject, const QByteArray&  url, QUrl::ParsingMode  mode);
   void setUserInfo(QUrl* theWrappedObject, const QString&  userInfo);
   bool  operator_equal(QUrl* theWrappedObject, const QUrl&  url) const;
   void setEncodedUserName(QUrl* theWrappedObject, const QByteArray&  userName);
   void setAuthority(QUrl* theWrappedObject, const QString&  authority);
   int  port(QUrl* theWrappedObject) const;
   QByteArray  encodedUserName(QUrl* theWrappedObject) const;
   bool  hasQueryItem(QUrl* theWrappedObject, const QString&  key) const;
   void setEncodedFragment(QUrl* theWrappedObject, const QByteArray&  fragment);
   QString  toLocalFile(QUrl* theWrappedObject) const;
   void setQueryItems(QUrl* theWrappedObject, const QList<QPair<QString , QString >  >&  query);
   void setUrl(QUrl* theWrappedObject, const QString&  url, QUrl::ParsingMode  mode);
   QByteArray  toEncoded(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::None) const;
   QByteArray  static_QUrl_toAce(const QString&  arg__1);
   QList<QPair<QString , QString >  >  queryItems(QUrl* theWrappedObject) const;
   void removeEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key);
   QString  path(QUrl* theWrappedObject) const;
   void setEncodedPassword(QUrl* theWrappedObject, const QByteArray&  password);
   void addQueryItem(QUrl* theWrappedObject, const QString&  key, const QString&  value);
   QString  static_QUrl_fromAce(const QByteArray&  arg__1);
   QUrl  static_QUrl_fromEncoded(const QByteArray&  url);
   QString  host(QUrl* theWrappedObject) const;
   QByteArray  static_QUrl_toPercentEncoding(const QString&  arg__1, const QByteArray&  exclude = QByteArray(), const QByteArray&  include = QByteArray());
   bool  hasEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key) const;
   QByteArray  encodedQuery(QUrl* theWrappedObject) const;
   QList<QPair<QByteArray , QByteArray >  >  encodedQueryItems(QUrl* theWrappedObject) const;
   void clear(QUrl* theWrappedObject);
   void setEncodedHost(QUrl* theWrappedObject, const QByteArray&  host);
   QString  password(QUrl* theWrappedObject) const;
   void setPort(QUrl* theWrappedObject, int  port);
   char  queryPairDelimiter(QUrl* theWrappedObject) const;
   void readFrom(QUrl* theWrappedObject, QDataStream&  arg__1);
   bool  hasFragment(QUrl* theWrappedObject) const;
   void setPassword(QUrl* theWrappedObject, const QString&  password);
};

#endif // PYTHONQTWRAPPER_QURL_H
