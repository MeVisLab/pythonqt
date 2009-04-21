#include "PythonQtWrapper_QUuid.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <quuid.h>

QUuid* PythonQtWrapper_QUuid::new_QUuid()
{ 
return new PythonQtShell_QUuid(); }

QUuid* PythonQtWrapper_QUuid::new_QUuid(const QString&  arg__1)
{ 
return new PythonQtShell_QUuid(arg__1); }

QUuid* PythonQtWrapper_QUuid::new_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8)
{ 
return new PythonQtShell_QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8); }

void PythonQtWrapper_QUuid::readFrom(QUuid* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  (*theWrappedObject);
}

bool  PythonQtWrapper_QUuid::operator_equal(QUuid* theWrappedObject, const QUuid&  orig) const
{
return  (*theWrappedObject)== orig;
}

QUuid  PythonQtWrapper_QUuid::static_QUuid_createUuid()
{
return QUuid::createUuid();
}

QUuid::Variant  PythonQtWrapper_QUuid::variant(QUuid* theWrappedObject) const
{
return  (*theWrappedObject).variant();
}

bool  PythonQtWrapper_QUuid::operator_less(QUuid* theWrappedObject, const QUuid&  other) const
{
return  (*theWrappedObject)< other;
}

QUuid::Version  PythonQtWrapper_QUuid::version(QUuid* theWrappedObject) const
{
return  (*theWrappedObject).version();
}

void PythonQtWrapper_QUuid::writeTo(QUuid* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  (*theWrappedObject);
}

QString  PythonQtWrapper_QUuid::toString(QUuid* theWrappedObject) const
{
return  (*theWrappedObject).toString();
}

bool  PythonQtWrapper_QUuid::isNull(QUuid* theWrappedObject) const
{
return  (*theWrappedObject).isNull();
}

