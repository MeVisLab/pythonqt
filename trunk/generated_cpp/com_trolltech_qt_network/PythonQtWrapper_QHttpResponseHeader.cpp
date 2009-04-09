#include "PythonQtWrapper_QHttpResponseHeader.h"

#include <QVariant>
#include <qhttp.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

QHttpResponseHeader* PythonQtWrapper_QHttpResponseHeader::new_QHttpResponseHeader()
{ 
return new QHttpResponseHeader(); }

QHttpResponseHeader* PythonQtWrapper_QHttpResponseHeader::new_QHttpResponseHeader(const QHttpResponseHeader&  header)
{ 
return new QHttpResponseHeader(header); }

QHttpResponseHeader* PythonQtWrapper_QHttpResponseHeader::new_QHttpResponseHeader(const QString&  str)
{ 
return new QHttpResponseHeader(str); }

QHttpResponseHeader* PythonQtWrapper_QHttpResponseHeader::new_QHttpResponseHeader(int  code, const QString&  text, int  majorVer, int  minorVer)
{ 
return new QHttpResponseHeader(code, text, majorVer, minorVer); }

int  PythonQtWrapper_QHttpResponseHeader::majorVersion(QHttpResponseHeader* theWrappedObject) const
{
return theWrappedObject->majorVersion();
}

int  PythonQtWrapper_QHttpResponseHeader::minorVersion(QHttpResponseHeader* theWrappedObject) const
{
return theWrappedObject->minorVersion();
}

QString  PythonQtWrapper_QHttpResponseHeader::reasonPhrase(QHttpResponseHeader* theWrappedObject) const
{
return theWrappedObject->reasonPhrase();
}

void PythonQtWrapper_QHttpResponseHeader::setStatusLine(QHttpResponseHeader* theWrappedObject, int  code, const QString&  text, int  majorVer, int  minorVer)
{
theWrappedObject->setStatusLine(code, text, majorVer, minorVer);
}

int  PythonQtWrapper_QHttpResponseHeader::statusCode(QHttpResponseHeader* theWrappedObject) const
{
return theWrappedObject->statusCode();
}

QString  PythonQtWrapper_QHttpResponseHeader::toString(QHttpResponseHeader* theWrappedObject) const
{
return theWrappedObject->toString();
}

