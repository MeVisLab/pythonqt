#ifndef PYTHONQTWRAPPER_QACCESSIBLEPLUGIN_H
#define PYTHONQTWRAPPER_QACCESSIBLEPLUGIN_H

#include <qaccessibleplugin.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaccessible.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>

class PythonQtShell_QAccessiblePlugin : public QAccessiblePlugin
{
public:
    PythonQtShell_QAccessiblePlugin(QObject*  parent = 0):QAccessiblePlugin(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual QAccessibleInterface*  create(const QString&  key, QObject*  object);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QStringList  keys() const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAccessiblePlugin : public QObject
{ Q_OBJECT
public:
public slots:
QAccessiblePlugin* new_QAccessiblePlugin(QObject*  parent = 0);
void delete_QAccessiblePlugin(QAccessiblePlugin* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEPLUGIN_H
