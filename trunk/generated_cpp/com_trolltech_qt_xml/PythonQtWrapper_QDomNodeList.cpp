#include "PythonQtWrapper_QDomNodeList.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdom.h>

QDomNodeList* PythonQtWrapper_QDomNodeList::new_QDomNodeList()
{ 
return new QDomNodeList(); }

QDomNodeList* PythonQtWrapper_QDomNodeList::new_QDomNodeList(const QDomNodeList&  arg__1)
{ 
return new QDomNodeList(arg__1); }

QDomNode  PythonQtWrapper_QDomNodeList::item(QDomNodeList* theWrappedObject, int  index) const
{
  return ( theWrappedObject->item(index));
}

QDomNode  PythonQtWrapper_QDomNodeList::at(QDomNodeList* theWrappedObject, int  index) const
{
  return ( theWrappedObject->at(index));
}

int  PythonQtWrapper_QDomNodeList::count(QDomNodeList* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

int  PythonQtWrapper_QDomNodeList::size(QDomNodeList* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

bool  PythonQtWrapper_QDomNodeList::isEmpty(QDomNodeList* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

uint  PythonQtWrapper_QDomNodeList::length(QDomNodeList* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

bool  PythonQtWrapper_QDomNodeList::operator_equal(QDomNodeList* theWrappedObject, const QDomNodeList&  arg__1) const
{
  return ( (*theWrappedObject)== arg__1);
}

