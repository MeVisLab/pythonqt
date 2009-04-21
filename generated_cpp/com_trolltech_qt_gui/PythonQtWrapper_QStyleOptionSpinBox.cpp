#include "PythonQtWrapper_QStyleOptionSpinBox.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionSpinBox* PythonQtWrapper_QStyleOptionSpinBox::new_QStyleOptionSpinBox()
{ 
return new PythonQtShell_QStyleOptionSpinBox(); }

QStyleOptionSpinBox* PythonQtWrapper_QStyleOptionSpinBox::new_QStyleOptionSpinBox(const QStyleOptionSpinBox&  other)
{ 
return new PythonQtShell_QStyleOptionSpinBox(other); }

