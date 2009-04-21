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
inline QVariant  promoted_handle() const { return QSqlResult::handle(); }
inline bool  promoted_fetchPrevious() { return QSqlResult::fetchPrevious(); }
inline bool  promoted_exec() { return QSqlResult::exec(); }
inline void promoted_setActive(bool  a) { QSqlResult::setActive(a); }
inline bool  promoted_fetchNext() { return QSqlResult::fetchNext(); }
inline void promoted_setAt(int  at) { QSqlResult::setAt(at); }
inline bool  promoted_savePrepare(const QString&  sqlquery) { return QSqlResult::savePrepare(sqlquery); }
inline void promoted_setForwardOnly(bool  forward) { QSqlResult::setForwardOnly(forward); }
inline void promoted_setQuery(const QString&  query) { QSqlResult::setQuery(query); }
inline void promoted_bindValue(const QString&  placeholder, const QVariant&  val, QSql::ParamType  type) { QSqlResult::bindValue(placeholder, val, type); }
inline QVariant  promoted_lastInsertId() const { return QSqlResult::lastInsertId(); }
inline QSqlRecord  promoted_record() const { return QSqlResult::record(); }
inline void promoted_bindValue(int  pos, const QVariant&  val, QSql::ParamType  type) { QSqlResult::bindValue(pos, val, type); }
inline void promoted_setSelect(bool  s) { QSqlResult::setSelect(s); }
inline bool  promoted_prepare(const QString&  query) { return QSqlResult::prepare(query); }
inline void promoted_setLastError(const QSqlError&  e) { QSqlResult::setLastError(e); }
};

class PythonQtWrapper_QSqlResult : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QSqlResult(QSqlResult* obj) { delete obj; } 
   QVariant  handle(QSqlResult* theWrappedObject) const;
   bool  fetchPrevious(QSqlResult* theWrappedObject);
   bool  exec(QSqlResult* theWrappedObject);
   void setActive(QSqlResult* theWrappedObject, bool  a);
   bool  fetchNext(QSqlResult* theWrappedObject);
   void setAt(QSqlResult* theWrappedObject, int  at);
   bool  savePrepare(QSqlResult* theWrappedObject, const QString&  sqlquery);
   void setForwardOnly(QSqlResult* theWrappedObject, bool  forward);
   void setQuery(QSqlResult* theWrappedObject, const QString&  query);
   void bindValue(QSqlResult* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type);
   QVariant  lastInsertId(QSqlResult* theWrappedObject) const;
   QSqlRecord  record(QSqlResult* theWrappedObject) const;
   void bindValue(QSqlResult* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type);
   void setSelect(QSqlResult* theWrappedObject, bool  s);
   bool  prepare(QSqlResult* theWrappedObject, const QString&  query);
   void setLastError(QSqlResult* theWrappedObject, const QSqlError&  e);
};

#endif // PYTHONQTWRAPPER_QSQLRESULT_H
