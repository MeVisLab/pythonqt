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
inline void changeEvent(QEvent*  event) { QGraphicsWidget::changeEvent(event); }
inline bool  windowFrameEvent(QEvent*  e) { return QGraphicsWidget::windowFrameEvent(e); }
inline QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsWidget::sizeHint(which, constraint); }
inline void showEvent(QShowEvent*  event) { QGraphicsWidget::showEvent(event); }
inline void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsWidget::hoverLeaveEvent(event); }
inline bool  focusNextPrevChild(bool  next) { return QGraphicsWidget::focusNextPrevChild(next); }
inline void updateGeometry() { QGraphicsWidget::updateGeometry(); }
inline QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsWidget::itemChange(change, value); }
inline void closeEvent(QCloseEvent*  event) { QGraphicsWidget::closeEvent(event); }
inline Qt::WindowFrameSection  windowFrameSectionAt(const QPointF&  pos) const { return QGraphicsWidget::windowFrameSectionAt(pos); }
inline void focusInEvent(QFocusEvent*  event) { QGraphicsWidget::focusInEvent(event); }
inline void ungrabKeyboardEvent(QEvent*  event) { QGraphicsWidget::ungrabKeyboardEvent(event); }
inline void moveEvent(QGraphicsSceneMoveEvent*  event) { QGraphicsWidget::moveEvent(event); }
inline void hideEvent(QHideEvent*  event) { QGraphicsWidget::hideEvent(event); }
inline void ungrabMouseEvent(QEvent*  event) { QGraphicsWidget::ungrabMouseEvent(event); }
inline QVariant  propertyChange(const QString&  propertyName, const QVariant&  value) { return QGraphicsWidget::propertyChange(propertyName, value); }
inline void grabMouseEvent(QEvent*  event) { QGraphicsWidget::grabMouseEvent(event); }
inline void hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsWidget::hoverMoveEvent(event); }
inline bool  event(QEvent*  event) { return QGraphicsWidget::event(event); }
inline void polishEvent() { QGraphicsWidget::polishEvent(); }
inline void initStyleOption(QStyleOption*  option) const { QGraphicsWidget::initStyleOption(option); }
inline void grabKeyboardEvent(QEvent*  event) { QGraphicsWidget::grabKeyboardEvent(event); }
inline void focusOutEvent(QFocusEvent*  event) { QGraphicsWidget::focusOutEvent(event); }
inline bool  sceneEvent(QEvent*  event) { return QGraphicsWidget::sceneEvent(event); }
inline void resizeEvent(QGraphicsSceneResizeEvent*  event) { QGraphicsWidget::resizeEvent(event); }
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
   void changeEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void setFocusPolicy(QGraphicsWidget* theWrappedObject, Qt::FocusPolicy  policy);
   void setWindowTitle(QGraphicsWidget* theWrappedObject, const QString&  title);
   bool  windowFrameEvent(QGraphicsWidget* theWrappedObject, QEvent*  e);
   QSizeF  sizeHint(QGraphicsWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   void static_QGraphicsWidget_setTabOrder(QGraphicsWidget*  first, QGraphicsWidget*  second);
   void showEvent(QGraphicsWidget* theWrappedObject, QShowEvent*  event);
   Qt::FocusPolicy  focusPolicy(QGraphicsWidget* theWrappedObject) const;
   void hoverLeaveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void paintWindowFrame(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   void setLayout(QGraphicsWidget* theWrappedObject, QGraphicsLayout*  layout);
   void setGeometry(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void resize(QGraphicsWidget* theWrappedObject, const QSizeF&  size);
   QRectF  windowFrameGeometry(QGraphicsWidget* theWrappedObject) const;
   void setLayoutDirection(QGraphicsWidget* theWrappedObject, Qt::LayoutDirection  direction);
   bool  focusNextPrevChild(QGraphicsWidget* theWrappedObject, bool  next);
   void updateGeometry(QGraphicsWidget* theWrappedObject);
   void unsetWindowFrameMargins(QGraphicsWidget* theWrappedObject);
   QVariant  itemChange(QGraphicsWidget* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   void setContentsMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   void closeEvent(QGraphicsWidget* theWrappedObject, QCloseEvent*  event);
   void setAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute, bool  on = true);
   Qt::WindowType  windowType(QGraphicsWidget* theWrappedObject) const;
   void setStyle(QGraphicsWidget* theWrappedObject, QStyle*  style);
   Qt::WindowFrameSection  windowFrameSectionAt(QGraphicsWidget* theWrappedObject, const QPointF&  pos) const;
   Qt::WindowFlags  windowFlags(QGraphicsWidget* theWrappedObject) const;
   void focusInEvent(QGraphicsWidget* theWrappedObject, QFocusEvent*  event);
   QSizeF  size(QGraphicsWidget* theWrappedObject) const;
   void ungrabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void setFont(QGraphicsWidget* theWrappedObject, const QFont&  font);
   bool  testAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute) const;
   QString  windowTitle(QGraphicsWidget* theWrappedObject) const;
   QPalette  palette(QGraphicsWidget* theWrappedObject) const;
   QRectF  rect(QGraphicsWidget* theWrappedObject) const;
   void resize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h);
   void moveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneMoveEvent*  event);
   void setWindowFlags(QGraphicsWidget* theWrappedObject, Qt::WindowFlags  wFlags);
   void hideEvent(QGraphicsWidget* theWrappedObject, QHideEvent*  event);
   QGraphicsWidget*  focusWidget(QGraphicsWidget* theWrappedObject) const;
   QFont  font(QGraphicsWidget* theWrappedObject) const;
   void ungrabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   QVariant  propertyChange(QGraphicsWidget* theWrappedObject, const QString&  propertyName, const QVariant&  value);
   void paint(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   void adjustSize(QGraphicsWidget* theWrappedObject);
   void setGeometry(QGraphicsWidget* theWrappedObject, const QRectF&  rect);
   void setPalette(QGraphicsWidget* theWrappedObject, const QPalette&  palette);
   QRectF  boundingRect(QGraphicsWidget* theWrappedObject) const;
   void grabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void hoverMoveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   QPainterPath  shape(QGraphicsWidget* theWrappedObject) const;
   bool  event(QGraphicsWidget* theWrappedObject, QEvent*  event);
   QGraphicsLayout*  layout(QGraphicsWidget* theWrappedObject) const;
   void polishEvent(QGraphicsWidget* theWrappedObject);
   Qt::LayoutDirection  layoutDirection(QGraphicsWidget* theWrappedObject) const;
   QStyle*  style(QGraphicsWidget* theWrappedObject) const;
   void initStyleOption(QGraphicsWidget* theWrappedObject, QStyleOption*  option) const;
   void setWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   void getWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   bool  isActiveWindow(QGraphicsWidget* theWrappedObject) const;
   void grabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void focusOutEvent(QGraphicsWidget* theWrappedObject, QFocusEvent*  event);
   void getContentsMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   QRectF  windowFrameRect(QGraphicsWidget* theWrappedObject) const;
   int  type(QGraphicsWidget* theWrappedObject) const;
   bool  sceneEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void resizeEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event);
   void unsetLayoutDirection(QGraphicsWidget* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSWIDGET_H
