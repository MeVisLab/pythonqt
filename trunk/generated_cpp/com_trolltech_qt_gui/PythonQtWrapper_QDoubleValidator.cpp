#include "PythonQtWrapper_QDoubleValidator.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qvalidator.h>

QDoubleValidator* PythonQtWrapper_QDoubleValidator::new_QDoubleValidator(QObject*  parent)
{ 
return new QDoubleValidator(parent); }

QDoubleValidator* PythonQtWrapper_QDoubleValidator::new_QDoubleValidator(double  bottom, double  top, int  decimals, QObject*  parent)
{ 
return new QDoubleValidator(bottom, top, decimals, parent); }

double  PythonQtWrapper_QDoubleValidator::bottom(QDoubleValidator* theWrappedObject) const
{
return theWrappedObject->bottom();
}

int  PythonQtWrapper_QDoubleValidator::decimals(QDoubleValidator* theWrappedObject) const
{
return theWrappedObject->decimals();
}

QDoubleValidator::Notation  PythonQtWrapper_QDoubleValidator::notation(QDoubleValidator* theWrappedObject) const
{
return theWrappedObject->notation();
}

void PythonQtWrapper_QDoubleValidator::setBottom(QDoubleValidator* theWrappedObject, double  arg__1)
{
theWrappedObject->setBottom(arg__1);
}

void PythonQtWrapper_QDoubleValidator::setDecimals(QDoubleValidator* theWrappedObject, int  arg__1)
{
theWrappedObject->setDecimals(arg__1);
}

void PythonQtWrapper_QDoubleValidator::setNotation(QDoubleValidator* theWrappedObject, QDoubleValidator::Notation  arg__1)
{
theWrappedObject->setNotation(arg__1);
}

void PythonQtWrapper_QDoubleValidator::setRange(QDoubleValidator* theWrappedObject, double  bottom, double  top, int  decimals)
{
theWrappedObject->setRange(bottom, top, decimals);
}

void PythonQtWrapper_QDoubleValidator::setTop(QDoubleValidator* theWrappedObject, double  arg__1)
{
theWrappedObject->setTop(arg__1);
}

double  PythonQtWrapper_QDoubleValidator::top(QDoubleValidator* theWrappedObject) const
{
return theWrappedObject->top();
}

QValidator::State  PythonQtWrapper_QDoubleValidator::validate(QDoubleValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const
{
return theWrappedObject->validate(arg__1, arg__2);
}

