#include "PythonQtWrapper_QStyleOptionToolBox.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionToolBox* PythonQtWrapper_QStyleOptionToolBox::new_QStyleOptionToolBox()
{ 
return new PythonQtShell_QStyleOptionToolBox(); }

QStyleOptionToolBox* PythonQtWrapper_QStyleOptionToolBox::new_QStyleOptionToolBox(const QStyleOptionToolBox&  other)
{ 
return new PythonQtShell_QStyleOptionToolBox(other); }

