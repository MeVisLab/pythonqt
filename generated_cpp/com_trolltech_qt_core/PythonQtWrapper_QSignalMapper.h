#ifndef PYTHONQTWRAPPER_QSIGNALMAPPER_H
#define PYTHONQTWRAPPER_QSIGNALMAPPER_H

#include <qsignalmapper.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsignalmapper.h>

class PythonQtShell_QSignalMapper : public QSignalMapper
{
public:
    PythonQtShell_QSignalMapper(QObject*  parent = 0):QSignalMapper(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSignalMapper : public QObject
{ Q_OBJECT
public:
public slots:
QSignalMapper* new_QSignalMapper(QObject*  parent = 0);
void delete_QSignalMapper(QSignalMapper* obj) { delete obj; } 
   QObject*  mapping(QSignalMapper* theWrappedObject, int  id) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, const QString&  text) const;
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, int  id);
   void removeMappings(QSignalMapper* theWrappedObject, QObject*  sender);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, QObject*  object);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, const QString&  text);
   QObject*  mapping(QSignalMapper* theWrappedObject, QObject*  object) const;
};

#endif // PYTHONQTWRAPPER_QSIGNALMAPPER_H
