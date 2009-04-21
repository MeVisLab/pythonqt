#include "PythonQtWrapper_QDomAttr.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

QDomAttr* PythonQtWrapper_QDomAttr::new_QDomAttr()
{ 
return new QDomAttr(); }

QDomAttr* PythonQtWrapper_QDomAttr::new_QDomAttr(const QDomAttr&  x)
{ 
return new QDomAttr(x); }

void PythonQtWrapper_QDomAttr::setValue(QDomAttr* theWrappedObject, const QString&  arg__1)
{
 (*theWrappedObject).setValue(arg__1);
}

QString  PythonQtWrapper_QDomAttr::value(QDomAttr* theWrappedObject) const
{
return  (*theWrappedObject).value();
}

QString  PythonQtWrapper_QDomAttr::name(QDomAttr* theWrappedObject) const
{
return  (*theWrappedObject).name();
}

QDomElement  PythonQtWrapper_QDomAttr::ownerElement(QDomAttr* theWrappedObject) const
{
return  (*theWrappedObject).ownerElement();
}

bool  PythonQtWrapper_QDomAttr::specified(QDomAttr* theWrappedObject) const
{
return  (*theWrappedObject).specified();
}

