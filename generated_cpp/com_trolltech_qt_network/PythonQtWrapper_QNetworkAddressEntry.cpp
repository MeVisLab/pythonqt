#include "PythonQtWrapper_QNetworkAddressEntry.h"

#include <QVariant>
#include <qhostaddress.h>
#include <qnetworkinterface.h>

QNetworkAddressEntry* PythonQtWrapper_QNetworkAddressEntry::new_QNetworkAddressEntry()
{ 
return new QNetworkAddressEntry(); }

QNetworkAddressEntry* PythonQtWrapper_QNetworkAddressEntry::new_QNetworkAddressEntry(const QNetworkAddressEntry&  other)
{ 
return new QNetworkAddressEntry(other); }

QHostAddress  PythonQtWrapper_QNetworkAddressEntry::broadcast(QNetworkAddressEntry* theWrappedObject) const
{
return theWrappedObject->broadcast();
}

QHostAddress  PythonQtWrapper_QNetworkAddressEntry::ip(QNetworkAddressEntry* theWrappedObject) const
{
return theWrappedObject->ip();
}

QHostAddress  PythonQtWrapper_QNetworkAddressEntry::netmask(QNetworkAddressEntry* theWrappedObject) const
{
return theWrappedObject->netmask();
}

void PythonQtWrapper_QNetworkAddressEntry::setBroadcast(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newBroadcast)
{
theWrappedObject->setBroadcast(newBroadcast);
}

void PythonQtWrapper_QNetworkAddressEntry::setIp(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newIp)
{
theWrappedObject->setIp(newIp);
}

void PythonQtWrapper_QNetworkAddressEntry::setNetmask(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newNetmask)
{
theWrappedObject->setNetmask(newNetmask);
}

