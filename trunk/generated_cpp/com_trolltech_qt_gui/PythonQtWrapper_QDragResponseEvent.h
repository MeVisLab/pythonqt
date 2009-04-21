#ifndef PYTHONQTWRAPPER_QDRAGRESPONSEEVENT_H
#define PYTHONQTWRAPPER_QDRAGRESPONSEEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QDragResponseEvent : public QDragResponseEvent
{
public:
    PythonQtShell_QDragResponseEvent(bool  accepted):QDragResponseEvent(accepted),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDragResponseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragResponseEvent* new_QDragResponseEvent(bool  accepted);
void delete_QDragResponseEvent(QDragResponseEvent* obj) { delete obj; } 
   bool  dragAccepted(QDragResponseEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDRAGRESPONSEEVENT_H
