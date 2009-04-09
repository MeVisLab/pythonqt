#include "PythonQtWrapper_QTextBlockFormat.h"

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qlist.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvector.h>

QTextBlockFormat* PythonQtWrapper_QTextBlockFormat::new_QTextBlockFormat()
{ 
return new QTextBlockFormat(); }

Qt::Alignment  PythonQtWrapper_QTextBlockFormat::alignment(QTextBlockFormat* theWrappedObject) const
{
return theWrappedObject->alignment();
}

qreal  PythonQtWrapper_QTextBlockFormat::bottomMargin(QTextBlockFormat* theWrappedObject) const
{
return theWrappedObject->bottomMargin();
}

int  PythonQtWrapper_QTextBlockFormat::indent(QTextBlockFormat* theWrappedObject) const
{
return theWrappedObject->indent();
}

bool  PythonQtWrapper_QTextBlockFormat::isValid(QTextBlockFormat* theWrappedObject) const
{
return theWrappedObject->isValid();
}

qreal  PythonQtWrapper_QTextBlockFormat::leftMargin(QTextBlockFormat* theWrappedObject) const
{
return theWrappedObject->leftMargin();
}

bool  PythonQtWrapper_QTextBlockFormat::nonBreakableLines(QTextBlockFormat* theWrappedObject) const
{
return theWrappedObject->nonBreakableLines();
}

QTextFormat::PageBreakFlags  PythonQtWrapper_QTextBlockFormat::pageBreakPolicy(QTextBlockFormat* theWrappedObject) const
{
return theWrappedObject->pageBreakPolicy();
}

qreal  PythonQtWrapper_QTextBlockFormat::rightMargin(QTextBlockFormat* theWrappedObject) const
{
return theWrappedObject->rightMargin();
}

void PythonQtWrapper_QTextBlockFormat::setAlignment(QTextBlockFormat* theWrappedObject, Qt::Alignment  alignment)
{
theWrappedObject->setAlignment(alignment);
}

void PythonQtWrapper_QTextBlockFormat::setBottomMargin(QTextBlockFormat* theWrappedObject, qreal  margin)
{
theWrappedObject->setBottomMargin(margin);
}

void PythonQtWrapper_QTextBlockFormat::setIndent(QTextBlockFormat* theWrappedObject, int  indent)
{
theWrappedObject->setIndent(indent);
}

void PythonQtWrapper_QTextBlockFormat::setLeftMargin(QTextBlockFormat* theWrappedObject, qreal  margin)
{
theWrappedObject->setLeftMargin(margin);
}

void PythonQtWrapper_QTextBlockFormat::setNonBreakableLines(QTextBlockFormat* theWrappedObject, bool  b)
{
theWrappedObject->setNonBreakableLines(b);
}

void PythonQtWrapper_QTextBlockFormat::setPageBreakPolicy(QTextBlockFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags)
{
theWrappedObject->setPageBreakPolicy(flags);
}

void PythonQtWrapper_QTextBlockFormat::setRightMargin(QTextBlockFormat* theWrappedObject, qreal  margin)
{
theWrappedObject->setRightMargin(margin);
}

void PythonQtWrapper_QTextBlockFormat::setTabPositions(QTextBlockFormat* theWrappedObject, const QList<QTextOption::Tab >&  tabs)
{
theWrappedObject->setTabPositions(tabs);
}

void PythonQtWrapper_QTextBlockFormat::setTextIndent(QTextBlockFormat* theWrappedObject, qreal  margin)
{
theWrappedObject->setTextIndent(margin);
}

void PythonQtWrapper_QTextBlockFormat::setTopMargin(QTextBlockFormat* theWrappedObject, qreal  margin)
{
theWrappedObject->setTopMargin(margin);
}

QList<QTextOption::Tab >  PythonQtWrapper_QTextBlockFormat::tabPositions(QTextBlockFormat* theWrappedObject) const
{
return theWrappedObject->tabPositions();
}

qreal  PythonQtWrapper_QTextBlockFormat::textIndent(QTextBlockFormat* theWrappedObject) const
{
return theWrappedObject->textIndent();
}

qreal  PythonQtWrapper_QTextBlockFormat::topMargin(QTextBlockFormat* theWrappedObject) const
{
return theWrappedObject->topMargin();
}

