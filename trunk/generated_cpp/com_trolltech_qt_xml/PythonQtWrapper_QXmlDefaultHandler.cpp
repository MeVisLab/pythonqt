#include "PythonQtWrapper_QXmlDefaultHandler.h"

#include <QVariant>
#include <qxml.h>

QXmlDefaultHandler* PythonQtWrapper_QXmlDefaultHandler::new_QXmlDefaultHandler()
{ 
return new QXmlDefaultHandler(); }

bool  PythonQtWrapper_QXmlDefaultHandler::attributeDecl(QXmlDefaultHandler* theWrappedObject, const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value)
{
return theWrappedObject->attributeDecl(eName, aName, type, valueDefault, value);
}

bool  PythonQtWrapper_QXmlDefaultHandler::characters(QXmlDefaultHandler* theWrappedObject, const QString&  ch)
{
return theWrappedObject->characters(ch);
}

bool  PythonQtWrapper_QXmlDefaultHandler::comment(QXmlDefaultHandler* theWrappedObject, const QString&  ch)
{
return theWrappedObject->comment(ch);
}

bool  PythonQtWrapper_QXmlDefaultHandler::endCDATA(QXmlDefaultHandler* theWrappedObject)
{
return theWrappedObject->endCDATA();
}

bool  PythonQtWrapper_QXmlDefaultHandler::endDTD(QXmlDefaultHandler* theWrappedObject)
{
return theWrappedObject->endDTD();
}

bool  PythonQtWrapper_QXmlDefaultHandler::endDocument(QXmlDefaultHandler* theWrappedObject)
{
return theWrappedObject->endDocument();
}

bool  PythonQtWrapper_QXmlDefaultHandler::endElement(QXmlDefaultHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName)
{
return theWrappedObject->endElement(namespaceURI, localName, qName);
}

bool  PythonQtWrapper_QXmlDefaultHandler::endEntity(QXmlDefaultHandler* theWrappedObject, const QString&  name)
{
return theWrappedObject->endEntity(name);
}

bool  PythonQtWrapper_QXmlDefaultHandler::endPrefixMapping(QXmlDefaultHandler* theWrappedObject, const QString&  prefix)
{
return theWrappedObject->endPrefixMapping(prefix);
}

bool  PythonQtWrapper_QXmlDefaultHandler::error(QXmlDefaultHandler* theWrappedObject, const QXmlParseException&  exception)
{
return theWrappedObject->error(exception);
}

QString  PythonQtWrapper_QXmlDefaultHandler::errorString(QXmlDefaultHandler* theWrappedObject) const
{
return theWrappedObject->errorString();
}

bool  PythonQtWrapper_QXmlDefaultHandler::externalEntityDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId)
{
return theWrappedObject->externalEntityDecl(name, publicId, systemId);
}

bool  PythonQtWrapper_QXmlDefaultHandler::fatalError(QXmlDefaultHandler* theWrappedObject, const QXmlParseException&  exception)
{
return theWrappedObject->fatalError(exception);
}

bool  PythonQtWrapper_QXmlDefaultHandler::ignorableWhitespace(QXmlDefaultHandler* theWrappedObject, const QString&  ch)
{
return theWrappedObject->ignorableWhitespace(ch);
}

bool  PythonQtWrapper_QXmlDefaultHandler::internalEntityDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  value)
{
return theWrappedObject->internalEntityDecl(name, value);
}

bool  PythonQtWrapper_QXmlDefaultHandler::notationDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId)
{
return theWrappedObject->notationDecl(name, publicId, systemId);
}

bool  PythonQtWrapper_QXmlDefaultHandler::processingInstruction(QXmlDefaultHandler* theWrappedObject, const QString&  target, const QString&  data)
{
return theWrappedObject->processingInstruction(target, data);
}

bool  PythonQtWrapper_QXmlDefaultHandler::resolveEntity(QXmlDefaultHandler* theWrappedObject, const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret)
{
return theWrappedObject->resolveEntity(publicId, systemId, ret);
}

void PythonQtWrapper_QXmlDefaultHandler::setDocumentLocator(QXmlDefaultHandler* theWrappedObject, QXmlLocator*  locator)
{
theWrappedObject->setDocumentLocator(locator);
}

bool  PythonQtWrapper_QXmlDefaultHandler::skippedEntity(QXmlDefaultHandler* theWrappedObject, const QString&  name)
{
return theWrappedObject->skippedEntity(name);
}

bool  PythonQtWrapper_QXmlDefaultHandler::startCDATA(QXmlDefaultHandler* theWrappedObject)
{
return theWrappedObject->startCDATA();
}

bool  PythonQtWrapper_QXmlDefaultHandler::startDTD(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId)
{
return theWrappedObject->startDTD(name, publicId, systemId);
}

bool  PythonQtWrapper_QXmlDefaultHandler::startDocument(QXmlDefaultHandler* theWrappedObject)
{
return theWrappedObject->startDocument();
}

bool  PythonQtWrapper_QXmlDefaultHandler::startElement(QXmlDefaultHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts)
{
return theWrappedObject->startElement(namespaceURI, localName, qName, atts);
}

bool  PythonQtWrapper_QXmlDefaultHandler::startEntity(QXmlDefaultHandler* theWrappedObject, const QString&  name)
{
return theWrappedObject->startEntity(name);
}

bool  PythonQtWrapper_QXmlDefaultHandler::startPrefixMapping(QXmlDefaultHandler* theWrappedObject, const QString&  prefix, const QString&  uri)
{
return theWrappedObject->startPrefixMapping(prefix, uri);
}

bool  PythonQtWrapper_QXmlDefaultHandler::unparsedEntityDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName)
{
return theWrappedObject->unparsedEntityDecl(name, publicId, systemId, notationName);
}

bool  PythonQtWrapper_QXmlDefaultHandler::warning(QXmlDefaultHandler* theWrappedObject, const QXmlParseException&  exception)
{
return theWrappedObject->warning(exception);
}

