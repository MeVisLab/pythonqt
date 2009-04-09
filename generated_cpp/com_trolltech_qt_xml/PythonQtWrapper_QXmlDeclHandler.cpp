#include "PythonQtWrapper_QXmlDeclHandler.h"

#include <QVariant>

bool  PythonQtWrapper_QXmlDeclHandler::attributeDecl(QXmlDeclHandler* theWrappedObject, const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value)
{
return theWrappedObject->attributeDecl(eName, aName, type, valueDefault, value);
}

QString  PythonQtWrapper_QXmlDeclHandler::errorString(QXmlDeclHandler* theWrappedObject) const
{
return theWrappedObject->errorString();
}

bool  PythonQtWrapper_QXmlDeclHandler::externalEntityDecl(QXmlDeclHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId)
{
return theWrappedObject->externalEntityDecl(name, publicId, systemId);
}

bool  PythonQtWrapper_QXmlDeclHandler::internalEntityDecl(QXmlDeclHandler* theWrappedObject, const QString&  name, const QString&  value)
{
return theWrappedObject->internalEntityDecl(name, value);
}

