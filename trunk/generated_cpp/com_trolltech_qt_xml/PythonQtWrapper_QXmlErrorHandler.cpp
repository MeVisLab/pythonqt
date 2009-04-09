#include "PythonQtWrapper_QXmlErrorHandler.h"

#include <QVariant>
#include <qxml.h>

bool  PythonQtWrapper_QXmlErrorHandler::error(QXmlErrorHandler* theWrappedObject, const QXmlParseException&  exception)
{
return theWrappedObject->error(exception);
}

QString  PythonQtWrapper_QXmlErrorHandler::errorString(QXmlErrorHandler* theWrappedObject) const
{
return theWrappedObject->errorString();
}

bool  PythonQtWrapper_QXmlErrorHandler::fatalError(QXmlErrorHandler* theWrappedObject, const QXmlParseException&  exception)
{
return theWrappedObject->fatalError(exception);
}

bool  PythonQtWrapper_QXmlErrorHandler::warning(QXmlErrorHandler* theWrappedObject, const QXmlParseException&  exception)
{
return theWrappedObject->warning(exception);
}

