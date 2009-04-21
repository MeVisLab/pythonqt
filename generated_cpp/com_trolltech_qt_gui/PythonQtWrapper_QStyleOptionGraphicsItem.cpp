#include "PythonQtWrapper_QStyleOptionGraphicsItem.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionGraphicsItem* PythonQtWrapper_QStyleOptionGraphicsItem::new_QStyleOptionGraphicsItem()
{ 
return new PythonQtShell_QStyleOptionGraphicsItem(); }

QStyleOptionGraphicsItem* PythonQtWrapper_QStyleOptionGraphicsItem::new_QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem&  other)
{ 
return new PythonQtShell_QStyleOptionGraphicsItem(other); }

