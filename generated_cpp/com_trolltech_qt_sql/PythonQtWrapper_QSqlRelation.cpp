#include "PythonQtWrapper_QSqlRelation.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>

QSqlRelation* PythonQtWrapper_QSqlRelation::new_QSqlRelation()
{ 
return new QSqlRelation(); }

QSqlRelation* PythonQtWrapper_QSqlRelation::new_QSqlRelation(const QString&  aTableName, const QString&  indexCol, const QString&  displayCol)
{ 
return new QSqlRelation(aTableName, indexCol, displayCol); }

bool  PythonQtWrapper_QSqlRelation::isValid(QSqlRelation* theWrappedObject) const
{
return  (*theWrappedObject).isValid();
}

QString  PythonQtWrapper_QSqlRelation::tableName(QSqlRelation* theWrappedObject) const
{
return  (*theWrappedObject).tableName();
}

QString  PythonQtWrapper_QSqlRelation::indexColumn(QSqlRelation* theWrappedObject) const
{
return  (*theWrappedObject).indexColumn();
}

QString  PythonQtWrapper_QSqlRelation::displayColumn(QSqlRelation* theWrappedObject) const
{
return  (*theWrappedObject).displayColumn();
}

