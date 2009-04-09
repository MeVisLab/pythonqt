#include "PythonQtWrapper_QXmlContentHandler.h"

#include <QVariant>
#include <qxml.h>

bool  PythonQtWrapper_QXmlContentHandler::characters(QXmlContentHandler* theWrappedObject, const QString&  ch)
{
return theWrappedObject->characters(ch);
}

bool  PythonQtWrapper_QXmlContentHandler::endDocument(QXmlContentHandler* theWrappedObject)
{
return theWrappedObject->endDocument();
}

bool  PythonQtWrapper_QXmlContentHandler::endElement(QXmlContentHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName)
{
return theWrappedObject->endElement(namespaceURI, localName, qName);
}

bool  PythonQtWrapper_QXmlContentHandler::endPrefixMapping(QXmlContentHandler* theWrappedObject, const QString&  prefix)
{
return theWrappedObject->endPrefixMapping(prefix);
}

QString  PythonQtWrapper_QXmlContentHandler::errorString(QXmlContentHandler* theWrappedObject) const
{
return theWrappedObject->errorString();
}

bool  PythonQtWrapper_QXmlContentHandler::ignorableWhitespace(QXmlContentHandler* theWrappedObject, const QString&  ch)
{
return theWrappedObject->ignorableWhitespace(ch);
}

bool  PythonQtWrapper_QXmlContentHandler::processingInstruction(QXmlContentHandler* theWrappedObject, const QString&  target, const QString&  data)
{
return theWrappedObject->processingInstruction(target, data);
}

void PythonQtWrapper_QXmlContentHandler::setDocumentLocator(QXmlContentHandler* theWrappedObject, QXmlLocator*  locator)
{
theWrappedObject->setDocumentLocator(locator);
}

bool  PythonQtWrapper_QXmlContentHandler::skippedEntity(QXmlContentHandler* theWrappedObject, const QString&  name)
{
return theWrappedObject->skippedEntity(name);
}

bool  PythonQtWrapper_QXmlContentHandler::startDocument(QXmlContentHandler* theWrappedObject)
{
return theWrappedObject->startDocument();
}

bool  PythonQtWrapper_QXmlContentHandler::startElement(QXmlContentHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts)
{
return theWrappedObject->startElement(namespaceURI, localName, qName, atts);
}

bool  PythonQtWrapper_QXmlContentHandler::startPrefixMapping(QXmlContentHandler* theWrappedObject, const QString&  prefix, const QString&  uri)
{
return theWrappedObject->startPrefixMapping(prefix, uri);
}

