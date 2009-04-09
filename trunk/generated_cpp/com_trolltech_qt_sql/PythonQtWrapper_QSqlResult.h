#ifndef PYTHONQTWRAPPER_QSQLRESULT_H
#define PYTHONQTWRAPPER_QSQLRESULT_H

#include <qsqlresult.h>
#include <QObject>

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

class PythonQtWrapper_QSqlResult : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QSqlResult(QSqlResult* obj) { delete obj; } 
   QVariant  handle(QSqlResult* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSQLRESULT_H
