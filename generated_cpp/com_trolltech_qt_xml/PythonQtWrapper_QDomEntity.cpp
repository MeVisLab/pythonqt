#include "PythonQtWrapper_QDomEntity.h"

#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

QDomEntity* PythonQtWrapper_QDomEntity::new_QDomEntity()
{ 
return new QDomEntity(); }

QDomEntity* PythonQtWrapper_QDomEntity::new_QDomEntity(const QDomEntity&  x)
{ 
return new QDomEntity(x); }

QString  PythonQtWrapper_QDomEntity::notationName(QDomEntity* theWrappedObject) const
{
return theWrappedObject->notationName();
}

QString  PythonQtWrapper_QDomEntity::publicId(QDomEntity* theWrappedObject) const
{
return theWrappedObject->publicId();
}

QString  PythonQtWrapper_QDomEntity::systemId(QDomEntity* theWrappedObject) const
{
return theWrappedObject->systemId();
}

