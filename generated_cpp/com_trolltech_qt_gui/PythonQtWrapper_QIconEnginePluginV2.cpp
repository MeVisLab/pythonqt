#include "PythonQtWrapper_QIconEnginePluginV2.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>

QIconEngineV2*  PythonQtWrapper_QIconEnginePluginV2::create(QIconEnginePluginV2* theWrappedObject, const QString&  filename)
{
return theWrappedObject->create(filename);
}

QStringList  PythonQtWrapper_QIconEnginePluginV2::keys(QIconEnginePluginV2* theWrappedObject) const
{
return theWrappedObject->keys();
}

