#include "PythonQtWrapper_QHttpRequestHeader.h"

#include <QVariant>
#include <qhttp.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

QHttpRequestHeader* PythonQtWrapper_QHttpRequestHeader::new_QHttpRequestHeader()
{ 
return new QHttpRequestHeader(); }

QHttpRequestHeader* PythonQtWrapper_QHttpRequestHeader::new_QHttpRequestHeader(const QHttpRequestHeader&  header)
{ 
return new QHttpRequestHeader(header); }

QHttpRequestHeader* PythonQtWrapper_QHttpRequestHeader::new_QHttpRequestHeader(const QString&  method, const QString&  path, int  majorVer, int  minorVer)
{ 
return new QHttpRequestHeader(method, path, majorVer, minorVer); }

QHttpRequestHeader* PythonQtWrapper_QHttpRequestHeader::new_QHttpRequestHeader(const QString&  str)
{ 
return new QHttpRequestHeader(str); }

int  PythonQtWrapper_QHttpRequestHeader::majorVersion(QHttpRequestHeader* theWrappedObject) const
{
return theWrappedObject->majorVersion();
}

QString  PythonQtWrapper_QHttpRequestHeader::method(QHttpRequestHeader* theWrappedObject) const
{
return theWrappedObject->method();
}

int  PythonQtWrapper_QHttpRequestHeader::minorVersion(QHttpRequestHeader* theWrappedObject) const
{
return theWrappedObject->minorVersion();
}

QString  PythonQtWrapper_QHttpRequestHeader::path(QHttpRequestHeader* theWrappedObject) const
{
return theWrappedObject->path();
}

void PythonQtWrapper_QHttpRequestHeader::setRequest(QHttpRequestHeader* theWrappedObject, const QString&  method, const QString&  path, int  majorVer, int  minorVer)
{
theWrappedObject->setRequest(method, path, majorVer, minorVer);
}

QString  PythonQtWrapper_QHttpRequestHeader::toString(QHttpRequestHeader* theWrappedObject) const
{
return theWrappedObject->toString();
}

