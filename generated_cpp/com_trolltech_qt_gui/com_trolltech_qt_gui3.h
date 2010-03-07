#include <PythonQt.h>
#include <QObject>
#include <QPainterPath>
#include <QTextCursor>
#include <QVarLengthArray>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qboxlayout.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicstransform.h>
#include <qgraphicsview.h>
#include <qgraphicswidget.h>
#include <qgridlayout.h>
#include <qgroupbox.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qiconengine.h>
#include <qinputcontext.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmatrix4x4.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtransform.h>
#include <qvector3d.h>
#include <qwidget.h>



class PythonQtShell_QGraphicsPixmapItem : public QGraphicsPixmapItem
{
public:
    PythonQtShell_QGraphicsPixmapItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsPixmapItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsPixmapItem(pixmap, parent, scene),_wrapper(NULL) {};

virtual QPainterPath  shape() const;
virtual bool  contains(const QPointF&  point) const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual void advance(int  phase);
virtual QVariant  extension(const QVariant&  variant) const;
virtual int  type() const;
virtual QPainterPath  opaqueArea() const;
virtual QRectF  boundingRect() const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsPixmapItem : public QGraphicsPixmapItem
{ public:
inline QPainterPath  promoted_shape() const { return QGraphicsPixmapItem::shape(); }
inline bool  promoted_contains(const QPointF&  point) const { return QGraphicsPixmapItem::contains(point); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsPixmapItem::paint(painter, option, widget); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPixmapItem::isObscuredBy(item); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return QGraphicsPixmapItem::extension(variant); }
inline int  promoted_type() const { return QGraphicsPixmapItem::type(); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsPixmapItem::opaqueArea(); }
inline QRectF  promoted_boundingRect() const { return QGraphicsPixmapItem::boundingRect(); }
};

class PythonQtWrapper_QGraphicsPixmapItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ShapeMode enum_1 )
enum ShapeMode{
  MaskShape = QGraphicsPixmapItem::MaskShape,   BoundingRectShape = QGraphicsPixmapItem::BoundingRectShape,   HeuristicMaskShape = QGraphicsPixmapItem::HeuristicMaskShape};
enum enum_1{
  Type = QGraphicsPixmapItem::Type};
public slots:
QGraphicsPixmapItem* new_QGraphicsPixmapItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsPixmapItem* new_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsPixmapItem(QGraphicsPixmapItem* obj) { delete obj; } 
   void setTransformationMode(QGraphicsPixmapItem* theWrappedObject, Qt::TransformationMode  mode);
   void setOffset(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y);
   void setOffset(QGraphicsPixmapItem* theWrappedObject, const QPointF&  offset);
   QPainterPath  shape(QGraphicsPixmapItem* theWrappedObject) const;
   void setShapeMode(QGraphicsPixmapItem* theWrappedObject, QGraphicsPixmapItem::ShapeMode  mode);
   Qt::TransformationMode  transformationMode(QGraphicsPixmapItem* theWrappedObject) const;
   QGraphicsPixmapItem::ShapeMode  shapeMode(QGraphicsPixmapItem* theWrappedObject) const;
   bool  contains(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const;
   void paint(QGraphicsPixmapItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   void setPixmap(QGraphicsPixmapItem* theWrappedObject, const QPixmap&  pixmap);
   bool  isObscuredBy(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item) const;
   QVariant  extension(QGraphicsPixmapItem* theWrappedObject, const QVariant&  variant) const;
   int  type(QGraphicsPixmapItem* theWrappedObject) const;
   QPainterPath  opaqueArea(QGraphicsPixmapItem* theWrappedObject) const;
   QPixmap  pixmap(QGraphicsPixmapItem* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsPixmapItem* theWrappedObject) const;
   QPointF  offset(QGraphicsPixmapItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsPolygonItem : public QGraphicsPolygonItem
{
public:
    PythonQtShell_QGraphicsPolygonItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsPolygonItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsPolygonItem(polygon, parent, scene),_wrapper(NULL) {};

virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsPolygonItem : public QGraphicsPolygonItem
{ public:
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPolygonItem::isObscuredBy(item); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsPolygonItem::opaqueArea(); }
};

class PythonQtWrapper_QGraphicsPolygonItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsPolygonItem::Type};
public slots:
QGraphicsPolygonItem* new_QGraphicsPolygonItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsPolygonItem* new_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsPolygonItem(QGraphicsPolygonItem* obj) { delete obj; } 
   Qt::FillRule  fillRule(QGraphicsPolygonItem* theWrappedObject) const;
   QPainterPath  shape(QGraphicsPolygonItem* theWrappedObject) const;
   void setPolygon(QGraphicsPolygonItem* theWrappedObject, const QPolygonF&  polygon);
   QPolygonF  polygon(QGraphicsPolygonItem* theWrappedObject) const;
   bool  contains(QGraphicsPolygonItem* theWrappedObject, const QPointF&  point) const;
   void paint(QGraphicsPolygonItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   void setFillRule(QGraphicsPolygonItem* theWrappedObject, Qt::FillRule  rule);
   bool  isObscuredBy(QGraphicsPolygonItem* theWrappedObject, const QGraphicsItem*  item) const;
   int  type(QGraphicsPolygonItem* theWrappedObject) const;
   QPainterPath  opaqueArea(QGraphicsPolygonItem* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsPolygonItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsProxyWidget : public QGraphicsProxyWidget
{
public:
    PythonQtShell_QGraphicsProxyWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0):QGraphicsProxyWidget(parent, wFlags),_wrapper(NULL) {};

virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void setGeometry(const QRectF&  rect);
virtual bool  focusNextPrevChild(bool  next);
virtual bool  event(QEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void ungrabMouseEvent(QEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void grabMouseEvent(QEvent*  event);
virtual void resizeEvent(QGraphicsSceneResizeEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual void updateGeometry();
virtual void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual Qt::WindowFrameSection  windowFrameSectionAt(const QPointF&  pos) const;
virtual void ungrabKeyboardEvent(QEvent*  event);
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void changeEvent(QEvent*  event);
virtual void initStyleOption(QStyleOption*  option) const;
virtual void closeEvent(QCloseEvent*  event);
virtual QVariant  propertyChange(const QString&  propertyName, const QVariant&  value);
virtual void polishEvent();
virtual bool  windowFrameEvent(QEvent*  e);
virtual void moveEvent(QGraphicsSceneMoveEvent*  event);
virtual void grabKeyboardEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsProxyWidget : public QGraphicsProxyWidget
{ public:
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsProxyWidget::sizeHint(which, constraint); }
inline void promoted_setGeometry(const QRectF&  rect) { QGraphicsProxyWidget::setGeometry(rect); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QGraphicsProxyWidget::focusNextPrevChild(next); }
inline bool  promoted_event(QEvent*  event) { return QGraphicsProxyWidget::event(event); }
inline void promoted_showEvent(QShowEvent*  event) { QGraphicsProxyWidget::showEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverLeaveEvent(event); }
inline void promoted_ungrabMouseEvent(QEvent*  event) { QGraphicsProxyWidget::ungrabMouseEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { QGraphicsProxyWidget::hideEvent(event); }
inline void promoted_grabMouseEvent(QEvent*  event) { QGraphicsProxyWidget::grabMouseEvent(event); }
inline void promoted_resizeEvent(QGraphicsSceneResizeEvent*  event) { QGraphicsProxyWidget::resizeEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverMoveEvent(event); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QGraphicsProxyWidget::eventFilter(object, event); }
};

class PythonQtWrapper_QGraphicsProxyWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsProxyWidget::Type};
public slots:
QGraphicsProxyWidget* new_QGraphicsProxyWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0);
void delete_QGraphicsProxyWidget(QGraphicsProxyWidget* obj) { delete obj; } 
   QRectF  subWidgetRect(QGraphicsProxyWidget* theWrappedObject, const QWidget*  widget) const;
   int  type(QGraphicsProxyWidget* theWrappedObject) const;
   QSizeF  sizeHint(QGraphicsProxyWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   void setGeometry(QGraphicsProxyWidget* theWrappedObject, const QRectF&  rect);
   bool  focusNextPrevChild(QGraphicsProxyWidget* theWrappedObject, bool  next);
   void setWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  widget);
   QGraphicsProxyWidget*  createProxyForChildWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  child);
   bool  event(QGraphicsProxyWidget* theWrappedObject, QEvent*  event);
   void showEvent(QGraphicsProxyWidget* theWrappedObject, QShowEvent*  event);
   void hoverLeaveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void ungrabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event);
   void hideEvent(QGraphicsProxyWidget* theWrappedObject, QHideEvent*  event);
   QWidget*  widget(QGraphicsProxyWidget* theWrappedObject) const;
   void grabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event);
   void resizeEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event);
   void hoverMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   bool  eventFilter(QGraphicsProxyWidget* theWrappedObject, QObject*  object, QEvent*  event);
   void paint(QGraphicsProxyWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
};





class PythonQtShell_QGraphicsRectItem : public QGraphicsRectItem
{
public:
    PythonQtShell_QGraphicsRectItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsRectItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsRectItem(const QRectF&  rect, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsRectItem(rect, parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsRectItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsRectItem(x, y, w, h, parent, scene),_wrapper(NULL) {};

virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsRectItem : public QGraphicsRectItem
{ public:
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsRectItem::isObscuredBy(item); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsRectItem::opaqueArea(); }
};

class PythonQtWrapper_QGraphicsRectItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsRectItem::Type};
public slots:
QGraphicsRectItem* new_QGraphicsRectItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsRectItem* new_QGraphicsRectItem(const QRectF&  rect, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsRectItem* new_QGraphicsRectItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsRectItem(QGraphicsRectItem* obj) { delete obj; } 
   QPainterPath  shape(QGraphicsRectItem* theWrappedObject) const;
   bool  contains(QGraphicsRectItem* theWrappedObject, const QPointF&  point) const;
   void paint(QGraphicsRectItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   bool  isObscuredBy(QGraphicsRectItem* theWrappedObject, const QGraphicsItem*  item) const;
   int  type(QGraphicsRectItem* theWrappedObject) const;
   QPainterPath  opaqueArea(QGraphicsRectItem* theWrappedObject) const;
   QRectF  rect(QGraphicsRectItem* theWrappedObject) const;
   void setRect(QGraphicsRectItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setRect(QGraphicsRectItem* theWrappedObject, const QRectF&  rect);
   QRectF  boundingRect(QGraphicsRectItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsRotation : public QGraphicsRotation
{
public:
    PythonQtShell_QGraphicsRotation(QObject*  parent = 0):QGraphicsRotation(parent),_wrapper(NULL) {};

virtual void applyTo(QMatrix4x4*  matrix) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsRotation : public QGraphicsRotation
{ public:
inline void promoted_applyTo(QMatrix4x4*  matrix) const { QGraphicsRotation::applyTo(matrix); }
};

class PythonQtWrapper_QGraphicsRotation : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsRotation* new_QGraphicsRotation(QObject*  parent = 0);
void delete_QGraphicsRotation(QGraphicsRotation* obj) { delete obj; } 
   void setAngle(QGraphicsRotation* theWrappedObject, qreal  arg__1);
   void setAxis(QGraphicsRotation* theWrappedObject, Qt::Axis  axis);
   void setAxis(QGraphicsRotation* theWrappedObject, const QVector3D&  axis);
   QVector3D  origin(QGraphicsRotation* theWrappedObject) const;
   void applyTo(QGraphicsRotation* theWrappedObject, QMatrix4x4*  matrix) const;
   qreal  angle(QGraphicsRotation* theWrappedObject) const;
   void setOrigin(QGraphicsRotation* theWrappedObject, const QVector3D&  point);
   QVector3D  axis(QGraphicsRotation* theWrappedObject) const;
};





class PythonQtShell_QGraphicsScale : public QGraphicsScale
{
public:
    PythonQtShell_QGraphicsScale(QObject*  parent = 0):QGraphicsScale(parent),_wrapper(NULL) {};

virtual void applyTo(QMatrix4x4*  matrix) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsScale : public QGraphicsScale
{ public:
inline void promoted_applyTo(QMatrix4x4*  matrix) const { QGraphicsScale::applyTo(matrix); }
};

class PythonQtWrapper_QGraphicsScale : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsScale* new_QGraphicsScale(QObject*  parent = 0);
void delete_QGraphicsScale(QGraphicsScale* obj) { delete obj; } 
   void setYScale(QGraphicsScale* theWrappedObject, qreal  arg__1);
   void setXScale(QGraphicsScale* theWrappedObject, qreal  arg__1);
   qreal  zScale(QGraphicsScale* theWrappedObject) const;
   qreal  yScale(QGraphicsScale* theWrappedObject) const;
   QVector3D  origin(QGraphicsScale* theWrappedObject) const;
   qreal  xScale(QGraphicsScale* theWrappedObject) const;
   void applyTo(QGraphicsScale* theWrappedObject, QMatrix4x4*  matrix) const;
   void setOrigin(QGraphicsScale* theWrappedObject, const QVector3D&  point);
   void setZScale(QGraphicsScale* theWrappedObject, qreal  arg__1);
};





class PythonQtShell_QGraphicsScene : public QGraphicsScene
{
public:
    PythonQtShell_QGraphicsScene(QObject*  parent = 0):QGraphicsScene(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent = 0):QGraphicsScene(sceneRect, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent = 0):QGraphicsScene(x, y, width, height, parent),_wrapper(NULL) {};

virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0);
virtual void drawForeground(QPainter*  painter, const QRectF&  rect);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void helpEvent(QGraphicsSceneHelpEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void drawBackground(QPainter*  painter, const QRectF&  rect);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  event(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsScene : public QGraphicsScene
{ public:
inline bool  promoted_eventFilter(QObject*  watched, QEvent*  event) { return QGraphicsScene::eventFilter(watched, event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseReleaseEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsScene::keyPressEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mousePressEvent(event); }
inline void promoted_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0) { QGraphicsScene::drawItems(painter, numItems, items, options, widget); }
inline void promoted_drawForeground(QPainter*  painter, const QRectF&  rect) { QGraphicsScene::drawForeground(painter, rect); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragEnterEvent(event); }
inline void promoted_helpEvent(QGraphicsSceneHelpEvent*  event) { QGraphicsScene::helpEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsScene::inputMethodQuery(query); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsScene::focusInEvent(event); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dropEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragMoveEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseMoveEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsScene::keyReleaseEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsScene::inputMethodEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragLeaveEvent(event); }
inline void promoted_drawBackground(QPainter*  painter, const QRectF&  rect) { QGraphicsScene::drawBackground(painter, rect); }
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsScene::contextMenuEvent(event); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsScene::wheelEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsScene::focusOutEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QGraphicsScene::event(event); }
};

class PythonQtWrapper_QGraphicsScene : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SceneLayer ItemIndexMethod )
Q_FLAGS(SceneLayers )
enum SceneLayer{
  ItemLayer = QGraphicsScene::ItemLayer,   BackgroundLayer = QGraphicsScene::BackgroundLayer,   ForegroundLayer = QGraphicsScene::ForegroundLayer,   AllLayers = QGraphicsScene::AllLayers};
enum ItemIndexMethod{
  BspTreeIndex = QGraphicsScene::BspTreeIndex,   NoIndex = QGraphicsScene::NoIndex};
Q_DECLARE_FLAGS(SceneLayers, SceneLayer)
public slots:
QGraphicsScene* new_QGraphicsScene(QObject*  parent = 0);
QGraphicsScene* new_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent = 0);
QGraphicsScene* new_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent = 0);
void delete_QGraphicsScene(QGraphicsScene* obj) { delete obj; } 
   bool  eventFilter(QGraphicsScene* theWrappedObject, QObject*  watched, QEvent*  event);
   void clearFocus(QGraphicsScene* theWrappedObject);
   QStyle*  style(QGraphicsScene* theWrappedObject) const;
   void render(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  target = QRectF(), const QRectF&  source = QRectF(), Qt::AspectRatioMode  aspectRatioMode = Qt::KeepAspectRatio);
   QList<QGraphicsItem* >  selectedItems(QGraphicsScene* theWrappedObject) const;
   QPalette  palette(QGraphicsScene* theWrappedObject) const;
   QRectF  sceneRect(QGraphicsScene* theWrappedObject) const;
   void setStickyFocus(QGraphicsScene* theWrappedObject, bool  enabled);
   QGraphicsSimpleTextItem*  addSimpleText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font = QFont());
   int  bspTreeDepth(QGraphicsScene* theWrappedObject) const;
   void mouseReleaseEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void keyPressEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event);
   qreal  width(QGraphicsScene* theWrappedObject) const;
   QGraphicsItem*  focusItem(QGraphicsScene* theWrappedObject) const;
   QGraphicsItem*  mouseGrabberItem(QGraphicsScene* theWrappedObject) const;
   void mousePressEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   bool  hasFocus(QGraphicsScene* theWrappedObject) const;
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode, const QTransform&  deviceTransform);
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QTransform&  deviceTransform);
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path);
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode);
   QBrush  foregroundBrush(QGraphicsScene* theWrappedObject) const;
   QList<QGraphicsView* >  views(QGraphicsScene* theWrappedObject) const;
   void drawItems(QGraphicsScene* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0);
   void setItemIndexMethod(QGraphicsScene* theWrappedObject, QGraphicsScene::ItemIndexMethod  method);
   void destroyItemGroup(QGraphicsScene* theWrappedObject, QGraphicsItemGroup*  group);
   QGraphicsRectItem*  addRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   void setSortCacheEnabled(QGraphicsScene* theWrappedObject, bool  enabled);
   QGraphicsRectItem*  addRect(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsWidget*  activeWindow(QGraphicsScene* theWrappedObject) const;
   QPainterPath  selectionArea(QGraphicsScene* theWrappedObject) const;
   void drawForeground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, const QTransform&  deviceTransform) const;
   QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, qreal  x, qreal  y) const;
   QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, const QPointF&  pos, const QTransform&  deviceTransform) const;
   QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, const QPointF&  pos) const;
   void setStyle(QGraphicsScene* theWrappedObject, QStyle*  style);
   void addItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item);
   void setActivePanel(QGraphicsScene* theWrappedObject, QGraphicsItem*  item);
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform = QTransform()) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QRectF&  rect, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform = QTransform()) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPointF&  pos) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform = QTransform()) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QRectF&  rect, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform = QTransform()) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPointF&  pos, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform = QTransform()) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, Qt::SortOrder  order) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject) const;
   void dragEnterEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void helpEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneHelpEvent*  event);
   QGraphicsTextItem*  addText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font = QFont());
   QGraphicsPolygonItem*  addPolygon(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   void update(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   QVariant  inputMethodQuery(QGraphicsScene* theWrappedObject, Qt::InputMethodQuery  query) const;
   void focusInEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event);
   void dropEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   bool  stickyFocus(QGraphicsScene* theWrappedObject) const;
   QFont  font(QGraphicsScene* theWrappedObject) const;
   void dragMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QGraphicsItemGroup*  createItemGroup(QGraphicsScene* theWrappedObject, const QList<QGraphicsItem* >&  items);
   void mouseDoubleClickEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   QGraphicsEllipseItem*  addEllipse(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsEllipseItem*  addEllipse(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   void mouseMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void keyReleaseEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event);
   QGraphicsScene::ItemIndexMethod  itemIndexMethod(QGraphicsScene* theWrappedObject) const;
   void setSceneRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setSceneRect(QGraphicsScene* theWrappedObject, const QRectF&  rect);
   QGraphicsPixmapItem*  addPixmap(QGraphicsScene* theWrappedObject, const QPixmap&  pixmap);
   void inputMethodEvent(QGraphicsScene* theWrappedObject, QInputMethodEvent*  event);
   bool  isSortCacheEnabled(QGraphicsScene* theWrappedObject) const;
   void invalidate(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsScene::SceneLayers  layers = QGraphicsScene::AllLayers);
   void setFont(QGraphicsScene* theWrappedObject, const QFont&  font);
   QGraphicsLineItem*  addLine(QGraphicsScene* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2, const QPen&  pen = QPen());
   QGraphicsLineItem*  addLine(QGraphicsScene* theWrappedObject, const QLineF&  line, const QPen&  pen = QPen());
   void setBspTreeDepth(QGraphicsScene* theWrappedObject, int  depth);
   void setActiveWindow(QGraphicsScene* theWrappedObject, QGraphicsWidget*  widget);
   QGraphicsItem*  activePanel(QGraphicsScene* theWrappedObject) const;
   void setForegroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush);
   void setPalette(QGraphicsScene* theWrappedObject, const QPalette&  palette);
   bool  isActive(QGraphicsScene* theWrappedObject) const;
   bool  sendEvent(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, QEvent*  event);
   void dragLeaveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void drawBackground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void setFocus(QGraphicsScene* theWrappedObject, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   void setBackgroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush);
   void contextMenuEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   void setFocusItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   void wheelEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneWheelEvent*  event);
   QRectF  itemsBoundingRect(QGraphicsScene* theWrappedObject) const;
   void focusOutEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event);
   QBrush  backgroundBrush(QGraphicsScene* theWrappedObject) const;
   QGraphicsPathItem*  addPath(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsProxyWidget*  addWidget(QGraphicsScene* theWrappedObject, QWidget*  widget, Qt::WindowFlags  wFlags = 0);
   qreal  height(QGraphicsScene* theWrappedObject) const;
   QList<QGraphicsItem* >  collidingItems(QGraphicsScene* theWrappedObject, const QGraphicsItem*  item, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   bool  event(QGraphicsScene* theWrappedObject, QEvent*  event);
   void removeItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item);
};





class PythonQtWrapper_QGraphicsSceneContextMenuEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Reason )
enum Reason{
  Mouse = QGraphicsSceneContextMenuEvent::Mouse,   Keyboard = QGraphicsSceneContextMenuEvent::Keyboard,   Other = QGraphicsSceneContextMenuEvent::Other};
public slots:
QGraphicsSceneContextMenuEvent* new_QGraphicsSceneContextMenuEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneContextMenuEvent(QGraphicsSceneContextMenuEvent* obj) { delete obj; } 
   QPoint  screenPos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   void setReason(QGraphicsSceneContextMenuEvent* theWrappedObject, QGraphicsSceneContextMenuEvent::Reason  reason);
   QGraphicsSceneContextMenuEvent::Reason  reason(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   void setPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos);
   void setModifiers(QGraphicsSceneContextMenuEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setScenePos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos);
   void setScreenPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPoint&  pos);
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   QPointF  pos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
};





class PythonQtWrapper_QGraphicsSceneDragDropEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneDragDropEvent* new_QGraphicsSceneDragDropEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneDragDropEvent(QGraphicsSceneDragDropEvent* obj) { delete obj; } 
   QPointF  pos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   QWidget*  source(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::DropActions  possibleActions(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   void setPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos);
   QPointF  scenePos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::DropAction  dropAction(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   const QMimeData*  mimeData(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::DropAction  proposedAction(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   void setModifiers(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setPossibleActions(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropActions  actions);
   void setDropAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action);
   void setButtons(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::MouseButtons  buttons);
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   void setScreenPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPoint&  pos);
   void setProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action);
   QPoint  screenPos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   void acceptProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject);
   void setScenePos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos);
};





class PythonQtWrapper_QGraphicsSceneEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneEvent* new_QGraphicsSceneEvent(QEvent::Type  type);
void delete_QGraphicsSceneEvent(QGraphicsSceneEvent* obj) { delete obj; } 
   QWidget*  widget(QGraphicsSceneEvent* theWrappedObject) const;
};





class PythonQtWrapper_QGraphicsSceneHelpEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneHelpEvent* new_QGraphicsSceneHelpEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneHelpEvent(QGraphicsSceneHelpEvent* obj) { delete obj; } 
   QPoint  screenPos(QGraphicsSceneHelpEvent* theWrappedObject) const;
   void setScenePos(QGraphicsSceneHelpEvent* theWrappedObject, const QPointF&  pos);
   void setScreenPos(QGraphicsSceneHelpEvent* theWrappedObject, const QPoint&  pos);
   QPointF  scenePos(QGraphicsSceneHelpEvent* theWrappedObject) const;
};





class PythonQtWrapper_QGraphicsSceneHoverEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneHoverEvent* new_QGraphicsSceneHoverEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneHoverEvent(QGraphicsSceneHoverEvent* obj) { delete obj; } 
   QPointF  pos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   void setLastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos);
   void setLastScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   void setPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   QPointF  lastScenePos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   void setModifiers(QGraphicsSceneHoverEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   QPoint  lastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPointF  lastPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   void setLastPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneHoverEvent* theWrappedObject) const;
   void setScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos);
   void setScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   QPoint  screenPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
};





class PythonQtWrapper_QGraphicsSceneMouseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneMouseEvent* new_QGraphicsSceneMouseEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneMouseEvent(QGraphicsSceneMouseEvent* obj) { delete obj; } 
   QPointF  pos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setButtonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos);
   void setButton(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button);
   void setLastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos);
   void setLastScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   void setPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   QPointF  lastScenePos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setButtonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos);
   QPointF  scenePos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPoint  lastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPointF  lastPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setModifiers(QGraphicsSceneMouseEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setButtonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPoint&  pos);
   void setLastPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setButtons(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButtons  buttons);
   QPoint  buttonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
   void setScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos);
   QPoint  screenPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPointF  buttonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
   QPointF  buttonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
   Qt::MouseButton  button(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
};





class PythonQtWrapper_QGraphicsSceneMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneMoveEvent* new_QGraphicsSceneMoveEvent();
void delete_QGraphicsSceneMoveEvent(QGraphicsSceneMoveEvent* obj) { delete obj; } 
   QPointF  newPos(QGraphicsSceneMoveEvent* theWrappedObject) const;
   void setNewPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos);
   void setOldPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos);
   QPointF  oldPos(QGraphicsSceneMoveEvent* theWrappedObject) const;
};





class PythonQtWrapper_QGraphicsSceneResizeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneResizeEvent* new_QGraphicsSceneResizeEvent();
void delete_QGraphicsSceneResizeEvent(QGraphicsSceneResizeEvent* obj) { delete obj; } 
   QSizeF  newSize(QGraphicsSceneResizeEvent* theWrappedObject) const;
   void setOldSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size);
   void setNewSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size);
   QSizeF  oldSize(QGraphicsSceneResizeEvent* theWrappedObject) const;
};





class PythonQtWrapper_QGraphicsSceneWheelEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneWheelEvent* new_QGraphicsSceneWheelEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneWheelEvent(QGraphicsSceneWheelEvent* obj) { delete obj; } 
   QPointF  pos(QGraphicsSceneWheelEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QGraphicsSceneWheelEvent* theWrappedObject) const;
   void setPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos);
   int  delta(QGraphicsSceneWheelEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneWheelEvent* theWrappedObject) const;
   void setModifiers(QGraphicsSceneWheelEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   Qt::Orientation  orientation(QGraphicsSceneWheelEvent* theWrappedObject) const;
   void setOrientation(QGraphicsSceneWheelEvent* theWrappedObject, Qt::Orientation  orientation);
   void setDelta(QGraphicsSceneWheelEvent* theWrappedObject, int  delta);
   void setButtons(QGraphicsSceneWheelEvent* theWrappedObject, Qt::MouseButtons  buttons);
   void setScreenPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPoint&  pos);
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneWheelEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneWheelEvent* theWrappedObject) const;
   void setScenePos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos);
};





class PythonQtShell_QGraphicsSimpleTextItem : public QGraphicsSimpleTextItem
{
public:
    PythonQtShell_QGraphicsSimpleTextItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsSimpleTextItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsSimpleTextItem(const QString&  text, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsSimpleTextItem(text, parent, scene),_wrapper(NULL) {};

virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsSimpleTextItem : public QGraphicsSimpleTextItem
{ public:
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsSimpleTextItem::isObscuredBy(item); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsSimpleTextItem::opaqueArea(); }
};

class PythonQtWrapper_QGraphicsSimpleTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsSimpleTextItem::Type};
public slots:
QGraphicsSimpleTextItem* new_QGraphicsSimpleTextItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsSimpleTextItem* new_QGraphicsSimpleTextItem(const QString&  text, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsSimpleTextItem(QGraphicsSimpleTextItem* obj) { delete obj; } 
   QPainterPath  shape(QGraphicsSimpleTextItem* theWrappedObject) const;
   QString  text(QGraphicsSimpleTextItem* theWrappedObject) const;
   QFont  font(QGraphicsSimpleTextItem* theWrappedObject) const;
   bool  contains(QGraphicsSimpleTextItem* theWrappedObject, const QPointF&  point) const;
   int  type(QGraphicsSimpleTextItem* theWrappedObject) const;
   void paint(QGraphicsSimpleTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   void setFont(QGraphicsSimpleTextItem* theWrappedObject, const QFont&  font);
   void setText(QGraphicsSimpleTextItem* theWrappedObject, const QString&  text);
   bool  isObscuredBy(QGraphicsSimpleTextItem* theWrappedObject, const QGraphicsItem*  item) const;
   QPainterPath  opaqueArea(QGraphicsSimpleTextItem* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsSimpleTextItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsTextItem : public QGraphicsTextItem
{
public:
    PythonQtShell_QGraphicsTextItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsTextItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsTextItem(text, parent, scene),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGraphicsTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsTextItem::Type};
public slots:
QGraphicsTextItem* new_QGraphicsTextItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsTextItem* new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsTextItem(QGraphicsTextItem* obj) { delete obj; } 
   void setTextInteractionFlags(QGraphicsTextItem* theWrappedObject, Qt::TextInteractionFlags  flags);
   QPainterPath  shape(QGraphicsTextItem* theWrappedObject) const;
   QTextCursor  textCursor(QGraphicsTextItem* theWrappedObject) const;
   bool  contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const;
   void setHtml(QGraphicsTextItem* theWrappedObject, const QString&  html);
   int  type(QGraphicsTextItem* theWrappedObject) const;
   void setOpenExternalLinks(QGraphicsTextItem* theWrappedObject, bool  open);
   void setFont(QGraphicsTextItem* theWrappedObject, const QFont&  font);
   QString  toHtml(QGraphicsTextItem* theWrappedObject) const;
   void setDefaultTextColor(QGraphicsTextItem* theWrappedObject, const QColor&  c);
   void setTextWidth(QGraphicsTextItem* theWrappedObject, qreal  width);
   QPainterPath  opaqueArea(QGraphicsTextItem* theWrappedObject) const;
   QTextDocument*  document(QGraphicsTextItem* theWrappedObject) const;
   bool  openExternalLinks(QGraphicsTextItem* theWrappedObject) const;
   void setPlainText(QGraphicsTextItem* theWrappedObject, const QString&  text);
   void setTabChangesFocus(QGraphicsTextItem* theWrappedObject, bool  b);
   void setTextCursor(QGraphicsTextItem* theWrappedObject, const QTextCursor&  cursor);
   void setDocument(QGraphicsTextItem* theWrappedObject, QTextDocument*  document);
   Qt::TextInteractionFlags  textInteractionFlags(QGraphicsTextItem* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsTextItem* theWrappedObject) const;
   void adjustSize(QGraphicsTextItem* theWrappedObject);
   qreal  textWidth(QGraphicsTextItem* theWrappedObject) const;
   QColor  defaultTextColor(QGraphicsTextItem* theWrappedObject) const;
   bool  tabChangesFocus(QGraphicsTextItem* theWrappedObject) const;
   QFont  font(QGraphicsTextItem* theWrappedObject) const;
   bool  isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const;
   void paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   QString  toPlainText(QGraphicsTextItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsTransform : public QGraphicsTransform
{
public:
    PythonQtShell_QGraphicsTransform(QObject*  parent = 0):QGraphicsTransform(parent),_wrapper(NULL) {};

virtual void applyTo(QMatrix4x4*  matrix) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGraphicsTransform : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsTransform* new_QGraphicsTransform(QObject*  parent = 0);
void delete_QGraphicsTransform(QGraphicsTransform* obj) { delete obj; } 
};





class PythonQtShell_QGraphicsView : public QGraphicsView
{
public:
    PythonQtShell_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent = 0):QGraphicsView(scene, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsView(QWidget*  parent = 0):QGraphicsView(parent),_wrapper(NULL) {};

virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void drawForeground(QPainter*  painter, const QRectF&  rect);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual bool  viewportEvent(QEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void drawBackground(QPainter*  painter, const QRectF&  rect);
virtual void paintEvent(QPaintEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void scrollContentsBy(int  dx, int  dy);
virtual bool  focusNextPrevChild(bool  next);
virtual bool  event(QEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsView : public QGraphicsView
{ public:
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QGraphicsView::mouseReleaseEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsView::keyPressEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QGraphicsView::mousePressEvent(event); }
inline void promoted_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options) { QGraphicsView::drawItems(painter, numItems, items, options); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { QGraphicsView::dragMoveEvent(event); }
inline void promoted_drawForeground(QPainter*  painter, const QRectF&  rect) { QGraphicsView::drawForeground(painter, rect); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  event) { QGraphicsView::dragEnterEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsView::inputMethodQuery(query); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QGraphicsView::resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QGraphicsView::showEvent(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsView::focusInEvent(event); }
inline void promoted_dropEvent(QDropEvent*  event) { QGraphicsView::dropEvent(event); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { QGraphicsView::mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QGraphicsView::mouseMoveEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsView::keyReleaseEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsView::inputMethodEvent(event); }
inline bool  promoted_viewportEvent(QEvent*  event) { return QGraphicsView::viewportEvent(event); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  event) { QGraphicsView::dragLeaveEvent(event); }
inline void promoted_drawBackground(QPainter*  painter, const QRectF&  rect) { QGraphicsView::drawBackground(painter, rect); }
inline void promoted_paintEvent(QPaintEvent*  event) { QGraphicsView::paintEvent(event); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { QGraphicsView::contextMenuEvent(event); }
inline void promoted_wheelEvent(QWheelEvent*  event) { QGraphicsView::wheelEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsView::focusOutEvent(event); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QGraphicsView::scrollContentsBy(dx, dy); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QGraphicsView::focusNextPrevChild(next); }
inline bool  promoted_event(QEvent*  event) { return QGraphicsView::event(event); }
};

class PythonQtWrapper_QGraphicsView : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OptimizationFlag CacheModeFlag )
Q_FLAGS(OptimizationFlags CacheMode )
enum OptimizationFlag{
  DontClipPainter = QGraphicsView::DontClipPainter,   DontSavePainterState = QGraphicsView::DontSavePainterState,   DontAdjustForAntialiasing = QGraphicsView::DontAdjustForAntialiasing,   IndirectPainting = QGraphicsView::IndirectPainting};
enum CacheModeFlag{
  CacheNone = QGraphicsView::CacheNone,   CacheBackground = QGraphicsView::CacheBackground};
Q_DECLARE_FLAGS(OptimizationFlags, OptimizationFlag)
Q_DECLARE_FLAGS(CacheMode, CacheModeFlag)
public slots:
QGraphicsView* new_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent = 0);
QGraphicsView* new_QGraphicsView(QWidget*  parent = 0);
void delete_QGraphicsView(QGraphicsView* obj) { delete obj; } 
   void setTransform(QGraphicsView* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void render(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  target = QRectF(), const QRect&  source = QRect(), Qt::AspectRatioMode  aspectRatioMode = Qt::KeepAspectRatio);
   QRectF  sceneRect(QGraphicsView* theWrappedObject) const;
   QGraphicsView::ViewportUpdateMode  viewportUpdateMode(QGraphicsView* theWrappedObject) const;
   void resetCachedContent(QGraphicsView* theWrappedObject);
   void setTransformationAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor);
   void setViewportUpdateMode(QGraphicsView* theWrappedObject, QGraphicsView::ViewportUpdateMode  mode);
   void ensureVisible(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, int  xmargin = 50, int  ymargin = 50);
   void mouseReleaseEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   QGraphicsView::DragMode  dragMode(QGraphicsView* theWrappedObject) const;
   void ensureVisible(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin = 50, int  ymargin = 50);
   void ensureVisible(QGraphicsView* theWrappedObject, const QRectF&  rect, int  xmargin = 50, int  ymargin = 50);
   void setScene(QGraphicsView* theWrappedObject, QGraphicsScene*  scene);
   void keyPressEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event);
   void setInteractive(QGraphicsView* theWrappedObject, bool  allowed);
   void setOptimizationFlag(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlag  flag, bool  enabled = true);
   void setAlignment(QGraphicsView* theWrappedObject, Qt::Alignment  alignment);
   void mousePressEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   void setMatrix(QGraphicsView* theWrappedObject, const QMatrix&  matrix, bool  combine = false);
   QGraphicsView::CacheMode  cacheMode(QGraphicsView* theWrappedObject) const;
   void rotate(QGraphicsView* theWrappedObject, qreal  angle);
   QBrush  foregroundBrush(QGraphicsView* theWrappedObject) const;
   void drawItems(QGraphicsView* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options);
   QPainterPath  mapFromScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const;
   void setRenderHints(QGraphicsView* theWrappedObject, QPainter::RenderHints  hints);
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPoint  mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y) const;
   bool  isTransformed(QGraphicsView* theWrappedObject) const;
   void dragMoveEvent(QGraphicsView* theWrappedObject, QDragMoveEvent*  event);
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, const QRectF&  rect) const;
   QPoint  mapFromScene(QGraphicsView* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h) const;
   QPointF  mapToScene(QGraphicsView* theWrappedObject, int  x, int  y) const;
   QPainterPath  mapToScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, const QPolygon&  polygon) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, const QRect&  rect) const;
   QPointF  mapToScene(QGraphicsView* theWrappedObject, const QPoint&  point) const;
   QPainter::RenderHints  renderHints(QGraphicsView* theWrappedObject) const;
   void drawForeground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, int  x, int  y) const;
   QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
   QTransform  viewportTransform(QGraphicsView* theWrappedObject) const;
   QGraphicsView::OptimizationFlags  optimizationFlags(QGraphicsView* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPolygon&  polygon, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QRect&  rect, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y) const;
   QMatrix  matrix(QGraphicsView* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject) const;
   void dragEnterEvent(QGraphicsView* theWrappedObject, QDragEnterEvent*  event);
   QVariant  inputMethodQuery(QGraphicsView* theWrappedObject, Qt::InputMethodQuery  query) const;
   void resizeEvent(QGraphicsView* theWrappedObject, QResizeEvent*  event);
   void showEvent(QGraphicsView* theWrappedObject, QShowEvent*  event);
   void focusInEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event);
   void dropEvent(QGraphicsView* theWrappedObject, QDropEvent*  event);
   void shear(QGraphicsView* theWrappedObject, qreal  sh, qreal  sv);
   void resetMatrix(QGraphicsView* theWrappedObject);
   void setRenderHint(QGraphicsView* theWrappedObject, QPainter::RenderHint  hint, bool  enabled = true);
   bool  isInteractive(QGraphicsView* theWrappedObject) const;
   Qt::Alignment  alignment(QGraphicsView* theWrappedObject) const;
   void fitInView(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void fitInView(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void fitInView(QGraphicsView* theWrappedObject, const QRectF&  rect, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void scale(QGraphicsView* theWrappedObject, qreal  sx, qreal  sy);
   void mouseDoubleClickEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   QSize  sizeHint(QGraphicsView* theWrappedObject) const;
   Qt::ItemSelectionMode  rubberBandSelectionMode(QGraphicsView* theWrappedObject) const;
   void translate(QGraphicsView* theWrappedObject, qreal  dx, qreal  dy);
   void mouseMoveEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   void resetTransform(QGraphicsView* theWrappedObject);
   void setOptimizationFlags(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlags  flags);
   void keyReleaseEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event);
   QGraphicsScene*  scene(QGraphicsView* theWrappedObject) const;
   void setCacheMode(QGraphicsView* theWrappedObject, QGraphicsView::CacheMode  mode);
   void setResizeAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor);
   void setSceneRect(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setSceneRect(QGraphicsView* theWrappedObject, const QRectF&  rect);
   void centerOn(QGraphicsView* theWrappedObject, const QGraphicsItem*  item);
   void centerOn(QGraphicsView* theWrappedObject, qreal  x, qreal  y);
   void centerOn(QGraphicsView* theWrappedObject, const QPointF&  pos);
   void inputMethodEvent(QGraphicsView* theWrappedObject, QInputMethodEvent*  event);
   bool  viewportEvent(QGraphicsView* theWrappedObject, QEvent*  event);
   QGraphicsView::ViewportAnchor  transformationAnchor(QGraphicsView* theWrappedObject) const;
   void setForegroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush);
   void dragLeaveEvent(QGraphicsView* theWrappedObject, QDragLeaveEvent*  event);
   void drawBackground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void setDragMode(QGraphicsView* theWrappedObject, QGraphicsView::DragMode  mode);
   void setBackgroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush);
   QTransform  transform(QGraphicsView* theWrappedObject) const;
   void paintEvent(QGraphicsView* theWrappedObject, QPaintEvent*  event);
   void contextMenuEvent(QGraphicsView* theWrappedObject, QContextMenuEvent*  event);
   QGraphicsView::ViewportAnchor  resizeAnchor(QGraphicsView* theWrappedObject) const;
   void wheelEvent(QGraphicsView* theWrappedObject, QWheelEvent*  event);
   void focusOutEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event);
   QBrush  backgroundBrush(QGraphicsView* theWrappedObject) const;
   void scrollContentsBy(QGraphicsView* theWrappedObject, int  dx, int  dy);
   bool  focusNextPrevChild(QGraphicsView* theWrappedObject, bool  next);
   bool  event(QGraphicsView* theWrappedObject, QEvent*  event);
   void setRubberBandSelectionMode(QGraphicsView* theWrappedObject, Qt::ItemSelectionMode  mode);
};





class PythonQtShell_QGraphicsWidget : public QGraphicsWidget
{
public:
    PythonQtShell_QGraphicsWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0):QGraphicsWidget(parent, wFlags),_wrapper(NULL) {};

virtual void ungrabMouseEvent(QEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void grabMouseEvent(QEvent*  event);
virtual void updateGeometry();
virtual Qt::WindowFrameSection  windowFrameSectionAt(const QPointF&  pos) const;
virtual void initStyleOption(QStyleOption*  option) const;
virtual bool  windowFrameEvent(QEvent*  e);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void resizeEvent(QGraphicsSceneResizeEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual void grabKeyboardEvent(QEvent*  event);
virtual void polishEvent();
virtual QVariant  propertyChange(const QString&  propertyName, const QVariant&  value);
virtual void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual void moveEvent(QGraphicsSceneMoveEvent*  event);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void changeEvent(QEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void setGeometry(const QRectF&  rect);
virtual void ungrabKeyboardEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsWidget : public QGraphicsWidget
{ public:
inline void promoted_ungrabMouseEvent(QEvent*  event) { QGraphicsWidget::ungrabMouseEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsWidget::hoverMoveEvent(event); }
inline void promoted_grabMouseEvent(QEvent*  event) { QGraphicsWidget::grabMouseEvent(event); }
inline void promoted_updateGeometry() { QGraphicsWidget::updateGeometry(); }
inline Qt::WindowFrameSection  promoted_windowFrameSectionAt(const QPointF&  pos) const { return QGraphicsWidget::windowFrameSectionAt(pos); }
inline void promoted_initStyleOption(QStyleOption*  option) const { QGraphicsWidget::initStyleOption(option); }
inline bool  promoted_windowFrameEvent(QEvent*  e) { return QGraphicsWidget::windowFrameEvent(e); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsWidget::hoverLeaveEvent(event); }
inline void promoted_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsWidget::getContentsMargins(left, top, right, bottom); }
inline void promoted_resizeEvent(QGraphicsSceneResizeEvent*  event) { QGraphicsWidget::resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QGraphicsWidget::showEvent(event); }
inline void promoted_grabKeyboardEvent(QEvent*  event) { QGraphicsWidget::grabKeyboardEvent(event); }
inline void promoted_polishEvent() { QGraphicsWidget::polishEvent(); }
inline QVariant  promoted_propertyChange(const QString&  propertyName, const QVariant&  value) { return QGraphicsWidget::propertyChange(propertyName, value); }
inline void promoted_paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0) { QGraphicsWidget::paintWindowFrame(painter, option, widget); }
inline void promoted_moveEvent(QGraphicsSceneMoveEvent*  event) { QGraphicsWidget::moveEvent(event); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsWidget::sizeHint(which, constraint); }
inline void promoted_changeEvent(QEvent*  event) { QGraphicsWidget::changeEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { QGraphicsWidget::hideEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { QGraphicsWidget::closeEvent(event); }
inline void promoted_setGeometry(const QRectF&  rect) { QGraphicsWidget::setGeometry(rect); }
inline void promoted_ungrabKeyboardEvent(QEvent*  event) { QGraphicsWidget::ungrabKeyboardEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QGraphicsWidget::event(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QGraphicsWidget::focusNextPrevChild(next); }
};

class PythonQtWrapper_QGraphicsWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsWidget::Type};
public slots:
QGraphicsWidget* new_QGraphicsWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0);
void delete_QGraphicsWidget(QGraphicsWidget* obj) { delete obj; } 
   QStyle*  style(QGraphicsWidget* theWrappedObject) const;
   void addAction(QGraphicsWidget* theWrappedObject, QAction*  action);
   void removeAction(QGraphicsWidget* theWrappedObject, QAction*  action);
   QPalette  palette(QGraphicsWidget* theWrappedObject) const;
   void unsetLayoutDirection(QGraphicsWidget* theWrappedObject);
   bool  isActiveWindow(QGraphicsWidget* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsWidget* theWrappedObject) const;
   void ungrabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void setWindowTitle(QGraphicsWidget* theWrappedObject, const QString&  title);
   void hoverMoveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void grabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void insertAction(QGraphicsWidget* theWrappedObject, QAction*  before, QAction*  action);
   void setLayoutDirection(QGraphicsWidget* theWrappedObject, Qt::LayoutDirection  direction);
   int  grabShortcut(QGraphicsWidget* theWrappedObject, const QKeySequence&  sequence, Qt::ShortcutContext  context = Qt::WindowShortcut);
   void updateGeometry(QGraphicsWidget* theWrappedObject);
   void paint(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   Qt::WindowFrameSection  windowFrameSectionAt(QGraphicsWidget* theWrappedObject, const QPointF&  pos) const;
   void setWindowFlags(QGraphicsWidget* theWrappedObject, Qt::WindowFlags  wFlags);
   void initStyleOption(QGraphicsWidget* theWrappedObject, QStyleOption*  option) const;
   void setLayout(QGraphicsWidget* theWrappedObject, QGraphicsLayout*  layout);
   bool  windowFrameEvent(QGraphicsWidget* theWrappedObject, QEvent*  e);
   void hoverLeaveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   QList<QAction* >  actions(QGraphicsWidget* theWrappedObject) const;
   QRectF  windowFrameGeometry(QGraphicsWidget* theWrappedObject) const;
   void getContentsMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void addActions(QGraphicsWidget* theWrappedObject, QList<QAction* >  actions);
   void setStyle(QGraphicsWidget* theWrappedObject, QStyle*  style);
   void setWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   QPainterPath  shape(QGraphicsWidget* theWrappedObject) const;
   void setContentsMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   Qt::FocusPolicy  focusPolicy(QGraphicsWidget* theWrappedObject) const;
   void releaseShortcut(QGraphicsWidget* theWrappedObject, int  id);
   void resizeEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event);
   void showEvent(QGraphicsWidget* theWrappedObject, QShowEvent*  event);
   void grabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void setAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute, bool  on = true);
   void insertActions(QGraphicsWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions);
   QFont  font(QGraphicsWidget* theWrappedObject) const;
   void setShortcutAutoRepeat(QGraphicsWidget* theWrappedObject, int  id, bool  enabled = true);
   void polishEvent(QGraphicsWidget* theWrappedObject);
   QVariant  propertyChange(QGraphicsWidget* theWrappedObject, const QString&  propertyName, const QVariant&  value);
   void paintWindowFrame(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   void moveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneMoveEvent*  event);
   QSizeF  sizeHint(QGraphicsWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   void resize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h);
   QSizeF  size(QGraphicsWidget* theWrappedObject) const;
   void resize(QGraphicsWidget* theWrappedObject, const QSizeF&  size);
   QGraphicsWidget*  focusWidget(QGraphicsWidget* theWrappedObject) const;
   void changeEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void hideEvent(QGraphicsWidget* theWrappedObject, QHideEvent*  event);
   QRectF  windowFrameRect(QGraphicsWidget* theWrappedObject) const;
   void setShortcutEnabled(QGraphicsWidget* theWrappedObject, int  id, bool  enabled = true);
   void closeEvent(QGraphicsWidget* theWrappedObject, QCloseEvent*  event);
   void setFocusPolicy(QGraphicsWidget* theWrappedObject, Qt::FocusPolicy  policy);
   QString  windowTitle(QGraphicsWidget* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QGraphicsWidget* theWrappedObject) const;
   void setGeometry(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setGeometry(QGraphicsWidget* theWrappedObject, const QRectF&  rect);
   void setFont(QGraphicsWidget* theWrappedObject, const QFont&  font);
   void getWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void setPalette(QGraphicsWidget* theWrappedObject, const QPalette&  palette);
   QRectF  rect(QGraphicsWidget* theWrappedObject) const;
   void unsetWindowFrameMargins(QGraphicsWidget* theWrappedObject);
   void static_QGraphicsWidget_setTabOrder(QGraphicsWidget*  first, QGraphicsWidget*  second);
   Qt::WindowFlags  windowFlags(QGraphicsWidget* theWrappedObject) const;
   void ungrabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   int  type(QGraphicsWidget* theWrappedObject) const;
   void adjustSize(QGraphicsWidget* theWrappedObject);
   bool  testAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute) const;
   bool  event(QGraphicsWidget* theWrappedObject, QEvent*  event);
   QGraphicsLayout*  layout(QGraphicsWidget* theWrappedObject) const;
   bool  focusNextPrevChild(QGraphicsWidget* theWrappedObject, bool  next);
   Qt::WindowType  windowType(QGraphicsWidget* theWrappedObject) const;
};





class PythonQtShell_QGridLayout : public QGridLayout
{
public:
    PythonQtShell_QGridLayout():QGridLayout(),_wrapper(NULL) {};
    PythonQtShell_QGridLayout(QWidget*  parent):QGridLayout(parent),_wrapper(NULL) {};

virtual QLayoutItem*  takeAt(int  index);
virtual QSize  minimumSize() const;
virtual Qt::Orientations  expandingDirections() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QLayoutItem*  itemAt(int  index) const;
virtual int  count() const;
virtual void addItem(QLayoutItem*  arg__1);
virtual QSize  maximumSize() const;
virtual void invalidate();
virtual QRect  geometry() const;
virtual void childEvent(QChildEvent*  e);
virtual int  indexOf(QWidget*  arg__1) const;
virtual QLayout*  layout();
virtual bool  isEmpty() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGridLayout : public QGridLayout
{ public:
inline QLayoutItem*  promoted_takeAt(int  index) { return QGridLayout::takeAt(index); }
inline QSize  promoted_minimumSize() const { return QGridLayout::minimumSize(); }
inline Qt::Orientations  promoted_expandingDirections() const { return QGridLayout::expandingDirections(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QGridLayout::setGeometry(arg__1); }
inline QLayoutItem*  promoted_itemAt(int  index) const { return QGridLayout::itemAt(index); }
inline int  promoted_count() const { return QGridLayout::count(); }
inline void promoted_addItem(QLayoutItem*  arg__1) { QGridLayout::addItem(arg__1); }
inline QSize  promoted_maximumSize() const { return QGridLayout::maximumSize(); }
inline void promoted_invalidate() { QGridLayout::invalidate(); }
};

class PythonQtWrapper_QGridLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGridLayout* new_QGridLayout();
QGridLayout* new_QGridLayout(QWidget*  parent);
void delete_QGridLayout(QGridLayout* obj) { delete obj; } 
   void setColumnMinimumWidth(QGridLayout* theWrappedObject, int  column, int  minSize);
   QLayoutItem*  takeAt(QGridLayout* theWrappedObject, int  index);
   QSize  minimumSize(QGridLayout* theWrappedObject) const;
   void setColumnStretch(QGridLayout* theWrappedObject, int  column, int  stretch);
   int  columnStretch(QGridLayout* theWrappedObject, int  column) const;
   QSize  sizeHint(QGridLayout* theWrappedObject) const;
   QLayoutItem*  itemAtPosition(QGridLayout* theWrappedObject, int  row, int  column) const;
   int  horizontalSpacing(QGridLayout* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QGridLayout* theWrappedObject) const;
   void setGeometry(QGridLayout* theWrappedObject, const QRect&  arg__1);
   int  rowCount(QGridLayout* theWrappedObject) const;
   int  spacing(QGridLayout* theWrappedObject) const;
   QLayoutItem*  itemAt(QGridLayout* theWrappedObject, int  index) const;
   void setVerticalSpacing(QGridLayout* theWrappedObject, int  spacing);
   int  rowStretch(QGridLayout* theWrappedObject, int  row) const;
   void setOriginCorner(QGridLayout* theWrappedObject, Qt::Corner  arg__1);
   int  columnMinimumWidth(QGridLayout* theWrappedObject, int  column) const;
   void setDefaultPositioning(QGridLayout* theWrappedObject, int  n, Qt::Orientation  orient);
   void addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = 0);
   Qt::Corner  originCorner(QGridLayout* theWrappedObject) const;
   int  columnCount(QGridLayout* theWrappedObject) const;
   void addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, Qt::Alignment  arg__4 = 0);
   int  minimumHeightForWidth(QGridLayout* theWrappedObject, int  arg__1) const;
   int  heightForWidth(QGridLayout* theWrappedObject, int  arg__1) const;
   bool  hasHeightForWidth(QGridLayout* theWrappedObject) const;
   int  verticalSpacing(QGridLayout* theWrappedObject) const;
   int  count(QGridLayout* theWrappedObject) const;
   void getItemPosition(QGridLayout* theWrappedObject, int  idx, int*  row, int*  column, int*  rowSpan, int*  columnSpan);
   void addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = 0);
   void addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, Qt::Alignment  arg__4 = 0);
   void addItem(QGridLayout* theWrappedObject, QLayoutItem*  arg__1);
   void addItem(QGridLayout* theWrappedObject, QLayoutItem*  item, int  row, int  column, int  rowSpan = 1, int  columnSpan = 1, Qt::Alignment  arg__6 = 0);
   QSize  maximumSize(QGridLayout* theWrappedObject) const;
   int  rowMinimumHeight(QGridLayout* theWrappedObject, int  row) const;
   void setHorizontalSpacing(QGridLayout* theWrappedObject, int  spacing);
   QRect  cellRect(QGridLayout* theWrappedObject, int  row, int  column) const;
   void setRowStretch(QGridLayout* theWrappedObject, int  row, int  stretch);
   void setSpacing(QGridLayout* theWrappedObject, int  spacing);
   void invalidate(QGridLayout* theWrappedObject);
   void setRowMinimumHeight(QGridLayout* theWrappedObject, int  row, int  minSize);
};





class PythonQtShell_QGroupBox : public QGroupBox
{
public:
    PythonQtShell_QGroupBox(QWidget*  parent = 0):QGroupBox(parent),_wrapper(NULL) {};
    PythonQtShell_QGroupBox(const QString&  title, QWidget*  parent = 0):QGroupBox(title, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void paintEvent(QPaintEvent*  event);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGroupBox : public QGroupBox
{ public:
inline bool  promoted_event(QEvent*  event) { return QGroupBox::event(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGroupBox::focusInEvent(event); }
inline void promoted_changeEvent(QEvent*  event) { QGroupBox::changeEvent(event); }
inline void promoted_childEvent(QChildEvent*  event) { QGroupBox::childEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QGroupBox::mouseMoveEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QGroupBox::mouseReleaseEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QGroupBox::mousePressEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QGroupBox::resizeEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QGroupBox::paintEvent(event); }
};

class PythonQtWrapper_QGroupBox : public QObject
{ Q_OBJECT
public:
public slots:
QGroupBox* new_QGroupBox(QWidget*  parent = 0);
QGroupBox* new_QGroupBox(const QString&  title, QWidget*  parent = 0);
void delete_QGroupBox(QGroupBox* obj) { delete obj; } 
   bool  event(QGroupBox* theWrappedObject, QEvent*  event);
   QString  title(QGroupBox* theWrappedObject) const;
   void setAlignment(QGroupBox* theWrappedObject, int  alignment);
   void focusInEvent(QGroupBox* theWrappedObject, QFocusEvent*  event);
   bool  isFlat(QGroupBox* theWrappedObject) const;
   void changeEvent(QGroupBox* theWrappedObject, QEvent*  event);
   Qt::Alignment  alignment(QGroupBox* theWrappedObject) const;
   void setCheckable(QGroupBox* theWrappedObject, bool  checkable);
   bool  isChecked(QGroupBox* theWrappedObject) const;
   void childEvent(QGroupBox* theWrappedObject, QChildEvent*  event);
   bool  isCheckable(QGroupBox* theWrappedObject) const;
   void mouseMoveEvent(QGroupBox* theWrappedObject, QMouseEvent*  event);
   QSize  minimumSizeHint(QGroupBox* theWrappedObject) const;
   void mouseReleaseEvent(QGroupBox* theWrappedObject, QMouseEvent*  event);
   void mousePressEvent(QGroupBox* theWrappedObject, QMouseEvent*  event);
   void setTitle(QGroupBox* theWrappedObject, const QString&  title);
   void resizeEvent(QGroupBox* theWrappedObject, QResizeEvent*  event);
   void setFlat(QGroupBox* theWrappedObject, bool  flat);
   void paintEvent(QGroupBox* theWrappedObject, QPaintEvent*  event);
};





class PythonQtShell_QHBoxLayout : public QHBoxLayout
{
public:
    PythonQtShell_QHBoxLayout():QHBoxLayout(),_wrapper(NULL) {};
    PythonQtShell_QHBoxLayout(QWidget*  parent):QHBoxLayout(parent),_wrapper(NULL) {};

virtual int  count() const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QLayoutItem*  itemAt(int  arg__1) const;
virtual Qt::Orientations  expandingDirections() const;
virtual QSize  maximumSize() const;
virtual QLayoutItem*  takeAt(int  arg__1);
virtual void addItem(QLayoutItem*  arg__1);
virtual void invalidate();
virtual QRect  geometry() const;
virtual void childEvent(QChildEvent*  e);
virtual int  indexOf(QWidget*  arg__1) const;
virtual QLayout*  layout();
virtual bool  isEmpty() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QHBoxLayout : public QObject
{ Q_OBJECT
public:
public slots:
QHBoxLayout* new_QHBoxLayout();
QHBoxLayout* new_QHBoxLayout(QWidget*  parent);
void delete_QHBoxLayout(QHBoxLayout* obj) { delete obj; } 
};





class PythonQtShell_QHeaderView : public QHeaderView
{
public:
    PythonQtShell_QHeaderView(Qt::Orientation  orientation, QWidget*  parent = 0):QHeaderView(orientation, parent),_wrapper(NULL) {};

virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual int  horizontalOffset() const;
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void setModel(QAbstractItemModel*  model);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void reset();
virtual void updateGeometries();
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual QSize  sectionSizeFromContents(int  logicalIndex) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void doItemsLayout();
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  old);
virtual bool  viewportEvent(QEvent*  e);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual void paintEvent(QPaintEvent*  e);
virtual int  verticalOffset() const;
virtual void paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const;
virtual void scrollContentsBy(int  dx, int  dy);
virtual bool  event(QEvent*  e);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  flags);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual void timerEvent(QTimerEvent*  event);
virtual void verticalScrollbarAction(int  action);
virtual void updateEditorGeometries();
virtual void verticalScrollbarValueChanged(int  value);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual int  sizeHintForColumn(int  column) const;
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void keyboardSearch(const QString&  search);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void horizontalScrollbarValueChanged(int  value);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void commitData(QWidget*  editor);
virtual void updateEditorData();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual QList<QModelIndex >  selectedIndexes() const;
virtual QStyleOptionViewItem  viewOptions() const;
virtual void setRootIndex(const QModelIndex&  index);
virtual int  sizeHintForRow(int  row) const;
virtual void horizontalScrollbarAction(int  action);
virtual void editorDestroyed(QObject*  editor);
virtual void focusInEvent(QFocusEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void selectAll();
virtual void resizeEvent(QResizeEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QHeaderView : public QHeaderView
{ public:
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QHeaderView::mouseReleaseEvent(e); }
inline int  promoted_horizontalOffset() const { return QHeaderView::horizontalOffset(); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QHeaderView::rowsInserted(parent, start, end); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QHeaderView::visualRegionForSelection(selection); }
inline void promoted_setModel(QAbstractItemModel*  model) { QHeaderView::setModel(model); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QHeaderView::mousePressEvent(e); }
inline void promoted_reset() { QHeaderView::reset(); }
inline void promoted_updateGeometries() { QHeaderView::updateGeometries(); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QHeaderView::isIndexHidden(index); }
inline QSize  promoted_sectionSizeFromContents(int  logicalIndex) const { return QHeaderView::sectionSizeFromContents(logicalIndex); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { QHeaderView::mouseDoubleClickEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QHeaderView::mouseMoveEvent(e); }
inline void promoted_doItemsLayout() { QHeaderView::doItemsLayout(); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QHeaderView::visualRect(index); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  old) { QHeaderView::currentChanged(current, old); }
inline bool  promoted_viewportEvent(QEvent*  e) { return QHeaderView::viewportEvent(e); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QHeaderView::indexAt(p); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight) { QHeaderView::dataChanged(topLeft, bottomRight); }
inline void promoted_paintEvent(QPaintEvent*  e) { QHeaderView::paintEvent(e); }
inline int  promoted_verticalOffset() const { return QHeaderView::verticalOffset(); }
inline void promoted_paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const { QHeaderView::paintSection(painter, rect, logicalIndex); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QHeaderView::scrollContentsBy(dx, dy); }
inline bool  promoted_event(QEvent*  e) { return QHeaderView::event(e); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  flags) { QHeaderView::setSelection(rect, flags); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint) { QHeaderView::scrollTo(index, hint); }
};

class PythonQtWrapper_QHeaderView : public QObject
{ Q_OBJECT
public:
public slots:
QHeaderView* new_QHeaderView(Qt::Orientation  orientation, QWidget*  parent = 0);
void delete_QHeaderView(QHeaderView* obj) { delete obj; } 
   Qt::Alignment  defaultAlignment(QHeaderView* theWrappedObject) const;
   void swapSections(QHeaderView* theWrappedObject, int  first, int  second);
   QByteArray  saveState(QHeaderView* theWrappedObject) const;
   int  stretchSectionCount(QHeaderView* theWrappedObject) const;
   bool  isClickable(QHeaderView* theWrappedObject) const;
   void setCascadingSectionResizes(QHeaderView* theWrappedObject, bool  enable);
   bool  isSortIndicatorShown(QHeaderView* theWrappedObject) const;
   void mouseReleaseEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   void setClickable(QHeaderView* theWrappedObject, bool  clickable);
   int  horizontalOffset(QHeaderView* theWrappedObject) const;
   bool  highlightSections(QHeaderView* theWrappedObject) const;
   void rowsInserted(QHeaderView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   QRegion  visualRegionForSelection(QHeaderView* theWrappedObject, const QItemSelection&  selection) const;
   void setModel(QHeaderView* theWrappedObject, QAbstractItemModel*  model);
   void mousePressEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   Qt::Orientation  orientation(QHeaderView* theWrappedObject) const;
   void setDefaultSectionSize(QHeaderView* theWrappedObject, int  size);
   void reset(QHeaderView* theWrappedObject);
   void updateGeometries(QHeaderView* theWrappedObject);
   int  length(QHeaderView* theWrappedObject) const;
   void resizeSections(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
   int  sectionViewportPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  hiddenSectionCount(QHeaderView* theWrappedObject) const;
   int  sectionSize(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  defaultSectionSize(QHeaderView* theWrappedObject) const;
   int  sectionSizeHint(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  offset(QHeaderView* theWrappedObject) const;
   bool  isSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex) const;
   Qt::SortOrder  sortIndicatorOrder(QHeaderView* theWrappedObject) const;
   int  visualIndexAt(QHeaderView* theWrappedObject, int  position) const;
   bool  sectionsMoved(QHeaderView* theWrappedObject) const;
   void setHighlightSections(QHeaderView* theWrappedObject, bool  highlight);
   int  visualIndex(QHeaderView* theWrappedObject, int  logicalIndex) const;
   bool  isIndexHidden(QHeaderView* theWrappedObject, const QModelIndex&  index) const;
   QHeaderView::ResizeMode  resizeMode(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  logicalIndex(QHeaderView* theWrappedObject, int  visualIndex) const;
   void moveSection(QHeaderView* theWrappedObject, int  from, int  to);
   void hideSection(QHeaderView* theWrappedObject, int  logicalIndex);
   QSize  sectionSizeFromContents(QHeaderView* theWrappedObject, int  logicalIndex) const;
   bool  isMovable(QHeaderView* theWrappedObject) const;
   int  sortIndicatorSection(QHeaderView* theWrappedObject) const;
   void mouseDoubleClickEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   QSize  sizeHint(QHeaderView* theWrappedObject) const;
   void mouseMoveEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   void setMinimumSectionSize(QHeaderView* theWrappedObject, int  size);
   void setResizeMode(QHeaderView* theWrappedObject, int  logicalIndex, QHeaderView::ResizeMode  mode);
   bool  stretchLastSection(QHeaderView* theWrappedObject) const;
   void doItemsLayout(QHeaderView* theWrappedObject);
   void setResizeMode(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
   int  sectionPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
   bool  cascadingSectionResizes(QHeaderView* theWrappedObject) const;
   QRect  visualRect(QHeaderView* theWrappedObject, const QModelIndex&  index) const;
   void currentChanged(QHeaderView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  old);
   void setMovable(QHeaderView* theWrappedObject, bool  movable);
   bool  viewportEvent(QHeaderView* theWrappedObject, QEvent*  e);
   bool  sectionsHidden(QHeaderView* theWrappedObject) const;
   void showSection(QHeaderView* theWrappedObject, int  logicalIndex);
   QModelIndex  indexAt(QHeaderView* theWrappedObject, const QPoint&  p) const;
   void resizeSection(QHeaderView* theWrappedObject, int  logicalIndex, int  size);
   void dataChanged(QHeaderView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   void setSortIndicatorShown(QHeaderView* theWrappedObject, bool  show);
   void setSortIndicator(QHeaderView* theWrappedObject, int  logicalIndex, Qt::SortOrder  order);
   bool  restoreState(QHeaderView* theWrappedObject, const QByteArray&  state);
   int  count(QHeaderView* theWrappedObject) const;
   void setSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex, bool  hide);
   void paintEvent(QHeaderView* theWrappedObject, QPaintEvent*  e);
   void setDefaultAlignment(QHeaderView* theWrappedObject, Qt::Alignment  alignment);
   int  verticalOffset(QHeaderView* theWrappedObject) const;
   void paintSection(QHeaderView* theWrappedObject, QPainter*  painter, const QRect&  rect, int  logicalIndex) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, const QPoint&  pos) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, int  x, int  y) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, int  position) const;
   void scrollContentsBy(QHeaderView* theWrappedObject, int  dx, int  dy);
   bool  event(QHeaderView* theWrappedObject, QEvent*  e);
   void setSelection(QHeaderView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  flags);
   void scrollTo(QHeaderView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
   void setStretchLastSection(QHeaderView* theWrappedObject, bool  stretch);
   int  minimumSectionSize(QHeaderView* theWrappedObject) const;
};





class PythonQtWrapper_QHelpEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHelpEvent* new_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos);
void delete_QHelpEvent(QHelpEvent* obj) { delete obj; } 
   int  x(QHelpEvent* theWrappedObject) const;
   int  y(QHelpEvent* theWrappedObject) const;
   const QPoint*  globalPos(QHelpEvent* theWrappedObject) const;
   int  globalX(QHelpEvent* theWrappedObject) const;
   int  globalY(QHelpEvent* theWrappedObject) const;
   const QPoint*  pos(QHelpEvent* theWrappedObject) const;
};





class PythonQtWrapper_QHideEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHideEvent* new_QHideEvent();
void delete_QHideEvent(QHideEvent* obj) { delete obj; } 
};





class PythonQtShell_QHoverEvent : public QHoverEvent
{
public:
    PythonQtShell_QHoverEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  oldPos):QHoverEvent(type, pos, oldPos),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QHoverEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHoverEvent* new_QHoverEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  oldPos);
void delete_QHoverEvent(QHoverEvent* obj) { delete obj; } 
   const QPoint*  pos(QHoverEvent* theWrappedObject) const;
   const QPoint*  oldPos(QHoverEvent* theWrappedObject) const;
};





class PythonQtWrapper_QIconDragEvent : public QObject
{ Q_OBJECT
public:
public slots:
QIconDragEvent* new_QIconDragEvent();
void delete_QIconDragEvent(QIconDragEvent* obj) { delete obj; } 
};





class PythonQtShell_QIconEngine : public QIconEngine
{
public:
    PythonQtShell_QIconEngine():QIconEngine(),_wrapper(NULL) {};

virtual void addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual void paint(QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state);
virtual QSize  actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual QPixmap  pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual void addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIconEngine : public QIconEngine
{ public:
inline void promoted_addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { QIconEngine::addFile(fileName, size, mode, state); }
inline QSize  promoted_actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::actualSize(size, mode, state); }
inline QPixmap  promoted_pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::pixmap(size, mode, state); }
inline void promoted_addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state) { QIconEngine::addPixmap(pixmap, mode, state); }
};

class PythonQtWrapper_QIconEngine : public QObject
{ Q_OBJECT
public:
public slots:
QIconEngine* new_QIconEngine();
void delete_QIconEngine(QIconEngine* obj) { delete obj; } 
   void addFile(QIconEngine* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   QSize  actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   QPixmap  pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   void addPixmap(QIconEngine* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state);
};


