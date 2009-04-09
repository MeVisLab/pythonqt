#include "PythonQtWrapper_QAccessiblePlugin.h"

#include <QVariant>
#include <qaccessible.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>

QAccessibleInterface*  PythonQtWrapper_QAccessiblePlugin::create(QAccessiblePlugin* theWrappedObject, const QString&  key, QObject*  object)
{
return theWrappedObject->create(key, object);
}

QStringList  PythonQtWrapper_QAccessiblePlugin::keys(QAccessiblePlugin* theWrappedObject) const
{
return theWrappedObject->keys();
}

