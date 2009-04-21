#include "PythonQtWrapper_QHostInfo.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qhostaddress.h>
#include <qhostinfo.h>
#include <qlist.h>
#include <qobject.h>

QHostInfo* PythonQtWrapper_QHostInfo::new_QHostInfo(const QHostInfo&  d)
{ 
return new QHostInfo(d); }

QHostInfo* PythonQtWrapper_QHostInfo::new_QHostInfo(int  lookupId)
{ 
return new QHostInfo(lookupId); }

QString  PythonQtWrapper_QHostInfo::errorString(QHostInfo* theWrappedObject) const
{
return  theWrappedObject->errorString();
}

QHostInfo  PythonQtWrapper_QHostInfo::static_QHostInfo_fromName(const QString&  name)
{
return QHostInfo::fromName(name);
}

int  PythonQtWrapper_QHostInfo::lookupId(QHostInfo* theWrappedObject) const
{
return  theWrappedObject->lookupId();
}

QString  PythonQtWrapper_QHostInfo::hostName(QHostInfo* theWrappedObject) const
{
return  theWrappedObject->hostName();
}

void PythonQtWrapper_QHostInfo::setAddresses(QHostInfo* theWrappedObject, const QList<QHostAddress >&  addresses)
{
 theWrappedObject->setAddresses(addresses);
}

void PythonQtWrapper_QHostInfo::setLookupId(QHostInfo* theWrappedObject, int  id)
{
 theWrappedObject->setLookupId(id);
}

QList<QHostAddress >  PythonQtWrapper_QHostInfo::addresses(QHostInfo* theWrappedObject) const
{
return  theWrappedObject->addresses();
}

QHostInfo::HostInfoError  PythonQtWrapper_QHostInfo::error(QHostInfo* theWrappedObject) const
{
return  theWrappedObject->error();
}

QString  PythonQtWrapper_QHostInfo::static_QHostInfo_localHostName()
{
return QHostInfo::localHostName();
}

void PythonQtWrapper_QHostInfo::setError(QHostInfo* theWrappedObject, QHostInfo::HostInfoError  error)
{
 theWrappedObject->setError(error);
}

void PythonQtWrapper_QHostInfo::setHostName(QHostInfo* theWrappedObject, const QString&  name)
{
 theWrappedObject->setHostName(name);
}

void PythonQtWrapper_QHostInfo::static_QHostInfo_abortHostLookup(int  lookupId)
{
QHostInfo::abortHostLookup(lookupId);
}

void PythonQtWrapper_QHostInfo::setErrorString(QHostInfo* theWrappedObject, const QString&  errorString)
{
 theWrappedObject->setErrorString(errorString);
}

int  PythonQtWrapper_QHostInfo::static_QHostInfo_lookupHost(const QString&  name, QObject*  receiver, const char*  member)
{
return QHostInfo::lookupHost(name, receiver, member);
}

