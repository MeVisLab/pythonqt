#include "PythonQtWrapper_QStyleOptionComboBox.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionComboBox* PythonQtWrapper_QStyleOptionComboBox::new_QStyleOptionComboBox()
{ 
return new PythonQtShell_QStyleOptionComboBox(); }

QStyleOptionComboBox* PythonQtWrapper_QStyleOptionComboBox::new_QStyleOptionComboBox(const QStyleOptionComboBox&  other)
{ 
return new PythonQtShell_QStyleOptionComboBox(other); }

