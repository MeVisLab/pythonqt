#include "PythonQtWrapper_QStyleOptionHeader.h"

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

QStyleOptionHeader* PythonQtWrapper_QStyleOptionHeader::new_QStyleOptionHeader()
{ 
return new QStyleOptionHeader(); }

QStyleOptionHeader* PythonQtWrapper_QStyleOptionHeader::new_QStyleOptionHeader(const QStyleOptionHeader&  other)
{ 
return new QStyleOptionHeader(other); }

