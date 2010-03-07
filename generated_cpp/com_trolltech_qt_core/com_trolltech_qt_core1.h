#include <PythonQt.h>
#include <QObject>
#include <QStringList>
#include <QTextCodec>
#include <QVarLengthArray>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemmodel.h>
#include <qabstractstate.h>
#include <qabstracttransition.h>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qeasingcurve.h>
#include <qfile.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmutex.h>
#include <qobject.h>
#include <qpair.h>
#include <qparallelanimationgroup.h>
#include <qpauseanimation.h>
#include <qprocess.h>
#include <qpropertyanimation.h>
#include <qreadwritelock.h>
#include <qrunnable.h>
#include <qsemaphore.h>
#include <qsequentialanimationgroup.h>
#include <qsettings.h>
#include <qsignalmapper.h>
#include <qsignaltransition.h>
#include <qsocketnotifier.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringlist.h>
#include <qstringmatcher.h>
#include <qsystemsemaphore.h>
#include <qtemporaryfile.h>
#include <qtextboundaryfinder.h>
#include <qtextcodec.h>
#include <qtextstream.h>
#include <qthreadpool.h>
#include <qtimeline.h>
#include <qvector.h>



class PythonQtWrapper_QModelIndex : public QObject
{ Q_OBJECT
public:
public slots:
QModelIndex* new_QModelIndex();
QModelIndex* new_QModelIndex(const QModelIndex&  other);
void delete_QModelIndex(QModelIndex* obj) { delete obj; } 
   const QAbstractItemModel*  model(QModelIndex* theWrappedObject) const;
   bool  isValid(QModelIndex* theWrappedObject) const;
   QModelIndex  child(QModelIndex* theWrappedObject, int  row, int  column) const;
   QModelIndex  parent(QModelIndex* theWrappedObject) const;
   bool  operator_less(QModelIndex* theWrappedObject, const QModelIndex&  other) const;
   QVariant  data(QModelIndex* theWrappedObject, int  role = Qt::DisplayRole) const;
   qint64  internalId(QModelIndex* theWrappedObject) const;
   bool  operator_equal(QModelIndex* theWrappedObject, const QModelIndex&  other) const;
   Qt::ItemFlags  flags(QModelIndex* theWrappedObject) const;
   void*  internalPointer(QModelIndex* theWrappedObject) const;
   QModelIndex  sibling(QModelIndex* theWrappedObject, int  row, int  column) const;
   int  column(QModelIndex* theWrappedObject) const;
   int  row(QModelIndex* theWrappedObject) const;
    QString py_toString(QModelIndex*);
};





class PythonQtWrapper_QMutex : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RecursionMode )
enum RecursionMode{
  NonRecursive = QMutex::NonRecursive,   Recursive = QMutex::Recursive};
public slots:
QMutex* new_QMutex(QMutex::RecursionMode  mode = QMutex::NonRecursive);
void delete_QMutex(QMutex* obj) { delete obj; } 
   void unlock(QMutex* theWrappedObject);
   bool  tryLock(QMutex* theWrappedObject, int  timeout);
   bool  tryLock(QMutex* theWrappedObject);
   void lock(QMutex* theWrappedObject);
};





class PythonQtShell_QObject : public QObject
{
public:
    PythonQtShell_QObject(QObject*  parent = 0):QObject(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QObject : public QObject
{ public:
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QObject::timerEvent(arg__1); }
inline void promoted_customEvent(QEvent*  arg__1) { QObject::customEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QObject::event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QObject::eventFilter(arg__1, arg__2); }
inline void promoted_childEvent(QChildEvent*  arg__1) { QObject::childEvent(arg__1); }
};

class PythonQtWrapper_QObject : public QObject
{ Q_OBJECT
public:
public slots:
QObject* new_QObject(QObject*  parent = 0);
void delete_QObject(QObject* obj) { delete obj; } 
   void installEventFilter(QObject* theWrappedObject, QObject*  arg__1);
   void removeEventFilter(QObject* theWrappedObject, QObject*  arg__1);
   void dumpObjectInfo(QObject* theWrappedObject);
   void moveToThread(QObject* theWrappedObject, QThread*  thread);
   bool  isWidgetType(QObject* theWrappedObject) const;
   bool  setProperty(QObject* theWrappedObject, const char*  name, const QVariant&  value);
   QObject*  parent(QObject* theWrappedObject) const;
   void dumpObjectTree(QObject* theWrappedObject);
   void timerEvent(QObject* theWrappedObject, QTimerEvent*  arg__1);
   const QList<QObject* >*  children(QObject* theWrappedObject) const;
   void killTimer(QObject* theWrappedObject, int  id);
   void setObjectName(QObject* theWrappedObject, const QString&  name);
   QThread*  thread(QObject* theWrappedObject) const;
   bool  signalsBlocked(QObject* theWrappedObject) const;
   void setParent(QObject* theWrappedObject, QObject*  arg__1);
   void customEvent(QObject* theWrappedObject, QEvent*  arg__1);
   int  startTimer(QObject* theWrappedObject, int  interval);
   bool  blockSignals(QObject* theWrappedObject, bool  b);
   QVariant  property(QObject* theWrappedObject, const char*  name) const;
   bool  event(QObject* theWrappedObject, QEvent*  arg__1);
   bool  eventFilter(QObject* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   QList<QByteArray >  dynamicPropertyNames(QObject* theWrappedObject) const;
   void childEvent(QObject* theWrappedObject, QChildEvent*  arg__1);
   QString  objectName(QObject* theWrappedObject) const;
};





class PythonQtShell_QParallelAnimationGroup : public QParallelAnimationGroup
{
public:
    PythonQtShell_QParallelAnimationGroup(QObject*  parent = 0):QParallelAnimationGroup(parent),_wrapper(NULL) {};

virtual int  duration() const;
virtual void updateCurrentTime(int  currentTime);
virtual bool  event(QEvent*  event);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QParallelAnimationGroup : public QParallelAnimationGroup
{ public:
inline int  promoted_duration() const { return QParallelAnimationGroup::duration(); }
inline void promoted_updateCurrentTime(int  currentTime) { QParallelAnimationGroup::updateCurrentTime(currentTime); }
inline bool  promoted_event(QEvent*  event) { return QParallelAnimationGroup::event(event); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { QParallelAnimationGroup::updateDirection(direction); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QParallelAnimationGroup::updateState(newState, oldState); }
};

class PythonQtWrapper_QParallelAnimationGroup : public QObject
{ Q_OBJECT
public:
public slots:
QParallelAnimationGroup* new_QParallelAnimationGroup(QObject*  parent = 0);
void delete_QParallelAnimationGroup(QParallelAnimationGroup* obj) { delete obj; } 
   int  duration(QParallelAnimationGroup* theWrappedObject) const;
   void updateCurrentTime(QParallelAnimationGroup* theWrappedObject, int  currentTime);
   bool  event(QParallelAnimationGroup* theWrappedObject, QEvent*  event);
   void updateDirection(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction);
   void updateState(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
};





class PythonQtShell_QPauseAnimation : public QPauseAnimation
{
public:
    PythonQtShell_QPauseAnimation(QObject*  parent = 0):QPauseAnimation(parent),_wrapper(NULL) {};
    PythonQtShell_QPauseAnimation(int  msecs, QObject*  parent = 0):QPauseAnimation(msecs, parent),_wrapper(NULL) {};

virtual int  duration() const;
virtual void updateCurrentTime(int  arg__1);
virtual bool  event(QEvent*  e);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPauseAnimation : public QPauseAnimation
{ public:
inline int  promoted_duration() const { return QPauseAnimation::duration(); }
inline void promoted_updateCurrentTime(int  arg__1) { QPauseAnimation::updateCurrentTime(arg__1); }
inline bool  promoted_event(QEvent*  e) { return QPauseAnimation::event(e); }
};

class PythonQtWrapper_QPauseAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QPauseAnimation* new_QPauseAnimation(QObject*  parent = 0);
QPauseAnimation* new_QPauseAnimation(int  msecs, QObject*  parent = 0);
void delete_QPauseAnimation(QPauseAnimation* obj) { delete obj; } 
   int  duration(QPauseAnimation* theWrappedObject) const;
   void updateCurrentTime(QPauseAnimation* theWrappedObject, int  arg__1);
   bool  event(QPauseAnimation* theWrappedObject, QEvent*  e);
   void setDuration(QPauseAnimation* theWrappedObject, int  msecs);
};





class PythonQtShell_QProcess : public QProcess
{
public:
    PythonQtShell_QProcess(QObject*  parent = 0):QProcess(parent),_wrapper(NULL) {};

virtual bool  canReadLine() const;
virtual void setupChildProcess();
virtual qint64  bytesAvailable() const;
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual void close();
virtual bool  atEnd() const;
virtual bool  isSequential() const;
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  writeData(const char*  data, qint64  len);
virtual qint64  bytesToWrite() const;
virtual qint64  pos() const;
virtual qint64  size() const;
virtual bool  reset();
virtual bool  open(QIODevice::OpenMode  mode);
virtual bool  seek(qint64  pos);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QProcess : public QProcess
{ public:
inline bool  promoted_canReadLine() const { return QProcess::canReadLine(); }
inline void promoted_setupChildProcess() { QProcess::setupChildProcess(); }
inline qint64  promoted_bytesAvailable() const { return QProcess::bytesAvailable(); }
inline bool  promoted_waitForReadyRead(int  msecs = 30000) { return QProcess::waitForReadyRead(msecs); }
inline void promoted_close() { QProcess::close(); }
inline bool  promoted_atEnd() const { return QProcess::atEnd(); }
inline bool  promoted_isSequential() const { return QProcess::isSequential(); }
inline bool  promoted_waitForBytesWritten(int  msecs = 30000) { return QProcess::waitForBytesWritten(msecs); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QProcess::readData(data, maxlen); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QProcess::writeData(data, len); }
inline qint64  promoted_bytesToWrite() const { return QProcess::bytesToWrite(); }
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
   bool  canReadLine(QProcess* theWrappedObject) const;
   void closeReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   void setReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   QStringList  environment(QProcess* theWrappedObject) const;
   bool  waitForStarted(QProcess* theWrappedObject, int  msecs = 30000);
   void setupChildProcess(QProcess* theWrappedObject);
   bool  waitForFinished(QProcess* theWrappedObject, int  msecs = 30000);
   qint64  bytesAvailable(QProcess* theWrappedObject) const;
   QProcess::ProcessError  error(QProcess* theWrappedObject) const;
   QProcessEnvironment  processEnvironment(QProcess* theWrappedObject) const;
   void setWorkingDirectory(QProcess* theWrappedObject, const QString&  dir);
   int  static_QProcess_execute(const QString&  program, const QStringList&  arguments);
   int  static_QProcess_execute(const QString&  program);
   void closeWriteChannel(QProcess* theWrappedObject);
   QString  workingDirectory(QProcess* theWrappedObject) const;
   bool  waitForReadyRead(QProcess* theWrappedObject, int  msecs = 30000);
   void start(QProcess* theWrappedObject, const QString&  program, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void start(QProcess* theWrappedObject, const QString&  program, const QStringList&  arguments, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void setStandardInputFile(QProcess* theWrappedObject, const QString&  fileName);
   void close(QProcess* theWrappedObject);
   QStringList  static_QProcess_systemEnvironment();
   void setStandardOutputFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode = QIODevice::Truncate);
   QByteArray  readAllStandardError(QProcess* theWrappedObject);
   QProcess::ProcessChannelMode  processChannelMode(QProcess* theWrappedObject) const;
   bool  atEnd(QProcess* theWrappedObject) const;
   QProcess::ProcessState  state(QProcess* theWrappedObject) const;
   bool  isSequential(QProcess* theWrappedObject) const;
   bool  waitForBytesWritten(QProcess* theWrappedObject, int  msecs = 30000);
   qint64  readData(QProcess* theWrappedObject, char*  data, qint64  maxlen);
   bool  static_QProcess_startDetached(const QString&  program);
   bool  static_QProcess_startDetached(const QString&  program, const QStringList&  arguments);
   bool  static_QProcess_startDetached(const QString&  program, const QStringList&  arguments, const QString&  workingDirectory, qint64*  pid = 0);
   QByteArray  readAllStandardOutput(QProcess* theWrappedObject);
   void setEnvironment(QProcess* theWrappedObject, const QStringList&  environment);
   int  exitCode(QProcess* theWrappedObject) const;
   QProcess::ProcessChannel  readChannel(QProcess* theWrappedObject) const;
   void setProcessChannelMode(QProcess* theWrappedObject, QProcess::ProcessChannelMode  mode);
   void setStandardOutputProcess(QProcess* theWrappedObject, QProcess*  destination);
   void setProcessEnvironment(QProcess* theWrappedObject, const QProcessEnvironment&  environment);
   qint64  writeData(QProcess* theWrappedObject, const char*  data, qint64  len);
   qint64  bytesToWrite(QProcess* theWrappedObject) const;
   QProcess::ExitStatus  exitStatus(QProcess* theWrappedObject) const;
   void setStandardErrorFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode = QIODevice::Truncate);
};





class PythonQtWrapper_QProcessEnvironment : public QObject
{ Q_OBJECT
public:
public slots:
QProcessEnvironment* new_QProcessEnvironment();
QProcessEnvironment* new_QProcessEnvironment(const QProcessEnvironment&  other);
void delete_QProcessEnvironment(QProcessEnvironment* obj) { delete obj; } 
   QStringList  toStringList(QProcessEnvironment* theWrappedObject) const;
   QProcessEnvironment*  operator_assign(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other);
   void remove(QProcessEnvironment* theWrappedObject, const QString&  name);
   QProcessEnvironment  static_QProcessEnvironment_systemEnvironment();
   void clear(QProcessEnvironment* theWrappedObject);
   void insert(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  value);
   bool  contains(QProcessEnvironment* theWrappedObject, const QString&  name) const;
   bool  operator_equal(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other) const;
   QString  value(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  defaultValue = QString()) const;
   bool  isEmpty(QProcessEnvironment* theWrappedObject) const;
};





class PythonQtShell_QPropertyAnimation : public QPropertyAnimation
{
public:
    PythonQtShell_QPropertyAnimation(QObject*  parent = 0):QPropertyAnimation(parent),_wrapper(NULL) {};
    PythonQtShell_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent = 0):QPropertyAnimation(target, propertyName, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  event);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
virtual void updateCurrentValue(const QVariant&  value);
virtual int  duration() const;
virtual QVariant  interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const;
virtual void updateCurrentTime(int  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPropertyAnimation : public QPropertyAnimation
{ public:
inline bool  promoted_event(QEvent*  event) { return QPropertyAnimation::event(event); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QPropertyAnimation::updateState(newState, oldState); }
inline void promoted_updateCurrentValue(const QVariant&  value) { QPropertyAnimation::updateCurrentValue(value); }
};

class PythonQtWrapper_QPropertyAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QPropertyAnimation* new_QPropertyAnimation(QObject*  parent = 0);
QPropertyAnimation* new_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent = 0);
void delete_QPropertyAnimation(QPropertyAnimation* obj) { delete obj; } 
   QByteArray  propertyName(QPropertyAnimation* theWrappedObject) const;
   bool  event(QPropertyAnimation* theWrappedObject, QEvent*  event);
   QObject*  targetObject(QPropertyAnimation* theWrappedObject) const;
   void updateState(QPropertyAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
   void updateCurrentValue(QPropertyAnimation* theWrappedObject, const QVariant&  value);
   void setPropertyName(QPropertyAnimation* theWrappedObject, const QByteArray&  propertyName);
   void setTargetObject(QPropertyAnimation* theWrappedObject, QObject*  target);
};





class PythonQtWrapper_QReadWriteLock : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RecursionMode )
enum RecursionMode{
  NonRecursive = QReadWriteLock::NonRecursive,   Recursive = QReadWriteLock::Recursive};
public slots:
QReadWriteLock* new_QReadWriteLock();
QReadWriteLock* new_QReadWriteLock(QReadWriteLock::RecursionMode  recursionMode);
void delete_QReadWriteLock(QReadWriteLock* obj) { delete obj; } 
   void unlock(QReadWriteLock* theWrappedObject);
   void lockForRead(QReadWriteLock* theWrappedObject);
   void lockForWrite(QReadWriteLock* theWrappedObject);
   bool  tryLockForRead(QReadWriteLock* theWrappedObject, int  timeout);
   bool  tryLockForRead(QReadWriteLock* theWrappedObject);
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject, int  timeout);
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject);
};





class PythonQtShell_QRunnable : public QRunnable
{
public:
    PythonQtShell_QRunnable():QRunnable(),_wrapper(NULL) {};

virtual void run();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QRunnable : public QObject
{ Q_OBJECT
public:
public slots:
QRunnable* new_QRunnable();
void delete_QRunnable(QRunnable* obj) { delete obj; } 
   bool  autoDelete(QRunnable* theWrappedObject) const;
   void setAutoDelete(QRunnable* theWrappedObject, bool  _autoDelete);
};





class PythonQtWrapper_QSemaphore : public QObject
{ Q_OBJECT
public:
public slots:
QSemaphore* new_QSemaphore(int  n = 0);
void delete_QSemaphore(QSemaphore* obj) { delete obj; } 
   int  available(QSemaphore* theWrappedObject) const;
   void release(QSemaphore* theWrappedObject, int  n = 1);
   void acquire(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n, int  timeout);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n = 1);
};





class PythonQtShell_QSequentialAnimationGroup : public QSequentialAnimationGroup
{
public:
    PythonQtShell_QSequentialAnimationGroup(QObject*  parent = 0):QSequentialAnimationGroup(parent),_wrapper(NULL) {};

virtual int  duration() const;
virtual void updateCurrentTime(int  arg__1);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual bool  event(QEvent*  event);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSequentialAnimationGroup : public QSequentialAnimationGroup
{ public:
inline int  promoted_duration() const { return QSequentialAnimationGroup::duration(); }
inline void promoted_updateCurrentTime(int  arg__1) { QSequentialAnimationGroup::updateCurrentTime(arg__1); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { QSequentialAnimationGroup::updateDirection(direction); }
inline bool  promoted_event(QEvent*  event) { return QSequentialAnimationGroup::event(event); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QSequentialAnimationGroup::updateState(newState, oldState); }
};

class PythonQtWrapper_QSequentialAnimationGroup : public QObject
{ Q_OBJECT
public:
public slots:
QSequentialAnimationGroup* new_QSequentialAnimationGroup(QObject*  parent = 0);
void delete_QSequentialAnimationGroup(QSequentialAnimationGroup* obj) { delete obj; } 
   QAbstractAnimation*  currentAnimation(QSequentialAnimationGroup* theWrappedObject) const;
   int  duration(QSequentialAnimationGroup* theWrappedObject) const;
   void updateCurrentTime(QSequentialAnimationGroup* theWrappedObject, int  arg__1);
   void updateDirection(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction);
   bool  event(QSequentialAnimationGroup* theWrappedObject, QEvent*  event);
   QPauseAnimation*  insertPause(QSequentialAnimationGroup* theWrappedObject, int  index, int  msecs);
   void updateState(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
   QPauseAnimation*  addPause(QSequentialAnimationGroup* theWrappedObject, int  msecs);
};





class PythonQtShell_QSettings : public QSettings
{
public:
    PythonQtShell_QSettings(QObject*  parent = 0):QSettings(parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0):QSettings(format, scope, organization, application, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0):QSettings(scope, organization, application, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = 0):QSettings(fileName, format, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = 0):QSettings(organization, application, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSettings : public QSettings
{ public:
inline bool  promoted_event(QEvent*  event) { return QSettings::event(event); }
};

class PythonQtWrapper_QSettings : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Format Status Scope )
enum Format{
  NativeFormat = QSettings::NativeFormat,   IniFormat = QSettings::IniFormat,   InvalidFormat = QSettings::InvalidFormat,   CustomFormat1 = QSettings::CustomFormat1,   CustomFormat2 = QSettings::CustomFormat2,   CustomFormat3 = QSettings::CustomFormat3,   CustomFormat4 = QSettings::CustomFormat4,   CustomFormat5 = QSettings::CustomFormat5,   CustomFormat6 = QSettings::CustomFormat6,   CustomFormat7 = QSettings::CustomFormat7,   CustomFormat8 = QSettings::CustomFormat8,   CustomFormat9 = QSettings::CustomFormat9,   CustomFormat10 = QSettings::CustomFormat10,   CustomFormat11 = QSettings::CustomFormat11,   CustomFormat12 = QSettings::CustomFormat12,   CustomFormat13 = QSettings::CustomFormat13,   CustomFormat14 = QSettings::CustomFormat14,   CustomFormat15 = QSettings::CustomFormat15,   CustomFormat16 = QSettings::CustomFormat16};
enum Status{
  NoError = QSettings::NoError,   AccessError = QSettings::AccessError,   FormatError = QSettings::FormatError};
enum Scope{
  UserScope = QSettings::UserScope,   SystemScope = QSettings::SystemScope};
public slots:
QSettings* new_QSettings(QObject*  parent = 0);
QSettings* new_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0);
QSettings* new_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0);
QSettings* new_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = 0);
QSettings* new_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = 0);
void delete_QSettings(QSettings* obj) { delete obj; } 
   QStringList  childGroups(QSettings* theWrappedObject) const;
   bool  contains(QSettings* theWrappedObject, const QString&  key) const;
   QTextCodec*  iniCodec(QSettings* theWrappedObject) const;
   QString  organizationName(QSettings* theWrappedObject) const;
   void clear(QSettings* theWrappedObject);
   void beginGroup(QSettings* theWrappedObject, const QString&  prefix);
   bool  isWritable(QSettings* theWrappedObject) const;
   bool  fallbacksEnabled(QSettings* theWrappedObject) const;
   QSettings::Format  static_QSettings_defaultFormat();
   int  beginReadArray(QSettings* theWrappedObject, const QString&  prefix);
   void setArrayIndex(QSettings* theWrappedObject, int  i);
   QStringList  childKeys(QSettings* theWrappedObject) const;
   void endGroup(QSettings* theWrappedObject);
   void static_QSettings_setPath(QSettings::Format  format, QSettings::Scope  scope, const QString&  path);
   void setIniCodec(QSettings* theWrappedObject, const char*  codecName);
   void setIniCodec(QSettings* theWrappedObject, QTextCodec*  codec);
   QString  group(QSettings* theWrappedObject) const;
   void setFallbacksEnabled(QSettings* theWrappedObject, bool  b);
   void static_QSettings_setDefaultFormat(QSettings::Format  format);
   void sync(QSettings* theWrappedObject);
   QString  applicationName(QSettings* theWrappedObject) const;
   void endArray(QSettings* theWrappedObject);
   QStringList  allKeys(QSettings* theWrappedObject) const;
   QString  fileName(QSettings* theWrappedObject) const;
   QVariant  value(QSettings* theWrappedObject, const QString&  key, const QVariant&  defaultValue = QVariant()) const;
   void remove(QSettings* theWrappedObject, const QString&  key);
   QSettings::Format  format(QSettings* theWrappedObject) const;
   QSettings::Scope  scope(QSettings* theWrappedObject) const;
   bool  event(QSettings* theWrappedObject, QEvent*  event);
   void beginWriteArray(QSettings* theWrappedObject, const QString&  prefix, int  size = -1);
   QSettings::Status  status(QSettings* theWrappedObject) const;
   void setValue(QSettings* theWrappedObject, const QString&  key, const QVariant&  value);
};





class PythonQtShell_QSignalMapper : public QSignalMapper
{
public:
    PythonQtShell_QSignalMapper(QObject*  parent = 0):QSignalMapper(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSignalMapper : public QObject
{ Q_OBJECT
public:
public slots:
QSignalMapper* new_QSignalMapper(QObject*  parent = 0);
void delete_QSignalMapper(QSignalMapper* obj) { delete obj; } 
   QObject*  mapping(QSignalMapper* theWrappedObject, QObject*  object) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, const QString&  text) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, int  id) const;
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, QObject*  object);
   void removeMappings(QSignalMapper* theWrappedObject, QObject*  sender);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, int  id);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, const QString&  text);
};





class PythonQtShell_QSignalTransition : public QSignalTransition
{
public:
    PythonQtShell_QSignalTransition(QObject*  sender, const char*  signal, QState*  sourceState = 0):QSignalTransition(sender, signal, sourceState),_wrapper(NULL) {};
    PythonQtShell_QSignalTransition(QState*  sourceState = 0):QSignalTransition(sourceState),_wrapper(NULL) {};

virtual bool  event(QEvent*  e);
virtual void onTransition(QEvent*  event);
virtual bool  eventTest(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSignalTransition : public QSignalTransition
{ public:
inline bool  promoted_event(QEvent*  e) { return QSignalTransition::event(e); }
inline void promoted_onTransition(QEvent*  event) { QSignalTransition::onTransition(event); }
inline bool  promoted_eventTest(QEvent*  event) { return QSignalTransition::eventTest(event); }
};

class PythonQtWrapper_QSignalTransition : public QObject
{ Q_OBJECT
public:
public slots:
QSignalTransition* new_QSignalTransition(QObject*  sender, const char*  signal, QState*  sourceState = 0);
QSignalTransition* new_QSignalTransition(QState*  sourceState = 0);
void delete_QSignalTransition(QSignalTransition* obj) { delete obj; } 
   void setSenderObject(QSignalTransition* theWrappedObject, QObject*  sender);
   bool  event(QSignalTransition* theWrappedObject, QEvent*  e);
   QByteArray  signal(QSignalTransition* theWrappedObject) const;
   void onTransition(QSignalTransition* theWrappedObject, QEvent*  event);
   QObject*  senderObject(QSignalTransition* theWrappedObject) const;
   void setSignal(QSignalTransition* theWrappedObject, const QByteArray&  signal);
   bool  eventTest(QSignalTransition* theWrappedObject, QEvent*  event);
};





class PythonQtShell_QSocketNotifier : public QSocketNotifier
{
public:
    PythonQtShell_QSocketNotifier(int  socket, QSocketNotifier::Type  arg__2, QObject*  parent = 0):QSocketNotifier(socket, arg__2, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSocketNotifier : public QSocketNotifier
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QSocketNotifier::event(arg__1); }
};

class PythonQtWrapper_QSocketNotifier : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Read = QSocketNotifier::Read,   Write = QSocketNotifier::Write,   Exception = QSocketNotifier::Exception};
public slots:
QSocketNotifier* new_QSocketNotifier(int  socket, QSocketNotifier::Type  arg__2, QObject*  parent = 0);
void delete_QSocketNotifier(QSocketNotifier* obj) { delete obj; } 
   int  socket(QSocketNotifier* theWrappedObject) const;
   bool  event(QSocketNotifier* theWrappedObject, QEvent*  arg__1);
   bool  isEnabled(QSocketNotifier* theWrappedObject) const;
   QSocketNotifier::Type  type(QSocketNotifier* theWrappedObject) const;
};





class PythonQtShell_QState : public QState
{
public:
    PythonQtShell_QState(QState*  parent = 0):QState(parent),_wrapper(NULL) {};
    PythonQtShell_QState(QState::ChildMode  childMode, QState*  parent = 0):QState(childMode, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  e);
virtual void onExit(QEvent*  event);
virtual void onEntry(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QState : public QState
{ public:
inline bool  promoted_event(QEvent*  e) { return QState::event(e); }
inline void promoted_onExit(QEvent*  event) { QState::onExit(event); }
inline void promoted_onEntry(QEvent*  event) { QState::onEntry(event); }
};

class PythonQtWrapper_QState : public QObject
{ Q_OBJECT
public:
public slots:
QState* new_QState(QState*  parent = 0);
QState* new_QState(QState::ChildMode  childMode, QState*  parent = 0);
void delete_QState(QState* obj) { delete obj; } 
   bool  event(QState* theWrappedObject, QEvent*  e);
   void onExit(QState* theWrappedObject, QEvent*  event);
   QAbstractState*  initialState(QState* theWrappedObject) const;
   void setInitialState(QState* theWrappedObject, QAbstractState*  state);
   void onEntry(QState* theWrappedObject, QEvent*  event);
   void setErrorState(QState* theWrappedObject, QAbstractState*  state);
   QState::ChildMode  childMode(QState* theWrappedObject) const;
   QAbstractState*  errorState(QState* theWrappedObject) const;
   void setChildMode(QState* theWrappedObject, QState::ChildMode  mode);
   void assignProperty(QState* theWrappedObject, QObject*  object, const char*  name, const QVariant&  value);
   QAbstractTransition*  addTransition(QState* theWrappedObject, QAbstractState*  target);
   QSignalTransition*  addTransition(QState* theWrappedObject, QObject*  sender, const char*  signal, QAbstractState*  target);
   void addTransition(QState* theWrappedObject, QAbstractTransition*  transition);
   void removeTransition(QState* theWrappedObject, QAbstractTransition*  transition);
};





class PythonQtShell_QStateMachine : public QStateMachine
{
public:
    PythonQtShell_QStateMachine(QObject*  parent = 0):QStateMachine(parent),_wrapper(NULL) {};

virtual void beginMicrostep(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual void onExit(QEvent*  event);
virtual void onEntry(QEvent*  event);
virtual void endSelectTransitions(QEvent*  event);
virtual void beginSelectTransitions(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void endMicrostep(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStateMachine : public QStateMachine
{ public:
inline void promoted_beginMicrostep(QEvent*  event) { QStateMachine::beginMicrostep(event); }
inline bool  promoted_event(QEvent*  e) { return QStateMachine::event(e); }
inline void promoted_onExit(QEvent*  event) { QStateMachine::onExit(event); }
inline void promoted_onEntry(QEvent*  event) { QStateMachine::onEntry(event); }
inline void promoted_endSelectTransitions(QEvent*  event) { QStateMachine::endSelectTransitions(event); }
inline void promoted_beginSelectTransitions(QEvent*  event) { QStateMachine::beginSelectTransitions(event); }
inline bool  promoted_eventFilter(QObject*  watched, QEvent*  event) { return QStateMachine::eventFilter(watched, event); }
inline void promoted_endMicrostep(QEvent*  event) { QStateMachine::endMicrostep(event); }
};

class PythonQtWrapper_QStateMachine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error EventPriority )
enum Error{
  NoError = QStateMachine::NoError,   NoInitialStateError = QStateMachine::NoInitialStateError,   NoDefaultStateInHistoryStateError = QStateMachine::NoDefaultStateInHistoryStateError,   NoCommonAncestorForTransitionError = QStateMachine::NoCommonAncestorForTransitionError};
enum EventPriority{
  NormalPriority = QStateMachine::NormalPriority,   HighPriority = QStateMachine::HighPriority};
public slots:
QStateMachine* new_QStateMachine(QObject*  parent = 0);
void delete_QStateMachine(QStateMachine* obj) { delete obj; } 
   void beginMicrostep(QStateMachine* theWrappedObject, QEvent*  event);
   bool  event(QStateMachine* theWrappedObject, QEvent*  e);
   void onExit(QStateMachine* theWrappedObject, QEvent*  event);
   QList<QAbstractAnimation* >  defaultAnimations(QStateMachine* theWrappedObject) const;
   void onEntry(QStateMachine* theWrappedObject, QEvent*  event);
   void endSelectTransitions(QStateMachine* theWrappedObject, QEvent*  event);
   void addDefaultAnimation(QStateMachine* theWrappedObject, QAbstractAnimation*  animation);
   QStateMachine::RestorePolicy  globalRestorePolicy(QStateMachine* theWrappedObject) const;
   void setAnimated(QStateMachine* theWrappedObject, bool  enabled);
   QStateMachine::Error  error(QStateMachine* theWrappedObject) const;
   void removeState(QStateMachine* theWrappedObject, QAbstractState*  state);
   bool  cancelDelayedEvent(QStateMachine* theWrappedObject, int  id);
   QSet<QAbstractState* >  configuration(QStateMachine* theWrappedObject) const;
   bool  isAnimated(QStateMachine* theWrappedObject) const;
   void setGlobalRestorePolicy(QStateMachine* theWrappedObject, QStateMachine::RestorePolicy  restorePolicy);
   void postEvent(QStateMachine* theWrappedObject, QEvent*  event, QStateMachine::EventPriority  priority = QStateMachine::NormalPriority);
   void beginSelectTransitions(QStateMachine* theWrappedObject, QEvent*  event);
   void addState(QStateMachine* theWrappedObject, QAbstractState*  state);
   int  postDelayedEvent(QStateMachine* theWrappedObject, QEvent*  event, int  delay);
   bool  eventFilter(QStateMachine* theWrappedObject, QObject*  watched, QEvent*  event);
   QString  errorString(QStateMachine* theWrappedObject) const;
   void endMicrostep(QStateMachine* theWrappedObject, QEvent*  event);
   bool  isRunning(QStateMachine* theWrappedObject) const;
   void removeDefaultAnimation(QStateMachine* theWrappedObject, QAbstractAnimation*  animation);
   void clearError(QStateMachine* theWrappedObject);
};





class PythonQtWrapper_QStateMachine_SignalEvent : public QObject
{ Q_OBJECT
public:
public slots:
QStateMachine::SignalEvent* new_QStateMachine_SignalEvent(QObject*  sender, int  signalIndex, const QList<QVariant >&  arguments);
void delete_QStateMachine_SignalEvent(QStateMachine::SignalEvent* obj) { delete obj; } 
   QObject*  sender(QStateMachine::SignalEvent* theWrappedObject) const;
   int  signalIndex(QStateMachine::SignalEvent* theWrappedObject) const;
   QList<QVariant >  arguments(QStateMachine::SignalEvent* theWrappedObject) const;
};





class PythonQtWrapper_QStateMachine_WrappedEvent : public QObject
{ Q_OBJECT
public:
public slots:
QStateMachine::WrappedEvent* new_QStateMachine_WrappedEvent(QObject*  object, QEvent*  event);
void delete_QStateMachine_WrappedEvent(QStateMachine::WrappedEvent* obj) { delete obj; } 
   QObject*  object(QStateMachine::WrappedEvent* theWrappedObject) const;
   QEvent*  event(QStateMachine::WrappedEvent* theWrappedObject) const;
};





class PythonQtWrapper_QStringMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QStringMatcher* new_QStringMatcher();
QStringMatcher* new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs = Qt::CaseSensitive);
QStringMatcher* new_QStringMatcher(const QStringMatcher&  other);
void delete_QStringMatcher(QStringMatcher* obj) { delete obj; } 
   void setPattern(QStringMatcher* theWrappedObject, const QString&  pattern);
   Qt::CaseSensitivity  caseSensitivity(QStringMatcher* theWrappedObject) const;
   int  indexIn(QStringMatcher* theWrappedObject, const QString&  str, int  from = 0) const;
   QString  pattern(QStringMatcher* theWrappedObject) const;
   void setCaseSensitivity(QStringMatcher* theWrappedObject, Qt::CaseSensitivity  cs);
};





class PythonQtWrapper_QSystemSemaphore : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AccessMode SystemSemaphoreError )
enum AccessMode{
  Open = QSystemSemaphore::Open,   Create = QSystemSemaphore::Create};
enum SystemSemaphoreError{
  NoError = QSystemSemaphore::NoError,   PermissionDenied = QSystemSemaphore::PermissionDenied,   KeyError = QSystemSemaphore::KeyError,   AlreadyExists = QSystemSemaphore::AlreadyExists,   NotFound = QSystemSemaphore::NotFound,   OutOfResources = QSystemSemaphore::OutOfResources,   UnknownError = QSystemSemaphore::UnknownError};
public slots:
QSystemSemaphore* new_QSystemSemaphore(const QString&  key, int  initialValue = 0, QSystemSemaphore::AccessMode  mode = QSystemSemaphore::Open);
void delete_QSystemSemaphore(QSystemSemaphore* obj) { delete obj; } 
   QSystemSemaphore::SystemSemaphoreError  error(QSystemSemaphore* theWrappedObject) const;
   QString  errorString(QSystemSemaphore* theWrappedObject) const;
   QString  key(QSystemSemaphore* theWrappedObject) const;
   bool  release(QSystemSemaphore* theWrappedObject, int  n = 1);
   bool  acquire(QSystemSemaphore* theWrappedObject);
   void setKey(QSystemSemaphore* theWrappedObject, const QString&  key, int  initialValue = 0, QSystemSemaphore::AccessMode  mode = QSystemSemaphore::Open);
};





class PythonQtShell_QTemporaryFile : public QTemporaryFile
{
public:
    PythonQtShell_QTemporaryFile():QTemporaryFile(),_wrapper(NULL) {};
    PythonQtShell_QTemporaryFile(QObject*  parent):QTemporaryFile(parent),_wrapper(NULL) {};
    PythonQtShell_QTemporaryFile(const QString&  templateName):QTemporaryFile(templateName),_wrapper(NULL) {};
    PythonQtShell_QTemporaryFile(const QString&  templateName, QObject*  parent):QTemporaryFile(templateName, parent),_wrapper(NULL) {};

virtual QAbstractFileEngine*  fileEngine() const;
virtual bool  open(QIODevice::OpenMode  flags);
virtual bool  isSequential() const;
virtual qint64  writeData(const char*  data, qint64  len);
virtual qint64  size() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual bool  seek(qint64  offset);
virtual bool  waitForBytesWritten(int  msecs);
virtual qint64  pos() const;
virtual bool  atEnd() const;
virtual void close();
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual qint64  bytesToWrite() const;
virtual qint64  bytesAvailable() const;
virtual bool  reset();
virtual bool  waitForReadyRead(int  msecs);
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTemporaryFile : public QTemporaryFile
{ public:
inline QAbstractFileEngine*  promoted_fileEngine() const { return QTemporaryFile::fileEngine(); }
inline bool  promoted_open(QIODevice::OpenMode  flags) { return QTemporaryFile::open(flags); }
};

class PythonQtWrapper_QTemporaryFile : public QObject
{ Q_OBJECT
public:
public slots:
QTemporaryFile* new_QTemporaryFile();
QTemporaryFile* new_QTemporaryFile(QObject*  parent);
QTemporaryFile* new_QTemporaryFile(const QString&  templateName);
QTemporaryFile* new_QTemporaryFile(const QString&  templateName, QObject*  parent);
void delete_QTemporaryFile(QTemporaryFile* obj) { delete obj; } 
   QString  fileName(QTemporaryFile* theWrappedObject) const;
   QAbstractFileEngine*  fileEngine(QTemporaryFile* theWrappedObject) const;
   bool  autoRemove(QTemporaryFile* theWrappedObject) const;
   void setAutoRemove(QTemporaryFile* theWrappedObject, bool  b);
   void setFileTemplate(QTemporaryFile* theWrappedObject, const QString&  name);
   QTemporaryFile*  static_QTemporaryFile_createLocalFile(QFile&  file);
   QTemporaryFile*  static_QTemporaryFile_createLocalFile(const QString&  fileName);
   bool  open(QTemporaryFile* theWrappedObject);
   bool  open(QTemporaryFile* theWrappedObject, QIODevice::OpenMode  flags);
   QString  fileTemplate(QTemporaryFile* theWrappedObject) const;
};





class PythonQtWrapper_QTextBoundaryFinder : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BoundaryReason BoundaryType )
Q_FLAGS(BoundaryReasons )
enum BoundaryReason{
  NotAtBoundary = QTextBoundaryFinder::NotAtBoundary,   StartWord = QTextBoundaryFinder::StartWord,   EndWord = QTextBoundaryFinder::EndWord};
enum BoundaryType{
  Grapheme = QTextBoundaryFinder::Grapheme,   Word = QTextBoundaryFinder::Word,   Line = QTextBoundaryFinder::Line,   Sentence = QTextBoundaryFinder::Sentence};
Q_DECLARE_FLAGS(BoundaryReasons, BoundaryReason)
public slots:
QTextBoundaryFinder* new_QTextBoundaryFinder();
QTextBoundaryFinder* new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QString&  string);
QTextBoundaryFinder* new_QTextBoundaryFinder(const QTextBoundaryFinder&  other);
void delete_QTextBoundaryFinder(QTextBoundaryFinder* obj) { delete obj; } 
   bool  isValid(QTextBoundaryFinder* theWrappedObject) const;
   QString  string(QTextBoundaryFinder* theWrappedObject) const;
   bool  isAtBoundary(QTextBoundaryFinder* theWrappedObject) const;
   int  position(QTextBoundaryFinder* theWrappedObject) const;
   QTextBoundaryFinder::BoundaryReasons  boundaryReasons(QTextBoundaryFinder* theWrappedObject) const;
   int  toNextBoundary(QTextBoundaryFinder* theWrappedObject);
   QTextBoundaryFinder::BoundaryType  type(QTextBoundaryFinder* theWrappedObject) const;
   void toStart(QTextBoundaryFinder* theWrappedObject);
   void toEnd(QTextBoundaryFinder* theWrappedObject);
   void setPosition(QTextBoundaryFinder* theWrappedObject, int  position);
   int  toPreviousBoundary(QTextBoundaryFinder* theWrappedObject);
};





class PythonQtShell_QTextCodec : public QTextCodec
{
public:
    PythonQtShell_QTextCodec():QTextCodec(),_wrapper(NULL) {};

virtual QByteArray  convertFromUnicode(const QChar*  in, int  length, QTextCodec::ConverterState*  state) const;
virtual int  mibEnum() const;
virtual QByteArray  name() const;
virtual QString  convertToUnicode(const char*  in, int  length, QTextCodec::ConverterState*  state) const;
virtual QList<QByteArray >  aliases() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextCodec : public QTextCodec
{ public:
inline QList<QByteArray >  promoted_aliases() const { return QTextCodec::aliases(); }
};

class PythonQtWrapper_QTextCodec : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ConversionFlag )
Q_FLAGS(ConversionFlags )
enum ConversionFlag{
  DefaultConversion = QTextCodec::DefaultConversion,   ConvertInvalidToNull = QTextCodec::ConvertInvalidToNull,   IgnoreHeader = QTextCodec::IgnoreHeader,   FreeFunction = QTextCodec::FreeFunction};
Q_DECLARE_FLAGS(ConversionFlags, ConversionFlag)
public slots:
   QTextCodec*  static_QTextCodec_codecForName(const char*  name);
   QTextCodec*  static_QTextCodec_codecForName(const QByteArray&  name);
   void static_QTextCodec_setCodecForCStrings(QTextCodec*  c);
   bool  canEncode(QTextCodec* theWrappedObject, const QString&  arg__1) const;
   bool  canEncode(QTextCodec* theWrappedObject, QChar  arg__1) const;
   QByteArray  fromUnicode(QTextCodec* theWrappedObject, const QString&  uc) const;
   QTextDecoder*  makeDecoder(QTextCodec* theWrappedObject) const;
   QTextEncoder*  makeEncoder(QTextCodec* theWrappedObject) const;
   QTextCodec*  static_QTextCodec_codecForMib(int  mib);
   QTextCodec*  static_QTextCodec_codecForLocale();
   QList<QByteArray >  static_QTextCodec_availableCodecs();
   QTextCodec*  static_QTextCodec_codecForCStrings();
   void static_QTextCodec_setCodecForTr(QTextCodec*  c);
   QList<int >  static_QTextCodec_availableMibs();
   QString  toUnicode(QTextCodec* theWrappedObject, const QByteArray&  arg__1) const;
   QList<QByteArray >  aliases(QTextCodec* theWrappedObject) const;
   QTextCodec*  static_QTextCodec_codecForUtfText(const QByteArray&  ba, QTextCodec*  defaultCodec);
   QTextCodec*  static_QTextCodec_codecForUtfText(const QByteArray&  ba);
   void static_QTextCodec_setCodecForLocale(QTextCodec*  c);
   QTextCodec*  static_QTextCodec_codecForHtml(const QByteArray&  ba, QTextCodec*  defaultCodec);
   QTextCodec*  static_QTextCodec_codecForHtml(const QByteArray&  ba);
};





class PythonQtWrapper_QTextDecoder : public QObject
{ Q_OBJECT
public:
public slots:
QTextDecoder* new_QTextDecoder(const QTextCodec*  codec);
void delete_QTextDecoder(QTextDecoder* obj) { delete obj; } 
   QString  toUnicode(QTextDecoder* theWrappedObject, const QByteArray&  ba);
   bool  hasFailure(QTextDecoder* theWrappedObject) const;
};





class PythonQtWrapper_QTextEncoder : public QObject
{ Q_OBJECT
public:
public slots:
QTextEncoder* new_QTextEncoder(const QTextCodec*  codec);
void delete_QTextEncoder(QTextEncoder* obj) { delete obj; } 
   bool  hasFailure(QTextEncoder* theWrappedObject) const;
   QByteArray  fromUnicode(QTextEncoder* theWrappedObject, const QString&  str);
};





class PythonQtShell_QTextStream : public QTextStream
{
public:
    PythonQtShell_QTextStream():QTextStream(),_wrapper(NULL) {};
    PythonQtShell_QTextStream(QIODevice*  device):QTextStream(device),_wrapper(NULL) {};
    PythonQtShell_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode = QIODevice::ReadOnly):QTextStream(array, openMode),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RealNumberNotation NumberFlag FieldAlignment Status )
Q_FLAGS(NumberFlags )
enum RealNumberNotation{
  SmartNotation = QTextStream::SmartNotation,   FixedNotation = QTextStream::FixedNotation,   ScientificNotation = QTextStream::ScientificNotation};
enum NumberFlag{
  ShowBase = QTextStream::ShowBase,   ForcePoint = QTextStream::ForcePoint,   ForceSign = QTextStream::ForceSign,   UppercaseBase = QTextStream::UppercaseBase,   UppercaseDigits = QTextStream::UppercaseDigits};
enum FieldAlignment{
  AlignLeft = QTextStream::AlignLeft,   AlignRight = QTextStream::AlignRight,   AlignCenter = QTextStream::AlignCenter,   AlignAccountingStyle = QTextStream::AlignAccountingStyle};
enum Status{
  Ok = QTextStream::Ok,   ReadPastEnd = QTextStream::ReadPastEnd,   ReadCorruptData = QTextStream::ReadCorruptData};
Q_DECLARE_FLAGS(NumberFlags, NumberFlag)
public slots:
QTextStream* new_QTextStream();
QTextStream* new_QTextStream(QIODevice*  device);
QTextStream* new_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode = QIODevice::ReadOnly);
void delete_QTextStream(QTextStream* obj) { delete obj; } 
   int  fieldWidth(QTextStream* theWrappedObject) const;
   QIODevice*  device(QTextStream* theWrappedObject) const;
   QString  readLine(QTextStream* theWrappedObject, qint64  maxlen = 0);
   int  integerBase(QTextStream* theWrappedObject) const;
   void setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate);
   int  realNumberPrecision(QTextStream* theWrappedObject) const;
   QTextStream::FieldAlignment  fieldAlignment(QTextStream* theWrappedObject) const;
   void setIntegerBase(QTextStream* theWrappedObject, int  base);
   bool  autoDetectUnicode(QTextStream* theWrappedObject) const;
   void skipWhiteSpace(QTextStream* theWrappedObject);
   void setLocale(QTextStream* theWrappedObject, const QLocale&  locale);
   bool  seek(QTextStream* theWrappedObject, qint64  pos);
   void setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags);
   void setPadChar(QTextStream* theWrappedObject, QChar  ch);
   void reset(QTextStream* theWrappedObject);
   QTextStream::Status  status(QTextStream* theWrappedObject) const;
   qint64  pos(QTextStream* theWrappedObject) const;
   QLocale  locale(QTextStream* theWrappedObject) const;
   QTextStream::RealNumberNotation  realNumberNotation(QTextStream* theWrappedObject) const;
   void setCodec(QTextStream* theWrappedObject, QTextCodec*  codec);
   QTextCodec*  codec(QTextStream* theWrappedObject) const;
   void setCodec(QTextStream* theWrappedObject, const char*  codecName);
   void flush(QTextStream* theWrappedObject);
   QTextStream*  readFloat(QTextStream* theWrappedObject, float&  f);
   QString  readAll(QTextStream* theWrappedObject);
   QTextStream::NumberFlags  numberFlags(QTextStream* theWrappedObject) const;
   QString  read(QTextStream* theWrappedObject, qint64  maxlen);
   void setDevice(QTextStream* theWrappedObject, QIODevice*  device);
   void setFieldWidth(QTextStream* theWrappedObject, int  width);
   void resetStatus(QTextStream* theWrappedObject);
   QChar  padChar(QTextStream* theWrappedObject) const;
   QTextStream*  writeFloat(QTextStream* theWrappedObject, float  f);
   QTextStream*  writeDouble(QTextStream* theWrappedObject, double  f);
   QTextStream*  writeLongLong(QTextStream* theWrappedObject, qlonglong  i);
   QTextStream*  writeInt(QTextStream* theWrappedObject, signed int  i);
   QTextStream*  writeShort(QTextStream* theWrappedObject, signed short  i);
   QTextStream*  writeByte(QTextStream* theWrappedObject, char  ch);
   QTextStream*  writeBoolean(QTextStream* theWrappedObject, QBool  b);
   bool  atEnd(QTextStream* theWrappedObject) const;
   void setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation);
   QTextStream*  readDouble(QTextStream* theWrappedObject, double&  f);
   QTextStream*  readLongLong(QTextStream* theWrappedObject, qlonglong&  i);
   QTextStream*  readInt(QTextStream* theWrappedObject, signed int&  i);
   QTextStream*  readShort(QTextStream* theWrappedObject, signed short&  i);
   QTextStream*  readByte(QTextStream* theWrappedObject, char&  ch);
   void setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment);
   bool  generateByteOrderMark(QTextStream* theWrappedObject) const;
   void setRealNumberPrecision(QTextStream* theWrappedObject, int  precision);
   void setStatus(QTextStream* theWrappedObject, QTextStream::Status  status);
   void setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled);
};





class PythonQtShell_QThreadPool : public QThreadPool
{
public:
    PythonQtShell_QThreadPool(QObject*  parent = 0):QThreadPool(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QThreadPool : public QObject
{ Q_OBJECT
public:
public slots:
QThreadPool* new_QThreadPool(QObject*  parent = 0);
void delete_QThreadPool(QThreadPool* obj) { delete obj; } 
   void setMaxThreadCount(QThreadPool* theWrappedObject, int  maxThreadCount);
   QThreadPool*  static_QThreadPool_globalInstance();
   bool  tryStart(QThreadPool* theWrappedObject, QRunnable*  runnable);
   void reserveThread(QThreadPool* theWrappedObject);
   int  activeThreadCount(QThreadPool* theWrappedObject) const;
   void releaseThread(QThreadPool* theWrappedObject);
   int  maxThreadCount(QThreadPool* theWrappedObject) const;
   void start(QThreadPool* theWrappedObject, QRunnable*  runnable, int  priority = 0);
   void waitForDone(QThreadPool* theWrappedObject);
   void setExpiryTimeout(QThreadPool* theWrappedObject, int  expiryTimeout);
   int  expiryTimeout(QThreadPool* theWrappedObject) const;
};





class PythonQtShell_QTimeLine : public QTimeLine
{
public:
    PythonQtShell_QTimeLine(int  duration = 1000, QObject*  parent = 0):QTimeLine(duration, parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  event);
virtual qreal  valueForTime(int  msec) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTimeLine : public QTimeLine
{ public:
inline void promoted_timerEvent(QTimerEvent*  event) { QTimeLine::timerEvent(event); }
inline qreal  promoted_valueForTime(int  msec) const { return QTimeLine::valueForTime(msec); }
};

class PythonQtWrapper_QTimeLine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Direction CurveShape State )
enum Direction{
  Forward = QTimeLine::Forward,   Backward = QTimeLine::Backward};
enum CurveShape{
  EaseInCurve = QTimeLine::EaseInCurve,   EaseOutCurve = QTimeLine::EaseOutCurve,   EaseInOutCurve = QTimeLine::EaseInOutCurve,   LinearCurve = QTimeLine::LinearCurve,   SineCurve = QTimeLine::SineCurve,   CosineCurve = QTimeLine::CosineCurve};
enum State{
  NotRunning = QTimeLine::NotRunning,   Paused = QTimeLine::Paused,   Running = QTimeLine::Running};
public slots:
QTimeLine* new_QTimeLine(int  duration = 1000, QObject*  parent = 0);
void delete_QTimeLine(QTimeLine* obj) { delete obj; } 
   int  loopCount(QTimeLine* theWrappedObject) const;
   void setDirection(QTimeLine* theWrappedObject, QTimeLine::Direction  direction);
   void setDuration(QTimeLine* theWrappedObject, int  duration);
   int  duration(QTimeLine* theWrappedObject) const;
   void timerEvent(QTimeLine* theWrappedObject, QTimerEvent*  event);
   QTimeLine::CurveShape  curveShape(QTimeLine* theWrappedObject) const;
   int  endFrame(QTimeLine* theWrappedObject) const;
   void setLoopCount(QTimeLine* theWrappedObject, int  count);
   void setUpdateInterval(QTimeLine* theWrappedObject, int  interval);
   void setFrameRange(QTimeLine* theWrappedObject, int  startFrame, int  endFrame);
   qreal  valueForTime(QTimeLine* theWrappedObject, int  msec) const;
   void setCurveShape(QTimeLine* theWrappedObject, QTimeLine::CurveShape  shape);
   qreal  currentValue(QTimeLine* theWrappedObject) const;
   QEasingCurve  easingCurve(QTimeLine* theWrappedObject) const;
   QTimeLine::State  state(QTimeLine* theWrappedObject) const;
   int  frameForTime(QTimeLine* theWrappedObject, int  msec) const;
   void setStartFrame(QTimeLine* theWrappedObject, int  frame);
   int  updateInterval(QTimeLine* theWrappedObject) const;
   void setEndFrame(QTimeLine* theWrappedObject, int  frame);
   int  currentFrame(QTimeLine* theWrappedObject) const;
   int  currentTime(QTimeLine* theWrappedObject) const;
   int  startFrame(QTimeLine* theWrappedObject) const;
   QTimeLine::Direction  direction(QTimeLine* theWrappedObject) const;
   void setEasingCurve(QTimeLine* theWrappedObject, const QEasingCurve&  curve);
};


