#include "PythonQtWrapper_QTextInlineObject.h"

#include <QVariant>
#include <qrect.h>
#include <qtextformat.h>

QTextInlineObject* PythonQtWrapper_QTextInlineObject::new_QTextInlineObject()
{ 
return new QTextInlineObject(); }

qreal  PythonQtWrapper_QTextInlineObject::ascent(QTextInlineObject* theWrappedObject) const
{
return theWrappedObject->ascent();
}

qreal  PythonQtWrapper_QTextInlineObject::descent(QTextInlineObject* theWrappedObject) const
{
return theWrappedObject->descent();
}

QTextFormat  PythonQtWrapper_QTextInlineObject::format(QTextInlineObject* theWrappedObject) const
{
return theWrappedObject->format();
}

int  PythonQtWrapper_QTextInlineObject::formatIndex(QTextInlineObject* theWrappedObject) const
{
return theWrappedObject->formatIndex();
}

qreal  PythonQtWrapper_QTextInlineObject::height(QTextInlineObject* theWrappedObject) const
{
return theWrappedObject->height();
}

bool  PythonQtWrapper_QTextInlineObject::isValid(QTextInlineObject* theWrappedObject) const
{
return theWrappedObject->isValid();
}

QRectF  PythonQtWrapper_QTextInlineObject::rect(QTextInlineObject* theWrappedObject) const
{
return theWrappedObject->rect();
}

void PythonQtWrapper_QTextInlineObject::setAscent(QTextInlineObject* theWrappedObject, qreal  a)
{
theWrappedObject->setAscent(a);
}

void PythonQtWrapper_QTextInlineObject::setDescent(QTextInlineObject* theWrappedObject, qreal  d)
{
theWrappedObject->setDescent(d);
}

void PythonQtWrapper_QTextInlineObject::setWidth(QTextInlineObject* theWrappedObject, qreal  w)
{
theWrappedObject->setWidth(w);
}

Qt::LayoutDirection  PythonQtWrapper_QTextInlineObject::textDirection(QTextInlineObject* theWrappedObject) const
{
return theWrappedObject->textDirection();
}

int  PythonQtWrapper_QTextInlineObject::textPosition(QTextInlineObject* theWrappedObject) const
{
return theWrappedObject->textPosition();
}

qreal  PythonQtWrapper_QTextInlineObject::width(QTextInlineObject* theWrappedObject) const
{
return theWrappedObject->width();
}

