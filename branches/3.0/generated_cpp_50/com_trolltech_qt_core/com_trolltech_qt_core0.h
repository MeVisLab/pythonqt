#include <PythonQt.h>
#include <PythonQtConversion.h>
#include <QDateTime>
#include <QDir>
#include <QObject>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemmodel.h>
#include <qabstractstate.h>
#include <qabstracttransition.h>
#include <qanimationgroup.h>
#include <qbasictimer.h>
#include <qbuffer.h>
#include <qbytearray.h>
#include <qbytearraymatcher.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcryptographichash.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdir.h>
#include <qdiriterator.h>
#include <qeasingcurve.h>
#include <qelapsedtimer.h>
#include <qeventloop.h>
#include <qeventtransition.h>
#include <qfactoryinterface.h>
#include <qfile.h>
#include <qfiledevice.h>
#include <qfileinfo.h>
#include <qfilesystemwatcher.h>
#include <qfinalstate.h>
#include <qhistorystate.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qmutex.h>
#include <qobject.h>
#include <qpoint.h>
#include <qsize.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringlist.h>
#include <qtranslator.h>
#include <qvector.h>



class PythonQtShell_QAbstractAnimation : public QAbstractAnimation
{
public:
    PythonQtShell_QAbstractAnimation(QObject*  parent = 0):QAbstractAnimation(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractAnimation();

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

class PythonQtPublicPromoter_QAbstractAnimation : public QAbstractAnimation
{ public:
inline int  promoted_duration() const { return this->duration(); }
inline bool  promoted_event(QEvent*  event) { return QAbstractAnimation::event(event); }
inline void promoted_updateCurrentTime(int  currentTime) { this->updateCurrentTime(currentTime); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { QAbstractAnimation::updateDirection(direction); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QAbstractAnimation::updateState(newState, oldState); }
};

class PythonQtWrapper_QAbstractAnimation : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DeletionPolicy )
enum DeletionPolicy{
  KeepWhenStopped = QAbstractAnimation::KeepWhenStopped,   DeleteWhenStopped = QAbstractAnimation::DeleteWhenStopped};
public slots:
QAbstractAnimation* new_QAbstractAnimation(QObject*  parent = 0);
void delete_QAbstractAnimation(QAbstractAnimation* obj) { delete obj; } 
   int  currentLoop(QAbstractAnimation* theWrappedObject) const;
   int  currentLoopTime(QAbstractAnimation* theWrappedObject) const;
   int  currentTime(QAbstractAnimation* theWrappedObject) const;
   QAbstractAnimation::Direction  direction(QAbstractAnimation* theWrappedObject) const;
   int  duration(QAbstractAnimation* theWrappedObject) const;
   bool  event(QAbstractAnimation* theWrappedObject, QEvent*  event);
   QAnimationGroup*  group(QAbstractAnimation* theWrappedObject) const;
   int  loopCount(QAbstractAnimation* theWrappedObject) const;
   void setDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction);
   void setLoopCount(QAbstractAnimation* theWrappedObject, int  loopCount);
   QAbstractAnimation::State  state(QAbstractAnimation* theWrappedObject) const;
   int  totalDuration(QAbstractAnimation* theWrappedObject) const;
   void updateCurrentTime(QAbstractAnimation* theWrappedObject, int  currentTime);
   void updateDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction);
   void updateState(QAbstractAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
};





class PythonQtShell_QAbstractItemModel : public QAbstractItemModel
{
public:
    PythonQtShell_QAbstractItemModel(QObject*  parent = 0):QAbstractItemModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractItemModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual void customEvent(QEvent*  arg__1);
virtual QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fetchMore(const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
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
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;
virtual void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDragActions() const;
virtual Qt::DropActions  supportedDropActions() const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractItemModel : public QAbstractItemModel
{ public:
inline void promoted_beginInsertColumns(const QModelIndex&  parent, int  first, int  last) { QAbstractItemModel::beginInsertColumns(parent, first, last); }
inline void promoted_beginInsertRows(const QModelIndex&  parent, int  first, int  last) { QAbstractItemModel::beginInsertRows(parent, first, last); }
inline bool  promoted_beginMoveColumns(const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationColumn) { return QAbstractItemModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn); }
inline bool  promoted_beginMoveRows(const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationRow) { return QAbstractItemModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow); }
inline void promoted_beginRemoveColumns(const QModelIndex&  parent, int  first, int  last) { QAbstractItemModel::beginRemoveColumns(parent, first, last); }
inline void promoted_beginRemoveRows(const QModelIndex&  parent, int  first, int  last) { QAbstractItemModel::beginRemoveRows(parent, first, last); }
inline void promoted_beginResetModel() { QAbstractItemModel::beginResetModel(); }
inline QModelIndex  promoted_buddy(const QModelIndex&  index) const { return QAbstractItemModel::buddy(index); }
inline bool  promoted_canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const { return QAbstractItemModel::canDropMimeData(data, action, row, column, parent); }
inline bool  promoted_canFetchMore(const QModelIndex&  parent) const { return QAbstractItemModel::canFetchMore(parent); }
inline void promoted_changePersistentIndex(const QModelIndex&  from, const QModelIndex&  to) { QAbstractItemModel::changePersistentIndex(from, to); }
inline void promoted_changePersistentIndexList(const QList<QModelIndex >&  from, const QList<QModelIndex >&  to) { QAbstractItemModel::changePersistentIndexList(from, to); }
inline int  promoted_columnCount(const QModelIndex&  parent = QModelIndex()) const { return this->columnCount(parent); }
inline QModelIndex  promoted_createIndex(int  row, int  column, quintptr  id) const { return QAbstractItemModel::createIndex(row, column, id); }
inline QModelIndex  promoted_createIndex(int  row, int  column, void*  data = 0) const { return QAbstractItemModel::createIndex(row, column, data); }
inline QVariant  promoted_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return this->data(index, role); }
inline bool  promoted_decodeData(int  row, int  column, const QModelIndex&  parent, QDataStream&  stream) { return QAbstractItemModel::decodeData(row, column, parent, stream); }
inline bool  promoted_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractItemModel::dropMimeData(data, action, row, column, parent); }
inline void promoted_encodeData(const QList<QModelIndex >&  indexes, QDataStream&  stream) const { QAbstractItemModel::encodeData(indexes, stream); }
inline void promoted_endInsertColumns() { QAbstractItemModel::endInsertColumns(); }
inline void promoted_endInsertRows() { QAbstractItemModel::endInsertRows(); }
inline void promoted_endMoveColumns() { QAbstractItemModel::endMoveColumns(); }
inline void promoted_endMoveRows() { QAbstractItemModel::endMoveRows(); }
inline void promoted_endRemoveColumns() { QAbstractItemModel::endRemoveColumns(); }
inline void promoted_endRemoveRows() { QAbstractItemModel::endRemoveRows(); }
inline void promoted_endResetModel() { QAbstractItemModel::endResetModel(); }
inline void promoted_fetchMore(const QModelIndex&  parent) { QAbstractItemModel::fetchMore(parent); }
inline Qt::ItemFlags  promoted_flags(const QModelIndex&  index) const { return QAbstractItemModel::flags(index); }
inline bool  promoted_hasChildren(const QModelIndex&  parent = QModelIndex()) const { return QAbstractItemModel::hasChildren(parent); }
inline QVariant  promoted_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QAbstractItemModel::headerData(section, orientation, role); }
inline QModelIndex  promoted_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return this->index(row, column, parent); }
inline bool  promoted_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::insertColumns(column, count, parent); }
inline bool  promoted_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::insertRows(row, count, parent); }
inline QMap<int , QVariant >  promoted_itemData(const QModelIndex&  index) const { return QAbstractItemModel::itemData(index); }
inline QList<QModelIndex >  promoted_match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { return QAbstractItemModel::match(start, role, value, hits, flags); }
inline QMimeData*  promoted_mimeData(const QList<QModelIndex >&  indexes) const { return QAbstractItemModel::mimeData(indexes); }
inline QStringList  promoted_mimeTypes() const { return QAbstractItemModel::mimeTypes(); }
inline bool  promoted_moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild); }
inline bool  promoted_moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QAbstractItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild); }
inline QModelIndex  promoted_parent(const QModelIndex&  child) const { return this->parent(child); }
inline QList<QModelIndex >  promoted_persistentIndexList() const { return QAbstractItemModel::persistentIndexList(); }
inline bool  promoted_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::removeColumns(column, count, parent); }
inline bool  promoted_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::removeRows(row, count, parent); }
inline void promoted_revert() { QAbstractItemModel::revert(); }
inline QHash<int , QByteArray >  promoted_roleNames() const { return QAbstractItemModel::roleNames(); }
inline int  promoted_rowCount(const QModelIndex&  parent = QModelIndex()) const { return this->rowCount(parent); }
inline bool  promoted_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QAbstractItemModel::setData(index, value, role); }
inline bool  promoted_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QAbstractItemModel::setHeaderData(section, orientation, value, role); }
inline bool  promoted_setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) { return QAbstractItemModel::setItemData(index, roles); }
inline QModelIndex  promoted_sibling(int  row, int  column, const QModelIndex&  idx) const { return QAbstractItemModel::sibling(row, column, idx); }
inline void promoted_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QAbstractItemModel::sort(column, order); }
inline QSize  promoted_span(const QModelIndex&  index) const { return QAbstractItemModel::span(index); }
inline bool  promoted_submit() { return QAbstractItemModel::submit(); }
inline Qt::DropActions  promoted_supportedDragActions() const { return QAbstractItemModel::supportedDragActions(); }
inline Qt::DropActions  promoted_supportedDropActions() const { return QAbstractItemModel::supportedDropActions(); }
};

class PythonQtWrapper_QAbstractItemModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LayoutChangeHint )
enum LayoutChangeHint{
  NoLayoutChangeHint = QAbstractItemModel::NoLayoutChangeHint,   VerticalSortHint = QAbstractItemModel::VerticalSortHint,   HorizontalSortHint = QAbstractItemModel::HorizontalSortHint};
public slots:
QAbstractItemModel* new_QAbstractItemModel(QObject*  parent = 0);
void delete_QAbstractItemModel(QAbstractItemModel* obj) { delete obj; } 
   void beginInsertColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginInsertRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   bool  beginMoveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationColumn);
   bool  beginMoveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationRow);
   void beginRemoveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginRemoveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginResetModel(QAbstractItemModel* theWrappedObject);
   QModelIndex  buddy(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   bool  canDropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
   bool  canFetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const;
   void changePersistentIndex(QAbstractItemModel* theWrappedObject, const QModelIndex&  from, const QModelIndex&  to);
   void changePersistentIndexList(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  from, const QList<QModelIndex >&  to);
   int  columnCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   QModelIndex  createIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, quintptr  id) const;
   QModelIndex  createIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, void*  data = 0) const;
   QVariant  data(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const;
   bool  decodeData(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent, QDataStream&  stream);
   bool  dropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
   void encodeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes, QDataStream&  stream) const;
   void endInsertColumns(QAbstractItemModel* theWrappedObject);
   void endInsertRows(QAbstractItemModel* theWrappedObject);
   void endMoveColumns(QAbstractItemModel* theWrappedObject);
   void endMoveRows(QAbstractItemModel* theWrappedObject);
   void endRemoveColumns(QAbstractItemModel* theWrappedObject);
   void endRemoveRows(QAbstractItemModel* theWrappedObject);
   void endResetModel(QAbstractItemModel* theWrappedObject);
   void fetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent);
   Qt::ItemFlags  flags(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   bool  hasChildren(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   bool  hasIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   QVariant  headerData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
   QModelIndex  index(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   bool  insertColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent = QModelIndex());
   bool  insertColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  insertRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent = QModelIndex());
   bool  insertRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   QMap<int , QVariant >  itemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   QList<QModelIndex >  match(QAbstractItemModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
   PythonQtPassOwnershipToPython<QMimeData*  > mimeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const;
   QStringList  mimeTypes(QAbstractItemModel* theWrappedObject) const;
   bool  moveColumn(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, const QModelIndex&  destinationParent, int  destinationChild);
   bool  moveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
   bool  moveRow(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, const QModelIndex&  destinationParent, int  destinationChild);
   bool  moveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
   QObject*  parent(QAbstractItemModel* theWrappedObject) const;
   QModelIndex  parent(QAbstractItemModel* theWrappedObject, const QModelIndex&  child) const;
   QList<QModelIndex >  persistentIndexList(QAbstractItemModel* theWrappedObject) const;
   bool  removeColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent = QModelIndex());
   bool  removeColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  removeRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent = QModelIndex());
   bool  removeRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   void revert(QAbstractItemModel* theWrappedObject);
   QHash<int , QByteArray >  roleNames(QAbstractItemModel* theWrappedObject) const;
   int  rowCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   bool  setData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
   bool  setHeaderData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
   bool  setItemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles);
   QModelIndex  sibling(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const;
   void sort(QAbstractItemModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   QSize  span(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   bool  submit(QAbstractItemModel* theWrappedObject);
   Qt::DropActions  supportedDragActions(QAbstractItemModel* theWrappedObject) const;
   Qt::DropActions  supportedDropActions(QAbstractItemModel* theWrappedObject) const;
};





class PythonQtShell_QAbstractListModel : public QAbstractListModel
{
public:
    PythonQtShell_QAbstractListModel(QObject*  parent = 0):QAbstractListModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractListModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fetchMore(const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
virtual QModelIndex  index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual QStringList  mimeTypes() const;
virtual bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual void revert();
virtual QHash<int , QByteArray >  roleNames() const;
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;
virtual void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDragActions() const;
virtual Qt::DropActions  supportedDropActions() const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractListModel : public QAbstractListModel
{ public:
inline bool  promoted_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractListModel::dropMimeData(data, action, row, column, parent); }
inline QModelIndex  promoted_index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const { return QAbstractListModel::index(row, column, parent); }
};

class PythonQtWrapper_QAbstractListModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractListModel* new_QAbstractListModel(QObject*  parent = 0);
void delete_QAbstractListModel(QAbstractListModel* obj) { delete obj; } 
   bool  dropMimeData(QAbstractListModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
   QModelIndex  index(QAbstractListModel* theWrappedObject, int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const;
};





class PythonQtShell_QAbstractState : public QAbstractState
{
public:
    PythonQtShell_QAbstractState(QState*  parent = 0):QAbstractState(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractState();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void onEntry(QEvent*  event);
virtual void onExit(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractState : public QAbstractState
{ public:
inline bool  promoted_event(QEvent*  e) { return QAbstractState::event(e); }
inline void promoted_onEntry(QEvent*  event) { this->onEntry(event); }
inline void promoted_onExit(QEvent*  event) { this->onExit(event); }
};

class PythonQtWrapper_QAbstractState : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractState* new_QAbstractState(QState*  parent = 0);
void delete_QAbstractState(QAbstractState* obj) { delete obj; } 
   bool  event(QAbstractState* theWrappedObject, QEvent*  e);
   QStateMachine*  machine(QAbstractState* theWrappedObject) const;
   void onEntry(QAbstractState* theWrappedObject, QEvent*  event);
   void onExit(QAbstractState* theWrappedObject, QEvent*  event);
   QState*  parentState(QAbstractState* theWrappedObject) const;
};





class PythonQtShell_QAbstractTransition : public QAbstractTransition
{
public:
    PythonQtShell_QAbstractTransition(QState*  sourceState = 0):QAbstractTransition(sourceState),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractTransition();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractTransition : public QAbstractTransition
{ public:
inline bool  promoted_event(QEvent*  e) { return QAbstractTransition::event(e); }
inline bool  promoted_eventTest(QEvent*  event) { return this->eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { this->onTransition(event); }
};

class PythonQtWrapper_QAbstractTransition : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractTransition* new_QAbstractTransition(QState*  sourceState = 0);
void delete_QAbstractTransition(QAbstractTransition* obj) { delete obj; } 
   void addAnimation(QAbstractTransition* theWrappedObject, QAbstractAnimation*  animation);
   QList<QAbstractAnimation* >  animations(QAbstractTransition* theWrappedObject) const;
   bool  event(QAbstractTransition* theWrappedObject, QEvent*  e);
   bool  eventTest(QAbstractTransition* theWrappedObject, QEvent*  event);
   QStateMachine*  machine(QAbstractTransition* theWrappedObject) const;
   void onTransition(QAbstractTransition* theWrappedObject, QEvent*  event);
   void removeAnimation(QAbstractTransition* theWrappedObject, QAbstractAnimation*  animation);
   void setTargetState(QAbstractTransition* theWrappedObject, QAbstractState*  target);
   void setTargetStates(QAbstractTransition* theWrappedObject, const QList<QAbstractState* >&  targets);
   QState*  sourceState(QAbstractTransition* theWrappedObject) const;
   QAbstractState*  targetState(QAbstractTransition* theWrappedObject) const;
   QList<QAbstractState* >  targetStates(QAbstractTransition* theWrappedObject) const;
};





class PythonQtShell_QAnimationGroup : public QAnimationGroup
{
public:
    PythonQtShell_QAnimationGroup(QObject*  parent = 0):QAnimationGroup(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAnimationGroup();

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

class PythonQtPublicPromoter_QAnimationGroup : public QAnimationGroup
{ public:
inline bool  promoted_event(QEvent*  event) { return QAnimationGroup::event(event); }
};

class PythonQtWrapper_QAnimationGroup : public QObject
{ Q_OBJECT
public:
public slots:
QAnimationGroup* new_QAnimationGroup(QObject*  parent = 0);
void delete_QAnimationGroup(QAnimationGroup* obj) { delete obj; } 
   void addAnimation(QAnimationGroup* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractAnimation* >  animation);
   QAbstractAnimation*  animationAt(QAnimationGroup* theWrappedObject, int  index) const;
   int  animationCount(QAnimationGroup* theWrappedObject) const;
   void clear(QAnimationGroup* theWrappedObject);
   bool  event(QAnimationGroup* theWrappedObject, QEvent*  event);
   int  indexOfAnimation(QAnimationGroup* theWrappedObject, QAbstractAnimation*  animation) const;
   void insertAnimation(QAnimationGroup* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QAbstractAnimation* >  animation);
   void removeAnimation(QAnimationGroup* theWrappedObject, PythonQtPassOwnershipToPython<QAbstractAnimation* >  animation);
   PythonQtPassOwnershipToPython<QAbstractAnimation*  > takeAnimation(QAnimationGroup* theWrappedObject, int  index);
};





class PythonQtShell_QBasicMutex : public QBasicMutex
{
public:
    PythonQtShell_QBasicMutex():QBasicMutex(),_wrapper(NULL) {};

   ~PythonQtShell_QBasicMutex();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QBasicMutex : public QObject
{ Q_OBJECT
public:
public slots:
QBasicMutex* new_QBasicMutex();
void delete_QBasicMutex(QBasicMutex* obj) { delete obj; } 
   bool  isRecursive(QBasicMutex* theWrappedObject);
   void lock(QBasicMutex* theWrappedObject);
   bool  tryLock(QBasicMutex* theWrappedObject);
   void unlock(QBasicMutex* theWrappedObject);
};





class PythonQtWrapper_QBasicTimer : public QObject
{ Q_OBJECT
public:
public slots:
QBasicTimer* new_QBasicTimer();
QBasicTimer* new_QBasicTimer(const QBasicTimer& other) {
QBasicTimer* a = new QBasicTimer();
*((QBasicTimer*)a) = other;
return a; }
void delete_QBasicTimer(QBasicTimer* obj) { delete obj; } 
   bool  isActive(QBasicTimer* theWrappedObject) const;
   void start(QBasicTimer* theWrappedObject, int  msec, QObject*  obj);
   void start(QBasicTimer* theWrappedObject, int  msec, Qt::TimerType  timerType, QObject*  obj);
   void stop(QBasicTimer* theWrappedObject);
   int  timerId(QBasicTimer* theWrappedObject) const;
};





class PythonQtShell_QBuffer : public QBuffer
{
public:
    PythonQtShell_QBuffer(QByteArray*  buf, QObject*  parent = 0):QBuffer(buf, parent),_wrapper(NULL) {};
    PythonQtShell_QBuffer(QObject*  parent = 0):QBuffer(parent),_wrapper(NULL) {};

   ~PythonQtShell_QBuffer();

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
virtual bool  open(QIODevice::OpenMode  openMode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  off);
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QBuffer : public QBuffer
{ public:
inline bool  promoted_atEnd() const { return QBuffer::atEnd(); }
inline bool  promoted_canReadLine() const { return QBuffer::canReadLine(); }
inline void promoted_close() { QBuffer::close(); }
inline void promoted_connectNotify(const QMetaMethod&  arg__1) { QBuffer::connectNotify(arg__1); }
inline void promoted_disconnectNotify(const QMetaMethod&  arg__1) { QBuffer::disconnectNotify(arg__1); }
inline bool  promoted_open(QIODevice::OpenMode  openMode) { return QBuffer::open(openMode); }
inline qint64  promoted_pos() const { return QBuffer::pos(); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QBuffer::readData(data, maxlen); }
inline bool  promoted_seek(qint64  off) { return QBuffer::seek(off); }
inline qint64  promoted_size() const { return QBuffer::size(); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QBuffer::writeData(data, len); }
};

class PythonQtWrapper_QBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QBuffer* new_QBuffer(QByteArray*  buf, QObject*  parent = 0);
QBuffer* new_QBuffer(QObject*  parent = 0);
void delete_QBuffer(QBuffer* obj) { delete obj; } 
   bool  atEnd(QBuffer* theWrappedObject) const;
   const QByteArray*  buffer(QBuffer* theWrappedObject) const;
   bool  canReadLine(QBuffer* theWrappedObject) const;
   void close(QBuffer* theWrappedObject);
   void connectNotify(QBuffer* theWrappedObject, const QMetaMethod&  arg__1);
   const QByteArray*  data(QBuffer* theWrappedObject) const;
   void disconnectNotify(QBuffer* theWrappedObject, const QMetaMethod&  arg__1);
   bool  open(QBuffer* theWrappedObject, QIODevice::OpenMode  openMode);
   qint64  pos(QBuffer* theWrappedObject) const;
   qint64  readData(QBuffer* theWrappedObject, char*  data, qint64  maxlen);
   bool  seek(QBuffer* theWrappedObject, qint64  off);
   void setBuffer(QBuffer* theWrappedObject, QByteArray*  a);
   void setData(QBuffer* theWrappedObject, const QByteArray&  data);
   qint64  size(QBuffer* theWrappedObject) const;
   qint64  writeData(QBuffer* theWrappedObject, const char*  data, qint64  len);
};





class PythonQtWrapper_QByteArrayMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QByteArrayMatcher* new_QByteArrayMatcher();
QByteArrayMatcher* new_QByteArrayMatcher(const QByteArray&  pattern);
QByteArrayMatcher* new_QByteArrayMatcher(const QByteArrayMatcher&  other);
QByteArrayMatcher* new_QByteArrayMatcher(const char*  pattern, int  length);
void delete_QByteArrayMatcher(QByteArrayMatcher* obj) { delete obj; } 
   int  indexIn(QByteArrayMatcher* theWrappedObject, const QByteArray&  ba, int  from = 0) const;
   int  indexIn(QByteArrayMatcher* theWrappedObject, const char*  str, int  len, int  from = 0) const;
   QByteArray  pattern(QByteArrayMatcher* theWrappedObject) const;
   void setPattern(QByteArrayMatcher* theWrappedObject, const QByteArray&  pattern);
};





class PythonQtShell_QChildEvent : public QChildEvent
{
public:
    PythonQtShell_QChildEvent(QEvent::Type  type, QObject*  child):QChildEvent(type, child),_wrapper(NULL) {};

   ~PythonQtShell_QChildEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QChildEvent : public QObject
{ Q_OBJECT
public:
public slots:
QChildEvent* new_QChildEvent(QEvent::Type  type, QObject*  child);
void delete_QChildEvent(QChildEvent* obj) { delete obj; } 
   bool  added(QChildEvent* theWrappedObject) const;
   QObject*  child(QChildEvent* theWrappedObject) const;
   bool  polished(QChildEvent* theWrappedObject) const;
   bool  removed(QChildEvent* theWrappedObject) const;
};





class PythonQtPublicPromoter_QCoreApplication : public QCoreApplication
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QCoreApplication::event(arg__1); }
inline bool  promoted_notify(QObject*  arg__1, QEvent*  arg__2) { return QCoreApplication::notify(arg__1, arg__2); }
};

class PythonQtWrapper_QCoreApplication : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  ApplicationFlags = QCoreApplication::ApplicationFlags};
public slots:
void delete_QCoreApplication(QCoreApplication* obj) { delete obj; } 
   void static_QCoreApplication_addLibraryPath(const QString&  arg__1);
   QString  static_QCoreApplication_applicationDirPath();
   QString  static_QCoreApplication_applicationFilePath();
   QString  static_QCoreApplication_applicationName();
   qint64  static_QCoreApplication_applicationPid();
   QString  static_QCoreApplication_applicationVersion();
   bool  static_QCoreApplication_closingDown();
   bool  event(QCoreApplication* theWrappedObject, QEvent*  arg__1);
   QAbstractEventDispatcher*  static_QCoreApplication_eventDispatcher();
   int  static_QCoreApplication_exec();
   void static_QCoreApplication_exit(int  retcode = 0);
   void static_QCoreApplication_flush();
   bool  static_QCoreApplication_hasPendingEvents();
   bool  static_QCoreApplication_installTranslator(QTranslator*  messageFile);
   QCoreApplication*  static_QCoreApplication_instance();
   bool  static_QCoreApplication_isQuitLockEnabled();
   QStringList  static_QCoreApplication_libraryPaths();
   bool  notify(QCoreApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   QString  static_QCoreApplication_organizationDomain();
   QString  static_QCoreApplication_organizationName();
   void static_QCoreApplication_postEvent(QObject*  receiver, PythonQtPassOwnershipToCPP<QEvent* >  event, int  priority = Qt::NormalEventPriority);
   void static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   void static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags, int  maxtime);
   void static_QCoreApplication_removeLibraryPath(const QString&  arg__1);
   void static_QCoreApplication_removePostedEvents(QObject*  receiver, int  eventType = 0);
   bool  static_QCoreApplication_removeTranslator(QTranslator*  messageFile);
   bool  static_QCoreApplication_sendEvent(QObject*  receiver, QEvent*  event);
   void static_QCoreApplication_sendPostedEvents(QObject*  receiver = 0, int  event_type = 0);
   void static_QCoreApplication_setApplicationName(const QString&  application);
   void static_QCoreApplication_setApplicationVersion(const QString&  version);
   void static_QCoreApplication_setAttribute(Qt::ApplicationAttribute  attribute, bool  on = true);
   void static_QCoreApplication_setEventDispatcher(QAbstractEventDispatcher*  eventDispatcher);
   void static_QCoreApplication_setLibraryPaths(const QStringList&  arg__1);
   void static_QCoreApplication_setOrganizationDomain(const QString&  orgDomain);
   void static_QCoreApplication_setOrganizationName(const QString&  orgName);
   void static_QCoreApplication_setQuitLockEnabled(bool  enabled);
   bool  static_QCoreApplication_startingUp();
   bool  static_QCoreApplication_testAttribute(Qt::ApplicationAttribute  attribute);
   QString  static_QCoreApplication_translate(const char*  context, const char*  key, const char*  disambiguation = 0, int  n = -1);
};





class PythonQtWrapper_QCryptographicHash : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Algorithm )
enum Algorithm{
  Md4 = QCryptographicHash::Md4,   Md5 = QCryptographicHash::Md5,   Sha1 = QCryptographicHash::Sha1,   Sha224 = QCryptographicHash::Sha224,   Sha256 = QCryptographicHash::Sha256,   Sha384 = QCryptographicHash::Sha384,   Sha512 = QCryptographicHash::Sha512};
public slots:
QCryptographicHash* new_QCryptographicHash(QCryptographicHash::Algorithm  method);
void delete_QCryptographicHash(QCryptographicHash* obj) { delete obj; } 
   bool  addData(QCryptographicHash* theWrappedObject, QIODevice*  device);
   void addData(QCryptographicHash* theWrappedObject, const QByteArray&  data);
   QByteArray  static_QCryptographicHash_hash(const QByteArray&  data, QCryptographicHash::Algorithm  method);
   void reset(QCryptographicHash* theWrappedObject);
   QByteArray  result(QCryptographicHash* theWrappedObject) const;
};





class PythonQtWrapper_QDataStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ByteOrder FloatingPointPrecision Status Version )
enum ByteOrder{
  BigEndian = QDataStream::BigEndian,   LittleEndian = QDataStream::LittleEndian};
enum FloatingPointPrecision{
  SinglePrecision = QDataStream::SinglePrecision,   DoublePrecision = QDataStream::DoublePrecision};
enum Status{
  Ok = QDataStream::Ok,   ReadPastEnd = QDataStream::ReadPastEnd,   ReadCorruptData = QDataStream::ReadCorruptData,   WriteFailed = QDataStream::WriteFailed};
enum Version{
  Qt_1_0 = QDataStream::Qt_1_0,   Qt_2_0 = QDataStream::Qt_2_0,   Qt_2_1 = QDataStream::Qt_2_1,   Qt_3_0 = QDataStream::Qt_3_0,   Qt_3_1 = QDataStream::Qt_3_1,   Qt_3_3 = QDataStream::Qt_3_3,   Qt_4_0 = QDataStream::Qt_4_0,   Qt_4_1 = QDataStream::Qt_4_1,   Qt_4_2 = QDataStream::Qt_4_2,   Qt_4_3 = QDataStream::Qt_4_3,   Qt_4_4 = QDataStream::Qt_4_4,   Qt_4_5 = QDataStream::Qt_4_5,   Qt_4_6 = QDataStream::Qt_4_6,   Qt_4_7 = QDataStream::Qt_4_7,   Qt_4_8 = QDataStream::Qt_4_8,   Qt_4_9 = QDataStream::Qt_4_9,   Qt_5_0 = QDataStream::Qt_5_0};
public slots:
QDataStream* new_QDataStream();
QDataStream* new_QDataStream(QByteArray*  arg__1, QIODevice::OpenMode  flags);
QDataStream* new_QDataStream(QIODevice*  arg__1);
QDataStream* new_QDataStream(const QByteArray&  arg__1);
void delete_QDataStream(QDataStream* obj) { delete obj; } 
   bool  atEnd(QDataStream* theWrappedObject) const;
   QDataStream::ByteOrder  byteOrder(QDataStream* theWrappedObject) const;
   QIODevice*  device(QDataStream* theWrappedObject) const;
   QDataStream::FloatingPointPrecision  floatingPointPrecision(QDataStream* theWrappedObject) const;
   void resetStatus(QDataStream* theWrappedObject);
   void setByteOrder(QDataStream* theWrappedObject, QDataStream::ByteOrder  arg__1);
   void setDevice(QDataStream* theWrappedObject, QIODevice*  arg__1);
   void setFloatingPointPrecision(QDataStream* theWrappedObject, QDataStream::FloatingPointPrecision  precision);
   void setStatus(QDataStream* theWrappedObject, QDataStream::Status  status);
   void setVersion(QDataStream* theWrappedObject, int  arg__1);
   int  skipRawData(QDataStream* theWrappedObject, int  len);
   QDataStream::Status  status(QDataStream* theWrappedObject) const;
   void unsetDevice(QDataStream* theWrappedObject);
   int  version(QDataStream* theWrappedObject) const;

   QString readQString(QDataStream* d) { QString r; (*d) >> r; return r; }
   QString readString(QDataStream* d) { QString r; (*d) >> r; return r; }
   QChar readQChar(QDataStream* d) { QChar r; (*d) >> r; return r; }
   QStringList readQStringList(QDataStream* d) { QStringList r; (*d) >> r; return r; }
   QVariant readQVariant(QDataStream* d) { QVariant r; (*d) >> r; return r; }
   bool readBool(QDataStream* d) { bool r; (*d) >> r; return r; }
   qint8 readInt8(QDataStream* d) { qint8 r; (*d) >> r; return r; }
   quint8 readUInt8(QDataStream* d) { quint8 r; (*d) >> r; return r; }
   qint16 readInt16(QDataStream* d) { qint16 r; (*d) >> r; return r; }
   quint16 readUInt16(QDataStream* d) { quint16 r; (*d) >> r; return r; }
   qint32 readInt32(QDataStream* d) { qint32 r; (*d) >> r; return r; }
   quint32 readUInt32(QDataStream* d) { quint32 r; (*d) >> r; return r; }
   qint64 readInt64(QDataStream* d) { qint64 r; (*d) >> r; return r; }
   quint64 readUInt64(QDataStream* d) { quint64 r; (*d) >> r; return r; }
   float readFloat(QDataStream* d) { float r; (*d) >> r; return r; }
   double readDouble(QDataStream* d) { double r; (*d) >> r; return r; }

   void writeQString(QDataStream* d, const QString& v) { (*d) << v; }
   void writeString(QDataStream* d, const QString& v) { (*d) << v; }
   void writeQChar(QDataStream* d, const QChar& v) { (*d) << v; }
   void writeQStringList(QDataStream* d, const QStringList& v) { (*d) << v; }
   void writeQVariant(QDataStream* d, const QVariant& v) { (*d) << v; }
   void writeBool(QDataStream* d, bool v) { (*d) << v; }
   void writeInt8(QDataStream* d, qint8 v) { (*d) << v; }
   void writeUInt8(QDataStream* d, quint8 v) { (*d) << v; }
   void writeInt16(QDataStream* d, qint16 v) { (*d) << v; }
   void writeUInt16(QDataStream* d, quint16 v) { (*d) << v; }
   void writeInt32(QDataStream* d, qint32 v) { (*d) << v; }
   void writeUInt32(QDataStream* d, quint32 v) { (*d) << v; }
   void writeInt64(QDataStream* d, qint64 v) { (*d) << v; }
   void writeUInt64(QDataStream* d, quint64 v) { (*d) << v; }
   void writeFloat(QDataStream* d, float v) { (*d) << v; }
   void writeDouble(QDataStream* d, double v) { (*d) << v; }

   int writeRawData(QDataStream* d, PyObject* o) {
     bool ok;
     QByteArray r = PythonQtConv::PyObjGetBytes(o, false, ok);
     return (*d).writeRawData(r.constData(), r.size());
   }

   PyObject* readRawData(QDataStream* d, int len) {
     QByteArray r;
     r.resize(len);
     int result = d->readRawData(r.data(), r.size());
     if (result>=0) {
       return PyBytes_FromStringAndSize(r.data(), result);
     } else {
       Py_INCREF(Py_None);
       return Py_None;
     }
   }
    
};





class PythonQtWrapper_QDir : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Filter SortFlag )
Q_FLAGS(Filters SortFlags )
enum Filter{
  Dirs = QDir::Dirs,   Files = QDir::Files,   Drives = QDir::Drives,   NoSymLinks = QDir::NoSymLinks,   AllEntries = QDir::AllEntries,   TypeMask = QDir::TypeMask,   Readable = QDir::Readable,   Writable = QDir::Writable,   Executable = QDir::Executable,   PermissionMask = QDir::PermissionMask,   Modified = QDir::Modified,   Hidden = QDir::Hidden,   System = QDir::System,   AccessMask = QDir::AccessMask,   AllDirs = QDir::AllDirs,   CaseSensitive = QDir::CaseSensitive,   NoDot = QDir::NoDot,   NoDotDot = QDir::NoDotDot,   NoDotAndDotDot = QDir::NoDotAndDotDot,   NoFilter = QDir::NoFilter};
enum SortFlag{
  Name = QDir::Name,   Time = QDir::Time,   Size = QDir::Size,   Unsorted = QDir::Unsorted,   SortByMask = QDir::SortByMask,   DirsFirst = QDir::DirsFirst,   Reversed = QDir::Reversed,   IgnoreCase = QDir::IgnoreCase,   DirsLast = QDir::DirsLast,   LocaleAware = QDir::LocaleAware,   Type = QDir::Type,   NoSort = QDir::NoSort};
Q_DECLARE_FLAGS(Filters, Filter)
Q_DECLARE_FLAGS(SortFlags, SortFlag)
public slots:
QDir* new_QDir(const QDir&  arg__1);
QDir* new_QDir(const QString&  path = QString());
QDir* new_QDir(const QString&  path, const QString&  nameFilter, QDir::SortFlags  sort = QDir::SortFlags(Name | IgnoreCase), QDir::Filters  filter = QDir::AllEntries);
void delete_QDir(QDir* obj) { delete obj; } 
   QString  absoluteFilePath(QDir* theWrappedObject, const QString&  fileName) const;
   QString  absolutePath(QDir* theWrappedObject) const;
   void static_QDir_addSearchPath(const QString&  prefix, const QString&  path);
   QString  canonicalPath(QDir* theWrappedObject) const;
   bool  cd(QDir* theWrappedObject, const QString&  dirName);
   bool  cdUp(QDir* theWrappedObject);
   QString  static_QDir_cleanPath(const QString&  path);
   uint  count(QDir* theWrappedObject) const;
   QDir  static_QDir_current();
   QString  static_QDir_currentPath();
   QString  dirName(QDir* theWrappedObject) const;
   QList<QFileInfo >  static_QDir_drives();
   QList<QFileInfo >  entryInfoList(QDir* theWrappedObject, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QList<QFileInfo >  entryInfoList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QStringList  entryList(QDir* theWrappedObject, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QStringList  entryList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   bool  exists(QDir* theWrappedObject) const;
   bool  exists(QDir* theWrappedObject, const QString&  name) const;
   QString  filePath(QDir* theWrappedObject, const QString&  fileName) const;
   QDir::Filters  filter(QDir* theWrappedObject) const;
   QString  static_QDir_fromNativeSeparators(const QString&  pathName);
   QDir  static_QDir_home();
   QString  static_QDir_homePath();
   bool  isAbsolute(QDir* theWrappedObject) const;
   bool  static_QDir_isAbsolutePath(const QString&  path);
   bool  isReadable(QDir* theWrappedObject) const;
   bool  isRelative(QDir* theWrappedObject) const;
   bool  static_QDir_isRelativePath(const QString&  path);
   bool  isRoot(QDir* theWrappedObject) const;
   bool  makeAbsolute(QDir* theWrappedObject);
   bool  static_QDir_match(const QString&  filter, const QString&  fileName);
   bool  static_QDir_match(const QStringList&  filters, const QString&  fileName);
   bool  mkdir(QDir* theWrappedObject, const QString&  dirName) const;
   bool  mkpath(QDir* theWrappedObject, const QString&  dirPath) const;
   QStringList  nameFilters(QDir* theWrappedObject) const;
   QStringList  static_QDir_nameFiltersFromString(const QString&  nameFilter);
   bool  __ne__(QDir* theWrappedObject, const QDir&  dir) const;
   bool  __eq__(QDir* theWrappedObject, const QDir&  dir) const;
   QString  operator_subscript(QDir* theWrappedObject, int  arg__1) const;
   QString  path(QDir* theWrappedObject) const;
   void refresh(QDir* theWrappedObject) const;
   QString  relativeFilePath(QDir* theWrappedObject, const QString&  fileName) const;
   bool  remove(QDir* theWrappedObject, const QString&  fileName);
   bool  removeRecursively(QDir* theWrappedObject);
   bool  rename(QDir* theWrappedObject, const QString&  oldName, const QString&  newName);
   bool  rmdir(QDir* theWrappedObject, const QString&  dirName) const;
   bool  rmpath(QDir* theWrappedObject, const QString&  dirPath) const;
   QDir  static_QDir_root();
   QString  static_QDir_rootPath();
   QStringList  static_QDir_searchPaths(const QString&  prefix);
   QChar  static_QDir_separator();
   bool  static_QDir_setCurrent(const QString&  path);
   void setFilter(QDir* theWrappedObject, QDir::Filters  filter);
   void setNameFilters(QDir* theWrappedObject, const QStringList&  nameFilters);
   void setPath(QDir* theWrappedObject, const QString&  path);
   void static_QDir_setSearchPaths(const QString&  prefix, const QStringList&  searchPaths);
   void setSorting(QDir* theWrappedObject, QDir::SortFlags  sort);
   QDir::SortFlags  sorting(QDir* theWrappedObject) const;
   void swap(QDir* theWrappedObject, QDir&  other);
   QDir  static_QDir_temp();
   QString  static_QDir_tempPath();
   QString  static_QDir_toNativeSeparators(const QString&  pathName);
    QString py_toString(QDir*);
};





class PythonQtWrapper_QDirIterator : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IteratorFlag )
Q_FLAGS(IteratorFlags )
enum IteratorFlag{
  NoIteratorFlags = QDirIterator::NoIteratorFlags,   FollowSymlinks = QDirIterator::FollowSymlinks,   Subdirectories = QDirIterator::Subdirectories};
Q_DECLARE_FLAGS(IteratorFlags, IteratorFlag)
public slots:
QDirIterator* new_QDirIterator(const QDir&  dir, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
QDirIterator* new_QDirIterator(const QString&  path, QDir::Filters  filter, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
QDirIterator* new_QDirIterator(const QString&  path, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
QDirIterator* new_QDirIterator(const QString&  path, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
void delete_QDirIterator(QDirIterator* obj) { delete obj; } 
   QFileInfo  fileInfo(QDirIterator* theWrappedObject) const;
   QString  fileName(QDirIterator* theWrappedObject) const;
   QString  filePath(QDirIterator* theWrappedObject) const;
   bool  hasNext(QDirIterator* theWrappedObject) const;
   QString  next(QDirIterator* theWrappedObject);
   QString  path(QDirIterator* theWrappedObject) const;
};





class PythonQtWrapper_QDynamicPropertyChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDynamicPropertyChangeEvent* new_QDynamicPropertyChangeEvent(const QByteArray&  name);
void delete_QDynamicPropertyChangeEvent(QDynamicPropertyChangeEvent* obj) { delete obj; } 
   QByteArray  propertyName(QDynamicPropertyChangeEvent* theWrappedObject) const;
};





class PythonQtWrapper_QEasingCurve : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Linear = QEasingCurve::Linear,   InQuad = QEasingCurve::InQuad,   OutQuad = QEasingCurve::OutQuad,   InOutQuad = QEasingCurve::InOutQuad,   OutInQuad = QEasingCurve::OutInQuad,   InCubic = QEasingCurve::InCubic,   OutCubic = QEasingCurve::OutCubic,   InOutCubic = QEasingCurve::InOutCubic,   OutInCubic = QEasingCurve::OutInCubic,   InQuart = QEasingCurve::InQuart,   OutQuart = QEasingCurve::OutQuart,   InOutQuart = QEasingCurve::InOutQuart,   OutInQuart = QEasingCurve::OutInQuart,   InQuint = QEasingCurve::InQuint,   OutQuint = QEasingCurve::OutQuint,   InOutQuint = QEasingCurve::InOutQuint,   OutInQuint = QEasingCurve::OutInQuint,   InSine = QEasingCurve::InSine,   OutSine = QEasingCurve::OutSine,   InOutSine = QEasingCurve::InOutSine,   OutInSine = QEasingCurve::OutInSine,   InExpo = QEasingCurve::InExpo,   OutExpo = QEasingCurve::OutExpo,   InOutExpo = QEasingCurve::InOutExpo,   OutInExpo = QEasingCurve::OutInExpo,   InCirc = QEasingCurve::InCirc,   OutCirc = QEasingCurve::OutCirc,   InOutCirc = QEasingCurve::InOutCirc,   OutInCirc = QEasingCurve::OutInCirc,   InElastic = QEasingCurve::InElastic,   OutElastic = QEasingCurve::OutElastic,   InOutElastic = QEasingCurve::InOutElastic,   OutInElastic = QEasingCurve::OutInElastic,   InBack = QEasingCurve::InBack,   OutBack = QEasingCurve::OutBack,   InOutBack = QEasingCurve::InOutBack,   OutInBack = QEasingCurve::OutInBack,   InBounce = QEasingCurve::InBounce,   OutBounce = QEasingCurve::OutBounce,   InOutBounce = QEasingCurve::InOutBounce,   OutInBounce = QEasingCurve::OutInBounce,   InCurve = QEasingCurve::InCurve,   OutCurve = QEasingCurve::OutCurve,   SineCurve = QEasingCurve::SineCurve,   CosineCurve = QEasingCurve::CosineCurve,   BezierSpline = QEasingCurve::BezierSpline,   TCBSpline = QEasingCurve::TCBSpline,   Custom = QEasingCurve::Custom,   NCurveTypes = QEasingCurve::NCurveTypes};
public slots:
QEasingCurve* new_QEasingCurve(QEasingCurve::Type  type = QEasingCurve::Linear);
QEasingCurve* new_QEasingCurve(const QEasingCurve&  other);
void delete_QEasingCurve(QEasingCurve* obj) { delete obj; } 
   void addCubicBezierSegment(QEasingCurve* theWrappedObject, const QPointF&  c1, const QPointF&  c2, const QPointF&  endPoint);
   void addTCBSegment(QEasingCurve* theWrappedObject, const QPointF&  nextPoint, qreal  t, qreal  c, qreal  b);
   qreal  amplitude(QEasingCurve* theWrappedObject) const;
   bool  __ne__(QEasingCurve* theWrappedObject, const QEasingCurve&  other) const;
   void writeTo(QEasingCurve* theWrappedObject, QDataStream&  arg__1);
   QEasingCurve*  operator_assign(QEasingCurve* theWrappedObject, const QEasingCurve&  other);
   bool  __eq__(QEasingCurve* theWrappedObject, const QEasingCurve&  other) const;
   void readFrom(QEasingCurve* theWrappedObject, QDataStream&  arg__1);
   qreal  overshoot(QEasingCurve* theWrappedObject) const;
   qreal  period(QEasingCurve* theWrappedObject) const;
   void setAmplitude(QEasingCurve* theWrappedObject, qreal  amplitude);
   void setOvershoot(QEasingCurve* theWrappedObject, qreal  overshoot);
   void setPeriod(QEasingCurve* theWrappedObject, qreal  period);
   void setType(QEasingCurve* theWrappedObject, QEasingCurve::Type  type);
   void swap(QEasingCurve* theWrappedObject, QEasingCurve&  other);
   QVector<QPointF >  toCubicSpline(QEasingCurve* theWrappedObject) const;
   QEasingCurve::Type  type(QEasingCurve* theWrappedObject) const;
   qreal  valueForProgress(QEasingCurve* theWrappedObject, qreal  progress) const;
    QString py_toString(QEasingCurve*);
};





class PythonQtShell_QElapsedTimer : public QElapsedTimer
{
public:
    PythonQtShell_QElapsedTimer():QElapsedTimer(),_wrapper(NULL) {};

   ~PythonQtShell_QElapsedTimer();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QElapsedTimer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ClockType )
enum ClockType{
  SystemTime = QElapsedTimer::SystemTime,   MonotonicClock = QElapsedTimer::MonotonicClock,   TickCounter = QElapsedTimer::TickCounter,   MachAbsoluteTime = QElapsedTimer::MachAbsoluteTime,   PerformanceCounter = QElapsedTimer::PerformanceCounter};
public slots:
QElapsedTimer* new_QElapsedTimer();
void delete_QElapsedTimer(QElapsedTimer* obj) { delete obj; } 
   QElapsedTimer::ClockType  static_QElapsedTimer_clockType();
   qint64  elapsed(QElapsedTimer* theWrappedObject) const;
   bool  hasExpired(QElapsedTimer* theWrappedObject, qint64  timeout) const;
   void invalidate(QElapsedTimer* theWrappedObject);
   bool  static_QElapsedTimer_isMonotonic();
   bool  isValid(QElapsedTimer* theWrappedObject) const;
   qint64  msecsSinceReference(QElapsedTimer* theWrappedObject) const;
   qint64  msecsTo(QElapsedTimer* theWrappedObject, const QElapsedTimer&  other) const;
   qint64  nsecsElapsed(QElapsedTimer* theWrappedObject) const;
   bool  __ne__(QElapsedTimer* theWrappedObject, const QElapsedTimer&  other) const;
   bool  __eq__(QElapsedTimer* theWrappedObject, const QElapsedTimer&  other) const;
   qint64  restart(QElapsedTimer* theWrappedObject);
   qint64  secsTo(QElapsedTimer* theWrappedObject, const QElapsedTimer&  other) const;
   void start(QElapsedTimer* theWrappedObject);
};





class PythonQtShell_QEvent : public QEvent
{
public:
    PythonQtShell_QEvent(QEvent::Type  type):QEvent(type),_wrapper(NULL) {};
    PythonQtShell_QEvent(const QEvent&  other):QEvent(other),_wrapper(NULL) {};

   ~PythonQtShell_QEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  None = QEvent::None,   Timer = QEvent::Timer,   MouseButtonPress = QEvent::MouseButtonPress,   MouseButtonRelease = QEvent::MouseButtonRelease,   MouseButtonDblClick = QEvent::MouseButtonDblClick,   MouseMove = QEvent::MouseMove,   KeyPress = QEvent::KeyPress,   KeyRelease = QEvent::KeyRelease,   FocusIn = QEvent::FocusIn,   FocusOut = QEvent::FocusOut,   FocusAboutToChange = QEvent::FocusAboutToChange,   Enter = QEvent::Enter,   Leave = QEvent::Leave,   Paint = QEvent::Paint,   Move = QEvent::Move,   Resize = QEvent::Resize,   Create = QEvent::Create,   Destroy = QEvent::Destroy,   Show = QEvent::Show,   Hide = QEvent::Hide,   Close = QEvent::Close,   Quit = QEvent::Quit,   ParentChange = QEvent::ParentChange,   ParentAboutToChange = QEvent::ParentAboutToChange,   ThreadChange = QEvent::ThreadChange,   WindowActivate = QEvent::WindowActivate,   WindowDeactivate = QEvent::WindowDeactivate,   ShowToParent = QEvent::ShowToParent,   HideToParent = QEvent::HideToParent,   Wheel = QEvent::Wheel,   WindowTitleChange = QEvent::WindowTitleChange,   WindowIconChange = QEvent::WindowIconChange,   ApplicationWindowIconChange = QEvent::ApplicationWindowIconChange,   ApplicationFontChange = QEvent::ApplicationFontChange,   ApplicationLayoutDirectionChange = QEvent::ApplicationLayoutDirectionChange,   ApplicationPaletteChange = QEvent::ApplicationPaletteChange,   PaletteChange = QEvent::PaletteChange,   Clipboard = QEvent::Clipboard,   Speech = QEvent::Speech,   MetaCall = QEvent::MetaCall,   SockAct = QEvent::SockAct,   WinEventAct = QEvent::WinEventAct,   DeferredDelete = QEvent::DeferredDelete,   DragEnter = QEvent::DragEnter,   DragMove = QEvent::DragMove,   DragLeave = QEvent::DragLeave,   Drop = QEvent::Drop,   DragResponse = QEvent::DragResponse,   ChildAdded = QEvent::ChildAdded,   ChildPolished = QEvent::ChildPolished,   ChildRemoved = QEvent::ChildRemoved,   ShowWindowRequest = QEvent::ShowWindowRequest,   PolishRequest = QEvent::PolishRequest,   Polish = QEvent::Polish,   LayoutRequest = QEvent::LayoutRequest,   UpdateRequest = QEvent::UpdateRequest,   UpdateLater = QEvent::UpdateLater,   EmbeddingControl = QEvent::EmbeddingControl,   ActivateControl = QEvent::ActivateControl,   DeactivateControl = QEvent::DeactivateControl,   ContextMenu = QEvent::ContextMenu,   InputMethod = QEvent::InputMethod,   TabletMove = QEvent::TabletMove,   LocaleChange = QEvent::LocaleChange,   LanguageChange = QEvent::LanguageChange,   LayoutDirectionChange = QEvent::LayoutDirectionChange,   Style = QEvent::Style,   TabletPress = QEvent::TabletPress,   TabletRelease = QEvent::TabletRelease,   OkRequest = QEvent::OkRequest,   HelpRequest = QEvent::HelpRequest,   IconDrag = QEvent::IconDrag,   FontChange = QEvent::FontChange,   EnabledChange = QEvent::EnabledChange,   ActivationChange = QEvent::ActivationChange,   StyleChange = QEvent::StyleChange,   IconTextChange = QEvent::IconTextChange,   ModifiedChange = QEvent::ModifiedChange,   MouseTrackingChange = QEvent::MouseTrackingChange,   WindowBlocked = QEvent::WindowBlocked,   WindowUnblocked = QEvent::WindowUnblocked,   WindowStateChange = QEvent::WindowStateChange,   ToolTip = QEvent::ToolTip,   WhatsThis = QEvent::WhatsThis,   StatusTip = QEvent::StatusTip,   ActionChanged = QEvent::ActionChanged,   ActionAdded = QEvent::ActionAdded,   ActionRemoved = QEvent::ActionRemoved,   FileOpen = QEvent::FileOpen,   Shortcut = QEvent::Shortcut,   ShortcutOverride = QEvent::ShortcutOverride,   WhatsThisClicked = QEvent::WhatsThisClicked,   ToolBarChange = QEvent::ToolBarChange,   ApplicationActivate = QEvent::ApplicationActivate,   ApplicationActivated = QEvent::ApplicationActivated,   ApplicationDeactivate = QEvent::ApplicationDeactivate,   ApplicationDeactivated = QEvent::ApplicationDeactivated,   QueryWhatsThis = QEvent::QueryWhatsThis,   EnterWhatsThisMode = QEvent::EnterWhatsThisMode,   LeaveWhatsThisMode = QEvent::LeaveWhatsThisMode,   ZOrderChange = QEvent::ZOrderChange,   HoverEnter = QEvent::HoverEnter,   HoverLeave = QEvent::HoverLeave,   HoverMove = QEvent::HoverMove,   AcceptDropsChange = QEvent::AcceptDropsChange,   ZeroTimerEvent = QEvent::ZeroTimerEvent,   GraphicsSceneMouseMove = QEvent::GraphicsSceneMouseMove,   GraphicsSceneMousePress = QEvent::GraphicsSceneMousePress,   GraphicsSceneMouseRelease = QEvent::GraphicsSceneMouseRelease,   GraphicsSceneMouseDoubleClick = QEvent::GraphicsSceneMouseDoubleClick,   GraphicsSceneContextMenu = QEvent::GraphicsSceneContextMenu,   GraphicsSceneHoverEnter = QEvent::GraphicsSceneHoverEnter,   GraphicsSceneHoverMove = QEvent::GraphicsSceneHoverMove,   GraphicsSceneHoverLeave = QEvent::GraphicsSceneHoverLeave,   GraphicsSceneHelp = QEvent::GraphicsSceneHelp,   GraphicsSceneDragEnter = QEvent::GraphicsSceneDragEnter,   GraphicsSceneDragMove = QEvent::GraphicsSceneDragMove,   GraphicsSceneDragLeave = QEvent::GraphicsSceneDragLeave,   GraphicsSceneDrop = QEvent::GraphicsSceneDrop,   GraphicsSceneWheel = QEvent::GraphicsSceneWheel,   KeyboardLayoutChange = QEvent::KeyboardLayoutChange,   DynamicPropertyChange = QEvent::DynamicPropertyChange,   TabletEnterProximity = QEvent::TabletEnterProximity,   TabletLeaveProximity = QEvent::TabletLeaveProximity,   NonClientAreaMouseMove = QEvent::NonClientAreaMouseMove,   NonClientAreaMouseButtonPress = QEvent::NonClientAreaMouseButtonPress,   NonClientAreaMouseButtonRelease = QEvent::NonClientAreaMouseButtonRelease,   NonClientAreaMouseButtonDblClick = QEvent::NonClientAreaMouseButtonDblClick,   MacSizeChange = QEvent::MacSizeChange,   ContentsRectChange = QEvent::ContentsRectChange,   MacGLWindowChange = QEvent::MacGLWindowChange,   FutureCallOut = QEvent::FutureCallOut,   GraphicsSceneResize = QEvent::GraphicsSceneResize,   GraphicsSceneMove = QEvent::GraphicsSceneMove,   CursorChange = QEvent::CursorChange,   ToolTipChange = QEvent::ToolTipChange,   NetworkReplyUpdated = QEvent::NetworkReplyUpdated,   GrabMouse = QEvent::GrabMouse,   UngrabMouse = QEvent::UngrabMouse,   GrabKeyboard = QEvent::GrabKeyboard,   UngrabKeyboard = QEvent::UngrabKeyboard,   MacGLClearDrawable = QEvent::MacGLClearDrawable,   StateMachineSignal = QEvent::StateMachineSignal,   StateMachineWrapped = QEvent::StateMachineWrapped,   TouchBegin = QEvent::TouchBegin,   TouchUpdate = QEvent::TouchUpdate,   TouchEnd = QEvent::TouchEnd,   NativeGesture = QEvent::NativeGesture,   RequestSoftwareInputPanel = QEvent::RequestSoftwareInputPanel,   CloseSoftwareInputPanel = QEvent::CloseSoftwareInputPanel,   WinIdChange = QEvent::WinIdChange,   Gesture = QEvent::Gesture,   GestureOverride = QEvent::GestureOverride,   ScrollPrepare = QEvent::ScrollPrepare,   Scroll = QEvent::Scroll,   Expose = QEvent::Expose,   InputMethodQuery = QEvent::InputMethodQuery,   OrientationChange = QEvent::OrientationChange,   TouchCancel = QEvent::TouchCancel,   ThemeChange = QEvent::ThemeChange,   SockClose = QEvent::SockClose,   PlatformPanel = QEvent::PlatformPanel,   StyleAnimationUpdate = QEvent::StyleAnimationUpdate,   User = QEvent::User,   MaxUser = QEvent::MaxUser};
public slots:
QEvent* new_QEvent(QEvent::Type  type);
QEvent* new_QEvent(const QEvent&  other);
void delete_QEvent(QEvent* obj) { delete obj; } 
   void accept(QEvent* theWrappedObject);
   void ignore(QEvent* theWrappedObject);
   bool  isAccepted(QEvent* theWrappedObject) const;
   QEvent*  operator_assign(QEvent* theWrappedObject, const QEvent&  other);
   int  static_QEvent_registerEventType(int  hint = -1);
   void setAccepted(QEvent* theWrappedObject, bool  accepted);
   bool  spontaneous(QEvent* theWrappedObject) const;
   QEvent::Type  type(QEvent* theWrappedObject) const;
    QString py_toString(QEvent*);
};





class PythonQtShell_QEventLoop : public QEventLoop
{
public:
    PythonQtShell_QEventLoop(QObject*  parent = 0):QEventLoop(parent),_wrapper(NULL) {};

   ~PythonQtShell_QEventLoop();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QEventLoop : public QEventLoop
{ public:
inline bool  promoted_event(QEvent*  event) { return QEventLoop::event(event); }
};

class PythonQtWrapper_QEventLoop : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ProcessEventsFlag )
Q_FLAGS(ProcessEventsFlags )
enum ProcessEventsFlag{
  AllEvents = QEventLoop::AllEvents,   ExcludeUserInputEvents = QEventLoop::ExcludeUserInputEvents,   ExcludeSocketNotifiers = QEventLoop::ExcludeSocketNotifiers,   WaitForMoreEvents = QEventLoop::WaitForMoreEvents,   X11ExcludeTimers = QEventLoop::X11ExcludeTimers,   EventLoopExec = QEventLoop::EventLoopExec,   DialogExec = QEventLoop::DialogExec};
Q_DECLARE_FLAGS(ProcessEventsFlags, ProcessEventsFlag)
public slots:
QEventLoop* new_QEventLoop(QObject*  parent = 0);
void delete_QEventLoop(QEventLoop* obj) { delete obj; } 
   bool  event(QEventLoop* theWrappedObject, QEvent*  event);
   int  exec(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   void exit(QEventLoop* theWrappedObject, int  returnCode = 0);
   bool  isRunning(QEventLoop* theWrappedObject) const;
   bool  processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   void processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags, int  maximumTime);
   void wakeUp(QEventLoop* theWrappedObject);
};





class PythonQtShell_QEventTransition : public QEventTransition
{
public:
    PythonQtShell_QEventTransition(QObject*  object, QEvent::Type  type, QState*  sourceState = 0):QEventTransition(object, type, sourceState),_wrapper(NULL) {};
    PythonQtShell_QEventTransition(QState*  sourceState = 0):QEventTransition(sourceState),_wrapper(NULL) {};

   ~PythonQtShell_QEventTransition();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QEventTransition : public QEventTransition
{ public:
inline bool  promoted_event(QEvent*  e) { return QEventTransition::event(e); }
inline bool  promoted_eventTest(QEvent*  event) { return QEventTransition::eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { QEventTransition::onTransition(event); }
};

class PythonQtWrapper_QEventTransition : public QObject
{ Q_OBJECT
public:
public slots:
QEventTransition* new_QEventTransition(QObject*  object, QEvent::Type  type, QState*  sourceState = 0);
QEventTransition* new_QEventTransition(QState*  sourceState = 0);
void delete_QEventTransition(QEventTransition* obj) { delete obj; } 
   bool  event(QEventTransition* theWrappedObject, QEvent*  e);
   QObject*  eventSource(QEventTransition* theWrappedObject) const;
   bool  eventTest(QEventTransition* theWrappedObject, QEvent*  event);
   QEvent::Type  eventType(QEventTransition* theWrappedObject) const;
   void onTransition(QEventTransition* theWrappedObject, QEvent*  event);
   void setEventSource(QEventTransition* theWrappedObject, QObject*  object);
   void setEventType(QEventTransition* theWrappedObject, QEvent::Type  type);
};





class PythonQtShell_QFactoryInterface : public QFactoryInterface
{
public:
    PythonQtShell_QFactoryInterface():QFactoryInterface(),_wrapper(NULL) {};

   ~PythonQtShell_QFactoryInterface();

virtual QStringList  keys() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFactoryInterface : public QFactoryInterface
{ public:
inline QStringList  promoted_keys() const { return this->keys(); }
};

class PythonQtWrapper_QFactoryInterface : public QObject
{ Q_OBJECT
public:
public slots:
QFactoryInterface* new_QFactoryInterface();
void delete_QFactoryInterface(QFactoryInterface* obj) { delete obj; } 
   QStringList  keys(QFactoryInterface* theWrappedObject) const;
};





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
virtual void childEvent(QChildEvent*  arg__1);
virtual void close();
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
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
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFile : public QFile
{ public:
inline QString  promoted_fileName() const { return QFile::fileName(); }
inline bool  promoted_open(QIODevice::OpenMode  flags) { return QFile::open(flags); }
inline QFileDevice::Permissions  promoted_permissions() const { return QFile::permissions(); }
inline bool  promoted_resize(qint64  sz) { return QFile::resize(sz); }
inline bool  promoted_setPermissions(QFileDevice::Permissions  permissionSpec) { return QFile::setPermissions(permissionSpec); }
inline qint64  promoted_size() const { return QFile::size(); }
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
   QString  fileName(QFile* theWrappedObject) const;
   bool  link(QFile* theWrappedObject, const QString&  newName);
   bool  static_QFile_link(const QString&  oldname, const QString&  newName);
   bool  open(QFile* theWrappedObject, QIODevice::OpenMode  flags);
   bool  open(QFile* theWrappedObject, int  fd, QIODevice::OpenMode  ioFlags, QFileDevice::FileHandleFlags  handleFlags = QFileDevice::DontCloseHandle);
   QFileDevice::Permissions  permissions(QFile* theWrappedObject) const;
   QFileDevice::Permissions  static_QFile_permissions(const QString&  filename);
   bool  remove(QFile* theWrappedObject);
   bool  static_QFile_remove(const QString&  fileName);
   bool  rename(QFile* theWrappedObject, const QString&  newName);
   bool  static_QFile_rename(const QString&  oldName, const QString&  newName);
   bool  static_QFile_resize(const QString&  filename, qint64  sz);
   bool  resize(QFile* theWrappedObject, qint64  sz);
   void setFileName(QFile* theWrappedObject, const QString&  name);
   bool  setPermissions(QFile* theWrappedObject, QFileDevice::Permissions  permissionSpec);
   bool  static_QFile_setPermissions(const QString&  filename, QFileDevice::Permissions  permissionSpec);
   qint64  size(QFile* theWrappedObject) const;
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
virtual void childEvent(QChildEvent*  arg__1);
virtual void close();
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
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
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFileDevice : public QFileDevice
{ public:
inline bool  promoted_atEnd() const { return QFileDevice::atEnd(); }
inline void promoted_close() { QFileDevice::close(); }
inline QString  promoted_fileName() const { return QFileDevice::fileName(); }
inline bool  promoted_isSequential() const { return QFileDevice::isSequential(); }
inline QFileDevice::Permissions  promoted_permissions() const { return QFileDevice::permissions(); }
inline qint64  promoted_pos() const { return QFileDevice::pos(); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QFileDevice::readData(data, maxlen); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return QFileDevice::readLineData(data, maxlen); }
inline bool  promoted_resize(qint64  sz) { return QFileDevice::resize(sz); }
inline bool  promoted_seek(qint64  offset) { return QFileDevice::seek(offset); }
inline bool  promoted_setPermissions(QFileDevice::Permissions  permissionSpec) { return QFileDevice::setPermissions(permissionSpec); }
inline qint64  promoted_size() const { return QFileDevice::size(); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QFileDevice::writeData(data, len); }
};

class PythonQtWrapper_QFileDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FileError FileHandleFlag MemoryMapFlags Permission )
Q_FLAGS(FileHandleFlags Permissions )
enum FileError{
  NoError = QFileDevice::NoError,   ReadError = QFileDevice::ReadError,   WriteError = QFileDevice::WriteError,   FatalError = QFileDevice::FatalError,   ResourceError = QFileDevice::ResourceError,   OpenError = QFileDevice::OpenError,   AbortError = QFileDevice::AbortError,   TimeOutError = QFileDevice::TimeOutError,   UnspecifiedError = QFileDevice::UnspecifiedError,   RemoveError = QFileDevice::RemoveError,   RenameError = QFileDevice::RenameError,   PositionError = QFileDevice::PositionError,   ResizeError = QFileDevice::ResizeError,   PermissionsError = QFileDevice::PermissionsError,   CopyError = QFileDevice::CopyError};
enum FileHandleFlag{
  AutoCloseHandle = QFileDevice::AutoCloseHandle,   DontCloseHandle = QFileDevice::DontCloseHandle};
enum MemoryMapFlags{
  NoOptions = QFileDevice::NoOptions};
enum Permission{
  ReadOwner = QFileDevice::ReadOwner,   WriteOwner = QFileDevice::WriteOwner,   ExeOwner = QFileDevice::ExeOwner,   ReadUser = QFileDevice::ReadUser,   WriteUser = QFileDevice::WriteUser,   ExeUser = QFileDevice::ExeUser,   ReadGroup = QFileDevice::ReadGroup,   WriteGroup = QFileDevice::WriteGroup,   ExeGroup = QFileDevice::ExeGroup,   ReadOther = QFileDevice::ReadOther,   WriteOther = QFileDevice::WriteOther,   ExeOther = QFileDevice::ExeOther};
Q_DECLARE_FLAGS(FileHandleFlags, FileHandleFlag)
Q_DECLARE_FLAGS(Permissions, Permission)
public slots:
QFileDevice* new_QFileDevice();
QFileDevice* new_QFileDevice(QObject*  parent);
void delete_QFileDevice(QFileDevice* obj) { delete obj; } 
   bool  atEnd(QFileDevice* theWrappedObject) const;
   void close(QFileDevice* theWrappedObject);
   QFileDevice::FileError  error(QFileDevice* theWrappedObject) const;
   QString  fileName(QFileDevice* theWrappedObject) const;
   bool  flush(QFileDevice* theWrappedObject);
   int  handle(QFileDevice* theWrappedObject) const;
   bool  isSequential(QFileDevice* theWrappedObject) const;
   uchar*  map(QFileDevice* theWrappedObject, qint64  offset, qint64  size, QFileDevice::MemoryMapFlags  flags = QFileDevice::NoOptions);
   QFileDevice::Permissions  permissions(QFileDevice* theWrappedObject) const;
   qint64  pos(QFileDevice* theWrappedObject) const;
   qint64  readData(QFileDevice* theWrappedObject, char*  data, qint64  maxlen);
   qint64  readLineData(QFileDevice* theWrappedObject, char*  data, qint64  maxlen);
   bool  resize(QFileDevice* theWrappedObject, qint64  sz);
   bool  seek(QFileDevice* theWrappedObject, qint64  offset);
   bool  setPermissions(QFileDevice* theWrappedObject, QFileDevice::Permissions  permissionSpec);
   qint64  size(QFileDevice* theWrappedObject) const;
   bool  unmap(QFileDevice* theWrappedObject, uchar*  address);
   void unsetError(QFileDevice* theWrappedObject);
   qint64  writeData(QFileDevice* theWrappedObject, const char*  data, qint64  len);
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
   QString  bundleName(QFileInfo* theWrappedObject) const;
   bool  caching(QFileInfo* theWrappedObject) const;
   QString  canonicalFilePath(QFileInfo* theWrappedObject) const;
   QString  canonicalPath(QFileInfo* theWrappedObject) const;
   QString  completeBaseName(QFileInfo* theWrappedObject) const;
   QString  completeSuffix(QFileInfo* theWrappedObject) const;
   QDateTime  created(QFileInfo* theWrappedObject) const;
   QDir  dir(QFileInfo* theWrappedObject) const;
   bool  exists(QFileInfo* theWrappedObject) const;
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


