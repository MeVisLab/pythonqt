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
Q_FLAGS(FormattingOptions )
enum ParsingMode{
  TolerantMode = QUrl::TolerantMode,   StrictMode = QUrl::StrictMode};
enum FormattingOption{
  None = QUrl::None,   RemoveScheme = QUrl::RemoveScheme,   RemovePassword = QUrl::RemovePassword,   RemoveUserInfo = QUrl::RemoveUserInfo,   RemovePort = QUrl::RemovePort,   RemoveAuthority = QUrl::RemoveAuthority,   RemovePath = QUrl::RemovePath,   RemoveQuery = QUrl::RemoveQuery,   RemoveFragment = QUrl::RemoveFragment,   StripTrailingSlash = QUrl::StripTrailingSlash};
Q_DECLARE_FLAGS(FormattingOptions, FormattingOption)
public slots:
QUrl* new_QUrl();
QUrl* new_QUrl(const QString&  url);
QUrl* new_QUrl(const QString&  url, QUrl::ParsingMode  mode);
QUrl* new_QUrl(const QUrl&  copy);
void delete_QUrl(QUrl* obj) { delete obj; } 
   void setPassword(QUrl* theWrappedObject, const QString&  password);
   void removeQueryItem(QUrl* theWrappedObject, const QString&  key);
   void setHost(QUrl* theWrappedObject, const QString&  host);
   QString  queryItemValue(QUrl* theWrappedObject, const QString&  key) const;
   QString  scheme(QUrl* theWrappedObject) const;
   void setEncodedQueryItems(QUrl* theWrappedObject, const QList<QPair<QByteArray , QByteArray >  >&  query);
   QByteArray  static_QUrl_toPercentEncoding(const QString&  arg__1, const QByteArray&  exclude = QByteArray(), const QByteArray&  include = QByteArray());
   bool  operator_equal(QUrl* theWrappedObject, const QUrl&  url) const;
   void setScheme(QUrl* theWrappedObject, const QString&  scheme);
   void addEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key, const QByteArray&  value);
   QByteArray  encodedPassword(QUrl* theWrappedObject) const;
   QString  authority(QUrl* theWrappedObject) const;
   void setEncodedFragment(QUrl* theWrappedObject, const QByteArray&  fragment);
   QString  path(QUrl* theWrappedObject) const;
   void readFrom(QUrl* theWrappedObject, QDataStream&  arg__1);
   QUrl  resolved(QUrl* theWrappedObject, const QUrl&  relative) const;
   QUrl  static_QUrl_fromEncoded(const QByteArray&  url, QUrl::ParsingMode  mode);
   void writeTo(QUrl* theWrappedObject, QDataStream&  arg__1);
   QString  static_QUrl_fromPercentEncoding(const QByteArray&  arg__1);
   void setEncodedPassword(QUrl* theWrappedObject, const QByteArray&  password);
   QUrl  static_QUrl_fromLocalFile(const QString&  localfile);
   QString  fragment(QUrl* theWrappedObject) const;
   QString  userName(QUrl* theWrappedObject) const;
   void addQueryItem(QUrl* theWrappedObject, const QString&  key, const QString&  value);
   bool  hasQuery(QUrl* theWrappedObject) const;
   bool  hasFragment(QUrl* theWrappedObject) const;
   bool  operator_less(QUrl* theWrappedObject, const QUrl&  url) const;
   void setEncodedHost(QUrl* theWrappedObject, const QByteArray&  host);
   QString  errorString(QUrl* theWrappedObject) const;
   bool  isParentOf(QUrl* theWrappedObject, const QUrl&  url) const;
   QUrl  static_QUrl_fromEncoded(const QByteArray&  url);
   bool  hasQueryItem(QUrl* theWrappedObject, const QString&  key) const;
   QByteArray  static_QUrl_toAce(const QString&  arg__1);
   void setAuthority(QUrl* theWrappedObject, const QString&  authority);
   void setEncodedUrl(QUrl* theWrappedObject, const QByteArray&  url, QUrl::ParsingMode  mode);
   QList<QPair<QString , QString >  >  queryItems(QUrl* theWrappedObject) const;
   char  queryPairDelimiter(QUrl* theWrappedObject) const;
   void setPort(QUrl* theWrappedObject, int  port);
   void setUserInfo(QUrl* theWrappedObject, const QString&  userInfo);
   int  port(QUrl* theWrappedObject) const;
   QByteArray  encodedFragment(QUrl* theWrappedObject) const;
   QByteArray  encodedHost(QUrl* theWrappedObject) const;
   void setPath(QUrl* theWrappedObject, const QString&  path);
   QByteArray  encodedUserName(QUrl* theWrappedObject) const;
   QList<QPair<QByteArray , QByteArray >  >  encodedQueryItems(QUrl* theWrappedObject) const;
   void removeAllQueryItems(QUrl* theWrappedObject, const QString&  key);
   void setEncodedUserName(QUrl* theWrappedObject, const QByteArray&  userName);
   void setEncodedUrl(QUrl* theWrappedObject, const QByteArray&  url);
   QByteArray  encodedPath(QUrl* theWrappedObject) const;
   void setFragment(QUrl* theWrappedObject, const QString&  fragment);
   QString  host(QUrl* theWrappedObject) const;
   QString  userInfo(QUrl* theWrappedObject) const;
   QByteArray  encodedQuery(QUrl* theWrappedObject) const;
   void setUserName(QUrl* theWrappedObject, const QString&  userName);
   bool  hasEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key) const;
   void setQueryItems(QUrl* theWrappedObject, const QList<QPair<QString , QString >  >&  query);
   QString  toString(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::None) const;
   void setUrl(QUrl* theWrappedObject, const QString&  url, QUrl::ParsingMode  mode);
   QByteArray  toEncoded(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::None) const;
   QList<QByteArray >  allEncodedQueryItemValues(QUrl* theWrappedObject, const QByteArray&  key) const;
   void clear(QUrl* theWrappedObject);
   QByteArray  encodedQueryItemValue(QUrl* theWrappedObject, const QByteArray&  key) const;
   bool  isRelative(QUrl* theWrappedObject) const;
   void removeAllEncodedQueryItems(QUrl* theWrappedObject, const QByteArray&  key);
   bool  isEmpty(QUrl* theWrappedObject) const;
   QStringList  allQueryItemValues(QUrl* theWrappedObject, const QString&  key) const;
   int  port(QUrl* theWrappedObject, int  defaultPort) const;
   QString  static_QUrl_fromAce(const QByteArray&  arg__1);
   void removeEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key);
   void setEncodedQuery(QUrl* theWrappedObject, const QByteArray&  query);
   bool  isValid(QUrl* theWrappedObject) const;
   QStringList  static_QUrl_idnWhitelist();
   QString  toLocalFile(QUrl* theWrappedObject) const;
   QString  password(QUrl* theWrappedObject) const;
   char  queryValueDelimiter(QUrl* theWrappedObject) const;
   void setEncodedPath(QUrl* theWrappedObject, const QByteArray&  path);
   void setQueryDelimiters(QUrl* theWrappedObject, char  valueDelimiter, char  pairDelimiter);
   void static_QUrl_setIdnWhitelist(const QStringList&  arg__1);
   void setUrl(QUrl* theWrappedObject, const QString&  url);
};

#endif // PYTHONQTWRAPPER_QURL_H
