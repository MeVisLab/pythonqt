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
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight) { QHeaderView::dataChanged(topLeft, bottomRight); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  old) { QHeaderView::currentChanged(current, old); }
inline void promoted_reset() { QHeaderView::reset(); }
inline int  promoted_verticalOffset() const { return QHeaderView::verticalOffset(); }
inline QSize  promoted_sectionSizeFromContents(int  logicalIndex) const { return QHeaderView::sectionSizeFromContents(logicalIndex); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QHeaderView::mousePressEvent(e); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QHeaderView::rowsInserted(parent, start, end); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { QHeaderView::mouseDoubleClickEvent(e); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QHeaderView::visualRegionForSelection(selection); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QHeaderView::mouseMoveEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QHeaderView::mouseReleaseEvent(e); }
inline void promoted_setModel(QAbstractItemModel*  model) { QHeaderView::setModel(model); }
inline int  promoted_horizontalOffset() const { return QHeaderView::horizontalOffset(); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QHeaderView::scrollContentsBy(dx, dy); }
inline void promoted_setSelection(const QRect&  arg__1, QItemSelectionModel::SelectionFlags  arg__2) { QHeaderView::setSelection(arg__1, arg__2); }
inline void promoted_doItemsLayout() { QHeaderView::doItemsLayout(); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QHeaderView::visualRect(index); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QHeaderView::isIndexHidden(index); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint) { QHeaderView::scrollTo(index, hint); }
inline void promoted_paintEvent(QPaintEvent*  e) { QHeaderView::paintEvent(e); }
inline bool  promoted_viewportEvent(QEvent*  e) { return QHeaderView::viewportEvent(e); }
inline bool  promoted_event(QEvent*  e) { return QHeaderView::event(e); }
inline void promoted_updateGeometries() { QHeaderView::updateGeometries(); }
inline void promoted_paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const { QHeaderView::paintSection(painter, rect, logicalIndex); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QHeaderView::indexAt(p); }
};

class PythonQtWrapper_QHeaderView : public QObject
{ Q_OBJECT
public:
public slots:
QHeaderView* new_QHeaderView(Qt::Orientation  orientation, QWidget*  parent = 0);
void delete_QHeaderView(QHeaderView* obj) { delete obj; } 
   void showSection(QHeaderView* theWrappedObject, int  logicalIndex);
   bool  isSortIndicatorShown(QHeaderView* theWrappedObject) const;
   int  count(QHeaderView* theWrappedObject) const;
   bool  highlightSections(QHeaderView* theWrappedObject) const;
   Qt::SortOrder  sortIndicatorOrder(QHeaderView* theWrappedObject) const;
   void dataChanged(QHeaderView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   void currentChanged(QHeaderView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  old);
   void setHighlightSections(QHeaderView* theWrappedObject, bool  highlight);
   void setSortIndicatorShown(QHeaderView* theWrappedObject, bool  show);
   int  visualIndexAt(QHeaderView* theWrappedObject, int  position) const;
   void setCascadingSectionResizes(QHeaderView* theWrappedObject, bool  enable);
   void reset(QHeaderView* theWrappedObject);
   int  sortIndicatorSection(QHeaderView* theWrappedObject) const;
   int  sectionSize(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  verticalOffset(QHeaderView* theWrappedObject) const;
   void setResizeMode(QHeaderView* theWrappedObject, int  logicalIndex, QHeaderView::ResizeMode  mode);
   void moveSection(QHeaderView* theWrappedObject, int  from, int  to);
   QSize  sectionSizeFromContents(QHeaderView* theWrappedObject, int  logicalIndex) const;
   int  sectionPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
   void setDefaultSectionSize(QHeaderView* theWrappedObject, int  size);
   void mousePressEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   void setStretchLastSection(QHeaderView* theWrappedObject, bool  stretch);
   bool  isSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex) const;
   void rowsInserted(QHeaderView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   int  stretchSectionCount(QHeaderView* theWrappedObject) const;
   int  offset(QHeaderView* theWrappedObject) const;
   void mouseDoubleClickEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   QRegion  visualRegionForSelection(QHeaderView* theWrappedObject, const QItemSelection&  selection) const;
   void hideSection(QHeaderView* theWrappedObject, int  logicalIndex);
   int  minimumSectionSize(QHeaderView* theWrappedObject) const;
   void mouseMoveEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   bool  stretchLastSection(QHeaderView* theWrappedObject) const;
   QSize  sizeHint(QHeaderView* theWrappedObject) const;
   Qt::Alignment  defaultAlignment(QHeaderView* theWrappedObject) const;
   void mouseReleaseEvent(QHeaderView* theWrappedObject, QMouseEvent*  e);
   int  length(QHeaderView* theWrappedObject) const;
   void setModel(QHeaderView* theWrappedObject, QAbstractItemModel*  model);
   void resizeSection(QHeaderView* theWrappedObject, int  logicalIndex, int  size);
   int  hiddenSectionCount(QHeaderView* theWrappedObject) const;
   int  horizontalOffset(QHeaderView* theWrappedObject) const;
   bool  isMovable(QHeaderView* theWrappedObject) const;
   void resizeSections(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
   void scrollContentsBy(QHeaderView* theWrappedObject, int  dx, int  dy);
   int  logicalIndexAt(QHeaderView* theWrappedObject, int  x, int  y) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, int  position) const;
   void setSelection(QHeaderView* theWrappedObject, const QRect&  arg__1, QItemSelectionModel::SelectionFlags  arg__2);
   void doItemsLayout(QHeaderView* theWrappedObject);
   QRect  visualRect(QHeaderView* theWrappedObject, const QModelIndex&  index) const;
   int  logicalIndexAt(QHeaderView* theWrappedObject, const QPoint&  pos) const;
   QHeaderView::ResizeMode  resizeMode(QHeaderView* theWrappedObject, int  logicalIndex) const;
   void setSortIndicator(QHeaderView* theWrappedObject, int  logicalIndex, Qt::SortOrder  order);
   bool  isIndexHidden(QHeaderView* theWrappedObject, const QModelIndex&  index) const;
   void scrollTo(QHeaderView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
   bool  isClickable(QHeaderView* theWrappedObject) const;
   int  defaultSectionSize(QHeaderView* theWrappedObject) const;
   int  sectionSizeHint(QHeaderView* theWrappedObject, int  logicalIndex) const;
   Qt::Orientation  orientation(QHeaderView* theWrappedObject) const;
   void setSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex, bool  hide);
   bool  restoreState(QHeaderView* theWrappedObject, const QByteArray&  state);
   void setMinimumSectionSize(QHeaderView* theWrappedObject, int  size);
   QByteArray  saveState(QHeaderView* theWrappedObject) const;
   void setDefaultAlignment(QHeaderView* theWrappedObject, Qt::Alignment  alignment);
   void paintEvent(QHeaderView* theWrappedObject, QPaintEvent*  e);
   int  visualIndex(QHeaderView* theWrappedObject, int  logicalIndex) const;
   bool  viewportEvent(QHeaderView* theWrappedObject, QEvent*  e);
   void setClickable(QHeaderView* theWrappedObject, bool  clickable);
   bool  event(QHeaderView* theWrappedObject, QEvent*  e);
   int  logicalIndex(QHeaderView* theWrappedObject, int  visualIndex) const;
   int  sectionViewportPosition(QHeaderView* theWrappedObject, int  logicalIndex) const;
   bool  sectionsHidden(QHeaderView* theWrappedObject) const;
   void setResizeMode(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode);
   void swapSections(QHeaderView* theWrappedObject, int  first, int  second);
   void updateGeometries(QHeaderView* theWrappedObject);
   bool  sectionsMoved(QHeaderView* theWrappedObject) const;
   void paintSection(QHeaderView* theWrappedObject, QPainter*  painter, const QRect&  rect, int  logicalIndex) const;
   QModelIndex  indexAt(QHeaderView* theWrappedObject, const QPoint&  p) const;
   bool  cascadingSectionResizes(QHeaderView* theWrappedObject) const;
   void setMovable(QHeaderView* theWrappedObject, bool  movable);
};

#endif // PYTHONQTWRAPPER_QHEADERVIEW_H
