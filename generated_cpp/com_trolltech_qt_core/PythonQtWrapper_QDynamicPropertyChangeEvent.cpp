#include "PythonQtWrapper_QDynamicPropertyChangeEvent.h"

#include <QVariant>
#include <qbytearray.h>

QDynamicPropertyChangeEvent* PythonQtWrapper_QDynamicPropertyChangeEvent::new_QDynamicPropertyChangeEvent(const QByteArray&  name)
{ 
return new QDynamicPropertyChangeEvent(name); }

QByteArray  PythonQtWrapper_QDynamicPropertyChangeEvent::propertyName(QDynamicPropertyChangeEvent* theWrappedObject) const
{
return theWrappedObject->propertyName();
}

