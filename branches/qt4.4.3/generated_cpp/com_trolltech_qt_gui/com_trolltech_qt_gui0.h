#include <PythonQt.h>
#include <QBasicTimer>
#include <QFont>
#include <QFontMetrics>
#include <QIcon>
#include <QLocale>
#include <QObject>
#include <QPalette>
#include <QTextCharFormat>
#include <QVariant>
#include <qabstractbutton.h>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qabstractpagesetupdialog.h>
#include <qabstractprintdialog.h>
#include <qabstractscrollarea.h>
#include <qabstractslider.h>
#include <qabstractspinbox.h>
#include <qaccessible.h>
#include <qaccessible2.h>
#include <qaccessiblebridge.h>
#include <qaccessibleobject.h>
#include <qaccessibleplugin.h>
#include <qaccessiblewidget.h>
#include <qaction.h>
#include <qactiongroup.h>
#include <qapplication.h>
#include <qbitmap.h>
#include <qboxlayout.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcdestyle.h>
#include <qcheckbox.h>
#include <qclipboard.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatetime.h>
#include <qdesktopwidget.h>
#include <qdialog.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmenu.h>
#include <qmotifstyle.h>
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
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsessionmanager.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextformat.h>
#include <qtransform.h>
#include <qtranslator.h>
#include <qwidget.h>



class PythonQtShell_QAbstractButton : public QAbstractButton
{
public:
    PythonQtShell_QAbstractButton(QWidget*  parent = 0):QAbstractButton(parent),_wrapper(NULL) {};

virtual void nextCheckState();
virtual void timerEvent(QTimerEvent*  e);
virtual void focusOutEvent(QFocusEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual bool  hitButton(const QPoint&  pos) const;
virtual void checkStateSet();
virtual void focusInEvent(QFocusEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void changeEvent(QEvent*  e);
virtual void paintEvent(QPaintEvent*  e);
virtual bool  event(QEvent*  e);
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void languageChange();
virtual int  heightForWidth(int  arg__1) const;
virtual QSize  sizeHint() const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractButton : public QAbstractButton
{ public:
inline void promoted_nextCheckState() { QAbstractButton::nextCheckState(); }
inline void promoted_timerEvent(QTimerEvent*  e) { QAbstractButton::timerEvent(e); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QAbstractButton::focusOutEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QAbstractButton::mouseMoveEvent(e); }
inline bool  promoted_hitButton(const QPoint&  pos) const { return QAbstractButton::hitButton(pos); }
inline void promoted_checkStateSet() { QAbstractButton::checkStateSet(); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QAbstractButton::focusInEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QAbstractButton::mouseReleaseEvent(e); }
inline void promoted_changeEvent(QEvent*  e) { QAbstractButton::changeEvent(e); }
inline bool  promoted_event(QEvent*  e) { return QAbstractButton::event(e); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QAbstractButton::keyPressEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QAbstractButton::keyReleaseEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QAbstractButton::mousePressEvent(e); }
};

class PythonQtWrapper_QAbstractButton : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractButton* new_QAbstractButton(QWidget*  parent = 0);
void delete_QAbstractButton(QAbstractButton* obj) { delete obj; } 
   bool  isCheckable(QAbstractButton* theWrappedObject) const;
   void setAutoExclusive(QAbstractButton* theWrappedObject, bool  arg__1);
   int  autoRepeatDelay(QAbstractButton* theWrappedObject) const;
   void setDown(QAbstractButton* theWrappedObject, bool  arg__1);
   bool  isChecked(QAbstractButton* theWrappedObject) const;
   bool  autoRepeat(QAbstractButton* theWrappedObject) const;
   bool  isDown(QAbstractButton* theWrappedObject) const;
   void nextCheckState(QAbstractButton* theWrappedObject);
   void setAutoRepeat(QAbstractButton* theWrappedObject, bool  arg__1);
   void timerEvent(QAbstractButton* theWrappedObject, QTimerEvent*  e);
   void focusOutEvent(QAbstractButton* theWrappedObject, QFocusEvent*  e);
   void mouseMoveEvent(QAbstractButton* theWrappedObject, QMouseEvent*  e);
   void setAutoRepeatDelay(QAbstractButton* theWrappedObject, int  arg__1);
   bool  hitButton(QAbstractButton* theWrappedObject, const QPoint&  pos) const;
   void setAutoRepeatInterval(QAbstractButton* theWrappedObject, int  arg__1);
   void checkStateSet(QAbstractButton* theWrappedObject);
   void setShortcut(QAbstractButton* theWrappedObject, const QKeySequence&  key);
   void focusInEvent(QAbstractButton* theWrappedObject, QFocusEvent*  e);
   void setText(QAbstractButton* theWrappedObject, const QString&  text);
   QButtonGroup*  group(QAbstractButton* theWrappedObject) const;
   void mouseReleaseEvent(QAbstractButton* theWrappedObject, QMouseEvent*  e);
   void setCheckable(QAbstractButton* theWrappedObject, bool  arg__1);
   QSize  iconSize(QAbstractButton* theWrappedObject) const;
   int  autoRepeatInterval(QAbstractButton* theWrappedObject) const;
   QIcon  icon(QAbstractButton* theWrappedObject) const;
   QKeySequence  shortcut(QAbstractButton* theWrappedObject) const;
   void changeEvent(QAbstractButton* theWrappedObject, QEvent*  e);
   void setIcon(QAbstractButton* theWrappedObject, const QIcon&  icon);
   bool  event(QAbstractButton* theWrappedObject, QEvent*  e);
   QString  text(QAbstractButton* theWrappedObject) const;
   void keyPressEvent(QAbstractButton* theWrappedObject, QKeyEvent*  e);
   void keyReleaseEvent(QAbstractButton* theWrappedObject, QKeyEvent*  e);
   bool  autoExclusive(QAbstractButton* theWrappedObject) const;
   void mousePressEvent(QAbstractButton* theWrappedObject, QMouseEvent*  e);
};





class PythonQtShell_QAbstractGraphicsShapeItem : public QAbstractGraphicsShapeItem
{
public:
    PythonQtShell_QAbstractGraphicsShapeItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QAbstractGraphicsShapeItem(parent, scene),_wrapper(NULL) {};

virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);
virtual int  type() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual QPainterPath  opaqueArea() const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  shape() const;
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual void focusInEvent(QFocusEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual bool  contains(const QPointF&  point) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual QRectF  boundingRect() const;
virtual void advance(int  phase);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual bool  sceneEvent(QEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractGraphicsShapeItem : public QAbstractGraphicsShapeItem
{ public:
inline QPainterPath  promoted_opaqueArea() const { return QAbstractGraphicsShapeItem::opaqueArea(); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QAbstractGraphicsShapeItem::isObscuredBy(item); }
};

class PythonQtWrapper_QAbstractGraphicsShapeItem : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractGraphicsShapeItem* new_QAbstractGraphicsShapeItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QAbstractGraphicsShapeItem(QAbstractGraphicsShapeItem* obj) { delete obj; } 
   QPainterPath  opaqueArea(QAbstractGraphicsShapeItem* theWrappedObject) const;
   void setBrush(QAbstractGraphicsShapeItem* theWrappedObject, const QBrush&  brush);
   QPen  pen(QAbstractGraphicsShapeItem* theWrappedObject) const;
   bool  isObscuredBy(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item) const;
   QBrush  brush(QAbstractGraphicsShapeItem* theWrappedObject) const;
   void setPen(QAbstractGraphicsShapeItem* theWrappedObject, const QPen&  pen);
};





class PythonQtShell_QAbstractItemDelegate : public QAbstractItemDelegate
{
public:
    PythonQtShell_QAbstractItemDelegate(QObject*  parent = 0):QAbstractItemDelegate(parent),_wrapper(NULL) {};

virtual QSize  sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual QWidget*  createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual bool  editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
virtual void setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
virtual void updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void setEditorData(QWidget*  editor, const QModelIndex&  index) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractItemDelegate : public QAbstractItemDelegate
{ public:
inline QWidget*  promoted_createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QAbstractItemDelegate::createEditor(parent, option, index); }
inline bool  promoted_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return QAbstractItemDelegate::editorEvent(event, model, option, index); }
inline void promoted_setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const { QAbstractItemDelegate::setModelData(editor, model, index); }
inline void promoted_updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QAbstractItemDelegate::updateEditorGeometry(editor, option, index); }
inline void promoted_setEditorData(QWidget*  editor, const QModelIndex&  index) const { QAbstractItemDelegate::setEditorData(editor, index); }
};

class PythonQtWrapper_QAbstractItemDelegate : public QObject
{ Q_OBJECT
public:
Q_ENUMS(EndEditHint )
enum EndEditHint{
  NoHint = QAbstractItemDelegate::NoHint,   EditNextItem = QAbstractItemDelegate::EditNextItem,   EditPreviousItem = QAbstractItemDelegate::EditPreviousItem,   SubmitModelCache = QAbstractItemDelegate::SubmitModelCache,   RevertModelCache = QAbstractItemDelegate::RevertModelCache};
public slots:
QAbstractItemDelegate* new_QAbstractItemDelegate(QObject*  parent = 0);
void delete_QAbstractItemDelegate(QAbstractItemDelegate* obj) { delete obj; } 
   QWidget*  createEditor(QAbstractItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   bool  editorEvent(QAbstractItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
   void setModelData(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
   void updateEditorGeometry(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void setEditorData(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const;
};





class PythonQtShell_QAbstractItemView : public QAbstractItemView
{
public:
    PythonQtShell_QAbstractItemView(QWidget*  parent = 0):QAbstractItemView(parent),_wrapper(NULL) {};

virtual void mousePressEvent(QMouseEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void horizontalScrollbarAction(int  action);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual int  verticalOffset() const;
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual QStyleOptionViewItem  viewOptions() const;
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual int  sizeHintForColumn(int  column) const;
virtual void keyboardSearch(const QString&  search);
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void setRootIndex(const QModelIndex&  index);
virtual void commitData(QWidget*  editor);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual int  sizeHintForRow(int  row) const;
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void updateEditorData();
virtual QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers);
virtual void reset();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void horizontalScrollbarValueChanged(int  value);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void updateEditorGeometries();
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void editorDestroyed(QObject*  editor);
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = 0) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void doItemsLayout();
virtual void keyPressEvent(QKeyEvent*  event);
virtual int  horizontalOffset() const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void verticalScrollbarAction(int  action);
virtual void setModel(QAbstractItemModel*  model);
virtual void verticalScrollbarValueChanged(int  value);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual void timerEvent(QTimerEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual bool  viewportEvent(QEvent*  event);
virtual QModelIndex  indexAt(const QPoint&  point) const;
virtual void updateGeometries();
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual bool  event(QEvent*  event);
virtual void selectAll();
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
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

class PythonQtPublicPromoter_QAbstractItemView : public QAbstractItemView
{ public:
inline void promoted_mousePressEvent(QMouseEvent*  event) { QAbstractItemView::mousePressEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QAbstractItemView::resizeEvent(event); }
inline void promoted_horizontalScrollbarAction(int  action) { QAbstractItemView::horizontalScrollbarAction(action); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QAbstractItemView::mouseMoveEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QAbstractItemView::focusOutEvent(event); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QAbstractItemView::rowsInserted(parent, start, end); }
inline QStyleOptionViewItem  promoted_viewOptions() const { return QAbstractItemView::viewOptions(); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QAbstractItemView::currentChanged(current, previous); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  event) { QAbstractItemView::dragEnterEvent(event); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QAbstractItemView::selectionChanged(selected, deselected); }
inline int  promoted_sizeHintForColumn(int  column) const { return QAbstractItemView::sizeHintForColumn(column); }
inline void promoted_keyboardSearch(const QString&  search) { QAbstractItemView::keyboardSearch(search); }
inline void promoted_setRootIndex(const QModelIndex&  index) { QAbstractItemView::setRootIndex(index); }
inline void promoted_commitData(QWidget*  editor) { QAbstractItemView::commitData(editor); }
inline void promoted_closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) { QAbstractItemView::closeEditor(editor, hint); }
inline int  promoted_sizeHintForRow(int  row) const { return QAbstractItemView::sizeHintForRow(row); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QAbstractItemView::mouseReleaseEvent(event); }
inline bool  promoted_edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) { return QAbstractItemView::edit(index, trigger, event); }
inline void promoted_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QAbstractItemView::rowsAboutToBeRemoved(parent, start, end); }
inline void promoted_updateEditorData() { QAbstractItemView::updateEditorData(); }
inline void promoted_reset() { QAbstractItemView::reset(); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return QAbstractItemView::selectedIndexes(); }
inline void promoted_horizontalScrollbarValueChanged(int  value) { QAbstractItemView::horizontalScrollbarValueChanged(value); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { QAbstractItemView::dragMoveEvent(event); }
inline void promoted_startDrag(Qt::DropActions  supportedActions) { QAbstractItemView::startDrag(supportedActions); }
inline void promoted_updateEditorGeometries() { QAbstractItemView::updateEditorGeometries(); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { QAbstractItemView::mouseDoubleClickEvent(event); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  event) { QAbstractItemView::dragLeaveEvent(event); }
inline void promoted_dropEvent(QDropEvent*  event) { QAbstractItemView::dropEvent(event); }
inline void promoted_editorDestroyed(QObject*  editor) { QAbstractItemView::editorDestroyed(editor); }
inline QItemSelectionModel::SelectionFlags  promoted_selectionCommand(const QModelIndex&  index, const QEvent*  event = 0) const { return QAbstractItemView::selectionCommand(index, event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QAbstractItemView::focusInEvent(event); }
inline void promoted_setSelectionModel(QItemSelectionModel*  selectionModel) { QAbstractItemView::setSelectionModel(selectionModel); }
inline void promoted_doItemsLayout() { QAbstractItemView::doItemsLayout(); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QAbstractItemView::keyPressEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QAbstractItemView::inputMethodEvent(event); }
inline void promoted_verticalScrollbarAction(int  action) { QAbstractItemView::verticalScrollbarAction(action); }
inline void promoted_setModel(QAbstractItemModel*  model) { QAbstractItemView::setModel(model); }
inline void promoted_verticalScrollbarValueChanged(int  value) { QAbstractItemView::verticalScrollbarValueChanged(value); }
inline void promoted_timerEvent(QTimerEvent*  event) { QAbstractItemView::timerEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QAbstractItemView::focusNextPrevChild(next); }
inline bool  promoted_viewportEvent(QEvent*  event) { return QAbstractItemView::viewportEvent(event); }
inline void promoted_updateGeometries() { QAbstractItemView::updateGeometries(); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight) { QAbstractItemView::dataChanged(topLeft, bottomRight); }
inline bool  promoted_event(QEvent*  event) { return QAbstractItemView::event(event); }
inline void promoted_selectAll() { QAbstractItemView::selectAll(); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QAbstractItemView::inputMethodQuery(query); }
};

class PythonQtWrapper_QAbstractItemView : public QObject
{ Q_OBJECT
public:
Q_ENUMS(EditTrigger )
Q_FLAGS(EditTriggers )
enum EditTrigger{
  NoEditTriggers = QAbstractItemView::NoEditTriggers,   CurrentChanged = QAbstractItemView::CurrentChanged,   DoubleClicked = QAbstractItemView::DoubleClicked,   SelectedClicked = QAbstractItemView::SelectedClicked,   EditKeyPressed = QAbstractItemView::EditKeyPressed,   AnyKeyPressed = QAbstractItemView::AnyKeyPressed,   AllEditTriggers = QAbstractItemView::AllEditTriggers};
Q_DECLARE_FLAGS(EditTriggers, EditTrigger)
public slots:
QAbstractItemView* new_QAbstractItemView(QWidget*  parent = 0);
void delete_QAbstractItemView(QAbstractItemView* obj) { delete obj; } 
   void setSelectionBehavior(QAbstractItemView* theWrappedObject, QAbstractItemView::SelectionBehavior  behavior);
   void setDragEnabled(QAbstractItemView* theWrappedObject, bool  enable);
   QAbstractItemView::DragDropMode  dragDropMode(QAbstractItemView* theWrappedObject) const;
   QAbstractItemView::SelectionBehavior  selectionBehavior(QAbstractItemView* theWrappedObject) const;
   void mousePressEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event);
   void resizeEvent(QAbstractItemView* theWrappedObject, QResizeEvent*  event);
   void mouseMoveEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event);
   void focusOutEvent(QAbstractItemView* theWrappedObject, QFocusEvent*  event);
   QStyleOptionViewItem  viewOptions(QAbstractItemView* theWrappedObject) const;
   void closePersistentEditor(QAbstractItemView* theWrappedObject, const QModelIndex&  index);
   void setDropIndicatorShown(QAbstractItemView* theWrappedObject, bool  enable);
   bool  alternatingRowColors(QAbstractItemView* theWrappedObject) const;
   void dragEnterEvent(QAbstractItemView* theWrappedObject, QDragEnterEvent*  event);
   void setAutoScroll(QAbstractItemView* theWrappedObject, bool  enable);
   void setSelectionMode(QAbstractItemView* theWrappedObject, QAbstractItemView::SelectionMode  mode);
   void setEditTriggers(QAbstractItemView* theWrappedObject, QAbstractItemView::EditTriggers  triggers);
   void setAutoScrollMargin(QAbstractItemView* theWrappedObject, int  margin);
   void openPersistentEditor(QAbstractItemView* theWrappedObject, const QModelIndex&  index);
   void setTextElideMode(QAbstractItemView* theWrappedObject, Qt::TextElideMode  mode);
   int  sizeHintForColumn(QAbstractItemView* theWrappedObject, int  column) const;
   void keyboardSearch(QAbstractItemView* theWrappedObject, const QString&  search);
   QWidget*  indexWidget(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   int  sizeHintForRow(QAbstractItemView* theWrappedObject, int  row) const;
   void setTabKeyNavigation(QAbstractItemView* theWrappedObject, bool  enable);
   bool  showDropIndicator(QAbstractItemView* theWrappedObject) const;
   void mouseReleaseEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event);
   bool  edit(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
   void setAlternatingRowColors(QAbstractItemView* theWrappedObject, bool  enable);
   void setVerticalScrollMode(QAbstractItemView* theWrappedObject, QAbstractItemView::ScrollMode  mode);
   void setItemDelegateForRow(QAbstractItemView* theWrappedObject, int  row, QAbstractItemDelegate*  delegate);
   QAbstractItemDelegate*  itemDelegateForRow(QAbstractItemView* theWrappedObject, int  row) const;
   QAbstractItemView::SelectionMode  selectionMode(QAbstractItemView* theWrappedObject) const;
   QSize  sizeHintForIndex(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   QList<QModelIndex >  selectedIndexes(QAbstractItemView* theWrappedObject) const;
   void setDragDropOverwriteMode(QAbstractItemView* theWrappedObject, bool  overwrite);
   void dragMoveEvent(QAbstractItemView* theWrappedObject, QDragMoveEvent*  event);
   QSize  iconSize(QAbstractItemView* theWrappedObject) const;
   void startDrag(QAbstractItemView* theWrappedObject, Qt::DropActions  supportedActions);
   void setIconSize(QAbstractItemView* theWrappedObject, const QSize&  size);
   QAbstractItemView::ScrollMode  horizontalScrollMode(QAbstractItemView* theWrappedObject) const;
   void mouseDoubleClickEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event);
   bool  dragDropOverwriteMode(QAbstractItemView* theWrappedObject) const;
   void dragLeaveEvent(QAbstractItemView* theWrappedObject, QDragLeaveEvent*  event);
   QModelIndex  currentIndex(QAbstractItemView* theWrappedObject) const;
   void dropEvent(QAbstractItemView* theWrappedObject, QDropEvent*  event);
   void setDragDropMode(QAbstractItemView* theWrappedObject, QAbstractItemView::DragDropMode  behavior);
   QAbstractItemView::ScrollMode  verticalScrollMode(QAbstractItemView* theWrappedObject) const;
   QItemSelectionModel::SelectionFlags  selectionCommand(QAbstractItemView* theWrappedObject, const QModelIndex&  index, const QEvent*  event = 0) const;
   void focusInEvent(QAbstractItemView* theWrappedObject, QFocusEvent*  event);
   QItemSelectionModel*  selectionModel(QAbstractItemView* theWrappedObject) const;
   void setSelectionModel(QAbstractItemView* theWrappedObject, QItemSelectionModel*  selectionModel);
   QAbstractItemView::EditTriggers  editTriggers(QAbstractItemView* theWrappedObject) const;
   void keyPressEvent(QAbstractItemView* theWrappedObject, QKeyEvent*  event);
   bool  dragEnabled(QAbstractItemView* theWrappedObject) const;
   void inputMethodEvent(QAbstractItemView* theWrappedObject, QInputMethodEvent*  event);
   void setItemDelegate(QAbstractItemView* theWrappedObject, QAbstractItemDelegate*  delegate);
   QAbstractItemDelegate*  itemDelegate(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   bool  tabKeyNavigation(QAbstractItemView* theWrappedObject) const;
   void setModel(QAbstractItemView* theWrappedObject, QAbstractItemModel*  model);
   void setHorizontalScrollMode(QAbstractItemView* theWrappedObject, QAbstractItemView::ScrollMode  mode);
   QAbstractItemDelegate*  itemDelegate(QAbstractItemView* theWrappedObject) const;
   QModelIndex  rootIndex(QAbstractItemView* theWrappedObject) const;
   QAbstractItemModel*  model(QAbstractItemView* theWrappedObject) const;
   Qt::TextElideMode  textElideMode(QAbstractItemView* theWrappedObject) const;
   int  autoScrollMargin(QAbstractItemView* theWrappedObject) const;
   void timerEvent(QAbstractItemView* theWrappedObject, QTimerEvent*  event);
   bool  focusNextPrevChild(QAbstractItemView* theWrappedObject, bool  next);
   bool  viewportEvent(QAbstractItemView* theWrappedObject, QEvent*  event);
   bool  event(QAbstractItemView* theWrappedObject, QEvent*  event);
   bool  hasAutoScroll(QAbstractItemView* theWrappedObject) const;
   void setItemDelegateForColumn(QAbstractItemView* theWrappedObject, int  column, QAbstractItemDelegate*  delegate);
   QVariant  inputMethodQuery(QAbstractItemView* theWrappedObject, Qt::InputMethodQuery  query) const;
   QAbstractItemDelegate*  itemDelegateForColumn(QAbstractItemView* theWrappedObject, int  column) const;
   void setIndexWidget(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QWidget*  widget);
};





class PythonQtShell_QAbstractPageSetupDialog : public QAbstractPageSetupDialog
{
public:
    PythonQtShell_QAbstractPageSetupDialog(QPrinter*  printer, QWidget*  parent = 0):QAbstractPageSetupDialog(printer, parent),_wrapper(NULL) {};

virtual int  exec();
virtual void accept();
virtual void reject();
virtual void done(int  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void languageChange();
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual bool  event(QEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAbstractPageSetupDialog : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractPageSetupDialog* new_QAbstractPageSetupDialog(QPrinter*  printer, QWidget*  parent = 0);
void delete_QAbstractPageSetupDialog(QAbstractPageSetupDialog* obj) { delete obj; } 
   QPrinter*  printer(QAbstractPageSetupDialog* theWrappedObject);
};





class PythonQtShell_QAbstractPrintDialog : public QAbstractPrintDialog
{
public:
    PythonQtShell_QAbstractPrintDialog(QPrinter*  printer, QWidget*  parent = 0):QAbstractPrintDialog(printer, parent),_wrapper(NULL) {};

virtual int  exec();
virtual void accept();
virtual void reject();
virtual void done(int  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void languageChange();
virtual void changeEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual bool  event(QEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAbstractPrintDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PrintRange PrintDialogOption )
Q_FLAGS(PrintDialogOptions )
enum PrintRange{
  AllPages = QAbstractPrintDialog::AllPages,   Selection = QAbstractPrintDialog::Selection,   PageRange = QAbstractPrintDialog::PageRange};
enum PrintDialogOption{
  None = QAbstractPrintDialog::None,   PrintToFile = QAbstractPrintDialog::PrintToFile,   PrintSelection = QAbstractPrintDialog::PrintSelection,   PrintPageRange = QAbstractPrintDialog::PrintPageRange,   PrintShowPageSize = QAbstractPrintDialog::PrintShowPageSize,   PrintCollateCopies = QAbstractPrintDialog::PrintCollateCopies,   DontUseSheet = QAbstractPrintDialog::DontUseSheet};
Q_DECLARE_FLAGS(PrintDialogOptions, PrintDialogOption)
public slots:
QAbstractPrintDialog* new_QAbstractPrintDialog(QPrinter*  printer, QWidget*  parent = 0);
void delete_QAbstractPrintDialog(QAbstractPrintDialog* obj) { delete obj; } 
   int  toPage(QAbstractPrintDialog* theWrappedObject) const;
   QAbstractPrintDialog::PrintDialogOptions  enabledOptions(QAbstractPrintDialog* theWrappedObject) const;
   int  maxPage(QAbstractPrintDialog* theWrappedObject) const;
   void setFromTo(QAbstractPrintDialog* theWrappedObject, int  fromPage, int  toPage);
   bool  isOptionEnabled(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOption  option) const;
   void setPrintRange(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintRange  range);
   void addEnabledOption(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOption  option);
   void setOptionTabs(QAbstractPrintDialog* theWrappedObject, const QList<QWidget* >&  tabs);
   QPrinter*  printer(QAbstractPrintDialog* theWrappedObject) const;
   void setMinMax(QAbstractPrintDialog* theWrappedObject, int  min, int  max);
   void setEnabledOptions(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOptions  options);
   int  fromPage(QAbstractPrintDialog* theWrappedObject) const;
   QAbstractPrintDialog::PrintRange  printRange(QAbstractPrintDialog* theWrappedObject) const;
   int  minPage(QAbstractPrintDialog* theWrappedObject) const;
};





class PythonQtShell_QAbstractScrollArea : public QAbstractScrollArea
{
public:
    PythonQtShell_QAbstractScrollArea(QWidget*  parent = 0):QAbstractScrollArea(parent),_wrapper(NULL) {};

virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractScrollArea : public QAbstractScrollArea
{ public:
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QAbstractScrollArea::wheelEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mouseMoveEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mouseDoubleClickEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QAbstractScrollArea::resizeEvent(arg__1); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QAbstractScrollArea::scrollContentsBy(dx, dy); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QAbstractScrollArea::contextMenuEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mouseReleaseEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QAbstractScrollArea::dragLeaveEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QAbstractScrollArea::paintEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { QAbstractScrollArea::dragMoveEvent(arg__1); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QAbstractScrollArea::dragEnterEvent(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { QAbstractScrollArea::dropEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mousePressEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QAbstractScrollArea::event(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QAbstractScrollArea::keyPressEvent(arg__1); }
inline bool  promoted_viewportEvent(QEvent*  arg__1) { return QAbstractScrollArea::viewportEvent(arg__1); }
};

class PythonQtWrapper_QAbstractScrollArea : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractScrollArea* new_QAbstractScrollArea(QWidget*  parent = 0);
void delete_QAbstractScrollArea(QAbstractScrollArea* obj) { delete obj; } 
   QSize  maximumViewportSize(QAbstractScrollArea* theWrappedObject) const;
   void setVerticalScrollBarPolicy(QAbstractScrollArea* theWrappedObject, Qt::ScrollBarPolicy  arg__1);
   void wheelEvent(QAbstractScrollArea* theWrappedObject, QWheelEvent*  arg__1);
   QScrollBar*  horizontalScrollBar(QAbstractScrollArea* theWrappedObject) const;
   QWidget*  cornerWidget(QAbstractScrollArea* theWrappedObject) const;
   Qt::ScrollBarPolicy  verticalScrollBarPolicy(QAbstractScrollArea* theWrappedObject) const;
   void mouseMoveEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1);
   void mouseDoubleClickEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1);
   QSize  sizeHint(QAbstractScrollArea* theWrappedObject) const;
   void resizeEvent(QAbstractScrollArea* theWrappedObject, QResizeEvent*  arg__1);
   void scrollContentsBy(QAbstractScrollArea* theWrappedObject, int  dx, int  dy);
   void setHorizontalScrollBarPolicy(QAbstractScrollArea* theWrappedObject, Qt::ScrollBarPolicy  arg__1);
   void contextMenuEvent(QAbstractScrollArea* theWrappedObject, QContextMenuEvent*  arg__1);
   void mouseReleaseEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1);
   QScrollBar*  verticalScrollBar(QAbstractScrollArea* theWrappedObject) const;
   void setVerticalScrollBar(QAbstractScrollArea* theWrappedObject, QScrollBar*  scrollbar);
   QWidget*  viewport(QAbstractScrollArea* theWrappedObject) const;
   Qt::ScrollBarPolicy  horizontalScrollBarPolicy(QAbstractScrollArea* theWrappedObject) const;
   void setViewport(QAbstractScrollArea* theWrappedObject, QWidget*  widget);
   void dragLeaveEvent(QAbstractScrollArea* theWrappedObject, QDragLeaveEvent*  arg__1);
   QList<QWidget* >  scrollBarWidgets(QAbstractScrollArea* theWrappedObject, Qt::Alignment  alignment);
   void addScrollBarWidget(QAbstractScrollArea* theWrappedObject, QWidget*  widget, Qt::Alignment  alignment);
   QSize  minimumSizeHint(QAbstractScrollArea* theWrappedObject) const;
   void paintEvent(QAbstractScrollArea* theWrappedObject, QPaintEvent*  arg__1);
   void dragMoveEvent(QAbstractScrollArea* theWrappedObject, QDragMoveEvent*  arg__1);
   void dragEnterEvent(QAbstractScrollArea* theWrappedObject, QDragEnterEvent*  arg__1);
   void dropEvent(QAbstractScrollArea* theWrappedObject, QDropEvent*  arg__1);
   void mousePressEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1);
   bool  event(QAbstractScrollArea* theWrappedObject, QEvent*  arg__1);
   void keyPressEvent(QAbstractScrollArea* theWrappedObject, QKeyEvent*  arg__1);
   bool  viewportEvent(QAbstractScrollArea* theWrappedObject, QEvent*  arg__1);
   void setCornerWidget(QAbstractScrollArea* theWrappedObject, QWidget*  widget);
   void setHorizontalScrollBar(QAbstractScrollArea* theWrappedObject, QScrollBar*  scrollbar);
};





class PythonQtShell_QAbstractSlider : public QAbstractSlider
{
public:
    PythonQtShell_QAbstractSlider(QWidget*  parent = 0):QAbstractSlider(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual void sliderChange(QAbstractSlider::SliderChange  change);
virtual void wheelEvent(QWheelEvent*  e);
virtual void changeEvent(QEvent*  e);
virtual bool  event(QEvent*  e);
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual int  heightForWidth(int  arg__1) const;
virtual QSize  sizeHint() const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractSlider : public QAbstractSlider
{ public:
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QAbstractSlider::timerEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QAbstractSlider::wheelEvent(e); }
inline void promoted_changeEvent(QEvent*  e) { QAbstractSlider::changeEvent(e); }
inline bool  promoted_event(QEvent*  e) { return QAbstractSlider::event(e); }
inline void promoted_keyPressEvent(QKeyEvent*  ev) { QAbstractSlider::keyPressEvent(ev); }
};

class PythonQtWrapper_QAbstractSlider : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SliderAction )
enum SliderAction{
  SliderNoAction = QAbstractSlider::SliderNoAction,   SliderSingleStepAdd = QAbstractSlider::SliderSingleStepAdd,   SliderSingleStepSub = QAbstractSlider::SliderSingleStepSub,   SliderPageStepAdd = QAbstractSlider::SliderPageStepAdd,   SliderPageStepSub = QAbstractSlider::SliderPageStepSub,   SliderToMinimum = QAbstractSlider::SliderToMinimum,   SliderToMaximum = QAbstractSlider::SliderToMaximum,   SliderMove = QAbstractSlider::SliderMove};
public slots:
QAbstractSlider* new_QAbstractSlider(QWidget*  parent = 0);
void delete_QAbstractSlider(QAbstractSlider* obj) { delete obj; } 
   int  singleStep(QAbstractSlider* theWrappedObject) const;
   Qt::Orientation  orientation(QAbstractSlider* theWrappedObject) const;
   int  maximum(QAbstractSlider* theWrappedObject) const;
   void setInvertedAppearance(QAbstractSlider* theWrappedObject, bool  arg__1);
   void setPageStep(QAbstractSlider* theWrappedObject, int  arg__1);
   void setSliderDown(QAbstractSlider* theWrappedObject, bool  arg__1);
   void setMinimum(QAbstractSlider* theWrappedObject, int  arg__1);
   void setSliderPosition(QAbstractSlider* theWrappedObject, int  arg__1);
   int  sliderPosition(QAbstractSlider* theWrappedObject) const;
   bool  isSliderDown(QAbstractSlider* theWrappedObject) const;
   void timerEvent(QAbstractSlider* theWrappedObject, QTimerEvent*  arg__1);
   void triggerAction(QAbstractSlider* theWrappedObject, QAbstractSlider::SliderAction  action);
   int  minimum(QAbstractSlider* theWrappedObject) const;
   bool  hasTracking(QAbstractSlider* theWrappedObject) const;
   void wheelEvent(QAbstractSlider* theWrappedObject, QWheelEvent*  e);
   void setInvertedControls(QAbstractSlider* theWrappedObject, bool  arg__1);
   void setMaximum(QAbstractSlider* theWrappedObject, int  arg__1);
   bool  invertedAppearance(QAbstractSlider* theWrappedObject) const;
   void changeEvent(QAbstractSlider* theWrappedObject, QEvent*  e);
   int  pageStep(QAbstractSlider* theWrappedObject) const;
   bool  invertedControls(QAbstractSlider* theWrappedObject) const;
   int  value(QAbstractSlider* theWrappedObject) const;
   void setSingleStep(QAbstractSlider* theWrappedObject, int  arg__1);
   void setTracking(QAbstractSlider* theWrappedObject, bool  enable);
   bool  event(QAbstractSlider* theWrappedObject, QEvent*  e);
   void keyPressEvent(QAbstractSlider* theWrappedObject, QKeyEvent*  ev);
   void setRange(QAbstractSlider* theWrappedObject, int  min, int  max);
};





class PythonQtShell_QAbstractSpinBox : public QAbstractSpinBox
{
public:
    PythonQtShell_QAbstractSpinBox(QWidget*  parent = 0):QAbstractSpinBox(parent),_wrapper(NULL) {};

virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual void stepBy(int  steps);
virtual void showEvent(QShowEvent*  event);
virtual void clear();
virtual void wheelEvent(QWheelEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void fixup(QString&  input) const;
virtual void paintEvent(QPaintEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual QAbstractSpinBox::StepEnabled  stepEnabled() const;
virtual bool  event(QEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void dropEvent(QDropEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractSpinBox : public QAbstractSpinBox
{ public:
inline QValidator::State  promoted_validate(QString&  input, int&  pos) const { return QAbstractSpinBox::validate(input, pos); }
inline void promoted_stepBy(int  steps) { QAbstractSpinBox::stepBy(steps); }
inline void promoted_showEvent(QShowEvent*  event) { QAbstractSpinBox::showEvent(event); }
inline void promoted_clear() { QAbstractSpinBox::clear(); }
inline void promoted_wheelEvent(QWheelEvent*  event) { QAbstractSpinBox::wheelEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QAbstractSpinBox::mouseMoveEvent(event); }
inline void promoted_timerEvent(QTimerEvent*  event) { QAbstractSpinBox::timerEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { QAbstractSpinBox::closeEvent(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QAbstractSpinBox::focusInEvent(event); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { QAbstractSpinBox::contextMenuEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { QAbstractSpinBox::hideEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QAbstractSpinBox::mouseReleaseEvent(event); }
inline void promoted_fixup(QString&  input) const { QAbstractSpinBox::fixup(input); }
inline void promoted_paintEvent(QPaintEvent*  event) { QAbstractSpinBox::paintEvent(event); }
inline void promoted_changeEvent(QEvent*  event) { QAbstractSpinBox::changeEvent(event); }
inline QAbstractSpinBox::StepEnabled  promoted_stepEnabled() const { return QAbstractSpinBox::stepEnabled(); }
inline bool  promoted_event(QEvent*  event) { return QAbstractSpinBox::event(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QAbstractSpinBox::resizeEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QAbstractSpinBox::keyReleaseEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QAbstractSpinBox::mousePressEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QAbstractSpinBox::focusOutEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QAbstractSpinBox::keyPressEvent(event); }
};

class PythonQtWrapper_QAbstractSpinBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StepEnabledFlag )
Q_FLAGS(StepEnabled )
enum StepEnabledFlag{
  StepNone = QAbstractSpinBox::StepNone,   StepUpEnabled = QAbstractSpinBox::StepUpEnabled,   StepDownEnabled = QAbstractSpinBox::StepDownEnabled};
Q_DECLARE_FLAGS(StepEnabled, StepEnabledFlag)
public slots:
QAbstractSpinBox* new_QAbstractSpinBox(QWidget*  parent = 0);
void delete_QAbstractSpinBox(QAbstractSpinBox* obj) { delete obj; } 
   bool  keyboardTracking(QAbstractSpinBox* theWrappedObject) const;
   void setButtonSymbols(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::ButtonSymbols  bs);
   QValidator::State  validate(QAbstractSpinBox* theWrappedObject, QString&  input, int&  pos) const;
   bool  isAccelerated(QAbstractSpinBox* theWrappedObject) const;
   void stepBy(QAbstractSpinBox* theWrappedObject, int  steps);
   QString  specialValueText(QAbstractSpinBox* theWrappedObject) const;
   void showEvent(QAbstractSpinBox* theWrappedObject, QShowEvent*  event);
   void interpretText(QAbstractSpinBox* theWrappedObject);
   void wheelEvent(QAbstractSpinBox* theWrappedObject, QWheelEvent*  event);
   bool  wrapping(QAbstractSpinBox* theWrappedObject) const;
   bool  isReadOnly(QAbstractSpinBox* theWrappedObject) const;
   QSize  sizeHint(QAbstractSpinBox* theWrappedObject) const;
   void setCorrectionMode(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::CorrectionMode  cm);
   void setAccelerated(QAbstractSpinBox* theWrappedObject, bool  on);
   void mouseMoveEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event);
   Qt::Alignment  alignment(QAbstractSpinBox* theWrappedObject) const;
   void timerEvent(QAbstractSpinBox* theWrappedObject, QTimerEvent*  event);
   void closeEvent(QAbstractSpinBox* theWrappedObject, QCloseEvent*  event);
   void setWrapping(QAbstractSpinBox* theWrappedObject, bool  w);
   void focusInEvent(QAbstractSpinBox* theWrappedObject, QFocusEvent*  event);
   QAbstractSpinBox::CorrectionMode  correctionMode(QAbstractSpinBox* theWrappedObject) const;
   void contextMenuEvent(QAbstractSpinBox* theWrappedObject, QContextMenuEvent*  event);
   void setSpecialValueText(QAbstractSpinBox* theWrappedObject, const QString&  txt);
   void hideEvent(QAbstractSpinBox* theWrappedObject, QHideEvent*  event);
   void mouseReleaseEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event);
   bool  hasAcceptableInput(QAbstractSpinBox* theWrappedObject) const;
   bool  hasFrame(QAbstractSpinBox* theWrappedObject) const;
   void fixup(QAbstractSpinBox* theWrappedObject, QString&  input) const;
   void paintEvent(QAbstractSpinBox* theWrappedObject, QPaintEvent*  event);
   QAbstractSpinBox::ButtonSymbols  buttonSymbols(QAbstractSpinBox* theWrappedObject) const;
   void changeEvent(QAbstractSpinBox* theWrappedObject, QEvent*  event);
   QAbstractSpinBox::StepEnabled  stepEnabled(QAbstractSpinBox* theWrappedObject) const;
   void setKeyboardTracking(QAbstractSpinBox* theWrappedObject, bool  kt);
   void setReadOnly(QAbstractSpinBox* theWrappedObject, bool  r);
   void setAlignment(QAbstractSpinBox* theWrappedObject, Qt::Alignment  flag);
   QSize  minimumSizeHint(QAbstractSpinBox* theWrappedObject) const;
   bool  event(QAbstractSpinBox* theWrappedObject, QEvent*  event);
   void resizeEvent(QAbstractSpinBox* theWrappedObject, QResizeEvent*  event);
   void keyReleaseEvent(QAbstractSpinBox* theWrappedObject, QKeyEvent*  event);
   void mousePressEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event);
   void setFrame(QAbstractSpinBox* theWrappedObject, bool  arg__1);
   void focusOutEvent(QAbstractSpinBox* theWrappedObject, QFocusEvent*  event);
   QString  text(QAbstractSpinBox* theWrappedObject) const;
   void keyPressEvent(QAbstractSpinBox* theWrappedObject, QKeyEvent*  event);
};





class PythonQtShell_QAccessible : public QAccessible
{
public:
    PythonQtShell_QAccessible():QAccessible(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAccessible : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Method Role Action Event RelationFlag StateFlag Text )
Q_FLAGS(Relation State )
enum Method{
  ListSupportedMethods = QAccessible::ListSupportedMethods,   SetCursorPosition = QAccessible::SetCursorPosition,   GetCursorPosition = QAccessible::GetCursorPosition,   ForegroundColor = QAccessible::ForegroundColor,   BackgroundColor = QAccessible::BackgroundColor};
enum Role{
  NoRole = QAccessible::NoRole,   TitleBar = QAccessible::TitleBar,   MenuBar = QAccessible::MenuBar,   ScrollBar = QAccessible::ScrollBar,   Grip = QAccessible::Grip,   Sound = QAccessible::Sound,   Cursor = QAccessible::Cursor,   Caret = QAccessible::Caret,   AlertMessage = QAccessible::AlertMessage,   Window = QAccessible::Window,   Client = QAccessible::Client,   PopupMenu = QAccessible::PopupMenu,   MenuItem = QAccessible::MenuItem,   ToolTip = QAccessible::ToolTip,   Application = QAccessible::Application,   Document = QAccessible::Document,   Pane = QAccessible::Pane,   Chart = QAccessible::Chart,   Dialog = QAccessible::Dialog,   Border = QAccessible::Border,   Grouping = QAccessible::Grouping,   Separator = QAccessible::Separator,   ToolBar = QAccessible::ToolBar,   StatusBar = QAccessible::StatusBar,   Table = QAccessible::Table,   ColumnHeader = QAccessible::ColumnHeader,   RowHeader = QAccessible::RowHeader,   Column = QAccessible::Column,   Row = QAccessible::Row,   Cell = QAccessible::Cell,   Link = QAccessible::Link,   HelpBalloon = QAccessible::HelpBalloon,   Assistant = QAccessible::Assistant,   List = QAccessible::List,   ListItem = QAccessible::ListItem,   Tree = QAccessible::Tree,   TreeItem = QAccessible::TreeItem,   PageTab = QAccessible::PageTab,   PropertyPage = QAccessible::PropertyPage,   Indicator = QAccessible::Indicator,   Graphic = QAccessible::Graphic,   StaticText = QAccessible::StaticText,   EditableText = QAccessible::EditableText,   PushButton = QAccessible::PushButton,   CheckBox = QAccessible::CheckBox,   RadioButton = QAccessible::RadioButton,   ComboBox = QAccessible::ComboBox,   ProgressBar = QAccessible::ProgressBar,   Dial = QAccessible::Dial,   HotkeyField = QAccessible::HotkeyField,   Slider = QAccessible::Slider,   SpinBox = QAccessible::SpinBox,   Canvas = QAccessible::Canvas,   Animation = QAccessible::Animation,   Equation = QAccessible::Equation,   ButtonDropDown = QAccessible::ButtonDropDown,   ButtonMenu = QAccessible::ButtonMenu,   ButtonDropGrid = QAccessible::ButtonDropGrid,   Whitespace = QAccessible::Whitespace,   PageTabList = QAccessible::PageTabList,   Clock = QAccessible::Clock,   Splitter = QAccessible::Splitter,   LayeredPane = QAccessible::LayeredPane,   UserRole = QAccessible::UserRole};
enum Action{
  DefaultAction = QAccessible::DefaultAction,   Press = QAccessible::Press,   FirstStandardAction = QAccessible::FirstStandardAction,   SetFocus = QAccessible::SetFocus,   Increase = QAccessible::Increase,   Decrease = QAccessible::Decrease,   Accept = QAccessible::Accept,   Cancel = QAccessible::Cancel,   Select = QAccessible::Select,   ClearSelection = QAccessible::ClearSelection,   RemoveSelection = QAccessible::RemoveSelection,   ExtendSelection = QAccessible::ExtendSelection,   AddToSelection = QAccessible::AddToSelection,   LastStandardAction = QAccessible::LastStandardAction};
enum Event{
  SoundPlayed = QAccessible::SoundPlayed,   Alert = QAccessible::Alert,   ForegroundChanged = QAccessible::ForegroundChanged,   MenuStart = QAccessible::MenuStart,   MenuEnd = QAccessible::MenuEnd,   PopupMenuStart = QAccessible::PopupMenuStart,   PopupMenuEnd = QAccessible::PopupMenuEnd,   ContextHelpStart = QAccessible::ContextHelpStart,   ContextHelpEnd = QAccessible::ContextHelpEnd,   DragDropStart = QAccessible::DragDropStart,   DragDropEnd = QAccessible::DragDropEnd,   DialogStart = QAccessible::DialogStart,   DialogEnd = QAccessible::DialogEnd,   ScrollingStart = QAccessible::ScrollingStart,   ScrollingEnd = QAccessible::ScrollingEnd,   MenuCommand = QAccessible::MenuCommand,   ObjectCreated = QAccessible::ObjectCreated,   ObjectDestroyed = QAccessible::ObjectDestroyed,   ObjectShow = QAccessible::ObjectShow,   ObjectHide = QAccessible::ObjectHide,   ObjectReorder = QAccessible::ObjectReorder,   Focus = QAccessible::Focus,   Selection = QAccessible::Selection,   SelectionAdd = QAccessible::SelectionAdd,   SelectionRemove = QAccessible::SelectionRemove,   SelectionWithin = QAccessible::SelectionWithin,   StateChanged = QAccessible::StateChanged,   LocationChanged = QAccessible::LocationChanged,   NameChanged = QAccessible::NameChanged,   DescriptionChanged = QAccessible::DescriptionChanged,   ValueChanged = QAccessible::ValueChanged,   ParentChanged = QAccessible::ParentChanged,   HelpChanged = QAccessible::HelpChanged,   DefaultActionChanged = QAccessible::DefaultActionChanged,   AcceleratorChanged = QAccessible::AcceleratorChanged};
enum RelationFlag{
  Unrelated = QAccessible::Unrelated,   Self = QAccessible::Self,   Ancestor = QAccessible::Ancestor,   Child = QAccessible::Child,   Descendent = QAccessible::Descendent,   Sibling = QAccessible::Sibling,   HierarchyMask = QAccessible::HierarchyMask,   Up = QAccessible::Up,   Down = QAccessible::Down,   Left = QAccessible::Left,   Right = QAccessible::Right,   Covers = QAccessible::Covers,   Covered = QAccessible::Covered,   GeometryMask = QAccessible::GeometryMask,   FocusChild = QAccessible::FocusChild,   Label = QAccessible::Label,   Labelled = QAccessible::Labelled,   Controller = QAccessible::Controller,   Controlled = QAccessible::Controlled,   LogicalMask = QAccessible::LogicalMask};
enum StateFlag{
  Normal = QAccessible::Normal,   Unavailable = QAccessible::Unavailable,   Selected = QAccessible::Selected,   Focused = QAccessible::Focused,   Pressed = QAccessible::Pressed,   Checked = QAccessible::Checked,   Mixed = QAccessible::Mixed,   ReadOnly = QAccessible::ReadOnly,   HotTracked = QAccessible::HotTracked,   DefaultButton = QAccessible::DefaultButton,   Expanded = QAccessible::Expanded,   Collapsed = QAccessible::Collapsed,   Busy = QAccessible::Busy,   Marqueed = QAccessible::Marqueed,   Animated = QAccessible::Animated,   Invisible = QAccessible::Invisible,   Offscreen = QAccessible::Offscreen,   Sizeable = QAccessible::Sizeable,   Movable = QAccessible::Movable,   SelfVoicing = QAccessible::SelfVoicing,   Focusable = QAccessible::Focusable,   Selectable = QAccessible::Selectable,   Linked = QAccessible::Linked,   Traversed = QAccessible::Traversed,   MultiSelectable = QAccessible::MultiSelectable,   ExtSelectable = QAccessible::ExtSelectable,   Protected = QAccessible::Protected,   HasPopup = QAccessible::HasPopup,   Modal = QAccessible::Modal,   HasInvokeExtension = QAccessible::HasInvokeExtension};
enum Text{
  Name = QAccessible::Name,   Description = QAccessible::Description,   Value = QAccessible::Value,   Help = QAccessible::Help,   Accelerator = QAccessible::Accelerator,   UserText = QAccessible::UserText};
Q_DECLARE_FLAGS(Relation, RelationFlag)
Q_DECLARE_FLAGS(State, StateFlag)
public slots:
QAccessible* new_QAccessible();
void delete_QAccessible(QAccessible* obj) { delete obj; } 
   void static_QAccessible_updateAccessibility(QObject*  arg__1, int  who, QAccessible::Event  reason);
   bool  static_QAccessible_isActive();
   void static_QAccessible_setRootObject(QObject*  arg__1);
   QAccessibleInterface*  static_QAccessible_queryAccessibleInterface(QObject*  arg__1);
};





class PythonQtShell_QAccessible2Interface : public QAccessible2Interface
{
public:
    PythonQtShell_QAccessible2Interface():QAccessible2Interface(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAccessible2Interface : public QObject
{ Q_OBJECT
public:
public slots:
QAccessible2Interface* new_QAccessible2Interface();
void delete_QAccessible2Interface(QAccessible2Interface* obj) { delete obj; } 
};





class PythonQtShell_QAccessibleBridge : public QAccessibleBridge
{
public:
    PythonQtShell_QAccessibleBridge():QAccessibleBridge(),_wrapper(NULL) {};

virtual void notifyAccessibilityUpdate(int  arg__1, QAccessibleInterface*  arg__2, int  arg__3);
virtual void setRootObject(QAccessibleInterface*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAccessibleBridge : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleBridge* new_QAccessibleBridge();
void delete_QAccessibleBridge(QAccessibleBridge* obj) { delete obj; } 
};





class PythonQtWrapper_QAccessibleEvent : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleEvent* new_QAccessibleEvent(QEvent::Type  type, int  child);
void delete_QAccessibleEvent(QAccessibleEvent* obj) { delete obj; } 
   int  child(QAccessibleEvent* theWrappedObject) const;
   QString  value(QAccessibleEvent* theWrappedObject) const;
   void setValue(QAccessibleEvent* theWrappedObject, const QString&  aText);
};





class PythonQtShell_QAccessibleInterface : public QAccessibleInterface
{
public:
    PythonQtShell_QAccessibleInterface():QAccessibleInterface(),_wrapper(NULL) {};

virtual bool  isValid() const;
virtual QObject*  object() const;
virtual int  navigate(QAccessible::RelationFlag  relation, int  index, QAccessibleInterface**  iface) const;
virtual int  userActionCount(int  child) const;
virtual QAccessible::Relation  relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const;
virtual QString  text(QAccessible::Text  t, int  child) const;
virtual int  childAt(int  x, int  y) const;
virtual int  indexOfChild(const QAccessibleInterface*  arg__1) const;
virtual QAccessible::State  state(int  child) const;
virtual QAccessible::Role  role(int  child) const;
virtual int  childCount() const;
virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual QRect  rect(int  child) const;
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params = QVariantList());
virtual void setText(QAccessible::Text  t, int  child, const QString&  text);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAccessibleInterface : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleInterface* new_QAccessibleInterface();
void delete_QAccessibleInterface(QAccessibleInterface* obj) { delete obj; } 
   QVariant  invokeMethod(QAccessibleInterface* theWrappedObject, QAccessible::Method  method, int  child = 0, const QList<QVariant >&  params = QVariantList());
   QSet<QAccessible::Method >  supportedMethods(QAccessibleInterface* theWrappedObject);
};





class PythonQtShell_QAccessibleInterfaceEx : public QAccessibleInterfaceEx
{
public:
    PythonQtShell_QAccessibleInterfaceEx():QAccessibleInterfaceEx(),_wrapper(NULL) {};

virtual QVariant  virtual_hook(const QVariant&  data);
virtual QVariant  invokeMethodEx(QAccessible::Method  method, int  child, const QList<QVariant >&  params);
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params);
virtual int  childAt(int  x, int  y) const;
virtual QString  text(QAccessible::Text  t, int  child) const;
virtual QRect  rect(int  child) const;
virtual QAccessible::Role  role(int  child) const;
virtual int  childCount() const;
virtual QAccessible::State  state(int  child) const;
virtual int  userActionCount(int  child) const;
virtual QAccessible::Relation  relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const;
virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual bool  isValid() const;
virtual QObject*  object() const;
virtual int  navigate(QAccessible::RelationFlag  relation, int  index, QAccessibleInterface**  iface) const;
virtual void setText(QAccessible::Text  t, int  child, const QString&  text);
virtual int  indexOfChild(const QAccessibleInterface*  arg__1) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAccessibleInterfaceEx : public QAccessibleInterfaceEx
{ public:
inline QVariant  promoted_virtual_hook(const QVariant&  data) { return QAccessibleInterfaceEx::virtual_hook(data); }
};

class PythonQtWrapper_QAccessibleInterfaceEx : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleInterfaceEx* new_QAccessibleInterfaceEx();
void delete_QAccessibleInterfaceEx(QAccessibleInterfaceEx* obj) { delete obj; } 
   QVariant  virtual_hook(QAccessibleInterfaceEx* theWrappedObject, const QVariant&  data);
};





class PythonQtShell_QAccessibleObject : public QAccessibleObject
{
public:
    PythonQtShell_QAccessibleObject(QObject*  object):QAccessibleObject(object),_wrapper(NULL) {};

virtual QString  text(QAccessible::Text  t, int  child) const;
virtual QRect  rect(int  child) const;
virtual bool  isValid() const;
virtual int  userActionCount(int  child) const;
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params);
virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual void setText(QAccessible::Text  t, int  child, const QString&  text);
virtual QObject*  object() const;
virtual int  childCount() const;
virtual int  childAt(int  x, int  y) const;
virtual QAccessible::Role  role(int  child) const;
virtual QAccessible::State  state(int  child) const;
virtual QAccessible::Relation  relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const;
virtual int  navigate(QAccessible::RelationFlag  relation, int  index, QAccessibleInterface**  iface) const;
virtual int  indexOfChild(const QAccessibleInterface*  arg__1) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAccessibleObject : public QAccessibleObject
{ public:
inline QRect  promoted_rect(int  child) const { return QAccessibleObject::rect(child); }
inline bool  promoted_isValid() const { return QAccessibleObject::isValid(); }
inline int  promoted_userActionCount(int  child) const { return QAccessibleObject::userActionCount(child); }
inline bool  promoted_doAction(int  action, int  child, const QList<QVariant >&  params) { return QAccessibleObject::doAction(action, child, params); }
inline QString  promoted_actionText(int  action, QAccessible::Text  t, int  child) const { return QAccessibleObject::actionText(action, t, child); }
inline void promoted_setText(QAccessible::Text  t, int  child, const QString&  text) { QAccessibleObject::setText(t, child, text); }
inline QObject*  promoted_object() const { return QAccessibleObject::object(); }
};

class PythonQtWrapper_QAccessibleObject : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleObject* new_QAccessibleObject(QObject*  object);
   QRect  rect(QAccessibleObject* theWrappedObject, int  child) const;
   bool  isValid(QAccessibleObject* theWrappedObject) const;
   int  userActionCount(QAccessibleObject* theWrappedObject, int  child) const;
   bool  doAction(QAccessibleObject* theWrappedObject, int  action, int  child, const QList<QVariant >&  params);
   QString  actionText(QAccessibleObject* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   void setText(QAccessibleObject* theWrappedObject, QAccessible::Text  t, int  child, const QString&  text);
   QObject*  object(QAccessibleObject* theWrappedObject) const;
};





class PythonQtShell_QAccessibleObjectEx : public QAccessibleObjectEx
{
public:
    PythonQtShell_QAccessibleObjectEx(QObject*  object):QAccessibleObjectEx(object),_wrapper(NULL) {};

virtual QVariant  virtual_hook(const QVariant&  data);
virtual bool  isValid() const;
virtual QRect  rect(int  child) const;
virtual int  userActionCount(int  child) const;
virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual void setText(QAccessible::Text  t, int  child, const QString&  text);
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params);
virtual QObject*  object() const;
virtual QString  text(QAccessible::Text  t, int  child) const;
virtual QVariant  invokeMethodEx(QAccessible::Method  method, int  child, const QList<QVariant >&  params);
virtual int  childAt(int  x, int  y) const;
virtual QAccessible::Role  role(int  child) const;
virtual int  childCount() const;
virtual QAccessible::State  state(int  child) const;
virtual QAccessible::Relation  relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const;
virtual int  navigate(QAccessible::RelationFlag  relation, int  index, QAccessibleInterface**  iface) const;
virtual int  indexOfChild(const QAccessibleInterface*  arg__1) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAccessibleObjectEx : public QAccessibleObjectEx
{ public:
inline bool  promoted_isValid() const { return QAccessibleObjectEx::isValid(); }
inline QRect  promoted_rect(int  child) const { return QAccessibleObjectEx::rect(child); }
inline int  promoted_userActionCount(int  child) const { return QAccessibleObjectEx::userActionCount(child); }
inline QString  promoted_actionText(int  action, QAccessible::Text  t, int  child) const { return QAccessibleObjectEx::actionText(action, t, child); }
inline void promoted_setText(QAccessible::Text  t, int  child, const QString&  text) { QAccessibleObjectEx::setText(t, child, text); }
inline bool  promoted_doAction(int  action, int  child, const QList<QVariant >&  params) { return QAccessibleObjectEx::doAction(action, child, params); }
inline QObject*  promoted_object() const { return QAccessibleObjectEx::object(); }
};

class PythonQtWrapper_QAccessibleObjectEx : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleObjectEx* new_QAccessibleObjectEx(QObject*  object);
   bool  isValid(QAccessibleObjectEx* theWrappedObject) const;
   QRect  rect(QAccessibleObjectEx* theWrappedObject, int  child) const;
   int  userActionCount(QAccessibleObjectEx* theWrappedObject, int  child) const;
   QString  actionText(QAccessibleObjectEx* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   void setText(QAccessibleObjectEx* theWrappedObject, QAccessible::Text  t, int  child, const QString&  text);
   bool  doAction(QAccessibleObjectEx* theWrappedObject, int  action, int  child, const QList<QVariant >&  params);
   QObject*  object(QAccessibleObjectEx* theWrappedObject) const;
};





class PythonQtShell_QAccessiblePlugin : public QAccessiblePlugin
{
public:
    PythonQtShell_QAccessiblePlugin(QObject*  parent = 0):QAccessiblePlugin(parent),_wrapper(NULL) {};

virtual QStringList  keys() const;
virtual QAccessibleInterface*  create(const QString&  key, QObject*  object);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAccessiblePlugin : public QObject
{ Q_OBJECT
public:
public slots:
QAccessiblePlugin* new_QAccessiblePlugin(QObject*  parent = 0);
void delete_QAccessiblePlugin(QAccessiblePlugin* obj) { delete obj; } 
};





class PythonQtShell_QAccessibleTableInterface : public QAccessibleTableInterface
{
public:
    PythonQtShell_QAccessibleTableInterface():QAccessibleTableInterface(),_wrapper(NULL) {};

virtual QAccessibleInterface*  rowHeader();
virtual int  selectedColumns(int  maxColumns, QList<int >*  columns);
virtual void cellAtIndex(int  index, int*  row, int*  column, int*  rowSpan, int*  columnSpan, bool*  isSelected);
virtual QAccessibleInterface*  summary();
virtual bool  isSelected(int  row, int  column);
virtual int  columnSpan(int  row, int  column);
virtual int  selectedColumnCount();
virtual int  rowIndex(int  childIndex);
virtual void selectColumn(int  column);
virtual QAccessibleInterface*  caption();
virtual QString  columnDescription(int  column);
virtual QAccessibleInterface*  columnHeader();
virtual QString  rowDescription(int  row);
virtual int  columnCount();
virtual bool  isRowSelected(int  row);
virtual int  rowCount();
virtual void selectRow(int  row);
virtual void unselectRow(int  row);
virtual int  selectedRows(int  maxRows, QList<int >*  rows);
virtual int  rowSpan(int  row, int  column);
virtual QAccessibleInterface*  accessibleAt(int  row, int  column);
virtual void unselectColumn(int  column);
virtual bool  isColumnSelected(int  column);
virtual int  childIndex(int  rowIndex, int  columnIndex);
virtual int  selectedRowCount();
virtual int  columnIndex(int  childIndex);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAccessibleTableInterface : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleTableInterface* new_QAccessibleTableInterface();
void delete_QAccessibleTableInterface(QAccessibleTableInterface* obj) { delete obj; } 
};





class PythonQtShell_QAccessibleWidget : public QAccessibleWidget
{
public:
    PythonQtShell_QAccessibleWidget(QWidget*  o, QAccessible::Role  r = QAccessible::Client, const QString&  name = QString()):QAccessibleWidget(o, r, name),_wrapper(NULL) {};

virtual void setText(QAccessible::Text  t, int  child, const QString&  text);
virtual QRect  rect(int  child) const;
virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual QAccessible::State  state(int  child) const;
virtual int  childAt(int  x, int  y) const;
virtual QAccessible::Relation  relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const;
virtual int  userActionCount(int  child) const;
virtual int  navigate(QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const;
virtual QString  text(QAccessible::Text  t, int  child) const;
virtual int  indexOfChild(const QAccessibleInterface*  child) const;
virtual int  childCount() const;
virtual QAccessible::Role  role(int  child) const;
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params);
virtual bool  isValid() const;
virtual QObject*  object() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAccessibleWidget : public QAccessibleWidget
{ public:
inline QRect  promoted_rect(int  child) const { return QAccessibleWidget::rect(child); }
inline QString  promoted_actionText(int  action, QAccessible::Text  t, int  child) const { return QAccessibleWidget::actionText(action, t, child); }
inline QAccessible::State  promoted_state(int  child) const { return QAccessibleWidget::state(child); }
inline int  promoted_childAt(int  x, int  y) const { return QAccessibleWidget::childAt(x, y); }
inline QAccessible::Relation  promoted_relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const { return QAccessibleWidget::relationTo(child, other, otherChild); }
inline int  promoted_userActionCount(int  child) const { return QAccessibleWidget::userActionCount(child); }
inline int  promoted_navigate(QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const { return QAccessibleWidget::navigate(rel, entry, target); }
inline QString  promoted_text(QAccessible::Text  t, int  child) const { return QAccessibleWidget::text(t, child); }
inline int  promoted_indexOfChild(const QAccessibleInterface*  child) const { return QAccessibleWidget::indexOfChild(child); }
inline int  promoted_childCount() const { return QAccessibleWidget::childCount(); }
inline QAccessible::Role  promoted_role(int  child) const { return QAccessibleWidget::role(child); }
inline bool  promoted_doAction(int  action, int  child, const QList<QVariant >&  params) { return QAccessibleWidget::doAction(action, child, params); }
};

class PythonQtWrapper_QAccessibleWidget : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleWidget* new_QAccessibleWidget(QWidget*  o, QAccessible::Role  r = QAccessible::Client, const QString&  name = QString());
   QRect  rect(QAccessibleWidget* theWrappedObject, int  child) const;
   QString  actionText(QAccessibleWidget* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   QAccessible::State  state(QAccessibleWidget* theWrappedObject, int  child) const;
   int  childAt(QAccessibleWidget* theWrappedObject, int  x, int  y) const;
   QAccessible::Relation  relationTo(QAccessibleWidget* theWrappedObject, int  child, const QAccessibleInterface*  other, int  otherChild) const;
   int  userActionCount(QAccessibleWidget* theWrappedObject, int  child) const;
   int  navigate(QAccessibleWidget* theWrappedObject, QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const;
   QString  text(QAccessibleWidget* theWrappedObject, QAccessible::Text  t, int  child) const;
   int  indexOfChild(QAccessibleWidget* theWrappedObject, const QAccessibleInterface*  child) const;
   int  childCount(QAccessibleWidget* theWrappedObject) const;
   QAccessible::Role  role(QAccessibleWidget* theWrappedObject, int  child) const;
   bool  doAction(QAccessibleWidget* theWrappedObject, int  action, int  child, const QList<QVariant >&  params);
};





class PythonQtShell_QAccessibleWidgetEx : public QAccessibleWidgetEx
{
public:
    PythonQtShell_QAccessibleWidgetEx(QWidget*  o, QAccessible::Role  r = QAccessible::Client, const QString&  name = QString()):QAccessibleWidgetEx(o, r, name),_wrapper(NULL) {};

virtual QString  text(QAccessible::Text  t, int  child) const;
virtual int  navigate(QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const;
virtual QAccessible::Relation  relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const;
virtual int  indexOfChild(const QAccessibleInterface*  child) const;
virtual int  childAt(int  x, int  y) const;
virtual QAccessible::State  state(int  child) const;
virtual QAccessible::Role  role(int  child) const;
virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual int  childCount() const;
virtual QVariant  invokeMethodEx(QAccessible::Method  method, int  child, const QList<QVariant >&  params);
virtual QRect  rect(int  child) const;
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params);
virtual QVariant  virtual_hook(const QVariant&  data);
virtual void setText(QAccessible::Text  t, int  child, const QString&  text);
virtual bool  isValid() const;
virtual int  userActionCount(int  child) const;
virtual QObject*  object() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAccessibleWidgetEx : public QAccessibleWidgetEx
{ public:
inline QString  promoted_text(QAccessible::Text  t, int  child) const { return QAccessibleWidgetEx::text(t, child); }
inline int  promoted_navigate(QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const { return QAccessibleWidgetEx::navigate(rel, entry, target); }
inline QAccessible::Relation  promoted_relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const { return QAccessibleWidgetEx::relationTo(child, other, otherChild); }
inline int  promoted_indexOfChild(const QAccessibleInterface*  child) const { return QAccessibleWidgetEx::indexOfChild(child); }
inline int  promoted_childAt(int  x, int  y) const { return QAccessibleWidgetEx::childAt(x, y); }
inline QAccessible::State  promoted_state(int  child) const { return QAccessibleWidgetEx::state(child); }
inline QAccessible::Role  promoted_role(int  child) const { return QAccessibleWidgetEx::role(child); }
inline QString  promoted_actionText(int  action, QAccessible::Text  t, int  child) const { return QAccessibleWidgetEx::actionText(action, t, child); }
inline int  promoted_childCount() const { return QAccessibleWidgetEx::childCount(); }
inline QVariant  promoted_invokeMethodEx(QAccessible::Method  method, int  child, const QList<QVariant >&  params) { return QAccessibleWidgetEx::invokeMethodEx(method, child, params); }
inline QRect  promoted_rect(int  child) const { return QAccessibleWidgetEx::rect(child); }
inline bool  promoted_doAction(int  action, int  child, const QList<QVariant >&  params) { return QAccessibleWidgetEx::doAction(action, child, params); }
};

class PythonQtWrapper_QAccessibleWidgetEx : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleWidgetEx* new_QAccessibleWidgetEx(QWidget*  o, QAccessible::Role  r = QAccessible::Client, const QString&  name = QString());
   QString  text(QAccessibleWidgetEx* theWrappedObject, QAccessible::Text  t, int  child) const;
   int  navigate(QAccessibleWidgetEx* theWrappedObject, QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const;
   QAccessible::Relation  relationTo(QAccessibleWidgetEx* theWrappedObject, int  child, const QAccessibleInterface*  other, int  otherChild) const;
   int  indexOfChild(QAccessibleWidgetEx* theWrappedObject, const QAccessibleInterface*  child) const;
   int  childAt(QAccessibleWidgetEx* theWrappedObject, int  x, int  y) const;
   QAccessible::State  state(QAccessibleWidgetEx* theWrappedObject, int  child) const;
   QAccessible::Role  role(QAccessibleWidgetEx* theWrappedObject, int  child) const;
   QString  actionText(QAccessibleWidgetEx* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   int  childCount(QAccessibleWidgetEx* theWrappedObject) const;
   QVariant  invokeMethodEx(QAccessibleWidgetEx* theWrappedObject, QAccessible::Method  method, int  child, const QList<QVariant >&  params);
   QRect  rect(QAccessibleWidgetEx* theWrappedObject, int  child) const;
   bool  doAction(QAccessibleWidgetEx* theWrappedObject, int  action, int  child, const QList<QVariant >&  params);
};





class PythonQtShell_QAction : public QAction
{
public:
    PythonQtShell_QAction(QObject*  parent):QAction(parent),_wrapper(NULL) {};
    PythonQtShell_QAction(const QIcon&  icon, const QString&  text, QObject*  parent):QAction(icon, text, parent),_wrapper(NULL) {};
    PythonQtShell_QAction(const QString&  text, QObject*  parent):QAction(text, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAction : public QAction
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QAction::event(arg__1); }
};

class PythonQtWrapper_QAction : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ActionEvent )
enum ActionEvent{
  Trigger = QAction::Trigger,   Hover = QAction::Hover};
public slots:
QAction* new_QAction(QObject*  parent);
QAction* new_QAction(const QIcon&  icon, const QString&  text, QObject*  parent);
QAction* new_QAction(const QString&  text, QObject*  parent);
void delete_QAction(QAction* obj) { delete obj; } 
   void setShortcuts(QAction* theWrappedObject, QKeySequence::StandardKey  arg__1);
   void setToolTip(QAction* theWrappedObject, const QString&  tip);
   void setActionGroup(QAction* theWrappedObject, QActionGroup*  group);
   bool  event(QAction* theWrappedObject, QEvent*  arg__1);
   bool  isIconVisibleInMenu(QAction* theWrappedObject) const;
   void setIcon(QAction* theWrappedObject, const QIcon&  icon);
   void setSeparator(QAction* theWrappedObject, bool  b);
   QKeySequence  shortcut(QAction* theWrappedObject) const;
   void setData(QAction* theWrappedObject, const QVariant&  var);
   QString  iconText(QAction* theWrappedObject) const;
   QIcon  icon(QAction* theWrappedObject) const;
   bool  showStatusText(QAction* theWrappedObject, QWidget*  widget = 0);
   bool  isVisible(QAction* theWrappedObject) const;
   void setShortcut(QAction* theWrappedObject, const QKeySequence&  shortcut);
   void activate(QAction* theWrappedObject, QAction::ActionEvent  event);
   bool  isCheckable(QAction* theWrappedObject) const;
   QString  statusTip(QAction* theWrappedObject) const;
   void setWhatsThis(QAction* theWrappedObject, const QString&  what);
   bool  isChecked(QAction* theWrappedObject) const;
   void setFont(QAction* theWrappedObject, const QFont&  font);
   bool  autoRepeat(QAction* theWrappedObject) const;
   QAction::MenuRole  menuRole(QAction* theWrappedObject) const;
   QString  toolTip(QAction* theWrappedObject) const;
   QString  whatsThis(QAction* theWrappedObject) const;
   void setText(QAction* theWrappedObject, const QString&  text);
   bool  isSeparator(QAction* theWrappedObject) const;
   QList<QKeySequence >  shortcuts(QAction* theWrappedObject) const;
   QVariant  data(QAction* theWrappedObject) const;
   void setStatusTip(QAction* theWrappedObject, const QString&  statusTip);
   void setAutoRepeat(QAction* theWrappedObject, bool  arg__1);
   QActionGroup*  actionGroup(QAction* theWrappedObject) const;
   void setMenuRole(QAction* theWrappedObject, QAction::MenuRole  menuRole);
   void setIconVisibleInMenu(QAction* theWrappedObject, bool  visible);
   void setCheckable(QAction* theWrappedObject, bool  arg__1);
   void setIconText(QAction* theWrappedObject, const QString&  text);
   QMenu*  menu(QAction* theWrappedObject) const;
   QWidget*  parentWidget(QAction* theWrappedObject) const;
   QString  text(QAction* theWrappedObject) const;
   Qt::ShortcutContext  shortcutContext(QAction* theWrappedObject) const;
   void setMenu(QAction* theWrappedObject, QMenu*  menu);
   QFont  font(QAction* theWrappedObject) const;
   void setShortcutContext(QAction* theWrappedObject, Qt::ShortcutContext  context);
   QList<QWidget* >  associatedWidgets(QAction* theWrappedObject) const;
   bool  isEnabled(QAction* theWrappedObject) const;
   void setShortcuts(QAction* theWrappedObject, const QList<QKeySequence >&  shortcuts);
};





class PythonQtWrapper_QActionEvent : public QObject
{ Q_OBJECT
public:
public slots:
QActionEvent* new_QActionEvent(int  type, QAction*  action, QAction*  before = 0);
void delete_QActionEvent(QActionEvent* obj) { delete obj; } 
   QAction*  before(QActionEvent* theWrappedObject) const;
   QAction*  action(QActionEvent* theWrappedObject) const;
};





class PythonQtShell_QActionGroup : public QActionGroup
{
public:
    PythonQtShell_QActionGroup(QObject*  parent):QActionGroup(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QActionGroup : public QObject
{ Q_OBJECT
public:
public slots:
QActionGroup* new_QActionGroup(QObject*  parent);
void delete_QActionGroup(QActionGroup* obj) { delete obj; } 
   QAction*  checkedAction(QActionGroup* theWrappedObject) const;
   void removeAction(QActionGroup* theWrappedObject, QAction*  a);
   bool  isEnabled(QActionGroup* theWrappedObject) const;
   QAction*  addAction(QActionGroup* theWrappedObject, const QIcon&  icon, const QString&  text);
   QAction*  addAction(QActionGroup* theWrappedObject, QAction*  a);
   QAction*  addAction(QActionGroup* theWrappedObject, const QString&  text);
   bool  isVisible(QActionGroup* theWrappedObject) const;
   QList<QAction* >  actions(QActionGroup* theWrappedObject) const;
   bool  isExclusive(QActionGroup* theWrappedObject) const;
};





class PythonQtShell_QApplication : public QApplication
{
public:

virtual void saveState(QSessionManager&  sm);
virtual void commitData(QSessionManager&  sm);
virtual bool  notify(QObject*  arg__1, QEvent*  arg__2);
virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QApplication : public QApplication
{ public:
inline bool  promoted_notify(QObject*  arg__1, QEvent*  arg__2) { return QApplication::notify(arg__1, arg__2); }
inline bool  promoted_event(QEvent*  arg__1) { return QApplication::event(arg__1); }
};

class PythonQtWrapper_QApplication : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type ColorSpec )
enum Type{
  Tty = QApplication::Tty,   GuiClient = QApplication::GuiClient,   GuiServer = QApplication::GuiServer};
enum ColorSpec{
  NormalColor = QApplication::NormalColor,   CustomColor = QApplication::CustomColor,   ManyColor = QApplication::ManyColor};
public slots:
void delete_QApplication(QApplication* obj) { delete obj; } 
   QWidget*  static_QApplication_widgetAt(int  x, int  y);
   void setInputContext(QApplication* theWrappedObject, QInputContext*  arg__1);
   QWidget*  static_QApplication_activeModalWidget();
   QString  sessionId(QApplication* theWrappedObject) const;
   void static_QApplication_setColorSpec(int  arg__1);
   Qt::LayoutDirection  static_QApplication_layoutDirection();
   void static_QApplication_setStyle(QStyle*  arg__1);
   QPalette  static_QApplication_palette(const QWidget*  arg__1);
   int  static_QApplication_colorSpec();
   QStyle*  static_QApplication_style();
   QWidget*  static_QApplication_activePopupWidget();
   void static_QApplication_setDesktopSettingsAware(bool  arg__1);
   void static_QApplication_setStartDragTime(int  ms);
   QPalette  static_QApplication_palette();
   void static_QApplication_setLayoutDirection(Qt::LayoutDirection  direction);
   Qt::KeyboardModifiers  static_QApplication_keyboardModifiers();
   bool  static_QApplication_desktopSettingsAware();
   bool  static_QApplication_quitOnLastWindowClosed();
   QSize  static_QApplication_globalStrut();
   QStyle*  static_QApplication_setStyle(const QString&  arg__1);
   void static_QApplication_setKeyboardInputInterval(int  arg__1);
   void static_QApplication_setQuitOnLastWindowClosed(bool  quit);
   QCursor*  static_QApplication_overrideCursor();
   void static_QApplication_setGlobalStrut(const QSize&  arg__1);
   QClipboard*  static_QApplication_clipboard();
   void static_QApplication_setOverrideCursor(const QCursor&  arg__1);
   void static_QApplication_setStartDragDistance(int  l);
   void static_QApplication_setEffectEnabled(Qt::UIEffect  arg__1, bool  enable = true);
   void static_QApplication_changeOverrideCursor(const QCursor&  arg__1);
   QInputContext*  inputContext(QApplication* theWrappedObject) const;
   QDesktopWidget*  static_QApplication_desktop();
   QWidget*  static_QApplication_activeWindow();
   int  static_QApplication_cursorFlashTime();
   void static_QApplication_setWheelScrollLines(int  arg__1);
   void static_QApplication_restoreOverrideCursor();
   QIcon  static_QApplication_windowIcon();
   bool  static_QApplication_isRightToLeft();
   bool  static_QApplication_isEffectEnabled(Qt::UIEffect  arg__1);
   QFont  static_QApplication_font();
   QFont  static_QApplication_font(const QWidget*  arg__1);
   QLocale  static_QApplication_keyboardInputLocale();
   bool  isSessionRestored(QApplication* theWrappedObject) const;
   QList<QWidget* >  static_QApplication_allWidgets();
   QWidget*  static_QApplication_focusWidget();
   int  static_QApplication_exec();
   int  static_QApplication_startDragDistance();
   QString  styleSheet(QApplication* theWrappedObject) const;
   bool  static_QApplication_isLeftToRight();
   void static_QApplication_syncX();
   void static_QApplication_setFont(const QFont&  arg__1, const char*  className = 0);
   void static_QApplication_setCursorFlashTime(int  arg__1);
   Qt::MouseButtons  static_QApplication_mouseButtons();
   int  static_QApplication_doubleClickInterval();
   void static_QApplication_alert(QWidget*  widget, int  duration = 0);
   bool  notify(QApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void static_QApplication_setPalette(const QPalette&  arg__1, const char*  className = 0);
   void static_QApplication_setWindowIcon(const QIcon&  icon);
   void static_QApplication_setActiveWindow(QWidget*  act);
   QWidget*  static_QApplication_topLevelAt(int  x, int  y);
   QList<QWidget* >  static_QApplication_topLevelWidgets();
   void static_QApplication_beep();
   int  static_QApplication_keyboardInputInterval();
   QString  sessionKey(QApplication* theWrappedObject) const;
   Qt::LayoutDirection  static_QApplication_keyboardInputDirection();
   QWidget*  static_QApplication_topLevelAt(const QPoint&  p);
   int  static_QApplication_wheelScrollLines();
   QApplication::Type  static_QApplication_type();
   void static_QApplication_setDoubleClickInterval(int  arg__1);
   bool  event(QApplication* theWrappedObject, QEvent*  arg__1);
   QWidget*  static_QApplication_widgetAt(const QPoint&  p);
   int  static_QApplication_startDragTime();
};





class PythonQtShell_QBoxLayout : public QBoxLayout
{
public:
    PythonQtShell_QBoxLayout(QBoxLayout::Direction  arg__1, QWidget*  parent = 0):QBoxLayout(arg__1, parent),_wrapper(NULL) {};

virtual QLayoutItem*  takeAt(int  arg__1);
virtual QSize  maximumSize() const;
virtual QLayoutItem*  itemAt(int  arg__1) const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual int  count() const;
virtual void addItem(QLayoutItem*  arg__1);
virtual Qt::Orientations  expandingDirections() const;
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

class PythonQtPublicPromoter_QBoxLayout : public QBoxLayout
{ public:
inline QLayoutItem*  promoted_takeAt(int  arg__1) { return QBoxLayout::takeAt(arg__1); }
inline QSize  promoted_maximumSize() const { return QBoxLayout::maximumSize(); }
inline QLayoutItem*  promoted_itemAt(int  arg__1) const { return QBoxLayout::itemAt(arg__1); }
inline QSize  promoted_minimumSize() const { return QBoxLayout::minimumSize(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QBoxLayout::setGeometry(arg__1); }
inline int  promoted_count() const { return QBoxLayout::count(); }
inline void promoted_addItem(QLayoutItem*  arg__1) { QBoxLayout::addItem(arg__1); }
inline Qt::Orientations  promoted_expandingDirections() const { return QBoxLayout::expandingDirections(); }
inline void promoted_invalidate() { QBoxLayout::invalidate(); }
};

class PythonQtWrapper_QBoxLayout : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Direction )
enum Direction{
  LeftToRight = QBoxLayout::LeftToRight,   RightToLeft = QBoxLayout::RightToLeft,   TopToBottom = QBoxLayout::TopToBottom,   BottomToTop = QBoxLayout::BottomToTop,   Down = QBoxLayout::Down,   Up = QBoxLayout::Up};
public slots:
QBoxLayout* new_QBoxLayout(QBoxLayout::Direction  arg__1, QWidget*  parent = 0);
void delete_QBoxLayout(QBoxLayout* obj) { delete obj; } 
   QLayoutItem*  takeAt(QBoxLayout* theWrappedObject, int  arg__1);
   int  spacing(QBoxLayout* theWrappedObject) const;
   QSize  maximumSize(QBoxLayout* theWrappedObject) const;
   void addWidget(QBoxLayout* theWrappedObject, QWidget*  arg__1, int  stretch = 0, Qt::Alignment  alignment = 0);
   QLayoutItem*  itemAt(QBoxLayout* theWrappedObject, int  arg__1) const;
   bool  setStretchFactor(QBoxLayout* theWrappedObject, QWidget*  w, int  stretch);
   QSize  minimumSize(QBoxLayout* theWrappedObject) const;
   void setDirection(QBoxLayout* theWrappedObject, QBoxLayout::Direction  arg__1);
   void setSpacing(QBoxLayout* theWrappedObject, int  spacing);
   void setGeometry(QBoxLayout* theWrappedObject, const QRect&  arg__1);
   bool  setStretchFactor(QBoxLayout* theWrappedObject, QLayout*  l, int  stretch);
   QBoxLayout::Direction  direction(QBoxLayout* theWrappedObject) const;
   int  heightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const;
   int  count(QBoxLayout* theWrappedObject) const;
   void addItem(QBoxLayout* theWrappedObject, QLayoutItem*  arg__1);
   bool  hasHeightForWidth(QBoxLayout* theWrappedObject) const;
   void addStretch(QBoxLayout* theWrappedObject, int  stretch = 0);
   void addStrut(QBoxLayout* theWrappedObject, int  arg__1);
   Qt::Orientations  expandingDirections(QBoxLayout* theWrappedObject) const;
   void insertSpacerItem(QBoxLayout* theWrappedObject, int  index, QSpacerItem*  spacerItem);
   void insertStretch(QBoxLayout* theWrappedObject, int  index, int  stretch = 0);
   void invalidate(QBoxLayout* theWrappedObject);
   QSize  sizeHint(QBoxLayout* theWrappedObject) const;
   void insertWidget(QBoxLayout* theWrappedObject, int  index, QWidget*  widget, int  stretch = 0, Qt::Alignment  alignment = 0);
   void addLayout(QBoxLayout* theWrappedObject, QLayout*  layout, int  stretch = 0);
   void insertLayout(QBoxLayout* theWrappedObject, int  index, QLayout*  layout, int  stretch = 0);
   void insertSpacing(QBoxLayout* theWrappedObject, int  index, int  size);
   int  minimumHeightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const;
   void addSpacing(QBoxLayout* theWrappedObject, int  size);
   void addSpacerItem(QBoxLayout* theWrappedObject, QSpacerItem*  spacerItem);
};





class PythonQtShell_QButtonGroup : public QButtonGroup
{
public:
    PythonQtShell_QButtonGroup(QObject*  parent = 0):QButtonGroup(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QButtonGroup : public QObject
{ Q_OBJECT
public:
public slots:
QButtonGroup* new_QButtonGroup(QObject*  parent = 0);
void delete_QButtonGroup(QButtonGroup* obj) { delete obj; } 
   void addButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1, int  id);
   int  id(QButtonGroup* theWrappedObject, QAbstractButton*  button) const;
   QList<QAbstractButton* >  buttons(QButtonGroup* theWrappedObject) const;
   QAbstractButton*  checkedButton(QButtonGroup* theWrappedObject) const;
   void removeButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1);
   void addButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1);
   bool  exclusive(QButtonGroup* theWrappedObject) const;
   void setExclusive(QButtonGroup* theWrappedObject, bool  arg__1);
   void setId(QButtonGroup* theWrappedObject, QAbstractButton*  button, int  id);
   int  checkedId(QButtonGroup* theWrappedObject) const;
   QAbstractButton*  button(QButtonGroup* theWrappedObject, int  id) const;
};





class PythonQtShell_QCDEStyle : public QCDEStyle
{
public:
    PythonQtShell_QCDEStyle(bool  useHighlightCols = false):QCDEStyle(useHighlightCols),_wrapper(NULL) {};

virtual void drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual QPalette  standardPalette() const;
virtual int  pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const;
virtual QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const;
virtual void unpolish(QApplication*  arg__1);
virtual void polish(QWidget*  arg__1);
virtual int  styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt, const QWidget*  widget, QStyleHintReturn*  returnData) const;
virtual void timerEvent(QTimerEvent*  event);
virtual void polish(QApplication*  arg__1);
virtual QSize  sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget) const;
virtual bool  eventFilter(QObject*  o, QEvent*  e);
virtual void unpolish(QWidget*  arg__1);
virtual void drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w) const;
virtual void polish(QPalette&  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w) const;
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCDEStyle : public QCDEStyle
{ public:
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QCDEStyle::drawPrimitive(pe, opt, p, w); }
inline void promoted_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QCDEStyle::drawControl(element, opt, p, w); }
inline QPalette  promoted_standardPalette() const { return QCDEStyle::standardPalette(); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QCDEStyle::pixelMetric(metric, option, widget); }
};

class PythonQtWrapper_QCDEStyle : public QObject
{ Q_OBJECT
public:
public slots:
QCDEStyle* new_QCDEStyle(bool  useHighlightCols = false);
void delete_QCDEStyle(QCDEStyle* obj) { delete obj; } 
   void drawPrimitive(QCDEStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void drawControl(QCDEStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   QPalette  standardPalette(QCDEStyle* theWrappedObject) const;
   int  pixelMetric(QCDEStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
};





class PythonQtShell_QCalendarWidget : public QCalendarWidget
{
public:
    PythonQtShell_QCalendarWidget(QWidget*  parent = 0):QCalendarWidget(parent),_wrapper(NULL) {};

virtual void paintCell(QPainter*  painter, const QRect&  rect, const QDate&  date) const;
virtual QSize  sizeHint() const;
virtual QSize  minimumSizeHint() const;
virtual void resizeEvent(QResizeEvent*  event);
virtual bool  event(QEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void languageChange();
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCalendarWidget : public QCalendarWidget
{ public:
inline void promoted_paintCell(QPainter*  painter, const QRect&  rect, const QDate&  date) const { QCalendarWidget::paintCell(painter, rect, date); }
inline QSize  promoted_sizeHint() const { return QCalendarWidget::sizeHint(); }
inline QSize  promoted_minimumSizeHint() const { return QCalendarWidget::minimumSizeHint(); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QCalendarWidget::resizeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QCalendarWidget::event(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QCalendarWidget::keyPressEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QCalendarWidget::mousePressEvent(event); }
};

class PythonQtWrapper_QCalendarWidget : public QObject
{ Q_OBJECT
public:
public slots:
QCalendarWidget* new_QCalendarWidget(QWidget*  parent = 0);
void delete_QCalendarWidget(QCalendarWidget* obj) { delete obj; } 
   void setDateEditAcceptDelay(QCalendarWidget* theWrappedObject, int  delay);
   Qt::DayOfWeek  firstDayOfWeek(QCalendarWidget* theWrappedObject) const;
   QTextCharFormat  headerTextFormat(QCalendarWidget* theWrappedObject) const;
   QMap<QDate , QTextCharFormat >  dateTextFormat(QCalendarWidget* theWrappedObject) const;
   QTextCharFormat  dateTextFormat(QCalendarWidget* theWrappedObject, const QDate&  date) const;
   void paintCell(QCalendarWidget* theWrappedObject, QPainter*  painter, const QRect&  rect, const QDate&  date) const;
   QSize  sizeHint(QCalendarWidget* theWrappedObject) const;
   void setVerticalHeaderFormat(QCalendarWidget* theWrappedObject, QCalendarWidget::VerticalHeaderFormat  format);
   QCalendarWidget::VerticalHeaderFormat  verticalHeaderFormat(QCalendarWidget* theWrappedObject) const;
   int  monthShown(QCalendarWidget* theWrappedObject) const;
   QSize  minimumSizeHint(QCalendarWidget* theWrappedObject) const;
   QTextCharFormat  weekdayTextFormat(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek) const;
   QCalendarWidget::SelectionMode  selectionMode(QCalendarWidget* theWrappedObject) const;
   void setSelectionMode(QCalendarWidget* theWrappedObject, QCalendarWidget::SelectionMode  mode);
   bool  isNavigationBarVisible(QCalendarWidget* theWrappedObject) const;
   void setHeaderTextFormat(QCalendarWidget* theWrappedObject, const QTextCharFormat&  format);
   void setHorizontalHeaderFormat(QCalendarWidget* theWrappedObject, QCalendarWidget::HorizontalHeaderFormat  format);
   QCalendarWidget::HorizontalHeaderFormat  horizontalHeaderFormat(QCalendarWidget* theWrappedObject) const;
   bool  isDateEditEnabled(QCalendarWidget* theWrappedObject) const;
   void setFirstDayOfWeek(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek);
   bool  isGridVisible(QCalendarWidget* theWrappedObject) const;
   void setWeekdayTextFormat(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek, const QTextCharFormat&  format);
   void setMinimumDate(QCalendarWidget* theWrappedObject, const QDate&  date);
   void setDateEditEnabled(QCalendarWidget* theWrappedObject, bool  enable);
   void resizeEvent(QCalendarWidget* theWrappedObject, QResizeEvent*  event);
   int  dateEditAcceptDelay(QCalendarWidget* theWrappedObject) const;
   bool  event(QCalendarWidget* theWrappedObject, QEvent*  event);
   void keyPressEvent(QCalendarWidget* theWrappedObject, QKeyEvent*  event);
   void setMaximumDate(QCalendarWidget* theWrappedObject, const QDate&  date);
   QDate  selectedDate(QCalendarWidget* theWrappedObject) const;
   QDate  maximumDate(QCalendarWidget* theWrappedObject) const;
   int  yearShown(QCalendarWidget* theWrappedObject) const;
   void setDateTextFormat(QCalendarWidget* theWrappedObject, const QDate&  date, const QTextCharFormat&  format);
   QDate  minimumDate(QCalendarWidget* theWrappedObject) const;
   void mousePressEvent(QCalendarWidget* theWrappedObject, QMouseEvent*  event);
};





class PythonQtShell_QCheckBox : public QCheckBox
{
public:
    PythonQtShell_QCheckBox(QWidget*  parent = 0):QCheckBox(parent),_wrapper(NULL) {};
    PythonQtShell_QCheckBox(const QString&  text, QWidget*  parent = 0):QCheckBox(text, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  e);
virtual void nextCheckState();
virtual void checkStateSet();
virtual bool  hitButton(const QPoint&  pos) const;
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  e);
virtual void changeEvent(QEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void timerEvent(QTimerEvent*  e);
virtual void focusOutEvent(QFocusEvent*  e);
virtual void keyPressEvent(QKeyEvent*  e);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCheckBox : public QCheckBox
{ public:
inline bool  promoted_event(QEvent*  e) { return QCheckBox::event(e); }
inline void promoted_nextCheckState() { QCheckBox::nextCheckState(); }
inline void promoted_checkStateSet() { QCheckBox::checkStateSet(); }
inline bool  promoted_hitButton(const QPoint&  pos) const { return QCheckBox::hitButton(pos); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QCheckBox::mouseMoveEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QCheckBox::paintEvent(arg__1); }
};

class PythonQtWrapper_QCheckBox : public QObject
{ Q_OBJECT
public:
public slots:
QCheckBox* new_QCheckBox(QWidget*  parent = 0);
QCheckBox* new_QCheckBox(const QString&  text, QWidget*  parent = 0);
void delete_QCheckBox(QCheckBox* obj) { delete obj; } 
   bool  event(QCheckBox* theWrappedObject, QEvent*  e);
   void nextCheckState(QCheckBox* theWrappedObject);
   void checkStateSet(QCheckBox* theWrappedObject);
   void setCheckState(QCheckBox* theWrappedObject, Qt::CheckState  state);
   bool  hitButton(QCheckBox* theWrappedObject, const QPoint&  pos) const;
   void setTristate(QCheckBox* theWrappedObject, bool  y = true);
   void mouseMoveEvent(QCheckBox* theWrappedObject, QMouseEvent*  arg__1);
   Qt::CheckState  checkState(QCheckBox* theWrappedObject) const;
   QSize  sizeHint(QCheckBox* theWrappedObject) const;
   bool  isTristate(QCheckBox* theWrappedObject) const;
   void paintEvent(QCheckBox* theWrappedObject, QPaintEvent*  arg__1);
};


