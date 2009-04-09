#include "PythonQtWrapper_QDomAttr.h"

#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

QDomAttr* PythonQtWrapper_QDomAttr::new_QDomAttr()
{ 
return new QDomAttr(); }

QDomAttr* PythonQtWrapper_QDomAttr::new_QDomAttr(const QDomAttr&  x)
{ 
return new QDomAttr(x); }

QString  PythonQtWrapper_QDomAttr::name(QDomAttr* theWrappedObject) const
{
return theWrappedObject->name();
}

QDomElement  PythonQtWrapper_QDomAttr::ownerElement(QDomAttr* theWrappedObject) const
{
return theWrappedObject->ownerElement();
}

void PythonQtWrapper_QDomAttr::setValue(QDomAttr* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->setValue(arg__1);
}

bool  PythonQtWrapper_QDomAttr::specified(QDomAttr* theWrappedObject) const
{
return theWrappedObject->specified();
}

QString  PythonQtWrapper_QDomAttr::value(QDomAttr* theWrappedObject) const
{
return theWrappedObject->value();
}

