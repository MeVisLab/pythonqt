#include "PythonQtWrapper_QXmlDTDHandler.h"

#include <QVariant>

QString  PythonQtWrapper_QXmlDTDHandler::errorString(QXmlDTDHandler* theWrappedObject) const
{
return theWrappedObject->errorString();
}

bool  PythonQtWrapper_QXmlDTDHandler::notationDecl(QXmlDTDHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId)
{
return theWrappedObject->notationDecl(name, publicId, systemId);
}

bool  PythonQtWrapper_QXmlDTDHandler::unparsedEntityDecl(QXmlDTDHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName)
{
return theWrappedObject->unparsedEntityDecl(name, publicId, systemId, notationName);
}

