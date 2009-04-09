#include "PythonQtWrapper_QXmlResultItems.h"

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qxmlresultitems.h>

QXmlResultItems* PythonQtWrapper_QXmlResultItems::new_QXmlResultItems()
{ 
return new QXmlResultItems(); }

QXmlItem  PythonQtWrapper_QXmlResultItems::current(QXmlResultItems* theWrappedObject) const
{
return theWrappedObject->current();
}

bool  PythonQtWrapper_QXmlResultItems::hasError(QXmlResultItems* theWrappedObject) const
{
return theWrappedObject->hasError();
}

QXmlItem  PythonQtWrapper_QXmlResultItems::next(QXmlResultItems* theWrappedObject)
{
return theWrappedObject->next();
}

