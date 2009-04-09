#ifndef PYTHONQTWRAPPER_QGRAPHICSVIEW_H
#define PYTHONQTWRAPPER_QGRAPHICSVIEW_H

#include <qgraphicsview.h>
#include <QObject>

#include <QPainterPath>
#include <QVarLengthArray>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicsview.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmatrix.h>
#include <qobject.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

class PythonQtWrapper_QGraphicsView : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OptimizationFlag CacheModeFlag )
enum OptimizationFlag{
  DontClipPainter = QGraphicsView::DontClipPainter,   DontSavePainterState = QGraphicsView::DontSavePainterState,   DontAdjustForAntialiasing = QGraphicsView::DontAdjustForAntialiasing};
enum CacheModeFlag{
  CacheNone = QGraphicsView::CacheNone,   CacheBackground = QGraphicsView::CacheBackground};
public slots:
QGraphicsView* new_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent = 0);
QGraphicsView* new_QGraphicsView(QWidget*  parent = 0);
void delete_QGraphicsView(QGraphicsView* obj) { delete obj; } 
   Qt::Alignment  alignment(QGraphicsView* theWrappedObject) const;
   QBrush  backgroundBrush(QGraphicsView* theWrappedObject) const;
   QGraphicsView::CacheMode  cacheMode(QGraphicsView* theWrappedObject) const;
   void centerOn(QGraphicsView* theWrappedObject, const QGraphicsItem*  item);
   void centerOn(QGraphicsView* theWrappedObject, const QPointF&  pos);
   void centerOn(QGraphicsView* theWrappedObject, qreal  x, qreal  y);
   QGraphicsView::DragMode  dragMode(QGraphicsView* theWrappedObject) const;
   void ensureVisible(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, int  xmargin = 50, int  ymargin = 50);
   void ensureVisible(QGraphicsView* theWrappedObject, const QRectF&  rect, int  xmargin = 50, int  ymargin = 50);
   void ensureVisible(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin = 50, int  ymargin = 50);
   void fitInView(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void fitInView(QGraphicsView* theWrappedObject, const QRectF&  rect, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void fitInView(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   QBrush  foregroundBrush(QGraphicsView* theWrappedObject) const;
   QVariant  inputMethodQuery(QGraphicsView* theWrappedObject, Qt::InputMethodQuery  query) const;
   bool  isInteractive(QGraphicsView* theWrappedObject) const;
   QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
   QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, int  x, int  y) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPolygon&  polygon, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QRect&  rect, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QPainterPath  mapFromScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const;
   QPoint  mapFromScene(QGraphicsView* theWrappedObject, const QPointF&  point) const;
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, const QRectF&  rect) const;
   QPoint  mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y) const;
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToScene(QGraphicsView* theWrappedObject, const QPoint&  point) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, const QPolygon&  polygon) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, const QRect&  rect) const;
   QPointF  mapToScene(QGraphicsView* theWrappedObject, int  x, int  y) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h) const;
   QMatrix  matrix(QGraphicsView* theWrappedObject) const;
   QGraphicsView::OptimizationFlags  optimizationFlags(QGraphicsView* theWrappedObject) const;
   void render(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  target = QRectF(), const QRect&  source = QRect(), Qt::AspectRatioMode  aspectRatioMode = Qt::KeepAspectRatio);
   QPainter::RenderHints  renderHints(QGraphicsView* theWrappedObject) const;
   void resetCachedContent(QGraphicsView* theWrappedObject);
   void resetMatrix(QGraphicsView* theWrappedObject);
   void resetTransform(QGraphicsView* theWrappedObject);
   QGraphicsView::ViewportAnchor  resizeAnchor(QGraphicsView* theWrappedObject) const;
   void rotate(QGraphicsView* theWrappedObject, qreal  angle);
   Qt::ItemSelectionMode  rubberBandSelectionMode(QGraphicsView* theWrappedObject) const;
   void scale(QGraphicsView* theWrappedObject, qreal  sx, qreal  sy);
   QGraphicsScene*  scene(QGraphicsView* theWrappedObject) const;
   QRectF  sceneRect(QGraphicsView* theWrappedObject) const;
   void setAlignment(QGraphicsView* theWrappedObject, Qt::Alignment  alignment);
   void setBackgroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush);
   void setCacheMode(QGraphicsView* theWrappedObject, QGraphicsView::CacheMode  mode);
   void setDragMode(QGraphicsView* theWrappedObject, QGraphicsView::DragMode  mode);
   void setForegroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush);
   void setInteractive(QGraphicsView* theWrappedObject, bool  allowed);
   void setMatrix(QGraphicsView* theWrappedObject, const QMatrix&  matrix, bool  combine = false);
   void setOptimizationFlag(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlag  flag, bool  enabled = true);
   void setOptimizationFlags(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlags  flags);
   void setRenderHint(QGraphicsView* theWrappedObject, QPainter::RenderHint  hint, bool  enabled = true);
   void setRenderHints(QGraphicsView* theWrappedObject, QPainter::RenderHints  hints);
   void setResizeAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor);
   void setRubberBandSelectionMode(QGraphicsView* theWrappedObject, Qt::ItemSelectionMode  mode);
   void setScene(QGraphicsView* theWrappedObject, QGraphicsScene*  scene);
   void setSceneRect(QGraphicsView* theWrappedObject, const QRectF&  rect);
   void setSceneRect(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setTransform(QGraphicsView* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void setTransformationAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor);
   void setViewportUpdateMode(QGraphicsView* theWrappedObject, QGraphicsView::ViewportUpdateMode  mode);
   void shear(QGraphicsView* theWrappedObject, qreal  sh, qreal  sv);
   QSize  sizeHint(QGraphicsView* theWrappedObject) const;
   QTransform  transform(QGraphicsView* theWrappedObject) const;
   QGraphicsView::ViewportAnchor  transformationAnchor(QGraphicsView* theWrappedObject) const;
   void translate(QGraphicsView* theWrappedObject, qreal  dx, qreal  dy);
   QTransform  viewportTransform(QGraphicsView* theWrappedObject) const;
   QGraphicsView::ViewportUpdateMode  viewportUpdateMode(QGraphicsView* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSVIEW_H
