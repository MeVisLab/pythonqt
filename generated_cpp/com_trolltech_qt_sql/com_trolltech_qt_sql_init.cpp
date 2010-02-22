#include <PythonQt.h>
#include "com_trolltech_qt_sql0.h"


void PythonQt_init_QtSql() {
PythonQt::self()->registerCPPClass("QSqlField", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlField>);
PythonQt::self()->registerCPPClass("QSqlQuery", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlQuery>);
PythonQt::self()->registerCPPClass("QSqlRelation", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlRelation>);
PythonQt::self()->registerCPPClass("QSqlDatabase", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlDatabase>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSqlDatabase>);
PythonQt::self()->registerClass(&QSqlDriver::staticMetaObject, "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlDriver>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSqlDriver>);
PythonQt::self()->registerCPPClass("QSqlRecord", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlRecord>);
PythonQt::self()->registerClass(&QSqlRelationalTableModel::staticMetaObject, "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlRelationalTableModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSqlRelationalTableModel>);
PythonQt::self()->registerClass(&QSqlQueryModel::staticMetaObject, "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlQueryModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSqlQueryModel>);
PythonQt::self()->registerCPPClass("QSqlDriverCreatorBase", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlDriverCreatorBase>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSqlDriverCreatorBase>);
PythonQt::self()->registerClass(&QSqlTableModel::staticMetaObject, "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlTableModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSqlTableModel>);
PythonQt::self()->registerCPPClass("QSqlResult", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlResult>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSqlResult>);
PythonQt::self()->registerCPPClass("QSqlIndex", "QSqlRecord", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlIndex>);
PythonQt::self()->registerCPPClass("QSqlError", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSqlError>);
PythonQt::self()->registerCPPClass("QSql", "", "QtSql", PythonQtCreateObject<PythonQtWrapper_QSql>);

}
