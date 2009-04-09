#ifndef PYTHONQTWRAPPER_QBASICTIMER_H
#define PYTHONQTWRAPPER_QBASICTIMER_H

#include <qbasictimer.h>
#include <QObject>

#include <QVariant>
#include <qobject.h>

class PythonQtWrapper_QBasicTimer : public QObject
{ Q_OBJECT
public:
public slots:
QBasicTimer* new_QBasicTimer();
void delete_QBasicTimer(QBasicTimer* obj) { delete obj; } 
   bool  isActive(QBasicTimer* theWrappedObject) const;
   void start(QBasicTimer* theWrappedObject, int  msec, QObject*  obj);
   void stop(QBasicTimer* theWrappedObject);
   int  timerId(QBasicTimer* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QBASICTIMER_H
