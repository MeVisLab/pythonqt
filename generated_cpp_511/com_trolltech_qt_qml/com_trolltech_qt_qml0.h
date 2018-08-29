#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatetime.h>
#include <qevent.h>
#include <qfileselector.h>
#include <qjsengine.h>
#include <qjsvalue.h>
#include <qmetaobject.h>
#include <qnetworkaccessmanager.h>
#include <qobject.h>
#include <qqmlabstracturlinterceptor.h>
#include <qqmlapplicationengine.h>
#include <qqmlcomponent.h>
#include <qqmlcontext.h>
#include <qqmldebug.h>
#include <qqmlengine.h>
#include <qqmlerror.h>
#include <qqmlexpression.h>
#include <qqmlextensioninterface.h>
#include <qqmlextensionplugin.h>
#include <qqmlfile.h>
#include <qqmlfileselector.h>
#include <qqmlincubator.h>
#include <qqmlinfo.h>
#include <qqmllist.h>
#include <qqmlnetworkaccessmanagerfactory.h>
#include <qqmlparserstatus.h>
#include <qqmlproperty.h>
#include <qqmlpropertymap.h>
#include <qqmlpropertyvaluesource.h>
#include <qqmlscriptstring.h>
#include <qstringlist.h>
#include <qurl.h>



class PythonQtShell_QJSEngine : public QJSEngine
{
public:
    PythonQtShell_QJSEngine():QJSEngine(),_wrapper(NULL) {};
    PythonQtShell_QJSEngine(QObject*  parent):QJSEngine(parent),_wrapper(NULL) {};

   ~PythonQtShell_QJSEngine();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QJSEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Extension )
enum Extension{
  TranslationExtension = QJSEngine::TranslationExtension,   ConsoleExtension = QJSEngine::ConsoleExtension,   GarbageCollectionExtension = QJSEngine::GarbageCollectionExtension,   AllExtensions = QJSEngine::AllExtensions};
public slots:
QJSEngine* new_QJSEngine();
QJSEngine* new_QJSEngine(QObject*  parent);
void delete_QJSEngine(QJSEngine* obj) { delete obj; } 
   void collectGarbage(QJSEngine* theWrappedObject);
   QJSValue  evaluate(QJSEngine* theWrappedObject, const QString&  program, const QString&  fileName = QString(), int  lineNumber = 1);
   QJSValue  globalObject(QJSEngine* theWrappedObject) const;
   void installTranslatorFunctions(QJSEngine* theWrappedObject, const QJSValue&  object = QJSValue());
   QJSValue  newArray(QJSEngine* theWrappedObject, uint  length = 0);
   QJSValue  newObject(QJSEngine* theWrappedObject);
   QJSValue  newQMetaObject(QJSEngine* theWrappedObject, const QMetaObject*  metaObject);
   QJSValue  newQObject(QJSEngine* theWrappedObject, QObject*  object);
};





class PythonQtWrapper_QJSValue : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SpecialValue )
enum SpecialValue{
  NullValue = QJSValue::NullValue,   UndefinedValue = QJSValue::UndefinedValue};
public slots:
QJSValue* new_QJSValue(QJSValue::SpecialValue  value = QJSValue::UndefinedValue);
QJSValue* new_QJSValue(bool  value);
QJSValue* new_QJSValue(const QJSValue&  other);
QJSValue* new_QJSValue(const QLatin1String&  value);
QJSValue* new_QJSValue(const QString&  value);
QJSValue* new_QJSValue(const char*  str);
QJSValue* new_QJSValue(double  value);
QJSValue* new_QJSValue(int  value);
QJSValue* new_QJSValue(uint  value);
void delete_QJSValue(QJSValue* obj) { delete obj; } 
   QJSValue  call(QJSValue* theWrappedObject, const QList<QJSValue >&  args = QJSValueList());
   QJSValue  callAsConstructor(QJSValue* theWrappedObject, const QList<QJSValue >&  args = QJSValueList());
   QJSValue  callWithInstance(QJSValue* theWrappedObject, const QJSValue&  instance, const QList<QJSValue >&  args = QJSValueList());
   bool  deleteProperty(QJSValue* theWrappedObject, const QString&  name);
   QJSEngine*  engine(QJSValue* theWrappedObject) const;
   bool  equals(QJSValue* theWrappedObject, const QJSValue&  other) const;
   bool  hasOwnProperty(QJSValue* theWrappedObject, const QString&  name) const;
   bool  hasProperty(QJSValue* theWrappedObject, const QString&  name) const;
   bool  isArray(QJSValue* theWrappedObject) const;
   bool  isBool(QJSValue* theWrappedObject) const;
   bool  isCallable(QJSValue* theWrappedObject) const;
   bool  isDate(QJSValue* theWrappedObject) const;
   bool  isError(QJSValue* theWrappedObject) const;
   bool  isNull(QJSValue* theWrappedObject) const;
   bool  isNumber(QJSValue* theWrappedObject) const;
   bool  isObject(QJSValue* theWrappedObject) const;
   bool  isQMetaObject(QJSValue* theWrappedObject) const;
   bool  isQObject(QJSValue* theWrappedObject) const;
   bool  isRegExp(QJSValue* theWrappedObject) const;
   bool  isString(QJSValue* theWrappedObject) const;
   bool  isUndefined(QJSValue* theWrappedObject) const;
   bool  isVariant(QJSValue* theWrappedObject) const;
   QJSValue*  operator_assign(QJSValue* theWrappedObject, const QJSValue&  other);
   QJSValue  property(QJSValue* theWrappedObject, const QString&  name) const;
   QJSValue  property(QJSValue* theWrappedObject, unsigned int  arrayIndex) const;
   QJSValue  prototype(QJSValue* theWrappedObject) const;
   void setProperty(QJSValue* theWrappedObject, const QString&  name, const QJSValue&  value);
   void setProperty(QJSValue* theWrappedObject, unsigned int  arrayIndex, const QJSValue&  value);
   void setPrototype(QJSValue* theWrappedObject, const QJSValue&  prototype);
   bool  strictlyEquals(QJSValue* theWrappedObject, const QJSValue&  other) const;
   bool  toBool(QJSValue* theWrappedObject) const;
   QDateTime  toDateTime(QJSValue* theWrappedObject) const;
   int  toInt(QJSValue* theWrappedObject) const;
   double  toNumber(QJSValue* theWrappedObject) const;
   const QMetaObject*  toQMetaObject(QJSValue* theWrappedObject) const;
   QObject*  toQObject(QJSValue* theWrappedObject) const;
   QString  toString(QJSValue* theWrappedObject) const;
   unsigned int  toUInt(QJSValue* theWrappedObject) const;
   QVariant  toVariant(QJSValue* theWrappedObject) const;
    QString py_toString(QJSValue*);
    bool __nonzero__(QJSValue* obj) { return !obj->isNull(); }
};





class PythonQtShell_QQmlAbstractUrlInterceptor : public QQmlAbstractUrlInterceptor
{
public:
    PythonQtShell_QQmlAbstractUrlInterceptor():QQmlAbstractUrlInterceptor(),_wrapper(NULL) {};

   ~PythonQtShell_QQmlAbstractUrlInterceptor();

virtual QUrl  intercept(const QUrl&  path, QQmlAbstractUrlInterceptor::DataType  type);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQmlAbstractUrlInterceptor : public QQmlAbstractUrlInterceptor
{ public:
inline QUrl  py_q_intercept(const QUrl&  path, QQmlAbstractUrlInterceptor::DataType  type) { return this->intercept(path, type); }
};

class PythonQtWrapper_QQmlAbstractUrlInterceptor : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DataType )
enum DataType{
  QmlFile = QQmlAbstractUrlInterceptor::QmlFile,   JavaScriptFile = QQmlAbstractUrlInterceptor::JavaScriptFile,   QmldirFile = QQmlAbstractUrlInterceptor::QmldirFile,   UrlString = QQmlAbstractUrlInterceptor::UrlString};
public slots:
QQmlAbstractUrlInterceptor* new_QQmlAbstractUrlInterceptor();
void delete_QQmlAbstractUrlInterceptor(QQmlAbstractUrlInterceptor* obj) { delete obj; } 
   QUrl  intercept(QQmlAbstractUrlInterceptor* theWrappedObject, const QUrl&  path, QQmlAbstractUrlInterceptor::DataType  type);
   QUrl  py_q_intercept(QQmlAbstractUrlInterceptor* theWrappedObject, const QUrl&  path, QQmlAbstractUrlInterceptor::DataType  type){  return (((PythonQtPublicPromoter_QQmlAbstractUrlInterceptor*)theWrappedObject)->py_q_intercept(path, type));}
};





class PythonQtShell_QQmlApplicationEngine : public QQmlApplicationEngine
{
public:
    PythonQtShell_QQmlApplicationEngine(QObject*  parent = nullptr):QQmlApplicationEngine(parent),_wrapper(NULL) {};
    PythonQtShell_QQmlApplicationEngine(const QString&  filePath, QObject*  parent = nullptr):QQmlApplicationEngine(filePath, parent),_wrapper(NULL) {};
    PythonQtShell_QQmlApplicationEngine(const QUrl&  url, QObject*  parent = nullptr):QQmlApplicationEngine(url, parent),_wrapper(NULL) {};

   ~PythonQtShell_QQmlApplicationEngine();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QQmlApplicationEngine : public QObject
{ Q_OBJECT
public:
public slots:
QQmlApplicationEngine* new_QQmlApplicationEngine(QObject*  parent = nullptr);
QQmlApplicationEngine* new_QQmlApplicationEngine(const QString&  filePath, QObject*  parent = nullptr);
QQmlApplicationEngine* new_QQmlApplicationEngine(const QUrl&  url, QObject*  parent = nullptr);
void delete_QQmlApplicationEngine(QQmlApplicationEngine* obj) { delete obj; } 
   QList<QObject* >  rootObjects(QQmlApplicationEngine* theWrappedObject);
   QList<QObject* >  rootObjects(QQmlApplicationEngine* theWrappedObject) const;
};





class PythonQtShell_QQmlComponent : public QQmlComponent
{
public:
    PythonQtShell_QQmlComponent(QObject*  parent = nullptr):QQmlComponent(parent),_wrapper(NULL) {};
    PythonQtShell_QQmlComponent(QQmlEngine*  arg__1, QObject*  parent = nullptr):QQmlComponent(arg__1, parent),_wrapper(NULL) {};
    PythonQtShell_QQmlComponent(QQmlEngine*  arg__1, const QString&  fileName, QObject*  parent = nullptr):QQmlComponent(arg__1, fileName, parent),_wrapper(NULL) {};
    PythonQtShell_QQmlComponent(QQmlEngine*  arg__1, const QString&  fileName, QQmlComponent::CompilationMode  mode, QObject*  parent = nullptr):QQmlComponent(arg__1, fileName, mode, parent),_wrapper(NULL) {};
    PythonQtShell_QQmlComponent(QQmlEngine*  arg__1, const QUrl&  url, QObject*  parent = nullptr):QQmlComponent(arg__1, url, parent),_wrapper(NULL) {};
    PythonQtShell_QQmlComponent(QQmlEngine*  arg__1, const QUrl&  url, QQmlComponent::CompilationMode  mode, QObject*  parent = nullptr):QQmlComponent(arg__1, url, mode, parent),_wrapper(NULL) {};

   ~PythonQtShell_QQmlComponent();

virtual QObject*  beginCreate(QQmlContext*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void completeCreate();
virtual QObject*  create(QQmlContext*  context = nullptr);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQmlComponent : public QQmlComponent
{ public:
inline QObject*  py_q_beginCreate(QQmlContext*  arg__1) { return QQmlComponent::beginCreate(arg__1); }
inline void py_q_completeCreate() { QQmlComponent::completeCreate(); }
inline QObject*  py_q_create(QQmlContext*  context = nullptr) { return QQmlComponent::create(context); }
};

class PythonQtWrapper_QQmlComponent : public QObject
{ Q_OBJECT
public:
public slots:
QQmlComponent* new_QQmlComponent(QObject*  parent = nullptr);
QQmlComponent* new_QQmlComponent(QQmlEngine*  arg__1, QObject*  parent = nullptr);
QQmlComponent* new_QQmlComponent(QQmlEngine*  arg__1, const QString&  fileName, QObject*  parent = nullptr);
QQmlComponent* new_QQmlComponent(QQmlEngine*  arg__1, const QString&  fileName, QQmlComponent::CompilationMode  mode, QObject*  parent = nullptr);
QQmlComponent* new_QQmlComponent(QQmlEngine*  arg__1, const QUrl&  url, QObject*  parent = nullptr);
QQmlComponent* new_QQmlComponent(QQmlEngine*  arg__1, const QUrl&  url, QQmlComponent::CompilationMode  mode, QObject*  parent = nullptr);
void delete_QQmlComponent(QQmlComponent* obj) { delete obj; } 
   QObject*  beginCreate(QQmlComponent* theWrappedObject, QQmlContext*  arg__1);
   QObject*  py_q_beginCreate(QQmlComponent* theWrappedObject, QQmlContext*  arg__1){  return (((PythonQtPublicPromoter_QQmlComponent*)theWrappedObject)->py_q_beginCreate(arg__1));}
   void completeCreate(QQmlComponent* theWrappedObject);
   void py_q_completeCreate(QQmlComponent* theWrappedObject){  (((PythonQtPublicPromoter_QQmlComponent*)theWrappedObject)->py_q_completeCreate());}
   QObject*  create(QQmlComponent* theWrappedObject, QQmlContext*  context = nullptr);
   QObject*  py_q_create(QQmlComponent* theWrappedObject, QQmlContext*  context = nullptr){  return (((PythonQtPublicPromoter_QQmlComponent*)theWrappedObject)->py_q_create(context));}
   void create(QQmlComponent* theWrappedObject, QQmlIncubator&  arg__1, QQmlContext*  context = nullptr, QQmlContext*  forContext = nullptr);
   QQmlContext*  creationContext(QQmlComponent* theWrappedObject) const;
   QString  errorString(QQmlComponent* theWrappedObject) const;
   QList<QQmlError >  errors(QQmlComponent* theWrappedObject) const;
   bool  isError(QQmlComponent* theWrappedObject) const;
   bool  isLoading(QQmlComponent* theWrappedObject) const;
   bool  isNull(QQmlComponent* theWrappedObject) const;
   bool  isReady(QQmlComponent* theWrappedObject) const;
   qreal  progress(QQmlComponent* theWrappedObject) const;
   QQmlComponent::Status  status(QQmlComponent* theWrappedObject) const;
   QUrl  url(QQmlComponent* theWrappedObject) const;
    bool __nonzero__(QQmlComponent* obj) { return !obj->isNull(); }
};





class PythonQtShell_QQmlContext : public QQmlContext
{
public:
    PythonQtShell_QQmlContext(QQmlContext*  parent, QObject*  objParent = nullptr):QQmlContext(parent, objParent),_wrapper(NULL) {};
    PythonQtShell_QQmlContext(QQmlEngine*  parent, QObject*  objParent = nullptr):QQmlContext(parent, objParent),_wrapper(NULL) {};

   ~PythonQtShell_QQmlContext();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QQmlContext : public QObject
{ Q_OBJECT
public:
public slots:
QQmlContext* new_QQmlContext(QQmlContext*  parent, QObject*  objParent = nullptr);
QQmlContext* new_QQmlContext(QQmlEngine*  parent, QObject*  objParent = nullptr);
void delete_QQmlContext(QQmlContext* obj) { delete obj; } 
   QUrl  baseUrl(QQmlContext* theWrappedObject) const;
   QObject*  contextObject(QQmlContext* theWrappedObject) const;
   QVariant  contextProperty(QQmlContext* theWrappedObject, const QString&  arg__1) const;
   QQmlEngine*  engine(QQmlContext* theWrappedObject) const;
   bool  isValid(QQmlContext* theWrappedObject) const;
   QString  nameForObject(QQmlContext* theWrappedObject, QObject*  arg__1) const;
   QQmlContext*  parentContext(QQmlContext* theWrappedObject) const;
   QUrl  resolvedUrl(QQmlContext* theWrappedObject, const QUrl&  arg__1);
   void setBaseUrl(QQmlContext* theWrappedObject, const QUrl&  arg__1);
   void setContextObject(QQmlContext* theWrappedObject, QObject*  arg__1);
   void setContextProperty(QQmlContext* theWrappedObject, const QString&  arg__1, QObject*  arg__2);
   void setContextProperty(QQmlContext* theWrappedObject, const QString&  arg__1, const QVariant&  arg__2);
    bool __nonzero__(QQmlContext* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QQmlDebuggingEnabler : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StartMode )
enum StartMode{
  DoNotWaitForClient = QQmlDebuggingEnabler::DoNotWaitForClient,   WaitForClient = QQmlDebuggingEnabler::WaitForClient};
public slots:
QQmlDebuggingEnabler* new_QQmlDebuggingEnabler(bool  printWarning = true);
void delete_QQmlDebuggingEnabler(QQmlDebuggingEnabler* obj) { delete obj; } 
   bool  static_QQmlDebuggingEnabler_connectToLocalDebugger(const QString&  socketFileName, QQmlDebuggingEnabler::StartMode  mode = QQmlDebuggingEnabler::DoNotWaitForClient);
   QStringList  static_QQmlDebuggingEnabler_debuggerServices();
   QStringList  static_QQmlDebuggingEnabler_inspectorServices();
   QStringList  static_QQmlDebuggingEnabler_nativeDebuggerServices();
   QStringList  static_QQmlDebuggingEnabler_profilerServices();
   void static_QQmlDebuggingEnabler_setServices(const QStringList&  services);
   bool  static_QQmlDebuggingEnabler_startDebugConnector(const QString&  pluginName, const QHash<QString , QVariant >&  configuration = QVariantHash());
   bool  static_QQmlDebuggingEnabler_startTcpDebugServer(int  port, QQmlDebuggingEnabler::StartMode  mode = QQmlDebuggingEnabler::DoNotWaitForClient, const QString&  hostName = QString());
};





class PythonQtShell_QQmlEngine : public QQmlEngine
{
public:
    PythonQtShell_QQmlEngine(QObject*  p = nullptr):QQmlEngine(p),_wrapper(NULL) {};

   ~PythonQtShell_QQmlEngine();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQmlEngine : public QQmlEngine
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QQmlEngine::event(arg__1); }
};

class PythonQtWrapper_QQmlEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ObjectOwnership )
enum ObjectOwnership{
  CppOwnership = QQmlEngine::CppOwnership,   JavaScriptOwnership = QQmlEngine::JavaScriptOwnership};
public slots:
QQmlEngine* new_QQmlEngine(QObject*  p = nullptr);
void delete_QQmlEngine(QQmlEngine* obj) { delete obj; } 
   void addImportPath(QQmlEngine* theWrappedObject, const QString&  dir);
   bool  addNamedBundle(QQmlEngine* theWrappedObject, const QString&  name, const QString&  fileName);
   void addPluginPath(QQmlEngine* theWrappedObject, const QString&  dir);
   QUrl  baseUrl(QQmlEngine* theWrappedObject) const;
   void clearComponentCache(QQmlEngine* theWrappedObject);
   QQmlContext*  static_QQmlEngine_contextForObject(const QObject*  arg__1);
   bool  py_q_event(QQmlEngine* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QQmlEngine*)theWrappedObject)->py_q_event(arg__1));}
   QStringList  importPathList(QQmlEngine* theWrappedObject) const;
   bool  importPlugin(QQmlEngine* theWrappedObject, const QString&  filePath, const QString&  uri, QList<QQmlError >*  errors);
   QQmlIncubationController*  incubationController(QQmlEngine* theWrappedObject) const;
   QNetworkAccessManager*  networkAccessManager(QQmlEngine* theWrappedObject) const;
   QQmlNetworkAccessManagerFactory*  networkAccessManagerFactory(QQmlEngine* theWrappedObject) const;
   QQmlEngine::ObjectOwnership  static_QQmlEngine_objectOwnership(QObject*  arg__1);
   QString  offlineStorageDatabaseFilePath(QQmlEngine* theWrappedObject, const QString&  databaseName) const;
   QString  offlineStoragePath(QQmlEngine* theWrappedObject) const;
   bool  outputWarningsToStandardError(QQmlEngine* theWrappedObject) const;
   QStringList  pluginPathList(QQmlEngine* theWrappedObject) const;
   void removeImageProvider(QQmlEngine* theWrappedObject, const QString&  id);
   QQmlContext*  rootContext(QQmlEngine* theWrappedObject) const;
   void setBaseUrl(QQmlEngine* theWrappedObject, const QUrl&  arg__1);
   void static_QQmlEngine_setContextForObject(QObject*  arg__1, QQmlContext*  arg__2);
   void setImportPathList(QQmlEngine* theWrappedObject, const QStringList&  paths);
   void setIncubationController(QQmlEngine* theWrappedObject, QQmlIncubationController*  arg__1);
   void setNetworkAccessManagerFactory(QQmlEngine* theWrappedObject, QQmlNetworkAccessManagerFactory*  arg__1);
   void static_QQmlEngine_setObjectOwnership(QObject*  arg__1, QQmlEngine::ObjectOwnership  arg__2);
   void setOfflineStoragePath(QQmlEngine* theWrappedObject, const QString&  dir);
   void setOutputWarningsToStandardError(QQmlEngine* theWrappedObject, bool  arg__1);
   void setPluginPathList(QQmlEngine* theWrappedObject, const QStringList&  paths);
   void setUrlInterceptor(QQmlEngine* theWrappedObject, QQmlAbstractUrlInterceptor*  urlInterceptor);
   void trimComponentCache(QQmlEngine* theWrappedObject);
   QQmlAbstractUrlInterceptor*  urlInterceptor(QQmlEngine* theWrappedObject) const;
};





class PythonQtWrapper_QQmlError : public QObject
{ Q_OBJECT
public:
public slots:
QQmlError* new_QQmlError();
QQmlError* new_QQmlError(const QQmlError&  arg__1);
void delete_QQmlError(QQmlError* obj) { delete obj; } 
   int  column(QQmlError* theWrappedObject) const;
   QString  description(QQmlError* theWrappedObject) const;
   bool  isValid(QQmlError* theWrappedObject) const;
   int  line(QQmlError* theWrappedObject) const;
   QtMsgType  messageType(QQmlError* theWrappedObject) const;
   QObject*  object(QQmlError* theWrappedObject) const;
   QQmlError*  operator_assign(QQmlError* theWrappedObject, const QQmlError&  arg__1);
   void setColumn(QQmlError* theWrappedObject, int  arg__1);
   void setDescription(QQmlError* theWrappedObject, const QString&  arg__1);
   void setLine(QQmlError* theWrappedObject, int  arg__1);
   void setMessageType(QQmlError* theWrappedObject, QtMsgType  messageType);
   void setObject(QQmlError* theWrappedObject, QObject*  arg__1);
   void setUrl(QQmlError* theWrappedObject, const QUrl&  arg__1);
   QString  toString(QQmlError* theWrappedObject) const;
   QUrl  url(QQmlError* theWrappedObject) const;
    QString py_toString(QQmlError*);
    bool __nonzero__(QQmlError* obj) { return obj->isValid(); }
};





class PythonQtShell_QQmlExpression : public QQmlExpression
{
public:
    PythonQtShell_QQmlExpression():QQmlExpression(),_wrapper(NULL) {};
    PythonQtShell_QQmlExpression(QQmlContext*  arg__1, QObject*  arg__2, const QString&  arg__3, QObject*  arg__4 = nullptr):QQmlExpression(arg__1, arg__2, arg__3, arg__4),_wrapper(NULL) {};
    PythonQtShell_QQmlExpression(const QQmlScriptString&  arg__1, QQmlContext*  arg__2 = nullptr, QObject*  arg__3 = nullptr, QObject*  arg__4 = nullptr):QQmlExpression(arg__1, arg__2, arg__3, arg__4),_wrapper(NULL) {};

   ~PythonQtShell_QQmlExpression();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QQmlExpression : public QObject
{ Q_OBJECT
public:
public slots:
QQmlExpression* new_QQmlExpression();
QQmlExpression* new_QQmlExpression(QQmlContext*  arg__1, QObject*  arg__2, const QString&  arg__3, QObject*  arg__4 = nullptr);
QQmlExpression* new_QQmlExpression(const QQmlScriptString&  arg__1, QQmlContext*  arg__2 = nullptr, QObject*  arg__3 = nullptr, QObject*  arg__4 = nullptr);
void delete_QQmlExpression(QQmlExpression* obj) { delete obj; } 
   void clearError(QQmlExpression* theWrappedObject);
   int  columnNumber(QQmlExpression* theWrappedObject) const;
   QQmlContext*  context(QQmlExpression* theWrappedObject) const;
   QQmlEngine*  engine(QQmlExpression* theWrappedObject) const;
   QQmlError  error(QQmlExpression* theWrappedObject) const;
   QVariant  evaluate(QQmlExpression* theWrappedObject, bool*  valueIsUndefined = nullptr);
   QString  expression(QQmlExpression* theWrappedObject) const;
   bool  hasError(QQmlExpression* theWrappedObject) const;
   int  lineNumber(QQmlExpression* theWrappedObject) const;
   bool  notifyOnValueChanged(QQmlExpression* theWrappedObject) const;
   QObject*  scopeObject(QQmlExpression* theWrappedObject) const;
   void setExpression(QQmlExpression* theWrappedObject, const QString&  arg__1);
   void setNotifyOnValueChanged(QQmlExpression* theWrappedObject, bool  arg__1);
   void setSourceLocation(QQmlExpression* theWrappedObject, const QString&  fileName, int  line, int  column = 0);
   QString  sourceFile(QQmlExpression* theWrappedObject) const;
};





class PythonQtShell_QQmlExtensionInterface : public QQmlExtensionInterface
{
public:
    PythonQtShell_QQmlExtensionInterface():QQmlExtensionInterface(),_wrapper(NULL) {};

   ~PythonQtShell_QQmlExtensionInterface();

virtual void initializeEngine(QQmlEngine*  engine, const char*  uri);
virtual void registerTypes(const char*  uri);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQmlExtensionInterface : public QQmlExtensionInterface
{ public:
inline void py_q_initializeEngine(QQmlEngine*  engine, const char*  uri) { this->initializeEngine(engine, uri); }
};

class PythonQtWrapper_QQmlExtensionInterface : public QObject
{ Q_OBJECT
public:
public slots:
QQmlExtensionInterface* new_QQmlExtensionInterface();
void delete_QQmlExtensionInterface(QQmlExtensionInterface* obj) { delete obj; } 
   void initializeEngine(QQmlExtensionInterface* theWrappedObject, QQmlEngine*  engine, const char*  uri);
   void py_q_initializeEngine(QQmlExtensionInterface* theWrappedObject, QQmlEngine*  engine, const char*  uri){  (((PythonQtPublicPromoter_QQmlExtensionInterface*)theWrappedObject)->py_q_initializeEngine(engine, uri));}
};





class PythonQtShell_QQmlExtensionPlugin : public QQmlExtensionPlugin
{
public:
    PythonQtShell_QQmlExtensionPlugin(QObject*  parent = nullptr):QQmlExtensionPlugin(parent),_wrapper(NULL) {};

   ~PythonQtShell_QQmlExtensionPlugin();

virtual void initializeEngine(QQmlEngine*  engine, const char*  uri);
virtual void registerTypes(const char*  uri);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQmlExtensionPlugin : public QQmlExtensionPlugin
{ public:
inline void py_q_initializeEngine(QQmlEngine*  engine, const char*  uri) { QQmlExtensionPlugin::initializeEngine(engine, uri); }
inline void py_q_registerTypes(const char*  uri) { this->registerTypes(uri); }
};

class PythonQtWrapper_QQmlExtensionPlugin : public QObject
{ Q_OBJECT
public:
public slots:
QQmlExtensionPlugin* new_QQmlExtensionPlugin(QObject*  parent = nullptr);
void delete_QQmlExtensionPlugin(QQmlExtensionPlugin* obj) { delete obj; } 
   QUrl  baseUrl(QQmlExtensionPlugin* theWrappedObject) const;
   void initializeEngine(QQmlExtensionPlugin* theWrappedObject, QQmlEngine*  engine, const char*  uri);
   void py_q_initializeEngine(QQmlExtensionPlugin* theWrappedObject, QQmlEngine*  engine, const char*  uri){  (((PythonQtPublicPromoter_QQmlExtensionPlugin*)theWrappedObject)->py_q_initializeEngine(engine, uri));}
   void registerTypes(QQmlExtensionPlugin* theWrappedObject, const char*  uri);
   void py_q_registerTypes(QQmlExtensionPlugin* theWrappedObject, const char*  uri){  (((PythonQtPublicPromoter_QQmlExtensionPlugin*)theWrappedObject)->py_q_registerTypes(uri));}
};





class PythonQtWrapper_QQmlFile : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Status )
enum Status{
  Null = QQmlFile::Null,   Ready = QQmlFile::Ready,   Error = QQmlFile::Error,   Loading = QQmlFile::Loading};
public slots:
QQmlFile* new_QQmlFile();
QQmlFile* new_QQmlFile(QQmlEngine*  arg__1, const QString&  arg__2);
QQmlFile* new_QQmlFile(QQmlEngine*  arg__1, const QUrl&  arg__2);
void delete_QQmlFile(QQmlFile* obj) { delete obj; } 
   void clear(QQmlFile* theWrappedObject);
   void clear(QQmlFile* theWrappedObject, QObject*  arg__1);
   bool  connectDownloadProgress(QQmlFile* theWrappedObject, QObject*  arg__1, const char*  arg__2);
   bool  connectDownloadProgress(QQmlFile* theWrappedObject, QObject*  arg__1, int  arg__2);
   bool  connectFinished(QQmlFile* theWrappedObject, QObject*  arg__1, const char*  arg__2);
   bool  connectFinished(QQmlFile* theWrappedObject, QObject*  arg__1, int  arg__2);
   const char*  data(QQmlFile* theWrappedObject) const;
   QByteArray  dataByteArray(QQmlFile* theWrappedObject) const;
   QString  error(QQmlFile* theWrappedObject) const;
   bool  isError(QQmlFile* theWrappedObject) const;
   bool  isLoading(QQmlFile* theWrappedObject) const;
   bool  static_QQmlFile_isLocalFile(const QString&  url);
   bool  static_QQmlFile_isLocalFile(const QUrl&  url);
   bool  isNull(QQmlFile* theWrappedObject) const;
   bool  isReady(QQmlFile* theWrappedObject) const;
   bool  static_QQmlFile_isSynchronous(const QString&  url);
   bool  static_QQmlFile_isSynchronous(const QUrl&  url);
   void load(QQmlFile* theWrappedObject, QQmlEngine*  arg__1, const QString&  arg__2);
   void load(QQmlFile* theWrappedObject, QQmlEngine*  arg__1, const QUrl&  arg__2);
   qint64  size(QQmlFile* theWrappedObject) const;
   QQmlFile::Status  status(QQmlFile* theWrappedObject) const;
   QUrl  url(QQmlFile* theWrappedObject) const;
   QString  static_QQmlFile_urlToLocalFileOrQrc(const QString&  arg__1);
   QString  static_QQmlFile_urlToLocalFileOrQrc(const QUrl&  arg__1);
    bool __nonzero__(QQmlFile* obj) { return !obj->isNull(); }
};





class PythonQtShell_QQmlFileSelector : public QQmlFileSelector
{
public:
    PythonQtShell_QQmlFileSelector(QQmlEngine*  engine, QObject*  parent = nullptr):QQmlFileSelector(engine, parent),_wrapper(NULL) {};

   ~PythonQtShell_QQmlFileSelector();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QQmlFileSelector : public QObject
{ Q_OBJECT
public:
public slots:
QQmlFileSelector* new_QQmlFileSelector(QQmlEngine*  engine, QObject*  parent = nullptr);
void delete_QQmlFileSelector(QQmlFileSelector* obj) { delete obj; } 
   QQmlFileSelector*  static_QQmlFileSelector_get(QQmlEngine*  arg__1);
   QFileSelector*  selector(QQmlFileSelector* theWrappedObject) const;
   void setExtraSelectors(QQmlFileSelector* theWrappedObject, QStringList&  strings);
   void setExtraSelectors(QQmlFileSelector* theWrappedObject, const QStringList&  strings);
   void setSelector(QQmlFileSelector* theWrappedObject, QFileSelector*  selector);
};





class PythonQtShell_QQmlIncubationController : public QQmlIncubationController
{
public:
    PythonQtShell_QQmlIncubationController():QQmlIncubationController(),_wrapper(NULL) {};

   ~PythonQtShell_QQmlIncubationController();

virtual void incubatingObjectCountChanged(int  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQmlIncubationController : public QQmlIncubationController
{ public:
inline void promoted_incubatingObjectCountChanged(int  arg__1) { this->incubatingObjectCountChanged(arg__1); }
inline void py_q_incubatingObjectCountChanged(int  arg__1) { QQmlIncubationController::incubatingObjectCountChanged(arg__1); }
};

class PythonQtWrapper_QQmlIncubationController : public QObject
{ Q_OBJECT
public:
public slots:
QQmlIncubationController* new_QQmlIncubationController();
void delete_QQmlIncubationController(QQmlIncubationController* obj) { delete obj; } 
   QQmlEngine*  engine(QQmlIncubationController* theWrappedObject) const;
   void incubateFor(QQmlIncubationController* theWrappedObject, int  msecs);
   int  incubatingObjectCount(QQmlIncubationController* theWrappedObject) const;
   void incubatingObjectCountChanged(QQmlIncubationController* theWrappedObject, int  arg__1);
   void py_q_incubatingObjectCountChanged(QQmlIncubationController* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QQmlIncubationController*)theWrappedObject)->py_q_incubatingObjectCountChanged(arg__1));}
};





class PythonQtShell_QQmlIncubator : public QQmlIncubator
{
public:
    PythonQtShell_QQmlIncubator(QQmlIncubator::IncubationMode  arg__1 = QQmlIncubator::Asynchronous):QQmlIncubator(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QQmlIncubator();

virtual void setInitialState(QObject*  arg__1);
virtual void statusChanged(QQmlIncubator::Status  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQmlIncubator : public QQmlIncubator
{ public:
inline void promoted_setInitialState(QObject*  arg__1) { this->setInitialState(arg__1); }
inline void promoted_statusChanged(QQmlIncubator::Status  arg__1) { this->statusChanged(arg__1); }
inline void py_q_setInitialState(QObject*  arg__1) { QQmlIncubator::setInitialState(arg__1); }
inline void py_q_statusChanged(QQmlIncubator::Status  arg__1) { QQmlIncubator::statusChanged(arg__1); }
};

class PythonQtWrapper_QQmlIncubator : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IncubationMode Status )
enum IncubationMode{
  Asynchronous = QQmlIncubator::Asynchronous,   AsynchronousIfNested = QQmlIncubator::AsynchronousIfNested,   Synchronous = QQmlIncubator::Synchronous};
enum Status{
  Null = QQmlIncubator::Null,   Ready = QQmlIncubator::Ready,   Loading = QQmlIncubator::Loading,   Error = QQmlIncubator::Error};
public slots:
QQmlIncubator* new_QQmlIncubator(QQmlIncubator::IncubationMode  arg__1 = QQmlIncubator::Asynchronous);
void delete_QQmlIncubator(QQmlIncubator* obj) { delete obj; } 
   void clear(QQmlIncubator* theWrappedObject);
   QList<QQmlError >  errors(QQmlIncubator* theWrappedObject) const;
   void forceCompletion(QQmlIncubator* theWrappedObject);
   QQmlIncubator::IncubationMode  incubationMode(QQmlIncubator* theWrappedObject) const;
   bool  isError(QQmlIncubator* theWrappedObject) const;
   bool  isLoading(QQmlIncubator* theWrappedObject) const;
   bool  isNull(QQmlIncubator* theWrappedObject) const;
   bool  isReady(QQmlIncubator* theWrappedObject) const;
   QObject*  object(QQmlIncubator* theWrappedObject) const;
   void setInitialState(QQmlIncubator* theWrappedObject, QObject*  arg__1);
   void py_q_setInitialState(QQmlIncubator* theWrappedObject, QObject*  arg__1){  (((PythonQtPublicPromoter_QQmlIncubator*)theWrappedObject)->py_q_setInitialState(arg__1));}
   QQmlIncubator::Status  status(QQmlIncubator* theWrappedObject) const;
   void statusChanged(QQmlIncubator* theWrappedObject, QQmlIncubator::Status  arg__1);
   void py_q_statusChanged(QQmlIncubator* theWrappedObject, QQmlIncubator::Status  arg__1){  (((PythonQtPublicPromoter_QQmlIncubator*)theWrappedObject)->py_q_statusChanged(arg__1));}
    bool __nonzero__(QQmlIncubator* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QQmlInfo : public QObject
{ Q_OBJECT
public:
public slots:
QQmlInfo* new_QQmlInfo(const QQmlInfo&  arg__1);
void delete_QQmlInfo(QQmlInfo* obj) { delete obj; } 
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, QChar  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, bool  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, char  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, const QByteArray&  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, const QLatin1String&  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, const QString&  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, const QStringRef&  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, const QUrl&  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, const char*  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, const void*  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, double  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, float  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, qint64  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, quint64  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, signed int  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, signed long  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, signed short  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, unsigned int  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, unsigned long  t);
   QQmlInfo*  __lshift__(QQmlInfo* theWrappedObject, unsigned short  t);
};





class PythonQtWrapper_QQmlListReference : public QObject
{ Q_OBJECT
public:
public slots:
QQmlListReference* new_QQmlListReference();
QQmlListReference* new_QQmlListReference(QObject*  arg__1, const char*  property, QQmlEngine*  arg__3 = nullptr);
QQmlListReference* new_QQmlListReference(const QQmlListReference&  arg__1);
void delete_QQmlListReference(QQmlListReference* obj) { delete obj; } 
   bool  append(QQmlListReference* theWrappedObject, QObject*  arg__1) const;
   QObject*  at(QQmlListReference* theWrappedObject, int  arg__1) const;
   bool  canAppend(QQmlListReference* theWrappedObject) const;
   bool  canAt(QQmlListReference* theWrappedObject) const;
   bool  canClear(QQmlListReference* theWrappedObject) const;
   bool  canCount(QQmlListReference* theWrappedObject) const;
   bool  clear(QQmlListReference* theWrappedObject) const;
   int  count(QQmlListReference* theWrappedObject) const;
   bool  isManipulable(QQmlListReference* theWrappedObject) const;
   bool  isReadable(QQmlListReference* theWrappedObject) const;
   bool  isValid(QQmlListReference* theWrappedObject) const;
   const QMetaObject*  listElementType(QQmlListReference* theWrappedObject) const;
   QObject*  object(QQmlListReference* theWrappedObject) const;
   QQmlListReference*  operator_assign(QQmlListReference* theWrappedObject, const QQmlListReference&  arg__1);
    bool __nonzero__(QQmlListReference* obj) { return obj->isValid(); }
};





class PythonQtShell_QQmlNetworkAccessManagerFactory : public QQmlNetworkAccessManagerFactory
{
public:
    PythonQtShell_QQmlNetworkAccessManagerFactory():QQmlNetworkAccessManagerFactory(),_wrapper(NULL) {};

   ~PythonQtShell_QQmlNetworkAccessManagerFactory();

virtual QNetworkAccessManager*  create(QObject*  parent);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQmlNetworkAccessManagerFactory : public QQmlNetworkAccessManagerFactory
{ public:
inline QNetworkAccessManager*  py_q_create(QObject*  parent) { return this->create(parent); }
};

class PythonQtWrapper_QQmlNetworkAccessManagerFactory : public QObject
{ Q_OBJECT
public:
public slots:
QQmlNetworkAccessManagerFactory* new_QQmlNetworkAccessManagerFactory();
void delete_QQmlNetworkAccessManagerFactory(QQmlNetworkAccessManagerFactory* obj) { delete obj; } 
   QNetworkAccessManager*  create(QQmlNetworkAccessManagerFactory* theWrappedObject, QObject*  parent);
   QNetworkAccessManager*  py_q_create(QQmlNetworkAccessManagerFactory* theWrappedObject, QObject*  parent){  return (((PythonQtPublicPromoter_QQmlNetworkAccessManagerFactory*)theWrappedObject)->py_q_create(parent));}
};





class PythonQtShell_QQmlParserStatus : public QQmlParserStatus
{
public:
    PythonQtShell_QQmlParserStatus():QQmlParserStatus(),_wrapper(NULL) {};

   ~PythonQtShell_QQmlParserStatus();

virtual void classBegin();
virtual void componentComplete();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQmlParserStatus : public QQmlParserStatus
{ public:
inline void py_q_classBegin() { this->classBegin(); }
inline void py_q_componentComplete() { this->componentComplete(); }
};

class PythonQtWrapper_QQmlParserStatus : public QObject
{ Q_OBJECT
public:
public slots:
QQmlParserStatus* new_QQmlParserStatus();
void delete_QQmlParserStatus(QQmlParserStatus* obj) { delete obj; } 
   void classBegin(QQmlParserStatus* theWrappedObject);
   void py_q_classBegin(QQmlParserStatus* theWrappedObject){  (((PythonQtPublicPromoter_QQmlParserStatus*)theWrappedObject)->py_q_classBegin());}
   void componentComplete(QQmlParserStatus* theWrappedObject);
   void py_q_componentComplete(QQmlParserStatus* theWrappedObject){  (((PythonQtPublicPromoter_QQmlParserStatus*)theWrappedObject)->py_q_componentComplete());}
};





class PythonQtWrapper_QQmlProperty : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PropertyTypeCategory Type )
enum PropertyTypeCategory{
  InvalidCategory = QQmlProperty::InvalidCategory,   List = QQmlProperty::List,   Object = QQmlProperty::Object,   Normal = QQmlProperty::Normal};
enum Type{
  Invalid = QQmlProperty::Invalid,   Property = QQmlProperty::Property,   SignalProperty = QQmlProperty::SignalProperty};
public slots:
QQmlProperty* new_QQmlProperty();
QQmlProperty* new_QQmlProperty(QObject*  arg__1);
QQmlProperty* new_QQmlProperty(QObject*  arg__1, QQmlContext*  arg__2);
QQmlProperty* new_QQmlProperty(QObject*  arg__1, QQmlEngine*  arg__2);
QQmlProperty* new_QQmlProperty(QObject*  arg__1, const QString&  arg__2);
QQmlProperty* new_QQmlProperty(QObject*  arg__1, const QString&  arg__2, QQmlContext*  arg__3);
QQmlProperty* new_QQmlProperty(QObject*  arg__1, const QString&  arg__2, QQmlEngine*  arg__3);
QQmlProperty* new_QQmlProperty(const QQmlProperty&  arg__1);
void delete_QQmlProperty(QQmlProperty* obj) { delete obj; } 
   bool  connectNotifySignal(QQmlProperty* theWrappedObject, QObject*  dest, const char*  slot) const;
   bool  connectNotifySignal(QQmlProperty* theWrappedObject, QObject*  dest, int  method) const;
   bool  hasNotifySignal(QQmlProperty* theWrappedObject) const;
   int  index(QQmlProperty* theWrappedObject) const;
   bool  isDesignable(QQmlProperty* theWrappedObject) const;
   bool  isProperty(QQmlProperty* theWrappedObject) const;
   bool  isResettable(QQmlProperty* theWrappedObject) const;
   bool  isSignalProperty(QQmlProperty* theWrappedObject) const;
   bool  isValid(QQmlProperty* theWrappedObject) const;
   bool  isWritable(QQmlProperty* theWrappedObject) const;
   QMetaMethod  method(QQmlProperty* theWrappedObject) const;
   QString  name(QQmlProperty* theWrappedObject) const;
   bool  needsNotifySignal(QQmlProperty* theWrappedObject) const;
   QObject*  object(QQmlProperty* theWrappedObject) const;
   QQmlProperty*  operator_assign(QQmlProperty* theWrappedObject, const QQmlProperty&  arg__1);
   bool  __eq__(QQmlProperty* theWrappedObject, const QQmlProperty&  arg__1) const;
   QMetaProperty  property(QQmlProperty* theWrappedObject) const;
   int  propertyType(QQmlProperty* theWrappedObject) const;
   QQmlProperty::PropertyTypeCategory  propertyTypeCategory(QQmlProperty* theWrappedObject) const;
   const char*  propertyTypeName(QQmlProperty* theWrappedObject) const;
   QVariant  read(QQmlProperty* theWrappedObject) const;
   QVariant  static_QQmlProperty_read(const QObject*  arg__1, const QString&  arg__2);
   QVariant  static_QQmlProperty_read(const QObject*  arg__1, const QString&  arg__2, QQmlContext*  arg__3);
   QVariant  static_QQmlProperty_read(const QObject*  arg__1, const QString&  arg__2, QQmlEngine*  arg__3);
   bool  reset(QQmlProperty* theWrappedObject) const;
   QQmlProperty::Type  type(QQmlProperty* theWrappedObject) const;
   bool  static_QQmlProperty_write(QObject*  arg__1, const QString&  arg__2, const QVariant&  arg__3);
   bool  static_QQmlProperty_write(QObject*  arg__1, const QString&  arg__2, const QVariant&  arg__3, QQmlContext*  arg__4);
   bool  static_QQmlProperty_write(QObject*  arg__1, const QString&  arg__2, const QVariant&  arg__3, QQmlEngine*  arg__4);
   bool  write(QQmlProperty* theWrappedObject, const QVariant&  arg__1) const;
    bool __nonzero__(QQmlProperty* obj) { return obj->isValid(); }
};





class PythonQtShell_QQmlPropertyMap : public QQmlPropertyMap
{
public:
    PythonQtShell_QQmlPropertyMap(QObject*  parent = nullptr):QQmlPropertyMap(parent),_wrapper(NULL) {};

   ~PythonQtShell_QQmlPropertyMap();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual QVariant  updateValue(const QString&  key, const QVariant&  input);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQmlPropertyMap : public QQmlPropertyMap
{ public:
inline QVariant  promoted_updateValue(const QString&  key, const QVariant&  input) { return this->updateValue(key, input); }
inline QVariant  py_q_updateValue(const QString&  key, const QVariant&  input) { return QQmlPropertyMap::updateValue(key, input); }
};

class PythonQtWrapper_QQmlPropertyMap : public QObject
{ Q_OBJECT
public:
public slots:
QQmlPropertyMap* new_QQmlPropertyMap(QObject*  parent = nullptr);
void delete_QQmlPropertyMap(QQmlPropertyMap* obj) { delete obj; } 
   void clear(QQmlPropertyMap* theWrappedObject, const QString&  key);
   bool  contains(QQmlPropertyMap* theWrappedObject, const QString&  key) const;
   int  count(QQmlPropertyMap* theWrappedObject) const;
   void insert(QQmlPropertyMap* theWrappedObject, const QString&  key, const QVariant&  value);
   bool  isEmpty(QQmlPropertyMap* theWrappedObject) const;
   QStringList  keys(QQmlPropertyMap* theWrappedObject) const;
   QVariant  operator_subscript(QQmlPropertyMap* theWrappedObject, const QString&  key) const;
   int  size(QQmlPropertyMap* theWrappedObject) const;
   QVariant  updateValue(QQmlPropertyMap* theWrappedObject, const QString&  key, const QVariant&  input);
   QVariant  py_q_updateValue(QQmlPropertyMap* theWrappedObject, const QString&  key, const QVariant&  input){  return (((PythonQtPublicPromoter_QQmlPropertyMap*)theWrappedObject)->py_q_updateValue(key, input));}
   QVariant  value(QQmlPropertyMap* theWrappedObject, const QString&  key) const;
    bool __nonzero__(QQmlPropertyMap* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QQmlPropertyValueSource : public QQmlPropertyValueSource
{
public:
    PythonQtShell_QQmlPropertyValueSource():QQmlPropertyValueSource(),_wrapper(NULL) {};

   ~PythonQtShell_QQmlPropertyValueSource();

virtual void setTarget(const QQmlProperty&  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQmlPropertyValueSource : public QQmlPropertyValueSource
{ public:
inline void py_q_setTarget(const QQmlProperty&  arg__1) { this->setTarget(arg__1); }
};

class PythonQtWrapper_QQmlPropertyValueSource : public QObject
{ Q_OBJECT
public:
public slots:
QQmlPropertyValueSource* new_QQmlPropertyValueSource();
void delete_QQmlPropertyValueSource(QQmlPropertyValueSource* obj) { delete obj; } 
   void setTarget(QQmlPropertyValueSource* theWrappedObject, const QQmlProperty&  arg__1);
   void py_q_setTarget(QQmlPropertyValueSource* theWrappedObject, const QQmlProperty&  arg__1){  (((PythonQtPublicPromoter_QQmlPropertyValueSource*)theWrappedObject)->py_q_setTarget(arg__1));}
};





class PythonQtWrapper_QQmlScriptString : public QObject
{ Q_OBJECT
public:
public slots:
QQmlScriptString* new_QQmlScriptString();
QQmlScriptString* new_QQmlScriptString(const QQmlScriptString&  arg__1);
void delete_QQmlScriptString(QQmlScriptString* obj) { delete obj; } 
   bool  booleanLiteral(QQmlScriptString* theWrappedObject, bool*  ok) const;
   bool  isEmpty(QQmlScriptString* theWrappedObject) const;
   bool  isNullLiteral(QQmlScriptString* theWrappedObject) const;
   bool  isUndefinedLiteral(QQmlScriptString* theWrappedObject) const;
   qreal  numberLiteral(QQmlScriptString* theWrappedObject, bool*  ok) const;
   bool  __ne__(QQmlScriptString* theWrappedObject, const QQmlScriptString&  arg__1) const;
   QQmlScriptString*  operator_assign(QQmlScriptString* theWrappedObject, const QQmlScriptString&  arg__1);
   bool  __eq__(QQmlScriptString* theWrappedObject, const QQmlScriptString&  arg__1) const;
   QString  stringLiteral(QQmlScriptString* theWrappedObject) const;
    bool __nonzero__(QQmlScriptString* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QQmlTypesExtensionInterface : public QQmlTypesExtensionInterface
{
public:
    PythonQtShell_QQmlTypesExtensionInterface():QQmlTypesExtensionInterface(),_wrapper(NULL) {};

   ~PythonQtShell_QQmlTypesExtensionInterface();

virtual void registerTypes(const char*  uri);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQmlTypesExtensionInterface : public QQmlTypesExtensionInterface
{ public:
inline void py_q_registerTypes(const char*  uri) { this->registerTypes(uri); }
};

class PythonQtWrapper_QQmlTypesExtensionInterface : public QObject
{ Q_OBJECT
public:
public slots:
QQmlTypesExtensionInterface* new_QQmlTypesExtensionInterface();
void delete_QQmlTypesExtensionInterface(QQmlTypesExtensionInterface* obj) { delete obj; } 
   void registerTypes(QQmlTypesExtensionInterface* theWrappedObject, const char*  uri);
   void py_q_registerTypes(QQmlTypesExtensionInterface* theWrappedObject, const char*  uri){  (((PythonQtPublicPromoter_QQmlTypesExtensionInterface*)theWrappedObject)->py_q_registerTypes(uri));}
};


