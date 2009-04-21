#include "PythonQtWrapper_QSizePolicy.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qsizepolicy.h>

QSizePolicy* PythonQtWrapper_QSizePolicy::new_QSizePolicy()
{ 
return new QSizePolicy(); }

QSizePolicy* PythonQtWrapper_QSizePolicy::new_QSizePolicy(QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical)
{ 
return new QSizePolicy(horizontal, vertical); }

QSizePolicy* PythonQtWrapper_QSizePolicy::new_QSizePolicy(QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical, QSizePolicy::ControlType  type)
{ 
return new QSizePolicy(horizontal, vertical, type); }

void PythonQtWrapper_QSizePolicy::readFrom(QSizePolicy* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  (*theWrappedObject);
}

void PythonQtWrapper_QSizePolicy::setHorizontalPolicy(QSizePolicy* theWrappedObject, QSizePolicy::Policy  d)
{
 theWrappedObject->setHorizontalPolicy(d);
}

void PythonQtWrapper_QSizePolicy::setHorizontalStretch(QSizePolicy* theWrappedObject, uchar  stretchFactor)
{
 theWrappedObject->setHorizontalStretch(stretchFactor);
}

void PythonQtWrapper_QSizePolicy::writeTo(QSizePolicy* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QSizePolicy::setHeightForWidth(QSizePolicy* theWrappedObject, bool  b)
{
 theWrappedObject->setHeightForWidth(b);
}

bool  PythonQtWrapper_QSizePolicy::operator_equal(QSizePolicy* theWrappedObject, const QSizePolicy&  s) const
{
return  (*theWrappedObject)== s;
}

QSizePolicy::Policy  PythonQtWrapper_QSizePolicy::horizontalPolicy(QSizePolicy* theWrappedObject) const
{
return  theWrappedObject->horizontalPolicy();
}

int  PythonQtWrapper_QSizePolicy::verticalStretch(QSizePolicy* theWrappedObject) const
{
return  theWrappedObject->verticalStretch();
}

QSizePolicy::ControlType  PythonQtWrapper_QSizePolicy::controlType(QSizePolicy* theWrappedObject) const
{
return  theWrappedObject->controlType();
}

int  PythonQtWrapper_QSizePolicy::horizontalStretch(QSizePolicy* theWrappedObject) const
{
return  theWrappedObject->horizontalStretch();
}

void PythonQtWrapper_QSizePolicy::setVerticalStretch(QSizePolicy* theWrappedObject, uchar  stretchFactor)
{
 theWrappedObject->setVerticalStretch(stretchFactor);
}

void PythonQtWrapper_QSizePolicy::transpose(QSizePolicy* theWrappedObject)
{
 theWrappedObject->transpose();
}

Qt::Orientations  PythonQtWrapper_QSizePolicy::expandingDirections(QSizePolicy* theWrappedObject) const
{
return  theWrappedObject->expandingDirections();
}

void PythonQtWrapper_QSizePolicy::setControlType(QSizePolicy* theWrappedObject, QSizePolicy::ControlType  type)
{
 theWrappedObject->setControlType(type);
}

QSizePolicy::Policy  PythonQtWrapper_QSizePolicy::verticalPolicy(QSizePolicy* theWrappedObject) const
{
return  theWrappedObject->verticalPolicy();
}

bool  PythonQtWrapper_QSizePolicy::hasHeightForWidth(QSizePolicy* theWrappedObject) const
{
return  theWrappedObject->hasHeightForWidth();
}

void PythonQtWrapper_QSizePolicy::setVerticalPolicy(QSizePolicy* theWrappedObject, QSizePolicy::Policy  d)
{
 theWrappedObject->setVerticalPolicy(d);
}

