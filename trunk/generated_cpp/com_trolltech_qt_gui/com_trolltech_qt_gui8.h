#include <PythonQt.h>
#include <QObject>
#include <QTextBlock>
#include <QTextCursor>
#include <QTextDocumentFragment>
#include <QTextEdit>
#include <QTextFormat>
#include <QTextFrame>
#include <QTextLayout>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstracttextdocumentlayout.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
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
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregexp.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtabbar.h>
#include <qtableview.h>
#include <qtablewidget.h>
#include <qtabwidget.h>
#include <qtextbrowser.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtextedit.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextlist.h>
#include <qtextobject.h>
#include <qtexttable.h>
#include <qurl.h>
#include <qvector.h>
#include <qwidget.h>



class PythonQtShell_QTabWidget : public QTabWidget
{
public:
    PythonQtShell_QTabWidget(QWidget*  parent = 0):QTabWidget(parent),_wrapper(NULL) {};

virtual void changeEvent(QEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabInserted(int  index);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void tabRemoved(int  index);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void languageChange();
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTabWidget : public QTabWidget
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { QTabWidget::changeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QTabWidget::showEvent(arg__1); }
inline void promoted_tabInserted(int  index) { QTabWidget::tabInserted(index); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QTabWidget::paintEvent(arg__1); }
inline void promoted_tabRemoved(int  index) { QTabWidget::tabRemoved(index); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QTabWidget::resizeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QTabWidget::event(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QTabWidget::keyPressEvent(arg__1); }
};

class PythonQtWrapper_QTabWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTabWidget* new_QTabWidget(QWidget*  parent = 0);
void delete_QTabWidget(QTabWidget* obj) { delete obj; } 
   Qt::TextElideMode  elideMode(QTabWidget* theWrappedObject) const;
   QTabWidget::TabPosition  tabPosition(QTabWidget* theWrappedObject) const;
   int  indexOf(QTabWidget* theWrappedObject, QWidget*  widget) const;
   QString  tabWhatsThis(QTabWidget* theWrappedObject, int  index) const;
   void clear(QTabWidget* theWrappedObject);
   int  currentIndex(QTabWidget* theWrappedObject) const;
   void setTabIcon(QTabWidget* theWrappedObject, int  index, const QIcon&  icon);
   QWidget*  cornerWidget(QTabWidget* theWrappedObject, Qt::Corner  corner = Qt::TopRightCorner) const;
   int  insertTab(QTabWidget* theWrappedObject, int  index, QWidget*  widget, const QIcon&  icon, const QString&  label);
   void changeEvent(QTabWidget* theWrappedObject, QEvent*  arg__1);
   int  insertTab(QTabWidget* theWrappedObject, int  index, QWidget*  widget, const QString&  arg__3);
   void removeTab(QTabWidget* theWrappedObject, int  index);
   QSize  sizeHint(QTabWidget* theWrappedObject) const;
   bool  isTabEnabled(QTabWidget* theWrappedObject, int  index) const;
   QString  tabText(QTabWidget* theWrappedObject, int  index) const;
   void showEvent(QTabWidget* theWrappedObject, QShowEvent*  arg__1);
   QSize  iconSize(QTabWidget* theWrappedObject) const;
   void setTabText(QTabWidget* theWrappedObject, int  index, const QString&  arg__2);
   void tabInserted(QTabWidget* theWrappedObject, int  index);
   void setTabWhatsThis(QTabWidget* theWrappedObject, int  index, const QString&  text);
   QWidget*  currentWidget(QTabWidget* theWrappedObject) const;
   bool  usesScrollButtons(QTabWidget* theWrappedObject) const;
   void setTabEnabled(QTabWidget* theWrappedObject, int  index, bool  arg__2);
   void setTabShape(QTabWidget* theWrappedObject, QTabWidget::TabShape  s);
   int  addTab(QTabWidget* theWrappedObject, QWidget*  widget, const QIcon&  icon, const QString&  label);
   QWidget*  widget(QTabWidget* theWrappedObject, int  index) const;
   QString  tabToolTip(QTabWidget* theWrappedObject, int  index) const;
   int  addTab(QTabWidget* theWrappedObject, QWidget*  widget, const QString&  arg__2);
   void paintEvent(QTabWidget* theWrappedObject, QPaintEvent*  arg__1);
   void setElideMode(QTabWidget* theWrappedObject, Qt::TextElideMode  arg__1);
   void tabRemoved(QTabWidget* theWrappedObject, int  index);
   QTabWidget::TabShape  tabShape(QTabWidget* theWrappedObject) const;
   int  count(QTabWidget* theWrappedObject) const;
   void setUsesScrollButtons(QTabWidget* theWrappedObject, bool  useButtons);
   QIcon  tabIcon(QTabWidget* theWrappedObject, int  index) const;
   void setTabToolTip(QTabWidget* theWrappedObject, int  index, const QString&  tip);
   void resizeEvent(QTabWidget* theWrappedObject, QResizeEvent*  arg__1);
   QSize  minimumSizeHint(QTabWidget* theWrappedObject) const;
   bool  event(QTabWidget* theWrappedObject, QEvent*  arg__1);
   void keyPressEvent(QTabWidget* theWrappedObject, QKeyEvent*  arg__1);
   void setTabPosition(QTabWidget* theWrappedObject, QTabWidget::TabPosition  arg__1);
   void setCornerWidget(QTabWidget* theWrappedObject, QWidget*  w, Qt::Corner  corner = Qt::TopRightCorner);
   void setIconSize(QTabWidget* theWrappedObject, const QSize&  size);
};





class PythonQtShell_QTableView : public QTableView
{
public:
    PythonQtShell_QTableView(QWidget*  parent = 0):QTableView(parent),_wrapper(NULL) {};

virtual int  horizontalOffset() const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void setModel(QAbstractItemModel*  model);
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void updateGeometries();
virtual void horizontalScrollbarAction(int  action);
virtual void verticalScrollbarAction(int  action);
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual int  sizeHintForRow(int  row) const;
virtual void setRootIndex(const QModelIndex&  index);
virtual void paintEvent(QPaintEvent*  e);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void scrollContentsBy(int  dx, int  dy);
virtual QStyleOptionViewItem  viewOptions() const;
virtual int  verticalOffset() const;
virtual void timerEvent(QTimerEvent*  event);
virtual int  sizeHintForColumn(int  column) const;
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual void verticalScrollbarValueChanged(int  value);
virtual void selectAll();
virtual void editorDestroyed(QObject*  editor);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual void updateEditorData();
virtual void commitData(QWidget*  editor);
virtual void dropEvent(QDropEvent*  event);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void keyboardSearch(const QString&  search);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  viewportEvent(QEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void updateEditorGeometries();
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void horizontalScrollbarValueChanged(int  value);
virtual void reset();
virtual bool  focusNextPrevChild(bool  next);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void doItemsLayout();
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTableView : public QTableView
{ public:
inline int  promoted_horizontalOffset() const { return QTableView::horizontalOffset(); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QTableView::visualRegionForSelection(selection); }
inline void promoted_setModel(QAbstractItemModel*  model) { QTableView::setModel(model); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return QTableView::selectedIndexes(); }
inline void promoted_updateGeometries() { QTableView::updateGeometries(); }
inline void promoted_horizontalScrollbarAction(int  action) { QTableView::horizontalScrollbarAction(action); }
inline void promoted_verticalScrollbarAction(int  action) { QTableView::verticalScrollbarAction(action); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QTableView::isIndexHidden(index); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QTableView::selectionChanged(selected, deselected); }
inline void promoted_setSelectionModel(QItemSelectionModel*  selectionModel) { QTableView::setSelectionModel(selectionModel); }
inline int  promoted_sizeHintForRow(int  row) const { return QTableView::sizeHintForRow(row); }
inline void promoted_setRootIndex(const QModelIndex&  index) { QTableView::setRootIndex(index); }
inline void promoted_paintEvent(QPaintEvent*  e) { QTableView::paintEvent(e); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QTableView::currentChanged(current, previous); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QTableView::visualRect(index); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QTableView::indexAt(p); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QTableView::scrollContentsBy(dx, dy); }
inline QStyleOptionViewItem  promoted_viewOptions() const { return QTableView::viewOptions(); }
inline int  promoted_verticalOffset() const { return QTableView::verticalOffset(); }
inline void promoted_timerEvent(QTimerEvent*  event) { QTableView::timerEvent(event); }
inline int  promoted_sizeHintForColumn(int  column) const { return QTableView::sizeHintForColumn(column); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QTableView::setSelection(rect, command); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QTableView::scrollTo(index, hint); }
};

class PythonQtWrapper_QTableView : public QObject
{ Q_OBJECT
public:
public slots:
QTableView* new_QTableView(QWidget*  parent = 0);
void delete_QTableView(QTableView* obj) { delete obj; } 
   void setSpan(QTableView* theWrappedObject, int  row, int  column, int  rowSpan, int  columnSpan);
   void setColumnHidden(QTableView* theWrappedObject, int  column, bool  hide);
   int  rowHeight(QTableView* theWrappedObject, int  row) const;
   void setRowHeight(QTableView* theWrappedObject, int  row, int  height);
   int  horizontalOffset(QTableView* theWrappedObject) const;
   void setCornerButtonEnabled(QTableView* theWrappedObject, bool  enable);
   QHeaderView*  verticalHeader(QTableView* theWrappedObject) const;
   int  columnSpan(QTableView* theWrappedObject, int  row, int  column) const;
   QRegion  visualRegionForSelection(QTableView* theWrappedObject, const QItemSelection&  selection) const;
   void setModel(QTableView* theWrappedObject, QAbstractItemModel*  model);
   QList<QModelIndex >  selectedIndexes(QTableView* theWrappedObject) const;
   void clearSpans(QTableView* theWrappedObject);
   Qt::PenStyle  gridStyle(QTableView* theWrappedObject) const;
   bool  isRowHidden(QTableView* theWrappedObject, int  row) const;
   void setRowHidden(QTableView* theWrappedObject, int  row, bool  hide);
   void updateGeometries(QTableView* theWrappedObject);
   void horizontalScrollbarAction(QTableView* theWrappedObject, int  action);
   bool  isSortingEnabled(QTableView* theWrappedObject) const;
   QHeaderView*  horizontalHeader(QTableView* theWrappedObject) const;
   void setVerticalHeader(QTableView* theWrappedObject, QHeaderView*  header);
   void verticalScrollbarAction(QTableView* theWrappedObject, int  action);
   void setColumnWidth(QTableView* theWrappedObject, int  column, int  width);
   bool  isIndexHidden(QTableView* theWrappedObject, const QModelIndex&  index) const;
   int  rowAt(QTableView* theWrappedObject, int  y) const;
   void selectionChanged(QTableView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected);
   void setSortingEnabled(QTableView* theWrappedObject, bool  enable);
   int  columnAt(QTableView* theWrappedObject, int  x) const;
   int  rowSpan(QTableView* theWrappedObject, int  row, int  column) const;
   void setSelectionModel(QTableView* theWrappedObject, QItemSelectionModel*  selectionModel);
   int  rowViewportPosition(QTableView* theWrappedObject, int  row) const;
   void setWordWrap(QTableView* theWrappedObject, bool  on);
   void setGridStyle(QTableView* theWrappedObject, Qt::PenStyle  style);
   int  sizeHintForRow(QTableView* theWrappedObject, int  row) const;
   void setRootIndex(QTableView* theWrappedObject, const QModelIndex&  index);
   bool  wordWrap(QTableView* theWrappedObject) const;
   void paintEvent(QTableView* theWrappedObject, QPaintEvent*  e);
   void currentChanged(QTableView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous);
   bool  showGrid(QTableView* theWrappedObject) const;
   QRect  visualRect(QTableView* theWrappedObject, const QModelIndex&  index) const;
   int  columnViewportPosition(QTableView* theWrappedObject, int  column) const;
   QModelIndex  indexAt(QTableView* theWrappedObject, const QPoint&  p) const;
   bool  isColumnHidden(QTableView* theWrappedObject, int  column) const;
   bool  isCornerButtonEnabled(QTableView* theWrappedObject) const;
   void scrollContentsBy(QTableView* theWrappedObject, int  dx, int  dy);
   QStyleOptionViewItem  viewOptions(QTableView* theWrappedObject) const;
   void sortByColumn(QTableView* theWrappedObject, int  column, Qt::SortOrder  order);
   void setHorizontalHeader(QTableView* theWrappedObject, QHeaderView*  header);
   int  verticalOffset(QTableView* theWrappedObject) const;
   void timerEvent(QTableView* theWrappedObject, QTimerEvent*  event);
   int  sizeHintForColumn(QTableView* theWrappedObject, int  column) const;
   void setSelection(QTableView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
   void scrollTo(QTableView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
   int  columnWidth(QTableView* theWrappedObject, int  column) const;
};





class PythonQtShell_QTableWidget : public QTableWidget
{
public:
    PythonQtShell_QTableWidget(QWidget*  parent = 0):QTableWidget(parent),_wrapper(NULL) {};
    PythonQtShell_QTableWidget(int  rows, int  columns, QWidget*  parent = 0):QTableWidget(rows, columns, parent),_wrapper(NULL) {};

virtual QMimeData*  mimeData(const QList<QTableWidgetItem* >  items) const;
virtual bool  dropMimeData(int  row, int  column, const QMimeData*  data, Qt::DropAction  action);
virtual void dropEvent(QDropEvent*  event);
virtual Qt::DropActions  supportedDropActions() const;
virtual QStringList  mimeTypes() const;
virtual bool  event(QEvent*  e);
virtual void verticalScrollbarValueChanged(int  value);
virtual void selectAll();
virtual int  sizeHintForColumn(int  column) const;
virtual void timerEvent(QTimerEvent*  event);
virtual void paintEvent(QPaintEvent*  e);
virtual void verticalScrollbarAction(int  action);
virtual void horizontalScrollbarAction(int  action);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual int  sizeHintForRow(int  row) const;
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual int  horizontalOffset() const;
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual void updateGeometries();
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void setRootIndex(const QModelIndex&  index);
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QStyleOptionViewItem  viewOptions() const;
virtual int  verticalOffset() const;
virtual void scrollContentsBy(int  dx, int  dy);
virtual void editorDestroyed(QObject*  editor);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual void updateEditorData();
virtual void commitData(QWidget*  editor);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void keyboardSearch(const QString&  search);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual bool  viewportEvent(QEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void updateEditorGeometries();
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void horizontalScrollbarValueChanged(int  value);
virtual void reset();
virtual bool  focusNextPrevChild(bool  next);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void doItemsLayout();
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTableWidget : public QTableWidget
{ public:
inline bool  promoted_dropMimeData(int  row, int  column, const QMimeData*  data, Qt::DropAction  action) { return QTableWidget::dropMimeData(row, column, data, action); }
inline void promoted_dropEvent(QDropEvent*  event) { QTableWidget::dropEvent(event); }
inline Qt::DropActions  promoted_supportedDropActions() const { return QTableWidget::supportedDropActions(); }
inline QStringList  promoted_mimeTypes() const { return QTableWidget::mimeTypes(); }
inline bool  promoted_event(QEvent*  e) { return QTableWidget::event(e); }
};

class PythonQtWrapper_QTableWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTableWidget* new_QTableWidget(QWidget*  parent = 0);
QTableWidget* new_QTableWidget(int  rows, int  columns, QWidget*  parent = 0);
void delete_QTableWidget(QTableWidget* obj) { delete obj; } 
   int  currentColumn(QTableWidget* theWrappedObject) const;
   QTableWidgetItem*  horizontalHeaderItem(QTableWidget* theWrappedObject, int  column) const;
   void setItem(QTableWidget* theWrappedObject, int  row, int  column, QTableWidgetItem*  item);
   QTableWidgetItem*  currentItem(QTableWidget* theWrappedObject) const;
   QList<QTableWidgetSelectionRange >  selectedRanges(QTableWidget* theWrappedObject) const;
   QList<QTableWidgetItem* >  selectedItems(QTableWidget* theWrappedObject);
   void setCurrentItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item, QItemSelectionModel::SelectionFlags  command);
   void setCurrentItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   int  visualColumn(QTableWidget* theWrappedObject, int  logicalColumn) const;
   int  row(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   QList<QTableWidgetItem* >  findItems(QTableWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags) const;
   QTableWidgetItem*  verticalHeaderItem(QTableWidget* theWrappedObject, int  row) const;
   void sortItems(QTableWidget* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   void setCurrentCell(QTableWidget* theWrappedObject, int  row, int  column, QItemSelectionModel::SelectionFlags  command);
   void setCurrentCell(QTableWidget* theWrappedObject, int  row, int  column);
   bool  dropMimeData(QTableWidget* theWrappedObject, int  row, int  column, const QMimeData*  data, Qt::DropAction  action);
   QTableWidgetItem*  itemAt(QTableWidget* theWrappedObject, const QPoint&  p) const;
   QTableWidgetItem*  itemAt(QTableWidget* theWrappedObject, int  x, int  y) const;
   QTableWidgetItem*  takeHorizontalHeaderItem(QTableWidget* theWrappedObject, int  column);
   int  column(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   int  rowCount(QTableWidget* theWrappedObject) const;
   void setVerticalHeaderLabels(QTableWidget* theWrappedObject, const QStringList&  labels);
   void setVerticalHeaderItem(QTableWidget* theWrappedObject, int  row, QTableWidgetItem*  item);
   int  visualRow(QTableWidget* theWrappedObject, int  logicalRow) const;
   QWidget*  cellWidget(QTableWidget* theWrappedObject, int  row, int  column) const;
   void dropEvent(QTableWidget* theWrappedObject, QDropEvent*  event);
   void removeCellWidget(QTableWidget* theWrappedObject, int  row, int  column);
   const QTableWidgetItem*  itemPrototype(QTableWidget* theWrappedObject) const;
   int  currentRow(QTableWidget* theWrappedObject) const;
   Qt::DropActions  supportedDropActions(QTableWidget* theWrappedObject) const;
   void openPersistentEditor(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   void setHorizontalHeaderLabels(QTableWidget* theWrappedObject, const QStringList&  labels);
   QTableWidgetItem*  takeItem(QTableWidget* theWrappedObject, int  row, int  column);
   void setHorizontalHeaderItem(QTableWidget* theWrappedObject, int  column, QTableWidgetItem*  item);
   void setRowCount(QTableWidget* theWrappedObject, int  rows);
   void setItemPrototype(QTableWidget* theWrappedObject, const QTableWidgetItem*  item);
   void setColumnCount(QTableWidget* theWrappedObject, int  columns);
   void editItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   QTableWidgetItem*  takeVerticalHeaderItem(QTableWidget* theWrappedObject, int  row);
   int  columnCount(QTableWidget* theWrappedObject) const;
   QRect  visualItemRect(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   void setCellWidget(QTableWidget* theWrappedObject, int  row, int  column, QWidget*  widget);
   QStringList  mimeTypes(QTableWidget* theWrappedObject) const;
   QTableWidgetItem*  item(QTableWidget* theWrappedObject, int  row, int  column) const;
   void closePersistentEditor(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   bool  event(QTableWidget* theWrappedObject, QEvent*  e);
   void setRangeSelected(QTableWidget* theWrappedObject, const QTableWidgetSelectionRange&  range, bool  select);
};





class PythonQtShell_QTableWidgetItem : public QTableWidgetItem
{
public:
    PythonQtShell_QTableWidgetItem(const QIcon&  icon, const QString&  text, int  type = Type):QTableWidgetItem(icon, text, type),_wrapper(NULL) {};
    PythonQtShell_QTableWidgetItem(const QString&  text, int  type = Type):QTableWidgetItem(text, type),_wrapper(NULL) {};
    PythonQtShell_QTableWidgetItem(int  type = Type):QTableWidgetItem(type),_wrapper(NULL) {};

virtual bool  operator_less(const QTableWidgetItem&  other) const;
virtual QVariant  data(int  role) const;
virtual void write(QDataStream&  out) const;
virtual QTableWidgetItem*  clone() const;
virtual void setData(int  role, const QVariant&  value);
virtual void read(QDataStream&  in);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTableWidgetItem : public QTableWidgetItem
{ public:
inline QVariant  promoted_data(int  role) const { return QTableWidgetItem::data(role); }
inline QTableWidgetItem*  promoted_clone() const { return QTableWidgetItem::clone(); }
inline void promoted_setData(int  role, const QVariant&  value) { QTableWidgetItem::setData(role, value); }
};

class PythonQtWrapper_QTableWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QTableWidgetItem::Type,   UserType = QTableWidgetItem::UserType};
public slots:
QTableWidgetItem* new_QTableWidgetItem(const QIcon&  icon, const QString&  text, int  type = Type);
QTableWidgetItem* new_QTableWidgetItem(const QString&  text, int  type = Type);
QTableWidgetItem* new_QTableWidgetItem(int  type = Type);
void delete_QTableWidgetItem(QTableWidgetItem* obj) { delete obj; } 
   Qt::CheckState  checkState(QTableWidgetItem* theWrappedObject) const;
   void setStatusTip(QTableWidgetItem* theWrappedObject, const QString&  statusTip);
   QVariant  data(QTableWidgetItem* theWrappedObject, int  role) const;
   int  column(QTableWidgetItem* theWrappedObject) const;
   void setFont(QTableWidgetItem* theWrappedObject, const QFont&  font);
   void setSizeHint(QTableWidgetItem* theWrappedObject, const QSize&  size);
   int  type(QTableWidgetItem* theWrappedObject) const;
   QString  whatsThis(QTableWidgetItem* theWrappedObject) const;
   QString  toolTip(QTableWidgetItem* theWrappedObject) const;
   QTableWidgetItem*  clone(QTableWidgetItem* theWrappedObject) const;
   QSize  sizeHint(QTableWidgetItem* theWrappedObject) const;
   QString  statusTip(QTableWidgetItem* theWrappedObject) const;
   void setWhatsThis(QTableWidgetItem* theWrappedObject, const QString&  whatsThis);
   void setForeground(QTableWidgetItem* theWrappedObject, const QBrush&  brush);
   void setFlags(QTableWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   QBrush  foreground(QTableWidgetItem* theWrappedObject) const;
   void setText(QTableWidgetItem* theWrappedObject, const QString&  text);
   QTableWidget*  tableWidget(QTableWidgetItem* theWrappedObject) const;
   void setBackground(QTableWidgetItem* theWrappedObject, const QBrush&  brush);
   void setTextAlignment(QTableWidgetItem* theWrappedObject, int  alignment);
   QBrush  background(QTableWidgetItem* theWrappedObject) const;
   QIcon  icon(QTableWidgetItem* theWrappedObject) const;
   void setData(QTableWidgetItem* theWrappedObject, int  role, const QVariant&  value);
   void setSelected(QTableWidgetItem* theWrappedObject, bool  select);
   bool  isSelected(QTableWidgetItem* theWrappedObject) const;
   Qt::ItemFlags  flags(QTableWidgetItem* theWrappedObject) const;
   int  row(QTableWidgetItem* theWrappedObject) const;
   void setIcon(QTableWidgetItem* theWrappedObject, const QIcon&  icon);
   QFont  font(QTableWidgetItem* theWrappedObject) const;
   int  textAlignment(QTableWidgetItem* theWrappedObject) const;
   void setToolTip(QTableWidgetItem* theWrappedObject, const QString&  toolTip);
   void setCheckState(QTableWidgetItem* theWrappedObject, Qt::CheckState  state);
   QString  text(QTableWidgetItem* theWrappedObject) const;
   void writeTo(QTableWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QTableWidgetItem* theWrappedObject, QDataStream&  in);
};





class PythonQtWrapper_QTableWidgetSelectionRange : public QObject
{ Q_OBJECT
public:
public slots:
QTableWidgetSelectionRange* new_QTableWidgetSelectionRange();
QTableWidgetSelectionRange* new_QTableWidgetSelectionRange(const QTableWidgetSelectionRange&  other);
QTableWidgetSelectionRange* new_QTableWidgetSelectionRange(int  top, int  left, int  bottom, int  right);
void delete_QTableWidgetSelectionRange(QTableWidgetSelectionRange* obj) { delete obj; } 
   int  rowCount(QTableWidgetSelectionRange* theWrappedObject) const;
   int  topRow(QTableWidgetSelectionRange* theWrappedObject) const;
   int  leftColumn(QTableWidgetSelectionRange* theWrappedObject) const;
   int  rightColumn(QTableWidgetSelectionRange* theWrappedObject) const;
   int  bottomRow(QTableWidgetSelectionRange* theWrappedObject) const;
   int  columnCount(QTableWidgetSelectionRange* theWrappedObject) const;
};





class PythonQtShell_QTabletEvent : public QTabletEvent
{
public:
    PythonQtShell_QTabletEvent(QEvent::Type  t, const QPoint&  pos, const QPoint&  globalPos, const QPointF&  hiResGlobalPos, int  device, int  pointerType, qreal  pressure, int  xTilt, int  yTilt, qreal  tangentialPressure, qreal  rotation, int  z, Qt::KeyboardModifiers  keyState, qint64  uniqueID):QTabletEvent(t, pos, globalPos, hiResGlobalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTabletEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TabletDevice PointerType )
enum TabletDevice{
  NoDevice = QTabletEvent::NoDevice,   Puck = QTabletEvent::Puck,   Stylus = QTabletEvent::Stylus,   Airbrush = QTabletEvent::Airbrush,   FourDMouse = QTabletEvent::FourDMouse,   XFreeEraser = QTabletEvent::XFreeEraser,   RotationStylus = QTabletEvent::RotationStylus};
enum PointerType{
  UnknownPointer = QTabletEvent::UnknownPointer,   Pen = QTabletEvent::Pen,   Cursor = QTabletEvent::Cursor,   Eraser = QTabletEvent::Eraser};
public slots:
QTabletEvent* new_QTabletEvent(QEvent::Type  t, const QPoint&  pos, const QPoint&  globalPos, const QPointF&  hiResGlobalPos, int  device, int  pointerType, qreal  pressure, int  xTilt, int  yTilt, qreal  tangentialPressure, qreal  rotation, int  z, Qt::KeyboardModifiers  keyState, qint64  uniqueID);
void delete_QTabletEvent(QTabletEvent* obj) { delete obj; } 
   qreal  hiResGlobalY(QTabletEvent* theWrappedObject) const;
   const QPointF*  hiResGlobalPos(QTabletEvent* theWrappedObject) const;
   const QPoint*  pos(QTabletEvent* theWrappedObject) const;
   const QPoint*  globalPos(QTabletEvent* theWrappedObject) const;
   int  x(QTabletEvent* theWrappedObject) const;
   int  y(QTabletEvent* theWrappedObject) const;
   int  z(QTabletEvent* theWrappedObject) const;
   qreal  tangentialPressure(QTabletEvent* theWrappedObject) const;
   int  globalX(QTabletEvent* theWrappedObject) const;
   int  globalY(QTabletEvent* theWrappedObject) const;
   qint64  uniqueId(QTabletEvent* theWrappedObject) const;
   int  xTilt(QTabletEvent* theWrappedObject) const;
   QTabletEvent::PointerType  pointerType(QTabletEvent* theWrappedObject) const;
   qreal  rotation(QTabletEvent* theWrappedObject) const;
   QTabletEvent::TabletDevice  device(QTabletEvent* theWrappedObject) const;
   int  yTilt(QTabletEvent* theWrappedObject) const;
   qreal  hiResGlobalX(QTabletEvent* theWrappedObject) const;
   qreal  pressure(QTabletEvent* theWrappedObject) const;
};





class PythonQtWrapper_QTextBlock : public QObject
{ Q_OBJECT
public:
public slots:
QTextBlock* new_QTextBlock();
QTextBlock* new_QTextBlock(const QTextBlock&  o);
void delete_QTextBlock(QTextBlock* obj) { delete obj; } 
   QTextBlock::iterator  end(QTextBlock* theWrappedObject) const;
   void setRevision(QTextBlock* theWrappedObject, int  rev);
   bool  isValid(QTextBlock* theWrappedObject) const;
   QTextBlock  next(QTextBlock* theWrappedObject) const;
   bool  operator_less(QTextBlock* theWrappedObject, const QTextBlock&  o) const;
   QTextBlock  previous(QTextBlock* theWrappedObject) const;
   QTextCharFormat  charFormat(QTextBlock* theWrappedObject) const;
   QTextBlockFormat  blockFormat(QTextBlock* theWrappedObject) const;
   bool  contains(QTextBlock* theWrappedObject, int  position) const;
   QTextLayout*  layout(QTextBlock* theWrappedObject) const;
   int  position(QTextBlock* theWrappedObject) const;
   void clearLayout(QTextBlock* theWrappedObject);
   QString  text(QTextBlock* theWrappedObject) const;
   int  blockFormatIndex(QTextBlock* theWrappedObject) const;
   int  blockNumber(QTextBlock* theWrappedObject) const;
   void setUserData(QTextBlock* theWrappedObject, QTextBlockUserData*  data);
   int  charFormatIndex(QTextBlock* theWrappedObject) const;
   int  revision(QTextBlock* theWrappedObject) const;
   bool  operator_equal(QTextBlock* theWrappedObject, const QTextBlock&  o) const;
   void setVisible(QTextBlock* theWrappedObject, bool  visible);
   bool  isVisible(QTextBlock* theWrappedObject) const;
   int  length(QTextBlock* theWrappedObject) const;
   QTextBlock::iterator  begin(QTextBlock* theWrappedObject) const;
   QTextList*  textList(QTextBlock* theWrappedObject) const;
   QTextBlockUserData*  userData(QTextBlock* theWrappedObject) const;
   int  userState(QTextBlock* theWrappedObject) const;
   void setUserState(QTextBlock* theWrappedObject, int  state);
   const QTextDocument*  document(QTextBlock* theWrappedObject) const;
};





class PythonQtShell_QTextBlockFormat : public QTextBlockFormat
{
public:
    PythonQtShell_QTextBlockFormat():QTextBlockFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextBlockFormat(const QTextFormat&  fmt):QTextBlockFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextBlockFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextBlockFormat* new_QTextBlockFormat();
QTextBlockFormat* new_QTextBlockFormat(const QTextBlockFormat& other) {
PythonQtShell_QTextBlockFormat* a = new PythonQtShell_QTextBlockFormat();
*((QTextBlockFormat*)a) = other;
return a; }
void delete_QTextBlockFormat(QTextBlockFormat* obj) { delete obj; } 
   void setTopMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   bool  isValid(QTextBlockFormat* theWrappedObject) const;
   void setAlignment(QTextBlockFormat* theWrappedObject, Qt::Alignment  alignment);
   qreal  textIndent(QTextBlockFormat* theWrappedObject) const;
   void setRightMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   Qt::Alignment  alignment(QTextBlockFormat* theWrappedObject) const;
   void setTabPositions(QTextBlockFormat* theWrappedObject, const QList<QTextOption::Tab >&  tabs);
   int  indent(QTextBlockFormat* theWrappedObject) const;
   void setTextIndent(QTextBlockFormat* theWrappedObject, qreal  margin);
   void setBottomMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   void setPageBreakPolicy(QTextBlockFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags);
   QList<QTextOption::Tab >  tabPositions(QTextBlockFormat* theWrappedObject) const;
   bool  nonBreakableLines(QTextBlockFormat* theWrappedObject) const;
   qreal  leftMargin(QTextBlockFormat* theWrappedObject) const;
   void setLeftMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   void setNonBreakableLines(QTextBlockFormat* theWrappedObject, bool  b);
   qreal  bottomMargin(QTextBlockFormat* theWrappedObject) const;
   qreal  rightMargin(QTextBlockFormat* theWrappedObject) const;
   qreal  topMargin(QTextBlockFormat* theWrappedObject) const;
   void setIndent(QTextBlockFormat* theWrappedObject, int  indent);
   QTextFormat::PageBreakFlags  pageBreakPolicy(QTextBlockFormat* theWrappedObject) const;
};





class PythonQtShell_QTextBlockGroup : public QTextBlockGroup
{
public:
    PythonQtShell_QTextBlockGroup(QTextDocument*  doc):QTextBlockGroup(doc),_wrapper(NULL) {};

virtual void blockRemoved(const QTextBlock&  block);
virtual void blockInserted(const QTextBlock&  block);
virtual void blockFormatChanged(const QTextBlock&  block);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextBlockGroup : public QTextBlockGroup
{ public:
inline void promoted_blockRemoved(const QTextBlock&  block) { QTextBlockGroup::blockRemoved(block); }
inline void promoted_blockInserted(const QTextBlock&  block) { QTextBlockGroup::blockInserted(block); }
inline void promoted_blockFormatChanged(const QTextBlock&  block) { QTextBlockGroup::blockFormatChanged(block); }
};

class PythonQtWrapper_QTextBlockGroup : public QObject
{ Q_OBJECT
public:
public slots:
   void blockRemoved(QTextBlockGroup* theWrappedObject, const QTextBlock&  block);
   void blockInserted(QTextBlockGroup* theWrappedObject, const QTextBlock&  block);
   void blockFormatChanged(QTextBlockGroup* theWrappedObject, const QTextBlock&  block);
};





class PythonQtShell_QTextBlockUserData : public QTextBlockUserData
{
public:
    PythonQtShell_QTextBlockUserData():QTextBlockUserData(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextBlockUserData : public QObject
{ Q_OBJECT
public:
public slots:
QTextBlockUserData* new_QTextBlockUserData();
void delete_QTextBlockUserData(QTextBlockUserData* obj) { delete obj; } 
};





class PythonQtShell_QTextBrowser : public QTextBrowser
{
public:
    PythonQtShell_QTextBrowser(QWidget*  parent = 0):QTextBrowser(parent),_wrapper(NULL) {};

virtual void home();
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual void mouseMoveEvent(QMouseEvent*  ev);
virtual bool  focusNextPrevChild(bool  next);
virtual void setSource(const QUrl&  name);
virtual void mouseReleaseEvent(QMouseEvent*  ev);
virtual void backward();
virtual void reload();
virtual void paintEvent(QPaintEvent*  e);
virtual void forward();
virtual bool  event(QEvent*  e);
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void focusOutEvent(QFocusEvent*  ev);
virtual void mousePressEvent(QMouseEvent*  ev);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void changeEvent(QEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual void dragEnterEvent(QDragEnterEvent*  e);
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void resizeEvent(QResizeEvent*  e);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual bool  canInsertFromMimeData(const QMimeData*  source) const;
virtual void insertFromMimeData(const QMimeData*  source);
virtual void timerEvent(QTimerEvent*  e);
virtual QMimeData*  createMimeDataFromSelection() const;
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);
virtual void showEvent(QShowEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  e);
virtual void scrollContentsBy(int  dx, int  dy);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextBrowser : public QTextBrowser
{ public:
inline void promoted_home() { QTextBrowser::home(); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QTextBrowser::loadResource(type, name); }
inline void promoted_mouseMoveEvent(QMouseEvent*  ev) { QTextBrowser::mouseMoveEvent(ev); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QTextBrowser::focusNextPrevChild(next); }
inline void promoted_setSource(const QUrl&  name) { QTextBrowser::setSource(name); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  ev) { QTextBrowser::mouseReleaseEvent(ev); }
inline void promoted_backward() { QTextBrowser::backward(); }
inline void promoted_reload() { QTextBrowser::reload(); }
inline void promoted_paintEvent(QPaintEvent*  e) { QTextBrowser::paintEvent(e); }
inline void promoted_forward() { QTextBrowser::forward(); }
inline bool  promoted_event(QEvent*  e) { return QTextBrowser::event(e); }
inline void promoted_keyPressEvent(QKeyEvent*  ev) { QTextBrowser::keyPressEvent(ev); }
inline void promoted_focusOutEvent(QFocusEvent*  ev) { QTextBrowser::focusOutEvent(ev); }
inline void promoted_mousePressEvent(QMouseEvent*  ev) { QTextBrowser::mousePressEvent(ev); }
};

class PythonQtWrapper_QTextBrowser : public QObject
{ Q_OBJECT
public:
public slots:
QTextBrowser* new_QTextBrowser(QWidget*  parent = 0);
void delete_QTextBrowser(QTextBrowser* obj) { delete obj; } 
   bool  openLinks(QTextBrowser* theWrappedObject) const;
   void setOpenExternalLinks(QTextBrowser* theWrappedObject, bool  open);
   void clearHistory(QTextBrowser* theWrappedObject);
   QStringList  searchPaths(QTextBrowser* theWrappedObject) const;
   QVariant  loadResource(QTextBrowser* theWrappedObject, int  type, const QUrl&  name);
   QString  historyTitle(QTextBrowser* theWrappedObject, int  arg__1) const;
   void mouseMoveEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev);
   bool  openExternalLinks(QTextBrowser* theWrappedObject) const;
   void setOpenLinks(QTextBrowser* theWrappedObject, bool  open);
   void setSearchPaths(QTextBrowser* theWrappedObject, const QStringList&  paths);
   bool  focusNextPrevChild(QTextBrowser* theWrappedObject, bool  next);
   void mouseReleaseEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev);
   bool  isForwardAvailable(QTextBrowser* theWrappedObject) const;
   bool  isBackwardAvailable(QTextBrowser* theWrappedObject) const;
   QUrl  source(QTextBrowser* theWrappedObject) const;
   void paintEvent(QTextBrowser* theWrappedObject, QPaintEvent*  e);
   int  forwardHistoryCount(QTextBrowser* theWrappedObject) const;
   bool  event(QTextBrowser* theWrappedObject, QEvent*  e);
   void keyPressEvent(QTextBrowser* theWrappedObject, QKeyEvent*  ev);
   void focusOutEvent(QTextBrowser* theWrappedObject, QFocusEvent*  ev);
   QUrl  historyUrl(QTextBrowser* theWrappedObject, int  arg__1) const;
   void mousePressEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev);
   int  backwardHistoryCount(QTextBrowser* theWrappedObject) const;
};





class PythonQtShell_QTextCharFormat : public QTextCharFormat
{
public:
    PythonQtShell_QTextCharFormat():QTextCharFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextCharFormat(const QTextFormat&  fmt):QTextCharFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextCharFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(VerticalAlignment UnderlineStyle )
enum VerticalAlignment{
  AlignNormal = QTextCharFormat::AlignNormal,   AlignSuperScript = QTextCharFormat::AlignSuperScript,   AlignSubScript = QTextCharFormat::AlignSubScript,   AlignMiddle = QTextCharFormat::AlignMiddle,   AlignTop = QTextCharFormat::AlignTop,   AlignBottom = QTextCharFormat::AlignBottom};
enum UnderlineStyle{
  NoUnderline = QTextCharFormat::NoUnderline,   SingleUnderline = QTextCharFormat::SingleUnderline,   DashUnderline = QTextCharFormat::DashUnderline,   DotLine = QTextCharFormat::DotLine,   DashDotLine = QTextCharFormat::DashDotLine,   DashDotDotLine = QTextCharFormat::DashDotDotLine,   WaveUnderline = QTextCharFormat::WaveUnderline,   SpellCheckUnderline = QTextCharFormat::SpellCheckUnderline};
public slots:
QTextCharFormat* new_QTextCharFormat();
QTextCharFormat* new_QTextCharFormat(const QTextCharFormat& other) {
PythonQtShell_QTextCharFormat* a = new PythonQtShell_QTextCharFormat();
*((QTextCharFormat*)a) = other;
return a; }
void delete_QTextCharFormat(QTextCharFormat* obj) { delete obj; } 
   bool  fontOverline(QTextCharFormat* theWrappedObject) const;
   qreal  fontWordSpacing(QTextCharFormat* theWrappedObject) const;
   QString  toolTip(QTextCharFormat* theWrappedObject) const;
   QString  anchorHref(QTextCharFormat* theWrappedObject) const;
   int  tableCellColumnSpan(QTextCharFormat* theWrappedObject) const;
   void setFontWordSpacing(QTextCharFormat* theWrappedObject, qreal  spacing);
   QString  fontFamily(QTextCharFormat* theWrappedObject) const;
   void setFontFixedPitch(QTextCharFormat* theWrappedObject, bool  fixedPitch);
   QColor  underlineColor(QTextCharFormat* theWrappedObject) const;
   void setFont(QTextCharFormat* theWrappedObject, const QFont&  font);
   bool  fontUnderline(QTextCharFormat* theWrappedObject) const;
   void setAnchorHref(QTextCharFormat* theWrappedObject, const QString&  value);
   void setFontItalic(QTextCharFormat* theWrappedObject, bool  italic);
   void setVerticalAlignment(QTextCharFormat* theWrappedObject, QTextCharFormat::VerticalAlignment  alignment);
   qreal  fontPointSize(QTextCharFormat* theWrappedObject) const;
   int  fontWeight(QTextCharFormat* theWrappedObject) const;
   void setFontUnderline(QTextCharFormat* theWrappedObject, bool  underline);
   void setFontWeight(QTextCharFormat* theWrappedObject, int  weight);
   QTextCharFormat::UnderlineStyle  underlineStyle(QTextCharFormat* theWrappedObject) const;
   QTextCharFormat::VerticalAlignment  verticalAlignment(QTextCharFormat* theWrappedObject) const;
   void setTextOutline(QTextCharFormat* theWrappedObject, const QPen&  pen);
   void setAnchor(QTextCharFormat* theWrappedObject, bool  anchor);
   QStringList  anchorNames(QTextCharFormat* theWrappedObject) const;
   bool  fontItalic(QTextCharFormat* theWrappedObject) const;
   void setFontLetterSpacing(QTextCharFormat* theWrappedObject, qreal  spacing);
   void setTableCellColumnSpan(QTextCharFormat* theWrappedObject, int  tableCellColumnSpan);
   void setFontStrikeOut(QTextCharFormat* theWrappedObject, bool  strikeOut);
   void setUnderlineColor(QTextCharFormat* theWrappedObject, const QColor&  color);
   void setFontFamily(QTextCharFormat* theWrappedObject, const QString&  family);
   void setAnchorNames(QTextCharFormat* theWrappedObject, const QStringList&  names);
   bool  isAnchor(QTextCharFormat* theWrappedObject) const;
   bool  isValid(QTextCharFormat* theWrappedObject) const;
   void setFontOverline(QTextCharFormat* theWrappedObject, bool  overline);
   QFont  font(QTextCharFormat* theWrappedObject) const;
   bool  fontStrikeOut(QTextCharFormat* theWrappedObject) const;
   QFont::Capitalization  fontCapitalization(QTextCharFormat* theWrappedObject) const;
   void setUnderlineStyle(QTextCharFormat* theWrappedObject, QTextCharFormat::UnderlineStyle  style);
   int  tableCellRowSpan(QTextCharFormat* theWrappedObject) const;
   void setFontPointSize(QTextCharFormat* theWrappedObject, qreal  size);
   void setToolTip(QTextCharFormat* theWrappedObject, const QString&  tip);
   QPen  textOutline(QTextCharFormat* theWrappedObject) const;
   bool  fontFixedPitch(QTextCharFormat* theWrappedObject) const;
   void setFontCapitalization(QTextCharFormat* theWrappedObject, QFont::Capitalization  capitalization);
   qreal  fontLetterSpacing(QTextCharFormat* theWrappedObject) const;
   void setTableCellRowSpan(QTextCharFormat* theWrappedObject, int  tableCellRowSpan);
};





class PythonQtWrapper_QTextCursor : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MoveMode MoveOperation SelectionType )
enum MoveMode{
  MoveAnchor = QTextCursor::MoveAnchor,   KeepAnchor = QTextCursor::KeepAnchor};
enum MoveOperation{
  NoMove = QTextCursor::NoMove,   Start = QTextCursor::Start,   Up = QTextCursor::Up,   StartOfLine = QTextCursor::StartOfLine,   StartOfBlock = QTextCursor::StartOfBlock,   StartOfWord = QTextCursor::StartOfWord,   PreviousBlock = QTextCursor::PreviousBlock,   PreviousCharacter = QTextCursor::PreviousCharacter,   PreviousWord = QTextCursor::PreviousWord,   Left = QTextCursor::Left,   WordLeft = QTextCursor::WordLeft,   End = QTextCursor::End,   Down = QTextCursor::Down,   EndOfLine = QTextCursor::EndOfLine,   EndOfWord = QTextCursor::EndOfWord,   EndOfBlock = QTextCursor::EndOfBlock,   NextBlock = QTextCursor::NextBlock,   NextCharacter = QTextCursor::NextCharacter,   NextWord = QTextCursor::NextWord,   Right = QTextCursor::Right,   WordRight = QTextCursor::WordRight};
enum SelectionType{
  WordUnderCursor = QTextCursor::WordUnderCursor,   LineUnderCursor = QTextCursor::LineUnderCursor,   BlockUnderCursor = QTextCursor::BlockUnderCursor,   Document = QTextCursor::Document};
public slots:
QTextCursor* new_QTextCursor();
QTextCursor* new_QTextCursor(QTextDocument*  document);
QTextCursor* new_QTextCursor(QTextFrame*  frame);
QTextCursor* new_QTextCursor(const QTextBlock&  block);
QTextCursor* new_QTextCursor(const QTextCursor&  cursor);
void delete_QTextCursor(QTextCursor* obj) { delete obj; } 
   int  selectionEnd(QTextCursor* theWrappedObject) const;
   void insertText(QTextCursor* theWrappedObject, const QString&  text);
   bool  isCopyOf(QTextCursor* theWrappedObject, const QTextCursor&  other) const;
   void insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format, const QTextCharFormat&  charFormat);
   void setCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format);
   QTextList*  insertList(QTextCursor* theWrappedObject, QTextListFormat::Style  style);
   QTextList*  insertList(QTextCursor* theWrappedObject, const QTextListFormat&  format);
   bool  atStart(QTextCursor* theWrappedObject) const;
   bool  atBlockEnd(QTextCursor* theWrappedObject) const;
   void insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format);
   QString  selectedText(QTextCursor* theWrappedObject) const;
   void selectedTableCells(QTextCursor* theWrappedObject, int*  firstRow, int*  numRows, int*  firstColumn, int*  numColumns) const;
   int  columnNumber(QTextCursor* theWrappedObject) const;
   void insertBlock(QTextCursor* theWrappedObject);
   bool  visualNavigation(QTextCursor* theWrappedObject) const;
   void setBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format);
   void mergeBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  modifier);
   int  position(QTextCursor* theWrappedObject) const;
   void setPosition(QTextCursor* theWrappedObject, int  pos, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   int  blockNumber(QTextCursor* theWrappedObject) const;
   QTextBlockFormat  blockFormat(QTextCursor* theWrappedObject) const;
   QTextDocumentFragment  selection(QTextCursor* theWrappedObject) const;
   int  selectionStart(QTextCursor* theWrappedObject) const;
   QTextCharFormat  charFormat(QTextCursor* theWrappedObject) const;
   void insertFragment(QTextCursor* theWrappedObject, const QTextDocumentFragment&  fragment);
   void clearSelection(QTextCursor* theWrappedObject);
   void deletePreviousChar(QTextCursor* theWrappedObject);
   void joinPreviousEditBlock(QTextCursor* theWrappedObject);
   QTextCharFormat  blockCharFormat(QTextCursor* theWrappedObject) const;
   QTextTable*  currentTable(QTextCursor* theWrappedObject) const;
   QTextList*  currentList(QTextCursor* theWrappedObject) const;
   void insertImage(QTextCursor* theWrappedObject, const QString&  name);
   void insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format);
   bool  operator_equal(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   QTextBlock  block(QTextCursor* theWrappedObject) const;
   void insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format, QTextFrameFormat::Position  alignment);
   bool  hasSelection(QTextCursor* theWrappedObject) const;
   void select(QTextCursor* theWrappedObject, QTextCursor::SelectionType  selection);
   bool  operator_less(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   void insertHtml(QTextCursor* theWrappedObject, const QString&  html);
   void insertText(QTextCursor* theWrappedObject, const QString&  text, const QTextCharFormat&  format);
   void mergeBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier);
   int  anchor(QTextCursor* theWrappedObject) const;
   bool  atEnd(QTextCursor* theWrappedObject) const;
   void setVisualNavigation(QTextCursor* theWrappedObject, bool  b);
   void mergeCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier);
   void removeSelectedText(QTextCursor* theWrappedObject);
   QTextTable*  insertTable(QTextCursor* theWrappedObject, int  rows, int  cols, const QTextTableFormat&  format);
   bool  isNull(QTextCursor* theWrappedObject) const;
   bool  atBlockStart(QTextCursor* theWrappedObject) const;
   QTextTable*  insertTable(QTextCursor* theWrappedObject, int  rows, int  cols);
   void beginEditBlock(QTextCursor* theWrappedObject);
   void deleteChar(QTextCursor* theWrappedObject);
   QTextList*  createList(QTextCursor* theWrappedObject, const QTextListFormat&  format);
   QTextList*  createList(QTextCursor* theWrappedObject, QTextListFormat::Style  style);
   bool  movePosition(QTextCursor* theWrappedObject, QTextCursor::MoveOperation  op, QTextCursor::MoveMode  arg__2 = QTextCursor::MoveAnchor, int  n = 1);
   bool  hasComplexSelection(QTextCursor* theWrappedObject) const;
   void endEditBlock(QTextCursor* theWrappedObject);
   void setBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  format);
   QTextFrame*  insertFrame(QTextCursor* theWrappedObject, const QTextFrameFormat&  format);
   QTextFrame*  currentFrame(QTextCursor* theWrappedObject) const;
};





class PythonQtShell_QTextDocument : public QTextDocument
{
public:
    PythonQtShell_QTextDocument(QObject*  parent = 0):QTextDocument(parent),_wrapper(NULL) {};
    PythonQtShell_QTextDocument(const QString&  text, QObject*  parent = 0):QTextDocument(text, parent),_wrapper(NULL) {};

virtual void clear();
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual QTextObject*  createObject(const QTextFormat&  f);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextDocument : public QTextDocument
{ public:
inline void promoted_clear() { QTextDocument::clear(); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QTextDocument::loadResource(type, name); }
inline QTextObject*  promoted_createObject(const QTextFormat&  f) { return QTextDocument::createObject(f); }
};

class PythonQtWrapper_QTextDocument : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ResourceType FindFlag MetaInformation )
Q_FLAGS(FindFlags )
enum ResourceType{
  HtmlResource = QTextDocument::HtmlResource,   ImageResource = QTextDocument::ImageResource,   StyleSheetResource = QTextDocument::StyleSheetResource,   UserResource = QTextDocument::UserResource};
enum FindFlag{
  FindBackward = QTextDocument::FindBackward,   FindCaseSensitively = QTextDocument::FindCaseSensitively,   FindWholeWords = QTextDocument::FindWholeWords};
enum MetaInformation{
  DocumentTitle = QTextDocument::DocumentTitle,   DocumentUrl = QTextDocument::DocumentUrl};
Q_DECLARE_FLAGS(FindFlags, FindFlag)
public slots:
QTextDocument* new_QTextDocument(QObject*  parent = 0);
QTextDocument* new_QTextDocument(const QString&  text, QObject*  parent = 0);
void delete_QTextDocument(QTextDocument* obj) { delete obj; } 
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegExp&  expr, const QTextCursor&  from, QTextDocument::FindFlags  options = 0) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegExp&  expr, int  from = 0, QTextDocument::FindFlags  options = 0) const;
   QString  toHtml(QTextDocument* theWrappedObject, const QByteArray&  encoding = QByteArray()) const;
   bool  isRedoAvailable(QTextDocument* theWrappedObject) const;
   void setMaximumBlockCount(QTextDocument* theWrappedObject, int  maximum);
   void setDefaultStyleSheet(QTextDocument* theWrappedObject, const QString&  sheet);
   QTextBlock  end(QTextDocument* theWrappedObject) const;
   bool  isEmpty(QTextDocument* theWrappedObject) const;
   QAbstractTextDocumentLayout*  documentLayout(QTextDocument* theWrappedObject) const;
   QTextBlock  firstBlock(QTextDocument* theWrappedObject) const;
   void markContentsDirty(QTextDocument* theWrappedObject, int  from, int  length);
   void setDefaultTextOption(QTextDocument* theWrappedObject, const QTextOption&  option);
   int  blockCount(QTextDocument* theWrappedObject) const;
   QTextFrame*  rootFrame(QTextDocument* theWrappedObject) const;
   void setHtml(QTextDocument* theWrappedObject, const QString&  html);
   QTextBlock  findBlock(QTextDocument* theWrappedObject, int  pos) const;
   void undo(QTextDocument* theWrappedObject, QTextCursor*  cursor);
   void setUndoRedoEnabled(QTextDocument* theWrappedObject, bool  enable);
   void setDefaultFont(QTextDocument* theWrappedObject, const QFont&  font);
   bool  isModified(QTextDocument* theWrappedObject) const;
   QTextDocument*  clone(QTextDocument* theWrappedObject, QObject*  parent = 0) const;
   QTextBlock  findBlockByNumber(QTextDocument* theWrappedObject, int  blockNumber) const;
   void clear(QTextDocument* theWrappedObject);
   void addResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name, const QVariant&  resource);
   QTextOption  defaultTextOption(QTextDocument* theWrappedObject) const;
   qreal  idealWidth(QTextDocument* theWrappedObject) const;
   qreal  textWidth(QTextDocument* theWrappedObject) const;
   int  pageCount(QTextDocument* theWrappedObject) const;
   int  maximumBlockCount(QTextDocument* theWrappedObject) const;
   qreal  indentWidth(QTextDocument* theWrappedObject) const;
   int  revision(QTextDocument* theWrappedObject) const;
   QVector<QTextFormat >  allFormats(QTextDocument* theWrappedObject) const;
   QSizeF  size(QTextDocument* theWrappedObject) const;
   void setIndentWidth(QTextDocument* theWrappedObject, qreal  width);
   QTextObject*  objectForFormat(QTextDocument* theWrappedObject, const QTextFormat&  arg__1) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QString&  subString, const QTextCursor&  from, QTextDocument::FindFlags  options = 0) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QString&  subString, int  from = 0, QTextDocument::FindFlags  options = 0) const;
   QTextObject*  object(QTextDocument* theWrappedObject, int  objectIndex) const;
   void print(QTextDocument* theWrappedObject, QPrinter*  printer) const;
   QVariant  loadResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name);
   QTextBlock  lastBlock(QTextDocument* theWrappedObject) const;
   QTextObject*  createObject(QTextDocument* theWrappedObject, const QTextFormat&  f);
   QString  toPlainText(QTextDocument* theWrappedObject) const;
   void setMetaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info, const QString&  arg__2);
   QSizeF  pageSize(QTextDocument* theWrappedObject) const;
   QString  metaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info) const;
   QTextFrame*  frameAt(QTextDocument* theWrappedObject, int  pos) const;
   QString  defaultStyleSheet(QTextDocument* theWrappedObject) const;
   QVariant  resource(QTextDocument* theWrappedObject, int  type, const QUrl&  name) const;
   bool  isUndoAvailable(QTextDocument* theWrappedObject) const;
   void setDocumentLayout(QTextDocument* theWrappedObject, QAbstractTextDocumentLayout*  layout);
   void setUseDesignMetrics(QTextDocument* theWrappedObject, bool  b);
   void setPageSize(QTextDocument* theWrappedObject, const QSizeF&  size);
   void redo(QTextDocument* theWrappedObject, QTextCursor*  cursor);
   QFont  defaultFont(QTextDocument* theWrappedObject) const;
   bool  useDesignMetrics(QTextDocument* theWrappedObject) const;
   bool  isUndoRedoEnabled(QTextDocument* theWrappedObject) const;
   QTextBlock  begin(QTextDocument* theWrappedObject) const;
   void drawContents(QTextDocument* theWrappedObject, QPainter*  painter, const QRectF&  rect = QRectF());
   void setPlainText(QTextDocument* theWrappedObject, const QString&  text);
   void setTextWidth(QTextDocument* theWrappedObject, qreal  width);
   void adjustSize(QTextDocument* theWrappedObject);
};





class PythonQtWrapper_QTextDocumentFragment : public QObject
{ Q_OBJECT
public:
public slots:
QTextDocumentFragment* new_QTextDocumentFragment();
QTextDocumentFragment* new_QTextDocumentFragment(const QTextCursor&  range);
QTextDocumentFragment* new_QTextDocumentFragment(const QTextDocument*  document);
QTextDocumentFragment* new_QTextDocumentFragment(const QTextDocumentFragment&  rhs);
void delete_QTextDocumentFragment(QTextDocumentFragment* obj) { delete obj; } 
   QString  toPlainText(QTextDocumentFragment* theWrappedObject) const;
   QString  toHtml(QTextDocumentFragment* theWrappedObject) const;
   QString  toHtml(QTextDocumentFragment* theWrappedObject, const QByteArray&  encoding) const;
   QTextDocumentFragment  static_QTextDocumentFragment_fromPlainText(const QString&  plainText);
   bool  isEmpty(QTextDocumentFragment* theWrappedObject) const;
   QTextDocumentFragment  static_QTextDocumentFragment_fromHtml(const QString&  html, const QTextDocument*  resourceProvider);
   QTextDocumentFragment  static_QTextDocumentFragment_fromHtml(const QString&  html);
};





class PythonQtShell_QTextEdit : public QTextEdit
{
public:
    PythonQtShell_QTextEdit(QWidget*  parent = 0):QTextEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QTextEdit(const QString&  text, QWidget*  parent = 0):QTextEdit(text, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  e);
virtual bool  canInsertFromMimeData(const QMimeData*  source) const;
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual QMimeData*  createMimeDataFromSelection() const;
virtual void keyPressEvent(QKeyEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void insertFromMimeData(const QMimeData*  source);
virtual void dragEnterEvent(QDragEnterEvent*  e);
virtual void showEvent(QShowEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  e);
virtual void resizeEvent(QResizeEvent*  e);
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual void wheelEvent(QWheelEvent*  e);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual void paintEvent(QPaintEvent*  e);
virtual void focusOutEvent(QFocusEvent*  e);
virtual void timerEvent(QTimerEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void scrollContentsBy(int  dx, int  dy);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextEdit : public QTextEdit
{ public:
inline bool  promoted_event(QEvent*  e) { return QTextEdit::event(e); }
inline bool  promoted_canInsertFromMimeData(const QMimeData*  source) const { return QTextEdit::canInsertFromMimeData(source); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QTextEdit::mouseReleaseEvent(e); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QTextEdit::dragLeaveEvent(e); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QTextEdit::inputMethodEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  e) { QTextEdit::changeEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { QTextEdit::dropEvent(e); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  property) const { return QTextEdit::inputMethodQuery(property); }
inline QMimeData*  promoted_createMimeDataFromSelection() const { return QTextEdit::createMimeDataFromSelection(); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QTextEdit::keyPressEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QTextEdit::mousePressEvent(e); }
inline void promoted_insertFromMimeData(const QMimeData*  source) { QTextEdit::insertFromMimeData(source); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { QTextEdit::dragEnterEvent(e); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QTextEdit::showEvent(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QTextEdit::focusInEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QTextEdit::resizeEvent(e); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { QTextEdit::mouseDoubleClickEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QTextEdit::dragMoveEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QTextEdit::mouseMoveEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QTextEdit::keyReleaseEvent(e); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QTextEdit::loadResource(type, name); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QTextEdit::wheelEvent(e); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { QTextEdit::contextMenuEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { QTextEdit::paintEvent(e); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QTextEdit::focusOutEvent(e); }
inline void promoted_timerEvent(QTimerEvent*  e) { QTextEdit::timerEvent(e); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QTextEdit::focusNextPrevChild(next); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QTextEdit::scrollContentsBy(dx, dy); }
};

class PythonQtWrapper_QTextEdit : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AutoFormattingFlag )
Q_FLAGS(AutoFormatting )
enum AutoFormattingFlag{
  AutoNone = QTextEdit::AutoNone,   AutoBulletList = QTextEdit::AutoBulletList,   AutoAll = QTextEdit::AutoAll};
Q_DECLARE_FLAGS(AutoFormatting, AutoFormattingFlag)
public slots:
QTextEdit* new_QTextEdit(QWidget*  parent = 0);
QTextEdit* new_QTextEdit(const QString&  text, QWidget*  parent = 0);
void delete_QTextEdit(QTextEdit* obj) { delete obj; } 
   void setCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  format);
   bool  event(QTextEdit* theWrappedObject, QEvent*  e);
   int  lineWrapColumnOrWidth(QTextEdit* theWrappedObject) const;
   bool  fontItalic(QTextEdit* theWrappedObject) const;
   QString  toPlainText(QTextEdit* theWrappedObject) const;
   QRect  cursorRect(QTextEdit* theWrappedObject) const;
   QRect  cursorRect(QTextEdit* theWrappedObject, const QTextCursor&  cursor) const;
   void setTextCursor(QTextEdit* theWrappedObject, const QTextCursor&  cursor);
   QList<QTextEdit::ExtraSelection >  extraSelections(QTextEdit* theWrappedObject) const;
   void setAutoFormatting(QTextEdit* theWrappedObject, QTextEdit::AutoFormatting  features);
   bool  canInsertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source) const;
   QTextCursor  cursorForPosition(QTextEdit* theWrappedObject, const QPoint&  pos) const;
   void setAcceptRichText(QTextEdit* theWrappedObject, bool  accept);
   void mouseReleaseEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   QTextOption::WrapMode  wordWrapMode(QTextEdit* theWrappedObject) const;
   QTextEdit::LineWrapMode  lineWrapMode(QTextEdit* theWrappedObject) const;
   void dragLeaveEvent(QTextEdit* theWrappedObject, QDragLeaveEvent*  e);
   void setTabStopWidth(QTextEdit* theWrappedObject, int  width);
   void setTabChangesFocus(QTextEdit* theWrappedObject, bool  b);
   bool  isReadOnly(QTextEdit* theWrappedObject) const;
   void setLineWrapColumnOrWidth(QTextEdit* theWrappedObject, int  w);
   void inputMethodEvent(QTextEdit* theWrappedObject, QInputMethodEvent*  arg__1);
   void changeEvent(QTextEdit* theWrappedObject, QEvent*  e);
   Qt::Alignment  alignment(QTextEdit* theWrappedObject) const;
   bool  overwriteMode(QTextEdit* theWrappedObject) const;
   void dropEvent(QTextEdit* theWrappedObject, QDropEvent*  e);
   QVariant  inputMethodQuery(QTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const;
   void mergeCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  modifier);
   void ensureCursorVisible(QTextEdit* theWrappedObject);
   QColor  textColor(QTextEdit* theWrappedObject) const;
   QColor  textBackgroundColor(QTextEdit* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QTextEdit* theWrappedObject) const;
   QMimeData*  createMimeDataFromSelection(QTextEdit* theWrappedObject) const;
   void keyPressEvent(QTextEdit* theWrappedObject, QKeyEvent*  e);
   bool  fontUnderline(QTextEdit* theWrappedObject) const;
   QString  documentTitle(QTextEdit* theWrappedObject) const;
   void mousePressEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   QString  anchorAt(QTextEdit* theWrappedObject, const QPoint&  pos) const;
   void setOverwriteMode(QTextEdit* theWrappedObject, bool  overwrite);
   int  cursorWidth(QTextEdit* theWrappedObject) const;
   void setDocument(QTextEdit* theWrappedObject, QTextDocument*  document);
   int  tabStopWidth(QTextEdit* theWrappedObject) const;
   void setLineWrapMode(QTextEdit* theWrappedObject, QTextEdit::LineWrapMode  mode);
   QFont  currentFont(QTextEdit* theWrappedObject) const;
   void setUndoRedoEnabled(QTextEdit* theWrappedObject, bool  enable);
   void setExtraSelections(QTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections);
   void moveCursor(QTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   QTextCharFormat  currentCharFormat(QTextEdit* theWrappedObject) const;
   bool  tabChangesFocus(QTextEdit* theWrappedObject) const;
   void insertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source);
   void setWordWrapMode(QTextEdit* theWrappedObject, QTextOption::WrapMode  policy);
   void dragEnterEvent(QTextEdit* theWrappedObject, QDragEnterEvent*  e);
   void showEvent(QTextEdit* theWrappedObject, QShowEvent*  arg__1);
   void focusInEvent(QTextEdit* theWrappedObject, QFocusEvent*  e);
   void resizeEvent(QTextEdit* theWrappedObject, QResizeEvent*  e);
   bool  canPaste(QTextEdit* theWrappedObject) const;
   void setDocumentTitle(QTextEdit* theWrappedObject, const QString&  title);
   void mouseDoubleClickEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   bool  acceptRichText(QTextEdit* theWrappedObject) const;
   void dragMoveEvent(QTextEdit* theWrappedObject, QDragMoveEvent*  e);
   void setCursorWidth(QTextEdit* theWrappedObject, int  width);
   QString  fontFamily(QTextEdit* theWrappedObject) const;
   QString  toHtml(QTextEdit* theWrappedObject) const;
   QTextEdit::AutoFormatting  autoFormatting(QTextEdit* theWrappedObject) const;
   void mouseMoveEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   void keyReleaseEvent(QTextEdit* theWrappedObject, QKeyEvent*  e);
   QMenu*  createStandardContextMenu(QTextEdit* theWrappedObject, const QPoint&  position);
   bool  find(QTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options = 0);
   QMenu*  createStandardContextMenu(QTextEdit* theWrappedObject);
   QTextCursor  textCursor(QTextEdit* theWrappedObject) const;
   QVariant  loadResource(QTextEdit* theWrappedObject, int  type, const QUrl&  name);
   void print(QTextEdit* theWrappedObject, QPrinter*  printer) const;
   void wheelEvent(QTextEdit* theWrappedObject, QWheelEvent*  e);
   QTextDocument*  document(QTextEdit* theWrappedObject) const;
   qreal  fontPointSize(QTextEdit* theWrappedObject) const;
   void contextMenuEvent(QTextEdit* theWrappedObject, QContextMenuEvent*  e);
   void paintEvent(QTextEdit* theWrappedObject, QPaintEvent*  e);
   bool  isUndoRedoEnabled(QTextEdit* theWrappedObject) const;
   void focusOutEvent(QTextEdit* theWrappedObject, QFocusEvent*  e);
   int  fontWeight(QTextEdit* theWrappedObject) const;
   void setTextInteractionFlags(QTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags);
   void timerEvent(QTextEdit* theWrappedObject, QTimerEvent*  e);
   bool  focusNextPrevChild(QTextEdit* theWrappedObject, bool  next);
   void setReadOnly(QTextEdit* theWrappedObject, bool  ro);
   void scrollContentsBy(QTextEdit* theWrappedObject, int  dx, int  dy);
};





class PythonQtWrapper_QTextFragment : public QObject
{ Q_OBJECT
public:
public slots:
QTextFragment* new_QTextFragment();
QTextFragment* new_QTextFragment(const QTextFragment&  o);
void delete_QTextFragment(QTextFragment* obj) { delete obj; } 
   QTextCharFormat  charFormat(QTextFragment* theWrappedObject) const;
   bool  operator_less(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   bool  isValid(QTextFragment* theWrappedObject) const;
   int  length(QTextFragment* theWrappedObject) const;
   bool  operator_equal(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   int  position(QTextFragment* theWrappedObject) const;
   int  charFormatIndex(QTextFragment* theWrappedObject) const;
   QString  text(QTextFragment* theWrappedObject) const;
   bool  contains(QTextFragment* theWrappedObject, int  position) const;
};





class PythonQtShell_QTextFrame : public QTextFrame
{
public:
    PythonQtShell_QTextFrame(QTextDocument*  doc):QTextFrame(doc),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextFrame : public QObject
{ Q_OBJECT
public:
public slots:
QTextFrame* new_QTextFrame(QTextDocument*  doc);
void delete_QTextFrame(QTextFrame* obj) { delete obj; } 
   QTextFrame::iterator  end(QTextFrame* theWrappedObject) const;
   QTextFrameFormat  frameFormat(QTextFrame* theWrappedObject) const;
   QList<QTextFrame* >  childFrames(QTextFrame* theWrappedObject) const;
   QTextFrame*  parentFrame(QTextFrame* theWrappedObject) const;
   int  lastPosition(QTextFrame* theWrappedObject) const;
   void setFrameFormat(QTextFrame* theWrappedObject, const QTextFrameFormat&  format);
   QTextCursor  firstCursorPosition(QTextFrame* theWrappedObject) const;
   QTextCursor  lastCursorPosition(QTextFrame* theWrappedObject) const;
   QTextFrame::iterator  begin(QTextFrame* theWrappedObject) const;
   int  firstPosition(QTextFrame* theWrappedObject) const;
};





class PythonQtShell_QTextFrameFormat : public QTextFrameFormat
{
public:
    PythonQtShell_QTextFrameFormat():QTextFrameFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextFrameFormat(const QTextFormat&  fmt):QTextFrameFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextFrameFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Position BorderStyle )
enum Position{
  InFlow = QTextFrameFormat::InFlow,   FloatLeft = QTextFrameFormat::FloatLeft,   FloatRight = QTextFrameFormat::FloatRight};
enum BorderStyle{
  BorderStyle_None = QTextFrameFormat::BorderStyle_None,   BorderStyle_Dotted = QTextFrameFormat::BorderStyle_Dotted,   BorderStyle_Dashed = QTextFrameFormat::BorderStyle_Dashed,   BorderStyle_Solid = QTextFrameFormat::BorderStyle_Solid,   BorderStyle_Double = QTextFrameFormat::BorderStyle_Double,   BorderStyle_DotDash = QTextFrameFormat::BorderStyle_DotDash,   BorderStyle_DotDotDash = QTextFrameFormat::BorderStyle_DotDotDash,   BorderStyle_Groove = QTextFrameFormat::BorderStyle_Groove,   BorderStyle_Ridge = QTextFrameFormat::BorderStyle_Ridge,   BorderStyle_Inset = QTextFrameFormat::BorderStyle_Inset,   BorderStyle_Outset = QTextFrameFormat::BorderStyle_Outset};
public slots:
QTextFrameFormat* new_QTextFrameFormat();
QTextFrameFormat* new_QTextFrameFormat(const QTextFrameFormat& other) {
PythonQtShell_QTextFrameFormat* a = new PythonQtShell_QTextFrameFormat();
*((QTextFrameFormat*)a) = other;
return a; }
void delete_QTextFrameFormat(QTextFrameFormat* obj) { delete obj; } 
   bool  isValid(QTextFrameFormat* theWrappedObject) const;
   qreal  border(QTextFrameFormat* theWrappedObject) const;
   void setRightMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setBottomMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setPageBreakPolicy(QTextFrameFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags);
   void setHeight(QTextFrameFormat* theWrappedObject, qreal  height);
   QBrush  borderBrush(QTextFrameFormat* theWrappedObject) const;
   void setWidth(QTextFrameFormat* theWrappedObject, const QTextLength&  length);
   qreal  leftMargin(QTextFrameFormat* theWrappedObject) const;
   void setWidth(QTextFrameFormat* theWrappedObject, qreal  width);
   void setHeight(QTextFrameFormat* theWrappedObject, const QTextLength&  height);
   void setLeftMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setPadding(QTextFrameFormat* theWrappedObject, qreal  padding);
   void setBorderStyle(QTextFrameFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   void setTopMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   qreal  bottomMargin(QTextFrameFormat* theWrappedObject) const;
   void setPosition(QTextFrameFormat* theWrappedObject, QTextFrameFormat::Position  f);
   QTextFrameFormat::Position  position(QTextFrameFormat* theWrappedObject) const;
   void setBorderBrush(QTextFrameFormat* theWrappedObject, const QBrush&  brush);
   qreal  rightMargin(QTextFrameFormat* theWrappedObject) const;
   QTextLength  width(QTextFrameFormat* theWrappedObject) const;
   qreal  padding(QTextFrameFormat* theWrappedObject) const;
   void setBorder(QTextFrameFormat* theWrappedObject, qreal  border);
   QTextFrameFormat::BorderStyle  borderStyle(QTextFrameFormat* theWrappedObject) const;
   qreal  topMargin(QTextFrameFormat* theWrappedObject) const;
   QTextFormat::PageBreakFlags  pageBreakPolicy(QTextFrameFormat* theWrappedObject) const;
   qreal  margin(QTextFrameFormat* theWrappedObject) const;
   QTextLength  height(QTextFrameFormat* theWrappedObject) const;
};





class PythonQtShell_QTextImageFormat : public QTextImageFormat
{
public:
    PythonQtShell_QTextImageFormat():QTextImageFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextImageFormat(const QTextFormat&  format):QTextImageFormat(format),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextImageFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextImageFormat* new_QTextImageFormat();
QTextImageFormat* new_QTextImageFormat(const QTextImageFormat& other) {
PythonQtShell_QTextImageFormat* a = new PythonQtShell_QTextImageFormat();
*((QTextImageFormat*)a) = other;
return a; }
void delete_QTextImageFormat(QTextImageFormat* obj) { delete obj; } 
   qreal  width(QTextImageFormat* theWrappedObject) const;
   void setWidth(QTextImageFormat* theWrappedObject, qreal  width);
   void setName(QTextImageFormat* theWrappedObject, const QString&  name);
   bool  isValid(QTextImageFormat* theWrappedObject) const;
   void setHeight(QTextImageFormat* theWrappedObject, qreal  height);
   QString  name(QTextImageFormat* theWrappedObject) const;
   qreal  height(QTextImageFormat* theWrappedObject) const;
};





class PythonQtWrapper_QTextInlineObject : public QObject
{ Q_OBJECT
public:
public slots:
QTextInlineObject* new_QTextInlineObject();
QTextInlineObject* new_QTextInlineObject(const QTextInlineObject& other) {
QTextInlineObject* a = new QTextInlineObject();
*((QTextInlineObject*)a) = other;
return a; }
void delete_QTextInlineObject(QTextInlineObject* obj) { delete obj; } 
   Qt::LayoutDirection  textDirection(QTextInlineObject* theWrappedObject) const;
   bool  isValid(QTextInlineObject* theWrappedObject) const;
   qreal  width(QTextInlineObject* theWrappedObject) const;
   QRectF  rect(QTextInlineObject* theWrappedObject) const;
   qreal  descent(QTextInlineObject* theWrappedObject) const;
   void setWidth(QTextInlineObject* theWrappedObject, qreal  w);
   void setAscent(QTextInlineObject* theWrappedObject, qreal  a);
   int  formatIndex(QTextInlineObject* theWrappedObject) const;
   QTextFormat  format(QTextInlineObject* theWrappedObject) const;
   qreal  height(QTextInlineObject* theWrappedObject) const;
   qreal  ascent(QTextInlineObject* theWrappedObject) const;
   void setDescent(QTextInlineObject* theWrappedObject, qreal  d);
   int  textPosition(QTextInlineObject* theWrappedObject) const;
};





class PythonQtShell_QTextItem : public QTextItem
{
public:
    PythonQtShell_QTextItem():QTextItem(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RenderFlag )
Q_FLAGS(RenderFlags )
enum RenderFlag{
  RightToLeft = QTextItem::RightToLeft,   Overline = QTextItem::Overline,   Underline = QTextItem::Underline,   StrikeOut = QTextItem::StrikeOut,   Dummy = QTextItem::Dummy};
Q_DECLARE_FLAGS(RenderFlags, RenderFlag)
public slots:
QTextItem* new_QTextItem();
void delete_QTextItem(QTextItem* obj) { delete obj; } 
   QString  text(QTextItem* theWrappedObject) const;
   qreal  ascent(QTextItem* theWrappedObject) const;
   qreal  descent(QTextItem* theWrappedObject) const;
   QTextItem::RenderFlags  renderFlags(QTextItem* theWrappedObject) const;
   qreal  width(QTextItem* theWrappedObject) const;
   QFont  font(QTextItem* theWrappedObject) const;
};





class PythonQtWrapper_QTextLine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Edge CursorPosition )
enum Edge{
  Leading = QTextLine::Leading,   Trailing = QTextLine::Trailing};
enum CursorPosition{
  CursorBetweenCharacters = QTextLine::CursorBetweenCharacters,   CursorOnCharacter = QTextLine::CursorOnCharacter};
public slots:
QTextLine* new_QTextLine();
QTextLine* new_QTextLine(const QTextLine& other) {
QTextLine* a = new QTextLine();
*((QTextLine*)a) = other;
return a; }
void delete_QTextLine(QTextLine* obj) { delete obj; } 
   int  textLength(QTextLine* theWrappedObject) const;
   bool  isValid(QTextLine* theWrappedObject) const;
   qreal  cursorToX(QTextLine* theWrappedObject, int  cursorPos, QTextLine::Edge  edge = QTextLine::Leading) const;
   void setNumColumns(QTextLine* theWrappedObject, int  columns, qreal  alignmentWidth);
   void setNumColumns(QTextLine* theWrappedObject, int  columns);
   void draw(QTextLine* theWrappedObject, QPainter*  p, const QPointF&  point, const QTextLayout::FormatRange*  selection = 0) const;
   qreal  x(QTextLine* theWrappedObject) const;
   qreal  y(QTextLine* theWrappedObject) const;
   int  lineNumber(QTextLine* theWrappedObject) const;
   void setPosition(QTextLine* theWrappedObject, const QPointF&  pos);
   int  xToCursor(QTextLine* theWrappedObject, qreal  x, QTextLine::CursorPosition  arg__2 = QTextLine::CursorBetweenCharacters) const;
   int  textStart(QTextLine* theWrappedObject) const;
   QRectF  rect(QTextLine* theWrappedObject) const;
   QPointF  position(QTextLine* theWrappedObject) const;
   qreal  ascent(QTextLine* theWrappedObject) const;
   qreal  width(QTextLine* theWrappedObject) const;
   void setLineWidth(QTextLine* theWrappedObject, qreal  width);
   qreal  height(QTextLine* theWrappedObject) const;
   QRectF  naturalTextRect(QTextLine* theWrappedObject) const;
   qreal  descent(QTextLine* theWrappedObject) const;
   qreal  naturalTextWidth(QTextLine* theWrappedObject) const;
};





class PythonQtShell_QTextList : public QTextList
{
public:
    PythonQtShell_QTextList(QTextDocument*  doc):QTextList(doc),_wrapper(NULL) {};

virtual void customEvent(QEvent*  arg__1);
virtual void blockFormatChanged(const QTextBlock&  block);
virtual void blockInserted(const QTextBlock&  block);
virtual void blockRemoved(const QTextBlock&  block);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextList : public QObject
{ Q_OBJECT
public:
public slots:
QTextList* new_QTextList(QTextDocument*  doc);
void delete_QTextList(QTextList* obj) { delete obj; } 
   void removeItem(QTextList* theWrappedObject, int  i);
   QTextBlock  item(QTextList* theWrappedObject, int  i) const;
   void remove(QTextList* theWrappedObject, const QTextBlock&  arg__1);
   QTextListFormat  format(QTextList* theWrappedObject) const;
   int  count(QTextList* theWrappedObject) const;
   int  itemNumber(QTextList* theWrappedObject, const QTextBlock&  arg__1) const;
   void add(QTextList* theWrappedObject, const QTextBlock&  block);
   QString  itemText(QTextList* theWrappedObject, const QTextBlock&  arg__1) const;
   void setFormat(QTextList* theWrappedObject, const QTextListFormat&  format);
};





class PythonQtShell_QTextListFormat : public QTextListFormat
{
public:
    PythonQtShell_QTextListFormat():QTextListFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextListFormat(const QTextFormat&  fmt):QTextListFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextListFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Style )
enum Style{
  ListDisc = QTextListFormat::ListDisc,   ListCircle = QTextListFormat::ListCircle,   ListSquare = QTextListFormat::ListSquare,   ListDecimal = QTextListFormat::ListDecimal,   ListLowerAlpha = QTextListFormat::ListLowerAlpha,   ListUpperAlpha = QTextListFormat::ListUpperAlpha,   ListStyleUndefined = QTextListFormat::ListStyleUndefined};
public slots:
QTextListFormat* new_QTextListFormat();
QTextListFormat* new_QTextListFormat(const QTextListFormat& other) {
PythonQtShell_QTextListFormat* a = new PythonQtShell_QTextListFormat();
*((QTextListFormat*)a) = other;
return a; }
void delete_QTextListFormat(QTextListFormat* obj) { delete obj; } 
   void setStyle(QTextListFormat* theWrappedObject, QTextListFormat::Style  style);
   bool  isValid(QTextListFormat* theWrappedObject) const;
   void setIndent(QTextListFormat* theWrappedObject, int  indent);
   QTextListFormat::Style  style(QTextListFormat* theWrappedObject) const;
   int  indent(QTextListFormat* theWrappedObject) const;
};





class PythonQtShell_QTextObject : public QTextObject
{
public:
    PythonQtShell_QTextObject(QTextDocument*  doc):QTextObject(doc),_wrapper(NULL) {};

virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextObject : public QObject
{ Q_OBJECT
public:
public slots:
   QTextFormat  format(QTextObject* theWrappedObject) const;
   int  formatIndex(QTextObject* theWrappedObject) const;
   int  objectIndex(QTextObject* theWrappedObject) const;
   QTextDocument*  document(QTextObject* theWrappedObject) const;
};





class PythonQtShell_QTextObjectInterface : public QTextObjectInterface
{
public:
    PythonQtShell_QTextObjectInterface():QTextObjectInterface(),_wrapper(NULL) {};

virtual QSizeF  intrinsicSize(QTextDocument*  doc, int  posInDocument, const QTextFormat&  format);
virtual void drawObject(QPainter*  painter, const QRectF&  rect, QTextDocument*  doc, int  posInDocument, const QTextFormat&  format);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextObjectInterface : public QObject
{ Q_OBJECT
public:
public slots:
QTextObjectInterface* new_QTextObjectInterface();
void delete_QTextObjectInterface(QTextObjectInterface* obj) { delete obj; } 
};





class PythonQtShell_QTextTable : public QTextTable
{
public:
    PythonQtShell_QTextTable(QTextDocument*  doc):QTextTable(doc),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextTable : public QObject
{ Q_OBJECT
public:
public slots:
QTextTable* new_QTextTable(QTextDocument*  doc);
void delete_QTextTable(QTextTable* obj) { delete obj; } 
   void removeRows(QTextTable* theWrappedObject, int  pos, int  num);
   void resize(QTextTable* theWrappedObject, int  rows, int  cols);
   QTextCursor  rowStart(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   void insertColumns(QTextTable* theWrappedObject, int  pos, int  num);
   void splitCell(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols);
   QTextTableCell  cellAt(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   QTextTableCell  cellAt(QTextTable* theWrappedObject, int  position) const;
   QTextTableCell  cellAt(QTextTable* theWrappedObject, int  row, int  col) const;
   void mergeCells(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols);
   QTextTableFormat  format(QTextTable* theWrappedObject) const;
   void mergeCells(QTextTable* theWrappedObject, const QTextCursor&  cursor);
   void insertRows(QTextTable* theWrappedObject, int  pos, int  num);
   void removeColumns(QTextTable* theWrappedObject, int  pos, int  num);
   void setFormat(QTextTable* theWrappedObject, const QTextTableFormat&  format);
   int  rows(QTextTable* theWrappedObject) const;
   int  columns(QTextTable* theWrappedObject) const;
   QTextCursor  rowEnd(QTextTable* theWrappedObject, const QTextCursor&  c) const;
};





class PythonQtWrapper_QTextTableCell : public QObject
{ Q_OBJECT
public:
public slots:
QTextTableCell* new_QTextTableCell();
QTextTableCell* new_QTextTableCell(const QTextTableCell&  o);
void delete_QTextTableCell(QTextTableCell* obj) { delete obj; } 
   bool  isValid(QTextTableCell* theWrappedObject) const;
   int  columnSpan(QTextTableCell* theWrappedObject) const;
   QTextFrame::iterator  end(QTextTableCell* theWrappedObject) const;
   QTextCursor  firstCursorPosition(QTextTableCell* theWrappedObject) const;
   QTextCharFormat  format(QTextTableCell* theWrappedObject) const;
   int  lastPosition(QTextTableCell* theWrappedObject) const;
   bool  operator_equal(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const;
   void setFormat(QTextTableCell* theWrappedObject, const QTextCharFormat&  format);
   int  rowSpan(QTextTableCell* theWrappedObject) const;
   int  column(QTextTableCell* theWrappedObject) const;
   QTextCursor  lastCursorPosition(QTextTableCell* theWrappedObject) const;
   QTextFrame::iterator  begin(QTextTableCell* theWrappedObject) const;
   int  firstPosition(QTextTableCell* theWrappedObject) const;
   int  row(QTextTableCell* theWrappedObject) const;
};





class PythonQtShell_QTextTableCellFormat : public QTextTableCellFormat
{
public:
    PythonQtShell_QTextTableCellFormat():QTextTableCellFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextTableCellFormat(const QTextFormat&  fmt):QTextTableCellFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextTableCellFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextTableCellFormat* new_QTextTableCellFormat();
QTextTableCellFormat* new_QTextTableCellFormat(const QTextTableCellFormat& other) {
PythonQtShell_QTextTableCellFormat* a = new PythonQtShell_QTextTableCellFormat();
*((QTextTableCellFormat*)a) = other;
return a; }
void delete_QTextTableCellFormat(QTextTableCellFormat* obj) { delete obj; } 
   bool  isValid(QTextTableCellFormat* theWrappedObject) const;
   void setTopPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setBottomPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   qreal  topPadding(QTextTableCellFormat* theWrappedObject) const;
   qreal  leftPadding(QTextTableCellFormat* theWrappedObject) const;
   qreal  rightPadding(QTextTableCellFormat* theWrappedObject) const;
   qreal  bottomPadding(QTextTableCellFormat* theWrappedObject) const;
   void setLeftPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setRightPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
};


