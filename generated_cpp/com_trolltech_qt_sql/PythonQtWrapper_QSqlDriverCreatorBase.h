#ifndef PYTHONQTWRAPPER_QSQLDRIVERCREATORBASE_H
#define PYTHONQTWRAPPER_QSQLDRIVERCREATORBASE_H

#include <qsqldatabase.h>
#include <QObject>

#include <QSqlDriver>
#include <QVariant>
#include <qsqldriver.h>

class PythonQtWrapper_QSqlDriverCreatorBase : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QSqlDriverCreatorBase(QSqlDriverCreatorBase* obj) { delete obj; } 
   QSqlDriver*  createObject(QSqlDriverCreatorBase* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSQLDRIVERCREATORBASE_H
