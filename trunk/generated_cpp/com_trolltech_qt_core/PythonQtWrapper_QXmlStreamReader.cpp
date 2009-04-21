#include "PythonQtWrapper_QXmlStreamReader.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
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

QString  PythonQtWrapper_QXmlStreamReader::errorString(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->errorString();
}

void PythonQtWrapper_QXmlStreamReader::addExtraNamespaceDeclarations(QXmlStreamReader* theWrappedObject, const QVector<QXmlStreamNamespaceDeclaration >&  extraNamespaceDeclaractions)
{
 theWrappedObject->addExtraNamespaceDeclarations(extraNamespaceDeclaractions);
}

bool  PythonQtWrapper_QXmlStreamReader::isWhitespace(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->isWhitespace();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::documentEncoding(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->documentEncoding();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::name(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->name();
}

QXmlStreamAttributes  PythonQtWrapper_QXmlStreamReader::attributes(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->attributes();
}

QXmlStreamEntityResolver*  PythonQtWrapper_QXmlStreamReader::entityResolver(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->entityResolver();
}

bool  PythonQtWrapper_QXmlStreamReader::namespaceProcessing(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->namespaceProcessing();
}

bool  PythonQtWrapper_QXmlStreamReader::isEndElement(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->isEndElement();
}

qint64  PythonQtWrapper_QXmlStreamReader::lineNumber(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->lineNumber();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::dtdSystemId(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->dtdSystemId();
}

QVector<QXmlStreamEntityDeclaration >  PythonQtWrapper_QXmlStreamReader::entityDeclarations(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->entityDeclarations();
}

bool  PythonQtWrapper_QXmlStreamReader::isEntityReference(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->isEntityReference();
}

bool  PythonQtWrapper_QXmlStreamReader::isStandaloneDocument(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->isStandaloneDocument();
}

qint64  PythonQtWrapper_QXmlStreamReader::characterOffset(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->characterOffset();
}

QIODevice*  PythonQtWrapper_QXmlStreamReader::device(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->device();
}

QString  PythonQtWrapper_QXmlStreamReader::readElementText(QXmlStreamReader* theWrappedObject)
{
return  theWrappedObject->readElementText();
}

QVector<QXmlStreamNotationDeclaration >  PythonQtWrapper_QXmlStreamReader::notationDeclarations(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->notationDeclarations();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::dtdPublicId(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->dtdPublicId();
}

void PythonQtWrapper_QXmlStreamReader::addData(QXmlStreamReader* theWrappedObject, const QByteArray&  data)
{
 theWrappedObject->addData(data);
}

QXmlStreamReader::TokenType  PythonQtWrapper_QXmlStreamReader::tokenType(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->tokenType();
}

QVector<QXmlStreamNamespaceDeclaration >  PythonQtWrapper_QXmlStreamReader::namespaceDeclarations(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->namespaceDeclarations();
}

bool  PythonQtWrapper_QXmlStreamReader::isCDATA(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->isCDATA();
}

bool  PythonQtWrapper_QXmlStreamReader::isStartElement(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->isStartElement();
}

void PythonQtWrapper_QXmlStreamReader::setNamespaceProcessing(QXmlStreamReader* theWrappedObject, bool  arg__1)
{
 theWrappedObject->setNamespaceProcessing(arg__1);
}

void PythonQtWrapper_QXmlStreamReader::addExtraNamespaceDeclaration(QXmlStreamReader* theWrappedObject, const QXmlStreamNamespaceDeclaration&  extraNamespaceDeclaraction)
{
 theWrappedObject->addExtraNamespaceDeclaration(extraNamespaceDeclaraction);
}

QStringRef  PythonQtWrapper_QXmlStreamReader::prefix(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->prefix();
}

void PythonQtWrapper_QXmlStreamReader::setEntityResolver(QXmlStreamReader* theWrappedObject, QXmlStreamEntityResolver*  resolver)
{
 theWrappedObject->setEntityResolver(resolver);
}

QStringRef  PythonQtWrapper_QXmlStreamReader::dtdName(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->dtdName();
}

void PythonQtWrapper_QXmlStreamReader::raiseError(QXmlStreamReader* theWrappedObject, const QString&  message)
{
 theWrappedObject->raiseError(message);
}

QStringRef  PythonQtWrapper_QXmlStreamReader::documentVersion(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->documentVersion();
}

QString  PythonQtWrapper_QXmlStreamReader::tokenString(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->tokenString();
}

void PythonQtWrapper_QXmlStreamReader::addData(QXmlStreamReader* theWrappedObject, const QString&  data)
{
 theWrappedObject->addData(data);
}

qint64  PythonQtWrapper_QXmlStreamReader::columnNumber(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->columnNumber();
}

bool  PythonQtWrapper_QXmlStreamReader::isEndDocument(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->isEndDocument();
}

bool  PythonQtWrapper_QXmlStreamReader::isStartDocument(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->isStartDocument();
}

bool  PythonQtWrapper_QXmlStreamReader::isDTD(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->isDTD();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::processingInstructionTarget(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->processingInstructionTarget();
}

QXmlStreamReader::TokenType  PythonQtWrapper_QXmlStreamReader::readNext(QXmlStreamReader* theWrappedObject)
{
return  theWrappedObject->readNext();
}

bool  PythonQtWrapper_QXmlStreamReader::isProcessingInstruction(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->isProcessingInstruction();
}

bool  PythonQtWrapper_QXmlStreamReader::hasError(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->hasError();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::processingInstructionData(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->processingInstructionData();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::namespaceUri(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->namespaceUri();
}

bool  PythonQtWrapper_QXmlStreamReader::atEnd(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->atEnd();
}

QXmlStreamReader::Error  PythonQtWrapper_QXmlStreamReader::error(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->error();
}

void PythonQtWrapper_QXmlStreamReader::setDevice(QXmlStreamReader* theWrappedObject, QIODevice*  device)
{
 theWrappedObject->setDevice(device);
}

bool  PythonQtWrapper_QXmlStreamReader::isCharacters(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->isCharacters();
}

bool  PythonQtWrapper_QXmlStreamReader::isComment(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->isComment();
}

void PythonQtWrapper_QXmlStreamReader::clear(QXmlStreamReader* theWrappedObject)
{
 theWrappedObject->clear();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::qualifiedName(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->qualifiedName();
}

QStringRef  PythonQtWrapper_QXmlStreamReader::text(QXmlStreamReader* theWrappedObject) const
{
return  theWrappedObject->text();
}

