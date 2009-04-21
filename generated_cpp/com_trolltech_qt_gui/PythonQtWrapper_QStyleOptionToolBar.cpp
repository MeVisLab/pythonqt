#include "PythonQtWrapper_QStyleOptionToolBar.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionToolBar* PythonQtWrapper_QStyleOptionToolBar::new_QStyleOptionToolBar()
{ 
return new PythonQtShell_QStyleOptionToolBar(); }

QStyleOptionToolBar* PythonQtWrapper_QStyleOptionToolBar::new_QStyleOptionToolBar(const QStyleOptionToolBar&  other)
{ 
return new PythonQtShell_QStyleOptionToolBar(other); }

