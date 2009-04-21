#include "PythonQtWrapper_QStyleOptionMenuItem.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionMenuItem* PythonQtWrapper_QStyleOptionMenuItem::new_QStyleOptionMenuItem()
{ 
return new PythonQtShell_QStyleOptionMenuItem(); }

QStyleOptionMenuItem* PythonQtWrapper_QStyleOptionMenuItem::new_QStyleOptionMenuItem(const QStyleOptionMenuItem&  other)
{ 
return new PythonQtShell_QStyleOptionMenuItem(other); }

