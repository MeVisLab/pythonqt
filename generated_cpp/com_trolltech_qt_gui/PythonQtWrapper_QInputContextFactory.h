#ifndef PYTHONQTWRAPPER_QINPUTCONTEXTFACTORY_H
#define PYTHONQTWRAPPER_QINPUTCONTEXTFACTORY_H

#include <qinputcontextfactory.h>
#include <QObject>

#include <QVariant>
#include <qinputcontext.h>
#include <qobject.h>
#include <qstringlist.h>

class PythonQtWrapper_QInputContextFactory : public QObject
{ Q_OBJECT
public:
public slots:
QInputContextFactory* new_QInputContextFactory();
void delete_QInputContextFactory(QInputContextFactory* obj) { delete obj; } 
   QInputContext*  static_QInputContextFactory_create(const QString&  key, QObject*  parent);
   QString  static_QInputContextFactory_description(const QString&  key);
   QString  static_QInputContextFactory_displayName(const QString&  key);
   QStringList  static_QInputContextFactory_keys();
   QStringList  static_QInputContextFactory_languages(const QString&  key);
};

#endif // PYTHONQTWRAPPER_QINPUTCONTEXTFACTORY_H
