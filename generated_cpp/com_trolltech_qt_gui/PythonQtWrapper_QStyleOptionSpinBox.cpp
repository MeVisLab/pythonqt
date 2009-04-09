#include "PythonQtWrapper_QStyleOptionSpinBox.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionSpinBox* PythonQtWrapper_QStyleOptionSpinBox::new_QStyleOptionSpinBox()
{ 
return new QStyleOptionSpinBox(); }

QStyleOptionSpinBox* PythonQtWrapper_QStyleOptionSpinBox::new_QStyleOptionSpinBox(const QStyleOptionSpinBox&  other)
{ 
return new QStyleOptionSpinBox(other); }

