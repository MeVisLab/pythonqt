#include "PythonQtWrapper_QTextItem.h"

#include <QVariant>
#include <qfont.h>

QTextItem* PythonQtWrapper_QTextItem::new_QTextItem()
{ 
return new QTextItem(); }

qreal  PythonQtWrapper_QTextItem::ascent(QTextItem* theWrappedObject) const
{
return theWrappedObject->ascent();
}

qreal  PythonQtWrapper_QTextItem::descent(QTextItem* theWrappedObject) const
{
return theWrappedObject->descent();
}

QFont  PythonQtWrapper_QTextItem::font(QTextItem* theWrappedObject) const
{
return theWrappedObject->font();
}

QTextItem::RenderFlags  PythonQtWrapper_QTextItem::renderFlags(QTextItem* theWrappedObject) const
{
return theWrappedObject->renderFlags();
}

QString  PythonQtWrapper_QTextItem::text(QTextItem* theWrappedObject) const
{
return theWrappedObject->text();
}

qreal  PythonQtWrapper_QTextItem::width(QTextItem* theWrappedObject) const
{
return theWrappedObject->width();
}

