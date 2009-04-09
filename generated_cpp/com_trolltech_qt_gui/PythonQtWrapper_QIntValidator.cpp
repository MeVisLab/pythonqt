#include "PythonQtWrapper_QIntValidator.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qvalidator.h>

QIntValidator* PythonQtWrapper_QIntValidator::new_QIntValidator(QObject*  parent)
{ 
return new QIntValidator(parent); }

QIntValidator* PythonQtWrapper_QIntValidator::new_QIntValidator(int  bottom, int  top, QObject*  parent)
{ 
return new QIntValidator(bottom, top, parent); }

int  PythonQtWrapper_QIntValidator::bottom(QIntValidator* theWrappedObject) const
{
return theWrappedObject->bottom();
}

void PythonQtWrapper_QIntValidator::setBottom(QIntValidator* theWrappedObject, int  arg__1)
{
theWrappedObject->setBottom(arg__1);
}

void PythonQtWrapper_QIntValidator::setRange(QIntValidator* theWrappedObject, int  bottom, int  top)
{
theWrappedObject->setRange(bottom, top);
}

void PythonQtWrapper_QIntValidator::setTop(QIntValidator* theWrappedObject, int  arg__1)
{
theWrappedObject->setTop(arg__1);
}

int  PythonQtWrapper_QIntValidator::top(QIntValidator* theWrappedObject) const
{
return theWrappedObject->top();
}

QValidator::State  PythonQtWrapper_QIntValidator::validate(QIntValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const
{
return theWrappedObject->validate(arg__1, arg__2);
}

