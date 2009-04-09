#include "PythonQtWrapper_QUiLoader.h"

#include <QVariant>
#include <qaction.h>
#include <qactiongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdir.h>
#include <qiodevice.h>
#include <qlayout.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <quiloader.h>
#include <qwidget.h>

QUiLoader* PythonQtWrapper_QUiLoader::new_QUiLoader(QObject*  parent)
{ 
return new QUiLoader(parent); }

void PythonQtWrapper_QUiLoader::addPluginPath(QUiLoader* theWrappedObject, const QString&  path)
{
theWrappedObject->addPluginPath(path);
}

QStringList  PythonQtWrapper_QUiLoader::availableWidgets(QUiLoader* theWrappedObject) const
{
return theWrappedObject->availableWidgets();
}

void PythonQtWrapper_QUiLoader::clearPluginPaths(QUiLoader* theWrappedObject)
{
theWrappedObject->clearPluginPaths();
}

QAction*  PythonQtWrapper_QUiLoader::createAction(QUiLoader* theWrappedObject, QObject*  parent, const QString&  name)
{
return theWrappedObject->createAction(parent, name);
}

QActionGroup*  PythonQtWrapper_QUiLoader::createActionGroup(QUiLoader* theWrappedObject, QObject*  parent, const QString&  name)
{
return theWrappedObject->createActionGroup(parent, name);
}

QLayout*  PythonQtWrapper_QUiLoader::createLayout(QUiLoader* theWrappedObject, const QString&  className, QObject*  parent, const QString&  name)
{
return theWrappedObject->createLayout(className, parent, name);
}

QWidget*  PythonQtWrapper_QUiLoader::createWidget(QUiLoader* theWrappedObject, const QString&  className, QWidget*  parent, const QString&  name)
{
return theWrappedObject->createWidget(className, parent, name);
}

bool  PythonQtWrapper_QUiLoader::isScriptingEnabled(QUiLoader* theWrappedObject) const
{
return theWrappedObject->isScriptingEnabled();
}

QWidget*  PythonQtWrapper_QUiLoader::load(QUiLoader* theWrappedObject, QIODevice*  device, QWidget*  parentWidget)
{
return theWrappedObject->load(device, parentWidget);
}

QStringList  PythonQtWrapper_QUiLoader::pluginPaths(QUiLoader* theWrappedObject) const
{
return theWrappedObject->pluginPaths();
}

void PythonQtWrapper_QUiLoader::setScriptingEnabled(QUiLoader* theWrappedObject, bool  enabled)
{
theWrappedObject->setScriptingEnabled(enabled);
}

void PythonQtWrapper_QUiLoader::setWorkingDirectory(QUiLoader* theWrappedObject, const QDir&  dir)
{
theWrappedObject->setWorkingDirectory(dir);
}

QDir  PythonQtWrapper_QUiLoader::workingDirectory(QUiLoader* theWrappedObject) const
{
return theWrappedObject->workingDirectory();
}

