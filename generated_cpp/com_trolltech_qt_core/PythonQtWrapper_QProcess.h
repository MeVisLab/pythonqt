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
inline bool  promoted_waitForBytesWritten(int  msecs = 30000) { return QProcess::waitForBytesWritten(msecs); }
inline void promoted_close() { QProcess::close(); }
inline bool  promoted_isSequential() const { return QProcess::isSequential(); }
inline bool  promoted_waitForReadyRead(int  msecs = 30000) { return QProcess::waitForReadyRead(msecs); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QProcess::readData(data, maxlen); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QProcess::writeData(data, len); }
inline void promoted_setupChildProcess() { QProcess::setupChildProcess(); }
inline bool  promoted_canReadLine() const { return QProcess::canReadLine(); }
inline bool  promoted_atEnd() const { return QProcess::atEnd(); }
inline qint64  promoted_bytesToWrite() const { return QProcess::bytesToWrite(); }
inline qint64  promoted_bytesAvailable() const { return QProcess::bytesAvailable(); }
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
   void setStandardInputFile(QProcess* theWrappedObject, const QString&  fileName);
   int  exitCode(QProcess* theWrappedObject) const;
   bool  waitForBytesWritten(QProcess* theWrappedObject, int  msecs = 30000);
   void setStandardOutputProcess(QProcess* theWrappedObject, QProcess*  destination);
   bool  static_QProcess_startDetached(const QString&  program, const QStringList&  arguments);
   QString  workingDirectory(QProcess* theWrappedObject) const;
   bool  static_QProcess_startDetached(const QString&  program, const QStringList&  arguments, const QString&  workingDirectory, qint64*  pid = 0);
   void start(QProcess* theWrappedObject, const QString&  program, const QStringList&  arguments, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   bool  static_QProcess_startDetached(const QString&  program);
   void close(QProcess* theWrappedObject);
   void setWorkingDirectory(QProcess* theWrappedObject, const QString&  dir);
   bool  isSequential(QProcess* theWrappedObject) const;
   bool  waitForReadyRead(QProcess* theWrappedObject, int  msecs = 30000);
   qint64  readData(QProcess* theWrappedObject, char*  data, qint64  maxlen);
   QByteArray  readAllStandardError(QProcess* theWrappedObject);
   QProcess::ProcessState  state(QProcess* theWrappedObject) const;
   int  static_QProcess_execute(const QString&  program, const QStringList&  arguments);
   void setEnvironment(QProcess* theWrappedObject, const QStringList&  environment);
   int  static_QProcess_execute(const QString&  program);
   void setProcessChannelMode(QProcess* theWrappedObject, QProcess::ProcessChannelMode  mode);
   qint64  writeData(QProcess* theWrappedObject, const char*  data, qint64  len);
   void setReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   void setupChildProcess(QProcess* theWrappedObject);
   QByteArray  readAllStandardOutput(QProcess* theWrappedObject);
   void start(QProcess* theWrappedObject, const QString&  program, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   bool  waitForFinished(QProcess* theWrappedObject, int  msecs = 30000);
   bool  waitForStarted(QProcess* theWrappedObject, int  msecs = 30000);
   QProcess::ExitStatus  exitStatus(QProcess* theWrappedObject) const;
   QStringList  static_QProcess_systemEnvironment();
   QProcess::ProcessChannel  readChannel(QProcess* theWrappedObject) const;
   void closeWriteChannel(QProcess* theWrappedObject);
   QProcess::ProcessChannelMode  processChannelMode(QProcess* theWrappedObject) const;
   void setStandardErrorFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode = QIODevice::Truncate);
   QProcess::ProcessError  error(QProcess* theWrappedObject) const;
   void closeReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   void setStandardOutputFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode = QIODevice::Truncate);
   QStringList  environment(QProcess* theWrappedObject) const;
   bool  canReadLine(QProcess* theWrappedObject) const;
   bool  atEnd(QProcess* theWrappedObject) const;
   qint64  bytesToWrite(QProcess* theWrappedObject) const;
   qint64  bytesAvailable(QProcess* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPROCESS_H
