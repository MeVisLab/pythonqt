#ifndef PYTHONQTWRAPPER_QSTATUSTIPEVENT_H
#define PYTHONQTWRAPPER_QSTATUSTIPEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtWrapper_QStatusTipEvent : public QObject
{ Q_OBJECT
public:
public slots:
QStatusTipEvent* new_QStatusTipEvent(const QString&  tip);
void delete_QStatusTipEvent(QStatusTipEvent* obj) { delete obj; } 
   QString  tip(QStatusTipEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSTATUSTIPEVENT_H
