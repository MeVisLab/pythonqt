#include "PythonQtWrapper_QStyleOptionToolButton.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionToolButton* PythonQtWrapper_QStyleOptionToolButton::new_QStyleOptionToolButton()
{ 
return new QStyleOptionToolButton(); }

QStyleOptionToolButton* PythonQtWrapper_QStyleOptionToolButton::new_QStyleOptionToolButton(const QStyleOptionToolButton&  other)
{ 
return new QStyleOptionToolButton(other); }

