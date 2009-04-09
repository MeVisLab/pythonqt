#ifndef PYTHONQTWRAPPER_QSQLRELATIONALTABLEMODEL_H
#define PYTHONQTWRAPPER_QSQLRELATIONALTABLEMODEL_H

#include <qsqlrelationaltablemodel.h>
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
#include <qsqldatabase.h>
#include <qsqlerror.h>
#include <qsqlindex.h>
#include <qsqlquery.h>
#include <qsqlrecord.h>
#include <qsqlrelationaltablemodel.h>
#include <qsqltablemodel.h>
#include <qstringlist.h>

class PythonQtWrapper_QSqlRelationalTableModel : public QObject
{ Q_OBJECT
public:
public slots:
QSqlRelationalTableModel* new_QSqlRelationalTableModel(QObject*  parent = 0, QSqlDatabase  db = QSqlDatabase());
void delete_QSqlRelationalTableModel(QSqlRelationalTableModel* obj) { delete obj; } 
   void clear(QSqlRelationalTableModel* theWrappedObject);
   QVariant  data(QSqlRelationalTableModel* theWrappedObject, const QModelIndex&  item, int  role = Qt::DisplayRole) const;
   QSqlRelation  relation(QSqlRelationalTableModel* theWrappedObject, int  column) const;
   QSqlTableModel*  relationModel(QSqlRelationalTableModel* theWrappedObject, int  column) const;
   bool  removeColumns(QSqlRelationalTableModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  select(QSqlRelationalTableModel* theWrappedObject);
   bool  setData(QSqlRelationalTableModel* theWrappedObject, const QModelIndex&  item, const QVariant&  value, int  role = Qt::EditRole);
   void setRelation(QSqlRelationalTableModel* theWrappedObject, int  column, const QSqlRelation&  relation);
   void setTable(QSqlRelationalTableModel* theWrappedObject, const QString&  tableName);
};

#endif // PYTHONQTWRAPPER_QSQLRELATIONALTABLEMODEL_H
