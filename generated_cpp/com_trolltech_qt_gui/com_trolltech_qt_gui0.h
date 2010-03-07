#include <PythonQt.h>
#include <QBasicTimer>
#include <QFont>
#include <QFontMetrics>
#include <QIcon>
#include <QLocale>
#include <QObject>
#include <QPalette>
#include <QSize>
#include <QStringList>
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
#include <qclipboard.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdesktopwidget.h>
#include <qdialog.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicstransform.h>
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
#include <qmargins.h>
#include <qmenu.h>
#include <qmimedata.h>
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
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual bool  hitButton(const QPoint&  pos) const;
virtual void focusInEvent(QFocusEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void checkStateSet();
virtual void changeEvent(QEvent*  e);
virtual void paintEvent(QPaintEvent*  e);
virtual bool  event(QEvent*  e);
virtual void keyPressEvent(QKeyEvent*  e);
virtual void focusOutEvent(QFocusEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
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
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractButton : public QAbstractButton
{ public:
inline void promoted_nextCheckState() { QAbstractButton::nextCheckState(); }
inline void promoted_timerEvent(QTimerEvent*  e) { QAbstractButton::timerEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QAbstractButton::mouseMoveEvent(e); }
inline bool  promoted_hitButton(const QPoint&  pos) const { return QAbstractButton::hitButton(pos); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QAbstractButton::focusInEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QAbstractButton::mouseReleaseEvent(e); }
inline void promoted_checkStateSet() { QAbstractButton::checkStateSet(); }
inline void promoted_changeEvent(QEvent*  e) { QAbstractButton::changeEvent(e); }
inline bool  promoted_event(QEvent*  e) { return QAbstractButton::event(e); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QAbstractButton::keyPressEvent(e); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QAbstractButton::focusOutEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QAbstractButton::keyReleaseEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QAbstractButton::mousePressEvent(e); }
};

class PythonQtWrapper_QAbstractButton : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractButton* new_QAbstractButton(QWidget*  parent = 0);
void delete_QAbstractButton(QAbstractButton* obj) { delete obj; } 
   int  autoRepeatDelay(QAbstractButton* theWrappedObject) const;
   bool  isDown(QAbstractButton* theWrappedObject) const;
   void setAutoExclusive(QAbstractButton* theWrappedObject, bool  arg__1);
   void setDown(QAbstractButton* theWrappedObject, bool  arg__1);
   bool  autoRepeat(QAbstractButton* theWrappedObject) const;
   bool  isChecked(QAbstractButton* theWrappedObject) const;
   void nextCheckState(QAbstractButton* theWrappedObject);
   void timerEvent(QAbstractButton* theWrappedObject, QTimerEvent*  e);
   bool  isCheckable(QAbstractButton* theWrappedObject) const;
   void setAutoRepeat(QAbstractButton* theWrappedObject, bool  arg__1);
   void mouseMoveEvent(QAbstractButton* theWrappedObject, QMouseEvent*  e);
   QKeySequence  shortcut(QAbstractButton* theWrappedObject) const;
   void setAutoRepeatDelay(QAbstractButton* theWrappedObject, int  arg__1);
   bool  hitButton(QAbstractButton* theWrappedObject, const QPoint&  pos) const;
   void setText(QAbstractButton* theWrappedObject, const QString&  text);
   void setShortcut(QAbstractButton* theWrappedObject, const QKeySequence&  key);
   QButtonGroup*  group(QAbstractButton* theWrappedObject) const;
   void focusInEvent(QAbstractButton* theWrappedObject, QFocusEvent*  e);
   void mouseReleaseEvent(QAbstractButton* theWrappedObject, QMouseEvent*  e);
   QSize  iconSize(QAbstractButton* theWrappedObject) const;
   int  autoRepeatInterval(QAbstractButton* theWrappedObject) const;
   void setCheckable(QAbstractButton* theWrappedObject, bool  arg__1);
   QIcon  icon(QAbstractButton* theWrappedObject) const;
   void setAutoRepeatInterval(QAbstractButton* theWrappedObject, int  arg__1);
   void checkStateSet(QAbstractButton* theWrappedObject);
   void changeEvent(QAbstractButton* theWrappedObject, QEvent*  e);
   void setIcon(QAbstractButton* theWrappedObject, const QIcon&  icon);
   bool  event(QAbstractButton* theWrappedObject, QEvent*  e);
   void keyPressEvent(QAbstractButton* theWrappedObject, QKeyEvent*  e);
   QString  text(QAbstractButton* theWrappedObject) const;
   void focusOutEvent(QAbstractButton* theWrappedObject, QFocusEvent*  e);
   void keyReleaseEvent(QAbstractButton* theWrappedObject, QKeyEvent*  e);
   bool  autoExclusive(QAbstractButton* theWrappedObject) const;
   void mousePressEvent(QAbstractButton* theWrappedObject, QMouseEvent*  e);
};





class PythonQtShell_QAbstractGraphicsShapeItem : public QAbstractGraphicsShapeItem
{
public:
    PythonQtShell_QAbstractGraphicsShapeItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QAbstractGraphicsShapeItem(parent, scene),_wrapper(NULL) {};

virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;
virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual bool  contains(const QPointF&  point) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
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
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
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

class PythonQtPublicPromoter_QAbstractGraphicsShapeItem : public QAbstractGraphicsShapeItem
{ public:
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QAbstractGraphicsShapeItem::isObscuredBy(item); }
inline QPainterPath  promoted_opaqueArea() const { return QAbstractGraphicsShapeItem::opaqueArea(); }
};

class PythonQtWrapper_QAbstractGraphicsShapeItem : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractGraphicsShapeItem* new_QAbstractGraphicsShapeItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QAbstractGraphicsShapeItem(QAbstractGraphicsShapeItem* obj) { delete obj; } 
   void setBrush(QAbstractGraphicsShapeItem* theWrappedObject, const QBrush&  brush);
   QPen  pen(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QBrush  brush(QAbstractGraphicsShapeItem* theWrappedObject) const;
   bool  isObscuredBy(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item) const;
   void setPen(QAbstractGraphicsShapeItem* theWrappedObject, const QPen&  pen);
   QPainterPath  opaqueArea(QAbstractGraphicsShapeItem* theWrappedObject) const;
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
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
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

virtual void horizontalScrollbarAction(int  action);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void focusOutEvent(QFocusEvent*  event);
virtual int  verticalOffset() const;
virtual QStyleOptionViewItem  viewOptions() const;
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual int  sizeHintForColumn(int  column) const;
virtual void keyboardSearch(const QString&  search);
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void commitData(QWidget*  editor);
virtual void setRootIndex(const QModelIndex&  index);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual int  sizeHintForRow(int  row) const;
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void updateEditorData();
virtual QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers);
virtual void horizontalScrollbarValueChanged(int  value);
virtual void reset();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void updateEditorGeometries();
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = 0) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void editorDestroyed(QObject*  editor);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void doItemsLayout();
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual int  horizontalOffset() const;
virtual void verticalScrollbarAction(int  action);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void setModel(QAbstractItemModel*  model);
virtual void verticalScrollbarValueChanged(int  value);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual bool  viewportEvent(QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual QModelIndex  indexAt(const QPoint&  point) const;
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual void updateGeometries();
virtual void selectAll();
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  event(QEvent*  event);
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void scrollContentsBy(int  dx, int  dy);
virtual void paintEvent(QPaintEvent*  arg__1);
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

class PythonQtPublicPromoter_QAbstractItemView : public QAbstractItemView
{ public:
inline void promoted_horizontalScrollbarAction(int  action) { QAbstractItemView::horizontalScrollbarAction(action); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QAbstractItemView::mouseMoveEvent(event); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QAbstractItemView::rowsInserted(parent, start, end); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QAbstractItemView::focusOutEvent(event); }
inline QStyleOptionViewItem  promoted_viewOptions() const { return QAbstractItemView::viewOptions(); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QAbstractItemView::currentChanged(current, previous); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QAbstractItemView::selectionChanged(selected, deselected); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  event) { QAbstractItemView::dragEnterEvent(event); }
inline int  promoted_sizeHintForColumn(int  column) const { return QAbstractItemView::sizeHintForColumn(column); }
inline void promoted_keyboardSearch(const QString&  search) { QAbstractItemView::keyboardSearch(search); }
inline void promoted_commitData(QWidget*  editor) { QAbstractItemView::commitData(editor); }
inline void promoted_setRootIndex(const QModelIndex&  index) { QAbstractItemView::setRootIndex(index); }
inline void promoted_closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) { QAbstractItemView::closeEditor(editor, hint); }
inline int  promoted_sizeHintForRow(int  row) const { return QAbstractItemView::sizeHintForRow(row); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QAbstractItemView::mouseReleaseEvent(event); }
inline bool  promoted_edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) { return QAbstractItemView::edit(index, trigger, event); }
inline void promoted_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QAbstractItemView::rowsAboutToBeRemoved(parent, start, end); }
inline void promoted_updateEditorData() { QAbstractItemView::updateEditorData(); }
inline void promoted_horizontalScrollbarValueChanged(int  value) { QAbstractItemView::horizontalScrollbarValueChanged(value); }
inline void promoted_reset() { QAbstractItemView::reset(); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return QAbstractItemView::selectedIndexes(); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { QAbstractItemView::dragMoveEvent(event); }
inline void promoted_startDrag(Qt::DropActions  supportedActions) { QAbstractItemView::startDrag(supportedActions); }
inline void promoted_updateEditorGeometries() { QAbstractItemView::updateEditorGeometries(); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { QAbstractItemView::mouseDoubleClickEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QAbstractItemView::resizeEvent(event); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  event) { QAbstractItemView::dragLeaveEvent(event); }
inline void promoted_dropEvent(QDropEvent*  event) { QAbstractItemView::dropEvent(event); }
inline QItemSelectionModel::SelectionFlags  promoted_selectionCommand(const QModelIndex&  index, const QEvent*  event = 0) const { return QAbstractItemView::selectionCommand(index, event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QAbstractItemView::focusInEvent(event); }
inline void promoted_editorDestroyed(QObject*  editor) { QAbstractItemView::editorDestroyed(editor); }
inline void promoted_setSelectionModel(QItemSelectionModel*  selectionModel) { QAbstractItemView::setSelectionModel(selectionModel); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QAbstractItemView::keyPressEvent(event); }
inline void promoted_doItemsLayout() { QAbstractItemView::doItemsLayout(); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QAbstractItemView::inputMethodEvent(event); }
inline void promoted_verticalScrollbarAction(int  action) { QAbstractItemView::verticalScrollbarAction(action); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QAbstractItemView::mousePressEvent(event); }
inline void promoted_setModel(QAbstractItemModel*  model) { QAbstractItemView::setModel(model); }
inline void promoted_verticalScrollbarValueChanged(int  value) { QAbstractItemView::verticalScrollbarValueChanged(value); }
inline bool  promoted_viewportEvent(QEvent*  event) { return QAbstractItemView::viewportEvent(event); }
inline void promoted_timerEvent(QTimerEvent*  event) { QAbstractItemView::timerEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QAbstractItemView::focusNextPrevChild(next); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight) { QAbstractItemView::dataChanged(topLeft, bottomRight); }
inline void promoted_updateGeometries() { QAbstractItemView::updateGeometries(); }
inline void promoted_selectAll() { QAbstractItemView::selectAll(); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QAbstractItemView::inputMethodQuery(query); }
inline bool  promoted_event(QEvent*  event) { return QAbstractItemView::event(event); }
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
   void mouseMoveEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event);
   void focusOutEvent(QAbstractItemView* theWrappedObject, QFocusEvent*  event);
   QStyleOptionViewItem  viewOptions(QAbstractItemView* theWrappedObject) const;
   void closePersistentEditor(QAbstractItemView* theWrappedObject, const QModelIndex&  index);
   bool  alternatingRowColors(QAbstractItemView* theWrappedObject) const;
   void setDropIndicatorShown(QAbstractItemView* theWrappedObject, bool  enable);
   Qt::DropAction  defaultDropAction(QAbstractItemView* theWrappedObject) const;
   void setAutoScroll(QAbstractItemView* theWrappedObject, bool  enable);
   void dragEnterEvent(QAbstractItemView* theWrappedObject, QDragEnterEvent*  event);
   void setSelectionMode(QAbstractItemView* theWrappedObject, QAbstractItemView::SelectionMode  mode);
   void setAutoScrollMargin(QAbstractItemView* theWrappedObject, int  margin);
   void setEditTriggers(QAbstractItemView* theWrappedObject, QAbstractItemView::EditTriggers  triggers);
   void openPersistentEditor(QAbstractItemView* theWrappedObject, const QModelIndex&  index);
   void setTextElideMode(QAbstractItemView* theWrappedObject, Qt::TextElideMode  mode);
   int  sizeHintForColumn(QAbstractItemView* theWrappedObject, int  column) const;
   void keyboardSearch(QAbstractItemView* theWrappedObject, const QString&  search);
   QWidget*  indexWidget(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   int  sizeHintForRow(QAbstractItemView* theWrappedObject, int  row) const;
   void setTabKeyNavigation(QAbstractItemView* theWrappedObject, bool  enable);
   void mouseReleaseEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event);
   bool  edit(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
   void setAlternatingRowColors(QAbstractItemView* theWrappedObject, bool  enable);
   void setVerticalScrollMode(QAbstractItemView* theWrappedObject, QAbstractItemView::ScrollMode  mode);
   void setDefaultDropAction(QAbstractItemView* theWrappedObject, Qt::DropAction  dropAction);
   void setItemDelegateForRow(QAbstractItemView* theWrappedObject, int  row, QAbstractItemDelegate*  delegate);
   bool  showDropIndicator(QAbstractItemView* theWrappedObject) const;
   QAbstractItemView::SelectionMode  selectionMode(QAbstractItemView* theWrappedObject) const;
   QSize  sizeHintForIndex(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   void setDragDropOverwriteMode(QAbstractItemView* theWrappedObject, bool  overwrite);
   QList<QModelIndex >  selectedIndexes(QAbstractItemView* theWrappedObject) const;
   void dragMoveEvent(QAbstractItemView* theWrappedObject, QDragMoveEvent*  event);
   void setIconSize(QAbstractItemView* theWrappedObject, const QSize&  size);
   void startDrag(QAbstractItemView* theWrappedObject, Qt::DropActions  supportedActions);
   void setDragEnabled(QAbstractItemView* theWrappedObject, bool  enable);
   void mouseDoubleClickEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event);
   QAbstractItemDelegate*  itemDelegateForRow(QAbstractItemView* theWrappedObject, int  row) const;
   void resizeEvent(QAbstractItemView* theWrappedObject, QResizeEvent*  event);
   bool  dragDropOverwriteMode(QAbstractItemView* theWrappedObject) const;
   QAbstractItemView::ScrollMode  horizontalScrollMode(QAbstractItemView* theWrappedObject) const;
   void dragLeaveEvent(QAbstractItemView* theWrappedObject, QDragLeaveEvent*  event);
   QSize  iconSize(QAbstractItemView* theWrappedObject) const;
   void dropEvent(QAbstractItemView* theWrappedObject, QDropEvent*  event);
   void setDragDropMode(QAbstractItemView* theWrappedObject, QAbstractItemView::DragDropMode  behavior);
   QModelIndex  currentIndex(QAbstractItemView* theWrappedObject) const;
   QAbstractItemView::ScrollMode  verticalScrollMode(QAbstractItemView* theWrappedObject) const;
   QItemSelectionModel::SelectionFlags  selectionCommand(QAbstractItemView* theWrappedObject, const QModelIndex&  index, const QEvent*  event = 0) const;
   void focusInEvent(QAbstractItemView* theWrappedObject, QFocusEvent*  event);
   QItemSelectionModel*  selectionModel(QAbstractItemView* theWrappedObject) const;
   void setSelectionModel(QAbstractItemView* theWrappedObject, QItemSelectionModel*  selectionModel);
   QAbstractItemView::EditTriggers  editTriggers(QAbstractItemView* theWrappedObject) const;
   void keyPressEvent(QAbstractItemView* theWrappedObject, QKeyEvent*  event);
   void inputMethodEvent(QAbstractItemView* theWrappedObject, QInputMethodEvent*  event);
   bool  dragEnabled(QAbstractItemView* theWrappedObject) const;
   void setItemDelegate(QAbstractItemView* theWrappedObject, QAbstractItemDelegate*  delegate);
   bool  tabKeyNavigation(QAbstractItemView* theWrappedObject) const;
   QAbstractItemDelegate*  itemDelegate(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   QAbstractItemDelegate*  itemDelegate(QAbstractItemView* theWrappedObject) const;
   void setHorizontalScrollMode(QAbstractItemView* theWrappedObject, QAbstractItemView::ScrollMode  mode);
   QAbstractItemView::SelectionBehavior  selectionBehavior(QAbstractItemView* theWrappedObject) const;
   void mousePressEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event);
   void setModel(QAbstractItemView* theWrappedObject, QAbstractItemModel*  model);
   QAbstractItemModel*  model(QAbstractItemView* theWrappedObject) const;
   Qt::TextElideMode  textElideMode(QAbstractItemView* theWrappedObject) const;
   int  autoScrollMargin(QAbstractItemView* theWrappedObject) const;
   QModelIndex  rootIndex(QAbstractItemView* theWrappedObject) const;
   bool  viewportEvent(QAbstractItemView* theWrappedObject, QEvent*  event);
   void timerEvent(QAbstractItemView* theWrappedObject, QTimerEvent*  event);
   bool  focusNextPrevChild(QAbstractItemView* theWrappedObject, bool  next);
   QAbstractItemView::DragDropMode  dragDropMode(QAbstractItemView* theWrappedObject) const;
   bool  hasAutoScroll(QAbstractItemView* theWrappedObject) const;
   void setItemDelegateForColumn(QAbstractItemView* theWrappedObject, int  column, QAbstractItemDelegate*  delegate);
   void setSelectionBehavior(QAbstractItemView* theWrappedObject, QAbstractItemView::SelectionBehavior  behavior);
   QVariant  inputMethodQuery(QAbstractItemView* theWrappedObject, Qt::InputMethodQuery  query) const;
   bool  event(QAbstractItemView* theWrappedObject, QEvent*  event);
   void setIndexWidget(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QWidget*  widget);
   QAbstractItemDelegate*  itemDelegateForColumn(QAbstractItemView* theWrappedObject, int  column) const;
};





class PythonQtShell_QAbstractPageSetupDialog : public QAbstractPageSetupDialog
{
public:
    PythonQtShell_QAbstractPageSetupDialog(QPrinter*  printer, QWidget*  parent = 0):QAbstractPageSetupDialog(printer, parent),_wrapper(NULL) {};

virtual void done(int  result);
virtual int  exec();
virtual void showEvent(QShowEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void reject();
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void accept();
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual int  devType() const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractPageSetupDialog : public QAbstractPageSetupDialog
{ public:
inline void promoted_done(int  result) { QAbstractPageSetupDialog::done(result); }
};

class PythonQtWrapper_QAbstractPageSetupDialog : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractPageSetupDialog* new_QAbstractPageSetupDialog(QPrinter*  printer, QWidget*  parent = 0);
void delete_QAbstractPageSetupDialog(QAbstractPageSetupDialog* obj) { delete obj; } 
   void done(QAbstractPageSetupDialog* theWrappedObject, int  result);
   QPrinter*  printer(QAbstractPageSetupDialog* theWrappedObject);
};





class PythonQtShell_QAbstractPrintDialog : public QAbstractPrintDialog
{
public:
    PythonQtShell_QAbstractPrintDialog(QPrinter*  printer, QWidget*  parent = 0):QAbstractPrintDialog(printer, parent),_wrapper(NULL) {};

virtual int  exec();
virtual void showEvent(QShowEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void reject();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void done(int  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void accept();
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual int  devType() const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
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
   int  maxPage(QAbstractPrintDialog* theWrappedObject) const;
   void setFromTo(QAbstractPrintDialog* theWrappedObject, int  fromPage, int  toPage);
   void setPrintRange(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintRange  range);
   void setOptionTabs(QAbstractPrintDialog* theWrappedObject, const QList<QWidget* >&  tabs);
   bool  isOptionEnabled(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOption  option) const;
   QAbstractPrintDialog::PrintRange  printRange(QAbstractPrintDialog* theWrappedObject) const;
   QPrinter*  printer(QAbstractPrintDialog* theWrappedObject) const;
   QAbstractPrintDialog::PrintDialogOptions  enabledOptions(QAbstractPrintDialog* theWrappedObject) const;
   void setMinMax(QAbstractPrintDialog* theWrappedObject, int  min, int  max);
   void addEnabledOption(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOption  option);
   int  minPage(QAbstractPrintDialog* theWrappedObject) const;
   void setEnabledOptions(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOptions  options);
   int  fromPage(QAbstractPrintDialog* theWrappedObject) const;
};





class PythonQtShell_QAbstractScrollArea : public QAbstractScrollArea
{
public:
    PythonQtShell_QAbstractScrollArea(QWidget*  parent = 0):QAbstractScrollArea(parent),_wrapper(NULL) {};

virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
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
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractScrollArea : public QAbstractScrollArea
{ public:
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QAbstractScrollArea::wheelEvent(arg__1); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QAbstractScrollArea::scrollContentsBy(dx, dy); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mouseMoveEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mouseDoubleClickEvent(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { QAbstractScrollArea::dropEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QAbstractScrollArea::contextMenuEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mouseReleaseEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QAbstractScrollArea::dragLeaveEvent(arg__1); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QAbstractScrollArea::dragEnterEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { QAbstractScrollArea::dragMoveEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QAbstractScrollArea::paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QAbstractScrollArea::resizeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QAbstractScrollArea::event(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QAbstractScrollArea::keyPressEvent(arg__1); }
inline bool  promoted_viewportEvent(QEvent*  arg__1) { return QAbstractScrollArea::viewportEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mousePressEvent(arg__1); }
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
   Qt::ScrollBarPolicy  verticalScrollBarPolicy(QAbstractScrollArea* theWrappedObject) const;
   QSize  sizeHint(QAbstractScrollArea* theWrappedObject) const;
   void scrollContentsBy(QAbstractScrollArea* theWrappedObject, int  dx, int  dy);
   QWidget*  cornerWidget(QAbstractScrollArea* theWrappedObject) const;
   void mouseMoveEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1);
   void mouseDoubleClickEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1);
   Qt::ScrollBarPolicy  horizontalScrollBarPolicy(QAbstractScrollArea* theWrappedObject) const;
   void dropEvent(QAbstractScrollArea* theWrappedObject, QDropEvent*  arg__1);
   void contextMenuEvent(QAbstractScrollArea* theWrappedObject, QContextMenuEvent*  arg__1);
   QScrollBar*  verticalScrollBar(QAbstractScrollArea* theWrappedObject) const;
   void mouseReleaseEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1);
   void setVerticalScrollBar(QAbstractScrollArea* theWrappedObject, QScrollBar*  scrollbar);
   QWidget*  viewport(QAbstractScrollArea* theWrappedObject) const;
   void setViewport(QAbstractScrollArea* theWrappedObject, QWidget*  widget);
   void dragLeaveEvent(QAbstractScrollArea* theWrappedObject, QDragLeaveEvent*  arg__1);
   QList<QWidget* >  scrollBarWidgets(QAbstractScrollArea* theWrappedObject, Qt::Alignment  alignment);
   void setHorizontalScrollBarPolicy(QAbstractScrollArea* theWrappedObject, Qt::ScrollBarPolicy  arg__1);
   void dragEnterEvent(QAbstractScrollArea* theWrappedObject, QDragEnterEvent*  arg__1);
   void addScrollBarWidget(QAbstractScrollArea* theWrappedObject, QWidget*  widget, Qt::Alignment  alignment);
   void dragMoveEvent(QAbstractScrollArea* theWrappedObject, QDragMoveEvent*  arg__1);
   void paintEvent(QAbstractScrollArea* theWrappedObject, QPaintEvent*  arg__1);
   void resizeEvent(QAbstractScrollArea* theWrappedObject, QResizeEvent*  arg__1);
   QSize  minimumSizeHint(QAbstractScrollArea* theWrappedObject) const;
   bool  event(QAbstractScrollArea* theWrappedObject, QEvent*  arg__1);
   void keyPressEvent(QAbstractScrollArea* theWrappedObject, QKeyEvent*  arg__1);
   bool  viewportEvent(QAbstractScrollArea* theWrappedObject, QEvent*  arg__1);
   void setCornerWidget(QAbstractScrollArea* theWrappedObject, QWidget*  widget);
   void setHorizontalScrollBar(QAbstractScrollArea* theWrappedObject, QScrollBar*  scrollbar);
   void mousePressEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1);
};





class PythonQtShell_QAbstractSlider : public QAbstractSlider
{
public:
    PythonQtShell_QAbstractSlider(QWidget*  parent = 0):QAbstractSlider(parent),_wrapper(NULL) {};

virtual void wheelEvent(QWheelEvent*  e);
virtual void sliderChange(QAbstractSlider::SliderChange  change);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual bool  event(QEvent*  e);
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual int  devType() const;
virtual QSize  minimumSizeHint() const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractSlider : public QAbstractSlider
{ public:
inline void promoted_wheelEvent(QWheelEvent*  e) { QAbstractSlider::wheelEvent(e); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QAbstractSlider::timerEvent(arg__1); }
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
   void wheelEvent(QAbstractSlider* theWrappedObject, QWheelEvent*  e);
   void triggerAction(QAbstractSlider* theWrappedObject, QAbstractSlider::SliderAction  action);
   bool  hasTracking(QAbstractSlider* theWrappedObject) const;
   void setInvertedControls(QAbstractSlider* theWrappedObject, bool  arg__1);
   int  minimum(QAbstractSlider* theWrappedObject) const;
   void timerEvent(QAbstractSlider* theWrappedObject, QTimerEvent*  arg__1);
   bool  invertedControls(QAbstractSlider* theWrappedObject) const;
   bool  isSliderDown(QAbstractSlider* theWrappedObject) const;
   int  sliderPosition(QAbstractSlider* theWrappedObject) const;
   int  singleStep(QAbstractSlider* theWrappedObject) const;
   void setMinimum(QAbstractSlider* theWrappedObject, int  arg__1);
   void setSliderPosition(QAbstractSlider* theWrappedObject, int  arg__1);
   void setSliderDown(QAbstractSlider* theWrappedObject, bool  arg__1);
   void setPageStep(QAbstractSlider* theWrappedObject, int  arg__1);
   Qt::Orientation  orientation(QAbstractSlider* theWrappedObject) const;
   void setInvertedAppearance(QAbstractSlider* theWrappedObject, bool  arg__1);
   int  pageStep(QAbstractSlider* theWrappedObject) const;
   int  maximum(QAbstractSlider* theWrappedObject) const;
   void changeEvent(QAbstractSlider* theWrappedObject, QEvent*  e);
   void setTracking(QAbstractSlider* theWrappedObject, bool  enable);
   void setSingleStep(QAbstractSlider* theWrappedObject, int  arg__1);
   int  value(QAbstractSlider* theWrappedObject) const;
   bool  invertedAppearance(QAbstractSlider* theWrappedObject) const;
   bool  event(QAbstractSlider* theWrappedObject, QEvent*  e);
   void keyPressEvent(QAbstractSlider* theWrappedObject, QKeyEvent*  ev);
   void setMaximum(QAbstractSlider* theWrappedObject, int  arg__1);
   void setRange(QAbstractSlider* theWrappedObject, int  min, int  max);
};





class PythonQtShell_QAbstractSpinBox : public QAbstractSpinBox
{
public:
    PythonQtShell_QAbstractSpinBox(QWidget*  parent = 0):QAbstractSpinBox(parent),_wrapper(NULL) {};

virtual void stepBy(int  steps);
virtual void clear();
virtual void wheelEvent(QWheelEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void fixup(QString&  input) const;
virtual void hideEvent(QHideEvent*  event);
virtual QAbstractSpinBox::StepEnabled  stepEnabled() const;
virtual void changeEvent(QEvent*  event);
virtual void paintEvent(QPaintEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual bool  event(QEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual void dropEvent(QDropEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractSpinBox : public QAbstractSpinBox
{ public:
inline void promoted_stepBy(int  steps) { QAbstractSpinBox::stepBy(steps); }
inline void promoted_clear() { QAbstractSpinBox::clear(); }
inline void promoted_wheelEvent(QWheelEvent*  event) { QAbstractSpinBox::wheelEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QAbstractSpinBox::showEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QAbstractSpinBox::mouseMoveEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { QAbstractSpinBox::closeEvent(event); }
inline void promoted_timerEvent(QTimerEvent*  event) { QAbstractSpinBox::timerEvent(event); }
inline QValidator::State  promoted_validate(QString&  input, int&  pos) const { return QAbstractSpinBox::validate(input, pos); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QAbstractSpinBox::inputMethodQuery(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QAbstractSpinBox::focusInEvent(event); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { QAbstractSpinBox::contextMenuEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QAbstractSpinBox::mouseReleaseEvent(event); }
inline void promoted_fixup(QString&  input) const { QAbstractSpinBox::fixup(input); }
inline void promoted_hideEvent(QHideEvent*  event) { QAbstractSpinBox::hideEvent(event); }
inline QAbstractSpinBox::StepEnabled  promoted_stepEnabled() const { return QAbstractSpinBox::stepEnabled(); }
inline void promoted_changeEvent(QEvent*  event) { QAbstractSpinBox::changeEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QAbstractSpinBox::paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QAbstractSpinBox::resizeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QAbstractSpinBox::event(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QAbstractSpinBox::keyPressEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QAbstractSpinBox::focusOutEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QAbstractSpinBox::keyReleaseEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QAbstractSpinBox::mousePressEvent(event); }
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
   bool  isAccelerated(QAbstractSpinBox* theWrappedObject) const;
   void stepBy(QAbstractSpinBox* theWrappedObject, int  steps);
   QString  specialValueText(QAbstractSpinBox* theWrappedObject) const;
   void interpretText(QAbstractSpinBox* theWrappedObject);
   void wheelEvent(QAbstractSpinBox* theWrappedObject, QWheelEvent*  event);
   bool  wrapping(QAbstractSpinBox* theWrappedObject) const;
   bool  keyboardTracking(QAbstractSpinBox* theWrappedObject) const;
   void setButtonSymbols(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::ButtonSymbols  bs);
   bool  isReadOnly(QAbstractSpinBox* theWrappedObject) const;
   QSize  sizeHint(QAbstractSpinBox* theWrappedObject) const;
   void setCorrectionMode(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::CorrectionMode  cm);
   void showEvent(QAbstractSpinBox* theWrappedObject, QShowEvent*  event);
   void mouseMoveEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event);
   void setAccelerated(QAbstractSpinBox* theWrappedObject, bool  on);
   void closeEvent(QAbstractSpinBox* theWrappedObject, QCloseEvent*  event);
   void timerEvent(QAbstractSpinBox* theWrappedObject, QTimerEvent*  event);
   QValidator::State  validate(QAbstractSpinBox* theWrappedObject, QString&  input, int&  pos) const;
   void setWrapping(QAbstractSpinBox* theWrappedObject, bool  w);
   Qt::Alignment  alignment(QAbstractSpinBox* theWrappedObject) const;
   QAbstractSpinBox::CorrectionMode  correctionMode(QAbstractSpinBox* theWrappedObject) const;
   QVariant  inputMethodQuery(QAbstractSpinBox* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void focusInEvent(QAbstractSpinBox* theWrappedObject, QFocusEvent*  event);
   void contextMenuEvent(QAbstractSpinBox* theWrappedObject, QContextMenuEvent*  event);
   void mouseReleaseEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event);
   void setSpecialValueText(QAbstractSpinBox* theWrappedObject, const QString&  txt);
   void fixup(QAbstractSpinBox* theWrappedObject, QString&  input) const;
   QAbstractSpinBox::ButtonSymbols  buttonSymbols(QAbstractSpinBox* theWrappedObject) const;
   void hideEvent(QAbstractSpinBox* theWrappedObject, QHideEvent*  event);
   bool  hasAcceptableInput(QAbstractSpinBox* theWrappedObject) const;
   QAbstractSpinBox::StepEnabled  stepEnabled(QAbstractSpinBox* theWrappedObject) const;
   void changeEvent(QAbstractSpinBox* theWrappedObject, QEvent*  event);
   void setReadOnly(QAbstractSpinBox* theWrappedObject, bool  r);
   void paintEvent(QAbstractSpinBox* theWrappedObject, QPaintEvent*  event);
   bool  hasFrame(QAbstractSpinBox* theWrappedObject) const;
   void setKeyboardTracking(QAbstractSpinBox* theWrappedObject, bool  kt);
   void setAlignment(QAbstractSpinBox* theWrappedObject, Qt::Alignment  flag);
   void resizeEvent(QAbstractSpinBox* theWrappedObject, QResizeEvent*  event);
   QSize  minimumSizeHint(QAbstractSpinBox* theWrappedObject) const;
   bool  event(QAbstractSpinBox* theWrappedObject, QEvent*  event);
   void keyPressEvent(QAbstractSpinBox* theWrappedObject, QKeyEvent*  event);
   QString  text(QAbstractSpinBox* theWrappedObject) const;
   void focusOutEvent(QAbstractSpinBox* theWrappedObject, QFocusEvent*  event);
   void keyReleaseEvent(QAbstractSpinBox* theWrappedObject, QKeyEvent*  event);
   void setFrame(QAbstractSpinBox* theWrappedObject, bool  arg__1);
   void mousePressEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event);
};





class PythonQtShell_QAbstractTableModel : public QAbstractTableModel
{
public:
    PythonQtShell_QAbstractTableModel(QObject*  parent = 0):QAbstractTableModel(parent),_wrapper(NULL) {};

virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  submit();
virtual QStringList  mimeTypes() const;
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual Qt::DropActions  supportedDropActions() const;
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role);
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent);
virtual QSize  span(const QModelIndex&  index) const;
virtual void fetchMore(const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const;
virtual void revert();
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role) const;
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual int  columnCount(const QModelIndex&  parent) const;
virtual int  rowCount(const QModelIndex&  parent) const;
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent);
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent);
virtual QVariant  data(const QModelIndex&  index, int  role) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role);
virtual void sort(int  column, Qt::SortOrder  order);
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractTableModel : public QAbstractTableModel
{ public:
inline QModelIndex  promoted_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QAbstractTableModel::index(row, column, parent); }
inline bool  promoted_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractTableModel::dropMimeData(data, action, row, column, parent); }
};

class PythonQtWrapper_QAbstractTableModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractTableModel* new_QAbstractTableModel(QObject*  parent = 0);
void delete_QAbstractTableModel(QAbstractTableModel* obj) { delete obj; } 
   QModelIndex  index(QAbstractTableModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   bool  dropMimeData(QAbstractTableModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
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
virtual int  childAt(int  x, int  y) const;
virtual QString  text(QAccessible::Text  t, int  child) const;
virtual int  indexOfChild(const QAccessibleInterface*  arg__1) const;
virtual QAccessible::State  state(int  child) const;
virtual QAccessible::Role  role(int  child) const;
virtual int  childCount() const;
virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params = QVariantList());
virtual QRect  rect(int  child) const;
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

virtual QVariant  invokeMethodEx(QAccessible::Method  method, int  child, const QList<QVariant >&  params);
virtual QVariant  virtual_hook(const QVariant&  data);
virtual QString  text(QAccessible::Text  t, int  child) const;
virtual void setText(QAccessible::Text  t, int  child, const QString&  text);
virtual int  indexOfChild(const QAccessibleInterface*  arg__1) const;
virtual QRect  rect(int  child) const;
virtual QAccessible::Relation  relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const;
virtual int  childAt(int  x, int  y) const;
virtual QAccessible::Role  role(int  child) const;
virtual int  childCount() const;
virtual int  userActionCount(int  child) const;
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params);
virtual QObject*  object() const;
virtual QAccessible::State  state(int  child) const;
virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual bool  isValid() const;
virtual int  navigate(QAccessible::RelationFlag  relation, int  index, QAccessibleInterface**  iface) const;

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

virtual QRect  rect(int  child) const;
virtual bool  isValid() const;
virtual int  userActionCount(int  child) const;
virtual QObject*  object() const;
virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual void setText(QAccessible::Text  t, int  child, const QString&  text);
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params);
virtual QString  text(QAccessible::Text  t, int  child) const;
virtual int  childAt(int  x, int  y) const;
virtual int  indexOfChild(const QAccessibleInterface*  arg__1) const;
virtual QAccessible::Relation  relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const;
virtual int  childCount() const;
virtual QAccessible::Role  role(int  child) const;
virtual QAccessible::State  state(int  child) const;
virtual int  navigate(QAccessible::RelationFlag  relation, int  index, QAccessibleInterface**  iface) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAccessibleObject : public QAccessibleObject
{ public:
inline QRect  promoted_rect(int  child) const { return QAccessibleObject::rect(child); }
inline bool  promoted_isValid() const { return QAccessibleObject::isValid(); }
inline int  promoted_userActionCount(int  child) const { return QAccessibleObject::userActionCount(child); }
inline QObject*  promoted_object() const { return QAccessibleObject::object(); }
inline QString  promoted_actionText(int  action, QAccessible::Text  t, int  child) const { return QAccessibleObject::actionText(action, t, child); }
inline void promoted_setText(QAccessible::Text  t, int  child, const QString&  text) { QAccessibleObject::setText(t, child, text); }
inline bool  promoted_doAction(int  action, int  child, const QList<QVariant >&  params) { return QAccessibleObject::doAction(action, child, params); }
};

class PythonQtWrapper_QAccessibleObject : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleObject* new_QAccessibleObject(QObject*  object);
   QRect  rect(QAccessibleObject* theWrappedObject, int  child) const;
   bool  isValid(QAccessibleObject* theWrappedObject) const;
   int  userActionCount(QAccessibleObject* theWrappedObject, int  child) const;
   QObject*  object(QAccessibleObject* theWrappedObject) const;
   QString  actionText(QAccessibleObject* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   void setText(QAccessibleObject* theWrappedObject, QAccessible::Text  t, int  child, const QString&  text);
   bool  doAction(QAccessibleObject* theWrappedObject, int  action, int  child, const QList<QVariant >&  params);
};





class PythonQtShell_QAccessibleObjectEx : public QAccessibleObjectEx
{
public:
    PythonQtShell_QAccessibleObjectEx(QObject*  object):QAccessibleObjectEx(object),_wrapper(NULL) {};

virtual bool  isValid() const;
virtual QRect  rect(int  child) const;
virtual QObject*  object() const;
virtual int  userActionCount(int  child) const;
virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual void setText(QAccessible::Text  t, int  child, const QString&  text);
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params);
virtual QVariant  virtual_hook(const QVariant&  data);
virtual int  indexOfChild(const QAccessibleInterface*  arg__1) const;
virtual QVariant  invokeMethodEx(QAccessible::Method  method, int  child, const QList<QVariant >&  params);
virtual QString  text(QAccessible::Text  t, int  child) const;
virtual QAccessible::Relation  relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const;
virtual int  childAt(int  x, int  y) const;
virtual int  childCount() const;
virtual QAccessible::Role  role(int  child) const;
virtual QAccessible::State  state(int  child) const;
virtual int  navigate(QAccessible::RelationFlag  relation, int  index, QAccessibleInterface**  iface) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAccessibleObjectEx : public QAccessibleObjectEx
{ public:
inline bool  promoted_isValid() const { return QAccessibleObjectEx::isValid(); }
inline QRect  promoted_rect(int  child) const { return QAccessibleObjectEx::rect(child); }
inline QObject*  promoted_object() const { return QAccessibleObjectEx::object(); }
inline int  promoted_userActionCount(int  child) const { return QAccessibleObjectEx::userActionCount(child); }
inline QString  promoted_actionText(int  action, QAccessible::Text  t, int  child) const { return QAccessibleObjectEx::actionText(action, t, child); }
inline void promoted_setText(QAccessible::Text  t, int  child, const QString&  text) { QAccessibleObjectEx::setText(t, child, text); }
inline bool  promoted_doAction(int  action, int  child, const QList<QVariant >&  params) { return QAccessibleObjectEx::doAction(action, child, params); }
};

class PythonQtWrapper_QAccessibleObjectEx : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleObjectEx* new_QAccessibleObjectEx(QObject*  object);
   bool  isValid(QAccessibleObjectEx* theWrappedObject) const;
   QRect  rect(QAccessibleObjectEx* theWrappedObject, int  child) const;
   QObject*  object(QAccessibleObjectEx* theWrappedObject) const;
   int  userActionCount(QAccessibleObjectEx* theWrappedObject, int  child) const;
   QString  actionText(QAccessibleObjectEx* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   void setText(QAccessibleObjectEx* theWrappedObject, QAccessible::Text  t, int  child, const QString&  text);
   bool  doAction(QAccessibleObjectEx* theWrappedObject, int  action, int  child, const QList<QVariant >&  params);
};





class PythonQtShell_QAccessiblePlugin : public QAccessiblePlugin
{
public:
    PythonQtShell_QAccessiblePlugin(QObject*  parent = 0):QAccessiblePlugin(parent),_wrapper(NULL) {};

virtual QStringList  keys() const;
virtual QAccessibleInterface*  create(const QString&  key, QObject*  object);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
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

virtual int  rowIndex(int  childIndex);
virtual int  selectedColumnCount();
virtual int  columnSpan(int  row, int  column);
virtual bool  isSelected(int  row, int  column);
virtual QAccessibleInterface*  summary();
virtual void cellAtIndex(int  index, int*  row, int*  column, int*  rowSpan, int*  columnSpan, bool*  isSelected);
virtual QAccessibleInterface*  rowHeader();
virtual void selectColumn(int  column);
virtual int  selectedColumns(int  maxColumns, QList<int >*  columns);
virtual QAccessibleInterface*  caption();
virtual QString  columnDescription(int  column);
virtual QAccessibleInterface*  columnHeader();
virtual QString  rowDescription(int  row);
virtual int  columnCount();
virtual bool  isRowSelected(int  row);
virtual void selectRow(int  row);
virtual void unselectRow(int  row);
virtual int  selectedRows(int  maxRows, QList<int >*  rows);
virtual int  rowSpan(int  row, int  column);
virtual int  rowCount();
virtual QAccessibleInterface*  accessibleAt(int  row, int  column);
virtual void unselectColumn(int  column);
virtual bool  isColumnSelected(int  column);
virtual int  childIndex(int  rowIndex, int  columnIndex);
virtual int  columnIndex(int  childIndex);
virtual int  selectedRowCount();

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

virtual int  navigate(QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const;
virtual int  userActionCount(int  child) const;
virtual QAccessible::Relation  relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const;
virtual QString  text(QAccessible::Text  t, int  child) const;
virtual int  childAt(int  x, int  y) const;
virtual int  indexOfChild(const QAccessibleInterface*  child) const;
virtual QAccessible::State  state(int  child) const;
virtual QAccessible::Role  role(int  child) const;
virtual int  childCount() const;
virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params);
virtual QRect  rect(int  child) const;
virtual bool  isValid() const;
virtual void setText(QAccessible::Text  t, int  child, const QString&  text);
virtual QObject*  object() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAccessibleWidget : public QAccessibleWidget
{ public:
inline int  promoted_navigate(QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const { return QAccessibleWidget::navigate(rel, entry, target); }
inline int  promoted_userActionCount(int  child) const { return QAccessibleWidget::userActionCount(child); }
inline QAccessible::Relation  promoted_relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const { return QAccessibleWidget::relationTo(child, other, otherChild); }
inline QString  promoted_text(QAccessible::Text  t, int  child) const { return QAccessibleWidget::text(t, child); }
inline int  promoted_childAt(int  x, int  y) const { return QAccessibleWidget::childAt(x, y); }
inline int  promoted_indexOfChild(const QAccessibleInterface*  child) const { return QAccessibleWidget::indexOfChild(child); }
inline QAccessible::State  promoted_state(int  child) const { return QAccessibleWidget::state(child); }
inline QAccessible::Role  promoted_role(int  child) const { return QAccessibleWidget::role(child); }
inline int  promoted_childCount() const { return QAccessibleWidget::childCount(); }
inline QString  promoted_actionText(int  action, QAccessible::Text  t, int  child) const { return QAccessibleWidget::actionText(action, t, child); }
inline bool  promoted_doAction(int  action, int  child, const QList<QVariant >&  params) { return QAccessibleWidget::doAction(action, child, params); }
inline QRect  promoted_rect(int  child) const { return QAccessibleWidget::rect(child); }
};

class PythonQtWrapper_QAccessibleWidget : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleWidget* new_QAccessibleWidget(QWidget*  o, QAccessible::Role  r = QAccessible::Client, const QString&  name = QString());
   int  navigate(QAccessibleWidget* theWrappedObject, QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const;
   int  userActionCount(QAccessibleWidget* theWrappedObject, int  child) const;
   QAccessible::Relation  relationTo(QAccessibleWidget* theWrappedObject, int  child, const QAccessibleInterface*  other, int  otherChild) const;
   QString  text(QAccessibleWidget* theWrappedObject, QAccessible::Text  t, int  child) const;
   int  childAt(QAccessibleWidget* theWrappedObject, int  x, int  y) const;
   int  indexOfChild(QAccessibleWidget* theWrappedObject, const QAccessibleInterface*  child) const;
   QAccessible::State  state(QAccessibleWidget* theWrappedObject, int  child) const;
   QAccessible::Role  role(QAccessibleWidget* theWrappedObject, int  child) const;
   int  childCount(QAccessibleWidget* theWrappedObject) const;
   QString  actionText(QAccessibleWidget* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   bool  doAction(QAccessibleWidget* theWrappedObject, int  action, int  child, const QList<QVariant >&  params);
   QRect  rect(QAccessibleWidget* theWrappedObject, int  child) const;
};





class PythonQtShell_QAccessibleWidgetEx : public QAccessibleWidgetEx
{
public:
    PythonQtShell_QAccessibleWidgetEx(QWidget*  o, QAccessible::Role  r = QAccessible::Client, const QString&  name = QString()):QAccessibleWidgetEx(o, r, name),_wrapper(NULL) {};

virtual int  navigate(QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const;
virtual QAccessible::Relation  relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const;
virtual QString  text(QAccessible::Text  t, int  child) const;
virtual int  childAt(int  x, int  y) const;
virtual int  indexOfChild(const QAccessibleInterface*  child) const;
virtual QAccessible::State  state(int  child) const;
virtual QAccessible::Role  role(int  child) const;
virtual int  childCount() const;
virtual QVariant  invokeMethodEx(QAccessible::Method  method, int  child, const QList<QVariant >&  params);
virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params);
virtual QRect  rect(int  child) const;
virtual QVariant  virtual_hook(const QVariant&  data);
virtual void setText(QAccessible::Text  t, int  child, const QString&  text);
virtual QObject*  object() const;
virtual int  userActionCount(int  child) const;
virtual bool  isValid() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAccessibleWidgetEx : public QAccessibleWidgetEx
{ public:
inline int  promoted_navigate(QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const { return QAccessibleWidgetEx::navigate(rel, entry, target); }
inline QAccessible::Relation  promoted_relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const { return QAccessibleWidgetEx::relationTo(child, other, otherChild); }
inline QString  promoted_text(QAccessible::Text  t, int  child) const { return QAccessibleWidgetEx::text(t, child); }
inline int  promoted_childAt(int  x, int  y) const { return QAccessibleWidgetEx::childAt(x, y); }
inline int  promoted_indexOfChild(const QAccessibleInterface*  child) const { return QAccessibleWidgetEx::indexOfChild(child); }
inline QAccessible::State  promoted_state(int  child) const { return QAccessibleWidgetEx::state(child); }
inline QAccessible::Role  promoted_role(int  child) const { return QAccessibleWidgetEx::role(child); }
inline int  promoted_childCount() const { return QAccessibleWidgetEx::childCount(); }
inline QVariant  promoted_invokeMethodEx(QAccessible::Method  method, int  child, const QList<QVariant >&  params) { return QAccessibleWidgetEx::invokeMethodEx(method, child, params); }
inline QString  promoted_actionText(int  action, QAccessible::Text  t, int  child) const { return QAccessibleWidgetEx::actionText(action, t, child); }
inline bool  promoted_doAction(int  action, int  child, const QList<QVariant >&  params) { return QAccessibleWidgetEx::doAction(action, child, params); }
inline QRect  promoted_rect(int  child) const { return QAccessibleWidgetEx::rect(child); }
};

class PythonQtWrapper_QAccessibleWidgetEx : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleWidgetEx* new_QAccessibleWidgetEx(QWidget*  o, QAccessible::Role  r = QAccessible::Client, const QString&  name = QString());
   int  navigate(QAccessibleWidgetEx* theWrappedObject, QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const;
   QAccessible::Relation  relationTo(QAccessibleWidgetEx* theWrappedObject, int  child, const QAccessibleInterface*  other, int  otherChild) const;
   QString  text(QAccessibleWidgetEx* theWrappedObject, QAccessible::Text  t, int  child) const;
   int  childAt(QAccessibleWidgetEx* theWrappedObject, int  x, int  y) const;
   int  indexOfChild(QAccessibleWidgetEx* theWrappedObject, const QAccessibleInterface*  child) const;
   QAccessible::State  state(QAccessibleWidgetEx* theWrappedObject, int  child) const;
   QAccessible::Role  role(QAccessibleWidgetEx* theWrappedObject, int  child) const;
   int  childCount(QAccessibleWidgetEx* theWrappedObject) const;
   QVariant  invokeMethodEx(QAccessibleWidgetEx* theWrappedObject, QAccessible::Method  method, int  child, const QList<QVariant >&  params);
   QString  actionText(QAccessibleWidgetEx* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   bool  doAction(QAccessibleWidgetEx* theWrappedObject, int  action, int  child, const QList<QVariant >&  params);
   QRect  rect(QAccessibleWidgetEx* theWrappedObject, int  child) const;
};





class PythonQtShell_QAction : public QAction
{
public:
    PythonQtShell_QAction(QObject*  parent):QAction(parent),_wrapper(NULL) {};
    PythonQtShell_QAction(const QIcon&  icon, const QString&  text, QObject*  parent):QAction(icon, text, parent),_wrapper(NULL) {};
    PythonQtShell_QAction(const QString&  text, QObject*  parent):QAction(text, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
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
   QList<QWidget* >  associatedWidgets(QAction* theWrappedObject) const;
   QString  whatsThis(QAction* theWrappedObject) const;
   void setIconText(QAction* theWrappedObject, const QString&  text);
   void setMenu(QAction* theWrappedObject, QMenu*  menu);
   QAction::SoftKeyRole  softKeyRole(QAction* theWrappedObject) const;
   void setSeparator(QAction* theWrappedObject, bool  b);
   void setIcon(QAction* theWrappedObject, const QIcon&  icon);
   void setIconVisibleInMenu(QAction* theWrappedObject, bool  visible);
   bool  isEnabled(QAction* theWrappedObject) const;
   QVariant  data(QAction* theWrappedObject) const;
   QString  statusTip(QAction* theWrappedObject) const;
   void setAutoRepeat(QAction* theWrappedObject, bool  arg__1);
   bool  isVisible(QAction* theWrappedObject) const;
   QAction::Priority  priority(QAction* theWrappedObject) const;
   QKeySequence  shortcut(QAction* theWrappedObject) const;
   void setShortcuts(QAction* theWrappedObject, QKeySequence::StandardKey  arg__1);
   void setShortcuts(QAction* theWrappedObject, const QList<QKeySequence >&  shortcuts);
   QList<QGraphicsWidget* >  associatedGraphicsWidgets(QAction* theWrappedObject) const;
   QAction::MenuRole  menuRole(QAction* theWrappedObject) const;
   bool  isIconVisibleInMenu(QAction* theWrappedObject) const;
   void setSoftKeyRole(QAction* theWrappedObject, QAction::SoftKeyRole  softKeyRole);
   void setPriority(QAction* theWrappedObject, QAction::Priority  priority);
   QString  toolTip(QAction* theWrappedObject) const;
   bool  autoRepeat(QAction* theWrappedObject) const;
   void setShortcutContext(QAction* theWrappedObject, Qt::ShortcutContext  context);
   void activate(QAction* theWrappedObject, QAction::ActionEvent  event);
   void setActionGroup(QAction* theWrappedObject, QActionGroup*  group);
   bool  isChecked(QAction* theWrappedObject) const;
   QFont  font(QAction* theWrappedObject) const;
   QString  iconText(QAction* theWrappedObject) const;
   void setToolTip(QAction* theWrappedObject, const QString&  tip);
   QActionGroup*  actionGroup(QAction* theWrappedObject) const;
   void setWhatsThis(QAction* theWrappedObject, const QString&  what);
   void setCheckable(QAction* theWrappedObject, bool  arg__1);
   void setText(QAction* theWrappedObject, const QString&  text);
   void setFont(QAction* theWrappedObject, const QFont&  font);
   QList<QKeySequence >  shortcuts(QAction* theWrappedObject) const;
   void setShortcut(QAction* theWrappedObject, const QKeySequence&  shortcut);
   bool  isSeparator(QAction* theWrappedObject) const;
   bool  isCheckable(QAction* theWrappedObject) const;
   QWidget*  parentWidget(QAction* theWrappedObject) const;
   void setStatusTip(QAction* theWrappedObject, const QString&  statusTip);
   void setMenuRole(QAction* theWrappedObject, QAction::MenuRole  menuRole);
   QMenu*  menu(QAction* theWrappedObject) const;
   Qt::ShortcutContext  shortcutContext(QAction* theWrappedObject) const;
   QString  text(QAction* theWrappedObject) const;
   QIcon  icon(QAction* theWrappedObject) const;
   void setData(QAction* theWrappedObject, const QVariant&  var);
   bool  showStatusText(QAction* theWrappedObject, QWidget*  widget = 0);
   bool  event(QAction* theWrappedObject, QEvent*  arg__1);
};





class PythonQtWrapper_QActionEvent : public QObject
{ Q_OBJECT
public:
public slots:
QActionEvent* new_QActionEvent(int  type, QAction*  action, QAction*  before = 0);
void delete_QActionEvent(QActionEvent* obj) { delete obj; } 
   QAction*  action(QActionEvent* theWrappedObject) const;
   QAction*  before(QActionEvent* theWrappedObject) const;
};





class PythonQtShell_QActionGroup : public QActionGroup
{
public:
    PythonQtShell_QActionGroup(QObject*  parent):QActionGroup(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
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
   QAction*  addAction(QActionGroup* theWrappedObject, const QString&  text);
   QAction*  addAction(QActionGroup* theWrappedObject, QAction*  a);
   bool  isVisible(QActionGroup* theWrappedObject) const;
   bool  isExclusive(QActionGroup* theWrappedObject) const;
   QList<QAction* >  actions(QActionGroup* theWrappedObject) const;
};





class PythonQtShell_QApplication : public QApplication
{
public:

virtual void saveState(QSessionManager&  sm);
virtual void commitData(QSessionManager&  sm);
virtual bool  notify(QObject*  arg__1, QEvent*  arg__2);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
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
   int  static_QApplication_colorSpec();
   QStyle*  static_QApplication_style();
   QWidget*  static_QApplication_activePopupWidget();
   void static_QApplication_setDesktopSettingsAware(bool  arg__1);
   void static_QApplication_setStartDragTime(int  ms);
   QPalette  static_QApplication_palette(const QWidget*  arg__1);
   bool  static_QApplication_desktopSettingsAware();
   Qt::KeyboardModifiers  static_QApplication_keyboardModifiers();
   QPalette  static_QApplication_palette();
   bool  static_QApplication_quitOnLastWindowClosed();
   QSize  static_QApplication_globalStrut();
   void static_QApplication_setLayoutDirection(Qt::LayoutDirection  direction);
   QCursor*  static_QApplication_overrideCursor();
   void static_QApplication_setKeyboardInputInterval(int  arg__1);
   QClipboard*  static_QApplication_clipboard();
   void static_QApplication_setQuitOnLastWindowClosed(bool  quit);
   void static_QApplication_setGlobalStrut(const QSize&  arg__1);
   void static_QApplication_setOverrideCursor(const QCursor&  arg__1);
   QDesktopWidget*  static_QApplication_desktop();
   void static_QApplication_setStartDragDistance(int  l);
   void static_QApplication_changeOverrideCursor(const QCursor&  arg__1);
   QInputContext*  inputContext(QApplication* theWrappedObject) const;
   void static_QApplication_setGraphicsSystem(const QString&  arg__1);
   void static_QApplication_setEffectEnabled(Qt::UIEffect  arg__1, bool  enable = true);
   QWidget*  static_QApplication_activeWindow();
   int  static_QApplication_keyboardInputInterval();
   QList<QWidget* >  static_QApplication_topLevelWidgets();
   void static_QApplication_restoreOverrideCursor();
   int  static_QApplication_cursorFlashTime();
   void static_QApplication_setWheelScrollLines(int  arg__1);
   QStyle*  static_QApplication_setStyle(const QString&  arg__1);
   QIcon  static_QApplication_windowIcon();
   void static_QApplication_setStyle(QStyle*  arg__1);
   bool  static_QApplication_isRightToLeft();
   bool  static_QApplication_isEffectEnabled(Qt::UIEffect  arg__1);
   QFont  static_QApplication_font(const QWidget*  arg__1);
   QFont  static_QApplication_font();
   QLocale  static_QApplication_keyboardInputLocale();
   bool  isSessionRestored(QApplication* theWrappedObject) const;
   QList<QWidget* >  static_QApplication_allWidgets();
   int  static_QApplication_exec();
   QWidget*  static_QApplication_focusWidget();
   int  static_QApplication_startDragDistance();
   QString  styleSheet(QApplication* theWrappedObject) const;
   bool  static_QApplication_isLeftToRight();
   void static_QApplication_syncX();
   Qt::LayoutDirection  static_QApplication_layoutDirection();
   int  static_QApplication_doubleClickInterval();
   void static_QApplication_setFont(const QFont&  arg__1, const char*  className = 0);
   void static_QApplication_setWindowIcon(const QIcon&  icon);
   Qt::MouseButtons  static_QApplication_mouseButtons();
   void static_QApplication_alert(QWidget*  widget, int  duration = 0);
   void static_QApplication_setActiveWindow(QWidget*  act);
   bool  notify(QApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void static_QApplication_beep();
   QWidget*  static_QApplication_topLevelAt(int  x, int  y);
   QWidget*  static_QApplication_topLevelAt(const QPoint&  p);
   void static_QApplication_setPalette(const QPalette&  arg__1, const char*  className = 0);
   QString  sessionKey(QApplication* theWrappedObject) const;
   Qt::LayoutDirection  static_QApplication_keyboardInputDirection();
   void static_QApplication_setColorSpec(int  arg__1);
   QString  sessionId(QApplication* theWrappedObject) const;
   void static_QApplication_setCursorFlashTime(int  arg__1);
   int  static_QApplication_wheelScrollLines();
   QApplication::Type  static_QApplication_type();
   void static_QApplication_setDoubleClickInterval(int  arg__1);
   void setInputContext(QApplication* theWrappedObject, QInputContext*  arg__1);
   QWidget*  static_QApplication_activeModalWidget();
   QWidget*  static_QApplication_widgetAt(int  x, int  y);
   QWidget*  static_QApplication_widgetAt(const QPoint&  p);
   bool  event(QApplication* theWrappedObject, QEvent*  arg__1);
   int  static_QApplication_startDragTime();
};





class PythonQtShell_QBoxLayout : public QBoxLayout
{
public:
    PythonQtShell_QBoxLayout(QBoxLayout::Direction  arg__1, QWidget*  parent = 0):QBoxLayout(arg__1, parent),_wrapper(NULL) {};

virtual QLayoutItem*  takeAt(int  arg__1);
virtual QSize  minimumSize() const;
virtual Qt::Orientations  expandingDirections() const;
virtual QSize  maximumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QLayoutItem*  itemAt(int  arg__1) const;
virtual int  count() const;
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

class PythonQtPublicPromoter_QBoxLayout : public QBoxLayout
{ public:
inline QLayoutItem*  promoted_takeAt(int  arg__1) { return QBoxLayout::takeAt(arg__1); }
inline QSize  promoted_minimumSize() const { return QBoxLayout::minimumSize(); }
inline Qt::Orientations  promoted_expandingDirections() const { return QBoxLayout::expandingDirections(); }
inline QSize  promoted_maximumSize() const { return QBoxLayout::maximumSize(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QBoxLayout::setGeometry(arg__1); }
inline QLayoutItem*  promoted_itemAt(int  arg__1) const { return QBoxLayout::itemAt(arg__1); }
inline int  promoted_count() const { return QBoxLayout::count(); }
inline void promoted_addItem(QLayoutItem*  arg__1) { QBoxLayout::addItem(arg__1); }
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
   void insertWidget(QBoxLayout* theWrappedObject, int  index, QWidget*  widget, int  stretch = 0, Qt::Alignment  alignment = 0);
   QLayoutItem*  takeAt(QBoxLayout* theWrappedObject, int  arg__1);
   void addSpacing(QBoxLayout* theWrappedObject, int  size);
   QSize  minimumSize(QBoxLayout* theWrappedObject) const;
   void setDirection(QBoxLayout* theWrappedObject, QBoxLayout::Direction  arg__1);
   int  stretch(QBoxLayout* theWrappedObject, int  index) const;
   Qt::Orientations  expandingDirections(QBoxLayout* theWrappedObject) const;
   void addStrut(QBoxLayout* theWrappedObject, int  arg__1);
   QSize  sizeHint(QBoxLayout* theWrappedObject) const;
   void insertSpacerItem(QBoxLayout* theWrappedObject, int  index, QSpacerItem*  spacerItem);
   QSize  maximumSize(QBoxLayout* theWrappedObject) const;
   bool  setStretchFactor(QBoxLayout* theWrappedObject, QLayout*  l, int  stretch);
   void setGeometry(QBoxLayout* theWrappedObject, const QRect&  arg__1);
   int  spacing(QBoxLayout* theWrappedObject) const;
   QLayoutItem*  itemAt(QBoxLayout* theWrappedObject, int  arg__1) const;
   void addStretch(QBoxLayout* theWrappedObject, int  stretch = 0);
   void insertLayout(QBoxLayout* theWrappedObject, int  index, QLayout*  layout, int  stretch = 0);
   void addWidget(QBoxLayout* theWrappedObject, QWidget*  arg__1, int  stretch = 0, Qt::Alignment  alignment = 0);
   void setStretch(QBoxLayout* theWrappedObject, int  index, int  stretch);
   int  minimumHeightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const;
   int  heightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const;
   bool  hasHeightForWidth(QBoxLayout* theWrappedObject) const;
   void insertSpacing(QBoxLayout* theWrappedObject, int  index, int  size);
   int  count(QBoxLayout* theWrappedObject) const;
   void addLayout(QBoxLayout* theWrappedObject, QLayout*  layout, int  stretch = 0);
   void insertStretch(QBoxLayout* theWrappedObject, int  index, int  stretch = 0);
   void addItem(QBoxLayout* theWrappedObject, QLayoutItem*  arg__1);
   bool  setStretchFactor(QBoxLayout* theWrappedObject, QWidget*  w, int  stretch);
   void setSpacing(QBoxLayout* theWrappedObject, int  spacing);
   void addSpacerItem(QBoxLayout* theWrappedObject, QSpacerItem*  spacerItem);
   void invalidate(QBoxLayout* theWrappedObject);
   QBoxLayout::Direction  direction(QBoxLayout* theWrappedObject) const;
};





class PythonQtShell_QButtonGroup : public QButtonGroup
{
public:
    PythonQtShell_QButtonGroup(QObject*  parent = 0):QButtonGroup(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QButtonGroup : public QObject
{ Q_OBJECT
public:
public slots:
QButtonGroup* new_QButtonGroup(QObject*  parent = 0);
void delete_QButtonGroup(QButtonGroup* obj) { delete obj; } 
   QList<QAbstractButton* >  buttons(QButtonGroup* theWrappedObject) const;
   int  id(QButtonGroup* theWrappedObject, QAbstractButton*  button) const;
   QAbstractButton*  checkedButton(QButtonGroup* theWrappedObject) const;
   void removeButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1);
   void addButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1, int  id);
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
virtual int  pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
virtual QPalette  standardPalette() const;
virtual QSize  sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget) const;
virtual void drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const;
virtual bool  eventFilter(QObject*  o, QEvent*  e);
virtual void polish(QWidget*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void polish(QApplication*  arg__1);
virtual void polish(QPalette&  arg__1);
virtual QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget) const;
virtual int  styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt, const QWidget*  widget, QStyleHintReturn*  returnData) const;
virtual void unpolish(QApplication*  arg__1);
virtual void unpolish(QWidget*  arg__1);
virtual void timerEvent(QTimerEvent*  event);
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w) const;
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCDEStyle : public QCDEStyle
{ public:
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QCDEStyle::drawPrimitive(pe, opt, p, w); }
inline void promoted_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QCDEStyle::drawControl(element, opt, p, w); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QCDEStyle::pixelMetric(metric, option, widget); }
inline QPalette  promoted_standardPalette() const { return QCDEStyle::standardPalette(); }
};

class PythonQtWrapper_QCDEStyle : public QObject
{ Q_OBJECT
public:
public slots:
QCDEStyle* new_QCDEStyle(bool  useHighlightCols = false);
void delete_QCDEStyle(QCDEStyle* obj) { delete obj; } 
   void drawPrimitive(QCDEStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void drawControl(QCDEStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   int  pixelMetric(QCDEStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   QPalette  standardPalette(QCDEStyle* theWrappedObject) const;
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
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  devType() const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCalendarWidget : public QCalendarWidget
{ public:
inline void promoted_paintCell(QPainter*  painter, const QRect&  rect, const QDate&  date) const { QCalendarWidget::paintCell(painter, rect, date); }
inline QSize  promoted_sizeHint() const { return QCalendarWidget::sizeHint(); }
inline QSize  promoted_minimumSizeHint() const { return QCalendarWidget::minimumSizeHint(); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QCalendarWidget::resizeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QCalendarWidget::event(event); }
inline bool  promoted_eventFilter(QObject*  watched, QEvent*  event) { return QCalendarWidget::eventFilter(watched, event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QCalendarWidget::keyPressEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QCalendarWidget::mousePressEvent(event); }
};

class PythonQtWrapper_QCalendarWidget : public QObject
{ Q_OBJECT
public:
public slots:
QCalendarWidget* new_QCalendarWidget(QWidget*  parent = 0);
void delete_QCalendarWidget(QCalendarWidget* obj) { delete obj; } 
   QTextCharFormat  headerTextFormat(QCalendarWidget* theWrappedObject) const;
   QTextCharFormat  dateTextFormat(QCalendarWidget* theWrappedObject, const QDate&  date) const;
   QMap<QDate , QTextCharFormat >  dateTextFormat(QCalendarWidget* theWrappedObject) const;
   void paintCell(QCalendarWidget* theWrappedObject, QPainter*  painter, const QRect&  rect, const QDate&  date) const;
   Qt::DayOfWeek  firstDayOfWeek(QCalendarWidget* theWrappedObject) const;
   QCalendarWidget::VerticalHeaderFormat  verticalHeaderFormat(QCalendarWidget* theWrappedObject) const;
   void setVerticalHeaderFormat(QCalendarWidget* theWrappedObject, QCalendarWidget::VerticalHeaderFormat  format);
   QSize  sizeHint(QCalendarWidget* theWrappedObject) const;
   int  monthShown(QCalendarWidget* theWrappedObject) const;
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
   void setDateEditEnabled(QCalendarWidget* theWrappedObject, bool  enable);
   void setMinimumDate(QCalendarWidget* theWrappedObject, const QDate&  date);
   void setWeekdayTextFormat(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek, const QTextCharFormat&  format);
   int  dateEditAcceptDelay(QCalendarWidget* theWrappedObject) const;
   QSize  minimumSizeHint(QCalendarWidget* theWrappedObject) const;
   void resizeEvent(QCalendarWidget* theWrappedObject, QResizeEvent*  event);
   bool  event(QCalendarWidget* theWrappedObject, QEvent*  event);
   bool  eventFilter(QCalendarWidget* theWrappedObject, QObject*  watched, QEvent*  event);
   void keyPressEvent(QCalendarWidget* theWrappedObject, QKeyEvent*  event);
   QDate  selectedDate(QCalendarWidget* theWrappedObject) const;
   void setMaximumDate(QCalendarWidget* theWrappedObject, const QDate&  date);
   QDate  maximumDate(QCalendarWidget* theWrappedObject) const;
   void setDateEditAcceptDelay(QCalendarWidget* theWrappedObject, int  delay);
   int  yearShown(QCalendarWidget* theWrappedObject) const;
   QDate  minimumDate(QCalendarWidget* theWrappedObject) const;
   void setDateTextFormat(QCalendarWidget* theWrappedObject, const QDate&  date, const QTextCharFormat&  format);
   void mousePressEvent(QCalendarWidget* theWrappedObject, QMouseEvent*  event);
};


