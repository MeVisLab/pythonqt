#ifndef PYTHONQTWRAPPER_QWINDOWSTATECHANGEEVENT_H
#define PYTHONQTWRAPPER_QWINDOWSTATECHANGEEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtWrapper_QWindowStateChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWindowStateChangeEvent* new_QWindowStateChangeEvent(Qt::WindowStates  aOldState);
QWindowStateChangeEvent* new_QWindowStateChangeEvent(Qt::WindowStates  aOldState, bool  isOverride);
void delete_QWindowStateChangeEvent(QWindowStateChangeEvent* obj) { delete obj; } 
   Qt::WindowStates  oldState(QWindowStateChangeEvent* theWrappedObject) const;
   bool  isOverride(QWindowStateChangeEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QWINDOWSTATECHANGEEVENT_H
