#ifndef PYTHONQTWRAPPER_QINPUTEVENT_H
#define PYTHONQTWRAPPER_QINPUTEVENT_H

#include <qevent.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QInputEvent : public QObject
{ Q_OBJECT
public:
public slots:
QInputEvent* new_QInputEvent(QEvent::Type  type, Qt::KeyboardModifiers  modifiers = Qt::NoModifier);
void delete_QInputEvent(QInputEvent* obj) { delete obj; } 
   Qt::KeyboardModifiers  modifiers(QInputEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QINPUTEVENT_H
