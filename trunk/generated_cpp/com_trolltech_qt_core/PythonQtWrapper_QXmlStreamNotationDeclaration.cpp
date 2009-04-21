#include "PythonQtWrapper_QXmlStreamNotationDeclaration.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qxmlstream.h>

QXmlStreamNotationDeclaration* PythonQtWrapper_QXmlStreamNotationDeclaration::new_QXmlStreamNotationDeclaration()
{ 
return new QXmlStreamNotationDeclaration(); }

QXmlStreamNotationDeclaration* PythonQtWrapper_QXmlStreamNotationDeclaration::new_QXmlStreamNotationDeclaration(const QXmlStreamNotationDeclaration&  arg__1)
{ 
return new QXmlStreamNotationDeclaration(arg__1); }

QStringRef  PythonQtWrapper_QXmlStreamNotationDeclaration::publicId(QXmlStreamNotationDeclaration* theWrappedObject) const
{
return  theWrappedObject->publicId();
}

bool  PythonQtWrapper_QXmlStreamNotationDeclaration::operator_equal(QXmlStreamNotationDeclaration* theWrappedObject, const QXmlStreamNotationDeclaration&  other) const
{
return  (*theWrappedObject)== other;
}

QStringRef  PythonQtWrapper_QXmlStreamNotationDeclaration::name(QXmlStreamNotationDeclaration* theWrappedObject) const
{
return  theWrappedObject->name();
}

QStringRef  PythonQtWrapper_QXmlStreamNotationDeclaration::systemId(QXmlStreamNotationDeclaration* theWrappedObject) const
{
return  theWrappedObject->systemId();
}

