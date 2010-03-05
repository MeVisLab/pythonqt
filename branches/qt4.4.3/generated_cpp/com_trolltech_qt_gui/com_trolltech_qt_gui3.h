#include <PythonQt.h>
#include <QColor>
#include <QImage>
#include <QObject>
#include <QPainterPath>
#include <QRect>
#include <QSize>
#include <QStringList>
#include <QTextCursor>
#include <QTextFormat>
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
#include <qgraphicsitem.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicsview.h>
#include <qgraphicswidget.h>
#include <qgridlayout.h>
#include <qgroupbox.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qiconengine.h>
#include <qiconengineplugin.h>
#include <qimage.h>
#include <qimageiohandler.h>
#include <qimagereader.h>
#include <qimagewriter.h>
#include <qinputcontext.h>
#include <qinputcontextfactory.h>
#include <qinputcontextplugin.h>
#include <qinputdialog.h>
#include <qiodevice.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmatrix.h>
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
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtransform.h>
#include <qwidget.h>



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
   void setScreenPos(QGraphicsSceneHelpEvent* theWrappedObject, const QPoint&  pos);
   QPoint  screenPos(QGraphicsSceneHelpEvent* theWrappedObject) const;
   void setScenePos(QGraphicsSceneHelpEvent* theWrappedObject, const QPointF&  pos);
};





class PythonQtWrapper_QGraphicsSceneHoverEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneHoverEvent* new_QGraphicsSceneHoverEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneHoverEvent(QGraphicsSceneHoverEvent* obj) { delete obj; } 
   QPoint  lastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPointF  pos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   void setLastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos);
   void setLastScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   void setPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   QPointF  lastScenePos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPointF  lastPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   void setScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos);
   void setModifiers(QGraphicsSceneHoverEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setLastPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneHoverEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneHoverEvent* theWrappedObject) const;
   void setScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos);
};





class PythonQtWrapper_QGraphicsSceneMouseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneMouseEvent* new_QGraphicsSceneMouseEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneMouseEvent(QGraphicsSceneMouseEvent* obj) { delete obj; } 
   QPointF  buttonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
   void setLastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos);
   void setButtonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPoint&  pos);
   QPointF  lastScenePos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setModifiers(QGraphicsSceneMouseEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   QPointF  lastPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPoint  lastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setButtonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos);
   void setButton(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button);
   QPointF  scenePos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   void setLastScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   Qt::MouseButtons  buttons(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPointF  pos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setButtonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos);
   QPoint  screenPos(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setLastPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos);
   void setButtons(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButtons  buttons);
   QPoint  buttonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneMouseEvent* theWrappedObject) const;
   void setScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos);
   Qt::MouseButton  button(QGraphicsSceneMouseEvent* theWrappedObject) const;
   QPointF  buttonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const;
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
   QSizeF  oldSize(QGraphicsSceneResizeEvent* theWrappedObject) const;
   void setNewSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size);
   void setOldSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size);
   QSizeF  newSize(QGraphicsSceneResizeEvent* theWrappedObject) const;
};





class PythonQtWrapper_QGraphicsSceneWheelEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneWheelEvent* new_QGraphicsSceneWheelEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneWheelEvent(QGraphicsSceneWheelEvent* obj) { delete obj; } 
   Qt::MouseButtons  buttons(QGraphicsSceneWheelEvent* theWrappedObject) const;
   QPointF  pos(QGraphicsSceneWheelEvent* theWrappedObject) const;
   void setPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos);
   QPointF  scenePos(QGraphicsSceneWheelEvent* theWrappedObject) const;
   int  delta(QGraphicsSceneWheelEvent* theWrappedObject) const;
   void setModifiers(QGraphicsSceneWheelEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   Qt::Orientation  orientation(QGraphicsSceneWheelEvent* theWrappedObject) const;
   void setButtons(QGraphicsSceneWheelEvent* theWrappedObject, Qt::MouseButtons  buttons);
   void setDelta(QGraphicsSceneWheelEvent* theWrappedObject, int  delta);
   void setScreenPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPoint&  pos);
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneWheelEvent* theWrappedObject) const;
   void setScenePos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos);
   void setOrientation(QGraphicsSceneWheelEvent* theWrappedObject, Qt::Orientation  orientation);
   QPoint  screenPos(QGraphicsSceneWheelEvent* theWrappedObject) const;
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
   QFont  font(QGraphicsSimpleTextItem* theWrappedObject) const;
   QString  text(QGraphicsSimpleTextItem* theWrappedObject) const;
   QPainterPath  shape(QGraphicsSimpleTextItem* theWrappedObject) const;
   bool  isObscuredBy(QGraphicsSimpleTextItem* theWrappedObject, const QGraphicsItem*  item) const;
   bool  contains(QGraphicsSimpleTextItem* theWrappedObject, const QPointF&  point) const;
   void paint(QGraphicsSimpleTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   void setFont(QGraphicsSimpleTextItem* theWrappedObject, const QFont&  font);
   int  type(QGraphicsSimpleTextItem* theWrappedObject) const;
   QPainterPath  opaqueArea(QGraphicsSimpleTextItem* theWrappedObject) const;
   void setText(QGraphicsSimpleTextItem* theWrappedObject, const QString&  text);
   QRectF  boundingRect(QGraphicsSimpleTextItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsTextItem : public QGraphicsTextItem
{
public:
    PythonQtShell_QGraphicsTextItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsTextItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsTextItem(text, parent, scene),_wrapper(NULL) {};

virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual QPainterPath  shape() const;
virtual bool  contains(const QPointF&  point) const;
virtual int  type() const;
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual QVariant  extension(const QVariant&  variant) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual QRectF  boundingRect() const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual bool  sceneEvent(QEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual void advance(int  phase);
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsTextItem : public QGraphicsTextItem
{ public:
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mousePressEvent(event); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsTextItem::paint(painter, option, widget); }
inline void promoted_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsTextItem::hoverEnterEvent(event); }
inline QPainterPath  promoted_shape() const { return QGraphicsTextItem::shape(); }
inline bool  promoted_contains(const QPointF&  point) const { return QGraphicsTextItem::contains(point); }
inline int  promoted_type() const { return QGraphicsTextItem::type(); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mouseMoveEvent(event); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsTextItem::opaqueArea(); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return QGraphicsTextItem::extension(variant); }
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsTextItem::contextMenuEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mouseDoubleClickEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsTextItem::inputMethodQuery(query); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsTextItem::focusInEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mouseReleaseEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dragMoveEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsTextItem::hoverLeaveEvent(event); }
inline QRectF  promoted_boundingRect() const { return QGraphicsTextItem::boundingRect(); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsTextItem::inputMethodEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dragLeaveEvent(event); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dragEnterEvent(event); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dropEvent(event); }
inline bool  promoted_sceneEvent(QEvent*  event) { return QGraphicsTextItem::sceneEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsTextItem::focusOutEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsTextItem::hoverMoveEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsTextItem::keyReleaseEvent(event); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsTextItem::isObscuredBy(item); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsTextItem::keyPressEvent(event); }
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
   void mousePressEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   void hoverEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void setTextInteractionFlags(QGraphicsTextItem* theWrappedObject, Qt::TextInteractionFlags  flags);
   QPainterPath  shape(QGraphicsTextItem* theWrappedObject) const;
   QTextCursor  textCursor(QGraphicsTextItem* theWrappedObject) const;
   bool  contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const;
   void setOpenExternalLinks(QGraphicsTextItem* theWrappedObject, bool  open);
   void setHtml(QGraphicsTextItem* theWrappedObject, const QString&  html);
   void setFont(QGraphicsTextItem* theWrappedObject, const QFont&  font);
   int  type(QGraphicsTextItem* theWrappedObject) const;
   QString  toHtml(QGraphicsTextItem* theWrappedObject) const;
   void setDefaultTextColor(QGraphicsTextItem* theWrappedObject, const QColor&  c);
   void mouseMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void setTextWidth(QGraphicsTextItem* theWrappedObject, qreal  width);
   QPainterPath  opaqueArea(QGraphicsTextItem* theWrappedObject) const;
   QVariant  extension(QGraphicsTextItem* theWrappedObject, const QVariant&  variant) const;
   void contextMenuEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   QTextDocument*  document(QGraphicsTextItem* theWrappedObject) const;
   void mouseDoubleClickEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   QVariant  inputMethodQuery(QGraphicsTextItem* theWrappedObject, Qt::InputMethodQuery  query) const;
   bool  openExternalLinks(QGraphicsTextItem* theWrappedObject) const;
   void focusInEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event);
   void setPlainText(QGraphicsTextItem* theWrappedObject, const QString&  text);
   void mouseReleaseEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void setDocument(QGraphicsTextItem* theWrappedObject, QTextDocument*  document);
   void setTextCursor(QGraphicsTextItem* theWrappedObject, const QTextCursor&  cursor);
   void dragMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void hoverLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   QRectF  boundingRect(QGraphicsTextItem* theWrappedObject) const;
   void inputMethodEvent(QGraphicsTextItem* theWrappedObject, QInputMethodEvent*  event);
   Qt::TextInteractionFlags  textInteractionFlags(QGraphicsTextItem* theWrappedObject) const;
   void dragLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void dragEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   qreal  textWidth(QGraphicsTextItem* theWrappedObject) const;
   void adjustSize(QGraphicsTextItem* theWrappedObject);
   QColor  defaultTextColor(QGraphicsTextItem* theWrappedObject) const;
   void dropEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   bool  sceneEvent(QGraphicsTextItem* theWrappedObject, QEvent*  event);
   QFont  font(QGraphicsTextItem* theWrappedObject) const;
   void focusOutEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event);
   void hoverMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void keyReleaseEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event);
   bool  isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const;
   void keyPressEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event);
   QString  toPlainText(QGraphicsTextItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsView : public QGraphicsView
{
public:
    PythonQtShell_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent = 0):QGraphicsView(scene, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsView(QWidget*  parent = 0):QGraphicsView(parent),_wrapper(NULL) {};

virtual void drawBackground(QPainter*  painter, const QRectF&  rect);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void drawForeground(QPainter*  painter, const QRectF&  rect);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual bool  viewportEvent(QEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void paintEvent(QPaintEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void scrollContentsBy(int  dx, int  dy);
virtual bool  focusNextPrevChild(bool  next);
virtual bool  event(QEvent*  event);
virtual QPaintEngine*  paintEngine() const;
virtual void changeEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void enterEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsView : public QGraphicsView
{ public:
inline void promoted_drawBackground(QPainter*  painter, const QRectF&  rect) { QGraphicsView::drawBackground(painter, rect); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  event) { QGraphicsView::dragLeaveEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QGraphicsView::mouseReleaseEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsView::keyPressEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QGraphicsView::mousePressEvent(event); }
inline void promoted_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options) { QGraphicsView::drawItems(painter, numItems, items, options); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { QGraphicsView::dragMoveEvent(event); }
inline void promoted_drawForeground(QPainter*  painter, const QRectF&  rect) { QGraphicsView::drawForeground(painter, rect); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsView::inputMethodQuery(query); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsView::focusInEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QGraphicsView::resizeEvent(event); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  event) { QGraphicsView::dragEnterEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QGraphicsView::showEvent(event); }
inline void promoted_dropEvent(QDropEvent*  event) { QGraphicsView::dropEvent(event); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { QGraphicsView::mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QGraphicsView::mouseMoveEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsView::keyReleaseEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsView::inputMethodEvent(event); }
inline bool  promoted_viewportEvent(QEvent*  event) { return QGraphicsView::viewportEvent(event); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { QGraphicsView::contextMenuEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QGraphicsView::paintEvent(event); }
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
  DontClipPainter = QGraphicsView::DontClipPainter,   DontSavePainterState = QGraphicsView::DontSavePainterState,   DontAdjustForAntialiasing = QGraphicsView::DontAdjustForAntialiasing};
enum CacheModeFlag{
  CacheNone = QGraphicsView::CacheNone,   CacheBackground = QGraphicsView::CacheBackground};
Q_DECLARE_FLAGS(OptimizationFlags, OptimizationFlag)
Q_DECLARE_FLAGS(CacheMode, CacheModeFlag)
public slots:
QGraphicsView* new_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent = 0);
QGraphicsView* new_QGraphicsView(QWidget*  parent = 0);
void delete_QGraphicsView(QGraphicsView* obj) { delete obj; } 
   void setRubberBandSelectionMode(QGraphicsView* theWrappedObject, Qt::ItemSelectionMode  mode);
   void drawBackground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void dragLeaveEvent(QGraphicsView* theWrappedObject, QDragLeaveEvent*  event);
   void centerOn(QGraphicsView* theWrappedObject, qreal  x, qreal  y);
   void fitInView(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void setViewportUpdateMode(QGraphicsView* theWrappedObject, QGraphicsView::ViewportUpdateMode  mode);
   void resetCachedContent(QGraphicsView* theWrappedObject);
   void setTransform(QGraphicsView* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void render(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  target = QRectF(), const QRect&  source = QRect(), Qt::AspectRatioMode  aspectRatioMode = Qt::KeepAspectRatio);
   QRectF  sceneRect(QGraphicsView* theWrappedObject) const;
   QGraphicsView::ViewportUpdateMode  viewportUpdateMode(QGraphicsView* theWrappedObject) const;
   void setTransformationAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor);
   void mouseReleaseEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   QGraphicsView::DragMode  dragMode(QGraphicsView* theWrappedObject) const;
   void ensureVisible(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, int  xmargin = 50, int  ymargin = 50);
   void ensureVisible(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin = 50, int  ymargin = 50);
   void setScene(QGraphicsView* theWrappedObject, QGraphicsScene*  scene);
   void setInteractive(QGraphicsView* theWrappedObject, bool  allowed);
   void ensureVisible(QGraphicsView* theWrappedObject, const QRectF&  rect, int  xmargin = 50, int  ymargin = 50);
   void keyPressEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event);
   void setOptimizationFlag(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlag  flag, bool  enabled = true);
   QBrush  foregroundBrush(QGraphicsView* theWrappedObject) const;
   void setAlignment(QGraphicsView* theWrappedObject, Qt::Alignment  alignment);
   void rotate(QGraphicsView* theWrappedObject, qreal  angle);
   void setMatrix(QGraphicsView* theWrappedObject, const QMatrix&  matrix, bool  combine = false);
   void mousePressEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   QGraphicsView::CacheMode  cacheMode(QGraphicsView* theWrappedObject) const;
   void drawItems(QGraphicsView* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options);
   void setRenderHints(QGraphicsView* theWrappedObject, QPainter::RenderHints  hints);
   void dragMoveEvent(QGraphicsView* theWrappedObject, QDragMoveEvent*  event);
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToScene(QGraphicsView* theWrappedObject, int  x, int  y) const;
   QPoint  mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y) const;
   QPainterPath  mapFromScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, const QRect&  rect) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h) const;
   QPoint  mapFromScene(QGraphicsView* theWrappedObject, const QPointF&  point) const;
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, const QPolygonF&  polygon) const;
   QPainterPath  mapToScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, const QPolygon&  polygon) const;
   QPointF  mapToScene(QGraphicsView* theWrappedObject, const QPoint&  point) const;
   QPainter::RenderHints  renderHints(QGraphicsView* theWrappedObject) const;
   void drawForeground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void setResizeAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor);
   QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, int  x, int  y) const;
   QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPolygon&  polygon, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QGraphicsView::OptimizationFlags  optimizationFlags(QGraphicsView* theWrappedObject) const;
   QTransform  viewportTransform(QGraphicsView* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QGraphicsScene*  scene(QGraphicsView* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QRect&  rect, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y) const;
   void setCacheMode(QGraphicsView* theWrappedObject, QGraphicsView::CacheMode  mode);
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
   QVariant  inputMethodQuery(QGraphicsView* theWrappedObject, Qt::InputMethodQuery  query) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject) const;
   void focusInEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event);
   void resizeEvent(QGraphicsView* theWrappedObject, QResizeEvent*  event);
   void shear(QGraphicsView* theWrappedObject, qreal  sh, qreal  sv);
   void dragEnterEvent(QGraphicsView* theWrappedObject, QDragEnterEvent*  event);
   void showEvent(QGraphicsView* theWrappedObject, QShowEvent*  event);
   QMatrix  matrix(QGraphicsView* theWrappedObject) const;
   void setRenderHint(QGraphicsView* theWrappedObject, QPainter::RenderHint  hint, bool  enabled = true);
   void dropEvent(QGraphicsView* theWrappedObject, QDropEvent*  event);
   void resetMatrix(QGraphicsView* theWrappedObject);
   Qt::Alignment  alignment(QGraphicsView* theWrappedObject) const;
   bool  isInteractive(QGraphicsView* theWrappedObject) const;
   void fitInView(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void mouseDoubleClickEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   Qt::ItemSelectionMode  rubberBandSelectionMode(QGraphicsView* theWrappedObject) const;
   void fitInView(QGraphicsView* theWrappedObject, const QRectF&  rect, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void translate(QGraphicsView* theWrappedObject, qreal  dx, qreal  dy);
   void scale(QGraphicsView* theWrappedObject, qreal  sx, qreal  sy);
   void mouseMoveEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   QSize  sizeHint(QGraphicsView* theWrappedObject) const;
   QGraphicsView::ViewportAnchor  transformationAnchor(QGraphicsView* theWrappedObject) const;
   void keyReleaseEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event);
   void setOptimizationFlags(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlags  flags);
   void resetTransform(QGraphicsView* theWrappedObject);
   void centerOn(QGraphicsView* theWrappedObject, const QPointF&  pos);
   void centerOn(QGraphicsView* theWrappedObject, const QGraphicsItem*  item);
   void setSceneRect(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setSceneRect(QGraphicsView* theWrappedObject, const QRectF&  rect);
   void inputMethodEvent(QGraphicsView* theWrappedObject, QInputMethodEvent*  event);
   bool  viewportEvent(QGraphicsView* theWrappedObject, QEvent*  event);
   void setForegroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush);
   void setDragMode(QGraphicsView* theWrappedObject, QGraphicsView::DragMode  mode);
   void contextMenuEvent(QGraphicsView* theWrappedObject, QContextMenuEvent*  event);
   QTransform  transform(QGraphicsView* theWrappedObject) const;
   void setBackgroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush);
   void paintEvent(QGraphicsView* theWrappedObject, QPaintEvent*  event);
   void wheelEvent(QGraphicsView* theWrappedObject, QWheelEvent*  event);
   QGraphicsView::ViewportAnchor  resizeAnchor(QGraphicsView* theWrappedObject) const;
   QBrush  backgroundBrush(QGraphicsView* theWrappedObject) const;
   void focusOutEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event);
   void scrollContentsBy(QGraphicsView* theWrappedObject, int  dx, int  dy);
   bool  focusNextPrevChild(QGraphicsView* theWrappedObject, bool  next);
   bool  event(QGraphicsView* theWrappedObject, QEvent*  event);
};





class PythonQtShell_QGraphicsWidget : public QGraphicsWidget
{
public:
    PythonQtShell_QGraphicsWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0):QGraphicsWidget(parent, wFlags),_wrapper(NULL) {};

virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual bool  sceneEvent(QEvent*  event);
virtual int  type() const;
virtual void changeEvent(QEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void moveEvent(QGraphicsSceneMoveEvent*  event);
virtual void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual QVariant  propertyChange(const QString&  propertyName, const QVariant&  value);
virtual void polishEvent();
virtual void grabKeyboardEvent(QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual bool  windowFrameEvent(QEvent*  e);
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual QRectF  boundingRect() const;
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void ungrabMouseEvent(QEvent*  event);
virtual void grabMouseEvent(QEvent*  event);
virtual void updateGeometry();
virtual void initStyleOption(QStyleOption*  option) const;
virtual Qt::WindowFrameSection  windowFrameSectionAt(const QPointF&  pos) const;
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual QPainterPath  shape() const;
virtual void resizeEvent(QGraphicsSceneResizeEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void setGeometry(const QRectF&  rect);
virtual void ungrabKeyboardEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual void advance(int  phase);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsWidget : public QGraphicsWidget
{ public:
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsWidget::itemChange(change, value); }
inline bool  promoted_sceneEvent(QEvent*  event) { return QGraphicsWidget::sceneEvent(event); }
inline int  promoted_type() const { return QGraphicsWidget::type(); }
inline void promoted_changeEvent(QEvent*  event) { QGraphicsWidget::changeEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { QGraphicsWidget::hideEvent(event); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsWidget::sizeHint(which, constraint); }
inline void promoted_moveEvent(QGraphicsSceneMoveEvent*  event) { QGraphicsWidget::moveEvent(event); }
inline void promoted_paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0) { QGraphicsWidget::paintWindowFrame(painter, option, widget); }
inline QVariant  promoted_propertyChange(const QString&  propertyName, const QVariant&  value) { return QGraphicsWidget::propertyChange(propertyName, value); }
inline void promoted_polishEvent() { QGraphicsWidget::polishEvent(); }
inline void promoted_grabKeyboardEvent(QEvent*  event) { QGraphicsWidget::grabKeyboardEvent(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsWidget::focusInEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QGraphicsWidget::showEvent(event); }
inline void promoted_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsWidget::getContentsMargins(left, top, right, bottom); }
inline bool  promoted_windowFrameEvent(QEvent*  e) { return QGraphicsWidget::windowFrameEvent(e); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0) { QGraphicsWidget::paint(painter, option, widget); }
inline QRectF  promoted_boundingRect() const { return QGraphicsWidget::boundingRect(); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsWidget::hoverMoveEvent(event); }
inline void promoted_ungrabMouseEvent(QEvent*  event) { QGraphicsWidget::ungrabMouseEvent(event); }
inline void promoted_grabMouseEvent(QEvent*  event) { QGraphicsWidget::grabMouseEvent(event); }
inline void promoted_updateGeometry() { QGraphicsWidget::updateGeometry(); }
inline void promoted_initStyleOption(QStyleOption*  option) const { QGraphicsWidget::initStyleOption(option); }
inline Qt::WindowFrameSection  promoted_windowFrameSectionAt(const QPointF&  pos) const { return QGraphicsWidget::windowFrameSectionAt(pos); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsWidget::hoverLeaveEvent(event); }
inline QPainterPath  promoted_shape() const { return QGraphicsWidget::shape(); }
inline void promoted_resizeEvent(QGraphicsSceneResizeEvent*  event) { QGraphicsWidget::resizeEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsWidget::focusOutEvent(event); }
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
   void getWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   bool  testAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute) const;
   QVariant  itemChange(QGraphicsWidget* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   bool  sceneEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   int  type(QGraphicsWidget* theWrappedObject) const;
   QRectF  rect(QGraphicsWidget* theWrappedObject) const;
   void setPalette(QGraphicsWidget* theWrappedObject, const QPalette&  palette);
   void setGeometry(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   Qt::LayoutDirection  layoutDirection(QGraphicsWidget* theWrappedObject) const;
   QString  windowTitle(QGraphicsWidget* theWrappedObject) const;
   void changeEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void hideEvent(QGraphicsWidget* theWrappedObject, QHideEvent*  event);
   void resize(QGraphicsWidget* theWrappedObject, const QSizeF&  size);
   void resize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h);
   QSizeF  size(QGraphicsWidget* theWrappedObject) const;
   QSizeF  sizeHint(QGraphicsWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   void moveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneMoveEvent*  event);
   void paintWindowFrame(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   QVariant  propertyChange(QGraphicsWidget* theWrappedObject, const QString&  propertyName, const QVariant&  value);
   void polishEvent(QGraphicsWidget* theWrappedObject);
   void setAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute, bool  on = true);
   void grabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void focusInEvent(QGraphicsWidget* theWrappedObject, QFocusEvent*  event);
   void showEvent(QGraphicsWidget* theWrappedObject, QShowEvent*  event);
   void setWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   void getContentsMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void setStyle(QGraphicsWidget* theWrappedObject, QStyle*  style);
   bool  windowFrameEvent(QGraphicsWidget* theWrappedObject, QEvent*  e);
   void setWindowFlags(QGraphicsWidget* theWrappedObject, Qt::WindowFlags  wFlags);
   void setLayout(QGraphicsWidget* theWrappedObject, QGraphicsLayout*  layout);
   void paint(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   bool  isActiveWindow(QGraphicsWidget* theWrappedObject) const;
   void unsetLayoutDirection(QGraphicsWidget* theWrappedObject);
   QPalette  palette(QGraphicsWidget* theWrappedObject) const;
   QStyle*  style(QGraphicsWidget* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsWidget* theWrappedObject) const;
   void setLayoutDirection(QGraphicsWidget* theWrappedObject, Qt::LayoutDirection  direction);
   void hoverMoveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void ungrabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void grabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void updateGeometry(QGraphicsWidget* theWrappedObject);
   void initStyleOption(QGraphicsWidget* theWrappedObject, QStyleOption*  option) const;
   void setWindowTitle(QGraphicsWidget* theWrappedObject, const QString&  title);
   Qt::WindowFrameSection  windowFrameSectionAt(QGraphicsWidget* theWrappedObject, const QPointF&  pos) const;
   void setContentsMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   void hoverLeaveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   QPainterPath  shape(QGraphicsWidget* theWrappedObject) const;
   QRectF  windowFrameGeometry(QGraphicsWidget* theWrappedObject) const;
   Qt::FocusPolicy  focusPolicy(QGraphicsWidget* theWrappedObject) const;
   void resizeEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event);
   void focusOutEvent(QGraphicsWidget* theWrappedObject, QFocusEvent*  event);
   QFont  font(QGraphicsWidget* theWrappedObject) const;
   QGraphicsWidget*  focusWidget(QGraphicsWidget* theWrappedObject) const;
   void closeEvent(QGraphicsWidget* theWrappedObject, QCloseEvent*  event);
   void setFocusPolicy(QGraphicsWidget* theWrappedObject, Qt::FocusPolicy  policy);
   QRectF  windowFrameRect(QGraphicsWidget* theWrappedObject) const;
   void setFont(QGraphicsWidget* theWrappedObject, const QFont&  font);
   void setGeometry(QGraphicsWidget* theWrappedObject, const QRectF&  rect);
   void adjustSize(QGraphicsWidget* theWrappedObject);
   void unsetWindowFrameMargins(QGraphicsWidget* theWrappedObject);
   void ungrabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void static_QGraphicsWidget_setTabOrder(QGraphicsWidget*  first, QGraphicsWidget*  second);
   Qt::WindowFlags  windowFlags(QGraphicsWidget* theWrappedObject) const;
   Qt::WindowType  windowType(QGraphicsWidget* theWrappedObject) const;
   bool  event(QGraphicsWidget* theWrappedObject, QEvent*  event);
   bool  focusNextPrevChild(QGraphicsWidget* theWrappedObject, bool  next);
   QGraphicsLayout*  layout(QGraphicsWidget* theWrappedObject) const;
};





class PythonQtShell_QGridLayout : public QGridLayout
{
public:
    PythonQtShell_QGridLayout():QGridLayout(),_wrapper(NULL) {};
    PythonQtShell_QGridLayout(QWidget*  parent):QGridLayout(parent),_wrapper(NULL) {};

virtual QLayoutItem*  takeAt(int  index);
virtual QSize  minimumSize() const;
virtual Qt::Orientations  expandingDirections() const;
virtual QLayoutItem*  itemAt(int  index) const;
virtual void setGeometry(const QRect&  arg__1);
virtual int  count() const;
virtual void addItem(QLayoutItem*  arg__1);
virtual QSize  maximumSize() const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual QLayout*  layout();
virtual void childEvent(QChildEvent*  e);
virtual QRect  geometry() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGridLayout : public QGridLayout
{ public:
inline QLayoutItem*  promoted_takeAt(int  index) { return QGridLayout::takeAt(index); }
inline QSize  promoted_minimumSize() const { return QGridLayout::minimumSize(); }
inline Qt::Orientations  promoted_expandingDirections() const { return QGridLayout::expandingDirections(); }
inline QLayoutItem*  promoted_itemAt(int  index) const { return QGridLayout::itemAt(index); }
inline void promoted_setGeometry(const QRect&  arg__1) { QGridLayout::setGeometry(arg__1); }
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
   QSize  sizeHint(QGridLayout* theWrappedObject) const;
   int  horizontalSpacing(QGridLayout* theWrappedObject) const;
   int  columnStretch(QGridLayout* theWrappedObject, int  column) const;
   void setOriginCorner(QGridLayout* theWrappedObject, Qt::Corner  arg__1);
   QLayoutItem*  itemAtPosition(QGridLayout* theWrappedObject, int  row, int  column) const;
   int  rowCount(QGridLayout* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QGridLayout* theWrappedObject) const;
   bool  hasHeightForWidth(QGridLayout* theWrappedObject) const;
   QLayoutItem*  itemAt(QGridLayout* theWrappedObject, int  index) const;
   void setVerticalSpacing(QGridLayout* theWrappedObject, int  spacing);
   void setGeometry(QGridLayout* theWrappedObject, const QRect&  arg__1);
   int  spacing(QGridLayout* theWrappedObject) const;
   int  rowStretch(QGridLayout* theWrappedObject, int  row) const;
   int  columnMinimumWidth(QGridLayout* theWrappedObject, int  column) const;
   void setDefaultPositioning(QGridLayout* theWrappedObject, int  n, Qt::Orientation  orient);
   void addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = 0);
   int  columnCount(QGridLayout* theWrappedObject) const;
   Qt::Corner  originCorner(QGridLayout* theWrappedObject) const;
   void addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, Qt::Alignment  arg__4 = 0);
   void addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, Qt::Alignment  arg__4 = 0);
   int  minimumHeightForWidth(QGridLayout* theWrappedObject, int  arg__1) const;
   int  verticalSpacing(QGridLayout* theWrappedObject) const;
   int  heightForWidth(QGridLayout* theWrappedObject, int  arg__1) const;
   QRect  cellRect(QGridLayout* theWrappedObject, int  row, int  column) const;
   int  count(QGridLayout* theWrappedObject) const;
   void addItem(QGridLayout* theWrappedObject, QLayoutItem*  arg__1);
   void getItemPosition(QGridLayout* theWrappedObject, int  idx, int*  row, int*  column, int*  rowSpan, int*  columnSpan);
   void addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = 0);
   void addItem(QGridLayout* theWrappedObject, QLayoutItem*  item, int  row, int  column, int  rowSpan = 1, int  columnSpan = 1, Qt::Alignment  arg__6 = 0);
   QSize  maximumSize(QGridLayout* theWrappedObject) const;
   int  rowMinimumHeight(QGridLayout* theWrappedObject, int  row) const;
   void setHorizontalSpacing(QGridLayout* theWrappedObject, int  spacing);
   void setSpacing(QGridLayout* theWrappedObject, int  spacing);
   void setRowStretch(QGridLayout* theWrappedObject, int  row, int  stretch);
   void setRowMinimumHeight(QGridLayout* theWrappedObject, int  row, int  minSize);
   void invalidate(QGridLayout* theWrappedObject);
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
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void paintEvent(QPaintEvent*  event);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual QSize  sizeHint() const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
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
inline void promoted_mousePressEvent(QMouseEvent*  event) { QGroupBox::mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QGroupBox::mouseReleaseEvent(event); }
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
   Qt::Alignment  alignment(QGroupBox* theWrappedObject) const;
   void changeEvent(QGroupBox* theWrappedObject, QEvent*  event);
   void setCheckable(QGroupBox* theWrappedObject, bool  checkable);
   void childEvent(QGroupBox* theWrappedObject, QChildEvent*  event);
   void mouseMoveEvent(QGroupBox* theWrappedObject, QMouseEvent*  event);
   bool  isCheckable(QGroupBox* theWrappedObject) const;
   bool  isChecked(QGroupBox* theWrappedObject) const;
   void mousePressEvent(QGroupBox* theWrappedObject, QMouseEvent*  event);
   void mouseReleaseEvent(QGroupBox* theWrappedObject, QMouseEvent*  event);
   void setFlat(QGroupBox* theWrappedObject, bool  flat);
   void setTitle(QGroupBox* theWrappedObject, const QString&  title);
   QSize  minimumSizeHint(QGroupBox* theWrappedObject) const;
   void resizeEvent(QGroupBox* theWrappedObject, QResizeEvent*  event);
   void paintEvent(QGroupBox* theWrappedObject, QPaintEvent*  event);
};





class PythonQtShell_QHBoxLayout : public QHBoxLayout
{
public:
    PythonQtShell_QHBoxLayout():QHBoxLayout(),_wrapper(NULL) {};
    PythonQtShell_QHBoxLayout(QWidget*  parent):QHBoxLayout(parent),_wrapper(NULL) {};

virtual QLayoutItem*  itemAt(int  arg__1) const;
virtual int  count() const;
virtual void invalidate();
virtual QSize  maximumSize() const;
virtual Qt::Orientations  expandingDirections() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QLayoutItem*  takeAt(int  arg__1);
virtual QSize  minimumSize() const;
virtual void addItem(QLayoutItem*  arg__1);
virtual bool  isEmpty() const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual QLayout*  layout();
virtual void childEvent(QChildEvent*  e);
virtual QRect  geometry() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
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

virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual int  horizontalOffset() const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void updateGeometries();
virtual void setModel(QAbstractItemModel*  model);
virtual void reset();
virtual QSize  sectionSizeFromContents(int  logicalIndex) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void doItemsLayout();
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  old);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual bool  viewportEvent(QEvent*  e);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual void paintEvent(QPaintEvent*  e);
virtual int  verticalOffset() const;
virtual void paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const;
virtual bool  event(QEvent*  e);
virtual void setSelection(const QRect&  arg__1, QItemSelectionModel::SelectionFlags  arg__2);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual void verticalScrollbarValueChanged(int  value);
virtual void selectAll();
virtual void editorDestroyed(QObject*  editor);
virtual void updateEditorData();
virtual int  sizeHintForColumn(int  column) const;
virtual void commitData(QWidget*  editor);
virtual void dropEvent(QDropEvent*  event);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void keyboardSearch(const QString&  search);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual QStyleOptionViewItem  viewOptions() const;
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void verticalScrollbarAction(int  action);
virtual void updateEditorGeometries();
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual int  sizeHintForRow(int  row) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void horizontalScrollbarValueChanged(int  value);
virtual bool  focusNextPrevChild(bool  next);
virtual void horizontalScrollbarAction(int  action);
virtual void setRootIndex(const QModelIndex&  index);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void timerEvent(QTimerEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QHeaderView : public QHeaderView
{ public:
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QHeaderView::isIndexHidden(index); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QHeaderView::mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QHeaderView::mouseReleaseEvent(e); }
inline int  promoted_horizontalOffset() const { return QHeaderView::horizontalOffset(); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QHeaderView::visualRegionForSelection(selection); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QHeaderView::rowsInserted(parent, start, end); }
inline void promoted_updateGeometries() { QHeaderView::updateGeometries(); }
inline void promoted_setModel(QAbstractItemModel*  model) { QHeaderView::setModel(model); }
inline void promoted_reset() { QHeaderView::reset(); }
inline QSize  promoted_sectionSizeFromContents(int  logicalIndex) const { return QHeaderView::sectionSizeFromContents(logicalIndex); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { QHeaderView::mouseDoubleClickEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QHeaderView::mouseMoveEvent(e); }
inline void promoted_doItemsLayout() { QHeaderView::doItemsLayout(); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QHeaderView::visualRect(index); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  old) { QHeaderView::currentChanged(current, old); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QHeaderView::indexAt(p); }
inline bool  promoted_viewportEvent(QEvent*  e) { return QHeaderView::viewportEvent(e); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QHeaderView::scrollContentsBy(dx, dy); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight) { QHeaderView::dataChanged(topLeft, bottomRight); }
inline void promoted_paintEvent(QPaintEvent*  e) { QHeaderView::paintEvent(e); }
inline int  promoted_verticalOffset() const { return QHeaderView::verticalOffset(); }
inline void promoted_paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const { QHeaderView::paintSection(painter, rect, logicalIndex); }
inline bool  promoted_event(QEvent*  e) { return QHeaderView::event(e); }
inline void promoted_setSelection(const QRect&  arg__1, QItemSelectionModel::SelectionFlags  arg__2) { QHeaderView::setSelection(arg__1, arg__2); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint) { QHeaderView::scrollTo(index, hint); }
};

class PythonQtWrapper_QHeaderView : public QObject
{ Q_OBJECT
public:
public slots:
QHeaderView* new_QHeaderView(Qt::Orientation  orientation, QWidget*  parent = 0);
void delete_QHeaderView(QHeaderView* obj) { delete obj; } 
   QSize  sizeHint(QHeaderView* theWrappedObject) const;
   bool  isIndexHidden(QHeaderView* theWrappedObject, const QModelIndex&  index) const;
   void mousePressEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   Qt::SortOrder  sortIndicatorOrder(QHeaderView* theWrappedObject) const;
   bool  isSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex) const;
   QByteArray  saveState(QHeaderView* theWrappedObject) const;
   Qt::Alignment  defaultAlignment(QHeaderView* theWrappedObject) const;
   void swapSections(QHeaderView* theWrappedObject, int  first, int  second);
   int  stretchSectionCount(QHeaderView* theWrappedObject) const;
   bool  isClickable(QHeaderView* theWrappedObject) const;
   void setCascadingSectionResizes(QHeaderView* theWrappedObject, bool  enable);
   bool  isSortIndicatorShown(QHeaderView* theWrappedObject) const;
   void mouseReleaseEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   bool  highlightSections(QHeaderView* theWrappedObject) const;
   int  sectionSize(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  horizontalOffset(QHeaderView* theWrappedObject) const;
   void setClickable(QHeaderView* theWrappedObject, bool  clickable);
   QRegion  visualRegionForSelection(QHeaderView* theWrappedObject, const QItemSelection&  selection) const;
   void rowsInserted(QHeaderView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   void updateGeometries(QHeaderView* theWrappedObject);
   void setModel(QHeaderView* theWrappedObject, QAbstractItemModel*  model);
   Qt::Orientation  orientation(QHeaderView* theWrappedObject) const;
   void resizeSections(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
   void setDefaultSectionSize(QHeaderView* theWrappedObject, int  size);
   int  length(QHeaderView* theWrappedObject) const;
   int  hiddenSectionCount(QHeaderView* theWrappedObject) const;
   void reset(QHeaderView* theWrappedObject);
   int  sectionSizeHint(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  offset(QHeaderView* theWrappedObject) const;
   int  defaultSectionSize(QHeaderView* theWrappedObject) const;
   int  visualIndexAt(QHeaderView* theWrappedObject, int  position) const;
   void setHighlightSections(QHeaderView* theWrappedObject, bool  highlight);
   bool  sectionsMoved(QHeaderView* theWrappedObject) const;
   int  logicalIndex(QHeaderView* theWrappedObject, int  visualIndex) const;
   int  visualIndex(QHeaderView* theWrappedObject, int  logicalIndex) const;
   QHeaderView::ResizeMode  resizeMode(QHeaderView* theWrappedObject, int  logicalIndex) const;
   void moveSection(QHeaderView* theWrappedObject, int  from, int  to);
   int  sortIndicatorSection(QHeaderView* theWrappedObject) const;
   bool  isMovable(QHeaderView* theWrappedObject) const;
   void hideSection(QHeaderView* theWrappedObject, int  logicalIndex);
   QSize  sectionSizeFromContents(QHeaderView* theWrappedObject, int  logicalIndex) const;
   void mouseDoubleClickEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   void mouseMoveEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   int  sectionViewportPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
   void setMinimumSectionSize(QHeaderView* theWrappedObject, int  size);
   bool  stretchLastSection(QHeaderView* theWrappedObject) const;
   void setResizeMode(QHeaderView* theWrappedObject, int  logicalIndex, QHeaderView::ResizeMode  mode);
   void setResizeMode(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
   int  sectionPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
   bool  cascadingSectionResizes(QHeaderView* theWrappedObject) const;
   void doItemsLayout(QHeaderView* theWrappedObject);
   QRect  visualRect(QHeaderView* theWrappedObject, const QModelIndex&  index) const;
   void setMovable(QHeaderView* theWrappedObject, bool  movable);
   void currentChanged(QHeaderView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  old);
   QModelIndex  indexAt(QHeaderView* theWrappedObject, const QPoint&  p) const;
   bool  viewportEvent(QHeaderView* theWrappedObject, QEvent*  e);
   bool  sectionsHidden(QHeaderView* theWrappedObject) const;
   void showSection(QHeaderView* theWrappedObject, int  logicalIndex);
   bool  restoreState(QHeaderView* theWrappedObject, const QByteArray&  state);
   void scrollContentsBy(QHeaderView* theWrappedObject, int  dx, int  dy);
   void setSortIndicatorShown(QHeaderView* theWrappedObject, bool  show);
   void resizeSection(QHeaderView* theWrappedObject, int  logicalIndex, int  size);
   void setSortIndicator(QHeaderView* theWrappedObject, int  logicalIndex, Qt::SortOrder  order);
   void setSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex, bool  hide);
   void dataChanged(QHeaderView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   void paintEvent(QHeaderView* theWrappedObject, QPaintEvent*  e);
   int  count(QHeaderView* theWrappedObject) const;
   int  verticalOffset(QHeaderView* theWrappedObject) const;
   void setDefaultAlignment(QHeaderView* theWrappedObject, Qt::Alignment  alignment);
   void paintSection(QHeaderView* theWrappedObject, QPainter*  painter, const QRect&  rect, int  logicalIndex) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, const QPoint&  pos) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, int  x, int  y) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, int  position) const;
   bool  event(QHeaderView* theWrappedObject, QEvent*  e);
   void setSelection(QHeaderView* theWrappedObject, const QRect&  arg__1, QItemSelectionModel::SelectionFlags  arg__2);
   int  minimumSectionSize(QHeaderView* theWrappedObject) const;
   void scrollTo(QHeaderView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
   void setStretchLastSection(QHeaderView* theWrappedObject, bool  stretch);
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

virtual QPixmap  pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual void addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state);
virtual void paint(QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state);
virtual QSize  actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual void addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIconEngine : public QIconEngine
{ public:
inline QPixmap  promoted_pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::pixmap(size, mode, state); }
inline void promoted_addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state) { QIconEngine::addPixmap(pixmap, mode, state); }
inline QSize  promoted_actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::actualSize(size, mode, state); }
inline void promoted_addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { QIconEngine::addFile(fileName, size, mode, state); }
};

class PythonQtWrapper_QIconEngine : public QObject
{ Q_OBJECT
public:
public slots:
QIconEngine* new_QIconEngine();
void delete_QIconEngine(QIconEngine* obj) { delete obj; } 
   QPixmap  pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   void addPixmap(QIconEngine* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state);
   QSize  actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   void addFile(QIconEngine* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
};





class PythonQtShell_QIconEnginePluginV2 : public QIconEnginePluginV2
{
public:
    PythonQtShell_QIconEnginePluginV2(QObject*  parent = 0):QIconEnginePluginV2(parent),_wrapper(NULL) {};

virtual QIconEngineV2*  create(const QString&  filename = QString());
virtual QStringList  keys() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QIconEnginePluginV2 : public QObject
{ Q_OBJECT
public:
public slots:
QIconEnginePluginV2* new_QIconEnginePluginV2(QObject*  parent = 0);
void delete_QIconEnginePluginV2(QIconEnginePluginV2* obj) { delete obj; } 
};





class PythonQtShell_QImageIOHandler : public QImageIOHandler
{
public:
    PythonQtShell_QImageIOHandler():QImageIOHandler(),_wrapper(NULL) {};

virtual int  imageCount() const;
virtual int  nextImageDelay() const;
virtual QRect  currentImageRect() const;
virtual bool  read(QImage*  image);
virtual int  currentImageNumber() const;
virtual bool  write(const QImage&  image);
virtual bool  jumpToNextImage();
virtual QByteArray  name() const;
virtual QVariant  option(QImageIOHandler::ImageOption  option) const;
virtual int  loopCount() const;
virtual bool  supportsOption(QImageIOHandler::ImageOption  option) const;
virtual bool  canRead() const;
virtual void setOption(QImageIOHandler::ImageOption  option, const QVariant&  value);
virtual bool  jumpToImage(int  imageNumber);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QImageIOHandler : public QImageIOHandler
{ public:
inline int  promoted_imageCount() const { return QImageIOHandler::imageCount(); }
inline int  promoted_nextImageDelay() const { return QImageIOHandler::nextImageDelay(); }
inline QRect  promoted_currentImageRect() const { return QImageIOHandler::currentImageRect(); }
inline int  promoted_currentImageNumber() const { return QImageIOHandler::currentImageNumber(); }
inline bool  promoted_write(const QImage&  image) { return QImageIOHandler::write(image); }
inline bool  promoted_jumpToNextImage() { return QImageIOHandler::jumpToNextImage(); }
inline QVariant  promoted_option(QImageIOHandler::ImageOption  option) const { return QImageIOHandler::option(option); }
inline int  promoted_loopCount() const { return QImageIOHandler::loopCount(); }
inline bool  promoted_supportsOption(QImageIOHandler::ImageOption  option) const { return QImageIOHandler::supportsOption(option); }
inline void promoted_setOption(QImageIOHandler::ImageOption  option, const QVariant&  value) { QImageIOHandler::setOption(option, value); }
inline bool  promoted_jumpToImage(int  imageNumber) { return QImageIOHandler::jumpToImage(imageNumber); }
};

class PythonQtWrapper_QImageIOHandler : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageOption )
enum ImageOption{
  Size = QImageIOHandler::Size,   ClipRect = QImageIOHandler::ClipRect,   Description = QImageIOHandler::Description,   ScaledClipRect = QImageIOHandler::ScaledClipRect,   ScaledSize = QImageIOHandler::ScaledSize,   CompressionRatio = QImageIOHandler::CompressionRatio,   Gamma = QImageIOHandler::Gamma,   Quality = QImageIOHandler::Quality,   Name = QImageIOHandler::Name,   SubType = QImageIOHandler::SubType,   IncrementalReading = QImageIOHandler::IncrementalReading,   Endianness = QImageIOHandler::Endianness,   Animation = QImageIOHandler::Animation,   BackgroundColor = QImageIOHandler::BackgroundColor};
public slots:
QImageIOHandler* new_QImageIOHandler();
void delete_QImageIOHandler(QImageIOHandler* obj) { delete obj; } 
   int  imageCount(QImageIOHandler* theWrappedObject) const;
   int  nextImageDelay(QImageIOHandler* theWrappedObject) const;
   void setDevice(QImageIOHandler* theWrappedObject, QIODevice*  device);
   QRect  currentImageRect(QImageIOHandler* theWrappedObject) const;
   void setFormat(QImageIOHandler* theWrappedObject, const QByteArray&  format);
   int  currentImageNumber(QImageIOHandler* theWrappedObject) const;
   bool  write(QImageIOHandler* theWrappedObject, const QImage&  image);
   bool  jumpToNextImage(QImageIOHandler* theWrappedObject);
   QByteArray  format(QImageIOHandler* theWrappedObject) const;
   QVariant  option(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   int  loopCount(QImageIOHandler* theWrappedObject) const;
   bool  supportsOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QIODevice*  device(QImageIOHandler* theWrappedObject) const;
   void setOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option, const QVariant&  value);
   bool  jumpToImage(QImageIOHandler* theWrappedObject, int  imageNumber);
};





class PythonQtShell_QImageIOPlugin : public QImageIOPlugin
{
public:
    PythonQtShell_QImageIOPlugin(QObject*  parent = 0):QImageIOPlugin(parent),_wrapper(NULL) {};

virtual QImageIOHandler*  create(QIODevice*  device, const QByteArray&  format = QByteArray()) const;
virtual QImageIOPlugin::Capabilities  capabilities(QIODevice*  device, const QByteArray&  format) const;
virtual QStringList  keys() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QImageIOPlugin : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Capability )
Q_FLAGS(Capabilities )
enum Capability{
  CanRead = QImageIOPlugin::CanRead,   CanWrite = QImageIOPlugin::CanWrite,   CanReadIncremental = QImageIOPlugin::CanReadIncremental};
Q_DECLARE_FLAGS(Capabilities, Capability)
public slots:
QImageIOPlugin* new_QImageIOPlugin(QObject*  parent = 0);
void delete_QImageIOPlugin(QImageIOPlugin* obj) { delete obj; } 
};





class PythonQtWrapper_QImageReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageReaderError )
enum ImageReaderError{
  UnknownError = QImageReader::UnknownError,   FileNotFoundError = QImageReader::FileNotFoundError,   DeviceError = QImageReader::DeviceError,   UnsupportedFormatError = QImageReader::UnsupportedFormatError,   InvalidDataError = QImageReader::InvalidDataError};
public slots:
QImageReader* new_QImageReader();
QImageReader* new_QImageReader(QIODevice*  device, const QByteArray&  format = QByteArray());
QImageReader* new_QImageReader(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QImageReader(QImageReader* obj) { delete obj; } 
   int  nextImageDelay(QImageReader* theWrappedObject) const;
   QRect  currentImageRect(QImageReader* theWrappedObject) const;
   QSize  size(QImageReader* theWrappedObject) const;
   void setDevice(QImageReader* theWrappedObject, QIODevice*  device);
   int  currentImageNumber(QImageReader* theWrappedObject) const;
   QImage  read(QImageReader* theWrappedObject);
   QString  text(QImageReader* theWrappedObject, const QString&  key) const;
   int  quality(QImageReader* theWrappedObject) const;
   QByteArray  format(QImageReader* theWrappedObject) const;
   bool  supportsAnimation(QImageReader* theWrappedObject) const;
   QRect  clipRect(QImageReader* theWrappedObject) const;
   QList<QByteArray >  static_QImageReader_supportedImageFormats();
   QString  fileName(QImageReader* theWrappedObject) const;
   void setFormat(QImageReader* theWrappedObject, const QByteArray&  format);
   QString  errorString(QImageReader* theWrappedObject) const;
   QStringList  textKeys(QImageReader* theWrappedObject) const;
   int  imageCount(QImageReader* theWrappedObject) const;
   void setScaledSize(QImageReader* theWrappedObject, const QSize&  size);
   QByteArray  static_QImageReader_imageFormat(const QString&  fileName);
   QByteArray  static_QImageReader_imageFormat(QIODevice*  device);
   void setFileName(QImageReader* theWrappedObject, const QString&  fileName);
   void setBackgroundColor(QImageReader* theWrappedObject, const QColor&  color);
   void setQuality(QImageReader* theWrappedObject, int  quality);
   bool  canRead(QImageReader* theWrappedObject) const;
   QColor  backgroundColor(QImageReader* theWrappedObject) const;
   QRect  scaledClipRect(QImageReader* theWrappedObject) const;
   bool  supportsOption(QImageReader* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QImageReader::ImageReaderError  error(QImageReader* theWrappedObject) const;
   bool  jumpToImage(QImageReader* theWrappedObject, int  imageNumber);
   void setClipRect(QImageReader* theWrappedObject, const QRect&  rect);
   int  loopCount(QImageReader* theWrappedObject) const;
   QIODevice*  device(QImageReader* theWrappedObject) const;
   QSize  scaledSize(QImageReader* theWrappedObject) const;
   void setScaledClipRect(QImageReader* theWrappedObject, const QRect&  rect);
   bool  jumpToNextImage(QImageReader* theWrappedObject);
};





class PythonQtWrapper_QImageWriter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageWriterError )
enum ImageWriterError{
  UnknownError = QImageWriter::UnknownError,   DeviceError = QImageWriter::DeviceError,   UnsupportedFormatError = QImageWriter::UnsupportedFormatError};
public slots:
QImageWriter* new_QImageWriter();
QImageWriter* new_QImageWriter(QIODevice*  device, const QByteArray&  format);
QImageWriter* new_QImageWriter(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QImageWriter(QImageWriter* obj) { delete obj; } 
   QString  fileName(QImageWriter* theWrappedObject) const;
   void setQuality(QImageWriter* theWrappedObject, int  quality);
   bool  canWrite(QImageWriter* theWrappedObject) const;
   void setGamma(QImageWriter* theWrappedObject, float  gamma);
   float  gamma(QImageWriter* theWrappedObject) const;
   void setFileName(QImageWriter* theWrappedObject, const QString&  fileName);
   void setCompression(QImageWriter* theWrappedObject, int  compression);
   bool  supportsOption(QImageWriter* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QByteArray  format(QImageWriter* theWrappedObject) const;
   QList<QByteArray >  static_QImageWriter_supportedImageFormats();
   bool  write(QImageWriter* theWrappedObject, const QImage&  image);
   int  compression(QImageWriter* theWrappedObject) const;
   int  quality(QImageWriter* theWrappedObject) const;
   QImageWriter::ImageWriterError  error(QImageWriter* theWrappedObject) const;
   void setFormat(QImageWriter* theWrappedObject, const QByteArray&  format);
   void setDevice(QImageWriter* theWrappedObject, QIODevice*  device);
   QIODevice*  device(QImageWriter* theWrappedObject) const;
   QString  errorString(QImageWriter* theWrappedObject) const;
   void setText(QImageWriter* theWrappedObject, const QString&  key, const QString&  text);
};





class PythonQtShell_QInputContext : public QInputContext
{
public:
    PythonQtShell_QInputContext(QObject*  parent = 0):QInputContext(parent),_wrapper(NULL) {};

virtual QString  identifierName();
virtual QString  language();
virtual void reset();
virtual bool  filterEvent(const QEvent*  event);
virtual QFont  font() const;
virtual bool  isComposing() const;
virtual void widgetDestroyed(QWidget*  w);
virtual void setFocusWidget(QWidget*  w);
virtual void update();
virtual void mouseHandler(int  x, QMouseEvent*  event);
virtual QList<QAction* >  actions();
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QInputContext : public QInputContext
{ public:
inline bool  promoted_filterEvent(const QEvent*  event) { return QInputContext::filterEvent(event); }
inline QFont  promoted_font() const { return QInputContext::font(); }
inline void promoted_widgetDestroyed(QWidget*  w) { QInputContext::widgetDestroyed(w); }
inline void promoted_update() { QInputContext::update(); }
inline void promoted_mouseHandler(int  x, QMouseEvent*  event) { QInputContext::mouseHandler(x, event); }
inline QList<QAction* >  promoted_actions() { return QInputContext::actions(); }
};

class PythonQtWrapper_QInputContext : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StandardFormat )
enum StandardFormat{
  PreeditFormat = QInputContext::PreeditFormat,   SelectionFormat = QInputContext::SelectionFormat};
public slots:
QInputContext* new_QInputContext(QObject*  parent = 0);
void delete_QInputContext(QInputContext* obj) { delete obj; } 
   void sendEvent(QInputContext* theWrappedObject, const QInputMethodEvent&  event);
   QWidget*  focusWidget(QInputContext* theWrappedObject) const;
   bool  filterEvent(QInputContext* theWrappedObject, const QEvent*  event);
   QFont  font(QInputContext* theWrappedObject) const;
   QTextFormat  standardFormat(QInputContext* theWrappedObject, QInputContext::StandardFormat  s) const;
   void widgetDestroyed(QInputContext* theWrappedObject, QWidget*  w);
   void update(QInputContext* theWrappedObject);
   void mouseHandler(QInputContext* theWrappedObject, int  x, QMouseEvent*  event);
   QList<QAction* >  actions(QInputContext* theWrappedObject);
};





class PythonQtShell_QInputContextFactory : public QInputContextFactory
{
public:
    PythonQtShell_QInputContextFactory():QInputContextFactory(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QInputContextFactory : public QObject
{ Q_OBJECT
public:
public slots:
QInputContextFactory* new_QInputContextFactory();
void delete_QInputContextFactory(QInputContextFactory* obj) { delete obj; } 
   QInputContext*  static_QInputContextFactory_create(const QString&  key, QObject*  parent);
   QStringList  static_QInputContextFactory_languages(const QString&  key);
   QStringList  static_QInputContextFactory_keys();
   QString  static_QInputContextFactory_description(const QString&  key);
   QString  static_QInputContextFactory_displayName(const QString&  key);
};





class PythonQtShell_QInputContextPlugin : public QInputContextPlugin
{
public:
    PythonQtShell_QInputContextPlugin(QObject*  parent = 0):QInputContextPlugin(parent),_wrapper(NULL) {};

virtual QStringList  keys() const;
virtual QInputContext*  create(const QString&  key);
virtual QStringList  languages(const QString&  key);
virtual QString  description(const QString&  key);
virtual QString  displayName(const QString&  key);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QInputContextPlugin : public QObject
{ Q_OBJECT
public:
public slots:
QInputContextPlugin* new_QInputContextPlugin(QObject*  parent = 0);
void delete_QInputContextPlugin(QInputContextPlugin* obj) { delete obj; } 
};





class PythonQtWrapper_QInputDialog : public QObject
{ Q_OBJECT
public:
public slots:
   QString  static_QInputDialog_getItem(QWidget*  parent, const QString&  title, const QString&  label, const QStringList&  list, int  current = 0, bool  editable = true, bool*  ok = 0, Qt::WindowFlags  f = 0);
   int  static_QInputDialog_getInteger(QWidget*  parent, const QString&  title, const QString&  label, int  value = 0, int  minValue = -2147483647, int  maxValue = 2147483647, int  step = 1, bool*  ok = 0, Qt::WindowFlags  f = 0);
   double  static_QInputDialog_getDouble(QWidget*  parent, const QString&  title, const QString&  label, double  value = 0, double  minValue = -2147483647, double  maxValue = 2147483647, int  decimals = 1, bool*  ok = 0, Qt::WindowFlags  f = 0);
   QString  static_QInputDialog_getText(QWidget*  parent, const QString&  title, const QString&  label, QLineEdit::EchoMode  echo = QLineEdit::Normal, const QString&  text = QString(), bool*  ok = 0, Qt::WindowFlags  f = 0);
};





class PythonQtShell_QInputEvent : public QInputEvent
{
public:
    PythonQtShell_QInputEvent(QEvent::Type  type, Qt::KeyboardModifiers  modifiers = Qt::NoModifier):QInputEvent(type, modifiers),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QInputEvent : public QObject
{ Q_OBJECT
public:
public slots:
QInputEvent* new_QInputEvent(QEvent::Type  type, Qt::KeyboardModifiers  modifiers = Qt::NoModifier);
void delete_QInputEvent(QInputEvent* obj) { delete obj; } 
   Qt::KeyboardModifiers  modifiers(QInputEvent* theWrappedObject) const;
};


