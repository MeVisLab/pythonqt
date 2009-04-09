#include "PythonQtWrapper_QAccessibleInterfaceEx.h"

#include <QVariant>
#include <qaccessible.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>

QVariant  PythonQtWrapper_QAccessibleInterfaceEx::invokeMethodEx(QAccessibleInterfaceEx* theWrappedObject, QAccessible::Method  method, int  child, const QList<QVariant >&  params)
{
return theWrappedObject->invokeMethodEx(method, child, params);
}

QVariant  PythonQtWrapper_QAccessibleInterfaceEx::virtual_hook(QAccessibleInterfaceEx* theWrappedObject, const QVariant&  data)
{
return theWrappedObject->virtual_hook(data);
}

