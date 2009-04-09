#include "PythonQtWrapper_QTextTableCell.h"

#include <QTextCursor>
#include <QTextFrame>
#include <QVariant>
#include <qtextcursor.h>
#include <qtextformat.h>
#include <qtexttable.h>

QTextTableCell* PythonQtWrapper_QTextTableCell::new_QTextTableCell()
{ 
return new QTextTableCell(); }

QTextTableCell* PythonQtWrapper_QTextTableCell::new_QTextTableCell(const QTextTableCell&  o)
{ 
return new QTextTableCell(o); }

QTextFrame::iterator  PythonQtWrapper_QTextTableCell::begin(QTextTableCell* theWrappedObject) const
{
return theWrappedObject->begin();
}

int  PythonQtWrapper_QTextTableCell::column(QTextTableCell* theWrappedObject) const
{
return theWrappedObject->column();
}

int  PythonQtWrapper_QTextTableCell::columnSpan(QTextTableCell* theWrappedObject) const
{
return theWrappedObject->columnSpan();
}

QTextFrame::iterator  PythonQtWrapper_QTextTableCell::end(QTextTableCell* theWrappedObject) const
{
return theWrappedObject->end();
}

QTextCursor  PythonQtWrapper_QTextTableCell::firstCursorPosition(QTextTableCell* theWrappedObject) const
{
return theWrappedObject->firstCursorPosition();
}

int  PythonQtWrapper_QTextTableCell::firstPosition(QTextTableCell* theWrappedObject) const
{
return theWrappedObject->firstPosition();
}

QTextCharFormat  PythonQtWrapper_QTextTableCell::format(QTextTableCell* theWrappedObject) const
{
return theWrappedObject->format();
}

bool  PythonQtWrapper_QTextTableCell::isValid(QTextTableCell* theWrappedObject) const
{
return theWrappedObject->isValid();
}

QTextCursor  PythonQtWrapper_QTextTableCell::lastCursorPosition(QTextTableCell* theWrappedObject) const
{
return theWrappedObject->lastCursorPosition();
}

int  PythonQtWrapper_QTextTableCell::lastPosition(QTextTableCell* theWrappedObject) const
{
return theWrappedObject->lastPosition();
}

bool  PythonQtWrapper_QTextTableCell::operator_equal(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const
{
return *theWrappedObject == other;
}

int  PythonQtWrapper_QTextTableCell::row(QTextTableCell* theWrappedObject) const
{
return theWrappedObject->row();
}

int  PythonQtWrapper_QTextTableCell::rowSpan(QTextTableCell* theWrappedObject) const
{
return theWrappedObject->rowSpan();
}

void PythonQtWrapper_QTextTableCell::setFormat(QTextTableCell* theWrappedObject, const QTextCharFormat&  format)
{
theWrappedObject->setFormat(format);
}

