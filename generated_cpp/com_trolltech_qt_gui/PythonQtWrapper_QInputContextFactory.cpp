#include "PythonQtWrapper_QInputContextFactory.h"

#include <QVariant>
#include <qinputcontext.h>
#include <qobject.h>
#include <qstringlist.h>

QInputContextFactory* PythonQtWrapper_QInputContextFactory::new_QInputContextFactory()
{ 
return new QInputContextFactory(); }

QInputContext*  PythonQtWrapper_QInputContextFactory::static_QInputContextFactory_create(const QString&  key, QObject*  parent)
{
return QInputContextFactory::create(key, parent);
}

QString  PythonQtWrapper_QInputContextFactory::static_QInputContextFactory_description(const QString&  key)
{
return QInputContextFactory::description(key);
}

QString  PythonQtWrapper_QInputContextFactory::static_QInputContextFactory_displayName(const QString&  key)
{
return QInputContextFactory::displayName(key);
}

QStringList  PythonQtWrapper_QInputContextFactory::static_QInputContextFactory_keys()
{
return QInputContextFactory::keys();
}

QStringList  PythonQtWrapper_QInputContextFactory::static_QInputContextFactory_languages(const QString&  key)
{
return QInputContextFactory::languages(key);
}

