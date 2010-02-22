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
Q_ENUMS(NumericalPrecisionPolicy Location ParamTypeFlag TableType )
Q_FLAGS(ParamType )
enum NumericalPrecisionPolicy{
  LowPrecisionInt32 = QSql::LowPrecisionInt32,   LowPrecisionInt64 = QSql::LowPrecisionInt64,   LowPrecisionDouble = QSql::LowPrecisionDouble,   HighPrecision = QSql::HighPrecision};
enum Location{
  BeforeFirstRow = QSql::BeforeFirstRow,   AfterLastRow = QSql::AfterLastRow};
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


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSqlDatabase : public QObject
{ Q_OBJECT
public:
public slots:
QSqlDatabase* new_QSqlDatabase();
QSqlDatabase* new_QSqlDatabase(const QSqlDatabase&  other);
void delete_QSqlDatabase(QSqlDatabase* obj) { delete obj; } 
   bool  isOpenError(QSqlDatabase* theWrappedObject) const;
   QString  connectionName(QSqlDatabase* theWrappedObject) const;
   void setHostName(QSqlDatabase* theWrappedObject, const QString&  host);
   bool  static_QSqlDatabase_contains(const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection));
   void static_QSqlDatabase_removeDatabase(const QString&  connectionName);
   bool  static_QSqlDatabase_isDriverAvailable(const QString&  name);
   QString  databaseName(QSqlDatabase* theWrappedObject) const;
   bool  rollback(QSqlDatabase* theWrappedObject);
   int  port(QSqlDatabase* theWrappedObject) const;
   QStringList  tables(QSqlDatabase* theWrappedObject, QSql::TableType  type = QSql::Tables) const;
   void setPassword(QSqlDatabase* theWrappedObject, const QString&  password);
   QString  connectOptions(QSqlDatabase* theWrappedObject) const;
   bool  isOpen(QSqlDatabase* theWrappedObject) const;
   QSqlError  lastError(QSqlDatabase* theWrappedObject) const;
   bool  transaction(QSqlDatabase* theWrappedObject);
   void setDatabaseName(QSqlDatabase* theWrappedObject, const QString&  name);
   void close(QSqlDatabase* theWrappedObject);
   QSqlRecord  record(QSqlDatabase* theWrappedObject, const QString&  tablename) const;
   QStringList  static_QSqlDatabase_connectionNames();
   void setPort(QSqlDatabase* theWrappedObject, int  p);
   void static_QSqlDatabase_registerSqlDriver(const QString&  name, QSqlDriverCreatorBase*  creator);
   QStringList  static_QSqlDatabase_drivers();
   QSqlDatabase  static_QSqlDatabase_cloneDatabase(const QSqlDatabase&  other, const QString&  connectionName);
   QString  password(QSqlDatabase* theWrappedObject) const;
   QSqlDatabase  static_QSqlDatabase_addDatabase(QSqlDriver*  driver, const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection));
   QSqlIndex  primaryIndex(QSqlDatabase* theWrappedObject, const QString&  tablename) const;
   QSqlDatabase  static_QSqlDatabase_addDatabase(const QString&  type, const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection));
   void setConnectOptions(QSqlDatabase* theWrappedObject, const QString&  options = QString());
   bool  open(QSqlDatabase* theWrappedObject, const QString&  user, const QString&  password);
   bool  open(QSqlDatabase* theWrappedObject);
   QSqlDriver*  driver(QSqlDatabase* theWrappedObject) const;
   QSqlQuery  exec(QSqlDatabase* theWrappedObject, const QString&  query = QString()) const;
   QString  driverName(QSqlDatabase* theWrappedObject) const;
   void setUserName(QSqlDatabase* theWrappedObject, const QString&  name);
   QString  userName(QSqlDatabase* theWrappedObject) const;
   QString  hostName(QSqlDatabase* theWrappedObject) const;
   bool  isValid(QSqlDatabase* theWrappedObject) const;
   QSqlDatabase  static_QSqlDatabase_database(const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection), bool  open = true);
   bool  commit(QSqlDatabase* theWrappedObject);
    QString toString(QSqlDatabase*);
};





class PythonQtShell_QSqlDriver : public QSqlDriver
{
public:
    PythonQtShell_QSqlDriver(QObject*  parent = 0):QSqlDriver(parent),_wrapper(NULL) {};

virtual void setOpen(bool  o);
virtual bool  open(const QString&  db, const QString&  user = QString(), const QString&  password = QString(), const QString&  host = QString(), int  port = -1, const QString&  connOpts = QString());
virtual QString  escapeIdentifier(const QString&  identifier, QSqlDriver::IdentifierType  type) const;
virtual void close();
virtual bool  commitTransaction();
virtual QString  sqlStatement(QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const;
virtual bool  rollbackTransaction();
virtual bool  hasFeature(QSqlDriver::DriverFeature  f) const;
virtual bool  beginTransaction();
virtual QString  formatValue(const QSqlField&  field, bool  trimStrings = false) const;
virtual QSqlIndex  primaryIndex(const QString&  tableName) const;
virtual void setOpenError(bool  e);
virtual bool  isOpen() const;
virtual void setLastError(const QSqlError&  e);
virtual QSqlResult*  createResult() const;
virtual QSqlRecord  record(const QString&  tableName) const;
virtual QStringList  tables(QSql::TableType  tableType) const;
virtual QVariant  handle() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlDriver : public QSqlDriver
{ public:
inline void promoted_setOpen(bool  o) { QSqlDriver::setOpen(o); }
inline QString  promoted_escapeIdentifier(const QString&  identifier, QSqlDriver::IdentifierType  type) const { return QSqlDriver::escapeIdentifier(identifier, type); }
inline bool  promoted_commitTransaction() { return QSqlDriver::commitTransaction(); }
inline QString  promoted_sqlStatement(QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const { return QSqlDriver::sqlStatement(type, tableName, rec, preparedStatement); }
inline bool  promoted_rollbackTransaction() { return QSqlDriver::rollbackTransaction(); }
inline bool  promoted_beginTransaction() { return QSqlDriver::beginTransaction(); }
inline QString  promoted_formatValue(const QSqlField&  field, bool  trimStrings = false) const { return QSqlDriver::formatValue(field, trimStrings); }
inline QSqlIndex  promoted_primaryIndex(const QString&  tableName) const { return QSqlDriver::primaryIndex(tableName); }
inline void promoted_setOpenError(bool  e) { QSqlDriver::setOpenError(e); }
inline bool  promoted_isOpen() const { return QSqlDriver::isOpen(); }
inline void promoted_setLastError(const QSqlError&  e) { QSqlDriver::setLastError(e); }
inline QSqlRecord  promoted_record(const QString&  tableName) const { return QSqlDriver::record(tableName); }
inline QStringList  promoted_tables(QSql::TableType  tableType) const { return QSqlDriver::tables(tableType); }
inline QVariant  promoted_handle() const { return QSqlDriver::handle(); }
};

class PythonQtWrapper_QSqlDriver : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StatementType IdentifierType DriverFeature )
enum StatementType{
  WhereStatement = QSqlDriver::WhereStatement,   SelectStatement = QSqlDriver::SelectStatement,   UpdateStatement = QSqlDriver::UpdateStatement,   InsertStatement = QSqlDriver::InsertStatement,   DeleteStatement = QSqlDriver::DeleteStatement};
enum IdentifierType{
  FieldName = QSqlDriver::FieldName,   TableName = QSqlDriver::TableName};
enum DriverFeature{
  Transactions = QSqlDriver::Transactions,   QuerySize = QSqlDriver::QuerySize,   BLOB = QSqlDriver::BLOB,   Unicode = QSqlDriver::Unicode,   PreparedQueries = QSqlDriver::PreparedQueries,   NamedPlaceholders = QSqlDriver::NamedPlaceholders,   PositionalPlaceholders = QSqlDriver::PositionalPlaceholders,   LastInsertId = QSqlDriver::LastInsertId,   BatchOperations = QSqlDriver::BatchOperations,   SimpleLocking = QSqlDriver::SimpleLocking,   LowPrecisionNumbers = QSqlDriver::LowPrecisionNumbers,   EventNotifications = QSqlDriver::EventNotifications,   FinishQuery = QSqlDriver::FinishQuery,   MultipleResultSets = QSqlDriver::MultipleResultSets};
public slots:
QSqlDriver* new_QSqlDriver(QObject*  parent = 0);
void delete_QSqlDriver(QSqlDriver* obj) { delete obj; } 
   bool  subscribeToNotification(QSqlDriver* theWrappedObject, const QString&  name);
   void setOpen(QSqlDriver* theWrappedObject, bool  o);
   QString  escapeIdentifier(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const;
   bool  isOpenError(QSqlDriver* theWrappedObject) const;
   QStringList  subscribedToNotifications(QSqlDriver* theWrappedObject) const;
   bool  commitTransaction(QSqlDriver* theWrappedObject);
   QSqlError  lastError(QSqlDriver* theWrappedObject) const;
   QString  sqlStatement(QSqlDriver* theWrappedObject, QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const;
   bool  rollbackTransaction(QSqlDriver* theWrappedObject);
   bool  unsubscribeFromNotification(QSqlDriver* theWrappedObject, const QString&  name);
   bool  beginTransaction(QSqlDriver* theWrappedObject);
   QString  formatValue(QSqlDriver* theWrappedObject, const QSqlField&  field, bool  trimStrings = false) const;
   QSqlIndex  primaryIndex(QSqlDriver* theWrappedObject, const QString&  tableName) const;
   void setOpenError(QSqlDriver* theWrappedObject, bool  e);
   bool  isOpen(QSqlDriver* theWrappedObject) const;
   void setLastError(QSqlDriver* theWrappedObject, const QSqlError&  e);
   QSqlRecord  record(QSqlDriver* theWrappedObject, const QString&  tableName) const;
   QStringList  tables(QSqlDriver* theWrappedObject, QSql::TableType  tableType) const;
   QVariant  handle(QSqlDriver* theWrappedObject) const;
};





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
   QString  text(QSqlError* theWrappedObject) const;
   void setNumber(QSqlError* theWrappedObject, int  number);
   QString  databaseText(QSqlError* theWrappedObject) const;
   QSqlError::ErrorType  type(QSqlError* theWrappedObject) const;
   int  number(QSqlError* theWrappedObject) const;
   void setType(QSqlError* theWrappedObject, QSqlError::ErrorType  type);
   void setDriverText(QSqlError* theWrappedObject, const QString&  driverText);
   bool  isValid(QSqlError* theWrappedObject) const;
   void setDatabaseText(QSqlError* theWrappedObject, const QString&  databaseText);
   QString  driverText(QSqlError* theWrappedObject) const;
    QString toString(QSqlError*);
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
   bool  isGenerated(QSqlField* theWrappedObject) const;
   bool  isReadOnly(QSqlField* theWrappedObject) const;
   bool  isValid(QSqlField* theWrappedObject) const;
   void setSqlType(QSqlField* theWrappedObject, int  type);
   int  precision(QSqlField* theWrappedObject) const;
   QSqlField::RequiredStatus  requiredStatus(QSqlField* theWrappedObject) const;
   void setAutoValue(QSqlField* theWrappedObject, bool  autoVal);
   void setReadOnly(QSqlField* theWrappedObject, bool  readOnly);
   void setRequiredStatus(QSqlField* theWrappedObject, QSqlField::RequiredStatus  status);
   void setName(QSqlField* theWrappedObject, const QString&  name);
   void setGenerated(QSqlField* theWrappedObject, bool  gen);
   QString  name(QSqlField* theWrappedObject) const;
   bool  operator_equal(QSqlField* theWrappedObject, const QSqlField&  other) const;
   void setType(QSqlField* theWrappedObject, QVariant::Type  type);
   QVariant  defaultValue(QSqlField* theWrappedObject) const;
   QVariant  value(QSqlField* theWrappedObject) const;
   void setRequired(QSqlField* theWrappedObject, bool  required);
   bool  isNull(QSqlField* theWrappedObject) const;
   bool  isAutoValue(QSqlField* theWrappedObject) const;
   int  length(QSqlField* theWrappedObject) const;
   void setLength(QSqlField* theWrappedObject, int  fieldLength);
   void clear(QSqlField* theWrappedObject);
   void setValue(QSqlField* theWrappedObject, const QVariant&  value);
   int  typeID(QSqlField* theWrappedObject) const;
   QVariant::Type  type(QSqlField* theWrappedObject) const;
   void setDefaultValue(QSqlField* theWrappedObject, const QVariant&  value);
   void setPrecision(QSqlField* theWrappedObject, int  precision);
    QString toString(QSqlField*);
};





class PythonQtWrapper_QSqlIndex : public QObject
{ Q_OBJECT
public:
public slots:
QSqlIndex* new_QSqlIndex(const QSqlIndex&  other);
QSqlIndex* new_QSqlIndex(const QString&  cursorName = QString(), const QString&  name = QString());
void delete_QSqlIndex(QSqlIndex* obj) { delete obj; } 
   bool  isDescending(QSqlIndex* theWrappedObject, int  i) const;
   QString  cursorName(QSqlIndex* theWrappedObject) const;
   void setDescending(QSqlIndex* theWrappedObject, int  i, bool  desc);
   void setName(QSqlIndex* theWrappedObject, const QString&  name);
   void append(QSqlIndex* theWrappedObject, const QSqlField&  field);
   void setCursorName(QSqlIndex* theWrappedObject, const QString&  cursorName);
   void append(QSqlIndex* theWrappedObject, const QSqlField&  field, bool  desc);
   QString  name(QSqlIndex* theWrappedObject) const;
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
   void clear(QSqlQuery* theWrappedObject);
   bool  next(QSqlQuery* theWrappedObject);
   bool  seek(QSqlQuery* theWrappedObject, int  i, bool  relative = false);
   void addBindValue(QSqlQuery* theWrappedObject, const QVariant&  val, QSql::ParamType  type = QSql::In);
   bool  first(QSqlQuery* theWrappedObject);
   QString  lastQuery(QSqlQuery* theWrappedObject) const;
   QString  executedQuery(QSqlQuery* theWrappedObject) const;
   bool  prepare(QSqlQuery* theWrappedObject, const QString&  query);
   QSqlError  lastError(QSqlQuery* theWrappedObject) const;
   const QSqlResult*  result(QSqlQuery* theWrappedObject) const;
   void finish(QSqlQuery* theWrappedObject);
   int  size(QSqlQuery* theWrappedObject) const;
   void bindValue(QSqlQuery* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type = QSql::In);
   bool  last(QSqlQuery* theWrappedObject);
   bool  previous(QSqlQuery* theWrappedObject);
   QVariant  lastInsertId(QSqlQuery* theWrappedObject) const;
   bool  isForwardOnly(QSqlQuery* theWrappedObject) const;
   void bindValue(QSqlQuery* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type = QSql::In);
   QSqlRecord  record(QSqlQuery* theWrappedObject) const;
   QMap<QString , QVariant >  boundValues(QSqlQuery* theWrappedObject) const;
   int  numRowsAffected(QSqlQuery* theWrappedObject) const;
   QVariant  boundValue(QSqlQuery* theWrappedObject, int  pos) const;
   bool  isActive(QSqlQuery* theWrappedObject) const;
   QVariant  boundValue(QSqlQuery* theWrappedObject, const QString&  placeholder) const;
   bool  execBatch(QSqlQuery* theWrappedObject, QSqlQuery::BatchExecutionMode  mode = QSqlQuery::ValuesAsRows);
   const QSqlDriver*  driver(QSqlQuery* theWrappedObject) const;
   QSql::NumericalPrecisionPolicy  numericalPrecisionPolicy(QSqlQuery* theWrappedObject) const;
   bool  exec(QSqlQuery* theWrappedObject, const QString&  query);
   bool  exec(QSqlQuery* theWrappedObject);
   QVariant  value(QSqlQuery* theWrappedObject, int  i) const;
   bool  isNull(QSqlQuery* theWrappedObject, int  field) const;
   bool  isSelect(QSqlQuery* theWrappedObject) const;
   void setForwardOnly(QSqlQuery* theWrappedObject, bool  forward);
   void setNumericalPrecisionPolicy(QSqlQuery* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy);
   int  at(QSqlQuery* theWrappedObject) const;
   bool  isValid(QSqlQuery* theWrappedObject) const;
   bool  nextResult(QSqlQuery* theWrappedObject);
};





class PythonQtShell_QSqlQueryModel : public QSqlQueryModel
{
public:
    PythonQtShell_QSqlQueryModel(QObject*  parent = 0):QSqlQueryModel(parent),_wrapper(NULL) {};

virtual void queryChange();
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual void fetchMore(const QModelIndex&  parent = QModelIndex());
virtual QVariant  data(const QModelIndex&  item, int  role = Qt::DisplayRole) const;
virtual bool  canFetchMore(const QModelIndex&  parent = QModelIndex()) const;
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
virtual void clear();
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent) const;
virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QSize  span(const QModelIndex&  index) const;
virtual void sort(int  column, Qt::SortOrder  order);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual QStringList  mimeTypes() const;
virtual bool  submit();
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent);
virtual Qt::DropActions  supportedDropActions() const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role);
virtual void revert();
virtual void customEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlQueryModel : public QSqlQueryModel
{ public:
inline void promoted_queryChange() { QSqlQueryModel::queryChange(); }
inline bool  promoted_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlQueryModel::insertColumns(column, count, parent); }
inline void promoted_fetchMore(const QModelIndex&  parent = QModelIndex()) { QSqlQueryModel::fetchMore(parent); }
inline QVariant  promoted_data(const QModelIndex&  item, int  role = Qt::DisplayRole) const { return QSqlQueryModel::data(item, role); }
inline bool  promoted_canFetchMore(const QModelIndex&  parent = QModelIndex()) const { return QSqlQueryModel::canFetchMore(parent); }
inline int  promoted_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QSqlQueryModel::columnCount(parent); }
inline bool  promoted_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlQueryModel::removeColumns(column, count, parent); }
inline bool  promoted_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QSqlQueryModel::setHeaderData(section, orientation, value, role); }
inline int  promoted_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QSqlQueryModel::rowCount(parent); }
inline QVariant  promoted_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QSqlQueryModel::headerData(section, orientation, role); }
inline void promoted_clear() { QSqlQueryModel::clear(); }
};

class PythonQtWrapper_QSqlQueryModel : public QObject
{ Q_OBJECT
public:
public slots:
QSqlQueryModel* new_QSqlQueryModel(QObject*  parent = 0);
void delete_QSqlQueryModel(QSqlQueryModel* obj) { delete obj; } 
   void queryChange(QSqlQueryModel* theWrappedObject);
   bool  insertColumns(QSqlQueryModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   QSqlQuery  query(QSqlQueryModel* theWrappedObject) const;
   void fetchMore(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex());
   QVariant  data(QSqlQueryModel* theWrappedObject, const QModelIndex&  item, int  role = Qt::DisplayRole) const;
   bool  canFetchMore(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   QSqlError  lastError(QSqlQueryModel* theWrappedObject) const;
   int  columnCount(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   bool  removeColumns(QSqlQueryModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  setHeaderData(QSqlQueryModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
   int  rowCount(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   QVariant  headerData(QSqlQueryModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
   void setQuery(QSqlQueryModel* theWrappedObject, const QString&  query, const QSqlDatabase&  db = QSqlDatabase());
   void setQuery(QSqlQueryModel* theWrappedObject, const QSqlQuery&  query);
   QSqlRecord  record(QSqlQueryModel* theWrappedObject, int  row) const;
   QSqlRecord  record(QSqlQueryModel* theWrappedObject) const;
   void clear(QSqlQueryModel* theWrappedObject);
};





class PythonQtWrapper_QSqlRecord : public QObject
{ Q_OBJECT
public:
public slots:
QSqlRecord* new_QSqlRecord();
QSqlRecord* new_QSqlRecord(const QSqlRecord&  other);
void delete_QSqlRecord(QSqlRecord* obj) { delete obj; } 
   QVariant  value(QSqlRecord* theWrappedObject, int  i) const;
   QVariant  value(QSqlRecord* theWrappedObject, const QString&  name) const;
   void setNull(QSqlRecord* theWrappedObject, int  i);
   void setNull(QSqlRecord* theWrappedObject, const QString&  name);
   int  count(QSqlRecord* theWrappedObject) const;
   int  indexOf(QSqlRecord* theWrappedObject, const QString&  name) const;
   void clearValues(QSqlRecord* theWrappedObject);
   void setGenerated(QSqlRecord* theWrappedObject, const QString&  name, bool  generated);
   void setGenerated(QSqlRecord* theWrappedObject, int  i, bool  generated);
   bool  isGenerated(QSqlRecord* theWrappedObject, int  i) const;
   bool  isGenerated(QSqlRecord* theWrappedObject, const QString&  name) const;
   void insert(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field);
   bool  operator_equal(QSqlRecord* theWrappedObject, const QSqlRecord&  other) const;
   void append(QSqlRecord* theWrappedObject, const QSqlField&  field);
   bool  isNull(QSqlRecord* theWrappedObject, const QString&  name) const;
   bool  isNull(QSqlRecord* theWrappedObject, int  i) const;
   bool  contains(QSqlRecord* theWrappedObject, const QString&  name) const;
   void remove(QSqlRecord* theWrappedObject, int  pos);
   void replace(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field);
   QSqlField  field(QSqlRecord* theWrappedObject, int  i) const;
   QSqlField  field(QSqlRecord* theWrappedObject, const QString&  name) const;
   void setValue(QSqlRecord* theWrappedObject, const QString&  name, const QVariant&  val);
   bool  isEmpty(QSqlRecord* theWrappedObject) const;
   void clear(QSqlRecord* theWrappedObject);
   void setValue(QSqlRecord* theWrappedObject, int  i, const QVariant&  val);
   QString  fieldName(QSqlRecord* theWrappedObject, int  i) const;
    QString toString(QSqlRecord*);
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
   bool  isValid(QSqlRelation* theWrappedObject) const;
   QString  tableName(QSqlRelation* theWrappedObject) const;
   QString  indexColumn(QSqlRelation* theWrappedObject) const;
   QString  displayColumn(QSqlRelation* theWrappedObject) const;
};





class PythonQtShell_QSqlRelationalTableModel : public QSqlRelationalTableModel
{
public:
    PythonQtShell_QSqlRelationalTableModel(QObject*  parent = 0, QSqlDatabase  db = QSqlDatabase()):QSqlRelationalTableModel(parent, db),_wrapper(NULL) {};

virtual QVariant  data(const QModelIndex&  item, int  role = Qt::DisplayRole) const;
virtual bool  setData(const QModelIndex&  item, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  insertRowIntoTable(const QSqlRecord&  values);
virtual void setTable(const QString&  tableName);
virtual bool  updateRowInTable(int  row, const QSqlRecord&  values);
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual QSqlTableModel*  relationModel(int  column) const;
virtual QString  selectStatement() const;
virtual QString  orderByClause() const;
virtual void clear();
virtual void setRelation(int  column, const QSqlRelation&  relation);
virtual bool  select();
virtual void revertRow(int  row);
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role) const;
virtual bool  submit();
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent);
virtual void sort(int  column, Qt::SortOrder  order);
virtual void setFilter(const QString&  filter);
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent);
virtual bool  deleteRowFromTable(int  row);
virtual void revert();
virtual int  rowCount(const QModelIndex&  parent) const;
virtual void setSort(int  column, Qt::SortOrder  order);
virtual void setEditStrategy(QSqlTableModel::EditStrategy  strategy);
virtual void fetchMore(const QModelIndex&  parent);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role);
virtual void queryChange();
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual int  columnCount(const QModelIndex&  parent) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent);
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual QStringList  mimeTypes() const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual Qt::DropActions  supportedDropActions() const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const;
virtual void customEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlRelationalTableModel : public QSqlRelationalTableModel
{ public:
inline QVariant  promoted_data(const QModelIndex&  item, int  role = Qt::DisplayRole) const { return QSqlRelationalTableModel::data(item, role); }
inline bool  promoted_setData(const QModelIndex&  item, const QVariant&  value, int  role = Qt::EditRole) { return QSqlRelationalTableModel::setData(item, value, role); }
inline bool  promoted_insertRowIntoTable(const QSqlRecord&  values) { return QSqlRelationalTableModel::insertRowIntoTable(values); }
inline void promoted_setTable(const QString&  tableName) { QSqlRelationalTableModel::setTable(tableName); }
inline bool  promoted_updateRowInTable(int  row, const QSqlRecord&  values) { return QSqlRelationalTableModel::updateRowInTable(row, values); }
inline bool  promoted_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlRelationalTableModel::removeColumns(column, count, parent); }
inline QSqlTableModel*  promoted_relationModel(int  column) const { return QSqlRelationalTableModel::relationModel(column); }
inline QString  promoted_selectStatement() const { return QSqlRelationalTableModel::selectStatement(); }
inline QString  promoted_orderByClause() const { return QSqlRelationalTableModel::orderByClause(); }
inline void promoted_clear() { QSqlRelationalTableModel::clear(); }
inline void promoted_setRelation(int  column, const QSqlRelation&  relation) { QSqlRelationalTableModel::setRelation(column, relation); }
inline bool  promoted_select() { return QSqlRelationalTableModel::select(); }
inline void promoted_revertRow(int  row) { QSqlRelationalTableModel::revertRow(row); }
};

class PythonQtWrapper_QSqlRelationalTableModel : public QObject
{ Q_OBJECT
public:
public slots:
QSqlRelationalTableModel* new_QSqlRelationalTableModel(QObject*  parent = 0, QSqlDatabase  db = QSqlDatabase());
void delete_QSqlRelationalTableModel(QSqlRelationalTableModel* obj) { delete obj; } 
   QVariant  data(QSqlRelationalTableModel* theWrappedObject, const QModelIndex&  item, int  role = Qt::DisplayRole) const;
   bool  setData(QSqlRelationalTableModel* theWrappedObject, const QModelIndex&  item, const QVariant&  value, int  role = Qt::EditRole);
   QSqlRelation  relation(QSqlRelationalTableModel* theWrappedObject, int  column) const;
   bool  insertRowIntoTable(QSqlRelationalTableModel* theWrappedObject, const QSqlRecord&  values);
   void setTable(QSqlRelationalTableModel* theWrappedObject, const QString&  tableName);
   bool  updateRowInTable(QSqlRelationalTableModel* theWrappedObject, int  row, const QSqlRecord&  values);
   bool  removeColumns(QSqlRelationalTableModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   QSqlTableModel*  relationModel(QSqlRelationalTableModel* theWrappedObject, int  column) const;
   QString  selectStatement(QSqlRelationalTableModel* theWrappedObject) const;
   QString  orderByClause(QSqlRelationalTableModel* theWrappedObject) const;
   void clear(QSqlRelationalTableModel* theWrappedObject);
   void setRelation(QSqlRelationalTableModel* theWrappedObject, int  column, const QSqlRelation&  relation);
   bool  select(QSqlRelationalTableModel* theWrappedObject);
};





class PythonQtShell_QSqlResult : public QSqlResult
{
public:
    PythonQtShell_QSqlResult(const QSqlDriver*  db):QSqlResult(db),_wrapper(NULL) {};

virtual QVariant  handle() const;
virtual void setSelect(bool  s);
virtual bool  savePrepare(const QString&  sqlquery);
virtual QVariant  data(int  i);
virtual bool  fetchFirst();
virtual bool  fetchPrevious();
virtual void virtual_hook(int  id, void*  data);
virtual bool  fetchNext();
virtual bool  fetch(int  i);
virtual void setAt(int  at);
virtual bool  prepare(const QString&  query);
virtual int  size();
virtual QVariant  lastInsertId() const;
virtual void bindValue(const QString&  placeholder, const QVariant&  val, QSql::ParamType  type);
virtual void bindValue(int  pos, const QVariant&  val, QSql::ParamType  type);
virtual QSqlRecord  record() const;
virtual int  numRowsAffected();
virtual void setQuery(const QString&  query);
virtual bool  exec();
virtual void setForwardOnly(bool  forward);
virtual bool  reset(const QString&  sqlquery);
virtual bool  isNull(int  i);
virtual void setLastError(const QSqlError&  e);
virtual void setActive(bool  a);
virtual bool  fetchLast();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlResult : public QSqlResult
{ public:
inline QVariant  promoted_handle() const { return QSqlResult::handle(); }
inline void promoted_setSelect(bool  s) { QSqlResult::setSelect(s); }
inline bool  promoted_savePrepare(const QString&  sqlquery) { return QSqlResult::savePrepare(sqlquery); }
inline bool  promoted_fetchPrevious() { return QSqlResult::fetchPrevious(); }
inline bool  promoted_fetchNext() { return QSqlResult::fetchNext(); }
inline void promoted_setAt(int  at) { QSqlResult::setAt(at); }
inline bool  promoted_prepare(const QString&  query) { return QSqlResult::prepare(query); }
inline QVariant  promoted_lastInsertId() const { return QSqlResult::lastInsertId(); }
inline void promoted_bindValue(const QString&  placeholder, const QVariant&  val, QSql::ParamType  type) { QSqlResult::bindValue(placeholder, val, type); }
inline void promoted_bindValue(int  pos, const QVariant&  val, QSql::ParamType  type) { QSqlResult::bindValue(pos, val, type); }
inline QSqlRecord  promoted_record() const { return QSqlResult::record(); }
inline void promoted_setQuery(const QString&  query) { QSqlResult::setQuery(query); }
inline bool  promoted_exec() { return QSqlResult::exec(); }
inline void promoted_setForwardOnly(bool  forward) { QSqlResult::setForwardOnly(forward); }
inline void promoted_setLastError(const QSqlError&  e) { QSqlResult::setLastError(e); }
inline void promoted_setActive(bool  a) { QSqlResult::setActive(a); }
};

class PythonQtWrapper_QSqlResult : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QSqlResult(QSqlResult* obj) { delete obj; } 
   QVariant  handle(QSqlResult* theWrappedObject) const;
   void setSelect(QSqlResult* theWrappedObject, bool  s);
   bool  savePrepare(QSqlResult* theWrappedObject, const QString&  sqlquery);
   bool  fetchPrevious(QSqlResult* theWrappedObject);
   bool  fetchNext(QSqlResult* theWrappedObject);
   void setAt(QSqlResult* theWrappedObject, int  at);
   bool  prepare(QSqlResult* theWrappedObject, const QString&  query);
   QVariant  lastInsertId(QSqlResult* theWrappedObject) const;
   void bindValue(QSqlResult* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type);
   void bindValue(QSqlResult* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type);
   QSqlRecord  record(QSqlResult* theWrappedObject) const;
   void setQuery(QSqlResult* theWrappedObject, const QString&  query);
   bool  exec(QSqlResult* theWrappedObject);
   void setForwardOnly(QSqlResult* theWrappedObject, bool  forward);
   void setLastError(QSqlResult* theWrappedObject, const QSqlError&  e);
   void setActive(QSqlResult* theWrappedObject, bool  a);
};





class PythonQtShell_QSqlTableModel : public QSqlTableModel
{
public:
    PythonQtShell_QSqlTableModel(QObject*  parent = 0, QSqlDatabase  db = QSqlDatabase()):QSqlTableModel(parent, db),_wrapper(NULL) {};

virtual void queryChange();
virtual void revert();
virtual void clear();
virtual QString  orderByClause() const;
virtual void setEditStrategy(QSqlTableModel::EditStrategy  strategy);
virtual QVariant  data(const QModelIndex&  idx, int  role = Qt::DisplayRole) const;
virtual void sort(int  column, Qt::SortOrder  order);
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual void revertRow(int  row);
virtual void setTable(const QString&  tableName);
virtual bool  insertRowIntoTable(const QSqlRecord&  values);
virtual bool  select();
virtual bool  deleteRowFromTable(int  row);
virtual QString  selectStatement() const;
virtual bool  submit();
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual void setSort(int  column, Qt::SortOrder  order);
virtual bool  updateRowInTable(int  row, const QSqlRecord&  values);
virtual void setFilter(const QString&  filter);
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual void fetchMore(const QModelIndex&  parent);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role);
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual int  columnCount(const QModelIndex&  parent) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent);
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual QStringList  mimeTypes() const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual Qt::DropActions  supportedDropActions() const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const;
virtual void customEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlTableModel : public QSqlTableModel
{ public:
inline void promoted_revert() { QSqlTableModel::revert(); }
inline void promoted_clear() { QSqlTableModel::clear(); }
inline QString  promoted_orderByClause() const { return QSqlTableModel::orderByClause(); }
inline void promoted_setEditStrategy(QSqlTableModel::EditStrategy  strategy) { QSqlTableModel::setEditStrategy(strategy); }
inline QVariant  promoted_data(const QModelIndex&  idx, int  role = Qt::DisplayRole) const { return QSqlTableModel::data(idx, role); }
inline void promoted_sort(int  column, Qt::SortOrder  order) { QSqlTableModel::sort(column, order); }
inline int  promoted_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QSqlTableModel::rowCount(parent); }
inline void promoted_revertRow(int  row) { QSqlTableModel::revertRow(row); }
inline void promoted_setTable(const QString&  tableName) { QSqlTableModel::setTable(tableName); }
inline bool  promoted_insertRowIntoTable(const QSqlRecord&  values) { return QSqlTableModel::insertRowIntoTable(values); }
inline bool  promoted_select() { return QSqlTableModel::select(); }
inline bool  promoted_deleteRowFromTable(int  row) { return QSqlTableModel::deleteRowFromTable(row); }
inline QString  promoted_selectStatement() const { return QSqlTableModel::selectStatement(); }
inline bool  promoted_submit() { return QSqlTableModel::submit(); }
inline bool  promoted_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlTableModel::removeColumns(column, count, parent); }
inline bool  promoted_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QSqlTableModel::setData(index, value, role); }
inline Qt::ItemFlags  promoted_flags(const QModelIndex&  index) const { return QSqlTableModel::flags(index); }
inline void promoted_setSort(int  column, Qt::SortOrder  order) { QSqlTableModel::setSort(column, order); }
inline bool  promoted_updateRowInTable(int  row, const QSqlRecord&  values) { return QSqlTableModel::updateRowInTable(row, values); }
inline void promoted_setFilter(const QString&  filter) { QSqlTableModel::setFilter(filter); }
inline bool  promoted_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlTableModel::removeRows(row, count, parent); }
inline QVariant  promoted_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QSqlTableModel::headerData(section, orientation, role); }
inline bool  promoted_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QSqlTableModel::insertRows(row, count, parent); }
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
   bool  setRecord(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  record);
   void clear(QSqlTableModel* theWrappedObject);
   QString  orderByClause(QSqlTableModel* theWrappedObject) const;
   bool  insertRecord(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  record);
   QString  tableName(QSqlTableModel* theWrappedObject) const;
   bool  isDirty(QSqlTableModel* theWrappedObject, const QModelIndex&  index) const;
   void setEditStrategy(QSqlTableModel* theWrappedObject, QSqlTableModel::EditStrategy  strategy);
   int  fieldIndex(QSqlTableModel* theWrappedObject, const QString&  fieldName) const;
   QVariant  data(QSqlTableModel* theWrappedObject, const QModelIndex&  idx, int  role = Qt::DisplayRole) const;
   QSqlDatabase  database(QSqlTableModel* theWrappedObject) const;
   void sort(QSqlTableModel* theWrappedObject, int  column, Qt::SortOrder  order);
   int  rowCount(QSqlTableModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   void revertRow(QSqlTableModel* theWrappedObject, int  row);
   void setTable(QSqlTableModel* theWrappedObject, const QString&  tableName);
   bool  insertRowIntoTable(QSqlTableModel* theWrappedObject, const QSqlRecord&  values);
   bool  select(QSqlTableModel* theWrappedObject);
   bool  deleteRowFromTable(QSqlTableModel* theWrappedObject, int  row);
   QString  selectStatement(QSqlTableModel* theWrappedObject) const;
   bool  removeColumns(QSqlTableModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  setData(QSqlTableModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
   Qt::ItemFlags  flags(QSqlTableModel* theWrappedObject, const QModelIndex&  index) const;
   void setSort(QSqlTableModel* theWrappedObject, int  column, Qt::SortOrder  order);
   bool  updateRowInTable(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  values);
   void setFilter(QSqlTableModel* theWrappedObject, const QString&  filter);
   bool  removeRows(QSqlTableModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   QVariant  headerData(QSqlTableModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
   QSqlTableModel::EditStrategy  editStrategy(QSqlTableModel* theWrappedObject) const;
   QString  filter(QSqlTableModel* theWrappedObject) const;
   bool  insertRows(QSqlTableModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   QSqlIndex  primaryKey(QSqlTableModel* theWrappedObject) const;
};


