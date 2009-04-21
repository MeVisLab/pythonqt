#ifndef PYTHONQTWRAPPER_QCHILDEVENT_H
#define PYTHONQTWRAPPER_QCHILDEVENT_H

#include <qcoreevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qobject.h>

class PythonQtShell_QChildEvent : public QChildEvent
{
public:
    PythonQtShell_QChildEvent(QEvent::Type  type, QObject*  child):QChildEvent(type, child),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QChildEvent : public QObject
{ Q_OBJECT
public:
public slots:
QChildEvent* new_QChildEvent(QEvent::Type  type, QObject*  child);
void delete_QChildEvent(QChildEvent* obj) { delete obj; } 
   bool  added(QChildEvent* theWrappedObject) const;
   QObject*  child(QChildEvent* theWrappedObject) const;
   bool  removed(QChildEvent* theWrappedObject) const;
   bool  polished(QChildEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QCHILDEVENT_H
