#include "PythonQtWrapper_QSqlDriver.h"

#include <QSize>
#include <QSqlError>
#include <QSqlIndex>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsqldriver.h>
#include <qsqlerror.h>
#include <qsqlfield.h>
#include <qsqlindex.h>
#include <qsqlrecord.h>
#include <qsqlresult.h>
#include <qstringlist.h>

bool  PythonQtWrapper_QSqlDriver::beginTransaction(QSqlDriver* theWrappedObject)
{
return theWrappedObject->beginTransaction();
}

void PythonQtWrapper_QSqlDriver::close(QSqlDriver* theWrappedObject)
{
theWrappedObject->close();
}

bool  PythonQtWrapper_QSqlDriver::commitTransaction(QSqlDriver* theWrappedObject)
{
return theWrappedObject->commitTransaction();
}

QSqlResult*  PythonQtWrapper_QSqlDriver::createResult(QSqlDriver* theWrappedObject) const
{
return theWrappedObject->createResult();
}

QString  PythonQtWrapper_QSqlDriver::escapeIdentifier(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const
{
return theWrappedObject->escapeIdentifier(identifier, type);
}

QString  PythonQtWrapper_QSqlDriver::formatValue(QSqlDriver* theWrappedObject, const QSqlField&  field, bool  trimStrings) const
{
return theWrappedObject->formatValue(field, trimStrings);
}

QVariant  PythonQtWrapper_QSqlDriver::handle(QSqlDriver* theWrappedObject) const
{
return theWrappedObject->handle();
}

bool  PythonQtWrapper_QSqlDriver::hasFeature(QSqlDriver* theWrappedObject, QSqlDriver::DriverFeature  f) const
{
return theWrappedObject->hasFeature(f);
}

bool  PythonQtWrapper_QSqlDriver::isOpen(QSqlDriver* theWrappedObject) const
{
return theWrappedObject->isOpen();
}

bool  PythonQtWrapper_QSqlDriver::isOpenError(QSqlDriver* theWrappedObject) const
{
return theWrappedObject->isOpenError();
}

QSqlError  PythonQtWrapper_QSqlDriver::lastError(QSqlDriver* theWrappedObject) const
{
return theWrappedObject->lastError();
}

bool  PythonQtWrapper_QSqlDriver::open(QSqlDriver* theWrappedObject, const QString&  db, const QString&  user, const QString&  password, const QString&  host, int  port, const QString&  connOpts)
{
return theWrappedObject->open(db, user, password, host, port, connOpts);
}

QSqlIndex  PythonQtWrapper_QSqlDriver::primaryIndex(QSqlDriver* theWrappedObject, const QString&  tableName) const
{
return theWrappedObject->primaryIndex(tableName);
}

QSqlRecord  PythonQtWrapper_QSqlDriver::record(QSqlDriver* theWrappedObject, const QString&  tableName) const
{
return theWrappedObject->record(tableName);
}

bool  PythonQtWrapper_QSqlDriver::rollbackTransaction(QSqlDriver* theWrappedObject)
{
return theWrappedObject->rollbackTransaction();
}

QString  PythonQtWrapper_QSqlDriver::sqlStatement(QSqlDriver* theWrappedObject, QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const
{
return theWrappedObject->sqlStatement(type, tableName, rec, preparedStatement);
}

bool  PythonQtWrapper_QSqlDriver::subscribeToNotification(QSqlDriver* theWrappedObject, const QString&  name)
{
return theWrappedObject->subscribeToNotification(name);
}

QStringList  PythonQtWrapper_QSqlDriver::subscribedToNotifications(QSqlDriver* theWrappedObject) const
{
return theWrappedObject->subscribedToNotifications();
}

QStringList  PythonQtWrapper_QSqlDriver::tables(QSqlDriver* theWrappedObject, QSql::TableType  tableType) const
{
return theWrappedObject->tables(tableType);
}

bool  PythonQtWrapper_QSqlDriver::unsubscribeFromNotification(QSqlDriver* theWrappedObject, const QString&  name)
{
return theWrappedObject->unsubscribeFromNotification(name);
}

