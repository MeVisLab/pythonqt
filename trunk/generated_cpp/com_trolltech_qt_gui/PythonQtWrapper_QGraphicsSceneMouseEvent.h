#ifndef PYTHONQTWRAPPER_QGRAPHICSSCENEMOUSEEVENT_H
#define PYTHONQTWRAPPER_QGRAPHICSSCENEMOUSEEVENT_H

#include <qgraphicssceneevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qpoint.h>
#include <qwidget.h>

class PythonQtWrapper_QGraphicsSceneMouseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneMouseEvent* new_QGraphicsSceneMouseEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneMouseEvent(QGraphicsSceneMouseEvent* obj) { delete obj; } 
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPoint  buttonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
   QPointF  lastPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPointF  lastScenePos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   QPointF  buttonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
   void setLastPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   void setButtons(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButtons  buttons);
   void setScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos);
   void setButtonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos);
   void setLastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos);
   QPoint  screenPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   QPoint  lastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   Qt::MouseButton  button(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setButton(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button);
   void setButtonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos);
   QPointF  buttonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
   QPointF  pos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setButtonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPoint&  pos);
   Qt::MouseButtons  buttons(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setModifiers(QGraphicsSceneMouseEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setLastScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSSCENEMOUSEEVENT_H
