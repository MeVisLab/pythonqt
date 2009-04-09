#include "PythonQtWrapper_QStyleOptionMenuItem.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionMenuItem* PythonQtWrapper_QStyleOptionMenuItem::new_QStyleOptionMenuItem()
{ 
return new QStyleOptionMenuItem(); }

QStyleOptionMenuItem* PythonQtWrapper_QStyleOptionMenuItem::new_QStyleOptionMenuItem(const QStyleOptionMenuItem&  other)
{ 
return new QStyleOptionMenuItem(other); }

