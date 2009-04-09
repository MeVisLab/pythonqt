#include "PythonQtWrapper_QXmlSimpleReader.h"

#include <QVariant>
#include <qxml.h>

QXmlSimpleReader* PythonQtWrapper_QXmlSimpleReader::new_QXmlSimpleReader()
{ 
return new QXmlSimpleReader(); }

QXmlDTDHandler*  PythonQtWrapper_QXmlSimpleReader::DTDHandler(QXmlSimpleReader* theWrappedObject) const
{
return theWrappedObject->DTDHandler();
}

QXmlContentHandler*  PythonQtWrapper_QXmlSimpleReader::contentHandler(QXmlSimpleReader* theWrappedObject) const
{
return theWrappedObject->contentHandler();
}

QXmlDeclHandler*  PythonQtWrapper_QXmlSimpleReader::declHandler(QXmlSimpleReader* theWrappedObject) const
{
return theWrappedObject->declHandler();
}

QXmlEntityResolver*  PythonQtWrapper_QXmlSimpleReader::entityResolver(QXmlSimpleReader* theWrappedObject) const
{
return theWrappedObject->entityResolver();
}

QXmlErrorHandler*  PythonQtWrapper_QXmlSimpleReader::errorHandler(QXmlSimpleReader* theWrappedObject) const
{
return theWrappedObject->errorHandler();
}

bool  PythonQtWrapper_QXmlSimpleReader::feature(QXmlSimpleReader* theWrappedObject, const QString&  name, bool*  ok) const
{
return theWrappedObject->feature(name, ok);
}

bool  PythonQtWrapper_QXmlSimpleReader::hasFeature(QXmlSimpleReader* theWrappedObject, const QString&  name) const
{
return theWrappedObject->hasFeature(name);
}

bool  PythonQtWrapper_QXmlSimpleReader::hasProperty(QXmlSimpleReader* theWrappedObject, const QString&  name) const
{
return theWrappedObject->hasProperty(name);
}

QXmlLexicalHandler*  PythonQtWrapper_QXmlSimpleReader::lexicalHandler(QXmlSimpleReader* theWrappedObject) const
{
return theWrappedObject->lexicalHandler();
}

bool  PythonQtWrapper_QXmlSimpleReader::parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource&  input)
{
return theWrappedObject->parse(input);
}

bool  PythonQtWrapper_QXmlSimpleReader::parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource*  input)
{
return theWrappedObject->parse(input);
}

bool  PythonQtWrapper_QXmlSimpleReader::parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource*  input, bool  incremental)
{
return theWrappedObject->parse(input, incremental);
}

bool  PythonQtWrapper_QXmlSimpleReader::parseContinue(QXmlSimpleReader* theWrappedObject)
{
return theWrappedObject->parseContinue();
}

void*  PythonQtWrapper_QXmlSimpleReader::property(QXmlSimpleReader* theWrappedObject, const QString&  name, bool*  ok) const
{
return theWrappedObject->property(name, ok);
}

void PythonQtWrapper_QXmlSimpleReader::setContentHandler(QXmlSimpleReader* theWrappedObject, QXmlContentHandler*  handler)
{
theWrappedObject->setContentHandler(handler);
}

void PythonQtWrapper_QXmlSimpleReader::setDTDHandler(QXmlSimpleReader* theWrappedObject, QXmlDTDHandler*  handler)
{
theWrappedObject->setDTDHandler(handler);
}

void PythonQtWrapper_QXmlSimpleReader::setDeclHandler(QXmlSimpleReader* theWrappedObject, QXmlDeclHandler*  handler)
{
theWrappedObject->setDeclHandler(handler);
}

void PythonQtWrapper_QXmlSimpleReader::setEntityResolver(QXmlSimpleReader* theWrappedObject, QXmlEntityResolver*  handler)
{
theWrappedObject->setEntityResolver(handler);
}

void PythonQtWrapper_QXmlSimpleReader::setErrorHandler(QXmlSimpleReader* theWrappedObject, QXmlErrorHandler*  handler)
{
theWrappedObject->setErrorHandler(handler);
}

void PythonQtWrapper_QXmlSimpleReader::setFeature(QXmlSimpleReader* theWrappedObject, const QString&  name, bool  value)
{
theWrappedObject->setFeature(name, value);
}

void PythonQtWrapper_QXmlSimpleReader::setLexicalHandler(QXmlSimpleReader* theWrappedObject, QXmlLexicalHandler*  handler)
{
theWrappedObject->setLexicalHandler(handler);
}

void PythonQtWrapper_QXmlSimpleReader::setProperty(QXmlSimpleReader* theWrappedObject, const QString&  name, void*  value)
{
theWrappedObject->setProperty(name, value);
}

