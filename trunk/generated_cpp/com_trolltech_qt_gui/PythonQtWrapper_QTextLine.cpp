#include "PythonQtWrapper_QTextLine.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QTextLayout>
#include <QVariant>
#include <qpainter.h>
#include <qpoint.h>
#include <qrect.h>

QTextLine* PythonQtWrapper_QTextLine::new_QTextLine()
{ 
return new QTextLine(); }

void PythonQtWrapper_QTextLine::draw(QTextLine* theWrappedObject, QPainter*  p, const QPointF&  point, const QTextLayout::FormatRange*  selection) const
{
 theWrappedObject->draw(p, point, selection);
}

void PythonQtWrapper_QTextLine::setNumColumns(QTextLine* theWrappedObject, int  columns, qreal  alignmentWidth)
{
 theWrappedObject->setNumColumns(columns, alignmentWidth);
}

void PythonQtWrapper_QTextLine::setNumColumns(QTextLine* theWrappedObject, int  columns)
{
 theWrappedObject->setNumColumns(columns);
}

qreal  PythonQtWrapper_QTextLine::cursorToX(QTextLine* theWrappedObject, int  cursorPos, QTextLine::Edge  edge) const
{
return  theWrappedObject->cursorToX(cursorPos, edge);
}

void PythonQtWrapper_QTextLine::setPosition(QTextLine* theWrappedObject, const QPointF&  pos)
{
 theWrappedObject->setPosition(pos);
}

int  PythonQtWrapper_QTextLine::lineNumber(QTextLine* theWrappedObject) const
{
return  theWrappedObject->lineNumber();
}

qreal  PythonQtWrapper_QTextLine::naturalTextWidth(QTextLine* theWrappedObject) const
{
return  theWrappedObject->naturalTextWidth();
}

qreal  PythonQtWrapper_QTextLine::ascent(QTextLine* theWrappedObject) const
{
return  theWrappedObject->ascent();
}

qreal  PythonQtWrapper_QTextLine::height(QTextLine* theWrappedObject) const
{
return  theWrappedObject->height();
}

int  PythonQtWrapper_QTextLine::textLength(QTextLine* theWrappedObject) const
{
return  theWrappedObject->textLength();
}

qreal  PythonQtWrapper_QTextLine::y(QTextLine* theWrappedObject) const
{
return  theWrappedObject->y();
}

qreal  PythonQtWrapper_QTextLine::x(QTextLine* theWrappedObject) const
{
return  theWrappedObject->x();
}

qreal  PythonQtWrapper_QTextLine::descent(QTextLine* theWrappedObject) const
{
return  theWrappedObject->descent();
}

QRectF  PythonQtWrapper_QTextLine::rect(QTextLine* theWrappedObject) const
{
return  theWrappedObject->rect();
}

QRectF  PythonQtWrapper_QTextLine::naturalTextRect(QTextLine* theWrappedObject) const
{
return  theWrappedObject->naturalTextRect();
}

qreal  PythonQtWrapper_QTextLine::width(QTextLine* theWrappedObject) const
{
return  theWrappedObject->width();
}

void PythonQtWrapper_QTextLine::setLineWidth(QTextLine* theWrappedObject, qreal  width)
{
 theWrappedObject->setLineWidth(width);
}

QPointF  PythonQtWrapper_QTextLine::position(QTextLine* theWrappedObject) const
{
return  theWrappedObject->position();
}

int  PythonQtWrapper_QTextLine::textStart(QTextLine* theWrappedObject) const
{
return  theWrappedObject->textStart();
}

bool  PythonQtWrapper_QTextLine::isValid(QTextLine* theWrappedObject) const
{
return  theWrappedObject->isValid();
}

int  PythonQtWrapper_QTextLine::xToCursor(QTextLine* theWrappedObject, qreal  x, QTextLine::CursorPosition  arg__2) const
{
return  theWrappedObject->xToCursor(x, arg__2);
}

