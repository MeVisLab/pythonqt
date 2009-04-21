#ifndef PYTHONQTWRAPPER_QINPUTCONTEXTFACTORY_H
#define PYTHONQTWRAPPER_QINPUTCONTEXTFACTORY_H

#include <qinputcontextfactory.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qinputcontext.h>
#include <qobject.h>
#include <qstringlist.h>

class PythonQtShell_QInputContextFactory : public QInputContextFactory
{
public:
    PythonQtShell_QInputContextFactory():QInputContextFactory(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QInputContextFactory : public QObject
{ Q_OBJECT
public:
public slots:
QInputContextFactory* new_QInputContextFactory();
void delete_QInputContextFactory(QInputContextFactory* obj) { delete obj; } 
   QString  static_QInputContextFactory_displayName(const QString&  key);
   QStringList  static_QInputContextFactory_languages(const QString&  key);
   QStringList  static_QInputContextFactory_keys();
   QString  static_QInputContextFactory_description(const QString&  key);
   QInputContext*  static_QInputContextFactory_create(const QString&  key, QObject*  parent);
};

#endif // PYTHONQTWRAPPER_QINPUTCONTEXTFACTORY_H
