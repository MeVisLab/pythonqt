#ifndef PYTHONQTWRAPPER_QABSTRACTITEMMODEL_H
#define PYTHONQTWRAPPER_QABSTRACTITEMMODEL_H

#include <qabstractitemmodel.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qsize.h>
#include <qstringlist.h>

class PythonQtShell_QAbstractItemModel : public QAbstractItemModel
{
public:
    PythonQtShell_QAbstractItemModel(QObject*  parent = 0):QAbstractItemModel(parent),_wrapper(NULL) {};

virtual QModelIndex  buddy(const QModelIndex&  index) const;
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
virtual QModelIndex  parent(const QModelIndex&  child) const;
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual void revert();
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDropActions() const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractItemModel : public QAbstractItemModel
{ public:
inline bool  promoted_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::removeColumns(column, count, parent); }
inline bool  promoted_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QAbstractItemModel::setHeaderData(section, orientation, value, role); }
inline QModelIndex  promoted_buddy(const QModelIndex&  index) const { return QAbstractItemModel::buddy(index); }
inline Qt::ItemFlags  promoted_flags(const QModelIndex&  index) const { return QAbstractItemModel::flags(index); }
inline QMimeData*  promoted_mimeData(const QList<QModelIndex >&  indexes) const { return QAbstractItemModel::mimeData(indexes); }
inline bool  promoted_hasChildren(const QModelIndex&  parent = QModelIndex()) const { return QAbstractItemModel::hasChildren(parent); }
inline QList<QModelIndex >  promoted_match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { return QAbstractItemModel::match(start, role, value, hits, flags); }
inline bool  promoted_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::insertColumns(column, count, parent); }
inline bool  promoted_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QAbstractItemModel::setData(index, value, role); }
inline Qt::DropActions  promoted_supportedDropActions() const { return QAbstractItemModel::supportedDropActions(); }
inline void promoted_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QAbstractItemModel::sort(column, order); }
inline bool  promoted_submit() { return QAbstractItemModel::submit(); }
inline bool  promoted_setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) { return QAbstractItemModel::setItemData(index, roles); }
inline bool  promoted_canFetchMore(const QModelIndex&  parent) const { return QAbstractItemModel::canFetchMore(parent); }
inline bool  promoted_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractItemModel::dropMimeData(data, action, row, column, parent); }
inline void promoted_revert() { QAbstractItemModel::revert(); }
inline void promoted_fetchMore(const QModelIndex&  parent) { QAbstractItemModel::fetchMore(parent); }
inline QSize  promoted_span(const QModelIndex&  index) const { return QAbstractItemModel::span(index); }
inline bool  promoted_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::insertRows(row, count, parent); }
inline QVariant  promoted_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QAbstractItemModel::headerData(section, orientation, role); }
inline QStringList  promoted_mimeTypes() const { return QAbstractItemModel::mimeTypes(); }
inline QMap<int , QVariant >  promoted_itemData(const QModelIndex&  index) const { return QAbstractItemModel::itemData(index); }
inline bool  promoted_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::removeRows(row, count, parent); }
};

class PythonQtWrapper_QAbstractItemModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractItemModel* new_QAbstractItemModel(QObject*  parent = 0);
void delete_QAbstractItemModel(QAbstractItemModel* obj) { delete obj; } 
   bool  removeColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  setHeaderData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
   QModelIndex  sibling(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const;
   bool  removeRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent = QModelIndex());
   QModelIndex  buddy(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   Qt::ItemFlags  flags(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   bool  hasIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   bool  insertColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent = QModelIndex());
   QMimeData*  mimeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const;
   bool  insertRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent = QModelIndex());
   bool  hasChildren(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   QList<QModelIndex >  match(QAbstractItemModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
   bool  insertColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  setData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
   Qt::DropActions  supportedDropActions(QAbstractItemModel* theWrappedObject) const;
   void sort(QAbstractItemModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   bool  setItemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles);
   QObject*  parent(QAbstractItemModel* theWrappedObject) const;
   Qt::DropActions  supportedDragActions(QAbstractItemModel* theWrappedObject) const;
   bool  removeColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent = QModelIndex());
   bool  canFetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const;
   bool  dropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
   void fetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent);
   QSize  span(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   bool  insertRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   QVariant  headerData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
   QStringList  mimeTypes(QAbstractItemModel* theWrappedObject) const;
   QMap<int , QVariant >  itemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   bool  removeRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   void setSupportedDragActions(QAbstractItemModel* theWrappedObject, Qt::DropActions  arg__1);
};

#endif // PYTHONQTWRAPPER_QABSTRACTITEMMODEL_H
