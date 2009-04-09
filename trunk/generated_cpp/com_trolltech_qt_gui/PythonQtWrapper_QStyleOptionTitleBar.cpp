#include "PythonQtWrapper_QStyleOptionTitleBar.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionTitleBar* PythonQtWrapper_QStyleOptionTitleBar::new_QStyleOptionTitleBar()
{ 
return new QStyleOptionTitleBar(); }

QStyleOptionTitleBar* PythonQtWrapper_QStyleOptionTitleBar::new_QStyleOptionTitleBar(const QStyleOptionTitleBar&  other)
{ 
return new QStyleOptionTitleBar(other); }

