#include "PythonQtWrapper_QWebPluginFactory.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qwebpluginfactory.h>

QObject*  PythonQtWrapper_QWebPluginFactory::create(QWebPluginFactory* theWrappedObject, const QString&  mimeType, const QUrl&  url, const QStringList&  argumentNames, const QStringList&  argumentValues) const
{
return theWrappedObject->create(mimeType, url, argumentNames, argumentValues);
}

QList<QWebPluginFactory::Plugin >  PythonQtWrapper_QWebPluginFactory::plugins(QWebPluginFactory* theWrappedObject) const
{
return theWrappedObject->plugins();
}

void PythonQtWrapper_QWebPluginFactory::refreshPlugins(QWebPluginFactory* theWrappedObject)
{
theWrappedObject->refreshPlugins();
}

bool  PythonQtWrapper_QWebPluginFactory::supportsExtension(QWebPluginFactory* theWrappedObject, QWebPluginFactory::Extension  extension) const
{
return theWrappedObject->supportsExtension(extension);
}

