#include "PythonQtWrapper_QStyleOptionViewItem.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionViewItem* PythonQtWrapper_QStyleOptionViewItem::new_QStyleOptionViewItem()
{ 
return new QStyleOptionViewItem(); }

QStyleOptionViewItem* PythonQtWrapper_QStyleOptionViewItem::new_QStyleOptionViewItem(const QStyleOptionViewItem&  other)
{ 
return new QStyleOptionViewItem(other); }

