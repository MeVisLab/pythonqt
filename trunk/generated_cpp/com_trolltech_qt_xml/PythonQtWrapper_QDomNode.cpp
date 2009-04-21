#include "PythonQtWrapper_QDomNode.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

QDomNode* PythonQtWrapper_QDomNode::new_QDomNode()
{ 
return new QDomNode(); }

QDomNode* PythonQtWrapper_QDomNode::new_QDomNode(const QDomNode&  arg__1)
{ 
return new QDomNode(arg__1); }

QDomDocumentFragment  PythonQtWrapper_QDomNode::toDocumentFragment(QDomNode* theWrappedObject) const
{
return  theWrappedObject->toDocumentFragment();
}

QDomCDATASection  PythonQtWrapper_QDomNode::toCDATASection(QDomNode* theWrappedObject) const
{
return  theWrappedObject->toCDATASection();
}

bool  PythonQtWrapper_QDomNode::hasChildNodes(QDomNode* theWrappedObject) const
{
return  theWrappedObject->hasChildNodes();
}

bool  PythonQtWrapper_QDomNode::isDocumentFragment(QDomNode* theWrappedObject) const
{
return  theWrappedObject->isDocumentFragment();
}

bool  PythonQtWrapper_QDomNode::isText(QDomNode* theWrappedObject) const
{
return  theWrappedObject->isText();
}

bool  PythonQtWrapper_QDomNode::isCharacterData(QDomNode* theWrappedObject) const
{
return  theWrappedObject->isCharacterData();
}

QDomNode  PythonQtWrapper_QDomNode::appendChild(QDomNode* theWrappedObject, const QDomNode&  newChild)
{
return  theWrappedObject->appendChild(newChild);
}

bool  PythonQtWrapper_QDomNode::isElement(QDomNode* theWrappedObject) const
{
return  theWrappedObject->isElement();
}

QDomElement  PythonQtWrapper_QDomNode::lastChildElement(QDomNode* theWrappedObject, const QString&  tagName) const
{
return  theWrappedObject->lastChildElement(tagName);
}

QDomNode::NodeType  PythonQtWrapper_QDomNode::nodeType(QDomNode* theWrappedObject) const
{
return  theWrappedObject->nodeType();
}

QDomEntityReference  PythonQtWrapper_QDomNode::toEntityReference(QDomNode* theWrappedObject) const
{
return  theWrappedObject->toEntityReference();
}

QDomElement  PythonQtWrapper_QDomNode::nextSiblingElement(QDomNode* theWrappedObject, const QString&  taName) const
{
return  theWrappedObject->nextSiblingElement(taName);
}

bool  PythonQtWrapper_QDomNode::isNotation(QDomNode* theWrappedObject) const
{
return  theWrappedObject->isNotation();
}

QDomAttr  PythonQtWrapper_QDomNode::toAttr(QDomNode* theWrappedObject) const
{
return  theWrappedObject->toAttr();
}

bool  PythonQtWrapper_QDomNode::isCDATASection(QDomNode* theWrappedObject) const
{
return  theWrappedObject->isCDATASection();
}

QDomNode  PythonQtWrapper_QDomNode::replaceChild(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  oldChild)
{
return  theWrappedObject->replaceChild(newChild, oldChild);
}

bool  PythonQtWrapper_QDomNode::operator_equal(QDomNode* theWrappedObject, const QDomNode&  arg__1) const
{
return  (*theWrappedObject)== arg__1;
}

QDomElement  PythonQtWrapper_QDomNode::previousSiblingElement(QDomNode* theWrappedObject, const QString&  tagName) const
{
return  theWrappedObject->previousSiblingElement(tagName);
}

QDomNodeList  PythonQtWrapper_QDomNode::childNodes(QDomNode* theWrappedObject) const
{
return  theWrappedObject->childNodes();
}

bool  PythonQtWrapper_QDomNode::hasAttributes(QDomNode* theWrappedObject) const
{
return  theWrappedObject->hasAttributes();
}

QDomElement  PythonQtWrapper_QDomNode::firstChildElement(QDomNode* theWrappedObject, const QString&  tagName) const
{
return  theWrappedObject->firstChildElement(tagName);
}

QDomNode  PythonQtWrapper_QDomNode::namedItem(QDomNode* theWrappedObject, const QString&  name) const
{
return  theWrappedObject->namedItem(name);
}

QDomNode  PythonQtWrapper_QDomNode::removeChild(QDomNode* theWrappedObject, const QDomNode&  oldChild)
{
return  theWrappedObject->removeChild(oldChild);
}

void PythonQtWrapper_QDomNode::setNodeValue(QDomNode* theWrappedObject, const QString&  arg__1)
{
 theWrappedObject->setNodeValue(arg__1);
}

bool  PythonQtWrapper_QDomNode::isSupported(QDomNode* theWrappedObject, const QString&  feature, const QString&  version) const
{
return  theWrappedObject->isSupported(feature, version);
}

void PythonQtWrapper_QDomNode::save(QDomNode* theWrappedObject, QTextStream&  arg__1, int  arg__2) const
{
 theWrappedObject->save(arg__1, arg__2);
}

bool  PythonQtWrapper_QDomNode::isAttr(QDomNode* theWrappedObject) const
{
return  theWrappedObject->isAttr();
}

bool  PythonQtWrapper_QDomNode::isProcessingInstruction(QDomNode* theWrappedObject) const
{
return  theWrappedObject->isProcessingInstruction();
}

QDomNode  PythonQtWrapper_QDomNode::cloneNode(QDomNode* theWrappedObject, bool  deep) const
{
return  theWrappedObject->cloneNode(deep);
}

bool  PythonQtWrapper_QDomNode::isDocumentType(QDomNode* theWrappedObject) const
{
return  theWrappedObject->isDocumentType();
}

QDomNode  PythonQtWrapper_QDomNode::parentNode(QDomNode* theWrappedObject) const
{
return  theWrappedObject->parentNode();
}

QDomNode  PythonQtWrapper_QDomNode::insertAfter(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  refChild)
{
return  theWrappedObject->insertAfter(newChild, refChild);
}

void PythonQtWrapper_QDomNode::setPrefix(QDomNode* theWrappedObject, const QString&  pre)
{
 theWrappedObject->setPrefix(pre);
}

QDomComment  PythonQtWrapper_QDomNode::toComment(QDomNode* theWrappedObject) const
{
return  theWrappedObject->toComment();
}

bool  PythonQtWrapper_QDomNode::isNull(QDomNode* theWrappedObject) const
{
return  theWrappedObject->isNull();
}

QString  PythonQtWrapper_QDomNode::localName(QDomNode* theWrappedObject) const
{
return  theWrappedObject->localName();
}

bool  PythonQtWrapper_QDomNode::isComment(QDomNode* theWrappedObject) const
{
return  theWrappedObject->isComment();
}

int  PythonQtWrapper_QDomNode::lineNumber(QDomNode* theWrappedObject) const
{
return  theWrappedObject->lineNumber();
}

QDomNode  PythonQtWrapper_QDomNode::previousSibling(QDomNode* theWrappedObject) const
{
return  theWrappedObject->previousSibling();
}

void PythonQtWrapper_QDomNode::normalize(QDomNode* theWrappedObject)
{
 theWrappedObject->normalize();
}

QDomProcessingInstruction  PythonQtWrapper_QDomNode::toProcessingInstruction(QDomNode* theWrappedObject) const
{
return  theWrappedObject->toProcessingInstruction();
}

QDomNode  PythonQtWrapper_QDomNode::lastChild(QDomNode* theWrappedObject) const
{
return  theWrappedObject->lastChild();
}

QDomCharacterData  PythonQtWrapper_QDomNode::toCharacterData(QDomNode* theWrappedObject) const
{
return  theWrappedObject->toCharacterData();
}

QDomNode  PythonQtWrapper_QDomNode::firstChild(QDomNode* theWrappedObject) const
{
return  theWrappedObject->firstChild();
}

QDomDocument  PythonQtWrapper_QDomNode::ownerDocument(QDomNode* theWrappedObject) const
{
return  theWrappedObject->ownerDocument();
}

QString  PythonQtWrapper_QDomNode::prefix(QDomNode* theWrappedObject) const
{
return  theWrappedObject->prefix();
}

QDomElement  PythonQtWrapper_QDomNode::toElement(QDomNode* theWrappedObject) const
{
return  theWrappedObject->toElement();
}

QDomNotation  PythonQtWrapper_QDomNode::toNotation(QDomNode* theWrappedObject) const
{
return  theWrappedObject->toNotation();
}

void PythonQtWrapper_QDomNode::clear(QDomNode* theWrappedObject)
{
 theWrappedObject->clear();
}

void PythonQtWrapper_QDomNode::save(QDomNode* theWrappedObject, QTextStream&  arg__1, int  arg__2, QDomNode::EncodingPolicy  arg__3) const
{
 theWrappedObject->save(arg__1, arg__2, arg__3);
}

QDomNode  PythonQtWrapper_QDomNode::nextSibling(QDomNode* theWrappedObject) const
{
return  theWrappedObject->nextSibling();
}

bool  PythonQtWrapper_QDomNode::isDocument(QDomNode* theWrappedObject) const
{
return  theWrappedObject->isDocument();
}

bool  PythonQtWrapper_QDomNode::isEntity(QDomNode* theWrappedObject) const
{
return  theWrappedObject->isEntity();
}

QDomEntity  PythonQtWrapper_QDomNode::toEntity(QDomNode* theWrappedObject) const
{
return  theWrappedObject->toEntity();
}

bool  PythonQtWrapper_QDomNode::isEntityReference(QDomNode* theWrappedObject) const
{
return  theWrappedObject->isEntityReference();
}

QDomNode  PythonQtWrapper_QDomNode::insertBefore(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  refChild)
{
return  theWrappedObject->insertBefore(newChild, refChild);
}

QString  PythonQtWrapper_QDomNode::namespaceURI(QDomNode* theWrappedObject) const
{
return  theWrappedObject->namespaceURI();
}

QDomDocumentType  PythonQtWrapper_QDomNode::toDocumentType(QDomNode* theWrappedObject) const
{
return  theWrappedObject->toDocumentType();
}

int  PythonQtWrapper_QDomNode::columnNumber(QDomNode* theWrappedObject) const
{
return  theWrappedObject->columnNumber();
}

QString  PythonQtWrapper_QDomNode::nodeValue(QDomNode* theWrappedObject) const
{
return  theWrappedObject->nodeValue();
}

QString  PythonQtWrapper_QDomNode::nodeName(QDomNode* theWrappedObject) const
{
return  theWrappedObject->nodeName();
}

QDomDocument  PythonQtWrapper_QDomNode::toDocument(QDomNode* theWrappedObject) const
{
return  theWrappedObject->toDocument();
}

QDomText  PythonQtWrapper_QDomNode::toText(QDomNode* theWrappedObject) const
{
return  theWrappedObject->toText();
}

void PythonQtWrapper_QDomNode::writeTo(QDomNode* theWrappedObject, QTextStream&  arg__1)
{
arg__1 <<  (*theWrappedObject);
}

