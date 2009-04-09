#ifndef PYTHONQTWRAPPER_QSQLRELATION_H
#define PYTHONQTWRAPPER_QSQLRELATION_H

#include <qsqlrelationaltablemodel.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QSqlRelation : public QObject
{ Q_OBJECT
public:
public slots:
QSqlRelation* new_QSqlRelation();
QSqlRelation* new_QSqlRelation(const QString&  aTableName, const QString&  indexCol, const QString&  displayCol);
void delete_QSqlRelation(QSqlRelation* obj) { delete obj; } 
   QString  displayColumn(QSqlRelation* theWrappedObject) const;
   QString  indexColumn(QSqlRelation* theWrappedObject) const;
   bool  isValid(QSqlRelation* theWrappedObject) const;
   QString  tableName(QSqlRelation* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSQLRELATION_H
