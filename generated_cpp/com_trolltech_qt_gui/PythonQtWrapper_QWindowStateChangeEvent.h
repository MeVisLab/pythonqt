#ifndef PYTHONQTWRAPPER_QWINDOWSTATECHANGEEVENT_H
#define PYTHONQTWRAPPER_QWINDOWSTATECHANGEEVENT_H

#include <qevent.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QWindowStateChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWindowStateChangeEvent* new_QWindowStateChangeEvent(Qt::WindowStates  aOldState);
QWindowStateChangeEvent* new_QWindowStateChangeEvent(Qt::WindowStates  aOldState, bool  isOverride);
void delete_QWindowStateChangeEvent(QWindowStateChangeEvent* obj) { delete obj; } 
   bool  isOverride(QWindowStateChangeEvent* theWrappedObject) const;
   Qt::WindowStates  oldState(QWindowStateChangeEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QWINDOWSTATECHANGEEVENT_H
