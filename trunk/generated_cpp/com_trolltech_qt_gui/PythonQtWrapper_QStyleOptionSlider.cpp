#include "PythonQtWrapper_QStyleOptionSlider.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionSlider* PythonQtWrapper_QStyleOptionSlider::new_QStyleOptionSlider()
{ 
return new QStyleOptionSlider(); }

QStyleOptionSlider* PythonQtWrapper_QStyleOptionSlider::new_QStyleOptionSlider(const QStyleOptionSlider&  other)
{ 
return new QStyleOptionSlider(other); }

