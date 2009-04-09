#include <PythonQt.h>
#include "PythonQtWrapper_QSqlError.h"
#include "PythonQtWrapper_QSqlQuery.h"
#include "PythonQtWrapper_QSqlRelation.h"
#include "PythonQtWrapper_QSqlField.h"
#include "PythonQtWrapper_QSqlResult.h"
#include "PythonQtWrapper_QSqlDatabase.h"
#include "PythonQtWrapper_QSql.h"
#include "PythonQtWrapper_QSqlDriverCreatorBase.h"
#include "PythonQtWrapper_QSqlRecord.h"
#include "PythonQtWrapper_QSqlDriver.h"
#include "PythonQtWrapper_QSqlIndex.h"
#include "PythonQtWrapper_QSqlQueryModel.h"
#include "PythonQtWrapper_QSqlTableModel.h"
#include "PythonQtWrapper_QSqlRelationalTableModel.h"

void PythonQt_init_QtSql() {
PythonQt::self()->registerCPPClass("QSqlError", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlError>);
PythonQt::self()->registerCPPClass("QSqlQuery", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlQuery>);
PythonQt::self()->registerCPPClass("QSqlRelation", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlRelation>);
PythonQt::self()->registerCPPClass("QSqlField", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlField>);
PythonQt::self()->registerCPPClass("QSqlResult", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlResult>);
PythonQt::self()->registerCPPClass("QSqlDatabase", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlDatabase>);
PythonQt::self()->registerCPPClass("QSql", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSql>);
PythonQt::self()->registerCPPClass("QSqlDriverCreatorBase", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlDriverCreatorBase>);
PythonQt::self()->registerCPPClass("QSqlRecord", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlRecord>);
PythonQt::self()->registerClass(&QSqlDriver::staticMetaObject, "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlDriver>);
PythonQt::self()->registerCPPClass("QSqlIndex", "QSqlRecord", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlIndex>);
PythonQt::self()->registerClass(&QSqlQueryModel::staticMetaObject, "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlQueryModel>);
PythonQt::self()->registerClass(&QSqlTableModel::staticMetaObject, "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlTableModel>);
PythonQt::self()->registerClass(&QSqlRelationalTableModel::staticMetaObject, "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlRelationalTableModel>);

}
