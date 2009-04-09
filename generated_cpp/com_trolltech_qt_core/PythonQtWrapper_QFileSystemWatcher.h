#ifndef PYTHONQTWRAPPER_QFILESYSTEMWATCHER_H
#define PYTHONQTWRAPPER_QFILESYSTEMWATCHER_H

#include <qfilesystemwatcher.h>
#include <QObject>

#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>

class PythonQtWrapper_QFileSystemWatcher : public QObject
{ Q_OBJECT
public:
public slots:
QFileSystemWatcher* new_QFileSystemWatcher(QObject*  parent = 0);
QFileSystemWatcher* new_QFileSystemWatcher(const QStringList&  paths, QObject*  parent = 0);
void delete_QFileSystemWatcher(QFileSystemWatcher* obj) { delete obj; } 
   void addPath(QFileSystemWatcher* theWrappedObject, const QString&  file);
   void addPaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files);
   QStringList  directories(QFileSystemWatcher* theWrappedObject) const;
   QStringList  files(QFileSystemWatcher* theWrappedObject) const;
   void removePath(QFileSystemWatcher* theWrappedObject, const QString&  file);
   void removePaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files);
};

#endif // PYTHONQTWRAPPER_QFILESYSTEMWATCHER_H
