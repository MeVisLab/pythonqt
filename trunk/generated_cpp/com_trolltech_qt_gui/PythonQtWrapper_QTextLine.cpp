#include "PythonQtWrapper_QTextLine.h"

#include <QTextLayout>
#include <QVariant>
#include <qpainter.h>
#include <qpoint.h>
#include <qrect.h>

QTextLine* PythonQtWrapper_QTextLine::new_QTextLine()
{ 
return new QTextLine(); }

qreal  PythonQtWrapper_QTextLine::ascent(QTextLine* theWrappedObject) const
{
return theWrappedObject->ascent();
}

qreal  PythonQtWrapper_QTextLine::cursorToX(QTextLine* theWrappedObject, int  cursorPos, QTextLine::Edge  edge) const
{
return theWrappedObject->cursorToX(cursorPos, edge);
}

qreal  PythonQtWrapper_QTextLine::descent(QTextLine* theWrappedObject) const
{
return theWrappedObject->descent();
}

void PythonQtWrapper_QTextLine::draw(QTextLine* theWrappedObject, QPainter*  p, const QPointF&  point, const QTextLayout::FormatRange*  selection) const
{
theWrappedObject->draw(p, point, selection);
}

qreal  PythonQtWrapper_QTextLine::height(QTextLine* theWrappedObject) const
{
return theWrappedObject->height();
}

bool  PythonQtWrapper_QTextLine::isValid(QTextLine* theWrappedObject) const
{
return theWrappedObject->isValid();
}

int  PythonQtWrapper_QTextLine::lineNumber(QTextLine* theWrappedObject) const
{
return theWrappedObject->lineNumber();
}

QRectF  PythonQtWrapper_QTextLine::naturalTextRect(QTextLine* theWrappedObject) const
{
return theWrappedObject->naturalTextRect();
}

qreal  PythonQtWrapper_QTextLine::naturalTextWidth(QTextLine* theWrappedObject) const
{
return theWrappedObject->naturalTextWidth();
}

QPointF  PythonQtWrapper_QTextLine::position(QTextLine* theWrappedObject) const
{
return theWrappedObject->position();
}

QRectF  PythonQtWrapper_QTextLine::rect(QTextLine* theWrappedObject) const
{
return theWrappedObject->rect();
}

void PythonQtWrapper_QTextLine::setLineWidth(QTextLine* theWrappedObject, qreal  width)
{
theWrappedObject->setLineWidth(width);
}

void PythonQtWrapper_QTextLine::setNumColumns(QTextLine* theWrappedObject, int  columns)
{
theWrappedObject->setNumColumns(columns);
}

void PythonQtWrapper_QTextLine::setNumColumns(QTextLine* theWrappedObject, int  columns, qreal  alignmentWidth)
{
theWrappedObject->setNumColumns(columns, alignmentWidth);
}

void PythonQtWrapper_QTextLine::setPosition(QTextLine* theWrappedObject, const QPointF&  pos)
{
theWrappedObject->setPosition(pos);
}

int  PythonQtWrapper_QTextLine::textLength(QTextLine* theWrappedObject) const
{
return theWrappedObject->textLength();
}

int  PythonQtWrapper_QTextLine::textStart(QTextLine* theWrappedObject) const
{
return theWrappedObject->textStart();
}

qreal  PythonQtWrapper_QTextLine::width(QTextLine* theWrappedObject) const
{
return theWrappedObject->width();
}

qreal  PythonQtWrapper_QTextLine::x(QTextLine* theWrappedObject) const
{
return theWrappedObject->x();
}

int  PythonQtWrapper_QTextLine::xToCursor(QTextLine* theWrappedObject, qreal  x, QTextLine::CursorPosition  arg__2) const
{
return theWrappedObject->xToCursor(x, arg__2);
}

qreal  PythonQtWrapper_QTextLine::y(QTextLine* theWrappedObject) const
{
return theWrappedObject->y();
}

