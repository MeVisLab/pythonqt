#ifndef PYTHONQTWRAPPER_QSTYLEPLUGIN_H
#define PYTHONQTWRAPPER_QSTYLEPLUGIN_H

#include <qstyleplugin.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qstyle.h>

class PythonQtShell_QStylePlugin : public QStylePlugin
{
public:
    PythonQtShell_QStylePlugin(QObject*  parent = 0):QStylePlugin(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual QStyle*  create(const QString&  key);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QStringList  keys() const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStylePlugin : public QObject
{ Q_OBJECT
public:
public slots:
QStylePlugin* new_QStylePlugin(QObject*  parent = 0);
void delete_QStylePlugin(QStylePlugin* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEPLUGIN_H
