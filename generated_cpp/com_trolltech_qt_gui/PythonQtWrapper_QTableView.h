#ifndef PYTHONQTWRAPPER_QTABLEVIEW_H
#define PYTHONQTWRAPPER_QTABLEVIEW_H

#include <qtableview.h>
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
#include <qtableview.h>
#include <qwidget.h>

class PythonQtShell_QTableView : public QTableView
{
public:
    PythonQtShell_QTableView(QWidget*  parent = 0):QTableView(parent),_wrapper(NULL) {};

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
virtual void paintEvent(QPaintEvent*  e);
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

class PythonQtPublicPromoter_QTableView : public QTableView
{ public:
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QTableView::isIndexHidden(index); }
inline void promoted_updateGeometries() { QTableView::updateGeometries(); }
inline int  promoted_horizontalOffset() const { return QTableView::horizontalOffset(); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QTableView::visualRegionForSelection(selection); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QTableView::setSelection(rect, command); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return QTableView::selectedIndexes(); }
inline void promoted_horizontalScrollbarAction(int  action) { QTableView::horizontalScrollbarAction(action); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QTableView::indexAt(p); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QTableView::visualRect(index); }
inline QStyleOptionViewItem  promoted_viewOptions() const { return QTableView::viewOptions(); }
inline void promoted_paintEvent(QPaintEvent*  e) { QTableView::paintEvent(e); }
inline int  promoted_sizeHintForRow(int  row) const { return QTableView::sizeHintForRow(row); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QTableView::scrollTo(index, hint); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QTableView::currentChanged(current, previous); }
inline int  promoted_verticalOffset() const { return QTableView::verticalOffset(); }
inline int  promoted_sizeHintForColumn(int  column) const { return QTableView::sizeHintForColumn(column); }
inline void promoted_setRootIndex(const QModelIndex&  index) { QTableView::setRootIndex(index); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QTableView::selectionChanged(selected, deselected); }
inline void promoted_timerEvent(QTimerEvent*  event) { QTableView::timerEvent(event); }
inline void promoted_setSelectionModel(QItemSelectionModel*  selectionModel) { QTableView::setSelectionModel(selectionModel); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QTableView::scrollContentsBy(dx, dy); }
inline void promoted_setModel(QAbstractItemModel*  model) { QTableView::setModel(model); }
inline void promoted_verticalScrollbarAction(int  action) { QTableView::verticalScrollbarAction(action); }
};

class PythonQtWrapper_QTableView : public QObject
{ Q_OBJECT
public:
public slots:
QTableView* new_QTableView(QWidget*  parent = 0);
void delete_QTableView(QTableView* obj) { delete obj; } 
   int  columnSpan(QTableView* theWrappedObject, int  row, int  column) const;
   int  rowViewportPosition(QTableView* theWrappedObject, int  row) const;
   void setRowHidden(QTableView* theWrappedObject, int  row, bool  hide);
   bool  isIndexHidden(QTableView* theWrappedObject, const QModelIndex&  index) const;
   void updateGeometries(QTableView* theWrappedObject);
   bool  isColumnHidden(QTableView* theWrappedObject, int  column) const;
   bool  isRowHidden(QTableView* theWrappedObject, int  row) const;
   void setSortingEnabled(QTableView* theWrappedObject, bool  enable);
   int  horizontalOffset(QTableView* theWrappedObject) const;
   QRegion  visualRegionForSelection(QTableView* theWrappedObject, const QItemSelection&  selection) const;
   bool  wordWrap(QTableView* theWrappedObject) const;
   void setHorizontalHeader(QTableView* theWrappedObject, QHeaderView*  header);
   QHeaderView*  verticalHeader(QTableView* theWrappedObject) const;
   void setSelection(QTableView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
   QList<QModelIndex >  selectedIndexes(QTableView* theWrappedObject) const;
   void setCornerButtonEnabled(QTableView* theWrappedObject, bool  enable);
   void setSpan(QTableView* theWrappedObject, int  row, int  column, int  rowSpan, int  columnSpan);
   void horizontalScrollbarAction(QTableView* theWrappedObject, int  action);
   QModelIndex  indexAt(QTableView* theWrappedObject, const QPoint&  p) const;
   void clearSpans(QTableView* theWrappedObject);
   void setVerticalHeader(QTableView* theWrappedObject, QHeaderView*  header);
   QRect  visualRect(QTableView* theWrappedObject, const QModelIndex&  index) const;
   QStyleOptionViewItem  viewOptions(QTableView* theWrappedObject) const;
   void setColumnWidth(QTableView* theWrappedObject, int  column, int  width);
   void paintEvent(QTableView* theWrappedObject, QPaintEvent*  e);
   int  columnWidth(QTableView* theWrappedObject, int  column) const;
   int  sizeHintForRow(QTableView* theWrappedObject, int  row) const;
   bool  isCornerButtonEnabled(QTableView* theWrappedObject) const;
   bool  showGrid(QTableView* theWrappedObject) const;
   void setColumnHidden(QTableView* theWrappedObject, int  column, bool  hide);
   int  rowHeight(QTableView* theWrappedObject, int  row) const;
   void scrollTo(QTableView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
   void currentChanged(QTableView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous);
   int  verticalOffset(QTableView* theWrappedObject) const;
   void setRowHeight(QTableView* theWrappedObject, int  row, int  height);
   QHeaderView*  horizontalHeader(QTableView* theWrappedObject) const;
   int  sizeHintForColumn(QTableView* theWrappedObject, int  column) const;
   void setRootIndex(QTableView* theWrappedObject, const QModelIndex&  index);
   int  rowAt(QTableView* theWrappedObject, int  y) const;
   int  columnAt(QTableView* theWrappedObject, int  x) const;
   void selectionChanged(QTableView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected);
   void timerEvent(QTableView* theWrappedObject, QTimerEvent*  event);
   void setSelectionModel(QTableView* theWrappedObject, QItemSelectionModel*  selectionModel);
   bool  isSortingEnabled(QTableView* theWrappedObject) const;
   int  columnViewportPosition(QTableView* theWrappedObject, int  column) const;
   void scrollContentsBy(QTableView* theWrappedObject, int  dx, int  dy);
   int  rowSpan(QTableView* theWrappedObject, int  row, int  column) const;
   void setModel(QTableView* theWrappedObject, QAbstractItemModel*  model);
   void sortByColumn(QTableView* theWrappedObject, int  column, Qt::SortOrder  order);
   void setWordWrap(QTableView* theWrappedObject, bool  on);
   void setGridStyle(QTableView* theWrappedObject, Qt::PenStyle  style);
   void verticalScrollbarAction(QTableView* theWrappedObject, int  action);
   Qt::PenStyle  gridStyle(QTableView* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTABLEVIEW_H
