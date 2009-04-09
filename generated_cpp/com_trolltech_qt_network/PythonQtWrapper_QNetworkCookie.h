#ifndef PYTHONQTWRAPPER_QNETWORKCOOKIE_H
#define PYTHONQTWRAPPER_QNETWORKCOOKIE_H

#include <qnetworkcookie.h>
#include <QObject>

#include <QDateTime>
#include <QVariant>
#include <qbytearray.h>
#include <qdatetime.h>
#include <qlist.h>
#include <qnetworkcookie.h>

class PythonQtWrapper_QNetworkCookie : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RawForm )
enum RawForm{
  NameAndValueOnly = QNetworkCookie::NameAndValueOnly,   Full = QNetworkCookie::Full};
public slots:
QNetworkCookie* new_QNetworkCookie(const QByteArray&  name = QByteArray(), const QByteArray&  value = QByteArray());
QNetworkCookie* new_QNetworkCookie(const QNetworkCookie&  other);
void delete_QNetworkCookie(QNetworkCookie* obj) { delete obj; } 
   QString  domain(QNetworkCookie* theWrappedObject) const;
   QDateTime  expirationDate(QNetworkCookie* theWrappedObject) const;
   bool  isSecure(QNetworkCookie* theWrappedObject) const;
   bool  isSessionCookie(QNetworkCookie* theWrappedObject) const;
   QByteArray  name(QNetworkCookie* theWrappedObject) const;
   bool  operator_equal(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const;
   QList<QNetworkCookie >  static_QNetworkCookie_parseCookies(const QByteArray&  cookieString);
   QString  path(QNetworkCookie* theWrappedObject) const;
   void setDomain(QNetworkCookie* theWrappedObject, const QString&  domain);
   void setExpirationDate(QNetworkCookie* theWrappedObject, const QDateTime&  date);
   void setName(QNetworkCookie* theWrappedObject, const QByteArray&  cookieName);
   void setPath(QNetworkCookie* theWrappedObject, const QString&  path);
   void setSecure(QNetworkCookie* theWrappedObject, bool  enable);
   void setValue(QNetworkCookie* theWrappedObject, const QByteArray&  value);
   QByteArray  toRawForm(QNetworkCookie* theWrappedObject, QNetworkCookie::RawForm  form = QNetworkCookie::Full) const;
   QByteArray  value(QNetworkCookie* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QNETWORKCOOKIE_H
