#ifndef PYTHONQTWRAPPER_QDRAGRESPONSEEVENT_H
#define PYTHONQTWRAPPER_QDRAGRESPONSEEVENT_H

#include <qevent.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QDragResponseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragResponseEvent* new_QDragResponseEvent(bool  accepted);
void delete_QDragResponseEvent(QDragResponseEvent* obj) { delete obj; } 
   bool  dragAccepted(QDragResponseEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDRAGRESPONSEEVENT_H
