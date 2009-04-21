#ifndef PYTHONQTWRAPPER_QHEADERVIEW_H
#define PYTHONQTWRAPPER_QHEADERVIEW_H

#include <qheaderview.h>
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
#include <qwidget.h>

class PythonQtShell_QHeaderView : public QHeaderView
{
public:
    PythonQtShell_QHeaderView(Qt::Orientation  orientation, QWidget*  parent = 0):QHeaderView(orientation, parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void commitData(QWidget*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  old);
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
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual void paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const;
virtual void reset();
virtual void resizeEvent(QResizeEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual QSize  sectionSizeFromContents(int  logicalIndex) const;
virtual void selectAll();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void setModel(QAbstractItemModel*  model);
virtual void setRootIndex(const QModelIndex&  index);
virtual void setSelection(const QRect&  arg__1, QItemSelectionModel::SelectionFlags  arg__2);
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
virtual bool  viewportEvent(QEvent*  e);
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QHeaderView : public QHeaderView
{ public:
inline QSize  sectionSizeFromContents(int  logicalIndex) const { return QHeaderView::sectionSizeFromContents(logicalIndex); }
inline QRect  visualRect(const QModelIndex&  index) const { return QHeaderView::visualRect(index); }
inline QModelIndex  indexAt(const QPoint&  p) const { return QHeaderView::indexAt(p); }
inline bool  isIndexHidden(const QModelIndex&  index) const { return QHeaderView::isIndexHidden(index); }
inline int  horizontalOffset() const { return QHeaderView::horizontalOffset(); }
inline void mousePressEvent(QMouseEvent*  e) { QHeaderView::mousePressEvent(e); }
inline void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight) { QHeaderView::dataChanged(topLeft, bottomRight); }
inline void mouseMoveEvent(QMouseEvent*  e) { QHeaderView::mouseMoveEvent(e); }
inline void scrollContentsBy(int  dx, int  dy) { QHeaderView::scrollContentsBy(dx, dy); }
inline int  verticalOffset() const { return QHeaderView::verticalOffset(); }
inline void mouseReleaseEvent(QMouseEvent*  e) { QHeaderView::mouseReleaseEvent(e); }
inline void currentChanged(const QModelIndex&  current, const QModelIndex&  old) { QHeaderView::currentChanged(current, old); }
inline void mouseDoubleClickEvent(QMouseEvent*  e) { QHeaderView::mouseDoubleClickEvent(e); }
inline bool  event(QEvent*  e) { return QHeaderView::event(e); }
inline void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint) { QHeaderView::scrollTo(index, hint); }
inline void updateGeometries() { QHeaderView::updateGeometries(); }
inline void setSelection(const QRect&  arg__1, QItemSelectionModel::SelectionFlags  arg__2) { QHeaderView::setSelection(arg__1, arg__2); }
inline void paintEvent(QPaintEvent*  e) { QHeaderView::paintEvent(e); }
inline bool  viewportEvent(QEvent*  e) { return QHeaderView::viewportEvent(e); }
inline void rowsInserted(const QModelIndex&  parent, int  start, int  end) { QHeaderView::rowsInserted(parent, start, end); }
inline void paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const { QHeaderView::paintSection(painter, rect, logicalIndex); }
inline QRegion  visualRegionForSelection(const QItemSelection&  selection) const { return QHeaderView::visualRegionForSelection(selection); }
};

class PythonQtWrapper_QHeaderView : public QObject
{ Q_OBJECT
public:
public slots:
QHeaderView* new_QHeaderView(Qt::Orientation  orientation, QWidget*  parent = 0);
void delete_QHeaderView(QHeaderView* obj) { delete obj; } 
   bool  stretchLastSection(QHeaderView* theWrappedObject) const;
   void hideSection(QHeaderView* theWrappedObject, int  logicalIndex);
   int  logicalIndexAt(QHeaderView* theWrappedObject, const QPoint&  pos) const;
   int  minimumSectionSize(QHeaderView* theWrappedObject) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, int  position) const;
   QSize  sectionSizeFromContents(QHeaderView* theWrappedObject, int  logicalIndex) const;
   void setMinimumSectionSize(QHeaderView* theWrappedObject, int  size);
   int  sectionSize(QHeaderView* theWrappedObject, int  logicalIndex) const;
   bool  isSortIndicatorShown(QHeaderView* theWrappedObject) const;
   int  offset(QHeaderView* theWrappedObject) const;
   bool  sectionsMoved(QHeaderView* theWrappedObject) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, int  x, int  y) const;
   QRect  visualRect(QHeaderView* theWrappedObject, const QModelIndex&  index) const;
   QModelIndex  indexAt(QHeaderView* theWrappedObject, const QPoint&  p) const;
   QByteArray  saveState(QHeaderView* theWrappedObject) const;
   int  logicalIndex(QHeaderView* theWrappedObject, int  visualIndex) const;
   bool  isIndexHidden(QHeaderView* theWrappedObject, const QModelIndex&  index) const;
   void setSortIndicatorShown(QHeaderView* theWrappedObject, bool  show);
   void resizeSections(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
   Qt::SortOrder  sortIndicatorOrder(QHeaderView* theWrappedObject) const;
   void setSortIndicator(QHeaderView* theWrappedObject, int  logicalIndex, Qt::SortOrder  order);
   void swapSections(QHeaderView* theWrappedObject, int  first, int  second);
   void setStretchLastSection(QHeaderView* theWrappedObject, bool  stretch);
   QSize  sizeHint(QHeaderView* theWrappedObject) const;
   bool  restoreState(QHeaderView* theWrappedObject, const QByteArray&  state);
   int  visualIndex(QHeaderView* theWrappedObject, int  logicalIndex) const;
   void setDefaultSectionSize(QHeaderView* theWrappedObject, int  size);
   int  horizontalOffset(QHeaderView* theWrappedObject) const;
   void mousePressEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   int  sectionSizeHint(QHeaderView* theWrappedObject, int  logicalIndex) const;
   bool  isMovable(QHeaderView* theWrappedObject) const;
   void dataChanged(QHeaderView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   void setSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex, bool  hide);
   void setDefaultAlignment(QHeaderView* theWrappedObject, Qt::Alignment  alignment);
   QHeaderView::ResizeMode  resizeMode(QHeaderView* theWrappedObject, int  logicalIndex) const;
   void mouseMoveEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   void scrollContentsBy(QHeaderView* theWrappedObject, int  dx, int  dy);
   bool  sectionsHidden(QHeaderView* theWrappedObject) const;
   void setCascadingSectionResizes(QHeaderView* theWrappedObject, bool  enable);
   int  defaultSectionSize(QHeaderView* theWrappedObject) const;
   int  verticalOffset(QHeaderView* theWrappedObject) const;
   void resizeSection(QHeaderView* theWrappedObject, int  logicalIndex, int  size);
   void mouseReleaseEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   void setMovable(QHeaderView* theWrappedObject, bool  movable);
   void setModel(QHeaderView* theWrappedObject, QAbstractItemModel*  model);
   void showSection(QHeaderView* theWrappedObject, int  logicalIndex);
   int  stretchSectionCount(QHeaderView* theWrappedObject) const;
   void currentChanged(QHeaderView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  old);
   int  sectionViewportPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
   void mouseDoubleClickEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   int  visualIndexAt(QHeaderView* theWrappedObject, int  position) const;
   void setResizeMode(QHeaderView* theWrappedObject, int  logicalIndex, QHeaderView::ResizeMode  mode);
   int  count(QHeaderView* theWrappedObject) const;
   bool  isClickable(QHeaderView* theWrappedObject) const;
   Qt::Alignment  defaultAlignment(QHeaderView* theWrappedObject) const;
   void moveSection(QHeaderView* theWrappedObject, int  from, int  to);
   bool  isSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  hiddenSectionCount(QHeaderView* theWrappedObject) const;
   int  sortIndicatorSection(QHeaderView* theWrappedObject) const;
   void setHighlightSections(QHeaderView* theWrappedObject, bool  highlight);
   void reset(QHeaderView* theWrappedObject);
   bool  event(QHeaderView* theWrappedObject, QEvent*  e);
   void scrollTo(QHeaderView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
   void updateGeometries(QHeaderView* theWrappedObject);
   void setSelection(QHeaderView* theWrappedObject, const QRect&  arg__1, QItemSelectionModel::SelectionFlags  arg__2);
   void setClickable(QHeaderView* theWrappedObject, bool  clickable);
   void setResizeMode(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
   void paintEvent(QHeaderView* theWrappedObject, QPaintEvent*  e);
   int  sectionPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
   bool  viewportEvent(QHeaderView* theWrappedObject, QEvent*  e);
   int  length(QHeaderView* theWrappedObject) const;
   void rowsInserted(QHeaderView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   bool  highlightSections(QHeaderView* theWrappedObject) const;
   void paintSection(QHeaderView* theWrappedObject, QPainter*  painter, const QRect&  rect, int  logicalIndex) const;
   void doItemsLayout(QHeaderView* theWrappedObject);
   QRegion  visualRegionForSelection(QHeaderView* theWrappedObject, const QItemSelection&  selection) const;
   bool  cascadingSectionResizes(QHeaderView* theWrappedObject) const;
   Qt::Orientation  orientation(QHeaderView* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QHEADERVIEW_H
