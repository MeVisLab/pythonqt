#ifndef PYTHONQTWRAPPER_QSQLQUERYMODEL_H
#define PYTHONQTWRAPPER_QSQLQUERYMODEL_H

#include <qsqlquerymodel.h>
#include <QObject>

#include <QSize>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
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
#include <qsqlquery.h>
#include <qsqlrecord.h>
#include <qstringlist.h>

class PythonQtWrapper_QSqlQueryModel : public QObject
{ Q_OBJECT
public:
public slots:
QSqlQueryModel* new_QSqlQueryModel(QObject*  parent = 0);
void delete_QSqlQueryModel(QSqlQueryModel* obj) { delete obj; } 
   bool  canFetchMore(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   void clear(QSqlQueryModel* theWrappedObject);
   int  columnCount(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   QVariant  data(QSqlQueryModel* theWrappedObject, const QModelIndex&  item, int  role = Qt::DisplayRole) const;
   void fetchMore(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex());
   QVariant  headerData(QSqlQueryModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
   bool  insertColumns(QSqlQueryModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   QSqlError  lastError(QSqlQueryModel* theWrappedObject) const;
   QSqlQuery  query(QSqlQueryModel* theWrappedObject) const;
   QSqlRecord  record(QSqlQueryModel* theWrappedObject) const;
   QSqlRecord  record(QSqlQueryModel* theWrappedObject, int  row) const;
   bool  removeColumns(QSqlQueryModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   int  rowCount(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   bool  setHeaderData(QSqlQueryModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
   void setQuery(QSqlQueryModel* theWrappedObject, const QSqlQuery&  query);
   void setQuery(QSqlQueryModel* theWrappedObject, const QString&  query, const QSqlDatabase&  db = QSqlDatabase());
};

#endif // PYTHONQTWRAPPER_QSQLQUERYMODEL_H
