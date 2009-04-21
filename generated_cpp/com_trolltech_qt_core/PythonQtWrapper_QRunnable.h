#ifndef PYTHONQTWRAPPER_QRUNNABLE_H
#define PYTHONQTWRAPPER_QRUNNABLE_H

#include <qrunnable.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QRunnable : public QRunnable
{
public:
    PythonQtShell_QRunnable():QRunnable(),_wrapper(NULL) {};

virtual void run();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QRunnable : public QObject
{ Q_OBJECT
public:
public slots:
QRunnable* new_QRunnable();
void delete_QRunnable(QRunnable* obj) { delete obj; } 
   bool  autoDelete(QRunnable* theWrappedObject) const;
   void setAutoDelete(QRunnable* theWrappedObject, bool  _autoDelete);
};

#endif // PYTHONQTWRAPPER_QRUNNABLE_H
