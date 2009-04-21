#ifndef PYTHONQTWRAPPER_QABSTRACTITEMVIEW_H
#define PYTHONQTWRAPPER_QABSTRACTITEMVIEW_H

#include <qabstractitemview.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QAbstractItemView : public QAbstractItemView
{
public:
    PythonQtShell_QAbstractItemView(QWidget*  parent = 0):QAbstractItemView(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void commitData(QWidget*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void customEvent(QEvent*  arg__1);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
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
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual int  horizontalOffset() const;
virtual void horizontalScrollbarAction(int  action);
virtual void horizontalScrollbarValueChanged(int  value);
virtual QModelIndex  indexAt(const QPoint&  point) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void keyboardSearch(const QString&  search);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
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
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractItemView : public QAbstractItemView
{ public:
inline void dropEvent(QDropEvent*  event) { QAbstractItemView::dropEvent(event); }
inline QList<QModelIndex >  selectedIndexes() const { return QAbstractItemView::selectedIndexes(); }
inline void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QAbstractItemView::rowsAboutToBeRemoved(parent, start, end); }
inline void verticalScrollbarValueChanged(int  value) { QAbstractItemView::verticalScrollbarValueChanged(value); }
inline void dragMoveEvent(QDragMoveEvent*  event) { QAbstractItemView::dragMoveEvent(event); }
inline void horizontalScrollbarAction(int  action) { QAbstractItemView::horizontalScrollbarAction(action); }
inline void mouseDoubleClickEvent(QMouseEvent*  event) { QAbstractItemView::mouseDoubleClickEvent(event); }
inline void mouseMoveEvent(QMouseEvent*  event) { QAbstractItemView::mouseMoveEvent(event); }
inline void focusInEvent(QFocusEvent*  event) { QAbstractItemView::focusInEvent(event); }
inline void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QAbstractItemView::selectionChanged(selected, deselected); }
inline void updateEditorData() { QAbstractItemView::updateEditorData(); }
inline void horizontalScrollbarValueChanged(int  value) { QAbstractItemView::horizontalScrollbarValueChanged(value); }
inline bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) { return QAbstractItemView::edit(index, trigger, event); }
inline void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) { QAbstractItemView::closeEditor(editor, hint); }
inline bool  viewportEvent(QEvent*  event) { return QAbstractItemView::viewportEvent(event); }
inline void updateEditorGeometries() { QAbstractItemView::updateEditorGeometries(); }
inline QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = 0) const { return QAbstractItemView::selectionCommand(index, event); }
inline void currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QAbstractItemView::currentChanged(current, previous); }
inline void commitData(QWidget*  editor) { QAbstractItemView::commitData(editor); }
inline void dragEnterEvent(QDragEnterEvent*  event) { QAbstractItemView::dragEnterEvent(event); }
inline void editorDestroyed(QObject*  editor) { QAbstractItemView::editorDestroyed(editor); }
inline void mousePressEvent(QMouseEvent*  event) { QAbstractItemView::mousePressEvent(event); }
inline void keyPressEvent(QKeyEvent*  event) { QAbstractItemView::keyPressEvent(event); }
inline void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight) { QAbstractItemView::dataChanged(topLeft, bottomRight); }
inline void focusOutEvent(QFocusEvent*  event) { QAbstractItemView::focusOutEvent(event); }
inline void mouseReleaseEvent(QMouseEvent*  event) { QAbstractItemView::mouseReleaseEvent(event); }
inline QStyleOptionViewItem  viewOptions() const { return QAbstractItemView::viewOptions(); }
inline void inputMethodEvent(QInputMethodEvent*  event) { QAbstractItemView::inputMethodEvent(event); }
inline bool  focusNextPrevChild(bool  next) { return QAbstractItemView::focusNextPrevChild(next); }
inline void verticalScrollbarAction(int  action) { QAbstractItemView::verticalScrollbarAction(action); }
inline void timerEvent(QTimerEvent*  event) { QAbstractItemView::timerEvent(event); }
inline void rowsInserted(const QModelIndex&  parent, int  start, int  end) { QAbstractItemView::rowsInserted(parent, start, end); }
inline void dragLeaveEvent(QDragLeaveEvent*  event) { QAbstractItemView::dragLeaveEvent(event); }
inline bool  event(QEvent*  event) { return QAbstractItemView::event(event); }
inline void resizeEvent(QResizeEvent*  event) { QAbstractItemView::resizeEvent(event); }
inline void startDrag(Qt::DropActions  supportedActions) { QAbstractItemView::startDrag(supportedActions); }
inline void updateGeometries() { QAbstractItemView::updateGeometries(); }
};

class PythonQtWrapper_QAbstractItemView : public QObject
{ Q_OBJECT
public:
Q_ENUMS(EditTrigger )
enum EditTrigger{
  NoEditTriggers = QAbstractItemView::NoEditTriggers,   CurrentChanged = QAbstractItemView::CurrentChanged,   DoubleClicked = QAbstractItemView::DoubleClicked,   SelectedClicked = QAbstractItemView::SelectedClicked,   EditKeyPressed = QAbstractItemView::EditKeyPressed,   AnyKeyPressed = QAbstractItemView::AnyKeyPressed,   AllEditTriggers = QAbstractItemView::AllEditTriggers};
public slots:
QAbstractItemView* new_QAbstractItemView(QWidget*  parent = 0);
void delete_QAbstractItemView(QAbstractItemView* obj) { delete obj; } 
   void setIconSize(QAbstractItemView* theWrappedObject, const QSize&  size);
   QAbstractItemView::DragDropMode  dragDropMode(QAbstractItemView* theWrappedObject) const;
   void setAutoScroll(QAbstractItemView* theWrappedObject, bool  enable);
   void dropEvent(QAbstractItemView* theWrappedObject, QDropEvent*  event);
   QList<QModelIndex >  selectedIndexes(QAbstractItemView* theWrappedObject) const;
   void dragMoveEvent(QAbstractItemView* theWrappedObject, QDragMoveEvent*  event);
   QAbstractItemView::SelectionMode  selectionMode(QAbstractItemView* theWrappedObject) const;
   QWidget*  indexWidget(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   void setAlternatingRowColors(QAbstractItemView* theWrappedObject, bool  enable);
   void mouseDoubleClickEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event);
   QModelIndex  currentIndex(QAbstractItemView* theWrappedObject) const;
   QAbstractItemDelegate*  itemDelegate(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   void mouseMoveEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event);
   QAbstractItemView::ScrollMode  horizontalScrollMode(QAbstractItemView* theWrappedObject) const;
   void focusInEvent(QAbstractItemView* theWrappedObject, QFocusEvent*  event);
   void setIndexWidget(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QWidget*  widget);
   bool  hasAutoScroll(QAbstractItemView* theWrappedObject) const;
   void setEditTriggers(QAbstractItemView* theWrappedObject, QAbstractItemView::EditTriggers  triggers);
   QAbstractItemDelegate*  itemDelegateForRow(QAbstractItemView* theWrappedObject, int  row) const;
   void setHorizontalScrollMode(QAbstractItemView* theWrappedObject, QAbstractItemView::ScrollMode  mode);
   void closePersistentEditor(QAbstractItemView* theWrappedObject, const QModelIndex&  index);
   QAbstractItemModel*  model(QAbstractItemView* theWrappedObject) const;
   QVariant  inputMethodQuery(QAbstractItemView* theWrappedObject, Qt::InputMethodQuery  query) const;
   bool  edit(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
   int  autoScrollMargin(QAbstractItemView* theWrappedObject) const;
   bool  viewportEvent(QAbstractItemView* theWrappedObject, QEvent*  event);
   void setTabKeyNavigation(QAbstractItemView* theWrappedObject, bool  enable);
   QModelIndex  rootIndex(QAbstractItemView* theWrappedObject) const;
   void setDropIndicatorShown(QAbstractItemView* theWrappedObject, bool  enable);
   bool  alternatingRowColors(QAbstractItemView* theWrappedObject) const;
   QAbstractItemView::ScrollMode  verticalScrollMode(QAbstractItemView* theWrappedObject) const;
   QItemSelectionModel::SelectionFlags  selectionCommand(QAbstractItemView* theWrappedObject, const QModelIndex&  index, const QEvent*  event = 0) const;
   QAbstractItemDelegate*  itemDelegate(QAbstractItemView* theWrappedObject) const;
   int  sizeHintForColumn(QAbstractItemView* theWrappedObject, int  column) const;
   QSize  iconSize(QAbstractItemView* theWrappedObject) const;
   void setSelectionMode(QAbstractItemView* theWrappedObject, QAbstractItemView::SelectionMode  mode);
   bool  tabKeyNavigation(QAbstractItemView* theWrappedObject) const;
   void dragEnterEvent(QAbstractItemView* theWrappedObject, QDragEnterEvent*  event);
   bool  dragDropOverwriteMode(QAbstractItemView* theWrappedObject) const;
   void openPersistentEditor(QAbstractItemView* theWrappedObject, const QModelIndex&  index);
   void keyboardSearch(QAbstractItemView* theWrappedObject, const QString&  search);
   void mousePressEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event);
   QAbstractItemView::EditTriggers  editTriggers(QAbstractItemView* theWrappedObject) const;
   void keyPressEvent(QAbstractItemView* theWrappedObject, QKeyEvent*  event);
   void setDragDropMode(QAbstractItemView* theWrappedObject, QAbstractItemView::DragDropMode  behavior);
   void setDragEnabled(QAbstractItemView* theWrappedObject, bool  enable);
   void setItemDelegateForColumn(QAbstractItemView* theWrappedObject, int  column, QAbstractItemDelegate*  delegate);
   void focusOutEvent(QAbstractItemView* theWrappedObject, QFocusEvent*  event);
   void mouseReleaseEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event);
   bool  showDropIndicator(QAbstractItemView* theWrappedObject) const;
   void setAutoScrollMargin(QAbstractItemView* theWrappedObject, int  margin);
   QStyleOptionViewItem  viewOptions(QAbstractItemView* theWrappedObject) const;
   bool  dragEnabled(QAbstractItemView* theWrappedObject) const;
   void inputMethodEvent(QAbstractItemView* theWrappedObject, QInputMethodEvent*  event);
   bool  focusNextPrevChild(QAbstractItemView* theWrappedObject, bool  next);
   void timerEvent(QAbstractItemView* theWrappedObject, QTimerEvent*  event);
   void setItemDelegate(QAbstractItemView* theWrappedObject, QAbstractItemDelegate*  delegate);
   QAbstractItemView::SelectionBehavior  selectionBehavior(QAbstractItemView* theWrappedObject) const;
   void setItemDelegateForRow(QAbstractItemView* theWrappedObject, int  row, QAbstractItemDelegate*  delegate);
   void setSelectionBehavior(QAbstractItemView* theWrappedObject, QAbstractItemView::SelectionBehavior  behavior);
   void setDragDropOverwriteMode(QAbstractItemView* theWrappedObject, bool  overwrite);
   QSize  sizeHintForIndex(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   int  sizeHintForRow(QAbstractItemView* theWrappedObject, int  row) const;
   void setTextElideMode(QAbstractItemView* theWrappedObject, Qt::TextElideMode  mode);
   void dragLeaveEvent(QAbstractItemView* theWrappedObject, QDragLeaveEvent*  event);
   void setSelectionModel(QAbstractItemView* theWrappedObject, QItemSelectionModel*  selectionModel);
   bool  event(QAbstractItemView* theWrappedObject, QEvent*  event);
   QAbstractItemDelegate*  itemDelegateForColumn(QAbstractItemView* theWrappedObject, int  column) const;
   void setVerticalScrollMode(QAbstractItemView* theWrappedObject, QAbstractItemView::ScrollMode  mode);
   Qt::TextElideMode  textElideMode(QAbstractItemView* theWrappedObject) const;
   void resizeEvent(QAbstractItemView* theWrappedObject, QResizeEvent*  event);
   QItemSelectionModel*  selectionModel(QAbstractItemView* theWrappedObject) const;
   void startDrag(QAbstractItemView* theWrappedObject, Qt::DropActions  supportedActions);
   void setModel(QAbstractItemView* theWrappedObject, QAbstractItemModel*  model);
};

#endif // PYTHONQTWRAPPER_QABSTRACTITEMVIEW_H
