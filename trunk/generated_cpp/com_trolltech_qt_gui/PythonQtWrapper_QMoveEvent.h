#ifndef PYTHONQTWRAPPER_QMOVEEVENT_H
#define PYTHONQTWRAPPER_QMOVEEVENT_H

#include <qevent.h>
#include <QObject>

#include <QVariant>
#include <qpoint.h>

class PythonQtWrapper_QMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QMoveEvent* new_QMoveEvent(const QPoint&  pos, const QPoint&  oldPos);
void delete_QMoveEvent(QMoveEvent* obj) { delete obj; } 
   const QPoint&  oldPos(QMoveEvent* theWrappedObject) const;
   const QPoint&  pos(QMoveEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QMOVEEVENT_H
