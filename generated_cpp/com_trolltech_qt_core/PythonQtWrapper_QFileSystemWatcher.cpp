#include "PythonQtWrapper_QFileSystemWatcher.h"

#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>

QFileSystemWatcher* PythonQtWrapper_QFileSystemWatcher::new_QFileSystemWatcher(QObject*  parent)
{ 
return new QFileSystemWatcher(parent); }

QFileSystemWatcher* PythonQtWrapper_QFileSystemWatcher::new_QFileSystemWatcher(const QStringList&  paths, QObject*  parent)
{ 
return new QFileSystemWatcher(paths, parent); }

void PythonQtWrapper_QFileSystemWatcher::addPath(QFileSystemWatcher* theWrappedObject, const QString&  file)
{
theWrappedObject->addPath(file);
}

void PythonQtWrapper_QFileSystemWatcher::addPaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files)
{
theWrappedObject->addPaths(files);
}

QStringList  PythonQtWrapper_QFileSystemWatcher::directories(QFileSystemWatcher* theWrappedObject) const
{
return theWrappedObject->directories();
}

QStringList  PythonQtWrapper_QFileSystemWatcher::files(QFileSystemWatcher* theWrappedObject) const
{
return theWrappedObject->files();
}

void PythonQtWrapper_QFileSystemWatcher::removePath(QFileSystemWatcher* theWrappedObject, const QString&  file)
{
theWrappedObject->removePath(file);
}

void PythonQtWrapper_QFileSystemWatcher::removePaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files)
{
theWrappedObject->removePaths(files);
}

