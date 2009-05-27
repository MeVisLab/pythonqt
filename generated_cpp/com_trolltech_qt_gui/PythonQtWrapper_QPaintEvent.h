#ifndef PYTHONQTWRAPPER_QPAINTEVENT_H
#define PYTHONQTWRAPPER_QPAINTEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qrect.h>
#include <qregion.h>

class PythonQtShell_QPaintEvent : public QPaintEvent
{
public:
    PythonQtShell_QPaintEvent(const QRect&  paintRect):QPaintEvent(paintRect),_wrapper(NULL) {};
    PythonQtShell_QPaintEvent(const QRegion&  paintRegion):QPaintEvent(paintRegion),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPaintEvent : public QObject
{ Q_OBJECT
public:
public slots:
QPaintEvent* new_QPaintEvent(const QRect&  paintRect);
QPaintEvent* new_QPaintEvent(const QRegion&  paintRegion);
void delete_QPaintEvent(QPaintEvent* obj) { delete obj; } 
   const QRegion*  region(QPaintEvent* theWrappedObject) const;
   const QRect*  rect(QPaintEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPAINTEVENT_H
