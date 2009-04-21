#ifndef PYTHONQTWRAPPER_QSQLRESULT_H
#define PYTHONQTWRAPPER_QSQLRESULT_H

#include <qsqlresult.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtShell_QSqlResult : public QSqlResult
{
public:
    PythonQtShell_QSqlResult(const QSqlDriver*  db):QSqlResult(db),_wrapper(NULL) {};

virtual void bindValue(const QString&  placeholder, const QVariant&  val, QSql::ParamType  type);
virtual void bindValue(int  pos, const QVariant&  val, QSql::ParamType  type);
virtual QVariant  data(int  i);
virtual bool  exec();
virtual bool  fetch(int  i);
virtual bool  fetchFirst();
virtual bool  fetchLast();
virtual bool  fetchNext();
virtual bool  fetchPrevious();
virtual QVariant  handle() const;
virtual bool  isNull(int  i);
virtual QVariant  lastInsertId() const;
virtual int  numRowsAffected();
virtual bool  prepare(const QString&  query);
virtual QSqlRecord  record() const;
virtual bool  reset(const QString&  sqlquery);
virtual bool  savePrepare(const QString&  sqlquery);
virtual void setActive(bool  a);
virtual void setAt(int  at);
virtual void setForwardOnly(bool  forward);
virtual void setLastError(const QSqlError&  e);
virtual void setQuery(const QString&  query);
virtual void setSelect(bool  s);
virtual int  size();
virtual void virtual_hook(int  id, void*  data);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlResult : public QSqlResult
{ public:
inline bool  exec() { return QSqlResult::exec(); }
inline void setAt(int  at) { QSqlResult::setAt(at); }
inline void bindValue(int  pos, const QVariant&  val, QSql::ParamType  type) { QSqlResult::bindValue(pos, val, type); }
inline bool  savePrepare(const QString&  sqlquery) { return QSqlResult::savePrepare(sqlquery); }
inline QSqlRecord  record() const { return QSqlResult::record(); }
inline void setQuery(const QString&  query) { QSqlResult::setQuery(query); }
inline void bindValue(const QString&  placeholder, const QVariant&  val, QSql::ParamType  type) { QSqlResult::bindValue(placeholder, val, type); }
inline QVariant  lastInsertId() const { return QSqlResult::lastInsertId(); }
inline void setSelect(bool  s) { QSqlResult::setSelect(s); }
inline void setActive(bool  a) { QSqlResult::setActive(a); }
inline void setLastError(const QSqlError&  e) { QSqlResult::setLastError(e); }
inline bool  prepare(const QString&  query) { return QSqlResult::prepare(query); }
inline bool  fetchNext() { return QSqlResult::fetchNext(); }
inline void setForwardOnly(bool  forward) { QSqlResult::setForwardOnly(forward); }
inline bool  fetchPrevious() { return QSqlResult::fetchPrevious(); }
};

class PythonQtWrapper_QSqlResult : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QSqlResult(QSqlResult* obj) { delete obj; } 
   bool  exec(QSqlResult* theWrappedObject);
   void setAt(QSqlResult* theWrappedObject, int  at);
   void bindValue(QSqlResult* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type);
   bool  savePrepare(QSqlResult* theWrappedObject, const QString&  sqlquery);
   QSqlRecord  record(QSqlResult* theWrappedObject) const;
   void setQuery(QSqlResult* theWrappedObject, const QString&  query);
   void bindValue(QSqlResult* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type);
   QVariant  lastInsertId(QSqlResult* theWrappedObject) const;
   void setSelect(QSqlResult* theWrappedObject, bool  s);
   void setActive(QSqlResult* theWrappedObject, bool  a);
   void setLastError(QSqlResult* theWrappedObject, const QSqlError&  e);
   bool  prepare(QSqlResult* theWrappedObject, const QString&  query);
   bool  fetchNext(QSqlResult* theWrappedObject);
   QVariant  handle(QSqlResult* theWrappedObject) const;
   void setForwardOnly(QSqlResult* theWrappedObject, bool  forward);
   bool  fetchPrevious(QSqlResult* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QSQLRESULT_H
