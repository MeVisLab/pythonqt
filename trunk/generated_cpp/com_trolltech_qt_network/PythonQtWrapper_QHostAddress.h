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
   bool  isNull(QHostAddress* theWrappedObject) const;
   bool  operator_equal(QHostAddress* theWrappedObject, const QHostAddress&  address) const;
   void setAddress(QHostAddress* theWrappedObject, const QIPv6Address&  ip6Addr);
   void setAddress(QHostAddress* theWrappedObject, unsigned int  ip4Addr);
   void writeTo(QHostAddress* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QHostAddress* theWrappedObject, QDataStream&  arg__1);
   unsigned int  toIPv4Address(QHostAddress* theWrappedObject) const;
   bool  operator_equal(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address) const;
   QString  toString(QHostAddress* theWrappedObject) const;
   QString  scopeId(QHostAddress* theWrappedObject) const;
   bool  setAddress(QHostAddress* theWrappedObject, const QString&  address);
   void clear(QHostAddress* theWrappedObject);
   QAbstractSocket::NetworkLayerProtocol  protocol(QHostAddress* theWrappedObject) const;
   void setScopeId(QHostAddress* theWrappedObject, const QString&  id);
   QIPv6Address  toIPv6Address(QHostAddress* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QHOSTADDRESS_H
