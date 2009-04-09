#ifndef PYTHONQTWRAPPER_QFOCUSEVENT_H
#define PYTHONQTWRAPPER_QFOCUSEVENT_H

#include <qevent.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QFocusEvent : public QObject
{ Q_OBJECT
public:
public slots:
QFocusEvent* new_QFocusEvent(QEvent::Type  type, Qt::FocusReason  reason = Qt::OtherFocusReason);
void delete_QFocusEvent(QFocusEvent* obj) { delete obj; } 
   bool  gotFocus(QFocusEvent* theWrappedObject) const;
   bool  lostFocus(QFocusEvent* theWrappedObject) const;
   Qt::FocusReason  reason(QFocusEvent* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QFOCUSEVENT_H
