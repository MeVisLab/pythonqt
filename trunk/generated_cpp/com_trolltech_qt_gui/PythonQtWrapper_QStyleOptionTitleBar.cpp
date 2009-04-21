#include "PythonQtWrapper_QStyleOptionTitleBar.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionTitleBar* PythonQtWrapper_QStyleOptionTitleBar::new_QStyleOptionTitleBar()
{ 
return new PythonQtShell_QStyleOptionTitleBar(); }

QStyleOptionTitleBar* PythonQtWrapper_QStyleOptionTitleBar::new_QStyleOptionTitleBar(const QStyleOptionTitleBar&  other)
{ 
return new PythonQtShell_QStyleOptionTitleBar(other); }

