#include "PythonQtWrapper_QStyleOption.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOption* PythonQtWrapper_QStyleOption::new_QStyleOption(const QStyleOption&  other)
{ 
return new QStyleOption(other); }

QStyleOption* PythonQtWrapper_QStyleOption::new_QStyleOption(int  version, int  type)
{ 
return new QStyleOption(version, type); }

void PythonQtWrapper_QStyleOption::initFrom(QStyleOption* theWrappedObject, const QWidget*  w)
{
theWrappedObject->initFrom(w);
}

