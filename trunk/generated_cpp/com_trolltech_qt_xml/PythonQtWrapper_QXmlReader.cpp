#include "PythonQtWrapper_QXmlReader.h"

#include <QVariant>
#include <qxml.h>

QXmlDTDHandler*  PythonQtWrapper_QXmlReader::DTDHandler(QXmlReader* theWrappedObject) const
{
return theWrappedObject->DTDHandler();
}

QXmlContentHandler*  PythonQtWrapper_QXmlReader::contentHandler(QXmlReader* theWrappedObject) const
{
return theWrappedObject->contentHandler();
}

QXmlDeclHandler*  PythonQtWrapper_QXmlReader::declHandler(QXmlReader* theWrappedObject) const
{
return theWrappedObject->declHandler();
}

QXmlEntityResolver*  PythonQtWrapper_QXmlReader::entityResolver(QXmlReader* theWrappedObject) const
{
return theWrappedObject->entityResolver();
}

QXmlErrorHandler*  PythonQtWrapper_QXmlReader::errorHandler(QXmlReader* theWrappedObject) const
{
return theWrappedObject->errorHandler();
}

bool  PythonQtWrapper_QXmlReader::feature(QXmlReader* theWrappedObject, const QString&  name, bool*  ok) const
{
return theWrappedObject->feature(name, ok);
}

bool  PythonQtWrapper_QXmlReader::hasFeature(QXmlReader* theWrappedObject, const QString&  name) const
{
return theWrappedObject->hasFeature(name);
}

bool  PythonQtWrapper_QXmlReader::hasProperty(QXmlReader* theWrappedObject, const QString&  name) const
{
return theWrappedObject->hasProperty(name);
}

QXmlLexicalHandler*  PythonQtWrapper_QXmlReader::lexicalHandler(QXmlReader* theWrappedObject) const
{
return theWrappedObject->lexicalHandler();
}

bool  PythonQtWrapper_QXmlReader::parse(QXmlReader* theWrappedObject, const QXmlInputSource&  input)
{
return theWrappedObject->parse(input);
}

bool  PythonQtWrapper_QXmlReader::parse(QXmlReader* theWrappedObject, const QXmlInputSource*  input)
{
return theWrappedObject->parse(input);
}

void*  PythonQtWrapper_QXmlReader::property(QXmlReader* theWrappedObject, const QString&  name, bool*  ok) const
{
return theWrappedObject->property(name, ok);
}

void PythonQtWrapper_QXmlReader::setContentHandler(QXmlReader* theWrappedObject, QXmlContentHandler*  handler)
{
theWrappedObject->setContentHandler(handler);
}

void PythonQtWrapper_QXmlReader::setDTDHandler(QXmlReader* theWrappedObject, QXmlDTDHandler*  handler)
{
theWrappedObject->setDTDHandler(handler);
}

void PythonQtWrapper_QXmlReader::setDeclHandler(QXmlReader* theWrappedObject, QXmlDeclHandler*  handler)
{
theWrappedObject->setDeclHandler(handler);
}

void PythonQtWrapper_QXmlReader::setEntityResolver(QXmlReader* theWrappedObject, QXmlEntityResolver*  handler)
{
theWrappedObject->setEntityResolver(handler);
}

void PythonQtWrapper_QXmlReader::setErrorHandler(QXmlReader* theWrappedObject, QXmlErrorHandler*  handler)
{
theWrappedObject->setErrorHandler(handler);
}

void PythonQtWrapper_QXmlReader::setFeature(QXmlReader* theWrappedObject, const QString&  name, bool  value)
{
theWrappedObject->setFeature(name, value);
}

void PythonQtWrapper_QXmlReader::setLexicalHandler(QXmlReader* theWrappedObject, QXmlLexicalHandler*  handler)
{
theWrappedObject->setLexicalHandler(handler);
}

void PythonQtWrapper_QXmlReader::setProperty(QXmlReader* theWrappedObject, const QString&  name, void*  value)
{
theWrappedObject->setProperty(name, value);
}

