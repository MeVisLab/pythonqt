#ifndef PYTHONQTWRAPPER_QWEBPLUGINFACTORY_H
#define PYTHONQTWRAPPER_QWEBPLUGINFACTORY_H

#include <qwebpluginfactory.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qwebpluginfactory.h>

class PythonQtShell_QWebPluginFactory : public QWebPluginFactory
{
public:
    PythonQtShell_QWebPluginFactory(QObject*  parent = 0):QWebPluginFactory(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual QObject*  create(const QString&  mimeType, const QUrl&  url, const QStringList&  argumentNames, const QStringList&  argumentValues) const;
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QList<QWebPluginFactory::Plugin >  plugins() const;
virtual void refreshPlugins();
virtual bool  supportsExtension(QWebPluginFactory::Extension  extension) const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPluginFactory : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Extension )
enum Extension{
};
public slots:
QWebPluginFactory* new_QWebPluginFactory(QObject*  parent = 0);
void delete_QWebPluginFactory(QWebPluginFactory* obj) { delete obj; } 
   bool  supportsExtension(QWebPluginFactory* theWrappedObject, QWebPluginFactory::Extension  extension) const;
   void refreshPlugins(QWebPluginFactory* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QWEBPLUGINFACTORY_H
