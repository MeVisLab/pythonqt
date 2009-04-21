#ifndef PYTHONQTWRAPPER_QWHEELEVENT_H
#define PYTHONQTWRAPPER_QWHEELEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qpoint.h>

class PythonQtShell_QWheelEvent : public QWheelEvent
{
public:
    PythonQtShell_QWheelEvent(const QPoint&  pos, const QPoint&  globalPos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical):QWheelEvent(pos, globalPos, delta, buttons, modifiers, orient),_wrapper(NULL) {};
    PythonQtShell_QWheelEvent(const QPoint&  pos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical):QWheelEvent(pos, delta, buttons, modifiers, orient),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWheelEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWheelEvent* new_QWheelEvent(const QPoint&  pos, const QPoint&  globalPos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical);
QWheelEvent* new_QWheelEvent(const QPoint&  pos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical);
void delete_QWheelEvent(QWheelEvent* obj) { delete obj; } 
   int  y(QWheelEvent* theWrappedObject) const;
   int  x(QWheelEvent* theWrappedObject) const;
   int  globalY(QWheelEvent* theWrappedObject) const;
   const QPoint&  pos(QWheelEvent* theWrappedObject) const;
   int  delta(QWheelEvent* theWrappedObject) const;
   Qt::Orientation  orientation(QWheelEvent* theWrappedObject) const;
   const QPoint&  globalPos(QWheelEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QWheelEvent* theWrappedObject) const;
   int  globalX(QWheelEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QWHEELEVENT_H
