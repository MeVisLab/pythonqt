#include "PythonQtWrapper_QStyleOptionToolBar.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionToolBar* PythonQtWrapper_QStyleOptionToolBar::new_QStyleOptionToolBar()
{ 
return new QStyleOptionToolBar(); }

QStyleOptionToolBar* PythonQtWrapper_QStyleOptionToolBar::new_QStyleOptionToolBar(const QStyleOptionToolBar&  other)
{ 
return new QStyleOptionToolBar(other); }

