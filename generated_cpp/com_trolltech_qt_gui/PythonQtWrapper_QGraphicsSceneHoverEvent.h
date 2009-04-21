#ifndef PYTHONQTWRAPPER_QGRAPHICSSCENEHOVEREVENT_H
#define PYTHONQTWRAPPER_QGRAPHICSSCENEHOVEREVENT_H

#include <qgraphicssceneevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qpoint.h>
#include <qwidget.h>

class PythonQtWrapper_QGraphicsSceneHoverEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneHoverEvent* new_QGraphicsSceneHoverEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneHoverEvent(QGraphicsSceneHoverEvent* obj) { delete obj; } 
   void setScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos);
   QPointF  scenePos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPoint  lastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneHoverEvent* theWrappedObject) const;
   void setModifiers(QGraphicsSceneHoverEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   QPointF  pos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPointF  lastPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   void setLastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos);
   void setLastPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   void setPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   QPointF  lastScenePos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   void setScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   void setLastScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSSCENEHOVEREVENT_H
