#ifndef PYTHONQTWRAPPER_QTIMEREVENT_H
#define PYTHONQTWRAPPER_QTIMEREVENT_H

#include <qcoreevent.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QTimerEvent : public QObject
{ Q_OBJECT
public:
public slots:
QTimerEvent* new_QTimerEvent(int  timerId);
void delete_QTimerEvent(QTimerEvent* obj) { delete obj; } 
   int  timerId(QTimerEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTIMEREVENT_H
