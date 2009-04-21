#ifndef PYTHONQTWRAPPER_QTABLEWIDGET_H
#define PYTHONQTWRAPPER_QTABLEWIDGET_H

#include <qtablewidget.h>
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
#include <qmimedata.h>
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
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtablewidget.h>
#include <qwidget.h>

class PythonQtShell_QTableWidget : public QTableWidget
{
public:
    PythonQtShell_QTableWidget(QWidget*  parent = 0):QTableWidget(parent),_wrapper(NULL) {};
    PythonQtShell_QTableWidget(int  rows, int  columns, QWidget*  parent = 0):QTableWidget(rows, columns, parent),_wrapper(NULL) {};

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
virtual bool  dropMimeData(int  row, int  column, const QMimeData*  data, Qt::DropAction  action);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void editorDestroyed(QObject*  editor);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
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
virtual QMimeData*  mimeData(const QList<QTableWidgetItem* >  items) const;
virtual QStringList  mimeTypes() const;
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
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual void selectAll();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void setRootIndex(const QModelIndex&  index);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void showEvent(QShowEvent*  arg__1);
virtual int  sizeHintForColumn(int  column) const;
virtual int  sizeHintForRow(int  row) const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual Qt::DropActions  supportedDropActions() const;
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

class PythonQtPublicPromoter_QTableWidget : public QTableWidget
{ public:
inline bool  promoted_event(QEvent*  e) { return QTableWidget::event(e); }
inline bool  promoted_dropMimeData(int  row, int  column, const QMimeData*  data, Qt::DropAction  action) { return QTableWidget::dropMimeData(row, column, data, action); }
inline QStringList  promoted_mimeTypes() const { return QTableWidget::mimeTypes(); }
inline Qt::DropActions  promoted_supportedDropActions() const { return QTableWidget::supportedDropActions(); }
inline void promoted_dropEvent(QDropEvent*  event) { QTableWidget::dropEvent(event); }
};

class PythonQtWrapper_QTableWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTableWidget* new_QTableWidget(QWidget*  parent = 0);
QTableWidget* new_QTableWidget(int  rows, int  columns, QWidget*  parent = 0);
void delete_QTableWidget(QTableWidget* obj) { delete obj; } 
   QTableWidgetItem*  takeVerticalHeaderItem(QTableWidget* theWrappedObject, int  row);
   int  columnCount(QTableWidget* theWrappedObject) const;
   void setCurrentCell(QTableWidget* theWrappedObject, int  row, int  column, QItemSelectionModel::SelectionFlags  command);
   void setItemPrototype(QTableWidget* theWrappedObject, const QTableWidgetItem*  item);
   void setColumnCount(QTableWidget* theWrappedObject, int  columns);
   bool  event(QTableWidget* theWrappedObject, QEvent*  e);
   void setItem(QTableWidget* theWrappedObject, int  row, int  column, QTableWidgetItem*  item);
   QTableWidgetItem*  itemAt(QTableWidget* theWrappedObject, const QPoint&  p) const;
   void closePersistentEditor(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   void setVerticalHeaderLabels(QTableWidget* theWrappedObject, const QStringList&  labels);
   int  currentRow(QTableWidget* theWrappedObject) const;
   QList<QTableWidgetItem* >  findItems(QTableWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags) const;
   QList<QTableWidgetSelectionRange >  selectedRanges(QTableWidget* theWrappedObject) const;
   QWidget*  cellWidget(QTableWidget* theWrappedObject, int  row, int  column) const;
   QRect  visualItemRect(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   QTableWidgetItem*  itemAt(QTableWidget* theWrappedObject, int  x, int  y) const;
   int  rowCount(QTableWidget* theWrappedObject) const;
   void setCurrentCell(QTableWidget* theWrappedObject, int  row, int  column);
   QTableWidgetItem*  verticalHeaderItem(QTableWidget* theWrappedObject, int  row) const;
   int  column(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   int  row(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   QTableWidgetItem*  horizontalHeaderItem(QTableWidget* theWrappedObject, int  column) const;
   void setVerticalHeaderItem(QTableWidget* theWrappedObject, int  row, QTableWidgetItem*  item);
   bool  dropMimeData(QTableWidget* theWrappedObject, int  row, int  column, const QMimeData*  data, Qt::DropAction  action);
   int  visualColumn(QTableWidget* theWrappedObject, int  logicalColumn) const;
   void setCurrentItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   QTableWidgetItem*  item(QTableWidget* theWrappedObject, int  row, int  column) const;
   QList<QTableWidgetItem* >  selectedItems(QTableWidget* theWrappedObject);
   const QTableWidgetItem*  itemPrototype(QTableWidget* theWrappedObject) const;
   void removeCellWidget(QTableWidget* theWrappedObject, int  row, int  column);
   void openPersistentEditor(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   QStringList  mimeTypes(QTableWidget* theWrappedObject) const;
   Qt::DropActions  supportedDropActions(QTableWidget* theWrappedObject) const;
   void sortItems(QTableWidget* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   int  visualRow(QTableWidget* theWrappedObject, int  logicalRow) const;
   void setCurrentItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item, QItemSelectionModel::SelectionFlags  command);
   QTableWidgetItem*  currentItem(QTableWidget* theWrappedObject) const;
   void dropEvent(QTableWidget* theWrappedObject, QDropEvent*  event);
   QTableWidgetItem*  takeItem(QTableWidget* theWrappedObject, int  row, int  column);
   void editItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   QTableWidgetItem*  takeHorizontalHeaderItem(QTableWidget* theWrappedObject, int  column);
   void setCellWidget(QTableWidget* theWrappedObject, int  row, int  column, QWidget*  widget);
   int  currentColumn(QTableWidget* theWrappedObject) const;
   void setRowCount(QTableWidget* theWrappedObject, int  rows);
   void setHorizontalHeaderItem(QTableWidget* theWrappedObject, int  column, QTableWidgetItem*  item);
   void setHorizontalHeaderLabels(QTableWidget* theWrappedObject, const QStringList&  labels);
   void setRangeSelected(QTableWidget* theWrappedObject, const QTableWidgetSelectionRange&  range, bool  select);
};

#endif // PYTHONQTWRAPPER_QTABLEWIDGET_H
