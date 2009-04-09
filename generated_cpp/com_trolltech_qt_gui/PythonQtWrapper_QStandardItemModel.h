#ifndef PYTHONQTWRAPPER_QSTANDARDITEMMODEL_H
#define PYTHONQTWRAPPER_QSTANDARDITEMMODEL_H

#include <qstandarditemmodel.h>
#include <QObject>

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

class PythonQtWrapper_QStandardItemModel : public QObject
{ Q_OBJECT
public:
public slots:
QStandardItemModel* new_QStandardItemModel(QObject*  parent = 0);
QStandardItemModel* new_QStandardItemModel(int  rows, int  columns, QObject*  parent = 0);
void delete_QStandardItemModel(QStandardItemModel* obj) { delete obj; } 
   void appendColumn(QStandardItemModel* theWrappedObject, const QList<QStandardItem* >&  items);
   void appendRow(QStandardItemModel* theWrappedObject, QStandardItem*  item);
   void appendRow(QStandardItemModel* theWrappedObject, const QList<QStandardItem* >&  items);
   void clear(QStandardItemModel* theWrappedObject);
   int  columnCount(QStandardItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   QVariant  data(QStandardItemModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const;
   QList<QStandardItem* >  findItems(QStandardItemModel* theWrappedObject, const QString&  text, Qt::MatchFlags  flags = Qt::MatchExactly, int  column = 0) const;
   Qt::ItemFlags  flags(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const;
   bool  hasChildren(QStandardItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   QVariant  headerData(QStandardItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
   QStandardItem*  horizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column) const;
   QModelIndex  index(QStandardItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   QModelIndex  indexFromItem(QStandardItemModel* theWrappedObject, const QStandardItem*  item) const;
   void insertColumn(QStandardItemModel* theWrappedObject, int  column, const QList<QStandardItem* >&  items);
   bool  insertColumns(QStandardItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   void insertRow(QStandardItemModel* theWrappedObject, int  row, QStandardItem*  item);
   void insertRow(QStandardItemModel* theWrappedObject, int  row, const QList<QStandardItem* >&  items);
   bool  insertRows(QStandardItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   QStandardItem*  invisibleRootItem(QStandardItemModel* theWrappedObject) const;
   QStandardItem*  item(QStandardItemModel* theWrappedObject, int  row, int  column = 0) const;
   QMap<int , QVariant >  itemData(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const;
   QStandardItem*  itemFromIndex(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const;
   const QStandardItem*  itemPrototype(QStandardItemModel* theWrappedObject) const;
   QModelIndex  parent(QStandardItemModel* theWrappedObject, const QModelIndex&  child) const;
   bool  removeColumns(QStandardItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  removeRows(QStandardItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   int  rowCount(QStandardItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   void setColumnCount(QStandardItemModel* theWrappedObject, int  columns);
   bool  setData(QStandardItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
   bool  setHeaderData(QStandardItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
   void setHorizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column, QStandardItem*  item);
   void setHorizontalHeaderLabels(QStandardItemModel* theWrappedObject, const QStringList&  labels);
   void setItem(QStandardItemModel* theWrappedObject, int  row, QStandardItem*  item);
   void setItem(QStandardItemModel* theWrappedObject, int  row, int  column, QStandardItem*  item);
   bool  setItemData(QStandardItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles);
   void setItemPrototype(QStandardItemModel* theWrappedObject, const QStandardItem*  item);
   void setRowCount(QStandardItemModel* theWrappedObject, int  rows);
   void setSortRole(QStandardItemModel* theWrappedObject, int  role);
   void setVerticalHeaderItem(QStandardItemModel* theWrappedObject, int  row, QStandardItem*  item);
   void setVerticalHeaderLabels(QStandardItemModel* theWrappedObject, const QStringList&  labels);
   void sort(QStandardItemModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   int  sortRole(QStandardItemModel* theWrappedObject) const;
   Qt::DropActions  supportedDropActions(QStandardItemModel* theWrappedObject) const;
   QList<QStandardItem* >  takeColumn(QStandardItemModel* theWrappedObject, int  column);
   QStandardItem*  takeHorizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column);
   QStandardItem*  takeItem(QStandardItemModel* theWrappedObject, int  row, int  column = 0);
   QList<QStandardItem* >  takeRow(QStandardItemModel* theWrappedObject, int  row);
   QStandardItem*  takeVerticalHeaderItem(QStandardItemModel* theWrappedObject, int  row);
   QStandardItem*  verticalHeaderItem(QStandardItemModel* theWrappedObject, int  row) const;
};

#endif // PYTHONQTWRAPPER_QSTANDARDITEMMODEL_H
