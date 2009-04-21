#ifndef PYTHONQTWRAPPER_QNETWORKCOOKIE_H
#define PYTHONQTWRAPPER_QNETWORKCOOKIE_H

#include <qnetworkcookie.h>
#include <QObject>

#include <PythonQt.h>

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
   bool  operator_equal(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const;
   QByteArray  name(QNetworkCookie* theWrappedObject) const;
   QList<QNetworkCookie >  static_QNetworkCookie_parseCookies(const QByteArray&  cookieString);
   void setSecure(QNetworkCookie* theWrappedObject, bool  enable);
   void setName(QNetworkCookie* theWrappedObject, const QByteArray&  cookieName);
   void setExpirationDate(QNetworkCookie* theWrappedObject, const QDateTime&  date);
   QDateTime  expirationDate(QNetworkCookie* theWrappedObject) const;
   QByteArray  toRawForm(QNetworkCookie* theWrappedObject, QNetworkCookie::RawForm  form = QNetworkCookie::Full) const;
   QString  path(QNetworkCookie* theWrappedObject) const;
   bool  isSecure(QNetworkCookie* theWrappedObject) const;
   bool  isSessionCookie(QNetworkCookie* theWrappedObject) const;
   void setValue(QNetworkCookie* theWrappedObject, const QByteArray&  value);
   QByteArray  value(QNetworkCookie* theWrappedObject) const;
   void setDomain(QNetworkCookie* theWrappedObject, const QString&  domain);
   void setPath(QNetworkCookie* theWrappedObject, const QString&  path);
   QString  domain(QNetworkCookie* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QNETWORKCOOKIE_H
