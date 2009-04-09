#include "PythonQtWrapper_QStyleOptionToolBox.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionToolBox* PythonQtWrapper_QStyleOptionToolBox::new_QStyleOptionToolBox()
{ 
return new QStyleOptionToolBox(); }

QStyleOptionToolBox* PythonQtWrapper_QStyleOptionToolBox::new_QStyleOptionToolBox(const QStyleOptionToolBox&  other)
{ 
return new QStyleOptionToolBox(other); }

