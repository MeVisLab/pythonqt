#include <PythonQt.h>
#include <QObject>
#include <QStringList>
#include <QVarLengthArray>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemmodel.h>
#include <qabstractstate.h>
#include <qabstracttransition.h>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qeasingcurve.h>
#include <qevent.h>
#include <qlocale.h>
#include <qmetaobject.h>
#include <qmutex.h>
#include <qobject.h>
#include <qoperatingsystemversion.h>
#include <qpair.h>
#include <qparallelanimationgroup.h>
#include <qpauseanimation.h>
#include <qprocess.h>
#include <qpropertyanimation.h>
#include <qrandom.h>
#include <qreadwritelock.h>
#include <qregularexpression.h>
#include <qresource.h>
#include <qrunnable.h>
#include <qsavefile.h>
#include <qsemaphore.h>
#include <qsequentialanimationgroup.h>
#include <qsettings.h>
#include <qsharedmemory.h>
#include <qsignalmapper.h>
#include <qsignaltransition.h>
#include <qsocketnotifier.h>
#include <qstandardpaths.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringlist.h>
#include <qtextcodec.h>
#include <qvector.h>
#include <qwidget.h>



class PythonQtWrapper_QMutex : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RecursionMode )
enum RecursionMode{
  NonRecursive = QMutex::NonRecursive,   Recursive = QMutex::Recursive};
public slots:
QMutex* new_QMutex(QMutex::RecursionMode  mode = QMutex::NonRecursive);
void delete_QMutex(QMutex* obj) { delete obj; } 
   bool  isRecursive(QMutex* theWrappedObject) const;
   void lock(QMutex* theWrappedObject);
   bool  tryLock(QMutex* theWrappedObject, int  timeout = 0);
   bool  try_lock(QMutex* theWrappedObject);
   void unlock(QMutex* theWrappedObject);
};





class PythonQtShell_QObject : public QObject
{
public:
    PythonQtShell_QObject(QObject*  parent = nullptr):QObject(parent),_wrapper(NULL) {};

   ~PythonQtShell_QObject();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QObject : public QObject
{ public:
inline void promoted_childEvent(QChildEvent*  event) { this->childEvent(event); }
inline void promoted_customEvent(QEvent*  event) { this->customEvent(event); }
inline bool  promoted_isSignalConnected(const QMetaMethod&  signal) const { return this->isSignalConnected(signal); }
inline QObject*  promoted_sender() const { return this->sender(); }
inline int  promoted_senderSignalIndex() const { return this->senderSignalIndex(); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void py_q_childEvent(QChildEvent*  event) { QObject::childEvent(event); }
inline void py_q_customEvent(QEvent*  event) { QObject::customEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QObject::event(event); }
inline bool  py_q_eventFilter(QObject*  watched, QEvent*  event) { return QObject::eventFilter(watched, event); }
inline void py_q_timerEvent(QTimerEvent*  event) { QObject::timerEvent(event); }
};

class PythonQtWrapper_QObject : public QObject
{ Q_OBJECT
public:
public slots:
QObject* new_QObject(QObject*  parent = nullptr);
void delete_QObject(QObject* obj) { delete obj; } 
   bool  blockSignals(QObject* theWrappedObject, bool  b);
   void childEvent(QObject* theWrappedObject, QChildEvent*  event);
   void py_q_childEvent(QObject* theWrappedObject, QChildEvent*  event){  (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_childEvent(event));}
   const QList<QObject* >*  children(QObject* theWrappedObject) const;
   void customEvent(QObject* theWrappedObject, QEvent*  event);
   void py_q_customEvent(QObject* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_customEvent(event));}
   void dumpObjectInfo(QObject* theWrappedObject);
   void dumpObjectInfo(QObject* theWrappedObject) const;
   void dumpObjectTree(QObject* theWrappedObject);
   void dumpObjectTree(QObject* theWrappedObject) const;
   QList<QByteArray >  dynamicPropertyNames(QObject* theWrappedObject) const;
   bool  event(QObject* theWrappedObject, QEvent*  event);
   bool  py_q_event(QObject* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_event(event));}
   bool  eventFilter(QObject* theWrappedObject, QObject*  watched, QEvent*  event);
   bool  py_q_eventFilter(QObject* theWrappedObject, QObject*  watched, QEvent*  event){  return (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_eventFilter(watched, event));}
   void installEventFilter(QObject* theWrappedObject, QObject*  filterObj);
   bool  isSignalConnected(QObject* theWrappedObject, const QMetaMethod&  signal) const;
   bool  isWidgetType(QObject* theWrappedObject) const;
   bool  isWindowType(QObject* theWrappedObject) const;
   void killTimer(QObject* theWrappedObject, int  id);
   void moveToThread(QObject* theWrappedObject, QThread*  thread);
   QString  objectName(QObject* theWrappedObject) const;
   void removeEventFilter(QObject* theWrappedObject, QObject*  obj);
   QObject*  sender(QObject* theWrappedObject) const;
   int  senderSignalIndex(QObject* theWrappedObject) const;
   void setObjectName(QObject* theWrappedObject, const QString&  name);
   bool  signalsBlocked(QObject* theWrappedObject) const;
   int  startTimer(QObject* theWrappedObject, int  interval, Qt::TimerType  timerType = Qt::CoarseTimer);
   QThread*  thread(QObject* theWrappedObject) const;
   void timerEvent(QObject* theWrappedObject, QTimerEvent*  event);
   void py_q_timerEvent(QObject* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_timerEvent(event));}
};





class PythonQtShell_QOperatingSystemVersion : public QOperatingSystemVersion
{
public:
    PythonQtShell_QOperatingSystemVersion(QOperatingSystemVersion::OSType  osType, int  vmajor, int  vminor = -1, int  vmicro = -1):QOperatingSystemVersion(osType, vmajor, vminor, vmicro),_wrapper(NULL) {};

   ~PythonQtShell_QOperatingSystemVersion();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QOperatingSystemVersion : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OSType )
enum OSType{
  Unknown = QOperatingSystemVersion::Unknown,   Windows = QOperatingSystemVersion::Windows,   MacOS = QOperatingSystemVersion::MacOS,   IOS = QOperatingSystemVersion::IOS,   TvOS = QOperatingSystemVersion::TvOS,   WatchOS = QOperatingSystemVersion::WatchOS,   Android = QOperatingSystemVersion::Android};
public slots:
QOperatingSystemVersion* new_QOperatingSystemVersion(QOperatingSystemVersion::OSType  osType, int  vmajor, int  vminor = -1, int  vmicro = -1);
void delete_QOperatingSystemVersion(QOperatingSystemVersion* obj) { delete obj; } 
   QOperatingSystemVersion  static_QOperatingSystemVersion_current();
   QOperatingSystemVersion::OSType  static_QOperatingSystemVersion_currentType();
   int  majorVersion(QOperatingSystemVersion* theWrappedObject) const;
   int  microVersion(QOperatingSystemVersion* theWrappedObject) const;
   int  minorVersion(QOperatingSystemVersion* theWrappedObject) const;
   QString  name(QOperatingSystemVersion* theWrappedObject) const;
   int  segmentCount(QOperatingSystemVersion* theWrappedObject) const;
   QOperatingSystemVersion::OSType  type(QOperatingSystemVersion* theWrappedObject) const;
    QString py_toString(QOperatingSystemVersion*);
};





class PythonQtShell_QParallelAnimationGroup : public QParallelAnimationGroup
{
public:
    PythonQtShell_QParallelAnimationGroup(QObject*  parent = nullptr):QParallelAnimationGroup(parent),_wrapper(NULL) {};

   ~PythonQtShell_QParallelAnimationGroup();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  duration() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void updateCurrentTime(int  currentTime);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QParallelAnimationGroup : public QParallelAnimationGroup
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_updateCurrentTime(int  currentTime) { this->updateCurrentTime(currentTime); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { this->updateDirection(direction); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline int  py_q_duration() const { return QParallelAnimationGroup::duration(); }
inline bool  py_q_event(QEvent*  event) { return QParallelAnimationGroup::event(event); }
inline void py_q_updateCurrentTime(int  currentTime) { QParallelAnimationGroup::updateCurrentTime(currentTime); }
inline void py_q_updateDirection(QAbstractAnimation::Direction  direction) { QParallelAnimationGroup::updateDirection(direction); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QParallelAnimationGroup::updateState(newState, oldState); }
};

class PythonQtWrapper_QParallelAnimationGroup : public QObject
{ Q_OBJECT
public:
public slots:
QParallelAnimationGroup* new_QParallelAnimationGroup(QObject*  parent = nullptr);
void delete_QParallelAnimationGroup(QParallelAnimationGroup* obj) { delete obj; } 
   int  py_q_duration(QParallelAnimationGroup* theWrappedObject) const{  return (((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->py_q_duration());}
   bool  py_q_event(QParallelAnimationGroup* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->py_q_event(event));}
   void py_q_updateCurrentTime(QParallelAnimationGroup* theWrappedObject, int  currentTime){  (((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->py_q_updateCurrentTime(currentTime));}
   void py_q_updateDirection(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction){  (((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->py_q_updateDirection(direction));}
   void py_q_updateState(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtShell_QPauseAnimation : public QPauseAnimation
{
public:
    PythonQtShell_QPauseAnimation(QObject*  parent = nullptr):QPauseAnimation(parent),_wrapper(NULL) {};
    PythonQtShell_QPauseAnimation(int  msecs, QObject*  parent = nullptr):QPauseAnimation(msecs, parent),_wrapper(NULL) {};

   ~PythonQtShell_QPauseAnimation();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  duration() const;
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void updateCurrentTime(int  arg__1);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPauseAnimation : public QPauseAnimation
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_updateCurrentTime(int  arg__1) { this->updateCurrentTime(arg__1); }
inline int  py_q_duration() const { return QPauseAnimation::duration(); }
inline bool  py_q_event(QEvent*  e) { return QPauseAnimation::event(e); }
inline void py_q_updateCurrentTime(int  arg__1) { QPauseAnimation::updateCurrentTime(arg__1); }
};

class PythonQtWrapper_QPauseAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QPauseAnimation* new_QPauseAnimation(QObject*  parent = nullptr);
QPauseAnimation* new_QPauseAnimation(int  msecs, QObject*  parent = nullptr);
void delete_QPauseAnimation(QPauseAnimation* obj) { delete obj; } 
   int  py_q_duration(QPauseAnimation* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPauseAnimation*)theWrappedObject)->py_q_duration());}
   bool  py_q_event(QPauseAnimation* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QPauseAnimation*)theWrappedObject)->py_q_event(e));}
   void setDuration(QPauseAnimation* theWrappedObject, int  msecs);
   void py_q_updateCurrentTime(QPauseAnimation* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QPauseAnimation*)theWrappedObject)->py_q_updateCurrentTime(arg__1));}
};





class PythonQtWrapper_QPersistentModelIndex : public QObject
{ Q_OBJECT
public:
public slots:
QPersistentModelIndex* new_QPersistentModelIndex();
QPersistentModelIndex* new_QPersistentModelIndex(const QModelIndex&  index);
QPersistentModelIndex* new_QPersistentModelIndex(const QPersistentModelIndex&  other);
void delete_QPersistentModelIndex(QPersistentModelIndex* obj) { delete obj; } 
   QModelIndex  child(QPersistentModelIndex* theWrappedObject, int  row, int  column) const;
   int  column(QPersistentModelIndex* theWrappedObject) const;
   QVariant  data(QPersistentModelIndex* theWrappedObject, int  role = Qt::DisplayRole) const;
   Qt::ItemFlags  flags(QPersistentModelIndex* theWrappedObject) const;
   quintptr  internalId(QPersistentModelIndex* theWrappedObject) const;
   bool  isValid(QPersistentModelIndex* theWrappedObject) const;
   const QAbstractItemModel*  model(QPersistentModelIndex* theWrappedObject) const;
   QModelIndex  operator_cast_QModelIndex(QPersistentModelIndex* theWrappedObject) const;
   bool  __ne__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  other) const;
   bool  __ne__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const;
   bool  __lt__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const;
   bool  __eq__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  other) const;
   bool  __eq__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const;
   QModelIndex  parent(QPersistentModelIndex* theWrappedObject) const;
   int  row(QPersistentModelIndex* theWrappedObject) const;
   QModelIndex  sibling(QPersistentModelIndex* theWrappedObject, int  row, int  column) const;
   void swap(QPersistentModelIndex* theWrappedObject, QPersistentModelIndex&  other);
    QString py_toString(QPersistentModelIndex*);
    bool __nonzero__(QPersistentModelIndex* obj) { return obj->isValid(); }
};





class PythonQtShell_QProcess : public QProcess
{
public:
    PythonQtShell_QProcess(QObject*  parent = nullptr):QProcess(parent),_wrapper(NULL) {};

   ~PythonQtShell_QProcess();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  event);
virtual void close();
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode = QIODevice::ReadWrite);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual void setupChildProcess();
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  event);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QProcess : public QProcess
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline void promoted_setProcessState(QProcess::ProcessState  state) { this->setProcessState(state); }
inline void promoted_setupChildProcess() { this->setupChildProcess(); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QProcess::atEnd(); }
inline qint64  py_q_bytesAvailable() const { return QProcess::bytesAvailable(); }
inline qint64  py_q_bytesToWrite() const { return QProcess::bytesToWrite(); }
inline bool  py_q_canReadLine() const { return QProcess::canReadLine(); }
inline void py_q_close() { QProcess::close(); }
inline bool  py_q_isSequential() const { return QProcess::isSequential(); }
inline bool  py_q_open(QIODevice::OpenMode  mode = QIODevice::ReadWrite) { return QProcess::open(mode); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return QProcess::readData(data, maxlen); }
inline void py_q_setupChildProcess() { QProcess::setupChildProcess(); }
inline bool  py_q_waitForBytesWritten(int  msecs = 30000) { return QProcess::waitForBytesWritten(msecs); }
inline bool  py_q_waitForReadyRead(int  msecs = 30000) { return QProcess::waitForReadyRead(msecs); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QProcess::writeData(data, len); }
};

class PythonQtWrapper_QProcess : public QObject
{ Q_OBJECT
public:
public slots:
QProcess* new_QProcess(QObject*  parent = nullptr);
void delete_QProcess(QProcess* obj) { delete obj; } 
   QStringList  arguments(QProcess* theWrappedObject) const;
   bool  py_q_atEnd(QProcess* theWrappedObject) const{  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_atEnd());}
   qint64  py_q_bytesAvailable(QProcess* theWrappedObject) const{  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_bytesAvailable());}
   qint64  py_q_bytesToWrite(QProcess* theWrappedObject) const{  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_bytesToWrite());}
   bool  py_q_canReadLine(QProcess* theWrappedObject) const{  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_canReadLine());}
   void py_q_close(QProcess* theWrappedObject){  (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_close());}
   void closeReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   void closeWriteChannel(QProcess* theWrappedObject);
   QStringList  environment(QProcess* theWrappedObject) const;
   QProcess::ProcessError  error(QProcess* theWrappedObject) const;
   int  static_QProcess_execute(const QString&  command);
   int  static_QProcess_execute(const QString&  program, const QStringList&  arguments);
   int  exitCode(QProcess* theWrappedObject) const;
   QProcess::ExitStatus  exitStatus(QProcess* theWrappedObject) const;
   QProcess::InputChannelMode  inputChannelMode(QProcess* theWrappedObject) const;
   bool  py_q_isSequential(QProcess* theWrappedObject) const{  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_isSequential());}
   QString  static_QProcess_nullDevice();
   bool  py_q_open(QProcess* theWrappedObject, QIODevice::OpenMode  mode = QIODevice::ReadWrite){  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_open(mode));}
   QProcess::ProcessChannelMode  processChannelMode(QProcess* theWrappedObject) const;
   QProcessEnvironment  processEnvironment(QProcess* theWrappedObject) const;
   qint64  processId(QProcess* theWrappedObject) const;
   QString  program(QProcess* theWrappedObject) const;
   QByteArray  readAllStandardError(QProcess* theWrappedObject);
   QByteArray  readAllStandardOutput(QProcess* theWrappedObject);
   QProcess::ProcessChannel  readChannel(QProcess* theWrappedObject) const;
   qint64  py_q_readData(QProcess* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_readData(data, maxlen));}
   void setArguments(QProcess* theWrappedObject, const QStringList&  arguments);
   void setEnvironment(QProcess* theWrappedObject, const QStringList&  environment);
   void setInputChannelMode(QProcess* theWrappedObject, QProcess::InputChannelMode  mode);
   void setProcessChannelMode(QProcess* theWrappedObject, QProcess::ProcessChannelMode  mode);
   void setProcessEnvironment(QProcess* theWrappedObject, const QProcessEnvironment&  environment);
   void setProcessState(QProcess* theWrappedObject, QProcess::ProcessState  state);
   void setProgram(QProcess* theWrappedObject, const QString&  program);
   void setReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   void setStandardErrorFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode = QIODevice::Truncate);
   void setStandardInputFile(QProcess* theWrappedObject, const QString&  fileName);
   void setStandardOutputFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode = QIODevice::Truncate);
   void setStandardOutputProcess(QProcess* theWrappedObject, QProcess*  destination);
   void setWorkingDirectory(QProcess* theWrappedObject, const QString&  dir);
   void setupChildProcess(QProcess* theWrappedObject);
   void py_q_setupChildProcess(QProcess* theWrappedObject){  (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_setupChildProcess());}
   void start(QProcess* theWrappedObject, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void start(QProcess* theWrappedObject, const QString&  command, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void start(QProcess* theWrappedObject, const QString&  program, const QStringList&  arguments, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   bool  static_QProcess_startDetached(const QString&  command);
   bool  static_QProcess_startDetached(const QString&  program, const QStringList&  arguments);
   bool  static_QProcess_startDetached(const QString&  program, const QStringList&  arguments, const QString&  workingDirectory, qint64*  pid = nullptr);
   bool  startDetached(QProcess* theWrappedObject, qint64*  pid = nullptr);
   QProcess::ProcessState  state(QProcess* theWrappedObject) const;
   QStringList  static_QProcess_systemEnvironment();
   bool  py_q_waitForBytesWritten(QProcess* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_waitForBytesWritten(msecs));}
   bool  waitForFinished(QProcess* theWrappedObject, int  msecs = 30000);
   bool  py_q_waitForReadyRead(QProcess* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_waitForReadyRead(msecs));}
   bool  waitForStarted(QProcess* theWrappedObject, int  msecs = 30000);
   QString  workingDirectory(QProcess* theWrappedObject) const;
   qint64  py_q_writeData(QProcess* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QProcess*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtWrapper_QProcessEnvironment : public QObject
{ Q_OBJECT
public:
public slots:
QProcessEnvironment* new_QProcessEnvironment();
QProcessEnvironment* new_QProcessEnvironment(const QProcessEnvironment&  other);
void delete_QProcessEnvironment(QProcessEnvironment* obj) { delete obj; } 
   void clear(QProcessEnvironment* theWrappedObject);
   bool  contains(QProcessEnvironment* theWrappedObject, const QString&  name) const;
   void insert(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  e);
   void insert(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  value);
   bool  isEmpty(QProcessEnvironment* theWrappedObject) const;
   QStringList  keys(QProcessEnvironment* theWrappedObject) const;
   bool  __ne__(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other) const;
   QProcessEnvironment*  operator_assign(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other);
   bool  __eq__(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other) const;
   void remove(QProcessEnvironment* theWrappedObject, const QString&  name);
   void swap(QProcessEnvironment* theWrappedObject, QProcessEnvironment&  other);
   QProcessEnvironment  static_QProcessEnvironment_systemEnvironment();
   QStringList  toStringList(QProcessEnvironment* theWrappedObject) const;
   QString  value(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  defaultValue = QString()) const;
    bool __nonzero__(QProcessEnvironment* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QPropertyAnimation : public QPropertyAnimation
{
public:
    PythonQtShell_QPropertyAnimation(QObject*  parent = nullptr):QPropertyAnimation(parent),_wrapper(NULL) {};
    PythonQtShell_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent = nullptr):QPropertyAnimation(target, propertyName, parent),_wrapper(NULL) {};

   ~PythonQtShell_QPropertyAnimation();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  duration() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QVariant  interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const;
virtual void timerEvent(QTimerEvent*  event);
virtual void updateCurrentTime(int  arg__1);
virtual void updateCurrentValue(const QVariant&  value);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPropertyAnimation : public QPropertyAnimation
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_updateCurrentValue(const QVariant&  value) { this->updateCurrentValue(value); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline bool  py_q_event(QEvent*  event) { return QPropertyAnimation::event(event); }
inline void py_q_updateCurrentValue(const QVariant&  value) { QPropertyAnimation::updateCurrentValue(value); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QPropertyAnimation::updateState(newState, oldState); }
};

class PythonQtWrapper_QPropertyAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QPropertyAnimation* new_QPropertyAnimation(QObject*  parent = nullptr);
QPropertyAnimation* new_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent = nullptr);
void delete_QPropertyAnimation(QPropertyAnimation* obj) { delete obj; } 
   bool  py_q_event(QPropertyAnimation* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QPropertyAnimation*)theWrappedObject)->py_q_event(event));}
   QByteArray  propertyName(QPropertyAnimation* theWrappedObject) const;
   void setPropertyName(QPropertyAnimation* theWrappedObject, const QByteArray&  propertyName);
   void setTargetObject(QPropertyAnimation* theWrappedObject, QObject*  target);
   QObject*  targetObject(QPropertyAnimation* theWrappedObject) const;
   void py_q_updateCurrentValue(QPropertyAnimation* theWrappedObject, const QVariant&  value){  (((PythonQtPublicPromoter_QPropertyAnimation*)theWrappedObject)->py_q_updateCurrentValue(value));}
   void py_q_updateState(QPropertyAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QPropertyAnimation*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtWrapper_QRandomGenerator : public QObject
{ Q_OBJECT
public:
public slots:
QRandomGenerator* new_QRandomGenerator(const QRandomGenerator&  other);
QRandomGenerator* new_QRandomGenerator(const unsigned int*  begin, const unsigned int*  end);
QRandomGenerator* new_QRandomGenerator(unsigned int  seedValue = 1);
void delete_QRandomGenerator(QRandomGenerator* obj) { delete obj; } 
   double  bounded(QRandomGenerator* theWrappedObject, double  highest);
   int  bounded(QRandomGenerator* theWrappedObject, int  highest);
   int  bounded(QRandomGenerator* theWrappedObject, int  lowest, int  highest);
   unsigned int  bounded(QRandomGenerator* theWrappedObject, unsigned int  highest);
   unsigned int  bounded(QRandomGenerator* theWrappedObject, unsigned int  lowest, unsigned int  highest);
   void discard(QRandomGenerator* theWrappedObject, quint64  z);
   unsigned int  generate(QRandomGenerator* theWrappedObject);
   void generate(QRandomGenerator* theWrappedObject, unsigned int*  begin, unsigned int*  end);
   quint64  generate64(QRandomGenerator* theWrappedObject);
   double  generateDouble(QRandomGenerator* theWrappedObject);
   QRandomGenerator*  static_QRandomGenerator_global();
   unsigned int  static_QRandomGenerator_max();
   unsigned int  static_QRandomGenerator_min();
   unsigned int  operator_cast_(QRandomGenerator* theWrappedObject);
   QRandomGenerator*  operator_assign(QRandomGenerator* theWrappedObject, const QRandomGenerator&  other);
   QRandomGenerator  static_QRandomGenerator_securelySeeded();
   void seed(QRandomGenerator* theWrappedObject, unsigned int  s = 1);
   QRandomGenerator*  static_QRandomGenerator_system();
};





class PythonQtWrapper_QRandomGenerator64 : public QObject
{ Q_OBJECT
public:
public slots:
QRandomGenerator64* new_QRandomGenerator64(const QRandomGenerator&  other);
QRandomGenerator64* new_QRandomGenerator64(const unsigned int*  begin, const unsigned int*  end);
QRandomGenerator64* new_QRandomGenerator64(unsigned int  seedValue = 1);
void delete_QRandomGenerator64(QRandomGenerator64* obj) { delete obj; } 
   void discard(QRandomGenerator64* theWrappedObject, quint64  z);
   quint64  generate(QRandomGenerator64* theWrappedObject);
   QRandomGenerator64*  static_QRandomGenerator64_global();
   quint64  static_QRandomGenerator64_max();
   quint64  static_QRandomGenerator64_min();
   quint64  operator_cast_(QRandomGenerator64* theWrappedObject);
   QRandomGenerator64  static_QRandomGenerator64_securelySeeded();
   QRandomGenerator64*  static_QRandomGenerator64_system();
};





class PythonQtWrapper_QReadWriteLock : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RecursionMode )
enum RecursionMode{
  NonRecursive = QReadWriteLock::NonRecursive,   Recursive = QReadWriteLock::Recursive};
public slots:
QReadWriteLock* new_QReadWriteLock(QReadWriteLock::RecursionMode  recursionMode = QReadWriteLock::NonRecursive);
void delete_QReadWriteLock(QReadWriteLock* obj) { delete obj; } 
   void lockForRead(QReadWriteLock* theWrappedObject);
   void lockForWrite(QReadWriteLock* theWrappedObject);
   bool  tryLockForRead(QReadWriteLock* theWrappedObject);
   bool  tryLockForRead(QReadWriteLock* theWrappedObject, int  timeout);
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject);
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject, int  timeout);
   void unlock(QReadWriteLock* theWrappedObject);
};





class PythonQtWrapper_QRegularExpression : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MatchOption MatchType PatternOption )
Q_FLAGS(MatchOptions PatternOptions )
enum MatchOption{
  NoMatchOption = QRegularExpression::NoMatchOption,   AnchoredMatchOption = QRegularExpression::AnchoredMatchOption,   DontCheckSubjectStringMatchOption = QRegularExpression::DontCheckSubjectStringMatchOption};
enum MatchType{
  NormalMatch = QRegularExpression::NormalMatch,   PartialPreferCompleteMatch = QRegularExpression::PartialPreferCompleteMatch,   PartialPreferFirstMatch = QRegularExpression::PartialPreferFirstMatch,   NoMatch = QRegularExpression::NoMatch};
enum PatternOption{
  NoPatternOption = QRegularExpression::NoPatternOption,   CaseInsensitiveOption = QRegularExpression::CaseInsensitiveOption,   DotMatchesEverythingOption = QRegularExpression::DotMatchesEverythingOption,   MultilineOption = QRegularExpression::MultilineOption,   ExtendedPatternSyntaxOption = QRegularExpression::ExtendedPatternSyntaxOption,   InvertedGreedinessOption = QRegularExpression::InvertedGreedinessOption,   DontCaptureOption = QRegularExpression::DontCaptureOption,   UseUnicodePropertiesOption = QRegularExpression::UseUnicodePropertiesOption,   OptimizeOnFirstUsageOption = QRegularExpression::OptimizeOnFirstUsageOption,   DontAutomaticallyOptimizeOption = QRegularExpression::DontAutomaticallyOptimizeOption};
Q_DECLARE_FLAGS(MatchOptions, MatchOption)
Q_DECLARE_FLAGS(PatternOptions, PatternOption)
public slots:
QRegularExpression* new_QRegularExpression();
QRegularExpression* new_QRegularExpression(const QRegularExpression&  re);
QRegularExpression* new_QRegularExpression(const QString&  pattern, QRegularExpression::PatternOptions  options = QRegularExpression::NoPatternOption);
void delete_QRegularExpression(QRegularExpression* obj) { delete obj; } 
   int  captureCount(QRegularExpression* theWrappedObject) const;
   QString  errorString(QRegularExpression* theWrappedObject) const;
   QString  static_QRegularExpression_escape(const QString&  str);
   QRegularExpressionMatchIterator  globalMatch(QRegularExpression* theWrappedObject, const QString&  subject, int  offset = 0, QRegularExpression::MatchType  matchType = QRegularExpression::NormalMatch, QRegularExpression::MatchOptions  matchOptions = QRegularExpression::NoMatchOption) const;
   QRegularExpressionMatchIterator  globalMatch(QRegularExpression* theWrappedObject, const QStringRef&  subjectRef, int  offset = 0, QRegularExpression::MatchType  matchType = QRegularExpression::NormalMatch, QRegularExpression::MatchOptions  matchOptions = QRegularExpression::NoMatchOption) const;
   bool  isValid(QRegularExpression* theWrappedObject) const;
   QRegularExpressionMatch  match(QRegularExpression* theWrappedObject, const QString&  subject, int  offset = 0, QRegularExpression::MatchType  matchType = QRegularExpression::NormalMatch, QRegularExpression::MatchOptions  matchOptions = QRegularExpression::NoMatchOption) const;
   QRegularExpressionMatch  match(QRegularExpression* theWrappedObject, const QStringRef&  subjectRef, int  offset = 0, QRegularExpression::MatchType  matchType = QRegularExpression::NormalMatch, QRegularExpression::MatchOptions  matchOptions = QRegularExpression::NoMatchOption) const;
   QStringList  namedCaptureGroups(QRegularExpression* theWrappedObject) const;
   bool  __ne__(QRegularExpression* theWrappedObject, const QRegularExpression&  re) const;
   void writeTo(QRegularExpression* theWrappedObject, QDataStream&  out);
   QRegularExpression*  operator_assign(QRegularExpression* theWrappedObject, const QRegularExpression&  re);
   bool  __eq__(QRegularExpression* theWrappedObject, const QRegularExpression&  re) const;
   void readFrom(QRegularExpression* theWrappedObject, QDataStream&  in);
   void optimize(QRegularExpression* theWrappedObject) const;
   QString  pattern(QRegularExpression* theWrappedObject) const;
   int  patternErrorOffset(QRegularExpression* theWrappedObject) const;
   QRegularExpression::PatternOptions  patternOptions(QRegularExpression* theWrappedObject) const;
   void setPattern(QRegularExpression* theWrappedObject, const QString&  pattern);
   void setPatternOptions(QRegularExpression* theWrappedObject, QRegularExpression::PatternOptions  options);
   void swap(QRegularExpression* theWrappedObject, QRegularExpression&  other);
    QString py_toString(QRegularExpression*);
    bool __nonzero__(QRegularExpression* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QRegularExpressionMatch : public QObject
{ Q_OBJECT
public:
public slots:
QRegularExpressionMatch* new_QRegularExpressionMatch();
QRegularExpressionMatch* new_QRegularExpressionMatch(const QRegularExpressionMatch&  match);
void delete_QRegularExpressionMatch(QRegularExpressionMatch* obj) { delete obj; } 
   QString  captured(QRegularExpressionMatch* theWrappedObject, const QString&  name) const;
   QString  captured(QRegularExpressionMatch* theWrappedObject, int  nth = 0) const;
   int  capturedEnd(QRegularExpressionMatch* theWrappedObject, const QString&  name) const;
   int  capturedEnd(QRegularExpressionMatch* theWrappedObject, int  nth = 0) const;
   int  capturedLength(QRegularExpressionMatch* theWrappedObject, const QString&  name) const;
   int  capturedLength(QRegularExpressionMatch* theWrappedObject, int  nth = 0) const;
   QStringRef  capturedRef(QRegularExpressionMatch* theWrappedObject, const QString&  name) const;
   QStringRef  capturedRef(QRegularExpressionMatch* theWrappedObject, int  nth = 0) const;
   int  capturedStart(QRegularExpressionMatch* theWrappedObject, const QString&  name) const;
   int  capturedStart(QRegularExpressionMatch* theWrappedObject, int  nth = 0) const;
   QStringList  capturedTexts(QRegularExpressionMatch* theWrappedObject) const;
   bool  hasMatch(QRegularExpressionMatch* theWrappedObject) const;
   bool  hasPartialMatch(QRegularExpressionMatch* theWrappedObject) const;
   bool  isValid(QRegularExpressionMatch* theWrappedObject) const;
   int  lastCapturedIndex(QRegularExpressionMatch* theWrappedObject) const;
   QRegularExpression::MatchOptions  matchOptions(QRegularExpressionMatch* theWrappedObject) const;
   QRegularExpression::MatchType  matchType(QRegularExpressionMatch* theWrappedObject) const;
   QRegularExpressionMatch*  operator_assign(QRegularExpressionMatch* theWrappedObject, const QRegularExpressionMatch&  match);
   QRegularExpression  regularExpression(QRegularExpressionMatch* theWrappedObject) const;
   void swap(QRegularExpressionMatch* theWrappedObject, QRegularExpressionMatch&  other);
    QString py_toString(QRegularExpressionMatch*);
    bool __nonzero__(QRegularExpressionMatch* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QRegularExpressionMatchIterator : public QObject
{ Q_OBJECT
public:
public slots:
QRegularExpressionMatchIterator* new_QRegularExpressionMatchIterator();
QRegularExpressionMatchIterator* new_QRegularExpressionMatchIterator(const QRegularExpressionMatchIterator&  iterator);
void delete_QRegularExpressionMatchIterator(QRegularExpressionMatchIterator* obj) { delete obj; } 
   bool  hasNext(QRegularExpressionMatchIterator* theWrappedObject) const;
   bool  isValid(QRegularExpressionMatchIterator* theWrappedObject) const;
   QRegularExpression::MatchOptions  matchOptions(QRegularExpressionMatchIterator* theWrappedObject) const;
   QRegularExpression::MatchType  matchType(QRegularExpressionMatchIterator* theWrappedObject) const;
   QRegularExpressionMatch  next(QRegularExpressionMatchIterator* theWrappedObject);
   QRegularExpressionMatchIterator*  operator_assign(QRegularExpressionMatchIterator* theWrappedObject, const QRegularExpressionMatchIterator&  iterator);
   QRegularExpressionMatch  peekNext(QRegularExpressionMatchIterator* theWrappedObject) const;
   QRegularExpression  regularExpression(QRegularExpressionMatchIterator* theWrappedObject) const;
   void swap(QRegularExpressionMatchIterator* theWrappedObject, QRegularExpressionMatchIterator&  other);
    bool __nonzero__(QRegularExpressionMatchIterator* obj) { return obj->isValid(); }
};





class PythonQtShell_QResource : public QResource
{
public:
    PythonQtShell_QResource(const QString&  file = QString(), const QLocale&  locale = QLocale()):QResource(file, locale),_wrapper(NULL) {};

   ~PythonQtShell_QResource();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QResource : public QResource
{ public:
inline QStringList  promoted_children() const { return this->children(); }
inline bool  promoted_isDir() const { return this->isDir(); }
inline bool  promoted_isFile() const { return this->isFile(); }
};

class PythonQtWrapper_QResource : public QObject
{ Q_OBJECT
public:
public slots:
QResource* new_QResource(const QString&  file = QString(), const QLocale&  locale = QLocale());
void delete_QResource(QResource* obj) { delete obj; } 
   QString  absoluteFilePath(QResource* theWrappedObject) const;
   void static_QResource_addSearchPath(const QString&  path);
   QStringList  children(QResource* theWrappedObject) const;
   const uchar*  data(QResource* theWrappedObject) const;
   QString  fileName(QResource* theWrappedObject) const;
   bool  isCompressed(QResource* theWrappedObject) const;
   bool  isDir(QResource* theWrappedObject) const;
   bool  isFile(QResource* theWrappedObject) const;
   bool  isValid(QResource* theWrappedObject) const;
   QDateTime  lastModified(QResource* theWrappedObject) const;
   QLocale  locale(QResource* theWrappedObject) const;
   bool  static_QResource_registerResource(const QString&  rccFilename, const QString&  resourceRoot = QString());
   bool  static_QResource_registerResource(const uchar*  rccData, const QString&  resourceRoot = QString());
   QStringList  static_QResource_searchPaths();
   void setFileName(QResource* theWrappedObject, const QString&  file);
   void setLocale(QResource* theWrappedObject, const QLocale&  locale);
   qint64  size(QResource* theWrappedObject) const;
   bool  static_QResource_unregisterResource(const QString&  rccFilename, const QString&  resourceRoot = QString());
   bool  static_QResource_unregisterResource(const uchar*  rccData, const QString&  resourceRoot = QString());
    bool __nonzero__(QResource* obj) { return obj->isValid(); }
};





class PythonQtShell_QRunnable : public QRunnable
{
public:
    PythonQtShell_QRunnable():QRunnable(),_wrapper(NULL) {};

   ~PythonQtShell_QRunnable();

virtual void run();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRunnable : public QRunnable
{ public:
inline void py_q_run() { this->run(); }
};

class PythonQtWrapper_QRunnable : public QObject
{ Q_OBJECT
public:
public slots:
QRunnable* new_QRunnable();
void delete_QRunnable(QRunnable* obj) { delete obj; } 
   bool  autoDelete(QRunnable* theWrappedObject) const;
   void run(QRunnable* theWrappedObject);
   void py_q_run(QRunnable* theWrappedObject){  (((PythonQtPublicPromoter_QRunnable*)theWrappedObject)->py_q_run());}
   void setAutoDelete(QRunnable* theWrappedObject, bool  _autoDelete);
};





class PythonQtShell_QSaveFile : public QSaveFile
{
public:
    PythonQtShell_QSaveFile(QObject*  parent = nullptr):QSaveFile(parent),_wrapper(NULL) {};
    PythonQtShell_QSaveFile(const QString&  name):QSaveFile(name),_wrapper(NULL) {};
    PythonQtShell_QSaveFile(const QString&  name, QObject*  parent):QSaveFile(name, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSaveFile();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QString  fileName() const;
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  flags);
virtual QFileDevice::Permissions  permissions() const;
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  resize(qint64  sz);
virtual bool  seek(qint64  offset);
virtual bool  setPermissions(QFileDevice::Permissions  permissionSpec);
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  event);
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSaveFile : public QSaveFile
{ public:
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline QString  py_q_fileName() const { return QSaveFile::fileName(); }
inline bool  py_q_open(QIODevice::OpenMode  flags) { return QSaveFile::open(flags); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QSaveFile::writeData(data, len); }
};

class PythonQtWrapper_QSaveFile : public QObject
{ Q_OBJECT
public:
public slots:
QSaveFile* new_QSaveFile(QObject*  parent = nullptr);
QSaveFile* new_QSaveFile(const QString&  name);
QSaveFile* new_QSaveFile(const QString&  name, QObject*  parent);
void delete_QSaveFile(QSaveFile* obj) { delete obj; } 
   void cancelWriting(QSaveFile* theWrappedObject);
   bool  commit(QSaveFile* theWrappedObject);
   bool  directWriteFallback(QSaveFile* theWrappedObject) const;
   QString  py_q_fileName(QSaveFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSaveFile*)theWrappedObject)->py_q_fileName());}
   bool  py_q_open(QSaveFile* theWrappedObject, QIODevice::OpenMode  flags){  return (((PythonQtPublicPromoter_QSaveFile*)theWrappedObject)->py_q_open(flags));}
   void setDirectWriteFallback(QSaveFile* theWrappedObject, bool  enabled);
   void setFileName(QSaveFile* theWrappedObject, const QString&  name);
   qint64  py_q_writeData(QSaveFile* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QSaveFile*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtWrapper_QSemaphore : public QObject
{ Q_OBJECT
public:
public slots:
QSemaphore* new_QSemaphore(int  n = 0);
void delete_QSemaphore(QSemaphore* obj) { delete obj; } 
   void acquire(QSemaphore* theWrappedObject, int  n = 1);
   int  available(QSemaphore* theWrappedObject) const;
   void release(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n, int  timeout);
};





class PythonQtShell_QSequentialAnimationGroup : public QSequentialAnimationGroup
{
public:
    PythonQtShell_QSequentialAnimationGroup(QObject*  parent = nullptr):QSequentialAnimationGroup(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSequentialAnimationGroup();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  duration() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void updateCurrentTime(int  arg__1);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSequentialAnimationGroup : public QSequentialAnimationGroup
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_updateCurrentTime(int  arg__1) { this->updateCurrentTime(arg__1); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { this->updateDirection(direction); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline int  py_q_duration() const { return QSequentialAnimationGroup::duration(); }
inline bool  py_q_event(QEvent*  event) { return QSequentialAnimationGroup::event(event); }
inline void py_q_updateCurrentTime(int  arg__1) { QSequentialAnimationGroup::updateCurrentTime(arg__1); }
inline void py_q_updateDirection(QAbstractAnimation::Direction  direction) { QSequentialAnimationGroup::updateDirection(direction); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QSequentialAnimationGroup::updateState(newState, oldState); }
};

class PythonQtWrapper_QSequentialAnimationGroup : public QObject
{ Q_OBJECT
public:
public slots:
QSequentialAnimationGroup* new_QSequentialAnimationGroup(QObject*  parent = nullptr);
void delete_QSequentialAnimationGroup(QSequentialAnimationGroup* obj) { delete obj; } 
   QPauseAnimation*  addPause(QSequentialAnimationGroup* theWrappedObject, int  msecs);
   QAbstractAnimation*  currentAnimation(QSequentialAnimationGroup* theWrappedObject) const;
   int  py_q_duration(QSequentialAnimationGroup* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_duration());}
   bool  py_q_event(QSequentialAnimationGroup* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_event(event));}
   QPauseAnimation*  insertPause(QSequentialAnimationGroup* theWrappedObject, int  index, int  msecs);
   void py_q_updateCurrentTime(QSequentialAnimationGroup* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_updateCurrentTime(arg__1));}
   void py_q_updateDirection(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction){  (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_updateDirection(direction));}
   void py_q_updateState(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtShell_QSettings : public QSettings
{
public:
    PythonQtShell_QSettings(QObject*  parent = nullptr):QSettings(parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr):QSettings(format, scope, organization, application, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr):QSettings(scope, organization, application, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = nullptr):QSettings(fileName, format, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr):QSettings(organization, application, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSettings();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSettings : public QSettings
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  py_q_event(QEvent*  event) { return QSettings::event(event); }
};

class PythonQtWrapper_QSettings : public QObject
{ Q_OBJECT
public:
public slots:
QSettings* new_QSettings(QObject*  parent = nullptr);
QSettings* new_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr);
QSettings* new_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr);
QSettings* new_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = nullptr);
QSettings* new_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr);
void delete_QSettings(QSettings* obj) { delete obj; } 
   QStringList  allKeys(QSettings* theWrappedObject) const;
   QString  applicationName(QSettings* theWrappedObject) const;
   void beginGroup(QSettings* theWrappedObject, const QString&  prefix);
   int  beginReadArray(QSettings* theWrappedObject, const QString&  prefix);
   void beginWriteArray(QSettings* theWrappedObject, const QString&  prefix, int  size = -1);
   QStringList  childGroups(QSettings* theWrappedObject) const;
   QStringList  childKeys(QSettings* theWrappedObject) const;
   void clear(QSettings* theWrappedObject);
   bool  contains(QSettings* theWrappedObject, const QString&  key) const;
   QSettings::Format  static_QSettings_defaultFormat();
   void endArray(QSettings* theWrappedObject);
   void endGroup(QSettings* theWrappedObject);
   bool  py_q_event(QSettings* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QSettings*)theWrappedObject)->py_q_event(event));}
   bool  fallbacksEnabled(QSettings* theWrappedObject) const;
   QString  fileName(QSettings* theWrappedObject) const;
   QSettings::Format  format(QSettings* theWrappedObject) const;
   QString  group(QSettings* theWrappedObject) const;
   QTextCodec*  iniCodec(QSettings* theWrappedObject) const;
   bool  isAtomicSyncRequired(QSettings* theWrappedObject) const;
   bool  isWritable(QSettings* theWrappedObject) const;
   QString  organizationName(QSettings* theWrappedObject) const;
   void remove(QSettings* theWrappedObject, const QString&  key);
   QSettings::Scope  scope(QSettings* theWrappedObject) const;
   void setArrayIndex(QSettings* theWrappedObject, int  i);
   void setAtomicSyncRequired(QSettings* theWrappedObject, bool  enable);
   void static_QSettings_setDefaultFormat(QSettings::Format  format);
   void setFallbacksEnabled(QSettings* theWrappedObject, bool  b);
   void setIniCodec(QSettings* theWrappedObject, QTextCodec*  codec);
   void setIniCodec(QSettings* theWrappedObject, const char*  codecName);
   void static_QSettings_setPath(QSettings::Format  format, QSettings::Scope  scope, const QString&  path);
   void setValue(QSettings* theWrappedObject, const QString&  key, const QVariant&  value);
   QSettings::Status  status(QSettings* theWrappedObject) const;
   void sync(QSettings* theWrappedObject);
   QVariant  value(QSettings* theWrappedObject, const QString&  key, const QVariant&  defaultValue = QVariant()) const;
};





class PythonQtShell_QSharedMemory : public QSharedMemory
{
public:
    PythonQtShell_QSharedMemory(QObject*  parent = nullptr):QSharedMemory(parent),_wrapper(NULL) {};
    PythonQtShell_QSharedMemory(const QString&  key, QObject*  parent = nullptr):QSharedMemory(key, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSharedMemory();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSharedMemory : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AccessMode SharedMemoryError )
enum AccessMode{
  ReadOnly = QSharedMemory::ReadOnly,   ReadWrite = QSharedMemory::ReadWrite};
enum SharedMemoryError{
  NoError = QSharedMemory::NoError,   PermissionDenied = QSharedMemory::PermissionDenied,   InvalidSize = QSharedMemory::InvalidSize,   KeyError = QSharedMemory::KeyError,   AlreadyExists = QSharedMemory::AlreadyExists,   NotFound = QSharedMemory::NotFound,   LockError = QSharedMemory::LockError,   OutOfResources = QSharedMemory::OutOfResources,   UnknownError = QSharedMemory::UnknownError};
public slots:
QSharedMemory* new_QSharedMemory(QObject*  parent = nullptr);
QSharedMemory* new_QSharedMemory(const QString&  key, QObject*  parent = nullptr);
void delete_QSharedMemory(QSharedMemory* obj) { delete obj; } 
   bool  attach(QSharedMemory* theWrappedObject, QSharedMemory::AccessMode  mode = QSharedMemory::ReadWrite);
   const void*  constData(QSharedMemory* theWrappedObject) const;
   bool  create(QSharedMemory* theWrappedObject, int  size, QSharedMemory::AccessMode  mode = QSharedMemory::ReadWrite);
   void*  data(QSharedMemory* theWrappedObject);
   const void*  data(QSharedMemory* theWrappedObject) const;
   QSharedMemory::SharedMemoryError  error(QSharedMemory* theWrappedObject) const;
   QString  errorString(QSharedMemory* theWrappedObject) const;
   bool  isAttached(QSharedMemory* theWrappedObject) const;
   QString  key(QSharedMemory* theWrappedObject) const;
   bool  lock(QSharedMemory* theWrappedObject);
   QString  nativeKey(QSharedMemory* theWrappedObject) const;
   void setKey(QSharedMemory* theWrappedObject, const QString&  key);
   void setNativeKey(QSharedMemory* theWrappedObject, const QString&  key);
   int  size(QSharedMemory* theWrappedObject) const;
   bool  unlock(QSharedMemory* theWrappedObject);
};





class PythonQtWrapper_QSignalBlocker : public QObject
{ Q_OBJECT
public:
public slots:
QSignalBlocker* new_QSignalBlocker(QObject&  o);
QSignalBlocker* new_QSignalBlocker(QObject*  o);
void delete_QSignalBlocker(QSignalBlocker* obj) { delete obj; } 
   void reblock(QSignalBlocker* theWrappedObject);
   void unblock(QSignalBlocker* theWrappedObject);
};





class PythonQtShell_QSignalMapper : public QSignalMapper
{
public:
    PythonQtShell_QSignalMapper(QObject*  parent = nullptr):QSignalMapper(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSignalMapper();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSignalMapper : public QObject
{ Q_OBJECT
public:
public slots:
QSignalMapper* new_QSignalMapper(QObject*  parent = nullptr);
void delete_QSignalMapper(QSignalMapper* obj) { delete obj; } 
   QObject*  mapping(QSignalMapper* theWrappedObject, QObject*  object) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, QWidget*  widget) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, const QString&  text) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, int  id) const;
   void removeMappings(QSignalMapper* theWrappedObject, QObject*  sender);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, QObject*  object);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, QWidget*  widget);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, const QString&  text);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, int  id);
};





class PythonQtShell_QSignalTransition : public QSignalTransition
{
public:
    PythonQtShell_QSignalTransition(QState*  sourceState = nullptr):QSignalTransition(sourceState),_wrapper(NULL) {};
    PythonQtShell_QSignalTransition(const QObject*  sender, const char*  signal, QState*  sourceState = nullptr):QSignalTransition(sender, signal, sourceState),_wrapper(NULL) {};

   ~PythonQtShell_QSignalTransition();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSignalTransition : public QSignalTransition
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  promoted_eventTest(QEvent*  event) { return this->eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { this->onTransition(event); }
inline bool  py_q_event(QEvent*  e) { return QSignalTransition::event(e); }
inline bool  py_q_eventTest(QEvent*  event) { return QSignalTransition::eventTest(event); }
inline void py_q_onTransition(QEvent*  event) { QSignalTransition::onTransition(event); }
};

class PythonQtWrapper_QSignalTransition : public QObject
{ Q_OBJECT
public:
public slots:
QSignalTransition* new_QSignalTransition(QState*  sourceState = nullptr);
QSignalTransition* new_QSignalTransition(const QObject*  sender, const char*  signal, QState*  sourceState = nullptr);
void delete_QSignalTransition(QSignalTransition* obj) { delete obj; } 
   bool  py_q_event(QSignalTransition* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QSignalTransition*)theWrappedObject)->py_q_event(e));}
   bool  py_q_eventTest(QSignalTransition* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QSignalTransition*)theWrappedObject)->py_q_eventTest(event));}
   void py_q_onTransition(QSignalTransition* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QSignalTransition*)theWrappedObject)->py_q_onTransition(event));}
   QObject*  senderObject(QSignalTransition* theWrappedObject) const;
   void setSenderObject(QSignalTransition* theWrappedObject, const QObject*  sender);
   void setSignal(QSignalTransition* theWrappedObject, const QByteArray&  signal);
   QByteArray  signal(QSignalTransition* theWrappedObject) const;
};





class PythonQtShell_QSocketNotifier : public QSocketNotifier
{
public:
    PythonQtShell_QSocketNotifier(qintptr  socket, QSocketNotifier::Type  arg__2, QObject*  parent = nullptr):QSocketNotifier(socket, arg__2, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSocketNotifier();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSocketNotifier : public QSocketNotifier
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QSocketNotifier::event(arg__1); }
};

class PythonQtWrapper_QSocketNotifier : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Read = QSocketNotifier::Read,   Write = QSocketNotifier::Write,   Exception = QSocketNotifier::Exception};
public slots:
QSocketNotifier* new_QSocketNotifier(qintptr  socket, QSocketNotifier::Type  arg__2, QObject*  parent = nullptr);
void delete_QSocketNotifier(QSocketNotifier* obj) { delete obj; } 
   bool  py_q_event(QSocketNotifier* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QSocketNotifier*)theWrappedObject)->py_q_event(arg__1));}
   bool  isEnabled(QSocketNotifier* theWrappedObject) const;
   qintptr  socket(QSocketNotifier* theWrappedObject) const;
   QSocketNotifier::Type  type(QSocketNotifier* theWrappedObject) const;
};





class PythonQtWrapper_QStandardPaths : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LocateOption StandardLocation )
Q_FLAGS(LocateOptions )
enum LocateOption{
  LocateFile = QStandardPaths::LocateFile,   LocateDirectory = QStandardPaths::LocateDirectory};
enum StandardLocation{
  DesktopLocation = QStandardPaths::DesktopLocation,   DocumentsLocation = QStandardPaths::DocumentsLocation,   FontsLocation = QStandardPaths::FontsLocation,   ApplicationsLocation = QStandardPaths::ApplicationsLocation,   MusicLocation = QStandardPaths::MusicLocation,   MoviesLocation = QStandardPaths::MoviesLocation,   PicturesLocation = QStandardPaths::PicturesLocation,   TempLocation = QStandardPaths::TempLocation,   HomeLocation = QStandardPaths::HomeLocation,   DataLocation = QStandardPaths::DataLocation,   CacheLocation = QStandardPaths::CacheLocation,   GenericDataLocation = QStandardPaths::GenericDataLocation,   RuntimeLocation = QStandardPaths::RuntimeLocation,   ConfigLocation = QStandardPaths::ConfigLocation,   DownloadLocation = QStandardPaths::DownloadLocation,   GenericCacheLocation = QStandardPaths::GenericCacheLocation,   GenericConfigLocation = QStandardPaths::GenericConfigLocation,   AppDataLocation = QStandardPaths::AppDataLocation,   AppConfigLocation = QStandardPaths::AppConfigLocation,   AppLocalDataLocation = QStandardPaths::AppLocalDataLocation};
Q_DECLARE_FLAGS(LocateOptions, LocateOption)
public slots:
   QString  static_QStandardPaths_displayName(QStandardPaths::StandardLocation  type);
   void static_QStandardPaths_enableTestMode(bool  testMode);
   QString  static_QStandardPaths_findExecutable(const QString&  executableName, const QStringList&  paths = QStringList());
   bool  static_QStandardPaths_isTestModeEnabled();
   QString  static_QStandardPaths_locate(QStandardPaths::StandardLocation  type, const QString&  fileName, QStandardPaths::LocateOptions  options = QStandardPaths::LocateFile);
   QStringList  static_QStandardPaths_locateAll(QStandardPaths::StandardLocation  type, const QString&  fileName, QStandardPaths::LocateOptions  options = QStandardPaths::LocateFile);
   void static_QStandardPaths_setTestModeEnabled(bool  testMode);
   QStringList  static_QStandardPaths_standardLocations(QStandardPaths::StandardLocation  type);
   QString  static_QStandardPaths_writableLocation(QStandardPaths::StandardLocation  type);
};





class PythonQtShell_QState : public QState
{
public:
    PythonQtShell_QState(QState*  parent = nullptr):QState(parent),_wrapper(NULL) {};
    PythonQtShell_QState(QState::ChildMode  childMode, QState*  parent = nullptr):QState(childMode, parent),_wrapper(NULL) {};

   ~PythonQtShell_QState();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void onEntry(QEvent*  event);
virtual void onExit(QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QState : public QState
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_onEntry(QEvent*  event) { this->onEntry(event); }
inline void promoted_onExit(QEvent*  event) { this->onExit(event); }
inline bool  py_q_event(QEvent*  e) { return QState::event(e); }
inline void py_q_onEntry(QEvent*  event) { QState::onEntry(event); }
inline void py_q_onExit(QEvent*  event) { QState::onExit(event); }
};

class PythonQtWrapper_QState : public QObject
{ Q_OBJECT
public:
public slots:
QState* new_QState(QState*  parent = nullptr);
QState* new_QState(QState::ChildMode  childMode, QState*  parent = nullptr);
void delete_QState(QState* obj) { delete obj; } 
   QAbstractTransition*  addTransition(QState* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractState* >  target);
   void addTransition(QState* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractTransition* >  transition);
   QSignalTransition*  addTransition(QState* theWrappedObject, const QObject*  sender, const char*  signal, QAbstractState*  target);
   void assignProperty(QState* theWrappedObject, QObject*  object, const char*  name, const QVariant&  value);
   QState::ChildMode  childMode(QState* theWrappedObject) const;
   QAbstractState*  errorState(QState* theWrappedObject) const;
   bool  py_q_event(QState* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QState*)theWrappedObject)->py_q_event(e));}
   QAbstractState*  initialState(QState* theWrappedObject) const;
   void py_q_onEntry(QState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QState*)theWrappedObject)->py_q_onEntry(event));}
   void py_q_onExit(QState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QState*)theWrappedObject)->py_q_onExit(event));}
   void removeTransition(QState* theWrappedObject, PythonQtPassOwnershipToPython<QAbstractTransition* >  transition);
   void setChildMode(QState* theWrappedObject, QState::ChildMode  mode);
   void setErrorState(QState* theWrappedObject, QAbstractState*  state);
   void setInitialState(QState* theWrappedObject, QAbstractState*  state);
   QList<QAbstractTransition* >  transitions(QState* theWrappedObject) const;
};





class PythonQtShell_QStateMachine : public QStateMachine
{
public:
    PythonQtShell_QStateMachine(QObject*  parent = nullptr):QStateMachine(parent),_wrapper(NULL) {};
    PythonQtShell_QStateMachine(QState::ChildMode  childMode, QObject*  parent = nullptr):QStateMachine(childMode, parent),_wrapper(NULL) {};

   ~PythonQtShell_QStateMachine();

virtual void beginMicrostep(QEvent*  event);
virtual void beginSelectTransitions(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual void endMicrostep(QEvent*  event);
virtual void endSelectTransitions(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void onEntry(QEvent*  event);
virtual void onExit(QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStateMachine : public QStateMachine
{ public:
inline void promoted_beginMicrostep(QEvent*  event) { this->beginMicrostep(event); }
inline void promoted_beginSelectTransitions(QEvent*  event) { this->beginSelectTransitions(event); }
inline void promoted_endMicrostep(QEvent*  event) { this->endMicrostep(event); }
inline void promoted_endSelectTransitions(QEvent*  event) { this->endSelectTransitions(event); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_onEntry(QEvent*  event) { this->onEntry(event); }
inline void promoted_onExit(QEvent*  event) { this->onExit(event); }
inline void py_q_beginMicrostep(QEvent*  event) { QStateMachine::beginMicrostep(event); }
inline void py_q_beginSelectTransitions(QEvent*  event) { QStateMachine::beginSelectTransitions(event); }
inline void py_q_endMicrostep(QEvent*  event) { QStateMachine::endMicrostep(event); }
inline void py_q_endSelectTransitions(QEvent*  event) { QStateMachine::endSelectTransitions(event); }
inline bool  py_q_event(QEvent*  e) { return QStateMachine::event(e); }
inline bool  py_q_eventFilter(QObject*  watched, QEvent*  event) { return QStateMachine::eventFilter(watched, event); }
inline void py_q_onEntry(QEvent*  event) { QStateMachine::onEntry(event); }
inline void py_q_onExit(QEvent*  event) { QStateMachine::onExit(event); }
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
QStateMachine* new_QStateMachine(QObject*  parent = nullptr);
QStateMachine* new_QStateMachine(QState::ChildMode  childMode, QObject*  parent = nullptr);
void delete_QStateMachine(QStateMachine* obj) { delete obj; } 
   void addDefaultAnimation(QStateMachine* theWrappedObject, QAbstractAnimation*  animation);
   void addState(QStateMachine* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractState* >  state);
   void beginMicrostep(QStateMachine* theWrappedObject, QEvent*  event);
   void py_q_beginMicrostep(QStateMachine* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->py_q_beginMicrostep(event));}
   void beginSelectTransitions(QStateMachine* theWrappedObject, QEvent*  event);
   void py_q_beginSelectTransitions(QStateMachine* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->py_q_beginSelectTransitions(event));}
   bool  cancelDelayedEvent(QStateMachine* theWrappedObject, int  id);
   void clearError(QStateMachine* theWrappedObject);
   QSet<QAbstractState* >  configuration(QStateMachine* theWrappedObject) const;
   QList<QAbstractAnimation* >  defaultAnimations(QStateMachine* theWrappedObject) const;
   void endMicrostep(QStateMachine* theWrappedObject, QEvent*  event);
   void py_q_endMicrostep(QStateMachine* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->py_q_endMicrostep(event));}
   void endSelectTransitions(QStateMachine* theWrappedObject, QEvent*  event);
   void py_q_endSelectTransitions(QStateMachine* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->py_q_endSelectTransitions(event));}
   QStateMachine::Error  error(QStateMachine* theWrappedObject) const;
   QString  errorString(QStateMachine* theWrappedObject) const;
   bool  py_q_event(QStateMachine* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->py_q_event(e));}
   bool  py_q_eventFilter(QStateMachine* theWrappedObject, QObject*  watched, QEvent*  event){  return (((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->py_q_eventFilter(watched, event));}
   QState::RestorePolicy  globalRestorePolicy(QStateMachine* theWrappedObject) const;
   bool  isAnimated(QStateMachine* theWrappedObject) const;
   bool  isRunning(QStateMachine* theWrappedObject) const;
   void py_q_onEntry(QStateMachine* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->py_q_onEntry(event));}
   void py_q_onExit(QStateMachine* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->py_q_onExit(event));}
   int  postDelayedEvent(QStateMachine* theWrappedObject, QEvent*  event, int  delay);
   void postEvent(QStateMachine* theWrappedObject, QEvent*  event, QStateMachine::EventPriority  priority = QStateMachine::NormalPriority);
   void removeDefaultAnimation(QStateMachine* theWrappedObject, QAbstractAnimation*  animation);
   void removeState(QStateMachine* theWrappedObject, PythonQtPassOwnershipToPython<QAbstractState* >  state);
   void setAnimated(QStateMachine* theWrappedObject, bool  enabled);
   void setGlobalRestorePolicy(QStateMachine* theWrappedObject, QState::RestorePolicy  restorePolicy);
};





class PythonQtWrapper_QStateMachine__SignalEvent : public QObject
{ Q_OBJECT
public:
public slots:
QStateMachine::SignalEvent* new_QStateMachine__SignalEvent(QObject*  sender, int  signalIndex, const QList<QVariant >&  arguments);
void delete_QStateMachine__SignalEvent(QStateMachine::SignalEvent* obj) { delete obj; } 
   QList<QVariant >  arguments(QStateMachine::SignalEvent* theWrappedObject) const;
   QObject*  sender(QStateMachine::SignalEvent* theWrappedObject) const;
   int  signalIndex(QStateMachine::SignalEvent* theWrappedObject) const;
};


