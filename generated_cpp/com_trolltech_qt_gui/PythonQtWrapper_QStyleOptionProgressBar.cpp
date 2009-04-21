#include "PythonQtWrapper_QStyleOptionProgressBar.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionProgressBar* PythonQtWrapper_QStyleOptionProgressBar::new_QStyleOptionProgressBar()
{ 
return new PythonQtShell_QStyleOptionProgressBar(); }

QStyleOptionProgressBar* PythonQtWrapper_QStyleOptionProgressBar::new_QStyleOptionProgressBar(const QStyleOptionProgressBar&  other)
{ 
return new PythonQtShell_QStyleOptionProgressBar(other); }

