#include "PythonQtWrapper_QSqlRecord.h"

#include <QSqlField>
#include <QVariant>
#include <qsqlfield.h>
#include <qsqlrecord.h>

QSqlRecord* PythonQtWrapper_QSqlRecord::new_QSqlRecord()
{ 
return new QSqlRecord(); }

QSqlRecord* PythonQtWrapper_QSqlRecord::new_QSqlRecord(const QSqlRecord&  other)
{ 
return new QSqlRecord(other); }

void PythonQtWrapper_QSqlRecord::append(QSqlRecord* theWrappedObject, const QSqlField&  field)
{
theWrappedObject->append(field);
}

void PythonQtWrapper_QSqlRecord::clear(QSqlRecord* theWrappedObject)
{
theWrappedObject->clear();
}

void PythonQtWrapper_QSqlRecord::clearValues(QSqlRecord* theWrappedObject)
{
theWrappedObject->clearValues();
}

bool  PythonQtWrapper_QSqlRecord::contains(QSqlRecord* theWrappedObject, const QString&  name) const
{
return theWrappedObject->contains(name);
}

int  PythonQtWrapper_QSqlRecord::count(QSqlRecord* theWrappedObject) const
{
return theWrappedObject->count();
}

QSqlField  PythonQtWrapper_QSqlRecord::field(QSqlRecord* theWrappedObject, const QString&  name) const
{
return theWrappedObject->field(name);
}

QSqlField  PythonQtWrapper_QSqlRecord::field(QSqlRecord* theWrappedObject, int  i) const
{
return theWrappedObject->field(i);
}

QString  PythonQtWrapper_QSqlRecord::fieldName(QSqlRecord* theWrappedObject, int  i) const
{
return theWrappedObject->fieldName(i);
}

int  PythonQtWrapper_QSqlRecord::indexOf(QSqlRecord* theWrappedObject, const QString&  name) const
{
return theWrappedObject->indexOf(name);
}

void PythonQtWrapper_QSqlRecord::insert(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field)
{
theWrappedObject->insert(pos, field);
}

bool  PythonQtWrapper_QSqlRecord::isEmpty(QSqlRecord* theWrappedObject) const
{
return theWrappedObject->isEmpty();
}

bool  PythonQtWrapper_QSqlRecord::isGenerated(QSqlRecord* theWrappedObject, const QString&  name) const
{
return theWrappedObject->isGenerated(name);
}

bool  PythonQtWrapper_QSqlRecord::isGenerated(QSqlRecord* theWrappedObject, int  i) const
{
return theWrappedObject->isGenerated(i);
}

bool  PythonQtWrapper_QSqlRecord::isNull(QSqlRecord* theWrappedObject, const QString&  name) const
{
return theWrappedObject->isNull(name);
}

bool  PythonQtWrapper_QSqlRecord::isNull(QSqlRecord* theWrappedObject, int  i) const
{
return theWrappedObject->isNull(i);
}

bool  PythonQtWrapper_QSqlRecord::operator_equal(QSqlRecord* theWrappedObject, const QSqlRecord&  other) const
{
return *theWrappedObject == other;
}

void PythonQtWrapper_QSqlRecord::remove(QSqlRecord* theWrappedObject, int  pos)
{
theWrappedObject->remove(pos);
}

void PythonQtWrapper_QSqlRecord::replace(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field)
{
theWrappedObject->replace(pos, field);
}

void PythonQtWrapper_QSqlRecord::setGenerated(QSqlRecord* theWrappedObject, const QString&  name, bool  generated)
{
theWrappedObject->setGenerated(name, generated);
}

void PythonQtWrapper_QSqlRecord::setGenerated(QSqlRecord* theWrappedObject, int  i, bool  generated)
{
theWrappedObject->setGenerated(i, generated);
}

void PythonQtWrapper_QSqlRecord::setNull(QSqlRecord* theWrappedObject, const QString&  name)
{
theWrappedObject->setNull(name);
}

void PythonQtWrapper_QSqlRecord::setNull(QSqlRecord* theWrappedObject, int  i)
{
theWrappedObject->setNull(i);
}

void PythonQtWrapper_QSqlRecord::setValue(QSqlRecord* theWrappedObject, const QString&  name, const QVariant&  val)
{
theWrappedObject->setValue(name, val);
}

void PythonQtWrapper_QSqlRecord::setValue(QSqlRecord* theWrappedObject, int  i, const QVariant&  val)
{
theWrappedObject->setValue(i, val);
}

QVariant  PythonQtWrapper_QSqlRecord::value(QSqlRecord* theWrappedObject, const QString&  name) const
{
return theWrappedObject->value(name);
}

QVariant  PythonQtWrapper_QSqlRecord::value(QSqlRecord* theWrappedObject, int  i) const
{
return theWrappedObject->value(i);
}

