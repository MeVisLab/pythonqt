#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qaction.h>
#include <qactiongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdir.h>
#include <qevent.h>
#include <qiodevice.h>
#include <qlayout.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qthread.h>
#include <quiloader.h>
#include <qwidget.h>



class PythonQtShell_QUiLoader : public QUiLoader
{
public:
    PythonQtShell_QUiLoader(QObject*  parent = nullptr):QUiLoader(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QUiLoader() override;

void childEvent(QChildEvent*  event) override;
QAction*  createAction(QObject*  parent = nullptr, const QString&  name = QString()) override;
QActionGroup*  createActionGroup(QObject*  parent = nullptr, const QString&  name = QString()) override;
QLayout*  createLayout(const QString&  className, QObject*  parent = nullptr, const QString&  name = QString()) override;
QWidget*  createWidget(const QString&  className, QWidget*  parent = nullptr, const QString&  name = QString()) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QUiLoader : public QUiLoader
{ public:
inline QAction*  py_q_createAction(QObject*  parent = nullptr, const QString&  name = QString()) { return QUiLoader::createAction(parent, name); }
inline QActionGroup*  py_q_createActionGroup(QObject*  parent = nullptr, const QString&  name = QString()) { return QUiLoader::createActionGroup(parent, name); }
inline QLayout*  py_q_createLayout(const QString&  className, QObject*  parent = nullptr, const QString&  name = QString()) { return QUiLoader::createLayout(className, parent, name); }
inline QWidget*  py_q_createWidget(const QString&  className, QWidget*  parent = nullptr, const QString&  name = QString()) { return QUiLoader::createWidget(className, parent, name); }
};

class PythonQtWrapper_QUiLoader : public QObject
{ Q_OBJECT
public:
public slots:
QUiLoader* new_QUiLoader(QObject*  parent = nullptr);
void delete_QUiLoader(QUiLoader* obj) { delete obj; }
   void addPluginPath(QUiLoader* theWrappedObject, const QString&  path);
   QStringList  availableLayouts(QUiLoader* theWrappedObject) const;
   QStringList  availableWidgets(QUiLoader* theWrappedObject) const;
   void clearPluginPaths(QUiLoader* theWrappedObject);
   QAction*  createAction(QUiLoader* theWrappedObject, QObject*  parent = nullptr, const QString&  name = QString());
   QAction*  py_q_createAction(QUiLoader* theWrappedObject, QObject*  parent = nullptr, const QString&  name = QString()){  return (((PythonQtPublicPromoter_QUiLoader*)theWrappedObject)->py_q_createAction(parent, name));}
   QActionGroup*  createActionGroup(QUiLoader* theWrappedObject, QObject*  parent = nullptr, const QString&  name = QString());
   QActionGroup*  py_q_createActionGroup(QUiLoader* theWrappedObject, QObject*  parent = nullptr, const QString&  name = QString()){  return (((PythonQtPublicPromoter_QUiLoader*)theWrappedObject)->py_q_createActionGroup(parent, name));}
   QLayout*  createLayout(QUiLoader* theWrappedObject, const QString&  className, QObject*  parent = nullptr, const QString&  name = QString());
   QLayout*  py_q_createLayout(QUiLoader* theWrappedObject, const QString&  className, QObject*  parent = nullptr, const QString&  name = QString()){  return (((PythonQtPublicPromoter_QUiLoader*)theWrappedObject)->py_q_createLayout(className, parent, name));}
   QWidget*  createWidget(QUiLoader* theWrappedObject, const QString&  className, QWidget*  parent = nullptr, const QString&  name = QString());
   QWidget*  py_q_createWidget(QUiLoader* theWrappedObject, const QString&  className, QWidget*  parent = nullptr, const QString&  name = QString()){  return (((PythonQtPublicPromoter_QUiLoader*)theWrappedObject)->py_q_createWidget(className, parent, name));}
   QString  errorString(QUiLoader* theWrappedObject) const;
   bool  isLanguageChangeEnabled(QUiLoader* theWrappedObject) const;
   bool  isTranslationEnabled(QUiLoader* theWrappedObject) const;
   QWidget*  load(QUiLoader* theWrappedObject, QIODevice*  device, QWidget*  parentWidget = nullptr);
   QStringList  pluginPaths(QUiLoader* theWrappedObject) const;
   void setLanguageChangeEnabled(QUiLoader* theWrappedObject, bool  enabled);
   void setTranslationEnabled(QUiLoader* theWrappedObject, bool  enabled);
   void setWorkingDirectory(QUiLoader* theWrappedObject, const QDir&  dir);
   QDir  workingDirectory(QUiLoader* theWrappedObject) const;
};


