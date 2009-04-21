#include "PythonQtWrapper_QTextFragment.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qtextformat.h>
#include <qtextobject.h>

QTextFragment* PythonQtWrapper_QTextFragment::new_QTextFragment()
{ 
return new QTextFragment(); }

QTextFragment* PythonQtWrapper_QTextFragment::new_QTextFragment(const QTextFragment&  o)
{ 
return new QTextFragment(o); }

bool  PythonQtWrapper_QTextFragment::operator_equal(QTextFragment* theWrappedObject, const QTextFragment&  o) const
{
return  (*theWrappedObject)== o;
}

int  PythonQtWrapper_QTextFragment::position(QTextFragment* theWrappedObject) const
{
return  theWrappedObject->position();
}

QTextCharFormat  PythonQtWrapper_QTextFragment::charFormat(QTextFragment* theWrappedObject) const
{
return  theWrappedObject->charFormat();
}

int  PythonQtWrapper_QTextFragment::length(QTextFragment* theWrappedObject) const
{
return  theWrappedObject->length();
}

QString  PythonQtWrapper_QTextFragment::text(QTextFragment* theWrappedObject) const
{
return  theWrappedObject->text();
}

bool  PythonQtWrapper_QTextFragment::operator_less(QTextFragment* theWrappedObject, const QTextFragment&  o) const
{
return  (*theWrappedObject)< o;
}

int  PythonQtWrapper_QTextFragment::charFormatIndex(QTextFragment* theWrappedObject) const
{
return  theWrappedObject->charFormatIndex();
}

bool  PythonQtWrapper_QTextFragment::contains(QTextFragment* theWrappedObject, int  position) const
{
return  theWrappedObject->contains(position);
}

bool  PythonQtWrapper_QTextFragment::isValid(QTextFragment* theWrappedObject) const
{
return  theWrappedObject->isValid();
}

