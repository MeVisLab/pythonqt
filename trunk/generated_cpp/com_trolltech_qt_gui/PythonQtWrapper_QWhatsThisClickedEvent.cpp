#include "PythonQtWrapper_QWhatsThisClickedEvent.h"

#include <QVariant>

QWhatsThisClickedEvent* PythonQtWrapper_QWhatsThisClickedEvent::new_QWhatsThisClickedEvent(const QString&  href)
{ 
return new QWhatsThisClickedEvent(href); }

QString  PythonQtWrapper_QWhatsThisClickedEvent::href(QWhatsThisClickedEvent* theWrappedObject) const
{
return theWrappedObject->href();
}

