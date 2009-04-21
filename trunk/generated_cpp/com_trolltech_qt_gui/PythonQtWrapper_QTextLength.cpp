#include "PythonQtWrapper_QTextLength.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qtextformat.h>

QTextLength* PythonQtWrapper_QTextLength::new_QTextLength()
{ 
return new QTextLength(); }

QTextLength* PythonQtWrapper_QTextLength::new_QTextLength(QTextLength::Type  type, qreal  value)
{ 
return new QTextLength(type, value); }

qreal  PythonQtWrapper_QTextLength::rawValue(QTextLength* theWrappedObject) const
{
return  theWrappedObject->rawValue();
}

qreal  PythonQtWrapper_QTextLength::value(QTextLength* theWrappedObject, qreal  maximumLength) const
{
return  theWrappedObject->value(maximumLength);
}

void PythonQtWrapper_QTextLength::readFrom(QTextLength* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  (*theWrappedObject);
}

void PythonQtWrapper_QTextLength::writeTo(QTextLength* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  (*theWrappedObject);
}

QTextLength::Type  PythonQtWrapper_QTextLength::type(QTextLength* theWrappedObject) const
{
return  theWrappedObject->type();
}

bool  PythonQtWrapper_QTextLength::operator_equal(QTextLength* theWrappedObject, const QTextLength&  other) const
{
return  (*theWrappedObject)== other;
}

