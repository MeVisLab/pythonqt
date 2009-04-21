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
inline bool  promoted_event(QEvent*  e) { return QHeaderView::event(e); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  old) { QHeaderView::currentChanged(current, old); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QHeaderView::isIndexHidden(index); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { QHeaderView::mouseDoubleClickEvent(e); }
inline void promoted_setSelection(const QRect&  arg__1, QItemSelectionModel::SelectionFlags  arg__2) { QHeaderView::setSelection(arg__1, arg__2); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QHeaderView::mouseReleaseEvent(e); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QHeaderView::rowsInserted(parent, start, end); }
inline int  promoted_horizontalOffset() const { return QHeaderView::horizontalOffset(); }
inline void promoted_paintEvent(QPaintEvent*  e) { QHeaderView::paintEvent(e); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QHeaderView::visualRegionForSelection(selection); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QHeaderView::indexAt(p); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint) { QHeaderView::scrollTo(index, hint); }
inline void promoted_setModel(QAbstractItemModel*  model) { QHeaderView::setModel(model); }
inline void promoted_reset() { QHeaderView::reset(); }
inline void promoted_updateGeometries() { QHeaderView::updateGeometries(); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QHeaderView::visualRect(index); }
inline int  promoted_verticalOffset() const { return QHeaderView::verticalOffset(); }
inline void promoted_paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const { QHeaderView::paintSection(painter, rect, logicalIndex); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QHeaderView::mousePressEvent(e); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight) { QHeaderView::dataChanged(topLeft, bottomRight); }
inline void promoted_doItemsLayout() { QHeaderView::doItemsLayout(); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QHeaderView::scrollContentsBy(dx, dy); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QHeaderView::mouseMoveEvent(e); }
inline bool  promoted_viewportEvent(QEvent*  e) { return QHeaderView::viewportEvent(e); }
inline QSize  promoted_sectionSizeFromContents(int  logicalIndex) const { return QHeaderView::sectionSizeFromContents(logicalIndex); }
};

class PythonQtWrapper_QHeaderView : public QObject
{ Q_OBJECT
public:
public slots:
QHeaderView* new_QHeaderView(Qt::Orientation  orientation, QWidget*  parent = 0);
void delete_QHeaderView(QHeaderView* obj) { delete obj; } 
   int  sectionViewportPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
   void setMovable(QHeaderView* theWrappedObject, bool  movable);
   int  sectionSize(QHeaderView* theWrappedObject, int  logicalIndex) const;
   bool  event(QHeaderView* theWrappedObject, QEvent*  e);
   bool  isMovable(QHeaderView* theWrappedObject) const;
   void currentChanged(QHeaderView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  old);
   QHeaderView::ResizeMode  resizeMode(QHeaderView* theWrappedObject, int  logicalIndex) const;
   void setResizeMode(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
   int  count(QHeaderView* theWrappedObject) const;
   bool  isClickable(QHeaderView* theWrappedObject) const;
   bool  isIndexHidden(QHeaderView* theWrappedObject, const QModelIndex&  index) const;
   void setDefaultSectionSize(QHeaderView* theWrappedObject, int  size);
   void mouseDoubleClickEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   int  logicalIndex(QHeaderView* theWrappedObject, int  visualIndex) const;
   Qt::Alignment  defaultAlignment(QHeaderView* theWrappedObject) const;
   bool  restoreState(QHeaderView* theWrappedObject, const QByteArray&  state);
   void setSortIndicatorShown(QHeaderView* theWrappedObject, bool  show);
   void setSelection(QHeaderView* theWrappedObject, const QRect&  arg__1, QItemSelectionModel::SelectionFlags  arg__2);
   void mouseReleaseEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   void rowsInserted(QHeaderView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   int  horizontalOffset(QHeaderView* theWrappedObject) const;
   void setDefaultAlignment(QHeaderView* theWrappedObject, Qt::Alignment  alignment);
   void setStretchLastSection(QHeaderView* theWrappedObject, bool  stretch);
   bool  isSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex) const;
   void setResizeMode(QHeaderView* theWrappedObject, int  logicalIndex, QHeaderView::ResizeMode  mode);
   void setSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex, bool  hide);
   void moveSection(QHeaderView* theWrappedObject, int  from, int  to);
   int  offset(QHeaderView* theWrappedObject) const;
   int  sectionSizeHint(QHeaderView* theWrappedObject, int  logicalIndex) const;
   void paintEvent(QHeaderView* theWrappedObject, QPaintEvent*  e);
   void setMinimumSectionSize(QHeaderView* theWrappedObject, int  size);
   QRegion  visualRegionForSelection(QHeaderView* theWrappedObject, const QItemSelection&  selection) const;
   int  sectionPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
   QModelIndex  indexAt(QHeaderView* theWrappedObject, const QPoint&  p) const;
   void showSection(QHeaderView* theWrappedObject, int  logicalIndex);
   void setCascadingSectionResizes(QHeaderView* theWrappedObject, bool  enable);
   void scrollTo(QHeaderView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
   int  hiddenSectionCount(QHeaderView* theWrappedObject) const;
   void setModel(QHeaderView* theWrappedObject, QAbstractItemModel*  model);
   void reset(QHeaderView* theWrappedObject);
   void hideSection(QHeaderView* theWrappedObject, int  logicalIndex);
   void updateGeometries(QHeaderView* theWrappedObject);
   QRect  visualRect(QHeaderView* theWrappedObject, const QModelIndex&  index) const;
   int  stretchSectionCount(QHeaderView* theWrappedObject) const;
   int  verticalOffset(QHeaderView* theWrappedObject) const;
   void resizeSections(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
   bool  sectionsMoved(QHeaderView* theWrappedObject) const;
   bool  cascadingSectionResizes(QHeaderView* theWrappedObject) const;
   int  length(QHeaderView* theWrappedObject) const;
   void paintSection(QHeaderView* theWrappedObject, QPainter*  painter, const QRect&  rect, int  logicalIndex) const;
   void setClickable(QHeaderView* theWrappedObject, bool  clickable);
   int  logicalIndexAt(QHeaderView* theWrappedObject, int  position) const;
   void swapSections(QHeaderView* theWrappedObject, int  first, int  second);
   void mousePressEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   void dataChanged(QHeaderView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   void doItemsLayout(QHeaderView* theWrappedObject);
   void scrollContentsBy(QHeaderView* theWrappedObject, int  dx, int  dy);
   void mouseMoveEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   void setSortIndicator(QHeaderView* theWrappedObject, int  logicalIndex, Qt::SortOrder  order);
   void setHighlightSections(QHeaderView* theWrappedObject, bool  highlight);
   int  visualIndex(QHeaderView* theWrappedObject, int  logicalIndex) const;
   Qt::SortOrder  sortIndicatorOrder(QHeaderView* theWrappedObject) const;
   QSize  sizeHint(QHeaderView* theWrappedObject) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, int  x, int  y) const;
   int  sortIndicatorSection(QHeaderView* theWrappedObject) const;
   void resizeSection(QHeaderView* theWrappedObject, int  logicalIndex, int  size);
   bool  stretchLastSection(QHeaderView* theWrappedObject) const;
   int  visualIndexAt(QHeaderView* theWrappedObject, int  position) const;
   QByteArray  saveState(QHeaderView* theWrappedObject) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, const QPoint&  pos) const;
   Qt::Orientation  orientation(QHeaderView* theWrappedObject) const;
   bool  isSortIndicatorShown(QHeaderView* theWrappedObject) const;
   bool  highlightSections(QHeaderView* theWrappedObject) const;
   bool  viewportEvent(QHeaderView* theWrappedObject, QEvent*  e);
   bool  sectionsHidden(QHeaderView* theWrappedObject) const;
   int  minimumSectionSize(QHeaderView* theWrappedObject) const;
   int  defaultSectionSize(QHeaderView* theWrappedObject) const;
   QSize  sectionSizeFromContents(QHeaderView* theWrappedObject, int  logicalIndex) const;
};

#endif // PYTHONQTWRAPPER_QHEADERVIEW_H
