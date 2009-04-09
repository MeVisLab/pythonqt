#include "PythonQtWrapper_QStyleOptionProgressBar.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionProgressBar* PythonQtWrapper_QStyleOptionProgressBar::new_QStyleOptionProgressBar()
{ 
return new QStyleOptionProgressBar(); }

QStyleOptionProgressBar* PythonQtWrapper_QStyleOptionProgressBar::new_QStyleOptionProgressBar(const QStyleOptionProgressBar&  other)
{ 
return new QStyleOptionProgressBar(other); }

