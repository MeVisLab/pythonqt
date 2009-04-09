#include "PythonQtWrapper_QInputContextPlugin.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qinputcontext.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>

QInputContext*  PythonQtWrapper_QInputContextPlugin::create(QInputContextPlugin* theWrappedObject, const QString&  key)
{
return theWrappedObject->create(key);
}

QString  PythonQtWrapper_QInputContextPlugin::description(QInputContextPlugin* theWrappedObject, const QString&  key)
{
return theWrappedObject->description(key);
}

QString  PythonQtWrapper_QInputContextPlugin::displayName(QInputContextPlugin* theWrappedObject, const QString&  key)
{
return theWrappedObject->displayName(key);
}

QStringList  PythonQtWrapper_QInputContextPlugin::keys(QInputContextPlugin* theWrappedObject) const
{
return theWrappedObject->keys();
}

QStringList  PythonQtWrapper_QInputContextPlugin::languages(QInputContextPlugin* theWrappedObject, const QString&  key)
{
return theWrappedObject->languages(key);
}

