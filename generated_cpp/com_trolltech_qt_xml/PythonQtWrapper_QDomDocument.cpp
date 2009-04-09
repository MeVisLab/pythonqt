#include "PythonQtWrapper_QDomDocument.h"

#include <QVariant>
#include <qbytearray.h>
#include <qdom.h>
#include <qiodevice.h>
#include <qtextstream.h>
#include <qxml.h>

QDomDocument* PythonQtWrapper_QDomDocument::new_QDomDocument()
{ 
return new QDomDocument(); }

QDomDocument* PythonQtWrapper_QDomDocument::new_QDomDocument(const QDomDocument&  x)
{ 
return new QDomDocument(x); }

QDomDocument* PythonQtWrapper_QDomDocument::new_QDomDocument(const QDomDocumentType&  doctype)
{ 
return new QDomDocument(doctype); }

QDomDocument* PythonQtWrapper_QDomDocument::new_QDomDocument(const QString&  name)
{ 
return new QDomDocument(name); }

QDomAttr  PythonQtWrapper_QDomDocument::createAttribute(QDomDocument* theWrappedObject, const QString&  name)
{
return theWrappedObject->createAttribute(name);
}

QDomAttr  PythonQtWrapper_QDomDocument::createAttributeNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  qName)
{
return theWrappedObject->createAttributeNS(nsURI, qName);
}

QDomCDATASection  PythonQtWrapper_QDomDocument::createCDATASection(QDomDocument* theWrappedObject, const QString&  data)
{
return theWrappedObject->createCDATASection(data);
}

QDomComment  PythonQtWrapper_QDomDocument::createComment(QDomDocument* theWrappedObject, const QString&  data)
{
return theWrappedObject->createComment(data);
}

QDomDocumentFragment  PythonQtWrapper_QDomDocument::createDocumentFragment(QDomDocument* theWrappedObject)
{
return theWrappedObject->createDocumentFragment();
}

QDomElement  PythonQtWrapper_QDomDocument::createElement(QDomDocument* theWrappedObject, const QString&  tagName)
{
return theWrappedObject->createElement(tagName);
}

QDomElement  PythonQtWrapper_QDomDocument::createElementNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  qName)
{
return theWrappedObject->createElementNS(nsURI, qName);
}

QDomEntityReference  PythonQtWrapper_QDomDocument::createEntityReference(QDomDocument* theWrappedObject, const QString&  name)
{
return theWrappedObject->createEntityReference(name);
}

QDomProcessingInstruction  PythonQtWrapper_QDomDocument::createProcessingInstruction(QDomDocument* theWrappedObject, const QString&  target, const QString&  data)
{
return theWrappedObject->createProcessingInstruction(target, data);
}

QDomText  PythonQtWrapper_QDomDocument::createTextNode(QDomDocument* theWrappedObject, const QString&  data)
{
return theWrappedObject->createTextNode(data);
}

QDomDocumentType  PythonQtWrapper_QDomDocument::doctype(QDomDocument* theWrappedObject) const
{
return theWrappedObject->doctype();
}

QDomElement  PythonQtWrapper_QDomDocument::documentElement(QDomDocument* theWrappedObject) const
{
return theWrappedObject->documentElement();
}

QDomElement  PythonQtWrapper_QDomDocument::elementById(QDomDocument* theWrappedObject, const QString&  elementId)
{
return theWrappedObject->elementById(elementId);
}

QDomNodeList  PythonQtWrapper_QDomDocument::elementsByTagName(QDomDocument* theWrappedObject, const QString&  tagname) const
{
return theWrappedObject->elementsByTagName(tagname);
}

QDomNodeList  PythonQtWrapper_QDomDocument::elementsByTagNameNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  localName)
{
return theWrappedObject->elementsByTagNameNS(nsURI, localName);
}

QDomImplementation  PythonQtWrapper_QDomDocument::implementation(QDomDocument* theWrappedObject) const
{
return theWrappedObject->implementation();
}

QDomNode  PythonQtWrapper_QDomDocument::importNode(QDomDocument* theWrappedObject, const QDomNode&  importedNode, bool  deep)
{
return theWrappedObject->importNode(importedNode, deep);
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, QIODevice*  dev, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
return theWrappedObject->setContent(dev, errorMsg, errorLine, errorColumn);
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, QIODevice*  dev, bool  namespaceProcessing, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
return theWrappedObject->setContent(dev, namespaceProcessing, errorMsg, errorLine, errorColumn);
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, QXmlInputSource*  source, QXmlReader*  reader, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
return theWrappedObject->setContent(source, reader, errorMsg, errorLine, errorColumn);
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, const QByteArray&  text, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
return theWrappedObject->setContent(text, errorMsg, errorLine, errorColumn);
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, const QByteArray&  text, bool  namespaceProcessing, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
return theWrappedObject->setContent(text, namespaceProcessing, errorMsg, errorLine, errorColumn);
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, const QString&  text, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
return theWrappedObject->setContent(text, errorMsg, errorLine, errorColumn);
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, const QString&  text, bool  namespaceProcessing, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
return theWrappedObject->setContent(text, namespaceProcessing, errorMsg, errorLine, errorColumn);
}

QByteArray  PythonQtWrapper_QDomDocument::toByteArray(QDomDocument* theWrappedObject, int  arg__1) const
{
return theWrappedObject->toByteArray(arg__1);
}

QString  PythonQtWrapper_QDomDocument::toString(QDomDocument* theWrappedObject, int  arg__1) const
{
return theWrappedObject->toString(arg__1);
}

