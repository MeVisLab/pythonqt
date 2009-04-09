#include "PythonQtWrapper_QAccessibleBridge.h"

#include <QVariant>
#include <qaccessible.h>

void PythonQtWrapper_QAccessibleBridge::notifyAccessibilityUpdate(QAccessibleBridge* theWrappedObject, int  arg__1, QAccessibleInterface*  arg__2, int  arg__3)
{
theWrappedObject->notifyAccessibilityUpdate(arg__1, arg__2, arg__3);
}

void PythonQtWrapper_QAccessibleBridge::setRootObject(QAccessibleBridge* theWrappedObject, QAccessibleInterface*  arg__1)
{
theWrappedObject->setRootObject(arg__1);
}

