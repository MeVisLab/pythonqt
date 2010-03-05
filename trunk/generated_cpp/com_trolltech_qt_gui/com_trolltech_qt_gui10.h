#include <PythonQt.h>
#include <QIcon>
#include <QMessageBox>
#include <QObject>
#include <QVariant>
#include <qabstractbutton.h>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qactiongroup.h>
#include <qapplication.h>
#include <qbitmap.h>
#include <qboxlayout.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicswidget.h>
#include <qheaderview.h>
#include <qicon.h>
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
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
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
#include <qtooltip.h>
#include <qtransform.h>
#include <qtreeview.h>
#include <qtreewidget.h>
#include <qundogroup.h>
#include <qundostack.h>
#include <qundoview.h>
#include <qvalidator.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwhatsthis.h>
#include <qwidget.h>
#include <qwidgetaction.h>
#include <qwindowsstyle.h>
#include <qwizard.h>
#include <qworkspace.h>



class PythonQtWrapper_QToolTip : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QToolTip(QToolTip* obj) { delete obj; } 
   QPalette  static_QToolTip_palette();
   void static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w, const QRect&  rect);
   void static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w = 0);
   void static_QToolTip_hideText();
   void static_QToolTip_setFont(const QFont&  arg__1);
   void static_QToolTip_setPalette(const QPalette&  arg__1);
   bool  static_QToolTip_isVisible();
   QString  static_QToolTip_text();
   QFont  static_QToolTip_font();
};





class PythonQtShell_QTouchEvent : public QTouchEvent
{
public:
    PythonQtShell_QTouchEvent(QEvent::Type  eventType, QTouchEvent::DeviceType  deviceType = QTouchEvent::TouchScreen, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, Qt::TouchPointStates  touchPointStates = 0, const QList<QTouchEvent::TouchPoint >&  touchPoints = QList<QTouchEvent::TouchPoint>()):QTouchEvent(eventType, deviceType, modifiers, touchPointStates, touchPoints),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTouchEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DeviceType )
enum DeviceType{
  TouchScreen = QTouchEvent::TouchScreen,   TouchPad = QTouchEvent::TouchPad};
public slots:
QTouchEvent* new_QTouchEvent(QEvent::Type  eventType, QTouchEvent::DeviceType  deviceType = QTouchEvent::TouchScreen, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, Qt::TouchPointStates  touchPointStates = 0, const QList<QTouchEvent::TouchPoint >&  touchPoints = QList<QTouchEvent::TouchPoint>());
void delete_QTouchEvent(QTouchEvent* obj) { delete obj; } 
   Qt::TouchPointStates  touchPointStates(QTouchEvent* theWrappedObject) const;
   void setTouchPointStates(QTouchEvent* theWrappedObject, Qt::TouchPointStates  aTouchPointStates);
   void setDeviceType(QTouchEvent* theWrappedObject, QTouchEvent::DeviceType  adeviceType);
   void setWidget(QTouchEvent* theWrappedObject, QWidget*  awidget);
   QTouchEvent::DeviceType  deviceType(QTouchEvent* theWrappedObject) const;
   QWidget*  widget(QTouchEvent* theWrappedObject) const;
   const QList<QTouchEvent::TouchPoint >*  touchPoints(QTouchEvent* theWrappedObject) const;
   void setTouchPoints(QTouchEvent* theWrappedObject, const QList<QTouchEvent::TouchPoint >&  atouchPoints);
};





class PythonQtWrapper_QTouchEvent_TouchPoint : public QObject
{ Q_OBJECT
public:
public slots:
QTouchEvent::TouchPoint* new_QTouchEvent_TouchPoint(const QTouchEvent::TouchPoint&  other);
QTouchEvent::TouchPoint* new_QTouchEvent_TouchPoint(int  id = -1);
void delete_QTouchEvent_TouchPoint(QTouchEvent::TouchPoint* obj) { delete obj; } 
   QRectF  sceneRect(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  rect);
   QTouchEvent::TouchPoint*  operator_assign(QTouchEvent::TouchPoint* theWrappedObject, const QTouchEvent::TouchPoint&  other);
   QPointF  scenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setStartPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startPos);
   QRectF  screenRect(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setLastPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastPos);
   QPointF  lastScenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  screenPos);
   QPointF  pos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  screenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setPressure(QTouchEvent::TouchPoint* theWrappedObject, qreal  pressure);
   void setPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  pos);
   void setStartScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScreenPos);
   qreal  pressure(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  scenePos);
   QPointF  lastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   bool  isPrimary(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  normalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setScreenRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  screenRect);
   void setLastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastNormalizedPos);
   QPointF  startScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   int  id(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setLastScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScenePos);
   void setState(QTouchEvent::TouchPoint* theWrappedObject, Qt::TouchPointStates  state);
   void setNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  normalizedPos);
   Qt::TouchPointState  state(QTouchEvent::TouchPoint* theWrappedObject) const;
   QRectF  rect(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startScenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setSceneRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  sceneRect);
   void setStartScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScenePos);
   void setLastScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScreenPos);
   QPointF  startNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setId(QTouchEvent::TouchPoint* theWrappedObject, int  id);
   void setStartNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startNormalizedPos);
   QPointF  lastPos(QTouchEvent::TouchPoint* theWrappedObject) const;
};





class PythonQtWrapper_QTransform : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TransformationType )
enum TransformationType{
  TxNone = QTransform::TxNone,   TxTranslate = QTransform::TxTranslate,   TxScale = QTransform::TxScale,   TxRotate = QTransform::TxRotate,   TxShear = QTransform::TxShear,   TxProject = QTransform::TxProject};
public slots:
QTransform* new_QTransform();
QTransform* new_QTransform(const QMatrix&  mtx);
QTransform* new_QTransform(qreal  h11, qreal  h12, qreal  h13, qreal  h21, qreal  h22, qreal  h23, qreal  h31, qreal  h32, qreal  h33 = 1.0);
QTransform* new_QTransform(qreal  h11, qreal  h12, qreal  h21, qreal  h22, qreal  dx, qreal  dy);
QTransform* new_QTransform(const QTransform& other) {
QTransform* a = new QTransform();
*((QTransform*)a) = other;
return a; }
void delete_QTransform(QTransform* obj) { delete obj; } 
   bool  isRotating(QTransform* theWrappedObject) const;
   QTransform*  rotateRadians(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   bool  operator_equal(QTransform* theWrappedObject, const QTransform&  arg__1) const;
   void setMatrix(QTransform* theWrappedObject, qreal  m11, qreal  m12, qreal  m13, qreal  m21, qreal  m22, qreal  m23, qreal  m31, qreal  m32, qreal  m33);
   bool  isInvertible(QTransform* theWrappedObject) const;
   qreal  m21(QTransform* theWrappedObject) const;
   QTransform*  __idiv__(QTransform* theWrappedObject, qreal  div);
   bool  isScaling(QTransform* theWrappedObject) const;
   qreal  m22(QTransform* theWrappedObject) const;
   QTransform::TransformationType  type(QTransform* theWrappedObject) const;
   qreal  m23(QTransform* theWrappedObject) const;
   bool  static_QTransform_squareToQuad(const QPolygonF&  square, QTransform&  result);
   QTransform*  rotate(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   QPoint  map(QTransform* theWrappedObject, const QPoint&  p) const;
   bool  isAffine(QTransform* theWrappedObject) const;
   QTransform  static_QTransform_fromTranslate(qreal  dx, qreal  dy);
   qreal  determinant(QTransform* theWrappedObject) const;
   QTransform  static_QTransform_fromScale(qreal  dx, qreal  dy);
   void map(QTransform* theWrappedObject, qreal  x, qreal  y, qreal*  tx, qreal*  ty) const;
   QPainterPath  map(QTransform* theWrappedObject, const QPainterPath&  p) const;
   QRegion  map(QTransform* theWrappedObject, const QRegion&  r) const;
   QPolygon  map(QTransform* theWrappedObject, const QPolygon&  a) const;
   QPolygonF  map(QTransform* theWrappedObject, const QPolygonF&  a) const;
   QPointF  map(QTransform* theWrappedObject, const QPointF&  p) const;
   QLineF  map(QTransform* theWrappedObject, const QLineF&  l) const;
   QLine  map(QTransform* theWrappedObject, const QLine&  l) const;
   QTransform*  scale(QTransform* theWrappedObject, qreal  sx, qreal  sy);
   qreal  m31(QTransform* theWrappedObject) const;
   qreal  m32(QTransform* theWrappedObject) const;
   qreal  m33(QTransform* theWrappedObject) const;
   bool  isIdentity(QTransform* theWrappedObject) const;
   QTransform  transposed(QTransform* theWrappedObject) const;
   QTransform*  __isub__(QTransform* theWrappedObject, qreal  div);
   QRectF  mapRect(QTransform* theWrappedObject, const QRectF&  arg__1) const;
   QRect  mapRect(QTransform* theWrappedObject, const QRect&  arg__1) const;
   QTransform*  translate(QTransform* theWrappedObject, qreal  dx, qreal  dy);
   bool  static_QTransform_quadToSquare(const QPolygonF&  quad, QTransform&  result);
   QTransform*  __imul__(QTransform* theWrappedObject, qreal  div);
   QTransform*  __imul__(QTransform* theWrappedObject, const QTransform&  arg__1);
   qreal  dx(QTransform* theWrappedObject) const;
   QTransform  inverted(QTransform* theWrappedObject, bool*  invertible = 0) const;
   qreal  dy(QTransform* theWrappedObject) const;
   bool  isTranslating(QTransform* theWrappedObject) const;
   QTransform  multiplied(QTransform* theWrappedObject, const QTransform&  o) const;
   const QMatrix*  toAffine(QTransform* theWrappedObject) const;
   void reset(QTransform* theWrappedObject);
   bool  static_QTransform_quadToQuad(const QPolygonF&  one, const QPolygonF&  two, QTransform&  result);
   QTransform  adjoint(QTransform* theWrappedObject) const;
   qreal  m11(QTransform* theWrappedObject) const;
   QTransform*  __iadd__(QTransform* theWrappedObject, qreal  div);
   QTransform*  shear(QTransform* theWrappedObject, qreal  sh, qreal  sv);
   qreal  m12(QTransform* theWrappedObject) const;
   qreal  det(QTransform* theWrappedObject) const;
   qreal  m13(QTransform* theWrappedObject) const;
   QPolygon  mapToPolygon(QTransform* theWrappedObject, const QRect&  r) const;
   QTransform  __add__(QTransform* theWrappedObject, qreal  n);
   QTransform  __sub__(QTransform* theWrappedObject, qreal  n);
   QTransform  __div__(QTransform* theWrappedObject, qreal  n);
   QTransform  __mul__(QTransform* theWrappedObject, qreal  n);
   void writeTo(QTransform* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QTransform* theWrappedObject, QDataStream&  arg__1);
    QString toString(QTransform*);
};





class PythonQtShell_QTreeView : public QTreeView
{
public:
    PythonQtShell_QTreeView(QWidget*  parent = 0):QTreeView(parent),_wrapper(NULL) {};

virtual void keyboardSearch(const QString&  search);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void keyPressEvent(QKeyEvent*  event);
virtual int  horizontalOffset() const;
virtual void updateGeometries();
virtual void reset();
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void setModel(QAbstractItemModel*  model);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void horizontalScrollbarAction(int  action);
virtual void drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const;
virtual QList<QModelIndex >  selectedIndexes() const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void setRootIndex(const QModelIndex&  index);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void selectAll();
virtual void doItemsLayout();
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual bool  viewportEvent(QEvent*  event);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const;
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual void paintEvent(QPaintEvent*  event);
virtual int  verticalOffset() const;
virtual void timerEvent(QTimerEvent*  event);
virtual void scrollContentsBy(int  dx, int  dy);
virtual int  sizeHintForColumn(int  column) const;
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void verticalScrollbarAction(int  action);
virtual void updateEditorGeometries();
virtual void verticalScrollbarValueChanged(int  value);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  event(QEvent*  event);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void horizontalScrollbarValueChanged(int  value);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void commitData(QWidget*  editor);
virtual void updateEditorData();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual QStyleOptionViewItem  viewOptions() const;
virtual int  sizeHintForRow(int  row) const;
virtual void editorDestroyed(QObject*  editor);
virtual void focusInEvent(QFocusEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void resizeEvent(QResizeEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void languageChange();
virtual int  devType() const;
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTreeView : public QTreeView
{ public:
inline void promoted_keyboardSearch(const QString&  search) { QTreeView::keyboardSearch(search); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QTreeView::mouseReleaseEvent(event); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QTreeView::rowsInserted(parent, start, end); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QTreeView::keyPressEvent(event); }
inline int  promoted_horizontalOffset() const { return QTreeView::horizontalOffset(); }
inline void promoted_updateGeometries() { QTreeView::updateGeometries(); }
inline void promoted_reset() { QTreeView::reset(); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QTreeView::visualRegionForSelection(selection); }
inline void promoted_setModel(QAbstractItemModel*  model) { QTreeView::setModel(model); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QTreeView::mousePressEvent(event); }
inline void promoted_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QTreeView::rowsAboutToBeRemoved(parent, start, end); }
inline void promoted_horizontalScrollbarAction(int  action) { QTreeView::horizontalScrollbarAction(action); }
inline void promoted_drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const { QTreeView::drawRow(painter, options, index); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return QTreeView::selectedIndexes(); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QTreeView::isIndexHidden(index); }
inline void promoted_setSelectionModel(QItemSelectionModel*  selectionModel) { QTreeView::setSelectionModel(selectionModel); }
inline void promoted_setRootIndex(const QModelIndex&  index) { QTreeView::setRootIndex(index); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { QTreeView::dragMoveEvent(event); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QTreeView::selectionChanged(selected, deselected); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { QTreeView::mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QTreeView::mouseMoveEvent(event); }
inline void promoted_selectAll() { QTreeView::selectAll(); }
inline void promoted_doItemsLayout() { QTreeView::doItemsLayout(); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QTreeView::visualRect(index); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QTreeView::currentChanged(current, previous); }
inline bool  promoted_viewportEvent(QEvent*  event) { return QTreeView::viewportEvent(event); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QTreeView::indexAt(p); }
inline void promoted_drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const { QTreeView::drawBranches(painter, rect, index); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight) { QTreeView::dataChanged(topLeft, bottomRight); }
inline void promoted_paintEvent(QPaintEvent*  event) { QTreeView::paintEvent(event); }
inline int  promoted_verticalOffset() const { return QTreeView::verticalOffset(); }
inline void promoted_timerEvent(QTimerEvent*  event) { QTreeView::timerEvent(event); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QTreeView::scrollContentsBy(dx, dy); }
inline int  promoted_sizeHintForColumn(int  column) const { return QTreeView::sizeHintForColumn(column); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QTreeView::setSelection(rect, command); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QTreeView::scrollTo(index, hint); }
};

class PythonQtWrapper_QTreeView : public QObject
{ Q_OBJECT
public:
public slots:
QTreeView* new_QTreeView(QWidget*  parent = 0);
void delete_QTreeView(QTreeView* obj) { delete obj; } 
   void setColumnHidden(QTreeView* theWrappedObject, int  column, bool  hide);
   void setItemsExpandable(QTreeView* theWrappedObject, bool  enable);
   void keyboardSearch(QTreeView* theWrappedObject, const QString&  search);
   void setAutoExpandDelay(QTreeView* theWrappedObject, int  delay);
   void mouseReleaseEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   void rowsInserted(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   void keyPressEvent(QTreeView* theWrappedObject, QKeyEvent*  event);
   void setExpandsOnDoubleClick(QTreeView* theWrappedObject, bool  enable);
   bool  rootIsDecorated(QTreeView* theWrappedObject) const;
   int  horizontalOffset(QTreeView* theWrappedObject) const;
   void setExpanded(QTreeView* theWrappedObject, const QModelIndex&  index, bool  expand);
   void updateGeometries(QTreeView* theWrappedObject);
   void reset(QTreeView* theWrappedObject);
   bool  expandsOnDoubleClick(QTreeView* theWrappedObject) const;
   void setFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  span);
   QRegion  visualRegionForSelection(QTreeView* theWrappedObject, const QItemSelection&  selection) const;
   bool  allColumnsShowFocus(QTreeView* theWrappedObject) const;
   QModelIndex  indexAbove(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void setModel(QTreeView* theWrappedObject, QAbstractItemModel*  model);
   void mousePressEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   void setRootIsDecorated(QTreeView* theWrappedObject, bool  show);
   void setRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  hide);
   void rowsAboutToBeRemoved(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   bool  isHeaderHidden(QTreeView* theWrappedObject) const;
   bool  isRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const;
   void setHeader(QTreeView* theWrappedObject, QHeaderView*  header);
   void setIndentation(QTreeView* theWrappedObject, int  i);
   bool  isSortingEnabled(QTreeView* theWrappedObject) const;
   void horizontalScrollbarAction(QTreeView* theWrappedObject, int  action);
   void drawRow(QTreeView* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const;
   QList<QModelIndex >  selectedIndexes(QTreeView* theWrappedObject) const;
   bool  isIndexHidden(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void setSelectionModel(QTreeView* theWrappedObject, QItemSelectionModel*  selectionModel);
   bool  itemsExpandable(QTreeView* theWrappedObject) const;
   void setAllColumnsShowFocus(QTreeView* theWrappedObject, bool  enable);
   void setRootIndex(QTreeView* theWrappedObject, const QModelIndex&  index);
   void setSortingEnabled(QTreeView* theWrappedObject, bool  enable);
   int  indentation(QTreeView* theWrappedObject) const;
   void setWordWrap(QTreeView* theWrappedObject, bool  on);
   int  columnAt(QTreeView* theWrappedObject, int  x) const;
   void dragMoveEvent(QTreeView* theWrappedObject, QDragMoveEvent*  event);
   void selectionChanged(QTreeView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected);
   void mouseDoubleClickEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   QHeaderView*  header(QTreeView* theWrappedObject) const;
   void mouseMoveEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   QModelIndex  indexBelow(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void selectAll(QTreeView* theWrappedObject);
   bool  isAnimated(QTreeView* theWrappedObject) const;
   void setHeaderHidden(QTreeView* theWrappedObject, bool  hide);
   bool  isExpanded(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   bool  wordWrap(QTreeView* theWrappedObject) const;
   void doItemsLayout(QTreeView* theWrappedObject);
   QRect  visualRect(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void currentChanged(QTreeView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous);
   bool  viewportEvent(QTreeView* theWrappedObject, QEvent*  event);
   void setAnimated(QTreeView* theWrappedObject, bool  enable);
   int  columnViewportPosition(QTreeView* theWrappedObject, int  column) const;
   QModelIndex  indexAt(QTreeView* theWrappedObject, const QPoint&  p) const;
   bool  isColumnHidden(QTreeView* theWrappedObject, int  column) const;
   void setUniformRowHeights(QTreeView* theWrappedObject, bool  uniform);
   void drawBranches(QTreeView* theWrappedObject, QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const;
   void dataChanged(QTreeView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   void setColumnWidth(QTreeView* theWrappedObject, int  column, int  width);
   bool  uniformRowHeights(QTreeView* theWrappedObject) const;
   void paintEvent(QTreeView* theWrappedObject, QPaintEvent*  event);
   int  verticalOffset(QTreeView* theWrappedObject) const;
   bool  isFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const;
   void sortByColumn(QTreeView* theWrappedObject, int  column, Qt::SortOrder  order);
   void timerEvent(QTreeView* theWrappedObject, QTimerEvent*  event);
   int  autoExpandDelay(QTreeView* theWrappedObject) const;
   void scrollContentsBy(QTreeView* theWrappedObject, int  dx, int  dy);
   int  sizeHintForColumn(QTreeView* theWrappedObject, int  column) const;
   void setSelection(QTreeView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
   void scrollTo(QTreeView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
   int  columnWidth(QTreeView* theWrappedObject, int  column) const;
};





class PythonQtShell_QTreeWidget : public QTreeWidget
{
public:
    PythonQtShell_QTreeWidget(QWidget*  parent = 0):QTreeWidget(parent),_wrapper(NULL) {};

virtual QMimeData*  mimeData(const QList<QTreeWidgetItem* >  items) const;
virtual bool  dropMimeData(QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void dropEvent(QDropEvent*  event);
virtual Qt::DropActions  supportedDropActions() const;
virtual QStringList  mimeTypes() const;
virtual bool  event(QEvent*  e);
virtual void selectAll();
virtual void horizontalScrollbarAction(int  action);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const;
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual int  verticalOffset() const;
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void reset();
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void setRootIndex(const QModelIndex&  index);
virtual int  horizontalOffset() const;
virtual void drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const;
virtual void timerEvent(QTimerEvent*  event);
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void keyboardSearch(const QString&  search);
virtual void keyPressEvent(QKeyEvent*  event);
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void scrollContentsBy(int  dx, int  dy);
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void doItemsLayout();
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual int  sizeHintForColumn(int  column) const;
virtual void updateGeometries();
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual void paintEvent(QPaintEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual bool  viewportEvent(QEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void verticalScrollbarAction(int  action);
virtual void updateEditorGeometries();
virtual void verticalScrollbarValueChanged(int  value);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void horizontalScrollbarValueChanged(int  value);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void commitData(QWidget*  editor);
virtual void updateEditorData();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual QStyleOptionViewItem  viewOptions() const;
virtual int  sizeHintForRow(int  row) const;
virtual void editorDestroyed(QObject*  editor);
virtual void focusInEvent(QFocusEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void resizeEvent(QResizeEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void languageChange();
virtual int  devType() const;
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTreeWidget : public QTreeWidget
{ public:
inline bool  promoted_dropMimeData(QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action) { return QTreeWidget::dropMimeData(parent, index, data, action); }
inline void promoted_setSelectionModel(QItemSelectionModel*  selectionModel) { QTreeWidget::setSelectionModel(selectionModel); }
inline void promoted_dropEvent(QDropEvent*  event) { QTreeWidget::dropEvent(event); }
inline Qt::DropActions  promoted_supportedDropActions() const { return QTreeWidget::supportedDropActions(); }
inline QStringList  promoted_mimeTypes() const { return QTreeWidget::mimeTypes(); }
inline bool  promoted_event(QEvent*  e) { return QTreeWidget::event(e); }
};

class PythonQtWrapper_QTreeWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTreeWidget* new_QTreeWidget(QWidget*  parent = 0);
void delete_QTreeWidget(QTreeWidget* obj) { delete obj; } 
   int  currentColumn(QTreeWidget* theWrappedObject) const;
   int  sortColumn(QTreeWidget* theWrappedObject) const;
   QTreeWidgetItem*  invisibleRootItem(QTreeWidget* theWrappedObject) const;
   void setHeaderLabel(QTreeWidget* theWrappedObject, const QString&  label);
   QList<QTreeWidgetItem* >  selectedItems(QTreeWidget* theWrappedObject) const;
   void addTopLevelItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item);
   QTreeWidgetItem*  itemAbove(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   void setHeaderItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item);
   QTreeWidgetItem*  currentItem(QTreeWidget* theWrappedObject) const;
   void setItemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column, QWidget*  widget);
   void setHeaderLabels(QTreeWidget* theWrappedObject, const QStringList&  labels);
   void setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column, QItemSelectionModel::SelectionFlags  command);
   void setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column);
   int  indexOfTopLevelItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item) const;
   void setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item);
   QWidget*  itemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column) const;
   QList<QTreeWidgetItem* >  findItems(QTreeWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags, int  column = 0) const;
   int  topLevelItemCount(QTreeWidget* theWrappedObject) const;
   bool  dropMimeData(QTreeWidget* theWrappedObject, QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action);
   void sortItems(QTreeWidget* theWrappedObject, int  column, Qt::SortOrder  order);
   QTreeWidgetItem*  itemAt(QTreeWidget* theWrappedObject, int  x, int  y) const;
   void setSelectionModel(QTreeWidget* theWrappedObject, QItemSelectionModel*  selectionModel);
   QTreeWidgetItem*  itemAt(QTreeWidget* theWrappedObject, const QPoint&  p) const;
   void dropEvent(QTreeWidget* theWrappedObject, QDropEvent*  event);
   void setFirstItemColumnSpanned(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item, bool  span);
   void addTopLevelItems(QTreeWidget* theWrappedObject, const QList<QTreeWidgetItem* >&  items);
   Qt::DropActions  supportedDropActions(QTreeWidget* theWrappedObject) const;
   void openPersistentEditor(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0);
   bool  isFirstItemColumnSpanned(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   void insertTopLevelItems(QTreeWidget* theWrappedObject, int  index, const QList<QTreeWidgetItem* >&  items);
   QTreeWidgetItem*  itemBelow(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   QTreeWidgetItem*  topLevelItem(QTreeWidget* theWrappedObject, int  index) const;
   QTreeWidgetItem*  headerItem(QTreeWidget* theWrappedObject) const;
   void removeItemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column);
   void editItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0);
   void setColumnCount(QTreeWidget* theWrappedObject, int  columns);
   int  columnCount(QTreeWidget* theWrappedObject) const;
   QRect  visualItemRect(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   void insertTopLevelItem(QTreeWidget* theWrappedObject, int  index, QTreeWidgetItem*  item);
   QStringList  mimeTypes(QTreeWidget* theWrappedObject) const;
   void closePersistentEditor(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0);
   QTreeWidgetItem*  takeTopLevelItem(QTreeWidget* theWrappedObject, int  index);
   bool  event(QTreeWidget* theWrappedObject, QEvent*  e);
};





class PythonQtShell_QTreeWidgetItem : public QTreeWidgetItem
{
public:
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  view, QTreeWidgetItem*  after, int  type = Type):QTreeWidgetItem(view, after, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  view, const QStringList&  strings, int  type = Type):QTreeWidgetItem(view, strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  view, int  type = Type):QTreeWidgetItem(view, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, QTreeWidgetItem*  after, int  type = Type):QTreeWidgetItem(parent, after, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, const QStringList&  strings, int  type = Type):QTreeWidgetItem(parent, strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, int  type = Type):QTreeWidgetItem(parent, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(const QStringList&  strings, int  type = Type):QTreeWidgetItem(strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(int  type = Type):QTreeWidgetItem(type),_wrapper(NULL) {};

virtual QTreeWidgetItem*  clone() const;
virtual QVariant  data(int  column, int  role) const;
virtual void write(QDataStream&  out) const;
virtual void read(QDataStream&  in);
virtual bool  operator_less(const QTreeWidgetItem&  other) const;
virtual void setData(int  column, int  role, const QVariant&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTreeWidgetItem : public QTreeWidgetItem
{ public:
inline QTreeWidgetItem*  promoted_clone() const { return QTreeWidgetItem::clone(); }
inline QVariant  promoted_data(int  column, int  role) const { return QTreeWidgetItem::data(column, role); }
inline void promoted_setData(int  column, int  role, const QVariant&  value) { QTreeWidgetItem::setData(column, role, value); }
};

class PythonQtWrapper_QTreeWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType ChildIndicatorPolicy )
enum ItemType{
  Type = QTreeWidgetItem::Type,   UserType = QTreeWidgetItem::UserType};
enum ChildIndicatorPolicy{
  ShowIndicator = QTreeWidgetItem::ShowIndicator,   DontShowIndicator = QTreeWidgetItem::DontShowIndicator,   DontShowIndicatorWhenChildless = QTreeWidgetItem::DontShowIndicatorWhenChildless};
public slots:
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidget*  view, QTreeWidgetItem*  after, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidget*  view, const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidget*  view, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidgetItem*  parent, QTreeWidgetItem*  after, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidgetItem*  parent, const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidgetItem*  parent, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(int  type = Type);
void delete_QTreeWidgetItem(QTreeWidgetItem* obj) { delete obj; } 
bool hasOwner(QTreeWidgetItem* theWrappedObject) { return theWrappedObject->treeWidget()!=NULL || theWrappedObject->parent()!=NULL; }
   QString  whatsThis(QTreeWidgetItem* theWrappedObject, int  column) const;
   bool  isHidden(QTreeWidgetItem* theWrappedObject) const;
   void setSelected(QTreeWidgetItem* theWrappedObject, bool  select);
   Qt::CheckState  checkState(QTreeWidgetItem* theWrappedObject, int  column) const;
   void insertChildren(QTreeWidgetItem* theWrappedObject, int  index, const QList<QTreeWidgetItem* >&  children);
   void setIcon(QTreeWidgetItem* theWrappedObject, int  column, const QIcon&  icon);
   void setExpanded(QTreeWidgetItem* theWrappedObject, bool  expand);
   QTreeWidgetItem*  child(QTreeWidgetItem* theWrappedObject, int  index) const;
   void setSizeHint(QTreeWidgetItem* theWrappedObject, int  column, const QSize&  size);
   void setChildIndicatorPolicy(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem::ChildIndicatorPolicy  policy);
   void setFirstColumnSpanned(QTreeWidgetItem* theWrappedObject, bool  span);
   void sortChildren(QTreeWidgetItem* theWrappedObject, int  column, Qt::SortOrder  order);
   QTreeWidgetItem*  clone(QTreeWidgetItem* theWrappedObject) const;
   QVariant  data(QTreeWidgetItem* theWrappedObject, int  column, int  role) const;
   QString  statusTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   void addChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child);
   QTreeWidgetItem*  parent(QTreeWidgetItem* theWrappedObject) const;
   QBrush  background(QTreeWidgetItem* theWrappedObject, int  column) const;
   QTreeWidgetItem*  takeChild(QTreeWidgetItem* theWrappedObject, int  index);
   void setTextAlignment(QTreeWidgetItem* theWrappedObject, int  column, int  alignment);
   int  indexOfChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child) const;
   QString  toolTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   int  columnCount(QTreeWidgetItem* theWrappedObject) const;
   QBrush  foreground(QTreeWidgetItem* theWrappedObject, int  column) const;
   QFont  font(QTreeWidgetItem* theWrappedObject, int  column) const;
   bool  isDisabled(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem::ChildIndicatorPolicy  childIndicatorPolicy(QTreeWidgetItem* theWrappedObject) const;
   int  childCount(QTreeWidgetItem* theWrappedObject) const;
   void setToolTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  toolTip);
   QSize  sizeHint(QTreeWidgetItem* theWrappedObject, int  column) const;
   void addChildren(QTreeWidgetItem* theWrappedObject, const QList<QTreeWidgetItem* >&  children);
   void setWhatsThis(QTreeWidgetItem* theWrappedObject, int  column, const QString&  whatsThis);
   void setFlags(QTreeWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   bool  isExpanded(QTreeWidgetItem* theWrappedObject) const;
   void setCheckState(QTreeWidgetItem* theWrappedObject, int  column, Qt::CheckState  state);
   void setText(QTreeWidgetItem* theWrappedObject, int  column, const QString&  text);
   void setFont(QTreeWidgetItem* theWrappedObject, int  column, const QFont&  font);
   void setBackground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   void removeChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child);
   void setStatusTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  statusTip);
   int  textAlignment(QTreeWidgetItem* theWrappedObject, int  column) const;
   QTreeWidget*  treeWidget(QTreeWidgetItem* theWrappedObject) const;
   void setForeground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   void setHidden(QTreeWidgetItem* theWrappedObject, bool  hide);
   bool  isFirstColumnSpanned(QTreeWidgetItem* theWrappedObject) const;
   Qt::ItemFlags  flags(QTreeWidgetItem* theWrappedObject) const;
   QList<QTreeWidgetItem* >  takeChildren(QTreeWidgetItem* theWrappedObject);
   int  type(QTreeWidgetItem* theWrappedObject) const;
   QString  text(QTreeWidgetItem* theWrappedObject, int  column) const;
   QIcon  icon(QTreeWidgetItem* theWrappedObject, int  column) const;
   void insertChild(QTreeWidgetItem* theWrappedObject, int  index, QTreeWidgetItem*  child);
   void setData(QTreeWidgetItem* theWrappedObject, int  column, int  role, const QVariant&  value);
   bool  isSelected(QTreeWidgetItem* theWrappedObject) const;
   void setDisabled(QTreeWidgetItem* theWrappedObject, bool  disabled);
   void writeTo(QTreeWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QTreeWidgetItem* theWrappedObject, QDataStream&  in);
};





class PythonQtShell_QUndoCommand : public QUndoCommand
{
public:
    PythonQtShell_QUndoCommand(QUndoCommand*  parent = 0):QUndoCommand(parent),_wrapper(NULL) {};
    PythonQtShell_QUndoCommand(const QString&  text, QUndoCommand*  parent = 0):QUndoCommand(text, parent),_wrapper(NULL) {};

virtual void undo();
virtual int  id() const;
virtual bool  mergeWith(const QUndoCommand*  other);
virtual void redo();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QUndoCommand : public QUndoCommand
{ public:
inline void promoted_undo() { QUndoCommand::undo(); }
inline int  promoted_id() const { return QUndoCommand::id(); }
inline bool  promoted_mergeWith(const QUndoCommand*  other) { return QUndoCommand::mergeWith(other); }
inline void promoted_redo() { QUndoCommand::redo(); }
};

class PythonQtWrapper_QUndoCommand : public QObject
{ Q_OBJECT
public:
public slots:
QUndoCommand* new_QUndoCommand(QUndoCommand*  parent = 0);
QUndoCommand* new_QUndoCommand(const QString&  text, QUndoCommand*  parent = 0);
void delete_QUndoCommand(QUndoCommand* obj) { delete obj; } 
   int  childCount(QUndoCommand* theWrappedObject) const;
   void undo(QUndoCommand* theWrappedObject);
   const QUndoCommand*  child(QUndoCommand* theWrappedObject, int  index) const;
   int  id(QUndoCommand* theWrappedObject) const;
   void setText(QUndoCommand* theWrappedObject, const QString&  text);
   bool  mergeWith(QUndoCommand* theWrappedObject, const QUndoCommand*  other);
   void redo(QUndoCommand* theWrappedObject);
   QString  text(QUndoCommand* theWrappedObject) const;
};





class PythonQtShell_QUndoGroup : public QUndoGroup
{
public:
    PythonQtShell_QUndoGroup(QObject*  parent = 0):QUndoGroup(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUndoGroup : public QObject
{ Q_OBJECT
public:
public slots:
QUndoGroup* new_QUndoGroup(QObject*  parent = 0);
void delete_QUndoGroup(QUndoGroup* obj) { delete obj; } 
   void removeStack(QUndoGroup* theWrappedObject, QUndoStack*  stack);
   QAction*  createRedoAction(QUndoGroup* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
   bool  canRedo(QUndoGroup* theWrappedObject) const;
   QString  redoText(QUndoGroup* theWrappedObject) const;
   QList<QUndoStack* >  stacks(QUndoGroup* theWrappedObject) const;
   QUndoStack*  activeStack(QUndoGroup* theWrappedObject) const;
   bool  canUndo(QUndoGroup* theWrappedObject) const;
   bool  isClean(QUndoGroup* theWrappedObject) const;
   void addStack(QUndoGroup* theWrappedObject, QUndoStack*  stack);
   QString  undoText(QUndoGroup* theWrappedObject) const;
   QAction*  createUndoAction(QUndoGroup* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
};





class PythonQtShell_QUndoStack : public QUndoStack
{
public:
    PythonQtShell_QUndoStack(QObject*  parent = 0):QUndoStack(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUndoStack : public QObject
{ Q_OBJECT
public:
public slots:
QUndoStack* new_QUndoStack(QObject*  parent = 0);
void delete_QUndoStack(QUndoStack* obj) { delete obj; } 
   bool  canRedo(QUndoStack* theWrappedObject) const;
   const QUndoCommand*  command(QUndoStack* theWrappedObject, int  index) const;
   QAction*  createRedoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
   QString  redoText(QUndoStack* theWrappedObject) const;
   int  count(QUndoStack* theWrappedObject) const;
   QString  text(QUndoStack* theWrappedObject, int  idx) const;
   void beginMacro(QUndoStack* theWrappedObject, const QString&  text);
   bool  canUndo(QUndoStack* theWrappedObject) const;
   bool  isClean(QUndoStack* theWrappedObject) const;
   bool  isActive(QUndoStack* theWrappedObject) const;
   int  cleanIndex(QUndoStack* theWrappedObject) const;
   void setUndoLimit(QUndoStack* theWrappedObject, int  limit);
   void endMacro(QUndoStack* theWrappedObject);
   int  index(QUndoStack* theWrappedObject) const;
   void push(QUndoStack* theWrappedObject, QUndoCommand*  cmd);
   int  undoLimit(QUndoStack* theWrappedObject) const;
   QString  undoText(QUndoStack* theWrappedObject) const;
   void clear(QUndoStack* theWrappedObject);
   QAction*  createUndoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
};





class PythonQtShell_QUndoView : public QUndoView
{
public:
    PythonQtShell_QUndoView(QUndoGroup*  group, QWidget*  parent = 0):QUndoView(group, parent),_wrapper(NULL) {};
    PythonQtShell_QUndoView(QUndoStack*  stack, QWidget*  parent = 0):QUndoView(stack, parent),_wrapper(NULL) {};
    PythonQtShell_QUndoView(QWidget*  parent = 0):QUndoView(parent),_wrapper(NULL) {};

virtual void doItemsLayout();
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual QList<QModelIndex >  selectedIndexes() const;
virtual int  verticalOffset() const;
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void timerEvent(QTimerEvent*  e);
virtual void updateGeometries();
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void setRootIndex(const QModelIndex&  index);
virtual void dropEvent(QDropEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void paintEvent(QPaintEvent*  e);
virtual void resizeEvent(QResizeEvent*  e);
virtual QStyleOptionViewItem  viewOptions() const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void reset();
virtual int  horizontalOffset() const;
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void scrollContentsBy(int  dx, int  dy);
virtual bool  event(QEvent*  e);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void verticalScrollbarAction(int  action);
virtual void updateEditorGeometries();
virtual void verticalScrollbarValueChanged(int  value);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual int  sizeHintForColumn(int  column) const;
virtual bool  viewportEvent(QEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void keyboardSearch(const QString&  search);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void horizontalScrollbarValueChanged(int  value);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void commitData(QWidget*  editor);
virtual void updateEditorData();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void setModel(QAbstractItemModel*  model);
virtual int  sizeHintForRow(int  row) const;
virtual void horizontalScrollbarAction(int  action);
virtual void editorDestroyed(QObject*  editor);
virtual void focusInEvent(QFocusEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void selectAll();
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void languageChange();
virtual int  devType() const;
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUndoView : public QObject
{ Q_OBJECT
public:
public slots:
QUndoView* new_QUndoView(QUndoGroup*  group, QWidget*  parent = 0);
QUndoView* new_QUndoView(QUndoStack*  stack, QWidget*  parent = 0);
QUndoView* new_QUndoView(QWidget*  parent = 0);
void delete_QUndoView(QUndoView* obj) { delete obj; } 
   QUndoStack*  stack(QUndoView* theWrappedObject) const;
   QString  emptyLabel(QUndoView* theWrappedObject) const;
   void setCleanIcon(QUndoView* theWrappedObject, const QIcon&  icon);
   void setEmptyLabel(QUndoView* theWrappedObject, const QString&  label);
   QUndoGroup*  group(QUndoView* theWrappedObject) const;
   QIcon  cleanIcon(QUndoView* theWrappedObject) const;
};





class PythonQtShell_QVBoxLayout : public QVBoxLayout
{
public:
    PythonQtShell_QVBoxLayout():QVBoxLayout(),_wrapper(NULL) {};
    PythonQtShell_QVBoxLayout(QWidget*  parent):QVBoxLayout(parent),_wrapper(NULL) {};

virtual int  count() const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QLayoutItem*  itemAt(int  arg__1) const;
virtual Qt::Orientations  expandingDirections() const;
virtual QSize  maximumSize() const;
virtual QLayoutItem*  takeAt(int  arg__1);
virtual void addItem(QLayoutItem*  arg__1);
virtual void invalidate();
virtual int  indexOf(QWidget*  arg__1) const;
virtual QLayout*  layout();
virtual bool  isEmpty() const;
virtual QRect  geometry() const;
virtual void childEvent(QChildEvent*  e);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QVBoxLayout : public QObject
{ Q_OBJECT
public:
public slots:
QVBoxLayout* new_QVBoxLayout();
QVBoxLayout* new_QVBoxLayout(QWidget*  parent);
void delete_QVBoxLayout(QVBoxLayout* obj) { delete obj; } 
};





class PythonQtShell_QValidator : public QValidator
{
public:
    PythonQtShell_QValidator(QObject*  parent = 0):QValidator(parent),_wrapper(NULL) {};

virtual QValidator::State  validate(QString&  arg__1, int&  arg__2) const;
virtual void fixup(QString&  arg__1) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QValidator : public QValidator
{ public:
inline void promoted_fixup(QString&  arg__1) const { QValidator::fixup(arg__1); }
};

class PythonQtWrapper_QValidator : public QObject
{ Q_OBJECT
public:
Q_ENUMS(State )
enum State{
  Invalid = QValidator::Invalid,   Intermediate = QValidator::Intermediate,   Acceptable = QValidator::Acceptable};
public slots:
QValidator* new_QValidator(QObject*  parent = 0);
void delete_QValidator(QValidator* obj) { delete obj; } 
   void setLocale(QValidator* theWrappedObject, const QLocale&  locale);
   void fixup(QValidator* theWrappedObject, QString&  arg__1) const;
   QLocale  locale(QValidator* theWrappedObject) const;
};





class PythonQtWrapper_QVector2D : public QObject
{ Q_OBJECT
public:
public slots:
QVector2D* new_QVector2D();
QVector2D* new_QVector2D(const QPoint&  point);
QVector2D* new_QVector2D(const QPointF&  point);
QVector2D* new_QVector2D(const QVector3D&  vector);
QVector2D* new_QVector2D(const QVector4D&  vector);
QVector2D* new_QVector2D(qreal  xpos, qreal  ypos);
QVector2D* new_QVector2D(const QVector2D& other) {
QVector2D* a = new QVector2D();
*((QVector2D*)a) = other;
return a; }
void delete_QVector2D(QVector2D* obj) { delete obj; } 
   QVector4D  toVector4D(QVector2D* theWrappedObject) const;
   qreal  static_QVector2D_dotProduct(const QVector2D&  v1, const QVector2D&  v2);
   void setX(QVector2D* theWrappedObject, qreal  x);
   void setY(QVector2D* theWrappedObject, qreal  y);
   QPointF  toPointF(QVector2D* theWrappedObject) const;
   qreal  x(QVector2D* theWrappedObject) const;
   qreal  y(QVector2D* theWrappedObject) const;
   QVector2D*  __imul__(QVector2D* theWrappedObject, const QVector2D&  vector);
   QVector2D*  __imul__(QVector2D* theWrappedObject, qreal  factor);
   QPoint  toPoint(QVector2D* theWrappedObject) const;
   QVector3D  toVector3D(QVector2D* theWrappedObject) const;
   bool  isNull(QVector2D* theWrappedObject) const;
   QVector2D*  __idiv__(QVector2D* theWrappedObject, qreal  divisor);
   void normalize(QVector2D* theWrappedObject);
   QVector2D*  __isub__(QVector2D* theWrappedObject, const QVector2D&  vector);
   QVector2D  normalized(QVector2D* theWrappedObject) const;
   QVector2D*  __iadd__(QVector2D* theWrappedObject, const QVector2D&  vector);
   qreal  length(QVector2D* theWrappedObject) const;
   qreal  lengthSquared(QVector2D* theWrappedObject) const;
   bool  operator_equal(QVector2D* theWrappedObject, const QVector2D&  v2);
   const QVector2D  __add__(QVector2D* theWrappedObject, const QVector2D&  v2);
   const QVector2D  __sub__(QVector2D* theWrappedObject, const QVector2D&  v2);
   const QVector2D  __div__(QVector2D* theWrappedObject, qreal  divisor);
   const QVector2D  __mul__(QVector2D* theWrappedObject, const QVector2D&  v2);
   const QVector2D  __mul__(QVector2D* theWrappedObject, qreal  factor);
   void writeTo(QVector2D* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QVector2D* theWrappedObject, QDataStream&  arg__1);
    QString toString(QVector2D*);
};





class PythonQtWrapper_QVector3D : public QObject
{ Q_OBJECT
public:
public slots:
QVector3D* new_QVector3D();
QVector3D* new_QVector3D(const QPoint&  point);
QVector3D* new_QVector3D(const QPointF&  point);
QVector3D* new_QVector3D(const QVector2D&  vector);
QVector3D* new_QVector3D(const QVector2D&  vector, qreal  zpos);
QVector3D* new_QVector3D(const QVector4D&  vector);
QVector3D* new_QVector3D(qreal  xpos, qreal  ypos, qreal  zpos);
QVector3D* new_QVector3D(const QVector3D& other) {
QVector3D* a = new QVector3D();
*((QVector3D*)a) = other;
return a; }
void delete_QVector3D(QVector3D* obj) { delete obj; } 
   QVector3D*  __idiv__(QVector3D* theWrappedObject, qreal  divisor);
   QVector3D  normalized(QVector3D* theWrappedObject) const;
   QVector2D  toVector2D(QVector3D* theWrappedObject) const;
   QPointF  toPointF(QVector3D* theWrappedObject) const;
   qreal  lengthSquared(QVector3D* theWrappedObject) const;
   qreal  distanceToLine(QVector3D* theWrappedObject, const QVector3D&  point, const QVector3D&  direction) const;
   void setY(QVector3D* theWrappedObject, qreal  y);
   qreal  length(QVector3D* theWrappedObject) const;
   void setX(QVector3D* theWrappedObject, qreal  x);
   QPoint  toPoint(QVector3D* theWrappedObject) const;
   void setZ(QVector3D* theWrappedObject, qreal  z);
   QVector3D  static_QVector3D_crossProduct(const QVector3D&  v1, const QVector3D&  v2);
   QVector3D*  __isub__(QVector3D* theWrappedObject, const QVector3D&  vector);
   qreal  z(QVector3D* theWrappedObject) const;
   QVector3D*  __imul__(QVector3D* theWrappedObject, const QVector3D&  vector);
   QVector3D*  __imul__(QVector3D* theWrappedObject, qreal  factor);
   QVector4D  toVector4D(QVector3D* theWrappedObject) const;
   qreal  static_QVector3D_dotProduct(const QVector3D&  v1, const QVector3D&  v2);
   qreal  x(QVector3D* theWrappedObject) const;
   qreal  y(QVector3D* theWrappedObject) const;
   QVector3D  static_QVector3D_normal(const QVector3D&  v1, const QVector3D&  v2, const QVector3D&  v3);
   QVector3D  static_QVector3D_normal(const QVector3D&  v1, const QVector3D&  v2);
   bool  isNull(QVector3D* theWrappedObject) const;
   QVector3D*  __iadd__(QVector3D* theWrappedObject, const QVector3D&  vector);
   qreal  distanceToPlane(QVector3D* theWrappedObject, const QVector3D&  plane1, const QVector3D&  plane2, const QVector3D&  plane3) const;
   qreal  distanceToPlane(QVector3D* theWrappedObject, const QVector3D&  plane, const QVector3D&  normal) const;
   void normalize(QVector3D* theWrappedObject);
   bool  operator_equal(QVector3D* theWrappedObject, const QVector3D&  v2);
   const QVector3D  __add__(QVector3D* theWrappedObject, const QVector3D&  v2);
   const QVector3D  __sub__(QVector3D* theWrappedObject, const QVector3D&  v2);
   const QVector3D  __div__(QVector3D* theWrappedObject, qreal  divisor);
   QVector3D  __mul__(QVector3D* theWrappedObject, const QMatrix4x4&  matrix);
   const QVector3D  __mul__(QVector3D* theWrappedObject, const QVector3D&  v2);
   const QVector3D  __mul__(QVector3D* theWrappedObject, qreal  factor);
   void writeTo(QVector3D* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QVector3D* theWrappedObject, QDataStream&  arg__1);
    QString toString(QVector3D*);
};





class PythonQtWrapper_QVector4D : public QObject
{ Q_OBJECT
public:
public slots:
QVector4D* new_QVector4D();
QVector4D* new_QVector4D(const QPoint&  point);
QVector4D* new_QVector4D(const QPointF&  point);
QVector4D* new_QVector4D(const QVector2D&  vector);
QVector4D* new_QVector4D(const QVector2D&  vector, qreal  zpos, qreal  wpos);
QVector4D* new_QVector4D(const QVector3D&  vector);
QVector4D* new_QVector4D(const QVector3D&  vector, qreal  wpos);
QVector4D* new_QVector4D(qreal  xpos, qreal  ypos, qreal  zpos, qreal  wpos);
QVector4D* new_QVector4D(const QVector4D& other) {
QVector4D* a = new QVector4D();
*((QVector4D*)a) = other;
return a; }
void delete_QVector4D(QVector4D* obj) { delete obj; } 
   QVector4D*  __idiv__(QVector4D* theWrappedObject, qreal  divisor);
   QVector3D  toVector3DAffine(QVector4D* theWrappedObject) const;
   QVector4D  normalized(QVector4D* theWrappedObject) const;
   QVector2D  toVector2D(QVector4D* theWrappedObject) const;
   qreal  lengthSquared(QVector4D* theWrappedObject) const;
   qreal  y(QVector4D* theWrappedObject) const;
   QPointF  toPointF(QVector4D* theWrappedObject) const;
   QVector3D  toVector3D(QVector4D* theWrappedObject) const;
   void setW(QVector4D* theWrappedObject, qreal  w);
   void setX(QVector4D* theWrappedObject, qreal  x);
   void setY(QVector4D* theWrappedObject, qreal  y);
   QPoint  toPoint(QVector4D* theWrappedObject) const;
   void setZ(QVector4D* theWrappedObject, qreal  z);
   QVector2D  toVector2DAffine(QVector4D* theWrappedObject) const;
   QVector4D*  __isub__(QVector4D* theWrappedObject, const QVector4D&  vector);
   QVector4D*  __imul__(QVector4D* theWrappedObject, const QVector4D&  vector);
   qreal  length(QVector4D* theWrappedObject) const;
   QVector4D*  __imul__(QVector4D* theWrappedObject, qreal  factor);
   qreal  w(QVector4D* theWrappedObject) const;
   qreal  static_QVector4D_dotProduct(const QVector4D&  v1, const QVector4D&  v2);
   qreal  x(QVector4D* theWrappedObject) const;
   qreal  z(QVector4D* theWrappedObject) const;
   bool  isNull(QVector4D* theWrappedObject) const;
   QVector4D*  __iadd__(QVector4D* theWrappedObject, const QVector4D&  vector);
   void normalize(QVector4D* theWrappedObject);
   bool  operator_equal(QVector4D* theWrappedObject, const QVector4D&  v2);
   const QVector4D  __add__(QVector4D* theWrappedObject, const QVector4D&  v2);
   const QVector4D  __sub__(QVector4D* theWrappedObject, const QVector4D&  v2);
   const QVector4D  __div__(QVector4D* theWrappedObject, qreal  divisor);
   QVector4D  __mul__(QVector4D* theWrappedObject, const QMatrix4x4&  matrix);
   const QVector4D  __mul__(QVector4D* theWrappedObject, const QVector4D&  v2);
   const QVector4D  __mul__(QVector4D* theWrappedObject, qreal  factor);
   void writeTo(QVector4D* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QVector4D* theWrappedObject, QDataStream&  arg__1);
    QString toString(QVector4D*);
};





class PythonQtWrapper_QWhatsThis : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWhatsThis(QWhatsThis* obj) { delete obj; } 
   void static_QWhatsThis_showText(const QPoint&  pos, const QString&  text, QWidget*  w = 0);
   QAction*  static_QWhatsThis_createAction(QObject*  parent = 0);
   void static_QWhatsThis_hideText();
   void static_QWhatsThis_leaveWhatsThisMode();
   bool  static_QWhatsThis_inWhatsThisMode();
   void static_QWhatsThis_enterWhatsThisMode();
};





class PythonQtWrapper_QWhatsThisClickedEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWhatsThisClickedEvent* new_QWhatsThisClickedEvent(const QString&  href);
void delete_QWhatsThisClickedEvent(QWhatsThisClickedEvent* obj) { delete obj; } 
   QString  href(QWhatsThisClickedEvent* theWrappedObject) const;
};





class PythonQtShell_QWheelEvent : public QWheelEvent
{
public:
    PythonQtShell_QWheelEvent(const QPoint&  pos, const QPoint&  globalPos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical):QWheelEvent(pos, globalPos, delta, buttons, modifiers, orient),_wrapper(NULL) {};
    PythonQtShell_QWheelEvent(const QPoint&  pos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical):QWheelEvent(pos, delta, buttons, modifiers, orient),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWheelEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWheelEvent* new_QWheelEvent(const QPoint&  pos, const QPoint&  globalPos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical);
QWheelEvent* new_QWheelEvent(const QPoint&  pos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical);
void delete_QWheelEvent(QWheelEvent* obj) { delete obj; } 
   int  y(QWheelEvent* theWrappedObject) const;
   int  delta(QWheelEvent* theWrappedObject) const;
   int  x(QWheelEvent* theWrappedObject) const;
   const QPoint*  pos(QWheelEvent* theWrappedObject) const;
   const QPoint*  globalPos(QWheelEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QWheelEvent* theWrappedObject) const;
   Qt::Orientation  orientation(QWheelEvent* theWrappedObject) const;
   int  globalX(QWheelEvent* theWrappedObject) const;
   int  globalY(QWheelEvent* theWrappedObject) const;
};





class PythonQtShell_QWidget : public QWidget
{
public:
    PythonQtShell_QWidget(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QWidget(parent, f),_wrapper(NULL) {};

virtual void dropEvent(QDropEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void windowActivationChange(bool  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual int  devType() const;
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void languageChange();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void enabledChange(bool  arg__1);
virtual QSize  sizeHint() const;
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void fontChange(const QFont&  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void paletteChange(const QPalette&  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidget : public QWidget
{ public:
inline void promoted_dropEvent(QDropEvent*  arg__1) { QWidget::dropEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { QWidget::keyReleaseEvent(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QWidget::hideEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QWidget::paintEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QWidget::mouseMoveEvent(arg__1); }
inline QSize  promoted_minimumSizeHint() const { return QWidget::minimumSizeHint(); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QWidget::inputMethodEvent(arg__1); }
inline int  promoted_devType() const { return QWidget::devType(); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QWidget::focusInEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QWidget::wheelEvent(arg__1); }
inline int  promoted_heightForWidth(int  arg__1) const { return QWidget::heightForWidth(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QWidget::showEvent(arg__1); }
inline void promoted_languageChange() { QWidget::languageChange(); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QWidget::resizeEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { QWidget::dragMoveEvent(arg__1); }
inline void promoted_moveEvent(QMoveEvent*  arg__1) { QWidget::moveEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QWidget::focusOutEvent(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QWidget::focusNextPrevChild(next); }
inline void promoted_actionEvent(QActionEvent*  arg__1) { QWidget::actionEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QWidget::mouseReleaseEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QWidget::event(arg__1); }
inline void promoted_tabletEvent(QTabletEvent*  arg__1) { QWidget::tabletEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QWidget::mousePressEvent(arg__1); }
inline QSize  promoted_sizeHint() const { return QWidget::sizeHint(); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QWidget::inputMethodQuery(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QWidget::keyPressEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QWidget::contextMenuEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QWidget::changeEvent(arg__1); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QWidget::dragEnterEvent(arg__1); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QWidget::metric(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QWidget::leaveEvent(arg__1); }
inline void promoted_enterEvent(QEvent*  arg__1) { QWidget::enterEvent(arg__1); }
inline QPaintEngine*  promoted_paintEngine() const { return QWidget::paintEngine(); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QWidget::dragLeaveEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QWidget::mouseDoubleClickEvent(arg__1); }
inline void promoted_closeEvent(QCloseEvent*  arg__1) { QWidget::closeEvent(arg__1); }
};

class PythonQtWrapper_QWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RenderFlag )
Q_FLAGS(RenderFlags )
enum RenderFlag{
  DrawWindowBackground = QWidget::DrawWindowBackground,   DrawChildren = QWidget::DrawChildren,   IgnoreMask = QWidget::IgnoreMask};
Q_DECLARE_FLAGS(RenderFlags, RenderFlag)
public slots:
QWidget* new_QWidget(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QWidget(QWidget* obj) { delete obj; } 
   void setMaximumHeight(QWidget* theWrappedObject, int  maxh);
   void setBaseSize(QWidget* theWrappedObject, int  basew, int  baseh);
   void setBaseSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void getContentsMargins(QWidget* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const;
   void setWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void setAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1, bool  on = true);
   void grabKeyboard(QWidget* theWrappedObject);
   void repaint(QWidget* theWrappedObject, const QRegion&  arg__1);
   void repaint(QWidget* theWrappedObject, const QRect&  arg__1);
   void repaint(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void setFixedWidth(QWidget* theWrappedObject, int  w);
   QWidget*  static_QWidget_keyboardGrabber();
   void setInputContext(QWidget* theWrappedObject, QInputContext*  arg__1);
   const QFont*  font(QWidget* theWrappedObject) const;
   void setStatusTip(QWidget* theWrappedObject, const QString&  arg__1);
   QWidget*  previousInFocusChain(QWidget* theWrappedObject) const;
   void setMinimumWidth(QWidget* theWrappedObject, int  minw);
   QPoint  mapToParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   void setSizeIncrement(QWidget* theWrappedObject, int  w, int  h);
   void setSizeIncrement(QWidget* theWrappedObject, const QSize&  arg__1);
   void setPalette(QWidget* theWrappedObject, const QPalette&  arg__1);
   void static_QWidget_setTabOrder(QWidget*  arg__1, QWidget*  arg__2);
   QString  windowRole(QWidget* theWrappedObject) const;
   void dropEvent(QWidget* theWrappedObject, QDropEvent*  arg__1);
   void setWindowOpacity(QWidget* theWrappedObject, qreal  level);
   void setShortcutEnabled(QWidget* theWrappedObject, int  id, bool  enable = true);
   QCursor  cursor(QWidget* theWrappedObject) const;
   bool  isMinimized(QWidget* theWrappedObject) const;
   qreal  windowOpacity(QWidget* theWrappedObject) const;
   const QPalette*  palette(QWidget* theWrappedObject) const;
   QRect  rect(QWidget* theWrappedObject) const;
   bool  isMaximized(QWidget* theWrappedObject) const;
   bool  isHidden(QWidget* theWrappedObject) const;
   void keyReleaseEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1);
   void setMouseTracking(QWidget* theWrappedObject, bool  enable);
   void setAutoFillBackground(QWidget* theWrappedObject, bool  enabled);
   QPalette::ColorRole  backgroundRole(QWidget* theWrappedObject) const;
   QByteArray  saveGeometry(QWidget* theWrappedObject) const;
   int  grabShortcut(QWidget* theWrappedObject, const QKeySequence&  key, Qt::ShortcutContext  context = Qt::WindowShortcut);
   QString  styleSheet(QWidget* theWrappedObject) const;
   QString  windowFilePath(QWidget* theWrappedObject) const;
   void setMaximumWidth(QWidget* theWrappedObject, int  maxw);
   Qt::FocusPolicy  focusPolicy(QWidget* theWrappedObject) const;
   QString  windowIconText(QWidget* theWrappedObject) const;
   void hideEvent(QWidget* theWrappedObject, QHideEvent*  arg__1);
   void setBackgroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   void setToolTip(QWidget* theWrappedObject, const QString&  arg__1);
   QString  windowTitle(QWidget* theWrappedObject) const;
   void releaseKeyboard(QWidget* theWrappedObject);
   void resize(QWidget* theWrappedObject, const QSize&  arg__1);
   void resize(QWidget* theWrappedObject, int  w, int  h);
   QLocale  locale(QWidget* theWrappedObject) const;
   void paintEvent(QWidget* theWrappedObject, QPaintEvent*  arg__1);
   int  x(QWidget* theWrappedObject) const;
   int  y(QWidget* theWrappedObject) const;
   void mouseMoveEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   QPoint  mapFromGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QSize  minimumSizeHint(QWidget* theWrappedObject) const;
   void setFocusProxy(QWidget* theWrappedObject, QWidget*  arg__1);
   int  width(QWidget* theWrappedObject) const;
   void insertAction(QWidget* theWrappedObject, QAction*  before, QAction*  action);
   void inputMethodEvent(QWidget* theWrappedObject, QInputMethodEvent*  arg__1);
   QIcon  windowIcon(QWidget* theWrappedObject) const;
   bool  isActiveWindow(QWidget* theWrappedObject) const;
   void setCursor(QWidget* theWrappedObject, const QCursor&  arg__1);
   void setLayout(QWidget* theWrappedObject, QLayout*  arg__1);
   bool  isFullScreen(QWidget* theWrappedObject) const;
   void releaseMouse(QWidget* theWrappedObject);
   void setLocale(QWidget* theWrappedObject, const QLocale&  locale);
   QSize  sizeIncrement(QWidget* theWrappedObject) const;
   void move(QWidget* theWrappedObject, const QPoint&  arg__1);
   void move(QWidget* theWrappedObject, int  x, int  y);
   int  devType(QWidget* theWrappedObject) const;
   void setFocusPolicy(QWidget* theWrappedObject, Qt::FocusPolicy  policy);
   QSize  frameSize(QWidget* theWrappedObject) const;
   bool  isVisible(QWidget* theWrappedObject) const;
   void focusInEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1);
   void setAccessibleDescription(QWidget* theWrappedObject, const QString&  description);
   QLayout*  layout(QWidget* theWrappedObject) const;
   void wheelEvent(QWidget* theWrappedObject, QWheelEvent*  arg__1);
   QPoint  mapToGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   void setMinimumSize(QWidget* theWrappedObject, int  minw, int  minh);
   void setMinimumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void clearMask(QWidget* theWrappedObject);
   void setUpdatesEnabled(QWidget* theWrappedObject, bool  enable);
   int  heightForWidth(QWidget* theWrappedObject, int  arg__1) const;
   QSize  maximumSize(QWidget* theWrappedObject) const;
   QRegion  mask(QWidget* theWrappedObject) const;
   void setFixedHeight(QWidget* theWrappedObject, int  h);
   void insertActions(QWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions);
   void showEvent(QWidget* theWrappedObject, QShowEvent*  arg__1);
   bool  isWindowModified(QWidget* theWrappedObject) const;
   void setWindowIcon(QWidget* theWrappedObject, const QIcon&  icon);
   void languageChange(QWidget* theWrappedObject);
   bool  restoreGeometry(QWidget* theWrappedObject, const QByteArray&  geometry);
   void overrideWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   void resizeEvent(QWidget* theWrappedObject, QResizeEvent*  arg__1);
   QInputContext*  inputContext(QWidget* theWrappedObject);
   QString  whatsThis(QWidget* theWrappedObject) const;
   QWidget*  nextInFocusChain(QWidget* theWrappedObject) const;
   bool  isVisibleTo(QWidget* theWrappedObject, QWidget*  arg__1) const;
   QPoint  mapTo(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const;
   QWidget*  window(QWidget* theWrappedObject) const;
   QRegion  childrenRegion(QWidget* theWrappedObject) const;
   bool  isWindow(QWidget* theWrappedObject) const;
   void unsetCursor(QWidget* theWrappedObject);
   void grabMouse(QWidget* theWrappedObject, const QCursor&  arg__1);
   void grabMouse(QWidget* theWrappedObject);
   void dragMoveEvent(QWidget* theWrappedObject, QDragMoveEvent*  arg__1);
   void overrideWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void setParent(QWidget* theWrappedObject, QWidget*  parent, Qt::WindowFlags  f);
   void updateGeometry(QWidget* theWrappedObject);
   void setParent(QWidget* theWrappedObject, QWidget*  parent);
   void moveEvent(QWidget* theWrappedObject, QMoveEvent*  arg__1);
   QString  accessibleDescription(QWidget* theWrappedObject) const;
   void setContextMenuPolicy(QWidget* theWrappedObject, Qt::ContextMenuPolicy  policy);
   void focusOutEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1);
   QSize  minimumSize(QWidget* theWrappedObject) const;
   int  maximumHeight(QWidget* theWrappedObject) const;
   QWidget*  focusWidget(QWidget* theWrappedObject) const;
   void setForegroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   QString  accessibleName(QWidget* theWrappedObject) const;
   void setWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   QRegion  visibleRegion(QWidget* theWrappedObject) const;
   void setWhatsThis(QWidget* theWrappedObject, const QString&  arg__1);
   void unsetLayoutDirection(QWidget* theWrappedObject);
   bool  underMouse(QWidget* theWrappedObject) const;
   int  minimumHeight(QWidget* theWrappedObject) const;
   bool  focusNextPrevChild(QWidget* theWrappedObject, bool  next);
   void setShortcutAutoRepeat(QWidget* theWrappedObject, int  id, bool  enable = true);
   void addAction(QWidget* theWrappedObject, QAction*  action);
   bool  isAncestorOf(QWidget* theWrappedObject, const QWidget*  child) const;
   void setMaximumSize(QWidget* theWrappedObject, int  maxw, int  maxh);
   void setMaximumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   QRect  normalGeometry(QWidget* theWrappedObject) const;
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical);
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy  arg__1);
   void actionEvent(QWidget* theWrappedObject, QActionEvent*  arg__1);
   void mouseReleaseEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   void releaseShortcut(QWidget* theWrappedObject, int  id);
   bool  isEnabled(QWidget* theWrappedObject) const;
   QWidget*  static_QWidget_mouseGrabber();
   QWidget*  focusProxy(QWidget* theWrappedObject) const;
   bool  event(QWidget* theWrappedObject, QEvent*  arg__1);
   QSize  baseSize(QWidget* theWrappedObject) const;
   void setAcceptDrops(QWidget* theWrappedObject, bool  on);
   void tabletEvent(QWidget* theWrappedObject, QTabletEvent*  arg__1);
   bool  isEnabledTo(QWidget* theWrappedObject, QWidget*  arg__1) const;
   QString  toolTip(QWidget* theWrappedObject) const;
   void setWindowModality(QWidget* theWrappedObject, Qt::WindowModality  windowModality);
   Qt::WindowModality  windowModality(QWidget* theWrappedObject) const;
   QRect  contentsRect(QWidget* theWrappedObject) const;
   void removeAction(QWidget* theWrappedObject, QAction*  action);
   bool  isLeftToRight(QWidget* theWrappedObject) const;
   int  maximumWidth(QWidget* theWrappedObject) const;
   void mousePressEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   QSize  sizeHint(QWidget* theWrappedObject) const;
   void setWindowIconText(QWidget* theWrappedObject, const QString&  arg__1);
   void setMinimumHeight(QWidget* theWrappedObject, int  minh);
   QSize  size(QWidget* theWrappedObject) const;
   Qt::ContextMenuPolicy  contextMenuPolicy(QWidget* theWrappedObject) const;
   void setGraphicsEffect(QWidget* theWrappedObject, QGraphicsEffect*  effect);
   void setWindowRole(QWidget* theWrappedObject, const QString&  arg__1);
   QStyle*  style(QWidget* theWrappedObject) const;
   bool  isModal(QWidget* theWrappedObject) const;
   QPoint  pos(QWidget* theWrappedObject) const;
   QWidget*  childAt(QWidget* theWrappedObject, const QPoint&  p) const;
   QWidget*  childAt(QWidget* theWrappedObject, int  x, int  y) const;
   QPoint  mapFromParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   bool  testAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1) const;
   bool  hasMouseTracking(QWidget* theWrappedObject) const;
   void setWindowFilePath(QWidget* theWrappedObject, const QString&  filePath);
   QMargins  contentsMargins(QWidget* theWrappedObject) const;
   QPalette::ColorRole  foregroundRole(QWidget* theWrappedObject) const;
   void activateWindow(QWidget* theWrappedObject);
   bool  autoFillBackground(QWidget* theWrappedObject) const;
   void update(QWidget* theWrappedObject, const QRegion&  arg__1);
   void update(QWidget* theWrappedObject, const QRect&  arg__1);
   void update(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void setAccessibleName(QWidget* theWrappedObject, const QString&  name);
   bool  updatesEnabled(QWidget* theWrappedObject) const;
   void createWinId(QWidget* theWrappedObject);
   void setInputMethodHints(QWidget* theWrappedObject, Qt::InputMethodHints  hints);
   QVariant  inputMethodQuery(QWidget* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void unsetLocale(QWidget* theWrappedObject);
   WId  effectiveWinId(QWidget* theWrappedObject) const;
   QRect  frameGeometry(QWidget* theWrappedObject) const;
   QList<QAction* >  actions(QWidget* theWrappedObject) const;
   void keyPressEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1);
   void setLayoutDirection(QWidget* theWrappedObject, Qt::LayoutDirection  direction);
   Qt::WindowStates  windowState(QWidget* theWrappedObject) const;
   void contextMenuEvent(QWidget* theWrappedObject, QContextMenuEvent*  arg__1);
   void setGeometry(QWidget* theWrappedObject, const QRect&  arg__1);
   void setGeometry(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void setFixedSize(QWidget* theWrappedObject, int  w, int  h);
   void setFixedSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setFont(QWidget* theWrappedObject, const QFont&  arg__1);
   void addActions(QWidget* theWrappedObject, QList<QAction* >  actions);
   QWidget*  parentWidget(QWidget* theWrappedObject) const;
   void render(QWidget* theWrappedObject, QPainter*  painter, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void render(QWidget* theWrappedObject, QPaintDevice*  target, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void stackUnder(QWidget* theWrappedObject, QWidget*  arg__1);
   QGraphicsEffect*  graphicsEffect(QWidget* theWrappedObject) const;
   Qt::WindowFlags  windowFlags(QWidget* theWrappedObject) const;
   void adjustSize(QWidget* theWrappedObject);
   void setFocus(QWidget* theWrappedObject, Qt::FocusReason  reason);
   void changeEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   bool  acceptDrops(QWidget* theWrappedObject) const;
   void dragEnterEvent(QWidget* theWrappedObject, QDragEnterEvent*  arg__1);
   WId  winId(QWidget* theWrappedObject) const;
   void setStyle(QWidget* theWrappedObject, QStyle*  arg__1);
   int  metric(QWidget* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const;
   void setMask(QWidget* theWrappedObject, const QRegion&  arg__1);
   void leaveEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   void setMask(QWidget* theWrappedObject, const QBitmap&  arg__1);
   int  height(QWidget* theWrappedObject) const;
   void clearFocus(QWidget* theWrappedObject);
   void enterEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   Qt::InputMethodHints  inputMethodHints(QWidget* theWrappedObject) const;
   QWidget*  nativeParentWidget(QWidget* theWrappedObject) const;
   Qt::WindowType  windowType(QWidget* theWrappedObject) const;
   void setContentsMargins(QWidget* theWrappedObject, const QMargins&  margins);
   void setContentsMargins(QWidget* theWrappedObject, int  left, int  top, int  right, int  bottom);
   QGraphicsProxyWidget*  graphicsProxyWidget(QWidget* theWrappedObject) const;
   const QRect*  geometry(QWidget* theWrappedObject) const;
   void ensurePolished(QWidget* theWrappedObject) const;
   void scroll(QWidget* theWrappedObject, int  dx, int  dy, const QRect&  arg__3);
   void scroll(QWidget* theWrappedObject, int  dx, int  dy);
   bool  isRightToLeft(QWidget* theWrappedObject) const;
   QPaintEngine*  paintEngine(QWidget* theWrappedObject) const;
   QString  statusTip(QWidget* theWrappedObject) const;
   void dragLeaveEvent(QWidget* theWrappedObject, QDragLeaveEvent*  arg__1);
   Qt::LayoutDirection  layoutDirection(QWidget* theWrappedObject) const;
   bool  hasFocus(QWidget* theWrappedObject) const;
   int  minimumWidth(QWidget* theWrappedObject) const;
   void mouseDoubleClickEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   QPoint  mapFrom(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const;
   QSizePolicy  sizePolicy(QWidget* theWrappedObject) const;
   void closeEvent(QWidget* theWrappedObject, QCloseEvent*  arg__1);
   QRect  childrenRect(QWidget* theWrappedObject) const;
};





class PythonQtShell_QWidgetAction : public QWidgetAction
{
public:
    PythonQtShell_QWidgetAction(QObject*  parent):QWidgetAction(parent),_wrapper(NULL) {};

virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  event(QEvent*  arg__1);
virtual void deleteWidget(QWidget*  widget);
virtual QWidget*  createWidget(QWidget*  parent);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidgetAction : public QWidgetAction
{ public:
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QWidgetAction::eventFilter(arg__1, arg__2); }
inline bool  promoted_event(QEvent*  arg__1) { return QWidgetAction::event(arg__1); }
inline void promoted_deleteWidget(QWidget*  widget) { QWidgetAction::deleteWidget(widget); }
inline QWidget*  promoted_createWidget(QWidget*  parent) { return QWidgetAction::createWidget(parent); }
};

class PythonQtWrapper_QWidgetAction : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetAction* new_QWidgetAction(QObject*  parent);
void delete_QWidgetAction(QWidgetAction* obj) { delete obj; } 
   void setDefaultWidget(QWidgetAction* theWrappedObject, QWidget*  w);
   void releaseWidget(QWidgetAction* theWrappedObject, QWidget*  widget);
   bool  eventFilter(QWidgetAction* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   bool  event(QWidgetAction* theWrappedObject, QEvent*  arg__1);
   QWidget*  defaultWidget(QWidgetAction* theWrappedObject) const;
   QWidget*  requestWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
   void deleteWidget(QWidgetAction* theWrappedObject, QWidget*  widget);
   QWidget*  createWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
};





class PythonQtShell_QWidgetItem : public QWidgetItem
{
public:
    PythonQtShell_QWidgetItem(QWidget*  w):QWidgetItem(w),_wrapper(NULL) {};

virtual QSize  sizeHint() const;
virtual QWidget*  widget();
virtual QRect  geometry() const;
virtual Qt::Orientations  expandingDirections() const;
virtual void setGeometry(const QRect&  arg__1);
virtual bool  hasHeightForWidth() const;
virtual QSize  maximumSize() const;
virtual bool  isEmpty() const;
virtual QSize  minimumSize() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void invalidate();
virtual QLayout*  layout();
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QSpacerItem*  spacerItem();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidgetItem : public QWidgetItem
{ public:
inline QSize  promoted_sizeHint() const { return QWidgetItem::sizeHint(); }
inline QWidget*  promoted_widget() { return QWidgetItem::widget(); }
inline QRect  promoted_geometry() const { return QWidgetItem::geometry(); }
inline Qt::Orientations  promoted_expandingDirections() const { return QWidgetItem::expandingDirections(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QWidgetItem::setGeometry(arg__1); }
inline bool  promoted_hasHeightForWidth() const { return QWidgetItem::hasHeightForWidth(); }
inline QSize  promoted_maximumSize() const { return QWidgetItem::maximumSize(); }
inline bool  promoted_isEmpty() const { return QWidgetItem::isEmpty(); }
inline QSize  promoted_minimumSize() const { return QWidgetItem::minimumSize(); }
inline int  promoted_heightForWidth(int  arg__1) const { return QWidgetItem::heightForWidth(arg__1); }
};

class PythonQtWrapper_QWidgetItem : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetItem* new_QWidgetItem(QWidget*  w);
void delete_QWidgetItem(QWidgetItem* obj) { delete obj; } 
   QSize  sizeHint(QWidgetItem* theWrappedObject) const;
   QWidget*  widget(QWidgetItem* theWrappedObject);
   QRect  geometry(QWidgetItem* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QWidgetItem* theWrappedObject) const;
   void setGeometry(QWidgetItem* theWrappedObject, const QRect&  arg__1);
   bool  hasHeightForWidth(QWidgetItem* theWrappedObject) const;
   QSize  maximumSize(QWidgetItem* theWrappedObject) const;
   bool  isEmpty(QWidgetItem* theWrappedObject) const;
   QSize  minimumSize(QWidgetItem* theWrappedObject) const;
   int  heightForWidth(QWidgetItem* theWrappedObject, int  arg__1) const;
};





class PythonQtWrapper_QWindowStateChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWindowStateChangeEvent* new_QWindowStateChangeEvent(Qt::WindowStates  aOldState);
QWindowStateChangeEvent* new_QWindowStateChangeEvent(Qt::WindowStates  aOldState, bool  isOverride);
void delete_QWindowStateChangeEvent(QWindowStateChangeEvent* obj) { delete obj; } 
   bool  isOverride(QWindowStateChangeEvent* theWrappedObject) const;
   Qt::WindowStates  oldState(QWindowStateChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QWindowsStyle : public QWindowsStyle
{
public:
    PythonQtShell_QWindowsStyle():QWindowsStyle(),_wrapper(NULL) {};

virtual void drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual QSize  sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
virtual int  pixelMetric(QStyle::PixelMetric  pm, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
virtual int  styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
virtual void unpolish(QWidget*  arg__1);
virtual void timerEvent(QTimerEvent*  event);
virtual void drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void unpolish(QApplication*  arg__1);
virtual bool  eventFilter(QObject*  o, QEvent*  e);
virtual void drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void polish(QPalette&  arg__1);
virtual void polish(QWidget*  arg__1);
virtual void polish(QApplication*  arg__1);
virtual QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w) const;
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w) const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const;
virtual QPalette  standardPalette() const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWindowsStyle : public QWindowsStyle
{ public:
inline void promoted_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QWindowsStyle::drawControl(element, opt, p, w); }
inline QSize  promoted_sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const { return QWindowsStyle::sizeFromContents(ct, opt, contentsSize, widget); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  pm, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QWindowsStyle::pixelMetric(pm, option, widget); }
inline int  promoted_styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const { return QWindowsStyle::styleHint(hint, opt, widget, returnData); }
inline void promoted_unpolish(QWidget*  arg__1) { QWindowsStyle::unpolish(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  event) { QWindowsStyle::timerEvent(event); }
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QWindowsStyle::drawPrimitive(pe, opt, p, w); }
inline void promoted_unpolish(QApplication*  arg__1) { QWindowsStyle::unpolish(arg__1); }
inline bool  promoted_eventFilter(QObject*  o, QEvent*  e) { return QWindowsStyle::eventFilter(o, e); }
inline void promoted_drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const { QWindowsStyle::drawComplexControl(cc, opt, p, w); }
inline void promoted_polish(QPalette&  arg__1) { QWindowsStyle::polish(arg__1); }
inline void promoted_polish(QWidget*  arg__1) { QWindowsStyle::polish(arg__1); }
inline void promoted_polish(QApplication*  arg__1) { QWindowsStyle::polish(arg__1); }
inline QRect  promoted_subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const { return QWindowsStyle::subElementRect(r, opt, widget); }
};

class PythonQtWrapper_QWindowsStyle : public QObject
{ Q_OBJECT
public:
public slots:
QWindowsStyle* new_QWindowsStyle();
void delete_QWindowsStyle(QWindowsStyle* obj) { delete obj; } 
   void drawControl(QWindowsStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   QSize  sizeFromContents(QWindowsStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
   int  pixelMetric(QWindowsStyle* theWrappedObject, QStyle::PixelMetric  pm, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   int  styleHint(QWindowsStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
   void unpolish(QWindowsStyle* theWrappedObject, QWidget*  arg__1);
   void timerEvent(QWindowsStyle* theWrappedObject, QTimerEvent*  event);
   void drawPrimitive(QWindowsStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void unpolish(QWindowsStyle* theWrappedObject, QApplication*  arg__1);
   bool  eventFilter(QWindowsStyle* theWrappedObject, QObject*  o, QEvent*  e);
   void drawComplexControl(QWindowsStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void polish(QWindowsStyle* theWrappedObject, QPalette&  arg__1);
   void polish(QWindowsStyle* theWrappedObject, QWidget*  arg__1);
   void polish(QWindowsStyle* theWrappedObject, QApplication*  arg__1);
   QRect  subElementRect(QWindowsStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
};





class PythonQtShell_QWizard : public QWizard
{
public:
    PythonQtShell_QWizard(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QWizard(parent, flags),_wrapper(NULL) {};

virtual int  nextId() const;
virtual void cleanupPage(int  id);
virtual void done(int  result);
virtual void initializePage(int  id);
virtual bool  validateCurrentPage();
virtual void paintEvent(QPaintEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual bool  event(QEvent*  event);
virtual void showEvent(QShowEvent*  arg__1);
virtual void accept();
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void reject();
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void leaveEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWizard : public QWizard
{ public:
inline int  promoted_nextId() const { return QWizard::nextId(); }
inline void promoted_cleanupPage(int  id) { QWizard::cleanupPage(id); }
inline void promoted_done(int  result) { QWizard::done(result); }
inline void promoted_initializePage(int  id) { QWizard::initializePage(id); }
inline bool  promoted_validateCurrentPage() { return QWizard::validateCurrentPage(); }
inline void promoted_paintEvent(QPaintEvent*  event) { QWizard::paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QWizard::resizeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QWizard::event(event); }
};

class PythonQtWrapper_QWizard : public QObject
{ Q_OBJECT
public:
Q_ENUMS(WizardButton WizardPixmap )
enum WizardButton{
  BackButton = QWizard::BackButton,   NextButton = QWizard::NextButton,   CommitButton = QWizard::CommitButton,   FinishButton = QWizard::FinishButton,   CancelButton = QWizard::CancelButton,   HelpButton = QWizard::HelpButton,   CustomButton1 = QWizard::CustomButton1,   CustomButton2 = QWizard::CustomButton2,   CustomButton3 = QWizard::CustomButton3,   Stretch = QWizard::Stretch,   NoButton = QWizard::NoButton,   NStandardButtons = QWizard::NStandardButtons,   NButtons = QWizard::NButtons};
enum WizardPixmap{
  WatermarkPixmap = QWizard::WatermarkPixmap,   LogoPixmap = QWizard::LogoPixmap,   BannerPixmap = QWizard::BannerPixmap,   BackgroundPixmap = QWizard::BackgroundPixmap,   NPixmaps = QWizard::NPixmaps};
public slots:
QWizard* new_QWizard(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QWizard(QWizard* obj) { delete obj; } 
   void setButtonText(QWizard* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   int  nextId(QWizard* theWrappedObject) const;
   void setTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   void setPage(QWizard* theWrappedObject, int  id, QWizardPage*  page);
   void cleanupPage(QWizard* theWrappedObject, int  id);
   void removePage(QWizard* theWrappedObject, int  id);
   QSize  sizeHint(QWizard* theWrappedObject) const;
   QWizard::WizardOptions  options(QWizard* theWrappedObject) const;
   void setField(QWizard* theWrappedObject, const QString&  name, const QVariant&  value);
   QString  buttonText(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   int  startId(QWizard* theWrappedObject) const;
   QList<int >  visitedPages(QWizard* theWrappedObject) const;
   int  currentId(QWizard* theWrappedObject) const;
   bool  testOption(QWizard* theWrappedObject, QWizard::WizardOption  option) const;
   void setButtonLayout(QWizard* theWrappedObject, const QList<QWizard::WizardButton >&  layout);
   void setVisible(QWizard* theWrappedObject, bool  visible);
   void done(QWizard* theWrappedObject, int  result);
   void initializePage(QWizard* theWrappedObject, int  id);
   void setStartId(QWizard* theWrappedObject, int  id);
   void setButton(QWizard* theWrappedObject, QWizard::WizardButton  which, QAbstractButton*  button);
   QAbstractButton*  button(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   QVariant  field(QWizard* theWrappedObject, const QString&  name) const;
   int  addPage(QWizard* theWrappedObject, QWizardPage*  page);
   void setOption(QWizard* theWrappedObject, QWizard::WizardOption  option, bool  on = true);
   void setWizardStyle(QWizard* theWrappedObject, QWizard::WizardStyle  style);
   QPixmap  pixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which) const;
   void setPixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   QWizard::WizardStyle  wizardStyle(QWizard* theWrappedObject) const;
   bool  validateCurrentPage(QWizard* theWrappedObject);
   Qt::TextFormat  subTitleFormat(QWizard* theWrappedObject) const;
   QList<int >  pageIds(QWizard* theWrappedObject) const;
   void paintEvent(QWizard* theWrappedObject, QPaintEvent*  event);
   bool  hasVisitedPage(QWizard* theWrappedObject, int  id) const;
   void setOptions(QWizard* theWrappedObject, QWizard::WizardOptions  options);
   Qt::TextFormat  titleFormat(QWizard* theWrappedObject) const;
   QWizardPage*  page(QWizard* theWrappedObject, int  id) const;
   void resizeEvent(QWizard* theWrappedObject, QResizeEvent*  event);
   bool  event(QWizard* theWrappedObject, QEvent*  event);
   void setSubTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   QWizardPage*  currentPage(QWizard* theWrappedObject) const;
};





class PythonQtShell_QWizardPage : public QWizardPage
{
public:
    PythonQtShell_QWizardPage(QWidget*  parent = 0):QWizardPage(parent),_wrapper(NULL) {};

virtual void cleanupPage();
virtual void initializePage();
virtual bool  validatePage();
virtual bool  isComplete() const;
virtual int  nextId() const;
virtual QSize  sizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual bool  event(QEvent*  arg__1);
virtual int  devType() const;
virtual QSize  minimumSizeHint() const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void changeEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWizardPage : public QWizardPage
{ public:
inline void promoted_cleanupPage() { QWizardPage::cleanupPage(); }
inline void promoted_initializePage() { QWizardPage::initializePage(); }
inline bool  promoted_validatePage() { return QWizardPage::validatePage(); }
inline bool  promoted_isComplete() const { return QWizardPage::isComplete(); }
inline int  promoted_nextId() const { return QWizardPage::nextId(); }
};

class PythonQtWrapper_QWizardPage : public QObject
{ Q_OBJECT
public:
public slots:
QWizardPage* new_QWizardPage(QWidget*  parent = 0);
void delete_QWizardPage(QWizardPage* obj) { delete obj; } 
   QString  title(QWizardPage* theWrappedObject) const;
   bool  isCommitPage(QWizardPage* theWrappedObject) const;
   void setButtonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   bool  isFinalPage(QWizardPage* theWrappedObject) const;
   QString  subTitle(QWizardPage* theWrappedObject) const;
   void cleanupPage(QWizardPage* theWrappedObject);
   void setSubTitle(QWizardPage* theWrappedObject, const QString&  subTitle);
   void initializePage(QWizardPage* theWrappedObject);
   bool  validatePage(QWizardPage* theWrappedObject);
   bool  isComplete(QWizardPage* theWrappedObject) const;
   void setTitle(QWizardPage* theWrappedObject, const QString&  title);
   QString  buttonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which) const;
   void setPixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   void setFinalPage(QWizardPage* theWrappedObject, bool  finalPage);
   void setCommitPage(QWizardPage* theWrappedObject, bool  commitPage);
   QPixmap  pixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which) const;
   int  nextId(QWizardPage* theWrappedObject) const;
};





class PythonQtShell_QWorkspace : public QWorkspace
{
public:
    PythonQtShell_QWorkspace(QWidget*  parent = 0):QWorkspace(parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  e);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void showEvent(QShowEvent*  e);
virtual void hideEvent(QHideEvent*  e);
virtual void wheelEvent(QWheelEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void paintEvent(QPaintEvent*  e);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual int  devType() const;
virtual QSize  minimumSizeHint() const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWorkspace : public QWorkspace
{ public:
inline bool  promoted_event(QEvent*  e) { return QWorkspace::event(e); }
inline void promoted_changeEvent(QEvent*  arg__1) { QWorkspace::changeEvent(arg__1); }
inline void promoted_childEvent(QChildEvent*  arg__1) { QWorkspace::childEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  e) { QWorkspace::showEvent(e); }
inline void promoted_hideEvent(QHideEvent*  e) { QWorkspace::hideEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QWorkspace::wheelEvent(e); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QWorkspace::eventFilter(arg__1, arg__2); }
inline void promoted_paintEvent(QPaintEvent*  e) { QWorkspace::paintEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QWorkspace::resizeEvent(arg__1); }
};

class PythonQtWrapper_QWorkspace : public QObject
{ Q_OBJECT
public:
Q_ENUMS(WindowOrder )
enum WindowOrder{
  CreationOrder = QWorkspace::CreationOrder,   StackingOrder = QWorkspace::StackingOrder};
public slots:
QWorkspace* new_QWorkspace(QWidget*  parent = 0);
void delete_QWorkspace(QWorkspace* obj) { delete obj; } 
   bool  event(QWorkspace* theWrappedObject, QEvent*  e);
   void setBackground(QWorkspace* theWrappedObject, const QBrush&  background);
   void setScrollBarsEnabled(QWorkspace* theWrappedObject, bool  enable);
   void changeEvent(QWorkspace* theWrappedObject, QEvent*  arg__1);
   void childEvent(QWorkspace* theWrappedObject, QChildEvent*  arg__1);
   QWidget*  addWindow(QWorkspace* theWrappedObject, QWidget*  w, Qt::WindowFlags  flags = 0);
   QWidget*  activeWindow(QWorkspace* theWrappedObject) const;
   void showEvent(QWorkspace* theWrappedObject, QShowEvent*  e);
   void hideEvent(QWorkspace* theWrappedObject, QHideEvent*  e);
   QBrush  background(QWorkspace* theWrappedObject) const;
   QList<QWidget* >  windowList(QWorkspace* theWrappedObject, QWorkspace::WindowOrder  order = QWorkspace::CreationOrder) const;
   void wheelEvent(QWorkspace* theWrappedObject, QWheelEvent*  e);
   QSize  sizeHint(QWorkspace* theWrappedObject) const;
   bool  scrollBarsEnabled(QWorkspace* theWrappedObject) const;
   bool  eventFilter(QWorkspace* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void paintEvent(QWorkspace* theWrappedObject, QPaintEvent*  e);
   void resizeEvent(QWorkspace* theWrappedObject, QResizeEvent*  arg__1);
};


