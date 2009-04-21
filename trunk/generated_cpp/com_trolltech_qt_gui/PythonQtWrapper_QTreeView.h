#ifndef PYTHONQTWRAPPER_QTREEVIEW_H
#define PYTHONQTWRAPPER_QTREEVIEW_H

#include <qtreeview.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qheaderview.h>
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
#include <qtreeview.h>
#include <qwidget.h>

class PythonQtShell_QTreeView : public QTreeView
{
public:
    PythonQtShell_QTreeView(QWidget*  parent = 0):QTreeView(parent),_wrapper(NULL) {};

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
virtual void drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const;
virtual void drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const;
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
virtual QModelIndex  indexAt(const QPoint&  p) const;
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
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual void reset();
virtual void resizeEvent(QResizeEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual void selectAll();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
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

class PythonQtPublicPromoter_QTreeView : public QTreeView
{ public:
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QTreeView::visualRect(index); }
inline void promoted_reset() { QTreeView::reset(); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QTreeView::mousePressEvent(event); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return QTreeView::selectedIndexes(); }
inline void promoted_paintEvent(QPaintEvent*  event) { QTreeView::paintEvent(event); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight) { QTreeView::dataChanged(topLeft, bottomRight); }
inline void promoted_setSelectionModel(QItemSelectionModel*  selectionModel) { QTreeView::setSelectionModel(selectionModel); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QTreeView::isIndexHidden(index); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QTreeView::selectionChanged(selected, deselected); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QTreeView::indexAt(p); }
inline bool  promoted_viewportEvent(QEvent*  event) { return QTreeView::viewportEvent(event); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QTreeView::rowsInserted(parent, start, end); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QTreeView::visualRegionForSelection(selection); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QTreeView::keyPressEvent(event); }
inline int  promoted_verticalOffset() const { return QTreeView::verticalOffset(); }
inline void promoted_setModel(QAbstractItemModel*  model) { QTreeView::setModel(model); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QTreeView::setSelection(rect, command); }
inline void promoted_horizontalScrollbarAction(int  action) { QTreeView::horizontalScrollbarAction(action); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { QTreeView::mouseDoubleClickEvent(event); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QTreeView::scrollContentsBy(dx, dy); }
inline void promoted_setRootIndex(const QModelIndex&  index) { QTreeView::setRootIndex(index); }
inline void promoted_drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const { QTreeView::drawBranches(painter, rect, index); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { QTreeView::dragMoveEvent(event); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QTreeView::scrollTo(index, hint); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QTreeView::mouseReleaseEvent(event); }
inline void promoted_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QTreeView::rowsAboutToBeRemoved(parent, start, end); }
inline int  promoted_horizontalOffset() const { return QTreeView::horizontalOffset(); }
inline int  promoted_sizeHintForColumn(int  column) const { return QTreeView::sizeHintForColumn(column); }
inline void promoted_drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const { QTreeView::drawRow(painter, options, index); }
inline void promoted_doItemsLayout() { QTreeView::doItemsLayout(); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QTreeView::mouseMoveEvent(event); }
inline void promoted_keyboardSearch(const QString&  search) { QTreeView::keyboardSearch(search); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QTreeView::currentChanged(current, previous); }
inline void promoted_updateGeometries() { QTreeView::updateGeometries(); }
inline void promoted_timerEvent(QTimerEvent*  event) { QTreeView::timerEvent(event); }
inline void promoted_selectAll() { QTreeView::selectAll(); }
};

class PythonQtWrapper_QTreeView : public QObject
{ Q_OBJECT
public:
public slots:
QTreeView* new_QTreeView(QWidget*  parent = 0);
void delete_QTreeView(QTreeView* obj) { delete obj; } 
   bool  isAnimated(QTreeView* theWrappedObject) const;
   QRect  visualRect(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   int  columnViewportPosition(QTreeView* theWrappedObject, int  column) const;
   void setSortingEnabled(QTreeView* theWrappedObject, bool  enable);
   void reset(QTreeView* theWrappedObject);
   void setAnimated(QTreeView* theWrappedObject, bool  enable);
   void setItemsExpandable(QTreeView* theWrappedObject, bool  enable);
   int  indentation(QTreeView* theWrappedObject) const;
   void mousePressEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   bool  isColumnHidden(QTreeView* theWrappedObject, int  column) const;
   QList<QModelIndex >  selectedIndexes(QTreeView* theWrappedObject) const;
   bool  isHeaderHidden(QTreeView* theWrappedObject) const;
   void paintEvent(QTreeView* theWrappedObject, QPaintEvent*  event);
   bool  wordWrap(QTreeView* theWrappedObject) const;
   void setSelectionModel(QTreeView* theWrappedObject, QItemSelectionModel*  selectionModel);
   bool  isIndexHidden(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void setHeaderHidden(QTreeView* theWrappedObject, bool  hide);
   void selectionChanged(QTreeView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected);
   void setExpandsOnDoubleClick(QTreeView* theWrappedObject, bool  enable);
   QModelIndex  indexAt(QTreeView* theWrappedObject, const QPoint&  p) const;
   bool  uniformRowHeights(QTreeView* theWrappedObject) const;
   bool  viewportEvent(QTreeView* theWrappedObject, QEvent*  event);
   bool  expandsOnDoubleClick(QTreeView* theWrappedObject) const;
   void rowsInserted(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   QRegion  visualRegionForSelection(QTreeView* theWrappedObject, const QItemSelection&  selection) const;
   void keyPressEvent(QTreeView* theWrappedObject, QKeyEvent*  event);
   QHeaderView*  header(QTreeView* theWrappedObject) const;
   int  verticalOffset(QTreeView* theWrappedObject) const;
   bool  isFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const;
   void setModel(QTreeView* theWrappedObject, QAbstractItemModel*  model);
   int  autoExpandDelay(QTreeView* theWrappedObject) const;
   bool  isExpanded(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void setSelection(QTreeView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
   void setAllColumnsShowFocus(QTreeView* theWrappedObject, bool  enable);
   QModelIndex  indexAbove(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void setAutoExpandDelay(QTreeView* theWrappedObject, int  delay);
   bool  isSortingEnabled(QTreeView* theWrappedObject) const;
   void setColumnHidden(QTreeView* theWrappedObject, int  column, bool  hide);
   void setIndentation(QTreeView* theWrappedObject, int  i);
   QModelIndex  indexBelow(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void horizontalScrollbarAction(QTreeView* theWrappedObject, int  action);
   bool  isRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const;
   void mouseDoubleClickEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   void scrollContentsBy(QTreeView* theWrappedObject, int  dx, int  dy);
   void setRootIndex(QTreeView* theWrappedObject, const QModelIndex&  index);
   void drawBranches(QTreeView* theWrappedObject, QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const;
   bool  itemsExpandable(QTreeView* theWrappedObject) const;
   void setExpanded(QTreeView* theWrappedObject, const QModelIndex&  index, bool  expand);
   void dragMoveEvent(QTreeView* theWrappedObject, QDragMoveEvent*  event);
   int  columnAt(QTreeView* theWrappedObject, int  x) const;
   void setWordWrap(QTreeView* theWrappedObject, bool  on);
   void scrollTo(QTreeView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
   void setUniformRowHeights(QTreeView* theWrappedObject, bool  uniform);
   void mouseReleaseEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   bool  rootIsDecorated(QTreeView* theWrappedObject) const;
   bool  allColumnsShowFocus(QTreeView* theWrappedObject) const;
   void setColumnWidth(QTreeView* theWrappedObject, int  column, int  width);
   void sortByColumn(QTreeView* theWrappedObject, int  column, Qt::SortOrder  order);
   void rowsAboutToBeRemoved(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   int  horizontalOffset(QTreeView* theWrappedObject) const;
   int  sizeHintForColumn(QTreeView* theWrappedObject, int  column) const;
   void drawRow(QTreeView* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const;
   void setRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  hide);
   void doItemsLayout(QTreeView* theWrappedObject);
   void mouseMoveEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   void keyboardSearch(QTreeView* theWrappedObject, const QString&  search);
   void setFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  span);
   void currentChanged(QTreeView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous);
   void setRootIsDecorated(QTreeView* theWrappedObject, bool  show);
   int  columnWidth(QTreeView* theWrappedObject, int  column) const;
   void updateGeometries(QTreeView* theWrappedObject);
   void setHeader(QTreeView* theWrappedObject, QHeaderView*  header);
   void timerEvent(QTreeView* theWrappedObject, QTimerEvent*  event);
};

#endif // PYTHONQTWRAPPER_QTREEVIEW_H
