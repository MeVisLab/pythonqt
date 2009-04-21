#include "PythonQtWrapper_QTextItem.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qfont.h>

QTextItem* PythonQtWrapper_QTextItem::new_QTextItem()
{ 
return new PythonQtShell_QTextItem(); }

qreal  PythonQtWrapper_QTextItem::descent(QTextItem* theWrappedObject) const
{
return  (*theWrappedObject).descent();
}

QTextItem::RenderFlags  PythonQtWrapper_QTextItem::renderFlags(QTextItem* theWrappedObject) const
{
return  (*theWrappedObject).renderFlags();
}

qreal  PythonQtWrapper_QTextItem::ascent(QTextItem* theWrappedObject) const
{
return  (*theWrappedObject).ascent();
}

QString  PythonQtWrapper_QTextItem::text(QTextItem* theWrappedObject) const
{
return  (*theWrappedObject).text();
}

qreal  PythonQtWrapper_QTextItem::width(QTextItem* theWrappedObject) const
{
return  (*theWrappedObject).width();
}

QFont  PythonQtWrapper_QTextItem::font(QTextItem* theWrappedObject) const
{
return  (*theWrappedObject).font();
}

