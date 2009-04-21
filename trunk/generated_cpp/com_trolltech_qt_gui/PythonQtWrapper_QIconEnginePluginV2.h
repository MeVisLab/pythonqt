#ifndef PYTHONQTWRAPPER_QICONENGINEPLUGINV2_H
#define PYTHONQTWRAPPER_QICONENGINEPLUGINV2_H

#include <qiconengineplugin.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>

class PythonQtShell_QIconEnginePluginV2 : public QIconEnginePluginV2
{
public:
    PythonQtShell_QIconEnginePluginV2(QObject*  parent = 0):QIconEnginePluginV2(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual QIconEngineV2*  create(const QString&  filename = QString());
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QStringList  keys() const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QIconEnginePluginV2 : public QObject
{ Q_OBJECT
public:
public slots:
QIconEnginePluginV2* new_QIconEnginePluginV2(QObject*  parent = 0);
void delete_QIconEnginePluginV2(QIconEnginePluginV2* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QICONENGINEPLUGINV2_H
