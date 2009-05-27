#ifndef PYTHONQTWRAPPER_QRESIZEEVENT_H
#define PYTHONQTWRAPPER_QRESIZEEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qsize.h>

class PythonQtShell_QResizeEvent : public QResizeEvent
{
public:
    PythonQtShell_QResizeEvent(const QSize&  size, const QSize&  oldSize):QResizeEvent(size, oldSize),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QResizeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QResizeEvent* new_QResizeEvent(const QSize&  size, const QSize&  oldSize);
void delete_QResizeEvent(QResizeEvent* obj) { delete obj; } 
   const QSize*  size(QResizeEvent* theWrappedObject) const;
   const QSize*  oldSize(QResizeEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QRESIZEEVENT_H
