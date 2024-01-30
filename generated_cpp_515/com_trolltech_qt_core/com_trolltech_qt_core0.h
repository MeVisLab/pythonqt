#include <PythonQt.h>
#include <PythonQtConversion.h>
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
#include <qcalendar.h>
#include <qcborarray.h>
#include <qcborcommon.h>
#include <qcbormap.h>
#include <qcborstreamreader.h>
#include <qcborstreamwriter.h>
#include <qcborvalue.h>
#include <qcollator.h>
#include <qcommandlineoption.h>
#include <qcommandlineparser.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcryptographichash.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdeadlinetimer.h>
#include <qevent.h>
#include <qiodevice.h>
#include <qjsonarray.h>
#include <qjsonobject.h>
#include <qjsonvalue.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qmutex.h>
#include <qobject.h>
#include <qregularexpression.h>
#include <qsize.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringlist.h>
#include <qthread.h>
#include <qtranslator.h>
#include <qurl.h>
#include <quuid.h>
#include <qvector.h>



class PythonQtShell_QAbstractAnimation : public QAbstractAnimation
{
public:
    PythonQtShell_QAbstractAnimation(QObject*  parent = nullptr):QAbstractAnimation(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractAnimation() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  currentTime) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractAnimation : public QAbstractAnimation
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_updateCurrentTime(int  currentTime) { this->updateCurrentTime(currentTime); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { this->updateDirection(direction); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline int  py_q_duration() const { return this->duration(); }
inline bool  py_q_event(QEvent*  event) { return QAbstractAnimation::event(event); }
inline void py_q_updateCurrentTime(int  currentTime) { this->updateCurrentTime(currentTime); }
inline void py_q_updateDirection(QAbstractAnimation::Direction  direction) { QAbstractAnimation::updateDirection(direction); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QAbstractAnimation::updateState(newState, oldState); }
};

class PythonQtWrapper_QAbstractAnimation : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DeletionPolicy )
enum DeletionPolicy{
  KeepWhenStopped = QAbstractAnimation::KeepWhenStopped,   DeleteWhenStopped = QAbstractAnimation::DeleteWhenStopped};
public slots:
QAbstractAnimation* new_QAbstractAnimation(QObject*  parent = nullptr);
void delete_QAbstractAnimation(QAbstractAnimation* obj) { delete obj; }
   int  currentLoop(QAbstractAnimation* theWrappedObject) const;
   int  currentLoopTime(QAbstractAnimation* theWrappedObject) const;
   int  currentTime(QAbstractAnimation* theWrappedObject) const;
   QAbstractAnimation::Direction  direction(QAbstractAnimation* theWrappedObject) const;
   int  duration(QAbstractAnimation* theWrappedObject) const;
   int  py_q_duration(QAbstractAnimation* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->py_q_duration());}
   bool  py_q_event(QAbstractAnimation* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->py_q_event(event));}
   QAnimationGroup*  group(QAbstractAnimation* theWrappedObject) const;
   int  loopCount(QAbstractAnimation* theWrappedObject) const;
   void setDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction);
   void setLoopCount(QAbstractAnimation* theWrappedObject, int  loopCount);
   QAbstractAnimation::State  state(QAbstractAnimation* theWrappedObject) const;
   int  totalDuration(QAbstractAnimation* theWrappedObject) const;
   void updateCurrentTime(QAbstractAnimation* theWrappedObject, int  currentTime);
   void py_q_updateCurrentTime(QAbstractAnimation* theWrappedObject, int  currentTime){  (((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->py_q_updateCurrentTime(currentTime));}
   void updateDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction);
   void py_q_updateDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction){  (((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->py_q_updateDirection(direction));}
   void updateState(QAbstractAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
   void py_q_updateState(QAbstractAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtShell_QAbstractItemModel : public QAbstractItemModel
{
public:
    PythonQtShell_QAbstractItemModel(QObject*  parent = nullptr):QAbstractItemModel(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractItemModel() override;

QModelIndex  buddy(const QModelIndex&  index) const override;
bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const override;
bool  canFetchMore(const QModelIndex&  parent) const override;
void childEvent(QChildEvent*  event) override;
int  columnCount(const QModelIndex&  parent = QModelIndex()) const override;
void customEvent(QEvent*  event) override;
QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const override;
bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fetchMore(const QModelIndex&  parent) override;
Qt::ItemFlags  flags(const QModelIndex&  index) const override;
bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const override;
QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const override;
QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const override;
bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
QMap<int , QVariant >  itemData(const QModelIndex&  index) const override;
QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const override;
QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const override;
QStringList  mimeTypes() const override;
bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
QModelIndex  parent(const QModelIndex&  child) const override;
bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
void revert() override;
QHash<int , QByteArray >  roleNames() const override;
int  rowCount(const QModelIndex&  parent = QModelIndex()) const override;
bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) override;
QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const override;
void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) override;
QSize  span(const QModelIndex&  index) const override;
bool  submit() override;
Qt::DropActions  supportedDragActions() const override;
Qt::DropActions  supportedDropActions() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractItemModel : public QAbstractItemModel
{ public:
inline void promoted_beginInsertColumns(const QModelIndex&  parent, int  first, int  last) { this->beginInsertColumns(parent, first, last); }
inline void promoted_beginInsertRows(const QModelIndex&  parent, int  first, int  last) { this->beginInsertRows(parent, first, last); }
inline bool  promoted_beginMoveColumns(const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationColumn) { return this->beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn); }
inline bool  promoted_beginMoveRows(const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationRow) { return this->beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow); }
inline void promoted_beginRemoveColumns(const QModelIndex&  parent, int  first, int  last) { this->beginRemoveColumns(parent, first, last); }
inline void promoted_beginRemoveRows(const QModelIndex&  parent, int  first, int  last) { this->beginRemoveRows(parent, first, last); }
inline void promoted_beginResetModel() { this->beginResetModel(); }
inline void promoted_changePersistentIndex(const QModelIndex&  from, const QModelIndex&  to) { this->changePersistentIndex(from, to); }
inline void promoted_changePersistentIndexList(const QList<QModelIndex >&  from, const QList<QModelIndex >&  to) { this->changePersistentIndexList(from, to); }
inline QModelIndex  promoted_createIndex(int  row, int  column, quintptr  id) const { return this->createIndex(row, column, id); }
inline QModelIndex  promoted_createIndex(int  row, int  column, void*  data = nullptr) const { return this->createIndex(row, column, data); }
inline bool  promoted_decodeData(int  row, int  column, const QModelIndex&  parent, QDataStream&  stream) { return this->decodeData(row, column, parent, stream); }
inline void promoted_encodeData(const QList<QModelIndex >&  indexes, QDataStream&  stream) const { this->encodeData(indexes, stream); }
inline void promoted_endInsertColumns() { this->endInsertColumns(); }
inline void promoted_endInsertRows() { this->endInsertRows(); }
inline void promoted_endMoveColumns() { this->endMoveColumns(); }
inline void promoted_endMoveRows() { this->endMoveRows(); }
inline void promoted_endRemoveColumns() { this->endRemoveColumns(); }
inline void promoted_endRemoveRows() { this->endRemoveRows(); }
inline void promoted_endResetModel() { this->endResetModel(); }
inline QList<QModelIndex >  promoted_persistentIndexList() const { return this->persistentIndexList(); }
inline void promoted_resetInternalData() { this->resetInternalData(); }
inline QModelIndex  py_q_buddy(const QModelIndex&  index) const { return QAbstractItemModel::buddy(index); }
inline bool  py_q_canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const { return QAbstractItemModel::canDropMimeData(data, action, row, column, parent); }
inline bool  py_q_canFetchMore(const QModelIndex&  parent) const { return QAbstractItemModel::canFetchMore(parent); }
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return this->columnCount(parent); }
inline QVariant  py_q_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return this->data(index, role); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractItemModel::dropMimeData(data, action, row, column, parent); }
inline void py_q_fetchMore(const QModelIndex&  parent) { QAbstractItemModel::fetchMore(parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QAbstractItemModel::flags(index); }
inline bool  py_q_hasChildren(const QModelIndex&  parent = QModelIndex()) const { return QAbstractItemModel::hasChildren(parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QAbstractItemModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return this->index(row, column, parent); }
inline bool  py_q_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::insertColumns(column, count, parent); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::insertRows(row, count, parent); }
inline QMap<int , QVariant >  py_q_itemData(const QModelIndex&  index) const { return QAbstractItemModel::itemData(index); }
inline QList<QModelIndex >  py_q_match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { return QAbstractItemModel::match(start, role, value, hits, flags); }
inline QMimeData*  py_q_mimeData(const QList<QModelIndex >&  indexes) const { return QAbstractItemModel::mimeData(indexes); }
inline QStringList  py_q_mimeTypes() const { return QAbstractItemModel::mimeTypes(); }
inline bool  py_q_moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild); }
inline bool  py_q_moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QAbstractItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild); }
inline QModelIndex  py_q_parent(const QModelIndex&  child) const { return this->parent(child); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::removeColumns(column, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::removeRows(row, count, parent); }
inline void py_q_revert() { QAbstractItemModel::revert(); }
inline QHash<int , QByteArray >  py_q_roleNames() const { return QAbstractItemModel::roleNames(); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return this->rowCount(parent); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QAbstractItemModel::setData(index, value, role); }
inline bool  py_q_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QAbstractItemModel::setHeaderData(section, orientation, value, role); }
inline bool  py_q_setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) { return QAbstractItemModel::setItemData(index, roles); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QAbstractItemModel::sibling(row, column, idx); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QAbstractItemModel::sort(column, order); }
inline QSize  py_q_span(const QModelIndex&  index) const { return QAbstractItemModel::span(index); }
inline bool  py_q_submit() { return QAbstractItemModel::submit(); }
inline Qt::DropActions  py_q_supportedDragActions() const { return QAbstractItemModel::supportedDragActions(); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QAbstractItemModel::supportedDropActions(); }
};

class PythonQtWrapper_QAbstractItemModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractItemModel* new_QAbstractItemModel(QObject*  parent = nullptr);
void delete_QAbstractItemModel(QAbstractItemModel* obj) { delete obj; }
   void beginInsertColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginInsertRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   bool  beginMoveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationColumn);
   bool  beginMoveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationRow);
   void beginRemoveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginRemoveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginResetModel(QAbstractItemModel* theWrappedObject);
   QModelIndex  buddy(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   QModelIndex  py_q_buddy(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_buddy(index));}
   bool  canDropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
   bool  py_q_canDropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_canDropMimeData(data, action, row, column, parent));}
   bool  canFetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const;
   bool  py_q_canFetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_canFetchMore(parent));}
   void changePersistentIndex(QAbstractItemModel* theWrappedObject, const QModelIndex&  from, const QModelIndex&  to);
   void changePersistentIndexList(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  from, const QList<QModelIndex >&  to);
   int  columnCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   int  py_q_columnCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_columnCount(parent));}
   QModelIndex  createIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, quintptr  id) const;
   QModelIndex  createIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, void*  data = nullptr) const;
   QVariant  data(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const;
   QVariant  py_q_data(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_data(index, role));}
   bool  decodeData(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent, QDataStream&  stream);
   bool  dropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
   bool  py_q_dropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   void encodeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes, QDataStream&  stream) const;
   void endInsertColumns(QAbstractItemModel* theWrappedObject);
   void endInsertRows(QAbstractItemModel* theWrappedObject);
   void endMoveColumns(QAbstractItemModel* theWrappedObject);
   void endMoveRows(QAbstractItemModel* theWrappedObject);
   void endRemoveColumns(QAbstractItemModel* theWrappedObject);
   void endRemoveRows(QAbstractItemModel* theWrappedObject);
   void endResetModel(QAbstractItemModel* theWrappedObject);
   void fetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent);
   void py_q_fetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent){  (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_fetchMore(parent));}
   Qt::ItemFlags  flags(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   Qt::ItemFlags  py_q_flags(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_flags(index));}
   bool  hasChildren(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   bool  py_q_hasChildren(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_hasChildren(parent));}
   bool  hasIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   QVariant  headerData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
   QVariant  py_q_headerData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QModelIndex  index(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   QModelIndex  py_q_index(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_index(row, column, parent));}
   bool  insertColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent = QModelIndex());
   bool  insertColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  py_q_insertColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_insertColumns(column, count, parent));}
   bool  insertRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent = QModelIndex());
   bool  insertRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   bool  py_q_insertRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   QMap<int , QVariant >  itemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   QMap<int , QVariant >  py_q_itemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_itemData(index));}
   QList<QModelIndex >  match(QAbstractItemModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
   QList<QModelIndex >  py_q_match(QAbstractItemModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_match(start, role, value, hits, flags));}
   PythonQtPassOwnershipToPython<QMimeData*  > mimeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const;
   PythonQtPassOwnershipToPython<QMimeData*  > py_q_mimeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_mimeData(indexes));}
   QStringList  mimeTypes(QAbstractItemModel* theWrappedObject) const;
   QStringList  py_q_mimeTypes(QAbstractItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_mimeTypes());}
   bool  moveColumn(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, const QModelIndex&  destinationParent, int  destinationChild);
   bool  moveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
   bool  py_q_moveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild));}
   bool  moveRow(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, const QModelIndex&  destinationParent, int  destinationChild);
   bool  moveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
   bool  py_q_moveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild));}
   QModelIndex  parent(QAbstractItemModel* theWrappedObject, const QModelIndex&  child) const;
   QModelIndex  py_q_parent(QAbstractItemModel* theWrappedObject, const QModelIndex&  child) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_parent(child));}
   QList<QModelIndex >  persistentIndexList(QAbstractItemModel* theWrappedObject) const;
   bool  removeColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent = QModelIndex());
   bool  removeColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  py_q_removeColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   bool  removeRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent = QModelIndex());
   bool  removeRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   bool  py_q_removeRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   void py_q_revert(QAbstractItemModel* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_revert());}
   QHash<int , QByteArray >  roleNames(QAbstractItemModel* theWrappedObject) const;
   QHash<int , QByteArray >  py_q_roleNames(QAbstractItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_roleNames());}
   int  rowCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   int  py_q_rowCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_rowCount(parent));}
   bool  setData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
   bool  py_q_setData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_setData(index, value, role));}
   bool  setHeaderData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
   bool  py_q_setHeaderData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_setHeaderData(section, orientation, value, role));}
   bool  setItemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles);
   bool  py_q_setItemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_setItemData(index, roles));}
   QModelIndex  sibling(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const;
   QModelIndex  py_q_sibling(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
   void sort(QAbstractItemModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   void py_q_sort(QAbstractItemModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_sort(column, order));}
   QSize  span(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   QSize  py_q_span(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_span(index));}
   bool  py_q_submit(QAbstractItemModel* theWrappedObject){  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_submit());}
   Qt::DropActions  supportedDragActions(QAbstractItemModel* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDragActions(QAbstractItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_supportedDragActions());}
   Qt::DropActions  supportedDropActions(QAbstractItemModel* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDropActions(QAbstractItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->py_q_supportedDropActions());}
};





class PythonQtShell_QAbstractListModel : public QAbstractListModel
{
public:
    PythonQtShell_QAbstractListModel(QObject*  parent = nullptr):QAbstractListModel(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractListModel() override;

QModelIndex  buddy(const QModelIndex&  index) const override;
bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const override;
bool  canFetchMore(const QModelIndex&  parent) const override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const override;
bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fetchMore(const QModelIndex&  parent) override;
Qt::ItemFlags  flags(const QModelIndex&  index) const override;
QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const override;
QModelIndex  index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const override;
bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
QMap<int , QVariant >  itemData(const QModelIndex&  index) const override;
QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const override;
QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const override;
QStringList  mimeTypes() const override;
bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
void revert() override;
QHash<int , QByteArray >  roleNames() const override;
int  rowCount(const QModelIndex&  parent = QModelIndex()) const override;
bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) override;
QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const override;
void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) override;
QSize  span(const QModelIndex&  index) const override;
bool  submit() override;
Qt::DropActions  supportedDragActions() const override;
Qt::DropActions  supportedDropActions() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractListModel : public QAbstractListModel
{ public:
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractListModel::dropMimeData(data, action, row, column, parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QAbstractListModel::flags(index); }
inline QModelIndex  py_q_index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const { return QAbstractListModel::index(row, column, parent); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QAbstractListModel::sibling(row, column, idx); }
};

class PythonQtWrapper_QAbstractListModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractListModel* new_QAbstractListModel(QObject*  parent = nullptr);
void delete_QAbstractListModel(QAbstractListModel* obj) { delete obj; }
   bool  py_q_dropMimeData(QAbstractListModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   Qt::ItemFlags  py_q_flags(QAbstractListModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_flags(index));}
   QModelIndex  py_q_index(QAbstractListModel* theWrappedObject, int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_index(row, column, parent));}
   QModelIndex  py_q_sibling(QAbstractListModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
};





class PythonQtShell_QAbstractState : public QAbstractState
{
public:
    PythonQtShell_QAbstractState(QState*  parent = nullptr):QAbstractState(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractState() override;

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

class PythonQtPublicPromoter_QAbstractState : public QAbstractState
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_onEntry(QEvent*  event) { this->onEntry(event); }
inline void promoted_onExit(QEvent*  event) { this->onExit(event); }
inline bool  py_q_event(QEvent*  e) { return QAbstractState::event(e); }
inline void py_q_onEntry(QEvent*  event) { this->onEntry(event); }
inline void py_q_onExit(QEvent*  event) { this->onExit(event); }
};

class PythonQtWrapper_QAbstractState : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractState* new_QAbstractState(QState*  parent = nullptr);
void delete_QAbstractState(QAbstractState* obj) { delete obj; }
   bool  active(QAbstractState* theWrappedObject) const;
   bool  py_q_event(QAbstractState* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QAbstractState*)theWrappedObject)->py_q_event(e));}
   QStateMachine*  machine(QAbstractState* theWrappedObject) const;
   void onEntry(QAbstractState* theWrappedObject, QEvent*  event);
   void py_q_onEntry(QAbstractState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QAbstractState*)theWrappedObject)->py_q_onEntry(event));}
   void onExit(QAbstractState* theWrappedObject, QEvent*  event);
   void py_q_onExit(QAbstractState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QAbstractState*)theWrappedObject)->py_q_onExit(event));}
   QState*  parentState(QAbstractState* theWrappedObject) const;
};





class PythonQtShell_QAbstractTransition : public QAbstractTransition
{
public:
    PythonQtShell_QAbstractTransition(QState*  sourceState = nullptr):QAbstractTransition(sourceState),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractTransition() override;

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

class PythonQtPublicPromoter_QAbstractTransition : public QAbstractTransition
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  promoted_eventTest(QEvent*  event) { return this->eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { this->onTransition(event); }
inline bool  py_q_event(QEvent*  e) { return QAbstractTransition::event(e); }
inline bool  py_q_eventTest(QEvent*  event) { return this->eventTest(event); }
inline void py_q_onTransition(QEvent*  event) { this->onTransition(event); }
};

class PythonQtWrapper_QAbstractTransition : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractTransition* new_QAbstractTransition(QState*  sourceState = nullptr);
void delete_QAbstractTransition(QAbstractTransition* obj) { delete obj; }
   void addAnimation(QAbstractTransition* theWrappedObject, QAbstractAnimation*  animation);
   QList<QAbstractAnimation* >  animations(QAbstractTransition* theWrappedObject) const;
   bool  py_q_event(QAbstractTransition* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QAbstractTransition*)theWrappedObject)->py_q_event(e));}
   bool  eventTest(QAbstractTransition* theWrappedObject, QEvent*  event);
   bool  py_q_eventTest(QAbstractTransition* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QAbstractTransition*)theWrappedObject)->py_q_eventTest(event));}
   QStateMachine*  machine(QAbstractTransition* theWrappedObject) const;
   void onTransition(QAbstractTransition* theWrappedObject, QEvent*  event);
   void py_q_onTransition(QAbstractTransition* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QAbstractTransition*)theWrappedObject)->py_q_onTransition(event));}
   void removeAnimation(QAbstractTransition* theWrappedObject, QAbstractAnimation*  animation);
   void setTargetState(QAbstractTransition* theWrappedObject, QAbstractState*  target);
   void setTargetStates(QAbstractTransition* theWrappedObject, const QList<QAbstractState* >&  targets);
   void setTransitionType(QAbstractTransition* theWrappedObject, QAbstractTransition::TransitionType  type);
   QState*  sourceState(QAbstractTransition* theWrappedObject) const;
   QAbstractState*  targetState(QAbstractTransition* theWrappedObject) const;
   QList<QAbstractState* >  targetStates(QAbstractTransition* theWrappedObject) const;
   QAbstractTransition::TransitionType  transitionType(QAbstractTransition* theWrappedObject) const;
};





class PythonQtShell_QAnimationGroup : public QAnimationGroup
{
public:
    PythonQtShell_QAnimationGroup(QObject*  parent = nullptr):QAnimationGroup(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAnimationGroup() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  currentTime) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAnimationGroup : public QAnimationGroup
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  py_q_event(QEvent*  event) { return QAnimationGroup::event(event); }
};

class PythonQtWrapper_QAnimationGroup : public QObject
{ Q_OBJECT
public:
public slots:
QAnimationGroup* new_QAnimationGroup(QObject*  parent = nullptr);
void delete_QAnimationGroup(QAnimationGroup* obj) { delete obj; }
   void addAnimation(QAnimationGroup* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractAnimation* >  animation);
   QAbstractAnimation*  animationAt(QAnimationGroup* theWrappedObject, int  index) const;
   int  animationCount(QAnimationGroup* theWrappedObject) const;
   void clear(QAnimationGroup* theWrappedObject);
   bool  py_q_event(QAnimationGroup* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QAnimationGroup*)theWrappedObject)->py_q_event(event));}
   int  indexOfAnimation(QAnimationGroup* theWrappedObject, QAbstractAnimation*  animation) const;
   void insertAnimation(QAnimationGroup* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QAbstractAnimation* >  animation);
   void removeAnimation(QAnimationGroup* theWrappedObject, PythonQtPassOwnershipToPython<QAbstractAnimation* >  animation);
   PythonQtPassOwnershipToPython<QAbstractAnimation*  > takeAnimation(QAnimationGroup* theWrappedObject, int  index);
};





class PythonQtWrapper_QApplicationStateChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QApplicationStateChangeEvent* new_QApplicationStateChangeEvent(Qt::ApplicationState  state);
void delete_QApplicationStateChangeEvent(QApplicationStateChangeEvent* obj) { delete obj; }
   Qt::ApplicationState  applicationState(QApplicationStateChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QBasicMutex : public QBasicMutex
{
public:
    PythonQtShell_QBasicMutex():QBasicMutex(),_wrapper(nullptr) {};

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
   bool  isRecursive(QBasicMutex* theWrappedObject) const;
   void lock(QBasicMutex* theWrappedObject);
   bool  tryLock(QBasicMutex* theWrappedObject);
   bool  try_lock(QBasicMutex* theWrappedObject);
   void unlock(QBasicMutex* theWrappedObject);
};





class PythonQtWrapper_QBasicTimer : public QObject
{ Q_OBJECT
public:
public slots:
QBasicTimer* new_QBasicTimer();
QBasicTimer* new_QBasicTimer(const QBasicTimer&  arg__1);
void delete_QBasicTimer(QBasicTimer* obj) { delete obj; }
   bool  isActive(QBasicTimer* theWrappedObject) const;
   QBasicTimer*  operator_assign(QBasicTimer* theWrappedObject, const QBasicTimer&  arg__1);
   void start(QBasicTimer* theWrappedObject, int  msec, QObject*  obj);
   void start(QBasicTimer* theWrappedObject, int  msec, Qt::TimerType  timerType, QObject*  obj);
   void stop(QBasicTimer* theWrappedObject);
   void swap(QBasicTimer* theWrappedObject, QBasicTimer&  other);
   int  timerId(QBasicTimer* theWrappedObject) const;
};





class PythonQtShell_QBuffer : public QBuffer
{
public:
    PythonQtShell_QBuffer(QByteArray*  buf, QObject*  parent = nullptr):QBuffer(buf, parent),_wrapper(nullptr) {};
    PythonQtShell_QBuffer(QObject*  parent = nullptr):QBuffer(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QBuffer() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void close() override;
void connectNotify(const QMetaMethod&  arg__1) override;
void customEvent(QEvent*  event) override;
void disconnectNotify(const QMetaMethod&  arg__1) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  isSequential() const override;
bool  open(QIODevice::OpenMode  openMode) override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
bool  seek(qint64  off) override;
qint64  size() const override;
void timerEvent(QTimerEvent*  event) override;
bool  waitForBytesWritten(int  msecs) override;
bool  waitForReadyRead(int  msecs) override;
qint64  writeData(const char*  data, qint64  len) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QBuffer : public QBuffer
{ public:
inline void promoted_connectNotify(const QMetaMethod&  arg__1) { this->connectNotify(arg__1); }
inline void promoted_disconnectNotify(const QMetaMethod&  arg__1) { this->disconnectNotify(arg__1); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QBuffer::atEnd(); }
inline bool  py_q_canReadLine() const { return QBuffer::canReadLine(); }
inline void py_q_close() { QBuffer::close(); }
inline void py_q_connectNotify(const QMetaMethod&  arg__1) { QBuffer::connectNotify(arg__1); }
inline void py_q_disconnectNotify(const QMetaMethod&  arg__1) { QBuffer::disconnectNotify(arg__1); }
inline bool  py_q_open(QIODevice::OpenMode  openMode) { return QBuffer::open(openMode); }
inline qint64  py_q_pos() const { return QBuffer::pos(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return QBuffer::readData(data, maxlen); }
inline bool  py_q_seek(qint64  off) { return QBuffer::seek(off); }
inline qint64  py_q_size() const { return QBuffer::size(); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QBuffer::writeData(data, len); }
};

class PythonQtWrapper_QBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QBuffer* new_QBuffer(QByteArray*  buf, QObject*  parent = nullptr);
QBuffer* new_QBuffer(QObject*  parent = nullptr);
void delete_QBuffer(QBuffer* obj) { delete obj; }
   bool  py_q_atEnd(QBuffer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_atEnd());}
   const QByteArray*  buffer(QBuffer* theWrappedObject) const;
   bool  py_q_canReadLine(QBuffer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_canReadLine());}
   void py_q_close(QBuffer* theWrappedObject){  (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_close());}
   void connectNotify(QBuffer* theWrappedObject, const QMetaMethod&  arg__1);
   void py_q_connectNotify(QBuffer* theWrappedObject, const QMetaMethod&  arg__1){  (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_connectNotify(arg__1));}
   const QByteArray*  data(QBuffer* theWrappedObject) const;
   void disconnectNotify(QBuffer* theWrappedObject, const QMetaMethod&  arg__1);
   void py_q_disconnectNotify(QBuffer* theWrappedObject, const QMetaMethod&  arg__1){  (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_disconnectNotify(arg__1));}
   bool  py_q_open(QBuffer* theWrappedObject, QIODevice::OpenMode  openMode){  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_open(openMode));}
   qint64  py_q_pos(QBuffer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_pos());}
   qint64  py_q_readData(QBuffer* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_readData(data, maxlen));}
   bool  py_q_seek(QBuffer* theWrappedObject, qint64  off){  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_seek(off));}
   void setBuffer(QBuffer* theWrappedObject, QByteArray*  a);
   void setData(QBuffer* theWrappedObject, const QByteArray&  data);
   qint64  py_q_size(QBuffer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_size());}
   qint64  py_q_writeData(QBuffer* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->py_q_writeData(data, len));}
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





class PythonQtShell_QByteArray__FromBase64Result : public QByteArray::FromBase64Result
{
public:
    PythonQtShell_QByteArray__FromBase64Result():QByteArray::FromBase64Result(),_wrapper(nullptr) {};

   ~PythonQtShell_QByteArray__FromBase64Result();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QByteArray__FromBase64Result : public QObject
{ Q_OBJECT
public:
public slots:
QByteArray::FromBase64Result* new_QByteArray__FromBase64Result();
QByteArray::FromBase64Result* new_QByteArray__FromBase64Result(const QByteArray::FromBase64Result& other) {
PythonQtShell_QByteArray__FromBase64Result* a = new PythonQtShell_QByteArray__FromBase64Result();
*((QByteArray::FromBase64Result*)a) = other;
return a; }
void delete_QByteArray__FromBase64Result(QByteArray::FromBase64Result* obj) { delete obj; }
   bool  operator_cast_bool(QByteArray::FromBase64Result* theWrappedObject) const;
   bool  __ne__(QByteArray::FromBase64Result* theWrappedObject, const QByteArray::FromBase64Result&  rhs);
   QByteArray*  __mul__(QByteArray::FromBase64Result* theWrappedObject);
   const QByteArray*  __mul__(QByteArray::FromBase64Result* theWrappedObject) const;
   bool  __eq__(QByteArray::FromBase64Result* theWrappedObject, const QByteArray::FromBase64Result&  rhs);
   void swap(QByteArray::FromBase64Result* theWrappedObject, QByteArray::FromBase64Result&  other);
void py_set_decoded(QByteArray::FromBase64Result* theWrappedObject, QByteArray  decoded){ theWrappedObject->decoded = decoded; }
QByteArray  py_get_decoded(QByteArray::FromBase64Result* theWrappedObject){ return theWrappedObject->decoded; }
void py_set_decodingStatus(QByteArray::FromBase64Result* theWrappedObject, QByteArray::Base64DecodingStatus  decodingStatus){ theWrappedObject->decodingStatus = decodingStatus; }
QByteArray::Base64DecodingStatus  py_get_decodingStatus(QByteArray::FromBase64Result* theWrappedObject){ return theWrappedObject->decodingStatus; }
};





class PythonQtWrapper_QCalendar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(System )
enum class System{
  Gregorian = static_cast<int>(QCalendar::System::Gregorian),   Julian = static_cast<int>(QCalendar::System::Julian),   Milankovic = static_cast<int>(QCalendar::System::Milankovic),   Jalali = static_cast<int>(QCalendar::System::Jalali),   IslamicCivil = static_cast<int>(QCalendar::System::IslamicCivil),   Last = static_cast<int>(QCalendar::System::Last),   User = static_cast<int>(QCalendar::System::User)};
public slots:
QCalendar* new_QCalendar();
QCalendar* new_QCalendar(QCalendar::System  system);
QCalendar* new_QCalendar(QLatin1String  name);
QCalendar* new_QCalendar(QStringView  name);
QCalendar* new_QCalendar(const QCalendar& other) {
QCalendar* a = new QCalendar();
*((QCalendar*)a) = other;
return a; }
void delete_QCalendar(QCalendar* obj) { delete obj; }
   QStringList  static_QCalendar_availableCalendars();
   QDate  dateFromParts(QCalendar* theWrappedObject, const QCalendar::YearMonthDay&  parts) const;
   QDate  dateFromParts(QCalendar* theWrappedObject, int  year, int  month, int  day) const;
   QString  dateTimeToString(QCalendar* theWrappedObject, QStringView  format, const QDateTime&  datetime, const QDate&  dateOnly, const QTime&  timeOnly, const QLocale&  locale) const;
   int  dayOfWeek(QCalendar* theWrappedObject, QDate  date) const;
   int  daysInMonth(QCalendar* theWrappedObject, int  month, int  year = Unspecified) const;
   int  daysInYear(QCalendar* theWrappedObject, int  year) const;
   bool  hasYearZero(QCalendar* theWrappedObject) const;
   bool  isDateValid(QCalendar* theWrappedObject, int  year, int  month, int  day) const;
   bool  isGregorian(QCalendar* theWrappedObject) const;
   bool  isLeapYear(QCalendar* theWrappedObject, int  year) const;
   bool  isLunar(QCalendar* theWrappedObject) const;
   bool  isLuniSolar(QCalendar* theWrappedObject) const;
   bool  isProleptic(QCalendar* theWrappedObject) const;
   bool  isSolar(QCalendar* theWrappedObject) const;
   bool  isValid(QCalendar* theWrappedObject) const;
   int  maximumDaysInMonth(QCalendar* theWrappedObject) const;
   int  maximumMonthsInYear(QCalendar* theWrappedObject) const;
   int  minimumDaysInMonth(QCalendar* theWrappedObject) const;
   QString  monthName(QCalendar* theWrappedObject, const QLocale&  locale, int  month, int  year = Unspecified, QLocale::FormatType  format = QLocale::LongFormat) const;
   int  monthsInYear(QCalendar* theWrappedObject, int  year) const;
   QString  name(QCalendar* theWrappedObject) const;
   QCalendar::YearMonthDay  partsFromDate(QCalendar* theWrappedObject, QDate  date) const;
   QString  standaloneMonthName(QCalendar* theWrappedObject, const QLocale&  locale, int  month, int  year = Unspecified, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  standaloneWeekDayName(QCalendar* theWrappedObject, const QLocale&  locale, int  day, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  weekDayName(QCalendar* theWrappedObject, const QLocale&  locale, int  day, QLocale::FormatType  format = QLocale::LongFormat) const;
    bool __nonzero__(QCalendar* obj) { return obj->isValid(); }

public:
    const static int Unspecified = QCalendar::Unspecified;
    
};





class PythonQtShell_QCalendar__YearMonthDay : public QCalendar::YearMonthDay
{
public:
    PythonQtShell_QCalendar__YearMonthDay():QCalendar::YearMonthDay(),_wrapper(nullptr) {};
    PythonQtShell_QCalendar__YearMonthDay(int  y, int  m = 1, int  d = 1):QCalendar::YearMonthDay(y, m, d),_wrapper(nullptr) {};

   ~PythonQtShell_QCalendar__YearMonthDay();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QCalendar__YearMonthDay : public QObject
{ Q_OBJECT
public:
public slots:
QCalendar::YearMonthDay* new_QCalendar__YearMonthDay();
QCalendar::YearMonthDay* new_QCalendar__YearMonthDay(int  y, int  m = 1, int  d = 1);
QCalendar::YearMonthDay* new_QCalendar__YearMonthDay(const QCalendar::YearMonthDay& other) {
PythonQtShell_QCalendar__YearMonthDay* a = new PythonQtShell_QCalendar__YearMonthDay();
*((QCalendar::YearMonthDay*)a) = other;
return a; }
void delete_QCalendar__YearMonthDay(QCalendar::YearMonthDay* obj) { delete obj; }
   bool  isValid(QCalendar::YearMonthDay* theWrappedObject) const;
    bool __nonzero__(QCalendar::YearMonthDay* obj) { return obj->isValid(); }
void py_set_day(QCalendar::YearMonthDay* theWrappedObject, int  day){ theWrappedObject->day = day; }
int  py_get_day(QCalendar::YearMonthDay* theWrappedObject){ return theWrappedObject->day; }
void py_set_month(QCalendar::YearMonthDay* theWrappedObject, int  month){ theWrappedObject->month = month; }
int  py_get_month(QCalendar::YearMonthDay* theWrappedObject){ return theWrappedObject->month; }
void py_set_year(QCalendar::YearMonthDay* theWrappedObject, int  year){ theWrappedObject->year = year; }
int  py_get_year(QCalendar::YearMonthDay* theWrappedObject){ return theWrappedObject->year; }
};





class PythonQtWrapper_QCborArray : public QObject
{ Q_OBJECT
public:
public slots:
QCborArray* new_QCborArray();
QCborArray* new_QCborArray(const QCborArray&  other);
void delete_QCborArray(QCborArray* obj) { delete obj; }
   void append(QCborArray* theWrappedObject, const QCborValue&  value);
   QCborValue  at(QCborArray* theWrappedObject, qsizetype  i) const;
   void clear(QCborArray* theWrappedObject);
   int  compare(QCborArray* theWrappedObject, const QCborArray&  other) const;
   bool  contains(QCborArray* theWrappedObject, const QCborValue&  value) const;
   bool  empty(QCborArray* theWrappedObject) const;
   QCborValue  first(QCborArray* theWrappedObject) const;
   QCborArray  static_QCborArray_fromJsonArray(const QJsonArray&  array);
   QCborArray  static_QCborArray_fromStringList(const QStringList&  list);
   QCborArray  static_QCborArray_fromVariantList(const QList<QVariant >&  list);
   void insert(QCborArray* theWrappedObject, qsizetype  i, const QCborValue&  value);
   bool  isEmpty(QCborArray* theWrappedObject) const;
   QCborValue  last(QCborArray* theWrappedObject) const;
   bool  __ne__(QCborArray* theWrappedObject, const QCborArray&  other) const;
   QCborArray  __add__(QCborArray* theWrappedObject, const QCborValue&  v) const;
   QCborArray*  __iadd__(QCborArray* theWrappedObject, const QCborValue&  v);
   bool  __lt__(QCborArray* theWrappedObject, const QCborArray&  other) const;
   void writeTo(QCborArray* theWrappedObject, QDataStream&  arg__1);
   QCborArray*  __lshift__(QCborArray* theWrappedObject, const QCborValue&  v);
   QCborArray*  operator_assign(QCborArray* theWrappedObject, const QCborArray&  other);
   bool  __eq__(QCborArray* theWrappedObject, const QCborArray&  other) const;
   void readFrom(QCborArray* theWrappedObject, QDataStream&  arg__1);
   const QCborValue  operator_subscript(QCborArray* theWrappedObject, qsizetype  i) const;
   void pop_back(QCborArray* theWrappedObject);
   void pop_front(QCborArray* theWrappedObject);
   void prepend(QCborArray* theWrappedObject, const QCborValue&  value);
   void push_back(QCborArray* theWrappedObject, const QCborValue&  t);
   void push_front(QCborArray* theWrappedObject, const QCborValue&  t);
   void removeAt(QCborArray* theWrappedObject, qsizetype  i);
   void removeFirst(QCborArray* theWrappedObject);
   void removeLast(QCborArray* theWrappedObject);
   qsizetype  size(QCborArray* theWrappedObject) const;
   void swap(QCborArray* theWrappedObject, QCborArray&  other);
   QCborValue  takeAt(QCborArray* theWrappedObject, qsizetype  i);
   QCborValue  takeFirst(QCborArray* theWrappedObject);
   QCborValue  takeLast(QCborArray* theWrappedObject);
   QCborValue  toCborValue(QCborArray* theWrappedObject) const;
   QJsonArray  toJsonArray(QCborArray* theWrappedObject) const;
   QList<QVariant >  toVariantList(QCborArray* theWrappedObject) const;
    QString py_toString(QCborArray*);
    bool __nonzero__(QCborArray* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QCborError : public QCborError
{
public:
    PythonQtShell_QCborError():QCborError(),_wrapper(nullptr) {};

   ~PythonQtShell_QCborError();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QCborError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Code )
enum Code{
  UnknownError = QCborError::UnknownError,   AdvancePastEnd = QCborError::AdvancePastEnd,   InputOutputError = QCborError::InputOutputError,   GarbageAtEnd = QCborError::GarbageAtEnd,   EndOfFile = QCborError::EndOfFile,   UnexpectedBreak = QCborError::UnexpectedBreak,   UnknownType = QCborError::UnknownType,   IllegalType = QCborError::IllegalType,   IllegalNumber = QCborError::IllegalNumber,   IllegalSimpleType = QCborError::IllegalSimpleType,   InvalidUtf8String = QCborError::InvalidUtf8String,   DataTooLarge = QCborError::DataTooLarge,   NestingTooDeep = QCborError::NestingTooDeep,   UnsupportedType = QCborError::UnsupportedType,   NoError = QCborError::NoError};
public slots:
QCborError* new_QCborError();
void delete_QCborError(QCborError* obj) { delete obj; }
   QString  toString(QCborError* theWrappedObject) const;
    QString py_toString(QCborError*);
void py_set_c(QCborError* theWrappedObject, QCborError::Code  c){ theWrappedObject->c = c; }
QCborError::Code  py_get_c(QCborError* theWrappedObject){ return theWrappedObject->c; }
};





class PythonQtWrapper_QCborMap : public QObject
{ Q_OBJECT
public:
public slots:
QCborMap* new_QCborMap();
QCborMap* new_QCborMap(const QCborMap&  other);
void delete_QCborMap(QCborMap* obj) { delete obj; }
   void clear(QCborMap* theWrappedObject);
   int  compare(QCborMap* theWrappedObject, const QCborMap&  other) const;
   bool  contains(QCborMap* theWrappedObject, const QCborValue&  key) const;
   bool  contains(QCborMap* theWrappedObject, const QString&  key) const;
   bool  contains(QCborMap* theWrappedObject, qint64  key) const;
   bool  empty(QCborMap* theWrappedObject) const;
   QCborMap  static_QCborMap_fromJsonObject(const QJsonObject&  o);
   QCborMap  static_QCborMap_fromVariantHash(const QHash<QString , QVariant >&  hash);
   QCborMap  static_QCborMap_fromVariantMap(const QMap<QString , QVariant >&  map);
   bool  isEmpty(QCborMap* theWrappedObject) const;
   QVector<QCborValue >  keys(QCborMap* theWrappedObject) const;
   bool  __ne__(QCborMap* theWrappedObject, const QCborMap&  other) const;
   bool  __lt__(QCborMap* theWrappedObject, const QCborMap&  other) const;
   void writeTo(QCborMap* theWrappedObject, QDataStream&  arg__1);
   QCborMap*  operator_assign(QCborMap* theWrappedObject, const QCborMap&  other);
   bool  __eq__(QCborMap* theWrappedObject, const QCborMap&  other) const;
   void readFrom(QCborMap* theWrappedObject, QDataStream&  arg__1);
   const QCborValue  operator_subscript(QCborMap* theWrappedObject, const QCborValue&  key) const;
   const QCborValue  operator_subscript(QCborMap* theWrappedObject, const QString&  key) const;
   const QCborValue  operator_subscript(QCborMap* theWrappedObject, qint64  key) const;
   void remove(QCborMap* theWrappedObject, const QCborValue&  key);
   void remove(QCborMap* theWrappedObject, const QString&  key);
   void remove(QCborMap* theWrappedObject, qint64  key);
   qsizetype  size(QCborMap* theWrappedObject) const;
   void swap(QCborMap* theWrappedObject, QCborMap&  other);
   QCborValue  take(QCborMap* theWrappedObject, const QCborValue&  key);
   QCborValue  take(QCborMap* theWrappedObject, const QString&  key);
   QCborValue  take(QCborMap* theWrappedObject, qint64  key);
   QCborValue  toCborValue(QCborMap* theWrappedObject) const;
   QJsonObject  toJsonObject(QCborMap* theWrappedObject) const;
   QHash<QString , QVariant >  toVariantHash(QCborMap* theWrappedObject) const;
   QMap<QString , QVariant >  toVariantMap(QCborMap* theWrappedObject) const;
   QCborValue  value(QCborMap* theWrappedObject, const QCborValue&  key) const;
   QCborValue  value(QCborMap* theWrappedObject, const QString&  key) const;
   QCborValue  value(QCborMap* theWrappedObject, qint64  key) const;
    QString py_toString(QCborMap*);
    bool __nonzero__(QCborMap* obj) { return !obj->isEmpty(); }

  void insert(QCborMap* theWrappedObject, qint64 key, const QCborValue& value_)
  {
    theWrappedObject->insert(key, value_);
  }

  void insert(QCborMap* theWrappedObject, const QString& key, const QCborValue& value_)
  {
    theWrappedObject->insert(key, value_);
  }
    
};





class PythonQtShell_QCborParserError : public QCborParserError
{
public:
    PythonQtShell_QCborParserError():QCborParserError(),_wrapper(nullptr) {};

   ~PythonQtShell_QCborParserError();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QCborParserError : public QObject
{ Q_OBJECT
public:
public slots:
QCborParserError* new_QCborParserError();
void delete_QCborParserError(QCborParserError* obj) { delete obj; }
   QString  errorString(QCborParserError* theWrappedObject) const;
void py_set_error(QCborParserError* theWrappedObject, QCborError  error){ theWrappedObject->error = error; }
QCborError  py_get_error(QCborParserError* theWrappedObject){ return theWrappedObject->error; }
void py_set_offset(QCborParserError* theWrappedObject, qint64  offset){ theWrappedObject->offset = offset; }
qint64  py_get_offset(QCborParserError* theWrappedObject){ return theWrappedObject->offset; }
};





class PythonQtWrapper_QCborStreamReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StringResultCode Type )
enum StringResultCode{
  EndOfString = QCborStreamReader::EndOfString,   Ok = QCborStreamReader::Ok,   Error = QCborStreamReader::Error};
enum Type{
  UnsignedInteger = QCborStreamReader::UnsignedInteger,   NegativeInteger = QCborStreamReader::NegativeInteger,   ByteString = QCborStreamReader::ByteString,   ByteArray = QCborStreamReader::ByteArray,   TextString = QCborStreamReader::TextString,   String = QCborStreamReader::String,   Array = QCborStreamReader::Array,   Map = QCborStreamReader::Map,   Tag = QCborStreamReader::Tag,   SimpleType = QCborStreamReader::SimpleType,   HalfFloat = QCborStreamReader::HalfFloat,   Float16 = QCborStreamReader::Float16,   Float = QCborStreamReader::Float,   Double = QCborStreamReader::Double,   Invalid = QCborStreamReader::Invalid};
public slots:
QCborStreamReader* new_QCborStreamReader();
QCborStreamReader* new_QCborStreamReader(QIODevice*  device);
QCborStreamReader* new_QCborStreamReader(const QByteArray&  data);
QCborStreamReader* new_QCborStreamReader(const char*  data, qsizetype  len);
QCborStreamReader* new_QCborStreamReader(const unsigned char*  data, qsizetype  len);
void delete_QCborStreamReader(QCborStreamReader* obj) { delete obj; }
   void addData(QCborStreamReader* theWrappedObject, const QByteArray&  data);
   void addData(QCborStreamReader* theWrappedObject, const char*  data, qsizetype  len);
   void addData(QCborStreamReader* theWrappedObject, const unsigned char*  data, qsizetype  len);
   void clear(QCborStreamReader* theWrappedObject);
   int  containerDepth(QCborStreamReader* theWrappedObject) const;
   qint64  currentOffset(QCborStreamReader* theWrappedObject) const;
   qsizetype  currentStringChunkSize(QCborStreamReader* theWrappedObject) const;
   QIODevice*  device(QCborStreamReader* theWrappedObject) const;
   bool  enterContainer(QCborStreamReader* theWrappedObject);
   bool  hasNext(QCborStreamReader* theWrappedObject) const;
   bool  isArray(QCborStreamReader* theWrappedObject) const;
   bool  isBool(QCborStreamReader* theWrappedObject) const;
   bool  isByteArray(QCborStreamReader* theWrappedObject) const;
   bool  isContainer(QCborStreamReader* theWrappedObject) const;
   bool  isDouble(QCborStreamReader* theWrappedObject) const;
   bool  isFalse(QCborStreamReader* theWrappedObject) const;
   bool  isFloat(QCborStreamReader* theWrappedObject) const;
   bool  isFloat16(QCborStreamReader* theWrappedObject) const;
   bool  isInteger(QCborStreamReader* theWrappedObject) const;
   bool  isInvalid(QCborStreamReader* theWrappedObject) const;
   bool  isLengthKnown(QCborStreamReader* theWrappedObject) const;
   bool  isMap(QCborStreamReader* theWrappedObject) const;
   bool  isNegativeInteger(QCborStreamReader* theWrappedObject) const;
   bool  isNull(QCborStreamReader* theWrappedObject) const;
   bool  isSimpleType(QCborStreamReader* theWrappedObject) const;
   bool  isSimpleType(QCborStreamReader* theWrappedObject, QCborSimpleType  st) const;
   bool  isString(QCborStreamReader* theWrappedObject) const;
   bool  isTag(QCborStreamReader* theWrappedObject) const;
   bool  isTrue(QCborStreamReader* theWrappedObject) const;
   bool  isUndefined(QCborStreamReader* theWrappedObject) const;
   bool  isUnsignedInteger(QCborStreamReader* theWrappedObject) const;
   bool  isValid(QCborStreamReader* theWrappedObject) const;
   QCborError  lastError(QCborStreamReader* theWrappedObject);
   bool  leaveContainer(QCborStreamReader* theWrappedObject);
   quint64  length(QCborStreamReader* theWrappedObject) const;
   bool  next(QCborStreamReader* theWrappedObject, int  maxRecursion = 10000);
   QCborStreamReader::Type  parentContainerType(QCborStreamReader* theWrappedObject) const;
   void reparse(QCborStreamReader* theWrappedObject);
   void reset(QCborStreamReader* theWrappedObject);
   void setDevice(QCborStreamReader* theWrappedObject, QIODevice*  device);
   bool  toBool(QCborStreamReader* theWrappedObject) const;
   double  toDouble(QCborStreamReader* theWrappedObject) const;
   float  toFloat(QCborStreamReader* theWrappedObject) const;
   qint64  toInteger(QCborStreamReader* theWrappedObject) const;
   QCborSimpleType  toSimpleType(QCborStreamReader* theWrappedObject) const;
   quint64  toUnsignedInteger(QCborStreamReader* theWrappedObject) const;
   QCborStreamReader::Type  type(QCborStreamReader* theWrappedObject) const;
    bool __nonzero__(QCborStreamReader* obj) { return obj->isValid(); }

  QByteArray readByteArray(QCborStreamReader* theWrappedObject) {
    auto result = theWrappedObject->readByteArray();
    return result.status == QCborStreamReader::Ok ? result.data : QByteArray();
  }
    
  QString readString(QCborStreamReader* theWrappedObject) {
    auto result = theWrappedObject->readString();
    return result.status == QCborStreamReader::Ok ? result.data : QString();
  }
    
  qint64 toTag(QCborStreamReader* theWrappedObject) const {
    return static_cast<qint64>(theWrappedObject->toTag());
  }
    
};





class PythonQtWrapper_QCborStreamWriter : public QObject
{ Q_OBJECT
public:
public slots:
QCborStreamWriter* new_QCborStreamWriter(QByteArray*  data);
QCborStreamWriter* new_QCborStreamWriter(QIODevice*  device);
void delete_QCborStreamWriter(QCborStreamWriter* obj) { delete obj; }
   void append(QCborStreamWriter* theWrappedObject, QCborKnownTags  tag);
   void append(QCborStreamWriter* theWrappedObject, QCborSimpleType  st);
   void append(QCborStreamWriter* theWrappedObject, QLatin1String  str);
   void append(QCborStreamWriter* theWrappedObject, QStringView  str);
   void append(QCborStreamWriter* theWrappedObject, bool  b);
   void append(QCborStreamWriter* theWrappedObject, const QByteArray&  ba);
   void append(QCborStreamWriter* theWrappedObject, double  d);
   void append(QCborStreamWriter* theWrappedObject, float  f);
   void append(QCborStreamWriter* theWrappedObject, int  i);
   void append(QCborStreamWriter* theWrappedObject, qint64  i);
   void append(QCborStreamWriter* theWrappedObject, quint64  u);
   void append(QCborStreamWriter* theWrappedObject, uint  u);
   void appendByteString(QCborStreamWriter* theWrappedObject, const char*  data, qsizetype  len);
   void appendNull(QCborStreamWriter* theWrappedObject);
   void appendTextString(QCborStreamWriter* theWrappedObject, const char*  utf8, qsizetype  len);
   void appendUndefined(QCborStreamWriter* theWrappedObject);
   QIODevice*  device(QCborStreamWriter* theWrappedObject) const;
   bool  endArray(QCborStreamWriter* theWrappedObject);
   bool  endMap(QCborStreamWriter* theWrappedObject);
   void setDevice(QCborStreamWriter* theWrappedObject, QIODevice*  device);
   void startArray(QCborStreamWriter* theWrappedObject);
   void startArray(QCborStreamWriter* theWrappedObject, quint64  count);
   void startMap(QCborStreamWriter* theWrappedObject);
   void startMap(QCborStreamWriter* theWrappedObject, quint64  count);
};





class PythonQtWrapper_QCborValue : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DiagnosticNotationOption EncodingOption Type )
Q_FLAGS(DiagnosticNotationOptions EncodingOptions )
enum DiagnosticNotationOption{
  Compact = QCborValue::Compact,   LineWrapped = QCborValue::LineWrapped,   ExtendedFormat = QCborValue::ExtendedFormat};
enum EncodingOption{
  SortKeysInMaps = QCborValue::SortKeysInMaps,   UseFloat = QCborValue::UseFloat,   UseFloat16 = QCborValue::UseFloat16,   UseIntegers = QCborValue::UseIntegers,   NoTransformation = QCborValue::NoTransformation};
enum Type{
  Integer = QCborValue::Integer,   ByteArray = QCborValue::ByteArray,   String = QCborValue::String,   Array = QCborValue::Array,   Map = QCborValue::Map,   Tag = QCborValue::Tag,   SimpleType = QCborValue::SimpleType,   False = QCborValue::False,   True = QCborValue::True,   Null = QCborValue::Null,   Undefined = QCborValue::Undefined,   Double = QCborValue::Double,   DateTime = QCborValue::DateTime,   Url = QCborValue::Url,   RegularExpression = QCborValue::RegularExpression,   Uuid = QCborValue::Uuid,   Invalid = QCborValue::Invalid};
Q_DECLARE_FLAGS(DiagnosticNotationOptions, DiagnosticNotationOption)
Q_DECLARE_FLAGS(EncodingOptions, EncodingOption)
public slots:
QCborValue* new_QCborValue();
QCborValue* new_QCborValue(QCborKnownTags  t_, const QCborValue&  tv = QCborValue());
QCborValue* new_QCborValue(QCborSimpleType  st);
QCborValue* new_QCborValue(QCborValue::Type  t_);
QCborValue* new_QCborValue(bool  b_);
QCborValue* new_QCborValue(const QByteArray&  ba);
QCborValue* new_QCborValue(const QCborArray&  a);
QCborValue* new_QCborValue(const QCborMap&  m);
QCborValue* new_QCborValue(const QCborValue&  other);
QCborValue* new_QCborValue(const QDateTime&  dt);
QCborValue* new_QCborValue(const QRegularExpression&  rx);
QCborValue* new_QCborValue(const QString&  s);
QCborValue* new_QCborValue(const QUrl&  url);
QCborValue* new_QCborValue(const QUuid&  uuid);
QCborValue* new_QCborValue(const char*  s);
QCborValue* new_QCborValue(double  v);
QCborValue* new_QCborValue(int  i);
QCborValue* new_QCborValue(qint64  i);
void delete_QCborValue(QCborValue* obj) { delete obj; }
   int  compare(QCborValue* theWrappedObject, const QCborValue&  other) const;
   QCborValue  static_QCborValue_fromCbor(QCborStreamReader&  reader);
   QCborValue  static_QCborValue_fromCbor(const QByteArray&  ba, QCborParserError*  error = nullptr);
   QCborValue  static_QCborValue_fromCbor(const char*  data, qsizetype  len, QCborParserError*  error = nullptr);
   QCborValue  static_QCborValue_fromCbor(const unsigned char*  data, qsizetype  len, QCborParserError*  error = nullptr);
   QCborValue  static_QCborValue_fromJsonValue(const QJsonValue&  v);
   QCborValue  static_QCborValue_fromVariant(const QVariant&  variant);
   bool  isArray(QCborValue* theWrappedObject) const;
   bool  isBool(QCborValue* theWrappedObject) const;
   bool  isByteArray(QCborValue* theWrappedObject) const;
   bool  isContainer(QCborValue* theWrappedObject) const;
   bool  isDateTime(QCborValue* theWrappedObject) const;
   bool  isDouble(QCborValue* theWrappedObject) const;
   bool  isFalse(QCborValue* theWrappedObject) const;
   bool  isInteger(QCborValue* theWrappedObject) const;
   bool  isInvalid(QCborValue* theWrappedObject) const;
   bool  isMap(QCborValue* theWrappedObject) const;
   bool  isNull(QCborValue* theWrappedObject) const;
   bool  isRegularExpression(QCborValue* theWrappedObject) const;
   bool  isSimpleType(QCborValue* theWrappedObject) const;
   bool  isSimpleType(QCborValue* theWrappedObject, QCborSimpleType  st) const;
   bool  isString(QCborValue* theWrappedObject) const;
   bool  isTag(QCborValue* theWrappedObject) const;
   bool  isTrue(QCborValue* theWrappedObject) const;
   bool  isUndefined(QCborValue* theWrappedObject) const;
   bool  isUrl(QCborValue* theWrappedObject) const;
   bool  isUuid(QCborValue* theWrappedObject) const;
   bool  __ne__(QCborValue* theWrappedObject, const QCborValue&  other) const;
   bool  __lt__(QCborValue* theWrappedObject, const QCborValue&  other) const;
   void writeTo(QCborValue* theWrappedObject, QDataStream&  arg__1);
   QCborValue*  operator_assign(QCborValue* theWrappedObject, const QCborValue&  other);
   bool  __eq__(QCborValue* theWrappedObject, const QCborValue&  other) const;
   void readFrom(QCborValue* theWrappedObject, QDataStream&  arg__1);
   const QCborValue  operator_subscript(QCborValue* theWrappedObject, const QString&  key) const;
   const QCborValue  operator_subscript(QCborValue* theWrappedObject, qint64  key) const;
   void swap(QCborValue* theWrappedObject, QCborValue&  other);
   QCborValue  taggedValue(QCborValue* theWrappedObject, const QCborValue&  defaultValue = QCborValue()) const;
   QCborArray  toArray(QCborValue* theWrappedObject) const;
   QCborArray  toArray(QCborValue* theWrappedObject, const QCborArray&  defaultValue) const;
   bool  toBool(QCborValue* theWrappedObject, bool  defaultValue = false) const;
   QByteArray  toByteArray(QCborValue* theWrappedObject, const QByteArray&  defaultValue = {}) const;
   void toCbor(QCborValue* theWrappedObject, QCborStreamWriter&  writer, QCborValue::EncodingOptions  opt = QCborValue::NoTransformation);
   QByteArray  toCbor(QCborValue* theWrappedObject, QCborValue::EncodingOptions  opt = QCborValue::NoTransformation);
   QDateTime  toDateTime(QCborValue* theWrappedObject, const QDateTime&  defaultValue = {}) const;
   QString  toDiagnosticNotation(QCborValue* theWrappedObject, QCborValue::DiagnosticNotationOptions  opts = QCborValue::Compact) const;
   double  toDouble(QCborValue* theWrappedObject, double  defaultValue = 0) const;
   qint64  toInteger(QCborValue* theWrappedObject, qint64  defaultValue = 0) const;
   QJsonValue  toJsonValue(QCborValue* theWrappedObject) const;
   QCborMap  toMap(QCborValue* theWrappedObject) const;
   QCborMap  toMap(QCborValue* theWrappedObject, const QCborMap&  defaultValue) const;
   QRegularExpression  toRegularExpression(QCborValue* theWrappedObject, const QRegularExpression&  defaultValue = {}) const;
   QCborSimpleType  toSimpleType(QCborValue* theWrappedObject, QCborSimpleType  defaultValue = QCborSimpleType::Undefined) const;
   QString  toString(QCborValue* theWrappedObject, const QString&  defaultValue = {}) const;
   QUrl  toUrl(QCborValue* theWrappedObject, const QUrl&  defaultValue = {}) const;
   QUuid  toUuid(QCborValue* theWrappedObject, const QUuid&  defaultValue = {}) const;
   QVariant  toVariant(QCborValue* theWrappedObject) const;
   QCborValue::Type  type(QCborValue* theWrappedObject) const;
    QString py_toString(QCborValue*);
    bool __nonzero__(QCborValue* obj) { return !obj->isNull(); }

  // replace QCborTag with qint64:
  QCborValue* new_QCborValue(qint64  tag, const QCborValue& taggedValue) {
    return new QCborValue(QCborTag(tag), taggedValue);
  }
  
  qint64 tag(QCborValue* theWrappedObject, qint64 defaultValue) const {
    return static_cast<qint64>(theWrappedObject->tag(QCborTag(defaultValue)));
  }
    
};





class PythonQtShell_QChildEvent : public QChildEvent
{
public:
    PythonQtShell_QChildEvent(QEvent::Type  type, QObject*  child):QChildEvent(type, child),_wrapper(nullptr) {};

   ~PythonQtShell_QChildEvent() override;


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





class PythonQtWrapper_QCollator : public QObject
{ Q_OBJECT
public:
public slots:
QCollator* new_QCollator();
QCollator* new_QCollator(const QCollator&  arg__1);
QCollator* new_QCollator(const QLocale&  locale);
void delete_QCollator(QCollator* obj) { delete obj; }
   Qt::CaseSensitivity  caseSensitivity(QCollator* theWrappedObject) const;
   int  compare(QCollator* theWrappedObject, const QChar*  s1, int  len1, const QChar*  s2, int  len2) const;
   int  compare(QCollator* theWrappedObject, const QString&  s1, const QString&  s2) const;
   bool  ignorePunctuation(QCollator* theWrappedObject) const;
   QLocale  locale(QCollator* theWrappedObject) const;
   bool  numericMode(QCollator* theWrappedObject) const;
   bool  operator_cast_(QCollator* theWrappedObject, const QString&  s1, const QString&  s2) const;
   QCollator*  operator_assign(QCollator* theWrappedObject, const QCollator&  arg__1);
   void setCaseSensitivity(QCollator* theWrappedObject, Qt::CaseSensitivity  cs);
   void setIgnorePunctuation(QCollator* theWrappedObject, bool  on);
   void setLocale(QCollator* theWrappedObject, const QLocale&  locale);
   void setNumericMode(QCollator* theWrappedObject, bool  on);
   QCollatorSortKey  sortKey(QCollator* theWrappedObject, const QString&  string) const;
   void swap(QCollator* theWrappedObject, QCollator&  other);
};





class PythonQtWrapper_QCollatorSortKey : public QObject
{ Q_OBJECT
public:
public slots:
QCollatorSortKey* new_QCollatorSortKey(const QCollatorSortKey&  other);
void delete_QCollatorSortKey(QCollatorSortKey* obj) { delete obj; }
   int  compare(QCollatorSortKey* theWrappedObject, const QCollatorSortKey&  key) const;
   bool  __lt__(QCollatorSortKey* theWrappedObject, const QCollatorSortKey&  rhs);
   QCollatorSortKey*  operator_assign(QCollatorSortKey* theWrappedObject, const QCollatorSortKey&  other);
   void swap(QCollatorSortKey* theWrappedObject, QCollatorSortKey&  other);
};





class PythonQtWrapper_QCommandLineOption : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Flag )
enum Flag{
  HiddenFromHelp = QCommandLineOption::HiddenFromHelp,   ShortOptionStyle = QCommandLineOption::ShortOptionStyle};
public slots:
QCommandLineOption* new_QCommandLineOption(const QCommandLineOption&  other);
QCommandLineOption* new_QCommandLineOption(const QString&  name);
QCommandLineOption* new_QCommandLineOption(const QString&  name, const QString&  description, const QString&  valueName = QString(), const QString&  defaultValue = QString());
QCommandLineOption* new_QCommandLineOption(const QStringList&  names);
QCommandLineOption* new_QCommandLineOption(const QStringList&  names, const QString&  description, const QString&  valueName = QString(), const QString&  defaultValue = QString());
void delete_QCommandLineOption(QCommandLineOption* obj) { delete obj; }
   QStringList  defaultValues(QCommandLineOption* theWrappedObject) const;
   QString  description(QCommandLineOption* theWrappedObject) const;
   bool  isHidden(QCommandLineOption* theWrappedObject) const;
   QStringList  names(QCommandLineOption* theWrappedObject) const;
   QCommandLineOption*  operator_assign(QCommandLineOption* theWrappedObject, const QCommandLineOption&  other);
   void setDefaultValue(QCommandLineOption* theWrappedObject, const QString&  defaultValue);
   void setDefaultValues(QCommandLineOption* theWrappedObject, const QStringList&  defaultValues);
   void setDescription(QCommandLineOption* theWrappedObject, const QString&  description);
   void setHidden(QCommandLineOption* theWrappedObject, bool  hidden);
   void setValueName(QCommandLineOption* theWrappedObject, const QString&  name);
   void swap(QCommandLineOption* theWrappedObject, QCommandLineOption&  other);
   QString  valueName(QCommandLineOption* theWrappedObject) const;
};





class PythonQtWrapper_QCommandLineParser : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OptionsAfterPositionalArgumentsMode SingleDashWordOptionMode )
enum OptionsAfterPositionalArgumentsMode{
  ParseAsOptions = QCommandLineParser::ParseAsOptions,   ParseAsPositionalArguments = QCommandLineParser::ParseAsPositionalArguments};
enum SingleDashWordOptionMode{
  ParseAsCompactedShortOptions = QCommandLineParser::ParseAsCompactedShortOptions,   ParseAsLongOptions = QCommandLineParser::ParseAsLongOptions};
public slots:
QCommandLineParser* new_QCommandLineParser();
void delete_QCommandLineParser(QCommandLineParser* obj) { delete obj; }
   QCommandLineOption  addHelpOption(QCommandLineParser* theWrappedObject);
   bool  addOption(QCommandLineParser* theWrappedObject, const QCommandLineOption&  commandLineOption);
   bool  addOptions(QCommandLineParser* theWrappedObject, const QList<QCommandLineOption >&  options);
   void addPositionalArgument(QCommandLineParser* theWrappedObject, const QString&  name, const QString&  description, const QString&  syntax = QString());
   QCommandLineOption  addVersionOption(QCommandLineParser* theWrappedObject);
   QString  applicationDescription(QCommandLineParser* theWrappedObject) const;
   void clearPositionalArguments(QCommandLineParser* theWrappedObject);
   QString  errorText(QCommandLineParser* theWrappedObject) const;
   QString  helpText(QCommandLineParser* theWrappedObject) const;
   bool  isSet(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const;
   bool  isSet(QCommandLineParser* theWrappedObject, const QString&  name) const;
   QStringList  optionNames(QCommandLineParser* theWrappedObject) const;
   bool  parse(QCommandLineParser* theWrappedObject, const QStringList&  arguments);
   QStringList  positionalArguments(QCommandLineParser* theWrappedObject) const;
   void process(QCommandLineParser* theWrappedObject, const QCoreApplication&  app);
   void process(QCommandLineParser* theWrappedObject, const QStringList&  arguments);
   void setApplicationDescription(QCommandLineParser* theWrappedObject, const QString&  description);
   void setOptionsAfterPositionalArgumentsMode(QCommandLineParser* theWrappedObject, QCommandLineParser::OptionsAfterPositionalArgumentsMode  mode);
   void setSingleDashWordOptionMode(QCommandLineParser* theWrappedObject, QCommandLineParser::SingleDashWordOptionMode  parsingMode);
   void showHelp(QCommandLineParser* theWrappedObject, int  exitCode = 0);
   void showVersion(QCommandLineParser* theWrappedObject);
   QString  static_QCommandLineParser_tr(const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1);
   QString  static_QCommandLineParser_trUtf8(const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1);
   QStringList  unknownOptionNames(QCommandLineParser* theWrappedObject) const;
   QString  value(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const;
   QString  value(QCommandLineParser* theWrappedObject, const QString&  name) const;
   QStringList  values(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const;
   QStringList  values(QCommandLineParser* theWrappedObject, const QString&  name) const;
};





class PythonQtPublicPromoter_QCoreApplication : public QCoreApplication
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QCoreApplication::event(arg__1); }
inline bool  py_q_notify(QObject*  arg__1, QEvent*  arg__2) { return QCoreApplication::notify(arg__1, arg__2); }
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
   QStringList  static_QCoreApplication_arguments();
   bool  static_QCoreApplication_closingDown();
   bool  py_q_event(QCoreApplication* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QCoreApplication*)theWrappedObject)->py_q_event(arg__1));}
   QAbstractEventDispatcher*  static_QCoreApplication_eventDispatcher();
   int  static_QCoreApplication_exec();
   void static_QCoreApplication_exit(int  retcode = 0);
   void static_QCoreApplication_flush();
   bool  static_QCoreApplication_hasPendingEvents();
   bool  static_QCoreApplication_installTranslator(QTranslator*  messageFile);
   QCoreApplication*  static_QCoreApplication_instance();
   bool  static_QCoreApplication_isQuitLockEnabled();
   bool  static_QCoreApplication_isSetuidAllowed();
   QStringList  static_QCoreApplication_libraryPaths();
   bool  notify(QCoreApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   bool  py_q_notify(QCoreApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QCoreApplication*)theWrappedObject)->py_q_notify(arg__1, arg__2));}
   QString  static_QCoreApplication_organizationDomain();
   QString  static_QCoreApplication_organizationName();
   void static_QCoreApplication_postEvent(QObject*  receiver, PythonQtPassOwnershipToCPP<QEvent* >  event, int  priority = Qt::NormalEventPriority);
   void static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   void static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags, int  maxtime);
   void static_QCoreApplication_removeLibraryPath(const QString&  arg__1);
   void static_QCoreApplication_removePostedEvents(QObject*  receiver, int  eventType = 0);
   bool  static_QCoreApplication_removeTranslator(QTranslator*  messageFile);
   bool  static_QCoreApplication_sendEvent(QObject*  receiver, QEvent*  event);
   void static_QCoreApplication_sendPostedEvents(QObject*  receiver = nullptr, int  event_type = 0);
   void static_QCoreApplication_setApplicationName(const QString&  application);
   void static_QCoreApplication_setApplicationVersion(const QString&  version);
   void static_QCoreApplication_setAttribute(Qt::ApplicationAttribute  attribute, bool  on = true);
   void static_QCoreApplication_setEventDispatcher(QAbstractEventDispatcher*  eventDispatcher);
   void static_QCoreApplication_setLibraryPaths(const QStringList&  arg__1);
   void static_QCoreApplication_setOrganizationDomain(const QString&  orgDomain);
   void static_QCoreApplication_setOrganizationName(const QString&  orgName);
   void static_QCoreApplication_setQuitLockEnabled(bool  enabled);
   void static_QCoreApplication_setSetuidAllowed(bool  allow);
   bool  static_QCoreApplication_startingUp();
   bool  static_QCoreApplication_testAttribute(Qt::ApplicationAttribute  attribute);
   QString  static_QCoreApplication_translate(const char*  context, const char*  key, const char*  disambiguation = nullptr, int  n = -1);
};





class PythonQtWrapper_QCryptographicHash : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Algorithm )
enum Algorithm{
  Md4 = QCryptographicHash::Md4,   Md5 = QCryptographicHash::Md5,   Sha1 = QCryptographicHash::Sha1,   Sha224 = QCryptographicHash::Sha224,   Sha256 = QCryptographicHash::Sha256,   Sha384 = QCryptographicHash::Sha384,   Sha512 = QCryptographicHash::Sha512,   Keccak_224 = QCryptographicHash::Keccak_224,   Keccak_256 = QCryptographicHash::Keccak_256,   Keccak_384 = QCryptographicHash::Keccak_384,   Keccak_512 = QCryptographicHash::Keccak_512,   RealSha3_224 = QCryptographicHash::RealSha3_224,   RealSha3_256 = QCryptographicHash::RealSha3_256,   RealSha3_384 = QCryptographicHash::RealSha3_384,   RealSha3_512 = QCryptographicHash::RealSha3_512,   Sha3_224 = QCryptographicHash::Sha3_224,   Sha3_256 = QCryptographicHash::Sha3_256,   Sha3_384 = QCryptographicHash::Sha3_384,   Sha3_512 = QCryptographicHash::Sha3_512};
public slots:
QCryptographicHash* new_QCryptographicHash(QCryptographicHash::Algorithm  method);
void delete_QCryptographicHash(QCryptographicHash* obj) { delete obj; }
   bool  addData(QCryptographicHash* theWrappedObject, QIODevice*  device);
   void addData(QCryptographicHash* theWrappedObject, const QByteArray&  data);
   QByteArray  static_QCryptographicHash_hash(const QByteArray&  data, QCryptographicHash::Algorithm  method);
   int  static_QCryptographicHash_hashLength(QCryptographicHash::Algorithm  method);
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
  Qt_1_0 = QDataStream::Qt_1_0,   Qt_2_0 = QDataStream::Qt_2_0,   Qt_2_1 = QDataStream::Qt_2_1,   Qt_3_0 = QDataStream::Qt_3_0,   Qt_3_1 = QDataStream::Qt_3_1,   Qt_3_3 = QDataStream::Qt_3_3,   Qt_4_0 = QDataStream::Qt_4_0,   Qt_4_1 = QDataStream::Qt_4_1,   Qt_4_2 = QDataStream::Qt_4_2,   Qt_4_3 = QDataStream::Qt_4_3,   Qt_4_4 = QDataStream::Qt_4_4,   Qt_4_5 = QDataStream::Qt_4_5,   Qt_4_6 = QDataStream::Qt_4_6,   Qt_4_7 = QDataStream::Qt_4_7,   Qt_4_8 = QDataStream::Qt_4_8,   Qt_4_9 = QDataStream::Qt_4_9,   Qt_5_0 = QDataStream::Qt_5_0,   Qt_5_1 = QDataStream::Qt_5_1,   Qt_5_2 = QDataStream::Qt_5_2,   Qt_5_3 = QDataStream::Qt_5_3,   Qt_5_4 = QDataStream::Qt_5_4,   Qt_5_5 = QDataStream::Qt_5_5,   Qt_5_6 = QDataStream::Qt_5_6,   Qt_5_7 = QDataStream::Qt_5_7,   Qt_5_8 = QDataStream::Qt_5_8,   Qt_5_9 = QDataStream::Qt_5_9,   Qt_5_10 = QDataStream::Qt_5_10,   Qt_5_11 = QDataStream::Qt_5_11,   Qt_5_12 = QDataStream::Qt_5_12,   Qt_5_13 = QDataStream::Qt_5_13,   Qt_5_14 = QDataStream::Qt_5_14,   Qt_5_15 = QDataStream::Qt_5_15,   Qt_DefaultCompiledVersion = QDataStream::Qt_DefaultCompiledVersion};
public slots:
QDataStream* new_QDataStream();
QDataStream* new_QDataStream(QByteArray*  arg__1, QIODevice::OpenMode  flags);
QDataStream* new_QDataStream(QIODevice*  arg__1);
QDataStream* new_QDataStream(const QByteArray&  arg__1);
void delete_QDataStream(QDataStream* obj) { delete obj; }
   void abortTransaction(QDataStream* theWrappedObject);
   bool  atEnd(QDataStream* theWrappedObject) const;
   QDataStream::ByteOrder  byteOrder(QDataStream* theWrappedObject) const;
   bool  commitTransaction(QDataStream* theWrappedObject);
   QIODevice*  device(QDataStream* theWrappedObject) const;
   QDataStream::FloatingPointPrecision  floatingPointPrecision(QDataStream* theWrappedObject) const;
   void resetStatus(QDataStream* theWrappedObject);
   void rollbackTransaction(QDataStream* theWrappedObject);
   void setByteOrder(QDataStream* theWrappedObject, QDataStream::ByteOrder  arg__1);
   void setDevice(QDataStream* theWrappedObject, QIODevice*  arg__1);
   void setFloatingPointPrecision(QDataStream* theWrappedObject, QDataStream::FloatingPointPrecision  precision);
   void setStatus(QDataStream* theWrappedObject, QDataStream::Status  status);
   void setVersion(QDataStream* theWrappedObject, int  arg__1);
   int  skipRawData(QDataStream* theWrappedObject, int  len);
   void startTransaction(QDataStream* theWrappedObject);
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





class PythonQtWrapper_QDeadlineTimer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ForeverConstant )
enum ForeverConstant{
  Forever = QDeadlineTimer::Forever};
public slots:
QDeadlineTimer* new_QDeadlineTimer(QDeadlineTimer::ForeverConstant  arg__1, Qt::TimerType  type_ = Qt::CoarseTimer);
QDeadlineTimer* new_QDeadlineTimer(Qt::TimerType  type_ = Qt::CoarseTimer);
QDeadlineTimer* new_QDeadlineTimer(qint64  msecs, Qt::TimerType  type = Qt::CoarseTimer);
void delete_QDeadlineTimer(QDeadlineTimer* obj) { delete obj; }
   QDeadlineTimer  static_QDeadlineTimer_addNSecs(QDeadlineTimer  dt, qint64  nsecs);
   QDeadlineTimer  static_QDeadlineTimer_current(Qt::TimerType  timerType = Qt::CoarseTimer);
   qint64  deadline(QDeadlineTimer* theWrappedObject) const;
   qint64  deadlineNSecs(QDeadlineTimer* theWrappedObject) const;
   bool  hasExpired(QDeadlineTimer* theWrappedObject) const;
   bool  isForever(QDeadlineTimer* theWrappedObject) const;
   bool  __ne__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2);
   QDeadlineTimer*  __iadd__(QDeadlineTimer* theWrappedObject, qint64  msecs);
   qint64  __sub__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  dt2);
   QDeadlineTimer  __sub__(QDeadlineTimer* theWrappedObject, qint64  msecs);
   QDeadlineTimer*  __isub__(QDeadlineTimer* theWrappedObject, qint64  msecs);
   bool  __lt__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2);
   bool  __le__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2);
   bool  __eq__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2);
   bool  __gt__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2);
   bool  __ge__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2);
   qint64  remainingTime(QDeadlineTimer* theWrappedObject) const;
   qint64  remainingTimeNSecs(QDeadlineTimer* theWrappedObject) const;
   void setDeadline(QDeadlineTimer* theWrappedObject, qint64  msecs, Qt::TimerType  timerType = Qt::CoarseTimer);
   void setPreciseDeadline(QDeadlineTimer* theWrappedObject, qint64  secs, qint64  nsecs = 0, Qt::TimerType  type = Qt::CoarseTimer);
   void setPreciseRemainingTime(QDeadlineTimer* theWrappedObject, qint64  secs, qint64  nsecs = 0, Qt::TimerType  type = Qt::CoarseTimer);
   void setRemainingTime(QDeadlineTimer* theWrappedObject, qint64  msecs, Qt::TimerType  type = Qt::CoarseTimer);
   void setTimerType(QDeadlineTimer* theWrappedObject, Qt::TimerType  type);
   void swap(QDeadlineTimer* theWrappedObject, QDeadlineTimer&  other);
   Qt::TimerType  timerType(QDeadlineTimer* theWrappedObject) const;
};


