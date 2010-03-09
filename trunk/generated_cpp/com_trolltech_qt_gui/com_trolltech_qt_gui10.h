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
   void static_QToolTip_setPalette(const QPalette&  arg__1);
   void static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w = 0);
   void static_QToolTip_hideText();
   void static_QToolTip_setFont(const QFont&  arg__1);
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
   void setTouchPoints(QTouchEvent* theWrappedObject, const QList<QTouchEvent::TouchPoint >&  atouchPoints);
   const QList<QTouchEvent::TouchPoint >*  touchPoints(QTouchEvent* theWrappedObject) const;
   QTouchEvent::DeviceType  deviceType(QTouchEvent* theWrappedObject) const;
   QWidget*  widget(QTouchEvent* theWrappedObject) const;
   void setDeviceType(QTouchEvent* theWrappedObject, QTouchEvent::DeviceType  adeviceType);
   void setTouchPointStates(QTouchEvent* theWrappedObject, Qt::TouchPointStates  aTouchPointStates);
   Qt::TouchPointStates  touchPointStates(QTouchEvent* theWrappedObject) const;
   void setWidget(QTouchEvent* theWrappedObject, QWidget*  awidget);
};





class PythonQtWrapper_QTouchEvent_TouchPoint : public QObject
{ Q_OBJECT
public:
public slots:
QTouchEvent::TouchPoint* new_QTouchEvent_TouchPoint(const QTouchEvent::TouchPoint&  other);
QTouchEvent::TouchPoint* new_QTouchEvent_TouchPoint(int  id = -1);
void delete_QTouchEvent_TouchPoint(QTouchEvent::TouchPoint* obj) { delete obj; } 
   QPointF  lastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  normalizedPos);
   void setState(QTouchEvent::TouchPoint* theWrappedObject, Qt::TouchPointStates  state);
   void setLastScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScenePos);
   int  id(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setLastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastNormalizedPos);
   void setScreenRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  screenRect);
   QPointF  normalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  scenePos);
   QPointF  screenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   qreal  pressure(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setStartScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScreenPos);
   void setPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  pos);
   QPointF  pos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QRectF  screenRect(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  screenPos);
   void setLastPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastPos);
   QPointF  lastScenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setStartPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startPos);
   QTouchEvent::TouchPoint*  operator_assign(QTouchEvent::TouchPoint* theWrappedObject, const QTouchEvent::TouchPoint&  other);
   QRectF  sceneRect(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  rect);
   QPointF  scenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   bool  isPrimary(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   Qt::TouchPointState  state(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setPressure(QTouchEvent::TouchPoint* theWrappedObject, qreal  pressure);
   QRectF  rect(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setSceneRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  sceneRect);
   QPointF  startScenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setStartScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScenePos);
   void setLastScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScreenPos);
   QPointF  startNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setId(QTouchEvent::TouchPoint* theWrappedObject, int  id);
   QPointF  startPos(QTouchEvent::TouchPoint* theWrappedObject) const;
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
   void map(QTransform* theWrappedObject, qreal  x, qreal  y, qreal*  tx, qreal*  ty) const;
   bool  isRotating(QTransform* theWrappedObject) const;
   QTransform*  rotateRadians(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   bool  __eq__(QTransform* theWrappedObject, const QTransform&  arg__1) const;
   void setMatrix(QTransform* theWrappedObject, qreal  m11, qreal  m12, qreal  m13, qreal  m21, qreal  m22, qreal  m23, qreal  m31, qreal  m32, qreal  m33);
   qreal  m13(QTransform* theWrappedObject) const;
   QTransform*  __idiv__(QTransform* theWrappedObject, qreal  div);
   QTransform*  shear(QTransform* theWrappedObject, qreal  sh, qreal  sv);
   bool  isInvertible(QTransform* theWrappedObject) const;
   qreal  dy(QTransform* theWrappedObject) const;
   QTransform*  __imul__(QTransform* theWrappedObject, const QTransform&  arg__1);
   qreal  m21(QTransform* theWrappedObject) const;
   qreal  m22(QTransform* theWrappedObject) const;
   QTransform::TransformationType  type(QTransform* theWrappedObject) const;
   QTransform*  rotate(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   QTransform  transposed(QTransform* theWrappedObject) const;
   qreal  m23(QTransform* theWrappedObject) const;
   bool  static_QTransform_squareToQuad(const QPolygonF&  square, QTransform&  result);
   bool  isAffine(QTransform* theWrappedObject) const;
   bool  isScaling(QTransform* theWrappedObject) const;
   QTransform  static_QTransform_fromTranslate(qreal  dx, qreal  dy);
   QTransform  static_QTransform_fromScale(qreal  dx, qreal  dy);
   qreal  determinant(QTransform* theWrappedObject) const;
   void reset(QTransform* theWrappedObject);
   bool  __ne__(QTransform* theWrappedObject, const QTransform&  arg__1) const;
   QTransform*  __iadd__(QTransform* theWrappedObject, qreal  div);
   QLineF  map(QTransform* theWrappedObject, const QLineF&  l) const;
   QPolygonF  map(QTransform* theWrappedObject, const QPolygonF&  a) const;
   QPolygon  map(QTransform* theWrappedObject, const QPolygon&  a) const;
   QPainterPath  map(QTransform* theWrappedObject, const QPainterPath&  p) const;
   QRegion  map(QTransform* theWrappedObject, const QRegion&  r) const;
   bool  static_QTransform_quadToQuad(const QPolygonF&  one, const QPolygonF&  two, QTransform&  result);
   QLine  map(QTransform* theWrappedObject, const QLine&  l) const;
   bool  isTranslating(QTransform* theWrappedObject) const;
   const QMatrix*  toAffine(QTransform* theWrappedObject) const;
   bool  static_QTransform_quadToSquare(const QPolygonF&  quad, QTransform&  result);
   QRectF  mapRect(QTransform* theWrappedObject, const QRectF&  arg__1) const;
   QPointF  map(QTransform* theWrappedObject, const QPointF&  p) const;
   QPoint  map(QTransform* theWrappedObject, const QPoint&  p) const;
   QTransform*  translate(QTransform* theWrappedObject, qreal  dx, qreal  dy);
   QTransform*  __isub__(QTransform* theWrappedObject, qreal  div);
   QRect  mapRect(QTransform* theWrappedObject, const QRect&  arg__1) const;
   bool  isIdentity(QTransform* theWrappedObject) const;
   qreal  m32(QTransform* theWrappedObject) const;
   qreal  m31(QTransform* theWrappedObject) const;
   QTransform*  scale(QTransform* theWrappedObject, qreal  sx, qreal  sy);
   qreal  m33(QTransform* theWrappedObject) const;
   qreal  m12(QTransform* theWrappedObject) const;
   QTransform*  __imul__(QTransform* theWrappedObject, qreal  div);
   QTransform  multiplied(QTransform* theWrappedObject, const QTransform&  o) const;
   qreal  dx(QTransform* theWrappedObject) const;
   QTransform  inverted(QTransform* theWrappedObject, bool*  invertible = 0) const;
   QTransform  adjoint(QTransform* theWrappedObject) const;
   qreal  m11(QTransform* theWrappedObject) const;
   qreal  det(QTransform* theWrappedObject) const;
   QPolygon  mapToPolygon(QTransform* theWrappedObject, const QRect&  r) const;
   QTransform  __add__(QTransform* theWrappedObject, qreal  n);
   QTransform  __sub__(QTransform* theWrappedObject, qreal  n);
   QTransform  __div__(QTransform* theWrappedObject, qreal  n);
   void writeTo(QTransform* theWrappedObject, QDataStream&  arg__1);
   QTransform  __mul__(QTransform* theWrappedObject, qreal  n);
   void readFrom(QTransform* theWrappedObject, QDataStream&  arg__1);
    QString py_toString(QTransform*);
};





class PythonQtShell_QTreeView : public QTreeView
{
public:
    PythonQtShell_QTreeView(QWidget*  parent = 0):QTreeView(parent),_wrapper(NULL) {};

virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual int  horizontalOffset() const;
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void keyboardSearch(const QString&  search);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void setModel(QAbstractItemModel*  model);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void reset();
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void updateGeometries();
virtual void horizontalScrollbarAction(int  action);
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const;
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void selectAll();
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void setRootIndex(const QModelIndex&  index);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void doItemsLayout();
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const;
virtual bool  viewportEvent(QEvent*  event);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual void paintEvent(QPaintEvent*  event);
virtual int  sizeHintForColumn(int  column) const;
virtual void scrollContentsBy(int  dx, int  dy);
virtual void timerEvent(QTimerEvent*  event);
virtual int  verticalOffset() const;
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual void focusInEvent(QFocusEvent*  event);
virtual void commitData(QWidget*  editor);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void startDrag(Qt::DropActions  supportedActions);
virtual int  sizeHintForRow(int  row) const;
virtual void updateEditorData();
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void focusOutEvent(QFocusEvent*  event);
virtual void updateEditorGeometries();
virtual QStyleOptionViewItem  viewOptions() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void verticalScrollbarAction(int  action);
virtual void resizeEvent(QResizeEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual bool  event(QEvent*  event);
virtual void verticalScrollbarValueChanged(int  value);
virtual bool  focusNextPrevChild(bool  next);
virtual void dropEvent(QDropEvent*  event);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void horizontalScrollbarValueChanged(int  value);
virtual void editorDestroyed(QObject*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void actionEvent(QActionEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void languageChange();
virtual void hideEvent(QHideEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTreeView : public QTreeView
{ public:
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QTreeView::isIndexHidden(index); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QTreeView::keyPressEvent(event); }
inline int  promoted_horizontalOffset() const { return QTreeView::horizontalOffset(); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QTreeView::mouseReleaseEvent(event); }
inline void promoted_keyboardSearch(const QString&  search) { QTreeView::keyboardSearch(search); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QTreeView::mousePressEvent(event); }
inline void promoted_setModel(QAbstractItemModel*  model) { QTreeView::setModel(model); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QTreeView::rowsInserted(parent, start, end); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QTreeView::visualRegionForSelection(selection); }
inline void promoted_reset() { QTreeView::reset(); }
inline void promoted_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QTreeView::rowsAboutToBeRemoved(parent, start, end); }
inline void promoted_updateGeometries() { QTreeView::updateGeometries(); }
inline void promoted_horizontalScrollbarAction(int  action) { QTreeView::horizontalScrollbarAction(action); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return QTreeView::selectedIndexes(); }
inline void promoted_drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const { QTreeView::drawRow(painter, options, index); }
inline void promoted_setSelectionModel(QItemSelectionModel*  selectionModel) { QTreeView::setSelectionModel(selectionModel); }
inline void promoted_selectAll() { QTreeView::selectAll(); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QTreeView::mouseMoveEvent(event); }
inline void promoted_setRootIndex(const QModelIndex&  index) { QTreeView::setRootIndex(index); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { QTreeView::mouseDoubleClickEvent(event); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QTreeView::selectionChanged(selected, deselected); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { QTreeView::dragMoveEvent(event); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QTreeView::currentChanged(current, previous); }
inline void promoted_doItemsLayout() { QTreeView::doItemsLayout(); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QTreeView::visualRect(index); }
inline void promoted_drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const { QTreeView::drawBranches(painter, rect, index); }
inline bool  promoted_viewportEvent(QEvent*  event) { return QTreeView::viewportEvent(event); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QTreeView::indexAt(p); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight) { QTreeView::dataChanged(topLeft, bottomRight); }
inline void promoted_paintEvent(QPaintEvent*  event) { QTreeView::paintEvent(event); }
inline int  promoted_sizeHintForColumn(int  column) const { return QTreeView::sizeHintForColumn(column); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QTreeView::scrollContentsBy(dx, dy); }
inline void promoted_timerEvent(QTimerEvent*  event) { QTreeView::timerEvent(event); }
inline int  promoted_verticalOffset() const { return QTreeView::verticalOffset(); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QTreeView::setSelection(rect, command); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QTreeView::scrollTo(index, hint); }
};

class PythonQtWrapper_QTreeView : public QObject
{ Q_OBJECT
public:
public slots:
QTreeView* new_QTreeView(QWidget*  parent = 0);
void delete_QTreeView(QTreeView* obj) { delete obj; } 
   bool  itemsExpandable(QTreeView* theWrappedObject) const;
   bool  isIndexHidden(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void setIndentation(QTreeView* theWrappedObject, int  i);
   void setRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  hide);
   void setRootIsDecorated(QTreeView* theWrappedObject, bool  show);
   void keyPressEvent(QTreeView* theWrappedObject, QKeyEvent*  event);
   int  horizontalOffset(QTreeView* theWrappedObject) const;
   bool  rootIsDecorated(QTreeView* theWrappedObject) const;
   void setExpandsOnDoubleClick(QTreeView* theWrappedObject, bool  enable);
   void mouseReleaseEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   void keyboardSearch(QTreeView* theWrappedObject, const QString&  search);
   void setAutoExpandDelay(QTreeView* theWrappedObject, int  delay);
   void setItemsExpandable(QTreeView* theWrappedObject, bool  enable);
   void setColumnHidden(QTreeView* theWrappedObject, int  column, bool  hide);
   void mousePressEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   void setModel(QTreeView* theWrappedObject, QAbstractItemModel*  model);
   void setExpanded(QTreeView* theWrappedObject, const QModelIndex&  index, bool  expand);
   void rowsInserted(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   bool  expandsOnDoubleClick(QTreeView* theWrappedObject) const;
   void setFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  span);
   QRegion  visualRegionForSelection(QTreeView* theWrappedObject, const QItemSelection&  selection) const;
   bool  isRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const;
   bool  allColumnsShowFocus(QTreeView* theWrappedObject) const;
   QModelIndex  indexAbove(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   bool  isHeaderHidden(QTreeView* theWrappedObject) const;
   bool  isSortingEnabled(QTreeView* theWrappedObject) const;
   void reset(QTreeView* theWrappedObject);
   void rowsAboutToBeRemoved(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   void updateGeometries(QTreeView* theWrappedObject);
   void horizontalScrollbarAction(QTreeView* theWrappedObject, int  action);
   QList<QModelIndex >  selectedIndexes(QTreeView* theWrappedObject) const;
   void drawRow(QTreeView* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const;
   void setSelectionModel(QTreeView* theWrappedObject, QItemSelectionModel*  selectionModel);
   int  indentation(QTreeView* theWrappedObject) const;
   int  columnAt(QTreeView* theWrappedObject, int  x) const;
   void setSortingEnabled(QTreeView* theWrappedObject, bool  enable);
   void selectAll(QTreeView* theWrappedObject);
   void setWordWrap(QTreeView* theWrappedObject, bool  on);
   void setHeader(QTreeView* theWrappedObject, QHeaderView*  header);
   bool  isAnimated(QTreeView* theWrappedObject) const;
   QHeaderView*  header(QTreeView* theWrappedObject) const;
   void mouseMoveEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   void setRootIndex(QTreeView* theWrappedObject, const QModelIndex&  index);
   void mouseDoubleClickEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   void selectionChanged(QTreeView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected);
   void dragMoveEvent(QTreeView* theWrappedObject, QDragMoveEvent*  event);
   void setAllColumnsShowFocus(QTreeView* theWrappedObject, bool  enable);
   void currentChanged(QTreeView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous);
   bool  wordWrap(QTreeView* theWrappedObject) const;
   void doItemsLayout(QTreeView* theWrappedObject);
   bool  isExpanded(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void setHeaderHidden(QTreeView* theWrappedObject, bool  hide);
   QModelIndex  indexBelow(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   QRect  visualRect(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void drawBranches(QTreeView* theWrappedObject, QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const;
   bool  viewportEvent(QTreeView* theWrappedObject, QEvent*  event);
   bool  isColumnHidden(QTreeView* theWrappedObject, int  column) const;
   QModelIndex  indexAt(QTreeView* theWrappedObject, const QPoint&  p) const;
   void setAnimated(QTreeView* theWrappedObject, bool  enable);
   int  columnViewportPosition(QTreeView* theWrappedObject, int  column) const;
   void setUniformRowHeights(QTreeView* theWrappedObject, bool  uniform);
   void dataChanged(QTreeView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   void setColumnWidth(QTreeView* theWrappedObject, int  column, int  width);
   void paintEvent(QTreeView* theWrappedObject, QPaintEvent*  event);
   int  sizeHintForColumn(QTreeView* theWrappedObject, int  column) const;
   void scrollContentsBy(QTreeView* theWrappedObject, int  dx, int  dy);
   void timerEvent(QTreeView* theWrappedObject, QTimerEvent*  event);
   void sortByColumn(QTreeView* theWrappedObject, int  column, Qt::SortOrder  order);
   bool  isFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const;
   bool  uniformRowHeights(QTreeView* theWrappedObject) const;
   int  verticalOffset(QTreeView* theWrappedObject) const;
   int  autoExpandDelay(QTreeView* theWrappedObject) const;
   void setSelection(QTreeView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
   void scrollTo(QTreeView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
   int  columnWidth(QTreeView* theWrappedObject, int  column) const;
};





class PythonQtShell_QTreeWidget : public QTreeWidget
{
public:
    PythonQtShell_QTreeWidget(QWidget*  parent = 0):QTreeWidget(parent),_wrapper(NULL) {};

virtual Qt::DropActions  supportedDropActions() const;
virtual bool  dropMimeData(QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual QMimeData*  mimeData(const QList<QTreeWidgetItem* >  items) const;
virtual void dropEvent(QDropEvent*  event);
virtual bool  event(QEvent*  e);
virtual QStringList  mimeTypes() const;
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual QList<QModelIndex >  selectedIndexes() const;
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual bool  viewportEvent(QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void paintEvent(QPaintEvent*  event);
virtual void drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const;
virtual void doItemsLayout();
virtual void updateGeometries();
virtual int  verticalOffset() const;
virtual int  horizontalOffset() const;
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual int  sizeHintForColumn(int  column) const;
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void horizontalScrollbarAction(int  action);
virtual void setRootIndex(const QModelIndex&  index);
virtual void editorDestroyed(QObject*  editor);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual void keyboardSearch(const QString&  search);
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual void reset();
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void selectAll();
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void commitData(QWidget*  editor);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void startDrag(Qt::DropActions  supportedActions);
virtual int  sizeHintForRow(int  row) const;
virtual void updateEditorData();
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void focusOutEvent(QFocusEvent*  event);
virtual void updateEditorGeometries();
virtual QStyleOptionViewItem  viewOptions() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void verticalScrollbarAction(int  action);
virtual void resizeEvent(QResizeEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void verticalScrollbarValueChanged(int  value);
virtual bool  focusNextPrevChild(bool  next);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual QPaintEngine*  paintEngine() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void horizontalScrollbarValueChanged(int  value);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void actionEvent(QActionEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void languageChange();
virtual void hideEvent(QHideEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTreeWidget : public QTreeWidget
{ public:
inline Qt::DropActions  promoted_supportedDropActions() const { return QTreeWidget::supportedDropActions(); }
inline bool  promoted_dropMimeData(QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action) { return QTreeWidget::dropMimeData(parent, index, data, action); }
inline void promoted_setSelectionModel(QItemSelectionModel*  selectionModel) { QTreeWidget::setSelectionModel(selectionModel); }
inline void promoted_dropEvent(QDropEvent*  event) { QTreeWidget::dropEvent(event); }
inline bool  promoted_event(QEvent*  e) { return QTreeWidget::event(e); }
inline QStringList  promoted_mimeTypes() const { return QTreeWidget::mimeTypes(); }
};

class PythonQtWrapper_QTreeWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTreeWidget* new_QTreeWidget(QWidget*  parent = 0);
void delete_QTreeWidget(QTreeWidget* obj) { delete obj; } 
   void setFirstItemColumnSpanned(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item, bool  span);
   void setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column, QItemSelectionModel::SelectionFlags  command);
   void closePersistentEditor(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0);
   Qt::DropActions  supportedDropActions(QTreeWidget* theWrappedObject) const;
   void addTopLevelItems(QTreeWidget* theWrappedObject, const QList<QTreeWidgetItem* >&  items);
   QTreeWidgetItem*  itemAbove(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   void setHeaderLabel(QTreeWidget* theWrappedObject, const QString&  label);
   int  sortColumn(QTreeWidget* theWrappedObject) const;
   QTreeWidgetItem*  invisibleRootItem(QTreeWidget* theWrappedObject) const;
   int  currentColumn(QTreeWidget* theWrappedObject) const;
   void setHeaderLabels(QTreeWidget* theWrappedObject, const QStringList&  labels);
   QList<QTreeWidgetItem* >  selectedItems(QTreeWidget* theWrappedObject) const;
   bool  dropMimeData(QTreeWidget* theWrappedObject, QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action);
   void addTopLevelItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item);
   void setHeaderItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item);
   QTreeWidgetItem*  currentItem(QTreeWidget* theWrappedObject) const;
   void insertTopLevelItems(QTreeWidget* theWrappedObject, int  index, const QList<QTreeWidgetItem* >&  items);
   void setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column);
   void setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item);
   void setSelectionModel(QTreeWidget* theWrappedObject, QItemSelectionModel*  selectionModel);
   void setItemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column, QWidget*  widget);
   QList<QTreeWidgetItem* >  findItems(QTreeWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags, int  column = 0) const;
   int  indexOfTopLevelItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item) const;
   QWidget*  itemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column) const;
   void sortItems(QTreeWidget* theWrappedObject, int  column, Qt::SortOrder  order);
   QTreeWidgetItem*  itemAt(QTreeWidget* theWrappedObject, int  x, int  y) const;
   QTreeWidgetItem*  itemAt(QTreeWidget* theWrappedObject, const QPoint&  p) const;
   QRect  visualItemRect(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   void dropEvent(QTreeWidget* theWrappedObject, QDropEvent*  event);
   void openPersistentEditor(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0);
   QTreeWidgetItem*  itemBelow(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   bool  isFirstItemColumnSpanned(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   int  topLevelItemCount(QTreeWidget* theWrappedObject) const;
   int  columnCount(QTreeWidget* theWrappedObject) const;
   QTreeWidgetItem*  headerItem(QTreeWidget* theWrappedObject) const;
   QTreeWidgetItem*  topLevelItem(QTreeWidget* theWrappedObject, int  index) const;
   void editItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0);
   void removeItemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column);
   void setColumnCount(QTreeWidget* theWrappedObject, int  columns);
   QTreeWidgetItem*  takeTopLevelItem(QTreeWidget* theWrappedObject, int  index);
   bool  event(QTreeWidget* theWrappedObject, QEvent*  e);
   void insertTopLevelItem(QTreeWidget* theWrappedObject, int  index, QTreeWidgetItem*  item);
   QStringList  mimeTypes(QTreeWidget* theWrappedObject) const;
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

virtual QVariant  data(int  column, int  role) const;
virtual QTreeWidgetItem*  clone() const;
virtual void write(QDataStream&  out) const;
virtual void read(QDataStream&  in);
virtual bool  __lt__(const QTreeWidgetItem&  other) const;
virtual void setData(int  column, int  role, const QVariant&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTreeWidgetItem : public QTreeWidgetItem
{ public:
inline QVariant  promoted_data(int  column, int  role) const { return QTreeWidgetItem::data(column, role); }
inline QTreeWidgetItem*  promoted_clone() const { return QTreeWidgetItem::clone(); }
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
bool py_hasOwner(QTreeWidgetItem* theWrappedObject) { return theWrappedObject->treeWidget()!=NULL || theWrappedObject->parent()!=NULL; }
   void setExpanded(QTreeWidgetItem* theWrappedObject, bool  expand);
   void setFirstColumnSpanned(QTreeWidgetItem* theWrappedObject, bool  span);
   int  childCount(QTreeWidgetItem* theWrappedObject) const;
   QSize  sizeHint(QTreeWidgetItem* theWrappedObject, int  column) const;
   QTreeWidgetItem*  child(QTreeWidgetItem* theWrappedObject, int  index) const;
   void setIcon(QTreeWidgetItem* theWrappedObject, int  column, const QIcon&  icon);
   int  textAlignment(QTreeWidgetItem* theWrappedObject, int  column) const;
   int  columnCount(QTreeWidgetItem* theWrappedObject) const;
   void insertChildren(QTreeWidgetItem* theWrappedObject, int  index, const QList<QTreeWidgetItem* >&  children);
   Qt::CheckState  checkState(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setSelected(QTreeWidgetItem* theWrappedObject, bool  select);
   bool  isHidden(QTreeWidgetItem* theWrappedObject) const;
   QString  whatsThis(QTreeWidgetItem* theWrappedObject, int  column) const;
   QString  toolTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   int  indexOfChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child) const;
   QVariant  data(QTreeWidgetItem* theWrappedObject, int  column, int  role) const;
   QTreeWidgetItem*  clone(QTreeWidgetItem* theWrappedObject) const;
   void setChildIndicatorPolicy(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem::ChildIndicatorPolicy  policy);
   QTreeWidgetItem*  takeChild(QTreeWidgetItem* theWrappedObject, int  index);
   void sortChildren(QTreeWidgetItem* theWrappedObject, int  column, Qt::SortOrder  order);
   QString  statusTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   QBrush  background(QTreeWidgetItem* theWrappedObject, int  column) const;
   void addChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child);
   QTreeWidgetItem*  parent(QTreeWidgetItem* theWrappedObject) const;
   void setTextAlignment(QTreeWidgetItem* theWrappedObject, int  column, int  alignment);
   void setSizeHint(QTreeWidgetItem* theWrappedObject, int  column, const QSize&  size);
   void setToolTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  toolTip);
   bool  isDisabled(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem::ChildIndicatorPolicy  childIndicatorPolicy(QTreeWidgetItem* theWrappedObject) const;
   QFont  font(QTreeWidgetItem* theWrappedObject, int  column) const;
   void addChildren(QTreeWidgetItem* theWrappedObject, const QList<QTreeWidgetItem* >&  children);
   bool  isFirstColumnSpanned(QTreeWidgetItem* theWrappedObject) const;
   void setBackground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   void setFont(QTreeWidgetItem* theWrappedObject, int  column, const QFont&  font);
   bool  isExpanded(QTreeWidgetItem* theWrappedObject) const;
   void setFlags(QTreeWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   void setWhatsThis(QTreeWidgetItem* theWrappedObject, int  column, const QString&  whatsThis);
   void setText(QTreeWidgetItem* theWrappedObject, int  column, const QString&  text);
   void setCheckState(QTreeWidgetItem* theWrappedObject, int  column, Qt::CheckState  state);
   void setForeground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   void removeChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child);
   QTreeWidget*  treeWidget(QTreeWidgetItem* theWrappedObject) const;
   QBrush  foreground(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setStatusTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  statusTip);
   void setDisabled(QTreeWidgetItem* theWrappedObject, bool  disabled);
   Qt::ItemFlags  flags(QTreeWidgetItem* theWrappedObject) const;
   void setHidden(QTreeWidgetItem* theWrappedObject, bool  hide);
   QString  text(QTreeWidgetItem* theWrappedObject, int  column) const;
   QList<QTreeWidgetItem* >  takeChildren(QTreeWidgetItem* theWrappedObject);
   int  type(QTreeWidgetItem* theWrappedObject) const;
   void insertChild(QTreeWidgetItem* theWrappedObject, int  index, QTreeWidgetItem*  child);
   QIcon  icon(QTreeWidgetItem* theWrappedObject, int  column) const;
   bool  isSelected(QTreeWidgetItem* theWrappedObject) const;
   void setData(QTreeWidgetItem* theWrappedObject, int  column, int  role, const QVariant&  value);
   void writeTo(QTreeWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QTreeWidgetItem* theWrappedObject, QDataStream&  in);
};





class PythonQtShell_QUndoCommand : public QUndoCommand
{
public:
    PythonQtShell_QUndoCommand(QUndoCommand*  parent = 0):QUndoCommand(parent),_wrapper(NULL) {};
    PythonQtShell_QUndoCommand(const QString&  text, QUndoCommand*  parent = 0):QUndoCommand(text, parent),_wrapper(NULL) {};

virtual bool  mergeWith(const QUndoCommand*  other);
virtual void undo();
virtual int  id() const;
virtual void redo();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QUndoCommand : public QUndoCommand
{ public:
inline bool  promoted_mergeWith(const QUndoCommand*  other) { return QUndoCommand::mergeWith(other); }
inline void promoted_undo() { QUndoCommand::undo(); }
inline int  promoted_id() const { return QUndoCommand::id(); }
inline void promoted_redo() { QUndoCommand::redo(); }
};

class PythonQtWrapper_QUndoCommand : public QObject
{ Q_OBJECT
public:
public slots:
QUndoCommand* new_QUndoCommand(QUndoCommand*  parent = 0);
QUndoCommand* new_QUndoCommand(const QString&  text, QUndoCommand*  parent = 0);
void delete_QUndoCommand(QUndoCommand* obj) { delete obj; } 
   bool  mergeWith(QUndoCommand* theWrappedObject, const QUndoCommand*  other);
   const QUndoCommand*  child(QUndoCommand* theWrappedObject, int  index) const;
   void undo(QUndoCommand* theWrappedObject);
   int  childCount(QUndoCommand* theWrappedObject) const;
   void setText(QUndoCommand* theWrappedObject, const QString&  text);
   int  id(QUndoCommand* theWrappedObject) const;
   QString  text(QUndoCommand* theWrappedObject) const;
   void redo(QUndoCommand* theWrappedObject);
};





class PythonQtShell_QUndoGroup : public QUndoGroup
{
public:
    PythonQtShell_QUndoGroup(QObject*  parent = 0):QUndoGroup(parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUndoGroup : public QObject
{ Q_OBJECT
public:
public slots:
QUndoGroup* new_QUndoGroup(QObject*  parent = 0);
void delete_QUndoGroup(QUndoGroup* obj) { delete obj; } 
   void removeStack(QUndoGroup* theWrappedObject, QUndoStack*  stack);
   bool  canRedo(QUndoGroup* theWrappedObject) const;
   QAction*  createRedoAction(QUndoGroup* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
   QString  redoText(QUndoGroup* theWrappedObject) const;
   QList<QUndoStack* >  stacks(QUndoGroup* theWrappedObject) const;
   bool  isClean(QUndoGroup* theWrappedObject) const;
   bool  canUndo(QUndoGroup* theWrappedObject) const;
   QUndoStack*  activeStack(QUndoGroup* theWrappedObject) const;
   void addStack(QUndoGroup* theWrappedObject, QUndoStack*  stack);
   QString  undoText(QUndoGroup* theWrappedObject) const;
   QAction*  createUndoAction(QUndoGroup* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
};





class PythonQtShell_QUndoStack : public QUndoStack
{
public:
    PythonQtShell_QUndoStack(QObject*  parent = 0):QUndoStack(parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

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
   QAction*  createUndoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
   int  count(QUndoStack* theWrappedObject) const;
   QString  text(QUndoStack* theWrappedObject, int  idx) const;
   bool  isClean(QUndoStack* theWrappedObject) const;
   bool  canUndo(QUndoStack* theWrappedObject) const;
   void beginMacro(QUndoStack* theWrappedObject, const QString&  text);
   void setUndoLimit(QUndoStack* theWrappedObject, int  limit);
   bool  isActive(QUndoStack* theWrappedObject) const;
   int  cleanIndex(QUndoStack* theWrappedObject) const;
   int  undoLimit(QUndoStack* theWrappedObject) const;
   int  index(QUndoStack* theWrappedObject) const;
   void endMacro(QUndoStack* theWrappedObject);
   void clear(QUndoStack* theWrappedObject);
   QString  undoText(QUndoStack* theWrappedObject) const;
   void push(QUndoStack* theWrappedObject, QUndoCommand*  cmd);
};





class PythonQtShell_QUndoView : public QUndoView
{
public:
    PythonQtShell_QUndoView(QUndoGroup*  group, QWidget*  parent = 0):QUndoView(group, parent),_wrapper(NULL) {};
    PythonQtShell_QUndoView(QUndoStack*  stack, QWidget*  parent = 0):QUndoView(stack, parent),_wrapper(NULL) {};
    PythonQtShell_QUndoView(QWidget*  parent = 0):QUndoView(parent),_wrapper(NULL) {};

virtual void scrollContentsBy(int  dx, int  dy);
virtual void reset();
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void paintEvent(QPaintEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual void updateGeometries();
virtual void resizeEvent(QResizeEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void timerEvent(QTimerEvent*  e);
virtual void doItemsLayout();
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual int  verticalOffset() const;
virtual void setRootIndex(const QModelIndex&  index);
virtual bool  event(QEvent*  e);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual int  horizontalOffset() const;
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual QStyleOptionViewItem  viewOptions() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void keyboardSearch(const QString&  search);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void focusInEvent(QFocusEvent*  event);
virtual void commitData(QWidget*  editor);
virtual int  sizeHintForRow(int  row) const;
virtual void updateEditorData();
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  viewportEvent(QEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void updateEditorGeometries();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual int  sizeHintForColumn(int  column) const;
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void verticalScrollbarAction(int  action);
virtual void selectAll();
virtual void keyPressEvent(QKeyEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void verticalScrollbarValueChanged(int  value);
virtual bool  focusNextPrevChild(bool  next);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void horizontalScrollbarAction(int  action);
virtual void setModel(QAbstractItemModel*  model);
virtual void horizontalScrollbarValueChanged(int  value);
virtual void editorDestroyed(QObject*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void actionEvent(QActionEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void languageChange();
virtual void hideEvent(QHideEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

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

virtual QSize  maximumSize() const;
virtual Qt::Orientations  expandingDirections() const;
virtual QLayoutItem*  itemAt(int  arg__1) const;
virtual QLayoutItem*  takeAt(int  arg__1);
virtual void setGeometry(const QRect&  arg__1);
virtual void invalidate();
virtual int  count() const;
virtual void addItem(QLayoutItem*  arg__1);
virtual QSize  minimumSize() const;
virtual QRect  geometry() const;
virtual bool  isEmpty() const;
virtual void childEvent(QChildEvent*  e);
virtual QLayout*  layout();
virtual int  indexOf(QWidget*  arg__1) const;
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

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
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

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
   QVector2D*  __idiv__(QVector2D* theWrappedObject, qreal  divisor);
   void normalize(QVector2D* theWrappedObject);
   bool  isNull(QVector2D* theWrappedObject) const;
   QVector3D  toVector3D(QVector2D* theWrappedObject) const;
   QPoint  toPoint(QVector2D* theWrappedObject) const;
   QVector2D*  __imul__(QVector2D* theWrappedObject, qreal  factor);
   QVector2D*  __imul__(QVector2D* theWrappedObject, const QVector2D&  vector);
   qreal  x(QVector2D* theWrappedObject) const;
   qreal  y(QVector2D* theWrappedObject) const;
   QPointF  toPointF(QVector2D* theWrappedObject) const;
   void setY(QVector2D* theWrappedObject, qreal  y);
   void setX(QVector2D* theWrappedObject, qreal  x);
   qreal  static_QVector2D_dotProduct(const QVector2D&  v1, const QVector2D&  v2);
   QVector2D*  __isub__(QVector2D* theWrappedObject, const QVector2D&  vector);
   QVector2D*  __iadd__(QVector2D* theWrappedObject, const QVector2D&  vector);
   QVector2D  normalized(QVector2D* theWrappedObject) const;
   qreal  length(QVector2D* theWrappedObject) const;
   qreal  lengthSquared(QVector2D* theWrappedObject) const;
   bool  __eq__(QVector2D* theWrappedObject, const QVector2D&  v2);
   const QVector2D  __add__(QVector2D* theWrappedObject, const QVector2D&  v2);
   const QVector2D  __div__(QVector2D* theWrappedObject, qreal  divisor);
   const QVector2D  __sub__(QVector2D* theWrappedObject, const QVector2D&  v2);
   const QVector2D  __mul__(QVector2D* theWrappedObject, qreal  factor);
   const QVector2D  __mul__(QVector2D* theWrappedObject, const QVector2D&  v2);
   void writeTo(QVector2D* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QVector2D* theWrappedObject, QDataStream&  arg__1);
    QString py_toString(QVector2D*);
    bool __nonzero__(QVector2D* obj) { return !obj->isNull(); }
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
   void setX(QVector3D* theWrappedObject, qreal  x);
   void setY(QVector3D* theWrappedObject, qreal  y);
   QVector3D*  __iadd__(QVector3D* theWrappedObject, const QVector3D&  vector);
   QPoint  toPoint(QVector3D* theWrappedObject) const;
   void setZ(QVector3D* theWrappedObject, qreal  z);
   QVector3D  static_QVector3D_crossProduct(const QVector3D&  v1, const QVector3D&  v2);
   QVector3D*  __isub__(QVector3D* theWrappedObject, const QVector3D&  vector);
   qreal  length(QVector3D* theWrappedObject) const;
   QVector3D*  __imul__(QVector3D* theWrappedObject, const QVector3D&  vector);
   QVector3D*  __imul__(QVector3D* theWrappedObject, qreal  factor);
   QVector4D  toVector4D(QVector3D* theWrappedObject) const;
   qreal  static_QVector3D_dotProduct(const QVector3D&  v1, const QVector3D&  v2);
   qreal  x(QVector3D* theWrappedObject) const;
   QVector3D  static_QVector3D_normal(const QVector3D&  v1, const QVector3D&  v2, const QVector3D&  v3);
   qreal  y(QVector3D* theWrappedObject) const;
   QVector3D  static_QVector3D_normal(const QVector3D&  v1, const QVector3D&  v2);
   bool  isNull(QVector3D* theWrappedObject) const;
   qreal  z(QVector3D* theWrappedObject) const;
   qreal  distanceToPlane(QVector3D* theWrappedObject, const QVector3D&  plane1, const QVector3D&  plane2, const QVector3D&  plane3) const;
   qreal  distanceToPlane(QVector3D* theWrappedObject, const QVector3D&  plane, const QVector3D&  normal) const;
   void normalize(QVector3D* theWrappedObject);
   bool  __eq__(QVector3D* theWrappedObject, const QVector3D&  v2);
   const QVector3D  __add__(QVector3D* theWrappedObject, const QVector3D&  v2);
   const QVector3D  __sub__(QVector3D* theWrappedObject, const QVector3D&  v2);
   QVector3D  __mul__(QVector3D* theWrappedObject, const QMatrix4x4&  matrix);
   const QVector3D  __div__(QVector3D* theWrappedObject, qreal  divisor);
   const QVector3D  __mul__(QVector3D* theWrappedObject, qreal  factor);
   const QVector3D  __mul__(QVector3D* theWrappedObject, const QVector3D&  v2);
   void writeTo(QVector3D* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QVector3D* theWrappedObject, QDataStream&  arg__1);
    QString py_toString(QVector3D*);
    bool __nonzero__(QVector3D* obj) { return !obj->isNull(); }
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
   void normalize(QVector4D* theWrappedObject);
   qreal  w(QVector4D* theWrappedObject) const;
   QVector4D*  __imul__(QVector4D* theWrappedObject, qreal  factor);
   qreal  static_QVector4D_dotProduct(const QVector4D&  v1, const QVector4D&  v2);
   QVector4D*  __imul__(QVector4D* theWrappedObject, const QVector4D&  vector);
   qreal  length(QVector4D* theWrappedObject) const;
   QVector4D*  __isub__(QVector4D* theWrappedObject, const QVector4D&  vector);
   QPoint  toPoint(QVector4D* theWrappedObject) const;
   void setW(QVector4D* theWrappedObject, qreal  w);
   void setY(QVector4D* theWrappedObject, qreal  y);
   void setX(QVector4D* theWrappedObject, qreal  x);
   void setZ(QVector4D* theWrappedObject, qreal  z);
   QVector3D  toVector3D(QVector4D* theWrappedObject) const;
   qreal  lengthSquared(QVector4D* theWrappedObject) const;
   QPointF  toPointF(QVector4D* theWrappedObject) const;
   QVector2D  toVector2D(QVector4D* theWrappedObject) const;
   QVector4D  normalized(QVector4D* theWrappedObject) const;
   QVector3D  toVector3DAffine(QVector4D* theWrappedObject) const;
   QVector4D*  __idiv__(QVector4D* theWrappedObject, qreal  divisor);
   qreal  y(QVector4D* theWrappedObject) const;
   QVector2D  toVector2DAffine(QVector4D* theWrappedObject) const;
   qreal  x(QVector4D* theWrappedObject) const;
   bool  isNull(QVector4D* theWrappedObject) const;
   QVector4D*  __iadd__(QVector4D* theWrappedObject, const QVector4D&  vector);
   qreal  z(QVector4D* theWrappedObject) const;
   const QVector4D  __add__(QVector4D* theWrappedObject, const QVector4D&  v2);
   bool  __eq__(QVector4D* theWrappedObject, const QVector4D&  v2);
   const QVector4D  __sub__(QVector4D* theWrappedObject, const QVector4D&  v2);
   const QVector4D  __div__(QVector4D* theWrappedObject, qreal  divisor);
   QVector4D  __mul__(QVector4D* theWrappedObject, const QMatrix4x4&  matrix);
   const QVector4D  __mul__(QVector4D* theWrappedObject, const QVector4D&  v2);
   const QVector4D  __mul__(QVector4D* theWrappedObject, qreal  factor);
   void writeTo(QVector4D* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QVector4D* theWrappedObject, QDataStream&  arg__1);
    QString py_toString(QVector4D*);
    bool __nonzero__(QVector4D* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QWhatsThis : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWhatsThis(QWhatsThis* obj) { delete obj; } 
   void static_QWhatsThis_enterWhatsThisMode();
   bool  static_QWhatsThis_inWhatsThisMode();
   QAction*  static_QWhatsThis_createAction(QObject*  parent = 0);
   void static_QWhatsThis_leaveWhatsThisMode();
   void static_QWhatsThis_showText(const QPoint&  pos, const QString&  text, QWidget*  w = 0);
   void static_QWhatsThis_hideText();
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
   int  x(QWheelEvent* theWrappedObject) const;
   int  y(QWheelEvent* theWrappedObject) const;
   int  delta(QWheelEvent* theWrappedObject) const;
   const QPoint*  globalPos(QWheelEvent* theWrappedObject) const;
   int  globalX(QWheelEvent* theWrappedObject) const;
   int  globalY(QWheelEvent* theWrappedObject) const;
   const QPoint*  pos(QWheelEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QWheelEvent* theWrappedObject) const;
   Qt::Orientation  orientation(QWheelEvent* theWrappedObject) const;
};





class PythonQtShell_QWidget : public QWidget
{
public:
    PythonQtShell_QWidget(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QWidget(parent, f),_wrapper(NULL) {};

virtual void changeEvent(QEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void windowActivationChange(bool  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual int  devType() const;
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual QSize  sizeHint() const;
virtual void enabledChange(bool  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void fontChange(const QFont&  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void paletteChange(const QPalette&  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidget : public QWidget
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { QWidget::changeEvent(arg__1); }
inline void promoted_enterEvent(QEvent*  arg__1) { QWidget::enterEvent(arg__1); }
inline QSize  promoted_minimumSizeHint() const { return QWidget::minimumSizeHint(); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QWidget::hideEvent(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { QWidget::dropEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { QWidget::keyReleaseEvent(arg__1); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QWidget::metric(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QWidget::paintEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QWidget::mouseMoveEvent(arg__1); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QWidget::inputMethodEvent(arg__1); }
inline int  promoted_devType() const { return QWidget::devType(); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QWidget::focusInEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QWidget::wheelEvent(arg__1); }
inline int  promoted_heightForWidth(int  arg__1) const { return QWidget::heightForWidth(arg__1); }
inline void promoted_languageChange() { QWidget::languageChange(); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QWidget::showEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QWidget::resizeEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { QWidget::dragMoveEvent(arg__1); }
inline void promoted_moveEvent(QMoveEvent*  arg__1) { QWidget::moveEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QWidget::focusOutEvent(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QWidget::focusNextPrevChild(next); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QWidget::contextMenuEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QWidget::keyPressEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QWidget::inputMethodQuery(arg__1); }
inline QSize  promoted_sizeHint() const { return QWidget::sizeHint(); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QWidget::mousePressEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QWidget::event(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QWidget::mouseReleaseEvent(arg__1); }
inline void promoted_actionEvent(QActionEvent*  arg__1) { QWidget::actionEvent(arg__1); }
inline void promoted_tabletEvent(QTabletEvent*  arg__1) { QWidget::tabletEvent(arg__1); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QWidget::dragEnterEvent(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QWidget::leaveEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QWidget::mouseDoubleClickEvent(arg__1); }
inline QPaintEngine*  promoted_paintEngine() const { return QWidget::paintEngine(); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QWidget::dragLeaveEvent(arg__1); }
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
   QWidget*  focusWidget(QWidget* theWrappedObject) const;
   void clearFocus(QWidget* theWrappedObject);
   void changeEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   void enterEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   int  height(QWidget* theWrappedObject) const;
   int  y(QWidget* theWrappedObject) const;
   QSize  minimumSizeHint(QWidget* theWrappedObject) const;
   QString  styleSheet(QWidget* theWrappedObject) const;
   void hideEvent(QWidget* theWrappedObject, QHideEvent*  arg__1);
   bool  isMinimized(QWidget* theWrappedObject) const;
   void repaint(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void setMaximumHeight(QWidget* theWrappedObject, int  maxh);
   void setBaseSize(QWidget* theWrappedObject, int  basew, int  baseh);
   void setBaseSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void getContentsMargins(QWidget* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const;
   void setAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1, bool  on = true);
   void setWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void grabKeyboard(QWidget* theWrappedObject);
   void repaint(QWidget* theWrappedObject, const QRect&  arg__1);
   void repaint(QWidget* theWrappedObject, const QRegion&  arg__1);
   void setInputContext(QWidget* theWrappedObject, QInputContext*  arg__1);
   QWidget*  previousInFocusChain(QWidget* theWrappedObject) const;
   const QFont*  font(QWidget* theWrappedObject) const;
   QWidget*  static_QWidget_keyboardGrabber();
   void setFixedWidth(QWidget* theWrappedObject, int  w);
   void setMinimumWidth(QWidget* theWrappedObject, int  minw);
   void setStatusTip(QWidget* theWrappedObject, const QString&  arg__1);
   void static_QWidget_setTabOrder(QWidget*  arg__1, QWidget*  arg__2);
   QPoint  mapToParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   void setPalette(QWidget* theWrappedObject, const QPalette&  arg__1);
   void setSizeIncrement(QWidget* theWrappedObject, const QSize&  arg__1);
   void setSizeIncrement(QWidget* theWrappedObject, int  w, int  h);
   void dropEvent(QWidget* theWrappedObject, QDropEvent*  arg__1);
   void setShortcutEnabled(QWidget* theWrappedObject, int  id, bool  enable = true);
   void setWindowOpacity(QWidget* theWrappedObject, qreal  level);
   QString  windowRole(QWidget* theWrappedObject) const;
   QString  windowIconText(QWidget* theWrappedObject) const;
   qreal  windowOpacity(QWidget* theWrappedObject) const;
   QRect  rect(QWidget* theWrappedObject) const;
   const QPalette*  palette(QWidget* theWrappedObject) const;
   bool  isMaximized(QWidget* theWrappedObject) const;
   bool  isHidden(QWidget* theWrappedObject) const;
   void setMouseTracking(QWidget* theWrappedObject, bool  enable);
   void keyReleaseEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1);
   void setAutoFillBackground(QWidget* theWrappedObject, bool  enabled);
   QStyle*  style(QWidget* theWrappedObject) const;
   int  grabShortcut(QWidget* theWrappedObject, const QKeySequence&  key, Qt::ShortcutContext  context = Qt::WindowShortcut);
   QPalette::ColorRole  backgroundRole(QWidget* theWrappedObject) const;
   QByteArray  saveGeometry(QWidget* theWrappedObject) const;
   void setWindowModality(QWidget* theWrappedObject, Qt::WindowModality  windowModality);
   int  metric(QWidget* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const;
   QString  windowFilePath(QWidget* theWrappedObject) const;
   void resize(QWidget* theWrappedObject, int  w, int  h);
   Qt::FocusPolicy  focusPolicy(QWidget* theWrappedObject) const;
   void resize(QWidget* theWrappedObject, const QSize&  arg__1);
   void releaseKeyboard(QWidget* theWrappedObject);
   void setMaximumWidth(QWidget* theWrappedObject, int  maxw);
   void adjustSize(QWidget* theWrappedObject);
   void setBackgroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   void setToolTip(QWidget* theWrappedObject, const QString&  arg__1);
   QString  windowTitle(QWidget* theWrappedObject) const;
   int  x(QWidget* theWrappedObject) const;
   void paintEvent(QWidget* theWrappedObject, QPaintEvent*  arg__1);
   QLocale  locale(QWidget* theWrappedObject) const;
   QPoint  mapFromGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   void mouseMoveEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   QCursor  cursor(QWidget* theWrappedObject) const;
   void insertAction(QWidget* theWrappedObject, QAction*  before, QAction*  action);
   int  width(QWidget* theWrappedObject) const;
   void setFocusProxy(QWidget* theWrappedObject, QWidget*  arg__1);
   QIcon  windowIcon(QWidget* theWrappedObject) const;
   void inputMethodEvent(QWidget* theWrappedObject, QInputMethodEvent*  arg__1);
   bool  isActiveWindow(QWidget* theWrappedObject) const;
   void move(QWidget* theWrappedObject, const QPoint&  arg__1);
   void setLocale(QWidget* theWrappedObject, const QLocale&  locale);
   void releaseMouse(QWidget* theWrappedObject);
   void setLayout(QWidget* theWrappedObject, QLayout*  arg__1);
   void setCursor(QWidget* theWrappedObject, const QCursor&  arg__1);
   bool  isFullScreen(QWidget* theWrappedObject) const;
   void setFocusPolicy(QWidget* theWrappedObject, Qt::FocusPolicy  policy);
   QSize  sizeIncrement(QWidget* theWrappedObject) const;
   void move(QWidget* theWrappedObject, int  x, int  y);
   void setAccessibleDescription(QWidget* theWrappedObject, const QString&  description);
   int  devType(QWidget* theWrappedObject) const;
   void focusInEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1);
   QSize  frameSize(QWidget* theWrappedObject) const;
   void setMinimumSize(QWidget* theWrappedObject, int  minw, int  minh);
   bool  isVisible(QWidget* theWrappedObject) const;
   QLayout*  layout(QWidget* theWrappedObject) const;
   void wheelEvent(QWidget* theWrappedObject, QWheelEvent*  arg__1);
   int  heightForWidth(QWidget* theWrappedObject, int  arg__1) const;
   void setMinimumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   QPoint  mapToGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   void setUpdatesEnabled(QWidget* theWrappedObject, bool  enable);
   void clearMask(QWidget* theWrappedObject);
   void grabMouse(QWidget* theWrappedObject);
   void insertActions(QWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions);
   void languageChange(QWidget* theWrappedObject);
   QSize  maximumSize(QWidget* theWrappedObject) const;
   QRegion  mask(QWidget* theWrappedObject) const;
   void showEvent(QWidget* theWrappedObject, QShowEvent*  arg__1);
   void setFixedHeight(QWidget* theWrappedObject, int  h);
   bool  isWindowModified(QWidget* theWrappedObject) const;
   void setWindowIcon(QWidget* theWrappedObject, const QIcon&  icon);
   QInputContext*  inputContext(QWidget* theWrappedObject);
   bool  restoreGeometry(QWidget* theWrappedObject, const QByteArray&  geometry);
   void overrideWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   void resizeEvent(QWidget* theWrappedObject, QResizeEvent*  arg__1);
   void dragMoveEvent(QWidget* theWrappedObject, QDragMoveEvent*  arg__1);
   QString  whatsThis(QWidget* theWrappedObject) const;
   QWidget*  nextInFocusChain(QWidget* theWrappedObject) const;
   QPoint  mapTo(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const;
   bool  isVisibleTo(QWidget* theWrappedObject, QWidget*  arg__1) const;
   void unsetCursor(QWidget* theWrappedObject);
   bool  isWindow(QWidget* theWrappedObject) const;
   QRegion  childrenRegion(QWidget* theWrappedObject) const;
   QWidget*  window(QWidget* theWrappedObject) const;
   void setForegroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   void grabMouse(QWidget* theWrappedObject, const QCursor&  arg__1);
   void overrideWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   QWidget*  nativeParentWidget(QWidget* theWrappedObject) const;
   void setContentsMargins(QWidget* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setContentsMargins(QWidget* theWrappedObject, const QMargins&  margins);
   Qt::WindowType  windowType(QWidget* theWrappedObject) const;
   void setParent(QWidget* theWrappedObject, QWidget*  parent, Qt::WindowFlags  f);
   void unsetLayoutDirection(QWidget* theWrappedObject);
   void setWhatsThis(QWidget* theWrappedObject, const QString&  arg__1);
   void updateGeometry(QWidget* theWrappedObject);
   int  maximumHeight(QWidget* theWrappedObject) const;
   void setContextMenuPolicy(QWidget* theWrappedObject, Qt::ContextMenuPolicy  policy);
   void moveEvent(QWidget* theWrappedObject, QMoveEvent*  arg__1);
   void setParent(QWidget* theWrappedObject, QWidget*  parent);
   QString  accessibleDescription(QWidget* theWrappedObject) const;
   void focusOutEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1);
   QSize  minimumSize(QWidget* theWrappedObject) const;
   void setWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   QString  accessibleName(QWidget* theWrappedObject) const;
   QRegion  visibleRegion(QWidget* theWrappedObject) const;
   bool  underMouse(QWidget* theWrappedObject) const;
   bool  focusNextPrevChild(QWidget* theWrappedObject, bool  next);
   int  minimumHeight(QWidget* theWrappedObject) const;
   void setFocus(QWidget* theWrappedObject, Qt::FocusReason  reason);
   void setStyle(QWidget* theWrappedObject, QStyle*  arg__1);
   WId  winId(QWidget* theWrappedObject) const;
   QWidget*  parentWidget(QWidget* theWrappedObject) const;
   void addActions(QWidget* theWrappedObject, QList<QAction* >  actions);
   void setFont(QWidget* theWrappedObject, const QFont&  arg__1);
   void setShortcutAutoRepeat(QWidget* theWrappedObject, int  id, bool  enable = true);
   void contextMenuEvent(QWidget* theWrappedObject, QContextMenuEvent*  arg__1);
   Qt::WindowStates  windowState(QWidget* theWrappedObject) const;
   void setLayoutDirection(QWidget* theWrappedObject, Qt::LayoutDirection  direction);
   void keyPressEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1);
   QList<QAction* >  actions(QWidget* theWrappedObject) const;
   QRect  frameGeometry(QWidget* theWrappedObject) const;
   WId  effectiveWinId(QWidget* theWrappedObject) const;
   QVariant  inputMethodQuery(QWidget* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void unsetLocale(QWidget* theWrappedObject);
   void setInputMethodHints(QWidget* theWrappedObject, Qt::InputMethodHints  hints);
   void createWinId(QWidget* theWrappedObject);
   void setAccessibleName(QWidget* theWrappedObject, const QString&  name);
   void update(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void update(QWidget* theWrappedObject, const QRect&  arg__1);
   void update(QWidget* theWrappedObject, const QRegion&  arg__1);
   bool  autoFillBackground(QWidget* theWrappedObject) const;
   bool  isAncestorOf(QWidget* theWrappedObject, const QWidget*  child) const;
   void addAction(QWidget* theWrappedObject, QAction*  action);
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical);
   QRect  normalGeometry(QWidget* theWrappedObject) const;
   void setMaximumSize(QWidget* theWrappedObject, int  maxw, int  maxh);
   void setAcceptDrops(QWidget* theWrappedObject, bool  on);
   void setMaximumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void activateWindow(QWidget* theWrappedObject);
   QPalette::ColorRole  foregroundRole(QWidget* theWrappedObject) const;
   QMargins  contentsMargins(QWidget* theWrappedObject) const;
   bool  testAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1) const;
   QWidget*  childAt(QWidget* theWrappedObject, int  x, int  y) const;
   QWidget*  childAt(QWidget* theWrappedObject, const QPoint&  p) const;
   QPoint  pos(QWidget* theWrappedObject) const;
   bool  isModal(QWidget* theWrappedObject) const;
   void setGraphicsEffect(QWidget* theWrappedObject, QGraphicsEffect*  effect);
   QSize  size(QWidget* theWrappedObject) const;
   void setMinimumHeight(QWidget* theWrappedObject, int  minh);
   void setWindowIconText(QWidget* theWrappedObject, const QString&  arg__1);
   QSize  sizeHint(QWidget* theWrappedObject) const;
   void mousePressEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   int  maximumWidth(QWidget* theWrappedObject) const;
   QRect  contentsRect(QWidget* theWrappedObject) const;
   bool  event(QWidget* theWrappedObject, QEvent*  arg__1);
   bool  isEnabled(QWidget* theWrappedObject) const;
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy  arg__1);
   void mouseReleaseEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   void actionEvent(QWidget* theWrappedObject, QActionEvent*  arg__1);
   QWidget*  static_QWidget_mouseGrabber();
   void releaseShortcut(QWidget* theWrappedObject, int  id);
   QWidget*  focusProxy(QWidget* theWrappedObject) const;
   void tabletEvent(QWidget* theWrappedObject, QTabletEvent*  arg__1);
   QString  toolTip(QWidget* theWrappedObject) const;
   bool  isEnabledTo(QWidget* theWrappedObject, QWidget*  arg__1) const;
   QSize  baseSize(QWidget* theWrappedObject) const;
   void removeAction(QWidget* theWrappedObject, QAction*  action);
   Qt::WindowModality  windowModality(QWidget* theWrappedObject) const;
   bool  isLeftToRight(QWidget* theWrappedObject) const;
   void setWindowRole(QWidget* theWrappedObject, const QString&  arg__1);
   Qt::ContextMenuPolicy  contextMenuPolicy(QWidget* theWrappedObject) const;
   QPoint  mapFromParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   void setWindowFilePath(QWidget* theWrappedObject, const QString&  filePath);
   bool  hasMouseTracking(QWidget* theWrappedObject) const;
   bool  updatesEnabled(QWidget* theWrappedObject) const;
   void setGeometry(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void setGeometry(QWidget* theWrappedObject, const QRect&  arg__1);
   void setFixedSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void render(QWidget* theWrappedObject, QPainter*  painter, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void setFixedSize(QWidget* theWrappedObject, int  w, int  h);
   void render(QWidget* theWrappedObject, QPaintDevice*  target, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   QGraphicsEffect*  graphicsEffect(QWidget* theWrappedObject) const;
   void dragEnterEvent(QWidget* theWrappedObject, QDragEnterEvent*  arg__1);
   Qt::WindowFlags  windowFlags(QWidget* theWrappedObject) const;
   void stackUnder(QWidget* theWrappedObject, QWidget*  arg__1);
   bool  acceptDrops(QWidget* theWrappedObject) const;
   bool  isRightToLeft(QWidget* theWrappedObject) const;
   void leaveEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   void setMask(QWidget* theWrappedObject, const QBitmap&  arg__1);
   void setMask(QWidget* theWrappedObject, const QRegion&  arg__1);
   Qt::InputMethodHints  inputMethodHints(QWidget* theWrappedObject) const;
   const QRect*  geometry(QWidget* theWrappedObject) const;
   QGraphicsProxyWidget*  graphicsProxyWidget(QWidget* theWrappedObject) const;
   void ensurePolished(QWidget* theWrappedObject) const;
   void scroll(QWidget* theWrappedObject, int  dx, int  dy, const QRect&  arg__3);
   void scroll(QWidget* theWrappedObject, int  dx, int  dy);
   void mouseDoubleClickEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   QPaintEngine*  paintEngine(QWidget* theWrappedObject) const;
   QString  statusTip(QWidget* theWrappedObject) const;
   void dragLeaveEvent(QWidget* theWrappedObject, QDragLeaveEvent*  arg__1);
   bool  hasFocus(QWidget* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QWidget* theWrappedObject) const;
   int  minimumWidth(QWidget* theWrappedObject) const;
   QRect  childrenRect(QWidget* theWrappedObject) const;
   QPoint  mapFrom(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const;
   QSizePolicy  sizePolicy(QWidget* theWrappedObject) const;
   void closeEvent(QWidget* theWrappedObject, QCloseEvent*  arg__1);
};





class PythonQtShell_QWidgetAction : public QWidgetAction
{
public:
    PythonQtShell_QWidgetAction(QObject*  parent):QWidgetAction(parent),_wrapper(NULL) {};

virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  event(QEvent*  arg__1);
virtual QWidget*  createWidget(QWidget*  parent);
virtual void deleteWidget(QWidget*  widget);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidgetAction : public QWidgetAction
{ public:
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QWidgetAction::eventFilter(arg__1, arg__2); }
inline bool  promoted_event(QEvent*  arg__1) { return QWidgetAction::event(arg__1); }
inline QWidget*  promoted_createWidget(QWidget*  parent) { return QWidgetAction::createWidget(parent); }
inline void promoted_deleteWidget(QWidget*  widget) { QWidgetAction::deleteWidget(widget); }
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
   QWidget*  defaultWidget(QWidgetAction* theWrappedObject) const;
   bool  event(QWidgetAction* theWrappedObject, QEvent*  arg__1);
   QWidget*  requestWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
   QWidget*  createWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
   void deleteWidget(QWidgetAction* theWrappedObject, QWidget*  widget);
};





class PythonQtShell_QWidgetItem : public QWidgetItem
{
public:
    PythonQtShell_QWidgetItem(QWidget*  w):QWidgetItem(w),_wrapper(NULL) {};

virtual QSize  sizeHint() const;
virtual QWidget*  widget();
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual void setGeometry(const QRect&  arg__1);
virtual bool  isEmpty() const;
virtual QSize  maximumSize() const;
virtual QSize  minimumSize() const;
virtual int  heightForWidth(int  arg__1) const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QLayout*  layout();
virtual void invalidate();
virtual QSpacerItem*  spacerItem();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidgetItem : public QWidgetItem
{ public:
inline QSize  promoted_sizeHint() const { return QWidgetItem::sizeHint(); }
inline QWidget*  promoted_widget() { return QWidgetItem::widget(); }
inline Qt::Orientations  promoted_expandingDirections() const { return QWidgetItem::expandingDirections(); }
inline QRect  promoted_geometry() const { return QWidgetItem::geometry(); }
inline bool  promoted_hasHeightForWidth() const { return QWidgetItem::hasHeightForWidth(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QWidgetItem::setGeometry(arg__1); }
inline bool  promoted_isEmpty() const { return QWidgetItem::isEmpty(); }
inline QSize  promoted_maximumSize() const { return QWidgetItem::maximumSize(); }
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
   Qt::Orientations  expandingDirections(QWidgetItem* theWrappedObject) const;
   QRect  geometry(QWidgetItem* theWrappedObject) const;
   bool  hasHeightForWidth(QWidgetItem* theWrappedObject) const;
   void setGeometry(QWidgetItem* theWrappedObject, const QRect&  arg__1);
   bool  isEmpty(QWidgetItem* theWrappedObject) const;
   QSize  maximumSize(QWidgetItem* theWrappedObject) const;
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
virtual void drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void unpolish(QWidget*  arg__1);
virtual void unpolish(QApplication*  arg__1);
virtual bool  eventFilter(QObject*  o, QEvent*  e);
virtual void timerEvent(QTimerEvent*  event);
virtual void drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void polish(QPalette&  arg__1);
virtual void polish(QWidget*  arg__1);
virtual QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
virtual void polish(QApplication*  arg__1);
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w) const;
virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const;
virtual QPalette  standardPalette() const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const;
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWindowsStyle : public QWindowsStyle
{ public:
inline void promoted_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QWindowsStyle::drawControl(element, opt, p, w); }
inline QSize  promoted_sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const { return QWindowsStyle::sizeFromContents(ct, opt, contentsSize, widget); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  pm, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QWindowsStyle::pixelMetric(pm, option, widget); }
inline int  promoted_styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const { return QWindowsStyle::styleHint(hint, opt, widget, returnData); }
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QWindowsStyle::drawPrimitive(pe, opt, p, w); }
inline void promoted_unpolish(QWidget*  arg__1) { QWindowsStyle::unpolish(arg__1); }
inline void promoted_unpolish(QApplication*  arg__1) { QWindowsStyle::unpolish(arg__1); }
inline bool  promoted_eventFilter(QObject*  o, QEvent*  e) { return QWindowsStyle::eventFilter(o, e); }
inline void promoted_timerEvent(QTimerEvent*  event) { QWindowsStyle::timerEvent(event); }
inline void promoted_drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const { QWindowsStyle::drawComplexControl(cc, opt, p, w); }
inline void promoted_polish(QPalette&  arg__1) { QWindowsStyle::polish(arg__1); }
inline void promoted_polish(QWidget*  arg__1) { QWindowsStyle::polish(arg__1); }
inline QRect  promoted_subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const { return QWindowsStyle::subElementRect(r, opt, widget); }
inline void promoted_polish(QApplication*  arg__1) { QWindowsStyle::polish(arg__1); }
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
   void drawPrimitive(QWindowsStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void unpolish(QWindowsStyle* theWrappedObject, QWidget*  arg__1);
   void unpolish(QWindowsStyle* theWrappedObject, QApplication*  arg__1);
   bool  eventFilter(QWindowsStyle* theWrappedObject, QObject*  o, QEvent*  e);
   void timerEvent(QWindowsStyle* theWrappedObject, QTimerEvent*  event);
   void drawComplexControl(QWindowsStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void polish(QWindowsStyle* theWrappedObject, QPalette&  arg__1);
   void polish(QWindowsStyle* theWrappedObject, QWidget*  arg__1);
   QRect  subElementRect(QWindowsStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
   void polish(QWindowsStyle* theWrappedObject, QApplication*  arg__1);
};





class PythonQtShell_QWizard : public QWizard
{
public:
    PythonQtShell_QWizard(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QWizard(parent, flags),_wrapper(NULL) {};

virtual void cleanupPage(int  id);
virtual void paintEvent(QPaintEvent*  event);
virtual int  nextId() const;
virtual void done(int  result);
virtual void initializePage(int  id);
virtual bool  validateCurrentPage();
virtual void resizeEvent(QResizeEvent*  event);
virtual bool  event(QEvent*  event);
virtual void showEvent(QShowEvent*  arg__1);
virtual void reject();
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void accept();
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void languageChange();
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual bool  focusNextPrevChild(bool  next);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWizard : public QWizard
{ public:
inline void promoted_cleanupPage(int  id) { QWizard::cleanupPage(id); }
inline void promoted_paintEvent(QPaintEvent*  event) { QWizard::paintEvent(event); }
inline int  promoted_nextId() const { return QWizard::nextId(); }
inline void promoted_done(int  result) { QWizard::done(result); }
inline void promoted_initializePage(int  id) { QWizard::initializePage(id); }
inline bool  promoted_validateCurrentPage() { return QWizard::validateCurrentPage(); }
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
   void removePage(QWizard* theWrappedObject, int  id);
   void setField(QWizard* theWrappedObject, const QString&  name, const QVariant&  value);
   QWizard::WizardOptions  options(QWizard* theWrappedObject) const;
   void setTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   void cleanupPage(QWizard* theWrappedObject, int  id);
   void paintEvent(QWizard* theWrappedObject, QPaintEvent*  event);
   int  nextId(QWizard* theWrappedObject) const;
   void setButtonText(QWizard* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   QSize  sizeHint(QWizard* theWrappedObject) const;
   void setPage(QWizard* theWrappedObject, int  id, QWizardPage*  page);
   int  currentId(QWizard* theWrappedObject) const;
   QString  buttonText(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   void setStartId(QWizard* theWrappedObject, int  id);
   QList<int >  visitedPages(QWizard* theWrappedObject) const;
   int  startId(QWizard* theWrappedObject) const;
   bool  testOption(QWizard* theWrappedObject, QWizard::WizardOption  option) const;
   void setButtonLayout(QWizard* theWrappedObject, const QList<QWizard::WizardButton >&  layout);
   void done(QWizard* theWrappedObject, int  result);
   void initializePage(QWizard* theWrappedObject, int  id);
   void setVisible(QWizard* theWrappedObject, bool  visible);
   void setOption(QWizard* theWrappedObject, QWizard::WizardOption  option, bool  on = true);
   void setButton(QWizard* theWrappedObject, QWizard::WizardButton  which, QAbstractButton*  button);
   int  addPage(QWizard* theWrappedObject, QWizardPage*  page);
   QAbstractButton*  button(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   QVariant  field(QWizard* theWrappedObject, const QString&  name) const;
   bool  hasVisitedPage(QWizard* theWrappedObject, int  id) const;
   void setWizardStyle(QWizard* theWrappedObject, QWizard::WizardStyle  style);
   QList<int >  pageIds(QWizard* theWrappedObject) const;
   QPixmap  pixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which) const;
   void setPixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   QWizard::WizardStyle  wizardStyle(QWizard* theWrappedObject) const;
   Qt::TextFormat  subTitleFormat(QWizard* theWrappedObject) const;
   bool  validateCurrentPage(QWizard* theWrappedObject);
   void setOptions(QWizard* theWrappedObject, QWizard::WizardOptions  options);
   QWizardPage*  page(QWizard* theWrappedObject, int  id) const;
   Qt::TextFormat  titleFormat(QWizard* theWrappedObject) const;
   void resizeEvent(QWizard* theWrappedObject, QResizeEvent*  event);
   bool  event(QWizard* theWrappedObject, QEvent*  event);
   QWizardPage*  currentPage(QWizard* theWrappedObject) const;
   void setSubTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
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
virtual void hideEvent(QHideEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void actionEvent(QActionEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void changeEvent(QEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void languageChange();
virtual QSize  minimumSizeHint() const;
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

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
   void initializePage(QWizardPage* theWrappedObject);
   void setSubTitle(QWizardPage* theWrappedObject, const QString&  subTitle);
   bool  validatePage(QWizardPage* theWrappedObject);
   QString  buttonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which) const;
   void setFinalPage(QWizardPage* theWrappedObject, bool  finalPage);
   void setTitle(QWizardPage* theWrappedObject, const QString&  title);
   void setPixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   bool  isComplete(QWizardPage* theWrappedObject) const;
   void setCommitPage(QWizardPage* theWrappedObject, bool  commitPage);
   int  nextId(QWizardPage* theWrappedObject) const;
   QPixmap  pixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which) const;
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
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  e);
virtual int  heightForWidth(int  arg__1) const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void actionEvent(QActionEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void languageChange();
virtual QSize  minimumSizeHint() const;
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

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
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QWorkspace::resizeEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  e) { QWorkspace::paintEvent(e); }
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
   QBrush  background(QWorkspace* theWrappedObject) const;
   void showEvent(QWorkspace* theWrappedObject, QShowEvent*  e);
   void hideEvent(QWorkspace* theWrappedObject, QHideEvent*  e);
   QList<QWidget* >  windowList(QWorkspace* theWrappedObject, QWorkspace::WindowOrder  order = QWorkspace::CreationOrder) const;
   QSize  sizeHint(QWorkspace* theWrappedObject) const;
   bool  scrollBarsEnabled(QWorkspace* theWrappedObject) const;
   void wheelEvent(QWorkspace* theWrappedObject, QWheelEvent*  e);
   bool  eventFilter(QWorkspace* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void resizeEvent(QWorkspace* theWrappedObject, QResizeEvent*  arg__1);
   void paintEvent(QWorkspace* theWrappedObject, QPaintEvent*  e);
};


