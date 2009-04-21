#ifndef PYTHONQTWRAPPER_QWHATSTHISCLICKEDEVENT_H
#define PYTHONQTWRAPPER_QWHATSTHISCLICKEDEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtWrapper_QWhatsThisClickedEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWhatsThisClickedEvent* new_QWhatsThisClickedEvent(const QString&  href);
void delete_QWhatsThisClickedEvent(QWhatsThisClickedEvent* obj) { delete obj; } 
   QString  href(QWhatsThisClickedEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QWHATSTHISCLICKEDEVENT_H
