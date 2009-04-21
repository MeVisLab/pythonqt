#ifndef PYTHONQTWRAPPER_QGRAPHICSVIEW_H
#define PYTHONQTWRAPPER_QGRAPHICSVIEW_H

#include <qgraphicsview.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtShell_QGraphicsView : public QGraphicsView
{
public:
    PythonQtShell_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent = 0):QGraphicsView(scene, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsView(QWidget*  parent = 0):QGraphicsView(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void drawBackground(QPainter*  painter, const QRectF&  rect);
virtual void drawForeground(QPainter*  painter, const QRectF&  rect);
virtual void drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  viewportEvent(QEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsView : public QGraphicsView
{ public:
inline bool  viewportEvent(QEvent*  event) { return QGraphicsView::viewportEvent(event); }
inline void wheelEvent(QWheelEvent*  event) { QGraphicsView::wheelEvent(event); }
inline void drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options) { QGraphicsView::drawItems(painter, numItems, items, options); }
inline void keyReleaseEvent(QKeyEvent*  event) { QGraphicsView::keyReleaseEvent(event); }
inline void dragLeaveEvent(QDragLeaveEvent*  event) { QGraphicsView::dragLeaveEvent(event); }
inline bool  event(QEvent*  event) { return QGraphicsView::event(event); }
inline void focusInEvent(QFocusEvent*  event) { QGraphicsView::focusInEvent(event); }
inline void focusOutEvent(QFocusEvent*  event) { QGraphicsView::focusOutEvent(event); }
inline void mouseDoubleClickEvent(QMouseEvent*  event) { QGraphicsView::mouseDoubleClickEvent(event); }
inline void drawForeground(QPainter*  painter, const QRectF&  rect) { QGraphicsView::drawForeground(painter, rect); }
inline void mouseMoveEvent(QMouseEvent*  event) { QGraphicsView::mouseMoveEvent(event); }
inline bool  focusNextPrevChild(bool  next) { return QGraphicsView::focusNextPrevChild(next); }
inline void dragMoveEvent(QDragMoveEvent*  event) { QGraphicsView::dragMoveEvent(event); }
inline void showEvent(QShowEvent*  event) { QGraphicsView::showEvent(event); }
inline void contextMenuEvent(QContextMenuEvent*  event) { QGraphicsView::contextMenuEvent(event); }
inline void resizeEvent(QResizeEvent*  event) { QGraphicsView::resizeEvent(event); }
inline void dropEvent(QDropEvent*  event) { QGraphicsView::dropEvent(event); }
inline void scrollContentsBy(int  dx, int  dy) { QGraphicsView::scrollContentsBy(dx, dy); }
inline void drawBackground(QPainter*  painter, const QRectF&  rect) { QGraphicsView::drawBackground(painter, rect); }
inline void mousePressEvent(QMouseEvent*  event) { QGraphicsView::mousePressEvent(event); }
inline void mouseReleaseEvent(QMouseEvent*  event) { QGraphicsView::mouseReleaseEvent(event); }
inline void paintEvent(QPaintEvent*  event) { QGraphicsView::paintEvent(event); }
inline void inputMethodEvent(QInputMethodEvent*  event) { QGraphicsView::inputMethodEvent(event); }
inline void dragEnterEvent(QDragEnterEvent*  event) { QGraphicsView::dragEnterEvent(event); }
inline void keyPressEvent(QKeyEvent*  event) { QGraphicsView::keyPressEvent(event); }
};

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
   bool  viewportEvent(QGraphicsView* theWrappedObject, QEvent*  event);
   void wheelEvent(QGraphicsView* theWrappedObject, QWheelEvent*  event);
   void fitInView(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject) const;
   void setBackgroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush);
   void resetMatrix(QGraphicsView* theWrappedObject);
   void setTransformationAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor);
   QTransform  transform(QGraphicsView* theWrappedObject) const;
   void drawItems(QGraphicsView* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options);
   void keyReleaseEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event);
   void setRenderHints(QGraphicsView* theWrappedObject, QPainter::RenderHints  hints);
   void shear(QGraphicsView* theWrappedObject, qreal  sh, qreal  sv);
   QVariant  inputMethodQuery(QGraphicsView* theWrappedObject, Qt::InputMethodQuery  query) const;
   void dragLeaveEvent(QGraphicsView* theWrappedObject, QDragLeaveEvent*  event);
   QGraphicsView::ViewportUpdateMode  viewportUpdateMode(QGraphicsView* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y) const;
   void render(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  target = QRectF(), const QRect&  source = QRect(), Qt::AspectRatioMode  aspectRatioMode = Qt::KeepAspectRatio);
   void ensureVisible(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin = 50, int  ymargin = 50);
   void setOptimizationFlag(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlag  flag, bool  enabled = true);
   QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QRect&  rect, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void setCacheMode(QGraphicsView* theWrappedObject, QGraphicsView::CacheMode  mode);
   void translate(QGraphicsView* theWrappedObject, qreal  dx, qreal  dy);
   bool  event(QGraphicsView* theWrappedObject, QEvent*  event);
   void focusInEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event);
   void setTransform(QGraphicsView* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void focusOutEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event);
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void setInteractive(QGraphicsView* theWrappedObject, bool  allowed);
   void setViewportUpdateMode(QGraphicsView* theWrappedObject, QGraphicsView::ViewportUpdateMode  mode);
   QTransform  viewportTransform(QGraphicsView* theWrappedObject) const;
   void mouseDoubleClickEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   void fitInView(QGraphicsView* theWrappedObject, const QRectF&  rect, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   Qt::ItemSelectionMode  rubberBandSelectionMode(QGraphicsView* theWrappedObject) const;
   void drawForeground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void mouseMoveEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   QBrush  foregroundBrush(QGraphicsView* theWrappedObject) const;
   QSize  sizeHint(QGraphicsView* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   bool  focusNextPrevChild(QGraphicsView* theWrappedObject, bool  next);
   void dragMoveEvent(QGraphicsView* theWrappedObject, QDragMoveEvent*  event);
   void centerOn(QGraphicsView* theWrappedObject, qreal  x, qreal  y);
   void setRenderHint(QGraphicsView* theWrappedObject, QPainter::RenderHint  hint, bool  enabled = true);
   void setRubberBandSelectionMode(QGraphicsView* theWrappedObject, Qt::ItemSelectionMode  mode);
   void ensureVisible(QGraphicsView* theWrappedObject, const QRectF&  rect, int  xmargin = 50, int  ymargin = 50);
   QGraphicsView::ViewportAnchor  transformationAnchor(QGraphicsView* theWrappedObject) const;
   void ensureVisible(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, int  xmargin = 50, int  ymargin = 50);
   QMatrix  matrix(QGraphicsView* theWrappedObject) const;
   void setOptimizationFlags(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlags  flags);
   void showEvent(QGraphicsView* theWrappedObject, QShowEvent*  event);
   Qt::Alignment  alignment(QGraphicsView* theWrappedObject) const;
   QGraphicsScene*  scene(QGraphicsView* theWrappedObject) const;
   void setSceneRect(QGraphicsView* theWrappedObject, const QRectF&  rect);
   void contextMenuEvent(QGraphicsView* theWrappedObject, QContextMenuEvent*  event);
   void resizeEvent(QGraphicsView* theWrappedObject, QResizeEvent*  event);
   QPoint  mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y) const;
   void dropEvent(QGraphicsView* theWrappedObject, QDropEvent*  event);
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h) const;
   QGraphicsView::ViewportAnchor  resizeAnchor(QGraphicsView* theWrappedObject) const;
   QGraphicsView::DragMode  dragMode(QGraphicsView* theWrappedObject) const;
   void scrollContentsBy(QGraphicsView* theWrappedObject, int  dx, int  dy);
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPolygon&  polygon, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void rotate(QGraphicsView* theWrappedObject, qreal  angle);
   QPainterPath  mapFromScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const;
   void setAlignment(QGraphicsView* theWrappedObject, Qt::Alignment  alignment);
   void drawBackground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void mousePressEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   void mouseReleaseEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   QGraphicsView::CacheMode  cacheMode(QGraphicsView* theWrappedObject) const;
   QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, int  x, int  y) const;
   void setMatrix(QGraphicsView* theWrappedObject, const QMatrix&  matrix, bool  combine = false);
   QBrush  backgroundBrush(QGraphicsView* theWrappedObject) const;
   QGraphicsView::OptimizationFlags  optimizationFlags(QGraphicsView* theWrappedObject) const;
   void setScene(QGraphicsView* theWrappedObject, QGraphicsScene*  scene);
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
   void setDragMode(QGraphicsView* theWrappedObject, QGraphicsView::DragMode  mode);
   QPointF  mapToScene(QGraphicsView* theWrappedObject, const QPoint&  point) const;
   void setResizeAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor);
   void resetCachedContent(QGraphicsView* theWrappedObject);
   void resetTransform(QGraphicsView* theWrappedObject);
   void centerOn(QGraphicsView* theWrappedObject, const QPointF&  pos);
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, const QPolygon&  polygon) const;
   void scale(QGraphicsView* theWrappedObject, qreal  sx, qreal  sy);
   void setForegroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush);
   bool  isInteractive(QGraphicsView* theWrappedObject) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, const QRect&  rect) const;
   void paintEvent(QGraphicsView* theWrappedObject, QPaintEvent*  event);
   QRectF  sceneRect(QGraphicsView* theWrappedObject) const;
   void inputMethodEvent(QGraphicsView* theWrappedObject, QInputMethodEvent*  event);
   QPointF  mapToScene(QGraphicsView* theWrappedObject, int  x, int  y) const;
   QPoint  mapFromScene(QGraphicsView* theWrappedObject, const QPointF&  point) const;
   void dragEnterEvent(QGraphicsView* theWrappedObject, QDragEnterEvent*  event);
   void keyPressEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event);
   void setSceneRect(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void fitInView(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   QPainter::RenderHints  renderHints(QGraphicsView* theWrappedObject) const;
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, const QRectF&  rect) const;
   void centerOn(QGraphicsView* theWrappedObject, const QGraphicsItem*  item);
   QPainterPath  mapToScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSVIEW_H
