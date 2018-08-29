#include <PythonQt.h>
#include <QObject>
#include <QSize>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlField>
#include <QSqlIndex>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qsize.h>
#include <qsql.h>
#include <qsqldatabase.h>
#include <qsqldriver.h>
#include <qsqlerror.h>
#include <qsqlfield.h>
#include <qsqlindex.h>
#include <qsqlquery.h>
#include <qsqlquerymodel.h>
#include <qsqlrecord.h>
#include <qsqlrelationaltablemodel.h>
#include <qsqlresult.h>
#include <qsqltablemodel.h>
#include <qstringlist.h>
#include <qvector.h>



class PythonQtWrapper_QSql : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Location NumericalPrecisionPolicy ParamTypeFlag TableType )
Q_FLAGS(ParamType )
enum Location{
  BeforeFirstRow = QSql::BeforeFirstRow,   AfterLastRow = QSql::AfterLastRow};
enum NumericalPrecisionPolicy{
  LowPrecisionInt32 = QSql::LowPrecisionInt32,   LowPrecisionInt64 = QSql::LowPrecisionInt64,   LowPrecisionDouble = QSql::LowPrecisionDouble,   HighPrecision = QSql::HighPrecision};
enum ParamTypeFlag{
  In = QSql::In,   Out = QSql::Out,   InOut = QSql::InOut,   Binary = QSql::Binary};
enum TableType{
  Tables = QSql::Tables,   SystemTables = QSql::SystemTables,   Views = QSql::Views,   AllTables = QSql::AllTables};
Q_DECLARE_FLAGS(ParamType, ParamTypeFlag)
public slots:
};





class PythonQtShell_QSqlDatabase : public QSqlDatabase
{
public:
    PythonQtShell_QSqlDatabase():QSqlDatabase(),_wrapper(NULL) {};
    PythonQtShell_QSqlDatabase(QSqlDriver*  driver):QSqlDatabase(driver),_wrapper(NULL) {};
    PythonQtShell_QSqlDatabase(const QSqlDatabase&  other):QSqlDatabase(other),_wrapper(NULL) {};
    PythonQtShell_QSqlDatabase(const QString&  type):QSqlDatabase(type),_wrapper(NULL) {};

   ~PythonQtShell_QSqlDatabase();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSqlDatabase : public QObject
{ Q_OBJECT
public:
public slots:
QSqlDatabase* new_QSqlDatabase();
QSqlDatabase* new_QSqlDatabase(QSqlDriver*  driver);
QSqlDatabase* new_QSqlDatabase(const QSqlDatabase&  other);
QSqlDatabase* new_QSqlDatabase(const QString&  type);
void delete_QSqlDatabase(QSqlDatabase* obj) { delete obj; } 
   QSqlDatabase  static_QSqlDatabase_addDatabase(QSqlDriver*  driver, const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection));
   QSqlDatabase  static_QSqlDatabase_addDatabase(const QString&  type, const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection));
   QSqlDatabase  static_QSqlDatabase_cloneDatabase(const QSqlDatabase&  other, const QString&  connectionName);
   void close(QSqlDatabase* theWrappedObject);
   bool  commit(QSqlDatabase* theWrappedObject);
   QString  connectOptions(QSqlDatabase* theWrappedObject) const;
   QString  connectionName(QSqlDatabase* theWrappedObject) const;
   QStringList  static_QSqlDatabase_connectionNames();
   bool  static_QSqlDatabase_contains(const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection));
   QSqlDatabase  static_QSqlDatabase_database(const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection), bool  open = true);
   QString  databaseName(QSqlDatabase* theWrappedObject) const;
   QSqlDriver*  driver(QSqlDatabase* theWrappedObject) const;
   QString  driverName(QSqlDatabase* theWrappedObject) const;
   QStringList  static_QSqlDatabase_drivers();
   QSqlQuery  exec(QSqlDatabase* theWrappedObject, const QString&  query = QString()) const;
   QString  hostName(QSqlDatabase* theWrappedObject) const;
   bool  static_QSqlDatabase_isDriverAvailable(const QString&  name);
   bool  isOpen(QSqlDatabase* theWrappedObject) const;
   bool  isOpenError(QSqlDatabase* theWrappedObject) const;
   bool  isValid(QSqlDatabase* theWrappedObject) const;
   QSqlError  lastError(QSqlDatabase* theWrappedObject) const;
   QSql::NumericalPrecisionPolicy  numericalPrecisionPolicy(QSqlDatabase* theWrappedObject) const;
   bool  open(QSqlDatabase* theWrappedObject);
   bool  open(QSqlDatabase* theWrappedObject, const QString&  user, const QString&  password);
   QString  password(QSqlDatabase* theWrappedObject) const;
   int  port(QSqlDatabase* theWrappedObject) const;
   QSqlIndex  primaryIndex(QSqlDatabase* theWrappedObject, const QString&  tablename) const;
   QSqlRecord  record(QSqlDatabase* theWrappedObject, const QString&  tablename) const;
   void static_QSqlDatabase_registerSqlDriver(const QString&  name, QSqlDriverCreatorBase*  creator);
   void static_QSqlDatabase_removeDatabase(const QString&  connectionName);
   bool  rollback(QSqlDatabase* theWrappedObject);
   void setConnectOptions(QSqlDatabase* theWrappedObject, const QString&  options = QString());
   void setDatabaseName(QSqlDatabase* theWrappedObject, const QString&  name);
   void setHostName(QSqlDatabase* theWrappedObject, const QString&  host);
   void setNumericalPrecisionPolicy(QSqlDatabase* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy);
   void setPassword(QSqlDatabase* theWrappedObject, const QString&  password);
   void setPort(QSqlDatabase* theWrappedObject, int  p);
   void setUserName(QSqlDatabase* theWrappedObject, const QString&  name);
   QStringList  tables(QSqlDatabase* theWrappedObject, QSql::TableType  type = QSql::Tables) const;
   bool  transaction(QSqlDatabase* theWrappedObject);
   QString  userName(QSqlDatabase* theWrappedObject) const;
    QString py_toString(QSqlDatabase*);
    bool __nonzero__(QSqlDatabase* obj) { return obj->isValid(); }
};





class PythonQtShell_QSqlDriver : public QSqlDriver
{
public:
    PythonQtShell_QSqlDriver(QObject*  parent = NULL):QSqlDriver(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSqlDriver();

virtual bool  beginTransaction();
virtual bool  cancelQuery();
virtual void childEvent(QChildEvent*  event);
virtual void close();
virtual bool  commitTransaction();
virtual QSqlResult*  createResult() const;
virtual void customEvent(QEvent*  event);
virtual QString  escapeIdentifier(const QString&  identifier, QSqlDriver::IdentifierType  type) const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QString  formatValue(const QSqlField&  field, bool  trimStrings = false) const;
virtual QVariant  handle() const;
virtual bool  hasFeature(QSqlDriver::DriverFeature  f) const;
virtual bool  isIdentifierEscaped(const QString&  identifier, QSqlDriver::IdentifierType  type) const;
virtual bool  isOpen() const;
virtual bool  open(const QString&  db, const QString&  user = QString(), const QString&  password = QString(), const QString&  host = QString(), int  port = -1, const QString&  connOpts = QString());
virtual QSqlIndex  primaryIndex(const QString&  tableName) const;
virtual QSqlRecord  record(const QString&  tableName) const;
virtual bool  rollbackTransaction();
virtual void setLastError(const QSqlError&  e);
virtual void setOpen(bool  o);
virtual void setOpenError(bool  e);
virtual QString  sqlStatement(QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const;
virtual QString  stripDelimiters(const QString&  identifier, QSqlDriver::IdentifierType  type) const;
virtual bool  subscribeToNotification(const QString&  name);
virtual QStringList  subscribedToNotifications() const;
virtual QStringList  tables(QSql::TableType  tableType) const;
virtual void timerEvent(QTimerEvent*  event);
virtual bool  unsubscribeFromNotification(const QString&  name);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlDriver : public QSqlDriver
{ public:
inline void promoted_setLastError(const QSqlError&  e) { this->setLastError(e); }
inline void promoted_setOpen(bool  o) { this->setOpen(o); }
inline void promoted_setOpenError(bool  e) { this->setOpenError(e); }
inline bool  py_q_beginTransaction() { return QSqlDriver::beginTransaction(); }
inline bool  py_q_cancelQuery() { return QSqlDriver::cancelQuery(); }
inline void py_q_close() { this->close(); }
inline bool  py_q_commitTransaction() { return QSqlDriver::commitTransaction(); }
inline QSqlResult*  py_q_createResult() const { return this->createResult(); }
inline QString  py_q_escapeIdentifier(const QString&  identifier, QSqlDriver::IdentifierType  type) const { return QSqlDriver::escapeIdentifier(identifier, type); }
inline QString  py_q_formatValue(const QSqlField&  field, bool  trimStrings = false) const { return QSqlDriver::formatValue(field, trimStrings); }
inline QVariant  py_q_handle() const { return QSqlDriver::handle(); }
inline bool  py_q_hasFeature(QSqlDriver::DriverFeature  f) const { return this->hasFeature(f); }
inline bool  py_q_isIdentifierEscaped(const QString&  identifier, QSqlDriver::IdentifierType  type) const { return QSqlDriver::isIdentifierEscaped(identifier, type); }
inline bool  py_q_isOpen() const { return QSqlDriver::isOpen(); }
inline bool  py_q_open(const QString&  db, const QString&  user = QString(), const QString&  password = QString(), const QString&  host = QString(), int  port = -1, const QString&  connOpts = QString()) { return this->open(db, user, password, host, port, connOpts); }
inline QSqlIndex  py_q_primaryIndex(const QString&  tableName) const { return QSqlDriver::primaryIndex(tableName); }
inline QSqlRecord  py_q_record(const QString&  tableName) const { return QSqlDriver::record(tableName); }
inline bool  py_q_rollbackTransaction() { return QSqlDriver::rollbackTransaction(); }
inline void py_q_setLastError(const QSqlError&  e) { QSqlDriver::setLastError(e); }
inline void py_q_setOpen(bool  o) { QSqlDriver::setOpen(o); }
inline void py_q_setOpenError(bool  e) { QSqlDriver::setOpenError(e); }
inline QString  py_q_sqlStatement(QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const { return QSqlDriver::sqlStatement(type, tableName, rec, preparedStatement); }
inline QString  py_q_stripDelimiters(const QString&  identifier, QSqlDriver::IdentifierType  type) const { return QSqlDriver::stripDelimiters(identifier, type); }
inline bool  py_q_subscribeToNotification(const QString&  name) { return QSqlDriver::subscribeToNotification(name); }
inline QStringList  py_q_subscribedToNotifications() const { return QSqlDriver::subscribedToNotifications(); }
inline QStringList  py_q_tables(QSql::TableType  tableType) const { return QSqlDriver::tables(tableType); }
inline bool  py_q_unsubscribeFromNotification(const QString&  name) { return QSqlDriver::unsubscribeFromNotification(name); }
};

class PythonQtWrapper_QSqlDriver : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DbmsType DriverFeature IdentifierType NotificationSource StatementType )
enum DbmsType{
  UnknownDbms = QSqlDriver::UnknownDbms,   MSSqlServer = QSqlDriver::MSSqlServer,   MySqlServer = QSqlDriver::MySqlServer,   PostgreSQL = QSqlDriver::PostgreSQL,   Oracle = QSqlDriver::Oracle,   Sybase = QSqlDriver::Sybase,   SQLite = QSqlDriver::SQLite,   Interbase = QSqlDriver::Interbase,   DB2 = QSqlDriver::DB2};
enum DriverFeature{
  Transactions = QSqlDriver::Transactions,   QuerySize = QSqlDriver::QuerySize,   BLOB = QSqlDriver::BLOB,   Unicode = QSqlDriver::Unicode,   PreparedQueries = QSqlDriver::PreparedQueries,   NamedPlaceholders = QSqlDriver::NamedPlaceholders,   PositionalPlaceholders = QSqlDriver::PositionalPlaceholders,   LastInsertId = QSqlDriver::LastInsertId,   BatchOperations = QSqlDriver::BatchOperations,   SimpleLocking = QSqlDriver::SimpleLocking,   LowPrecisionNumbers = QSqlDriver::LowPrecisionNumbers,   EventNotifications = QSqlDriver::EventNotifications,   FinishQuery = QSqlDriver::FinishQuery,   MultipleResultSets = QSqlDriver::MultipleResultSets,   CancelQuery = QSqlDriver::CancelQuery};
enum IdentifierType{
  FieldName = QSqlDriver::FieldName,   TableName = QSqlDriver::TableName};
enum NotificationSource{
  UnknownSource = QSqlDriver::UnknownSource,   SelfSource = QSqlDriver::SelfSource,   OtherSource = QSqlDriver::OtherSource};
enum StatementType{
  WhereStatement = QSqlDriver::WhereStatement,   SelectStatement = QSqlDriver::SelectStatement,   UpdateStatement = QSqlDriver::UpdateStatement,   InsertStatement = QSqlDriver::InsertStatement,   DeleteStatement = QSqlDriver::DeleteStatement};
public slots:
QSqlDriver* new_QSqlDriver(QObject*  parent = NULL);
void delete_QSqlDriver(QSqlDriver* obj) { delete obj; } 
   bool  beginTransaction(QSqlDriver* theWrappedObject);
   bool  py_q_beginTransaction(QSqlDriver* theWrappedObject){  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_beginTransaction());}
   bool  py_q_cancelQuery(QSqlDriver* theWrappedObject){  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_cancelQuery());}
   void close(QSqlDriver* theWrappedObject);
   void py_q_close(QSqlDriver* theWrappedObject){  (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_close());}
   bool  commitTransaction(QSqlDriver* theWrappedObject);
   bool  py_q_commitTransaction(QSqlDriver* theWrappedObject){  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_commitTransaction());}
   QSqlResult*  createResult(QSqlDriver* theWrappedObject) const;
   QSqlResult*  py_q_createResult(QSqlDriver* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_createResult());}
   QSqlDriver::DbmsType  dbmsType(QSqlDriver* theWrappedObject) const;
   QString  escapeIdentifier(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const;
   QString  py_q_escapeIdentifier(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const{  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_escapeIdentifier(identifier, type));}
   QString  formatValue(QSqlDriver* theWrappedObject, const QSqlField&  field, bool  trimStrings = false) const;
   QString  py_q_formatValue(QSqlDriver* theWrappedObject, const QSqlField&  field, bool  trimStrings = false) const{  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_formatValue(field, trimStrings));}
   QVariant  handle(QSqlDriver* theWrappedObject) const;
   QVariant  py_q_handle(QSqlDriver* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_handle());}
   bool  hasFeature(QSqlDriver* theWrappedObject, QSqlDriver::DriverFeature  f) const;
   bool  py_q_hasFeature(QSqlDriver* theWrappedObject, QSqlDriver::DriverFeature  f) const{  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_hasFeature(f));}
   bool  isIdentifierEscaped(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const;
   bool  py_q_isIdentifierEscaped(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const{  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_isIdentifierEscaped(identifier, type));}
   bool  isOpen(QSqlDriver* theWrappedObject) const;
   bool  py_q_isOpen(QSqlDriver* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_isOpen());}
   bool  isOpenError(QSqlDriver* theWrappedObject) const;
   QSqlError  lastError(QSqlDriver* theWrappedObject) const;
   QSql::NumericalPrecisionPolicy  numericalPrecisionPolicy(QSqlDriver* theWrappedObject) const;
   bool  open(QSqlDriver* theWrappedObject, const QString&  db, const QString&  user = QString(), const QString&  password = QString(), const QString&  host = QString(), int  port = -1, const QString&  connOpts = QString());
   bool  py_q_open(QSqlDriver* theWrappedObject, const QString&  db, const QString&  user = QString(), const QString&  password = QString(), const QString&  host = QString(), int  port = -1, const QString&  connOpts = QString()){  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_open(db, user, password, host, port, connOpts));}
   QSqlIndex  primaryIndex(QSqlDriver* theWrappedObject, const QString&  tableName) const;
   QSqlIndex  py_q_primaryIndex(QSqlDriver* theWrappedObject, const QString&  tableName) const{  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_primaryIndex(tableName));}
   QSqlRecord  record(QSqlDriver* theWrappedObject, const QString&  tableName) const;
   QSqlRecord  py_q_record(QSqlDriver* theWrappedObject, const QString&  tableName) const{  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_record(tableName));}
   bool  rollbackTransaction(QSqlDriver* theWrappedObject);
   bool  py_q_rollbackTransaction(QSqlDriver* theWrappedObject){  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_rollbackTransaction());}
   void setLastError(QSqlDriver* theWrappedObject, const QSqlError&  e);
   void py_q_setLastError(QSqlDriver* theWrappedObject, const QSqlError&  e){  (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_setLastError(e));}
   void setNumericalPrecisionPolicy(QSqlDriver* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy);
   void setOpen(QSqlDriver* theWrappedObject, bool  o);
   void py_q_setOpen(QSqlDriver* theWrappedObject, bool  o){  (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_setOpen(o));}
   void setOpenError(QSqlDriver* theWrappedObject, bool  e);
   void py_q_setOpenError(QSqlDriver* theWrappedObject, bool  e){  (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_setOpenError(e));}
   QString  sqlStatement(QSqlDriver* theWrappedObject, QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const;
   QString  py_q_sqlStatement(QSqlDriver* theWrappedObject, QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const{  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_sqlStatement(type, tableName, rec, preparedStatement));}
   QString  stripDelimiters(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const;
   QString  py_q_stripDelimiters(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const{  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_stripDelimiters(identifier, type));}
   bool  subscribeToNotification(QSqlDriver* theWrappedObject, const QString&  name);
   bool  py_q_subscribeToNotification(QSqlDriver* theWrappedObject, const QString&  name){  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_subscribeToNotification(name));}
   QStringList  subscribedToNotifications(QSqlDriver* theWrappedObject) const;
   QStringList  py_q_subscribedToNotifications(QSqlDriver* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_subscribedToNotifications());}
   QStringList  tables(QSqlDriver* theWrappedObject, QSql::TableType  tableType) const;
   QStringList  py_q_tables(QSqlDriver* theWrappedObject, QSql::TableType  tableType) const{  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_tables(tableType));}
   bool  unsubscribeFromNotification(QSqlDriver* theWrappedObject, const QString&  name);
   bool  py_q_unsubscribeFromNotification(QSqlDriver* theWrappedObject, const QString&  name){  return (((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->py_q_unsubscribeFromNotification(name));}
};





class PythonQtShell_QSqlDriverCreatorBase : public QSqlDriverCreatorBase
{
public:
    PythonQtShell_QSqlDriverCreatorBase():QSqlDriverCreatorBase(),_wrapper(NULL) {};

   ~PythonQtShell_QSqlDriverCreatorBase();

virtual QSqlDriver*  createObject() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlDriverCreatorBase : public QSqlDriverCreatorBase
{ public:
inline QSqlDriver*  py_q_createObject() const { return this->createObject(); }
};

class PythonQtWrapper_QSqlDriverCreatorBase : public QObject
{ Q_OBJECT
public:
public slots:
QSqlDriverCreatorBase* new_QSqlDriverCreatorBase();
void delete_QSqlDriverCreatorBase(QSqlDriverCreatorBase* obj) { delete obj; } 
   QSqlDriver*  createObject(QSqlDriverCreatorBase* theWrappedObject) const;
   QSqlDriver*  py_q_createObject(QSqlDriverCreatorBase* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSqlDriverCreatorBase*)theWrappedObject)->py_q_createObject());}
};





class PythonQtWrapper_QSqlError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ErrorType )
enum ErrorType{
  NoError = QSqlError::NoError,   ConnectionError = QSqlError::ConnectionError,   StatementError = QSqlError::StatementError,   TransactionError = QSqlError::TransactionError,   UnknownError = QSqlError::UnknownError};
public slots:
QSqlError* new_QSqlError(const QSqlError&  other);
QSqlError* new_QSqlError(const QString&  driverText = QString(), const QString&  databaseText = QString(), QSqlError::ErrorType  type = QSqlError::NoError, const QString&  errorCode = QString());
QSqlError* new_QSqlError(const QString&  driverText, const QString&  databaseText, QSqlError::ErrorType  type, int  number);
void delete_QSqlError(QSqlError* obj) { delete obj; } 
   QString  databaseText(QSqlError* theWrappedObject) const;
   QString  driverText(QSqlError* theWrappedObject) const;
   bool  isValid(QSqlError* theWrappedObject) const;
   QString  nativeErrorCode(QSqlError* theWrappedObject) const;
   int  number(QSqlError* theWrappedObject) const;
   bool  __ne__(QSqlError* theWrappedObject, const QSqlError&  other) const;
   bool  __eq__(QSqlError* theWrappedObject, const QSqlError&  other) const;
   void setDatabaseText(QSqlError* theWrappedObject, const QString&  databaseText);
   void setDriverText(QSqlError* theWrappedObject, const QString&  driverText);
   void setNumber(QSqlError* theWrappedObject, int  number);
   void setType(QSqlError* theWrappedObject, QSqlError::ErrorType  type);
   QString  text(QSqlError* theWrappedObject) const;
   QSqlError::ErrorType  type(QSqlError* theWrappedObject) const;
    QString py_toString(QSqlError*);
    bool __nonzero__(QSqlError* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QSqlField : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RequiredStatus )
enum RequiredStatus{
  Unknown = QSqlField::Unknown,   Optional = QSqlField::Optional,   Required = QSqlField::Required};
public slots:
QSqlField* new_QSqlField(const QSqlField&  other);
QSqlField* new_QSqlField(const QString&  fieldName = QString(), QVariant::Type  type = QVariant::Invalid);
void delete_QSqlField(QSqlField* obj) { delete obj; } 
   void clear(QSqlField* theWrappedObject);
   QVariant  defaultValue(QSqlField* theWrappedObject) const;
   bool  isAutoValue(QSqlField* theWrappedObject) const;
   bool  isGenerated(QSqlField* theWrappedObject) const;
   bool  isNull(QSqlField* theWrappedObject) const;
   bool  isReadOnly(QSqlField* theWrappedObject) const;
   bool  isValid(QSqlField* theWrappedObject) const;
   int  length(QSqlField* theWrappedObject) const;
   QString  name(QSqlField* theWrappedObject) const;
   bool  __ne__(QSqlField* theWrappedObject, const QSqlField&  other) const;
   bool  __eq__(QSqlField* theWrappedObject, const QSqlField&  other) const;
   int  precision(QSqlField* theWrappedObject) const;
   QSqlField::RequiredStatus  requiredStatus(QSqlField* theWrappedObject) const;
   void setAutoValue(QSqlField* theWrappedObject, bool  autoVal);
   void setDefaultValue(QSqlField* theWrappedObject, const QVariant&  value);
   void setGenerated(QSqlField* theWrappedObject, bool  gen);
   void setLength(QSqlField* theWrappedObject, int  fieldLength);
   void setName(QSqlField* theWrappedObject, const QString&  name);
   void setPrecision(QSqlField* theWrappedObject, int  precision);
   void setReadOnly(QSqlField* theWrappedObject, bool  readOnly);
   void setRequired(QSqlField* theWrappedObject, bool  required);
   void setRequiredStatus(QSqlField* theWrappedObject, QSqlField::RequiredStatus  status);
   void setSqlType(QSqlField* theWrappedObject, int  type);
   void setType(QSqlField* theWrappedObject, QVariant::Type  type);
   void setValue(QSqlField* theWrappedObject, const QVariant&  value);
   QVariant::Type  type(QSqlField* theWrappedObject) const;
   int  typeID(QSqlField* theWrappedObject) const;
   QVariant  value(QSqlField* theWrappedObject) const;
    QString py_toString(QSqlField*);
    bool __nonzero__(QSqlField* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QSqlIndex : public QObject
{ Q_OBJECT
public:
public slots:
QSqlIndex* new_QSqlIndex(const QSqlIndex&  other);
QSqlIndex* new_QSqlIndex(const QString&  cursorName = QString(), const QString&  name = QString());
void delete_QSqlIndex(QSqlIndex* obj) { delete obj; } 
   void append(QSqlIndex* theWrappedObject, const QSqlField&  field);
   void append(QSqlIndex* theWrappedObject, const QSqlField&  field, bool  desc);
   QString  cursorName(QSqlIndex* theWrappedObject) const;
   bool  isDescending(QSqlIndex* theWrappedObject, int  i) const;
   QString  name(QSqlIndex* theWrappedObject) const;
   void setCursorName(QSqlIndex* theWrappedObject, const QString&  cursorName);
   void setDescending(QSqlIndex* theWrappedObject, int  i, bool  desc);
   void setName(QSqlIndex* theWrappedObject, const QString&  name);
    bool __nonzero__(QSqlIndex* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QSqlQuery : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BatchExecutionMode )
enum BatchExecutionMode{
  ValuesAsRows = QSqlQuery::ValuesAsRows,   ValuesAsColumns = QSqlQuery::ValuesAsColumns};
public slots:
QSqlQuery* new_QSqlQuery(QSqlDatabase  db);
QSqlQuery* new_QSqlQuery(QSqlResult*  r);
QSqlQuery* new_QSqlQuery(const QSqlQuery&  other);
QSqlQuery* new_QSqlQuery(const QString&  query = QString(), QSqlDatabase  db = QSqlDatabase());
void delete_QSqlQuery(QSqlQuery* obj) { delete obj; } 
   void addBindValue(QSqlQuery* theWrappedObject, const QVariant&  val, QSql::ParamType  type = QSql::In);
   int  at(QSqlQuery* theWrappedObject) const;
   void bindValue(QSqlQuery* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type = QSql::In);
   void bindValue(QSqlQuery* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type = QSql::In);
   QVariant  boundValue(QSqlQuery* theWrappedObject, const QString&  placeholder) const;
   QVariant  boundValue(QSqlQuery* theWrappedObject, int  pos) const;
   QMap<QString , QVariant >  boundValues(QSqlQuery* theWrappedObject) const;
   void clear(QSqlQuery* theWrappedObject);
   const QSqlDriver*  driver(QSqlQuery* theWrappedObject) const;
   bool  exec(QSqlQuery* theWrappedObject);
   bool  exec(QSqlQuery* theWrappedObject, const QString&  query);
   bool  execBatch(QSqlQuery* theWrappedObject, QSqlQuery::BatchExecutionMode  mode = QSqlQuery::ValuesAsRows);
   QString  executedQuery(QSqlQuery* theWrappedObject) const;
   void finish(QSqlQuery* theWrappedObject);
   bool  first(QSqlQuery* theWrappedObject);
   bool  isActive(QSqlQuery* theWrappedObject) const;
   bool  isForwardOnly(QSqlQuery* theWrappedObject) const;
   bool  isNull(QSqlQuery* theWrappedObject, const QString&  name) const;
   bool  isNull(QSqlQuery* theWrappedObject, int  field) const;
   bool  isSelect(QSqlQuery* theWrappedObject) const;
   bool  isValid(QSqlQuery* theWrappedObject) const;
   bool  last(QSqlQuery* theWrappedObject);
   QSqlError  lastError(QSqlQuery* theWrappedObject) const;
   QVariant  lastInsertId(QSqlQuery* theWrappedObject) const;
   QString  lastQuery(QSqlQuery* theWrappedObject) const;
   bool  next(QSqlQuery* theWrappedObject);
   bool  nextResult(QSqlQuery* theWrappedObject);
   int  numRowsAffected(QSqlQuery* theWrappedObject) const;
   QSql::NumericalPrecisionPolicy  numericalPrecisionPolicy(QSqlQuery* theWrappedObject) const;
   bool  prepare(QSqlQuery* theWrappedObject, const QString&  query);
   bool  previous(QSqlQuery* theWrappedObject);
   QSqlRecord  record(QSqlQuery* theWrappedObject) const;
   const QSqlResult*  result(QSqlQuery* theWrappedObject) const;
   bool  seek(QSqlQuery* theWrappedObject, int  i, bool  relative = false);
   void setForwardOnly(QSqlQuery* theWrappedObject, bool  forward);
   void setNumericalPrecisionPolicy(QSqlQuery* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy);
   int  size(QSqlQuery* theWrappedObject) const;
   QVariant  value(QSqlQuery* theWrappedObject, const QString&  name) const;
   QVariant  value(QSqlQuery* theWrappedObject, int  i) const;
    bool __nonzero__(QSqlQuery* obj) { return obj->isValid(); }
};





class PythonQtShell_QSqlQueryModel : public QSqlQueryModel
{
public:
    PythonQtShell_QSqlQueryModel(QObject*  parent = NULL):QSqlQueryModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSqlQueryModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent = QModelIndex()) const;
virtual void childEvent(QChildEvent*  event);
virtual void clear();
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual void customEvent(QEvent*  event);
virtual QVariant  data(const QModelIndex&  item, int  role = Qt::DisplayRole) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void fetchMore(const QModelIndex&  parent = QModelIndex());
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
virtual QModelIndex  indexInQuery(const QModelIndex&  item) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual QStringList  mimeTypes() const;
virtual bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual void queryChange();
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual void revert();
virtual QHash<int , QByteArray >  roleNames() const;
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;
virtual void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDragActions() const;
virtual Qt::DropActions  supportedDropActions() const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlQueryModel : public QSqlQueryModel
{ public:
inline void promoted_beginInsertColumns(const QModelIndex&  parent, int  first, int  last) { this->beginInsertColumns(parent, first, last); }
inline void promoted_beginInsertRows(const QModelIndex&  parent, int  first, int  last) { this->beginInsertRows(parent, first, last); }
inline void promoted_beginRemoveColumns(const QModelIndex&  parent, int  first, int  last) { this->beginRemoveColumns(parent, first, last); }
inline void promoted_beginRemoveRows(const QModelIndex&  parent, int  first, int  last) { this->beginRemoveRows(parent, first, last); }
inline void promoted_beginResetModel() { this->beginResetModel(); }
inline void promoted_endInsertColumns() { this->endInsertColumns(); }
inline void promoted_endInsertRows() { this->endInsertRows(); }
inline void promoted_endRemoveColumns() { this->endRemoveColumns(); }
inline void promoted_endRemoveRows() { this->endRemoveRows(); }
inline void promoted_endResetModel() { this->endResetModel(); }
inline QModelIndex  promoted_indexInQuery(const QModelIndex&  item) const { return this->indexInQuery(item); }
inline void promoted_queryChange() { this->queryChange(); }
inline void promoted_setLastError(const QSqlError&  error) { this->setLastError(error); }
inline bool  py_q_canFetchMore(const QModelIndex&  parent = QModelIndex()) const { return QSqlQueryModel::canFetchMore(parent); }
inline void py_q_clear() { QSqlQueryModel::clear(); }
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QSqlQueryModel::columnCount(parent); }
inline QVariant  py_q_data(const QModelIndex&  item, int  role = Qt::DisplayRole) const { return QSqlQueryModel::data(item, role); }
inline void py_q_fetchMore(const QModelIndex&  parent = QModelIndex()) { QSqlQueryModel::fetchMore(parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QSqlQueryModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_indexInQuery(const QModelIndex&  item) const { return QSqlQueryModel::indexInQuery(item); }
inline bool  py_q_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlQueryModel::insertColumns(column, count, parent); }
inline void py_q_queryChange() { QSqlQueryModel::queryChange(); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlQueryModel::removeColumns(column, count, parent); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QSqlQueryModel::rowCount(parent); }
inline bool  py_q_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QSqlQueryModel::setHeaderData(section, orientation, value, role); }
};

class PythonQtWrapper_QSqlQueryModel : public QObject
{ Q_OBJECT
public:
public slots:
QSqlQueryModel* new_QSqlQueryModel(QObject*  parent = NULL);
void delete_QSqlQueryModel(QSqlQueryModel* obj) { delete obj; } 
   void beginInsertColumns(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginInsertRows(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginRemoveColumns(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginRemoveRows(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginResetModel(QSqlQueryModel* theWrappedObject);
   bool  py_q_canFetchMore(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->py_q_canFetchMore(parent));}
   void clear(QSqlQueryModel* theWrappedObject);
   void py_q_clear(QSqlQueryModel* theWrappedObject){  (((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->py_q_clear());}
   int  py_q_columnCount(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->py_q_columnCount(parent));}
   QVariant  py_q_data(QSqlQueryModel* theWrappedObject, const QModelIndex&  item, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->py_q_data(item, role));}
   void endInsertColumns(QSqlQueryModel* theWrappedObject);
   void endInsertRows(QSqlQueryModel* theWrappedObject);
   void endRemoveColumns(QSqlQueryModel* theWrappedObject);
   void endRemoveRows(QSqlQueryModel* theWrappedObject);
   void endResetModel(QSqlQueryModel* theWrappedObject);
   void py_q_fetchMore(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()){  (((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->py_q_fetchMore(parent));}
   QVariant  py_q_headerData(QSqlQueryModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QModelIndex  indexInQuery(QSqlQueryModel* theWrappedObject, const QModelIndex&  item) const;
   QModelIndex  py_q_indexInQuery(QSqlQueryModel* theWrappedObject, const QModelIndex&  item) const{  return (((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->py_q_indexInQuery(item));}
   bool  py_q_insertColumns(QSqlQueryModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->py_q_insertColumns(column, count, parent));}
   QSqlError  lastError(QSqlQueryModel* theWrappedObject) const;
   QSqlQuery  query(QSqlQueryModel* theWrappedObject) const;
   void queryChange(QSqlQueryModel* theWrappedObject);
   void py_q_queryChange(QSqlQueryModel* theWrappedObject){  (((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->py_q_queryChange());}
   QSqlRecord  record(QSqlQueryModel* theWrappedObject) const;
   QSqlRecord  record(QSqlQueryModel* theWrappedObject, int  row) const;
   bool  py_q_removeColumns(QSqlQueryModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   int  py_q_rowCount(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->py_q_rowCount(parent));}
   bool  py_q_setHeaderData(QSqlQueryModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->py_q_setHeaderData(section, orientation, value, role));}
   void setLastError(QSqlQueryModel* theWrappedObject, const QSqlError&  error);
   void setQuery(QSqlQueryModel* theWrappedObject, const QSqlQuery&  query);
   void setQuery(QSqlQueryModel* theWrappedObject, const QString&  query, const QSqlDatabase&  db = QSqlDatabase());
};





class PythonQtWrapper_QSqlRecord : public QObject
{ Q_OBJECT
public:
public slots:
QSqlRecord* new_QSqlRecord();
QSqlRecord* new_QSqlRecord(const QSqlRecord&  other);
void delete_QSqlRecord(QSqlRecord* obj) { delete obj; } 
   void append(QSqlRecord* theWrappedObject, const QSqlField&  field);
   void clear(QSqlRecord* theWrappedObject);
   void clearValues(QSqlRecord* theWrappedObject);
   bool  contains(QSqlRecord* theWrappedObject, const QString&  name) const;
   int  count(QSqlRecord* theWrappedObject) const;
   QSqlField  field(QSqlRecord* theWrappedObject, const QString&  name) const;
   QSqlField  field(QSqlRecord* theWrappedObject, int  i) const;
   QString  fieldName(QSqlRecord* theWrappedObject, int  i) const;
   int  indexOf(QSqlRecord* theWrappedObject, const QString&  name) const;
   void insert(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field);
   bool  isEmpty(QSqlRecord* theWrappedObject) const;
   bool  isGenerated(QSqlRecord* theWrappedObject, const QString&  name) const;
   bool  isGenerated(QSqlRecord* theWrappedObject, int  i) const;
   bool  isNull(QSqlRecord* theWrappedObject, const QString&  name) const;
   bool  isNull(QSqlRecord* theWrappedObject, int  i) const;
   QSqlRecord  keyValues(QSqlRecord* theWrappedObject, const QSqlRecord&  keyFields) const;
   bool  __ne__(QSqlRecord* theWrappedObject, const QSqlRecord&  other) const;
   bool  __eq__(QSqlRecord* theWrappedObject, const QSqlRecord&  other) const;
   void remove(QSqlRecord* theWrappedObject, int  pos);
   void replace(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field);
   void setGenerated(QSqlRecord* theWrappedObject, const QString&  name, bool  generated);
   void setGenerated(QSqlRecord* theWrappedObject, int  i, bool  generated);
   void setNull(QSqlRecord* theWrappedObject, const QString&  name);
   void setNull(QSqlRecord* theWrappedObject, int  i);
   void setValue(QSqlRecord* theWrappedObject, const QString&  name, const QVariant&  val);
   void setValue(QSqlRecord* theWrappedObject, int  i, const QVariant&  val);
   QVariant  value(QSqlRecord* theWrappedObject, const QString&  name) const;
   QVariant  value(QSqlRecord* theWrappedObject, int  i) const;
    QString py_toString(QSqlRecord*);
    bool __nonzero__(QSqlRecord* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QSqlRelation : public QObject
{ Q_OBJECT
public:
public slots:
QSqlRelation* new_QSqlRelation();
QSqlRelation* new_QSqlRelation(const QString&  aTableName, const QString&  indexCol, const QString&  displayCol);
QSqlRelation* new_QSqlRelation(const QSqlRelation& other) {
QSqlRelation* a = new QSqlRelation();
*((QSqlRelation*)a) = other;
return a; }
void delete_QSqlRelation(QSqlRelation* obj) { delete obj; } 
   QString  displayColumn(QSqlRelation* theWrappedObject) const;
   QString  indexColumn(QSqlRelation* theWrappedObject) const;
   bool  isValid(QSqlRelation* theWrappedObject) const;
   QString  tableName(QSqlRelation* theWrappedObject) const;
    bool __nonzero__(QSqlRelation* obj) { return obj->isValid(); }
};





class PythonQtShell_QSqlRelationalTableModel : public QSqlRelationalTableModel
{
public:
    PythonQtShell_QSqlRelationalTableModel(QObject*  parent = NULL, QSqlDatabase  db = QSqlDatabase()):QSqlRelationalTableModel(parent, db),_wrapper(NULL) {};

   ~PythonQtShell_QSqlRelationalTableModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent = QModelIndex()) const;
virtual void childEvent(QChildEvent*  event);
virtual void clear();
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual void customEvent(QEvent*  event);
virtual QVariant  data(const QModelIndex&  item, int  role = Qt::DisplayRole) const;
virtual bool  deleteRowFromTable(int  row);
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void fetchMore(const QModelIndex&  parent = QModelIndex());
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
virtual QModelIndex  indexInQuery(const QModelIndex&  item) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  insertRowIntoTable(const QSqlRecord&  values);
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual QStringList  mimeTypes() const;
virtual bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual QString  orderByClause() const;
virtual void queryChange();
virtual QSqlTableModel*  relationModel(int  column) const;
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual void revert();
virtual void revertRow(int  row);
virtual QHash<int , QByteArray >  roleNames() const;
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  select();
virtual bool  selectRow(int  row);
virtual QString  selectStatement() const;
virtual bool  setData(const QModelIndex&  item, const QVariant&  value, int  role = Qt::EditRole);
virtual void setEditStrategy(QSqlTableModel::EditStrategy  strategy);
virtual void setFilter(const QString&  filter);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual void setRelation(int  column, const QSqlRelation&  relation);
virtual void setSort(int  column, Qt::SortOrder  order);
virtual void setTable(const QString&  tableName);
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;
virtual void sort(int  column, Qt::SortOrder  order);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDragActions() const;
virtual Qt::DropActions  supportedDropActions() const;
virtual void timerEvent(QTimerEvent*  event);
virtual bool  updateRowInTable(int  row, const QSqlRecord&  values);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlRelationalTableModel : public QSqlRelationalTableModel
{ public:
inline bool  promoted_insertRowIntoTable(const QSqlRecord&  values) { return this->insertRowIntoTable(values); }
inline QString  promoted_orderByClause() const { return this->orderByClause(); }
inline QString  promoted_selectStatement() const { return this->selectStatement(); }
inline bool  promoted_updateRowInTable(int  row, const QSqlRecord&  values) { return this->updateRowInTable(row, values); }
inline void py_q_clear() { QSqlRelationalTableModel::clear(); }
inline QVariant  py_q_data(const QModelIndex&  item, int  role = Qt::DisplayRole) const { return QSqlRelationalTableModel::data(item, role); }
inline bool  py_q_insertRowIntoTable(const QSqlRecord&  values) { return QSqlRelationalTableModel::insertRowIntoTable(values); }
inline QString  py_q_orderByClause() const { return QSqlRelationalTableModel::orderByClause(); }
inline QSqlTableModel*  py_q_relationModel(int  column) const { return QSqlRelationalTableModel::relationModel(column); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlRelationalTableModel::removeColumns(column, count, parent); }
inline void py_q_revertRow(int  row) { QSqlRelationalTableModel::revertRow(row); }
inline bool  py_q_select() { return QSqlRelationalTableModel::select(); }
inline QString  py_q_selectStatement() const { return QSqlRelationalTableModel::selectStatement(); }
inline bool  py_q_setData(const QModelIndex&  item, const QVariant&  value, int  role = Qt::EditRole) { return QSqlRelationalTableModel::setData(item, value, role); }
inline void py_q_setRelation(int  column, const QSqlRelation&  relation) { QSqlRelationalTableModel::setRelation(column, relation); }
inline void py_q_setTable(const QString&  tableName) { QSqlRelationalTableModel::setTable(tableName); }
inline bool  py_q_updateRowInTable(int  row, const QSqlRecord&  values) { return QSqlRelationalTableModel::updateRowInTable(row, values); }
};

class PythonQtWrapper_QSqlRelationalTableModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(JoinMode )
enum JoinMode{
  InnerJoin = QSqlRelationalTableModel::InnerJoin,   LeftJoin = QSqlRelationalTableModel::LeftJoin};
public slots:
QSqlRelationalTableModel* new_QSqlRelationalTableModel(QObject*  parent = NULL, QSqlDatabase  db = QSqlDatabase());
void delete_QSqlRelationalTableModel(QSqlRelationalTableModel* obj) { delete obj; } 
   void py_q_clear(QSqlRelationalTableModel* theWrappedObject){  (((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->py_q_clear());}
   QVariant  py_q_data(QSqlRelationalTableModel* theWrappedObject, const QModelIndex&  item, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->py_q_data(item, role));}
   bool  py_q_insertRowIntoTable(QSqlRelationalTableModel* theWrappedObject, const QSqlRecord&  values){  return (((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->py_q_insertRowIntoTable(values));}
   QString  py_q_orderByClause(QSqlRelationalTableModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->py_q_orderByClause());}
   QSqlRelation  relation(QSqlRelationalTableModel* theWrappedObject, int  column) const;
   QSqlTableModel*  relationModel(QSqlRelationalTableModel* theWrappedObject, int  column) const;
   QSqlTableModel*  py_q_relationModel(QSqlRelationalTableModel* theWrappedObject, int  column) const{  return (((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->py_q_relationModel(column));}
   bool  py_q_removeColumns(QSqlRelationalTableModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   void py_q_revertRow(QSqlRelationalTableModel* theWrappedObject, int  row){  (((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->py_q_revertRow(row));}
   bool  py_q_select(QSqlRelationalTableModel* theWrappedObject){  return (((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->py_q_select());}
   QString  py_q_selectStatement(QSqlRelationalTableModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->py_q_selectStatement());}
   bool  py_q_setData(QSqlRelationalTableModel* theWrappedObject, const QModelIndex&  item, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->py_q_setData(item, value, role));}
   void setJoinMode(QSqlRelationalTableModel* theWrappedObject, QSqlRelationalTableModel::JoinMode  joinMode);
   void setRelation(QSqlRelationalTableModel* theWrappedObject, int  column, const QSqlRelation&  relation);
   void py_q_setRelation(QSqlRelationalTableModel* theWrappedObject, int  column, const QSqlRelation&  relation){  (((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->py_q_setRelation(column, relation));}
   void py_q_setTable(QSqlRelationalTableModel* theWrappedObject, const QString&  tableName){  (((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->py_q_setTable(tableName));}
   bool  py_q_updateRowInTable(QSqlRelationalTableModel* theWrappedObject, int  row, const QSqlRecord&  values){  return (((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->py_q_updateRowInTable(row, values));}
};





class PythonQtShell_QSqlResult : public QSqlResult
{
public:
    PythonQtShell_QSqlResult(const QSqlDriver*  db):QSqlResult(db),_wrapper(NULL) {};

   ~PythonQtShell_QSqlResult();

virtual void bindValue(const QString&  placeholder, const QVariant&  val, QSql::ParamType  type);
virtual void bindValue(int  pos, const QVariant&  val, QSql::ParamType  type);
virtual QVariant  data(int  i);
virtual void detachFromResultSet();
virtual bool  exec();
virtual bool  execBatch(bool  arrayBind = false);
virtual bool  fetch(int  i);
virtual bool  fetchFirst();
virtual bool  fetchLast();
virtual bool  fetchNext();
virtual bool  fetchPrevious();
virtual QVariant  handle() const;
virtual bool  isNull(int  i);
virtual QVariant  lastInsertId() const;
virtual bool  nextResult();
virtual int  numRowsAffected();
virtual bool  prepare(const QString&  query);
virtual QSqlRecord  record() const;
virtual bool  reset(const QString&  sqlquery);
virtual bool  savePrepare(const QString&  sqlquery);
virtual void setActive(bool  a);
virtual void setAt(int  at);
virtual void setForwardOnly(bool  forward);
virtual void setLastError(const QSqlError&  e);
virtual void setNumericalPrecisionPolicy(QSql::NumericalPrecisionPolicy  policy);
virtual void setQuery(const QString&  query);
virtual void setSelect(bool  s);
virtual int  size();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlResult : public QSqlResult
{ public:
enum BindingSyntax{
  PositionalBinding = QSqlResult::PositionalBinding,   NamedBinding = QSqlResult::NamedBinding};
enum VirtualHookOperation{
};
inline void promoted_addBindValue(const QVariant&  val, QSql::ParamType  type) { this->addBindValue(val, type); }
inline int  promoted_at() const { return this->at(); }
inline void promoted_bindValue(const QString&  placeholder, const QVariant&  val, QSql::ParamType  type) { this->bindValue(placeholder, val, type); }
inline void promoted_bindValue(int  pos, const QVariant&  val, QSql::ParamType  type) { this->bindValue(pos, val, type); }
inline QSql::ParamType  promoted_bindValueType(const QString&  placeholder) const { return this->bindValueType(placeholder); }
inline QSql::ParamType  promoted_bindValueType(int  pos) const { return this->bindValueType(pos); }
inline int  promoted_bindingSyntax() const { return this->bindingSyntax(); }
inline QVariant  promoted_boundValue(const QString&  placeholder) const { return this->boundValue(placeholder); }
inline QVariant  promoted_boundValue(int  pos) const { return this->boundValue(pos); }
inline int  promoted_boundValueCount() const { return this->boundValueCount(); }
inline QString  promoted_boundValueName(int  pos) const { return this->boundValueName(pos); }
inline QVector<QVariant >&  promoted_boundValues() const { return this->boundValues(); }
inline void promoted_clear() { this->clear(); }
inline QVariant  promoted_data(int  i) { return this->data(i); }
inline void promoted_detachFromResultSet() { this->detachFromResultSet(); }
inline const QSqlDriver*  promoted_driver() const { return this->driver(); }
inline bool  promoted_exec() { return this->exec(); }
inline bool  promoted_execBatch(bool  arrayBind = false) { return this->execBatch(arrayBind); }
inline QString  promoted_executedQuery() const { return this->executedQuery(); }
inline bool  promoted_fetch(int  i) { return this->fetch(i); }
inline bool  promoted_fetchFirst() { return this->fetchFirst(); }
inline bool  promoted_fetchLast() { return this->fetchLast(); }
inline bool  promoted_fetchNext() { return this->fetchNext(); }
inline bool  promoted_fetchPrevious() { return this->fetchPrevious(); }
inline bool  promoted_hasOutValues() const { return this->hasOutValues(); }
inline bool  promoted_isActive() const { return this->isActive(); }
inline bool  promoted_isForwardOnly() const { return this->isForwardOnly(); }
inline bool  promoted_isNull(int  i) { return this->isNull(i); }
inline bool  promoted_isSelect() const { return this->isSelect(); }
inline bool  promoted_isValid() const { return this->isValid(); }
inline QSqlError  promoted_lastError() const { return this->lastError(); }
inline QVariant  promoted_lastInsertId() const { return this->lastInsertId(); }
inline QString  promoted_lastQuery() const { return this->lastQuery(); }
inline bool  promoted_nextResult() { return this->nextResult(); }
inline int  promoted_numRowsAffected() { return this->numRowsAffected(); }
inline QSql::NumericalPrecisionPolicy  promoted_numericalPrecisionPolicy() const { return this->numericalPrecisionPolicy(); }
inline bool  promoted_prepare(const QString&  query) { return this->prepare(query); }
inline QSqlRecord  promoted_record() const { return this->record(); }
inline bool  promoted_reset(const QString&  sqlquery) { return this->reset(sqlquery); }
inline void promoted_resetBindCount() { this->resetBindCount(); }
inline bool  promoted_savePrepare(const QString&  sqlquery) { return this->savePrepare(sqlquery); }
inline void promoted_setActive(bool  a) { this->setActive(a); }
inline void promoted_setAt(int  at) { this->setAt(at); }
inline void promoted_setForwardOnly(bool  forward) { this->setForwardOnly(forward); }
inline void promoted_setLastError(const QSqlError&  e) { this->setLastError(e); }
inline void promoted_setNumericalPrecisionPolicy(QSql::NumericalPrecisionPolicy  policy) { this->setNumericalPrecisionPolicy(policy); }
inline void promoted_setQuery(const QString&  query) { this->setQuery(query); }
inline void promoted_setSelect(bool  s) { this->setSelect(s); }
inline int  promoted_size() { return this->size(); }
inline void py_q_bindValue(const QString&  placeholder, const QVariant&  val, QSql::ParamType  type) { QSqlResult::bindValue(placeholder, val, type); }
inline void py_q_bindValue(int  pos, const QVariant&  val, QSql::ParamType  type) { QSqlResult::bindValue(pos, val, type); }
inline QVariant  py_q_data(int  i) { return this->data(i); }
inline void py_q_detachFromResultSet() { QSqlResult::detachFromResultSet(); }
inline bool  py_q_exec() { return QSqlResult::exec(); }
inline bool  py_q_execBatch(bool  arrayBind = false) { return QSqlResult::execBatch(arrayBind); }
inline bool  py_q_fetch(int  i) { return this->fetch(i); }
inline bool  py_q_fetchFirst() { return this->fetchFirst(); }
inline bool  py_q_fetchLast() { return this->fetchLast(); }
inline bool  py_q_fetchNext() { return QSqlResult::fetchNext(); }
inline bool  py_q_fetchPrevious() { return QSqlResult::fetchPrevious(); }
inline QVariant  py_q_handle() const { return QSqlResult::handle(); }
inline bool  py_q_isNull(int  i) { return this->isNull(i); }
inline QVariant  py_q_lastInsertId() const { return QSqlResult::lastInsertId(); }
inline bool  py_q_nextResult() { return QSqlResult::nextResult(); }
inline int  py_q_numRowsAffected() { return this->numRowsAffected(); }
inline bool  py_q_prepare(const QString&  query) { return QSqlResult::prepare(query); }
inline QSqlRecord  py_q_record() const { return QSqlResult::record(); }
inline bool  py_q_reset(const QString&  sqlquery) { return this->reset(sqlquery); }
inline bool  py_q_savePrepare(const QString&  sqlquery) { return QSqlResult::savePrepare(sqlquery); }
inline void py_q_setActive(bool  a) { QSqlResult::setActive(a); }
inline void py_q_setAt(int  at) { QSqlResult::setAt(at); }
inline void py_q_setForwardOnly(bool  forward) { QSqlResult::setForwardOnly(forward); }
inline void py_q_setLastError(const QSqlError&  e) { QSqlResult::setLastError(e); }
inline void py_q_setNumericalPrecisionPolicy(QSql::NumericalPrecisionPolicy  policy) { QSqlResult::setNumericalPrecisionPolicy(policy); }
inline void py_q_setQuery(const QString&  query) { QSqlResult::setQuery(query); }
inline void py_q_setSelect(bool  s) { QSqlResult::setSelect(s); }
inline int  py_q_size() { return this->size(); }
};

class PythonQtWrapper_QSqlResult : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BindingSyntax VirtualHookOperation )
enum BindingSyntax{
  PositionalBinding = PythonQtPublicPromoter_QSqlResult::PositionalBinding,   NamedBinding = PythonQtPublicPromoter_QSqlResult::NamedBinding};
enum VirtualHookOperation{
};
public slots:
QSqlResult* new_QSqlResult(const QSqlDriver*  db);
void delete_QSqlResult(QSqlResult* obj) { delete obj; } 
   void addBindValue(QSqlResult* theWrappedObject, const QVariant&  val, QSql::ParamType  type);
   int  at(QSqlResult* theWrappedObject) const;
   void bindValue(QSqlResult* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type);
   void py_q_bindValue(QSqlResult* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type){  (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_bindValue(placeholder, val, type));}
   void bindValue(QSqlResult* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type);
   void py_q_bindValue(QSqlResult* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type){  (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_bindValue(pos, val, type));}
   QSql::ParamType  bindValueType(QSqlResult* theWrappedObject, const QString&  placeholder) const;
   QSql::ParamType  bindValueType(QSqlResult* theWrappedObject, int  pos) const;
   int  bindingSyntax(QSqlResult* theWrappedObject) const;
   QVariant  boundValue(QSqlResult* theWrappedObject, const QString&  placeholder) const;
   QVariant  boundValue(QSqlResult* theWrappedObject, int  pos) const;
   int  boundValueCount(QSqlResult* theWrappedObject) const;
   QString  boundValueName(QSqlResult* theWrappedObject, int  pos) const;
   QVector<QVariant >*  boundValues(QSqlResult* theWrappedObject) const;
   void clear(QSqlResult* theWrappedObject);
   QVariant  data(QSqlResult* theWrappedObject, int  i);
   QVariant  py_q_data(QSqlResult* theWrappedObject, int  i){  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_data(i));}
   void detachFromResultSet(QSqlResult* theWrappedObject);
   void py_q_detachFromResultSet(QSqlResult* theWrappedObject){  (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_detachFromResultSet());}
   const QSqlDriver*  driver(QSqlResult* theWrappedObject) const;
   bool  exec(QSqlResult* theWrappedObject);
   bool  py_q_exec(QSqlResult* theWrappedObject){  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_exec());}
   bool  execBatch(QSqlResult* theWrappedObject, bool  arrayBind = false);
   bool  py_q_execBatch(QSqlResult* theWrappedObject, bool  arrayBind = false){  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_execBatch(arrayBind));}
   QString  executedQuery(QSqlResult* theWrappedObject) const;
   bool  fetch(QSqlResult* theWrappedObject, int  i);
   bool  py_q_fetch(QSqlResult* theWrappedObject, int  i){  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_fetch(i));}
   bool  fetchFirst(QSqlResult* theWrappedObject);
   bool  py_q_fetchFirst(QSqlResult* theWrappedObject){  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_fetchFirst());}
   bool  fetchLast(QSqlResult* theWrappedObject);
   bool  py_q_fetchLast(QSqlResult* theWrappedObject){  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_fetchLast());}
   bool  fetchNext(QSqlResult* theWrappedObject);
   bool  py_q_fetchNext(QSqlResult* theWrappedObject){  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_fetchNext());}
   bool  fetchPrevious(QSqlResult* theWrappedObject);
   bool  py_q_fetchPrevious(QSqlResult* theWrappedObject){  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_fetchPrevious());}
   QVariant  handle(QSqlResult* theWrappedObject) const;
   QVariant  py_q_handle(QSqlResult* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_handle());}
   bool  hasOutValues(QSqlResult* theWrappedObject) const;
   bool  isActive(QSqlResult* theWrappedObject) const;
   bool  isForwardOnly(QSqlResult* theWrappedObject) const;
   bool  isNull(QSqlResult* theWrappedObject, int  i);
   bool  py_q_isNull(QSqlResult* theWrappedObject, int  i){  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_isNull(i));}
   bool  isSelect(QSqlResult* theWrappedObject) const;
   bool  isValid(QSqlResult* theWrappedObject) const;
   QSqlError  lastError(QSqlResult* theWrappedObject) const;
   QVariant  lastInsertId(QSqlResult* theWrappedObject) const;
   QVariant  py_q_lastInsertId(QSqlResult* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_lastInsertId());}
   QString  lastQuery(QSqlResult* theWrappedObject) const;
   bool  nextResult(QSqlResult* theWrappedObject);
   bool  py_q_nextResult(QSqlResult* theWrappedObject){  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_nextResult());}
   int  numRowsAffected(QSqlResult* theWrappedObject);
   int  py_q_numRowsAffected(QSqlResult* theWrappedObject){  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_numRowsAffected());}
   QSql::NumericalPrecisionPolicy  numericalPrecisionPolicy(QSqlResult* theWrappedObject) const;
   bool  prepare(QSqlResult* theWrappedObject, const QString&  query);
   bool  py_q_prepare(QSqlResult* theWrappedObject, const QString&  query){  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_prepare(query));}
   QSqlRecord  record(QSqlResult* theWrappedObject) const;
   QSqlRecord  py_q_record(QSqlResult* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_record());}
   bool  reset(QSqlResult* theWrappedObject, const QString&  sqlquery);
   bool  py_q_reset(QSqlResult* theWrappedObject, const QString&  sqlquery){  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_reset(sqlquery));}
   void resetBindCount(QSqlResult* theWrappedObject);
   bool  savePrepare(QSqlResult* theWrappedObject, const QString&  sqlquery);
   bool  py_q_savePrepare(QSqlResult* theWrappedObject, const QString&  sqlquery){  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_savePrepare(sqlquery));}
   void setActive(QSqlResult* theWrappedObject, bool  a);
   void py_q_setActive(QSqlResult* theWrappedObject, bool  a){  (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_setActive(a));}
   void setAt(QSqlResult* theWrappedObject, int  at);
   void py_q_setAt(QSqlResult* theWrappedObject, int  at){  (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_setAt(at));}
   void setForwardOnly(QSqlResult* theWrappedObject, bool  forward);
   void py_q_setForwardOnly(QSqlResult* theWrappedObject, bool  forward){  (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_setForwardOnly(forward));}
   void setLastError(QSqlResult* theWrappedObject, const QSqlError&  e);
   void py_q_setLastError(QSqlResult* theWrappedObject, const QSqlError&  e){  (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_setLastError(e));}
   void setNumericalPrecisionPolicy(QSqlResult* theWrappedObject, QSql::NumericalPrecisionPolicy  policy);
   void py_q_setNumericalPrecisionPolicy(QSqlResult* theWrappedObject, QSql::NumericalPrecisionPolicy  policy){  (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_setNumericalPrecisionPolicy(policy));}
   void setQuery(QSqlResult* theWrappedObject, const QString&  query);
   void py_q_setQuery(QSqlResult* theWrappedObject, const QString&  query){  (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_setQuery(query));}
   void setSelect(QSqlResult* theWrappedObject, bool  s);
   void py_q_setSelect(QSqlResult* theWrappedObject, bool  s){  (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_setSelect(s));}
   int  size(QSqlResult* theWrappedObject);
   int  py_q_size(QSqlResult* theWrappedObject){  return (((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->py_q_size());}
};





class PythonQtShell_QSqlTableModel : public QSqlTableModel
{
public:
    PythonQtShell_QSqlTableModel(QObject*  parent = NULL, QSqlDatabase  db = QSqlDatabase()):QSqlTableModel(parent, db),_wrapper(NULL) {};

   ~PythonQtShell_QSqlTableModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent = QModelIndex()) const;
virtual void childEvent(QChildEvent*  event);
virtual void clear();
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual void customEvent(QEvent*  event);
virtual QVariant  data(const QModelIndex&  idx, int  role = Qt::DisplayRole) const;
virtual bool  deleteRowFromTable(int  row);
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void fetchMore(const QModelIndex&  parent = QModelIndex());
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
virtual QModelIndex  indexInQuery(const QModelIndex&  item) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  insertRowIntoTable(const QSqlRecord&  values);
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual QStringList  mimeTypes() const;
virtual bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual QString  orderByClause() const;
virtual void queryChange();
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual void revert();
virtual void revertRow(int  row);
virtual QHash<int , QByteArray >  roleNames() const;
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  select();
virtual bool  selectRow(int  row);
virtual QString  selectStatement() const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual void setEditStrategy(QSqlTableModel::EditStrategy  strategy);
virtual void setFilter(const QString&  filter);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual void setSort(int  column, Qt::SortOrder  order);
virtual void setTable(const QString&  tableName);
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;
virtual void sort(int  column, Qt::SortOrder  order);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDragActions() const;
virtual Qt::DropActions  supportedDropActions() const;
virtual void timerEvent(QTimerEvent*  event);
virtual bool  updateRowInTable(int  row, const QSqlRecord&  values);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlTableModel : public QSqlTableModel
{ public:
inline bool  promoted_deleteRowFromTable(int  row) { return this->deleteRowFromTable(row); }
inline QModelIndex  promoted_indexInQuery(const QModelIndex&  item) const { return this->indexInQuery(item); }
inline bool  promoted_insertRowIntoTable(const QSqlRecord&  values) { return this->insertRowIntoTable(values); }
inline QString  promoted_orderByClause() const { return this->orderByClause(); }
inline QSqlRecord  promoted_primaryValues(int  row) const { return this->primaryValues(row); }
inline QString  promoted_selectStatement() const { return this->selectStatement(); }
inline void promoted_setPrimaryKey(const QSqlIndex&  key) { this->setPrimaryKey(key); }
inline void promoted_setQuery(const QSqlQuery&  query) { this->setQuery(query); }
inline bool  promoted_updateRowInTable(int  row, const QSqlRecord&  values) { return this->updateRowInTable(row, values); }
inline void py_q_clear() { QSqlTableModel::clear(); }
inline QVariant  py_q_data(const QModelIndex&  idx, int  role = Qt::DisplayRole) const { return QSqlTableModel::data(idx, role); }
inline bool  py_q_deleteRowFromTable(int  row) { return QSqlTableModel::deleteRowFromTable(row); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QSqlTableModel::flags(index); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QSqlTableModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_indexInQuery(const QModelIndex&  item) const { return QSqlTableModel::indexInQuery(item); }
inline bool  py_q_insertRowIntoTable(const QSqlRecord&  values) { return QSqlTableModel::insertRowIntoTable(values); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlTableModel::insertRows(row, count, parent); }
inline QString  py_q_orderByClause() const { return QSqlTableModel::orderByClause(); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlTableModel::removeColumns(column, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlTableModel::removeRows(row, count, parent); }
inline void py_q_revert() { QSqlTableModel::revert(); }
inline void py_q_revertRow(int  row) { QSqlTableModel::revertRow(row); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QSqlTableModel::rowCount(parent); }
inline bool  py_q_select() { return QSqlTableModel::select(); }
inline bool  py_q_selectRow(int  row) { return QSqlTableModel::selectRow(row); }
inline QString  py_q_selectStatement() const { return QSqlTableModel::selectStatement(); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QSqlTableModel::setData(index, value, role); }
inline void py_q_setEditStrategy(QSqlTableModel::EditStrategy  strategy) { QSqlTableModel::setEditStrategy(strategy); }
inline void py_q_setFilter(const QString&  filter) { QSqlTableModel::setFilter(filter); }
inline void py_q_setSort(int  column, Qt::SortOrder  order) { QSqlTableModel::setSort(column, order); }
inline void py_q_setTable(const QString&  tableName) { QSqlTableModel::setTable(tableName); }
inline void py_q_sort(int  column, Qt::SortOrder  order) { QSqlTableModel::sort(column, order); }
inline bool  py_q_submit() { return QSqlTableModel::submit(); }
inline bool  py_q_updateRowInTable(int  row, const QSqlRecord&  values) { return QSqlTableModel::updateRowInTable(row, values); }
};

class PythonQtWrapper_QSqlTableModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(EditStrategy )
enum EditStrategy{
  OnFieldChange = QSqlTableModel::OnFieldChange,   OnRowChange = QSqlTableModel::OnRowChange,   OnManualSubmit = QSqlTableModel::OnManualSubmit};
public slots:
QSqlTableModel* new_QSqlTableModel(QObject*  parent = NULL, QSqlDatabase  db = QSqlDatabase());
void delete_QSqlTableModel(QSqlTableModel* obj) { delete obj; } 
   void py_q_clear(QSqlTableModel* theWrappedObject){  (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_clear());}
   QVariant  py_q_data(QSqlTableModel* theWrappedObject, const QModelIndex&  idx, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_data(idx, role));}
   QSqlDatabase  database(QSqlTableModel* theWrappedObject) const;
   bool  deleteRowFromTable(QSqlTableModel* theWrappedObject, int  row);
   bool  py_q_deleteRowFromTable(QSqlTableModel* theWrappedObject, int  row){  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_deleteRowFromTable(row));}
   QSqlTableModel::EditStrategy  editStrategy(QSqlTableModel* theWrappedObject) const;
   int  fieldIndex(QSqlTableModel* theWrappedObject, const QString&  fieldName) const;
   QString  filter(QSqlTableModel* theWrappedObject) const;
   Qt::ItemFlags  py_q_flags(QSqlTableModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_flags(index));}
   QVariant  py_q_headerData(QSqlTableModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QModelIndex  py_q_indexInQuery(QSqlTableModel* theWrappedObject, const QModelIndex&  item) const{  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_indexInQuery(item));}
   bool  insertRecord(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  record);
   bool  insertRowIntoTable(QSqlTableModel* theWrappedObject, const QSqlRecord&  values);
   bool  py_q_insertRowIntoTable(QSqlTableModel* theWrappedObject, const QSqlRecord&  values){  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_insertRowIntoTable(values));}
   bool  py_q_insertRows(QSqlTableModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   bool  isDirty(QSqlTableModel* theWrappedObject) const;
   bool  isDirty(QSqlTableModel* theWrappedObject, const QModelIndex&  index) const;
   QString  orderByClause(QSqlTableModel* theWrappedObject) const;
   QString  py_q_orderByClause(QSqlTableModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_orderByClause());}
   QSqlIndex  primaryKey(QSqlTableModel* theWrappedObject) const;
   QSqlRecord  primaryValues(QSqlTableModel* theWrappedObject, int  row) const;
   QSqlRecord  record(QSqlTableModel* theWrappedObject) const;
   QSqlRecord  record(QSqlTableModel* theWrappedObject, int  row) const;
   bool  py_q_removeColumns(QSqlTableModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   bool  py_q_removeRows(QSqlTableModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   void py_q_revert(QSqlTableModel* theWrappedObject){  (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_revert());}
   void revertRow(QSqlTableModel* theWrappedObject, int  row);
   void py_q_revertRow(QSqlTableModel* theWrappedObject, int  row){  (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_revertRow(row));}
   int  py_q_rowCount(QSqlTableModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_rowCount(parent));}
   bool  py_q_select(QSqlTableModel* theWrappedObject){  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_select());}
   bool  py_q_selectRow(QSqlTableModel* theWrappedObject, int  row){  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_selectRow(row));}
   QString  selectStatement(QSqlTableModel* theWrappedObject) const;
   QString  py_q_selectStatement(QSqlTableModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_selectStatement());}
   bool  py_q_setData(QSqlTableModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_setData(index, value, role));}
   void setEditStrategy(QSqlTableModel* theWrappedObject, QSqlTableModel::EditStrategy  strategy);
   void py_q_setEditStrategy(QSqlTableModel* theWrappedObject, QSqlTableModel::EditStrategy  strategy){  (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_setEditStrategy(strategy));}
   void setFilter(QSqlTableModel* theWrappedObject, const QString&  filter);
   void py_q_setFilter(QSqlTableModel* theWrappedObject, const QString&  filter){  (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_setFilter(filter));}
   void setPrimaryKey(QSqlTableModel* theWrappedObject, const QSqlIndex&  key);
   void setQuery(QSqlTableModel* theWrappedObject, const QSqlQuery&  query);
   bool  setRecord(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  record);
   void setSort(QSqlTableModel* theWrappedObject, int  column, Qt::SortOrder  order);
   void py_q_setSort(QSqlTableModel* theWrappedObject, int  column, Qt::SortOrder  order){  (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_setSort(column, order));}
   void setTable(QSqlTableModel* theWrappedObject, const QString&  tableName);
   void py_q_setTable(QSqlTableModel* theWrappedObject, const QString&  tableName){  (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_setTable(tableName));}
   void py_q_sort(QSqlTableModel* theWrappedObject, int  column, Qt::SortOrder  order){  (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_sort(column, order));}
   bool  py_q_submit(QSqlTableModel* theWrappedObject){  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_submit());}
   QString  tableName(QSqlTableModel* theWrappedObject) const;
   bool  updateRowInTable(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  values);
   bool  py_q_updateRowInTable(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  values){  return (((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->py_q_updateRowInTable(row, values));}
};


