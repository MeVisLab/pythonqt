#include "PythonQtWrapper_QStyleOptionDockWidget.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionDockWidget* PythonQtWrapper_QStyleOptionDockWidget::new_QStyleOptionDockWidget()
{ 
return new QStyleOptionDockWidget(); }

QStyleOptionDockWidget* PythonQtWrapper_QStyleOptionDockWidget::new_QStyleOptionDockWidget(const QStyleOptionDockWidget&  other)
{ 
return new QStyleOptionDockWidget(other); }

