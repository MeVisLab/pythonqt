#include "PythonQtWrapper_QTextTable.h"

#include <QTextCursor>
#include <QTextFrame>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qtexttable.h>

QTextTable* PythonQtWrapper_QTextTable::new_QTextTable(QTextDocument*  doc)
{ 
return new QTextTable(doc); }

QTextTableCell  PythonQtWrapper_QTextTable::cellAt(QTextTable* theWrappedObject, const QTextCursor&  c) const
{
return theWrappedObject->cellAt(c);
}

QTextTableCell  PythonQtWrapper_QTextTable::cellAt(QTextTable* theWrappedObject, int  position) const
{
return theWrappedObject->cellAt(position);
}

QTextTableCell  PythonQtWrapper_QTextTable::cellAt(QTextTable* theWrappedObject, int  row, int  col) const
{
return theWrappedObject->cellAt(row, col);
}

int  PythonQtWrapper_QTextTable::columns(QTextTable* theWrappedObject) const
{
return theWrappedObject->columns();
}

QTextTableFormat  PythonQtWrapper_QTextTable::format(QTextTable* theWrappedObject) const
{
return theWrappedObject->format();
}

void PythonQtWrapper_QTextTable::insertColumns(QTextTable* theWrappedObject, int  pos, int  num)
{
theWrappedObject->insertColumns(pos, num);
}

void PythonQtWrapper_QTextTable::insertRows(QTextTable* theWrappedObject, int  pos, int  num)
{
theWrappedObject->insertRows(pos, num);
}

void PythonQtWrapper_QTextTable::mergeCells(QTextTable* theWrappedObject, const QTextCursor&  cursor)
{
theWrappedObject->mergeCells(cursor);
}

void PythonQtWrapper_QTextTable::mergeCells(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols)
{
theWrappedObject->mergeCells(row, col, numRows, numCols);
}

void PythonQtWrapper_QTextTable::removeColumns(QTextTable* theWrappedObject, int  pos, int  num)
{
theWrappedObject->removeColumns(pos, num);
}

void PythonQtWrapper_QTextTable::removeRows(QTextTable* theWrappedObject, int  pos, int  num)
{
theWrappedObject->removeRows(pos, num);
}

void PythonQtWrapper_QTextTable::resize(QTextTable* theWrappedObject, int  rows, int  cols)
{
theWrappedObject->resize(rows, cols);
}

QTextCursor  PythonQtWrapper_QTextTable::rowEnd(QTextTable* theWrappedObject, const QTextCursor&  c) const
{
return theWrappedObject->rowEnd(c);
}

QTextCursor  PythonQtWrapper_QTextTable::rowStart(QTextTable* theWrappedObject, const QTextCursor&  c) const
{
return theWrappedObject->rowStart(c);
}

int  PythonQtWrapper_QTextTable::rows(QTextTable* theWrappedObject) const
{
return theWrappedObject->rows();
}

void PythonQtWrapper_QTextTable::setFormat(QTextTable* theWrappedObject, const QTextTableFormat&  format)
{
theWrappedObject->setFormat(format);
}

void PythonQtWrapper_QTextTable::splitCell(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols)
{
theWrappedObject->splitCell(row, col, numRows, numCols);
}

