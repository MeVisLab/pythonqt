#ifndef PYTHONQTWRAPPER_QSTANDARDITEMMODEL_H
#define PYTHONQTWRAPPER_QSTANDARDITEMMODEL_H

#include <qstandarditemmodel.h>
#include <QObject>

#include <PythonQt.h>

#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qsize.h>
#include <qstandarditemmodel.h>
#include <qstringlist.h>

class PythonQtShell_QStandardItemModel : public QStandardItemModel
{
public:
    PythonQtShell_QStandardItemModel(QObject*  parent = 0):QStandardItemModel(parent),_wrapper(NULL) {};
    PythonQtShell_QStandardItemModel(int  rows, int  columns, QObject*  parent = 0):QStandardItemModel(rows, columns, parent),_wrapper(NULL) {};

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
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const;
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

class PythonQtPublicPromoter_QStandardItemModel : public QStandardItemModel
{ public:
inline QMap<int , QVariant >  promoted_itemData(const QModelIndex&  index) const { return QStandardItemModel::itemData(index); }
inline Qt::DropActions  promoted_supportedDropActions() const { return QStandardItemModel::supportedDropActions(); }
inline bool  promoted_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QStandardItemModel::setData(index, value, role); }
inline QModelIndex  promoted_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QStandardItemModel::index(row, column, parent); }
inline Qt::ItemFlags  promoted_flags(const QModelIndex&  index) const { return QStandardItemModel::flags(index); }
inline bool  promoted_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QStandardItemModel::removeRows(row, count, parent); }
inline bool  promoted_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QStandardItemModel::insertColumns(column, count, parent); }
inline bool  promoted_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QStandardItemModel::setHeaderData(section, orientation, value, role); }
inline QVariant  promoted_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return QStandardItemModel::data(index, role); }
inline QModelIndex  promoted_parent(const QModelIndex&  child) const { return QStandardItemModel::parent(child); }
inline void promoted_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QStandardItemModel::sort(column, order); }
inline bool  promoted_hasChildren(const QModelIndex&  parent = QModelIndex()) const { return QStandardItemModel::hasChildren(parent); }
inline int  promoted_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QStandardItemModel::columnCount(parent); }
inline QVariant  promoted_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QStandardItemModel::headerData(section, orientation, role); }
inline bool  promoted_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QStandardItemModel::removeColumns(column, count, parent); }
inline bool  promoted_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QStandardItemModel::insertRows(row, count, parent); }
inline int  promoted_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QStandardItemModel::rowCount(parent); }
inline bool  promoted_setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) { return QStandardItemModel::setItemData(index, roles); }
};

class PythonQtWrapper_QStandardItemModel : public QObject
{ Q_OBJECT
public:
public slots:
QStandardItemModel* new_QStandardItemModel(QObject*  parent = 0);
QStandardItemModel* new_QStandardItemModel(int  rows, int  columns, QObject*  parent = 0);
void delete_QStandardItemModel(QStandardItemModel* obj) { delete obj; } 
   QMap<int , QVariant >  itemData(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const;
   QStandardItem*  takeItem(QStandardItemModel* theWrappedObject, int  row, int  column = 0);
   QStandardItem*  item(QStandardItemModel* theWrappedObject, int  row, int  column = 0) const;
   Qt::DropActions  supportedDropActions(QStandardItemModel* theWrappedObject) const;
   bool  setData(QStandardItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
   QModelIndex  index(QStandardItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   const QStandardItem*  itemPrototype(QStandardItemModel* theWrappedObject) const;
   void setHorizontalHeaderLabels(QStandardItemModel* theWrappedObject, const QStringList&  labels);
   QList<QStandardItem* >  takeRow(QStandardItemModel* theWrappedObject, int  row);
   void insertRow(QStandardItemModel* theWrappedObject, int  row, QStandardItem*  item);
   QStandardItem*  itemFromIndex(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const;
   QStandardItem*  horizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column) const;
   void insertRow(QStandardItemModel* theWrappedObject, int  row, const QList<QStandardItem* >&  items);
   QStandardItem*  takeHorizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column);
   QStandardItem*  takeVerticalHeaderItem(QStandardItemModel* theWrappedObject, int  row);
   Qt::ItemFlags  flags(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const;
   int  sortRole(QStandardItemModel* theWrappedObject) const;
   void setRowCount(QStandardItemModel* theWrappedObject, int  rows);
   void appendRow(QStandardItemModel* theWrappedObject, const QList<QStandardItem* >&  items);
   void setItemPrototype(QStandardItemModel* theWrappedObject, const QStandardItem*  item);
   QModelIndex  indexFromItem(QStandardItemModel* theWrappedObject, const QStandardItem*  item) const;
   QStandardItem*  invisibleRootItem(QStandardItemModel* theWrappedObject) const;
   bool  removeRows(QStandardItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   void setSortRole(QStandardItemModel* theWrappedObject, int  role);
   QList<QStandardItem* >  takeColumn(QStandardItemModel* theWrappedObject, int  column);
   void appendColumn(QStandardItemModel* theWrappedObject, const QList<QStandardItem* >&  items);
   void clear(QStandardItemModel* theWrappedObject);
   QStandardItem*  verticalHeaderItem(QStandardItemModel* theWrappedObject, int  row) const;
   void appendRow(QStandardItemModel* theWrappedObject, QStandardItem*  item);
   void setItem(QStandardItemModel* theWrappedObject, int  row, int  column, QStandardItem*  item);
   void setItem(QStandardItemModel* theWrappedObject, int  row, QStandardItem*  item);
   bool  insertColumns(QStandardItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  setHeaderData(QStandardItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
   QVariant  data(QStandardItemModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const;
   QModelIndex  parent(QStandardItemModel* theWrappedObject, const QModelIndex&  child) const;
   void setColumnCount(QStandardItemModel* theWrappedObject, int  columns);
   void sort(QStandardItemModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   void setVerticalHeaderItem(QStandardItemModel* theWrappedObject, int  row, QStandardItem*  item);
   QList<QStandardItem* >  findItems(QStandardItemModel* theWrappedObject, const QString&  text, Qt::MatchFlags  flags = Qt::MatchExactly, int  column = 0) const;
   bool  hasChildren(QStandardItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   void setHorizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column, QStandardItem*  item);
   int  columnCount(QStandardItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   void insertColumn(QStandardItemModel* theWrappedObject, int  column, const QList<QStandardItem* >&  items);
   QVariant  headerData(QStandardItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
   bool  removeColumns(QStandardItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   void setVerticalHeaderLabels(QStandardItemModel* theWrappedObject, const QStringList&  labels);
   bool  insertRows(QStandardItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   int  rowCount(QStandardItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   bool  setItemData(QStandardItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles);
};

#endif // PYTHONQTWRAPPER_QSTANDARDITEMMODEL_H
