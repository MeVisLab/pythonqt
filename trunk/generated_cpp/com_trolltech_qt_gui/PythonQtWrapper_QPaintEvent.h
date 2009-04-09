#ifndef PYTHONQTWRAPPER_QPAINTEVENT_H
#define PYTHONQTWRAPPER_QPAINTEVENT_H

#include <qevent.h>
#include <QObject>

#include <QVariant>
#include <qrect.h>
#include <qregion.h>

class PythonQtWrapper_QPaintEvent : public QObject
{ Q_OBJECT
public:
public slots:
QPaintEvent* new_QPaintEvent(const QRect&  paintRect);
QPaintEvent* new_QPaintEvent(const QRegion&  paintRegion);
void delete_QPaintEvent(QPaintEvent* obj) { delete obj; } 
   const QRect&  rect(QPaintEvent* theWrappedObject) const;
   const QRegion&  region(QPaintEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPAINTEVENT_H
