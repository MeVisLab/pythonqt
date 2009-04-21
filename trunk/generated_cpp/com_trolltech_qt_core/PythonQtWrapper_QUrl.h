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
   void clear(QUrl* theWrappedObject);
   void removeQueryItem(QUrl* theWrappedObject, const QString&  key);
   int  port(QUrl* theWrappedObject) const;
   bool  isRelative(QUrl* theWrappedObject) const;
   QUrl  resolved(QUrl* theWrappedObject, const QUrl&  relative) const;
   void setPath(QUrl* theWrappedObject, const QString&  path);
   QString  userName(QUrl* theWrappedObject) const;
   void removeAllQueryItems(QUrl* theWrappedObject, const QString&  key);
   void setEncodedFragment(QUrl* theWrappedObject, const QByteArray&  fragment);
   void setScheme(QUrl* theWrappedObject, const QString&  scheme);
   bool  hasQuery(QUrl* theWrappedObject) const;
   bool  isEmpty(QUrl* theWrappedObject) const;
   QList<QPair<QString , QString >  >  queryItems(QUrl* theWrappedObject) const;
   bool  hasFragment(QUrl* theWrappedObject) const;
   QByteArray  toEncoded(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::None) const;
   QString  userInfo(QUrl* theWrappedObject) const;
   QString  host(QUrl* theWrappedObject) const;
   void setUrl(QUrl* theWrappedObject, const QString&  url);
   QStringList  allQueryItemValues(QUrl* theWrappedObject, const QString&  key) const;
   QString  static_QUrl_fromPercentEncoding(const QByteArray&  arg__1);
   void setAuthority(QUrl* theWrappedObject, const QString&  authority);
   QByteArray  encodedFragment(QUrl* theWrappedObject) const;
   void setFragment(QUrl* theWrappedObject, const QString&  fragment);
   QString  scheme(QUrl* theWrappedObject) const;
   void setEncodedPath(QUrl* theWrappedObject, const QByteArray&  path);
   QString  authority(QUrl* theWrappedObject) const;
   QByteArray  static_QUrl_toAce(const QString&  arg__1);
   int  port(QUrl* theWrappedObject, int  defaultPort) const;
   void setEncodedPassword(QUrl* theWrappedObject, const QByteArray&  password);
   QString  toLocalFile(QUrl* theWrappedObject) const;
   QByteArray  encodedHost(QUrl* theWrappedObject) const;
   void writeTo(QUrl* theWrappedObject, QDataStream&  arg__1);
   void setUserInfo(QUrl* theWrappedObject, const QString&  userInfo);
   char  queryValueDelimiter(QUrl* theWrappedObject) const;
   void setEncodedUserName(QUrl* theWrappedObject, const QByteArray&  userName);
   QByteArray  static_QUrl_toPercentEncoding(const QString&  arg__1, const QByteArray&  exclude = QByteArray(), const QByteArray&  include = QByteArray());
   void static_QUrl_setIdnWhitelist(const QStringList&  arg__1);
   QString  queryItemValue(QUrl* theWrappedObject, const QString&  key) const;
   void removeAllEncodedQueryItems(QUrl* theWrappedObject, const QByteArray&  key);
   void setEncodedUrl(QUrl* theWrappedObject, const QByteArray&  url);
   void setPort(QUrl* theWrappedObject, int  port);
   void removeEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key);
   void addEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key, const QByteArray&  value);
   QString  errorString(QUrl* theWrappedObject) const;
   QList<QByteArray >  allEncodedQueryItemValues(QUrl* theWrappedObject, const QByteArray&  key) const;
   QByteArray  encodedUserName(QUrl* theWrappedObject) const;
   void setEncodedUrl(QUrl* theWrappedObject, const QByteArray&  url, QUrl::ParsingMode  mode);
   void setPassword(QUrl* theWrappedObject, const QString&  password);
   QUrl  static_QUrl_fromLocalFile(const QString&  localfile);
   QString  static_QUrl_fromAce(const QByteArray&  arg__1);
   void readFrom(QUrl* theWrappedObject, QDataStream&  arg__1);
   QByteArray  encodedPath(QUrl* theWrappedObject) const;
   void setQueryDelimiters(QUrl* theWrappedObject, char  valueDelimiter, char  pairDelimiter);
   bool  isValid(QUrl* theWrappedObject) const;
   QString  fragment(QUrl* theWrappedObject) const;
   bool  hasQueryItem(QUrl* theWrappedObject, const QString&  key) const;
   void setUserName(QUrl* theWrappedObject, const QString&  userName);
   bool  operator_equal(QUrl* theWrappedObject, const QUrl&  url) const;
   bool  isParentOf(QUrl* theWrappedObject, const QUrl&  url) const;
   bool  operator_less(QUrl* theWrappedObject, const QUrl&  url) const;
   void setEncodedHost(QUrl* theWrappedObject, const QByteArray&  host);
   QUrl  static_QUrl_fromEncoded(const QByteArray&  url);
   QString  path(QUrl* theWrappedObject) const;
   QStringList  static_QUrl_idnWhitelist();
   QList<QPair<QByteArray , QByteArray >  >  encodedQueryItems(QUrl* theWrappedObject) const;
   void setQueryItems(QUrl* theWrappedObject, const QList<QPair<QString , QString >  >&  query);
   QByteArray  encodedPassword(QUrl* theWrappedObject) const;
   void setHost(QUrl* theWrappedObject, const QString&  host);
   void addQueryItem(QUrl* theWrappedObject, const QString&  key, const QString&  value);
   QString  password(QUrl* theWrappedObject) const;
   void setEncodedQuery(QUrl* theWrappedObject, const QByteArray&  query);
   QByteArray  encodedQuery(QUrl* theWrappedObject) const;
   QUrl  static_QUrl_fromEncoded(const QByteArray&  url, QUrl::ParsingMode  mode);
   bool  hasEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key) const;
   char  queryPairDelimiter(QUrl* theWrappedObject) const;
   QString  toString(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::None) const;
   QByteArray  encodedQueryItemValue(QUrl* theWrappedObject, const QByteArray&  key) const;
   void setEncodedQueryItems(QUrl* theWrappedObject, const QList<QPair<QByteArray , QByteArray >  >&  query);
   void setUrl(QUrl* theWrappedObject, const QString&  url, QUrl::ParsingMode  mode);
};

#endif // PYTHONQTWRAPPER_QURL_H
