#include <PythonQt.h>
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
#include <qmetaobject.h>
#include <qobject.h>
#include <qstringlist.h>
#include <quiloader.h>
#include <qwidget.h>



class PythonQtShell_QUiLoader : public QUiLoader
{
public:
    PythonQtShell_QUiLoader(QObject*  parent = NULL):QUiLoader(parent),_wrapper(NULL) {};

   ~PythonQtShell_QUiLoader();

virtual void childEvent(QChildEvent*  event);
virtual QAction*  createAction(QObject*  parent = NULL, const QString&  name = QString());
virtual QActionGroup*  createActionGroup(QObject*  parent = NULL, const QString&  name = QString());
virtual QLayout*  createLayout(const QString&  className, QObject*  parent = NULL, const QString&  name = QString());
virtual QWidget*  createWidget(const QString&  className, QWidget*  parent = NULL, const QString&  name = QString());
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QUiLoader : public QUiLoader
{ public:
inline QAction*  py_q_createAction(QObject*  parent = NULL, const QString&  name = QString()) { return QUiLoader::createAction(parent, name); }
inline QActionGroup*  py_q_createActionGroup(QObject*  parent = NULL, const QString&  name = QString()) { return QUiLoader::createActionGroup(parent, name); }
inline QLayout*  py_q_createLayout(const QString&  className, QObject*  parent = NULL, const QString&  name = QString()) { return QUiLoader::createLayout(className, parent, name); }
inline QWidget*  py_q_createWidget(const QString&  className, QWidget*  parent = NULL, const QString&  name = QString()) { return QUiLoader::createWidget(className, parent, name); }
};

class PythonQtWrapper_QUiLoader : public QObject
{ Q_OBJECT
public:
public slots:
QUiLoader* new_QUiLoader(QObject*  parent = NULL);
void delete_QUiLoader(QUiLoader* obj) { delete obj; } 
   void addPluginPath(QUiLoader* theWrappedObject, const QString&  path);
   QStringList  availableLayouts(QUiLoader* theWrappedObject) const;
   QStringList  availableWidgets(QUiLoader* theWrappedObject) const;
   void clearPluginPaths(QUiLoader* theWrappedObject);
   QAction*  createAction(QUiLoader* theWrappedObject, QObject*  parent = NULL, const QString&  name = QString());
   QAction*  py_q_createAction(QUiLoader* theWrappedObject, QObject*  parent = NULL, const QString&  name = QString()){  return (((PythonQtPublicPromoter_QUiLoader*)theWrappedObject)->py_q_createAction(parent, name));}
   QActionGroup*  createActionGroup(QUiLoader* theWrappedObject, QObject*  parent = NULL, const QString&  name = QString());
   QActionGroup*  py_q_createActionGroup(QUiLoader* theWrappedObject, QObject*  parent = NULL, const QString&  name = QString()){  return (((PythonQtPublicPromoter_QUiLoader*)theWrappedObject)->py_q_createActionGroup(parent, name));}
   QLayout*  createLayout(QUiLoader* theWrappedObject, const QString&  className, QObject*  parent = NULL, const QString&  name = QString());
   QLayout*  py_q_createLayout(QUiLoader* theWrappedObject, const QString&  className, QObject*  parent = NULL, const QString&  name = QString()){  return (((PythonQtPublicPromoter_QUiLoader*)theWrappedObject)->py_q_createLayout(className, parent, name));}
   QWidget*  createWidget(QUiLoader* theWrappedObject, const QString&  className, QWidget*  parent = NULL, const QString&  name = QString());
   QWidget*  py_q_createWidget(QUiLoader* theWrappedObject, const QString&  className, QWidget*  parent = NULL, const QString&  name = QString()){  return (((PythonQtPublicPromoter_QUiLoader*)theWrappedObject)->py_q_createWidget(className, parent, name));}
   QString  errorString(QUiLoader* theWrappedObject) const;
   bool  isLanguageChangeEnabled(QUiLoader* theWrappedObject) const;
   bool  isTranslationEnabled(QUiLoader* theWrappedObject) const;
   QWidget*  load(QUiLoader* theWrappedObject, QIODevice*  device, QWidget*  parentWidget = NULL);
   QStringList  pluginPaths(QUiLoader* theWrappedObject) const;
   void setLanguageChangeEnabled(QUiLoader* theWrappedObject, bool  enabled);
   void setTranslationEnabled(QUiLoader* theWrappedObject, bool  enabled);
   void setWorkingDirectory(QUiLoader* theWrappedObject, const QDir&  dir);
   QDir  workingDirectory(QUiLoader* theWrappedObject) const;
};


