#ifndef PYTHONQTWRAPPER_QINPUTCONTEXTPLUGIN_H
#define PYTHONQTWRAPPER_QINPUTCONTEXTPLUGIN_H

#include <qinputcontextplugin.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qinputcontext.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>

class PythonQtShell_QInputContextPlugin : public QInputContextPlugin
{
public:
    PythonQtShell_QInputContextPlugin(QObject*  parent = 0):QInputContextPlugin(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual QInputContext*  create(const QString&  key);
virtual void customEvent(QEvent*  arg__1);
virtual QString  description(const QString&  key);
virtual QString  displayName(const QString&  key);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QStringList  keys() const;
virtual QStringList  languages(const QString&  key);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QInputContextPlugin : public QObject
{ Q_OBJECT
public:
public slots:
QInputContextPlugin* new_QInputContextPlugin(QObject*  parent = 0);
void delete_QInputContextPlugin(QInputContextPlugin* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QINPUTCONTEXTPLUGIN_H
