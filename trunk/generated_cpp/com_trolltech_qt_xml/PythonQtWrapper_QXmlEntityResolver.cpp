#include "PythonQtWrapper_QXmlEntityResolver.h"

#include <QVariant>
#include <qxml.h>

QString  PythonQtWrapper_QXmlEntityResolver::errorString(QXmlEntityResolver* theWrappedObject) const
{
return theWrappedObject->errorString();
}

bool  PythonQtWrapper_QXmlEntityResolver::resolveEntity(QXmlEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret)
{
return theWrappedObject->resolveEntity(publicId, systemId, ret);
}

