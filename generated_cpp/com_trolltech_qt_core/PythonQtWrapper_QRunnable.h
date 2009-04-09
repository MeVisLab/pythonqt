#ifndef PYTHONQTWRAPPER_QRUNNABLE_H
#define PYTHONQTWRAPPER_QRUNNABLE_H

#include <qrunnable.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QRunnable : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QRunnable(QRunnable* obj) { delete obj; } 
   bool  autoDelete(QRunnable* theWrappedObject) const;
   void run(QRunnable* theWrappedObject);
   void setAutoDelete(QRunnable* theWrappedObject, bool  _autoDelete);
};

#endif // PYTHONQTWRAPPER_QRUNNABLE_H
