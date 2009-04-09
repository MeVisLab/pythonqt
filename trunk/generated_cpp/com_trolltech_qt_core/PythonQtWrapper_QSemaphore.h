#ifndef PYTHONQTWRAPPER_QSEMAPHORE_H
#define PYTHONQTWRAPPER_QSEMAPHORE_H

#include <qsemaphore.h>
#include <QObject>

#include <QVariant>
#include <qsemaphore.h>

class PythonQtWrapper_QSemaphore : public QObject
{ Q_OBJECT
public:
public slots:
QSemaphore* new_QSemaphore(int  n = 0);
void delete_QSemaphore(QSemaphore* obj) { delete obj; } 
   void acquire(QSemaphore* theWrappedObject, int  n = 1);
   int  available(QSemaphore* theWrappedObject) const;
   void release(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n, int  timeout);
};

#endif // PYTHONQTWRAPPER_QSEMAPHORE_H
