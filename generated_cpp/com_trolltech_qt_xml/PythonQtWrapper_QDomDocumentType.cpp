#include "PythonQtWrapper_QDomDocumentType.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

QDomDocumentType* PythonQtWrapper_QDomDocumentType::new_QDomDocumentType()
{ 
return new QDomDocumentType(); }

QDomDocumentType* PythonQtWrapper_QDomDocumentType::new_QDomDocumentType(const QDomDocumentType&  x)
{ 
return new QDomDocumentType(x); }

QDomNamedNodeMap  PythonQtWrapper_QDomDocumentType::entities(QDomDocumentType* theWrappedObject) const
{
return  (*theWrappedObject).entities();
}

QDomNamedNodeMap  PythonQtWrapper_QDomDocumentType::notations(QDomDocumentType* theWrappedObject) const
{
return  (*theWrappedObject).notations();
}

QString  PythonQtWrapper_QDomDocumentType::systemId(QDomDocumentType* theWrappedObject) const
{
return  (*theWrappedObject).systemId();
}

QString  PythonQtWrapper_QDomDocumentType::name(QDomDocumentType* theWrappedObject) const
{
return  (*theWrappedObject).name();
}

QString  PythonQtWrapper_QDomDocumentType::internalSubset(QDomDocumentType* theWrappedObject) const
{
return  (*theWrappedObject).internalSubset();
}

QString  PythonQtWrapper_QDomDocumentType::publicId(QDomDocumentType* theWrappedObject) const
{
return  (*theWrappedObject).publicId();
}

