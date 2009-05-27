#include "PythonQtWrapper_QXmlResultItems.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qxmlresultitems.h>

QXmlResultItems* PythonQtWrapper_QXmlResultItems::new_QXmlResultItems()
{ 
return new PythonQtShell_QXmlResultItems(); }

QXmlItem  PythonQtWrapper_QXmlResultItems::current(QXmlResultItems* theWrappedObject) const
{
  return ( theWrappedObject->current());
}

QXmlItem  PythonQtWrapper_QXmlResultItems::next(QXmlResultItems* theWrappedObject)
{
  return ( theWrappedObject->next());
}

bool  PythonQtWrapper_QXmlResultItems::hasError(QXmlResultItems* theWrappedObject) const
{
  return ( theWrappedObject->hasError());
}

