#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qabstractmessagehandler.h>
#include <qabstracturiresolver.h>
#include <qabstractxmlnodemodel.h>
#include <qabstractxmlreceiver.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qiodevice.h>
#include <qmetaobject.h>
#include <qnetworkaccessmanager.h>
#include <qobject.h>
#include <qsimplexmlnodemodel.h>
#include <qsourcelocation.h>
#include <qtextcodec.h>
#include <qurl.h>
#include <qvector.h>
#include <qxmlformatter.h>
#include <qxmlname.h>
#include <qxmlnamepool.h>
#include <qxmlquery.h>
#include <qxmlresultitems.h>
#include <qxmlschema.h>
#include <qxmlschemavalidator.h>
#include <qxmlserializer.h>



class PythonQtShell_QAbstractMessageHandler : public QAbstractMessageHandler
{
public:
    PythonQtShell_QAbstractMessageHandler(QObject*  parent = nullptr):QAbstractMessageHandler(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractMessageHandler();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void handleMessage(QtMsgType  type, const QString&  description, const QUrl&  identifier, const QSourceLocation&  sourceLocation);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractMessageHandler : public QAbstractMessageHandler
{ public:
inline void promoted_handleMessage(QtMsgType  type, const QString&  description, const QUrl&  identifier, const QSourceLocation&  sourceLocation) { this->handleMessage(type, description, identifier, sourceLocation); }
inline void py_q_handleMessage(QtMsgType  type, const QString&  description, const QUrl&  identifier, const QSourceLocation&  sourceLocation) { this->handleMessage(type, description, identifier, sourceLocation); }
};

class PythonQtWrapper_QAbstractMessageHandler : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractMessageHandler* new_QAbstractMessageHandler(QObject*  parent = nullptr);
void delete_QAbstractMessageHandler(QAbstractMessageHandler* obj) { delete obj; } 
   void handleMessage(QAbstractMessageHandler* theWrappedObject, QtMsgType  type, const QString&  description, const QUrl&  identifier, const QSourceLocation&  sourceLocation);
   void py_q_handleMessage(QAbstractMessageHandler* theWrappedObject, QtMsgType  type, const QString&  description, const QUrl&  identifier, const QSourceLocation&  sourceLocation){  (((PythonQtPublicPromoter_QAbstractMessageHandler*)theWrappedObject)->py_q_handleMessage(type, description, identifier, sourceLocation));}
   void message(QAbstractMessageHandler* theWrappedObject, QtMsgType  type, const QString&  description, const QUrl&  identifier = QUrl(), const QSourceLocation&  sourceLocation = QSourceLocation());
};





class PythonQtShell_QAbstractUriResolver : public QAbstractUriResolver
{
public:
    PythonQtShell_QAbstractUriResolver(QObject*  parent = nullptr):QAbstractUriResolver(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractUriResolver();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QUrl  resolve(const QUrl&  relative, const QUrl&  baseURI) const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractUriResolver : public QAbstractUriResolver
{ public:
inline QUrl  py_q_resolve(const QUrl&  relative, const QUrl&  baseURI) const { return this->resolve(relative, baseURI); }
};

class PythonQtWrapper_QAbstractUriResolver : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractUriResolver* new_QAbstractUriResolver(QObject*  parent = nullptr);
void delete_QAbstractUriResolver(QAbstractUriResolver* obj) { delete obj; } 
   QUrl  resolve(QAbstractUriResolver* theWrappedObject, const QUrl&  relative, const QUrl&  baseURI) const;
   QUrl  py_q_resolve(QAbstractUriResolver* theWrappedObject, const QUrl&  relative, const QUrl&  baseURI) const{  return (((PythonQtPublicPromoter_QAbstractUriResolver*)theWrappedObject)->py_q_resolve(relative, baseURI));}
};





class PythonQtShell_QAbstractXmlNodeModel : public QAbstractXmlNodeModel
{
public:
    PythonQtShell_QAbstractXmlNodeModel():QAbstractXmlNodeModel(),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractXmlNodeModel();

virtual QVector<QXmlNodeModelIndex >  attributes(const QXmlNodeModelIndex&  element) const;
virtual QUrl  baseUri(const QXmlNodeModelIndex&  ni) const;
virtual QXmlNodeModelIndex::DocumentOrder  compareOrder(const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const;
virtual QUrl  documentUri(const QXmlNodeModelIndex&  ni) const;
virtual QXmlNodeModelIndex  elementById(const QXmlName&  NCName) const;
virtual bool  isDeepEqual(const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const;
virtual QXmlNodeModelIndex::NodeKind  kind(const QXmlNodeModelIndex&  ni) const;
virtual QXmlName  name(const QXmlNodeModelIndex&  ni) const;
virtual QVector<QXmlName >  namespaceBindings(const QXmlNodeModelIndex&  n) const;
virtual short  namespaceForPrefix(const QXmlNodeModelIndex&  ni, const short  prefix) const;
virtual QXmlNodeModelIndex  nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis  axis, const QXmlNodeModelIndex&  origin) const;
virtual QVector<QXmlNodeModelIndex >  nodesByIdref(const QXmlName&  NCName) const;
virtual QXmlNodeModelIndex  root(const QXmlNodeModelIndex&  n) const;
virtual QString  stringValue(const QXmlNodeModelIndex&  n) const;
virtual QVariant  typedValue(const QXmlNodeModelIndex&  n) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractXmlNodeModel : public QAbstractXmlNodeModel
{ public:
inline QVector<QXmlNodeModelIndex >  promoted_attributes(const QXmlNodeModelIndex&  element) const { return this->attributes(element); }
inline QXmlNodeModelIndex  promoted_createIndex(qint64  data) const { return this->createIndex(data); }
inline QXmlNodeModelIndex  promoted_createIndex(qint64  data, qint64  additionalData) const { return this->createIndex(data, additionalData); }
inline QXmlNodeModelIndex  promoted_createIndex(void*  pointer, qint64  additionalData = 0) const { return this->createIndex(pointer, additionalData); }
inline QXmlNodeModelIndex  promoted_nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis  axis, const QXmlNodeModelIndex&  origin) const { return this->nextFromSimpleAxis(axis, origin); }
inline QVector<QXmlNodeModelIndex >  py_q_attributes(const QXmlNodeModelIndex&  element) const { return this->attributes(element); }
inline QUrl  py_q_baseUri(const QXmlNodeModelIndex&  ni) const { return this->baseUri(ni); }
inline QXmlNodeModelIndex::DocumentOrder  py_q_compareOrder(const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const { return this->compareOrder(ni1, ni2); }
inline QUrl  py_q_documentUri(const QXmlNodeModelIndex&  ni) const { return this->documentUri(ni); }
inline QXmlNodeModelIndex  py_q_elementById(const QXmlName&  NCName) const { return this->elementById(NCName); }
inline bool  py_q_isDeepEqual(const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const { return QAbstractXmlNodeModel::isDeepEqual(ni1, ni2); }
inline QXmlNodeModelIndex::NodeKind  py_q_kind(const QXmlNodeModelIndex&  ni) const { return this->kind(ni); }
inline QXmlName  py_q_name(const QXmlNodeModelIndex&  ni) const { return this->name(ni); }
inline QVector<QXmlName >  py_q_namespaceBindings(const QXmlNodeModelIndex&  n) const { return this->namespaceBindings(n); }
inline short  py_q_namespaceForPrefix(const QXmlNodeModelIndex&  ni, const short  prefix) const { return QAbstractXmlNodeModel::namespaceForPrefix(ni, prefix); }
inline QXmlNodeModelIndex  py_q_nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis  axis, const QXmlNodeModelIndex&  origin) const { return this->nextFromSimpleAxis(axis, origin); }
inline QVector<QXmlNodeModelIndex >  py_q_nodesByIdref(const QXmlName&  NCName) const { return this->nodesByIdref(NCName); }
inline QXmlNodeModelIndex  py_q_root(const QXmlNodeModelIndex&  n) const { return this->root(n); }
inline QString  py_q_stringValue(const QXmlNodeModelIndex&  n) const { return this->stringValue(n); }
inline QVariant  py_q_typedValue(const QXmlNodeModelIndex&  n) const { return this->typedValue(n); }
};

class PythonQtWrapper_QAbstractXmlNodeModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(NodeCopySetting SimpleAxis )
enum NodeCopySetting{
  InheritNamespaces = QAbstractXmlNodeModel::InheritNamespaces,   PreserveNamespaces = QAbstractXmlNodeModel::PreserveNamespaces};
enum SimpleAxis{
  Parent = QAbstractXmlNodeModel::Parent,   FirstChild = QAbstractXmlNodeModel::FirstChild,   PreviousSibling = QAbstractXmlNodeModel::PreviousSibling,   NextSibling = QAbstractXmlNodeModel::NextSibling};
public slots:
QAbstractXmlNodeModel* new_QAbstractXmlNodeModel();
void delete_QAbstractXmlNodeModel(QAbstractXmlNodeModel* obj) { delete obj; } 
   QVector<QXmlNodeModelIndex >  attributes(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  element) const;
   QVector<QXmlNodeModelIndex >  py_q_attributes(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  element) const{  return (((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->py_q_attributes(element));}
   QUrl  baseUri(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const;
   QUrl  py_q_baseUri(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const{  return (((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->py_q_baseUri(ni));}
   QXmlNodeModelIndex::DocumentOrder  compareOrder(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const;
   QXmlNodeModelIndex::DocumentOrder  py_q_compareOrder(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const{  return (((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->py_q_compareOrder(ni1, ni2));}
   QXmlNodeModelIndex  createIndex(QAbstractXmlNodeModel* theWrappedObject, qint64  data) const;
   QXmlNodeModelIndex  createIndex(QAbstractXmlNodeModel* theWrappedObject, qint64  data, qint64  additionalData) const;
   QXmlNodeModelIndex  createIndex(QAbstractXmlNodeModel* theWrappedObject, void*  pointer, qint64  additionalData = 0) const;
   QUrl  documentUri(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const;
   QUrl  py_q_documentUri(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const{  return (((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->py_q_documentUri(ni));}
   QXmlNodeModelIndex  elementById(QAbstractXmlNodeModel* theWrappedObject, const QXmlName&  NCName) const;
   QXmlNodeModelIndex  py_q_elementById(QAbstractXmlNodeModel* theWrappedObject, const QXmlName&  NCName) const{  return (((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->py_q_elementById(NCName));}
   bool  isDeepEqual(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const;
   bool  py_q_isDeepEqual(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const{  return (((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->py_q_isDeepEqual(ni1, ni2));}
   QXmlNodeModelIndex::NodeKind  kind(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const;
   QXmlNodeModelIndex::NodeKind  py_q_kind(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const{  return (((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->py_q_kind(ni));}
   QXmlName  name(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const;
   QXmlName  py_q_name(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const{  return (((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->py_q_name(ni));}
   QVector<QXmlName >  namespaceBindings(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const;
   QVector<QXmlName >  py_q_namespaceBindings(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const{  return (((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->py_q_namespaceBindings(n));}
   short  namespaceForPrefix(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni, const short  prefix) const;
   short  py_q_namespaceForPrefix(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni, const short  prefix) const{  return (((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->py_q_namespaceForPrefix(ni, prefix));}
   QXmlNodeModelIndex  nextFromSimpleAxis(QAbstractXmlNodeModel* theWrappedObject, QAbstractXmlNodeModel::SimpleAxis  axis, const QXmlNodeModelIndex&  origin) const;
   QXmlNodeModelIndex  py_q_nextFromSimpleAxis(QAbstractXmlNodeModel* theWrappedObject, QAbstractXmlNodeModel::SimpleAxis  axis, const QXmlNodeModelIndex&  origin) const{  return (((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->py_q_nextFromSimpleAxis(axis, origin));}
   QVector<QXmlNodeModelIndex >  nodesByIdref(QAbstractXmlNodeModel* theWrappedObject, const QXmlName&  NCName) const;
   QVector<QXmlNodeModelIndex >  py_q_nodesByIdref(QAbstractXmlNodeModel* theWrappedObject, const QXmlName&  NCName) const{  return (((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->py_q_nodesByIdref(NCName));}
   QXmlNodeModelIndex  root(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const;
   QXmlNodeModelIndex  py_q_root(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const{  return (((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->py_q_root(n));}
   QSourceLocation  sourceLocation(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  index) const;
   QString  stringValue(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const;
   QString  py_q_stringValue(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const{  return (((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->py_q_stringValue(n));}
   QVariant  typedValue(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const;
   QVariant  py_q_typedValue(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const{  return (((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->py_q_typedValue(n));}
};





class PythonQtShell_QAbstractXmlReceiver : public QAbstractXmlReceiver
{
public:
    PythonQtShell_QAbstractXmlReceiver():QAbstractXmlReceiver(),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractXmlReceiver();

virtual void atomicValue(const QVariant&  value);
virtual void attribute(const QXmlName&  name, const QStringRef&  value);
virtual void characters(const QStringRef&  value);
virtual void comment(const QString&  value);
virtual void endDocument();
virtual void endElement();
virtual void endOfSequence();
virtual void namespaceBinding(const QXmlName&  name);
virtual void processingInstruction(const QXmlName&  target, const QString&  value);
virtual void startDocument();
virtual void startElement(const QXmlName&  name);
virtual void startOfSequence();
virtual void whitespaceOnly(const QStringRef&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractXmlReceiver : public QAbstractXmlReceiver
{ public:
inline void py_q_atomicValue(const QVariant&  value) { this->atomicValue(value); }
inline void py_q_attribute(const QXmlName&  name, const QStringRef&  value) { this->attribute(name, value); }
inline void py_q_characters(const QStringRef&  value) { this->characters(value); }
inline void py_q_comment(const QString&  value) { this->comment(value); }
inline void py_q_endDocument() { this->endDocument(); }
inline void py_q_endElement() { this->endElement(); }
inline void py_q_endOfSequence() { this->endOfSequence(); }
inline void py_q_namespaceBinding(const QXmlName&  name) { this->namespaceBinding(name); }
inline void py_q_processingInstruction(const QXmlName&  target, const QString&  value) { this->processingInstruction(target, value); }
inline void py_q_startDocument() { this->startDocument(); }
inline void py_q_startElement(const QXmlName&  name) { this->startElement(name); }
inline void py_q_startOfSequence() { this->startOfSequence(); }
inline void py_q_whitespaceOnly(const QStringRef&  value) { QAbstractXmlReceiver::whitespaceOnly(value); }
};

class PythonQtWrapper_QAbstractXmlReceiver : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractXmlReceiver* new_QAbstractXmlReceiver();
void delete_QAbstractXmlReceiver(QAbstractXmlReceiver* obj) { delete obj; } 
   void atomicValue(QAbstractXmlReceiver* theWrappedObject, const QVariant&  value);
   void py_q_atomicValue(QAbstractXmlReceiver* theWrappedObject, const QVariant&  value){  (((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->py_q_atomicValue(value));}
   void attribute(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  name, const QStringRef&  value);
   void py_q_attribute(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  name, const QStringRef&  value){  (((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->py_q_attribute(name, value));}
   void characters(QAbstractXmlReceiver* theWrappedObject, const QStringRef&  value);
   void py_q_characters(QAbstractXmlReceiver* theWrappedObject, const QStringRef&  value){  (((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->py_q_characters(value));}
   void comment(QAbstractXmlReceiver* theWrappedObject, const QString&  value);
   void py_q_comment(QAbstractXmlReceiver* theWrappedObject, const QString&  value){  (((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->py_q_comment(value));}
   void endDocument(QAbstractXmlReceiver* theWrappedObject);
   void py_q_endDocument(QAbstractXmlReceiver* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->py_q_endDocument());}
   void endElement(QAbstractXmlReceiver* theWrappedObject);
   void py_q_endElement(QAbstractXmlReceiver* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->py_q_endElement());}
   void endOfSequence(QAbstractXmlReceiver* theWrappedObject);
   void py_q_endOfSequence(QAbstractXmlReceiver* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->py_q_endOfSequence());}
   void namespaceBinding(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  name);
   void py_q_namespaceBinding(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  name){  (((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->py_q_namespaceBinding(name));}
   void processingInstruction(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  target, const QString&  value);
   void py_q_processingInstruction(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  target, const QString&  value){  (((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->py_q_processingInstruction(target, value));}
   void startDocument(QAbstractXmlReceiver* theWrappedObject);
   void py_q_startDocument(QAbstractXmlReceiver* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->py_q_startDocument());}
   void startElement(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  name);
   void py_q_startElement(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  name){  (((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->py_q_startElement(name));}
   void startOfSequence(QAbstractXmlReceiver* theWrappedObject);
   void py_q_startOfSequence(QAbstractXmlReceiver* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->py_q_startOfSequence());}
   void whitespaceOnly(QAbstractXmlReceiver* theWrappedObject, const QStringRef&  value);
   void py_q_whitespaceOnly(QAbstractXmlReceiver* theWrappedObject, const QStringRef&  value){  (((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->py_q_whitespaceOnly(value));}
};





class PythonQtWrapper_QPatternist : public QObject
{ Q_OBJECT
public:
public slots:
};





class PythonQtWrapper_QPatternistSDK : public QObject
{ Q_OBJECT
public:
public slots:
};





class PythonQtShell_QSimpleXmlNodeModel : public QSimpleXmlNodeModel
{
public:
    PythonQtShell_QSimpleXmlNodeModel(const QXmlNamePool&  namePool):QSimpleXmlNodeModel(namePool),_wrapper(NULL) {};

   ~PythonQtShell_QSimpleXmlNodeModel();

virtual QVector<QXmlNodeModelIndex >  attributes(const QXmlNodeModelIndex&  element) const;
virtual QUrl  baseUri(const QXmlNodeModelIndex&  node) const;
virtual QXmlNodeModelIndex::DocumentOrder  compareOrder(const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const;
virtual QUrl  documentUri(const QXmlNodeModelIndex&  ni) const;
virtual QXmlNodeModelIndex  elementById(const QXmlName&  id) const;
virtual bool  isDeepEqual(const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const;
virtual QXmlNodeModelIndex::NodeKind  kind(const QXmlNodeModelIndex&  ni) const;
virtual QXmlName  name(const QXmlNodeModelIndex&  ni) const;
virtual QVector<QXmlName >  namespaceBindings(const QXmlNodeModelIndex&  arg__1) const;
virtual short  namespaceForPrefix(const QXmlNodeModelIndex&  ni, const short  prefix) const;
virtual QXmlNodeModelIndex  nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis  axis, const QXmlNodeModelIndex&  origin) const;
virtual QVector<QXmlNodeModelIndex >  nodesByIdref(const QXmlName&  idref) const;
virtual QXmlNodeModelIndex  root(const QXmlNodeModelIndex&  n) const;
virtual QString  stringValue(const QXmlNodeModelIndex&  node) const;
virtual QVariant  typedValue(const QXmlNodeModelIndex&  n) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSimpleXmlNodeModel : public QSimpleXmlNodeModel
{ public:
inline QUrl  py_q_baseUri(const QXmlNodeModelIndex&  node) const { return QSimpleXmlNodeModel::baseUri(node); }
inline QXmlNodeModelIndex  py_q_elementById(const QXmlName&  id) const { return QSimpleXmlNodeModel::elementById(id); }
inline QVector<QXmlName >  py_q_namespaceBindings(const QXmlNodeModelIndex&  arg__1) const { return QSimpleXmlNodeModel::namespaceBindings(arg__1); }
inline QVector<QXmlNodeModelIndex >  py_q_nodesByIdref(const QXmlName&  idref) const { return QSimpleXmlNodeModel::nodesByIdref(idref); }
inline QString  py_q_stringValue(const QXmlNodeModelIndex&  node) const { return QSimpleXmlNodeModel::stringValue(node); }
};

class PythonQtWrapper_QSimpleXmlNodeModel : public QObject
{ Q_OBJECT
public:
public slots:
QSimpleXmlNodeModel* new_QSimpleXmlNodeModel(const QXmlNamePool&  namePool);
void delete_QSimpleXmlNodeModel(QSimpleXmlNodeModel* obj) { delete obj; } 
   QUrl  py_q_baseUri(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  node) const{  return (((PythonQtPublicPromoter_QSimpleXmlNodeModel*)theWrappedObject)->py_q_baseUri(node));}
   QXmlNodeModelIndex  py_q_elementById(QSimpleXmlNodeModel* theWrappedObject, const QXmlName&  id) const{  return (((PythonQtPublicPromoter_QSimpleXmlNodeModel*)theWrappedObject)->py_q_elementById(id));}
   QXmlNamePool*  namePool(QSimpleXmlNodeModel* theWrappedObject) const;
   QVector<QXmlName >  py_q_namespaceBindings(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  arg__1) const{  return (((PythonQtPublicPromoter_QSimpleXmlNodeModel*)theWrappedObject)->py_q_namespaceBindings(arg__1));}
   QVector<QXmlNodeModelIndex >  py_q_nodesByIdref(QSimpleXmlNodeModel* theWrappedObject, const QXmlName&  idref) const{  return (((PythonQtPublicPromoter_QSimpleXmlNodeModel*)theWrappedObject)->py_q_nodesByIdref(idref));}
   QString  py_q_stringValue(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  node) const{  return (((PythonQtPublicPromoter_QSimpleXmlNodeModel*)theWrappedObject)->py_q_stringValue(node));}
};





class PythonQtWrapper_QSourceLocation : public QObject
{ Q_OBJECT
public:
public slots:
QSourceLocation* new_QSourceLocation();
QSourceLocation* new_QSourceLocation(const QSourceLocation&  other);
QSourceLocation* new_QSourceLocation(const QUrl&  uri, int  line = -1, int  column = -1);
void delete_QSourceLocation(QSourceLocation* obj) { delete obj; } 
   qint64  column(QSourceLocation* theWrappedObject) const;
   bool  isNull(QSourceLocation* theWrappedObject) const;
   qint64  line(QSourceLocation* theWrappedObject) const;
   bool  __ne__(QSourceLocation* theWrappedObject, const QSourceLocation&  other) const;
   bool  __eq__(QSourceLocation* theWrappedObject, const QSourceLocation&  other) const;
   void setColumn(QSourceLocation* theWrappedObject, qint64  newColumn);
   void setLine(QSourceLocation* theWrappedObject, qint64  newLine);
   void setUri(QSourceLocation* theWrappedObject, const QUrl&  newUri);
   QUrl  uri(QSourceLocation* theWrappedObject) const;
    QString py_toString(QSourceLocation*);
    bool __nonzero__(QSourceLocation* obj) { return !obj->isNull(); }
};





class PythonQtShell_QXmlFormatter : public QXmlFormatter
{
public:
    PythonQtShell_QXmlFormatter(const QXmlQuery&  query, QIODevice*  outputDevice):QXmlFormatter(query, outputDevice),_wrapper(NULL) {};

   ~PythonQtShell_QXmlFormatter();

virtual void atomicValue(const QVariant&  value);
virtual void attribute(const QXmlName&  name, const QStringRef&  value);
virtual void characters(const QStringRef&  value);
virtual void comment(const QString&  value);
virtual void endDocument();
virtual void endElement();
virtual void endOfSequence();
virtual void namespaceBinding(const QXmlName&  nb);
virtual void processingInstruction(const QXmlName&  name, const QString&  value);
virtual void startDocument();
virtual void startElement(const QXmlName&  name);
virtual void startOfSequence();
virtual void whitespaceOnly(const QStringRef&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlFormatter : public QXmlFormatter
{ public:
inline void py_q_atomicValue(const QVariant&  value) { QXmlFormatter::atomicValue(value); }
inline void py_q_attribute(const QXmlName&  name, const QStringRef&  value) { QXmlFormatter::attribute(name, value); }
inline void py_q_characters(const QStringRef&  value) { QXmlFormatter::characters(value); }
inline void py_q_comment(const QString&  value) { QXmlFormatter::comment(value); }
inline void py_q_endDocument() { QXmlFormatter::endDocument(); }
inline void py_q_endElement() { QXmlFormatter::endElement(); }
inline void py_q_endOfSequence() { QXmlFormatter::endOfSequence(); }
inline void py_q_processingInstruction(const QXmlName&  name, const QString&  value) { QXmlFormatter::processingInstruction(name, value); }
inline void py_q_startDocument() { QXmlFormatter::startDocument(); }
inline void py_q_startElement(const QXmlName&  name) { QXmlFormatter::startElement(name); }
inline void py_q_startOfSequence() { QXmlFormatter::startOfSequence(); }
};

class PythonQtWrapper_QXmlFormatter : public QObject
{ Q_OBJECT
public:
public slots:
QXmlFormatter* new_QXmlFormatter(const QXmlQuery&  query, QIODevice*  outputDevice);
void delete_QXmlFormatter(QXmlFormatter* obj) { delete obj; } 
   void py_q_atomicValue(QXmlFormatter* theWrappedObject, const QVariant&  value){  (((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->py_q_atomicValue(value));}
   void py_q_attribute(QXmlFormatter* theWrappedObject, const QXmlName&  name, const QStringRef&  value){  (((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->py_q_attribute(name, value));}
   void py_q_characters(QXmlFormatter* theWrappedObject, const QStringRef&  value){  (((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->py_q_characters(value));}
   void py_q_comment(QXmlFormatter* theWrappedObject, const QString&  value){  (((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->py_q_comment(value));}
   void py_q_endDocument(QXmlFormatter* theWrappedObject){  (((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->py_q_endDocument());}
   void py_q_endElement(QXmlFormatter* theWrappedObject){  (((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->py_q_endElement());}
   void py_q_endOfSequence(QXmlFormatter* theWrappedObject){  (((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->py_q_endOfSequence());}
   int  indentationDepth(QXmlFormatter* theWrappedObject) const;
   void py_q_processingInstruction(QXmlFormatter* theWrappedObject, const QXmlName&  name, const QString&  value){  (((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->py_q_processingInstruction(name, value));}
   void setIndentationDepth(QXmlFormatter* theWrappedObject, int  depth);
   void py_q_startDocument(QXmlFormatter* theWrappedObject){  (((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->py_q_startDocument());}
   void py_q_startElement(QXmlFormatter* theWrappedObject, const QXmlName&  name){  (((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->py_q_startElement(name));}
   void py_q_startOfSequence(QXmlFormatter* theWrappedObject){  (((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->py_q_startOfSequence());}
};





class PythonQtWrapper_QXmlItem : public QObject
{ Q_OBJECT
public:
public slots:
QXmlItem* new_QXmlItem();
QXmlItem* new_QXmlItem(const QVariant&  atomicValue);
QXmlItem* new_QXmlItem(const QXmlItem&  other);
QXmlItem* new_QXmlItem(const QXmlNodeModelIndex&  node);
void delete_QXmlItem(QXmlItem* obj) { delete obj; } 
   bool  isAtomicValue(QXmlItem* theWrappedObject) const;
   bool  isNode(QXmlItem* theWrappedObject) const;
   bool  isNull(QXmlItem* theWrappedObject) const;
   QVariant  toAtomicValue(QXmlItem* theWrappedObject) const;
   QXmlNodeModelIndex  toNodeModelIndex(QXmlItem* theWrappedObject) const;
    bool __nonzero__(QXmlItem* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QXmlName : public QObject
{ Q_OBJECT
public:
public slots:
QXmlName* new_QXmlName();
QXmlName* new_QXmlName(QXmlNamePool&  namePool, const QString&  localName, const QString&  namespaceURI = QString(), const QString&  prefix = QString());
QXmlName* new_QXmlName(const QXmlName&  other);
void delete_QXmlName(QXmlName* obj) { delete obj; } 
   QXmlName  static_QXmlName_fromClarkName(const QString&  clarkName, const QXmlNamePool&  namePool);
   bool  static_QXmlName_isNCName(const QString&  candidate);
   bool  isNull(QXmlName* theWrappedObject) const;
   QString  localName(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   QString  namespaceUri(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   bool  __ne__(QXmlName* theWrappedObject, const QXmlName&  other) const;
   bool  __eq__(QXmlName* theWrappedObject, const QXmlName&  other) const;
   QString  prefix(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   QString  toClarkName(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
    bool __nonzero__(QXmlName* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QXmlNamePool : public QObject
{ Q_OBJECT
public:
public slots:
QXmlNamePool* new_QXmlNamePool();
QXmlNamePool* new_QXmlNamePool(const QXmlNamePool&  other);
void delete_QXmlNamePool(QXmlNamePool* obj) { delete obj; } 
};





class PythonQtWrapper_QXmlNodeModelIndex : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DocumentOrder NodeKind )
enum DocumentOrder{
  Precedes = QXmlNodeModelIndex::Precedes,   Is = QXmlNodeModelIndex::Is,   Follows = QXmlNodeModelIndex::Follows};
enum NodeKind{
  Attribute = QXmlNodeModelIndex::Attribute,   Comment = QXmlNodeModelIndex::Comment,   Document = QXmlNodeModelIndex::Document,   Element = QXmlNodeModelIndex::Element,   Namespace = QXmlNodeModelIndex::Namespace,   ProcessingInstruction = QXmlNodeModelIndex::ProcessingInstruction,   Text = QXmlNodeModelIndex::Text};
public slots:
QXmlNodeModelIndex* new_QXmlNodeModelIndex();
QXmlNodeModelIndex* new_QXmlNodeModelIndex(const QXmlNodeModelIndex&  other);
void delete_QXmlNodeModelIndex(QXmlNodeModelIndex* obj) { delete obj; } 
   qint64  additionalData(QXmlNodeModelIndex* theWrappedObject) const;
   qint64  data(QXmlNodeModelIndex* theWrappedObject) const;
   bool  isNull(QXmlNodeModelIndex* theWrappedObject) const;
   const QAbstractXmlNodeModel*  model(QXmlNodeModelIndex* theWrappedObject) const;
   bool  __ne__(QXmlNodeModelIndex* theWrappedObject, const QXmlNodeModelIndex&  other) const;
   bool  __eq__(QXmlNodeModelIndex* theWrappedObject, const QXmlNodeModelIndex&  other) const;
    bool __nonzero__(QXmlNodeModelIndex* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QXmlQuery : public QObject
{ Q_OBJECT
public:
Q_ENUMS(QueryLanguage )
enum QueryLanguage{
  XQuery10 = QXmlQuery::XQuery10,   XSLT20 = QXmlQuery::XSLT20,   XmlSchema11IdentityConstraintSelector = QXmlQuery::XmlSchema11IdentityConstraintSelector,   XmlSchema11IdentityConstraintField = QXmlQuery::XmlSchema11IdentityConstraintField,   XPath20 = QXmlQuery::XPath20};
public slots:
QXmlQuery* new_QXmlQuery();
QXmlQuery* new_QXmlQuery(QXmlQuery::QueryLanguage  queryLanguage, const QXmlNamePool&  np = QXmlNamePool());
QXmlQuery* new_QXmlQuery(const QXmlNamePool&  np);
QXmlQuery* new_QXmlQuery(const QXmlQuery&  other);
void delete_QXmlQuery(QXmlQuery* obj) { delete obj; } 
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, QIODevice*  arg__2);
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, const QXmlItem&  value);
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, const QXmlQuery&  query);
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, QIODevice*  arg__2);
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, const QXmlItem&  value);
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, const QXmlQuery&  query);
   bool  evaluateTo(QXmlQuery* theWrappedObject, QIODevice*  target) const;
   bool  evaluateTo(QXmlQuery* theWrappedObject, QString*  output) const;
   void evaluateTo(QXmlQuery* theWrappedObject, QXmlResultItems*  result) const;
   QXmlName  initialTemplateName(QXmlQuery* theWrappedObject) const;
   bool  isValid(QXmlQuery* theWrappedObject) const;
   QAbstractMessageHandler*  messageHandler(QXmlQuery* theWrappedObject) const;
   QXmlNamePool  namePool(QXmlQuery* theWrappedObject) const;
   QNetworkAccessManager*  networkAccessManager(QXmlQuery* theWrappedObject) const;
   QXmlQuery*  operator_assign(QXmlQuery* theWrappedObject, const QXmlQuery&  other);
   QXmlQuery::QueryLanguage  queryLanguage(QXmlQuery* theWrappedObject) const;
   bool  setFocus(QXmlQuery* theWrappedObject, QIODevice*  document);
   bool  setFocus(QXmlQuery* theWrappedObject, const QString&  focus);
   bool  setFocus(QXmlQuery* theWrappedObject, const QUrl&  documentURI);
   void setFocus(QXmlQuery* theWrappedObject, const QXmlItem&  item);
   void setInitialTemplateName(QXmlQuery* theWrappedObject, const QString&  name);
   void setInitialTemplateName(QXmlQuery* theWrappedObject, const QXmlName&  name);
   void setMessageHandler(QXmlQuery* theWrappedObject, QAbstractMessageHandler*  messageHandler);
   void setNetworkAccessManager(QXmlQuery* theWrappedObject, QNetworkAccessManager*  newManager);
   void setQuery(QXmlQuery* theWrappedObject, QIODevice*  sourceCode, const QUrl&  documentURI = QUrl());
   void setQuery(QXmlQuery* theWrappedObject, const QString&  sourceCode, const QUrl&  documentURI = QUrl());
   void setQuery(QXmlQuery* theWrappedObject, const QUrl&  queryURI, const QUrl&  baseURI = QUrl());
   void setUriResolver(QXmlQuery* theWrappedObject, const QAbstractUriResolver*  resolver);
   const QAbstractUriResolver*  uriResolver(QXmlQuery* theWrappedObject) const;
    bool __nonzero__(QXmlQuery* obj) { return obj->isValid(); }
};





class PythonQtShell_QXmlResultItems : public QXmlResultItems
{
public:
    PythonQtShell_QXmlResultItems():QXmlResultItems(),_wrapper(NULL) {};

   ~PythonQtShell_QXmlResultItems();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlResultItems : public QObject
{ Q_OBJECT
public:
public slots:
QXmlResultItems* new_QXmlResultItems();
void delete_QXmlResultItems(QXmlResultItems* obj) { delete obj; } 
   QXmlItem  current(QXmlResultItems* theWrappedObject) const;
   bool  hasError(QXmlResultItems* theWrappedObject) const;
   QXmlItem  next(QXmlResultItems* theWrappedObject);
};





class PythonQtWrapper_QXmlSchema : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSchema* new_QXmlSchema();
QXmlSchema* new_QXmlSchema(const QXmlSchema&  other);
void delete_QXmlSchema(QXmlSchema* obj) { delete obj; } 
   QUrl  documentUri(QXmlSchema* theWrappedObject) const;
   bool  isValid(QXmlSchema* theWrappedObject) const;
   bool  load(QXmlSchema* theWrappedObject, QIODevice*  source, const QUrl&  documentUri = QUrl());
   bool  load(QXmlSchema* theWrappedObject, const QByteArray&  data, const QUrl&  documentUri = QUrl());
   bool  load(QXmlSchema* theWrappedObject, const QUrl&  source);
   QAbstractMessageHandler*  messageHandler(QXmlSchema* theWrappedObject) const;
   QXmlNamePool  namePool(QXmlSchema* theWrappedObject) const;
   QNetworkAccessManager*  networkAccessManager(QXmlSchema* theWrappedObject) const;
   QXmlSchema*  operator_assign(QXmlSchema* theWrappedObject, const QXmlSchema&  other);
   void setMessageHandler(QXmlSchema* theWrappedObject, QAbstractMessageHandler*  handler);
   void setNetworkAccessManager(QXmlSchema* theWrappedObject, QNetworkAccessManager*  networkmanager);
   void setUriResolver(QXmlSchema* theWrappedObject, const QAbstractUriResolver*  resolver);
   const QAbstractUriResolver*  uriResolver(QXmlSchema* theWrappedObject) const;
    bool __nonzero__(QXmlSchema* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QXmlSchemaValidator : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSchemaValidator* new_QXmlSchemaValidator();
QXmlSchemaValidator* new_QXmlSchemaValidator(const QXmlSchema&  schema);
void delete_QXmlSchemaValidator(QXmlSchemaValidator* obj) { delete obj; } 
   QAbstractMessageHandler*  messageHandler(QXmlSchemaValidator* theWrappedObject) const;
   QXmlNamePool  namePool(QXmlSchemaValidator* theWrappedObject) const;
   QNetworkAccessManager*  networkAccessManager(QXmlSchemaValidator* theWrappedObject) const;
   void setMessageHandler(QXmlSchemaValidator* theWrappedObject, QAbstractMessageHandler*  handler);
   void setNetworkAccessManager(QXmlSchemaValidator* theWrappedObject, QNetworkAccessManager*  networkmanager);
   void setSchema(QXmlSchemaValidator* theWrappedObject, const QXmlSchema&  schema);
   void setUriResolver(QXmlSchemaValidator* theWrappedObject, const QAbstractUriResolver*  resolver);
   const QAbstractUriResolver*  uriResolver(QXmlSchemaValidator* theWrappedObject) const;
   bool  validate(QXmlSchemaValidator* theWrappedObject, QIODevice*  source, const QUrl&  documentUri = QUrl()) const;
   bool  validate(QXmlSchemaValidator* theWrappedObject, const QByteArray&  data, const QUrl&  documentUri = QUrl()) const;
   bool  validate(QXmlSchemaValidator* theWrappedObject, const QUrl&  source) const;
};





class PythonQtShell_QXmlSerializer : public QXmlSerializer
{
public:
    PythonQtShell_QXmlSerializer(const QXmlQuery&  query, QIODevice*  outputDevice):QXmlSerializer(query, outputDevice),_wrapper(NULL) {};

   ~PythonQtShell_QXmlSerializer();

virtual void atomicValue(const QVariant&  value);
virtual void attribute(const QXmlName&  name, const QStringRef&  value);
virtual void characters(const QStringRef&  value);
virtual void comment(const QString&  value);
virtual void endDocument();
virtual void endElement();
virtual void endOfSequence();
virtual void namespaceBinding(const QXmlName&  nb);
virtual void processingInstruction(const QXmlName&  name, const QString&  value);
virtual void startDocument();
virtual void startElement(const QXmlName&  name);
virtual void startOfSequence();
virtual void whitespaceOnly(const QStringRef&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlSerializer : public QXmlSerializer
{ public:
inline void py_q_atomicValue(const QVariant&  value) { QXmlSerializer::atomicValue(value); }
inline void py_q_attribute(const QXmlName&  name, const QStringRef&  value) { QXmlSerializer::attribute(name, value); }
inline void py_q_characters(const QStringRef&  value) { QXmlSerializer::characters(value); }
inline void py_q_comment(const QString&  value) { QXmlSerializer::comment(value); }
inline void py_q_endDocument() { QXmlSerializer::endDocument(); }
inline void py_q_endElement() { QXmlSerializer::endElement(); }
inline void py_q_endOfSequence() { QXmlSerializer::endOfSequence(); }
inline void py_q_namespaceBinding(const QXmlName&  nb) { QXmlSerializer::namespaceBinding(nb); }
inline void py_q_processingInstruction(const QXmlName&  name, const QString&  value) { QXmlSerializer::processingInstruction(name, value); }
inline void py_q_startDocument() { QXmlSerializer::startDocument(); }
inline void py_q_startElement(const QXmlName&  name) { QXmlSerializer::startElement(name); }
inline void py_q_startOfSequence() { QXmlSerializer::startOfSequence(); }
};

class PythonQtWrapper_QXmlSerializer : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSerializer* new_QXmlSerializer(const QXmlQuery&  query, QIODevice*  outputDevice);
void delete_QXmlSerializer(QXmlSerializer* obj) { delete obj; } 
   void py_q_atomicValue(QXmlSerializer* theWrappedObject, const QVariant&  value){  (((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->py_q_atomicValue(value));}
   void py_q_attribute(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QStringRef&  value){  (((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->py_q_attribute(name, value));}
   void py_q_characters(QXmlSerializer* theWrappedObject, const QStringRef&  value){  (((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->py_q_characters(value));}
   const QTextCodec*  codec(QXmlSerializer* theWrappedObject) const;
   void py_q_comment(QXmlSerializer* theWrappedObject, const QString&  value){  (((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->py_q_comment(value));}
   void py_q_endDocument(QXmlSerializer* theWrappedObject){  (((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->py_q_endDocument());}
   void py_q_endElement(QXmlSerializer* theWrappedObject){  (((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->py_q_endElement());}
   void py_q_endOfSequence(QXmlSerializer* theWrappedObject){  (((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->py_q_endOfSequence());}
   void py_q_namespaceBinding(QXmlSerializer* theWrappedObject, const QXmlName&  nb){  (((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->py_q_namespaceBinding(nb));}
   QIODevice*  outputDevice(QXmlSerializer* theWrappedObject) const;
   void py_q_processingInstruction(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QString&  value){  (((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->py_q_processingInstruction(name, value));}
   void setCodec(QXmlSerializer* theWrappedObject, const QTextCodec*  codec);
   void py_q_startDocument(QXmlSerializer* theWrappedObject){  (((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->py_q_startDocument());}
   void py_q_startElement(QXmlSerializer* theWrappedObject, const QXmlName&  name){  (((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->py_q_startElement(name));}
   void py_q_startOfSequence(QXmlSerializer* theWrappedObject){  (((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->py_q_startOfSequence());}
};


