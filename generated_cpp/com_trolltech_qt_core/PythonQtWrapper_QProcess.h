#ifndef PYTHONQTWRAPPER_QPROCESS_H
#define PYTHONQTWRAPPER_QPROCESS_H

#include <qprocess.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qprocess.h>
#include <qstringlist.h>

class PythonQtWrapper_QProcess : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ProcessError ProcessChannelMode ProcessChannel ProcessState ExitStatus )
enum ProcessError{
  FailedToStart = QProcess::FailedToStart,   Crashed = QProcess::Crashed,   Timedout = QProcess::Timedout,   ReadError = QProcess::ReadError,   WriteError = QProcess::WriteError,   UnknownError = QProcess::UnknownError};
enum ProcessChannelMode{
  SeparateChannels = QProcess::SeparateChannels,   MergedChannels = QProcess::MergedChannels,   ForwardedChannels = QProcess::ForwardedChannels};
enum ProcessChannel{
  StandardOutput = QProcess::StandardOutput,   StandardError = QProcess::StandardError};
enum ProcessState{
  NotRunning = QProcess::NotRunning,   Starting = QProcess::Starting,   Running = QProcess::Running};
enum ExitStatus{
  NormalExit = QProcess::NormalExit,   CrashExit = QProcess::CrashExit};
public slots:
QProcess* new_QProcess(QObject*  parent = 0);
void delete_QProcess(QProcess* obj) { delete obj; } 
   bool  atEnd(QProcess* theWrappedObject) const;
   qint64  bytesAvailable(QProcess* theWrappedObject) const;
   qint64  bytesToWrite(QProcess* theWrappedObject) const;
   bool  canReadLine(QProcess* theWrappedObject) const;
   void close(QProcess* theWrappedObject);
   void closeReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   void closeWriteChannel(QProcess* theWrappedObject);
   QStringList  environment(QProcess* theWrappedObject) const;
   QProcess::ProcessError  error(QProcess* theWrappedObject) const;
   int  static_QProcess_execute(const QString&  program);
   int  static_QProcess_execute(const QString&  program, const QStringList&  arguments);
   int  exitCode(QProcess* theWrappedObject) const;
   QProcess::ExitStatus  exitStatus(QProcess* theWrappedObject) const;
   bool  isSequential(QProcess* theWrappedObject) const;
   QProcess::ProcessChannelMode  processChannelMode(QProcess* theWrappedObject) const;
   QByteArray  readAllStandardError(QProcess* theWrappedObject);
   QByteArray  readAllStandardOutput(QProcess* theWrappedObject);
   QProcess::ProcessChannel  readChannel(QProcess* theWrappedObject) const;
   void setEnvironment(QProcess* theWrappedObject, const QStringList&  environment);
   void setProcessChannelMode(QProcess* theWrappedObject, QProcess::ProcessChannelMode  mode);
   void setReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   void setStandardErrorFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode = QIODevice::Truncate);
   void setStandardInputFile(QProcess* theWrappedObject, const QString&  fileName);
   void setStandardOutputFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode = QIODevice::Truncate);
   void setStandardOutputProcess(QProcess* theWrappedObject, QProcess*  destination);
   void setWorkingDirectory(QProcess* theWrappedObject, const QString&  dir);
   void start(QProcess* theWrappedObject, const QString&  program, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void start(QProcess* theWrappedObject, const QString&  program, const QStringList&  arguments, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   bool  static_QProcess_startDetached(const QString&  program);
   bool  static_QProcess_startDetached(const QString&  program, const QStringList&  arguments);
   bool  static_QProcess_startDetached(const QString&  program, const QStringList&  arguments, const QString&  workingDirectory, qint64*  pid = 0);
   QProcess::ProcessState  state(QProcess* theWrappedObject) const;
   QStringList  static_QProcess_systemEnvironment();
   bool  waitForBytesWritten(QProcess* theWrappedObject, int  msecs = 30000);
   bool  waitForFinished(QProcess* theWrappedObject, int  msecs = 30000);
   bool  waitForReadyRead(QProcess* theWrappedObject, int  msecs = 30000);
   bool  waitForStarted(QProcess* theWrappedObject, int  msecs = 30000);
   QString  workingDirectory(QProcess* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPROCESS_H
