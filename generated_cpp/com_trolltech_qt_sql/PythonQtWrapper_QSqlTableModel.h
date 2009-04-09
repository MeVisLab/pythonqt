#ifndef PYTHONQTWRAPPER_QSQLTABLEMODEL_H
#define PYTHONQTWRAPPER_QSQLTABLEMODEL_H

#include <qsqltablemodel.h>
#include <QObject>

#include <QSize>
#include <QSqlIndex>
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
#include <qsqldatabase.h>
#include <qsqlerror.h>
#include <qsqlindex.h>
#include <qsqlquery.h>
#include <qsqlrecord.h>
#include <qstringlist.h>

class PythonQtWrapper_QSqlTableModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(EditStrategy )
enum EditStrategy{
  OnFieldChange = QSqlTableModel::OnFieldChange,   OnRowChange = QSqlTableModel::OnRowChange,   OnManualSubmit = QSqlTableModel::OnManualSubmit};
public slots:
QSqlTableModel* new_QSqlTableModel(QObject*  parent = 0, QSqlDatabase  db = QSqlDatabase());
void delete_QSqlTableModel(QSqlTableModel* obj) { delete obj; } 
   void clear(QSqlTableModel* theWrappedObject);
   QVariant  data(QSqlTableModel* theWrappedObject, const QModelIndex&  idx, int  role = Qt::DisplayRole) const;
   QSqlDatabase  database(QSqlTableModel* theWrappedObject) const;
   QSqlTableModel::EditStrategy  editStrategy(QSqlTableModel* theWrappedObject) const;
   int  fieldIndex(QSqlTableModel* theWrappedObject, const QString&  fieldName) const;
   QString  filter(QSqlTableModel* theWrappedObject) const;
   Qt::ItemFlags  flags(QSqlTableModel* theWrappedObject, const QModelIndex&  index) const;
   QVariant  headerData(QSqlTableModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
   bool  insertRecord(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  record);
   bool  insertRows(QSqlTableModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   bool  isDirty(QSqlTableModel* theWrappedObject, const QModelIndex&  index) const;
   QSqlIndex  primaryKey(QSqlTableModel* theWrappedObject) const;
   bool  removeColumns(QSqlTableModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  removeRows(QSqlTableModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   void revertRow(QSqlTableModel* theWrappedObject, int  row);
   int  rowCount(QSqlTableModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   bool  select(QSqlTableModel* theWrappedObject);
   bool  setData(QSqlTableModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
   void setEditStrategy(QSqlTableModel* theWrappedObject, QSqlTableModel::EditStrategy  strategy);
   void setFilter(QSqlTableModel* theWrappedObject, const QString&  filter);
   bool  setRecord(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  record);
   void setSort(QSqlTableModel* theWrappedObject, int  column, Qt::SortOrder  order);
   void setTable(QSqlTableModel* theWrappedObject, const QString&  tableName);
   void sort(QSqlTableModel* theWrappedObject, int  column, Qt::SortOrder  order);
   QString  tableName(QSqlTableModel* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSQLTABLEMODEL_H
