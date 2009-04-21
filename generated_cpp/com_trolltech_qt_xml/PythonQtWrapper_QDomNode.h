#ifndef PYTHONQTWRAPPER_QDOMNODE_H
#define PYTHONQTWRAPPER_QDOMNODE_H

#include <qdom.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

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
   QString  localName(QDomNode* theWrappedObject) const;
   QDomEntity  toEntity(QDomNode* theWrappedObject) const;
   bool  isNotation(QDomNode* theWrappedObject) const;
   QDomCDATASection  toCDATASection(QDomNode* theWrappedObject) const;
   bool  isElement(QDomNode* theWrappedObject) const;
   bool  isText(QDomNode* theWrappedObject) const;
   QString  prefix(QDomNode* theWrappedObject) const;
   QDomNode  removeChild(QDomNode* theWrappedObject, const QDomNode&  oldChild);
   QDomDocument  toDocument(QDomNode* theWrappedObject) const;
   bool  operator_equal(QDomNode* theWrappedObject, const QDomNode&  arg__1) const;
   QDomNotation  toNotation(QDomNode* theWrappedObject) const;
   int  columnNumber(QDomNode* theWrappedObject) const;
   QDomElement  lastChildElement(QDomNode* theWrappedObject, const QString&  tagName = QString()) const;
   QDomNode  insertBefore(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  refChild);
   QDomNode  namedItem(QDomNode* theWrappedObject, const QString&  name) const;
   bool  isDocumentFragment(QDomNode* theWrappedObject) const;
   bool  isEntity(QDomNode* theWrappedObject) const;
   QDomNode  cloneNode(QDomNode* theWrappedObject, bool  deep = true) const;
   bool  isDocumentType(QDomNode* theWrappedObject) const;
   void setNodeValue(QDomNode* theWrappedObject, const QString&  arg__1);
   int  lineNumber(QDomNode* theWrappedObject) const;
   QDomEntityReference  toEntityReference(QDomNode* theWrappedObject) const;
   void setPrefix(QDomNode* theWrappedObject, const QString&  pre);
   QDomComment  toComment(QDomNode* theWrappedObject) const;
   QDomElement  nextSiblingElement(QDomNode* theWrappedObject, const QString&  taName = QString()) const;
   QDomElement  toElement(QDomNode* theWrappedObject) const;
   bool  isCharacterData(QDomNode* theWrappedObject) const;
   void normalize(QDomNode* theWrappedObject);
   QDomProcessingInstruction  toProcessingInstruction(QDomNode* theWrappedObject) const;
   QDomText  toText(QDomNode* theWrappedObject) const;
   bool  isDocument(QDomNode* theWrappedObject) const;
   bool  hasAttributes(QDomNode* theWrappedObject) const;
   QDomNode  previousSibling(QDomNode* theWrappedObject) const;
   QDomNode::NodeType  nodeType(QDomNode* theWrappedObject) const;
   QDomNode  lastChild(QDomNode* theWrappedObject) const;
   QString  namespaceURI(QDomNode* theWrappedObject) const;
   QDomDocument  ownerDocument(QDomNode* theWrappedObject) const;
   QDomNode  replaceChild(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  oldChild);
   bool  isSupported(QDomNode* theWrappedObject, const QString&  feature, const QString&  version) const;
   QString  nodeValue(QDomNode* theWrappedObject) const;
   QDomNodeList  childNodes(QDomNode* theWrappedObject) const;
   bool  isAttr(QDomNode* theWrappedObject) const;
   bool  isProcessingInstruction(QDomNode* theWrappedObject) const;
   QString  nodeName(QDomNode* theWrappedObject) const;
   QDomDocumentFragment  toDocumentFragment(QDomNode* theWrappedObject) const;
   bool  isComment(QDomNode* theWrappedObject) const;
   QDomElement  firstChildElement(QDomNode* theWrappedObject, const QString&  tagName = QString()) const;
   QDomNode  insertAfter(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  refChild);
   bool  isNull(QDomNode* theWrappedObject) const;
   QDomNode  nextSibling(QDomNode* theWrappedObject) const;
   void save(QDomNode* theWrappedObject, QTextStream&  arg__1, int  arg__2) const;
   void clear(QDomNode* theWrappedObject);
   QDomElement  previousSiblingElement(QDomNode* theWrappedObject, const QString&  tagName = QString()) const;
   QDomCharacterData  toCharacterData(QDomNode* theWrappedObject) const;
   bool  isCDATASection(QDomNode* theWrappedObject) const;
   QDomDocumentType  toDocumentType(QDomNode* theWrappedObject) const;
   void save(QDomNode* theWrappedObject, QTextStream&  arg__1, int  arg__2, QDomNode::EncodingPolicy  arg__3) const;
   QDomAttr  toAttr(QDomNode* theWrappedObject) const;
   bool  hasChildNodes(QDomNode* theWrappedObject) const;
   QDomNode  parentNode(QDomNode* theWrappedObject) const;
   QDomNode  firstChild(QDomNode* theWrappedObject) const;
   bool  isEntityReference(QDomNode* theWrappedObject) const;
   QDomNode  appendChild(QDomNode* theWrappedObject, const QDomNode&  newChild);
   void writeTo(QDomNode* theWrappedObject, QTextStream&  arg__1);
};

#endif // PYTHONQTWRAPPER_QDOMNODE_H
