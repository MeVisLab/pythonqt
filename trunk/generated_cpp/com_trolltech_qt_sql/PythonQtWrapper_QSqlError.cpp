#include "PythonQtWrapper_QSqlError.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qsqlerror.h>

QSqlError* PythonQtWrapper_QSqlError::new_QSqlError(const QSqlError&  other)
{ 
return new QSqlError(other); }

QSqlError* PythonQtWrapper_QSqlError::new_QSqlError(const QString&  driverText, const QString&  databaseText, QSqlError::ErrorType  type, int  number)
{ 
return new QSqlError(driverText, databaseText, type, number); }

QString  PythonQtWrapper_QSqlError::text(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

QString  PythonQtWrapper_QSqlError::databaseText(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->databaseText());
}

int  PythonQtWrapper_QSqlError::number(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->number());
}

void PythonQtWrapper_QSqlError::setDriverText(QSqlError* theWrappedObject, const QString&  driverText)
{
  ( theWrappedObject->setDriverText(driverText));
}

QSqlError::ErrorType  PythonQtWrapper_QSqlError::type(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

bool  PythonQtWrapper_QSqlError::isValid(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QSqlError::setType(QSqlError* theWrappedObject, QSqlError::ErrorType  type)
{
  ( theWrappedObject->setType(type));
}

QString  PythonQtWrapper_QSqlError::driverText(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->driverText());
}

void PythonQtWrapper_QSqlError::setNumber(QSqlError* theWrappedObject, int  number)
{
  ( theWrappedObject->setNumber(number));
}

void PythonQtWrapper_QSqlError::setDatabaseText(QSqlError* theWrappedObject, const QString&  databaseText)
{
  ( theWrappedObject->setDatabaseText(databaseText));
}

QString PythonQtWrapper_QSqlError::toString(QSqlError* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

