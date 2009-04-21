#ifndef PYTHONQTWRAPPER_QSTYLEFACTORY_H
#define PYTHONQTWRAPPER_QSTYLEFACTORY_H

#include <qstylefactory.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qstringlist.h>
#include <qstyle.h>

class PythonQtShell_QStyleFactory : public QStyleFactory
{
public:
    PythonQtShell_QStyleFactory():QStyleFactory(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleFactory : public QObject
{ Q_OBJECT
public:
public slots:
QStyleFactory* new_QStyleFactory();
void delete_QStyleFactory(QStyleFactory* obj) { delete obj; } 
   QStyle*  static_QStyleFactory_create(const QString&  arg__1);
   QStringList  static_QStyleFactory_keys();
};

#endif // PYTHONQTWRAPPER_QSTYLEFACTORY_H
