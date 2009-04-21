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
inline void promoted_scrollContentsBy(int  dx, int  dy) { QGraphicsView::scrollContentsBy(dx, dy); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QGraphicsView::focusNextPrevChild(next); }
inline void promoted_dropEvent(QDropEvent*  event) { QGraphicsView::dropEvent(event); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { QGraphicsView::contextMenuEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsView::inputMethodQuery(query); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { QGraphicsView::dragMoveEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsView::inputMethodEvent(event); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { QGraphicsView::mouseDoubleClickEvent(event); }
inline bool  promoted_viewportEvent(QEvent*  event) { return QGraphicsView::viewportEvent(event); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  event) { QGraphicsView::dragEnterEvent(event); }
inline void promoted_wheelEvent(QWheelEvent*  event) { QGraphicsView::wheelEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QGraphicsView::mouseMoveEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsView::focusOutEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QGraphicsView::paintEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QGraphicsView::event(event); }
inline void promoted_showEvent(QShowEvent*  event) { QGraphicsView::showEvent(event); }
inline void promoted_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options) { QGraphicsView::drawItems(painter, numItems, items, options); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QGraphicsView::mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QGraphicsView::mouseReleaseEvent(event); }
inline void promoted_drawBackground(QPainter*  painter, const QRectF&  rect) { QGraphicsView::drawBackground(painter, rect); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  event) { QGraphicsView::dragLeaveEvent(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsView::focusInEvent(event); }
inline void promoted_drawForeground(QPainter*  painter, const QRectF&  rect) { QGraphicsView::drawForeground(painter, rect); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QGraphicsView::resizeEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsView::keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsView::keyReleaseEvent(event); }
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
   void centerOn(QGraphicsView* theWrappedObject, const QGraphicsItem*  item);
   void setAlignment(QGraphicsView* theWrappedObject, Qt::Alignment  alignment);
   void centerOn(QGraphicsView* theWrappedObject, const QPointF&  pos);
   QMatrix  matrix(QGraphicsView* theWrappedObject) const;
   QBrush  foregroundBrush(QGraphicsView* theWrappedObject) const;
   void rotate(QGraphicsView* theWrappedObject, qreal  angle);
   void setRubberBandSelectionMode(QGraphicsView* theWrappedObject, Qt::ItemSelectionMode  mode);
   void scrollContentsBy(QGraphicsView* theWrappedObject, int  dx, int  dy);
   void setTransformationAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor);
   QGraphicsView::OptimizationFlags  optimizationFlags(QGraphicsView* theWrappedObject) const;
   bool  focusNextPrevChild(QGraphicsView* theWrappedObject, bool  next);
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void dropEvent(QGraphicsView* theWrappedObject, QDropEvent*  event);
   void contextMenuEvent(QGraphicsView* theWrappedObject, QContextMenuEvent*  event);
   void setOptimizationFlags(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlags  flags);
   QGraphicsView::ViewportUpdateMode  viewportUpdateMode(QGraphicsView* theWrappedObject) const;
   void setSceneRect(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void render(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  target = QRectF(), const QRect&  source = QRect(), Qt::AspectRatioMode  aspectRatioMode = Qt::KeepAspectRatio);
   QVariant  inputMethodQuery(QGraphicsView* theWrappedObject, Qt::InputMethodQuery  query) const;
   void ensureVisible(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin = 50, int  ymargin = 50);
   void fitInView(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   QTransform  transform(QGraphicsView* theWrappedObject) const;
   void setOptimizationFlag(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlag  flag, bool  enabled = true);
   QPointF  mapToScene(QGraphicsView* theWrappedObject, int  x, int  y) const;
   void dragMoveEvent(QGraphicsView* theWrappedObject, QDragMoveEvent*  event);
   QPainterPath  mapFromScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const;
   void setForegroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush);
   void inputMethodEvent(QGraphicsView* theWrappedObject, QInputMethodEvent*  event);
   void resetCachedContent(QGraphicsView* theWrappedObject);
   void mouseDoubleClickEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   bool  viewportEvent(QGraphicsView* theWrappedObject, QEvent*  event);
   void setTransform(QGraphicsView* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void setRenderHint(QGraphicsView* theWrappedObject, QPainter::RenderHint  hint, bool  enabled = true);
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y) const;
   void setInteractive(QGraphicsView* theWrappedObject, bool  allowed);
   void setViewportUpdateMode(QGraphicsView* theWrappedObject, QGraphicsView::ViewportUpdateMode  mode);
   void translate(QGraphicsView* theWrappedObject, qreal  dx, qreal  dy);
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, const QPolygonF&  polygon) const;
   QPainter::RenderHints  renderHints(QGraphicsView* theWrappedObject) const;
   QSize  sizeHint(QGraphicsView* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QRect&  rect, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void setSceneRect(QGraphicsView* theWrappedObject, const QRectF&  rect);
   void dragEnterEvent(QGraphicsView* theWrappedObject, QDragEnterEvent*  event);
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPolygon&  polygon, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void wheelEvent(QGraphicsView* theWrappedObject, QWheelEvent*  event);
   void mouseMoveEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   void ensureVisible(QGraphicsView* theWrappedObject, const QRectF&  rect, int  xmargin = 50, int  ymargin = 50);
   void resetMatrix(QGraphicsView* theWrappedObject);
   void focusOutEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event);
   void paintEvent(QGraphicsView* theWrappedObject, QPaintEvent*  event);
   bool  event(QGraphicsView* theWrappedObject, QEvent*  event);
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, const QRectF&  rect) const;
   void ensureVisible(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, int  xmargin = 50, int  ymargin = 50);
   void showEvent(QGraphicsView* theWrappedObject, QShowEvent*  event);
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject) const;
   QBrush  backgroundBrush(QGraphicsView* theWrappedObject) const;
   void drawItems(QGraphicsView* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options);
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, const QPolygon&  polygon) const;
   QPoint  mapFromScene(QGraphicsView* theWrappedObject, const QPointF&  point) const;
   QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, int  x, int  y) const;
   void setCacheMode(QGraphicsView* theWrappedObject, QGraphicsView::CacheMode  mode);
   QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
   QPainterPath  mapToScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const;
   Qt::Alignment  alignment(QGraphicsView* theWrappedObject) const;
   void mousePressEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   QGraphicsView::DragMode  dragMode(QGraphicsView* theWrappedObject) const;
   void setMatrix(QGraphicsView* theWrappedObject, const QMatrix&  matrix, bool  combine = false);
   void centerOn(QGraphicsView* theWrappedObject, qreal  x, qreal  y);
   QGraphicsScene*  scene(QGraphicsView* theWrappedObject) const;
   QPointF  mapToScene(QGraphicsView* theWrappedObject, const QPoint&  point) const;
   void setBackgroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush);
   void fitInView(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void mouseReleaseEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   void scale(QGraphicsView* theWrappedObject, qreal  sx, qreal  sy);
   void drawBackground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   QGraphicsView::ViewportAnchor  transformationAnchor(QGraphicsView* theWrappedObject) const;
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void setScene(QGraphicsView* theWrappedObject, QGraphicsScene*  scene);
   void fitInView(QGraphicsView* theWrappedObject, const QRectF&  rect, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void dragLeaveEvent(QGraphicsView* theWrappedObject, QDragLeaveEvent*  event);
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h) const;
   void resetTransform(QGraphicsView* theWrappedObject);
   void setDragMode(QGraphicsView* theWrappedObject, QGraphicsView::DragMode  mode);
   void setResizeAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor);
   QGraphicsView::ViewportAnchor  resizeAnchor(QGraphicsView* theWrappedObject) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, const QRect&  rect) const;
   Qt::ItemSelectionMode  rubberBandSelectionMode(QGraphicsView* theWrappedObject) const;
   bool  isInteractive(QGraphicsView* theWrappedObject) const;
   void focusInEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event);
   void drawForeground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   QPoint  mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y) const;
   void setRenderHints(QGraphicsView* theWrappedObject, QPainter::RenderHints  hints);
   QRectF  sceneRect(QGraphicsView* theWrappedObject) const;
   void resizeEvent(QGraphicsView* theWrappedObject, QResizeEvent*  event);
   QGraphicsView::CacheMode  cacheMode(QGraphicsView* theWrappedObject) const;
   void keyPressEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event);
   QTransform  viewportTransform(QGraphicsView* theWrappedObject) const;
   void keyReleaseEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event);
   void shear(QGraphicsView* theWrappedObject, qreal  sh, qreal  sv);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSVIEW_H
