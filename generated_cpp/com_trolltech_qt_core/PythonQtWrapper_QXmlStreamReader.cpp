#include "PythonQtWrapper_QXmlStreamReader.h"

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qvector.h>
#include <qxmlstream.h>

QXmlStreamReader* PythonQtWrapper_QXmlStreamReader::new_QXmlStreamReader()
{ 
return new QXmlStreamReader(); }

QXmlStreamReader* PythonQtWrapper_QXmlStreamReader::new_QXmlStreamReader(QIODevice*  device)
{ 
return new QXmlStreamReader(device); }

QXmlStreamReader* PythonQtWrapper_QXmlStreamReader::new_QXmlStreamReader(const QByteArray&  data)
{ 
return new QXmlStreamReader(data); }

QXmlStreamReader* PythonQtWrapper_QXmlStreamReader::new_QXmlStreamReader(const QString&  data)
{ 
return new QXmlStreamReader(data); }

void PythonQtWrapper_QXmlStreamReader::addData(QXmlStreamReader* theWrappedObject, const QByteArray&  data)
{
theWrappedObject->addData(data);
}

void PythonQtWrapper_QXmlStreamReader::addData(QXmlStreamReader* theWrappedObject, const QString&  data)
{
theWrappedObject->addData(data);
}

void PythonQtWrapper_QXmlStreamReader::addExtraNamespaceDeclaration(QXmlStreamReader* theWrappedObject, const QXmlStreamNamespaceDeclaration&  extraNamespaceDeclaraction)
{
theWrappedObject->addExtraNamespaceDeclaration(extraNamespaceDeclaraction);
}

void PythonQtWrapper_QXmlStreamReader::addExtraNamespaceDeclarations(QXmlStreamReader* theWrappedObject, const QVector<QXmlStreamNamespaceDeclaration >&  extraNamespaceDeclaractions)
{
theWrappedObject->addExtraNamespaceDeclarations(extraNamespaceDeclaractions);
}

bool  PythonQtWrapper_QXmlStreamReader::atEnd(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->atEnd();
}

QXmlStreamAttributes  PythonQtWrapper_QXmlStreamReader::attributes(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->attributes();
}

qint64  PythonQtWrapper_QXmlStreamReader::characterOffset(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->characterOffset();
}

void PythonQtWrapper_QXmlStreamReader::clear(QXmlStreamReader* theWrappedObject)
{
theWrappedObject->clear();
}

qint64  PythonQtWrapper_QXmlStreamReader::columnNumber(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->columnNumber();
}

QIODevice*  PythonQtWrapper_QXmlStreamReader::device(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->device();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::documentEncoding(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->documentEncoding();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::documentVersion(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->documentVersion();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::dtdName(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->dtdName();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::dtdPublicId(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->dtdPublicId();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::dtdSystemId(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->dtdSystemId();
}

QVector<QXmlStreamEntityDeclaration >  PythonQtWrapper_QXmlStreamReader::entityDeclarations(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->entityDeclarations();
}

QXmlStreamEntityResolver*  PythonQtWrapper_QXmlStreamReader::entityResolver(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->entityResolver();
}

QXmlStreamReader::Error  PythonQtWrapper_QXmlStreamReader::error(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->error();
}

QString  PythonQtWrapper_QXmlStreamReader::errorString(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->errorString();
}

bool  PythonQtWrapper_QXmlStreamReader::hasError(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->hasError();
}

bool  PythonQtWrapper_QXmlStreamReader::isCDATA(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->isCDATA();
}

bool  PythonQtWrapper_QXmlStreamReader::isCharacters(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->isCharacters();
}

bool  PythonQtWrapper_QXmlStreamReader::isComment(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->isComment();
}

bool  PythonQtWrapper_QXmlStreamReader::isDTD(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->isDTD();
}

bool  PythonQtWrapper_QXmlStreamReader::isEndDocument(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->isEndDocument();
}

bool  PythonQtWrapper_QXmlStreamReader::isEndElement(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->isEndElement();
}

bool  PythonQtWrapper_QXmlStreamReader::isEntityReference(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->isEntityReference();
}

bool  PythonQtWrapper_QXmlStreamReader::isProcessingInstruction(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->isProcessingInstruction();
}

bool  PythonQtWrapper_QXmlStreamReader::isStandaloneDocument(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->isStandaloneDocument();
}

bool  PythonQtWrapper_QXmlStreamReader::isStartDocument(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->isStartDocument();
}

bool  PythonQtWrapper_QXmlStreamReader::isStartElement(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->isStartElement();
}

bool  PythonQtWrapper_QXmlStreamReader::isWhitespace(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->isWhitespace();
}

qint64  PythonQtWrapper_QXmlStreamReader::lineNumber(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->lineNumber();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::name(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->name();
}

QVector<QXmlStreamNamespaceDeclaration >  PythonQtWrapper_QXmlStreamReader::namespaceDeclarations(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->namespaceDeclarations();
}

bool  PythonQtWrapper_QXmlStreamReader::namespaceProcessing(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->namespaceProcessing();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::namespaceUri(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->namespaceUri();
}

QVector<QXmlStreamNotationDeclaration >  PythonQtWrapper_QXmlStreamReader::notationDeclarations(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->notationDeclarations();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::prefix(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->prefix();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::processingInstructionData(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->processingInstructionData();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::processingInstructionTarget(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->processingInstructionTarget();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::qualifiedName(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->qualifiedName();
}

void PythonQtWrapper_QXmlStreamReader::raiseError(QXmlStreamReader* theWrappedObject, const QString&  message)
{
theWrappedObject->raiseError(message);
}

QString  PythonQtWrapper_QXmlStreamReader::readElementText(QXmlStreamReader* theWrappedObject)
{
return theWrappedObject->readElementText();
}

QXmlStreamReader::TokenType  PythonQtWrapper_QXmlStreamReader::readNext(QXmlStreamReader* theWrappedObject)
{
return theWrappedObject->readNext();
}

void PythonQtWrapper_QXmlStreamReader::setDevice(QXmlStreamReader* theWrappedObject, QIODevice*  device)
{
theWrappedObject->setDevice(device);
}

void PythonQtWrapper_QXmlStreamReader::setEntityResolver(QXmlStreamReader* theWrappedObject, QXmlStreamEntityResolver*  resolver)
{
theWrappedObject->setEntityResolver(resolver);
}

void PythonQtWrapper_QXmlStreamReader::setNamespaceProcessing(QXmlStreamReader* theWrappedObject, bool  arg__1)
{
theWrappedObject->setNamespaceProcessing(arg__1);
}

QStringRef  PythonQtWrapper_QXmlStreamReader::text(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->text();
}

QString  PythonQtWrapper_QXmlStreamReader::tokenString(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->tokenString();
}

QXmlStreamReader::TokenType  PythonQtWrapper_QXmlStreamReader::tokenType(QXmlStreamReader* theWrappedObject) const
{
return theWrappedObject->tokenType();
}

