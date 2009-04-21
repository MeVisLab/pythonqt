#include "PythonQtWrapper_QHostAddress.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qhostaddress.h>

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress()
{ 
return new QHostAddress(); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(QHostAddress::SpecialAddress  address)
{ 
return new QHostAddress(address); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(const QHostAddress&  copy)
{ 
return new QHostAddress(copy); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(const QIPv6Address&  ip6Addr)
{ 
return new QHostAddress(ip6Addr); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(const QString&  address)
{ 
return new QHostAddress(address); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(unsigned int  ip4Addr)
{ 
return new QHostAddress(ip4Addr); }

void PythonQtWrapper_QHostAddress::clear(QHostAddress* theWrappedObject)
{
 theWrappedObject->clear();
}

void PythonQtWrapper_QHostAddress::setAddress(QHostAddress* theWrappedObject, const QIPv6Address&  ip6Addr)
{
 theWrappedObject->setAddress(ip6Addr);
}

void PythonQtWrapper_QHostAddress::readFrom(QHostAddress* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  (*theWrappedObject);
}

void PythonQtWrapper_QHostAddress::setScopeId(QHostAddress* theWrappedObject, const QString&  id)
{
 theWrappedObject->setScopeId(id);
}

QAbstractSocket::NetworkLayerProtocol  PythonQtWrapper_QHostAddress::protocol(QHostAddress* theWrappedObject) const
{
return  theWrappedObject->protocol();
}

bool  PythonQtWrapper_QHostAddress::setAddress(QHostAddress* theWrappedObject, const QString&  address)
{
return  theWrappedObject->setAddress(address);
}

bool  PythonQtWrapper_QHostAddress::isNull(QHostAddress* theWrappedObject) const
{
return  theWrappedObject->isNull();
}

QIPv6Address  PythonQtWrapper_QHostAddress::toIPv6Address(QHostAddress* theWrappedObject) const
{
return  theWrappedObject->toIPv6Address();
}

QString  PythonQtWrapper_QHostAddress::scopeId(QHostAddress* theWrappedObject) const
{
return  theWrappedObject->scopeId();
}

void PythonQtWrapper_QHostAddress::setAddress(QHostAddress* theWrappedObject, unsigned int  ip4Addr)
{
 theWrappedObject->setAddress(ip4Addr);
}

void PythonQtWrapper_QHostAddress::writeTo(QHostAddress* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QHostAddress::operator_equal(QHostAddress* theWrappedObject, const QHostAddress&  address) const
{
return  (*theWrappedObject)== address;
}

QString  PythonQtWrapper_QHostAddress::toString(QHostAddress* theWrappedObject) const
{
return  theWrappedObject->toString();
}

unsigned int  PythonQtWrapper_QHostAddress::toIPv4Address(QHostAddress* theWrappedObject) const
{
return  theWrappedObject->toIPv4Address();
}

bool  PythonQtWrapper_QHostAddress::operator_equal(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address) const
{
return  (*theWrappedObject)== address;
}

