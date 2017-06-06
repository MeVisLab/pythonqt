#include <PythonQt.h>
#include <QObject>
#include <QStringList>
#include <QUrl>
#include <QVarLengthArray>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemmodel.h>
#include <qabstractstate.h>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
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
#include <qlist.h>
#include <qlockfile.h>
#include <qlogging.h>
#include <qmargins.h>
#include <qmessageauthenticationcode.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qmimedata.h>
#include <qmimedatabase.h>
#include <qmimetype.h>
#include <qmutex.h>
#include <qobject.h>
#include <qparallelanimationgroup.h>
#include <qrect.h>
#include <qsize.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qvector.h>



class PythonQtShell_QFileSelector : public QFileSelector
{
public:
    PythonQtShell_QFileSelector(QObject*  parent = 0):QFileSelector(parent),_wrapper(NULL) {};

   ~PythonQtShell_QFileSelector();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QFileSelector : public QObject
{ Q_OBJECT
public:
public slots:
QFileSelector* new_QFileSelector(QObject*  parent = 0);
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
    PythonQtShell_QFileSystemWatcher(QObject*  parent = 0):QFileSystemWatcher(parent),_wrapper(NULL) {};
    PythonQtShell_QFileSystemWatcher(const QStringList&  paths, QObject*  parent = 0):QFileSystemWatcher(paths, parent),_wrapper(NULL) {};

   ~PythonQtShell_QFileSystemWatcher();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QFileSystemWatcher : public QObject
{ Q_OBJECT
public:
public slots:
QFileSystemWatcher* new_QFileSystemWatcher(QObject*  parent = 0);
QFileSystemWatcher* new_QFileSystemWatcher(const QStringList&  paths, QObject*  parent = 0);
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
    PythonQtShell_QFinalState(QState*  parent = 0):QFinalState(parent),_wrapper(NULL) {};

   ~PythonQtShell_QFinalState();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void onEntry(QEvent*  event);
virtual void onExit(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFinalState : public QFinalState
{ public:
inline bool  promoted_event(QEvent*  e) { return QFinalState::event(e); }
inline void promoted_onEntry(QEvent*  event) { QFinalState::onEntry(event); }
inline void promoted_onExit(QEvent*  event) { QFinalState::onExit(event); }
};

class PythonQtWrapper_QFinalState : public QObject
{ Q_OBJECT
public:
public slots:
QFinalState* new_QFinalState(QState*  parent = 0);
void delete_QFinalState(QFinalState* obj) { delete obj; } 
   bool  event(QFinalState* theWrappedObject, QEvent*  e);
   void onEntry(QFinalState* theWrappedObject, QEvent*  event);
   void onExit(QFinalState* theWrappedObject, QEvent*  event);
};





class PythonQtShell_QHistoryState : public QHistoryState
{
public:
    PythonQtShell_QHistoryState(QHistoryState::HistoryType  type, QState*  parent = 0):QHistoryState(type, parent),_wrapper(NULL) {};
    PythonQtShell_QHistoryState(QState*  parent = 0):QHistoryState(parent),_wrapper(NULL) {};

   ~PythonQtShell_QHistoryState();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void onEntry(QEvent*  event);
virtual void onExit(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QHistoryState : public QHistoryState
{ public:
inline bool  promoted_event(QEvent*  e) { return QHistoryState::event(e); }
inline void promoted_onEntry(QEvent*  event) { QHistoryState::onEntry(event); }
inline void promoted_onExit(QEvent*  event) { QHistoryState::onExit(event); }
};

class PythonQtWrapper_QHistoryState : public QObject
{ Q_OBJECT
public:
public slots:
QHistoryState* new_QHistoryState(QHistoryState::HistoryType  type, QState*  parent = 0);
QHistoryState* new_QHistoryState(QState*  parent = 0);
void delete_QHistoryState(QHistoryState* obj) { delete obj; } 
   QAbstractState*  defaultState(QHistoryState* theWrappedObject) const;
   bool  event(QHistoryState* theWrappedObject, QEvent*  e);
   QHistoryState::HistoryType  historyType(QHistoryState* theWrappedObject) const;
   void onEntry(QHistoryState* theWrappedObject, QEvent*  event);
   void onExit(QHistoryState* theWrappedObject, QEvent*  event);
   void setDefaultState(QHistoryState* theWrappedObject, QAbstractState*  state);
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
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIODevice : public QIODevice
{ public:
inline bool  promoted_atEnd() const { return QIODevice::atEnd(); }
inline qint64  promoted_bytesAvailable() const { return QIODevice::bytesAvailable(); }
inline qint64  promoted_bytesToWrite() const { return QIODevice::bytesToWrite(); }
inline bool  promoted_canReadLine() const { return QIODevice::canReadLine(); }
inline void promoted_close() { QIODevice::close(); }
inline bool  promoted_isSequential() const { return QIODevice::isSequential(); }
inline bool  promoted_open(QIODevice::OpenMode  mode) { return QIODevice::open(mode); }
inline qint64  promoted_pos() const { return QIODevice::pos(); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return QIODevice::readLineData(data, maxlen); }
inline bool  promoted_reset() { return QIODevice::reset(); }
inline bool  promoted_seek(qint64  pos) { return QIODevice::seek(pos); }
inline void promoted_setErrorString(const QString&  errorString) { QIODevice::setErrorString(errorString); }
inline void promoted_setOpenMode(QIODevice::OpenMode  openMode) { QIODevice::setOpenMode(openMode); }
inline qint64  promoted_size() const { return QIODevice::size(); }
inline bool  promoted_waitForBytesWritten(int  msecs) { return QIODevice::waitForBytesWritten(msecs); }
inline bool  promoted_waitForReadyRead(int  msecs) { return QIODevice::waitForReadyRead(msecs); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
};

class PythonQtWrapper_QIODevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OpenModeFlag )
Q_FLAGS(OpenMode )
enum OpenModeFlag{
  NotOpen = QIODevice::NotOpen,   ReadOnly = QIODevice::ReadOnly,   WriteOnly = QIODevice::WriteOnly,   ReadWrite = QIODevice::ReadWrite,   Append = QIODevice::Append,   Truncate = QIODevice::Truncate,   Text = QIODevice::Text,   Unbuffered = QIODevice::Unbuffered};
Q_DECLARE_FLAGS(OpenMode, OpenModeFlag)
public slots:
QIODevice* new_QIODevice();
QIODevice* new_QIODevice(QObject*  parent);
void delete_QIODevice(QIODevice* obj) { delete obj; } 
   bool  atEnd(QIODevice* theWrappedObject) const;
   qint64  bytesAvailable(QIODevice* theWrappedObject) const;
   qint64  bytesToWrite(QIODevice* theWrappedObject) const;
   bool  canReadLine(QIODevice* theWrappedObject) const;
   void close(QIODevice* theWrappedObject);
   QString  errorString(QIODevice* theWrappedObject) const;
   bool  getChar(QIODevice* theWrappedObject, char*  c);
   bool  isOpen(QIODevice* theWrappedObject) const;
   bool  isReadable(QIODevice* theWrappedObject) const;
   bool  isSequential(QIODevice* theWrappedObject) const;
   bool  isTextModeEnabled(QIODevice* theWrappedObject) const;
   bool  isWritable(QIODevice* theWrappedObject) const;
   bool  open(QIODevice* theWrappedObject, QIODevice::OpenMode  mode);
   QIODevice::OpenMode  openMode(QIODevice* theWrappedObject) const;
   QByteArray  peek(QIODevice* theWrappedObject, qint64  maxlen);
   qint64  pos(QIODevice* theWrappedObject) const;
   bool  putChar(QIODevice* theWrappedObject, char  c);
   QByteArray  read(QIODevice* theWrappedObject, qint64  maxlen);
   QByteArray  readAll(QIODevice* theWrappedObject);
   qint64  readData(QIODevice* theWrappedObject, char*  data, qint64  maxlen);
   QByteArray  readLine(QIODevice* theWrappedObject, qint64  maxlen = 0);
   qint64  readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen);
   bool  reset(QIODevice* theWrappedObject);
   bool  seek(QIODevice* theWrappedObject, qint64  pos);
   void setErrorString(QIODevice* theWrappedObject, const QString&  errorString);
   void setOpenMode(QIODevice* theWrappedObject, QIODevice::OpenMode  openMode);
   void setTextModeEnabled(QIODevice* theWrappedObject, bool  enabled);
   qint64  size(QIODevice* theWrappedObject) const;
   void ungetChar(QIODevice* theWrappedObject, char  c);
   bool  waitForBytesWritten(QIODevice* theWrappedObject, int  msecs);
   bool  waitForReadyRead(QIODevice* theWrappedObject, int  msecs);
   qint64  write(QIODevice* theWrappedObject, const QByteArray&  data);
   qint64  write(QIODevice* theWrappedObject, const char*  data);
   qint64  writeData(QIODevice* theWrappedObject, const char*  data, qint64  len);
};





class PythonQtShell_QIdentityProxyModel : public QIdentityProxyModel
{
public:
    PythonQtShell_QIdentityProxyModel(QObject*  parent = 0):QIdentityProxyModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QIdentityProxyModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual void customEvent(QEvent*  arg__1);
virtual QVariant  data(const QModelIndex&  proxyIndex, int  role = Qt::DisplayRole) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fetchMore(const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role) const;
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
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIdentityProxyModel : public QIdentityProxyModel
{ public:
inline int  promoted_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QIdentityProxyModel::columnCount(parent); }
inline bool  promoted_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QIdentityProxyModel::dropMimeData(data, action, row, column, parent); }
inline QVariant  promoted_headerData(int  section, Qt::Orientation  orientation, int  role) const { return QIdentityProxyModel::headerData(section, orientation, role); }
inline QModelIndex  promoted_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QIdentityProxyModel::index(row, column, parent); }
inline bool  promoted_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::insertColumns(column, count, parent); }
inline bool  promoted_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::insertRows(row, count, parent); }
inline QModelIndex  promoted_mapFromSource(const QModelIndex&  sourceIndex) const { return QIdentityProxyModel::mapFromSource(sourceIndex); }
inline QItemSelection  promoted_mapSelectionFromSource(const QItemSelection&  selection) const { return QIdentityProxyModel::mapSelectionFromSource(selection); }
inline QItemSelection  promoted_mapSelectionToSource(const QItemSelection&  selection) const { return QIdentityProxyModel::mapSelectionToSource(selection); }
inline QModelIndex  promoted_mapToSource(const QModelIndex&  proxyIndex) const { return QIdentityProxyModel::mapToSource(proxyIndex); }
inline QList<QModelIndex >  promoted_match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { return QIdentityProxyModel::match(start, role, value, hits, flags); }
inline QModelIndex  promoted_parent(const QModelIndex&  child) const { return QIdentityProxyModel::parent(child); }
inline bool  promoted_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::removeColumns(column, count, parent); }
inline bool  promoted_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::removeRows(row, count, parent); }
inline int  promoted_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QIdentityProxyModel::rowCount(parent); }
inline void promoted_setSourceModel(QAbstractItemModel*  sourceModel) { QIdentityProxyModel::setSourceModel(sourceModel); }
inline QModelIndex  promoted_sibling(int  row, int  column, const QModelIndex&  idx) const { return QIdentityProxyModel::sibling(row, column, idx); }
};

class PythonQtWrapper_QIdentityProxyModel : public QObject
{ Q_OBJECT
public:
public slots:
QIdentityProxyModel* new_QIdentityProxyModel(QObject*  parent = 0);
void delete_QIdentityProxyModel(QIdentityProxyModel* obj) { delete obj; } 
   int  columnCount(QIdentityProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   bool  dropMimeData(QIdentityProxyModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
   QVariant  headerData(QIdentityProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role) const;
   QModelIndex  index(QIdentityProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   bool  insertColumns(QIdentityProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  insertRows(QIdentityProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   QModelIndex  mapFromSource(QIdentityProxyModel* theWrappedObject, const QModelIndex&  sourceIndex) const;
   QItemSelection  mapSelectionFromSource(QIdentityProxyModel* theWrappedObject, const QItemSelection&  selection) const;
   QItemSelection  mapSelectionToSource(QIdentityProxyModel* theWrappedObject, const QItemSelection&  selection) const;
   QModelIndex  mapToSource(QIdentityProxyModel* theWrappedObject, const QModelIndex&  proxyIndex) const;
   QList<QModelIndex >  match(QIdentityProxyModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
   QModelIndex  parent(QIdentityProxyModel* theWrappedObject, const QModelIndex&  child) const;
   bool  removeColumns(QIdentityProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  removeRows(QIdentityProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   int  rowCount(QIdentityProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   void setSourceModel(QIdentityProxyModel* theWrappedObject, QAbstractItemModel*  sourceModel);
   QModelIndex  sibling(QIdentityProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const;
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
   QJsonValue  takeAt(QJsonArray* theWrappedObject, int  i);
   QList<QVariant >  toVariantList(QJsonArray* theWrappedObject) const;
    QString py_toString(QJsonArray*);
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
   QJsonDocument  static_QJsonDocument_fromJson(const QByteArray&  json, QJsonParseError*  error = 0);
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
   const char*  rawData(QJsonDocument* theWrappedObject, int*  size) const;
   void setArray(QJsonDocument* theWrappedObject, const QJsonArray&  array);
   void setObject(QJsonDocument* theWrappedObject, const QJsonObject&  object);
   QByteArray  toBinaryData(QJsonDocument* theWrappedObject) const;
   QByteArray  toJson(QJsonDocument* theWrappedObject) const;
   QByteArray  toJson(QJsonDocument* theWrappedObject, QJsonDocument::JsonFormat  format) const;
   QVariant  toVariant(QJsonDocument* theWrappedObject) const;
    QString py_toString(QJsonDocument*);
    bool __nonzero__(QJsonDocument* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QJsonObject : public QObject
{ Q_OBJECT
public:
public slots:
QJsonObject* new_QJsonObject();
QJsonObject* new_QJsonObject(const QJsonObject&  other);
void delete_QJsonObject(QJsonObject* obj) { delete obj; } 
   bool  contains(QJsonObject* theWrappedObject, const QString&  key) const;
   int  count(QJsonObject* theWrappedObject) const;
   bool  empty(QJsonObject* theWrappedObject) const;
   QJsonObject  static_QJsonObject_fromVariantMap(const QMap<QString , QVariant >&  map);
   bool  isEmpty(QJsonObject* theWrappedObject) const;
   QStringList  keys(QJsonObject* theWrappedObject) const;
   int  length(QJsonObject* theWrappedObject) const;
   bool  __ne__(QJsonObject* theWrappedObject, const QJsonObject&  other) const;
   QJsonObject*  operator_assign(QJsonObject* theWrappedObject, const QJsonObject&  other);
   bool  __eq__(QJsonObject* theWrappedObject, const QJsonObject&  other) const;
   QJsonValue  operator_subscript(QJsonObject* theWrappedObject, const QString&  key) const;
   void remove(QJsonObject* theWrappedObject, const QString&  key);
   int  size(QJsonObject* theWrappedObject) const;
   QJsonValue  take(QJsonObject* theWrappedObject, const QString&  key);
   QMap<QString , QVariant >  toVariantMap(QJsonObject* theWrappedObject) const;
   QJsonValue  value(QJsonObject* theWrappedObject, const QString&  key) const;
    QString py_toString(QJsonObject*);
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
   QJsonArray  toArray(QJsonValue* theWrappedObject) const;
   QJsonArray  toArray(QJsonValue* theWrappedObject, const QJsonArray&  defaultValue) const;
   bool  toBool(QJsonValue* theWrappedObject, bool  defaultValue = false) const;
   double  toDouble(QJsonValue* theWrappedObject, double  defaultValue = 0) const;
   int  toInt(QJsonValue* theWrappedObject, int  defaultValue = 0) const;
   QJsonObject  toObject(QJsonValue* theWrappedObject) const;
   QJsonObject  toObject(QJsonValue* theWrappedObject, const QJsonObject&  defaultValue) const;
   QString  toString(QJsonValue* theWrappedObject, const QString&  defaultValue = QString()) const;
   QVariant  toVariant(QJsonValue* theWrappedObject) const;
   QJsonValue::Type  type(QJsonValue* theWrappedObject) const;
    QString py_toString(QJsonValue*);
    bool __nonzero__(QJsonValue* obj) { return !obj->isNull(); }
};





class PythonQtShell_QLibrary : public QLibrary
{
public:
    PythonQtShell_QLibrary(QObject*  parent = 0):QLibrary(parent),_wrapper(NULL) {};
    PythonQtShell_QLibrary(const QString&  fileName, QObject*  parent = 0):QLibrary(fileName, parent),_wrapper(NULL) {};
    PythonQtShell_QLibrary(const QString&  fileName, const QString&  version, QObject*  parent = 0):QLibrary(fileName, version, parent),_wrapper(NULL) {};
    PythonQtShell_QLibrary(const QString&  fileName, int  verNum, QObject*  parent = 0):QLibrary(fileName, verNum, parent),_wrapper(NULL) {};

   ~PythonQtShell_QLibrary();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QLibrary : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LoadHint )
Q_FLAGS(LoadHints )
enum LoadHint{
  ResolveAllSymbolsHint = QLibrary::ResolveAllSymbolsHint,   ExportExternalSymbolsHint = QLibrary::ExportExternalSymbolsHint,   LoadArchiveMemberHint = QLibrary::LoadArchiveMemberHint,   PreventUnloadHint = QLibrary::PreventUnloadHint};
Q_DECLARE_FLAGS(LoadHints, LoadHint)
public slots:
QLibrary* new_QLibrary(QObject*  parent = 0);
QLibrary* new_QLibrary(const QString&  fileName, QObject*  parent = 0);
QLibrary* new_QLibrary(const QString&  fileName, const QString&  version, QObject*  parent = 0);
QLibrary* new_QLibrary(const QString&  fileName, int  verNum, QObject*  parent = 0);
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
   void critical(QMessageLogger* theWrappedObject, const char*  msg) const;
   void debug(QMessageLogger* theWrappedObject, const char*  msg) const;
   void fatal(QMessageLogger* theWrappedObject, const char*  msg) const;
   void noDebug(QMessageLogger* theWrappedObject, const char*  arg__1) const;
   void warning(QMessageLogger* theWrappedObject, const char*  msg) const;
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
   bool  isValid(QMetaEnum* theWrappedObject) const;
   const char*  key(QMetaEnum* theWrappedObject, int  index) const;
   int  keyCount(QMetaEnum* theWrappedObject) const;
   int  keyToValue(QMetaEnum* theWrappedObject, const char*  key, bool*  ok = 0) const;
   int  keysToValue(QMetaEnum* theWrappedObject, const char*  keys, bool*  ok = 0) const;
   const char*  name(QMetaEnum* theWrappedObject) const;
   const char*  scope(QMetaEnum* theWrappedObject) const;
   int  value(QMetaEnum* theWrappedObject, int  index) const;
   const char*  valueToKey(QMetaEnum* theWrappedObject, int  value) const;
   QByteArray  valueToKeys(QMetaEnum* theWrappedObject, int  value) const;
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
   bool  isDesignable(QMetaProperty* theWrappedObject, const QObject*  obj = 0) const;
   bool  isEditable(QMetaProperty* theWrappedObject, const QObject*  obj = 0) const;
   bool  isEnumType(QMetaProperty* theWrappedObject) const;
   bool  isFinal(QMetaProperty* theWrappedObject) const;
   bool  isFlagType(QMetaProperty* theWrappedObject) const;
   bool  isReadable(QMetaProperty* theWrappedObject) const;
   bool  isResettable(QMetaProperty* theWrappedObject) const;
   bool  isScriptable(QMetaProperty* theWrappedObject, const QObject*  obj = 0) const;
   bool  isStored(QMetaProperty* theWrappedObject, const QObject*  obj = 0) const;
   bool  isUser(QMetaProperty* theWrappedObject, const QObject*  obj = 0) const;
   bool  isValid(QMetaProperty* theWrappedObject) const;
   bool  isWritable(QMetaProperty* theWrappedObject) const;
   const char*  name(QMetaProperty* theWrappedObject) const;
   QMetaMethod  notifySignal(QMetaProperty* theWrappedObject) const;
   int  notifySignalIndex(QMetaProperty* theWrappedObject) const;
   int  propertyIndex(QMetaProperty* theWrappedObject) const;
   QVariant  read(QMetaProperty* theWrappedObject, const QObject*  obj) const;
   bool  reset(QMetaProperty* theWrappedObject, QObject*  obj) const;
   int  revision(QMetaProperty* theWrappedObject) const;
   QVariant::Type  type(QMetaProperty* theWrappedObject) const;
   const char*  typeName(QMetaProperty* theWrappedObject) const;
   int  userType(QMetaProperty* theWrappedObject) const;
   bool  write(QMetaProperty* theWrappedObject, QObject*  obj, const QVariant&  value) const;
};





class PythonQtWrapper_QMetaType : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TypeFlag )
Q_FLAGS(TypeFlags )
enum TypeFlag{
  NeedsConstruction = QMetaType::NeedsConstruction,   NeedsDestruction = QMetaType::NeedsDestruction,   MovableType = QMetaType::MovableType,   PointerToQObject = QMetaType::PointerToQObject,   IsEnumeration = QMetaType::IsEnumeration,   SharedPointerToQObject = QMetaType::SharedPointerToQObject,   WeakPointerToQObject = QMetaType::WeakPointerToQObject,   TrackingPointerToQObject = QMetaType::TrackingPointerToQObject,   WasDeclaredAsMetaType = QMetaType::WasDeclaredAsMetaType};
Q_DECLARE_FLAGS(TypeFlags, TypeFlag)
public slots:
QMetaType* new_QMetaType(const int  type);
void delete_QMetaType(QMetaType* obj) { delete obj; } 
   bool  static_QMetaType_compare(const void*  lhs, const void*  rhs, int  typeId, int*  result);
   void*  static_QMetaType_construct(int  type, void*  where, const void*  copy);
   void*  construct(QMetaType* theWrappedObject, void*  where, const void*  copy = 0) const;
   bool  static_QMetaType_convert(const void*  from, int  fromTypeId, void*  to, int  toTypeId);
   void*  create(QMetaType* theWrappedObject, const void*  copy = 0) const;
   void*  static_QMetaType_create(int  type, const void*  copy = 0);
   void static_QMetaType_destroy(int  type, void*  data);
   void destroy(QMetaType* theWrappedObject, void*  data) const;
   void static_QMetaType_destruct(int  type, void*  where);
   void destruct(QMetaType* theWrappedObject, void*  data) const;
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
   int  static_QMetaType_type(const char*  typeName);
   QMetaType::TypeFlags  static_QMetaType_typeFlags(int  type);
   const char*  static_QMetaType_typeName(int  type);
};





class PythonQtShell_QMimeData : public QMimeData
{
public:
    PythonQtShell_QMimeData():QMimeData(),_wrapper(NULL) {};

   ~PythonQtShell_QMimeData();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QStringList  formats() const;
virtual bool  hasFormat(const QString&  mimetype) const;
virtual QVariant  retrieveData(const QString&  mimetype, QVariant::Type  preferredType) const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMimeData : public QMimeData
{ public:
inline QStringList  promoted_formats() const { return QMimeData::formats(); }
inline bool  promoted_hasFormat(const QString&  mimetype) const { return QMimeData::hasFormat(mimetype); }
inline QVariant  promoted_retrieveData(const QString&  mimetype, QVariant::Type  preferredType) const { return QMimeData::retrieveData(mimetype, preferredType); }
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
   bool  hasColor(QMimeData* theWrappedObject) const;
   bool  hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const;
   bool  hasHtml(QMimeData* theWrappedObject) const;
   bool  hasImage(QMimeData* theWrappedObject) const;
   bool  hasText(QMimeData* theWrappedObject) const;
   bool  hasUrls(QMimeData* theWrappedObject) const;
   QString  html(QMimeData* theWrappedObject) const;
   QVariant  imageData(QMimeData* theWrappedObject) const;
   void removeFormat(QMimeData* theWrappedObject, const QString&  mimetype);
   QVariant  retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QVariant::Type  preferredType) const;
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
   void lock(QMutex* theWrappedObject);
   bool  tryLock(QMutex* theWrappedObject, int  timeout = 0);
   void unlock(QMutex* theWrappedObject);
};





class PythonQtShell_QObject : public QObject
{
public:
    PythonQtShell_QObject(QObject*  parent = 0):QObject(parent),_wrapper(NULL) {};

   ~PythonQtShell_QObject();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QObject : public QObject
{ public:
inline void promoted_childEvent(QChildEvent*  arg__1) { QObject::childEvent(arg__1); }
inline void promoted_customEvent(QEvent*  arg__1) { QObject::customEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QObject::event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QObject::eventFilter(arg__1, arg__2); }
inline bool  promoted_isSignalConnected(const QMetaMethod&  signal) const { return QObject::isSignalConnected(signal); }
inline QObject*  promoted_sender() const { return QObject::sender(); }
inline int  promoted_senderSignalIndex() const { return QObject::senderSignalIndex(); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QObject::timerEvent(arg__1); }
};

class PythonQtWrapper_QObject : public QObject
{ Q_OBJECT
public:
public slots:
QObject* new_QObject(QObject*  parent = 0);
void delete_QObject(QObject* obj) { delete obj; } 
   bool  blockSignals(QObject* theWrappedObject, bool  b);
   void childEvent(QObject* theWrappedObject, QChildEvent*  arg__1);
   const QList<QObject* >*  children(QObject* theWrappedObject) const;
   void customEvent(QObject* theWrappedObject, QEvent*  arg__1);
   void dumpObjectInfo(QObject* theWrappedObject);
   void dumpObjectTree(QObject* theWrappedObject);
   QList<QByteArray >  dynamicPropertyNames(QObject* theWrappedObject) const;
   bool  event(QObject* theWrappedObject, QEvent*  arg__1);
   bool  eventFilter(QObject* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void installEventFilter(QObject* theWrappedObject, QObject*  arg__1);
   bool  isSignalConnected(QObject* theWrappedObject, const QMetaMethod&  signal) const;
   bool  isWidgetType(QObject* theWrappedObject) const;
   bool  isWindowType(QObject* theWrappedObject) const;
   void killTimer(QObject* theWrappedObject, int  id);
   void moveToThread(QObject* theWrappedObject, QThread*  thread);
   QString  objectName(QObject* theWrappedObject) const;
   void removeEventFilter(QObject* theWrappedObject, QObject*  arg__1);
   QObject*  sender(QObject* theWrappedObject) const;
   int  senderSignalIndex(QObject* theWrappedObject) const;
   void setObjectName(QObject* theWrappedObject, const QString&  name);
   bool  signalsBlocked(QObject* theWrappedObject) const;
   int  startTimer(QObject* theWrappedObject, int  interval, Qt::TimerType  timerType = Qt::CoarseTimer);
   QThread*  thread(QObject* theWrappedObject) const;
   void timerEvent(QObject* theWrappedObject, QTimerEvent*  arg__1);
};





class PythonQtShell_QParallelAnimationGroup : public QParallelAnimationGroup
{
public:
    PythonQtShell_QParallelAnimationGroup(QObject*  parent = 0):QParallelAnimationGroup(parent),_wrapper(NULL) {};

   ~PythonQtShell_QParallelAnimationGroup();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  duration() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateCurrentTime(int  currentTime);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QParallelAnimationGroup : public QParallelAnimationGroup
{ public:
inline int  promoted_duration() const { return QParallelAnimationGroup::duration(); }
inline bool  promoted_event(QEvent*  event) { return QParallelAnimationGroup::event(event); }
inline void promoted_updateCurrentTime(int  currentTime) { QParallelAnimationGroup::updateCurrentTime(currentTime); }
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
   bool  event(QParallelAnimationGroup* theWrappedObject, QEvent*  event);
   void updateCurrentTime(QParallelAnimationGroup* theWrappedObject, int  currentTime);
   void updateDirection(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction);
   void updateState(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
};


