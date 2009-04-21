#ifndef PYTHONQTWRAPPER_QSEMAPHORE_H
#define PYTHONQTWRAPPER_QSEMAPHORE_H

#include <qsemaphore.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qsemaphore.h>

class PythonQtWrapper_QSemaphore : public QObject
{ Q_OBJECT
public:
public slots:
QSemaphore* new_QSemaphore(int  n = 0);
void delete_QSemaphore(QSemaphore* obj) { delete obj; } 
   int  available(QSemaphore* theWrappedObject) const;
   void acquire(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n, int  timeout);
   void release(QSemaphore* theWrappedObject, int  n = 1);
};

#endif // PYTHONQTWRAPPER_QSEMAPHORE_H
