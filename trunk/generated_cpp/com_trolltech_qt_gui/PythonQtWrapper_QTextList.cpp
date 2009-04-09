#include "PythonQtWrapper_QTextList.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlist.h>
#include <qtextobject.h>

QTextList* PythonQtWrapper_QTextList::new_QTextList(QTextDocument*  doc)
{ 
return new QTextList(doc); }

void PythonQtWrapper_QTextList::add(QTextList* theWrappedObject, const QTextBlock&  block)
{
theWrappedObject->add(block);
}

int  PythonQtWrapper_QTextList::count(QTextList* theWrappedObject) const
{
return theWrappedObject->count();
}

QTextListFormat  PythonQtWrapper_QTextList::format(QTextList* theWrappedObject) const
{
return theWrappedObject->format();
}

QTextBlock  PythonQtWrapper_QTextList::item(QTextList* theWrappedObject, int  i) const
{
return theWrappedObject->item(i);
}

int  PythonQtWrapper_QTextList::itemNumber(QTextList* theWrappedObject, const QTextBlock&  arg__1) const
{
return theWrappedObject->itemNumber(arg__1);
}

QString  PythonQtWrapper_QTextList::itemText(QTextList* theWrappedObject, const QTextBlock&  arg__1) const
{
return theWrappedObject->itemText(arg__1);
}

void PythonQtWrapper_QTextList::remove(QTextList* theWrappedObject, const QTextBlock&  arg__1)
{
theWrappedObject->remove(arg__1);
}

void PythonQtWrapper_QTextList::removeItem(QTextList* theWrappedObject, int  i)
{
theWrappedObject->removeItem(i);
}

void PythonQtWrapper_QTextList::setFormat(QTextList* theWrappedObject, const QTextListFormat&  format)
{
theWrappedObject->setFormat(format);
}

