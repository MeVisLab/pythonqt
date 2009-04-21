#ifndef PYTHONQTWRAPPER_QDRAGLEAVEEVENT_H
#define PYTHONQTWRAPPER_QDRAGLEAVEEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtWrapper_QDragLeaveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragLeaveEvent* new_QDragLeaveEvent();
void delete_QDragLeaveEvent(QDragLeaveEvent* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QDRAGLEAVEEVENT_H
