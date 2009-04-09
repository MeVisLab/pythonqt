#include "PythonQtWrapper_QFtp.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qftp.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>
#include <qurlinfo.h>

QFtp* PythonQtWrapper_QFtp::new_QFtp(QObject*  parent)
{ 
return new QFtp(parent); }

qint64  PythonQtWrapper_QFtp::bytesAvailable(QFtp* theWrappedObject) const
{
return theWrappedObject->bytesAvailable();
}

int  PythonQtWrapper_QFtp::cd(QFtp* theWrappedObject, const QString&  dir)
{
return theWrappedObject->cd(dir);
}

void PythonQtWrapper_QFtp::clearPendingCommands(QFtp* theWrappedObject)
{
theWrappedObject->clearPendingCommands();
}

int  PythonQtWrapper_QFtp::close(QFtp* theWrappedObject)
{
return theWrappedObject->close();
}

int  PythonQtWrapper_QFtp::connectToHost(QFtp* theWrappedObject, const QString&  host, unsigned short  port)
{
return theWrappedObject->connectToHost(host, port);
}

QFtp::Command  PythonQtWrapper_QFtp::currentCommand(QFtp* theWrappedObject) const
{
return theWrappedObject->currentCommand();
}

QIODevice*  PythonQtWrapper_QFtp::currentDevice(QFtp* theWrappedObject) const
{
return theWrappedObject->currentDevice();
}

int  PythonQtWrapper_QFtp::currentId(QFtp* theWrappedObject) const
{
return theWrappedObject->currentId();
}

QFtp::Error  PythonQtWrapper_QFtp::error(QFtp* theWrappedObject) const
{
return theWrappedObject->error();
}

QString  PythonQtWrapper_QFtp::errorString(QFtp* theWrappedObject) const
{
return theWrappedObject->errorString();
}

int  PythonQtWrapper_QFtp::get(QFtp* theWrappedObject, const QString&  file, QIODevice*  dev, QFtp::TransferType  type)
{
return theWrappedObject->get(file, dev, type);
}

bool  PythonQtWrapper_QFtp::hasPendingCommands(QFtp* theWrappedObject) const
{
return theWrappedObject->hasPendingCommands();
}

int  PythonQtWrapper_QFtp::list(QFtp* theWrappedObject, const QString&  dir)
{
return theWrappedObject->list(dir);
}

int  PythonQtWrapper_QFtp::login(QFtp* theWrappedObject, const QString&  user, const QString&  password)
{
return theWrappedObject->login(user, password);
}

int  PythonQtWrapper_QFtp::mkdir(QFtp* theWrappedObject, const QString&  dir)
{
return theWrappedObject->mkdir(dir);
}

int  PythonQtWrapper_QFtp::put(QFtp* theWrappedObject, QIODevice*  dev, const QString&  file, QFtp::TransferType  type)
{
return theWrappedObject->put(dev, file, type);
}

int  PythonQtWrapper_QFtp::put(QFtp* theWrappedObject, const QByteArray&  data, const QString&  file, QFtp::TransferType  type)
{
return theWrappedObject->put(data, file, type);
}

int  PythonQtWrapper_QFtp::rawCommand(QFtp* theWrappedObject, const QString&  command)
{
return theWrappedObject->rawCommand(command);
}

qint64  PythonQtWrapper_QFtp::read(QFtp* theWrappedObject, char*  data, qint64  maxlen)
{
return theWrappedObject->read(data, maxlen);
}

QByteArray  PythonQtWrapper_QFtp::readAll(QFtp* theWrappedObject)
{
return theWrappedObject->readAll();
}

int  PythonQtWrapper_QFtp::remove(QFtp* theWrappedObject, const QString&  file)
{
return theWrappedObject->remove(file);
}

int  PythonQtWrapper_QFtp::rename(QFtp* theWrappedObject, const QString&  oldname, const QString&  newname)
{
return theWrappedObject->rename(oldname, newname);
}

int  PythonQtWrapper_QFtp::rmdir(QFtp* theWrappedObject, const QString&  dir)
{
return theWrappedObject->rmdir(dir);
}

int  PythonQtWrapper_QFtp::setProxy(QFtp* theWrappedObject, const QString&  host, unsigned short  port)
{
return theWrappedObject->setProxy(host, port);
}

int  PythonQtWrapper_QFtp::setTransferMode(QFtp* theWrappedObject, QFtp::TransferMode  mode)
{
return theWrappedObject->setTransferMode(mode);
}

QFtp::State  PythonQtWrapper_QFtp::state(QFtp* theWrappedObject) const
{
return theWrappedObject->state();
}

