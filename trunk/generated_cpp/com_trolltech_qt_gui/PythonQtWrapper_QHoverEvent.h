#ifndef PYTHONQTWRAPPER_QHOVEREVENT_H
#define PYTHONQTWRAPPER_QHOVEREVENT_H

#include <qevent.h>
#include <QObject>

#include <QVariant>
#include <qpoint.h>

class PythonQtWrapper_QHoverEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHoverEvent* new_QHoverEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  oldPos);
void delete_QHoverEvent(QHoverEvent* obj) { delete obj; } 
   const QPoint&  oldPos(QHoverEvent* theWrappedObject) const;
   const QPoint&  pos(QHoverEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QHOVEREVENT_H
