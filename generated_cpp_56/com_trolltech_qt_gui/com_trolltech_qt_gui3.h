#include <PythonQt.h>
#include <QObject>
#include <QPainterPath>
#include <QTextCursor>
#include <QVarLengthArray>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qboxlayout.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qclipboard.h>
#include <qcolor.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
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
#include <qguiapplication.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qinputmethod.h>
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
#include <qmetaobject.h>
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
#include <qscreen.h>
#include <qscrollbar.h>
#include <qsessionmanager.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstylehints.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtransform.h>
#include <qtranslator.h>
#include <qvector.h>
#include <qvector3d.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QGraphicsPixmapItem : public QGraphicsPixmapItem
{
public:
    PythonQtShell_QGraphicsPixmapItem(QGraphicsItem*  parent = NULL):QGraphicsPixmapItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent = NULL):QGraphicsPixmapItem(pixmap, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsPixmapItem();

virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual int  type() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsPixmapItem : public QGraphicsPixmapItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsPixmapItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsPixmapItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsPixmapItem::extension(variant); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPixmapItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsPixmapItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsPixmapItem::paint(painter, option, widget); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsPixmapItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsPixmapItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsPixmapItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsPixmapItem::type(); }
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
QGraphicsPixmapItem* new_QGraphicsPixmapItem(QGraphicsItem*  parent = NULL);
QGraphicsPixmapItem* new_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent = NULL);
void delete_QGraphicsPixmapItem(QGraphicsPixmapItem* obj) { delete obj; } 
   QRectF  py_q_boundingRect(QGraphicsPixmapItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_boundingRect());}
   bool  py_q_contains(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_contains(point));}
   QVariant  py_q_extension(QGraphicsPixmapItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_extension(variant));}
   bool  py_q_isObscuredBy(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPointF  offset(QGraphicsPixmapItem* theWrappedObject) const;
   QPainterPath  py_q_opaqueArea(QGraphicsPixmapItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_opaqueArea());}
   void py_q_paint(QGraphicsPixmapItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget){  (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QPixmap  pixmap(QGraphicsPixmapItem* theWrappedObject) const;
   void py_q_setExtension(QGraphicsPixmapItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setOffset(QGraphicsPixmapItem* theWrappedObject, const QPointF&  offset);
   void setOffset(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y);
   void setPixmap(QGraphicsPixmapItem* theWrappedObject, const QPixmap&  pixmap);
   void setShapeMode(QGraphicsPixmapItem* theWrappedObject, QGraphicsPixmapItem::ShapeMode  mode);
   void setTransformationMode(QGraphicsPixmapItem* theWrappedObject, Qt::TransformationMode  mode);
   QPainterPath  py_q_shape(QGraphicsPixmapItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_shape());}
   QGraphicsPixmapItem::ShapeMode  shapeMode(QGraphicsPixmapItem* theWrappedObject) const;
   bool  py_q_supportsExtension(QGraphicsPixmapItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   Qt::TransformationMode  transformationMode(QGraphicsPixmapItem* theWrappedObject) const;
   int  py_q_type(QGraphicsPixmapItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsPolygonItem : public QGraphicsPolygonItem
{
public:
    PythonQtShell_QGraphicsPolygonItem(QGraphicsItem*  parent = NULL):QGraphicsPolygonItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent = NULL):QGraphicsPolygonItem(polygon, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsPolygonItem();

virtual QRectF  boundingRect() const;
virtual bool  contains(const QPointF&  point) const;
virtual QVariant  extension(const QVariant&  variant) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual int  type() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsPolygonItem : public QGraphicsPolygonItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsPolygonItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsPolygonItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsPolygonItem::extension(variant); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPolygonItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsPolygonItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL) { QGraphicsPolygonItem::paint(painter, option, widget); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsPolygonItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsPolygonItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsPolygonItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsPolygonItem::type(); }
};

class PythonQtWrapper_QGraphicsPolygonItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsPolygonItem::Type};
public slots:
QGraphicsPolygonItem* new_QGraphicsPolygonItem(QGraphicsItem*  parent = NULL);
QGraphicsPolygonItem* new_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent = NULL);
void delete_QGraphicsPolygonItem(QGraphicsPolygonItem* obj) { delete obj; } 
   QRectF  boundingRect(QGraphicsPolygonItem* theWrappedObject) const;
   QRectF  py_q_boundingRect(QGraphicsPolygonItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_boundingRect());}
   bool  contains(QGraphicsPolygonItem* theWrappedObject, const QPointF&  point) const;
   bool  py_q_contains(QGraphicsPolygonItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_contains(point));}
   QVariant  extension(QGraphicsPolygonItem* theWrappedObject, const QVariant&  variant) const;
   QVariant  py_q_extension(QGraphicsPolygonItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_extension(variant));}
   Qt::FillRule  fillRule(QGraphicsPolygonItem* theWrappedObject) const;
   bool  py_q_isObscuredBy(QGraphicsPolygonItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPainterPath  py_q_opaqueArea(QGraphicsPolygonItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_opaqueArea());}
   void paint(QGraphicsPolygonItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL);
   void py_q_paint(QGraphicsPolygonItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL){  (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QPolygonF  polygon(QGraphicsPolygonItem* theWrappedObject) const;
   void setExtension(QGraphicsPolygonItem* theWrappedObject, int  extension, const QVariant&  variant);
   void py_q_setExtension(QGraphicsPolygonItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setFillRule(QGraphicsPolygonItem* theWrappedObject, Qt::FillRule  rule);
   void setPolygon(QGraphicsPolygonItem* theWrappedObject, const QPolygonF&  polygon);
   QPainterPath  shape(QGraphicsPolygonItem* theWrappedObject) const;
   QPainterPath  py_q_shape(QGraphicsPolygonItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_shape());}
   bool  supportsExtension(QGraphicsPolygonItem* theWrappedObject, int  extension) const;
   bool  py_q_supportsExtension(QGraphicsPolygonItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   int  type(QGraphicsPolygonItem* theWrappedObject) const;
   int  py_q_type(QGraphicsPolygonItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsProxyWidget : public QGraphicsProxyWidget
{
public:
    PythonQtShell_QGraphicsProxyWidget(QGraphicsItem*  parent = NULL, Qt::WindowFlags  wFlags = Qt::WindowFlags()):QGraphicsProxyWidget(parent, wFlags),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsProxyWidget();

virtual QRectF  boundingRect() const;
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void grabKeyboardEvent(QEvent*  event);
virtual void grabMouseEvent(QEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void initStyleOption(QStyleOption*  option) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual void moveEvent(QGraphicsSceneMoveEvent*  event);
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL);
virtual void polishEvent();
virtual QVariant  propertyChange(const QString&  propertyName, const QVariant&  value);
virtual void resizeEvent(QGraphicsSceneResizeEvent*  event);
virtual bool  sceneEvent(QEvent*  event);
virtual void setGeometry(const QRectF&  rect);
virtual QPainterPath  shape() const;
virtual void showEvent(QShowEvent*  event);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void timerEvent(QTimerEvent*  event);
virtual int  type() const;
virtual void ungrabKeyboardEvent(QEvent*  event);
virtual void ungrabMouseEvent(QEvent*  event);
virtual void updateGeometry();
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);
virtual bool  windowFrameEvent(QEvent*  e);
virtual Qt::WindowFrameSection  windowFrameSectionAt(const QPointF&  pos) const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsProxyWidget : public QGraphicsProxyWidget
{ public:
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { this->contextMenuEvent(event); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { this->dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragMoveEvent(event); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { this->dropEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return this->eventFilter(object, event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline void promoted_grabMouseEvent(QEvent*  event) { this->grabMouseEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { this->hideEvent(event); }
inline void promoted_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { this->hoverEnterEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverLeaveEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverMoveEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { this->inputMethodEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return this->inputMethodQuery(query); }
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return this->itemChange(change, value); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { this->keyReleaseEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline QGraphicsProxyWidget*  promoted_newProxyWidget(const QWidget*  arg__1) { return this->newProxyWidget(arg__1); }
inline void promoted_resizeEvent(QGraphicsSceneResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return this->sizeHint(which, constraint); }
inline void promoted_ungrabMouseEvent(QEvent*  event) { this->ungrabMouseEvent(event); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { this->wheelEvent(event); }
inline void py_q_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsProxyWidget::contextMenuEvent(event); }
inline void py_q_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsProxyWidget::dragEnterEvent(event); }
inline void py_q_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsProxyWidget::dragLeaveEvent(event); }
inline void py_q_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsProxyWidget::dragMoveEvent(event); }
inline void py_q_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsProxyWidget::dropEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QGraphicsProxyWidget::event(event); }
inline bool  py_q_eventFilter(QObject*  object, QEvent*  event) { return QGraphicsProxyWidget::eventFilter(object, event); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QGraphicsProxyWidget::focusInEvent(event); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QGraphicsProxyWidget::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QGraphicsProxyWidget::focusOutEvent(event); }
inline void py_q_grabMouseEvent(QEvent*  event) { QGraphicsProxyWidget::grabMouseEvent(event); }
inline void py_q_hideEvent(QHideEvent*  event) { QGraphicsProxyWidget::hideEvent(event); }
inline void py_q_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverEnterEvent(event); }
inline void py_q_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverLeaveEvent(event); }
inline void py_q_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverMoveEvent(event); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsProxyWidget::inputMethodEvent(event); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsProxyWidget::inputMethodQuery(query); }
inline QVariant  py_q_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsProxyWidget::itemChange(change, value); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QGraphicsProxyWidget::keyPressEvent(event); }
inline void py_q_keyReleaseEvent(QKeyEvent*  event) { QGraphicsProxyWidget::keyReleaseEvent(event); }
inline void py_q_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsProxyWidget::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsProxyWidget::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsProxyWidget::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsProxyWidget::mouseReleaseEvent(event); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsProxyWidget::paint(painter, option, widget); }
inline void py_q_resizeEvent(QGraphicsSceneResizeEvent*  event) { QGraphicsProxyWidget::resizeEvent(event); }
inline void py_q_setGeometry(const QRectF&  rect) { QGraphicsProxyWidget::setGeometry(rect); }
inline void py_q_showEvent(QShowEvent*  event) { QGraphicsProxyWidget::showEvent(event); }
inline QSizeF  py_q_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsProxyWidget::sizeHint(which, constraint); }
inline int  py_q_type() const { return QGraphicsProxyWidget::type(); }
inline void py_q_ungrabMouseEvent(QEvent*  event) { QGraphicsProxyWidget::ungrabMouseEvent(event); }
inline void py_q_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsProxyWidget::wheelEvent(event); }
};

class PythonQtWrapper_QGraphicsProxyWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsProxyWidget::Type};
public slots:
QGraphicsProxyWidget* new_QGraphicsProxyWidget(PythonQtNewOwnerOfThis<QGraphicsItem* >  parent = NULL, Qt::WindowFlags  wFlags = Qt::WindowFlags());
void delete_QGraphicsProxyWidget(QGraphicsProxyWidget* obj) { delete obj; } 
   void contextMenuEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   void py_q_contextMenuEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneContextMenuEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_contextMenuEvent(event));}
   QGraphicsProxyWidget*  createProxyForChildWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  child);
   void dragEnterEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragEnterEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_dragEnterEvent(event));}
   void dragLeaveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragLeaveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_dragLeaveEvent(event));}
   void dragMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void dropEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dropEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_dropEvent(event));}
   bool  py_q_event(QGraphicsProxyWidget* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_event(event));}
   bool  py_q_eventFilter(QGraphicsProxyWidget* theWrappedObject, QObject*  object, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_eventFilter(object, event));}
   void py_q_focusInEvent(QGraphicsProxyWidget* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_focusInEvent(event));}
   bool  py_q_focusNextPrevChild(QGraphicsProxyWidget* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_focusOutEvent(QGraphicsProxyWidget* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_focusOutEvent(event));}
   void py_q_grabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_grabMouseEvent(event));}
   void py_q_hideEvent(QGraphicsProxyWidget* theWrappedObject, QHideEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_hideEvent(event));}
   void hoverEnterEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void py_q_hoverEnterEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_hoverEnterEvent(event));}
   void py_q_hoverLeaveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_hoverLeaveEvent(event));}
   void py_q_hoverMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_hoverMoveEvent(event));}
   void inputMethodEvent(QGraphicsProxyWidget* theWrappedObject, QInputMethodEvent*  event);
   void py_q_inputMethodEvent(QGraphicsProxyWidget* theWrappedObject, QInputMethodEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_inputMethodEvent(event));}
   QVariant  inputMethodQuery(QGraphicsProxyWidget* theWrappedObject, Qt::InputMethodQuery  query) const;
   QVariant  py_q_inputMethodQuery(QGraphicsProxyWidget* theWrappedObject, Qt::InputMethodQuery  query) const{  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_inputMethodQuery(query));}
   QVariant  py_q_itemChange(QGraphicsProxyWidget* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value){  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_itemChange(change, value));}
   void keyPressEvent(QGraphicsProxyWidget* theWrappedObject, QKeyEvent*  event);
   void py_q_keyPressEvent(QGraphicsProxyWidget* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_keyPressEvent(event));}
   void keyReleaseEvent(QGraphicsProxyWidget* theWrappedObject, QKeyEvent*  event);
   void py_q_keyReleaseEvent(QGraphicsProxyWidget* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_keyReleaseEvent(event));}
   void mouseDoubleClickEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseDoubleClickEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   void mouseMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void mousePressEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mousePressEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_mousePressEvent(event));}
   void mouseReleaseEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseReleaseEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   void py_q_paint(QGraphicsProxyWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_paint(painter, option, widget));}
   void py_q_resizeEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_resizeEvent(event));}
   void py_q_setGeometry(QGraphicsProxyWidget* theWrappedObject, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_setGeometry(rect));}
   void setWidget(QGraphicsProxyWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void py_q_showEvent(QGraphicsProxyWidget* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_showEvent(event));}
   QSizeF  py_q_sizeHint(QGraphicsProxyWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const{  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_sizeHint(which, constraint));}
   QRectF  subWidgetRect(QGraphicsProxyWidget* theWrappedObject, const QWidget*  widget) const;
   int  py_q_type(QGraphicsProxyWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_type());}
   void py_q_ungrabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_ungrabMouseEvent(event));}
   void wheelEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneWheelEvent*  event);
   void py_q_wheelEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneWheelEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_wheelEvent(event));}
   QWidget*  widget(QGraphicsProxyWidget* theWrappedObject) const;
};





class PythonQtShell_QGraphicsRectItem : public QGraphicsRectItem
{
public:
    PythonQtShell_QGraphicsRectItem(QGraphicsItem*  parent = NULL):QGraphicsRectItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsRectItem(const QRectF&  rect, QGraphicsItem*  parent = NULL):QGraphicsRectItem(rect, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsRectItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = NULL):QGraphicsRectItem(x, y, w, h, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsRectItem();

virtual QRectF  boundingRect() const;
virtual bool  contains(const QPointF&  point) const;
virtual QVariant  extension(const QVariant&  variant) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual int  type() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsRectItem : public QGraphicsRectItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsRectItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsRectItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsRectItem::extension(variant); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsRectItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsRectItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL) { QGraphicsRectItem::paint(painter, option, widget); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsRectItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsRectItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsRectItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsRectItem::type(); }
};

class PythonQtWrapper_QGraphicsRectItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsRectItem::Type};
public slots:
QGraphicsRectItem* new_QGraphicsRectItem(QGraphicsItem*  parent = NULL);
QGraphicsRectItem* new_QGraphicsRectItem(const QRectF&  rect, QGraphicsItem*  parent = NULL);
QGraphicsRectItem* new_QGraphicsRectItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = NULL);
void delete_QGraphicsRectItem(QGraphicsRectItem* obj) { delete obj; } 
   QRectF  boundingRect(QGraphicsRectItem* theWrappedObject) const;
   QRectF  py_q_boundingRect(QGraphicsRectItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_boundingRect());}
   bool  contains(QGraphicsRectItem* theWrappedObject, const QPointF&  point) const;
   bool  py_q_contains(QGraphicsRectItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_contains(point));}
   QVariant  extension(QGraphicsRectItem* theWrappedObject, const QVariant&  variant) const;
   QVariant  py_q_extension(QGraphicsRectItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_extension(variant));}
   bool  py_q_isObscuredBy(QGraphicsRectItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPainterPath  py_q_opaqueArea(QGraphicsRectItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_opaqueArea());}
   void paint(QGraphicsRectItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL);
   void py_q_paint(QGraphicsRectItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL){  (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QRectF  rect(QGraphicsRectItem* theWrappedObject) const;
   void setExtension(QGraphicsRectItem* theWrappedObject, int  extension, const QVariant&  variant);
   void py_q_setExtension(QGraphicsRectItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setRect(QGraphicsRectItem* theWrappedObject, const QRectF&  rect);
   void setRect(QGraphicsRectItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   QPainterPath  shape(QGraphicsRectItem* theWrappedObject) const;
   QPainterPath  py_q_shape(QGraphicsRectItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_shape());}
   bool  supportsExtension(QGraphicsRectItem* theWrappedObject, int  extension) const;
   bool  py_q_supportsExtension(QGraphicsRectItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   int  type(QGraphicsRectItem* theWrappedObject) const;
   int  py_q_type(QGraphicsRectItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsRotation : public QGraphicsRotation
{
public:
    PythonQtShell_QGraphicsRotation(QObject*  parent = NULL):QGraphicsRotation(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsRotation();

virtual void applyTo(QMatrix4x4*  matrix) const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsRotation : public QGraphicsRotation
{ public:
inline void py_q_applyTo(QMatrix4x4*  matrix) const { QGraphicsRotation::applyTo(matrix); }
};

class PythonQtWrapper_QGraphicsRotation : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsRotation* new_QGraphicsRotation(QObject*  parent = NULL);
void delete_QGraphicsRotation(QGraphicsRotation* obj) { delete obj; } 
   qreal  angle(QGraphicsRotation* theWrappedObject) const;
   void py_q_applyTo(QGraphicsRotation* theWrappedObject, QMatrix4x4*  matrix) const{  (((PythonQtPublicPromoter_QGraphicsRotation*)theWrappedObject)->py_q_applyTo(matrix));}
   QVector3D  axis(QGraphicsRotation* theWrappedObject) const;
   QVector3D  origin(QGraphicsRotation* theWrappedObject) const;
   void setAngle(QGraphicsRotation* theWrappedObject, qreal  arg__1);
   void setAxis(QGraphicsRotation* theWrappedObject, Qt::Axis  axis);
   void setAxis(QGraphicsRotation* theWrappedObject, const QVector3D&  axis);
   void setOrigin(QGraphicsRotation* theWrappedObject, const QVector3D&  point);
};





class PythonQtShell_QGraphicsScale : public QGraphicsScale
{
public:
    PythonQtShell_QGraphicsScale(QObject*  parent = NULL):QGraphicsScale(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsScale();

virtual void applyTo(QMatrix4x4*  matrix) const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsScale : public QGraphicsScale
{ public:
inline void py_q_applyTo(QMatrix4x4*  matrix) const { QGraphicsScale::applyTo(matrix); }
};

class PythonQtWrapper_QGraphicsScale : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsScale* new_QGraphicsScale(QObject*  parent = NULL);
void delete_QGraphicsScale(QGraphicsScale* obj) { delete obj; } 
   void py_q_applyTo(QGraphicsScale* theWrappedObject, QMatrix4x4*  matrix) const{  (((PythonQtPublicPromoter_QGraphicsScale*)theWrappedObject)->py_q_applyTo(matrix));}
   QVector3D  origin(QGraphicsScale* theWrappedObject) const;
   void setOrigin(QGraphicsScale* theWrappedObject, const QVector3D&  point);
   void setXScale(QGraphicsScale* theWrappedObject, qreal  arg__1);
   void setYScale(QGraphicsScale* theWrappedObject, qreal  arg__1);
   void setZScale(QGraphicsScale* theWrappedObject, qreal  arg__1);
   qreal  xScale(QGraphicsScale* theWrappedObject) const;
   qreal  yScale(QGraphicsScale* theWrappedObject) const;
   qreal  zScale(QGraphicsScale* theWrappedObject) const;
};





class PythonQtShell_QGraphicsScene : public QGraphicsScene
{
public:
    PythonQtShell_QGraphicsScene(QObject*  parent = NULL):QGraphicsScene(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent = NULL):QGraphicsScene(sceneRect, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent = NULL):QGraphicsScene(x, y, width, height, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsScene();

virtual void childEvent(QChildEvent*  event);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void drawBackground(QPainter*  painter, const QRectF&  rect);
virtual void drawForeground(QPainter*  painter, const QRectF&  rect);
virtual void drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = NULL);
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
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsScene : public QGraphicsScene
{ public:
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { this->contextMenuEvent(event); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { this->dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragMoveEvent(event); }
inline void promoted_drawBackground(QPainter*  painter, const QRectF&  rect) { this->drawBackground(painter, rect); }
inline void promoted_drawForeground(QPainter*  painter, const QRectF&  rect) { this->drawForeground(painter, rect); }
inline void promoted_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = NULL) { this->drawItems(painter, numItems, items, options, widget); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { this->dropEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  promoted_eventFilter(QObject*  watched, QEvent*  event) { return this->eventFilter(watched, event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline void promoted_helpEvent(QGraphicsSceneHelpEvent*  event) { this->helpEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { this->inputMethodEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { this->keyReleaseEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { this->wheelEvent(event); }
inline void py_q_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsScene::contextMenuEvent(event); }
inline void py_q_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragEnterEvent(event); }
inline void py_q_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragLeaveEvent(event); }
inline void py_q_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragMoveEvent(event); }
inline void py_q_drawBackground(QPainter*  painter, const QRectF&  rect) { QGraphicsScene::drawBackground(painter, rect); }
inline void py_q_drawForeground(QPainter*  painter, const QRectF&  rect) { QGraphicsScene::drawForeground(painter, rect); }
inline void py_q_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = NULL) { QGraphicsScene::drawItems(painter, numItems, items, options, widget); }
inline void py_q_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dropEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QGraphicsScene::event(event); }
inline bool  py_q_eventFilter(QObject*  watched, QEvent*  event) { return QGraphicsScene::eventFilter(watched, event); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QGraphicsScene::focusInEvent(event); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QGraphicsScene::focusOutEvent(event); }
inline void py_q_helpEvent(QGraphicsSceneHelpEvent*  event) { QGraphicsScene::helpEvent(event); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsScene::inputMethodEvent(event); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsScene::inputMethodQuery(query); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QGraphicsScene::keyPressEvent(event); }
inline void py_q_keyReleaseEvent(QKeyEvent*  event) { QGraphicsScene::keyReleaseEvent(event); }
inline void py_q_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseReleaseEvent(event); }
inline void py_q_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsScene::wheelEvent(event); }
};

class PythonQtWrapper_QGraphicsScene : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemIndexMethod SceneLayer )
Q_FLAGS(SceneLayers )
enum ItemIndexMethod{
  BspTreeIndex = QGraphicsScene::BspTreeIndex,   NoIndex = QGraphicsScene::NoIndex};
enum SceneLayer{
  ItemLayer = QGraphicsScene::ItemLayer,   BackgroundLayer = QGraphicsScene::BackgroundLayer,   ForegroundLayer = QGraphicsScene::ForegroundLayer,   AllLayers = QGraphicsScene::AllLayers};
Q_DECLARE_FLAGS(SceneLayers, SceneLayer)
public slots:
QGraphicsScene* new_QGraphicsScene(QObject*  parent = NULL);
QGraphicsScene* new_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent = NULL);
QGraphicsScene* new_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent = NULL);
void delete_QGraphicsScene(QGraphicsScene* obj) { delete obj; } 
   QGraphicsItem*  activePanel(QGraphicsScene* theWrappedObject) const;
   QGraphicsWidget*  activeWindow(QGraphicsScene* theWrappedObject) const;
   QGraphicsEllipseItem*  addEllipse(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsEllipseItem*  addEllipse(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   void addItem(QGraphicsScene* theWrappedObject, PythonQtPassOwnershipToCPP<QGraphicsItem* >  item);
   QGraphicsLineItem*  addLine(QGraphicsScene* theWrappedObject, const QLineF&  line, const QPen&  pen = QPen());
   QGraphicsLineItem*  addLine(QGraphicsScene* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2, const QPen&  pen = QPen());
   QGraphicsPathItem*  addPath(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsPixmapItem*  addPixmap(QGraphicsScene* theWrappedObject, const QPixmap&  pixmap);
   QGraphicsPolygonItem*  addPolygon(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsRectItem*  addRect(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsRectItem*  addRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsSimpleTextItem*  addSimpleText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font = QFont());
   QGraphicsTextItem*  addText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font = QFont());
   QGraphicsProxyWidget*  addWidget(QGraphicsScene* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, Qt::WindowFlags  wFlags = Qt::WindowFlags());
   QBrush  backgroundBrush(QGraphicsScene* theWrappedObject) const;
   int  bspTreeDepth(QGraphicsScene* theWrappedObject) const;
   void clearFocus(QGraphicsScene* theWrappedObject);
   QList<QGraphicsItem* >  collidingItems(QGraphicsScene* theWrappedObject, const QGraphicsItem*  item, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void contextMenuEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   void py_q_contextMenuEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneContextMenuEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_contextMenuEvent(event));}
   QGraphicsItemGroup*  createItemGroup(QGraphicsScene* theWrappedObject, const QList<QGraphicsItem* >&  items);
   void destroyItemGroup(QGraphicsScene* theWrappedObject, QGraphicsItemGroup*  group);
   void dragEnterEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragEnterEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_dragEnterEvent(event));}
   void dragLeaveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragLeaveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_dragLeaveEvent(event));}
   void dragMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void drawBackground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void py_q_drawBackground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_drawBackground(painter, rect));}
   void drawForeground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void py_q_drawForeground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_drawForeground(painter, rect));}
   void drawItems(QGraphicsScene* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = NULL);
   void py_q_drawItems(QGraphicsScene* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = NULL){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_drawItems(painter, numItems, items, options, widget));}
   void dropEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dropEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_dropEvent(event));}
   bool  py_q_event(QGraphicsScene* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_event(event));}
   bool  py_q_eventFilter(QGraphicsScene* theWrappedObject, QObject*  watched, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_eventFilter(watched, event));}
   void focusInEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event);
   void py_q_focusInEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_focusInEvent(event));}
   QGraphicsItem*  focusItem(QGraphicsScene* theWrappedObject) const;
   void focusOutEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event);
   void py_q_focusOutEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_focusOutEvent(event));}
   QFont  font(QGraphicsScene* theWrappedObject) const;
   QBrush  foregroundBrush(QGraphicsScene* theWrappedObject) const;
   bool  hasFocus(QGraphicsScene* theWrappedObject) const;
   qreal  height(QGraphicsScene* theWrappedObject) const;
   void helpEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneHelpEvent*  event);
   void py_q_helpEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneHelpEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_helpEvent(event));}
   void inputMethodEvent(QGraphicsScene* theWrappedObject, QInputMethodEvent*  event);
   void py_q_inputMethodEvent(QGraphicsScene* theWrappedObject, QInputMethodEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_inputMethodEvent(event));}
   QVariant  inputMethodQuery(QGraphicsScene* theWrappedObject, Qt::InputMethodQuery  query) const;
   QVariant  py_q_inputMethodQuery(QGraphicsScene* theWrappedObject, Qt::InputMethodQuery  query) const{  return (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_inputMethodQuery(query));}
   void invalidate(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsScene::SceneLayers  layers = QGraphicsScene::AllLayers);
   bool  isActive(QGraphicsScene* theWrappedObject) const;
   bool  isSortCacheEnabled(QGraphicsScene* theWrappedObject) const;
   QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, const QPointF&  pos, const QTransform&  deviceTransform) const;
   QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, const QTransform&  deviceTransform) const;
   QGraphicsScene::ItemIndexMethod  itemIndexMethod(QGraphicsScene* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, Qt::SortOrder  order = Qt::DescendingOrder) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape, Qt::SortOrder  order = Qt::DescendingOrder, const QTransform&  deviceTransform = QTransform()) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPointF&  pos, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape, Qt::SortOrder  order = Qt::DescendingOrder, const QTransform&  deviceTransform = QTransform()) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape, Qt::SortOrder  order = Qt::DescendingOrder, const QTransform&  deviceTransform = QTransform()) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QRectF&  rect, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape, Qt::SortOrder  order = Qt::DescendingOrder, const QTransform&  deviceTransform = QTransform()) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform = QTransform()) const;
   QRectF  itemsBoundingRect(QGraphicsScene* theWrappedObject) const;
   void keyPressEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event);
   void py_q_keyPressEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_keyPressEvent(event));}
   void keyReleaseEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event);
   void py_q_keyReleaseEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_keyReleaseEvent(event));}
   qreal  minimumRenderSize(QGraphicsScene* theWrappedObject) const;
   void mouseDoubleClickEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseDoubleClickEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   QGraphicsItem*  mouseGrabberItem(QGraphicsScene* theWrappedObject) const;
   void mouseMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void mousePressEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mousePressEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_mousePressEvent(event));}
   void mouseReleaseEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseReleaseEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   QPalette  palette(QGraphicsScene* theWrappedObject) const;
   void removeItem(QGraphicsScene* theWrappedObject, PythonQtPassOwnershipToPython<QGraphicsItem* >  item);
   void render(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  target = QRectF(), const QRectF&  source = QRectF(), Qt::AspectRatioMode  aspectRatioMode = Qt::KeepAspectRatio);
   QRectF  sceneRect(QGraphicsScene* theWrappedObject) const;
   QList<QGraphicsItem* >  selectedItems(QGraphicsScene* theWrappedObject) const;
   QPainterPath  selectionArea(QGraphicsScene* theWrappedObject) const;
   bool  sendEvent(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, QEvent*  event);
   void setActivePanel(QGraphicsScene* theWrappedObject, QGraphicsItem*  item);
   void setActiveWindow(QGraphicsScene* theWrappedObject, QGraphicsWidget*  widget);
   void setBackgroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush);
   void setBspTreeDepth(QGraphicsScene* theWrappedObject, int  depth);
   void setFocus(QGraphicsScene* theWrappedObject, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   void setFocusItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   void setFont(QGraphicsScene* theWrappedObject, const QFont&  font);
   void setForegroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush);
   void setItemIndexMethod(QGraphicsScene* theWrappedObject, QGraphicsScene::ItemIndexMethod  method);
   void setMinimumRenderSize(QGraphicsScene* theWrappedObject, qreal  minSize);
   void setPalette(QGraphicsScene* theWrappedObject, const QPalette&  palette);
   void setSceneRect(QGraphicsScene* theWrappedObject, const QRectF&  rect);
   void setSceneRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape, const QTransform&  deviceTransform = QTransform());
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionOperation  selectionOperation, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape, const QTransform&  deviceTransform = QTransform());
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QTransform&  deviceTransform);
   void setSortCacheEnabled(QGraphicsScene* theWrappedObject, bool  enabled);
   void setStickyFocus(QGraphicsScene* theWrappedObject, bool  enabled);
   void setStyle(QGraphicsScene* theWrappedObject, QStyle*  style);
   bool  stickyFocus(QGraphicsScene* theWrappedObject) const;
   QStyle*  style(QGraphicsScene* theWrappedObject) const;
   void update(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   QList<QGraphicsView* >  views(QGraphicsScene* theWrappedObject) const;
   void wheelEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneWheelEvent*  event);
   void py_q_wheelEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneWheelEvent*  event){  (((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->py_q_wheelEvent(event));}
   qreal  width(QGraphicsScene* theWrappedObject) const;
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
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   QPointF  pos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   QGraphicsSceneContextMenuEvent::Reason  reason(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   void setModifiers(QGraphicsSceneContextMenuEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos);
   void setReason(QGraphicsSceneContextMenuEvent* theWrappedObject, QGraphicsSceneContextMenuEvent::Reason  reason);
   void setScenePos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos);
   void setScreenPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPoint&  pos);
};





class PythonQtWrapper_QGraphicsSceneDragDropEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneDragDropEvent* new_QGraphicsSceneDragDropEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneDragDropEvent(QGraphicsSceneDragDropEvent* obj) { delete obj; } 
   void acceptProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject);
   Qt::MouseButtons  buttons(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::DropAction  dropAction(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   const QMimeData*  mimeData(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   QPointF  pos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::DropActions  possibleActions(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::DropAction  proposedAction(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   void setButtons(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::MouseButtons  buttons);
   void setDropAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action);
   void setModifiers(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos);
   void setPossibleActions(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropActions  actions);
   void setProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action);
   void setScenePos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos);
   void setScreenPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPoint&  pos);
   QWidget*  source(QGraphicsSceneDragDropEvent* theWrappedObject) const;
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
   QPointF  scenePos(QGraphicsSceneHelpEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneHelpEvent* theWrappedObject) const;
   void setScenePos(QGraphicsSceneHelpEvent* theWrappedObject, const QPointF&  pos);
   void setScreenPos(QGraphicsSceneHelpEvent* theWrappedObject, const QPoint&  pos);
};





class PythonQtWrapper_QGraphicsSceneHoverEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneHoverEvent* new_QGraphicsSceneHoverEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneHoverEvent(QGraphicsSceneHoverEvent* obj) { delete obj; } 
   QPointF  lastPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPointF  lastScenePos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPoint  lastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPointF  pos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   void setLastPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   void setLastScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   void setLastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos);
   void setModifiers(QGraphicsSceneHoverEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   void setScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   void setScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos);
};





class PythonQtWrapper_QGraphicsSceneMouseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneMouseEvent* new_QGraphicsSceneMouseEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneMouseEvent(QGraphicsSceneMouseEvent* obj) { delete obj; } 
   Qt::MouseButton  button(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPointF  buttonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
   QPointF  buttonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
   QPoint  buttonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
   Qt::MouseButtons  buttons(QGraphicsSceneMouseEvent* theWrappedObject) const;
   Qt::MouseEventFlags  flags(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPointF  lastPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPointF  lastScenePos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPoint  lastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPointF  pos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setButton(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button);
   void setButtonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos);
   void setButtonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos);
   void setButtonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPoint&  pos);
   void setButtons(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButtons  buttons);
   void setFlags(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseEventFlags  arg__1);
   void setLastPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   void setLastScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   void setLastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos);
   void setModifiers(QGraphicsSceneMouseEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   void setScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   void setScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos);
   void setSource(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseEventSource  source);
   Qt::MouseEventSource  source(QGraphicsSceneMouseEvent* theWrappedObject) const;
};





class PythonQtWrapper_QGraphicsSceneMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneMoveEvent* new_QGraphicsSceneMoveEvent();
void delete_QGraphicsSceneMoveEvent(QGraphicsSceneMoveEvent* obj) { delete obj; } 
   QPointF  newPos(QGraphicsSceneMoveEvent* theWrappedObject) const;
   QPointF  oldPos(QGraphicsSceneMoveEvent* theWrappedObject) const;
   void setNewPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos);
   void setOldPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos);
};





class PythonQtWrapper_QGraphicsSceneResizeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneResizeEvent* new_QGraphicsSceneResizeEvent();
void delete_QGraphicsSceneResizeEvent(QGraphicsSceneResizeEvent* obj) { delete obj; } 
   QSizeF  newSize(QGraphicsSceneResizeEvent* theWrappedObject) const;
   QSizeF  oldSize(QGraphicsSceneResizeEvent* theWrappedObject) const;
   void setNewSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size);
   void setOldSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size);
};





class PythonQtWrapper_QGraphicsSceneWheelEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneWheelEvent* new_QGraphicsSceneWheelEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneWheelEvent(QGraphicsSceneWheelEvent* obj) { delete obj; } 
   Qt::MouseButtons  buttons(QGraphicsSceneWheelEvent* theWrappedObject) const;
   int  delta(QGraphicsSceneWheelEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneWheelEvent* theWrappedObject) const;
   Qt::Orientation  orientation(QGraphicsSceneWheelEvent* theWrappedObject) const;
   QPointF  pos(QGraphicsSceneWheelEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneWheelEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneWheelEvent* theWrappedObject) const;
   void setButtons(QGraphicsSceneWheelEvent* theWrappedObject, Qt::MouseButtons  buttons);
   void setDelta(QGraphicsSceneWheelEvent* theWrappedObject, int  delta);
   void setModifiers(QGraphicsSceneWheelEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setOrientation(QGraphicsSceneWheelEvent* theWrappedObject, Qt::Orientation  orientation);
   void setPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos);
   void setScenePos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos);
   void setScreenPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPoint&  pos);
};





class PythonQtShell_QGraphicsSimpleTextItem : public QGraphicsSimpleTextItem
{
public:
    PythonQtShell_QGraphicsSimpleTextItem(QGraphicsItem*  parent = NULL):QGraphicsSimpleTextItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsSimpleTextItem(const QString&  text, QGraphicsItem*  parent = NULL):QGraphicsSimpleTextItem(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsSimpleTextItem();

virtual QRectF  boundingRect() const;
virtual bool  contains(const QPointF&  point) const;
virtual QVariant  extension(const QVariant&  variant) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual int  type() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsSimpleTextItem : public QGraphicsSimpleTextItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsSimpleTextItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsSimpleTextItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsSimpleTextItem::extension(variant); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsSimpleTextItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsSimpleTextItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsSimpleTextItem::paint(painter, option, widget); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsSimpleTextItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsSimpleTextItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsSimpleTextItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsSimpleTextItem::type(); }
};

class PythonQtWrapper_QGraphicsSimpleTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsSimpleTextItem::Type};
public slots:
QGraphicsSimpleTextItem* new_QGraphicsSimpleTextItem(QGraphicsItem*  parent = NULL);
QGraphicsSimpleTextItem* new_QGraphicsSimpleTextItem(const QString&  text, QGraphicsItem*  parent = NULL);
void delete_QGraphicsSimpleTextItem(QGraphicsSimpleTextItem* obj) { delete obj; } 
   QRectF  boundingRect(QGraphicsSimpleTextItem* theWrappedObject) const;
   QRectF  py_q_boundingRect(QGraphicsSimpleTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_boundingRect());}
   bool  contains(QGraphicsSimpleTextItem* theWrappedObject, const QPointF&  point) const;
   bool  py_q_contains(QGraphicsSimpleTextItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_contains(point));}
   QVariant  extension(QGraphicsSimpleTextItem* theWrappedObject, const QVariant&  variant) const;
   QVariant  py_q_extension(QGraphicsSimpleTextItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_extension(variant));}
   QFont  font(QGraphicsSimpleTextItem* theWrappedObject) const;
   bool  py_q_isObscuredBy(QGraphicsSimpleTextItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPainterPath  py_q_opaqueArea(QGraphicsSimpleTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_opaqueArea());}
   void paint(QGraphicsSimpleTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   void py_q_paint(QGraphicsSimpleTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget){  (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   void setExtension(QGraphicsSimpleTextItem* theWrappedObject, int  extension, const QVariant&  variant);
   void py_q_setExtension(QGraphicsSimpleTextItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setFont(QGraphicsSimpleTextItem* theWrappedObject, const QFont&  font);
   void setText(QGraphicsSimpleTextItem* theWrappedObject, const QString&  text);
   QPainterPath  shape(QGraphicsSimpleTextItem* theWrappedObject) const;
   QPainterPath  py_q_shape(QGraphicsSimpleTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_shape());}
   bool  supportsExtension(QGraphicsSimpleTextItem* theWrappedObject, int  extension) const;
   bool  py_q_supportsExtension(QGraphicsSimpleTextItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   QString  text(QGraphicsSimpleTextItem* theWrappedObject) const;
   int  type(QGraphicsSimpleTextItem* theWrappedObject) const;
   int  py_q_type(QGraphicsSimpleTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsTextItem : public QGraphicsTextItem
{
public:
    PythonQtShell_QGraphicsTextItem(QGraphicsItem*  parent = NULL):QGraphicsTextItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = NULL):QGraphicsTextItem(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsTextItem();

virtual QRectF  boundingRect() const;
virtual void childEvent(QChildEvent*  event);
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual bool  event(QEvent*  ev);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual bool  sceneEvent(QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual void timerEvent(QTimerEvent*  event);
virtual int  type() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsTextItem : public QGraphicsTextItem
{ public:
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { this->contextMenuEvent(event); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { this->dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragMoveEvent(event); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { this->dropEvent(event); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline void promoted_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { this->hoverEnterEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverLeaveEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverMoveEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { this->inputMethodEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return this->inputMethodQuery(query); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { this->keyReleaseEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline bool  promoted_sceneEvent(QEvent*  event) { return this->sceneEvent(event); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsTextItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsTextItem::contains(point); }
inline void py_q_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsTextItem::contextMenuEvent(event); }
inline void py_q_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dragEnterEvent(event); }
inline void py_q_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dragLeaveEvent(event); }
inline void py_q_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dragMoveEvent(event); }
inline void py_q_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dropEvent(event); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsTextItem::extension(variant); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QGraphicsTextItem::focusInEvent(event); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QGraphicsTextItem::focusOutEvent(event); }
inline void py_q_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsTextItem::hoverEnterEvent(event); }
inline void py_q_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsTextItem::hoverLeaveEvent(event); }
inline void py_q_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsTextItem::hoverMoveEvent(event); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsTextItem::inputMethodEvent(event); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsTextItem::inputMethodQuery(query); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsTextItem::isObscuredBy(item); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QGraphicsTextItem::keyPressEvent(event); }
inline void py_q_keyReleaseEvent(QKeyEvent*  event) { QGraphicsTextItem::keyReleaseEvent(event); }
inline void py_q_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mouseReleaseEvent(event); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsTextItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsTextItem::paint(painter, option, widget); }
inline bool  py_q_sceneEvent(QEvent*  event) { return QGraphicsTextItem::sceneEvent(event); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsTextItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsTextItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsTextItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsTextItem::type(); }
};

class PythonQtWrapper_QGraphicsTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsTextItem::Type};
public slots:
QGraphicsTextItem* new_QGraphicsTextItem(QGraphicsItem*  parent = NULL);
QGraphicsTextItem* new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = NULL);
void delete_QGraphicsTextItem(QGraphicsTextItem* obj) { delete obj; } 
   void adjustSize(QGraphicsTextItem* theWrappedObject);
   QRectF  boundingRect(QGraphicsTextItem* theWrappedObject) const;
   QRectF  py_q_boundingRect(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_boundingRect());}
   bool  contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const;
   bool  py_q_contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_contains(point));}
   void contextMenuEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   void py_q_contextMenuEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_contextMenuEvent(event));}
   QColor  defaultTextColor(QGraphicsTextItem* theWrappedObject) const;
   QTextDocument*  document(QGraphicsTextItem* theWrappedObject) const;
   void dragEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_dragEnterEvent(event));}
   void dragLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_dragLeaveEvent(event));}
   void dragMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void dropEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dropEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_dropEvent(event));}
   QVariant  extension(QGraphicsTextItem* theWrappedObject, const QVariant&  variant) const;
   QVariant  py_q_extension(QGraphicsTextItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_extension(variant));}
   void focusInEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event);
   void py_q_focusInEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_focusInEvent(event));}
   void focusOutEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event);
   void py_q_focusOutEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_focusOutEvent(event));}
   QFont  font(QGraphicsTextItem* theWrappedObject) const;
   void hoverEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void py_q_hoverEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_hoverEnterEvent(event));}
   void hoverLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void py_q_hoverLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_hoverLeaveEvent(event));}
   void hoverMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void py_q_hoverMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_hoverMoveEvent(event));}
   void inputMethodEvent(QGraphicsTextItem* theWrappedObject, QInputMethodEvent*  event);
   void py_q_inputMethodEvent(QGraphicsTextItem* theWrappedObject, QInputMethodEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_inputMethodEvent(event));}
   QVariant  inputMethodQuery(QGraphicsTextItem* theWrappedObject, Qt::InputMethodQuery  query) const;
   QVariant  py_q_inputMethodQuery(QGraphicsTextItem* theWrappedObject, Qt::InputMethodQuery  query) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_inputMethodQuery(query));}
   bool  isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const;
   bool  py_q_isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   void keyPressEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event);
   void py_q_keyPressEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_keyPressEvent(event));}
   void keyReleaseEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event);
   void py_q_keyReleaseEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_keyReleaseEvent(event));}
   void mouseDoubleClickEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseDoubleClickEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   void mouseMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void mousePressEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mousePressEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_mousePressEvent(event));}
   void mouseReleaseEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseReleaseEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   QPainterPath  opaqueArea(QGraphicsTextItem* theWrappedObject) const;
   QPainterPath  py_q_opaqueArea(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_opaqueArea());}
   bool  openExternalLinks(QGraphicsTextItem* theWrappedObject) const;
   void paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   void py_q_paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   bool  sceneEvent(QGraphicsTextItem* theWrappedObject, QEvent*  event);
   bool  py_q_sceneEvent(QGraphicsTextItem* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_sceneEvent(event));}
   void setDefaultTextColor(QGraphicsTextItem* theWrappedObject, const QColor&  c);
   void setDocument(QGraphicsTextItem* theWrappedObject, QTextDocument*  document);
   void setExtension(QGraphicsTextItem* theWrappedObject, int  extension, const QVariant&  variant);
   void py_q_setExtension(QGraphicsTextItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setFont(QGraphicsTextItem* theWrappedObject, const QFont&  font);
   void setHtml(QGraphicsTextItem* theWrappedObject, const QString&  html);
   void setOpenExternalLinks(QGraphicsTextItem* theWrappedObject, bool  open);
   void setPlainText(QGraphicsTextItem* theWrappedObject, const QString&  text);
   void setTabChangesFocus(QGraphicsTextItem* theWrappedObject, bool  b);
   void setTextCursor(QGraphicsTextItem* theWrappedObject, const QTextCursor&  cursor);
   void setTextInteractionFlags(QGraphicsTextItem* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setTextWidth(QGraphicsTextItem* theWrappedObject, qreal  width);
   QPainterPath  shape(QGraphicsTextItem* theWrappedObject) const;
   QPainterPath  py_q_shape(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_shape());}
   bool  supportsExtension(QGraphicsTextItem* theWrappedObject, int  extension) const;
   bool  py_q_supportsExtension(QGraphicsTextItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   bool  tabChangesFocus(QGraphicsTextItem* theWrappedObject) const;
   QTextCursor  textCursor(QGraphicsTextItem* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QGraphicsTextItem* theWrappedObject) const;
   qreal  textWidth(QGraphicsTextItem* theWrappedObject) const;
   QString  toHtml(QGraphicsTextItem* theWrappedObject) const;
   QString  toPlainText(QGraphicsTextItem* theWrappedObject) const;
   int  type(QGraphicsTextItem* theWrappedObject) const;
   int  py_q_type(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsTransform : public QGraphicsTransform
{
public:
    PythonQtShell_QGraphicsTransform(QObject*  parent = NULL):QGraphicsTransform(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsTransform();

virtual void applyTo(QMatrix4x4*  matrix) const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsTransform : public QGraphicsTransform
{ public:
inline void promoted_update() { this->update(); }
inline void py_q_applyTo(QMatrix4x4*  matrix) const { this->applyTo(matrix); }
};

class PythonQtWrapper_QGraphicsTransform : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsTransform* new_QGraphicsTransform(QObject*  parent = NULL);
void delete_QGraphicsTransform(QGraphicsTransform* obj) { delete obj; } 
   void applyTo(QGraphicsTransform* theWrappedObject, QMatrix4x4*  matrix) const;
   void py_q_applyTo(QGraphicsTransform* theWrappedObject, QMatrix4x4*  matrix) const{  (((PythonQtPublicPromoter_QGraphicsTransform*)theWrappedObject)->py_q_applyTo(matrix));}
};





class PythonQtShell_QGraphicsView : public QGraphicsView
{
public:
    PythonQtShell_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent = NULL):QGraphicsView(scene, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsView(QWidget*  parent = NULL):QGraphicsView(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsView();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void drawBackground(QPainter*  painter, const QRectF&  rect);
virtual void drawForeground(QPainter*  painter, const QRectF&  rect);
virtual void drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void setVisible(bool  visible);
virtual void setupViewport(QWidget*  widget);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual bool  viewportEvent(QEvent*  event);
virtual QSize  viewportSizeHint() const;
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsView : public QGraphicsView
{ public:
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { this->contextMenuEvent(event); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  event) { this->dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  event) { this->dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { this->dragMoveEvent(event); }
inline void promoted_drawBackground(QPainter*  painter, const QRectF&  rect) { this->drawBackground(painter, rect); }
inline void promoted_drawForeground(QPainter*  painter, const QRectF&  rect) { this->drawForeground(painter, rect); }
inline void promoted_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options) { this->drawItems(painter, numItems, items, options); }
inline void promoted_dropEvent(QDropEvent*  event) { this->dropEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { this->inputMethodEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { this->keyReleaseEvent(event); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline void promoted_setupViewport(QWidget*  widget) { this->setupViewport(widget); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline bool  promoted_viewportEvent(QEvent*  event) { return this->viewportEvent(event); }
inline void promoted_wheelEvent(QWheelEvent*  event) { this->wheelEvent(event); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  event) { QGraphicsView::contextMenuEvent(event); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  event) { QGraphicsView::dragEnterEvent(event); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  event) { QGraphicsView::dragLeaveEvent(event); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  event) { QGraphicsView::dragMoveEvent(event); }
inline void py_q_drawBackground(QPainter*  painter, const QRectF&  rect) { QGraphicsView::drawBackground(painter, rect); }
inline void py_q_drawForeground(QPainter*  painter, const QRectF&  rect) { QGraphicsView::drawForeground(painter, rect); }
inline void py_q_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options) { QGraphicsView::drawItems(painter, numItems, items, options); }
inline void py_q_dropEvent(QDropEvent*  event) { QGraphicsView::dropEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QGraphicsView::event(event); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QGraphicsView::focusInEvent(event); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QGraphicsView::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QGraphicsView::focusOutEvent(event); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsView::inputMethodEvent(event); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsView::inputMethodQuery(query); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QGraphicsView::keyPressEvent(event); }
inline void py_q_keyReleaseEvent(QKeyEvent*  event) { QGraphicsView::keyReleaseEvent(event); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  event) { QGraphicsView::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QMouseEvent*  event) { QGraphicsView::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QMouseEvent*  event) { QGraphicsView::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  event) { QGraphicsView::mouseReleaseEvent(event); }
inline void py_q_paintEvent(QPaintEvent*  event) { QGraphicsView::paintEvent(event); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QGraphicsView::resizeEvent(event); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QGraphicsView::scrollContentsBy(dx, dy); }
inline void py_q_setupViewport(QWidget*  widget) { QGraphicsView::setupViewport(widget); }
inline void py_q_showEvent(QShowEvent*  event) { QGraphicsView::showEvent(event); }
inline QSize  py_q_sizeHint() const { return QGraphicsView::sizeHint(); }
inline bool  py_q_viewportEvent(QEvent*  event) { return QGraphicsView::viewportEvent(event); }
inline void py_q_wheelEvent(QWheelEvent*  event) { QGraphicsView::wheelEvent(event); }
};

class PythonQtWrapper_QGraphicsView : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CacheModeFlag OptimizationFlag )
Q_FLAGS(CacheMode OptimizationFlags )
enum CacheModeFlag{
  CacheNone = QGraphicsView::CacheNone,   CacheBackground = QGraphicsView::CacheBackground};
enum OptimizationFlag{
  DontClipPainter = QGraphicsView::DontClipPainter,   DontSavePainterState = QGraphicsView::DontSavePainterState,   DontAdjustForAntialiasing = QGraphicsView::DontAdjustForAntialiasing,   IndirectPainting = QGraphicsView::IndirectPainting};
Q_DECLARE_FLAGS(CacheMode, CacheModeFlag)
Q_DECLARE_FLAGS(OptimizationFlags, OptimizationFlag)
public slots:
QGraphicsView* new_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent = NULL);
QGraphicsView* new_QGraphicsView(QWidget*  parent = NULL);
void delete_QGraphicsView(QGraphicsView* obj) { delete obj; } 
   Qt::Alignment  alignment(QGraphicsView* theWrappedObject) const;
   QBrush  backgroundBrush(QGraphicsView* theWrappedObject) const;
   QGraphicsView::CacheMode  cacheMode(QGraphicsView* theWrappedObject) const;
   void centerOn(QGraphicsView* theWrappedObject, const QGraphicsItem*  item);
   void centerOn(QGraphicsView* theWrappedObject, const QPointF&  pos);
   void centerOn(QGraphicsView* theWrappedObject, qreal  x, qreal  y);
   void py_q_contextMenuEvent(QGraphicsView* theWrappedObject, QContextMenuEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_contextMenuEvent(event));}
   void py_q_dragEnterEvent(QGraphicsView* theWrappedObject, QDragEnterEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_dragEnterEvent(event));}
   void py_q_dragLeaveEvent(QGraphicsView* theWrappedObject, QDragLeaveEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_dragLeaveEvent(event));}
   QGraphicsView::DragMode  dragMode(QGraphicsView* theWrappedObject) const;
   void py_q_dragMoveEvent(QGraphicsView* theWrappedObject, QDragMoveEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void drawBackground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void py_q_drawBackground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_drawBackground(painter, rect));}
   void drawForeground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void py_q_drawForeground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_drawForeground(painter, rect));}
   void drawItems(QGraphicsView* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options);
   void py_q_drawItems(QGraphicsView* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_drawItems(painter, numItems, items, options));}
   void py_q_dropEvent(QGraphicsView* theWrappedObject, QDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_dropEvent(event));}
   void ensureVisible(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, int  xmargin = 50, int  ymargin = 50);
   void ensureVisible(QGraphicsView* theWrappedObject, const QRectF&  rect, int  xmargin = 50, int  ymargin = 50);
   void ensureVisible(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin = 50, int  ymargin = 50);
   bool  py_q_event(QGraphicsView* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_event(event));}
   void fitInView(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void fitInView(QGraphicsView* theWrappedObject, const QRectF&  rect, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void fitInView(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void py_q_focusInEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_focusInEvent(event));}
   bool  py_q_focusNextPrevChild(QGraphicsView* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_focusOutEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_focusOutEvent(event));}
   QBrush  foregroundBrush(QGraphicsView* theWrappedObject) const;
   void py_q_inputMethodEvent(QGraphicsView* theWrappedObject, QInputMethodEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_inputMethodEvent(event));}
   QVariant  py_q_inputMethodQuery(QGraphicsView* theWrappedObject, Qt::InputMethodQuery  query) const{  return (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_inputMethodQuery(query));}
   bool  isInteractive(QGraphicsView* theWrappedObject) const;
   bool  isTransformed(QGraphicsView* theWrappedObject) const;
   QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
   QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, int  x, int  y) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPolygon&  polygon, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QRect&  rect, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void py_q_keyPressEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_keyPressEvent(event));}
   void py_q_keyReleaseEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_keyReleaseEvent(event));}
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
   void py_q_mouseDoubleClickEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   void py_q_mouseMoveEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void py_q_mousePressEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_mousePressEvent(event));}
   void py_q_mouseReleaseEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   QGraphicsView::OptimizationFlags  optimizationFlags(QGraphicsView* theWrappedObject) const;
   void py_q_paintEvent(QGraphicsView* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_paintEvent(event));}
   void render(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  target = QRectF(), const QRect&  source = QRect(), Qt::AspectRatioMode  aspectRatioMode = Qt::KeepAspectRatio);
   QPainter::RenderHints  renderHints(QGraphicsView* theWrappedObject) const;
   void resetCachedContent(QGraphicsView* theWrappedObject);
   void resetMatrix(QGraphicsView* theWrappedObject);
   void resetTransform(QGraphicsView* theWrappedObject);
   QGraphicsView::ViewportAnchor  resizeAnchor(QGraphicsView* theWrappedObject) const;
   void py_q_resizeEvent(QGraphicsView* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_resizeEvent(event));}
   void rotate(QGraphicsView* theWrappedObject, qreal  angle);
   QRect  rubberBandRect(QGraphicsView* theWrappedObject) const;
   Qt::ItemSelectionMode  rubberBandSelectionMode(QGraphicsView* theWrappedObject) const;
   void scale(QGraphicsView* theWrappedObject, qreal  sx, qreal  sy);
   QGraphicsScene*  scene(QGraphicsView* theWrappedObject) const;
   QRectF  sceneRect(QGraphicsView* theWrappedObject) const;
   void py_q_scrollContentsBy(QGraphicsView* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
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
   void py_q_setupViewport(QGraphicsView* theWrappedObject, QWidget*  widget){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_setupViewport(widget));}
   void shear(QGraphicsView* theWrappedObject, qreal  sh, qreal  sv);
   void py_q_showEvent(QGraphicsView* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_showEvent(event));}
   QSize  py_q_sizeHint(QGraphicsView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_sizeHint());}
   QTransform  transform(QGraphicsView* theWrappedObject) const;
   QGraphicsView::ViewportAnchor  transformationAnchor(QGraphicsView* theWrappedObject) const;
   void translate(QGraphicsView* theWrappedObject, qreal  dx, qreal  dy);
   bool  py_q_viewportEvent(QGraphicsView* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_viewportEvent(event));}
   QTransform  viewportTransform(QGraphicsView* theWrappedObject) const;
   QGraphicsView::ViewportUpdateMode  viewportUpdateMode(QGraphicsView* theWrappedObject) const;
   void py_q_wheelEvent(QGraphicsView* theWrappedObject, QWheelEvent*  event){  (((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->py_q_wheelEvent(event));}
};





class PythonQtShell_QGraphicsWidget : public QGraphicsWidget
{
public:
    PythonQtShell_QGraphicsWidget(QGraphicsItem*  parent = NULL, Qt::WindowFlags  wFlags = Qt::WindowFlags()):QGraphicsWidget(parent, wFlags),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsWidget();

virtual QRectF  boundingRect() const;
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void grabKeyboardEvent(QEvent*  event);
virtual void grabMouseEvent(QEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void initStyleOption(QStyleOption*  option) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void moveEvent(QGraphicsSceneMoveEvent*  event);
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL);
virtual void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL);
virtual void polishEvent();
virtual QVariant  propertyChange(const QString&  propertyName, const QVariant&  value);
virtual void resizeEvent(QGraphicsSceneResizeEvent*  event);
virtual bool  sceneEvent(QEvent*  event);
virtual void setGeometry(const QRectF&  rect);
virtual QPainterPath  shape() const;
virtual void showEvent(QShowEvent*  event);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void timerEvent(QTimerEvent*  event);
virtual int  type() const;
virtual void ungrabKeyboardEvent(QEvent*  event);
virtual void ungrabMouseEvent(QEvent*  event);
virtual void updateGeometry();
virtual bool  windowFrameEvent(QEvent*  e);
virtual Qt::WindowFrameSection  windowFrameSectionAt(const QPointF&  pos) const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsWidget : public QGraphicsWidget
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { this->closeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline void promoted_grabKeyboardEvent(QEvent*  event) { this->grabKeyboardEvent(event); }
inline void promoted_grabMouseEvent(QEvent*  event) { this->grabMouseEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { this->hideEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverLeaveEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverMoveEvent(event); }
inline void promoted_initStyleOption(QStyleOption*  option) const { this->initStyleOption(option); }
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return this->itemChange(change, value); }
inline void promoted_moveEvent(QGraphicsSceneMoveEvent*  event) { this->moveEvent(event); }
inline void promoted_polishEvent() { this->polishEvent(); }
inline QVariant  promoted_propertyChange(const QString&  propertyName, const QVariant&  value) { return this->propertyChange(propertyName, value); }
inline void promoted_resizeEvent(QGraphicsSceneResizeEvent*  event) { this->resizeEvent(event); }
inline bool  promoted_sceneEvent(QEvent*  event) { return this->sceneEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return this->sizeHint(which, constraint); }
inline void promoted_ungrabKeyboardEvent(QEvent*  event) { this->ungrabKeyboardEvent(event); }
inline void promoted_ungrabMouseEvent(QEvent*  event) { this->ungrabMouseEvent(event); }
inline void promoted_updateGeometry() { this->updateGeometry(); }
inline bool  promoted_windowFrameEvent(QEvent*  e) { return this->windowFrameEvent(e); }
inline Qt::WindowFrameSection  promoted_windowFrameSectionAt(const QPointF&  pos) const { return this->windowFrameSectionAt(pos); }
inline QRectF  py_q_boundingRect() const { return QGraphicsWidget::boundingRect(); }
inline void py_q_changeEvent(QEvent*  event) { QGraphicsWidget::changeEvent(event); }
inline void py_q_closeEvent(QCloseEvent*  event) { QGraphicsWidget::closeEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QGraphicsWidget::event(event); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QGraphicsWidget::focusInEvent(event); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QGraphicsWidget::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QGraphicsWidget::focusOutEvent(event); }
inline void py_q_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsWidget::getContentsMargins(left, top, right, bottom); }
inline void py_q_grabKeyboardEvent(QEvent*  event) { QGraphicsWidget::grabKeyboardEvent(event); }
inline void py_q_grabMouseEvent(QEvent*  event) { QGraphicsWidget::grabMouseEvent(event); }
inline void py_q_hideEvent(QHideEvent*  event) { QGraphicsWidget::hideEvent(event); }
inline void py_q_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsWidget::hoverLeaveEvent(event); }
inline void py_q_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsWidget::hoverMoveEvent(event); }
inline void py_q_initStyleOption(QStyleOption*  option) const { QGraphicsWidget::initStyleOption(option); }
inline QVariant  py_q_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsWidget::itemChange(change, value); }
inline void py_q_moveEvent(QGraphicsSceneMoveEvent*  event) { QGraphicsWidget::moveEvent(event); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL) { QGraphicsWidget::paint(painter, option, widget); }
inline void py_q_paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL) { QGraphicsWidget::paintWindowFrame(painter, option, widget); }
inline void py_q_polishEvent() { QGraphicsWidget::polishEvent(); }
inline QVariant  py_q_propertyChange(const QString&  propertyName, const QVariant&  value) { return QGraphicsWidget::propertyChange(propertyName, value); }
inline void py_q_resizeEvent(QGraphicsSceneResizeEvent*  event) { QGraphicsWidget::resizeEvent(event); }
inline bool  py_q_sceneEvent(QEvent*  event) { return QGraphicsWidget::sceneEvent(event); }
inline void py_q_setGeometry(const QRectF&  rect) { QGraphicsWidget::setGeometry(rect); }
inline QPainterPath  py_q_shape() const { return QGraphicsWidget::shape(); }
inline void py_q_showEvent(QShowEvent*  event) { QGraphicsWidget::showEvent(event); }
inline QSizeF  py_q_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsWidget::sizeHint(which, constraint); }
inline int  py_q_type() const { return QGraphicsWidget::type(); }
inline void py_q_ungrabKeyboardEvent(QEvent*  event) { QGraphicsWidget::ungrabKeyboardEvent(event); }
inline void py_q_ungrabMouseEvent(QEvent*  event) { QGraphicsWidget::ungrabMouseEvent(event); }
inline void py_q_updateGeometry() { QGraphicsWidget::updateGeometry(); }
inline bool  py_q_windowFrameEvent(QEvent*  e) { return QGraphicsWidget::windowFrameEvent(e); }
inline Qt::WindowFrameSection  py_q_windowFrameSectionAt(const QPointF&  pos) const { return QGraphicsWidget::windowFrameSectionAt(pos); }
};

class PythonQtWrapper_QGraphicsWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsWidget::Type};
public slots:
QGraphicsWidget* new_QGraphicsWidget(QGraphicsItem*  parent = NULL, Qt::WindowFlags  wFlags = Qt::WindowFlags());
void delete_QGraphicsWidget(QGraphicsWidget* obj) { delete obj; } 
   QList<QAction* >  actions(QGraphicsWidget* theWrappedObject) const;
   void addAction(QGraphicsWidget* theWrappedObject, QAction*  action);
   void addActions(QGraphicsWidget* theWrappedObject, QList<QAction* >  actions);
   void adjustSize(QGraphicsWidget* theWrappedObject);
   bool  autoFillBackground(QGraphicsWidget* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsWidget* theWrappedObject) const;
   QRectF  py_q_boundingRect(QGraphicsWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_boundingRect());}
   void changeEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void py_q_changeEvent(QGraphicsWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_changeEvent(event));}
   void closeEvent(QGraphicsWidget* theWrappedObject, QCloseEvent*  event);
   void py_q_closeEvent(QGraphicsWidget* theWrappedObject, QCloseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_closeEvent(event));}
   bool  py_q_event(QGraphicsWidget* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_event(event));}
   void focusInEvent(QGraphicsWidget* theWrappedObject, QFocusEvent*  event);
   void py_q_focusInEvent(QGraphicsWidget* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_focusInEvent(event));}
   bool  focusNextPrevChild(QGraphicsWidget* theWrappedObject, bool  next);
   bool  py_q_focusNextPrevChild(QGraphicsWidget* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void focusOutEvent(QGraphicsWidget* theWrappedObject, QFocusEvent*  event);
   void py_q_focusOutEvent(QGraphicsWidget* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_focusOutEvent(event));}
   Qt::FocusPolicy  focusPolicy(QGraphicsWidget* theWrappedObject) const;
   QGraphicsWidget*  focusWidget(QGraphicsWidget* theWrappedObject) const;
   QFont  font(QGraphicsWidget* theWrappedObject) const;
   void py_q_getContentsMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const{  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_getContentsMargins(left, top, right, bottom));}
   void getWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void grabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void py_q_grabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_grabKeyboardEvent(event));}
   void grabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void py_q_grabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_grabMouseEvent(event));}
   int  grabShortcut(QGraphicsWidget* theWrappedObject, const QKeySequence&  sequence, Qt::ShortcutContext  context = Qt::WindowShortcut);
   void hideEvent(QGraphicsWidget* theWrappedObject, QHideEvent*  event);
   void py_q_hideEvent(QGraphicsWidget* theWrappedObject, QHideEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_hideEvent(event));}
   void hoverLeaveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void py_q_hoverLeaveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_hoverLeaveEvent(event));}
   void hoverMoveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void py_q_hoverMoveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_hoverMoveEvent(event));}
   void initStyleOption(QGraphicsWidget* theWrappedObject, QStyleOption*  option) const;
   void py_q_initStyleOption(QGraphicsWidget* theWrappedObject, QStyleOption*  option) const{  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_initStyleOption(option));}
   void insertAction(QGraphicsWidget* theWrappedObject, QAction*  before, QAction*  action);
   void insertActions(QGraphicsWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions);
   bool  isActiveWindow(QGraphicsWidget* theWrappedObject) const;
   QVariant  itemChange(QGraphicsWidget* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   QVariant  py_q_itemChange(QGraphicsWidget* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value){  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_itemChange(change, value));}
   QGraphicsLayout*  layout(QGraphicsWidget* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QGraphicsWidget* theWrappedObject) const;
   void moveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneMoveEvent*  event);
   void py_q_moveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneMoveEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_moveEvent(event));}
   void paint(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL);
   void py_q_paint(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_paint(painter, option, widget));}
   void paintWindowFrame(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL);
   void py_q_paintWindowFrame(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_paintWindowFrame(painter, option, widget));}
   QPalette  palette(QGraphicsWidget* theWrappedObject) const;
   void polishEvent(QGraphicsWidget* theWrappedObject);
   void py_q_polishEvent(QGraphicsWidget* theWrappedObject){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_polishEvent());}
   QVariant  propertyChange(QGraphicsWidget* theWrappedObject, const QString&  propertyName, const QVariant&  value);
   QVariant  py_q_propertyChange(QGraphicsWidget* theWrappedObject, const QString&  propertyName, const QVariant&  value){  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_propertyChange(propertyName, value));}
   QRectF  rect(QGraphicsWidget* theWrappedObject) const;
   void releaseShortcut(QGraphicsWidget* theWrappedObject, int  id);
   void removeAction(QGraphicsWidget* theWrappedObject, QAction*  action);
   void resize(QGraphicsWidget* theWrappedObject, const QSizeF&  size);
   void resize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h);
   void resizeEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event);
   void py_q_resizeEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_resizeEvent(event));}
   bool  sceneEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   bool  py_q_sceneEvent(QGraphicsWidget* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_sceneEvent(event));}
   void setAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute, bool  on = true);
   void setAutoFillBackground(QGraphicsWidget* theWrappedObject, bool  enabled);
   void setContentsMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   void setFocusPolicy(QGraphicsWidget* theWrappedObject, Qt::FocusPolicy  policy);
   void setFont(QGraphicsWidget* theWrappedObject, const QFont&  font);
   void py_q_setGeometry(QGraphicsWidget* theWrappedObject, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_setGeometry(rect));}
   void setGeometry(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setLayout(QGraphicsWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QGraphicsLayout* >  layout);
   void setLayoutDirection(QGraphicsWidget* theWrappedObject, Qt::LayoutDirection  direction);
   void setPalette(QGraphicsWidget* theWrappedObject, const QPalette&  palette);
   void setShortcutAutoRepeat(QGraphicsWidget* theWrappedObject, int  id, bool  enabled = true);
   void setShortcutEnabled(QGraphicsWidget* theWrappedObject, int  id, bool  enabled = true);
   void setStyle(QGraphicsWidget* theWrappedObject, QStyle*  style);
   void static_QGraphicsWidget_setTabOrder(QGraphicsWidget*  first, QGraphicsWidget*  second);
   void setWindowFlags(QGraphicsWidget* theWrappedObject, Qt::WindowFlags  wFlags);
   void setWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   void setWindowTitle(QGraphicsWidget* theWrappedObject, const QString&  title);
   QPainterPath  shape(QGraphicsWidget* theWrappedObject) const;
   QPainterPath  py_q_shape(QGraphicsWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_shape());}
   void showEvent(QGraphicsWidget* theWrappedObject, QShowEvent*  event);
   void py_q_showEvent(QGraphicsWidget* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_showEvent(event));}
   QSizeF  size(QGraphicsWidget* theWrappedObject) const;
   QSizeF  py_q_sizeHint(QGraphicsWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const{  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_sizeHint(which, constraint));}
   QStyle*  style(QGraphicsWidget* theWrappedObject) const;
   bool  testAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute) const;
   int  type(QGraphicsWidget* theWrappedObject) const;
   int  py_q_type(QGraphicsWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_type());}
   void ungrabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void py_q_ungrabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_ungrabKeyboardEvent(event));}
   void ungrabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void py_q_ungrabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_ungrabMouseEvent(event));}
   void unsetLayoutDirection(QGraphicsWidget* theWrappedObject);
   void unsetWindowFrameMargins(QGraphicsWidget* theWrappedObject);
   void py_q_updateGeometry(QGraphicsWidget* theWrappedObject){  (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_updateGeometry());}
   Qt::WindowFlags  windowFlags(QGraphicsWidget* theWrappedObject) const;
   bool  windowFrameEvent(QGraphicsWidget* theWrappedObject, QEvent*  e);
   bool  py_q_windowFrameEvent(QGraphicsWidget* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_windowFrameEvent(e));}
   QRectF  windowFrameGeometry(QGraphicsWidget* theWrappedObject) const;
   QRectF  windowFrameRect(QGraphicsWidget* theWrappedObject) const;
   Qt::WindowFrameSection  windowFrameSectionAt(QGraphicsWidget* theWrappedObject, const QPointF&  pos) const;
   Qt::WindowFrameSection  py_q_windowFrameSectionAt(QGraphicsWidget* theWrappedObject, const QPointF&  pos) const{  return (((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->py_q_windowFrameSectionAt(pos));}
   QString  windowTitle(QGraphicsWidget* theWrappedObject) const;
   Qt::WindowType  windowType(QGraphicsWidget* theWrappedObject) const;
};





class PythonQtShell_QGridLayout : public QGridLayout
{
public:
    PythonQtShell_QGridLayout():QGridLayout(),_wrapper(NULL) {};
    PythonQtShell_QGridLayout(QWidget*  parent):QGridLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGridLayout();

virtual void addItem(QLayoutItem*  arg__1);
virtual void childEvent(QChildEvent*  e);
virtual QSizePolicy::ControlTypes  controlTypes() const;
virtual int  count() const;
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayoutItem*  itemAt(int  index) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QSize  sizeHint() const;
virtual QLayoutItem*  takeAt(int  index);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGridLayout : public QGridLayout
{ public:
inline void promoted_addItem(QLayoutItem*  arg__1) { this->addItem(arg__1); }
inline void py_q_addItem(QLayoutItem*  arg__1) { QGridLayout::addItem(arg__1); }
inline int  py_q_count() const { return QGridLayout::count(); }
inline Qt::Orientations  py_q_expandingDirections() const { return QGridLayout::expandingDirections(); }
inline bool  py_q_hasHeightForWidth() const { return QGridLayout::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  arg__1) const { return QGridLayout::heightForWidth(arg__1); }
inline void py_q_invalidate() { QGridLayout::invalidate(); }
inline QLayoutItem*  py_q_itemAt(int  index) const { return QGridLayout::itemAt(index); }
inline QSize  py_q_maximumSize() const { return QGridLayout::maximumSize(); }
inline int  py_q_minimumHeightForWidth(int  arg__1) const { return QGridLayout::minimumHeightForWidth(arg__1); }
inline QSize  py_q_minimumSize() const { return QGridLayout::minimumSize(); }
inline void py_q_setGeometry(const QRect&  arg__1) { QGridLayout::setGeometry(arg__1); }
inline QSize  py_q_sizeHint() const { return QGridLayout::sizeHint(); }
inline QLayoutItem*  py_q_takeAt(int  index) { return QGridLayout::takeAt(index); }
};

class PythonQtWrapper_QGridLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGridLayout* new_QGridLayout();
QGridLayout* new_QGridLayout(QWidget*  parent);
void delete_QGridLayout(QGridLayout* obj) { delete obj; } 
   void py_q_addItem(QGridLayout* theWrappedObject, QLayoutItem*  arg__1){  (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_addItem(arg__1));}
   void addItem(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayoutItem* >  item, int  row, int  column, int  rowSpan = 1, int  columnSpan = 1, Qt::Alignment  arg__6 = Qt::Alignment());
   void addLayout(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  arg__1, int  row, int  column, Qt::Alignment  arg__4 = Qt::Alignment());
   void addLayout(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = Qt::Alignment());
   void addWidget(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  arg__1, int  row, int  column, Qt::Alignment  arg__4 = Qt::Alignment());
   void addWidget(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = Qt::Alignment());
   QRect  cellRect(QGridLayout* theWrappedObject, int  row, int  column) const;
   int  columnCount(QGridLayout* theWrappedObject) const;
   int  columnMinimumWidth(QGridLayout* theWrappedObject, int  column) const;
   int  columnStretch(QGridLayout* theWrappedObject, int  column) const;
   int  py_q_count(QGridLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_count());}
   Qt::Orientations  py_q_expandingDirections(QGridLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_expandingDirections());}
   bool  hasHeightForWidth(QGridLayout* theWrappedObject) const;
   bool  py_q_hasHeightForWidth(QGridLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  heightForWidth(QGridLayout* theWrappedObject, int  arg__1) const;
   int  py_q_heightForWidth(QGridLayout* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   int  horizontalSpacing(QGridLayout* theWrappedObject) const;
   void py_q_invalidate(QGridLayout* theWrappedObject){  (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_invalidate());}
   QLayoutItem*  py_q_itemAt(QGridLayout* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_itemAt(index));}
   QLayoutItem*  itemAtPosition(QGridLayout* theWrappedObject, int  row, int  column) const;
   QSize  py_q_maximumSize(QGridLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_maximumSize());}
   int  minimumHeightForWidth(QGridLayout* theWrappedObject, int  arg__1) const;
   int  py_q_minimumHeightForWidth(QGridLayout* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_minimumHeightForWidth(arg__1));}
   QSize  py_q_minimumSize(QGridLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_minimumSize());}
   Qt::Corner  originCorner(QGridLayout* theWrappedObject) const;
   int  rowCount(QGridLayout* theWrappedObject) const;
   int  rowMinimumHeight(QGridLayout* theWrappedObject, int  row) const;
   int  rowStretch(QGridLayout* theWrappedObject, int  row) const;
   void setColumnMinimumWidth(QGridLayout* theWrappedObject, int  column, int  minSize);
   void setColumnStretch(QGridLayout* theWrappedObject, int  column, int  stretch);
   void setDefaultPositioning(QGridLayout* theWrappedObject, int  n, Qt::Orientation  orient);
   void py_q_setGeometry(QGridLayout* theWrappedObject, const QRect&  arg__1){  (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_setGeometry(arg__1));}
   void setHorizontalSpacing(QGridLayout* theWrappedObject, int  spacing);
   void setOriginCorner(QGridLayout* theWrappedObject, Qt::Corner  arg__1);
   void setRowMinimumHeight(QGridLayout* theWrappedObject, int  row, int  minSize);
   void setRowStretch(QGridLayout* theWrappedObject, int  row, int  stretch);
   void setSpacing(QGridLayout* theWrappedObject, int  spacing);
   void setVerticalSpacing(QGridLayout* theWrappedObject, int  spacing);
   QSize  sizeHint(QGridLayout* theWrappedObject) const;
   QSize  py_q_sizeHint(QGridLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_sizeHint());}
   int  spacing(QGridLayout* theWrappedObject) const;
   QLayoutItem*  py_q_takeAt(QGridLayout* theWrappedObject, int  index){  return (((PythonQtPublicPromoter_QGridLayout*)theWrappedObject)->py_q_takeAt(index));}
   int  verticalSpacing(QGridLayout* theWrappedObject) const;
    bool __nonzero__(QGridLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QGroupBox : public QGroupBox
{
public:
    PythonQtShell_QGroupBox(QWidget*  parent = NULL):QGroupBox(parent),_wrapper(NULL) {};
    PythonQtShell_QGroupBox(const QString&  title, QWidget*  parent = NULL):QGroupBox(title, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGroupBox();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGroupBox : public QGroupBox
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline void promoted_childEvent(QChildEvent*  event) { this->childEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline void promoted_initStyleOption(QStyleOptionGroupBox*  option) const { this->initStyleOption(option); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void py_q_changeEvent(QEvent*  event) { QGroupBox::changeEvent(event); }
inline void py_q_childEvent(QChildEvent*  event) { QGroupBox::childEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QGroupBox::event(event); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QGroupBox::focusInEvent(event); }
inline QSize  py_q_minimumSizeHint() const { return QGroupBox::minimumSizeHint(); }
inline void py_q_mouseMoveEvent(QMouseEvent*  event) { QGroupBox::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QMouseEvent*  event) { QGroupBox::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  event) { QGroupBox::mouseReleaseEvent(event); }
inline void py_q_paintEvent(QPaintEvent*  event) { QGroupBox::paintEvent(event); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QGroupBox::resizeEvent(event); }
};

class PythonQtWrapper_QGroupBox : public QObject
{ Q_OBJECT
public:
public slots:
QGroupBox* new_QGroupBox(QWidget*  parent = NULL);
QGroupBox* new_QGroupBox(const QString&  title, QWidget*  parent = NULL);
void delete_QGroupBox(QGroupBox* obj) { delete obj; } 
   Qt::Alignment  alignment(QGroupBox* theWrappedObject) const;
   void py_q_changeEvent(QGroupBox* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_changeEvent(event));}
   void py_q_childEvent(QGroupBox* theWrappedObject, QChildEvent*  event){  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_childEvent(event));}
   bool  py_q_event(QGroupBox* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_event(event));}
   void py_q_focusInEvent(QGroupBox* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_focusInEvent(event));}
   void initStyleOption(QGroupBox* theWrappedObject, QStyleOptionGroupBox*  option) const;
   bool  isCheckable(QGroupBox* theWrappedObject) const;
   bool  isChecked(QGroupBox* theWrappedObject) const;
   bool  isFlat(QGroupBox* theWrappedObject) const;
   QSize  minimumSizeHint(QGroupBox* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QGroupBox* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseMoveEvent(QGroupBox* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void py_q_mousePressEvent(QGroupBox* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_mousePressEvent(event));}
   void py_q_mouseReleaseEvent(QGroupBox* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   void py_q_paintEvent(QGroupBox* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_paintEvent(event));}
   void py_q_resizeEvent(QGroupBox* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->py_q_resizeEvent(event));}
   void setAlignment(QGroupBox* theWrappedObject, int  alignment);
   void setCheckable(QGroupBox* theWrappedObject, bool  checkable);
   void setFlat(QGroupBox* theWrappedObject, bool  flat);
   void setTitle(QGroupBox* theWrappedObject, const QString&  title);
   QString  title(QGroupBox* theWrappedObject) const;
};





class PythonQtPublicPromoter_QGuiApplication : public QGuiApplication
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QGuiApplication::event(arg__1); }
inline bool  py_q_notify(QObject*  arg__1, QEvent*  arg__2) { return QGuiApplication::notify(arg__1, arg__2); }
};

class PythonQtWrapper_QGuiApplication : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QGuiApplication(QGuiApplication* obj) { delete obj; } 
   QList<QWindow* >  static_QGuiApplication_allWindows();
   QString  static_QGuiApplication_applicationDisplayName();
   Qt::ApplicationState  static_QGuiApplication_applicationState();
   void static_QGuiApplication_changeOverrideCursor(const QCursor&  arg__1);
   QClipboard*  static_QGuiApplication_clipboard();
   bool  static_QGuiApplication_desktopSettingsAware();
   qreal  devicePixelRatio(QGuiApplication* theWrappedObject) const;
   bool  py_q_event(QGuiApplication* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QGuiApplication*)theWrappedObject)->py_q_event(arg__1));}
   int  static_QGuiApplication_exec();
   QObject*  static_QGuiApplication_focusObject();
   QWindow*  static_QGuiApplication_focusWindow();
   QFont  static_QGuiApplication_font();
   QInputMethod*  static_QGuiApplication_inputMethod();
   bool  static_QGuiApplication_isFallbackSessionManagementEnabled();
   bool  static_QGuiApplication_isLeftToRight();
   bool  static_QGuiApplication_isRightToLeft();
   bool  isSavingSession(QGuiApplication* theWrappedObject) const;
   bool  isSessionRestored(QGuiApplication* theWrappedObject) const;
   Qt::KeyboardModifiers  static_QGuiApplication_keyboardModifiers();
   Qt::LayoutDirection  static_QGuiApplication_layoutDirection();
   QWindow*  static_QGuiApplication_modalWindow();
   Qt::MouseButtons  static_QGuiApplication_mouseButtons();
   bool  py_q_notify(QGuiApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QGuiApplication*)theWrappedObject)->py_q_notify(arg__1, arg__2));}
   QCursor*  static_QGuiApplication_overrideCursor();
   QPalette  static_QGuiApplication_palette();
   QString  static_QGuiApplication_platformName();
   QScreen*  static_QGuiApplication_primaryScreen();
   Qt::KeyboardModifiers  static_QGuiApplication_queryKeyboardModifiers();
   bool  static_QGuiApplication_quitOnLastWindowClosed();
   void static_QGuiApplication_restoreOverrideCursor();
   QList<QScreen* >  static_QGuiApplication_screens();
   QString  sessionId(QGuiApplication* theWrappedObject) const;
   QString  sessionKey(QGuiApplication* theWrappedObject) const;
   void static_QGuiApplication_setApplicationDisplayName(const QString&  name);
   void static_QGuiApplication_setDesktopSettingsAware(bool  on);
   void static_QGuiApplication_setFallbackSessionManagementEnabled(bool  arg__1);
   void static_QGuiApplication_setFont(const QFont&  arg__1);
   void static_QGuiApplication_setLayoutDirection(Qt::LayoutDirection  direction);
   void static_QGuiApplication_setOverrideCursor(const QCursor&  arg__1);
   void static_QGuiApplication_setPalette(const QPalette&  pal);
   void static_QGuiApplication_setQuitOnLastWindowClosed(bool  quit);
   void static_QGuiApplication_setWindowIcon(const QIcon&  icon);
   QStyleHints*  static_QGuiApplication_styleHints();
   void static_QGuiApplication_sync();
   QWindow*  static_QGuiApplication_topLevelAt(const QPoint&  pos);
   QList<QWindow* >  static_QGuiApplication_topLevelWindows();
   QIcon  static_QGuiApplication_windowIcon();
};





class PythonQtShell_QHBoxLayout : public QHBoxLayout
{
public:
    PythonQtShell_QHBoxLayout():QHBoxLayout(),_wrapper(NULL) {};
    PythonQtShell_QHBoxLayout(QWidget*  parent):QHBoxLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QHBoxLayout();

virtual void addItem(QLayoutItem*  arg__1);
virtual void childEvent(QChildEvent*  e);
virtual QSizePolicy::ControlTypes  controlTypes() const;
virtual int  count() const;
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayoutItem*  itemAt(int  arg__1) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QSize  sizeHint() const;
virtual QLayoutItem*  takeAt(int  arg__1);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QHBoxLayout : public QObject
{ Q_OBJECT
public:
public slots:
QHBoxLayout* new_QHBoxLayout();
QHBoxLayout* new_QHBoxLayout(QWidget*  parent);
void delete_QHBoxLayout(QHBoxLayout* obj) { delete obj; } 
    bool __nonzero__(QHBoxLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QHeaderView : public QHeaderView
{
public:
    PythonQtShell_QHeaderView(Qt::Orientation  orientation, QWidget*  parent = NULL):QHeaderView(orientation, parent),_wrapper(NULL) {};

   ~PythonQtShell_QHeaderView();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void closeEvent(QCloseEvent*  event);
virtual void commitData(QWidget*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  old);
virtual void customEvent(QEvent*  event);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>());
virtual int  devType() const;
virtual void doItemsLayout();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void editorDestroyed(QObject*  editor);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual int  horizontalOffset() const;
virtual void horizontalScrollbarAction(int  action);
virtual void horizontalScrollbarValueChanged(int  value);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void keyboardSearch(const QString&  search);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual QModelIndex  moveCursor(QAbstractItemView::CursorAction  arg__1, Qt::KeyboardModifiers  arg__2);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual void paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const;
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reset();
virtual void resizeEvent(QResizeEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual QSize  sectionSizeFromContents(int  logicalIndex) const;
virtual void selectAll();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = NULL) const;
virtual void setModel(QAbstractItemModel*  model);
virtual void setRootIndex(const QModelIndex&  index);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  flags);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void setVisible(bool  v);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual int  sizeHintForColumn(int  column) const;
virtual int  sizeHintForRow(int  row) const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void updateEditorData();
virtual void updateEditorGeometries();
virtual void updateGeometries();
virtual int  verticalOffset() const;
virtual void verticalScrollbarAction(int  action);
virtual void verticalScrollbarValueChanged(int  value);
virtual QStyleOptionViewItem  viewOptions() const;
virtual bool  viewportEvent(QEvent*  e);
virtual QSize  viewportSizeHint() const;
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QHeaderView : public QHeaderView
{ public:
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  old) { this->currentChanged(current, old); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) { this->dataChanged(topLeft, bottomRight, roles); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline int  promoted_horizontalOffset() const { return this->horizontalOffset(); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return this->indexAt(p); }
inline void promoted_initStyleOption(QStyleOptionHeader*  option) const { this->initStyleOption(option); }
inline void promoted_initialize() { this->initialize(); }
inline void promoted_initializeSections() { this->initializeSections(); }
inline void promoted_initializeSections(int  start, int  end) { this->initializeSections(start, end); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return this->isIndexHidden(index); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { this->mouseDoubleClickEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { this->mouseMoveEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { this->mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { this->mouseReleaseEvent(e); }
inline QModelIndex  promoted_moveCursor(int  arg__1, Qt::KeyboardModifiers  arg__2) { return this->moveCursor((QAbstractItemView::CursorAction)arg__1, arg__2); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void promoted_paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const { this->paintSection(painter, rect, logicalIndex); }
inline void promoted_resizeSections() { this->resizeSections(); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { this->rowsInserted(parent, start, end); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint) { this->scrollTo(index, hint); }
inline QSize  promoted_sectionSizeFromContents(int  logicalIndex) const { return this->sectionSizeFromContents(logicalIndex); }
inline void promoted_sectionsAboutToBeRemoved(const QModelIndex&  parent, int  logicalFirst, int  logicalLast) { this->sectionsAboutToBeRemoved(parent, logicalFirst, logicalLast); }
inline void promoted_sectionsInserted(const QModelIndex&  parent, int  logicalFirst, int  logicalLast) { this->sectionsInserted(parent, logicalFirst, logicalLast); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  flags) { this->setSelection(rect, flags); }
inline void promoted_updateGeometries() { this->updateGeometries(); }
inline void promoted_updateSection(int  logicalIndex) { this->updateSection(logicalIndex); }
inline int  promoted_verticalOffset() const { return this->verticalOffset(); }
inline bool  promoted_viewportEvent(QEvent*  e) { return this->viewportEvent(e); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return this->visualRect(index); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return this->visualRegionForSelection(selection); }
inline void py_q_currentChanged(const QModelIndex&  current, const QModelIndex&  old) { QHeaderView::currentChanged(current, old); }
inline void py_q_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) { QHeaderView::dataChanged(topLeft, bottomRight, roles); }
inline void py_q_doItemsLayout() { QHeaderView::doItemsLayout(); }
inline bool  py_q_event(QEvent*  e) { return QHeaderView::event(e); }
inline int  py_q_horizontalOffset() const { return QHeaderView::horizontalOffset(); }
inline QModelIndex  py_q_indexAt(const QPoint&  p) const { return QHeaderView::indexAt(p); }
inline bool  py_q_isIndexHidden(const QModelIndex&  index) const { return QHeaderView::isIndexHidden(index); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  e) { QHeaderView::mouseDoubleClickEvent(e); }
inline void py_q_mouseMoveEvent(QMouseEvent*  e) { QHeaderView::mouseMoveEvent(e); }
inline void py_q_mousePressEvent(QMouseEvent*  e) { QHeaderView::mousePressEvent(e); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  e) { QHeaderView::mouseReleaseEvent(e); }
inline QModelIndex  py_q_moveCursor(int  arg__1, Qt::KeyboardModifiers  arg__2) { return QHeaderView::moveCursor((QAbstractItemView::CursorAction)arg__1, arg__2); }
inline void py_q_paintEvent(QPaintEvent*  e) { QHeaderView::paintEvent(e); }
inline void py_q_paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const { QHeaderView::paintSection(painter, rect, logicalIndex); }
inline void py_q_reset() { QHeaderView::reset(); }
inline void py_q_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QHeaderView::rowsInserted(parent, start, end); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QHeaderView::scrollContentsBy(dx, dy); }
inline void py_q_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint) { QHeaderView::scrollTo(index, hint); }
inline QSize  py_q_sectionSizeFromContents(int  logicalIndex) const { return QHeaderView::sectionSizeFromContents(logicalIndex); }
inline void py_q_setModel(QAbstractItemModel*  model) { QHeaderView::setModel(model); }
inline void py_q_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  flags) { QHeaderView::setSelection(rect, flags); }
inline void py_q_setVisible(bool  v) { QHeaderView::setVisible(v); }
inline QSize  py_q_sizeHint() const { return QHeaderView::sizeHint(); }
inline void py_q_updateGeometries() { QHeaderView::updateGeometries(); }
inline int  py_q_verticalOffset() const { return QHeaderView::verticalOffset(); }
inline bool  py_q_viewportEvent(QEvent*  e) { return QHeaderView::viewportEvent(e); }
inline QRect  py_q_visualRect(const QModelIndex&  index) const { return QHeaderView::visualRect(index); }
inline QRegion  py_q_visualRegionForSelection(const QItemSelection&  selection) const { return QHeaderView::visualRegionForSelection(selection); }
};

class PythonQtWrapper_QHeaderView : public QObject
{ Q_OBJECT
public:
public slots:
QHeaderView* new_QHeaderView(Qt::Orientation  orientation, QWidget*  parent = NULL);
void delete_QHeaderView(QHeaderView* obj) { delete obj; } 
   bool  cascadingSectionResizes(QHeaderView* theWrappedObject) const;
   int  count(QHeaderView* theWrappedObject) const;
   void py_q_currentChanged(QHeaderView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  old){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_currentChanged(current, old));}
   void py_q_dataChanged(QHeaderView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_dataChanged(topLeft, bottomRight, roles));}
   Qt::Alignment  defaultAlignment(QHeaderView* theWrappedObject) const;
   int  defaultSectionSize(QHeaderView* theWrappedObject) const;
   void py_q_doItemsLayout(QHeaderView* theWrappedObject){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_doItemsLayout());}
   bool  py_q_event(QHeaderView* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_event(e));}
   int  hiddenSectionCount(QHeaderView* theWrappedObject) const;
   void hideSection(QHeaderView* theWrappedObject, int  logicalIndex);
   bool  highlightSections(QHeaderView* theWrappedObject) const;
   int  py_q_horizontalOffset(QHeaderView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_horizontalOffset());}
   QModelIndex  py_q_indexAt(QHeaderView* theWrappedObject, const QPoint&  p) const{  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_indexAt(p));}
   void initStyleOption(QHeaderView* theWrappedObject, QStyleOptionHeader*  option) const;
   void initialize(QHeaderView* theWrappedObject);
   void initializeSections(QHeaderView* theWrappedObject);
   void initializeSections(QHeaderView* theWrappedObject, int  start, int  end);
   bool  py_q_isIndexHidden(QHeaderView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_isIndexHidden(index));}
   bool  isSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex) const;
   bool  isSortIndicatorShown(QHeaderView* theWrappedObject) const;
   int  length(QHeaderView* theWrappedObject) const;
   int  logicalIndex(QHeaderView* theWrappedObject, int  visualIndex) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, const QPoint&  pos) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, int  position) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, int  x, int  y) const;
   int  maximumSectionSize(QHeaderView* theWrappedObject) const;
   int  minimumSectionSize(QHeaderView* theWrappedObject) const;
   void py_q_mouseDoubleClickEvent(QHeaderView* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_mouseDoubleClickEvent(e));}
   void py_q_mouseMoveEvent(QHeaderView* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_mouseMoveEvent(e));}
   void py_q_mousePressEvent(QHeaderView* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_mousePressEvent(e));}
   void py_q_mouseReleaseEvent(QHeaderView* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_mouseReleaseEvent(e));}
   QModelIndex  py_q_moveCursor(QHeaderView* theWrappedObject, int  arg__1, Qt::KeyboardModifiers  arg__2){  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_moveCursor(arg__1, arg__2));}
   void moveSection(QHeaderView* theWrappedObject, int  from, int  to);
   int  offset(QHeaderView* theWrappedObject) const;
   Qt::Orientation  orientation(QHeaderView* theWrappedObject) const;
   void py_q_paintEvent(QHeaderView* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_paintEvent(e));}
   void paintSection(QHeaderView* theWrappedObject, QPainter*  painter, const QRect&  rect, int  logicalIndex) const;
   void py_q_paintSection(QHeaderView* theWrappedObject, QPainter*  painter, const QRect&  rect, int  logicalIndex) const{  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_paintSection(painter, rect, logicalIndex));}
   void py_q_reset(QHeaderView* theWrappedObject){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_reset());}
   void resetDefaultSectionSize(QHeaderView* theWrappedObject);
   int  resizeContentsPrecision(QHeaderView* theWrappedObject) const;
   void resizeSection(QHeaderView* theWrappedObject, int  logicalIndex, int  size);
   void resizeSections(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
   bool  restoreState(QHeaderView* theWrappedObject, const QByteArray&  state);
   void py_q_rowsInserted(QHeaderView* theWrappedObject, const QModelIndex&  parent, int  start, int  end){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_rowsInserted(parent, start, end));}
   QByteArray  saveState(QHeaderView* theWrappedObject) const;
   void py_q_scrollContentsBy(QHeaderView* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void py_q_scrollTo(QHeaderView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_scrollTo(index, hint));}
   int  sectionPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
   QHeaderView::ResizeMode  sectionResizeMode(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  sectionSize(QHeaderView* theWrappedObject, int  logicalIndex) const;
   QSize  sectionSizeFromContents(QHeaderView* theWrappedObject, int  logicalIndex) const;
   QSize  py_q_sectionSizeFromContents(QHeaderView* theWrappedObject, int  logicalIndex) const{  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_sectionSizeFromContents(logicalIndex));}
   int  sectionSizeHint(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  sectionViewportPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
   bool  sectionsClickable(QHeaderView* theWrappedObject) const;
   bool  sectionsHidden(QHeaderView* theWrappedObject) const;
   bool  sectionsMovable(QHeaderView* theWrappedObject) const;
   bool  sectionsMoved(QHeaderView* theWrappedObject) const;
   void setCascadingSectionResizes(QHeaderView* theWrappedObject, bool  enable);
   void setDefaultAlignment(QHeaderView* theWrappedObject, Qt::Alignment  alignment);
   void setDefaultSectionSize(QHeaderView* theWrappedObject, int  size);
   void setHighlightSections(QHeaderView* theWrappedObject, bool  highlight);
   void setMaximumSectionSize(QHeaderView* theWrappedObject, int  size);
   void setMinimumSectionSize(QHeaderView* theWrappedObject, int  size);
   void py_q_setModel(QHeaderView* theWrappedObject, QAbstractItemModel*  model){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_setModel(model));}
   void setResizeContentsPrecision(QHeaderView* theWrappedObject, int  precision);
   void setSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex, bool  hide);
   void setSectionResizeMode(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
   void setSectionResizeMode(QHeaderView* theWrappedObject, int  logicalIndex, QHeaderView::ResizeMode  mode);
   void setSectionsClickable(QHeaderView* theWrappedObject, bool  clickable);
   void setSectionsMovable(QHeaderView* theWrappedObject, bool  movable);
   void py_q_setSelection(QHeaderView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  flags){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_setSelection(rect, flags));}
   void setSortIndicator(QHeaderView* theWrappedObject, int  logicalIndex, Qt::SortOrder  order);
   void setSortIndicatorShown(QHeaderView* theWrappedObject, bool  show);
   void setStretchLastSection(QHeaderView* theWrappedObject, bool  stretch);
   void py_q_setVisible(QHeaderView* theWrappedObject, bool  v){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_setVisible(v));}
   void showSection(QHeaderView* theWrappedObject, int  logicalIndex);
   QSize  py_q_sizeHint(QHeaderView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_sizeHint());}
   Qt::SortOrder  sortIndicatorOrder(QHeaderView* theWrappedObject) const;
   int  sortIndicatorSection(QHeaderView* theWrappedObject) const;
   bool  stretchLastSection(QHeaderView* theWrappedObject) const;
   int  stretchSectionCount(QHeaderView* theWrappedObject) const;
   void swapSections(QHeaderView* theWrappedObject, int  first, int  second);
   void py_q_updateGeometries(QHeaderView* theWrappedObject){  (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_updateGeometries());}
   int  py_q_verticalOffset(QHeaderView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_verticalOffset());}
   bool  py_q_viewportEvent(QHeaderView* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_viewportEvent(e));}
   int  visualIndex(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  visualIndexAt(QHeaderView* theWrappedObject, int  position) const;
   QRect  py_q_visualRect(QHeaderView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_visualRect(index));}
   QRegion  py_q_visualRegionForSelection(QHeaderView* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->py_q_visualRegionForSelection(selection));}
};





class PythonQtWrapper_QHelpEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHelpEvent* new_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos);
void delete_QHelpEvent(QHelpEvent* obj) { delete obj; } 
   const QPoint*  globalPos(QHelpEvent* theWrappedObject) const;
   int  globalX(QHelpEvent* theWrappedObject) const;
   int  globalY(QHelpEvent* theWrappedObject) const;
   const QPoint*  pos(QHelpEvent* theWrappedObject) const;
   int  x(QHelpEvent* theWrappedObject) const;
   int  y(QHelpEvent* theWrappedObject) const;
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
    PythonQtShell_QHoverEvent(QEvent::Type  type, const QPointF&  pos, const QPointF&  oldPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier):QHoverEvent(type, pos, oldPos, modifiers),_wrapper(NULL) {};

   ~PythonQtShell_QHoverEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QHoverEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHoverEvent* new_QHoverEvent(QEvent::Type  type, const QPointF&  pos, const QPointF&  oldPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier);
void delete_QHoverEvent(QHoverEvent* obj) { delete obj; } 
   QPoint  oldPos(QHoverEvent* theWrappedObject) const;
   const QPointF*  oldPosF(QHoverEvent* theWrappedObject) const;
   QPoint  pos(QHoverEvent* theWrappedObject) const;
   const QPointF*  posF(QHoverEvent* theWrappedObject) const;
};





class PythonQtWrapper_QIconDragEvent : public QObject
{ Q_OBJECT
public:
public slots:
QIconDragEvent* new_QIconDragEvent();
void delete_QIconDragEvent(QIconDragEvent* obj) { delete obj; } 
};


