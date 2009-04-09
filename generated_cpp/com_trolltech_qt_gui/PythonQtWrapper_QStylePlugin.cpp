#include "PythonQtWrapper_QStylePlugin.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qstyle.h>

QStyle*  PythonQtWrapper_QStylePlugin::create(QStylePlugin* theWrappedObject, const QString&  key)
{
return theWrappedObject->create(key);
}

QStringList  PythonQtWrapper_QStylePlugin::keys(QStylePlugin* theWrappedObject) const
{
return theWrappedObject->keys();
}

