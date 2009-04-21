#include "PythonQtWrapper_QStyleOptionToolButton.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionToolButton* PythonQtWrapper_QStyleOptionToolButton::new_QStyleOptionToolButton()
{ 
return new PythonQtShell_QStyleOptionToolButton(); }

QStyleOptionToolButton* PythonQtWrapper_QStyleOptionToolButton::new_QStyleOptionToolButton(const QStyleOptionToolButton&  other)
{ 
return new PythonQtShell_QStyleOptionToolButton(other); }

