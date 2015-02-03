#include <PythonQt.h>
#include <QAbstractTextDocumentLayout>
#include <QBasicTimer>
#include <QFont>
#include <QFontMetrics>
#include <QIcon>
#include <QImage>
#include <QItemSelection>
#include <QLocale>
#include <QObject>
#include <QPalette>
#include <QPixmap>
#include <QSize>
#include <QStringList>
#include <QTextCharFormat>
#include <QVariant>
#include <qabstractbutton.h>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qabstractprintdialog.h>
#include <qabstractproxymodel.h>
#include <qabstractscrollarea.h>
#include <qabstractslider.h>
#include <qabstractspinbox.h>
#include <qabstracttextdocumentlayout.h>
#include <qaccessible.h>
#include <qaction.h>
#include <qactiongroup.h>
#include <qapplication.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qboxlayout.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcheckbox.h>
#include <qclipboard.h>
#include <qcolor.h>
#include <qcolordialog.h>
#include <qcolumnview.h>
#include <qcombobox.h>
#include <qcommandlinkbutton.h>
#include <qcommonstyle.h>
#include <qcompleter.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdesktopwidget.h>
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
#include <qimage.h>
#include <qinputmethod.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmenu.h>
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
#include <qprinter.h>
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
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextobject.h>
#include <qtransform.h>
#include <qtranslator.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QAbstractButton : public QAbstractButton
{
public:
    PythonQtShell_QAbstractButton(QWidget*  parent = 0):QAbstractButton(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractButton();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void checkStateSet();
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual bool  hitButton(const QPoint&  pos) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void nextCheckState();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractButton : public QAbstractButton
{ public:
inline void promoted_changeEvent(QEvent*  e) { QAbstractButton::changeEvent(e); }
inline void promoted_checkStateSet() { QAbstractButton::checkStateSet(); }
inline bool  promoted_event(QEvent*  e) { return QAbstractButton::event(e); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QAbstractButton::focusInEvent(e); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QAbstractButton::focusOutEvent(e); }
inline bool  promoted_hitButton(const QPoint&  pos) const { return QAbstractButton::hitButton(pos); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QAbstractButton::keyPressEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QAbstractButton::keyReleaseEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QAbstractButton::mouseMoveEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QAbstractButton::mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QAbstractButton::mouseReleaseEvent(e); }
inline void promoted_nextCheckState() { QAbstractButton::nextCheckState(); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void promoted_timerEvent(QTimerEvent*  e) { QAbstractButton::timerEvent(e); }
};

class PythonQtWrapper_QAbstractButton : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractButton* new_QAbstractButton(QWidget*  parent = 0);
void delete_QAbstractButton(QAbstractButton* obj) { delete obj; } 
   bool  autoExclusive(QAbstractButton* theWrappedObject) const;
   bool  autoRepeat(QAbstractButton* theWrappedObject) const;
   int  autoRepeatDelay(QAbstractButton* theWrappedObject) const;
   int  autoRepeatInterval(QAbstractButton* theWrappedObject) const;
   void changeEvent(QAbstractButton* theWrappedObject, QEvent*  e);
   void checkStateSet(QAbstractButton* theWrappedObject);
   bool  event(QAbstractButton* theWrappedObject, QEvent*  e);
   void focusInEvent(QAbstractButton* theWrappedObject, QFocusEvent*  e);
   void focusOutEvent(QAbstractButton* theWrappedObject, QFocusEvent*  e);
   QButtonGroup*  group(QAbstractButton* theWrappedObject) const;
   bool  hitButton(QAbstractButton* theWrappedObject, const QPoint&  pos) const;
   QIcon  icon(QAbstractButton* theWrappedObject) const;
   QSize  iconSize(QAbstractButton* theWrappedObject) const;
   bool  isCheckable(QAbstractButton* theWrappedObject) const;
   bool  isChecked(QAbstractButton* theWrappedObject) const;
   bool  isDown(QAbstractButton* theWrappedObject) const;
   void keyPressEvent(QAbstractButton* theWrappedObject, QKeyEvent*  e);
   void keyReleaseEvent(QAbstractButton* theWrappedObject, QKeyEvent*  e);
   void mouseMoveEvent(QAbstractButton* theWrappedObject, QMouseEvent*  e);
   void mousePressEvent(QAbstractButton* theWrappedObject, QMouseEvent*  e);
   void mouseReleaseEvent(QAbstractButton* theWrappedObject, QMouseEvent*  e);
   void nextCheckState(QAbstractButton* theWrappedObject);
   void paintEvent(QAbstractButton* theWrappedObject, QPaintEvent*  e);
   void setAutoExclusive(QAbstractButton* theWrappedObject, bool  arg__1);
   void setAutoRepeat(QAbstractButton* theWrappedObject, bool  arg__1);
   void setAutoRepeatDelay(QAbstractButton* theWrappedObject, int  arg__1);
   void setAutoRepeatInterval(QAbstractButton* theWrappedObject, int  arg__1);
   void setCheckable(QAbstractButton* theWrappedObject, bool  arg__1);
   void setDown(QAbstractButton* theWrappedObject, bool  arg__1);
   void setIcon(QAbstractButton* theWrappedObject, const QIcon&  icon);
   void setShortcut(QAbstractButton* theWrappedObject, const QKeySequence&  key);
   void setText(QAbstractButton* theWrappedObject, const QString&  text);
   QKeySequence  shortcut(QAbstractButton* theWrappedObject) const;
   QString  text(QAbstractButton* theWrappedObject) const;
   void timerEvent(QAbstractButton* theWrappedObject, QTimerEvent*  e);
};





class PythonQtShell_QAbstractGraphicsShapeItem : public QAbstractGraphicsShapeItem
{
public:
    PythonQtShell_QAbstractGraphicsShapeItem(QGraphicsItem*  parent = 0):QAbstractGraphicsShapeItem(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractGraphicsShapeItem();

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
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
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
QAbstractGraphicsShapeItem* new_QAbstractGraphicsShapeItem(QGraphicsItem*  parent = 0);
void delete_QAbstractGraphicsShapeItem(QAbstractGraphicsShapeItem* obj) { delete obj; } 
   QBrush  brush(QAbstractGraphicsShapeItem* theWrappedObject) const;
   bool  isObscuredBy(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item) const;
   QPainterPath  opaqueArea(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QPen  pen(QAbstractGraphicsShapeItem* theWrappedObject) const;
   void setBrush(QAbstractGraphicsShapeItem* theWrappedObject, const QBrush&  brush);
   void setPen(QAbstractGraphicsShapeItem* theWrappedObject, const QPen&  pen);
};





class PythonQtShell_QAbstractItemDelegate : public QAbstractItemDelegate
{
public:
    PythonQtShell_QAbstractItemDelegate(QObject*  parent = 0):QAbstractItemDelegate(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractItemDelegate();

virtual void childEvent(QChildEvent*  arg__1);
virtual QWidget*  createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void customEvent(QEvent*  arg__1);
virtual void destroyEditor(QWidget*  editor, const QModelIndex&  index) const;
virtual bool  editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  helpEvent(QHelpEvent*  event, QAbstractItemView*  view, const QStyleOptionViewItem&  option, const QModelIndex&  index);
virtual void paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual QVector<int >  paintingRoles() const;
virtual void setEditorData(QWidget*  editor, const QModelIndex&  index) const;
virtual void setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
virtual QSize  sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractItemDelegate : public QAbstractItemDelegate
{ public:
inline QWidget*  promoted_createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QAbstractItemDelegate::createEditor(parent, option, index); }
inline void promoted_destroyEditor(QWidget*  editor, const QModelIndex&  index) const { QAbstractItemDelegate::destroyEditor(editor, index); }
inline bool  promoted_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return QAbstractItemDelegate::editorEvent(event, model, option, index); }
inline bool  promoted_helpEvent(QHelpEvent*  event, QAbstractItemView*  view, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return QAbstractItemDelegate::helpEvent(event, view, option, index); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { this->paint(painter, option, index); }
inline QVector<int >  promoted_paintingRoles() const { return QAbstractItemDelegate::paintingRoles(); }
inline void promoted_setEditorData(QWidget*  editor, const QModelIndex&  index) const { QAbstractItemDelegate::setEditorData(editor, index); }
inline void promoted_setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const { QAbstractItemDelegate::setModelData(editor, model, index); }
inline QSize  promoted_sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return this->sizeHint(option, index); }
inline void promoted_updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QAbstractItemDelegate::updateEditorGeometry(editor, option, index); }
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
   void destroyEditor(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const;
   bool  editorEvent(QAbstractItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
   bool  helpEvent(QAbstractItemDelegate* theWrappedObject, QHelpEvent*  event, QAbstractItemView*  view, const QStyleOptionViewItem&  option, const QModelIndex&  index);
   void paint(QAbstractItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   QVector<int >  paintingRoles(QAbstractItemDelegate* theWrappedObject) const;
   void setEditorData(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const;
   void setModelData(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
   QSize  sizeHint(QAbstractItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void updateEditorGeometry(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
};





class PythonQtShell_QAbstractItemView : public QAbstractItemView
{
public:
    PythonQtShell_QAbstractItemView(QWidget*  parent = 0):QAbstractItemView(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractItemView();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void commitData(QWidget*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void customEvent(QEvent*  arg__1);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>());
virtual int  devType() const;
virtual void doItemsLayout();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void editorDestroyed(QObject*  editor);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual int  horizontalOffset() const;
virtual void horizontalScrollbarAction(int  action);
virtual void horizontalScrollbarValueChanged(int  value);
virtual QModelIndex  indexAt(const QPoint&  point) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void keyboardSearch(const QString&  search);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reset();
virtual void resizeEvent(QResizeEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual void selectAll();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = 0) const;
virtual void setModel(QAbstractItemModel*  model);
virtual void setRootIndex(const QModelIndex&  index);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual int  sizeHintForColumn(int  column) const;
virtual int  sizeHintForRow(int  row) const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  event);
virtual void updateEditorData();
virtual void updateEditorGeometries();
virtual void updateGeometries();
virtual int  verticalOffset() const;
virtual void verticalScrollbarAction(int  action);
virtual void verticalScrollbarValueChanged(int  value);
virtual QStyleOptionViewItem  viewOptions() const;
virtual bool  viewportEvent(QEvent*  event);
virtual QSize  viewportSizeHint() const;
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractItemView : public QAbstractItemView
{ public:
enum CursorAction{
  MoveUp = QAbstractItemView::MoveUp,   MoveDown = QAbstractItemView::MoveDown,   MoveLeft = QAbstractItemView::MoveLeft,   MoveRight = QAbstractItemView::MoveRight,   MoveHome = QAbstractItemView::MoveHome,   MoveEnd = QAbstractItemView::MoveEnd,   MovePageUp = QAbstractItemView::MovePageUp,   MovePageDown = QAbstractItemView::MovePageDown,   MoveNext = QAbstractItemView::MoveNext,   MovePrevious = QAbstractItemView::MovePrevious};
enum DropIndicatorPosition{
  OnItem = QAbstractItemView::OnItem,   AboveItem = QAbstractItemView::AboveItem,   BelowItem = QAbstractItemView::BelowItem,   OnViewport = QAbstractItemView::OnViewport};
enum State{
  NoState = QAbstractItemView::NoState,   DraggingState = QAbstractItemView::DraggingState,   DragSelectingState = QAbstractItemView::DragSelectingState,   EditingState = QAbstractItemView::EditingState,   ExpandingState = QAbstractItemView::ExpandingState,   CollapsingState = QAbstractItemView::CollapsingState,   AnimatingState = QAbstractItemView::AnimatingState};
inline void promoted_closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) { QAbstractItemView::closeEditor(editor, hint); }
inline void promoted_commitData(QWidget*  editor) { QAbstractItemView::commitData(editor); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QAbstractItemView::currentChanged(current, previous); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) { QAbstractItemView::dataChanged(topLeft, bottomRight, roles); }
inline QPoint  promoted_dirtyRegionOffset() const { return QAbstractItemView::dirtyRegionOffset(); }
inline void promoted_doAutoScroll() { QAbstractItemView::doAutoScroll(); }
inline void promoted_doItemsLayout() { QAbstractItemView::doItemsLayout(); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  event) { QAbstractItemView::dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  event) { QAbstractItemView::dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { QAbstractItemView::dragMoveEvent(event); }
inline void promoted_dropEvent(QDropEvent*  event) { QAbstractItemView::dropEvent(event); }
inline int  promoted_dropIndicatorPosition() const { return QAbstractItemView::dropIndicatorPosition(); }
inline bool  promoted_edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) { return QAbstractItemView::edit(index, trigger, event); }
inline void promoted_editorDestroyed(QObject*  editor) { QAbstractItemView::editorDestroyed(editor); }
inline bool  promoted_event(QEvent*  event) { return QAbstractItemView::event(event); }
inline void promoted_executeDelayedItemsLayout() { QAbstractItemView::executeDelayedItemsLayout(); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QAbstractItemView::focusInEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QAbstractItemView::focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QAbstractItemView::focusOutEvent(event); }
inline int  promoted_horizontalOffset() const { return this->horizontalOffset(); }
inline void promoted_horizontalScrollbarAction(int  action) { QAbstractItemView::horizontalScrollbarAction(action); }
inline void promoted_horizontalScrollbarValueChanged(int  value) { QAbstractItemView::horizontalScrollbarValueChanged(value); }
inline QModelIndex  promoted_indexAt(const QPoint&  point) const { return this->indexAt(point); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QAbstractItemView::inputMethodEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QAbstractItemView::inputMethodQuery(query); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return this->isIndexHidden(index); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QAbstractItemView::keyPressEvent(event); }
inline void promoted_keyboardSearch(const QString&  search) { QAbstractItemView::keyboardSearch(search); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { QAbstractItemView::mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QAbstractItemView::mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QAbstractItemView::mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QAbstractItemView::mouseReleaseEvent(event); }
inline void promoted_reset() { QAbstractItemView::reset(); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QAbstractItemView::resizeEvent(event); }
inline void promoted_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QAbstractItemView::rowsAboutToBeRemoved(parent, start, end); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QAbstractItemView::rowsInserted(parent, start, end); }
inline void promoted_scheduleDelayedItemsLayout() { QAbstractItemView::scheduleDelayedItemsLayout(); }
inline void promoted_scrollDirtyRegion(int  dx, int  dy) { QAbstractItemView::scrollDirtyRegion(dx, dy); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { this->scrollTo(index, hint); }
inline void promoted_selectAll() { QAbstractItemView::selectAll(); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return QAbstractItemView::selectedIndexes(); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QAbstractItemView::selectionChanged(selected, deselected); }
inline QItemSelectionModel::SelectionFlags  promoted_selectionCommand(const QModelIndex&  index, const QEvent*  event = 0) const { return QAbstractItemView::selectionCommand(index, event); }
inline void promoted_setDirtyRegion(const QRegion&  region) { QAbstractItemView::setDirtyRegion(region); }
inline void promoted_setModel(QAbstractItemModel*  model) { QAbstractItemView::setModel(model); }
inline void promoted_setRootIndex(const QModelIndex&  index) { QAbstractItemView::setRootIndex(index); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { this->setSelection(rect, command); }
inline void promoted_setSelectionModel(QItemSelectionModel*  selectionModel) { QAbstractItemView::setSelectionModel(selectionModel); }
inline void promoted_setState(int  state) { QAbstractItemView::setState((QAbstractItemView::State)state); }
inline int  promoted_sizeHintForColumn(int  column) const { return QAbstractItemView::sizeHintForColumn(column); }
inline int  promoted_sizeHintForRow(int  row) const { return QAbstractItemView::sizeHintForRow(row); }
inline void promoted_startAutoScroll() { QAbstractItemView::startAutoScroll(); }
inline void promoted_startDrag(Qt::DropActions  supportedActions) { QAbstractItemView::startDrag(supportedActions); }
inline int  promoted_state() const { return QAbstractItemView::state(); }
inline void promoted_stopAutoScroll() { QAbstractItemView::stopAutoScroll(); }
inline void promoted_timerEvent(QTimerEvent*  event) { QAbstractItemView::timerEvent(event); }
inline void promoted_updateEditorData() { QAbstractItemView::updateEditorData(); }
inline void promoted_updateEditorGeometries() { QAbstractItemView::updateEditorGeometries(); }
inline void promoted_updateGeometries() { QAbstractItemView::updateGeometries(); }
inline int  promoted_verticalOffset() const { return this->verticalOffset(); }
inline void promoted_verticalScrollbarAction(int  action) { QAbstractItemView::verticalScrollbarAction(action); }
inline void promoted_verticalScrollbarValueChanged(int  value) { QAbstractItemView::verticalScrollbarValueChanged(value); }
inline QStyleOptionViewItem  promoted_viewOptions() const { return QAbstractItemView::viewOptions(); }
inline bool  promoted_viewportEvent(QEvent*  event) { return QAbstractItemView::viewportEvent(event); }
inline QSize  promoted_viewportSizeHint() const { return QAbstractItemView::viewportSizeHint(); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return this->visualRect(index); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return this->visualRegionForSelection(selection); }
};

class PythonQtWrapper_QAbstractItemView : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CursorAction DropIndicatorPosition EditTrigger State )
Q_FLAGS(EditTriggers )
enum CursorAction{
  MoveUp = PythonQtPublicPromoter_QAbstractItemView::MoveUp,   MoveDown = PythonQtPublicPromoter_QAbstractItemView::MoveDown,   MoveLeft = PythonQtPublicPromoter_QAbstractItemView::MoveLeft,   MoveRight = PythonQtPublicPromoter_QAbstractItemView::MoveRight,   MoveHome = PythonQtPublicPromoter_QAbstractItemView::MoveHome,   MoveEnd = PythonQtPublicPromoter_QAbstractItemView::MoveEnd,   MovePageUp = PythonQtPublicPromoter_QAbstractItemView::MovePageUp,   MovePageDown = PythonQtPublicPromoter_QAbstractItemView::MovePageDown,   MoveNext = PythonQtPublicPromoter_QAbstractItemView::MoveNext,   MovePrevious = PythonQtPublicPromoter_QAbstractItemView::MovePrevious};
enum DropIndicatorPosition{
  OnItem = PythonQtPublicPromoter_QAbstractItemView::OnItem,   AboveItem = PythonQtPublicPromoter_QAbstractItemView::AboveItem,   BelowItem = PythonQtPublicPromoter_QAbstractItemView::BelowItem,   OnViewport = PythonQtPublicPromoter_QAbstractItemView::OnViewport};
enum EditTrigger{
  NoEditTriggers = QAbstractItemView::NoEditTriggers,   CurrentChanged = QAbstractItemView::CurrentChanged,   DoubleClicked = QAbstractItemView::DoubleClicked,   SelectedClicked = QAbstractItemView::SelectedClicked,   EditKeyPressed = QAbstractItemView::EditKeyPressed,   AnyKeyPressed = QAbstractItemView::AnyKeyPressed,   AllEditTriggers = QAbstractItemView::AllEditTriggers};
enum State{
  NoState = PythonQtPublicPromoter_QAbstractItemView::NoState,   DraggingState = PythonQtPublicPromoter_QAbstractItemView::DraggingState,   DragSelectingState = PythonQtPublicPromoter_QAbstractItemView::DragSelectingState,   EditingState = PythonQtPublicPromoter_QAbstractItemView::EditingState,   ExpandingState = PythonQtPublicPromoter_QAbstractItemView::ExpandingState,   CollapsingState = PythonQtPublicPromoter_QAbstractItemView::CollapsingState,   AnimatingState = PythonQtPublicPromoter_QAbstractItemView::AnimatingState};
Q_DECLARE_FLAGS(EditTriggers, EditTrigger)
public slots:
QAbstractItemView* new_QAbstractItemView(QWidget*  parent = 0);
void delete_QAbstractItemView(QAbstractItemView* obj) { delete obj; } 
   bool  alternatingRowColors(QAbstractItemView* theWrappedObject) const;
   int  autoScrollMargin(QAbstractItemView* theWrappedObject) const;
   void closeEditor(QAbstractItemView* theWrappedObject, QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
   void closePersistentEditor(QAbstractItemView* theWrappedObject, const QModelIndex&  index);
   void commitData(QAbstractItemView* theWrappedObject, QWidget*  editor);
   void currentChanged(QAbstractItemView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous);
   QModelIndex  currentIndex(QAbstractItemView* theWrappedObject) const;
   void dataChanged(QAbstractItemView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>());
   Qt::DropAction  defaultDropAction(QAbstractItemView* theWrappedObject) const;
   QPoint  dirtyRegionOffset(QAbstractItemView* theWrappedObject) const;
   void doAutoScroll(QAbstractItemView* theWrappedObject);
   void doItemsLayout(QAbstractItemView* theWrappedObject);
   QAbstractItemView::DragDropMode  dragDropMode(QAbstractItemView* theWrappedObject) const;
   bool  dragDropOverwriteMode(QAbstractItemView* theWrappedObject) const;
   bool  dragEnabled(QAbstractItemView* theWrappedObject) const;
   void dragEnterEvent(QAbstractItemView* theWrappedObject, QDragEnterEvent*  event);
   void dragLeaveEvent(QAbstractItemView* theWrappedObject, QDragLeaveEvent*  event);
   void dragMoveEvent(QAbstractItemView* theWrappedObject, QDragMoveEvent*  event);
   void dropEvent(QAbstractItemView* theWrappedObject, QDropEvent*  event);
   int  dropIndicatorPosition(QAbstractItemView* theWrappedObject) const;
   bool  edit(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
   QAbstractItemView::EditTriggers  editTriggers(QAbstractItemView* theWrappedObject) const;
   void editorDestroyed(QAbstractItemView* theWrappedObject, QObject*  editor);
   bool  event(QAbstractItemView* theWrappedObject, QEvent*  event);
   void executeDelayedItemsLayout(QAbstractItemView* theWrappedObject);
   void focusInEvent(QAbstractItemView* theWrappedObject, QFocusEvent*  event);
   bool  focusNextPrevChild(QAbstractItemView* theWrappedObject, bool  next);
   void focusOutEvent(QAbstractItemView* theWrappedObject, QFocusEvent*  event);
   bool  hasAutoScroll(QAbstractItemView* theWrappedObject) const;
   int  horizontalOffset(QAbstractItemView* theWrappedObject) const;
   QAbstractItemView::ScrollMode  horizontalScrollMode(QAbstractItemView* theWrappedObject) const;
   void horizontalScrollbarAction(QAbstractItemView* theWrappedObject, int  action);
   void horizontalScrollbarValueChanged(QAbstractItemView* theWrappedObject, int  value);
   QSize  iconSize(QAbstractItemView* theWrappedObject) const;
   QModelIndex  indexAt(QAbstractItemView* theWrappedObject, const QPoint&  point) const;
   QWidget*  indexWidget(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   void inputMethodEvent(QAbstractItemView* theWrappedObject, QInputMethodEvent*  event);
   QVariant  inputMethodQuery(QAbstractItemView* theWrappedObject, Qt::InputMethodQuery  query) const;
   bool  isIndexHidden(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   QAbstractItemDelegate*  itemDelegate(QAbstractItemView* theWrappedObject) const;
   QAbstractItemDelegate*  itemDelegate(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   QAbstractItemDelegate*  itemDelegateForColumn(QAbstractItemView* theWrappedObject, int  column) const;
   QAbstractItemDelegate*  itemDelegateForRow(QAbstractItemView* theWrappedObject, int  row) const;
   void keyPressEvent(QAbstractItemView* theWrappedObject, QKeyEvent*  event);
   void keyboardSearch(QAbstractItemView* theWrappedObject, const QString&  search);
   QAbstractItemModel*  model(QAbstractItemView* theWrappedObject) const;
   void mouseDoubleClickEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event);
   void mouseMoveEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event);
   void mousePressEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event);
   void mouseReleaseEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event);
   void openPersistentEditor(QAbstractItemView* theWrappedObject, const QModelIndex&  index);
   void reset(QAbstractItemView* theWrappedObject);
   void resizeEvent(QAbstractItemView* theWrappedObject, QResizeEvent*  event);
   QModelIndex  rootIndex(QAbstractItemView* theWrappedObject) const;
   void rowsAboutToBeRemoved(QAbstractItemView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   void rowsInserted(QAbstractItemView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   void scheduleDelayedItemsLayout(QAbstractItemView* theWrappedObject);
   void scrollDirtyRegion(QAbstractItemView* theWrappedObject, int  dx, int  dy);
   void scrollTo(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
   void selectAll(QAbstractItemView* theWrappedObject);
   QList<QModelIndex >  selectedIndexes(QAbstractItemView* theWrappedObject) const;
   QAbstractItemView::SelectionBehavior  selectionBehavior(QAbstractItemView* theWrappedObject) const;
   void selectionChanged(QAbstractItemView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected);
   QItemSelectionModel::SelectionFlags  selectionCommand(QAbstractItemView* theWrappedObject, const QModelIndex&  index, const QEvent*  event = 0) const;
   QAbstractItemView::SelectionMode  selectionMode(QAbstractItemView* theWrappedObject) const;
   QItemSelectionModel*  selectionModel(QAbstractItemView* theWrappedObject) const;
   void setAlternatingRowColors(QAbstractItemView* theWrappedObject, bool  enable);
   void setAutoScroll(QAbstractItemView* theWrappedObject, bool  enable);
   void setAutoScrollMargin(QAbstractItemView* theWrappedObject, int  margin);
   void setDefaultDropAction(QAbstractItemView* theWrappedObject, Qt::DropAction  dropAction);
   void setDirtyRegion(QAbstractItemView* theWrappedObject, const QRegion&  region);
   void setDragDropMode(QAbstractItemView* theWrappedObject, QAbstractItemView::DragDropMode  behavior);
   void setDragDropOverwriteMode(QAbstractItemView* theWrappedObject, bool  overwrite);
   void setDragEnabled(QAbstractItemView* theWrappedObject, bool  enable);
   void setDropIndicatorShown(QAbstractItemView* theWrappedObject, bool  enable);
   void setEditTriggers(QAbstractItemView* theWrappedObject, QAbstractItemView::EditTriggers  triggers);
   void setHorizontalScrollMode(QAbstractItemView* theWrappedObject, QAbstractItemView::ScrollMode  mode);
   void setIconSize(QAbstractItemView* theWrappedObject, const QSize&  size);
   void setIndexWidget(QAbstractItemView* theWrappedObject, const QModelIndex&  index, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void setItemDelegate(QAbstractItemView* theWrappedObject, QAbstractItemDelegate*  delegate);
   void setItemDelegateForColumn(QAbstractItemView* theWrappedObject, int  column, QAbstractItemDelegate*  delegate);
   void setItemDelegateForRow(QAbstractItemView* theWrappedObject, int  row, QAbstractItemDelegate*  delegate);
   void setModel(QAbstractItemView* theWrappedObject, QAbstractItemModel*  model);
   void setRootIndex(QAbstractItemView* theWrappedObject, const QModelIndex&  index);
   void setSelection(QAbstractItemView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
   void setSelectionBehavior(QAbstractItemView* theWrappedObject, QAbstractItemView::SelectionBehavior  behavior);
   void setSelectionMode(QAbstractItemView* theWrappedObject, QAbstractItemView::SelectionMode  mode);
   void setSelectionModel(QAbstractItemView* theWrappedObject, QItemSelectionModel*  selectionModel);
   void setState(QAbstractItemView* theWrappedObject, int  state);
   void setTabKeyNavigation(QAbstractItemView* theWrappedObject, bool  enable);
   void setTextElideMode(QAbstractItemView* theWrappedObject, Qt::TextElideMode  mode);
   void setVerticalScrollMode(QAbstractItemView* theWrappedObject, QAbstractItemView::ScrollMode  mode);
   bool  showDropIndicator(QAbstractItemView* theWrappedObject) const;
   int  sizeHintForColumn(QAbstractItemView* theWrappedObject, int  column) const;
   QSize  sizeHintForIndex(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   int  sizeHintForRow(QAbstractItemView* theWrappedObject, int  row) const;
   void startAutoScroll(QAbstractItemView* theWrappedObject);
   void startDrag(QAbstractItemView* theWrappedObject, Qt::DropActions  supportedActions);
   int  state(QAbstractItemView* theWrappedObject) const;
   void stopAutoScroll(QAbstractItemView* theWrappedObject);
   bool  tabKeyNavigation(QAbstractItemView* theWrappedObject) const;
   Qt::TextElideMode  textElideMode(QAbstractItemView* theWrappedObject) const;
   void timerEvent(QAbstractItemView* theWrappedObject, QTimerEvent*  event);
   void updateEditorData(QAbstractItemView* theWrappedObject);
   void updateEditorGeometries(QAbstractItemView* theWrappedObject);
   void updateGeometries(QAbstractItemView* theWrappedObject);
   int  verticalOffset(QAbstractItemView* theWrappedObject) const;
   QAbstractItemView::ScrollMode  verticalScrollMode(QAbstractItemView* theWrappedObject) const;
   void verticalScrollbarAction(QAbstractItemView* theWrappedObject, int  action);
   void verticalScrollbarValueChanged(QAbstractItemView* theWrappedObject, int  value);
   QStyleOptionViewItem  viewOptions(QAbstractItemView* theWrappedObject) const;
   bool  viewportEvent(QAbstractItemView* theWrappedObject, QEvent*  event);
   QSize  viewportSizeHint(QAbstractItemView* theWrappedObject) const;
   QRect  visualRect(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   QRegion  visualRegionForSelection(QAbstractItemView* theWrappedObject, const QItemSelection&  selection) const;
};





class PythonQtShell_QAbstractPrintDialog : public QAbstractPrintDialog
{
public:
    PythonQtShell_QAbstractPrintDialog(QPrinter*  printer, QWidget*  parent = 0):QAbstractPrintDialog(printer, parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractPrintDialog();

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void done(int  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual int  exec();
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void open();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reject();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractPrintDialog : public QAbstractPrintDialog
{ public:
inline int  promoted_exec() { return this->exec(); }
};

class PythonQtWrapper_QAbstractPrintDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PrintDialogOption PrintRange )
Q_FLAGS(PrintDialogOptions )
enum PrintDialogOption{
  None = QAbstractPrintDialog::None,   PrintToFile = QAbstractPrintDialog::PrintToFile,   PrintSelection = QAbstractPrintDialog::PrintSelection,   PrintPageRange = QAbstractPrintDialog::PrintPageRange,   PrintShowPageSize = QAbstractPrintDialog::PrintShowPageSize,   PrintCollateCopies = QAbstractPrintDialog::PrintCollateCopies,   DontUseSheet = QAbstractPrintDialog::DontUseSheet,   PrintCurrentPage = QAbstractPrintDialog::PrintCurrentPage};
enum PrintRange{
  AllPages = QAbstractPrintDialog::AllPages,   Selection = QAbstractPrintDialog::Selection,   PageRange = QAbstractPrintDialog::PageRange,   CurrentPage = QAbstractPrintDialog::CurrentPage};
Q_DECLARE_FLAGS(PrintDialogOptions, PrintDialogOption)
public slots:
QAbstractPrintDialog* new_QAbstractPrintDialog(QPrinter*  printer, QWidget*  parent = 0);
void delete_QAbstractPrintDialog(QAbstractPrintDialog* obj) { delete obj; } 
   void addEnabledOption(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOption  option);
   QAbstractPrintDialog::PrintDialogOptions  enabledOptions(QAbstractPrintDialog* theWrappedObject) const;
   int  exec(QAbstractPrintDialog* theWrappedObject);
   int  fromPage(QAbstractPrintDialog* theWrappedObject) const;
   bool  isOptionEnabled(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOption  option) const;
   int  maxPage(QAbstractPrintDialog* theWrappedObject) const;
   int  minPage(QAbstractPrintDialog* theWrappedObject) const;
   QAbstractPrintDialog::PrintRange  printRange(QAbstractPrintDialog* theWrappedObject) const;
   QPrinter*  printer(QAbstractPrintDialog* theWrappedObject) const;
   void setEnabledOptions(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOptions  options);
   void setFromTo(QAbstractPrintDialog* theWrappedObject, int  fromPage, int  toPage);
   void setMinMax(QAbstractPrintDialog* theWrappedObject, int  min, int  max);
   void setOptionTabs(QAbstractPrintDialog* theWrappedObject, const QList<QWidget* >&  tabs);
   void setPrintRange(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintRange  range);
   int  toPage(QAbstractPrintDialog* theWrappedObject) const;
};





class PythonQtShell_QAbstractProxyModel : public QAbstractProxyModel
{
public:
    PythonQtShell_QAbstractProxyModel(QObject*  parent = 0):QAbstractProxyModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractProxyModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual void customEvent(QEvent*  arg__1);
virtual QVariant  data(const QModelIndex&  proxyIndex, int  role = Qt::DisplayRole) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fetchMore(const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role) const;
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QModelIndex  mapFromSource(const QModelIndex&  sourceIndex) const;
virtual QItemSelection  mapSelectionFromSource(const QItemSelection&  selection) const;
virtual QItemSelection  mapSelectionToSource(const QItemSelection&  selection) const;
virtual QModelIndex  mapToSource(const QModelIndex&  proxyIndex) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual QStringList  mimeTypes() const;
virtual bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual QModelIndex  parent(const QModelIndex&  child) const;
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual void revert();
virtual QHash<int , QByteArray >  roleNames() const;
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual void setSourceModel(QAbstractItemModel*  sourceModel);
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;
virtual void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDragActions() const;
virtual Qt::DropActions  supportedDropActions() const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractProxyModel : public QAbstractProxyModel
{ public:
inline QModelIndex  promoted_buddy(const QModelIndex&  index) const { return QAbstractProxyModel::buddy(index); }
inline bool  promoted_canFetchMore(const QModelIndex&  parent) const { return QAbstractProxyModel::canFetchMore(parent); }
inline QVariant  promoted_data(const QModelIndex&  proxyIndex, int  role = Qt::DisplayRole) const { return QAbstractProxyModel::data(proxyIndex, role); }
inline void promoted_fetchMore(const QModelIndex&  parent) { QAbstractProxyModel::fetchMore(parent); }
inline Qt::ItemFlags  promoted_flags(const QModelIndex&  index) const { return QAbstractProxyModel::flags(index); }
inline bool  promoted_hasChildren(const QModelIndex&  parent = QModelIndex()) const { return QAbstractProxyModel::hasChildren(parent); }
inline QVariant  promoted_headerData(int  section, Qt::Orientation  orientation, int  role) const { return QAbstractProxyModel::headerData(section, orientation, role); }
inline QMap<int , QVariant >  promoted_itemData(const QModelIndex&  index) const { return QAbstractProxyModel::itemData(index); }
inline QModelIndex  promoted_mapFromSource(const QModelIndex&  sourceIndex) const { return this->mapFromSource(sourceIndex); }
inline QItemSelection  promoted_mapSelectionFromSource(const QItemSelection&  selection) const { return QAbstractProxyModel::mapSelectionFromSource(selection); }
inline QItemSelection  promoted_mapSelectionToSource(const QItemSelection&  selection) const { return QAbstractProxyModel::mapSelectionToSource(selection); }
inline QModelIndex  promoted_mapToSource(const QModelIndex&  proxyIndex) const { return this->mapToSource(proxyIndex); }
inline QMimeData*  promoted_mimeData(const QList<QModelIndex >&  indexes) const { return QAbstractProxyModel::mimeData(indexes); }
inline QStringList  promoted_mimeTypes() const { return QAbstractProxyModel::mimeTypes(); }
inline void promoted_resetInternalData() { QAbstractProxyModel::resetInternalData(); }
inline void promoted_revert() { QAbstractProxyModel::revert(); }
inline bool  promoted_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QAbstractProxyModel::setData(index, value, role); }
inline bool  promoted_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QAbstractProxyModel::setHeaderData(section, orientation, value, role); }
inline bool  promoted_setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) { return QAbstractProxyModel::setItemData(index, roles); }
inline void promoted_setSourceModel(QAbstractItemModel*  sourceModel) { QAbstractProxyModel::setSourceModel(sourceModel); }
inline QModelIndex  promoted_sibling(int  row, int  column, const QModelIndex&  idx) const { return QAbstractProxyModel::sibling(row, column, idx); }
inline void promoted_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QAbstractProxyModel::sort(column, order); }
inline QSize  promoted_span(const QModelIndex&  index) const { return QAbstractProxyModel::span(index); }
inline bool  promoted_submit() { return QAbstractProxyModel::submit(); }
inline Qt::DropActions  promoted_supportedDropActions() const { return QAbstractProxyModel::supportedDropActions(); }
};

class PythonQtWrapper_QAbstractProxyModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractProxyModel* new_QAbstractProxyModel(QObject*  parent = 0);
void delete_QAbstractProxyModel(QAbstractProxyModel* obj) { delete obj; } 
   QModelIndex  buddy(QAbstractProxyModel* theWrappedObject, const QModelIndex&  index) const;
   bool  canFetchMore(QAbstractProxyModel* theWrappedObject, const QModelIndex&  parent) const;
   QVariant  data(QAbstractProxyModel* theWrappedObject, const QModelIndex&  proxyIndex, int  role = Qt::DisplayRole) const;
   void fetchMore(QAbstractProxyModel* theWrappedObject, const QModelIndex&  parent);
   Qt::ItemFlags  flags(QAbstractProxyModel* theWrappedObject, const QModelIndex&  index) const;
   bool  hasChildren(QAbstractProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   QVariant  headerData(QAbstractProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role) const;
   QMap<int , QVariant >  itemData(QAbstractProxyModel* theWrappedObject, const QModelIndex&  index) const;
   QModelIndex  mapFromSource(QAbstractProxyModel* theWrappedObject, const QModelIndex&  sourceIndex) const;
   QItemSelection  mapSelectionFromSource(QAbstractProxyModel* theWrappedObject, const QItemSelection&  selection) const;
   QItemSelection  mapSelectionToSource(QAbstractProxyModel* theWrappedObject, const QItemSelection&  selection) const;
   QModelIndex  mapToSource(QAbstractProxyModel* theWrappedObject, const QModelIndex&  proxyIndex) const;
   QMimeData*  mimeData(QAbstractProxyModel* theWrappedObject, const QList<QModelIndex >&  indexes) const;
   QStringList  mimeTypes(QAbstractProxyModel* theWrappedObject) const;
   void revert(QAbstractProxyModel* theWrappedObject);
   bool  setData(QAbstractProxyModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
   bool  setHeaderData(QAbstractProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
   bool  setItemData(QAbstractProxyModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles);
   void setSourceModel(QAbstractProxyModel* theWrappedObject, QAbstractItemModel*  sourceModel);
   QModelIndex  sibling(QAbstractProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const;
   void sort(QAbstractProxyModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   QAbstractItemModel*  sourceModel(QAbstractProxyModel* theWrappedObject) const;
   QSize  span(QAbstractProxyModel* theWrappedObject, const QModelIndex&  index) const;
   bool  submit(QAbstractProxyModel* theWrappedObject);
   Qt::DropActions  supportedDropActions(QAbstractProxyModel* theWrappedObject) const;
};





class PythonQtShell_QAbstractScrollArea : public QAbstractScrollArea
{
public:
    PythonQtShell_QAbstractScrollArea(QWidget*  parent = 0):QAbstractScrollArea(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractScrollArea();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual QSize  viewportSizeHint() const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractScrollArea : public QAbstractScrollArea
{ public:
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QAbstractScrollArea::contextMenuEvent(arg__1); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QAbstractScrollArea::dragEnterEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QAbstractScrollArea::dragLeaveEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { QAbstractScrollArea::dragMoveEvent(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { QAbstractScrollArea::dropEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QAbstractScrollArea::event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QAbstractScrollArea::eventFilter(arg__1, arg__2); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QAbstractScrollArea::keyPressEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mouseDoubleClickEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QAbstractScrollArea::paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QAbstractScrollArea::resizeEvent(arg__1); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QAbstractScrollArea::scrollContentsBy(dx, dy); }
inline void promoted_setViewportMargins(const QMargins&  margins) { QAbstractScrollArea::setViewportMargins(margins); }
inline void promoted_setViewportMargins(int  left, int  top, int  right, int  bottom) { QAbstractScrollArea::setViewportMargins(left, top, right, bottom); }
inline void promoted_setupViewport(QWidget*  viewport) { QAbstractScrollArea::setupViewport(viewport); }
inline bool  promoted_viewportEvent(QEvent*  arg__1) { return QAbstractScrollArea::viewportEvent(arg__1); }
inline QSize  promoted_viewportSizeHint() const { return QAbstractScrollArea::viewportSizeHint(); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QAbstractScrollArea::wheelEvent(arg__1); }
};

class PythonQtWrapper_QAbstractScrollArea : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractScrollArea* new_QAbstractScrollArea(QWidget*  parent = 0);
void delete_QAbstractScrollArea(QAbstractScrollArea* obj) { delete obj; } 
   void addScrollBarWidget(QAbstractScrollArea* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, Qt::Alignment  alignment);
   void contextMenuEvent(QAbstractScrollArea* theWrappedObject, QContextMenuEvent*  arg__1);
   QWidget*  cornerWidget(QAbstractScrollArea* theWrappedObject) const;
   void dragEnterEvent(QAbstractScrollArea* theWrappedObject, QDragEnterEvent*  arg__1);
   void dragLeaveEvent(QAbstractScrollArea* theWrappedObject, QDragLeaveEvent*  arg__1);
   void dragMoveEvent(QAbstractScrollArea* theWrappedObject, QDragMoveEvent*  arg__1);
   void dropEvent(QAbstractScrollArea* theWrappedObject, QDropEvent*  arg__1);
   bool  event(QAbstractScrollArea* theWrappedObject, QEvent*  arg__1);
   bool  eventFilter(QAbstractScrollArea* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   QScrollBar*  horizontalScrollBar(QAbstractScrollArea* theWrappedObject) const;
   Qt::ScrollBarPolicy  horizontalScrollBarPolicy(QAbstractScrollArea* theWrappedObject) const;
   void keyPressEvent(QAbstractScrollArea* theWrappedObject, QKeyEvent*  arg__1);
   QSize  maximumViewportSize(QAbstractScrollArea* theWrappedObject) const;
   QSize  minimumSizeHint(QAbstractScrollArea* theWrappedObject) const;
   void mouseDoubleClickEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1);
   void mouseMoveEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1);
   void mousePressEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1);
   void mouseReleaseEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1);
   void paintEvent(QAbstractScrollArea* theWrappedObject, QPaintEvent*  arg__1);
   void resizeEvent(QAbstractScrollArea* theWrappedObject, QResizeEvent*  arg__1);
   QList<QWidget* >  scrollBarWidgets(QAbstractScrollArea* theWrappedObject, Qt::Alignment  alignment);
   void scrollContentsBy(QAbstractScrollArea* theWrappedObject, int  dx, int  dy);
   void setCornerWidget(QAbstractScrollArea* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void setHorizontalScrollBar(QAbstractScrollArea* theWrappedObject, PythonQtPassOwnershipToCPP<QScrollBar* >  scrollbar);
   void setHorizontalScrollBarPolicy(QAbstractScrollArea* theWrappedObject, Qt::ScrollBarPolicy  arg__1);
   void setSizeAdjustPolicy(QAbstractScrollArea* theWrappedObject, QAbstractScrollArea::SizeAdjustPolicy  policy);
   void setVerticalScrollBar(QAbstractScrollArea* theWrappedObject, PythonQtPassOwnershipToCPP<QScrollBar* >  scrollbar);
   void setVerticalScrollBarPolicy(QAbstractScrollArea* theWrappedObject, Qt::ScrollBarPolicy  arg__1);
   void setViewport(QAbstractScrollArea* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void setViewportMargins(QAbstractScrollArea* theWrappedObject, const QMargins&  margins);
   void setViewportMargins(QAbstractScrollArea* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setupViewport(QAbstractScrollArea* theWrappedObject, QWidget*  viewport);
   QAbstractScrollArea::SizeAdjustPolicy  sizeAdjustPolicy(QAbstractScrollArea* theWrappedObject) const;
   QSize  sizeHint(QAbstractScrollArea* theWrappedObject) const;
   QScrollBar*  verticalScrollBar(QAbstractScrollArea* theWrappedObject) const;
   Qt::ScrollBarPolicy  verticalScrollBarPolicy(QAbstractScrollArea* theWrappedObject) const;
   QWidget*  viewport(QAbstractScrollArea* theWrappedObject) const;
   bool  viewportEvent(QAbstractScrollArea* theWrappedObject, QEvent*  arg__1);
   QSize  viewportSizeHint(QAbstractScrollArea* theWrappedObject) const;
   void wheelEvent(QAbstractScrollArea* theWrappedObject, QWheelEvent*  arg__1);
};





class PythonQtShell_QAbstractSlider : public QAbstractSlider
{
public:
    PythonQtShell_QAbstractSlider(QWidget*  parent = 0):QAbstractSlider(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractSlider();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void sliderChange(QAbstractSlider::SliderChange  change);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractSlider : public QAbstractSlider
{ public:
enum SliderChange{
  SliderRangeChange = QAbstractSlider::SliderRangeChange,   SliderOrientationChange = QAbstractSlider::SliderOrientationChange,   SliderStepsChange = QAbstractSlider::SliderStepsChange,   SliderValueChange = QAbstractSlider::SliderValueChange};
inline void promoted_changeEvent(QEvent*  e) { QAbstractSlider::changeEvent(e); }
inline bool  promoted_event(QEvent*  e) { return QAbstractSlider::event(e); }
inline void promoted_keyPressEvent(QKeyEvent*  ev) { QAbstractSlider::keyPressEvent(ev); }
inline QAbstractSlider::SliderAction  promoted_repeatAction() const { return QAbstractSlider::repeatAction(); }
inline void promoted_setRepeatAction(QAbstractSlider::SliderAction  action, int  thresholdTime = 500, int  repeatTime = 50) { QAbstractSlider::setRepeatAction(action, thresholdTime, repeatTime); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QAbstractSlider::timerEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QAbstractSlider::wheelEvent(e); }
};

class PythonQtWrapper_QAbstractSlider : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SliderAction SliderChange )
enum SliderAction{
  SliderNoAction = QAbstractSlider::SliderNoAction,   SliderSingleStepAdd = QAbstractSlider::SliderSingleStepAdd,   SliderSingleStepSub = QAbstractSlider::SliderSingleStepSub,   SliderPageStepAdd = QAbstractSlider::SliderPageStepAdd,   SliderPageStepSub = QAbstractSlider::SliderPageStepSub,   SliderToMinimum = QAbstractSlider::SliderToMinimum,   SliderToMaximum = QAbstractSlider::SliderToMaximum,   SliderMove = QAbstractSlider::SliderMove};
enum SliderChange{
  SliderRangeChange = PythonQtPublicPromoter_QAbstractSlider::SliderRangeChange,   SliderOrientationChange = PythonQtPublicPromoter_QAbstractSlider::SliderOrientationChange,   SliderStepsChange = PythonQtPublicPromoter_QAbstractSlider::SliderStepsChange,   SliderValueChange = PythonQtPublicPromoter_QAbstractSlider::SliderValueChange};
public slots:
QAbstractSlider* new_QAbstractSlider(QWidget*  parent = 0);
void delete_QAbstractSlider(QAbstractSlider* obj) { delete obj; } 
   void changeEvent(QAbstractSlider* theWrappedObject, QEvent*  e);
   bool  event(QAbstractSlider* theWrappedObject, QEvent*  e);
   bool  hasTracking(QAbstractSlider* theWrappedObject) const;
   bool  invertedAppearance(QAbstractSlider* theWrappedObject) const;
   bool  invertedControls(QAbstractSlider* theWrappedObject) const;
   bool  isSliderDown(QAbstractSlider* theWrappedObject) const;
   void keyPressEvent(QAbstractSlider* theWrappedObject, QKeyEvent*  ev);
   int  maximum(QAbstractSlider* theWrappedObject) const;
   int  minimum(QAbstractSlider* theWrappedObject) const;
   Qt::Orientation  orientation(QAbstractSlider* theWrappedObject) const;
   int  pageStep(QAbstractSlider* theWrappedObject) const;
   QAbstractSlider::SliderAction  repeatAction(QAbstractSlider* theWrappedObject) const;
   void setInvertedAppearance(QAbstractSlider* theWrappedObject, bool  arg__1);
   void setInvertedControls(QAbstractSlider* theWrappedObject, bool  arg__1);
   void setMaximum(QAbstractSlider* theWrappedObject, int  arg__1);
   void setMinimum(QAbstractSlider* theWrappedObject, int  arg__1);
   void setPageStep(QAbstractSlider* theWrappedObject, int  arg__1);
   void setRepeatAction(QAbstractSlider* theWrappedObject, QAbstractSlider::SliderAction  action, int  thresholdTime = 500, int  repeatTime = 50);
   void setSingleStep(QAbstractSlider* theWrappedObject, int  arg__1);
   void setSliderDown(QAbstractSlider* theWrappedObject, bool  arg__1);
   void setSliderPosition(QAbstractSlider* theWrappedObject, int  arg__1);
   void setTracking(QAbstractSlider* theWrappedObject, bool  enable);
   int  singleStep(QAbstractSlider* theWrappedObject) const;
   int  sliderPosition(QAbstractSlider* theWrappedObject) const;
   void timerEvent(QAbstractSlider* theWrappedObject, QTimerEvent*  arg__1);
   void triggerAction(QAbstractSlider* theWrappedObject, QAbstractSlider::SliderAction  action);
   int  value(QAbstractSlider* theWrappedObject) const;
   void wheelEvent(QAbstractSlider* theWrappedObject, QWheelEvent*  e);
};





class PythonQtShell_QAbstractSpinBox : public QAbstractSpinBox
{
public:
    PythonQtShell_QAbstractSpinBox(QWidget*  parent = 0):QAbstractSpinBox(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractSpinBox();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void clear();
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  input) const;
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
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual void stepBy(int  steps);
virtual QAbstractSpinBox::StepEnabled  stepEnabled() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractSpinBox : public QAbstractSpinBox
{ public:
inline void promoted_changeEvent(QEvent*  event) { QAbstractSpinBox::changeEvent(event); }
inline void promoted_clear() { QAbstractSpinBox::clear(); }
inline void promoted_closeEvent(QCloseEvent*  event) { QAbstractSpinBox::closeEvent(event); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { QAbstractSpinBox::contextMenuEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QAbstractSpinBox::event(event); }
inline void promoted_fixup(QString&  input) const { QAbstractSpinBox::fixup(input); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QAbstractSpinBox::focusInEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QAbstractSpinBox::focusOutEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { QAbstractSpinBox::hideEvent(event); }
inline void promoted_initStyleOption(QStyleOptionSpinBox*  option) const { QAbstractSpinBox::initStyleOption(option); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QAbstractSpinBox::inputMethodQuery(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QAbstractSpinBox::keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QAbstractSpinBox::keyReleaseEvent(event); }
inline QLineEdit*  promoted_lineEdit() const { return QAbstractSpinBox::lineEdit(); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QAbstractSpinBox::mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QAbstractSpinBox::mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QAbstractSpinBox::mouseReleaseEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QAbstractSpinBox::paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QAbstractSpinBox::resizeEvent(event); }
inline void promoted_setLineEdit(QLineEdit*  edit) { QAbstractSpinBox::setLineEdit(edit); }
inline void promoted_showEvent(QShowEvent*  event) { QAbstractSpinBox::showEvent(event); }
inline void promoted_stepBy(int  steps) { QAbstractSpinBox::stepBy(steps); }
inline QAbstractSpinBox::StepEnabled  promoted_stepEnabled() const { return QAbstractSpinBox::stepEnabled(); }
inline void promoted_timerEvent(QTimerEvent*  event) { QAbstractSpinBox::timerEvent(event); }
inline QValidator::State  promoted_validate(QString&  input, int&  pos) const { return QAbstractSpinBox::validate(input, pos); }
inline void promoted_wheelEvent(QWheelEvent*  event) { QAbstractSpinBox::wheelEvent(event); }
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
   Qt::Alignment  alignment(QAbstractSpinBox* theWrappedObject) const;
   QAbstractSpinBox::ButtonSymbols  buttonSymbols(QAbstractSpinBox* theWrappedObject) const;
   void changeEvent(QAbstractSpinBox* theWrappedObject, QEvent*  event);
   void clear(QAbstractSpinBox* theWrappedObject);
   void closeEvent(QAbstractSpinBox* theWrappedObject, QCloseEvent*  event);
   void contextMenuEvent(QAbstractSpinBox* theWrappedObject, QContextMenuEvent*  event);
   QAbstractSpinBox::CorrectionMode  correctionMode(QAbstractSpinBox* theWrappedObject) const;
   bool  event(QAbstractSpinBox* theWrappedObject, QEvent*  event);
   void fixup(QAbstractSpinBox* theWrappedObject, QString&  input) const;
   void focusInEvent(QAbstractSpinBox* theWrappedObject, QFocusEvent*  event);
   void focusOutEvent(QAbstractSpinBox* theWrappedObject, QFocusEvent*  event);
   bool  hasAcceptableInput(QAbstractSpinBox* theWrappedObject) const;
   bool  hasFrame(QAbstractSpinBox* theWrappedObject) const;
   void hideEvent(QAbstractSpinBox* theWrappedObject, QHideEvent*  event);
   void initStyleOption(QAbstractSpinBox* theWrappedObject, QStyleOptionSpinBox*  option) const;
   QVariant  inputMethodQuery(QAbstractSpinBox* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void interpretText(QAbstractSpinBox* theWrappedObject);
   bool  isAccelerated(QAbstractSpinBox* theWrappedObject) const;
   bool  isGroupSeparatorShown(QAbstractSpinBox* theWrappedObject) const;
   bool  isReadOnly(QAbstractSpinBox* theWrappedObject) const;
   void keyPressEvent(QAbstractSpinBox* theWrappedObject, QKeyEvent*  event);
   void keyReleaseEvent(QAbstractSpinBox* theWrappedObject, QKeyEvent*  event);
   bool  keyboardTracking(QAbstractSpinBox* theWrappedObject) const;
   QLineEdit*  lineEdit(QAbstractSpinBox* theWrappedObject) const;
   QSize  minimumSizeHint(QAbstractSpinBox* theWrappedObject) const;
   void mouseMoveEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event);
   void mousePressEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event);
   void mouseReleaseEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event);
   void paintEvent(QAbstractSpinBox* theWrappedObject, QPaintEvent*  event);
   void resizeEvent(QAbstractSpinBox* theWrappedObject, QResizeEvent*  event);
   void setAccelerated(QAbstractSpinBox* theWrappedObject, bool  on);
   void setAlignment(QAbstractSpinBox* theWrappedObject, Qt::Alignment  flag);
   void setButtonSymbols(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::ButtonSymbols  bs);
   void setCorrectionMode(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::CorrectionMode  cm);
   void setFrame(QAbstractSpinBox* theWrappedObject, bool  arg__1);
   void setGroupSeparatorShown(QAbstractSpinBox* theWrappedObject, bool  shown);
   void setKeyboardTracking(QAbstractSpinBox* theWrappedObject, bool  kt);
   void setLineEdit(QAbstractSpinBox* theWrappedObject, QLineEdit*  edit);
   void setReadOnly(QAbstractSpinBox* theWrappedObject, bool  r);
   void setSpecialValueText(QAbstractSpinBox* theWrappedObject, const QString&  txt);
   void setWrapping(QAbstractSpinBox* theWrappedObject, bool  w);
   void showEvent(QAbstractSpinBox* theWrappedObject, QShowEvent*  event);
   QSize  sizeHint(QAbstractSpinBox* theWrappedObject) const;
   QString  specialValueText(QAbstractSpinBox* theWrappedObject) const;
   void stepBy(QAbstractSpinBox* theWrappedObject, int  steps);
   QAbstractSpinBox::StepEnabled  stepEnabled(QAbstractSpinBox* theWrappedObject) const;
   QString  text(QAbstractSpinBox* theWrappedObject) const;
   void timerEvent(QAbstractSpinBox* theWrappedObject, QTimerEvent*  event);
   QValidator::State  validate(QAbstractSpinBox* theWrappedObject, QString&  input, int&  pos) const;
   void wheelEvent(QAbstractSpinBox* theWrappedObject, QWheelEvent*  event);
   bool  wrapping(QAbstractSpinBox* theWrappedObject) const;
};





class PythonQtShell_QAbstractTableModel : public QAbstractTableModel
{
public:
    PythonQtShell_QAbstractTableModel(QObject*  parent = 0):QAbstractTableModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractTableModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual void customEvent(QEvent*  arg__1);
virtual QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fetchMore(const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual QStringList  mimeTypes() const;
virtual bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual void revert();
virtual QHash<int , QByteArray >  roleNames() const;
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;
virtual void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDragActions() const;
virtual Qt::DropActions  supportedDropActions() const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractTableModel : public QAbstractTableModel
{ public:
inline bool  promoted_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractTableModel::dropMimeData(data, action, row, column, parent); }
inline Qt::ItemFlags  promoted_flags(const QModelIndex&  index) const { return QAbstractTableModel::flags(index); }
inline QModelIndex  promoted_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QAbstractTableModel::index(row, column, parent); }
};

class PythonQtWrapper_QAbstractTableModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractTableModel* new_QAbstractTableModel(QObject*  parent = 0);
void delete_QAbstractTableModel(QAbstractTableModel* obj) { delete obj; } 
   bool  dropMimeData(QAbstractTableModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
   Qt::ItemFlags  flags(QAbstractTableModel* theWrappedObject, const QModelIndex&  index) const;
   QModelIndex  index(QAbstractTableModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   QObject*  parent(QAbstractTableModel* theWrappedObject) const;
};





class PythonQtShell_QAbstractTextDocumentLayout : public QAbstractTextDocumentLayout
{
public:
    PythonQtShell_QAbstractTextDocumentLayout(QTextDocument*  doc):QAbstractTextDocumentLayout(doc),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractTextDocumentLayout();

virtual QRectF  blockBoundingRect(const QTextBlock&  block) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void documentChanged(int  from, int  charsRemoved, int  charsAdded);
virtual QSizeF  documentSize() const;
virtual void draw(QPainter*  painter, const QAbstractTextDocumentLayout::PaintContext&  context);
virtual void drawInlineObject(QPainter*  painter, const QRectF&  rect, QTextInlineObject  object, int  posInDocument, const QTextFormat&  format);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QRectF  frameBoundingRect(QTextFrame*  frame) const;
virtual int  hitTest(const QPointF&  point, Qt::HitTestAccuracy  accuracy) const;
virtual int  pageCount() const;
virtual void positionInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format);
virtual void resizeInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractTextDocumentLayout : public QAbstractTextDocumentLayout
{ public:
inline QRectF  promoted_blockBoundingRect(const QTextBlock&  block) const { return this->blockBoundingRect(block); }
inline void promoted_documentChanged(int  from, int  charsRemoved, int  charsAdded) { this->documentChanged(from, charsRemoved, charsAdded); }
inline QSizeF  promoted_documentSize() const { return this->documentSize(); }
inline void promoted_draw(QPainter*  painter, const QAbstractTextDocumentLayout::PaintContext&  context) { this->draw(painter, context); }
inline void promoted_drawInlineObject(QPainter*  painter, const QRectF&  rect, QTextInlineObject  object, int  posInDocument, const QTextFormat&  format) { QAbstractTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format); }
inline QTextCharFormat  promoted_format(int  pos) { return QAbstractTextDocumentLayout::format(pos); }
inline int  promoted_formatIndex(int  pos) { return QAbstractTextDocumentLayout::formatIndex(pos); }
inline QRectF  promoted_frameBoundingRect(QTextFrame*  frame) const { return this->frameBoundingRect(frame); }
inline int  promoted_hitTest(const QPointF&  point, Qt::HitTestAccuracy  accuracy) const { return this->hitTest(point, accuracy); }
inline int  promoted_pageCount() const { return this->pageCount(); }
inline void promoted_positionInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format) { QAbstractTextDocumentLayout::positionInlineObject(item, posInDocument, format); }
inline void promoted_resizeInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format) { QAbstractTextDocumentLayout::resizeInlineObject(item, posInDocument, format); }
};

class PythonQtWrapper_QAbstractTextDocumentLayout : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractTextDocumentLayout* new_QAbstractTextDocumentLayout(QTextDocument*  doc);
void delete_QAbstractTextDocumentLayout(QAbstractTextDocumentLayout* obj) { delete obj; } 
   QString  anchorAt(QAbstractTextDocumentLayout* theWrappedObject, const QPointF&  pos) const;
   QRectF  blockBoundingRect(QAbstractTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const;
   QTextDocument*  document(QAbstractTextDocumentLayout* theWrappedObject) const;
   void documentChanged(QAbstractTextDocumentLayout* theWrappedObject, int  from, int  charsRemoved, int  charsAdded);
   QSizeF  documentSize(QAbstractTextDocumentLayout* theWrappedObject) const;
   void draw(QAbstractTextDocumentLayout* theWrappedObject, QPainter*  painter, const QAbstractTextDocumentLayout::PaintContext&  context);
   void drawInlineObject(QAbstractTextDocumentLayout* theWrappedObject, QPainter*  painter, const QRectF&  rect, QTextInlineObject  object, int  posInDocument, const QTextFormat&  format);
   QTextCharFormat  format(QAbstractTextDocumentLayout* theWrappedObject, int  pos);
   int  formatIndex(QAbstractTextDocumentLayout* theWrappedObject, int  pos);
   QRectF  frameBoundingRect(QAbstractTextDocumentLayout* theWrappedObject, QTextFrame*  frame) const;
   int  hitTest(QAbstractTextDocumentLayout* theWrappedObject, const QPointF&  point, Qt::HitTestAccuracy  accuracy) const;
   int  pageCount(QAbstractTextDocumentLayout* theWrappedObject) const;
   QPaintDevice*  paintDevice(QAbstractTextDocumentLayout* theWrappedObject) const;
   void positionInlineObject(QAbstractTextDocumentLayout* theWrappedObject, QTextInlineObject  item, int  posInDocument, const QTextFormat&  format);
   void registerHandler(QAbstractTextDocumentLayout* theWrappedObject, int  objectType, QObject*  component);
   void resizeInlineObject(QAbstractTextDocumentLayout* theWrappedObject, QTextInlineObject  item, int  posInDocument, const QTextFormat&  format);
   void setPaintDevice(QAbstractTextDocumentLayout* theWrappedObject, QPaintDevice*  device);
   void unregisterHandler(QAbstractTextDocumentLayout* theWrappedObject, int  objectType, QObject*  component = 0);
};





class PythonQtShell_QAbstractTextDocumentLayout__PaintContext : public QAbstractTextDocumentLayout::PaintContext
{
public:
    PythonQtShell_QAbstractTextDocumentLayout__PaintContext():QAbstractTextDocumentLayout::PaintContext(),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractTextDocumentLayout__PaintContext();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAbstractTextDocumentLayout__PaintContext : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractTextDocumentLayout::PaintContext* new_QAbstractTextDocumentLayout__PaintContext();
QAbstractTextDocumentLayout::PaintContext* new_QAbstractTextDocumentLayout__PaintContext(const QAbstractTextDocumentLayout::PaintContext& other) {
PythonQtShell_QAbstractTextDocumentLayout__PaintContext* a = new PythonQtShell_QAbstractTextDocumentLayout__PaintContext();
*((QAbstractTextDocumentLayout::PaintContext*)a) = other;
return a; }
void delete_QAbstractTextDocumentLayout__PaintContext(QAbstractTextDocumentLayout::PaintContext* obj) { delete obj; } 
void py_set_clip(QAbstractTextDocumentLayout::PaintContext* theWrappedObject, QRectF  clip){ theWrappedObject->clip = clip; }
QRectF  py_get_clip(QAbstractTextDocumentLayout::PaintContext* theWrappedObject){ return theWrappedObject->clip; }
void py_set_cursorPosition(QAbstractTextDocumentLayout::PaintContext* theWrappedObject, int  cursorPosition){ theWrappedObject->cursorPosition = cursorPosition; }
int  py_get_cursorPosition(QAbstractTextDocumentLayout::PaintContext* theWrappedObject){ return theWrappedObject->cursorPosition; }
void py_set_palette(QAbstractTextDocumentLayout::PaintContext* theWrappedObject, QPalette  palette){ theWrappedObject->palette = palette; }
QPalette  py_get_palette(QAbstractTextDocumentLayout::PaintContext* theWrappedObject){ return theWrappedObject->palette; }
};





class PythonQtShell_QAbstractTextDocumentLayout__Selection : public QAbstractTextDocumentLayout::Selection
{
public:
    PythonQtShell_QAbstractTextDocumentLayout__Selection():QAbstractTextDocumentLayout::Selection(),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractTextDocumentLayout__Selection();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAbstractTextDocumentLayout__Selection : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractTextDocumentLayout::Selection* new_QAbstractTextDocumentLayout__Selection();
QAbstractTextDocumentLayout::Selection* new_QAbstractTextDocumentLayout__Selection(const QAbstractTextDocumentLayout::Selection& other) {
PythonQtShell_QAbstractTextDocumentLayout__Selection* a = new PythonQtShell_QAbstractTextDocumentLayout__Selection();
*((QAbstractTextDocumentLayout::Selection*)a) = other;
return a; }
void delete_QAbstractTextDocumentLayout__Selection(QAbstractTextDocumentLayout::Selection* obj) { delete obj; } 
void py_set_cursor(QAbstractTextDocumentLayout::Selection* theWrappedObject, QTextCursor  cursor){ theWrappedObject->cursor = cursor; }
QTextCursor  py_get_cursor(QAbstractTextDocumentLayout::Selection* theWrappedObject){ return theWrappedObject->cursor; }
void py_set_format(QAbstractTextDocumentLayout::Selection* theWrappedObject, QTextCharFormat  format){ theWrappedObject->format = format; }
QTextCharFormat  py_get_format(QAbstractTextDocumentLayout::Selection* theWrappedObject){ return theWrappedObject->format; }
};





class PythonQtShell_QAccessibleEvent : public QAccessibleEvent
{
public:
    PythonQtShell_QAccessibleEvent(QObject*  obj, QAccessible::Event  typ):QAccessibleEvent(obj, typ),_wrapper(NULL) {};

   ~PythonQtShell_QAccessibleEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAccessibleEvent : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleEvent* new_QAccessibleEvent(QObject*  obj, QAccessible::Event  typ);
void delete_QAccessibleEvent(QAccessibleEvent* obj) { delete obj; } 
   int  child(QAccessibleEvent* theWrappedObject) const;
   QObject*  object(QAccessibleEvent* theWrappedObject) const;
   void setChild(QAccessibleEvent* theWrappedObject, int  chld);
   QAccessible::Event  type(QAccessibleEvent* theWrappedObject) const;
    QString py_toString(QAccessibleEvent*);
};





class PythonQtShell_QAction : public QAction
{
public:
    PythonQtShell_QAction(QObject*  parent):QAction(parent),_wrapper(NULL) {};
    PythonQtShell_QAction(const QIcon&  icon, const QString&  text, QObject*  parent):QAction(icon, text, parent),_wrapper(NULL) {};
    PythonQtShell_QAction(const QString&  text, QObject*  parent):QAction(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QAction();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

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
   QActionGroup*  actionGroup(QAction* theWrappedObject) const;
   void activate(QAction* theWrappedObject, QAction::ActionEvent  event);
   QList<QGraphicsWidget* >  associatedGraphicsWidgets(QAction* theWrappedObject) const;
   QList<QWidget* >  associatedWidgets(QAction* theWrappedObject) const;
   bool  autoRepeat(QAction* theWrappedObject) const;
   QVariant  data(QAction* theWrappedObject) const;
   bool  event(QAction* theWrappedObject, QEvent*  arg__1);
   QFont  font(QAction* theWrappedObject) const;
   QIcon  icon(QAction* theWrappedObject) const;
   QString  iconText(QAction* theWrappedObject) const;
   bool  isCheckable(QAction* theWrappedObject) const;
   bool  isChecked(QAction* theWrappedObject) const;
   bool  isEnabled(QAction* theWrappedObject) const;
   bool  isIconVisibleInMenu(QAction* theWrappedObject) const;
   bool  isSeparator(QAction* theWrappedObject) const;
   bool  isVisible(QAction* theWrappedObject) const;
   QMenu*  menu(QAction* theWrappedObject) const;
   QAction::MenuRole  menuRole(QAction* theWrappedObject) const;
   QWidget*  parentWidget(QAction* theWrappedObject) const;
   QAction::Priority  priority(QAction* theWrappedObject) const;
   void setActionGroup(QAction* theWrappedObject, QActionGroup*  group);
   void setAutoRepeat(QAction* theWrappedObject, bool  arg__1);
   void setCheckable(QAction* theWrappedObject, bool  arg__1);
   void setData(QAction* theWrappedObject, const QVariant&  var);
   void setFont(QAction* theWrappedObject, const QFont&  font);
   void setIcon(QAction* theWrappedObject, const QIcon&  icon);
   void setIconText(QAction* theWrappedObject, const QString&  text);
   void setIconVisibleInMenu(QAction* theWrappedObject, bool  visible);
   void setMenu(QAction* theWrappedObject, QMenu*  menu);
   void setMenuRole(QAction* theWrappedObject, QAction::MenuRole  menuRole);
   void setPriority(QAction* theWrappedObject, QAction::Priority  priority);
   void setSeparator(QAction* theWrappedObject, bool  b);
   void setShortcut(QAction* theWrappedObject, const QKeySequence&  shortcut);
   void setShortcutContext(QAction* theWrappedObject, Qt::ShortcutContext  context);
   void setShortcuts(QAction* theWrappedObject, QKeySequence::StandardKey  arg__1);
   void setShortcuts(QAction* theWrappedObject, const QList<QKeySequence >&  shortcuts);
   void setStatusTip(QAction* theWrappedObject, const QString&  statusTip);
   void setText(QAction* theWrappedObject, const QString&  text);
   void setToolTip(QAction* theWrappedObject, const QString&  tip);
   void setWhatsThis(QAction* theWrappedObject, const QString&  what);
   QKeySequence  shortcut(QAction* theWrappedObject) const;
   Qt::ShortcutContext  shortcutContext(QAction* theWrappedObject) const;
   QList<QKeySequence >  shortcuts(QAction* theWrappedObject) const;
   bool  showStatusText(QAction* theWrappedObject, QWidget*  widget = 0);
   QString  statusTip(QAction* theWrappedObject) const;
   QString  text(QAction* theWrappedObject) const;
   QString  toolTip(QAction* theWrappedObject) const;
   QString  whatsThis(QAction* theWrappedObject) const;
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

   ~PythonQtShell_QActionGroup();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QActionGroup : public QObject
{ Q_OBJECT
public:
public slots:
QActionGroup* new_QActionGroup(QObject*  parent);
void delete_QActionGroup(QActionGroup* obj) { delete obj; } 
   QList<QAction* >  actions(QActionGroup* theWrappedObject) const;
   QAction*  addAction(QActionGroup* theWrappedObject, QAction*  a);
   QAction*  addAction(QActionGroup* theWrappedObject, const QIcon&  icon, const QString&  text);
   QAction*  addAction(QActionGroup* theWrappedObject, const QString&  text);
   QAction*  checkedAction(QActionGroup* theWrappedObject) const;
   bool  isEnabled(QActionGroup* theWrappedObject) const;
   bool  isExclusive(QActionGroup* theWrappedObject) const;
   bool  isVisible(QActionGroup* theWrappedObject) const;
   void removeAction(QActionGroup* theWrappedObject, QAction*  a);
};





class PythonQtPublicPromoter_QApplication : public QApplication
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QApplication::event(arg__1); }
inline bool  promoted_notify(QObject*  arg__1, QEvent*  arg__2) { return QApplication::notify(arg__1, arg__2); }
};

class PythonQtWrapper_QApplication : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ColorSpec )
enum ColorSpec{
  NormalColor = QApplication::NormalColor,   CustomColor = QApplication::CustomColor,   ManyColor = QApplication::ManyColor};
public slots:
void delete_QApplication(QApplication* obj) { delete obj; } 
   QWidget*  static_QApplication_activeModalWidget();
   QWidget*  static_QApplication_activePopupWidget();
   QWidget*  static_QApplication_activeWindow();
   void static_QApplication_alert(QWidget*  widget, int  duration = 0);
   QList<QWidget* >  static_QApplication_allWidgets();
   void static_QApplication_beep();
   int  static_QApplication_colorSpec();
   int  static_QApplication_cursorFlashTime();
   QDesktopWidget*  static_QApplication_desktop();
   int  static_QApplication_doubleClickInterval();
   bool  event(QApplication* theWrappedObject, QEvent*  arg__1);
   int  static_QApplication_exec();
   QWidget*  static_QApplication_focusWidget();
   QFont  static_QApplication_font();
   QFont  static_QApplication_font(const QWidget*  arg__1);
   QSize  static_QApplication_globalStrut();
   bool  static_QApplication_isEffectEnabled(Qt::UIEffect  arg__1);
   int  static_QApplication_keyboardInputInterval();
   bool  notify(QApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   QPalette  static_QApplication_palette();
   QPalette  static_QApplication_palette(const QWidget*  arg__1);
   void static_QApplication_setActiveWindow(QWidget*  act);
   void static_QApplication_setColorSpec(int  arg__1);
   void static_QApplication_setCursorFlashTime(int  arg__1);
   void static_QApplication_setDoubleClickInterval(int  arg__1);
   void static_QApplication_setEffectEnabled(Qt::UIEffect  arg__1, bool  enable = true);
   void static_QApplication_setFont(const QFont&  arg__1, const char*  className = 0);
   void static_QApplication_setGlobalStrut(const QSize&  arg__1);
   void static_QApplication_setKeyboardInputInterval(int  arg__1);
   void static_QApplication_setPalette(const QPalette&  arg__1, const char*  className = 0);
   void static_QApplication_setStartDragDistance(int  l);
   void static_QApplication_setStartDragTime(int  ms);
   void static_QApplication_setStyle(QStyle*  arg__1);
   QStyle*  static_QApplication_setStyle(const QString&  arg__1);
   void static_QApplication_setWheelScrollLines(int  arg__1);
   void static_QApplication_setWindowIcon(const QIcon&  icon);
   int  static_QApplication_startDragDistance();
   int  static_QApplication_startDragTime();
   QStyle*  static_QApplication_style();
   QString  styleSheet(QApplication* theWrappedObject) const;
   QWidget*  static_QApplication_topLevelAt(const QPoint&  p);
   QWidget*  static_QApplication_topLevelAt(int  x, int  y);
   QList<QWidget* >  static_QApplication_topLevelWidgets();
   int  static_QApplication_wheelScrollLines();
   QWidget*  static_QApplication_widgetAt(const QPoint&  p);
   QWidget*  static_QApplication_widgetAt(int  x, int  y);
   QIcon  static_QApplication_windowIcon();
};





class PythonQtWrapper_QBackingStore : public QObject
{ Q_OBJECT
public:
public slots:
QBackingStore* new_QBackingStore(QWindow*  window);
void delete_QBackingStore(QBackingStore* obj) { delete obj; } 
   void beginPaint(QBackingStore* theWrappedObject, const QRegion&  arg__1);
   void endPaint(QBackingStore* theWrappedObject);
   void flush(QBackingStore* theWrappedObject, const QRegion&  region, QWindow*  window = 0, const QPoint&  offset = QPoint());
   bool  hasStaticContents(QBackingStore* theWrappedObject) const;
   QPaintDevice*  paintDevice(QBackingStore* theWrappedObject);
   void resize(QBackingStore* theWrappedObject, const QSize&  size);
   bool  scroll(QBackingStore* theWrappedObject, const QRegion&  area, int  dx, int  dy);
   void setStaticContents(QBackingStore* theWrappedObject, const QRegion&  region);
   QSize  size(QBackingStore* theWrappedObject) const;
   QRegion  staticContents(QBackingStore* theWrappedObject) const;
   QWindow*  window(QBackingStore* theWrappedObject) const;
};





class PythonQtShell_QBoxLayout : public QBoxLayout
{
public:
    PythonQtShell_QBoxLayout(QBoxLayout::Direction  arg__1, QWidget*  parent = 0):QBoxLayout(arg__1, parent),_wrapper(NULL) {};

   ~PythonQtShell_QBoxLayout();

virtual void addItem(QLayoutItem*  arg__1);
virtual void childEvent(QChildEvent*  e);
virtual QSizePolicy::ControlTypes  controlTypes() const;
virtual int  count() const;
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayoutItem*  itemAt(int  arg__1) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QLayoutItem*  takeAt(int  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QBoxLayout : public QBoxLayout
{ public:
inline void promoted_addItem(QLayoutItem*  arg__1) { QBoxLayout::addItem(arg__1); }
inline int  promoted_count() const { return QBoxLayout::count(); }
inline Qt::Orientations  promoted_expandingDirections() const { return QBoxLayout::expandingDirections(); }
inline void promoted_invalidate() { QBoxLayout::invalidate(); }
inline QLayoutItem*  promoted_itemAt(int  arg__1) const { return QBoxLayout::itemAt(arg__1); }
inline QSize  promoted_maximumSize() const { return QBoxLayout::maximumSize(); }
inline QSize  promoted_minimumSize() const { return QBoxLayout::minimumSize(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QBoxLayout::setGeometry(arg__1); }
inline QLayoutItem*  promoted_takeAt(int  arg__1) { return QBoxLayout::takeAt(arg__1); }
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
   void addItem(QBoxLayout* theWrappedObject, QLayoutItem*  arg__1);
   void addLayout(QBoxLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  layout, int  stretch = 0);
   void addSpacerItem(QBoxLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QSpacerItem* >  spacerItem);
   void addSpacing(QBoxLayout* theWrappedObject, int  size);
   void addStretch(QBoxLayout* theWrappedObject, int  stretch = 0);
   void addStrut(QBoxLayout* theWrappedObject, int  arg__1);
   void addWidget(QBoxLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  arg__1, int  stretch = 0, Qt::Alignment  alignment = 0);
   int  count(QBoxLayout* theWrappedObject) const;
   QBoxLayout::Direction  direction(QBoxLayout* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QBoxLayout* theWrappedObject) const;
   bool  hasHeightForWidth(QBoxLayout* theWrappedObject) const;
   int  heightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const;
   void insertItem(QBoxLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QLayoutItem* >  arg__2);
   void insertLayout(QBoxLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QLayout* >  layout, int  stretch = 0);
   void insertSpacerItem(QBoxLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QSpacerItem* >  spacerItem);
   void insertSpacing(QBoxLayout* theWrappedObject, int  index, int  size);
   void insertStretch(QBoxLayout* theWrappedObject, int  index, int  stretch = 0);
   void insertWidget(QBoxLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, int  stretch = 0, Qt::Alignment  alignment = 0);
   void invalidate(QBoxLayout* theWrappedObject);
   QLayoutItem*  itemAt(QBoxLayout* theWrappedObject, int  arg__1) const;
   QSize  maximumSize(QBoxLayout* theWrappedObject) const;
   int  minimumHeightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const;
   QSize  minimumSize(QBoxLayout* theWrappedObject) const;
   void setDirection(QBoxLayout* theWrappedObject, QBoxLayout::Direction  arg__1);
   void setGeometry(QBoxLayout* theWrappedObject, const QRect&  arg__1);
   void setSpacing(QBoxLayout* theWrappedObject, int  spacing);
   void setStretch(QBoxLayout* theWrappedObject, int  index, int  stretch);
   bool  setStretchFactor(QBoxLayout* theWrappedObject, QLayout*  l, int  stretch);
   bool  setStretchFactor(QBoxLayout* theWrappedObject, QWidget*  w, int  stretch);
   QSize  sizeHint(QBoxLayout* theWrappedObject) const;
   int  spacing(QBoxLayout* theWrappedObject) const;
   int  stretch(QBoxLayout* theWrappedObject, int  index) const;
   QLayoutItem*  takeAt(QBoxLayout* theWrappedObject, int  arg__1);
};





class PythonQtShell_QButtonGroup : public QButtonGroup
{
public:
    PythonQtShell_QButtonGroup(QObject*  parent = 0):QButtonGroup(parent),_wrapper(NULL) {};

   ~PythonQtShell_QButtonGroup();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QButtonGroup : public QObject
{ Q_OBJECT
public:
public slots:
QButtonGroup* new_QButtonGroup(QObject*  parent = 0);
void delete_QButtonGroup(QButtonGroup* obj) { delete obj; } 
   void addButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1, int  id = -1);
   QAbstractButton*  button(QButtonGroup* theWrappedObject, int  id) const;
   QList<QAbstractButton* >  buttons(QButtonGroup* theWrappedObject) const;
   QAbstractButton*  checkedButton(QButtonGroup* theWrappedObject) const;
   int  checkedId(QButtonGroup* theWrappedObject) const;
   bool  exclusive(QButtonGroup* theWrappedObject) const;
   int  id(QButtonGroup* theWrappedObject, QAbstractButton*  button) const;
   void removeButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1);
   void setExclusive(QButtonGroup* theWrappedObject, bool  arg__1);
   void setId(QButtonGroup* theWrappedObject, QAbstractButton*  button, int  id);
};





class PythonQtShell_QCalendarWidget : public QCalendarWidget
{
public:
    PythonQtShell_QCalendarWidget(QWidget*  parent = 0):QCalendarWidget(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCalendarWidget();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void paintCell(QPainter*  painter, const QRect&  rect, const QDate&  date) const;
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCalendarWidget : public QCalendarWidget
{ public:
inline bool  promoted_event(QEvent*  event) { return QCalendarWidget::event(event); }
inline bool  promoted_eventFilter(QObject*  watched, QEvent*  event) { return QCalendarWidget::eventFilter(watched, event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QCalendarWidget::keyPressEvent(event); }
inline QSize  promoted_minimumSizeHint() const { return QCalendarWidget::minimumSizeHint(); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QCalendarWidget::mousePressEvent(event); }
inline void promoted_paintCell(QPainter*  painter, const QRect&  rect, const QDate&  date) const { QCalendarWidget::paintCell(painter, rect, date); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QCalendarWidget::resizeEvent(event); }
inline QSize  promoted_sizeHint() const { return QCalendarWidget::sizeHint(); }
inline void promoted_updateCell(const QDate&  date) { QCalendarWidget::updateCell(date); }
inline void promoted_updateCells() { QCalendarWidget::updateCells(); }
};

class PythonQtWrapper_QCalendarWidget : public QObject
{ Q_OBJECT
public:
public slots:
QCalendarWidget* new_QCalendarWidget(QWidget*  parent = 0);
void delete_QCalendarWidget(QCalendarWidget* obj) { delete obj; } 
   int  dateEditAcceptDelay(QCalendarWidget* theWrappedObject) const;
   QMap<QDate , QTextCharFormat >  dateTextFormat(QCalendarWidget* theWrappedObject) const;
   QTextCharFormat  dateTextFormat(QCalendarWidget* theWrappedObject, const QDate&  date) const;
   bool  event(QCalendarWidget* theWrappedObject, QEvent*  event);
   bool  eventFilter(QCalendarWidget* theWrappedObject, QObject*  watched, QEvent*  event);
   Qt::DayOfWeek  firstDayOfWeek(QCalendarWidget* theWrappedObject) const;
   QTextCharFormat  headerTextFormat(QCalendarWidget* theWrappedObject) const;
   QCalendarWidget::HorizontalHeaderFormat  horizontalHeaderFormat(QCalendarWidget* theWrappedObject) const;
   bool  isDateEditEnabled(QCalendarWidget* theWrappedObject) const;
   bool  isGridVisible(QCalendarWidget* theWrappedObject) const;
   bool  isNavigationBarVisible(QCalendarWidget* theWrappedObject) const;
   void keyPressEvent(QCalendarWidget* theWrappedObject, QKeyEvent*  event);
   QDate  maximumDate(QCalendarWidget* theWrappedObject) const;
   QDate  minimumDate(QCalendarWidget* theWrappedObject) const;
   QSize  minimumSizeHint(QCalendarWidget* theWrappedObject) const;
   int  monthShown(QCalendarWidget* theWrappedObject) const;
   void mousePressEvent(QCalendarWidget* theWrappedObject, QMouseEvent*  event);
   void paintCell(QCalendarWidget* theWrappedObject, QPainter*  painter, const QRect&  rect, const QDate&  date) const;
   void resizeEvent(QCalendarWidget* theWrappedObject, QResizeEvent*  event);
   QDate  selectedDate(QCalendarWidget* theWrappedObject) const;
   QCalendarWidget::SelectionMode  selectionMode(QCalendarWidget* theWrappedObject) const;
   void setDateEditAcceptDelay(QCalendarWidget* theWrappedObject, int  delay);
   void setDateEditEnabled(QCalendarWidget* theWrappedObject, bool  enable);
   void setDateTextFormat(QCalendarWidget* theWrappedObject, const QDate&  date, const QTextCharFormat&  format);
   void setFirstDayOfWeek(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek);
   void setHeaderTextFormat(QCalendarWidget* theWrappedObject, const QTextCharFormat&  format);
   void setHorizontalHeaderFormat(QCalendarWidget* theWrappedObject, QCalendarWidget::HorizontalHeaderFormat  format);
   void setMaximumDate(QCalendarWidget* theWrappedObject, const QDate&  date);
   void setMinimumDate(QCalendarWidget* theWrappedObject, const QDate&  date);
   void setSelectionMode(QCalendarWidget* theWrappedObject, QCalendarWidget::SelectionMode  mode);
   void setVerticalHeaderFormat(QCalendarWidget* theWrappedObject, QCalendarWidget::VerticalHeaderFormat  format);
   void setWeekdayTextFormat(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek, const QTextCharFormat&  format);
   QSize  sizeHint(QCalendarWidget* theWrappedObject) const;
   void updateCell(QCalendarWidget* theWrappedObject, const QDate&  date);
   void updateCells(QCalendarWidget* theWrappedObject);
   QCalendarWidget::VerticalHeaderFormat  verticalHeaderFormat(QCalendarWidget* theWrappedObject) const;
   QTextCharFormat  weekdayTextFormat(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek) const;
   int  yearShown(QCalendarWidget* theWrappedObject) const;
};





class PythonQtShell_QCheckBox : public QCheckBox
{
public:
    PythonQtShell_QCheckBox(QWidget*  parent = 0):QCheckBox(parent),_wrapper(NULL) {};
    PythonQtShell_QCheckBox(const QString&  text, QWidget*  parent = 0):QCheckBox(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QCheckBox();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void checkStateSet();
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual bool  hitButton(const QPoint&  pos) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void nextCheckState();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCheckBox : public QCheckBox
{ public:
inline void promoted_checkStateSet() { QCheckBox::checkStateSet(); }
inline bool  promoted_event(QEvent*  e) { return QCheckBox::event(e); }
inline bool  promoted_hitButton(const QPoint&  pos) const { return QCheckBox::hitButton(pos); }
inline void promoted_initStyleOption(QStyleOptionButton*  option) const { QCheckBox::initStyleOption(option); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QCheckBox::mouseMoveEvent(arg__1); }
inline void promoted_nextCheckState() { QCheckBox::nextCheckState(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QCheckBox::paintEvent(arg__1); }
};

class PythonQtWrapper_QCheckBox : public QObject
{ Q_OBJECT
public:
public slots:
QCheckBox* new_QCheckBox(QWidget*  parent = 0);
QCheckBox* new_QCheckBox(const QString&  text, QWidget*  parent = 0);
void delete_QCheckBox(QCheckBox* obj) { delete obj; } 
   Qt::CheckState  checkState(QCheckBox* theWrappedObject) const;
   void checkStateSet(QCheckBox* theWrappedObject);
   bool  event(QCheckBox* theWrappedObject, QEvent*  e);
   bool  hitButton(QCheckBox* theWrappedObject, const QPoint&  pos) const;
   void initStyleOption(QCheckBox* theWrappedObject, QStyleOptionButton*  option) const;
   bool  isTristate(QCheckBox* theWrappedObject) const;
   QSize  minimumSizeHint(QCheckBox* theWrappedObject) const;
   void mouseMoveEvent(QCheckBox* theWrappedObject, QMouseEvent*  arg__1);
   void nextCheckState(QCheckBox* theWrappedObject);
   void paintEvent(QCheckBox* theWrappedObject, QPaintEvent*  arg__1);
   void setCheckState(QCheckBox* theWrappedObject, Qt::CheckState  state);
   void setTristate(QCheckBox* theWrappedObject, bool  y = true);
   QSize  sizeHint(QCheckBox* theWrappedObject) const;
};





class PythonQtWrapper_QClipboard : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Mode )
enum Mode{
  Clipboard = QClipboard::Clipboard,   Selection = QClipboard::Selection,   FindBuffer = QClipboard::FindBuffer,   LastMode = QClipboard::LastMode};
public slots:
   void clear(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard);
   QImage  image(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   const QMimeData*  mimeData(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   bool  ownsClipboard(QClipboard* theWrappedObject) const;
   bool  ownsFindBuffer(QClipboard* theWrappedObject) const;
   bool  ownsSelection(QClipboard* theWrappedObject) const;
   QPixmap  pixmap(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   void setImage(QClipboard* theWrappedObject, const QImage&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   void setMimeData(QClipboard* theWrappedObject, PythonQtPassOwnershipToCPP<QMimeData* >  data, QClipboard::Mode  mode = QClipboard::Clipboard);
   void setPixmap(QClipboard* theWrappedObject, const QPixmap&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   void setText(QClipboard* theWrappedObject, const QString&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   bool  supportsFindBuffer(QClipboard* theWrappedObject) const;
   bool  supportsSelection(QClipboard* theWrappedObject) const;
   QString  text(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   QString  text(QClipboard* theWrappedObject, QString&  subtype, QClipboard::Mode  mode = QClipboard::Clipboard) const;
};





class PythonQtWrapper_QCloseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QCloseEvent* new_QCloseEvent();
void delete_QCloseEvent(QCloseEvent* obj) { delete obj; } 
};





class PythonQtShell_QColorDialog : public QColorDialog
{
public:
    PythonQtShell_QColorDialog(QWidget*  parent = 0):QColorDialog(parent),_wrapper(NULL) {};
    PythonQtShell_QColorDialog(const QColor&  initial, QWidget*  parent = 0):QColorDialog(initial, parent),_wrapper(NULL) {};

   ~PythonQtShell_QColorDialog();

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void done(int  result);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual int  exec();
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void open();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reject();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QColorDialog : public QColorDialog
{ public:
inline void promoted_changeEvent(QEvent*  event) { QColorDialog::changeEvent(event); }
inline void promoted_done(int  result) { QColorDialog::done(result); }
inline void promoted_open() { QColorDialog::open(); }
};

class PythonQtWrapper_QColorDialog : public QObject
{ Q_OBJECT
public:
public slots:
QColorDialog* new_QColorDialog(QWidget*  parent = 0);
QColorDialog* new_QColorDialog(const QColor&  initial, QWidget*  parent = 0);
void delete_QColorDialog(QColorDialog* obj) { delete obj; } 
   void changeEvent(QColorDialog* theWrappedObject, QEvent*  event);
   QColor  currentColor(QColorDialog* theWrappedObject) const;
   QColor  static_QColorDialog_customColor(int  index);
   int  static_QColorDialog_customCount();
   void done(QColorDialog* theWrappedObject, int  result);
   QColor  static_QColorDialog_getColor(const QColor&  initial = Qt::white, QWidget*  parent = 0, const QString&  title = QString(), QColorDialog::ColorDialogOptions  options = 0);
   unsigned int  static_QColorDialog_getRgba(unsigned int  rgba = 0xffffffff, bool*  ok = 0, QWidget*  parent = 0);
   void open(QColorDialog* theWrappedObject);
   void open(QColorDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QColorDialog::ColorDialogOptions  options(QColorDialog* theWrappedObject) const;
   QColor  selectedColor(QColorDialog* theWrappedObject) const;
   void setCurrentColor(QColorDialog* theWrappedObject, const QColor&  color);
   void static_QColorDialog_setCustomColor(int  index, QColor  color);
   void setOption(QColorDialog* theWrappedObject, QColorDialog::ColorDialogOption  option, bool  on = true);
   void setOptions(QColorDialog* theWrappedObject, QColorDialog::ColorDialogOptions  options);
   void static_QColorDialog_setStandardColor(int  index, QColor  color);
   void setVisible(QColorDialog* theWrappedObject, bool  visible);
   QColor  static_QColorDialog_standardColor(int  index);
   bool  testOption(QColorDialog* theWrappedObject, QColorDialog::ColorDialogOption  option) const;
};





class PythonQtShell_QColumnView : public QColumnView
{
public:
    PythonQtShell_QColumnView(QWidget*  parent = 0):QColumnView(parent),_wrapper(NULL) {};

   ~PythonQtShell_QColumnView();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void commitData(QWidget*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual QAbstractItemView*  createColumn(const QModelIndex&  rootIndex);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void customEvent(QEvent*  arg__1);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>());
virtual int  devType() const;
virtual void doItemsLayout();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void editorDestroyed(QObject*  editor);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual int  horizontalOffset() const;
virtual void horizontalScrollbarAction(int  action);
virtual void horizontalScrollbarValueChanged(int  value);
virtual QModelIndex  indexAt(const QPoint&  point) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void keyboardSearch(const QString&  search);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reset();
virtual void resizeEvent(QResizeEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual void selectAll();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = 0) const;
virtual void setModel(QAbstractItemModel*  model);
virtual void setRootIndex(const QModelIndex&  index);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual int  sizeHintForColumn(int  column) const;
virtual int  sizeHintForRow(int  row) const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  event);
virtual void updateEditorData();
virtual void updateEditorGeometries();
virtual void updateGeometries();
virtual int  verticalOffset() const;
virtual void verticalScrollbarAction(int  action);
virtual void verticalScrollbarValueChanged(int  value);
virtual QStyleOptionViewItem  viewOptions() const;
virtual bool  viewportEvent(QEvent*  event);
virtual QSize  viewportSizeHint() const;
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QColumnView : public QColumnView
{ public:
inline QAbstractItemView*  promoted_createColumn(const QModelIndex&  rootIndex) { return QColumnView::createColumn(rootIndex); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QColumnView::currentChanged(current, previous); }
inline int  promoted_horizontalOffset() const { return QColumnView::horizontalOffset(); }
inline QModelIndex  promoted_indexAt(const QPoint&  point) const { return QColumnView::indexAt(point); }
inline void promoted_initializeColumn(QAbstractItemView*  column) const { QColumnView::initializeColumn(column); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QColumnView::isIndexHidden(index); }
inline QModelIndex  promoted_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return QColumnView::moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QColumnView::resizeEvent(event); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QColumnView::rowsInserted(parent, start, end); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QColumnView::scrollContentsBy(dx, dy); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QColumnView::scrollTo(index, hint); }
inline void promoted_selectAll() { QColumnView::selectAll(); }
inline void promoted_setModel(QAbstractItemModel*  model) { QColumnView::setModel(model); }
inline void promoted_setRootIndex(const QModelIndex&  index) { QColumnView::setRootIndex(index); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QColumnView::setSelection(rect, command); }
inline void promoted_setSelectionModel(QItemSelectionModel*  selectionModel) { QColumnView::setSelectionModel(selectionModel); }
inline int  promoted_verticalOffset() const { return QColumnView::verticalOffset(); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QColumnView::visualRect(index); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QColumnView::visualRegionForSelection(selection); }
};

class PythonQtWrapper_QColumnView : public QObject
{ Q_OBJECT
public:
public slots:
QColumnView* new_QColumnView(QWidget*  parent = 0);
void delete_QColumnView(QColumnView* obj) { delete obj; } 
   QList<int >  columnWidths(QColumnView* theWrappedObject) const;
   QAbstractItemView*  createColumn(QColumnView* theWrappedObject, const QModelIndex&  rootIndex);
   void currentChanged(QColumnView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous);
   int  horizontalOffset(QColumnView* theWrappedObject) const;
   QModelIndex  indexAt(QColumnView* theWrappedObject, const QPoint&  point) const;
   void initializeColumn(QColumnView* theWrappedObject, QAbstractItemView*  column) const;
   bool  isIndexHidden(QColumnView* theWrappedObject, const QModelIndex&  index) const;
   QModelIndex  moveCursor(QColumnView* theWrappedObject, int  cursorAction, Qt::KeyboardModifiers  modifiers);
   QWidget*  previewWidget(QColumnView* theWrappedObject) const;
   void resizeEvent(QColumnView* theWrappedObject, QResizeEvent*  event);
   bool  resizeGripsVisible(QColumnView* theWrappedObject) const;
   void rowsInserted(QColumnView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   void scrollContentsBy(QColumnView* theWrappedObject, int  dx, int  dy);
   void scrollTo(QColumnView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
   void selectAll(QColumnView* theWrappedObject);
   void setColumnWidths(QColumnView* theWrappedObject, const QList<int >&  list);
   void setModel(QColumnView* theWrappedObject, QAbstractItemModel*  model);
   void setPreviewWidget(QColumnView* theWrappedObject, QWidget*  widget);
   void setResizeGripsVisible(QColumnView* theWrappedObject, bool  visible);
   void setRootIndex(QColumnView* theWrappedObject, const QModelIndex&  index);
   void setSelection(QColumnView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
   void setSelectionModel(QColumnView* theWrappedObject, QItemSelectionModel*  selectionModel);
   QSize  sizeHint(QColumnView* theWrappedObject) const;
   int  verticalOffset(QColumnView* theWrappedObject) const;
   QRect  visualRect(QColumnView* theWrappedObject, const QModelIndex&  index) const;
   QRegion  visualRegionForSelection(QColumnView* theWrappedObject, const QItemSelection&  selection) const;
};





class PythonQtShell_QComboBox : public QComboBox
{
public:
    PythonQtShell_QComboBox(QWidget*  parent = 0):QComboBox(parent),_wrapper(NULL) {};

   ~PythonQtShell_QComboBox();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  e);
virtual void hidePopup();
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  e);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  e);
virtual void showPopup();
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QComboBox : public QComboBox
{ public:
inline void promoted_changeEvent(QEvent*  e) { QComboBox::changeEvent(e); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { QComboBox::contextMenuEvent(e); }
inline bool  promoted_event(QEvent*  event) { return QComboBox::event(event); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QComboBox::focusInEvent(e); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QComboBox::focusOutEvent(e); }
inline void promoted_hideEvent(QHideEvent*  e) { QComboBox::hideEvent(e); }
inline void promoted_hidePopup() { QComboBox::hidePopup(); }
inline void promoted_initStyleOption(QStyleOptionComboBox*  option) const { QComboBox::initStyleOption(option); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QComboBox::inputMethodEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QComboBox::inputMethodQuery(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QComboBox::keyPressEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QComboBox::keyReleaseEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QComboBox::mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QComboBox::mouseReleaseEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { QComboBox::paintEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QComboBox::resizeEvent(e); }
inline void promoted_showEvent(QShowEvent*  e) { QComboBox::showEvent(e); }
inline void promoted_showPopup() { QComboBox::showPopup(); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QComboBox::wheelEvent(e); }
};

class PythonQtWrapper_QComboBox : public QObject
{ Q_OBJECT
public:
public slots:
QComboBox* new_QComboBox(QWidget*  parent = 0);
void delete_QComboBox(QComboBox* obj) { delete obj; } 
   void addItem(QComboBox* theWrappedObject, const QIcon&  icon, const QString&  text, const QVariant&  userData = QVariant());
   void addItem(QComboBox* theWrappedObject, const QString&  text, const QVariant&  userData = QVariant());
   void addItems(QComboBox* theWrappedObject, const QStringList&  texts);
   void changeEvent(QComboBox* theWrappedObject, QEvent*  e);
   QCompleter*  completer(QComboBox* theWrappedObject) const;
   void contextMenuEvent(QComboBox* theWrappedObject, QContextMenuEvent*  e);
   int  count(QComboBox* theWrappedObject) const;
   QVariant  currentData(QComboBox* theWrappedObject, int  role = Qt::UserRole) const;
   int  currentIndex(QComboBox* theWrappedObject) const;
   QString  currentText(QComboBox* theWrappedObject) const;
   bool  duplicatesEnabled(QComboBox* theWrappedObject) const;
   bool  event(QComboBox* theWrappedObject, QEvent*  event);
   int  findData(QComboBox* theWrappedObject, const QVariant&  data, int  role = Qt::UserRole, Qt::MatchFlags  flags = static_cast<Qt::MatchFlags>(Qt::MatchExactly|Qt::MatchCaseSensitive)) const;
   int  findText(QComboBox* theWrappedObject, const QString&  text, Qt::MatchFlags  flags = static_cast<Qt::MatchFlags>(Qt::MatchExactly|Qt::MatchCaseSensitive)) const;
   void focusInEvent(QComboBox* theWrappedObject, QFocusEvent*  e);
   void focusOutEvent(QComboBox* theWrappedObject, QFocusEvent*  e);
   bool  hasFrame(QComboBox* theWrappedObject) const;
   void hideEvent(QComboBox* theWrappedObject, QHideEvent*  e);
   void hidePopup(QComboBox* theWrappedObject);
   QSize  iconSize(QComboBox* theWrappedObject) const;
   void initStyleOption(QComboBox* theWrappedObject, QStyleOptionComboBox*  option) const;
   void inputMethodEvent(QComboBox* theWrappedObject, QInputMethodEvent*  arg__1);
   QVariant  inputMethodQuery(QComboBox* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void insertItem(QComboBox* theWrappedObject, int  index, const QIcon&  icon, const QString&  text, const QVariant&  userData = QVariant());
   void insertItem(QComboBox* theWrappedObject, int  index, const QString&  text, const QVariant&  userData = QVariant());
   void insertItems(QComboBox* theWrappedObject, int  index, const QStringList&  texts);
   QComboBox::InsertPolicy  insertPolicy(QComboBox* theWrappedObject) const;
   void insertSeparator(QComboBox* theWrappedObject, int  index);
   bool  isEditable(QComboBox* theWrappedObject) const;
   QVariant  itemData(QComboBox* theWrappedObject, int  index, int  role = Qt::UserRole) const;
   QAbstractItemDelegate*  itemDelegate(QComboBox* theWrappedObject) const;
   QIcon  itemIcon(QComboBox* theWrappedObject, int  index) const;
   QString  itemText(QComboBox* theWrappedObject, int  index) const;
   void keyPressEvent(QComboBox* theWrappedObject, QKeyEvent*  e);
   void keyReleaseEvent(QComboBox* theWrappedObject, QKeyEvent*  e);
   QLineEdit*  lineEdit(QComboBox* theWrappedObject) const;
   int  maxCount(QComboBox* theWrappedObject) const;
   int  maxVisibleItems(QComboBox* theWrappedObject) const;
   int  minimumContentsLength(QComboBox* theWrappedObject) const;
   QSize  minimumSizeHint(QComboBox* theWrappedObject) const;
   QAbstractItemModel*  model(QComboBox* theWrappedObject) const;
   int  modelColumn(QComboBox* theWrappedObject) const;
   void mousePressEvent(QComboBox* theWrappedObject, QMouseEvent*  e);
   void mouseReleaseEvent(QComboBox* theWrappedObject, QMouseEvent*  e);
   void paintEvent(QComboBox* theWrappedObject, QPaintEvent*  e);
   void removeItem(QComboBox* theWrappedObject, int  index);
   void resizeEvent(QComboBox* theWrappedObject, QResizeEvent*  e);
   QModelIndex  rootModelIndex(QComboBox* theWrappedObject) const;
   void setCompleter(QComboBox* theWrappedObject, QCompleter*  c);
   void setDuplicatesEnabled(QComboBox* theWrappedObject, bool  enable);
   void setEditable(QComboBox* theWrappedObject, bool  editable);
   void setFrame(QComboBox* theWrappedObject, bool  arg__1);
   void setIconSize(QComboBox* theWrappedObject, const QSize&  size);
   void setInsertPolicy(QComboBox* theWrappedObject, QComboBox::InsertPolicy  policy);
   void setItemData(QComboBox* theWrappedObject, int  index, const QVariant&  value, int  role = Qt::UserRole);
   void setItemDelegate(QComboBox* theWrappedObject, QAbstractItemDelegate*  delegate);
   void setItemIcon(QComboBox* theWrappedObject, int  index, const QIcon&  icon);
   void setItemText(QComboBox* theWrappedObject, int  index, const QString&  text);
   void setLineEdit(QComboBox* theWrappedObject, QLineEdit*  edit);
   void setMaxCount(QComboBox* theWrappedObject, int  max);
   void setMaxVisibleItems(QComboBox* theWrappedObject, int  maxItems);
   void setMinimumContentsLength(QComboBox* theWrappedObject, int  characters);
   void setModel(QComboBox* theWrappedObject, QAbstractItemModel*  model);
   void setModelColumn(QComboBox* theWrappedObject, int  visibleColumn);
   void setRootModelIndex(QComboBox* theWrappedObject, const QModelIndex&  index);
   void setSizeAdjustPolicy(QComboBox* theWrappedObject, QComboBox::SizeAdjustPolicy  policy);
   void setValidator(QComboBox* theWrappedObject, const QValidator*  v);
   void setView(QComboBox* theWrappedObject, QAbstractItemView*  itemView);
   void showEvent(QComboBox* theWrappedObject, QShowEvent*  e);
   void showPopup(QComboBox* theWrappedObject);
   QComboBox::SizeAdjustPolicy  sizeAdjustPolicy(QComboBox* theWrappedObject) const;
   QSize  sizeHint(QComboBox* theWrappedObject) const;
   const QValidator*  validator(QComboBox* theWrappedObject) const;
   QAbstractItemView*  view(QComboBox* theWrappedObject) const;
   void wheelEvent(QComboBox* theWrappedObject, QWheelEvent*  e);
};





class PythonQtShell_QCommandLinkButton : public QCommandLinkButton
{
public:
    PythonQtShell_QCommandLinkButton(QWidget*  parent = 0):QCommandLinkButton(parent),_wrapper(NULL) {};
    PythonQtShell_QCommandLinkButton(const QString&  text, QWidget*  parent = 0):QCommandLinkButton(text, parent),_wrapper(NULL) {};
    PythonQtShell_QCommandLinkButton(const QString&  text, const QString&  description, QWidget*  parent = 0):QCommandLinkButton(text, description, parent),_wrapper(NULL) {};

   ~PythonQtShell_QCommandLinkButton();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void checkStateSet();
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual bool  hitButton(const QPoint&  pos) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void nextCheckState();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCommandLinkButton : public QCommandLinkButton
{ public:
inline bool  promoted_event(QEvent*  e) { return QCommandLinkButton::event(e); }
inline int  promoted_heightForWidth(int  arg__1) const { return QCommandLinkButton::heightForWidth(arg__1); }
inline QSize  promoted_minimumSizeHint() const { return QCommandLinkButton::minimumSizeHint(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QCommandLinkButton::paintEvent(arg__1); }
inline QSize  promoted_sizeHint() const { return QCommandLinkButton::sizeHint(); }
};

class PythonQtWrapper_QCommandLinkButton : public QObject
{ Q_OBJECT
public:
public slots:
QCommandLinkButton* new_QCommandLinkButton(QWidget*  parent = 0);
QCommandLinkButton* new_QCommandLinkButton(const QString&  text, QWidget*  parent = 0);
QCommandLinkButton* new_QCommandLinkButton(const QString&  text, const QString&  description, QWidget*  parent = 0);
void delete_QCommandLinkButton(QCommandLinkButton* obj) { delete obj; } 
   QString  description(QCommandLinkButton* theWrappedObject) const;
   bool  event(QCommandLinkButton* theWrappedObject, QEvent*  e);
   int  heightForWidth(QCommandLinkButton* theWrappedObject, int  arg__1) const;
   QSize  minimumSizeHint(QCommandLinkButton* theWrappedObject) const;
   void paintEvent(QCommandLinkButton* theWrappedObject, QPaintEvent*  arg__1);
   void setDescription(QCommandLinkButton* theWrappedObject, const QString&  description);
   QSize  sizeHint(QCommandLinkButton* theWrappedObject) const;
};





class PythonQtShell_QCommonStyle : public QCommonStyle
{
public:
    PythonQtShell_QCommonStyle():QCommonStyle(),_wrapper(NULL) {};

   ~PythonQtShell_QCommonStyle();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const;
virtual void drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = 0) const;
virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual int  layoutSpacing(QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
virtual int  pixelMetric(QStyle::PixelMetric  m, const QStyleOption*  opt = 0, const QWidget*  widget = 0) const;
virtual void polish(QApplication*  app);
virtual void polish(QPalette&  arg__1);
virtual void polish(QWidget*  widget);
virtual QSize  sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
virtual QIcon  standardIcon(QStyle::StandardPixmap  standardIcon, const QStyleOption*  opt = 0, const QWidget*  widget = 0) const;
virtual QPalette  standardPalette() const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt = 0, const QWidget*  widget = 0) const;
virtual int  styleHint(QStyle::StyleHint  sh, const QStyleOption*  opt = 0, const QWidget*  w = 0, QStyleHintReturn*  shret = 0) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w = 0) const;
virtual QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void unpolish(QApplication*  application);
virtual void unpolish(QWidget*  widget);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCommonStyle : public QCommonStyle
{ public:
inline void promoted_drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const { QCommonStyle::drawComplexControl(cc, opt, p, w); }
inline void promoted_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QCommonStyle::drawControl(element, opt, p, w); }
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QCommonStyle::drawPrimitive(pe, opt, p, w); }
inline QPixmap  promoted_generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const { return QCommonStyle::generatedIconPixmap(iconMode, pixmap, opt); }
inline QStyle::SubControl  promoted_hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = 0) const { return QCommonStyle::hitTestComplexControl(cc, opt, pt, w); }
inline int  promoted_layoutSpacing(QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QCommonStyle::layoutSpacing(control1, control2, orientation, option, widget); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  m, const QStyleOption*  opt = 0, const QWidget*  widget = 0) const { return QCommonStyle::pixelMetric(m, opt, widget); }
inline void promoted_polish(QApplication*  app) { QCommonStyle::polish(app); }
inline void promoted_polish(QPalette&  arg__1) { QCommonStyle::polish(arg__1); }
inline void promoted_polish(QWidget*  widget) { QCommonStyle::polish(widget); }
inline QSize  promoted_sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const { return QCommonStyle::sizeFromContents(ct, opt, contentsSize, widget); }
inline QIcon  promoted_standardIcon(QStyle::StandardPixmap  standardIcon, const QStyleOption*  opt = 0, const QWidget*  widget = 0) const { return QCommonStyle::standardIcon(standardIcon, opt, widget); }
inline int  promoted_styleHint(QStyle::StyleHint  sh, const QStyleOption*  opt = 0, const QWidget*  w = 0, QStyleHintReturn*  shret = 0) const { return QCommonStyle::styleHint(sh, opt, w, shret); }
inline QRect  promoted_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w = 0) const { return QCommonStyle::subControlRect(cc, opt, sc, w); }
inline QRect  promoted_subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const { return QCommonStyle::subElementRect(r, opt, widget); }
inline void promoted_unpolish(QApplication*  application) { QCommonStyle::unpolish(application); }
inline void promoted_unpolish(QWidget*  widget) { QCommonStyle::unpolish(widget); }
};

class PythonQtWrapper_QCommonStyle : public QObject
{ Q_OBJECT
public:
public slots:
QCommonStyle* new_QCommonStyle();
void delete_QCommonStyle(QCommonStyle* obj) { delete obj; } 
   void drawComplexControl(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void drawControl(QCommonStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void drawPrimitive(QCommonStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   QPixmap  generatedIconPixmap(QCommonStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
   QStyle::SubControl  hitTestComplexControl(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = 0) const;
   int  layoutSpacing(QCommonStyle* theWrappedObject, QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   int  pixelMetric(QCommonStyle* theWrappedObject, QStyle::PixelMetric  m, const QStyleOption*  opt = 0, const QWidget*  widget = 0) const;
   void polish(QCommonStyle* theWrappedObject, QApplication*  app);
   void polish(QCommonStyle* theWrappedObject, QPalette&  arg__1);
   void polish(QCommonStyle* theWrappedObject, QWidget*  widget);
   QSize  sizeFromContents(QCommonStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
   QIcon  standardIcon(QCommonStyle* theWrappedObject, QStyle::StandardPixmap  standardIcon, const QStyleOption*  opt = 0, const QWidget*  widget = 0) const;
   int  styleHint(QCommonStyle* theWrappedObject, QStyle::StyleHint  sh, const QStyleOption*  opt = 0, const QWidget*  w = 0, QStyleHintReturn*  shret = 0) const;
   QRect  subControlRect(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w = 0) const;
   QRect  subElementRect(QCommonStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
   void unpolish(QCommonStyle* theWrappedObject, QApplication*  application);
   void unpolish(QCommonStyle* theWrappedObject, QWidget*  widget);
};


