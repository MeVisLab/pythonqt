#include "PythonQtWrapper_QStyleOptionFrame.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionFrame* PythonQtWrapper_QStyleOptionFrame::new_QStyleOptionFrame()
{ 
return new QStyleOptionFrame(); }

QStyleOptionFrame* PythonQtWrapper_QStyleOptionFrame::new_QStyleOptionFrame(const QStyleOptionFrame&  other)
{ 
return new QStyleOptionFrame(other); }

