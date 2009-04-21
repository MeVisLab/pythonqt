#ifndef PYTHONQTWRAPPER_QSHOWEVENT_H
#define PYTHONQTWRAPPER_QSHOWEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtWrapper_QShowEvent : public QObject
{ Q_OBJECT
public:
public slots:
QShowEvent* new_QShowEvent();
void delete_QShowEvent(QShowEvent* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSHOWEVENT_H
