#ifndef PYTHONQTWRAPPER_QFILEOPENEVENT_H
#define PYTHONQTWRAPPER_QFILEOPENEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtWrapper_QFileOpenEvent : public QObject
{ Q_OBJECT
public:
public slots:
QFileOpenEvent* new_QFileOpenEvent(const QString&  file);
void delete_QFileOpenEvent(QFileOpenEvent* obj) { delete obj; } 
   QString  file(QFileOpenEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QFILEOPENEVENT_H
