#ifndef PYTHONQTWRAPPER_QUILOADER_H
#define PYTHONQTWRAPPER_QUILOADER_H

#include <quiloader.h>
#include <QObject>

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

class PythonQtWrapper_QUiLoader : public QObject
{ Q_OBJECT
public:
public slots:
QUiLoader* new_QUiLoader(QObject*  parent = 0);
void delete_QUiLoader(QUiLoader* obj) { delete obj; } 
   void addPluginPath(QUiLoader* theWrappedObject, const QString&  path);
   QStringList  availableWidgets(QUiLoader* theWrappedObject) const;
   void clearPluginPaths(QUiLoader* theWrappedObject);
   QAction*  createAction(QUiLoader* theWrappedObject, QObject*  parent = 0, const QString&  name = QString());
   QActionGroup*  createActionGroup(QUiLoader* theWrappedObject, QObject*  parent = 0, const QString&  name = QString());
   QLayout*  createLayout(QUiLoader* theWrappedObject, const QString&  className, QObject*  parent = 0, const QString&  name = QString());
   QWidget*  createWidget(QUiLoader* theWrappedObject, const QString&  className, QWidget*  parent = 0, const QString&  name = QString());
   bool  isScriptingEnabled(QUiLoader* theWrappedObject) const;
   QWidget*  load(QUiLoader* theWrappedObject, QIODevice*  device, QWidget*  parentWidget = 0);
   QStringList  pluginPaths(QUiLoader* theWrappedObject) const;
   void setScriptingEnabled(QUiLoader* theWrappedObject, bool  enabled);
   void setWorkingDirectory(QUiLoader* theWrappedObject, const QDir&  dir);
   QDir  workingDirectory(QUiLoader* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QUILOADER_H
