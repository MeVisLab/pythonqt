#ifndef PYTHONQTWRAPPER_QHIDEEVENT_H
#define PYTHONQTWRAPPER_QHIDEEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtWrapper_QHideEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHideEvent* new_QHideEvent();
void delete_QHideEvent(QHideEvent* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QHIDEEVENT_H
