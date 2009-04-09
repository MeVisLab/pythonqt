#include "PythonQtWrapper_QHttpHeader.h"

#include <QVariant>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

void PythonQtWrapper_QHttpHeader::addValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value)
{
theWrappedObject->addValue(key, value);
}

QStringList  PythonQtWrapper_QHttpHeader::allValues(QHttpHeader* theWrappedObject, const QString&  key) const
{
return theWrappedObject->allValues(key);
}

uint  PythonQtWrapper_QHttpHeader::contentLength(QHttpHeader* theWrappedObject) const
{
return theWrappedObject->contentLength();
}

QString  PythonQtWrapper_QHttpHeader::contentType(QHttpHeader* theWrappedObject) const
{
return theWrappedObject->contentType();
}

bool  PythonQtWrapper_QHttpHeader::hasContentLength(QHttpHeader* theWrappedObject) const
{
return theWrappedObject->hasContentLength();
}

bool  PythonQtWrapper_QHttpHeader::hasContentType(QHttpHeader* theWrappedObject) const
{
return theWrappedObject->hasContentType();
}

bool  PythonQtWrapper_QHttpHeader::hasKey(QHttpHeader* theWrappedObject, const QString&  key) const
{
return theWrappedObject->hasKey(key);
}

bool  PythonQtWrapper_QHttpHeader::isValid(QHttpHeader* theWrappedObject) const
{
return theWrappedObject->isValid();
}

QStringList  PythonQtWrapper_QHttpHeader::keys(QHttpHeader* theWrappedObject) const
{
return theWrappedObject->keys();
}

int  PythonQtWrapper_QHttpHeader::majorVersion(QHttpHeader* theWrappedObject) const
{
return theWrappedObject->majorVersion();
}

int  PythonQtWrapper_QHttpHeader::minorVersion(QHttpHeader* theWrappedObject) const
{
return theWrappedObject->minorVersion();
}

void PythonQtWrapper_QHttpHeader::removeAllValues(QHttpHeader* theWrappedObject, const QString&  key)
{
theWrappedObject->removeAllValues(key);
}

void PythonQtWrapper_QHttpHeader::removeValue(QHttpHeader* theWrappedObject, const QString&  key)
{
theWrappedObject->removeValue(key);
}

void PythonQtWrapper_QHttpHeader::setContentLength(QHttpHeader* theWrappedObject, int  len)
{
theWrappedObject->setContentLength(len);
}

void PythonQtWrapper_QHttpHeader::setContentType(QHttpHeader* theWrappedObject, const QString&  type)
{
theWrappedObject->setContentType(type);
}

void PythonQtWrapper_QHttpHeader::setValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value)
{
theWrappedObject->setValue(key, value);
}

void PythonQtWrapper_QHttpHeader::setValues(QHttpHeader* theWrappedObject, const QList<QPair<QString , QString >  >&  values)
{
theWrappedObject->setValues(values);
}

QString  PythonQtWrapper_QHttpHeader::toString(QHttpHeader* theWrappedObject) const
{
return theWrappedObject->toString();
}

QString  PythonQtWrapper_QHttpHeader::value(QHttpHeader* theWrappedObject, const QString&  key) const
{
return theWrappedObject->value(key);
}

QList<QPair<QString , QString >  >  PythonQtWrapper_QHttpHeader::values(QHttpHeader* theWrappedObject) const
{
return theWrappedObject->values();
}

