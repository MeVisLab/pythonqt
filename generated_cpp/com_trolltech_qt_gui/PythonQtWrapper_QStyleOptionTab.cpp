#include "PythonQtWrapper_QStyleOptionTab.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionTab* PythonQtWrapper_QStyleOptionTab::new_QStyleOptionTab()
{ 
return new PythonQtShell_QStyleOptionTab(); }

QStyleOptionTab* PythonQtWrapper_QStyleOptionTab::new_QStyleOptionTab(const QStyleOptionTab&  other)
{ 
return new PythonQtShell_QStyleOptionTab(other); }

