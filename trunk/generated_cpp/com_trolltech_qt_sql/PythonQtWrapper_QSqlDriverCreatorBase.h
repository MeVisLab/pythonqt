#ifndef PYTHONQTWRAPPER_QSQLDRIVERCREATORBASE_H
#define PYTHONQTWRAPPER_QSQLDRIVERCREATORBASE_H

#include <qsqldatabase.h>
#include <QObject>

#include <PythonQt.h>

#include <QSqlDriver>
#include <QVariant>
#include <qsqldriver.h>

class PythonQtShell_QSqlDriverCreatorBase : public QSqlDriverCreatorBase
{
public:
    PythonQtShell_QSqlDriverCreatorBase():QSqlDriverCreatorBase(),_wrapper(NULL) {};

virtual QSqlDriver*  createObject() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSqlDriverCreatorBase : public QObject
{ Q_OBJECT
public:
public slots:
QSqlDriverCreatorBase* new_QSqlDriverCreatorBase();
void delete_QSqlDriverCreatorBase(QSqlDriverCreatorBase* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSQLDRIVERCREATORBASE_H
