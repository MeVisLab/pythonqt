#ifndef PYTHONQTWRAPPER_QPROCESS_H
#define PYTHONQTWRAPPER_QPROCESS_H

#include <qprocess.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qprocess.h>
#include <qstringlist.h>

class PythonQtShell_QProcess : public QProcess
{
public:
    PythonQtShell_QProcess(QObject*  parent = 0):QProcess(parent),_wrapper(NULL) {};

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void close();
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual void setupChildProcess();
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  data, qint64  len);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QProcess : public QProcess
{ public:
inline qint64  readData(char*  data, qint64  maxlen) { return QProcess::readData(data, maxlen); }
inline qint64  writeData(const char*  data, qint64  len) { return QProcess::writeData(data, len); }
inline void setupChildProcess() { QProcess::setupChildProcess(); }
};

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
   bool  waitForReadyRead(QProcess* theWrappedObject, int  msecs = 30000);
   QByteArray  readAllStandardOutput(QProcess* theWrappedObject);
   void setReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   void setEnvironment(QProcess* theWrappedObject, const QStringList&  environment);
   void closeReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   qint64  readData(QProcess* theWrappedObject, char*  data, qint64  maxlen);
   void closeWriteChannel(QProcess* theWrappedObject);
   void setStandardOutputProcess(QProcess* theWrappedObject, QProcess*  destination);
   void close(QProcess* theWrappedObject);
   bool  isSequential(QProcess* theWrappedObject) const;
   QString  workingDirectory(QProcess* theWrappedObject) const;
   bool  canReadLine(QProcess* theWrappedObject) const;
   int  static_QProcess_execute(const QString&  program);
   QProcess::ProcessChannel  readChannel(QProcess* theWrappedObject) const;
   void setStandardErrorFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode = QIODevice::Truncate);
   qint64  bytesToWrite(QProcess* theWrappedObject) const;
   void setStandardOutputFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode = QIODevice::Truncate);
   QByteArray  readAllStandardError(QProcess* theWrappedObject);
   QStringList  environment(QProcess* theWrappedObject) const;
   QProcess::ProcessError  error(QProcess* theWrappedObject) const;
   QStringList  static_QProcess_systemEnvironment();
   bool  waitForBytesWritten(QProcess* theWrappedObject, int  msecs = 30000);
   void setProcessChannelMode(QProcess* theWrappedObject, QProcess::ProcessChannelMode  mode);
   void setStandardInputFile(QProcess* theWrappedObject, const QString&  fileName);
   bool  atEnd(QProcess* theWrappedObject) const;
   bool  static_QProcess_startDetached(const QString&  program, const QStringList&  arguments, const QString&  workingDirectory, qint64*  pid = 0);
   qint64  writeData(QProcess* theWrappedObject, const char*  data, qint64  len);
   qint64  bytesAvailable(QProcess* theWrappedObject) const;
   QProcess::ProcessChannelMode  processChannelMode(QProcess* theWrappedObject) const;
   int  static_QProcess_execute(const QString&  program, const QStringList&  arguments);
   QProcess::ExitStatus  exitStatus(QProcess* theWrappedObject) const;
   void start(QProcess* theWrappedObject, const QString&  program, const QStringList&  arguments, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   bool  waitForFinished(QProcess* theWrappedObject, int  msecs = 30000);
   void start(QProcess* theWrappedObject, const QString&  program, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void setupChildProcess(QProcess* theWrappedObject);
   QProcess::ProcessState  state(QProcess* theWrappedObject) const;
   bool  static_QProcess_startDetached(const QString&  program, const QStringList&  arguments);
   bool  waitForStarted(QProcess* theWrappedObject, int  msecs = 30000);
   int  exitCode(QProcess* theWrappedObject) const;
   void setWorkingDirectory(QProcess* theWrappedObject, const QString&  dir);
   bool  static_QProcess_startDetached(const QString&  program);
};

#endif // PYTHONQTWRAPPER_QPROCESS_H
