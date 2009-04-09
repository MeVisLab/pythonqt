#include "PythonQtWrapper_QStyleOptionButton.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionButton* PythonQtWrapper_QStyleOptionButton::new_QStyleOptionButton()
{ 
return new QStyleOptionButton(); }

QStyleOptionButton* PythonQtWrapper_QStyleOptionButton::new_QStyleOptionButton(const QStyleOptionButton&  other)
{ 
return new QStyleOptionButton(other); }

