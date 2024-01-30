#include <PythonQt.h>
#include <QObject>
#include <QStringList>
#include <QTextCodec>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractstate.h>
#include <qabstracttransition.h>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdeadlinetimer.h>
#include <qdir.h>
#include <qeasingcurve.h>
#include <qfile.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpauseanimation.h>
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
#include <qstorageinfo.h>
#include <qstringlist.h>
#include <qstringmatcher.h>
#include <qsysinfo.h>
#include <qsystemsemaphore.h>
#include <qtemporarydir.h>
#include <qtemporaryfile.h>
#include <qtextboundaryfinder.h>
#include <qtextcodec.h>
#include <qtextstream.h>
#include <qthread.h>
#include <qthreadpool.h>
#include <qtimeline.h>
#include <qtimezone.h>
#include <qwidget.h>



class PythonQtShell_QRunnable : public QRunnable
{
public:
    PythonQtShell_QRunnable():QRunnable(),_wrapper(nullptr) {};

   ~PythonQtShell_QRunnable() override;

void run() override;

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
    PythonQtShell_QSaveFile(QObject*  parent = nullptr):QSaveFile(parent),_wrapper(nullptr) {};
    PythonQtShell_QSaveFile(const QString&  name):QSaveFile(name),_wrapper(nullptr) {};
    PythonQtShell_QSaveFile(const QString&  name, QObject*  parent):QSaveFile(name, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSaveFile() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QString  fileName() const override;
bool  isSequential() const override;
bool  open(QIODevice::OpenMode  flags) override;
QFileDevice::Permissions  permissions() const override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
bool  resize(qint64  sz) override;
bool  seek(qint64  offset) override;
bool  setPermissions(QFileDevice::Permissions  permissionSpec) override;
qint64  size() const override;
void timerEvent(QTimerEvent*  event) override;
bool  waitForBytesWritten(int  msecs) override;
bool  waitForReadyRead(int  msecs) override;
qint64  writeData(const char*  data, qint64  len) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
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
    PythonQtShell_QSequentialAnimationGroup(QObject*  parent = nullptr):QSequentialAnimationGroup(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSequentialAnimationGroup() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  arg__1) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
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
    PythonQtShell_QSettings(QObject*  parent = nullptr):QSettings(parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr):QSettings(format, scope, organization, application, parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(QSettings::Scope  scope, QObject*  parent = nullptr):QSettings(scope, parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr):QSettings(scope, organization, application, parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = nullptr):QSettings(fileName, format, parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr):QSettings(organization, application, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSettings() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
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
QSettings* new_QSettings(QSettings::Scope  scope, QObject*  parent = nullptr);
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
    PythonQtShell_QSharedMemory(QObject*  parent = nullptr):QSharedMemory(parent),_wrapper(nullptr) {};
    PythonQtShell_QSharedMemory(const QString&  key, QObject*  parent = nullptr):QSharedMemory(key, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSharedMemory() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
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
    PythonQtShell_QSignalMapper(QObject*  parent = nullptr):QSignalMapper(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSignalMapper() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
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
    PythonQtShell_QSignalTransition(QState*  sourceState = nullptr):QSignalTransition(sourceState),_wrapper(nullptr) {};
    PythonQtShell_QSignalTransition(const QObject*  sender, const char*  signal, QState*  sourceState = nullptr):QSignalTransition(sender, signal, sourceState),_wrapper(nullptr) {};

   ~PythonQtShell_QSignalTransition() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  eventTest(QEvent*  event) override;
void onTransition(QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
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
    PythonQtShell_QSocketNotifier(qintptr  socket, QSocketNotifier::Type  arg__2, QObject*  parent = nullptr):QSocketNotifier(socket, arg__2, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSocketNotifier() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
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
    PythonQtShell_QState(QState*  parent = nullptr):QState(parent),_wrapper(nullptr) {};
    PythonQtShell_QState(QState::ChildMode  childMode, QState*  parent = nullptr):QState(childMode, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QState() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void onEntry(QEvent*  event) override;
void onExit(QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
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
    PythonQtShell_QStateMachine(QObject*  parent = nullptr):QStateMachine(parent),_wrapper(nullptr) {};
    PythonQtShell_QStateMachine(QState::ChildMode  childMode, QObject*  parent = nullptr):QStateMachine(childMode, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QStateMachine() override;

void beginMicrostep(QEvent*  event) override;
void beginSelectTransitions(QEvent*  event) override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
void endMicrostep(QEvent*  event) override;
void endSelectTransitions(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void onEntry(QEvent*  event) override;
void onExit(QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
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
  NoError = QStateMachine::NoError,   NoInitialStateError = QStateMachine::NoInitialStateError,   NoDefaultStateInHistoryStateError = QStateMachine::NoDefaultStateInHistoryStateError,   NoCommonAncestorForTransitionError = QStateMachine::NoCommonAncestorForTransitionError,   StateMachineChildModeSetToParallelError = QStateMachine::StateMachineChildModeSetToParallelError};
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





class PythonQtWrapper_QStateMachine__WrappedEvent : public QObject
{ Q_OBJECT
public:
public slots:
QStateMachine::WrappedEvent* new_QStateMachine__WrappedEvent(QObject*  object, QEvent*  event);
void delete_QStateMachine__WrappedEvent(QStateMachine::WrappedEvent* obj) { delete obj; }
   QEvent*  event(QStateMachine::WrappedEvent* theWrappedObject) const;
   QObject*  object(QStateMachine::WrappedEvent* theWrappedObject) const;
};





class PythonQtWrapper_QStorageInfo : public QObject
{ Q_OBJECT
public:
public slots:
QStorageInfo* new_QStorageInfo();
QStorageInfo* new_QStorageInfo(const QDir&  dir);
QStorageInfo* new_QStorageInfo(const QStorageInfo&  other);
QStorageInfo* new_QStorageInfo(const QString&  path);
void delete_QStorageInfo(QStorageInfo* obj) { delete obj; }
   int  blockSize(QStorageInfo* theWrappedObject) const;
   qint64  bytesAvailable(QStorageInfo* theWrappedObject) const;
   qint64  bytesFree(QStorageInfo* theWrappedObject) const;
   qint64  bytesTotal(QStorageInfo* theWrappedObject) const;
   QByteArray  device(QStorageInfo* theWrappedObject) const;
   QString  displayName(QStorageInfo* theWrappedObject) const;
   QByteArray  fileSystemType(QStorageInfo* theWrappedObject) const;
   bool  isReadOnly(QStorageInfo* theWrappedObject) const;
   bool  isReady(QStorageInfo* theWrappedObject) const;
   bool  isRoot(QStorageInfo* theWrappedObject) const;
   bool  isValid(QStorageInfo* theWrappedObject) const;
   QList<QStorageInfo >  static_QStorageInfo_mountedVolumes();
   QString  name(QStorageInfo* theWrappedObject) const;
   bool  __ne__(QStorageInfo* theWrappedObject, const QStorageInfo&  second);
   QStorageInfo*  operator_assign(QStorageInfo* theWrappedObject, const QStorageInfo&  other);
   bool  __eq__(QStorageInfo* theWrappedObject, const QStorageInfo&  second);
   void refresh(QStorageInfo* theWrappedObject);
   QStorageInfo  static_QStorageInfo_root();
   QString  rootPath(QStorageInfo* theWrappedObject) const;
   void setPath(QStorageInfo* theWrappedObject, const QString&  path);
   QByteArray  subvolume(QStorageInfo* theWrappedObject) const;
   void swap(QStorageInfo* theWrappedObject, QStorageInfo&  other);
    QString py_toString(QStorageInfo*);
    bool __nonzero__(QStorageInfo* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QStringMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QStringMatcher* new_QStringMatcher();
QStringMatcher* new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs = Qt::CaseSensitive);
QStringMatcher* new_QStringMatcher(const QStringMatcher&  other);
void delete_QStringMatcher(QStringMatcher* obj) { delete obj; }
   Qt::CaseSensitivity  caseSensitivity(QStringMatcher* theWrappedObject) const;
   qsizetype  indexIn(QStringMatcher* theWrappedObject, QStringView  str, qsizetype  from = 0) const;
   int  indexIn(QStringMatcher* theWrappedObject, const QString&  str, int  from = 0) const;
   QString  pattern(QStringMatcher* theWrappedObject) const;
   void setCaseSensitivity(QStringMatcher* theWrappedObject, Qt::CaseSensitivity  cs);
   void setPattern(QStringMatcher* theWrappedObject, const QString&  pattern);
};





class PythonQtShell_QSysInfo : public QSysInfo
{
public:
    PythonQtShell_QSysInfo():QSysInfo(),_wrapper(nullptr) {};

   ~PythonQtShell_QSysInfo();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSysInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Endian Sizes )
enum Endian{
  BigEndian = QSysInfo::BigEndian,   LittleEndian = QSysInfo::LittleEndian,   ByteOrder = QSysInfo::ByteOrder};
enum Sizes{
  WordSize = QSysInfo::WordSize};
public slots:
QSysInfo* new_QSysInfo();
void delete_QSysInfo(QSysInfo* obj) { delete obj; }
   QByteArray  static_QSysInfo_bootUniqueId();
   QString  static_QSysInfo_buildAbi();
   QString  static_QSysInfo_buildCpuArchitecture();
   QString  static_QSysInfo_currentCpuArchitecture();
   QString  static_QSysInfo_kernelType();
   QString  static_QSysInfo_kernelVersion();
   QString  static_QSysInfo_machineHostName();
   QByteArray  static_QSysInfo_machineUniqueId();
   QString  static_QSysInfo_prettyProductName();
   QString  static_QSysInfo_productType();
   QString  static_QSysInfo_productVersion();
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
   bool  acquire(QSystemSemaphore* theWrappedObject);
   QSystemSemaphore::SystemSemaphoreError  error(QSystemSemaphore* theWrappedObject) const;
   QString  errorString(QSystemSemaphore* theWrappedObject) const;
   QString  key(QSystemSemaphore* theWrappedObject) const;
   bool  release(QSystemSemaphore* theWrappedObject, int  n = 1);
   void setKey(QSystemSemaphore* theWrappedObject, const QString&  key, int  initialValue = 0, QSystemSemaphore::AccessMode  mode = QSystemSemaphore::Open);
};





class PythonQtWrapper_QTemporaryDir : public QObject
{ Q_OBJECT
public:
public slots:
QTemporaryDir* new_QTemporaryDir();
QTemporaryDir* new_QTemporaryDir(const QString&  templateName);
void delete_QTemporaryDir(QTemporaryDir* obj) { delete obj; }
   bool  autoRemove(QTemporaryDir* theWrappedObject) const;
   QString  errorString(QTemporaryDir* theWrappedObject) const;
   QString  filePath(QTemporaryDir* theWrappedObject, const QString&  fileName) const;
   bool  isValid(QTemporaryDir* theWrappedObject) const;
   QString  path(QTemporaryDir* theWrappedObject) const;
   bool  remove(QTemporaryDir* theWrappedObject);
   void setAutoRemove(QTemporaryDir* theWrappedObject, bool  b);
    bool __nonzero__(QTemporaryDir* obj) { return obj->isValid(); }
};





class PythonQtShell_QTemporaryFile : public QTemporaryFile
{
public:
    PythonQtShell_QTemporaryFile():QTemporaryFile(),_wrapper(nullptr) {};
    PythonQtShell_QTemporaryFile(QObject*  parent):QTemporaryFile(parent),_wrapper(nullptr) {};
    PythonQtShell_QTemporaryFile(const QString&  templateName):QTemporaryFile(templateName),_wrapper(nullptr) {};
    PythonQtShell_QTemporaryFile(const QString&  templateName, QObject*  parent):QTemporaryFile(templateName, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTemporaryFile() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void close() override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QString  fileName() const override;
bool  isSequential() const override;
bool  open(QIODevice::OpenMode  flags) override;
QFileDevice::Permissions  permissions() const override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
bool  resize(qint64  sz) override;
bool  seek(qint64  offset) override;
bool  setPermissions(QFileDevice::Permissions  permissionSpec) override;
qint64  size() const override;
void timerEvent(QTimerEvent*  event) override;
bool  waitForBytesWritten(int  msecs) override;
bool  waitForReadyRead(int  msecs) override;
qint64  writeData(const char*  data, qint64  len) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTemporaryFile : public QTemporaryFile
{ public:
inline bool  promoted_open(QIODevice::OpenMode  flags) { return this->open(flags); }
inline QString  py_q_fileName() const { return QTemporaryFile::fileName(); }
inline bool  py_q_open(QIODevice::OpenMode  flags) { return QTemporaryFile::open(flags); }
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
   bool  autoRemove(QTemporaryFile* theWrappedObject) const;
   QTemporaryFile*  static_QTemporaryFile_createLocalFile(QFile&  file);
   QTemporaryFile*  static_QTemporaryFile_createLocalFile(const QString&  fileName);
   QTemporaryFile*  static_QTemporaryFile_createNativeFile(QFile&  file);
   QTemporaryFile*  static_QTemporaryFile_createNativeFile(const QString&  fileName);
   QString  fileName(QTemporaryFile* theWrappedObject) const;
   QString  py_q_fileName(QTemporaryFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTemporaryFile*)theWrappedObject)->py_q_fileName());}
   QString  fileTemplate(QTemporaryFile* theWrappedObject) const;
   bool  open(QTemporaryFile* theWrappedObject);
   bool  py_q_open(QTemporaryFile* theWrappedObject, QIODevice::OpenMode  flags){  return (((PythonQtPublicPromoter_QTemporaryFile*)theWrappedObject)->py_q_open(flags));}
   bool  rename(QTemporaryFile* theWrappedObject, const QString&  newName);
   void setAutoRemove(QTemporaryFile* theWrappedObject, bool  b);
   void setFileTemplate(QTemporaryFile* theWrappedObject, const QString&  name);
};





class PythonQtWrapper_QTextBoundaryFinder : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BoundaryReason BoundaryType )
Q_FLAGS(BoundaryReasons )
enum BoundaryReason{
  NotAtBoundary = QTextBoundaryFinder::NotAtBoundary,   BreakOpportunity = QTextBoundaryFinder::BreakOpportunity,   StartOfItem = QTextBoundaryFinder::StartOfItem,   EndOfItem = QTextBoundaryFinder::EndOfItem,   MandatoryBreak = QTextBoundaryFinder::MandatoryBreak,   SoftHyphen = QTextBoundaryFinder::SoftHyphen};
enum BoundaryType{
  Grapheme = QTextBoundaryFinder::Grapheme,   Word = QTextBoundaryFinder::Word,   Sentence = QTextBoundaryFinder::Sentence,   Line = QTextBoundaryFinder::Line};
Q_DECLARE_FLAGS(BoundaryReasons, BoundaryReason)
public slots:
QTextBoundaryFinder* new_QTextBoundaryFinder();
QTextBoundaryFinder* new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QString&  string);
QTextBoundaryFinder* new_QTextBoundaryFinder(const QTextBoundaryFinder&  other);
void delete_QTextBoundaryFinder(QTextBoundaryFinder* obj) { delete obj; }
   QTextBoundaryFinder::BoundaryReasons  boundaryReasons(QTextBoundaryFinder* theWrappedObject) const;
   bool  isAtBoundary(QTextBoundaryFinder* theWrappedObject) const;
   bool  isValid(QTextBoundaryFinder* theWrappedObject) const;
   int  position(QTextBoundaryFinder* theWrappedObject) const;
   void setPosition(QTextBoundaryFinder* theWrappedObject, int  position);
   QString  string(QTextBoundaryFinder* theWrappedObject) const;
   void toEnd(QTextBoundaryFinder* theWrappedObject);
   int  toNextBoundary(QTextBoundaryFinder* theWrappedObject);
   int  toPreviousBoundary(QTextBoundaryFinder* theWrappedObject);
   void toStart(QTextBoundaryFinder* theWrappedObject);
   QTextBoundaryFinder::BoundaryType  type(QTextBoundaryFinder* theWrappedObject) const;
    bool __nonzero__(QTextBoundaryFinder* obj) { return obj->isValid(); }
};





class PythonQtShell_QTextCodec : public QTextCodec
{
public:
    PythonQtShell_QTextCodec():QTextCodec(),_wrapper(nullptr) {};

   ~PythonQtShell_QTextCodec() override;

QList<QByteArray >  aliases() const override;
QByteArray  convertFromUnicode(const QChar*  in, int  length, QTextCodec::ConverterState*  state) const override;
QString  convertToUnicode(const char*  in, int  length, QTextCodec::ConverterState*  state) const override;
int  mibEnum() const override;
QByteArray  name() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTextCodec : public QTextCodec
{ public:
inline QByteArray  promoted_convertFromUnicode(const QChar*  in, int  length, QTextCodec::ConverterState*  state) const { return this->convertFromUnicode(in, length, state); }
inline QString  promoted_convertToUnicode(const char*  in, int  length, QTextCodec::ConverterState*  state) const { return this->convertToUnicode(in, length, state); }
inline QList<QByteArray >  py_q_aliases() const { return QTextCodec::aliases(); }
inline QByteArray  py_q_convertFromUnicode(const QChar*  in, int  length, QTextCodec::ConverterState*  state) const { return this->convertFromUnicode(in, length, state); }
inline QString  py_q_convertToUnicode(const char*  in, int  length, QTextCodec::ConverterState*  state) const { return this->convertToUnicode(in, length, state); }
inline int  py_q_mibEnum() const { return this->mibEnum(); }
inline QByteArray  py_q_name() const { return this->name(); }
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
QTextCodec* new_QTextCodec();
   QList<QByteArray >  aliases(QTextCodec* theWrappedObject) const;
   QList<QByteArray >  py_q_aliases(QTextCodec* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->py_q_aliases());}
   QList<QByteArray >  static_QTextCodec_availableCodecs();
   QList<int >  static_QTextCodec_availableMibs();
   bool  canEncode(QTextCodec* theWrappedObject, QChar  arg__1) const;
   bool  canEncode(QTextCodec* theWrappedObject, const QString&  arg__1) const;
   QTextCodec*  static_QTextCodec_codecForHtml(const QByteArray&  ba);
   QTextCodec*  static_QTextCodec_codecForHtml(const QByteArray&  ba, QTextCodec*  defaultCodec);
   QTextCodec*  static_QTextCodec_codecForLocale();
   QTextCodec*  static_QTextCodec_codecForMib(int  mib);
   QTextCodec*  static_QTextCodec_codecForName(const QByteArray&  name);
   QTextCodec*  static_QTextCodec_codecForName(const char*  name);
   QTextCodec*  static_QTextCodec_codecForUtfText(const QByteArray&  ba);
   QTextCodec*  static_QTextCodec_codecForUtfText(const QByteArray&  ba, QTextCodec*  defaultCodec);
   QByteArray  convertFromUnicode(QTextCodec* theWrappedObject, const QChar*  in, int  length, QTextCodec::ConverterState*  state) const;
   QByteArray  py_q_convertFromUnicode(QTextCodec* theWrappedObject, const QChar*  in, int  length, QTextCodec::ConverterState*  state) const{  return (((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->py_q_convertFromUnicode(in, length, state));}
   QString  convertToUnicode(QTextCodec* theWrappedObject, const char*  in, int  length, QTextCodec::ConverterState*  state) const;
   QString  py_q_convertToUnicode(QTextCodec* theWrappedObject, const char*  in, int  length, QTextCodec::ConverterState*  state) const{  return (((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->py_q_convertToUnicode(in, length, state));}
   QByteArray  fromUnicode(QTextCodec* theWrappedObject, const QString&  uc) const;
   QTextDecoder*  makeDecoder(QTextCodec* theWrappedObject, QTextCodec::ConversionFlags  flags = QTextCodec::DefaultConversion) const;
   QTextEncoder*  makeEncoder(QTextCodec* theWrappedObject, QTextCodec::ConversionFlags  flags = QTextCodec::DefaultConversion) const;
   int  mibEnum(QTextCodec* theWrappedObject) const;
   int  py_q_mibEnum(QTextCodec* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->py_q_mibEnum());}
   QByteArray  name(QTextCodec* theWrappedObject) const;
   QByteArray  py_q_name(QTextCodec* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->py_q_name());}
   void static_QTextCodec_setCodecForLocale(QTextCodec*  c);
   QString  toUnicode(QTextCodec* theWrappedObject, const QByteArray&  arg__1) const;
};





class PythonQtWrapper_QTextDecoder : public QObject
{ Q_OBJECT
public:
public slots:
QTextDecoder* new_QTextDecoder(const QTextCodec*  codec);
QTextDecoder* new_QTextDecoder(const QTextCodec*  codec, QTextCodec::ConversionFlags  flags);
void delete_QTextDecoder(QTextDecoder* obj) { delete obj; }
   bool  hasFailure(QTextDecoder* theWrappedObject) const;
   bool  needsMoreData(QTextDecoder* theWrappedObject) const;
   QString  toUnicode(QTextDecoder* theWrappedObject, const QByteArray&  ba);
};





class PythonQtWrapper_QTextEncoder : public QObject
{ Q_OBJECT
public:
public slots:
QTextEncoder* new_QTextEncoder(const QTextCodec*  codec);
QTextEncoder* new_QTextEncoder(const QTextCodec*  codec, QTextCodec::ConversionFlags  flags);
void delete_QTextEncoder(QTextEncoder* obj) { delete obj; }
   QByteArray  fromUnicode(QTextEncoder* theWrappedObject, const QString&  str);
   bool  hasFailure(QTextEncoder* theWrappedObject) const;
};





class PythonQtShell_QTextStream : public QTextStream
{
public:
    PythonQtShell_QTextStream():QTextStream(),_wrapper(nullptr) {};
    PythonQtShell_QTextStream(QIODevice*  device):QTextStream(device),_wrapper(nullptr) {};
    PythonQtShell_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode = QIODevice::ReadOnly):QTextStream(array, openMode),_wrapper(nullptr) {};

   ~PythonQtShell_QTextStream() override;


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FieldAlignment NumberFlag RealNumberNotation Status )
Q_FLAGS(NumberFlags )
enum FieldAlignment{
  AlignLeft = QTextStream::AlignLeft,   AlignRight = QTextStream::AlignRight,   AlignCenter = QTextStream::AlignCenter,   AlignAccountingStyle = QTextStream::AlignAccountingStyle};
enum NumberFlag{
  ShowBase = QTextStream::ShowBase,   ForcePoint = QTextStream::ForcePoint,   ForceSign = QTextStream::ForceSign,   UppercaseBase = QTextStream::UppercaseBase,   UppercaseDigits = QTextStream::UppercaseDigits};
enum RealNumberNotation{
  SmartNotation = QTextStream::SmartNotation,   FixedNotation = QTextStream::FixedNotation,   ScientificNotation = QTextStream::ScientificNotation};
enum Status{
  Ok = QTextStream::Ok,   ReadPastEnd = QTextStream::ReadPastEnd,   ReadCorruptData = QTextStream::ReadCorruptData,   WriteFailed = QTextStream::WriteFailed};
Q_DECLARE_FLAGS(NumberFlags, NumberFlag)
public slots:
QTextStream* new_QTextStream();
QTextStream* new_QTextStream(QIODevice*  device);
QTextStream* new_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode = QIODevice::ReadOnly);
void delete_QTextStream(QTextStream* obj) { delete obj; }
   bool  atEnd(QTextStream* theWrappedObject) const;
   bool  autoDetectUnicode(QTextStream* theWrappedObject) const;
   QTextCodec*  codec(QTextStream* theWrappedObject) const;
   QIODevice*  device(QTextStream* theWrappedObject) const;
   QTextStream::FieldAlignment  fieldAlignment(QTextStream* theWrappedObject) const;
   int  fieldWidth(QTextStream* theWrappedObject) const;
   void flush(QTextStream* theWrappedObject);
   bool  generateByteOrderMark(QTextStream* theWrappedObject) const;
   int  integerBase(QTextStream* theWrappedObject) const;
   QLocale  locale(QTextStream* theWrappedObject) const;
   QTextStream::NumberFlags  numberFlags(QTextStream* theWrappedObject) const;
   QTextStream*  writeByte(QTextStream* theWrappedObject, char  ch);
   QTextStream*  writeDouble(QTextStream* theWrappedObject, double  f);
   QTextStream*  writeFloat(QTextStream* theWrappedObject, float  f);
   QTextStream*  writeLongLong(QTextStream* theWrappedObject, qlonglong  i);
   QTextStream*  writeInt(QTextStream* theWrappedObject, signed int  i);
   QTextStream*  writeShort(QTextStream* theWrappedObject, signed short  i);
   QTextStream*  readByte(QTextStream* theWrappedObject, char&  ch);
   QTextStream*  readDouble(QTextStream* theWrappedObject, double&  f);
   QTextStream*  readFloat(QTextStream* theWrappedObject, float&  f);
   QTextStream*  readLongLong(QTextStream* theWrappedObject, qlonglong&  i);
   QTextStream*  readInt(QTextStream* theWrappedObject, signed int&  i);
   QTextStream*  readShort(QTextStream* theWrappedObject, signed short&  i);
   QChar  padChar(QTextStream* theWrappedObject) const;
   qint64  pos(QTextStream* theWrappedObject) const;
   QString  read(QTextStream* theWrappedObject, qint64  maxlen);
   QString  readAll(QTextStream* theWrappedObject);
   QString  readLine(QTextStream* theWrappedObject, qint64  maxlen = 0);
   bool  readLineInto(QTextStream* theWrappedObject, QString*  line, qint64  maxlen = 0);
   QTextStream::RealNumberNotation  realNumberNotation(QTextStream* theWrappedObject) const;
   int  realNumberPrecision(QTextStream* theWrappedObject) const;
   void reset(QTextStream* theWrappedObject);
   void resetStatus(QTextStream* theWrappedObject);
   bool  seek(QTextStream* theWrappedObject, qint64  pos);
   void setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled);
   void setCodec(QTextStream* theWrappedObject, QTextCodec*  codec);
   void setCodec(QTextStream* theWrappedObject, const char*  codecName);
   void setDevice(QTextStream* theWrappedObject, QIODevice*  device);
   void setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment);
   void setFieldWidth(QTextStream* theWrappedObject, int  width);
   void setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate);
   void setIntegerBase(QTextStream* theWrappedObject, int  base);
   void setLocale(QTextStream* theWrappedObject, const QLocale&  locale);
   void setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags);
   void setPadChar(QTextStream* theWrappedObject, QChar  ch);
   void setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation);
   void setRealNumberPrecision(QTextStream* theWrappedObject, int  precision);
   void setStatus(QTextStream* theWrappedObject, QTextStream::Status  status);
   void skipWhiteSpace(QTextStream* theWrappedObject);
   QTextStream::Status  status(QTextStream* theWrappedObject) const;
};





class PythonQtShell_QThread : public QThread
{
public:
    PythonQtShell_QThread(QObject*  parent = nullptr):QThread(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QThread() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void run() override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QThread : public QThread
{ public:
inline int  promoted_exec() { return this->exec(); }
inline void promoted_run() { this->run(); }
static inline void promoted_setTerminationEnabled(bool  enabled = true) { setTerminationEnabled(enabled); }
inline bool  py_q_event(QEvent*  event) { return QThread::event(event); }
inline void py_q_run() { QThread::run(); }
};

class PythonQtWrapper_QThread : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Priority )
enum Priority{
  IdlePriority = QThread::IdlePriority,   LowestPriority = QThread::LowestPriority,   LowPriority = QThread::LowPriority,   NormalPriority = QThread::NormalPriority,   HighPriority = QThread::HighPriority,   HighestPriority = QThread::HighestPriority,   TimeCriticalPriority = QThread::TimeCriticalPriority,   InheritPriority = QThread::InheritPriority};
public slots:
QThread* new_QThread(QObject*  parent = nullptr);
void delete_QThread(QThread* obj) { delete obj; }
   QThread*  static_QThread_currentThread();
   Qt::HANDLE  static_QThread_currentThreadId();
   bool  py_q_event(QThread* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QThread*)theWrappedObject)->py_q_event(event));}
   QAbstractEventDispatcher*  eventDispatcher(QThread* theWrappedObject) const;
   int  exec(QThread* theWrappedObject);
   void exit(QThread* theWrappedObject, int  retcode = 0);
   int  static_QThread_idealThreadCount();
   bool  isFinished(QThread* theWrappedObject) const;
   bool  isInterruptionRequested(QThread* theWrappedObject) const;
   bool  isRunning(QThread* theWrappedObject) const;
   int  loopLevel(QThread* theWrappedObject) const;
   void static_QThread_msleep(unsigned long  arg__1);
   QThread::Priority  priority(QThread* theWrappedObject) const;
   void requestInterruption(QThread* theWrappedObject);
   void run(QThread* theWrappedObject);
   void py_q_run(QThread* theWrappedObject){  (((PythonQtPublicPromoter_QThread*)theWrappedObject)->py_q_run());}
   void setEventDispatcher(QThread* theWrappedObject, QAbstractEventDispatcher*  eventDispatcher);
   void setPriority(QThread* theWrappedObject, QThread::Priority  priority);
   void setStackSize(QThread* theWrappedObject, uint  stackSize);
   void static_QThread_setTerminationEnabled(bool  enabled = true);
   void static_QThread_sleep(unsigned long  arg__1);
   uint  stackSize(QThread* theWrappedObject) const;
   void static_QThread_usleep(unsigned long  arg__1);
   bool  wait(QThread* theWrappedObject, QDeadlineTimer  deadline = QDeadlineTimer(QDeadlineTimer::Forever));
   bool  wait(QThread* theWrappedObject, unsigned long  time);
   void static_QThread_yieldCurrentThread();
};





class PythonQtShell_QThreadPool : public QThreadPool
{
public:
    PythonQtShell_QThreadPool(QObject*  parent = nullptr):QThreadPool(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QThreadPool() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QThreadPool : public QObject
{ Q_OBJECT
public:
public slots:
QThreadPool* new_QThreadPool(QObject*  parent = nullptr);
void delete_QThreadPool(QThreadPool* obj) { delete obj; }
   int  activeThreadCount(QThreadPool* theWrappedObject) const;
   void cancel(QThreadPool* theWrappedObject, QRunnable*  runnable);
   void clear(QThreadPool* theWrappedObject);
   bool  contains(QThreadPool* theWrappedObject, const QThread*  thread) const;
   int  expiryTimeout(QThreadPool* theWrappedObject) const;
   QThreadPool*  static_QThreadPool_globalInstance();
   int  maxThreadCount(QThreadPool* theWrappedObject) const;
   void releaseThread(QThreadPool* theWrappedObject);
   void reserveThread(QThreadPool* theWrappedObject);
   void setExpiryTimeout(QThreadPool* theWrappedObject, int  expiryTimeout);
   void setMaxThreadCount(QThreadPool* theWrappedObject, int  maxThreadCount);
   void setStackSize(QThreadPool* theWrappedObject, uint  stackSize);
   uint  stackSize(QThreadPool* theWrappedObject) const;
   void start(QThreadPool* theWrappedObject, QRunnable*  runnable, int  priority = 0);
   bool  tryStart(QThreadPool* theWrappedObject, QRunnable*  runnable);
   bool  tryTake(QThreadPool* theWrappedObject, QRunnable*  runnable);
   bool  waitForDone(QThreadPool* theWrappedObject, int  msecs = -1);
};





class PythonQtShell_QTimeLine : public QTimeLine
{
public:
    PythonQtShell_QTimeLine(int  duration = 1000, QObject*  parent = nullptr):QTimeLine(duration, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTimeLine() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
qreal  valueForTime(int  msec) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTimeLine : public QTimeLine
{ public:
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void py_q_timerEvent(QTimerEvent*  event) { QTimeLine::timerEvent(event); }
inline qreal  py_q_valueForTime(int  msec) const { return QTimeLine::valueForTime(msec); }
};

class PythonQtWrapper_QTimeLine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CurveShape Direction State )
enum CurveShape{
  EaseInCurve = QTimeLine::EaseInCurve,   EaseOutCurve = QTimeLine::EaseOutCurve,   EaseInOutCurve = QTimeLine::EaseInOutCurve,   LinearCurve = QTimeLine::LinearCurve,   SineCurve = QTimeLine::SineCurve,   CosineCurve = QTimeLine::CosineCurve};
enum Direction{
  Forward = QTimeLine::Forward,   Backward = QTimeLine::Backward};
enum State{
  NotRunning = QTimeLine::NotRunning,   Paused = QTimeLine::Paused,   Running = QTimeLine::Running};
public slots:
QTimeLine* new_QTimeLine(int  duration = 1000, QObject*  parent = nullptr);
void delete_QTimeLine(QTimeLine* obj) { delete obj; }
   int  currentFrame(QTimeLine* theWrappedObject) const;
   int  currentTime(QTimeLine* theWrappedObject) const;
   qreal  currentValue(QTimeLine* theWrappedObject) const;
   QTimeLine::CurveShape  curveShape(QTimeLine* theWrappedObject) const;
   QTimeLine::Direction  direction(QTimeLine* theWrappedObject) const;
   int  duration(QTimeLine* theWrappedObject) const;
   QEasingCurve  easingCurve(QTimeLine* theWrappedObject) const;
   int  endFrame(QTimeLine* theWrappedObject) const;
   int  frameForTime(QTimeLine* theWrappedObject, int  msec) const;
   int  loopCount(QTimeLine* theWrappedObject) const;
   void setCurveShape(QTimeLine* theWrappedObject, QTimeLine::CurveShape  shape);
   void setDirection(QTimeLine* theWrappedObject, QTimeLine::Direction  direction);
   void setDuration(QTimeLine* theWrappedObject, int  duration);
   void setEasingCurve(QTimeLine* theWrappedObject, const QEasingCurve&  curve);
   void setEndFrame(QTimeLine* theWrappedObject, int  frame);
   void setFrameRange(QTimeLine* theWrappedObject, int  startFrame, int  endFrame);
   void setLoopCount(QTimeLine* theWrappedObject, int  count);
   void setStartFrame(QTimeLine* theWrappedObject, int  frame);
   void setUpdateInterval(QTimeLine* theWrappedObject, int  interval);
   int  startFrame(QTimeLine* theWrappedObject) const;
   QTimeLine::State  state(QTimeLine* theWrappedObject) const;
   void py_q_timerEvent(QTimeLine* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QTimeLine*)theWrappedObject)->py_q_timerEvent(event));}
   int  updateInterval(QTimeLine* theWrappedObject) const;
   qreal  valueForTime(QTimeLine* theWrappedObject, int  msec) const;
   qreal  py_q_valueForTime(QTimeLine* theWrappedObject, int  msec) const{  return (((PythonQtPublicPromoter_QTimeLine*)theWrappedObject)->py_q_valueForTime(msec));}
};





class PythonQtWrapper_QTimeZone : public QObject
{ Q_OBJECT
public:
Q_ENUMS(NameType TimeType )
enum NameType{
  DefaultName = QTimeZone::DefaultName,   LongName = QTimeZone::LongName,   ShortName = QTimeZone::ShortName,   OffsetName = QTimeZone::OffsetName};
enum TimeType{
  StandardTime = QTimeZone::StandardTime,   DaylightTime = QTimeZone::DaylightTime,   GenericTime = QTimeZone::GenericTime};
public slots:
QTimeZone* new_QTimeZone();
QTimeZone* new_QTimeZone(const QByteArray&  ianaId);
QTimeZone* new_QTimeZone(const QByteArray&  zoneId, int  offsetSeconds, const QString&  name, const QString&  abbreviation, QLocale::Country  country = QLocale::AnyCountry, const QString&  comment = QString());
QTimeZone* new_QTimeZone(const QTimeZone&  other);
QTimeZone* new_QTimeZone(int  offsetSeconds);
void delete_QTimeZone(QTimeZone* obj) { delete obj; }
   QString  abbreviation(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   QList<QByteArray >  static_QTimeZone_availableTimeZoneIds();
   QList<QByteArray >  static_QTimeZone_availableTimeZoneIds(QLocale::Country  country);
   QList<QByteArray >  static_QTimeZone_availableTimeZoneIds(int  offsetSeconds);
   QString  comment(QTimeZone* theWrappedObject) const;
   QLocale::Country  country(QTimeZone* theWrappedObject) const;
   int  daylightTimeOffset(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   QString  displayName(QTimeZone* theWrappedObject, QTimeZone::TimeType  timeType, QTimeZone::NameType  nameType = QTimeZone::DefaultName, const QLocale&  locale = QLocale()) const;
   QString  displayName(QTimeZone* theWrappedObject, const QDateTime&  atDateTime, QTimeZone::NameType  nameType = QTimeZone::DefaultName, const QLocale&  locale = QLocale()) const;
   bool  hasDaylightTime(QTimeZone* theWrappedObject) const;
   bool  hasTransitions(QTimeZone* theWrappedObject) const;
   QByteArray  static_QTimeZone_ianaIdToWindowsId(const QByteArray&  ianaId);
   QByteArray  id(QTimeZone* theWrappedObject) const;
   bool  isDaylightTime(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   bool  static_QTimeZone_isTimeZoneIdAvailable(const QByteArray&  ianaId);
   bool  isValid(QTimeZone* theWrappedObject) const;
   int  offsetFromUtc(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   bool  __ne__(QTimeZone* theWrappedObject, const QTimeZone&  other) const;
   void writeTo(QTimeZone* theWrappedObject, QDataStream&  ds);
   QTimeZone*  operator_assign(QTimeZone* theWrappedObject, const QTimeZone&  other);
   bool  __eq__(QTimeZone* theWrappedObject, const QTimeZone&  other) const;
   void readFrom(QTimeZone* theWrappedObject, QDataStream&  ds);
   int  standardTimeOffset(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   void swap(QTimeZone* theWrappedObject, QTimeZone&  other);
   QTimeZone  static_QTimeZone_systemTimeZone();
   QByteArray  static_QTimeZone_systemTimeZoneId();
   QTimeZone  static_QTimeZone_utc();
   QByteArray  static_QTimeZone_windowsIdToDefaultIanaId(const QByteArray&  windowsId);
   QByteArray  static_QTimeZone_windowsIdToDefaultIanaId(const QByteArray&  windowsId, QLocale::Country  country);
   QList<QByteArray >  static_QTimeZone_windowsIdToIanaIds(const QByteArray&  windowsId);
   QList<QByteArray >  static_QTimeZone_windowsIdToIanaIds(const QByteArray&  windowsId, QLocale::Country  country);
    QString py_toString(QTimeZone*);
    bool __nonzero__(QTimeZone* obj) { return obj->isValid(); }
};


