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
inline void paintEvent(QPaintEvent*  event) { QTreeView::paintEvent(event); }
inline int  sizeHintForColumn(int  column) const { return QTreeView::sizeHintForColumn(column); }
inline void mousePressEvent(QMouseEvent*  event) { QTreeView::mousePressEvent(event); }
inline void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QTreeView::selectionChanged(selected, deselected); }
inline void mouseReleaseEvent(QMouseEvent*  event) { QTreeView::mouseReleaseEvent(event); }
inline void dragMoveEvent(QDragMoveEvent*  event) { QTreeView::dragMoveEvent(event); }
inline void drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const { QTreeView::drawBranches(painter, rect, index); }
inline int  horizontalOffset() const { return QTreeView::horizontalOffset(); }
inline void drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const { QTreeView::drawRow(painter, options, index); }
inline bool  isIndexHidden(const QModelIndex&  index) const { return QTreeView::isIndexHidden(index); }
inline void mouseMoveEvent(QMouseEvent*  event) { QTreeView::mouseMoveEvent(event); }
inline void horizontalScrollbarAction(int  action) { QTreeView::horizontalScrollbarAction(action); }
inline void mouseDoubleClickEvent(QMouseEvent*  event) { QTreeView::mouseDoubleClickEvent(event); }
inline int  verticalOffset() const { return QTreeView::verticalOffset(); }
inline void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QTreeView::setSelection(rect, command); }
inline bool  viewportEvent(QEvent*  event) { return QTreeView::viewportEvent(event); }
inline void timerEvent(QTimerEvent*  event) { QTreeView::timerEvent(event); }
inline void scrollContentsBy(int  dx, int  dy) { QTreeView::scrollContentsBy(dx, dy); }
inline QRegion  visualRegionForSelection(const QItemSelection&  selection) const { return QTreeView::visualRegionForSelection(selection); }
inline void currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QTreeView::currentChanged(current, previous); }
inline void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QTreeView::rowsAboutToBeRemoved(parent, start, end); }
inline void keyPressEvent(QKeyEvent*  event) { QTreeView::keyPressEvent(event); }
inline void rowsInserted(const QModelIndex&  parent, int  start, int  end) { QTreeView::rowsInserted(parent, start, end); }
inline void updateGeometries() { QTreeView::updateGeometries(); }
inline QList<QModelIndex >  selectedIndexes() const { return QTreeView::selectedIndexes(); }
};

class PythonQtWrapper_QTreeView : public QObject
{ Q_OBJECT
public:
public slots:
QTreeView* new_QTreeView(QWidget*  parent = 0);
void delete_QTreeView(QTreeView* obj) { delete obj; } 
   void setRootIndex(QTreeView* theWrappedObject, const QModelIndex&  index);
   void paintEvent(QTreeView* theWrappedObject, QPaintEvent*  event);
   int  sizeHintForColumn(QTreeView* theWrappedObject, int  column) const;
   void setColumnHidden(QTreeView* theWrappedObject, int  column, bool  hide);
   int  columnViewportPosition(QTreeView* theWrappedObject, int  column) const;
   void mousePressEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   bool  uniformRowHeights(QTreeView* theWrappedObject) const;
   void selectionChanged(QTreeView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected);
   void setAutoExpandDelay(QTreeView* theWrappedObject, int  delay);
   void setAllColumnsShowFocus(QTreeView* theWrappedObject, bool  enable);
   bool  isHeaderHidden(QTreeView* theWrappedObject) const;
   void mouseReleaseEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   QModelIndex  indexBelow(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void setHeader(QTreeView* theWrappedObject, QHeaderView*  header);
   void setHeaderHidden(QTreeView* theWrappedObject, bool  hide);
   void dragMoveEvent(QTreeView* theWrappedObject, QDragMoveEvent*  event);
   void setModel(QTreeView* theWrappedObject, QAbstractItemModel*  model);
   void setExpandsOnDoubleClick(QTreeView* theWrappedObject, bool  enable);
   void setAnimated(QTreeView* theWrappedObject, bool  enable);
   bool  isAnimated(QTreeView* theWrappedObject) const;
   void setExpanded(QTreeView* theWrappedObject, const QModelIndex&  index, bool  expand);
   bool  allColumnsShowFocus(QTreeView* theWrappedObject) const;
   void setFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  span);
   void drawBranches(QTreeView* theWrappedObject, QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const;
   bool  isSortingEnabled(QTreeView* theWrappedObject) const;
   int  horizontalOffset(QTreeView* theWrappedObject) const;
   bool  isExpanded(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void setIndentation(QTreeView* theWrappedObject, int  i);
   bool  itemsExpandable(QTreeView* theWrappedObject) const;
   void drawRow(QTreeView* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const;
   QModelIndex  indexAt(QTreeView* theWrappedObject, const QPoint&  p) const;
   bool  isIndexHidden(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void mouseMoveEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   void horizontalScrollbarAction(QTreeView* theWrappedObject, int  action);
   void setUniformRowHeights(QTreeView* theWrappedObject, bool  uniform);
   void mouseDoubleClickEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   int  columnAt(QTreeView* theWrappedObject, int  x) const;
   int  verticalOffset(QTreeView* theWrappedObject) const;
   void setSortingEnabled(QTreeView* theWrappedObject, bool  enable);
   QRect  visualRect(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void sortByColumn(QTreeView* theWrappedObject, int  column, Qt::SortOrder  order);
   void setSelection(QTreeView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
   int  indentation(QTreeView* theWrappedObject) const;
   void scrollTo(QTreeView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
   bool  viewportEvent(QTreeView* theWrappedObject, QEvent*  event);
   int  columnWidth(QTreeView* theWrappedObject, int  column) const;
   void timerEvent(QTreeView* theWrappedObject, QTimerEvent*  event);
   void setItemsExpandable(QTreeView* theWrappedObject, bool  enable);
   void setColumnWidth(QTreeView* theWrappedObject, int  column, int  width);
   bool  rootIsDecorated(QTreeView* theWrappedObject) const;
   void scrollContentsBy(QTreeView* theWrappedObject, int  dx, int  dy);
   QRegion  visualRegionForSelection(QTreeView* theWrappedObject, const QItemSelection&  selection) const;
   void currentChanged(QTreeView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous);
   void setRootIsDecorated(QTreeView* theWrappedObject, bool  show);
   void rowsAboutToBeRemoved(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   void setRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  hide);
   void keyboardSearch(QTreeView* theWrappedObject, const QString&  search);
   void keyPressEvent(QTreeView* theWrappedObject, QKeyEvent*  event);
   void setSelectionModel(QTreeView* theWrappedObject, QItemSelectionModel*  selectionModel);
   void setWordWrap(QTreeView* theWrappedObject, bool  on);
   bool  isRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const;
   bool  isColumnHidden(QTreeView* theWrappedObject, int  column) const;
   bool  wordWrap(QTreeView* theWrappedObject) const;
   void doItemsLayout(QTreeView* theWrappedObject);
   bool  expandsOnDoubleClick(QTreeView* theWrappedObject) const;
   QModelIndex  indexAbove(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void rowsInserted(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   void updateGeometries(QTreeView* theWrappedObject);
   QHeaderView*  header(QTreeView* theWrappedObject) const;
   void reset(QTreeView* theWrappedObject);
   QList<QModelIndex >  selectedIndexes(QTreeView* theWrappedObject) const;
   bool  isFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const;
   int  autoExpandDelay(QTreeView* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTREEVIEW_H
