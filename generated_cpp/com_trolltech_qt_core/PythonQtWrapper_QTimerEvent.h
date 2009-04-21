#ifndef PYTHONQTWRAPPER_QTIMEREVENT_H
#define PYTHONQTWRAPPER_QTIMEREVENT_H

#include <qcoreevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QTimerEvent : public QTimerEvent
{
public:
    PythonQtShell_QTimerEvent(int  timerId):QTimerEvent(timerId),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTimerEvent : public QObject
{ Q_OBJECT
public:
public slots:
QTimerEvent* new_QTimerEvent(int  timerId);
void delete_QTimerEvent(QTimerEvent* obj) { delete obj; } 
   int  timerId(QTimerEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTIMEREVENT_H
