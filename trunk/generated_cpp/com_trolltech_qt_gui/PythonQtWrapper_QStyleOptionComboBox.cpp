#include "PythonQtWrapper_QStyleOptionComboBox.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionComboBox* PythonQtWrapper_QStyleOptionComboBox::new_QStyleOptionComboBox()
{ 
return new QStyleOptionComboBox(); }

QStyleOptionComboBox* PythonQtWrapper_QStyleOptionComboBox::new_QStyleOptionComboBox(const QStyleOptionComboBox&  other)
{ 
return new QStyleOptionComboBox(other); }

