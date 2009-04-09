#include "PythonQtWrapper_QSqlResult.h"

#include <QSize>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QVariant>
#include <qsqldriver.h>
#include <qsqlerror.h>
#include <qsqlrecord.h>
#include <qsqlresult.h>
#include <qvector.h>

QVariant  PythonQtWrapper_QSqlResult::handle(QSqlResult* theWrappedObject) const
{
return theWrappedObject->handle();
}

