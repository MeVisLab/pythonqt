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
};





class PythonQtShell_QSqlDriver : public QSqlDriver
{
public:
    PythonQtShell_QSqlDriver(QObject*  parent = 0):QSqlDriver(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSqlDriver();

virtual bool  beginTransaction();
virtual bool  cancelQuery();
virtual void childEvent(QChildEvent*  arg__1);
virtual void close();
virtual bool  commitTransaction();
virtual QSqlResult*  createResult() const;
virtual void customEvent(QEvent*  arg__1);
virtual QString  escapeIdentifier(const QString&  identifier, QSqlDriver::IdentifierType  type) const;
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
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
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  unsubscribeFromNotification(const QString&  name);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlDriver : public QSqlDriver
{ public:
inline bool  promoted_beginTransaction() { return QSqlDriver::beginTransaction(); }
inline bool  promoted_cancelQuery() { return QSqlDriver::cancelQuery(); }
inline void promoted_close() { this->close(); }
inline bool  promoted_commitTransaction() { return QSqlDriver::commitTransaction(); }
inline QSqlResult*  promoted_createResult() const { return this->createResult(); }
inline QString  promoted_escapeIdentifier(const QString&  identifier, QSqlDriver::IdentifierType  type) const { return QSqlDriver::escapeIdentifier(identifier, type); }
inline QString  promoted_formatValue(const QSqlField&  field, bool  trimStrings = false) const { return QSqlDriver::formatValue(field, trimStrings); }
inline QVariant  promoted_handle() const { return QSqlDriver::handle(); }
inline bool  promoted_hasFeature(QSqlDriver::DriverFeature  f) const { return this->hasFeature(f); }
inline bool  promoted_isIdentifierEscaped(const QString&  identifier, QSqlDriver::IdentifierType  type) const { return QSqlDriver::isIdentifierEscaped(identifier, type); }
inline bool  promoted_isOpen() const { return QSqlDriver::isOpen(); }
inline bool  promoted_open(const QString&  db, const QString&  user = QString(), const QString&  password = QString(), const QString&  host = QString(), int  port = -1, const QString&  connOpts = QString()) { return this->open(db, user, password, host, port, connOpts); }
inline QSqlIndex  promoted_primaryIndex(const QString&  tableName) const { return QSqlDriver::primaryIndex(tableName); }
inline QSqlRecord  promoted_record(const QString&  tableName) const { return QSqlDriver::record(tableName); }
inline bool  promoted_rollbackTransaction() { return QSqlDriver::rollbackTransaction(); }
inline void promoted_setLastError(const QSqlError&  e) { QSqlDriver::setLastError(e); }
inline void promoted_setOpen(bool  o) { QSqlDriver::setOpen(o); }
inline void promoted_setOpenError(bool  e) { QSqlDriver::setOpenError(e); }
inline QString  promoted_sqlStatement(QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const { return QSqlDriver::sqlStatement(type, tableName, rec, preparedStatement); }
inline QString  promoted_stripDelimiters(const QString&  identifier, QSqlDriver::IdentifierType  type) const { return QSqlDriver::stripDelimiters(identifier, type); }
inline bool  promoted_subscribeToNotification(const QString&  name) { return QSqlDriver::subscribeToNotification(name); }
inline QStringList  promoted_subscribedToNotifications() const { return QSqlDriver::subscribedToNotifications(); }
inline QStringList  promoted_tables(QSql::TableType  tableType) const { return QSqlDriver::tables(tableType); }
inline bool  promoted_unsubscribeFromNotification(const QString&  name) { return QSqlDriver::unsubscribeFromNotification(name); }
};

class PythonQtWrapper_QSqlDriver : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DriverFeature IdentifierType NotificationSource StatementType )
enum DriverFeature{
  Transactions = QSqlDriver::Transactions,   QuerySize = QSqlDriver::QuerySize,   BLOB = QSqlDriver::BLOB,   Unicode = QSqlDriver::Unicode,   PreparedQueries = QSqlDriver::PreparedQueries,   NamedPlaceholders = QSqlDriver::NamedPlaceholders,   PositionalPlaceholders = QSqlDriver::PositionalPlaceholders,   LastInsertId = QSqlDriver::LastInsertId,   BatchOperations = QSqlDriver::BatchOperations,   SimpleLocking = QSqlDriver::SimpleLocking,   LowPrecisionNumbers = QSqlDriver::LowPrecisionNumbers,   EventNotifications = QSqlDriver::EventNotifications,   FinishQuery = QSqlDriver::FinishQuery,   MultipleResultSets = QSqlDriver::MultipleResultSets,   CancelQuery = QSqlDriver::CancelQuery};
enum IdentifierType{
  FieldName = QSqlDriver::FieldName,   TableName = QSqlDriver::TableName};
enum NotificationSource{
  UnknownSource = QSqlDriver::UnknownSource,   SelfSource = QSqlDriver::SelfSource,   OtherSource = QSqlDriver::OtherSource};
enum StatementType{
  WhereStatement = QSqlDriver::WhereStatement,   SelectStatement = QSqlDriver::SelectStatement,   UpdateStatement = QSqlDriver::UpdateStatement,   InsertStatement = QSqlDriver::InsertStatement,   DeleteStatement = QSqlDriver::DeleteStatement};
public slots:
QSqlDriver* new_QSqlDriver(QObject*  parent = 0);
void delete_QSqlDriver(QSqlDriver* obj) { delete obj; } 
   bool  beginTransaction(QSqlDriver* theWrappedObject);
   bool  cancelQuery(QSqlDriver* theWrappedObject);
   void close(QSqlDriver* theWrappedObject);
   bool  commitTransaction(QSqlDriver* theWrappedObject);
   QSqlResult*  createResult(QSqlDriver* theWrappedObject) const;
   QString  escapeIdentifier(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const;
   QString  formatValue(QSqlDriver* theWrappedObject, const QSqlField&  field, bool  trimStrings = false) const;
   QVariant  handle(QSqlDriver* theWrappedObject) const;
   bool  hasFeature(QSqlDriver* theWrappedObject, QSqlDriver::DriverFeature  f) const;
   bool  isIdentifierEscaped(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const;
   bool  isOpen(QSqlDriver* theWrappedObject) const;
   bool  isOpenError(QSqlDriver* theWrappedObject) const;
   QSqlError  lastError(QSqlDriver* theWrappedObject) const;
   QSql::NumericalPrecisionPolicy  numericalPrecisionPolicy(QSqlDriver* theWrappedObject) const;
   bool  open(QSqlDriver* theWrappedObject, const QString&  db, const QString&  user = QString(), const QString&  password = QString(), const QString&  host = QString(), int  port = -1, const QString&  connOpts = QString());
   QSqlIndex  primaryIndex(QSqlDriver* theWrappedObject, const QString&  tableName) const;
   QSqlRecord  record(QSqlDriver* theWrappedObject, const QString&  tableName) const;
   bool  rollbackTransaction(QSqlDriver* theWrappedObject);
   void setLastError(QSqlDriver* theWrappedObject, const QSqlError&  e);
   void setNumericalPrecisionPolicy(QSqlDriver* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy);
   void setOpen(QSqlDriver* theWrappedObject, bool  o);
   void setOpenError(QSqlDriver* theWrappedObject, bool  e);
   QString  sqlStatement(QSqlDriver* theWrappedObject, QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const;
   QString  stripDelimiters(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const;
   bool  subscribeToNotification(QSqlDriver* theWrappedObject, const QString&  name);
   QStringList  subscribedToNotifications(QSqlDriver* theWrappedObject) const;
   QStringList  tables(QSqlDriver* theWrappedObject, QSql::TableType  tableType) const;
   bool  unsubscribeFromNotification(QSqlDriver* theWrappedObject, const QString&  name);
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
inline QSqlDriver*  promoted_createObject() const { return this->createObject(); }
};

class PythonQtWrapper_QSqlDriverCreatorBase : public QObject
{ Q_OBJECT
public:
public slots:
QSqlDriverCreatorBase* new_QSqlDriverCreatorBase();
void delete_QSqlDriverCreatorBase(QSqlDriverCreatorBase* obj) { delete obj; } 
   QSqlDriver*  createObject(QSqlDriverCreatorBase* theWrappedObject) const;
};





class PythonQtWrapper_QSqlError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ErrorType )
enum ErrorType{
  NoError = QSqlError::NoError,   ConnectionError = QSqlError::ConnectionError,   StatementError = QSqlError::StatementError,   TransactionError = QSqlError::TransactionError,   UnknownError = QSqlError::UnknownError};
public slots:
QSqlError* new_QSqlError(const QSqlError&  other);
QSqlError* new_QSqlError(const QString&  driverText = QString(), const QString&  databaseText = QString(), QSqlError::ErrorType  type = QSqlError::NoError, int  number = -1);
void delete_QSqlError(QSqlError* obj) { delete obj; } 
   QString  databaseText(QSqlError* theWrappedObject) const;
   QString  driverText(QSqlError* theWrappedObject) const;
   bool  isValid(QSqlError* theWrappedObject) const;
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
    bool __nonzero__(QSqlField* obj) { return !obj->isNull(); }
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
};





class PythonQtShell_QSqlQueryModel : public QSqlQueryModel
{
public:
    PythonQtShell_QSqlQueryModel(QObject*  parent = 0):QSqlQueryModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSqlQueryModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent = QModelIndex()) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void clear();
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual void customEvent(QEvent*  arg__1);
virtual QVariant  data(const QModelIndex&  item, int  role = Qt::DisplayRole) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
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
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlQueryModel : public QSqlQueryModel
{ public:
inline void promoted_beginInsertColumns(const QModelIndex&  parent, int  first, int  last) { QSqlQueryModel::beginInsertColumns(parent, first, last); }
inline void promoted_beginInsertRows(const QModelIndex&  parent, int  first, int  last) { QSqlQueryModel::beginInsertRows(parent, first, last); }
inline void promoted_beginRemoveColumns(const QModelIndex&  parent, int  first, int  last) { QSqlQueryModel::beginRemoveColumns(parent, first, last); }
inline void promoted_beginRemoveRows(const QModelIndex&  parent, int  first, int  last) { QSqlQueryModel::beginRemoveRows(parent, first, last); }
inline void promoted_beginResetModel() { QSqlQueryModel::beginResetModel(); }
inline bool  promoted_canFetchMore(const QModelIndex&  parent = QModelIndex()) const { return QSqlQueryModel::canFetchMore(parent); }
inline void promoted_clear() { QSqlQueryModel::clear(); }
inline int  promoted_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QSqlQueryModel::columnCount(parent); }
inline QVariant  promoted_data(const QModelIndex&  item, int  role = Qt::DisplayRole) const { return QSqlQueryModel::data(item, role); }
inline void promoted_endInsertColumns() { QSqlQueryModel::endInsertColumns(); }
inline void promoted_endInsertRows() { QSqlQueryModel::endInsertRows(); }
inline void promoted_endRemoveColumns() { QSqlQueryModel::endRemoveColumns(); }
inline void promoted_endRemoveRows() { QSqlQueryModel::endRemoveRows(); }
inline void promoted_endResetModel() { QSqlQueryModel::endResetModel(); }
inline void promoted_fetchMore(const QModelIndex&  parent = QModelIndex()) { QSqlQueryModel::fetchMore(parent); }
inline QVariant  promoted_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QSqlQueryModel::headerData(section, orientation, role); }
inline QModelIndex  promoted_indexInQuery(const QModelIndex&  item) const { return QSqlQueryModel::indexInQuery(item); }
inline bool  promoted_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlQueryModel::insertColumns(column, count, parent); }
inline void promoted_queryChange() { QSqlQueryModel::queryChange(); }
inline bool  promoted_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlQueryModel::removeColumns(column, count, parent); }
inline int  promoted_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QSqlQueryModel::rowCount(parent); }
inline bool  promoted_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QSqlQueryModel::setHeaderData(section, orientation, value, role); }
inline void promoted_setLastError(const QSqlError&  error) { QSqlQueryModel::setLastError(error); }
};

class PythonQtWrapper_QSqlQueryModel : public QObject
{ Q_OBJECT
public:
public slots:
QSqlQueryModel* new_QSqlQueryModel(QObject*  parent = 0);
void delete_QSqlQueryModel(QSqlQueryModel* obj) { delete obj; } 
   void beginInsertColumns(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginInsertRows(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginRemoveColumns(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginRemoveRows(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last);
   void beginResetModel(QSqlQueryModel* theWrappedObject);
   bool  canFetchMore(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   void clear(QSqlQueryModel* theWrappedObject);
   int  columnCount(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   QVariant  data(QSqlQueryModel* theWrappedObject, const QModelIndex&  item, int  role = Qt::DisplayRole) const;
   void endInsertColumns(QSqlQueryModel* theWrappedObject);
   void endInsertRows(QSqlQueryModel* theWrappedObject);
   void endRemoveColumns(QSqlQueryModel* theWrappedObject);
   void endRemoveRows(QSqlQueryModel* theWrappedObject);
   void endResetModel(QSqlQueryModel* theWrappedObject);
   void fetchMore(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex());
   QVariant  headerData(QSqlQueryModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
   QModelIndex  indexInQuery(QSqlQueryModel* theWrappedObject, const QModelIndex&  item) const;
   bool  insertColumns(QSqlQueryModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   QSqlError  lastError(QSqlQueryModel* theWrappedObject) const;
   QSqlQuery  query(QSqlQueryModel* theWrappedObject) const;
   void queryChange(QSqlQueryModel* theWrappedObject);
   QSqlRecord  record(QSqlQueryModel* theWrappedObject) const;
   QSqlRecord  record(QSqlQueryModel* theWrappedObject, int  row) const;
   bool  removeColumns(QSqlQueryModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   int  rowCount(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   bool  setHeaderData(QSqlQueryModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
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
};





class PythonQtShell_QSqlRelationalTableModel : public QSqlRelationalTableModel
{
public:
    PythonQtShell_QSqlRelationalTableModel(QObject*  parent = 0, QSqlDatabase  db = QSqlDatabase()):QSqlRelationalTableModel(parent, db),_wrapper(NULL) {};

   ~PythonQtShell_QSqlRelationalTableModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent = QModelIndex()) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void clear();
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual void customEvent(QEvent*  arg__1);
virtual QVariant  data(const QModelIndex&  item, int  role = Qt::DisplayRole) const;
virtual bool  deleteRowFromTable(int  row);
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
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
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  updateRowInTable(int  row, const QSqlRecord&  values);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlRelationalTableModel : public QSqlRelationalTableModel
{ public:
inline void promoted_clear() { QSqlRelationalTableModel::clear(); }
inline QVariant  promoted_data(const QModelIndex&  item, int  role = Qt::DisplayRole) const { return QSqlRelationalTableModel::data(item, role); }
inline bool  promoted_insertRowIntoTable(const QSqlRecord&  values) { return QSqlRelationalTableModel::insertRowIntoTable(values); }
inline QString  promoted_orderByClause() const { return QSqlRelationalTableModel::orderByClause(); }
inline QSqlTableModel*  promoted_relationModel(int  column) const { return QSqlRelationalTableModel::relationModel(column); }
inline bool  promoted_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlRelationalTableModel::removeColumns(column, count, parent); }
inline void promoted_revertRow(int  row) { QSqlRelationalTableModel::revertRow(row); }
inline bool  promoted_select() { return QSqlRelationalTableModel::select(); }
inline QString  promoted_selectStatement() const { return QSqlRelationalTableModel::selectStatement(); }
inline bool  promoted_setData(const QModelIndex&  item, const QVariant&  value, int  role = Qt::EditRole) { return QSqlRelationalTableModel::setData(item, value, role); }
inline void promoted_setRelation(int  column, const QSqlRelation&  relation) { QSqlRelationalTableModel::setRelation(column, relation); }
inline void promoted_setTable(const QString&  tableName) { QSqlRelationalTableModel::setTable(tableName); }
inline bool  promoted_updateRowInTable(int  row, const QSqlRecord&  values) { return QSqlRelationalTableModel::updateRowInTable(row, values); }
};

class PythonQtWrapper_QSqlRelationalTableModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(JoinMode )
enum JoinMode{
  InnerJoin = QSqlRelationalTableModel::InnerJoin,   LeftJoin = QSqlRelationalTableModel::LeftJoin};
public slots:
QSqlRelationalTableModel* new_QSqlRelationalTableModel(QObject*  parent = 0, QSqlDatabase  db = QSqlDatabase());
void delete_QSqlRelationalTableModel(QSqlRelationalTableModel* obj) { delete obj; } 
   void clear(QSqlRelationalTableModel* theWrappedObject);
   QVariant  data(QSqlRelationalTableModel* theWrappedObject, const QModelIndex&  item, int  role = Qt::DisplayRole) const;
   bool  insertRowIntoTable(QSqlRelationalTableModel* theWrappedObject, const QSqlRecord&  values);
   QString  orderByClause(QSqlRelationalTableModel* theWrappedObject) const;
   QSqlRelation  relation(QSqlRelationalTableModel* theWrappedObject, int  column) const;
   QSqlTableModel*  relationModel(QSqlRelationalTableModel* theWrappedObject, int  column) const;
   bool  removeColumns(QSqlRelationalTableModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   void revertRow(QSqlRelationalTableModel* theWrappedObject, int  row);
   bool  select(QSqlRelationalTableModel* theWrappedObject);
   QString  selectStatement(QSqlRelationalTableModel* theWrappedObject) const;
   bool  setData(QSqlRelationalTableModel* theWrappedObject, const QModelIndex&  item, const QVariant&  value, int  role = Qt::EditRole);
   void setJoinMode(QSqlRelationalTableModel* theWrappedObject, QSqlRelationalTableModel::JoinMode  joinMode);
   void setRelation(QSqlRelationalTableModel* theWrappedObject, int  column, const QSqlRelation&  relation);
   void setTable(QSqlRelationalTableModel* theWrappedObject, const QString&  tableName);
   bool  updateRowInTable(QSqlRelationalTableModel* theWrappedObject, int  row, const QSqlRecord&  values);
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
virtual void virtual_hook(int  id, void*  data);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlResult : public QSqlResult
{ public:
enum BindingSyntax{
  PositionalBinding = QSqlResult::PositionalBinding,   NamedBinding = QSqlResult::NamedBinding};
enum VirtualHookOperation{
};
inline void promoted_addBindValue(const QVariant&  val, QSql::ParamType  type) { QSqlResult::addBindValue(val, type); }
inline int  promoted_at() const { return QSqlResult::at(); }
inline void promoted_bindValue(const QString&  placeholder, const QVariant&  val, QSql::ParamType  type) { QSqlResult::bindValue(placeholder, val, type); }
inline void promoted_bindValue(int  pos, const QVariant&  val, QSql::ParamType  type) { QSqlResult::bindValue(pos, val, type); }
inline QSql::ParamType  promoted_bindValueType(const QString&  placeholder) const { return QSqlResult::bindValueType(placeholder); }
inline QSql::ParamType  promoted_bindValueType(int  pos) const { return QSqlResult::bindValueType(pos); }
inline int  promoted_bindingSyntax() const { return QSqlResult::bindingSyntax(); }
inline QVariant  promoted_boundValue(const QString&  placeholder) const { return QSqlResult::boundValue(placeholder); }
inline QVariant  promoted_boundValue(int  pos) const { return QSqlResult::boundValue(pos); }
inline int  promoted_boundValueCount() const { return QSqlResult::boundValueCount(); }
inline QString  promoted_boundValueName(int  pos) const { return QSqlResult::boundValueName(pos); }
inline QVector<QVariant >&  promoted_boundValues() const { return QSqlResult::boundValues(); }
inline void promoted_clear() { QSqlResult::clear(); }
inline QVariant  promoted_data(int  i) { return this->data(i); }
inline void promoted_detachFromResultSet() { QSqlResult::detachFromResultSet(); }
inline const QSqlDriver*  promoted_driver() const { return QSqlResult::driver(); }
inline bool  promoted_exec() { return QSqlResult::exec(); }
inline bool  promoted_execBatch(bool  arrayBind = false) { return QSqlResult::execBatch(arrayBind); }
inline QString  promoted_executedQuery() const { return QSqlResult::executedQuery(); }
inline bool  promoted_fetch(int  i) { return this->fetch(i); }
inline bool  promoted_fetchFirst() { return this->fetchFirst(); }
inline bool  promoted_fetchLast() { return this->fetchLast(); }
inline bool  promoted_fetchNext() { return QSqlResult::fetchNext(); }
inline bool  promoted_fetchPrevious() { return QSqlResult::fetchPrevious(); }
inline QVariant  promoted_handle() const { return QSqlResult::handle(); }
inline bool  promoted_hasOutValues() const { return QSqlResult::hasOutValues(); }
inline bool  promoted_isActive() const { return QSqlResult::isActive(); }
inline bool  promoted_isForwardOnly() const { return QSqlResult::isForwardOnly(); }
inline bool  promoted_isNull(int  i) { return this->isNull(i); }
inline bool  promoted_isSelect() const { return QSqlResult::isSelect(); }
inline bool  promoted_isValid() const { return QSqlResult::isValid(); }
inline QSqlError  promoted_lastError() const { return QSqlResult::lastError(); }
inline QVariant  promoted_lastInsertId() const { return QSqlResult::lastInsertId(); }
inline QString  promoted_lastQuery() const { return QSqlResult::lastQuery(); }
inline bool  promoted_nextResult() { return QSqlResult::nextResult(); }
inline int  promoted_numRowsAffected() { return this->numRowsAffected(); }
inline QSql::NumericalPrecisionPolicy  promoted_numericalPrecisionPolicy() const { return QSqlResult::numericalPrecisionPolicy(); }
inline bool  promoted_prepare(const QString&  query) { return QSqlResult::prepare(query); }
inline QSqlRecord  promoted_record() const { return QSqlResult::record(); }
inline bool  promoted_reset(const QString&  sqlquery) { return this->reset(sqlquery); }
inline void promoted_resetBindCount() { QSqlResult::resetBindCount(); }
inline bool  promoted_savePrepare(const QString&  sqlquery) { return QSqlResult::savePrepare(sqlquery); }
inline void promoted_setActive(bool  a) { QSqlResult::setActive(a); }
inline void promoted_setAt(int  at) { QSqlResult::setAt(at); }
inline void promoted_setForwardOnly(bool  forward) { QSqlResult::setForwardOnly(forward); }
inline void promoted_setLastError(const QSqlError&  e) { QSqlResult::setLastError(e); }
inline void promoted_setNumericalPrecisionPolicy(QSql::NumericalPrecisionPolicy  policy) { QSqlResult::setNumericalPrecisionPolicy(policy); }
inline void promoted_setQuery(const QString&  query) { QSqlResult::setQuery(query); }
inline void promoted_setSelect(bool  s) { QSqlResult::setSelect(s); }
inline int  promoted_size() { return this->size(); }
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
   void bindValue(QSqlResult* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type);
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
   void detachFromResultSet(QSqlResult* theWrappedObject);
   const QSqlDriver*  driver(QSqlResult* theWrappedObject) const;
   bool  exec(QSqlResult* theWrappedObject);
   bool  execBatch(QSqlResult* theWrappedObject, bool  arrayBind = false);
   QString  executedQuery(QSqlResult* theWrappedObject) const;
   bool  fetch(QSqlResult* theWrappedObject, int  i);
   bool  fetchFirst(QSqlResult* theWrappedObject);
   bool  fetchLast(QSqlResult* theWrappedObject);
   bool  fetchNext(QSqlResult* theWrappedObject);
   bool  fetchPrevious(QSqlResult* theWrappedObject);
   QVariant  handle(QSqlResult* theWrappedObject) const;
   bool  hasOutValues(QSqlResult* theWrappedObject) const;
   bool  isActive(QSqlResult* theWrappedObject) const;
   bool  isForwardOnly(QSqlResult* theWrappedObject) const;
   bool  isNull(QSqlResult* theWrappedObject, int  i);
   bool  isSelect(QSqlResult* theWrappedObject) const;
   bool  isValid(QSqlResult* theWrappedObject) const;
   QSqlError  lastError(QSqlResult* theWrappedObject) const;
   QVariant  lastInsertId(QSqlResult* theWrappedObject) const;
   QString  lastQuery(QSqlResult* theWrappedObject) const;
   bool  nextResult(QSqlResult* theWrappedObject);
   int  numRowsAffected(QSqlResult* theWrappedObject);
   QSql::NumericalPrecisionPolicy  numericalPrecisionPolicy(QSqlResult* theWrappedObject) const;
   bool  prepare(QSqlResult* theWrappedObject, const QString&  query);
   QSqlRecord  record(QSqlResult* theWrappedObject) const;
   bool  reset(QSqlResult* theWrappedObject, const QString&  sqlquery);
   void resetBindCount(QSqlResult* theWrappedObject);
   bool  savePrepare(QSqlResult* theWrappedObject, const QString&  sqlquery);
   void setActive(QSqlResult* theWrappedObject, bool  a);
   void setAt(QSqlResult* theWrappedObject, int  at);
   void setForwardOnly(QSqlResult* theWrappedObject, bool  forward);
   void setLastError(QSqlResult* theWrappedObject, const QSqlError&  e);
   void setNumericalPrecisionPolicy(QSqlResult* theWrappedObject, QSql::NumericalPrecisionPolicy  policy);
   void setQuery(QSqlResult* theWrappedObject, const QString&  query);
   void setSelect(QSqlResult* theWrappedObject, bool  s);
   int  size(QSqlResult* theWrappedObject);
};





class PythonQtShell_QSqlTableModel : public QSqlTableModel
{
public:
    PythonQtShell_QSqlTableModel(QObject*  parent = 0, QSqlDatabase  db = QSqlDatabase()):QSqlTableModel(parent, db),_wrapper(NULL) {};

   ~PythonQtShell_QSqlTableModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent = QModelIndex()) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void clear();
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual void customEvent(QEvent*  arg__1);
virtual QVariant  data(const QModelIndex&  idx, int  role = Qt::DisplayRole) const;
virtual bool  deleteRowFromTable(int  row);
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
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
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  updateRowInTable(int  row, const QSqlRecord&  values);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlTableModel : public QSqlTableModel
{ public:
inline void promoted_clear() { QSqlTableModel::clear(); }
inline QVariant  promoted_data(const QModelIndex&  idx, int  role = Qt::DisplayRole) const { return QSqlTableModel::data(idx, role); }
inline bool  promoted_deleteRowFromTable(int  row) { return QSqlTableModel::deleteRowFromTable(row); }
inline Qt::ItemFlags  promoted_flags(const QModelIndex&  index) const { return QSqlTableModel::flags(index); }
inline QVariant  promoted_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QSqlTableModel::headerData(section, orientation, role); }
inline QModelIndex  promoted_indexInQuery(const QModelIndex&  item) const { return QSqlTableModel::indexInQuery(item); }
inline bool  promoted_insertRowIntoTable(const QSqlRecord&  values) { return QSqlTableModel::insertRowIntoTable(values); }
inline bool  promoted_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlTableModel::insertRows(row, count, parent); }
inline QString  promoted_orderByClause() const { return QSqlTableModel::orderByClause(); }
inline bool  promoted_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlTableModel::removeColumns(column, count, parent); }
inline bool  promoted_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlTableModel::removeRows(row, count, parent); }
inline void promoted_revert() { QSqlTableModel::revert(); }
inline void promoted_revertRow(int  row) { QSqlTableModel::revertRow(row); }
inline int  promoted_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QSqlTableModel::rowCount(parent); }
inline bool  promoted_select() { return QSqlTableModel::select(); }
inline bool  promoted_selectRow(int  row) { return QSqlTableModel::selectRow(row); }
inline QString  promoted_selectStatement() const { return QSqlTableModel::selectStatement(); }
inline bool  promoted_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QSqlTableModel::setData(index, value, role); }
inline void promoted_setEditStrategy(QSqlTableModel::EditStrategy  strategy) { QSqlTableModel::setEditStrategy(strategy); }
inline void promoted_setFilter(const QString&  filter) { QSqlTableModel::setFilter(filter); }
inline void promoted_setPrimaryKey(const QSqlIndex&  key) { QSqlTableModel::setPrimaryKey(key); }
inline void promoted_setQuery(const QSqlQuery&  query) { QSqlTableModel::setQuery(query); }
inline void promoted_setSort(int  column, Qt::SortOrder  order) { QSqlTableModel::setSort(column, order); }
inline void promoted_setTable(const QString&  tableName) { QSqlTableModel::setTable(tableName); }
inline void promoted_sort(int  column, Qt::SortOrder  order) { QSqlTableModel::sort(column, order); }
inline bool  promoted_submit() { return QSqlTableModel::submit(); }
inline bool  promoted_updateRowInTable(int  row, const QSqlRecord&  values) { return QSqlTableModel::updateRowInTable(row, values); }
};

class PythonQtWrapper_QSqlTableModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(EditStrategy )
enum EditStrategy{
  OnFieldChange = QSqlTableModel::OnFieldChange,   OnRowChange = QSqlTableModel::OnRowChange,   OnManualSubmit = QSqlTableModel::OnManualSubmit};
public slots:
QSqlTableModel* new_QSqlTableModel(QObject*  parent = 0, QSqlDatabase  db = QSqlDatabase());
void delete_QSqlTableModel(QSqlTableModel* obj) { delete obj; } 
   void clear(QSqlTableModel* theWrappedObject);
   QVariant  data(QSqlTableModel* theWrappedObject, const QModelIndex&  idx, int  role = Qt::DisplayRole) const;
   QSqlDatabase  database(QSqlTableModel* theWrappedObject) const;
   bool  deleteRowFromTable(QSqlTableModel* theWrappedObject, int  row);
   QSqlTableModel::EditStrategy  editStrategy(QSqlTableModel* theWrappedObject) const;
   int  fieldIndex(QSqlTableModel* theWrappedObject, const QString&  fieldName) const;
   QString  filter(QSqlTableModel* theWrappedObject) const;
   Qt::ItemFlags  flags(QSqlTableModel* theWrappedObject, const QModelIndex&  index) const;
   QVariant  headerData(QSqlTableModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
   QModelIndex  indexInQuery(QSqlTableModel* theWrappedObject, const QModelIndex&  item) const;
   bool  insertRecord(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  record);
   bool  insertRowIntoTable(QSqlTableModel* theWrappedObject, const QSqlRecord&  values);
   bool  insertRows(QSqlTableModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   bool  isDirty(QSqlTableModel* theWrappedObject) const;
   bool  isDirty(QSqlTableModel* theWrappedObject, const QModelIndex&  index) const;
   QString  orderByClause(QSqlTableModel* theWrappedObject) const;
   QSqlIndex  primaryKey(QSqlTableModel* theWrappedObject) const;
   QSqlRecord  record(QSqlTableModel* theWrappedObject) const;
   QSqlRecord  record(QSqlTableModel* theWrappedObject, int  row) const;
   bool  removeColumns(QSqlTableModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  removeRows(QSqlTableModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   void revert(QSqlTableModel* theWrappedObject);
   void revertRow(QSqlTableModel* theWrappedObject, int  row);
   int  rowCount(QSqlTableModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   bool  select(QSqlTableModel* theWrappedObject);
   bool  selectRow(QSqlTableModel* theWrappedObject, int  row);
   QString  selectStatement(QSqlTableModel* theWrappedObject) const;
   bool  setData(QSqlTableModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
   void setEditStrategy(QSqlTableModel* theWrappedObject, QSqlTableModel::EditStrategy  strategy);
   void setFilter(QSqlTableModel* theWrappedObject, const QString&  filter);
   void setPrimaryKey(QSqlTableModel* theWrappedObject, const QSqlIndex&  key);
   void setQuery(QSqlTableModel* theWrappedObject, const QSqlQuery&  query);
   bool  setRecord(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  record);
   void setSort(QSqlTableModel* theWrappedObject, int  column, Qt::SortOrder  order);
   void setTable(QSqlTableModel* theWrappedObject, const QString&  tableName);
   void sort(QSqlTableModel* theWrappedObject, int  column, Qt::SortOrder  order);
   bool  submit(QSqlTableModel* theWrappedObject);
   QString  tableName(QSqlTableModel* theWrappedObject) const;
   bool  updateRowInTable(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  values);
};


