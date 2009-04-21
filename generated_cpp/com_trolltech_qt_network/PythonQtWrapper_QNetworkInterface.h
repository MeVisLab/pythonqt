#ifndef PYTHONQTWRAPPER_QNETWORKINTERFACE_H
#define PYTHONQTWRAPPER_QNETWORKINTERFACE_H

#include <qnetworkinterface.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkinterface.h>

class PythonQtWrapper_QNetworkInterface : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InterfaceFlag )
enum InterfaceFlag{
  IsUp = QNetworkInterface::IsUp,   IsRunning = QNetworkInterface::IsRunning,   CanBroadcast = QNetworkInterface::CanBroadcast,   IsLoopBack = QNetworkInterface::IsLoopBack,   IsPointToPoint = QNetworkInterface::IsPointToPoint,   CanMulticast = QNetworkInterface::CanMulticast};
public slots:
QNetworkInterface* new_QNetworkInterface();
QNetworkInterface* new_QNetworkInterface(const QNetworkInterface&  other);
void delete_QNetworkInterface(QNetworkInterface* obj) { delete obj; } 
   QList<QNetworkAddressEntry >  addressEntries(QNetworkInterface* theWrappedObject) const;
   QList<QNetworkInterface >  static_QNetworkInterface_allInterfaces();
   QNetworkInterface::InterfaceFlags  flags(QNetworkInterface* theWrappedObject) const;
   QNetworkInterface  static_QNetworkInterface_interfaceFromName(const QString&  name);
   QList<QHostAddress >  static_QNetworkInterface_allAddresses();
   bool  isValid(QNetworkInterface* theWrappedObject) const;
   QString  name(QNetworkInterface* theWrappedObject) const;
   QString  hardwareAddress(QNetworkInterface* theWrappedObject) const;
   QNetworkInterface  static_QNetworkInterface_interfaceFromIndex(int  index);
};

#endif // PYTHONQTWRAPPER_QNETWORKINTERFACE_H
