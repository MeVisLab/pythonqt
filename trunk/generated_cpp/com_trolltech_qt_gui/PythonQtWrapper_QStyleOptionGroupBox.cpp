#include "PythonQtWrapper_QStyleOptionGroupBox.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionGroupBox* PythonQtWrapper_QStyleOptionGroupBox::new_QStyleOptionGroupBox()
{ 
return new QStyleOptionGroupBox(); }

QStyleOptionGroupBox* PythonQtWrapper_QStyleOptionGroupBox::new_QStyleOptionGroupBox(const QStyleOptionGroupBox&  other)
{ 
return new QStyleOptionGroupBox(other); }

