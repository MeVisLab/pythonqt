#ifndef PYTHONQTWRAPPER_QCLOSEEVENT_H
#define PYTHONQTWRAPPER_QCLOSEEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtWrapper_QCloseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QCloseEvent* new_QCloseEvent();
void delete_QCloseEvent(QCloseEvent* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QCLOSEEVENT_H
