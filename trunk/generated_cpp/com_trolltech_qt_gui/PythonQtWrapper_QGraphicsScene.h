#ifndef PYTHONQTWRAPPER_QGRAPHICSSCENE_H
#define PYTHONQTWRAPPER_QGRAPHICSSCENE_H

#include <qgraphicsscene.h>
#include <QObject>

#include <PythonQt.h>

#include <QVarLengthArray>
#include <QVariant>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicsview.h>
#include <qgraphicswidget.h>
#include <qline.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QGraphicsScene : public QGraphicsScene
{
public:
    PythonQtShell_QGraphicsScene(QObject*  parent = 0):QGraphicsScene(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent = 0):QGraphicsScene(sceneRect, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent = 0):QGraphicsScene(x, y, width, height, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void drawBackground(QPainter*  painter, const QRectF&  rect);
virtual void drawForeground(QPainter*  painter, const QRectF&  rect);
virtual void drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void helpEvent(QGraphicsSceneHelpEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsScene : public QGraphicsScene
{ public:
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragMoveEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsScene::keyReleaseEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mousePressEvent(event); }
inline bool  promoted_eventFilter(QObject*  watched, QEvent*  event) { return QGraphicsScene::eventFilter(watched, event); }
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsScene::contextMenuEvent(event); }
inline void promoted_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0) { QGraphicsScene::drawItems(painter, numItems, items, options, widget); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsScene::inputMethodEvent(event); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dropEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseDoubleClickEvent(event); }
inline void promoted_drawBackground(QPainter*  painter, const QRectF&  rect) { QGraphicsScene::drawBackground(painter, rect); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragEnterEvent(event); }
inline void promoted_drawForeground(QPainter*  painter, const QRectF&  rect) { QGraphicsScene::drawForeground(painter, rect); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsScene::wheelEvent(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsScene::focusInEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragLeaveEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsScene::inputMethodQuery(query); }
inline void promoted_helpEvent(QGraphicsSceneHelpEvent*  event) { QGraphicsScene::helpEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsScene::keyPressEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QGraphicsScene::event(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseReleaseEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsScene::focusOutEvent(event); }
};

class PythonQtWrapper_QGraphicsScene : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SceneLayer ItemIndexMethod )
enum SceneLayer{
  ItemLayer = QGraphicsScene::ItemLayer,   BackgroundLayer = QGraphicsScene::BackgroundLayer,   ForegroundLayer = QGraphicsScene::ForegroundLayer,   AllLayers = QGraphicsScene::AllLayers};
enum ItemIndexMethod{
  BspTreeIndex = QGraphicsScene::BspTreeIndex,   NoIndex = QGraphicsScene::NoIndex};
public slots:
QGraphicsScene* new_QGraphicsScene(QObject*  parent = 0);
QGraphicsScene* new_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent = 0);
QGraphicsScene* new_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent = 0);
void delete_QGraphicsScene(QGraphicsScene* obj) { delete obj; } 
   void setSceneRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void dragMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void keyReleaseEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event);
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void mouseMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  arg__2);
   void setBspTreeDepth(QGraphicsScene* theWrappedObject, int  depth);
   void mousePressEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void setActiveWindow(QGraphicsScene* theWrappedObject, QGraphicsWidget*  widget);
   bool  eventFilter(QGraphicsScene* theWrappedObject, QObject*  watched, QEvent*  event);
   QBrush  foregroundBrush(QGraphicsScene* theWrappedObject) const;
   QGraphicsItemGroup*  createItemGroup(QGraphicsScene* theWrappedObject, const QList<QGraphicsItem* >&  items);
   void setFocusItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   QPainterPath  selectionArea(QGraphicsScene* theWrappedObject) const;
   QGraphicsSimpleTextItem*  addSimpleText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font = QFont());
   void contextMenuEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path);
   void drawItems(QGraphicsScene* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0);
   QGraphicsItem*  mouseGrabberItem(QGraphicsScene* theWrappedObject) const;
   QGraphicsTextItem*  addText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font = QFont());
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void setFont(QGraphicsScene* theWrappedObject, const QFont&  font);
   void render(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  target = QRectF(), const QRectF&  source = QRectF(), Qt::AspectRatioMode  aspectRatioMode = Qt::KeepAspectRatio);
   QPalette  palette(QGraphicsScene* theWrappedObject) const;
   void inputMethodEvent(QGraphicsScene* theWrappedObject, QInputMethodEvent*  event);
   void setStyle(QGraphicsScene* theWrappedObject, QStyle*  style);
   QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, qreal  x, qreal  y) const;
   void dropEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QGraphicsPathItem*  addPath(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsItem*  focusItem(QGraphicsScene* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void setBackgroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush);
   QStyle*  style(QGraphicsScene* theWrappedObject) const;
   void clearFocus(QGraphicsScene* theWrappedObject);
   void destroyItemGroup(QGraphicsScene* theWrappedObject, QGraphicsItemGroup*  group);
   qreal  width(QGraphicsScene* theWrappedObject) const;
   QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, const QPointF&  pos) const;
   void setItemIndexMethod(QGraphicsScene* theWrappedObject, QGraphicsScene::ItemIndexMethod  method);
   void update(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   QList<QGraphicsView* >  views(QGraphicsScene* theWrappedObject) const;
   void mouseDoubleClickEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void drawBackground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   QGraphicsProxyWidget*  addWidget(QGraphicsScene* theWrappedObject, QWidget*  widget, Qt::WindowFlags  wFlags = 0);
   int  bspTreeDepth(QGraphicsScene* theWrappedObject) const;
   void dragEnterEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void drawForeground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   QGraphicsEllipseItem*  addEllipse(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QRectF  itemsBoundingRect(QGraphicsScene* theWrappedObject) const;
   QGraphicsLineItem*  addLine(QGraphicsScene* theWrappedObject, const QLineF&  line, const QPen&  pen = QPen());
   qreal  height(QGraphicsScene* theWrappedObject) const;
   void wheelEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneWheelEvent*  event);
   void focusInEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event);
   QGraphicsPolygonItem*  addPolygon(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QFont  font(QGraphicsScene* theWrappedObject) const;
   QBrush  backgroundBrush(QGraphicsScene* theWrappedObject) const;
   QRectF  sceneRect(QGraphicsScene* theWrappedObject) const;
   QGraphicsWidget*  activeWindow(QGraphicsScene* theWrappedObject) const;
   QGraphicsRectItem*  addRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsEllipseItem*  addEllipse(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsPixmapItem*  addPixmap(QGraphicsScene* theWrappedObject, const QPixmap&  pixmap);
   void dragLeaveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject) const;
   void invalidate(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsScene::SceneLayers  layers = QGraphicsScene::AllLayers);
   QList<QGraphicsItem* >  selectedItems(QGraphicsScene* theWrappedObject) const;
   QGraphicsLineItem*  addLine(QGraphicsScene* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2, const QPen&  pen = QPen());
   void addItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item);
   QGraphicsRectItem*  addRect(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   void setPalette(QGraphicsScene* theWrappedObject, const QPalette&  palette);
   void setFocus(QGraphicsScene* theWrappedObject, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   QVariant  inputMethodQuery(QGraphicsScene* theWrappedObject, Qt::InputMethodQuery  query) const;
   bool  hasFocus(QGraphicsScene* theWrappedObject) const;
   void helpEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneHelpEvent*  event);
   void setSceneRect(QGraphicsScene* theWrappedObject, const QRectF&  rect);
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPointF&  pos) const;
   void removeItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item);
   void keyPressEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event);
   bool  event(QGraphicsScene* theWrappedObject, QEvent*  event);
   QGraphicsScene::ItemIndexMethod  itemIndexMethod(QGraphicsScene* theWrappedObject) const;
   void mouseReleaseEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QRectF&  rect, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void setForegroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush);
   QList<QGraphicsItem* >  collidingItems(QGraphicsScene* theWrappedObject, const QGraphicsItem*  item, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void focusOutEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSSCENE_H
