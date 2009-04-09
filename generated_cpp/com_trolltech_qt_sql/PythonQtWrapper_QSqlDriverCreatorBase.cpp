#include "PythonQtWrapper_QSqlDriverCreatorBase.h"

#include <QSqlDriver>
#include <QVariant>
#include <qsqldriver.h>

QSqlDriver*  PythonQtWrapper_QSqlDriverCreatorBase::createObject(QSqlDriverCreatorBase* theWrappedObject) const
{
return theWrappedObject->createObject();
}

