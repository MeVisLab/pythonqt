#include "PythonQtWrapper_QStyleOptionViewItem.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionViewItem* PythonQtWrapper_QStyleOptionViewItem::new_QStyleOptionViewItem()
{ 
return new PythonQtShell_QStyleOptionViewItem(); }

QStyleOptionViewItem* PythonQtWrapper_QStyleOptionViewItem::new_QStyleOptionViewItem(const QStyleOptionViewItem&  other)
{ 
return new PythonQtShell_QStyleOptionViewItem(other); }

