#include "PythonQtWrapper_QStyleOptionGraphicsItem.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionGraphicsItem* PythonQtWrapper_QStyleOptionGraphicsItem::new_QStyleOptionGraphicsItem()
{ 
return new QStyleOptionGraphicsItem(); }

QStyleOptionGraphicsItem* PythonQtWrapper_QStyleOptionGraphicsItem::new_QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem&  other)
{ 
return new QStyleOptionGraphicsItem(other); }

