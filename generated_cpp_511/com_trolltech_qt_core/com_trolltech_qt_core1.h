#include <PythonQt.h>
#include <QDateTime>
#include <QDir>
#include <QObject>
#include <QStringList>
#include <QUrl>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractstate.h>
#include <qabstracttransition.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdir.h>
#include <qevent.h>
#include <qfile.h>
#include <qfiledevice.h>
#include <qfileinfo.h>
#include <qfileselector.h>
#include <qfilesystemwatcher.h>
#include <qfinalstate.h>
#include <qhistorystate.h>
#include <qidentityproxymodel.h>
#include <qiodevice.h>
#include <qitemselectionmodel.h>
#include <qjsonarray.h>
#include <qjsondocument.h>
#include <qjsonobject.h>
#include <qjsonvalue.h>
#include <qlibrary.h>
#include <qlibraryinfo.h>
#include <qlockfile.h>
#include <qlogging.h>
#include <qmargins.h>
#include <qmessageauthenticationcode.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qmimedata.h>
#include <qmimedatabase.h>
#include <qmimetype.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qvector.h>



class PythonQtShell_QFile : public QFile
{
public:
    PythonQtShell_QFile():QFile(),_wrapper(NULL) {};
    PythonQtShell_QFile(QObject*  parent):QFile(parent),_wrapper(NULL) {};
    PythonQtShell_QFile(const QString&  name):QFile(name),_wrapper(NULL) {};
    PythonQtShell_QFile(const QString&  name, QObject*  parent):QFile(name, parent),_wrapper(NULL) {};

   ~PythonQtShell_QFile();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  event);
virtual void close();
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

class PythonQtPublicPromoter_QFile : public QFile
{ public:
inline QString  py_q_fileName() const { return QFile::fileName(); }
inline bool  py_q_open(QIODevice::OpenMode  flags) { return QFile::open(flags); }
inline QFileDevice::Permissions  py_q_permissions() const { return QFile::permissions(); }
inline bool  py_q_resize(qint64  sz) { return QFile::resize(sz); }
inline bool  py_q_setPermissions(QFileDevice::Permissions  permissionSpec) { return QFile::setPermissions(permissionSpec); }
inline qint64  py_q_size() const { return QFile::size(); }
};

class PythonQtWrapper_QFile : public QObject
{ Q_OBJECT
public:
public slots:
QFile* new_QFile();
QFile* new_QFile(QObject*  parent);
QFile* new_QFile(const QString&  name);
QFile* new_QFile(const QString&  name, QObject*  parent);
void delete_QFile(QFile* obj) { delete obj; } 
   bool  static_QFile_copy(const QString&  fileName, const QString&  newName);
   bool  copy(QFile* theWrappedObject, const QString&  newName);
   QString  static_QFile_decodeName(const QByteArray&  localFileName);
   QByteArray  static_QFile_encodeName(const QString&  fileName);
   bool  exists(QFile* theWrappedObject) const;
   bool  static_QFile_exists(const QString&  fileName);
   QString  py_q_fileName(QFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_fileName());}
   bool  link(QFile* theWrappedObject, const QString&  newName);
   bool  static_QFile_link(const QString&  oldname, const QString&  newName);
   bool  py_q_open(QFile* theWrappedObject, QIODevice::OpenMode  flags){  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_open(flags));}
   bool  open(QFile* theWrappedObject, int  fd, QIODevice::OpenMode  ioFlags, QFileDevice::FileHandleFlags  handleFlags = QFileDevice::DontCloseHandle);
   QFileDevice::Permissions  py_q_permissions(QFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_permissions());}
   QFileDevice::Permissions  static_QFile_permissions(const QString&  filename);
   bool  remove(QFile* theWrappedObject);
   bool  static_QFile_remove(const QString&  fileName);
   bool  rename(QFile* theWrappedObject, const QString&  newName);
   bool  static_QFile_rename(const QString&  oldName, const QString&  newName);
   bool  static_QFile_resize(const QString&  filename, qint64  sz);
   bool  py_q_resize(QFile* theWrappedObject, qint64  sz){  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_resize(sz));}
   void setFileName(QFile* theWrappedObject, const QString&  name);
   bool  py_q_setPermissions(QFile* theWrappedObject, QFileDevice::Permissions  permissionSpec){  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_setPermissions(permissionSpec));}
   bool  static_QFile_setPermissions(const QString&  filename, QFileDevice::Permissions  permissionSpec);
   qint64  py_q_size(QFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_size());}
   QString  symLinkTarget(QFile* theWrappedObject) const;
   QString  static_QFile_symLinkTarget(const QString&  fileName);
};





class PythonQtShell_QFileDevice : public QFileDevice
{
public:
    PythonQtShell_QFileDevice():QFileDevice(),_wrapper(NULL) {};
    PythonQtShell_QFileDevice(QObject*  parent):QFileDevice(parent),_wrapper(NULL) {};

   ~PythonQtShell_QFileDevice();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  event);
virtual void close();
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QString  fileName() const;
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
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

class PythonQtPublicPromoter_QFileDevice : public QFileDevice
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return this->readLineData(data, maxlen); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QFileDevice::atEnd(); }
inline void py_q_close() { QFileDevice::close(); }
inline QString  py_q_fileName() const { return QFileDevice::fileName(); }
inline bool  py_q_isSequential() const { return QFileDevice::isSequential(); }
inline QFileDevice::Permissions  py_q_permissions() const { return QFileDevice::permissions(); }
inline qint64  py_q_pos() const { return QFileDevice::pos(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return QFileDevice::readData(data, maxlen); }
inline qint64  py_q_readLineData(char*  data, qint64  maxlen) { return QFileDevice::readLineData(data, maxlen); }
inline bool  py_q_resize(qint64  sz) { return QFileDevice::resize(sz); }
inline bool  py_q_seek(qint64  offset) { return QFileDevice::seek(offset); }
inline bool  py_q_setPermissions(QFileDevice::Permissions  permissionSpec) { return QFileDevice::setPermissions(permissionSpec); }
inline qint64  py_q_size() const { return QFileDevice::size(); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QFileDevice::writeData(data, len); }
};

class PythonQtWrapper_QFileDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FileError FileHandleFlag FileTime MemoryMapFlags Permission )
Q_FLAGS(FileHandleFlags Permissions )
enum FileError{
  NoError = QFileDevice::NoError,   ReadError = QFileDevice::ReadError,   WriteError = QFileDevice::WriteError,   FatalError = QFileDevice::FatalError,   ResourceError = QFileDevice::ResourceError,   OpenError = QFileDevice::OpenError,   AbortError = QFileDevice::AbortError,   TimeOutError = QFileDevice::TimeOutError,   UnspecifiedError = QFileDevice::UnspecifiedError,   RemoveError = QFileDevice::RemoveError,   RenameError = QFileDevice::RenameError,   PositionError = QFileDevice::PositionError,   ResizeError = QFileDevice::ResizeError,   PermissionsError = QFileDevice::PermissionsError,   CopyError = QFileDevice::CopyError};
enum FileHandleFlag{
  AutoCloseHandle = QFileDevice::AutoCloseHandle,   DontCloseHandle = QFileDevice::DontCloseHandle};
enum FileTime{
  FileAccessTime = QFileDevice::FileAccessTime,   FileBirthTime = QFileDevice::FileBirthTime,   FileMetadataChangeTime = QFileDevice::FileMetadataChangeTime,   FileModificationTime = QFileDevice::FileModificationTime};
enum MemoryMapFlags{
  NoOptions = QFileDevice::NoOptions,   MapPrivateOption = QFileDevice::MapPrivateOption};
enum Permission{
  ReadOwner = QFileDevice::ReadOwner,   WriteOwner = QFileDevice::WriteOwner,   ExeOwner = QFileDevice::ExeOwner,   ReadUser = QFileDevice::ReadUser,   WriteUser = QFileDevice::WriteUser,   ExeUser = QFileDevice::ExeUser,   ReadGroup = QFileDevice::ReadGroup,   WriteGroup = QFileDevice::WriteGroup,   ExeGroup = QFileDevice::ExeGroup,   ReadOther = QFileDevice::ReadOther,   WriteOther = QFileDevice::WriteOther,   ExeOther = QFileDevice::ExeOther};
Q_DECLARE_FLAGS(FileHandleFlags, FileHandleFlag)
Q_DECLARE_FLAGS(Permissions, Permission)
public slots:
QFileDevice* new_QFileDevice();
QFileDevice* new_QFileDevice(QObject*  parent);
void delete_QFileDevice(QFileDevice* obj) { delete obj; } 
   bool  py_q_atEnd(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_atEnd());}
   void py_q_close(QFileDevice* theWrappedObject){  (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_close());}
   QFileDevice::FileError  error(QFileDevice* theWrappedObject) const;
   QString  fileName(QFileDevice* theWrappedObject) const;
   QString  py_q_fileName(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_fileName());}
   QDateTime  fileTime(QFileDevice* theWrappedObject, QFileDevice::FileTime  time) const;
   bool  flush(QFileDevice* theWrappedObject);
   int  handle(QFileDevice* theWrappedObject) const;
   bool  py_q_isSequential(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_isSequential());}
   uchar*  map(QFileDevice* theWrappedObject, qint64  offset, qint64  size, QFileDevice::MemoryMapFlags  flags = QFileDevice::NoOptions);
   QFileDevice::Permissions  permissions(QFileDevice* theWrappedObject) const;
   QFileDevice::Permissions  py_q_permissions(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_permissions());}
   qint64  py_q_pos(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_pos());}
   qint64  py_q_readData(QFileDevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_readData(data, maxlen));}
   qint64  py_q_readLineData(QFileDevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_readLineData(data, maxlen));}
   bool  resize(QFileDevice* theWrappedObject, qint64  sz);
   bool  py_q_resize(QFileDevice* theWrappedObject, qint64  sz){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_resize(sz));}
   bool  py_q_seek(QFileDevice* theWrappedObject, qint64  offset){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_seek(offset));}
   bool  setFileTime(QFileDevice* theWrappedObject, const QDateTime&  newDate, QFileDevice::FileTime  fileTime);
   bool  setPermissions(QFileDevice* theWrappedObject, QFileDevice::Permissions  permissionSpec);
   bool  py_q_setPermissions(QFileDevice* theWrappedObject, QFileDevice::Permissions  permissionSpec){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_setPermissions(permissionSpec));}
   qint64  py_q_size(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_size());}
   bool  unmap(QFileDevice* theWrappedObject, uchar*  address);
   void unsetError(QFileDevice* theWrappedObject);
   qint64  py_q_writeData(QFileDevice* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtWrapper_QFileInfo : public QObject
{ Q_OBJECT
public:
public slots:
QFileInfo* new_QFileInfo();
QFileInfo* new_QFileInfo(const QDir&  dir, const QString&  file);
QFileInfo* new_QFileInfo(const QFile&  file);
QFileInfo* new_QFileInfo(const QFileInfo&  fileinfo);
QFileInfo* new_QFileInfo(const QString&  file);
void delete_QFileInfo(QFileInfo* obj) { delete obj; } 
   QDir  absoluteDir(QFileInfo* theWrappedObject) const;
   QString  absoluteFilePath(QFileInfo* theWrappedObject) const;
   QString  absolutePath(QFileInfo* theWrappedObject) const;
   QString  baseName(QFileInfo* theWrappedObject) const;
   QDateTime  birthTime(QFileInfo* theWrappedObject) const;
   QString  bundleName(QFileInfo* theWrappedObject) const;
   bool  caching(QFileInfo* theWrappedObject) const;
   QString  canonicalFilePath(QFileInfo* theWrappedObject) const;
   QString  canonicalPath(QFileInfo* theWrappedObject) const;
   QString  completeBaseName(QFileInfo* theWrappedObject) const;
   QString  completeSuffix(QFileInfo* theWrappedObject) const;
   QDateTime  created(QFileInfo* theWrappedObject) const;
   QDir  dir(QFileInfo* theWrappedObject) const;
   bool  exists(QFileInfo* theWrappedObject) const;
   bool  static_QFileInfo_exists(const QString&  file);
   QString  fileName(QFileInfo* theWrappedObject) const;
   QString  filePath(QFileInfo* theWrappedObject) const;
   QString  group(QFileInfo* theWrappedObject) const;
   uint  groupId(QFileInfo* theWrappedObject) const;
   bool  isAbsolute(QFileInfo* theWrappedObject) const;
   bool  isBundle(QFileInfo* theWrappedObject) const;
   bool  isDir(QFileInfo* theWrappedObject) const;
   bool  isExecutable(QFileInfo* theWrappedObject) const;
   bool  isFile(QFileInfo* theWrappedObject) const;
   bool  isHidden(QFileInfo* theWrappedObject) const;
   bool  isNativePath(QFileInfo* theWrappedObject) const;
   bool  isReadable(QFileInfo* theWrappedObject) const;
   bool  isRelative(QFileInfo* theWrappedObject) const;
   bool  isRoot(QFileInfo* theWrappedObject) const;
   bool  isSymLink(QFileInfo* theWrappedObject) const;
   bool  isWritable(QFileInfo* theWrappedObject) const;
   QDateTime  lastModified(QFileInfo* theWrappedObject) const;
   QDateTime  lastRead(QFileInfo* theWrappedObject) const;
   bool  makeAbsolute(QFileInfo* theWrappedObject);
   QDateTime  metadataChangeTime(QFileInfo* theWrappedObject) const;
   QString  owner(QFileInfo* theWrappedObject) const;
   uint  ownerId(QFileInfo* theWrappedObject) const;
   QString  path(QFileInfo* theWrappedObject) const;
   bool  permission(QFileInfo* theWrappedObject, QFile::Permissions  permissions) const;
   QFile::Permissions  permissions(QFileInfo* theWrappedObject) const;
   void refresh(QFileInfo* theWrappedObject);
   void setCaching(QFileInfo* theWrappedObject, bool  on);
   void setFile(QFileInfo* theWrappedObject, const QDir&  dir, const QString&  file);
   void setFile(QFileInfo* theWrappedObject, const QFile&  file);
   void setFile(QFileInfo* theWrappedObject, const QString&  file);
   qint64  size(QFileInfo* theWrappedObject) const;
   QString  suffix(QFileInfo* theWrappedObject) const;
   void swap(QFileInfo* theWrappedObject, QFileInfo&  other);
   QString  symLinkTarget(QFileInfo* theWrappedObject) const;
    QString py_toString(QFileInfo*);
};





class PythonQtShell_QFileSelector : public QFileSelector
{
public:
    PythonQtShell_QFileSelector(QObject*  parent = nullptr):QFileSelector(parent),_wrapper(NULL) {};

   ~PythonQtShell_QFileSelector();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QFileSelector : public QObject
{ Q_OBJECT
public:
public slots:
QFileSelector* new_QFileSelector(QObject*  parent = nullptr);
void delete_QFileSelector(QFileSelector* obj) { delete obj; } 
   QStringList  allSelectors(QFileSelector* theWrappedObject) const;
   QStringList  extraSelectors(QFileSelector* theWrappedObject) const;
   QString  select(QFileSelector* theWrappedObject, const QString&  filePath) const;
   QUrl  select(QFileSelector* theWrappedObject, const QUrl&  filePath) const;
   void setExtraSelectors(QFileSelector* theWrappedObject, const QStringList&  list);
};





class PythonQtShell_QFileSystemWatcher : public QFileSystemWatcher
{
public:
    PythonQtShell_QFileSystemWatcher(QObject*  parent = nullptr):QFileSystemWatcher(parent),_wrapper(NULL) {};
    PythonQtShell_QFileSystemWatcher(const QStringList&  paths, QObject*  parent = nullptr):QFileSystemWatcher(paths, parent),_wrapper(NULL) {};

   ~PythonQtShell_QFileSystemWatcher();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QFileSystemWatcher : public QObject
{ Q_OBJECT
public:
public slots:
QFileSystemWatcher* new_QFileSystemWatcher(QObject*  parent = nullptr);
QFileSystemWatcher* new_QFileSystemWatcher(const QStringList&  paths, QObject*  parent = nullptr);
void delete_QFileSystemWatcher(QFileSystemWatcher* obj) { delete obj; } 
   bool  addPath(QFileSystemWatcher* theWrappedObject, const QString&  file);
   QStringList  addPaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files);
   QStringList  directories(QFileSystemWatcher* theWrappedObject) const;
   QStringList  files(QFileSystemWatcher* theWrappedObject) const;
   bool  removePath(QFileSystemWatcher* theWrappedObject, const QString&  file);
   QStringList  removePaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files);
};





class PythonQtShell_QFinalState : public QFinalState
{
public:
    PythonQtShell_QFinalState(QState*  parent = nullptr):QFinalState(parent),_wrapper(NULL) {};

   ~PythonQtShell_QFinalState();

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

class PythonQtPublicPromoter_QFinalState : public QFinalState
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_onEntry(QEvent*  event) { this->onEntry(event); }
inline void promoted_onExit(QEvent*  event) { this->onExit(event); }
inline bool  py_q_event(QEvent*  e) { return QFinalState::event(e); }
inline void py_q_onEntry(QEvent*  event) { QFinalState::onEntry(event); }
inline void py_q_onExit(QEvent*  event) { QFinalState::onExit(event); }
};

class PythonQtWrapper_QFinalState : public QObject
{ Q_OBJECT
public:
public slots:
QFinalState* new_QFinalState(QState*  parent = nullptr);
void delete_QFinalState(QFinalState* obj) { delete obj; } 
   bool  py_q_event(QFinalState* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QFinalState*)theWrappedObject)->py_q_event(e));}
   void py_q_onEntry(QFinalState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QFinalState*)theWrappedObject)->py_q_onEntry(event));}
   void py_q_onExit(QFinalState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QFinalState*)theWrappedObject)->py_q_onExit(event));}
};





class PythonQtShell_QHistoryState : public QHistoryState
{
public:
    PythonQtShell_QHistoryState(QHistoryState::HistoryType  type, QState*  parent = nullptr):QHistoryState(type, parent),_wrapper(NULL) {};
    PythonQtShell_QHistoryState(QState*  parent = nullptr):QHistoryState(parent),_wrapper(NULL) {};

   ~PythonQtShell_QHistoryState();

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

class PythonQtPublicPromoter_QHistoryState : public QHistoryState
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_onEntry(QEvent*  event) { this->onEntry(event); }
inline void promoted_onExit(QEvent*  event) { this->onExit(event); }
inline bool  py_q_event(QEvent*  e) { return QHistoryState::event(e); }
inline void py_q_onEntry(QEvent*  event) { QHistoryState::onEntry(event); }
inline void py_q_onExit(QEvent*  event) { QHistoryState::onExit(event); }
};

class PythonQtWrapper_QHistoryState : public QObject
{ Q_OBJECT
public:
public slots:
QHistoryState* new_QHistoryState(QHistoryState::HistoryType  type, QState*  parent = nullptr);
QHistoryState* new_QHistoryState(QState*  parent = nullptr);
void delete_QHistoryState(QHistoryState* obj) { delete obj; } 
   QAbstractState*  defaultState(QHistoryState* theWrappedObject) const;
   QAbstractTransition*  defaultTransition(QHistoryState* theWrappedObject) const;
   bool  py_q_event(QHistoryState* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QHistoryState*)theWrappedObject)->py_q_event(e));}
   QHistoryState::HistoryType  historyType(QHistoryState* theWrappedObject) const;
   void py_q_onEntry(QHistoryState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QHistoryState*)theWrappedObject)->py_q_onEntry(event));}
   void py_q_onExit(QHistoryState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QHistoryState*)theWrappedObject)->py_q_onExit(event));}
   void setDefaultState(QHistoryState* theWrappedObject, QAbstractState*  state);
   void setDefaultTransition(QHistoryState* theWrappedObject, QAbstractTransition*  transition);
   void setHistoryType(QHistoryState* theWrappedObject, QHistoryState::HistoryType  type);
};





class PythonQtShell_QIODevice : public QIODevice
{
public:
    PythonQtShell_QIODevice():QIODevice(),_wrapper(NULL) {};
    PythonQtShell_QIODevice(QObject*  parent):QIODevice(parent),_wrapper(NULL) {};

   ~PythonQtShell_QIODevice();

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
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  event);
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIODevice : public QIODevice
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return this->readLineData(data, maxlen); }
inline void promoted_setErrorString(const QString&  errorString) { this->setErrorString(errorString); }
inline void promoted_setOpenMode(QIODevice::OpenMode  openMode) { this->setOpenMode(openMode); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QIODevice::atEnd(); }
inline qint64  py_q_bytesAvailable() const { return QIODevice::bytesAvailable(); }
inline qint64  py_q_bytesToWrite() const { return QIODevice::bytesToWrite(); }
inline bool  py_q_canReadLine() const { return QIODevice::canReadLine(); }
inline void py_q_close() { QIODevice::close(); }
inline bool  py_q_isSequential() const { return QIODevice::isSequential(); }
inline bool  py_q_open(QIODevice::OpenMode  mode) { return QIODevice::open(mode); }
inline qint64  py_q_pos() const { return QIODevice::pos(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  py_q_readLineData(char*  data, qint64  maxlen) { return QIODevice::readLineData(data, maxlen); }
inline bool  py_q_reset() { return QIODevice::reset(); }
inline bool  py_q_seek(qint64  pos) { return QIODevice::seek(pos); }
inline qint64  py_q_size() const { return QIODevice::size(); }
inline bool  py_q_waitForBytesWritten(int  msecs) { return QIODevice::waitForBytesWritten(msecs); }
inline bool  py_q_waitForReadyRead(int  msecs) { return QIODevice::waitForReadyRead(msecs); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
};

class PythonQtWrapper_QIODevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OpenModeFlag )
Q_FLAGS(OpenMode )
enum OpenModeFlag{
  NotOpen = QIODevice::NotOpen,   ReadOnly = QIODevice::ReadOnly,   WriteOnly = QIODevice::WriteOnly,   ReadWrite = QIODevice::ReadWrite,   Append = QIODevice::Append,   Truncate = QIODevice::Truncate,   Text = QIODevice::Text,   Unbuffered = QIODevice::Unbuffered,   NewOnly = QIODevice::NewOnly,   ExistingOnly = QIODevice::ExistingOnly};
Q_DECLARE_FLAGS(OpenMode, OpenModeFlag)
public slots:
QIODevice* new_QIODevice();
QIODevice* new_QIODevice(QObject*  parent);
void delete_QIODevice(QIODevice* obj) { delete obj; } 
   bool  atEnd(QIODevice* theWrappedObject) const;
   bool  py_q_atEnd(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_atEnd());}
   qint64  bytesAvailable(QIODevice* theWrappedObject) const;
   qint64  py_q_bytesAvailable(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_bytesAvailable());}
   qint64  bytesToWrite(QIODevice* theWrappedObject) const;
   qint64  py_q_bytesToWrite(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_bytesToWrite());}
   bool  canReadLine(QIODevice* theWrappedObject) const;
   bool  py_q_canReadLine(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_canReadLine());}
   void close(QIODevice* theWrappedObject);
   void py_q_close(QIODevice* theWrappedObject){  (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_close());}
   void commitTransaction(QIODevice* theWrappedObject);
   int  currentReadChannel(QIODevice* theWrappedObject) const;
   int  currentWriteChannel(QIODevice* theWrappedObject) const;
   QString  errorString(QIODevice* theWrappedObject) const;
   bool  getChar(QIODevice* theWrappedObject, char*  c);
   bool  isOpen(QIODevice* theWrappedObject) const;
   bool  isReadable(QIODevice* theWrappedObject) const;
   bool  isSequential(QIODevice* theWrappedObject) const;
   bool  py_q_isSequential(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_isSequential());}
   bool  isTextModeEnabled(QIODevice* theWrappedObject) const;
   bool  isTransactionStarted(QIODevice* theWrappedObject) const;
   bool  isWritable(QIODevice* theWrappedObject) const;
   bool  open(QIODevice* theWrappedObject, QIODevice::OpenMode  mode);
   bool  py_q_open(QIODevice* theWrappedObject, QIODevice::OpenMode  mode){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_open(mode));}
   QIODevice::OpenMode  openMode(QIODevice* theWrappedObject) const;
   QByteArray  peek(QIODevice* theWrappedObject, qint64  maxlen);
   qint64  pos(QIODevice* theWrappedObject) const;
   qint64  py_q_pos(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_pos());}
   bool  putChar(QIODevice* theWrappedObject, char  c);
   QByteArray  read(QIODevice* theWrappedObject, qint64  maxlen);
   QByteArray  readAll(QIODevice* theWrappedObject);
   int  readChannelCount(QIODevice* theWrappedObject) const;
   qint64  readData(QIODevice* theWrappedObject, char*  data, qint64  maxlen);
   qint64  py_q_readData(QIODevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_readData(data, maxlen));}
   QByteArray  readLine(QIODevice* theWrappedObject, qint64  maxlen = 0);
   qint64  readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen);
   qint64  py_q_readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_readLineData(data, maxlen));}
   bool  reset(QIODevice* theWrappedObject);
   bool  py_q_reset(QIODevice* theWrappedObject){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_reset());}
   void rollbackTransaction(QIODevice* theWrappedObject);
   bool  seek(QIODevice* theWrappedObject, qint64  pos);
   bool  py_q_seek(QIODevice* theWrappedObject, qint64  pos){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_seek(pos));}
   void setCurrentReadChannel(QIODevice* theWrappedObject, int  channel);
   void setCurrentWriteChannel(QIODevice* theWrappedObject, int  channel);
   void setErrorString(QIODevice* theWrappedObject, const QString&  errorString);
   void setOpenMode(QIODevice* theWrappedObject, QIODevice::OpenMode  openMode);
   void setTextModeEnabled(QIODevice* theWrappedObject, bool  enabled);
   qint64  size(QIODevice* theWrappedObject) const;
   qint64  py_q_size(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_size());}
   qint64  skip(QIODevice* theWrappedObject, qint64  maxSize);
   void startTransaction(QIODevice* theWrappedObject);
   void ungetChar(QIODevice* theWrappedObject, char  c);
   bool  waitForBytesWritten(QIODevice* theWrappedObject, int  msecs);
   bool  py_q_waitForBytesWritten(QIODevice* theWrappedObject, int  msecs){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_waitForBytesWritten(msecs));}
   bool  waitForReadyRead(QIODevice* theWrappedObject, int  msecs);
   bool  py_q_waitForReadyRead(QIODevice* theWrappedObject, int  msecs){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_waitForReadyRead(msecs));}
   qint64  write(QIODevice* theWrappedObject, const QByteArray&  data);
   qint64  write(QIODevice* theWrappedObject, const char*  data);
   int  writeChannelCount(QIODevice* theWrappedObject) const;
   qint64  writeData(QIODevice* theWrappedObject, const char*  data, qint64  len);
   qint64  py_q_writeData(QIODevice* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtShell_QIdentityProxyModel : public QIdentityProxyModel
{
public:
    PythonQtShell_QIdentityProxyModel(QObject*  parent = nullptr):QIdentityProxyModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QIdentityProxyModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual void childEvent(QChildEvent*  event);
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual void customEvent(QEvent*  event);
virtual QVariant  data(const QModelIndex&  proxyIndex, int  role = Qt::DisplayRole) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void fetchMore(const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QModelIndex  mapFromSource(const QModelIndex&  sourceIndex) const;
virtual QItemSelection  mapSelectionFromSource(const QItemSelection&  selection) const;
virtual QItemSelection  mapSelectionToSource(const QItemSelection&  selection) const;
virtual QModelIndex  mapToSource(const QModelIndex&  proxyIndex) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual QStringList  mimeTypes() const;
virtual bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual QModelIndex  parent(const QModelIndex&  child) const;
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual void revert();
virtual QHash<int , QByteArray >  roleNames() const;
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual void setSourceModel(QAbstractItemModel*  sourceModel);
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;
virtual void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDragActions() const;
virtual Qt::DropActions  supportedDropActions() const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIdentityProxyModel : public QIdentityProxyModel
{ public:
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QIdentityProxyModel::columnCount(parent); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QIdentityProxyModel::dropMimeData(data, action, row, column, parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QIdentityProxyModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QIdentityProxyModel::index(row, column, parent); }
inline bool  py_q_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::insertColumns(column, count, parent); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::insertRows(row, count, parent); }
inline QModelIndex  py_q_mapFromSource(const QModelIndex&  sourceIndex) const { return QIdentityProxyModel::mapFromSource(sourceIndex); }
inline QItemSelection  py_q_mapSelectionFromSource(const QItemSelection&  selection) const { return QIdentityProxyModel::mapSelectionFromSource(selection); }
inline QItemSelection  py_q_mapSelectionToSource(const QItemSelection&  selection) const { return QIdentityProxyModel::mapSelectionToSource(selection); }
inline QModelIndex  py_q_mapToSource(const QModelIndex&  proxyIndex) const { return QIdentityProxyModel::mapToSource(proxyIndex); }
inline QList<QModelIndex >  py_q_match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { return QIdentityProxyModel::match(start, role, value, hits, flags); }
inline QModelIndex  py_q_parent(const QModelIndex&  child) const { return QIdentityProxyModel::parent(child); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::removeColumns(column, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::removeRows(row, count, parent); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QIdentityProxyModel::rowCount(parent); }
inline void py_q_setSourceModel(QAbstractItemModel*  sourceModel) { QIdentityProxyModel::setSourceModel(sourceModel); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QIdentityProxyModel::sibling(row, column, idx); }
};

class PythonQtWrapper_QIdentityProxyModel : public QObject
{ Q_OBJECT
public:
public slots:
QIdentityProxyModel* new_QIdentityProxyModel(QObject*  parent = nullptr);
void delete_QIdentityProxyModel(QIdentityProxyModel* obj) { delete obj; } 
   int  py_q_columnCount(QIdentityProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_columnCount(parent));}
   bool  py_q_dropMimeData(QIdentityProxyModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   QVariant  py_q_headerData(QIdentityProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QModelIndex  py_q_index(QIdentityProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_index(row, column, parent));}
   bool  py_q_insertColumns(QIdentityProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_insertColumns(column, count, parent));}
   bool  py_q_insertRows(QIdentityProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   QModelIndex  py_q_mapFromSource(QIdentityProxyModel* theWrappedObject, const QModelIndex&  sourceIndex) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_mapFromSource(sourceIndex));}
   QItemSelection  py_q_mapSelectionFromSource(QIdentityProxyModel* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_mapSelectionFromSource(selection));}
   QItemSelection  py_q_mapSelectionToSource(QIdentityProxyModel* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_mapSelectionToSource(selection));}
   QModelIndex  py_q_mapToSource(QIdentityProxyModel* theWrappedObject, const QModelIndex&  proxyIndex) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_mapToSource(proxyIndex));}
   QList<QModelIndex >  py_q_match(QIdentityProxyModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_match(start, role, value, hits, flags));}
   QModelIndex  py_q_parent(QIdentityProxyModel* theWrappedObject, const QModelIndex&  child) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_parent(child));}
   bool  py_q_removeColumns(QIdentityProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   bool  py_q_removeRows(QIdentityProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   int  py_q_rowCount(QIdentityProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_rowCount(parent));}
   void py_q_setSourceModel(QIdentityProxyModel* theWrappedObject, QAbstractItemModel*  sourceModel){  (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_setSourceModel(sourceModel));}
   QModelIndex  py_q_sibling(QIdentityProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
};





class PythonQtWrapper_QJsonArray : public QObject
{ Q_OBJECT
public:
public slots:
QJsonArray* new_QJsonArray();
QJsonArray* new_QJsonArray(const QJsonArray&  other);
void delete_QJsonArray(QJsonArray* obj) { delete obj; } 
   void append(QJsonArray* theWrappedObject, const QJsonValue&  value);
   QJsonValue  at(QJsonArray* theWrappedObject, int  i) const;
   bool  contains(QJsonArray* theWrappedObject, const QJsonValue&  element) const;
   int  count(QJsonArray* theWrappedObject) const;
   bool  empty(QJsonArray* theWrappedObject) const;
   QJsonValue  first(QJsonArray* theWrappedObject) const;
   QJsonArray  static_QJsonArray_fromStringList(const QStringList&  list);
   QJsonArray  static_QJsonArray_fromVariantList(const QList<QVariant >&  list);
   void insert(QJsonArray* theWrappedObject, int  i, const QJsonValue&  value);
   bool  isEmpty(QJsonArray* theWrappedObject) const;
   QJsonValue  last(QJsonArray* theWrappedObject) const;
   bool  __ne__(QJsonArray* theWrappedObject, const QJsonArray&  other) const;
   QJsonArray  __add__(QJsonArray* theWrappedObject, const QJsonValue&  v) const;
   QJsonArray*  __iadd__(QJsonArray* theWrappedObject, const QJsonValue&  v);
   QJsonArray*  __lshift__(QJsonArray* theWrappedObject, const QJsonValue&  v);
   QJsonArray*  operator_assign(QJsonArray* theWrappedObject, const QJsonArray&  other);
   bool  __eq__(QJsonArray* theWrappedObject, const QJsonArray&  other) const;
   QJsonValue  operator_subscript(QJsonArray* theWrappedObject, int  i) const;
   void pop_back(QJsonArray* theWrappedObject);
   void pop_front(QJsonArray* theWrappedObject);
   void prepend(QJsonArray* theWrappedObject, const QJsonValue&  value);
   void push_back(QJsonArray* theWrappedObject, const QJsonValue&  t);
   void push_front(QJsonArray* theWrappedObject, const QJsonValue&  t);
   void removeAt(QJsonArray* theWrappedObject, int  i);
   void removeFirst(QJsonArray* theWrappedObject);
   void removeLast(QJsonArray* theWrappedObject);
   void replace(QJsonArray* theWrappedObject, int  i, const QJsonValue&  value);
   int  size(QJsonArray* theWrappedObject) const;
   void swap(QJsonArray* theWrappedObject, QJsonArray&  other);
   QJsonValue  takeAt(QJsonArray* theWrappedObject, int  i);
   QList<QVariant >  toVariantList(QJsonArray* theWrappedObject) const;
    QString py_toString(QJsonArray*);
    bool __nonzero__(QJsonArray* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QJsonDocument : public QJsonDocument
{
public:
    PythonQtShell_QJsonDocument():QJsonDocument(),_wrapper(NULL) {};
    PythonQtShell_QJsonDocument(const QJsonArray&  array):QJsonDocument(array),_wrapper(NULL) {};
    PythonQtShell_QJsonDocument(const QJsonDocument&  other):QJsonDocument(other),_wrapper(NULL) {};
    PythonQtShell_QJsonDocument(const QJsonObject&  object):QJsonDocument(object),_wrapper(NULL) {};

   ~PythonQtShell_QJsonDocument();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QJsonDocument : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DataValidation JsonFormat )
enum DataValidation{
  Validate = QJsonDocument::Validate,   BypassValidation = QJsonDocument::BypassValidation};
enum JsonFormat{
  Indented = QJsonDocument::Indented,   Compact = QJsonDocument::Compact};
public slots:
QJsonDocument* new_QJsonDocument();
QJsonDocument* new_QJsonDocument(const QJsonArray&  array);
QJsonDocument* new_QJsonDocument(const QJsonDocument&  other);
QJsonDocument* new_QJsonDocument(const QJsonObject&  object);
void delete_QJsonDocument(QJsonDocument* obj) { delete obj; } 
   QJsonArray  array(QJsonDocument* theWrappedObject) const;
   QJsonDocument  static_QJsonDocument_fromBinaryData(const QByteArray&  data, QJsonDocument::DataValidation  validation = QJsonDocument::Validate);
   QJsonDocument  static_QJsonDocument_fromJson(const QByteArray&  json, QJsonParseError*  error = nullptr);
   QJsonDocument  static_QJsonDocument_fromRawData(const char*  data, int  size, QJsonDocument::DataValidation  validation = QJsonDocument::Validate);
   QJsonDocument  static_QJsonDocument_fromVariant(const QVariant&  variant);
   bool  isArray(QJsonDocument* theWrappedObject) const;
   bool  isEmpty(QJsonDocument* theWrappedObject) const;
   bool  isNull(QJsonDocument* theWrappedObject) const;
   bool  isObject(QJsonDocument* theWrappedObject) const;
   QJsonObject  object(QJsonDocument* theWrappedObject) const;
   bool  __ne__(QJsonDocument* theWrappedObject, const QJsonDocument&  other) const;
   QJsonDocument*  operator_assign(QJsonDocument* theWrappedObject, const QJsonDocument&  other);
   bool  __eq__(QJsonDocument* theWrappedObject, const QJsonDocument&  other) const;
   const QJsonValue  operator_subscript(QJsonDocument* theWrappedObject, QLatin1String  key) const;
   const QJsonValue  operator_subscript(QJsonDocument* theWrappedObject, const QString&  key) const;
   const QJsonValue  operator_subscript(QJsonDocument* theWrappedObject, int  i) const;
   const char*  rawData(QJsonDocument* theWrappedObject, int*  size) const;
   void setArray(QJsonDocument* theWrappedObject, const QJsonArray&  array);
   void setObject(QJsonDocument* theWrappedObject, const QJsonObject&  object);
   void swap(QJsonDocument* theWrappedObject, QJsonDocument&  other);
   QByteArray  toBinaryData(QJsonDocument* theWrappedObject) const;
   QByteArray  toJson(QJsonDocument* theWrappedObject) const;
   QByteArray  toJson(QJsonDocument* theWrappedObject, QJsonDocument::JsonFormat  format) const;
   QVariant  toVariant(QJsonDocument* theWrappedObject) const;
    QString py_toString(QJsonDocument*);
    bool __nonzero__(QJsonDocument* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QJsonObject : public QObject
{ Q_OBJECT
public:
public slots:
QJsonObject* new_QJsonObject();
QJsonObject* new_QJsonObject(const QJsonObject&  other);
void delete_QJsonObject(QJsonObject* obj) { delete obj; } 
   bool  contains(QJsonObject* theWrappedObject, QLatin1String  key) const;
   bool  contains(QJsonObject* theWrappedObject, const QString&  key) const;
   int  count(QJsonObject* theWrappedObject) const;
   bool  empty(QJsonObject* theWrappedObject) const;
   QJsonObject  static_QJsonObject_fromVariantHash(const QHash<QString , QVariant >&  map);
   QJsonObject  static_QJsonObject_fromVariantMap(const QMap<QString , QVariant >&  map);
   bool  isEmpty(QJsonObject* theWrappedObject) const;
   QStringList  keys(QJsonObject* theWrappedObject) const;
   int  length(QJsonObject* theWrappedObject) const;
   bool  __ne__(QJsonObject* theWrappedObject, const QJsonObject&  other) const;
   QJsonObject*  operator_assign(QJsonObject* theWrappedObject, const QJsonObject&  other);
   bool  __eq__(QJsonObject* theWrappedObject, const QJsonObject&  other) const;
   QJsonValue  operator_subscript(QJsonObject* theWrappedObject, QLatin1String  key) const;
   QJsonValue  operator_subscript(QJsonObject* theWrappedObject, const QString&  key) const;
   void remove(QJsonObject* theWrappedObject, const QString&  key);
   int  size(QJsonObject* theWrappedObject) const;
   void swap(QJsonObject* theWrappedObject, QJsonObject&  other);
   QJsonValue  take(QJsonObject* theWrappedObject, const QString&  key);
   QHash<QString , QVariant >  toVariantHash(QJsonObject* theWrappedObject) const;
   QMap<QString , QVariant >  toVariantMap(QJsonObject* theWrappedObject) const;
   QJsonValue  value(QJsonObject* theWrappedObject, QLatin1String  key) const;
   QJsonValue  value(QJsonObject* theWrappedObject, const QString&  key) const;
    QString py_toString(QJsonObject*);
    bool __nonzero__(QJsonObject* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QJsonParseError : public QJsonParseError
{
public:
    PythonQtShell_QJsonParseError():QJsonParseError(),_wrapper(NULL) {};

   ~PythonQtShell_QJsonParseError();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QJsonParseError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ParseError )
enum ParseError{
  NoError = QJsonParseError::NoError,   UnterminatedObject = QJsonParseError::UnterminatedObject,   MissingNameSeparator = QJsonParseError::MissingNameSeparator,   UnterminatedArray = QJsonParseError::UnterminatedArray,   MissingValueSeparator = QJsonParseError::MissingValueSeparator,   IllegalValue = QJsonParseError::IllegalValue,   TerminationByNumber = QJsonParseError::TerminationByNumber,   IllegalNumber = QJsonParseError::IllegalNumber,   IllegalEscapeSequence = QJsonParseError::IllegalEscapeSequence,   IllegalUTF8String = QJsonParseError::IllegalUTF8String,   UnterminatedString = QJsonParseError::UnterminatedString,   MissingObject = QJsonParseError::MissingObject,   DeepNesting = QJsonParseError::DeepNesting,   DocumentTooLarge = QJsonParseError::DocumentTooLarge,   GarbageAtEnd = QJsonParseError::GarbageAtEnd};
public slots:
QJsonParseError* new_QJsonParseError();
void delete_QJsonParseError(QJsonParseError* obj) { delete obj; } 
   QString  errorString(QJsonParseError* theWrappedObject) const;
void py_set_error(QJsonParseError* theWrappedObject, QJsonParseError::ParseError  error){ theWrappedObject->error = error; }
QJsonParseError::ParseError  py_get_error(QJsonParseError* theWrappedObject){ return theWrappedObject->error; }
void py_set_offset(QJsonParseError* theWrappedObject, int  offset){ theWrappedObject->offset = offset; }
int  py_get_offset(QJsonParseError* theWrappedObject){ return theWrappedObject->offset; }
};





class PythonQtWrapper_QJsonValue : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Null = QJsonValue::Null,   Bool = QJsonValue::Bool,   Double = QJsonValue::Double,   String = QJsonValue::String,   Array = QJsonValue::Array,   Object = QJsonValue::Object,   Undefined = QJsonValue::Undefined};
public slots:
QJsonValue* new_QJsonValue(QJsonValue::Type  arg__1 = QJsonValue::Null);
QJsonValue* new_QJsonValue(QLatin1String  s);
QJsonValue* new_QJsonValue(bool  b);
QJsonValue* new_QJsonValue(const QJsonArray&  a);
QJsonValue* new_QJsonValue(const QJsonObject&  o);
QJsonValue* new_QJsonValue(const QJsonValue&  other);
QJsonValue* new_QJsonValue(const QString&  s);
QJsonValue* new_QJsonValue(const char*  s);
QJsonValue* new_QJsonValue(double  n);
QJsonValue* new_QJsonValue(int  n);
QJsonValue* new_QJsonValue(qint64  n);
void delete_QJsonValue(QJsonValue* obj) { delete obj; } 
   QJsonValue  static_QJsonValue_fromVariant(const QVariant&  variant);
   bool  isArray(QJsonValue* theWrappedObject) const;
   bool  isBool(QJsonValue* theWrappedObject) const;
   bool  isDouble(QJsonValue* theWrappedObject) const;
   bool  isNull(QJsonValue* theWrappedObject) const;
   bool  isObject(QJsonValue* theWrappedObject) const;
   bool  isString(QJsonValue* theWrappedObject) const;
   bool  isUndefined(QJsonValue* theWrappedObject) const;
   bool  __ne__(QJsonValue* theWrappedObject, const QJsonValue&  other) const;
   QJsonValue*  operator_assign(QJsonValue* theWrappedObject, const QJsonValue&  other);
   bool  __eq__(QJsonValue* theWrappedObject, const QJsonValue&  other) const;
   const QJsonValue  operator_subscript(QJsonValue* theWrappedObject, QLatin1String  key) const;
   const QJsonValue  operator_subscript(QJsonValue* theWrappedObject, const QString&  key) const;
   const QJsonValue  operator_subscript(QJsonValue* theWrappedObject, int  i) const;
   void swap(QJsonValue* theWrappedObject, QJsonValue&  other);
   QJsonArray  toArray(QJsonValue* theWrappedObject) const;
   QJsonArray  toArray(QJsonValue* theWrappedObject, const QJsonArray&  defaultValue) const;
   bool  toBool(QJsonValue* theWrappedObject, bool  defaultValue = false) const;
   double  toDouble(QJsonValue* theWrappedObject, double  defaultValue = 0) const;
   int  toInt(QJsonValue* theWrappedObject, int  defaultValue = 0) const;
   QJsonObject  toObject(QJsonValue* theWrappedObject) const;
   QJsonObject  toObject(QJsonValue* theWrappedObject, const QJsonObject&  defaultValue) const;
   QString  toString(QJsonValue* theWrappedObject) const;
   QString  toString(QJsonValue* theWrappedObject, const QString&  defaultValue) const;
   QVariant  toVariant(QJsonValue* theWrappedObject) const;
   QJsonValue::Type  type(QJsonValue* theWrappedObject) const;
    QString py_toString(QJsonValue*);
    bool __nonzero__(QJsonValue* obj) { return !obj->isNull(); }
};





class PythonQtShell_QLibrary : public QLibrary
{
public:
    PythonQtShell_QLibrary(QObject*  parent = nullptr):QLibrary(parent),_wrapper(NULL) {};
    PythonQtShell_QLibrary(const QString&  fileName, QObject*  parent = nullptr):QLibrary(fileName, parent),_wrapper(NULL) {};
    PythonQtShell_QLibrary(const QString&  fileName, const QString&  version, QObject*  parent = nullptr):QLibrary(fileName, version, parent),_wrapper(NULL) {};
    PythonQtShell_QLibrary(const QString&  fileName, int  verNum, QObject*  parent = nullptr):QLibrary(fileName, verNum, parent),_wrapper(NULL) {};

   ~PythonQtShell_QLibrary();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QLibrary : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LoadHint )
Q_FLAGS(LoadHints )
enum LoadHint{
  ResolveAllSymbolsHint = QLibrary::ResolveAllSymbolsHint,   ExportExternalSymbolsHint = QLibrary::ExportExternalSymbolsHint,   LoadArchiveMemberHint = QLibrary::LoadArchiveMemberHint,   PreventUnloadHint = QLibrary::PreventUnloadHint,   DeepBindHint = QLibrary::DeepBindHint};
Q_DECLARE_FLAGS(LoadHints, LoadHint)
public slots:
QLibrary* new_QLibrary(QObject*  parent = nullptr);
QLibrary* new_QLibrary(const QString&  fileName, QObject*  parent = nullptr);
QLibrary* new_QLibrary(const QString&  fileName, const QString&  version, QObject*  parent = nullptr);
QLibrary* new_QLibrary(const QString&  fileName, int  verNum, QObject*  parent = nullptr);
void delete_QLibrary(QLibrary* obj) { delete obj; } 
   QString  errorString(QLibrary* theWrappedObject) const;
   QString  fileName(QLibrary* theWrappedObject) const;
   bool  static_QLibrary_isLibrary(const QString&  fileName);
   bool  isLoaded(QLibrary* theWrappedObject) const;
   bool  load(QLibrary* theWrappedObject);
   QLibrary::LoadHints  loadHints(QLibrary* theWrappedObject) const;
   void setFileName(QLibrary* theWrappedObject, const QString&  fileName);
   void setFileNameAndVersion(QLibrary* theWrappedObject, const QString&  fileName, const QString&  version);
   void setFileNameAndVersion(QLibrary* theWrappedObject, const QString&  fileName, int  verNum);
   void setLoadHints(QLibrary* theWrappedObject, QLibrary::LoadHints  hints);
   bool  unload(QLibrary* theWrappedObject);
};





class PythonQtWrapper_QLibraryInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LibraryLocation )
enum LibraryLocation{
  PrefixPath = QLibraryInfo::PrefixPath,   DocumentationPath = QLibraryInfo::DocumentationPath,   HeadersPath = QLibraryInfo::HeadersPath,   LibrariesPath = QLibraryInfo::LibrariesPath,   LibraryExecutablesPath = QLibraryInfo::LibraryExecutablesPath,   BinariesPath = QLibraryInfo::BinariesPath,   PluginsPath = QLibraryInfo::PluginsPath,   ImportsPath = QLibraryInfo::ImportsPath,   Qml2ImportsPath = QLibraryInfo::Qml2ImportsPath,   ArchDataPath = QLibraryInfo::ArchDataPath,   DataPath = QLibraryInfo::DataPath,   TranslationsPath = QLibraryInfo::TranslationsPath,   ExamplesPath = QLibraryInfo::ExamplesPath,   TestsPath = QLibraryInfo::TestsPath,   SettingsPath = QLibraryInfo::SettingsPath};
public slots:
void delete_QLibraryInfo(QLibraryInfo* obj) { delete obj; } 
   const char*  static_QLibraryInfo_build();
   QDate  static_QLibraryInfo_buildDate();
   bool  static_QLibraryInfo_isDebugBuild();
   QString  static_QLibraryInfo_licensedProducts();
   QString  static_QLibraryInfo_licensee();
   QString  static_QLibraryInfo_location(QLibraryInfo::LibraryLocation  arg__1);
   QStringList  static_QLibraryInfo_platformPluginArguments(const QString&  platformName);
};





class PythonQtWrapper_QLockFile : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LockError )
enum LockError{
  NoError = QLockFile::NoError,   LockFailedError = QLockFile::LockFailedError,   PermissionError = QLockFile::PermissionError,   UnknownError = QLockFile::UnknownError};
public slots:
QLockFile* new_QLockFile(const QString&  fileName);
void delete_QLockFile(QLockFile* obj) { delete obj; } 
   QLockFile::LockError  error(QLockFile* theWrappedObject) const;
   bool  getLockInfo(QLockFile* theWrappedObject, qint64*  pid, QString*  hostname, QString*  appname) const;
   bool  isLocked(QLockFile* theWrappedObject) const;
   bool  lock(QLockFile* theWrappedObject);
   bool  removeStaleLockFile(QLockFile* theWrappedObject);
   void setStaleLockTime(QLockFile* theWrappedObject, int  arg__1);
   int  staleLockTime(QLockFile* theWrappedObject) const;
   bool  tryLock(QLockFile* theWrappedObject, int  timeout = 0);
   void unlock(QLockFile* theWrappedObject);
};





class PythonQtWrapper_QMarginsF : public QObject
{ Q_OBJECT
public:
public slots:
QMarginsF* new_QMarginsF();
QMarginsF* new_QMarginsF(const QMargins&  margins);
QMarginsF* new_QMarginsF(qreal  left, qreal  top, qreal  right, qreal  bottom);
void delete_QMarginsF(QMarginsF* obj) { delete obj; } 
   qreal  bottom(QMarginsF* theWrappedObject) const;
   bool  isNull(QMarginsF* theWrappedObject) const;
   qreal  left(QMarginsF* theWrappedObject) const;
   QMarginsF  __mul__(QMarginsF* theWrappedObject, qreal  rhs);
   QMarginsF*  __imul__(QMarginsF* theWrappedObject, qreal  factor);
   QMarginsF  __add__(QMarginsF* theWrappedObject, const QMarginsF&  rhs);
   QRectF  __add__(QMarginsF* theWrappedObject, const QRectF&  rhs);
   QMarginsF  __add__(QMarginsF* theWrappedObject, qreal  rhs);
   QMarginsF*  __iadd__(QMarginsF* theWrappedObject, const QMarginsF&  margins);
   QMarginsF*  __iadd__(QMarginsF* theWrappedObject, qreal  addend);
   QMarginsF  __sub__(QMarginsF* theWrappedObject, const QMarginsF&  rhs);
   QMarginsF  __sub__(QMarginsF* theWrappedObject, qreal  rhs);
   QMarginsF*  __isub__(QMarginsF* theWrappedObject, const QMarginsF&  margins);
   QMarginsF*  __isub__(QMarginsF* theWrappedObject, qreal  subtrahend);
   QMarginsF  __div__(QMarginsF* theWrappedObject, qreal  divisor);
   QMarginsF*  __idiv__(QMarginsF* theWrappedObject, qreal  divisor);
   void writeTo(QMarginsF* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QMarginsF* theWrappedObject, const QMarginsF&  rhs);
   void readFrom(QMarginsF* theWrappedObject, QDataStream&  arg__1);
   qreal  right(QMarginsF* theWrappedObject) const;
   void setBottom(QMarginsF* theWrappedObject, qreal  bottom);
   void setLeft(QMarginsF* theWrappedObject, qreal  left);
   void setRight(QMarginsF* theWrappedObject, qreal  right);
   void setTop(QMarginsF* theWrappedObject, qreal  top);
   QMargins  toMargins(QMarginsF* theWrappedObject) const;
   qreal  top(QMarginsF* theWrappedObject) const;
    QString py_toString(QMarginsF*);
    bool __nonzero__(QMarginsF* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QMessageAuthenticationCode : public QObject
{ Q_OBJECT
public:
public slots:
QMessageAuthenticationCode* new_QMessageAuthenticationCode(QCryptographicHash::Algorithm  method, const QByteArray&  key = QByteArray());
void delete_QMessageAuthenticationCode(QMessageAuthenticationCode* obj) { delete obj; } 
   bool  addData(QMessageAuthenticationCode* theWrappedObject, QIODevice*  device);
   void addData(QMessageAuthenticationCode* theWrappedObject, const QByteArray&  data);
   void addData(QMessageAuthenticationCode* theWrappedObject, const char*  data, int  length);
   QByteArray  static_QMessageAuthenticationCode_hash(const QByteArray&  message, const QByteArray&  key, QCryptographicHash::Algorithm  method);
   void reset(QMessageAuthenticationCode* theWrappedObject);
   QByteArray  result(QMessageAuthenticationCode* theWrappedObject) const;
   void setKey(QMessageAuthenticationCode* theWrappedObject, const QByteArray&  key);
};





class PythonQtShell_QMessageLogContext : public QMessageLogContext
{
public:
    PythonQtShell_QMessageLogContext():QMessageLogContext(),_wrapper(NULL) {};
    PythonQtShell_QMessageLogContext(const char*  fileName, int  lineNumber, const char*  functionName, const char*  categoryName):QMessageLogContext(fileName, lineNumber, functionName, categoryName),_wrapper(NULL) {};

   ~PythonQtShell_QMessageLogContext();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMessageLogContext : public QObject
{ Q_OBJECT
public:
public slots:
QMessageLogContext* new_QMessageLogContext();
QMessageLogContext* new_QMessageLogContext(const char*  fileName, int  lineNumber, const char*  functionName, const char*  categoryName);
void delete_QMessageLogContext(QMessageLogContext* obj) { delete obj; } 
const char*  py_get_category(QMessageLogContext* theWrappedObject){ return theWrappedObject->category; }
const char*  py_get_file(QMessageLogContext* theWrappedObject){ return theWrappedObject->file; }
const char*  py_get_function(QMessageLogContext* theWrappedObject){ return theWrappedObject->function; }
void py_set_line(QMessageLogContext* theWrappedObject, int  line){ theWrappedObject->line = line; }
int  py_get_line(QMessageLogContext* theWrappedObject){ return theWrappedObject->line; }
void py_set_version(QMessageLogContext* theWrappedObject, int  version){ theWrappedObject->version = version; }
int  py_get_version(QMessageLogContext* theWrappedObject){ return theWrappedObject->version; }
};





class PythonQtWrapper_QMessageLogger : public QObject
{ Q_OBJECT
public:
public slots:
QMessageLogger* new_QMessageLogger();
QMessageLogger* new_QMessageLogger(const char*  file, int  line, const char*  function);
QMessageLogger* new_QMessageLogger(const char*  file, int  line, const char*  function, const char*  category);
void delete_QMessageLogger(QMessageLogger* obj) { delete obj; } 
};





class PythonQtWrapper_QMetaClassInfo : public QObject
{ Q_OBJECT
public:
public slots:
QMetaClassInfo* new_QMetaClassInfo();
void delete_QMetaClassInfo(QMetaClassInfo* obj) { delete obj; } 
   const QMetaObject*  enclosingMetaObject(QMetaClassInfo* theWrappedObject) const;
   const char*  name(QMetaClassInfo* theWrappedObject) const;
   const char*  value(QMetaClassInfo* theWrappedObject) const;
};





class PythonQtWrapper_QMetaEnum : public QObject
{ Q_OBJECT
public:
public slots:
QMetaEnum* new_QMetaEnum();
void delete_QMetaEnum(QMetaEnum* obj) { delete obj; } 
   const QMetaObject*  enclosingMetaObject(QMetaEnum* theWrappedObject) const;
   bool  isFlag(QMetaEnum* theWrappedObject) const;
   bool  isScoped(QMetaEnum* theWrappedObject) const;
   bool  isValid(QMetaEnum* theWrappedObject) const;
   const char*  key(QMetaEnum* theWrappedObject, int  index) const;
   int  keyCount(QMetaEnum* theWrappedObject) const;
   int  keyToValue(QMetaEnum* theWrappedObject, const char*  key, bool*  ok = nullptr) const;
   int  keysToValue(QMetaEnum* theWrappedObject, const char*  keys, bool*  ok = nullptr) const;
   const char*  name(QMetaEnum* theWrappedObject) const;
   const char*  scope(QMetaEnum* theWrappedObject) const;
   int  value(QMetaEnum* theWrappedObject, int  index) const;
   const char*  valueToKey(QMetaEnum* theWrappedObject, int  value) const;
   QByteArray  valueToKeys(QMetaEnum* theWrappedObject, int  value) const;
    bool __nonzero__(QMetaEnum* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QMetaMethod : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Access Attributes MethodType )
enum Access{
  Private = QMetaMethod::Private,   Protected = QMetaMethod::Protected,   Public = QMetaMethod::Public};
enum Attributes{
  Compatibility = QMetaMethod::Compatibility,   Cloned = QMetaMethod::Cloned,   Scriptable = QMetaMethod::Scriptable};
enum MethodType{
  Method = QMetaMethod::Method,   Signal = QMetaMethod::Signal,   Slot = QMetaMethod::Slot,   Constructor = QMetaMethod::Constructor};
public slots:
QMetaMethod* new_QMetaMethod();
void delete_QMetaMethod(QMetaMethod* obj) { delete obj; } 
   QMetaMethod::Access  access(QMetaMethod* theWrappedObject) const;
   int  attributes(QMetaMethod* theWrappedObject) const;
   const QMetaObject*  enclosingMetaObject(QMetaMethod* theWrappedObject) const;
   void getParameterTypes(QMetaMethod* theWrappedObject, int*  types) const;
   bool  isValid(QMetaMethod* theWrappedObject) const;
   int  methodIndex(QMetaMethod* theWrappedObject) const;
   QByteArray  methodSignature(QMetaMethod* theWrappedObject) const;
   QMetaMethod::MethodType  methodType(QMetaMethod* theWrappedObject) const;
   QByteArray  name(QMetaMethod* theWrappedObject) const;
   bool  __eq__(QMetaMethod* theWrappedObject, const QMetaMethod&  m2);
   int  parameterCount(QMetaMethod* theWrappedObject) const;
   QList<QByteArray >  parameterNames(QMetaMethod* theWrappedObject) const;
   int  parameterType(QMetaMethod* theWrappedObject, int  index) const;
   QList<QByteArray >  parameterTypes(QMetaMethod* theWrappedObject) const;
   int  returnType(QMetaMethod* theWrappedObject) const;
   int  revision(QMetaMethod* theWrappedObject) const;
   const char*  tag(QMetaMethod* theWrappedObject) const;
   const char*  typeName(QMetaMethod* theWrappedObject) const;
    bool __nonzero__(QMetaMethod* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QMetaProperty : public QObject
{ Q_OBJECT
public:
public slots:
QMetaProperty* new_QMetaProperty();
void delete_QMetaProperty(QMetaProperty* obj) { delete obj; } 
   const QMetaObject*  enclosingMetaObject(QMetaProperty* theWrappedObject) const;
   QMetaEnum  enumerator(QMetaProperty* theWrappedObject) const;
   bool  hasNotifySignal(QMetaProperty* theWrappedObject) const;
   bool  hasStdCppSet(QMetaProperty* theWrappedObject) const;
   bool  isConstant(QMetaProperty* theWrappedObject) const;
   bool  isDesignable(QMetaProperty* theWrappedObject, const QObject*  obj = nullptr) const;
   bool  isEditable(QMetaProperty* theWrappedObject, const QObject*  obj = nullptr) const;
   bool  isEnumType(QMetaProperty* theWrappedObject) const;
   bool  isFinal(QMetaProperty* theWrappedObject) const;
   bool  isFlagType(QMetaProperty* theWrappedObject) const;
   bool  isReadable(QMetaProperty* theWrappedObject) const;
   bool  isResettable(QMetaProperty* theWrappedObject) const;
   bool  isScriptable(QMetaProperty* theWrappedObject, const QObject*  obj = nullptr) const;
   bool  isStored(QMetaProperty* theWrappedObject, const QObject*  obj = nullptr) const;
   bool  isUser(QMetaProperty* theWrappedObject, const QObject*  obj = nullptr) const;
   bool  isValid(QMetaProperty* theWrappedObject) const;
   bool  isWritable(QMetaProperty* theWrappedObject) const;
   const char*  name(QMetaProperty* theWrappedObject) const;
   QMetaMethod  notifySignal(QMetaProperty* theWrappedObject) const;
   int  notifySignalIndex(QMetaProperty* theWrappedObject) const;
   int  propertyIndex(QMetaProperty* theWrappedObject) const;
   QVariant  read(QMetaProperty* theWrappedObject, const QObject*  obj) const;
   QVariant  readOnGadget(QMetaProperty* theWrappedObject, const void*  gadget) const;
   bool  reset(QMetaProperty* theWrappedObject, QObject*  obj) const;
   bool  resetOnGadget(QMetaProperty* theWrappedObject, void*  gadget) const;
   int  revision(QMetaProperty* theWrappedObject) const;
   QVariant::Type  type(QMetaProperty* theWrappedObject) const;
   const char*  typeName(QMetaProperty* theWrappedObject) const;
   int  userType(QMetaProperty* theWrappedObject) const;
   bool  write(QMetaProperty* theWrappedObject, QObject*  obj, const QVariant&  value) const;
   bool  writeOnGadget(QMetaProperty* theWrappedObject, void*  gadget, const QVariant&  value) const;
    bool __nonzero__(QMetaProperty* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QMetaType : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TypeFlag )
Q_FLAGS(TypeFlags )
enum TypeFlag{
  NeedsConstruction = QMetaType::NeedsConstruction,   NeedsDestruction = QMetaType::NeedsDestruction,   MovableType = QMetaType::MovableType,   PointerToQObject = QMetaType::PointerToQObject,   IsEnumeration = QMetaType::IsEnumeration,   SharedPointerToQObject = QMetaType::SharedPointerToQObject,   WeakPointerToQObject = QMetaType::WeakPointerToQObject,   TrackingPointerToQObject = QMetaType::TrackingPointerToQObject,   WasDeclaredAsMetaType = QMetaType::WasDeclaredAsMetaType,   IsGadget = QMetaType::IsGadget,   PointerToGadget = QMetaType::PointerToGadget};
Q_DECLARE_FLAGS(TypeFlags, TypeFlag)
public slots:
QMetaType* new_QMetaType(const int  type);
void delete_QMetaType(QMetaType* obj) { delete obj; } 
   bool  static_QMetaType_compare(const void*  lhs, const void*  rhs, int  typeId, int*  result);
   void*  static_QMetaType_construct(int  type, void*  where, const void*  copy);
   void*  construct(QMetaType* theWrappedObject, void*  where, const void*  copy = nullptr) const;
   bool  static_QMetaType_convert(const void*  from, int  fromTypeId, void*  to, int  toTypeId);
   void*  create(QMetaType* theWrappedObject, const void*  copy = nullptr) const;
   void*  static_QMetaType_create(int  type, const void*  copy = nullptr);
   void static_QMetaType_destroy(int  type, void*  data);
   void destroy(QMetaType* theWrappedObject, void*  data) const;
   void static_QMetaType_destruct(int  type, void*  where);
   void destruct(QMetaType* theWrappedObject, void*  data) const;
   bool  static_QMetaType_equals(const void*  lhs, const void*  rhs, int  typeId, int*  result);
   QMetaType::TypeFlags  flags(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_hasRegisteredComparators(int  typeId);
   bool  static_QMetaType_hasRegisteredConverterFunction(int  fromTypeId, int  toTypeId);
   bool  static_QMetaType_hasRegisteredDebugStreamOperator(int  typeId);
   bool  isRegistered(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_isRegistered(int  type);
   bool  isValid(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_load(QDataStream&  stream, int  type, void*  data);
   const QMetaObject*  metaObject(QMetaType* theWrappedObject) const;
   const QMetaObject*  static_QMetaType_metaObjectForType(int  type);
   int  static_QMetaType_registerNormalizedTypedef(const QByteArray&  normalizedTypeName, int  aliasId);
   int  static_QMetaType_registerTypedef(const char*  typeName, int  aliasId);
   bool  static_QMetaType_save(QDataStream&  stream, int  type, const void*  data);
   int  sizeOf(QMetaType* theWrappedObject) const;
   int  static_QMetaType_sizeOf(int  type);
   int  static_QMetaType_type(const QByteArray&  typeName);
   int  static_QMetaType_type(const char*  typeName);
   QMetaType::TypeFlags  static_QMetaType_typeFlags(int  type);
   const char*  static_QMetaType_typeName(int  type);
   bool  static_QMetaType_unregisterType(int  type);
    bool __nonzero__(QMetaType* obj) { return obj->isValid(); }
};





class PythonQtShell_QMimeData : public QMimeData
{
public:
    PythonQtShell_QMimeData():QMimeData(),_wrapper(NULL) {};

   ~PythonQtShell_QMimeData();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QStringList  formats() const;
virtual bool  hasFormat(const QString&  mimetype) const;
virtual QVariant  retrieveData(const QString&  mimetype, QVariant::Type  preferredType) const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMimeData : public QMimeData
{ public:
inline QVariant  promoted_retrieveData(const QString&  mimetype, QVariant::Type  preferredType) const { return this->retrieveData(mimetype, preferredType); }
inline QStringList  py_q_formats() const { return QMimeData::formats(); }
inline bool  py_q_hasFormat(const QString&  mimetype) const { return QMimeData::hasFormat(mimetype); }
inline QVariant  py_q_retrieveData(const QString&  mimetype, QVariant::Type  preferredType) const { return QMimeData::retrieveData(mimetype, preferredType); }
};

class PythonQtWrapper_QMimeData : public QObject
{ Q_OBJECT
public:
public slots:
QMimeData* new_QMimeData();
void delete_QMimeData(QMimeData* obj) { delete obj; } 
   void clear(QMimeData* theWrappedObject);
   QVariant  colorData(QMimeData* theWrappedObject) const;
   QByteArray  data(QMimeData* theWrappedObject, const QString&  mimetype) const;
   QStringList  formats(QMimeData* theWrappedObject) const;
   QStringList  py_q_formats(QMimeData* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->py_q_formats());}
   bool  hasColor(QMimeData* theWrappedObject) const;
   bool  hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const;
   bool  py_q_hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const{  return (((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->py_q_hasFormat(mimetype));}
   bool  hasHtml(QMimeData* theWrappedObject) const;
   bool  hasImage(QMimeData* theWrappedObject) const;
   bool  hasText(QMimeData* theWrappedObject) const;
   bool  hasUrls(QMimeData* theWrappedObject) const;
   QString  html(QMimeData* theWrappedObject) const;
   QVariant  imageData(QMimeData* theWrappedObject) const;
   void removeFormat(QMimeData* theWrappedObject, const QString&  mimetype);
   QVariant  retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QVariant::Type  preferredType) const;
   QVariant  py_q_retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QVariant::Type  preferredType) const{  return (((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->py_q_retrieveData(mimetype, preferredType));}
   void setColorData(QMimeData* theWrappedObject, const QVariant&  color);
   void setData(QMimeData* theWrappedObject, const QString&  mimetype, const QByteArray&  data);
   void setHtml(QMimeData* theWrappedObject, const QString&  html);
   void setImageData(QMimeData* theWrappedObject, const QVariant&  image);
   void setText(QMimeData* theWrappedObject, const QString&  text);
   void setUrls(QMimeData* theWrappedObject, const QList<QUrl >&  urls);
   QString  text(QMimeData* theWrappedObject) const;
   QList<QUrl >  urls(QMimeData* theWrappedObject) const;
};





class PythonQtWrapper_QMimeDatabase : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MatchMode )
enum MatchMode{
  MatchDefault = QMimeDatabase::MatchDefault,   MatchExtension = QMimeDatabase::MatchExtension,   MatchContent = QMimeDatabase::MatchContent};
public slots:
QMimeDatabase* new_QMimeDatabase();
void delete_QMimeDatabase(QMimeDatabase* obj) { delete obj; } 
   QList<QMimeType >  allMimeTypes(QMimeDatabase* theWrappedObject) const;
   QMimeType  mimeTypeForData(QMimeDatabase* theWrappedObject, QIODevice*  device) const;
   QMimeType  mimeTypeForData(QMimeDatabase* theWrappedObject, const QByteArray&  data) const;
   QMimeType  mimeTypeForFile(QMimeDatabase* theWrappedObject, const QFileInfo&  fileInfo, QMimeDatabase::MatchMode  mode = QMimeDatabase::MatchDefault) const;
   QMimeType  mimeTypeForFile(QMimeDatabase* theWrappedObject, const QString&  fileName, QMimeDatabase::MatchMode  mode = QMimeDatabase::MatchDefault) const;
   QMimeType  mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, QIODevice*  device) const;
   QMimeType  mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, const QByteArray&  data) const;
   QMimeType  mimeTypeForName(QMimeDatabase* theWrappedObject, const QString&  nameOrAlias) const;
   QMimeType  mimeTypeForUrl(QMimeDatabase* theWrappedObject, const QUrl&  url) const;
   QList<QMimeType >  mimeTypesForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const;
   QString  suffixForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const;
};





class PythonQtWrapper_QMimeType : public QObject
{ Q_OBJECT
public:
public slots:
QMimeType* new_QMimeType();
QMimeType* new_QMimeType(const QMimeType&  other);
void delete_QMimeType(QMimeType* obj) { delete obj; } 
   QStringList  aliases(QMimeType* theWrappedObject) const;
   QStringList  allAncestors(QMimeType* theWrappedObject) const;
   QString  comment(QMimeType* theWrappedObject) const;
   QString  filterString(QMimeType* theWrappedObject) const;
   QString  genericIconName(QMimeType* theWrappedObject) const;
   QStringList  globPatterns(QMimeType* theWrappedObject) const;
   QString  iconName(QMimeType* theWrappedObject) const;
   bool  inherits(QMimeType* theWrappedObject, const QString&  mimeTypeName) const;
   bool  isDefault(QMimeType* theWrappedObject) const;
   bool  isValid(QMimeType* theWrappedObject) const;
   QString  name(QMimeType* theWrappedObject) const;
   bool  __ne__(QMimeType* theWrappedObject, const QMimeType&  other) const;
   QMimeType*  operator_assign(QMimeType* theWrappedObject, const QMimeType&  other);
   bool  __eq__(QMimeType* theWrappedObject, const QMimeType&  other) const;
   QStringList  parentMimeTypes(QMimeType* theWrappedObject) const;
   QString  preferredSuffix(QMimeType* theWrappedObject) const;
   QStringList  suffixes(QMimeType* theWrappedObject) const;
   void swap(QMimeType* theWrappedObject, QMimeType&  other);
    QString py_toString(QMimeType*);
    bool __nonzero__(QMimeType* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QModelIndex : public QObject
{ Q_OBJECT
public:
public slots:
QModelIndex* new_QModelIndex();
QModelIndex* new_QModelIndex(const QModelIndex& other) {
QModelIndex* a = new QModelIndex();
*((QModelIndex*)a) = other;
return a; }
void delete_QModelIndex(QModelIndex* obj) { delete obj; } 
   QModelIndex  child(QModelIndex* theWrappedObject, int  row, int  column) const;
   int  column(QModelIndex* theWrappedObject) const;
   QVariant  data(QModelIndex* theWrappedObject, int  role = Qt::DisplayRole) const;
   Qt::ItemFlags  flags(QModelIndex* theWrappedObject) const;
   quintptr  internalId(QModelIndex* theWrappedObject) const;
   void*  internalPointer(QModelIndex* theWrappedObject) const;
   bool  isValid(QModelIndex* theWrappedObject) const;
   const QAbstractItemModel*  model(QModelIndex* theWrappedObject) const;
   bool  __ne__(QModelIndex* theWrappedObject, const QModelIndex&  other) const;
   bool  __lt__(QModelIndex* theWrappedObject, const QModelIndex&  other) const;
   bool  __eq__(QModelIndex* theWrappedObject, const QModelIndex&  other) const;
   QModelIndex  parent(QModelIndex* theWrappedObject) const;
   int  row(QModelIndex* theWrappedObject) const;
   QModelIndex  sibling(QModelIndex* theWrappedObject, int  row, int  column) const;
   QModelIndex  siblingAtColumn(QModelIndex* theWrappedObject, int  column) const;
   QModelIndex  siblingAtRow(QModelIndex* theWrappedObject, int  row) const;
    QString py_toString(QModelIndex*);
    bool __nonzero__(QModelIndex* obj) { return obj->isValid(); }
};


