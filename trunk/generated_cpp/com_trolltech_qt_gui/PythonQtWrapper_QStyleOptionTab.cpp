#include "PythonQtWrapper_QStyleOptionTab.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionTab* PythonQtWrapper_QStyleOptionTab::new_QStyleOptionTab()
{ 
return new QStyleOptionTab(); }

QStyleOptionTab* PythonQtWrapper_QStyleOptionTab::new_QStyleOptionTab(const QStyleOptionTab&  other)
{ 
return new QStyleOptionTab(other); }

