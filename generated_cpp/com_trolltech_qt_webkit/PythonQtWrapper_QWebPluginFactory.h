#ifndef PYTHONQTWRAPPER_QWEBPLUGINFACTORY_H
#define PYTHONQTWRAPPER_QWEBPLUGINFACTORY_H

#include <qwebpluginfactory.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qwebpluginfactory.h>

class PythonQtWrapper_QWebPluginFactory : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Extension )
enum Extension{
};
public slots:
void delete_QWebPluginFactory(QWebPluginFactory* obj) { delete obj; } 
   QObject*  create(QWebPluginFactory* theWrappedObject, const QString&  mimeType, const QUrl&  url, const QStringList&  argumentNames, const QStringList&  argumentValues) const;
   QList<QWebPluginFactory::Plugin >  plugins(QWebPluginFactory* theWrappedObject) const;
   void refreshPlugins(QWebPluginFactory* theWrappedObject);
   bool  supportsExtension(QWebPluginFactory* theWrappedObject, QWebPluginFactory::Extension  extension) const;
};

#endif // PYTHONQTWRAPPER_QWEBPLUGINFACTORY_H
