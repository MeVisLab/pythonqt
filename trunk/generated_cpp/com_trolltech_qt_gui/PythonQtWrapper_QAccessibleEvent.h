#ifndef PYTHONQTWRAPPER_QACCESSIBLEEVENT_H
#define PYTHONQTWRAPPER_QACCESSIBLEEVENT_H

#include <qaccessible.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtWrapper_QAccessibleEvent : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleEvent* new_QAccessibleEvent(QEvent::Type  type, int  child);
void delete_QAccessibleEvent(QAccessibleEvent* obj) { delete obj; } 
   QString  value(QAccessibleEvent* theWrappedObject) const;
   int  child(QAccessibleEvent* theWrappedObject) const;
   void setValue(QAccessibleEvent* theWrappedObject, const QString&  aText);
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEEVENT_H
