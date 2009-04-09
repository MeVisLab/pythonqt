#include "PythonQtWrapper_QTextListFormat.h"

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvector.h>

QTextListFormat* PythonQtWrapper_QTextListFormat::new_QTextListFormat()
{ 
return new QTextListFormat(); }

int  PythonQtWrapper_QTextListFormat::indent(QTextListFormat* theWrappedObject) const
{
return theWrappedObject->indent();
}

bool  PythonQtWrapper_QTextListFormat::isValid(QTextListFormat* theWrappedObject) const
{
return theWrappedObject->isValid();
}

void PythonQtWrapper_QTextListFormat::setIndent(QTextListFormat* theWrappedObject, int  indent)
{
theWrappedObject->setIndent(indent);
}

void PythonQtWrapper_QTextListFormat::setStyle(QTextListFormat* theWrappedObject, QTextListFormat::Style  style)
{
theWrappedObject->setStyle(style);
}

QTextListFormat::Style  PythonQtWrapper_QTextListFormat::style(QTextListFormat* theWrappedObject) const
{
return theWrappedObject->style();
}

