#include "PythonQtWrapper_QProcess.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qprocess.h>
#include <qstringlist.h>

QProcess* PythonQtWrapper_QProcess::new_QProcess(QObject*  parent)
{ 
return new QProcess(parent); }

bool  PythonQtWrapper_QProcess::atEnd(QProcess* theWrappedObject) const
{
return theWrappedObject->atEnd();
}

qint64  PythonQtWrapper_QProcess::bytesAvailable(QProcess* theWrappedObject) const
{
return theWrappedObject->bytesAvailable();
}

qint64  PythonQtWrapper_QProcess::bytesToWrite(QProcess* theWrappedObject) const
{
return theWrappedObject->bytesToWrite();
}

bool  PythonQtWrapper_QProcess::canReadLine(QProcess* theWrappedObject) const
{
return theWrappedObject->canReadLine();
}

void PythonQtWrapper_QProcess::close(QProcess* theWrappedObject)
{
theWrappedObject->close();
}

void PythonQtWrapper_QProcess::closeReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel)
{
theWrappedObject->closeReadChannel(channel);
}

void PythonQtWrapper_QProcess::closeWriteChannel(QProcess* theWrappedObject)
{
theWrappedObject->closeWriteChannel();
}

QStringList  PythonQtWrapper_QProcess::environment(QProcess* theWrappedObject) const
{
return theWrappedObject->environment();
}

QProcess::ProcessError  PythonQtWrapper_QProcess::error(QProcess* theWrappedObject) const
{
return theWrappedObject->error();
}

int  PythonQtWrapper_QProcess::static_QProcess_execute(const QString&  program)
{
return QProcess::execute(program);
}

int  PythonQtWrapper_QProcess::static_QProcess_execute(const QString&  program, const QStringList&  arguments)
{
return QProcess::execute(program, arguments);
}

int  PythonQtWrapper_QProcess::exitCode(QProcess* theWrappedObject) const
{
return theWrappedObject->exitCode();
}

QProcess::ExitStatus  PythonQtWrapper_QProcess::exitStatus(QProcess* theWrappedObject) const
{
return theWrappedObject->exitStatus();
}

bool  PythonQtWrapper_QProcess::isSequential(QProcess* theWrappedObject) const
{
return theWrappedObject->isSequential();
}

QProcess::ProcessChannelMode  PythonQtWrapper_QProcess::processChannelMode(QProcess* theWrappedObject) const
{
return theWrappedObject->processChannelMode();
}

QByteArray  PythonQtWrapper_QProcess::readAllStandardError(QProcess* theWrappedObject)
{
return theWrappedObject->readAllStandardError();
}

QByteArray  PythonQtWrapper_QProcess::readAllStandardOutput(QProcess* theWrappedObject)
{
return theWrappedObject->readAllStandardOutput();
}

QProcess::ProcessChannel  PythonQtWrapper_QProcess::readChannel(QProcess* theWrappedObject) const
{
return theWrappedObject->readChannel();
}

void PythonQtWrapper_QProcess::setEnvironment(QProcess* theWrappedObject, const QStringList&  environment)
{
theWrappedObject->setEnvironment(environment);
}

void PythonQtWrapper_QProcess::setProcessChannelMode(QProcess* theWrappedObject, QProcess::ProcessChannelMode  mode)
{
theWrappedObject->setProcessChannelMode(mode);
}

void PythonQtWrapper_QProcess::setReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel)
{
theWrappedObject->setReadChannel(channel);
}

void PythonQtWrapper_QProcess::setStandardErrorFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode)
{
theWrappedObject->setStandardErrorFile(fileName, mode);
}

void PythonQtWrapper_QProcess::setStandardInputFile(QProcess* theWrappedObject, const QString&  fileName)
{
theWrappedObject->setStandardInputFile(fileName);
}

void PythonQtWrapper_QProcess::setStandardOutputFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode)
{
theWrappedObject->setStandardOutputFile(fileName, mode);
}

void PythonQtWrapper_QProcess::setStandardOutputProcess(QProcess* theWrappedObject, QProcess*  destination)
{
theWrappedObject->setStandardOutputProcess(destination);
}

void PythonQtWrapper_QProcess::setWorkingDirectory(QProcess* theWrappedObject, const QString&  dir)
{
theWrappedObject->setWorkingDirectory(dir);
}

void PythonQtWrapper_QProcess::start(QProcess* theWrappedObject, const QString&  program, QIODevice::OpenMode  mode)
{
theWrappedObject->start(program, mode);
}

void PythonQtWrapper_QProcess::start(QProcess* theWrappedObject, const QString&  program, const QStringList&  arguments, QIODevice::OpenMode  mode)
{
theWrappedObject->start(program, arguments, mode);
}

bool  PythonQtWrapper_QProcess::static_QProcess_startDetached(const QString&  program)
{
return QProcess::startDetached(program);
}

bool  PythonQtWrapper_QProcess::static_QProcess_startDetached(const QString&  program, const QStringList&  arguments)
{
return QProcess::startDetached(program, arguments);
}

bool  PythonQtWrapper_QProcess::static_QProcess_startDetached(const QString&  program, const QStringList&  arguments, const QString&  workingDirectory, qint64*  pid)
{
return QProcess::startDetached(program, arguments, workingDirectory, pid);
}

QProcess::ProcessState  PythonQtWrapper_QProcess::state(QProcess* theWrappedObject) const
{
return theWrappedObject->state();
}

QStringList  PythonQtWrapper_QProcess::static_QProcess_systemEnvironment()
{
return QProcess::systemEnvironment();
}

bool  PythonQtWrapper_QProcess::waitForBytesWritten(QProcess* theWrappedObject, int  msecs)
{
return theWrappedObject->waitForBytesWritten(msecs);
}

bool  PythonQtWrapper_QProcess::waitForFinished(QProcess* theWrappedObject, int  msecs)
{
return theWrappedObject->waitForFinished(msecs);
}

bool  PythonQtWrapper_QProcess::waitForReadyRead(QProcess* theWrappedObject, int  msecs)
{
return theWrappedObject->waitForReadyRead(msecs);
}

bool  PythonQtWrapper_QProcess::waitForStarted(QProcess* theWrappedObject, int  msecs)
{
return theWrappedObject->waitForStarted(msecs);
}

QString  PythonQtWrapper_QProcess::workingDirectory(QProcess* theWrappedObject) const
{
return theWrappedObject->workingDirectory();
}

