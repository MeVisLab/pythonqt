#ifndef PYTHONQTWRAPPER_QHOSTADDRESS_H
#define PYTHONQTWRAPPER_QHOSTADDRESS_H

#include <qhostaddress.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qhostaddress.h>

class PythonQtWrapper_QHostAddress : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SpecialAddress )
enum SpecialAddress{
  Null = QHostAddress::Null,   Broadcast = QHostAddress::Broadcast,   LocalHost = QHostAddress::LocalHost,   LocalHostIPv6 = QHostAddress::LocalHostIPv6,   Any = QHostAddress::Any,   AnyIPv6 = QHostAddress::AnyIPv6};
public slots:
QHostAddress* new_QHostAddress();
QHostAddress* new_QHostAddress(QHostAddress::SpecialAddress  address);
QHostAddress* new_QHostAddress(const QHostAddress&  copy);
QHostAddress* new_QHostAddress(const QIPv6Address&  ip6Addr);
QHostAddress* new_QHostAddress(const QString&  address);
QHostAddress* new_QHostAddress(unsigned int  ip4Addr);
void delete_QHostAddress(QHostAddress* obj) { delete obj; } 
   QString  scopeId(QHostAddress* theWrappedObject) const;
   QIPv6Address  toIPv6Address(QHostAddress* theWrappedObject) const;
   void setScopeId(QHostAddress* theWrappedObject, const QString&  id);
   void clear(QHostAddress* theWrappedObject);
   unsigned int  toIPv4Address(QHostAddress* theWrappedObject) const;
   QString  toString(QHostAddress* theWrappedObject) const;
   bool  isNull(QHostAddress* theWrappedObject) const;
   void readFrom(QHostAddress* theWrappedObject, QDataStream&  arg__1);
   bool  setAddress(QHostAddress* theWrappedObject, const QString&  address);
   void writeTo(QHostAddress* theWrappedObject, QDataStream&  arg__1);
   void setAddress(QHostAddress* theWrappedObject, unsigned int  ip4Addr);
   bool  operator_equal(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address) const;
   QAbstractSocket::NetworkLayerProtocol  protocol(QHostAddress* theWrappedObject) const;
   void setAddress(QHostAddress* theWrappedObject, const QIPv6Address&  ip6Addr);
   bool  operator_equal(QHostAddress* theWrappedObject, const QHostAddress&  address) const;
};

#endif // PYTHONQTWRAPPER_QHOSTADDRESS_H
