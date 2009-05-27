#include "PythonQtWrapper_QSqlIndex.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qsqlfield.h>
#include <qsqlindex.h>
#include <qsqlrecord.h>

QSqlIndex* PythonQtWrapper_QSqlIndex::new_QSqlIndex(const QSqlIndex&  other)
{ 
return new QSqlIndex(other); }

QSqlIndex* PythonQtWrapper_QSqlIndex::new_QSqlIndex(const QString&  cursorName, const QString&  name)
{ 
return new QSqlIndex(cursorName, name); }

bool  PythonQtWrapper_QSqlIndex::isDescending(QSqlIndex* theWrappedObject, int  i) const
{
  return ( theWrappedObject->isDescending(i));
}

QString  PythonQtWrapper_QSqlIndex::name(QSqlIndex* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

void PythonQtWrapper_QSqlIndex::append(QSqlIndex* theWrappedObject, const QSqlField&  field, bool  desc)
{
  ( theWrappedObject->append(field, desc));
}

void PythonQtWrapper_QSqlIndex::setDescending(QSqlIndex* theWrappedObject, int  i, bool  desc)
{
  ( theWrappedObject->setDescending(i, desc));
}

void PythonQtWrapper_QSqlIndex::setName(QSqlIndex* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setName(name));
}

QString  PythonQtWrapper_QSqlIndex::cursorName(QSqlIndex* theWrappedObject) const
{
  return ( theWrappedObject->cursorName());
}

void PythonQtWrapper_QSqlIndex::setCursorName(QSqlIndex* theWrappedObject, const QString&  cursorName)
{
  ( theWrappedObject->setCursorName(cursorName));
}

void PythonQtWrapper_QSqlIndex::append(QSqlIndex* theWrappedObject, const QSqlField&  field)
{
  ( theWrappedObject->append(field));
}

