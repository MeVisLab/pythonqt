#ifndef PYTHONQTWRAPPER_QGRAPHICSWIDGET_H
#define PYTHONQTWRAPPER_QGRAPHICSWIDGET_H

#include <qgraphicswidget.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

class PythonQtShell_QGraphicsWidget : public QGraphicsWidget
{
public:
    PythonQtShell_QGraphicsWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0):QGraphicsWidget(parent, wFlags),_wrapper(NULL) {};

virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  event);
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QVariant  extension(const QVariant&  variant) const;
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
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual void moveEvent(QGraphicsSceneMoveEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual void polishEvent();
virtual QVariant  propertyChange(const QString&  propertyName, const QVariant&  value);
virtual void resizeEvent(QGraphicsSceneResizeEvent*  event);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual void setGeometry(const QRectF&  rect);
virtual QPainterPath  shape() const;
virtual void showEvent(QShowEvent*  event);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual int  type() const;
virtual void ungrabKeyboardEvent(QEvent*  event);
virtual void ungrabMouseEvent(QEvent*  event);
virtual void updateGeometry();
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);
virtual bool  windowFrameEvent(QEvent*  e);
virtual Qt::WindowFrameSection  windowFrameSectionAt(const QPointF&  pos) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsWidget : public QGraphicsWidget
{ public:
inline void promoted_polishEvent() { QGraphicsWidget::polishEvent(); }
inline void promoted_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsWidget::getContentsMargins(left, top, right, bottom); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QGraphicsWidget::focusNextPrevChild(next); }
inline QVariant  promoted_propertyChange(const QString&  propertyName, const QVariant&  value) { return QGraphicsWidget::propertyChange(propertyName, value); }
inline bool  promoted_windowFrameEvent(QEvent*  e) { return QGraphicsWidget::windowFrameEvent(e); }
inline void promoted_ungrabKeyboardEvent(QEvent*  event) { QGraphicsWidget::ungrabKeyboardEvent(event); }
inline void promoted_grabKeyboardEvent(QEvent*  event) { QGraphicsWidget::grabKeyboardEvent(event); }
inline void promoted_resizeEvent(QGraphicsSceneResizeEvent*  event) { QGraphicsWidget::resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QGraphicsWidget::showEvent(event); }
inline int  promoted_type() const { return QGraphicsWidget::type(); }
inline bool  promoted_sceneEvent(QEvent*  event) { return QGraphicsWidget::sceneEvent(event); }
inline void promoted_ungrabMouseEvent(QEvent*  event) { QGraphicsWidget::ungrabMouseEvent(event); }
inline Qt::WindowFrameSection  promoted_windowFrameSectionAt(const QPointF&  pos) const { return QGraphicsWidget::windowFrameSectionAt(pos); }
inline void promoted_hideEvent(QHideEvent*  event) { QGraphicsWidget::hideEvent(event); }
inline void promoted_moveEvent(QGraphicsSceneMoveEvent*  event) { QGraphicsWidget::moveEvent(event); }
inline QRectF  promoted_boundingRect() const { return QGraphicsWidget::boundingRect(); }
inline void promoted_grabMouseEvent(QEvent*  event) { QGraphicsWidget::grabMouseEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { QGraphicsWidget::closeEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsWidget::hoverMoveEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsWidget::hoverLeaveEvent(event); }
inline void promoted_changeEvent(QEvent*  event) { QGraphicsWidget::changeEvent(event); }
inline void promoted_initStyleOption(QStyleOption*  option) const { QGraphicsWidget::initStyleOption(option); }
inline bool  promoted_event(QEvent*  event) { return QGraphicsWidget::event(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsWidget::focusInEvent(event); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0) { QGraphicsWidget::paint(painter, option, widget); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsWidget::sizeHint(which, constraint); }
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsWidget::itemChange(change, value); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsWidget::focusOutEvent(event); }
inline QPainterPath  promoted_shape() const { return QGraphicsWidget::shape(); }
inline void promoted_paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0) { QGraphicsWidget::paintWindowFrame(painter, option, widget); }
inline void promoted_updateGeometry() { QGraphicsWidget::updateGeometry(); }
inline void promoted_setGeometry(const QRectF&  rect) { QGraphicsWidget::setGeometry(rect); }
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
   void setGeometry(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void polishEvent(QGraphicsWidget* theWrappedObject);
   QGraphicsLayout*  layout(QGraphicsWidget* theWrappedObject) const;
   void getContentsMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void setWindowTitle(QGraphicsWidget* theWrappedObject, const QString&  title);
   bool  focusNextPrevChild(QGraphicsWidget* theWrappedObject, bool  next);
   QRectF  windowFrameRect(QGraphicsWidget* theWrappedObject) const;
   QVariant  propertyChange(QGraphicsWidget* theWrappedObject, const QString&  propertyName, const QVariant&  value);
   QPalette  palette(QGraphicsWidget* theWrappedObject) const;
   bool  windowFrameEvent(QGraphicsWidget* theWrappedObject, QEvent*  e);
   void ungrabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void setStyle(QGraphicsWidget* theWrappedObject, QStyle*  style);
   Qt::LayoutDirection  layoutDirection(QGraphicsWidget* theWrappedObject) const;
   void grabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void resizeEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event);
   void setLayout(QGraphicsWidget* theWrappedObject, QGraphicsLayout*  layout);
   QFont  font(QGraphicsWidget* theWrappedObject) const;
   void setFocusPolicy(QGraphicsWidget* theWrappedObject, Qt::FocusPolicy  policy);
   void static_QGraphicsWidget_setTabOrder(QGraphicsWidget*  first, QGraphicsWidget*  second);
   bool  testAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute) const;
   void getWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void showEvent(QGraphicsWidget* theWrappedObject, QShowEvent*  event);
   void unsetWindowFrameMargins(QGraphicsWidget* theWrappedObject);
   int  type(QGraphicsWidget* theWrappedObject) const;
   void resize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h);
   bool  sceneEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void ungrabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   Qt::WindowFrameSection  windowFrameSectionAt(QGraphicsWidget* theWrappedObject, const QPointF&  pos) const;
   void hideEvent(QGraphicsWidget* theWrappedObject, QHideEvent*  event);
   void setPalette(QGraphicsWidget* theWrappedObject, const QPalette&  palette);
   void moveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneMoveEvent*  event);
   void setWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   QRectF  boundingRect(QGraphicsWidget* theWrappedObject) const;
   Qt::WindowType  windowType(QGraphicsWidget* theWrappedObject) const;
   void grabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void closeEvent(QGraphicsWidget* theWrappedObject, QCloseEvent*  event);
   void hoverMoveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void unsetLayoutDirection(QGraphicsWidget* theWrappedObject);
   Qt::WindowFlags  windowFlags(QGraphicsWidget* theWrappedObject) const;
   void hoverLeaveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void changeEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   QRectF  rect(QGraphicsWidget* theWrappedObject) const;
   Qt::FocusPolicy  focusPolicy(QGraphicsWidget* theWrappedObject) const;
   void initStyleOption(QGraphicsWidget* theWrappedObject, QStyleOption*  option) const;
   void setAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute, bool  on = true);
   bool  event(QGraphicsWidget* theWrappedObject, QEvent*  event);
   QGraphicsWidget*  focusWidget(QGraphicsWidget* theWrappedObject) const;
   void setWindowFlags(QGraphicsWidget* theWrappedObject, Qt::WindowFlags  wFlags);
   QString  windowTitle(QGraphicsWidget* theWrappedObject) const;
   void focusInEvent(QGraphicsWidget* theWrappedObject, QFocusEvent*  event);
   void adjustSize(QGraphicsWidget* theWrappedObject);
   QRectF  windowFrameGeometry(QGraphicsWidget* theWrappedObject) const;
   void paint(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   QStyle*  style(QGraphicsWidget* theWrappedObject) const;
   void resize(QGraphicsWidget* theWrappedObject, const QSizeF&  size);
   QSizeF  size(QGraphicsWidget* theWrappedObject) const;
   QSizeF  sizeHint(QGraphicsWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   void setFont(QGraphicsWidget* theWrappedObject, const QFont&  font);
   void setContentsMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   QVariant  itemChange(QGraphicsWidget* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   void focusOutEvent(QGraphicsWidget* theWrappedObject, QFocusEvent*  event);
   bool  isActiveWindow(QGraphicsWidget* theWrappedObject) const;
   QPainterPath  shape(QGraphicsWidget* theWrappedObject) const;
   void setLayoutDirection(QGraphicsWidget* theWrappedObject, Qt::LayoutDirection  direction);
   void paintWindowFrame(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   void updateGeometry(QGraphicsWidget* theWrappedObject);
   void setGeometry(QGraphicsWidget* theWrappedObject, const QRectF&  rect);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSWIDGET_H
