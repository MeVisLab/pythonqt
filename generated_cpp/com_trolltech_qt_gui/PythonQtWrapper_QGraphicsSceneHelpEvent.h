#ifndef PYTHONQTWRAPPER_QGRAPHICSSCENEHELPEVENT_H
#define PYTHONQTWRAPPER_QGRAPHICSSCENEHELPEVENT_H

#include <qgraphicssceneevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qpoint.h>
#include <qwidget.h>

class PythonQtWrapper_QGraphicsSceneHelpEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneHelpEvent* new_QGraphicsSceneHelpEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneHelpEvent(QGraphicsSceneHelpEvent* obj) { delete obj; } 
   QPointF  scenePos(QGraphicsSceneHelpEvent* theWrappedObject) const;
   void setScreenPos(QGraphicsSceneHelpEvent* theWrappedObject, const QPoint&  pos);
   void setScenePos(QGraphicsSceneHelpEvent* theWrappedObject, const QPointF&  pos);
   QPoint  screenPos(QGraphicsSceneHelpEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSSCENEHELPEVENT_H
