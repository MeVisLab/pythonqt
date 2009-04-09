#include "PythonQtWrapper_QXmlLexicalHandler.h"

#include <QVariant>

bool  PythonQtWrapper_QXmlLexicalHandler::comment(QXmlLexicalHandler* theWrappedObject, const QString&  ch)
{
return theWrappedObject->comment(ch);
}

bool  PythonQtWrapper_QXmlLexicalHandler::endCDATA(QXmlLexicalHandler* theWrappedObject)
{
return theWrappedObject->endCDATA();
}

bool  PythonQtWrapper_QXmlLexicalHandler::endDTD(QXmlLexicalHandler* theWrappedObject)
{
return theWrappedObject->endDTD();
}

bool  PythonQtWrapper_QXmlLexicalHandler::endEntity(QXmlLexicalHandler* theWrappedObject, const QString&  name)
{
return theWrappedObject->endEntity(name);
}

QString  PythonQtWrapper_QXmlLexicalHandler::errorString(QXmlLexicalHandler* theWrappedObject) const
{
return theWrappedObject->errorString();
}

bool  PythonQtWrapper_QXmlLexicalHandler::startCDATA(QXmlLexicalHandler* theWrappedObject)
{
return theWrappedObject->startCDATA();
}

bool  PythonQtWrapper_QXmlLexicalHandler::startDTD(QXmlLexicalHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId)
{
return theWrappedObject->startDTD(name, publicId, systemId);
}

bool  PythonQtWrapper_QXmlLexicalHandler::startEntity(QXmlLexicalHandler* theWrappedObject, const QString&  name)
{
return theWrappedObject->startEntity(name);
}

