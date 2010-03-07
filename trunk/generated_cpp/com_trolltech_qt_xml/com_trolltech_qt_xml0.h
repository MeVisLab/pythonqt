#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qbytearray.h>
#include <qdom.h>
#include <qiodevice.h>
#include <qtextstream.h>
#include <qxml.h>



class PythonQtWrapper_QDomAttr : public QObject
{ Q_OBJECT
public:
public slots:
QDomAttr* new_QDomAttr();
QDomAttr* new_QDomAttr(const QDomAttr&  x);
void delete_QDomAttr(QDomAttr* obj) { delete obj; } 
   QString  name(QDomAttr* theWrappedObject) const;
   bool  specified(QDomAttr* theWrappedObject) const;
   QDomElement  ownerElement(QDomAttr* theWrappedObject) const;
   QString  value(QDomAttr* theWrappedObject) const;
   void setValue(QDomAttr* theWrappedObject, const QString&  arg__1);
};





class PythonQtWrapper_QDomCDATASection : public QObject
{ Q_OBJECT
public:
public slots:
QDomCDATASection* new_QDomCDATASection();
QDomCDATASection* new_QDomCDATASection(const QDomCDATASection&  x);
void delete_QDomCDATASection(QDomCDATASection* obj) { delete obj; } 
};





class PythonQtWrapper_QDomCharacterData : public QObject
{ Q_OBJECT
public:
public slots:
QDomCharacterData* new_QDomCharacterData();
QDomCharacterData* new_QDomCharacterData(const QDomCharacterData&  x);
void delete_QDomCharacterData(QDomCharacterData* obj) { delete obj; } 
   void replaceData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count, const QString&  arg);
   void setData(QDomCharacterData* theWrappedObject, const QString&  arg__1);
   void appendData(QDomCharacterData* theWrappedObject, const QString&  arg);
   uint  length(QDomCharacterData* theWrappedObject) const;
   void insertData(QDomCharacterData* theWrappedObject, unsigned long  offset, const QString&  arg);
   QString  data(QDomCharacterData* theWrappedObject) const;
   QString  substringData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count);
   void deleteData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count);
};





class PythonQtWrapper_QDomComment : public QObject
{ Q_OBJECT
public:
public slots:
QDomComment* new_QDomComment();
QDomComment* new_QDomComment(const QDomComment&  x);
void delete_QDomComment(QDomComment* obj) { delete obj; } 
};





class PythonQtWrapper_QDomDocument : public QObject
{ Q_OBJECT
public:
public slots:
QDomDocument* new_QDomDocument();
QDomDocument* new_QDomDocument(const QDomDocument&  x);
QDomDocument* new_QDomDocument(const QDomDocumentType&  doctype);
QDomDocument* new_QDomDocument(const QString&  name);
void delete_QDomDocument(QDomDocument* obj) { delete obj; } 
   QByteArray  toByteArray(QDomDocument* theWrappedObject, int  arg__1 = 1) const;
   QString  toString(QDomDocument* theWrappedObject, int  arg__1 = 1) const;
   QDomElement  documentElement(QDomDocument* theWrappedObject) const;
   QDomEntityReference  createEntityReference(QDomDocument* theWrappedObject, const QString&  name);
   QDomElement  createElement(QDomDocument* theWrappedObject, const QString&  tagName);
   QDomText  createTextNode(QDomDocument* theWrappedObject, const QString&  data);
   bool  setContent(QDomDocument* theWrappedObject, const QByteArray&  text, bool  namespaceProcessing, QString*  errorMsg = 0, int*  errorLine = 0, int*  errorColumn = 0);
   QDomElement  elementById(QDomDocument* theWrappedObject, const QString&  elementId);
   QDomNodeList  elementsByTagName(QDomDocument* theWrappedObject, const QString&  tagname) const;
   QDomAttr  createAttributeNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  qName);
   QDomAttr  createAttribute(QDomDocument* theWrappedObject, const QString&  name);
   QDomNodeList  elementsByTagNameNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  localName);
   QDomElement  createElementNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  qName);
   QDomDocumentFragment  createDocumentFragment(QDomDocument* theWrappedObject);
   QDomProcessingInstruction  createProcessingInstruction(QDomDocument* theWrappedObject, const QString&  target, const QString&  data);
   bool  setContent(QDomDocument* theWrappedObject, QIODevice*  dev, QString*  errorMsg = 0, int*  errorLine = 0, int*  errorColumn = 0);
   QDomNode  importNode(QDomDocument* theWrappedObject, const QDomNode&  importedNode, bool  deep);
   bool  setContent(QDomDocument* theWrappedObject, QXmlInputSource*  source, QXmlReader*  reader, QString*  errorMsg = 0, int*  errorLine = 0, int*  errorColumn = 0);
   bool  setContent(QDomDocument* theWrappedObject, const QString&  text, QString*  errorMsg = 0, int*  errorLine = 0, int*  errorColumn = 0);
   bool  setContent(QDomDocument* theWrappedObject, const QByteArray&  text, QString*  errorMsg = 0, int*  errorLine = 0, int*  errorColumn = 0);
   bool  setContent(QDomDocument* theWrappedObject, QXmlInputSource*  source, bool  namespaceProcessing, QString*  errorMsg = 0, int*  errorLine = 0, int*  errorColumn = 0);
   bool  setContent(QDomDocument* theWrappedObject, QIODevice*  dev, bool  namespaceProcessing, QString*  errorMsg = 0, int*  errorLine = 0, int*  errorColumn = 0);
   bool  setContent(QDomDocument* theWrappedObject, const QString&  text, bool  namespaceProcessing, QString*  errorMsg = 0, int*  errorLine = 0, int*  errorColumn = 0);
   QDomCDATASection  createCDATASection(QDomDocument* theWrappedObject, const QString&  data);
   QDomDocumentType  doctype(QDomDocument* theWrappedObject) const;
   QDomComment  createComment(QDomDocument* theWrappedObject, const QString&  data);
   QDomImplementation  implementation(QDomDocument* theWrappedObject) const;
};





class PythonQtWrapper_QDomDocumentFragment : public QObject
{ Q_OBJECT
public:
public slots:
QDomDocumentFragment* new_QDomDocumentFragment();
QDomDocumentFragment* new_QDomDocumentFragment(const QDomDocumentFragment&  x);
void delete_QDomDocumentFragment(QDomDocumentFragment* obj) { delete obj; } 
};





class PythonQtWrapper_QDomDocumentType : public QObject
{ Q_OBJECT
public:
public slots:
QDomDocumentType* new_QDomDocumentType();
QDomDocumentType* new_QDomDocumentType(const QDomDocumentType&  x);
void delete_QDomDocumentType(QDomDocumentType* obj) { delete obj; } 
   QString  publicId(QDomDocumentType* theWrappedObject) const;
   QDomNamedNodeMap  entities(QDomDocumentType* theWrappedObject) const;
   QDomNamedNodeMap  notations(QDomDocumentType* theWrappedObject) const;
   QString  internalSubset(QDomDocumentType* theWrappedObject) const;
   QString  name(QDomDocumentType* theWrappedObject) const;
   QString  systemId(QDomDocumentType* theWrappedObject) const;
};





class PythonQtWrapper_QDomElement : public QObject
{ Q_OBJECT
public:
public slots:
QDomElement* new_QDomElement();
QDomElement* new_QDomElement(const QDomElement&  x);
void delete_QDomElement(QDomElement* obj) { delete obj; } 
   QDomNamedNodeMap  attributes(QDomElement* theWrappedObject) const;
   QDomAttr  removeAttributeNode(QDomElement* theWrappedObject, const QDomAttr&  oldAttr);
   QDomAttr  attributeNode(QDomElement* theWrappedObject, const QString&  name);
   bool  hasAttribute(QDomElement* theWrappedObject, const QString&  name) const;
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, double  value);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, const QString&  value);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, float  value);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, qulonglong  value);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, int  value);
   QString  tagName(QDomElement* theWrappedObject) const;
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, qlonglong  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, double  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, qulonglong  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, qlonglong  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, const QString&  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, int  value);
   QString  text(QDomElement* theWrappedObject) const;
   QDomNodeList  elementsByTagName(QDomElement* theWrappedObject, const QString&  tagname) const;
   bool  hasAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName) const;
   QDomAttr  setAttributeNodeNS(QDomElement* theWrappedObject, const QDomAttr&  newAttr);
   QDomNodeList  elementsByTagNameNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName) const;
   void setTagName(QDomElement* theWrappedObject, const QString&  name);
   QDomAttr  attributeNodeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName);
   QString  attribute(QDomElement* theWrappedObject, const QString&  name, const QString&  defValue = QString()) const;
   QDomAttr  setAttributeNode(QDomElement* theWrappedObject, const QDomAttr&  newAttr);
   QString  attributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  localName, const QString&  defValue = QString()) const;
   void removeAttribute(QDomElement* theWrappedObject, const QString&  name);
   void removeAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName);
};





class PythonQtWrapper_QDomEntity : public QObject
{ Q_OBJECT
public:
public slots:
QDomEntity* new_QDomEntity();
QDomEntity* new_QDomEntity(const QDomEntity&  x);
void delete_QDomEntity(QDomEntity* obj) { delete obj; } 
   QString  publicId(QDomEntity* theWrappedObject) const;
   QString  notationName(QDomEntity* theWrappedObject) const;
   QString  systemId(QDomEntity* theWrappedObject) const;
};





class PythonQtWrapper_QDomEntityReference : public QObject
{ Q_OBJECT
public:
public slots:
QDomEntityReference* new_QDomEntityReference();
QDomEntityReference* new_QDomEntityReference(const QDomEntityReference&  x);
void delete_QDomEntityReference(QDomEntityReference* obj) { delete obj; } 
};





class PythonQtWrapper_QDomImplementation : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InvalidDataPolicy )
enum InvalidDataPolicy{
  AcceptInvalidChars = QDomImplementation::AcceptInvalidChars,   DropInvalidChars = QDomImplementation::DropInvalidChars,   ReturnNullNode = QDomImplementation::ReturnNullNode};
public slots:
QDomImplementation* new_QDomImplementation();
QDomImplementation* new_QDomImplementation(const QDomImplementation&  arg__1);
void delete_QDomImplementation(QDomImplementation* obj) { delete obj; } 
   QDomDocumentType  createDocumentType(QDomImplementation* theWrappedObject, const QString&  qName, const QString&  publicId, const QString&  systemId);
   void static_QDomImplementation_setInvalidDataPolicy(QDomImplementation::InvalidDataPolicy  policy);
   bool  operator_equal(QDomImplementation* theWrappedObject, const QDomImplementation&  arg__1) const;
   bool  hasFeature(QDomImplementation* theWrappedObject, const QString&  feature, const QString&  version) const;
   QDomImplementation::InvalidDataPolicy  static_QDomImplementation_invalidDataPolicy();
   QDomDocument  createDocument(QDomImplementation* theWrappedObject, const QString&  nsURI, const QString&  qName, const QDomDocumentType&  doctype);
   bool  isNull(QDomImplementation* theWrappedObject);
};





class PythonQtWrapper_QDomNamedNodeMap : public QObject
{ Q_OBJECT
public:
public slots:
QDomNamedNodeMap* new_QDomNamedNodeMap();
QDomNamedNodeMap* new_QDomNamedNodeMap(const QDomNamedNodeMap&  arg__1);
void delete_QDomNamedNodeMap(QDomNamedNodeMap* obj) { delete obj; } 
   QDomNode  item(QDomNamedNodeMap* theWrappedObject, int  index) const;
   QDomNode  setNamedItemNS(QDomNamedNodeMap* theWrappedObject, const QDomNode&  newNode);
   QDomNode  removeNamedItemNS(QDomNamedNodeMap* theWrappedObject, const QString&  nsURI, const QString&  localName);
   int  count(QDomNamedNodeMap* theWrappedObject) const;
   QDomNode  removeNamedItem(QDomNamedNodeMap* theWrappedObject, const QString&  name);
   bool  operator_equal(QDomNamedNodeMap* theWrappedObject, const QDomNamedNodeMap&  arg__1) const;
   QDomNode  namedItemNS(QDomNamedNodeMap* theWrappedObject, const QString&  nsURI, const QString&  localName) const;
   QDomNode  namedItem(QDomNamedNodeMap* theWrappedObject, const QString&  name) const;
   bool  contains(QDomNamedNodeMap* theWrappedObject, const QString&  name) const;
   QDomNode  setNamedItem(QDomNamedNodeMap* theWrappedObject, const QDomNode&  newNode);
   int  size(QDomNamedNodeMap* theWrappedObject) const;
   uint  length(QDomNamedNodeMap* theWrappedObject) const;
   bool  isEmpty(QDomNamedNodeMap* theWrappedObject) const;
};





class PythonQtWrapper_QDomNode : public QObject
{ Q_OBJECT
public:
Q_ENUMS(NodeType EncodingPolicy )
enum NodeType{
  ElementNode = QDomNode::ElementNode,   AttributeNode = QDomNode::AttributeNode,   TextNode = QDomNode::TextNode,   CDATASectionNode = QDomNode::CDATASectionNode,   EntityReferenceNode = QDomNode::EntityReferenceNode,   EntityNode = QDomNode::EntityNode,   ProcessingInstructionNode = QDomNode::ProcessingInstructionNode,   CommentNode = QDomNode::CommentNode,   DocumentNode = QDomNode::DocumentNode,   DocumentTypeNode = QDomNode::DocumentTypeNode,   DocumentFragmentNode = QDomNode::DocumentFragmentNode,   NotationNode = QDomNode::NotationNode,   BaseNode = QDomNode::BaseNode,   CharacterDataNode = QDomNode::CharacterDataNode};
enum EncodingPolicy{
  EncodingFromDocument = QDomNode::EncodingFromDocument,   EncodingFromTextStream = QDomNode::EncodingFromTextStream};
public slots:
QDomNode* new_QDomNode();
QDomNode* new_QDomNode(const QDomNode&  arg__1);
void delete_QDomNode(QDomNode* obj) { delete obj; } 
   QDomDocument  ownerDocument(QDomNode* theWrappedObject) const;
   QDomNode  previousSibling(QDomNode* theWrappedObject) const;
   void normalize(QDomNode* theWrappedObject);
   QDomNode  cloneNode(QDomNode* theWrappedObject, bool  deep = true) const;
   void setNodeValue(QDomNode* theWrappedObject, const QString&  arg__1);
   int  columnNumber(QDomNode* theWrappedObject) const;
   QDomEntity  toEntity(QDomNode* theWrappedObject) const;
   QDomNode  firstChild(QDomNode* theWrappedObject) const;
   QDomDocumentType  toDocumentType(QDomNode* theWrappedObject) const;
   QDomNode  nextSibling(QDomNode* theWrappedObject) const;
   void clear(QDomNode* theWrappedObject);
   QDomNode  insertAfter(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  refChild);
   QString  nodeValue(QDomNode* theWrappedObject) const;
   QDomElement  toElement(QDomNode* theWrappedObject) const;
   QString  nodeName(QDomNode* theWrappedObject) const;
   bool  isDocument(QDomNode* theWrappedObject) const;
   bool  isComment(QDomNode* theWrappedObject) const;
   bool  isProcessingInstruction(QDomNode* theWrappedObject) const;
   bool  hasAttributes(QDomNode* theWrappedObject) const;
   bool  isEntity(QDomNode* theWrappedObject) const;
   QString  localName(QDomNode* theWrappedObject) const;
   QDomNode  parentNode(QDomNode* theWrappedObject) const;
   QDomElement  firstChildElement(QDomNode* theWrappedObject, const QString&  tagName = QString()) const;
   bool  isAttr(QDomNode* theWrappedObject) const;
   bool  isCDATASection(QDomNode* theWrappedObject) const;
   QDomNodeList  childNodes(QDomNode* theWrappedObject) const;
   bool  isDocumentFragment(QDomNode* theWrappedObject) const;
   QDomElement  nextSiblingElement(QDomNode* theWrappedObject, const QString&  taName = QString()) const;
   void save(QDomNode* theWrappedObject, QTextStream&  arg__1, int  arg__2, QDomNode::EncodingPolicy  arg__3) const;
   void save(QDomNode* theWrappedObject, QTextStream&  arg__1, int  arg__2) const;
   QString  namespaceURI(QDomNode* theWrappedObject) const;
   QDomDocumentFragment  toDocumentFragment(QDomNode* theWrappedObject) const;
   QDomNode  replaceChild(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  oldChild);
   QDomEntityReference  toEntityReference(QDomNode* theWrappedObject) const;
   QDomNode::NodeType  nodeType(QDomNode* theWrappedObject) const;
   bool  isCharacterData(QDomNode* theWrappedObject) const;
   QDomNode  insertBefore(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  refChild);
   bool  operator_equal(QDomNode* theWrappedObject, const QDomNode&  arg__1) const;
   bool  isElement(QDomNode* theWrappedObject) const;
   void setPrefix(QDomNode* theWrappedObject, const QString&  pre);
   int  lineNumber(QDomNode* theWrappedObject) const;
   bool  isText(QDomNode* theWrappedObject) const;
   QDomAttr  toAttr(QDomNode* theWrappedObject) const;
   QDomDocument  toDocument(QDomNode* theWrappedObject) const;
   bool  hasChildNodes(QDomNode* theWrappedObject) const;
   QDomElement  lastChildElement(QDomNode* theWrappedObject, const QString&  tagName = QString()) const;
   bool  isEntityReference(QDomNode* theWrappedObject) const;
   QDomNode  removeChild(QDomNode* theWrappedObject, const QDomNode&  oldChild);
   QDomNotation  toNotation(QDomNode* theWrappedObject) const;
   QDomCharacterData  toCharacterData(QDomNode* theWrappedObject) const;
   bool  isNull(QDomNode* theWrappedObject) const;
   bool  isSupported(QDomNode* theWrappedObject, const QString&  feature, const QString&  version) const;
   QDomCDATASection  toCDATASection(QDomNode* theWrappedObject) const;
   QString  prefix(QDomNode* theWrappedObject) const;
   QDomNode  lastChild(QDomNode* theWrappedObject) const;
   QDomElement  previousSiblingElement(QDomNode* theWrappedObject, const QString&  tagName = QString()) const;
   bool  isNotation(QDomNode* theWrappedObject) const;
   QDomText  toText(QDomNode* theWrappedObject) const;
   QDomNode  appendChild(QDomNode* theWrappedObject, const QDomNode&  newChild);
   QDomNode  namedItem(QDomNode* theWrappedObject, const QString&  name) const;
   QDomProcessingInstruction  toProcessingInstruction(QDomNode* theWrappedObject) const;
   QDomComment  toComment(QDomNode* theWrappedObject) const;
   bool  isDocumentType(QDomNode* theWrappedObject) const;
   void writeTo(QDomNode* theWrappedObject, QTextStream&  arg__1);
};





class PythonQtWrapper_QDomNodeList : public QObject
{ Q_OBJECT
public:
public slots:
QDomNodeList* new_QDomNodeList();
QDomNodeList* new_QDomNodeList(const QDomNodeList&  arg__1);
void delete_QDomNodeList(QDomNodeList* obj) { delete obj; } 
   QDomNode  item(QDomNodeList* theWrappedObject, int  index) const;
   QDomNode  at(QDomNodeList* theWrappedObject, int  index) const;
   int  size(QDomNodeList* theWrappedObject) const;
   int  count(QDomNodeList* theWrappedObject) const;
   uint  length(QDomNodeList* theWrappedObject) const;
   bool  operator_equal(QDomNodeList* theWrappedObject, const QDomNodeList&  arg__1) const;
   bool  isEmpty(QDomNodeList* theWrappedObject) const;
};





class PythonQtWrapper_QDomNotation : public QObject
{ Q_OBJECT
public:
public slots:
QDomNotation* new_QDomNotation();
QDomNotation* new_QDomNotation(const QDomNotation&  x);
void delete_QDomNotation(QDomNotation* obj) { delete obj; } 
   QString  publicId(QDomNotation* theWrappedObject) const;
   QString  systemId(QDomNotation* theWrappedObject) const;
};





class PythonQtWrapper_QDomProcessingInstruction : public QObject
{ Q_OBJECT
public:
public slots:
QDomProcessingInstruction* new_QDomProcessingInstruction();
QDomProcessingInstruction* new_QDomProcessingInstruction(const QDomProcessingInstruction&  x);
void delete_QDomProcessingInstruction(QDomProcessingInstruction* obj) { delete obj; } 
   void setData(QDomProcessingInstruction* theWrappedObject, const QString&  d);
   QString  target(QDomProcessingInstruction* theWrappedObject) const;
   QString  data(QDomProcessingInstruction* theWrappedObject) const;
};





class PythonQtWrapper_QDomText : public QObject
{ Q_OBJECT
public:
public slots:
QDomText* new_QDomText();
QDomText* new_QDomText(const QDomText&  x);
void delete_QDomText(QDomText* obj) { delete obj; } 
   QDomText  splitText(QDomText* theWrappedObject, int  offset);
};





class PythonQtShell_QXmlAttributes : public QXmlAttributes
{
public:
    PythonQtShell_QXmlAttributes():QXmlAttributes(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlAttributes : public QObject
{ Q_OBJECT
public:
public slots:
QXmlAttributes* new_QXmlAttributes();
QXmlAttributes* new_QXmlAttributes(const QXmlAttributes& other) {
PythonQtShell_QXmlAttributes* a = new PythonQtShell_QXmlAttributes();
*((QXmlAttributes*)a) = other;
return a; }
void delete_QXmlAttributes(QXmlAttributes* obj) { delete obj; } 
   QString  qName(QXmlAttributes* theWrappedObject, int  index) const;
   int  count(QXmlAttributes* theWrappedObject) const;
   QString  value(QXmlAttributes* theWrappedObject, const QString&  uri, const QString&  localName) const;
   QString  value(QXmlAttributes* theWrappedObject, const QString&  qName) const;
   QString  value(QXmlAttributes* theWrappedObject, int  index) const;
   void append(QXmlAttributes* theWrappedObject, const QString&  qName, const QString&  uri, const QString&  localPart, const QString&  value);
   QString  uri(QXmlAttributes* theWrappedObject, int  index) const;
   int  index(QXmlAttributes* theWrappedObject, const QString&  uri, const QString&  localPart) const;
   QString  localName(QXmlAttributes* theWrappedObject, int  index) const;
   int  index(QXmlAttributes* theWrappedObject, const QString&  qName) const;
   int  length(QXmlAttributes* theWrappedObject) const;
   void clear(QXmlAttributes* theWrappedObject);
   QString  type(QXmlAttributes* theWrappedObject, const QString&  uri, const QString&  localName) const;
   QString  type(QXmlAttributes* theWrappedObject, const QString&  qName) const;
   QString  type(QXmlAttributes* theWrappedObject, int  index) const;
};





class PythonQtShell_QXmlContentHandler : public QXmlContentHandler
{
public:
    PythonQtShell_QXmlContentHandler():QXmlContentHandler(),_wrapper(NULL) {};

virtual QString  errorString() const;
virtual bool  startDocument();
virtual bool  startPrefixMapping(const QString&  prefix, const QString&  uri);
virtual bool  endDocument();
virtual bool  startElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts);
virtual bool  ignorableWhitespace(const QString&  ch);
virtual bool  characters(const QString&  ch);
virtual bool  endElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName);
virtual void setDocumentLocator(QXmlLocator*  locator);
virtual bool  endPrefixMapping(const QString&  prefix);
virtual bool  processingInstruction(const QString&  target, const QString&  data);
virtual bool  skippedEntity(const QString&  name);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlContentHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlContentHandler* new_QXmlContentHandler();
void delete_QXmlContentHandler(QXmlContentHandler* obj) { delete obj; } 
};





class PythonQtShell_QXmlDTDHandler : public QXmlDTDHandler
{
public:
    PythonQtShell_QXmlDTDHandler():QXmlDTDHandler(),_wrapper(NULL) {};

virtual bool  unparsedEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName);
virtual QString  errorString() const;
virtual bool  notationDecl(const QString&  name, const QString&  publicId, const QString&  systemId);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlDTDHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlDTDHandler* new_QXmlDTDHandler();
void delete_QXmlDTDHandler(QXmlDTDHandler* obj) { delete obj; } 
};





class PythonQtShell_QXmlDeclHandler : public QXmlDeclHandler
{
public:
    PythonQtShell_QXmlDeclHandler():QXmlDeclHandler(),_wrapper(NULL) {};

virtual bool  attributeDecl(const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value);
virtual QString  errorString() const;
virtual bool  internalEntityDecl(const QString&  name, const QString&  value);
virtual bool  externalEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlDeclHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlDeclHandler* new_QXmlDeclHandler();
void delete_QXmlDeclHandler(QXmlDeclHandler* obj) { delete obj; } 
};





class PythonQtShell_QXmlDefaultHandler : public QXmlDefaultHandler
{
public:
    PythonQtShell_QXmlDefaultHandler():QXmlDefaultHandler(),_wrapper(NULL) {};

virtual bool  externalEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId);
virtual bool  startElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts);
virtual bool  resolveEntity(const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret);
virtual bool  notationDecl(const QString&  name, const QString&  publicId, const QString&  systemId);
virtual bool  comment(const QString&  ch);
virtual bool  startPrefixMapping(const QString&  prefix, const QString&  uri);
virtual bool  endEntity(const QString&  name);
virtual void setDocumentLocator(QXmlLocator*  locator);
virtual bool  startDocument();
virtual bool  startEntity(const QString&  name);
virtual bool  characters(const QString&  ch);
virtual bool  processingInstruction(const QString&  target, const QString&  data);
virtual bool  ignorableWhitespace(const QString&  ch);
virtual bool  unparsedEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName);
virtual bool  endPrefixMapping(const QString&  prefix);
virtual bool  startDTD(const QString&  name, const QString&  publicId, const QString&  systemId);
virtual bool  error(const QXmlParseException&  exception);
virtual bool  attributeDecl(const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value);
virtual bool  endCDATA();
virtual bool  endDTD();
virtual bool  fatalError(const QXmlParseException&  exception);
virtual bool  endElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName);
virtual bool  skippedEntity(const QString&  name);
virtual bool  internalEntityDecl(const QString&  name, const QString&  value);
virtual bool  warning(const QXmlParseException&  exception);
virtual QString  errorString() const;
virtual bool  startCDATA();
virtual bool  endDocument();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlDefaultHandler : public QXmlDefaultHandler
{ public:
inline bool  promoted_externalEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId) { return QXmlDefaultHandler::externalEntityDecl(name, publicId, systemId); }
inline bool  promoted_startElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts) { return QXmlDefaultHandler::startElement(namespaceURI, localName, qName, atts); }
inline bool  promoted_resolveEntity(const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret) { return QXmlDefaultHandler::resolveEntity(publicId, systemId, ret); }
inline bool  promoted_notationDecl(const QString&  name, const QString&  publicId, const QString&  systemId) { return QXmlDefaultHandler::notationDecl(name, publicId, systemId); }
inline bool  promoted_comment(const QString&  ch) { return QXmlDefaultHandler::comment(ch); }
inline bool  promoted_startPrefixMapping(const QString&  prefix, const QString&  uri) { return QXmlDefaultHandler::startPrefixMapping(prefix, uri); }
inline bool  promoted_endEntity(const QString&  name) { return QXmlDefaultHandler::endEntity(name); }
inline void promoted_setDocumentLocator(QXmlLocator*  locator) { QXmlDefaultHandler::setDocumentLocator(locator); }
inline bool  promoted_startDocument() { return QXmlDefaultHandler::startDocument(); }
inline bool  promoted_startEntity(const QString&  name) { return QXmlDefaultHandler::startEntity(name); }
inline bool  promoted_characters(const QString&  ch) { return QXmlDefaultHandler::characters(ch); }
inline bool  promoted_processingInstruction(const QString&  target, const QString&  data) { return QXmlDefaultHandler::processingInstruction(target, data); }
inline bool  promoted_ignorableWhitespace(const QString&  ch) { return QXmlDefaultHandler::ignorableWhitespace(ch); }
inline bool  promoted_unparsedEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName) { return QXmlDefaultHandler::unparsedEntityDecl(name, publicId, systemId, notationName); }
inline bool  promoted_endPrefixMapping(const QString&  prefix) { return QXmlDefaultHandler::endPrefixMapping(prefix); }
inline bool  promoted_startDTD(const QString&  name, const QString&  publicId, const QString&  systemId) { return QXmlDefaultHandler::startDTD(name, publicId, systemId); }
inline bool  promoted_error(const QXmlParseException&  exception) { return QXmlDefaultHandler::error(exception); }
inline bool  promoted_attributeDecl(const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value) { return QXmlDefaultHandler::attributeDecl(eName, aName, type, valueDefault, value); }
inline bool  promoted_endCDATA() { return QXmlDefaultHandler::endCDATA(); }
inline bool  promoted_endDTD() { return QXmlDefaultHandler::endDTD(); }
inline bool  promoted_fatalError(const QXmlParseException&  exception) { return QXmlDefaultHandler::fatalError(exception); }
inline bool  promoted_endElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName) { return QXmlDefaultHandler::endElement(namespaceURI, localName, qName); }
inline bool  promoted_skippedEntity(const QString&  name) { return QXmlDefaultHandler::skippedEntity(name); }
inline bool  promoted_internalEntityDecl(const QString&  name, const QString&  value) { return QXmlDefaultHandler::internalEntityDecl(name, value); }
inline bool  promoted_warning(const QXmlParseException&  exception) { return QXmlDefaultHandler::warning(exception); }
inline QString  promoted_errorString() const { return QXmlDefaultHandler::errorString(); }
inline bool  promoted_startCDATA() { return QXmlDefaultHandler::startCDATA(); }
inline bool  promoted_endDocument() { return QXmlDefaultHandler::endDocument(); }
};

class PythonQtWrapper_QXmlDefaultHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlDefaultHandler* new_QXmlDefaultHandler();
void delete_QXmlDefaultHandler(QXmlDefaultHandler* obj) { delete obj; } 
   bool  externalEntityDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId);
   bool  startElement(QXmlDefaultHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts);
   bool  resolveEntity(QXmlDefaultHandler* theWrappedObject, const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret);
   bool  notationDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId);
   bool  comment(QXmlDefaultHandler* theWrappedObject, const QString&  ch);
   bool  startPrefixMapping(QXmlDefaultHandler* theWrappedObject, const QString&  prefix, const QString&  uri);
   bool  endEntity(QXmlDefaultHandler* theWrappedObject, const QString&  name);
   void setDocumentLocator(QXmlDefaultHandler* theWrappedObject, QXmlLocator*  locator);
   bool  startDocument(QXmlDefaultHandler* theWrappedObject);
   bool  startEntity(QXmlDefaultHandler* theWrappedObject, const QString&  name);
   bool  characters(QXmlDefaultHandler* theWrappedObject, const QString&  ch);
   bool  processingInstruction(QXmlDefaultHandler* theWrappedObject, const QString&  target, const QString&  data);
   bool  ignorableWhitespace(QXmlDefaultHandler* theWrappedObject, const QString&  ch);
   bool  unparsedEntityDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName);
   bool  endPrefixMapping(QXmlDefaultHandler* theWrappedObject, const QString&  prefix);
   bool  startDTD(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId);
   bool  error(QXmlDefaultHandler* theWrappedObject, const QXmlParseException&  exception);
   bool  attributeDecl(QXmlDefaultHandler* theWrappedObject, const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value);
   bool  endCDATA(QXmlDefaultHandler* theWrappedObject);
   bool  endDTD(QXmlDefaultHandler* theWrappedObject);
   bool  fatalError(QXmlDefaultHandler* theWrappedObject, const QXmlParseException&  exception);
   bool  endElement(QXmlDefaultHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName);
   bool  skippedEntity(QXmlDefaultHandler* theWrappedObject, const QString&  name);
   bool  internalEntityDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  value);
   bool  warning(QXmlDefaultHandler* theWrappedObject, const QXmlParseException&  exception);
   QString  errorString(QXmlDefaultHandler* theWrappedObject) const;
   bool  startCDATA(QXmlDefaultHandler* theWrappedObject);
   bool  endDocument(QXmlDefaultHandler* theWrappedObject);
};





class PythonQtShell_QXmlEntityResolver : public QXmlEntityResolver
{
public:
    PythonQtShell_QXmlEntityResolver():QXmlEntityResolver(),_wrapper(NULL) {};

virtual QString  errorString() const;
virtual bool  resolveEntity(const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlEntityResolver : public QObject
{ Q_OBJECT
public:
public slots:
QXmlEntityResolver* new_QXmlEntityResolver();
void delete_QXmlEntityResolver(QXmlEntityResolver* obj) { delete obj; } 
};





class PythonQtShell_QXmlErrorHandler : public QXmlErrorHandler
{
public:
    PythonQtShell_QXmlErrorHandler():QXmlErrorHandler(),_wrapper(NULL) {};

virtual bool  fatalError(const QXmlParseException&  exception);
virtual bool  error(const QXmlParseException&  exception);
virtual QString  errorString() const;
virtual bool  warning(const QXmlParseException&  exception);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlErrorHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlErrorHandler* new_QXmlErrorHandler();
void delete_QXmlErrorHandler(QXmlErrorHandler* obj) { delete obj; } 
};





class PythonQtShell_QXmlInputSource : public QXmlInputSource
{
public:
    PythonQtShell_QXmlInputSource():QXmlInputSource(),_wrapper(NULL) {};
    PythonQtShell_QXmlInputSource(QIODevice*  dev):QXmlInputSource(dev),_wrapper(NULL) {};

virtual void setData(const QByteArray&  dat);
virtual void setData(const QString&  dat);
virtual QString  fromRawData(const QByteArray&  data, bool  beginning = false);
virtual void fetchData();
virtual QChar  next();
virtual void reset();
virtual QString  data() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlInputSource : public QXmlInputSource
{ public:
inline void promoted_setData(const QByteArray&  dat) { QXmlInputSource::setData(dat); }
inline void promoted_setData(const QString&  dat) { QXmlInputSource::setData(dat); }
inline QString  promoted_fromRawData(const QByteArray&  data, bool  beginning = false) { return QXmlInputSource::fromRawData(data, beginning); }
inline void promoted_fetchData() { QXmlInputSource::fetchData(); }
inline QChar  promoted_next() { return QXmlInputSource::next(); }
inline void promoted_reset() { QXmlInputSource::reset(); }
inline QString  promoted_data() const { return QXmlInputSource::data(); }
};

class PythonQtWrapper_QXmlInputSource : public QObject
{ Q_OBJECT
public:
public slots:
QXmlInputSource* new_QXmlInputSource();
QXmlInputSource* new_QXmlInputSource(QIODevice*  dev);
void delete_QXmlInputSource(QXmlInputSource* obj) { delete obj; } 
   void setData(QXmlInputSource* theWrappedObject, const QByteArray&  dat);
   void setData(QXmlInputSource* theWrappedObject, const QString&  dat);
   QString  fromRawData(QXmlInputSource* theWrappedObject, const QByteArray&  data, bool  beginning = false);
   void fetchData(QXmlInputSource* theWrappedObject);
   QChar  next(QXmlInputSource* theWrappedObject);
   void reset(QXmlInputSource* theWrappedObject);
   QString  data(QXmlInputSource* theWrappedObject) const;
};





class PythonQtShell_QXmlLexicalHandler : public QXmlLexicalHandler
{
public:
    PythonQtShell_QXmlLexicalHandler():QXmlLexicalHandler(),_wrapper(NULL) {};

virtual bool  startDTD(const QString&  name, const QString&  publicId, const QString&  systemId);
virtual QString  errorString() const;
virtual bool  startEntity(const QString&  name);
virtual bool  endCDATA();
virtual bool  endEntity(const QString&  name);
virtual bool  startCDATA();
virtual bool  endDTD();
virtual bool  comment(const QString&  ch);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlLexicalHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlLexicalHandler* new_QXmlLexicalHandler();
void delete_QXmlLexicalHandler(QXmlLexicalHandler* obj) { delete obj; } 
};





class PythonQtShell_QXmlLocator : public QXmlLocator
{
public:
    PythonQtShell_QXmlLocator():QXmlLocator(),_wrapper(NULL) {};

virtual int  lineNumber() const;
virtual int  columnNumber() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlLocator : public QObject
{ Q_OBJECT
public:
public slots:
QXmlLocator* new_QXmlLocator();
void delete_QXmlLocator(QXmlLocator* obj) { delete obj; } 
};





class PythonQtWrapper_QXmlParseException : public QObject
{ Q_OBJECT
public:
public slots:
QXmlParseException* new_QXmlParseException(const QString&  name = QString(), int  c = -1, int  l = -1, const QString&  p = QString(), const QString&  s = QString());
QXmlParseException* new_QXmlParseException(const QXmlParseException&  other);
void delete_QXmlParseException(QXmlParseException* obj) { delete obj; } 
   QString  message(QXmlParseException* theWrappedObject) const;
   QString  publicId(QXmlParseException* theWrappedObject) const;
   int  lineNumber(QXmlParseException* theWrappedObject) const;
   QString  systemId(QXmlParseException* theWrappedObject) const;
   int  columnNumber(QXmlParseException* theWrappedObject) const;
};





class PythonQtShell_QXmlReader : public QXmlReader
{
public:
    PythonQtShell_QXmlReader():QXmlReader(),_wrapper(NULL) {};

virtual void setLexicalHandler(QXmlLexicalHandler*  handler);
virtual QXmlContentHandler*  contentHandler() const;
virtual bool  hasFeature(const QString&  name) const;
virtual void setErrorHandler(QXmlErrorHandler*  handler);
virtual void setDTDHandler(QXmlDTDHandler*  handler);
virtual void setContentHandler(QXmlContentHandler*  handler);
virtual void*  property(const QString&  name, bool*  ok = 0) const;
virtual bool  feature(const QString&  name, bool*  ok = 0) const;
virtual void setFeature(const QString&  name, bool  value);
virtual bool  hasProperty(const QString&  name) const;
virtual bool  parse(const QXmlInputSource*  input);
virtual void setEntityResolver(QXmlEntityResolver*  handler);
virtual bool  parse(const QXmlInputSource&  input);
virtual QXmlDTDHandler*  DTDHandler() const;
virtual void setProperty(const QString&  name, void*  value);
virtual QXmlDeclHandler*  declHandler() const;
virtual QXmlEntityResolver*  entityResolver() const;
virtual QXmlErrorHandler*  errorHandler() const;
virtual QXmlLexicalHandler*  lexicalHandler() const;
virtual void setDeclHandler(QXmlDeclHandler*  handler);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlReader : public QObject
{ Q_OBJECT
public:
public slots:
QXmlReader* new_QXmlReader();
void delete_QXmlReader(QXmlReader* obj) { delete obj; } 
};





class PythonQtShell_QXmlSimpleReader : public QXmlSimpleReader
{
public:
    PythonQtShell_QXmlSimpleReader():QXmlSimpleReader(),_wrapper(NULL) {};

virtual void setLexicalHandler(QXmlLexicalHandler*  handler);
virtual QXmlContentHandler*  contentHandler() const;
virtual bool  hasFeature(const QString&  name) const;
virtual void setDTDHandler(QXmlDTDHandler*  handler);
virtual void setContentHandler(QXmlContentHandler*  handler);
virtual void setErrorHandler(QXmlErrorHandler*  handler);
virtual bool  parse(const QXmlInputSource*  input);
virtual void*  property(const QString&  name, bool*  ok = 0) const;
virtual void setFeature(const QString&  name, bool  value);
virtual bool  feature(const QString&  name, bool*  ok = 0) const;
virtual bool  parse(const QXmlInputSource*  input, bool  incremental);
virtual bool  parse(const QXmlInputSource&  input);
virtual void setEntityResolver(QXmlEntityResolver*  handler);
virtual bool  parseContinue();
virtual void setProperty(const QString&  name, void*  value);
virtual QXmlDTDHandler*  DTDHandler() const;
virtual bool  hasProperty(const QString&  name) const;
virtual QXmlEntityResolver*  entityResolver() const;
virtual QXmlDeclHandler*  declHandler() const;
virtual QXmlErrorHandler*  errorHandler() const;
virtual QXmlLexicalHandler*  lexicalHandler() const;
virtual void setDeclHandler(QXmlDeclHandler*  handler);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlSimpleReader : public QXmlSimpleReader
{ public:
inline void promoted_setLexicalHandler(QXmlLexicalHandler*  handler) { QXmlSimpleReader::setLexicalHandler(handler); }
inline QXmlContentHandler*  promoted_contentHandler() const { return QXmlSimpleReader::contentHandler(); }
inline bool  promoted_hasFeature(const QString&  name) const { return QXmlSimpleReader::hasFeature(name); }
inline void promoted_setDTDHandler(QXmlDTDHandler*  handler) { QXmlSimpleReader::setDTDHandler(handler); }
inline void promoted_setContentHandler(QXmlContentHandler*  handler) { QXmlSimpleReader::setContentHandler(handler); }
inline void promoted_setErrorHandler(QXmlErrorHandler*  handler) { QXmlSimpleReader::setErrorHandler(handler); }
inline bool  promoted_parse(const QXmlInputSource*  input) { return QXmlSimpleReader::parse(input); }
inline void*  promoted_property(const QString&  name, bool*  ok = 0) const { return QXmlSimpleReader::property(name, ok); }
inline void promoted_setFeature(const QString&  name, bool  value) { QXmlSimpleReader::setFeature(name, value); }
inline bool  promoted_feature(const QString&  name, bool*  ok = 0) const { return QXmlSimpleReader::feature(name, ok); }
inline bool  promoted_parse(const QXmlInputSource*  input, bool  incremental) { return QXmlSimpleReader::parse(input, incremental); }
inline bool  promoted_parse(const QXmlInputSource&  input) { return QXmlSimpleReader::parse(input); }
inline void promoted_setEntityResolver(QXmlEntityResolver*  handler) { QXmlSimpleReader::setEntityResolver(handler); }
inline bool  promoted_parseContinue() { return QXmlSimpleReader::parseContinue(); }
inline void promoted_setProperty(const QString&  name, void*  value) { QXmlSimpleReader::setProperty(name, value); }
inline QXmlDTDHandler*  promoted_DTDHandler() const { return QXmlSimpleReader::DTDHandler(); }
inline bool  promoted_hasProperty(const QString&  name) const { return QXmlSimpleReader::hasProperty(name); }
inline QXmlEntityResolver*  promoted_entityResolver() const { return QXmlSimpleReader::entityResolver(); }
inline QXmlDeclHandler*  promoted_declHandler() const { return QXmlSimpleReader::declHandler(); }
inline QXmlErrorHandler*  promoted_errorHandler() const { return QXmlSimpleReader::errorHandler(); }
inline QXmlLexicalHandler*  promoted_lexicalHandler() const { return QXmlSimpleReader::lexicalHandler(); }
inline void promoted_setDeclHandler(QXmlDeclHandler*  handler) { QXmlSimpleReader::setDeclHandler(handler); }
};

class PythonQtWrapper_QXmlSimpleReader : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSimpleReader* new_QXmlSimpleReader();
void delete_QXmlSimpleReader(QXmlSimpleReader* obj) { delete obj; } 
   void setLexicalHandler(QXmlSimpleReader* theWrappedObject, QXmlLexicalHandler*  handler);
   QXmlContentHandler*  contentHandler(QXmlSimpleReader* theWrappedObject) const;
   bool  hasFeature(QXmlSimpleReader* theWrappedObject, const QString&  name) const;
   void setDTDHandler(QXmlSimpleReader* theWrappedObject, QXmlDTDHandler*  handler);
   void setContentHandler(QXmlSimpleReader* theWrappedObject, QXmlContentHandler*  handler);
   void setErrorHandler(QXmlSimpleReader* theWrappedObject, QXmlErrorHandler*  handler);
   bool  parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource*  input);
   void*  property(QXmlSimpleReader* theWrappedObject, const QString&  name, bool*  ok = 0) const;
   void setFeature(QXmlSimpleReader* theWrappedObject, const QString&  name, bool  value);
   bool  feature(QXmlSimpleReader* theWrappedObject, const QString&  name, bool*  ok = 0) const;
   bool  parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource*  input, bool  incremental);
   bool  parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource&  input);
   void setEntityResolver(QXmlSimpleReader* theWrappedObject, QXmlEntityResolver*  handler);
   bool  parseContinue(QXmlSimpleReader* theWrappedObject);
   void setProperty(QXmlSimpleReader* theWrappedObject, const QString&  name, void*  value);
   QXmlDTDHandler*  DTDHandler(QXmlSimpleReader* theWrappedObject) const;
   bool  hasProperty(QXmlSimpleReader* theWrappedObject, const QString&  name) const;
   QXmlEntityResolver*  entityResolver(QXmlSimpleReader* theWrappedObject) const;
   QXmlDeclHandler*  declHandler(QXmlSimpleReader* theWrappedObject) const;
   QXmlErrorHandler*  errorHandler(QXmlSimpleReader* theWrappedObject) const;
   QXmlLexicalHandler*  lexicalHandler(QXmlSimpleReader* theWrappedObject) const;
   void setDeclHandler(QXmlSimpleReader* theWrappedObject, QXmlDeclHandler*  handler);
};

