#ifndef PYTHONQTWRAPPER_QNETWORKADDRESSENTRY_H
#define PYTHONQTWRAPPER_QNETWORKADDRESSENTRY_H

#include <qnetworkinterface.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qhostaddress.h>
#include <qnetworkinterface.h>

class PythonQtWrapper_QNetworkAddressEntry : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkAddressEntry* new_QNetworkAddressEntry();
QNetworkAddressEntry* new_QNetworkAddressEntry(const QNetworkAddressEntry&  other);
void delete_QNetworkAddressEntry(QNetworkAddressEntry* obj) { delete obj; } 
   void setIp(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newIp);
   QHostAddress  ip(QNetworkAddressEntry* theWrappedObject) const;
   QHostAddress  netmask(QNetworkAddressEntry* theWrappedObject) const;
   void setBroadcast(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newBroadcast);
   QHostAddress  broadcast(QNetworkAddressEntry* theWrappedObject) const;
   void setNetmask(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newNetmask);
};

#endif // PYTHONQTWRAPPER_QNETWORKADDRESSENTRY_H
