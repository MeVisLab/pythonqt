#include <PythonQt.h>
#include <QObject>
#include <QTextBlock>
#include <QTextCursor>
#include <QTextDocumentFragment>
#include <QTextEdit>
#include <QTextFormat>
#include <QTextFrame>
#include <QTextLayout>
#include <QTextOption>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstracttextdocumentlayout.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qfont.h>
#include <qgesture.h>
#include <qglyphrun.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpagedpaintdevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrawfont.h>
#include <qrect.h>
#include <qregexp.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtablewidget.h>
#include <qtextbrowser.h>
#include <qtextcodec.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtextdocumentwriter.h>
#include <qtextedit.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextlist.h>
#include <qtextobject.h>
#include <qtextoption.h>
#include <qtexttable.h>
#include <qurl.h>
#include <qvector.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QTableWidget : public QTableWidget
{
public:
    PythonQtShell_QTableWidget(QWidget*  parent = 0):QTableWidget(parent),_wrapper(NULL) {};
    PythonQtShell_QTableWidget(int  rows, int  columns, QWidget*  parent = 0):QTableWidget(rows, columns, parent),_wrapper(NULL) {};

   ~PythonQtShell_QTableWidget();

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
virtual bool  dropMimeData(int  row, int  column, const QMimeData*  data, Qt::DropAction  action);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void editorDestroyed(QObject*  editor);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
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
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void keyboardSearch(const QString&  search);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QMimeData*  mimeData(const QList<QTableWidgetItem* >  items) const;
virtual QStringList  mimeTypes() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
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
virtual void setRootIndex(const QModelIndex&  index);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
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
virtual QSize  viewportSizeHint() const;
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTableWidget : public QTableWidget
{ public:
inline void promoted_dropEvent(QDropEvent*  event) { QTableWidget::dropEvent(event); }
inline bool  promoted_dropMimeData(int  row, int  column, const QMimeData*  data, Qt::DropAction  action) { return QTableWidget::dropMimeData(row, column, data, action); }
inline bool  promoted_event(QEvent*  e) { return QTableWidget::event(e); }
inline QModelIndex  promoted_indexFromItem(QTableWidgetItem*  item) const { return QTableWidget::indexFromItem(item); }
inline QTableWidgetItem*  promoted_itemFromIndex(const QModelIndex&  index) const { return QTableWidget::itemFromIndex(index); }
inline QList<QTableWidgetItem* >  promoted_items(const QMimeData*  data) const { return QTableWidget::items(data); }
inline QStringList  promoted_mimeTypes() const { return QTableWidget::mimeTypes(); }
inline Qt::DropActions  promoted_supportedDropActions() const { return QTableWidget::supportedDropActions(); }
};

class PythonQtWrapper_QTableWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTableWidget* new_QTableWidget(QWidget*  parent = 0);
QTableWidget* new_QTableWidget(int  rows, int  columns, QWidget*  parent = 0);
void delete_QTableWidget(QTableWidget* obj) { delete obj; } 
   QWidget*  cellWidget(QTableWidget* theWrappedObject, int  row, int  column) const;
   void closePersistentEditor(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   int  column(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   int  columnCount(QTableWidget* theWrappedObject) const;
   int  currentColumn(QTableWidget* theWrappedObject) const;
   QTableWidgetItem*  currentItem(QTableWidget* theWrappedObject) const;
   int  currentRow(QTableWidget* theWrappedObject) const;
   void dropEvent(QTableWidget* theWrappedObject, QDropEvent*  event);
   bool  dropMimeData(QTableWidget* theWrappedObject, int  row, int  column, const QMimeData*  data, Qt::DropAction  action);
   void editItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   bool  event(QTableWidget* theWrappedObject, QEvent*  e);
   QList<QTableWidgetItem* >  findItems(QTableWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags) const;
   QTableWidgetItem*  horizontalHeaderItem(QTableWidget* theWrappedObject, int  column) const;
   QModelIndex  indexFromItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item) const;
   QTableWidgetItem*  item(QTableWidget* theWrappedObject, int  row, int  column) const;
   QTableWidgetItem*  itemAt(QTableWidget* theWrappedObject, const QPoint&  p) const;
   QTableWidgetItem*  itemAt(QTableWidget* theWrappedObject, int  x, int  y) const;
   QTableWidgetItem*  itemFromIndex(QTableWidget* theWrappedObject, const QModelIndex&  index) const;
   const QTableWidgetItem*  itemPrototype(QTableWidget* theWrappedObject) const;
   QList<QTableWidgetItem* >  items(QTableWidget* theWrappedObject, const QMimeData*  data) const;
   QStringList  mimeTypes(QTableWidget* theWrappedObject) const;
   void openPersistentEditor(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   void removeCellWidget(QTableWidget* theWrappedObject, int  row, int  column);
   int  row(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   int  rowCount(QTableWidget* theWrappedObject) const;
   QList<QTableWidgetItem* >  selectedItems(QTableWidget* theWrappedObject) const;
   QList<QTableWidgetSelectionRange >  selectedRanges(QTableWidget* theWrappedObject) const;
   void setCellWidget(QTableWidget* theWrappedObject, int  row, int  column, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void setColumnCount(QTableWidget* theWrappedObject, int  columns);
   void setCurrentCell(QTableWidget* theWrappedObject, int  row, int  column);
   void setCurrentCell(QTableWidget* theWrappedObject, int  row, int  column, QItemSelectionModel::SelectionFlags  command);
   void setCurrentItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   void setCurrentItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item, QItemSelectionModel::SelectionFlags  command);
   void setHorizontalHeaderItem(QTableWidget* theWrappedObject, int  column, PythonQtPassOwnershipToCPP<QTableWidgetItem* >  item);
   void setHorizontalHeaderLabels(QTableWidget* theWrappedObject, const QStringList&  labels);
   void setItem(QTableWidget* theWrappedObject, int  row, int  column, PythonQtPassOwnershipToCPP<QTableWidgetItem* >  item);
   void setItemPrototype(QTableWidget* theWrappedObject, PythonQtPassOwnershipToCPP<const QTableWidgetItem* >  item);
   void setRangeSelected(QTableWidget* theWrappedObject, const QTableWidgetSelectionRange&  range, bool  select);
   void setRowCount(QTableWidget* theWrappedObject, int  rows);
   void setVerticalHeaderItem(QTableWidget* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QTableWidgetItem* >  item);
   void setVerticalHeaderLabels(QTableWidget* theWrappedObject, const QStringList&  labels);
   void sortItems(QTableWidget* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   Qt::DropActions  supportedDropActions(QTableWidget* theWrappedObject) const;
   PythonQtPassOwnershipToPython<QTableWidgetItem*  > takeHorizontalHeaderItem(QTableWidget* theWrappedObject, int  column);
   PythonQtPassOwnershipToPython<QTableWidgetItem*  > takeItem(QTableWidget* theWrappedObject, int  row, int  column);
   PythonQtPassOwnershipToPython<QTableWidgetItem*  > takeVerticalHeaderItem(QTableWidget* theWrappedObject, int  row);
   QTableWidgetItem*  verticalHeaderItem(QTableWidget* theWrappedObject, int  row) const;
   int  visualColumn(QTableWidget* theWrappedObject, int  logicalColumn) const;
   QRect  visualItemRect(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   int  visualRow(QTableWidget* theWrappedObject, int  logicalRow) const;
};





class PythonQtShell_QTableWidgetItem : public QTableWidgetItem
{
public:
    PythonQtShell_QTableWidgetItem(const QIcon&  icon, const QString&  text, int  type = Type):QTableWidgetItem(icon, text, type),_wrapper(NULL) {};
    PythonQtShell_QTableWidgetItem(const QString&  text, int  type = Type):QTableWidgetItem(text, type),_wrapper(NULL) {};
    PythonQtShell_QTableWidgetItem(int  type = Type):QTableWidgetItem(type),_wrapper(NULL) {};

   ~PythonQtShell_QTableWidgetItem();

virtual QTableWidgetItem*  clone() const;
virtual QVariant  data(int  role) const;
virtual bool  __lt__(const QTableWidgetItem&  other) const;
virtual void read(QDataStream&  in);
virtual void setData(int  role, const QVariant&  value);
virtual void write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTableWidgetItem : public QTableWidgetItem
{ public:
inline QTableWidgetItem*  promoted_clone() const { return QTableWidgetItem::clone(); }
inline QVariant  promoted_data(int  role) const { return QTableWidgetItem::data(role); }
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
   QBrush  background(QTableWidgetItem* theWrappedObject) const;
   Qt::CheckState  checkState(QTableWidgetItem* theWrappedObject) const;
   QTableWidgetItem*  clone(QTableWidgetItem* theWrappedObject) const;
   int  column(QTableWidgetItem* theWrappedObject) const;
   QVariant  data(QTableWidgetItem* theWrappedObject, int  role) const;
   Qt::ItemFlags  flags(QTableWidgetItem* theWrappedObject) const;
   QFont  font(QTableWidgetItem* theWrappedObject) const;
   QBrush  foreground(QTableWidgetItem* theWrappedObject) const;
   QIcon  icon(QTableWidgetItem* theWrappedObject) const;
   bool  isSelected(QTableWidgetItem* theWrappedObject) const;
   void writeTo(QTableWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QTableWidgetItem* theWrappedObject, QDataStream&  in);
   int  row(QTableWidgetItem* theWrappedObject) const;
   void setBackground(QTableWidgetItem* theWrappedObject, const QBrush&  brush);
   void setCheckState(QTableWidgetItem* theWrappedObject, Qt::CheckState  state);
   void setData(QTableWidgetItem* theWrappedObject, int  role, const QVariant&  value);
   void setFlags(QTableWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   void setFont(QTableWidgetItem* theWrappedObject, const QFont&  font);
   void setForeground(QTableWidgetItem* theWrappedObject, const QBrush&  brush);
   void setIcon(QTableWidgetItem* theWrappedObject, const QIcon&  icon);
   void setSelected(QTableWidgetItem* theWrappedObject, bool  select);
   void setSizeHint(QTableWidgetItem* theWrappedObject, const QSize&  size);
   void setStatusTip(QTableWidgetItem* theWrappedObject, const QString&  statusTip);
   void setText(QTableWidgetItem* theWrappedObject, const QString&  text);
   void setTextAlignment(QTableWidgetItem* theWrappedObject, int  alignment);
   void setToolTip(QTableWidgetItem* theWrappedObject, const QString&  toolTip);
   void setWhatsThis(QTableWidgetItem* theWrappedObject, const QString&  whatsThis);
   QSize  sizeHint(QTableWidgetItem* theWrappedObject) const;
   QString  statusTip(QTableWidgetItem* theWrappedObject) const;
   QTableWidget*  tableWidget(QTableWidgetItem* theWrappedObject) const;
   QString  text(QTableWidgetItem* theWrappedObject) const;
   int  textAlignment(QTableWidgetItem* theWrappedObject) const;
   QString  toolTip(QTableWidgetItem* theWrappedObject) const;
   int  type(QTableWidgetItem* theWrappedObject) const;
   QString  whatsThis(QTableWidgetItem* theWrappedObject) const;
};





class PythonQtWrapper_QTableWidgetSelectionRange : public QObject
{ Q_OBJECT
public:
public slots:
QTableWidgetSelectionRange* new_QTableWidgetSelectionRange();
QTableWidgetSelectionRange* new_QTableWidgetSelectionRange(const QTableWidgetSelectionRange&  other);
QTableWidgetSelectionRange* new_QTableWidgetSelectionRange(int  top, int  left, int  bottom, int  right);
void delete_QTableWidgetSelectionRange(QTableWidgetSelectionRange* obj) { delete obj; } 
   int  bottomRow(QTableWidgetSelectionRange* theWrappedObject) const;
   int  columnCount(QTableWidgetSelectionRange* theWrappedObject) const;
   int  leftColumn(QTableWidgetSelectionRange* theWrappedObject) const;
   int  rightColumn(QTableWidgetSelectionRange* theWrappedObject) const;
   int  rowCount(QTableWidgetSelectionRange* theWrappedObject) const;
   int  topRow(QTableWidgetSelectionRange* theWrappedObject) const;
};





class PythonQtShell_QTabletEvent : public QTabletEvent
{
public:
    PythonQtShell_QTabletEvent(QEvent::Type  t, const QPointF&  pos, const QPointF&  globalPos, int  device, int  pointerType, qreal  pressure, int  xTilt, int  yTilt, qreal  tangentialPressure, qreal  rotation, int  z, Qt::KeyboardModifiers  keyState, qint64  uniqueID):QTabletEvent(t, pos, globalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID),_wrapper(NULL) {};

   ~PythonQtShell_QTabletEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTabletEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PointerType TabletDevice )
enum PointerType{
  UnknownPointer = QTabletEvent::UnknownPointer,   Pen = QTabletEvent::Pen,   Cursor = QTabletEvent::Cursor,   Eraser = QTabletEvent::Eraser};
enum TabletDevice{
  NoDevice = QTabletEvent::NoDevice,   Puck = QTabletEvent::Puck,   Stylus = QTabletEvent::Stylus,   Airbrush = QTabletEvent::Airbrush,   FourDMouse = QTabletEvent::FourDMouse,   XFreeEraser = QTabletEvent::XFreeEraser,   RotationStylus = QTabletEvent::RotationStylus};
public slots:
QTabletEvent* new_QTabletEvent(QEvent::Type  t, const QPointF&  pos, const QPointF&  globalPos, int  device, int  pointerType, qreal  pressure, int  xTilt, int  yTilt, qreal  tangentialPressure, qreal  rotation, int  z, Qt::KeyboardModifiers  keyState, qint64  uniqueID);
void delete_QTabletEvent(QTabletEvent* obj) { delete obj; } 
   QTabletEvent::TabletDevice  device(QTabletEvent* theWrappedObject) const;
   QPoint  globalPos(QTabletEvent* theWrappedObject) const;
   const QPointF*  globalPosF(QTabletEvent* theWrappedObject) const;
   int  globalX(QTabletEvent* theWrappedObject) const;
   int  globalY(QTabletEvent* theWrappedObject) const;
   qreal  hiResGlobalX(QTabletEvent* theWrappedObject) const;
   qreal  hiResGlobalY(QTabletEvent* theWrappedObject) const;
   QTabletEvent::PointerType  pointerType(QTabletEvent* theWrappedObject) const;
   QPoint  pos(QTabletEvent* theWrappedObject) const;
   const QPointF*  posF(QTabletEvent* theWrappedObject) const;
   qreal  pressure(QTabletEvent* theWrappedObject) const;
   qreal  rotation(QTabletEvent* theWrappedObject) const;
   qreal  tangentialPressure(QTabletEvent* theWrappedObject) const;
   qint64  uniqueId(QTabletEvent* theWrappedObject) const;
   int  x(QTabletEvent* theWrappedObject) const;
   int  xTilt(QTabletEvent* theWrappedObject) const;
   int  y(QTabletEvent* theWrappedObject) const;
   int  yTilt(QTabletEvent* theWrappedObject) const;
   int  z(QTabletEvent* theWrappedObject) const;
};





class PythonQtShell_QTapAndHoldGesture : public QTapAndHoldGesture
{
public:
    PythonQtShell_QTapAndHoldGesture(QObject*  parent = 0):QTapAndHoldGesture(parent),_wrapper(NULL) {};

   ~PythonQtShell_QTapAndHoldGesture();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTapAndHoldGesture : public QObject
{ Q_OBJECT
public:
public slots:
QTapAndHoldGesture* new_QTapAndHoldGesture(QObject*  parent = 0);
void delete_QTapAndHoldGesture(QTapAndHoldGesture* obj) { delete obj; } 
   QPointF  position(QTapAndHoldGesture* theWrappedObject) const;
   void setPosition(QTapAndHoldGesture* theWrappedObject, const QPointF&  pos);
   void static_QTapAndHoldGesture_setTimeout(int  msecs);
   int  static_QTapAndHoldGesture_timeout();
};





class PythonQtShell_QTapGesture : public QTapGesture
{
public:
    PythonQtShell_QTapGesture(QObject*  parent = 0):QTapGesture(parent),_wrapper(NULL) {};

   ~PythonQtShell_QTapGesture();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTapGesture : public QObject
{ Q_OBJECT
public:
public slots:
QTapGesture* new_QTapGesture(QObject*  parent = 0);
void delete_QTapGesture(QTapGesture* obj) { delete obj; } 
   QPointF  position(QTapGesture* theWrappedObject) const;
   void setPosition(QTapGesture* theWrappedObject, const QPointF&  pos);
};





class PythonQtWrapper_QTextBlock : public QObject
{ Q_OBJECT
public:
public slots:
QTextBlock* new_QTextBlock();
QTextBlock* new_QTextBlock(const QTextBlock&  o);
void delete_QTextBlock(QTextBlock* obj) { delete obj; } 
   QTextBlock::iterator  begin(QTextBlock* theWrappedObject) const;
   QTextBlockFormat  blockFormat(QTextBlock* theWrappedObject) const;
   int  blockFormatIndex(QTextBlock* theWrappedObject) const;
   int  blockNumber(QTextBlock* theWrappedObject) const;
   QTextCharFormat  charFormat(QTextBlock* theWrappedObject) const;
   int  charFormatIndex(QTextBlock* theWrappedObject) const;
   void clearLayout(QTextBlock* theWrappedObject);
   bool  contains(QTextBlock* theWrappedObject, int  position) const;
   const QTextDocument*  document(QTextBlock* theWrappedObject) const;
   QTextBlock::iterator  end(QTextBlock* theWrappedObject) const;
   int  firstLineNumber(QTextBlock* theWrappedObject) const;
   int  fragmentIndex(QTextBlock* theWrappedObject) const;
   bool  isValid(QTextBlock* theWrappedObject) const;
   bool  isVisible(QTextBlock* theWrappedObject) const;
   QTextLayout*  layout(QTextBlock* theWrappedObject) const;
   int  length(QTextBlock* theWrappedObject) const;
   int  lineCount(QTextBlock* theWrappedObject) const;
   QTextBlock  next(QTextBlock* theWrappedObject) const;
   bool  __ne__(QTextBlock* theWrappedObject, const QTextBlock&  o) const;
   bool  __lt__(QTextBlock* theWrappedObject, const QTextBlock&  o) const;
   bool  __eq__(QTextBlock* theWrappedObject, const QTextBlock&  o) const;
   int  position(QTextBlock* theWrappedObject) const;
   QTextBlock  previous(QTextBlock* theWrappedObject) const;
   int  revision(QTextBlock* theWrappedObject) const;
   void setLineCount(QTextBlock* theWrappedObject, int  count);
   void setRevision(QTextBlock* theWrappedObject, int  rev);
   void setUserData(QTextBlock* theWrappedObject, QTextBlockUserData*  data);
   void setUserState(QTextBlock* theWrappedObject, int  state);
   void setVisible(QTextBlock* theWrappedObject, bool  visible);
   QString  text(QTextBlock* theWrappedObject) const;
   Qt::LayoutDirection  textDirection(QTextBlock* theWrappedObject) const;
   QVector<QTextLayout::FormatRange >  textFormats(QTextBlock* theWrappedObject) const;
   QTextList*  textList(QTextBlock* theWrappedObject) const;
   QTextBlockUserData*  userData(QTextBlock* theWrappedObject) const;
   int  userState(QTextBlock* theWrappedObject) const;
};





class PythonQtShell_QTextBlockFormat : public QTextBlockFormat
{
public:
    PythonQtShell_QTextBlockFormat():QTextBlockFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextBlockFormat(const QTextFormat&  fmt):QTextBlockFormat(fmt),_wrapper(NULL) {};

   ~PythonQtShell_QTextBlockFormat();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextBlockFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LineHeightTypes )
enum LineHeightTypes{
  SingleHeight = QTextBlockFormat::SingleHeight,   ProportionalHeight = QTextBlockFormat::ProportionalHeight,   FixedHeight = QTextBlockFormat::FixedHeight,   MinimumHeight = QTextBlockFormat::MinimumHeight,   LineDistanceHeight = QTextBlockFormat::LineDistanceHeight};
public slots:
QTextBlockFormat* new_QTextBlockFormat();
QTextBlockFormat* new_QTextBlockFormat(const QTextFormat&  fmt);
QTextBlockFormat* new_QTextBlockFormat(const QTextBlockFormat& other) {
PythonQtShell_QTextBlockFormat* a = new PythonQtShell_QTextBlockFormat();
*((QTextBlockFormat*)a) = other;
return a; }
void delete_QTextBlockFormat(QTextBlockFormat* obj) { delete obj; } 
   Qt::Alignment  alignment(QTextBlockFormat* theWrappedObject) const;
   qreal  bottomMargin(QTextBlockFormat* theWrappedObject) const;
   int  indent(QTextBlockFormat* theWrappedObject) const;
   bool  isValid(QTextBlockFormat* theWrappedObject) const;
   qreal  leftMargin(QTextBlockFormat* theWrappedObject) const;
   qreal  lineHeight(QTextBlockFormat* theWrappedObject) const;
   qreal  lineHeight(QTextBlockFormat* theWrappedObject, qreal  scriptLineHeight, qreal  scaling) const;
   int  lineHeightType(QTextBlockFormat* theWrappedObject) const;
   bool  nonBreakableLines(QTextBlockFormat* theWrappedObject) const;
   QTextFormat::PageBreakFlags  pageBreakPolicy(QTextBlockFormat* theWrappedObject) const;
   qreal  rightMargin(QTextBlockFormat* theWrappedObject) const;
   void setAlignment(QTextBlockFormat* theWrappedObject, Qt::Alignment  alignment);
   void setBottomMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   void setIndent(QTextBlockFormat* theWrappedObject, int  indent);
   void setLeftMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   void setLineHeight(QTextBlockFormat* theWrappedObject, qreal  height, int  heightType);
   void setNonBreakableLines(QTextBlockFormat* theWrappedObject, bool  b);
   void setPageBreakPolicy(QTextBlockFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags);
   void setRightMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   void setTabPositions(QTextBlockFormat* theWrappedObject, const QList<QTextOption::Tab >&  tabs);
   void setTextIndent(QTextBlockFormat* theWrappedObject, qreal  aindent);
   void setTopMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   QList<QTextOption::Tab >  tabPositions(QTextBlockFormat* theWrappedObject) const;
   qreal  textIndent(QTextBlockFormat* theWrappedObject) const;
   qreal  topMargin(QTextBlockFormat* theWrappedObject) const;
};





class PythonQtShell_QTextBlockGroup : public QTextBlockGroup
{
public:
    PythonQtShell_QTextBlockGroup(QTextDocument*  doc):QTextBlockGroup(doc),_wrapper(NULL) {};

   ~PythonQtShell_QTextBlockGroup();

virtual void blockFormatChanged(const QTextBlock&  block);
virtual void blockInserted(const QTextBlock&  block);
virtual void blockRemoved(const QTextBlock&  block);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextBlockGroup : public QTextBlockGroup
{ public:
inline void promoted_blockFormatChanged(const QTextBlock&  block) { QTextBlockGroup::blockFormatChanged(block); }
inline void promoted_blockInserted(const QTextBlock&  block) { QTextBlockGroup::blockInserted(block); }
inline QList<QTextBlock >  promoted_blockList() const { return QTextBlockGroup::blockList(); }
inline void promoted_blockRemoved(const QTextBlock&  block) { QTextBlockGroup::blockRemoved(block); }
};

class PythonQtWrapper_QTextBlockGroup : public QObject
{ Q_OBJECT
public:
public slots:
QTextBlockGroup* new_QTextBlockGroup(QTextDocument*  doc);
   void blockFormatChanged(QTextBlockGroup* theWrappedObject, const QTextBlock&  block);
   void blockInserted(QTextBlockGroup* theWrappedObject, const QTextBlock&  block);
   QList<QTextBlock >  blockList(QTextBlockGroup* theWrappedObject) const;
   void blockRemoved(QTextBlockGroup* theWrappedObject, const QTextBlock&  block);
};





class PythonQtShell_QTextBlockUserData : public QTextBlockUserData
{
public:
    PythonQtShell_QTextBlockUserData():QTextBlockUserData(),_wrapper(NULL) {};

   ~PythonQtShell_QTextBlockUserData();


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

   ~PythonQtShell_QTextBrowser();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void backward();
virtual bool  canInsertFromMimeData(const QMimeData*  source) const;
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual QMimeData*  createMimeDataFromSelection() const;
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void doSetTextCursor(const QTextCursor&  cursor);
virtual void dragEnterEvent(QDragEnterEvent*  e);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  ev);
virtual void forward();
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void home();
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual void insertFromMimeData(const QMimeData*  source);
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  arg__1);
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  ev);
virtual void mousePressEvent(QMouseEvent*  ev);
virtual void mouseReleaseEvent(QMouseEvent*  ev);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reload();
virtual void resizeEvent(QResizeEvent*  e);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void setSource(const QUrl&  name);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual QSize  viewportSizeHint() const;
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextBrowser : public QTextBrowser
{ public:
inline void promoted_backward() { QTextBrowser::backward(); }
inline bool  promoted_event(QEvent*  e) { return QTextBrowser::event(e); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QTextBrowser::focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  ev) { QTextBrowser::focusOutEvent(ev); }
inline void promoted_forward() { QTextBrowser::forward(); }
inline void promoted_home() { QTextBrowser::home(); }
inline void promoted_keyPressEvent(QKeyEvent*  ev) { QTextBrowser::keyPressEvent(ev); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QTextBrowser::loadResource(type, name); }
inline void promoted_mouseMoveEvent(QMouseEvent*  ev) { QTextBrowser::mouseMoveEvent(ev); }
inline void promoted_mousePressEvent(QMouseEvent*  ev) { QTextBrowser::mousePressEvent(ev); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  ev) { QTextBrowser::mouseReleaseEvent(ev); }
inline void promoted_paintEvent(QPaintEvent*  e) { QTextBrowser::paintEvent(e); }
inline void promoted_reload() { QTextBrowser::reload(); }
inline void promoted_setSource(const QUrl&  name) { QTextBrowser::setSource(name); }
};

class PythonQtWrapper_QTextBrowser : public QObject
{ Q_OBJECT
public:
public slots:
QTextBrowser* new_QTextBrowser(QWidget*  parent = 0);
void delete_QTextBrowser(QTextBrowser* obj) { delete obj; } 
   void backward(QTextBrowser* theWrappedObject);
   int  backwardHistoryCount(QTextBrowser* theWrappedObject) const;
   void clearHistory(QTextBrowser* theWrappedObject);
   bool  event(QTextBrowser* theWrappedObject, QEvent*  e);
   bool  focusNextPrevChild(QTextBrowser* theWrappedObject, bool  next);
   void focusOutEvent(QTextBrowser* theWrappedObject, QFocusEvent*  ev);
   void forward(QTextBrowser* theWrappedObject);
   int  forwardHistoryCount(QTextBrowser* theWrappedObject) const;
   QString  historyTitle(QTextBrowser* theWrappedObject, int  arg__1) const;
   QUrl  historyUrl(QTextBrowser* theWrappedObject, int  arg__1) const;
   void home(QTextBrowser* theWrappedObject);
   bool  isBackwardAvailable(QTextBrowser* theWrappedObject) const;
   bool  isForwardAvailable(QTextBrowser* theWrappedObject) const;
   void keyPressEvent(QTextBrowser* theWrappedObject, QKeyEvent*  ev);
   QVariant  loadResource(QTextBrowser* theWrappedObject, int  type, const QUrl&  name);
   void mouseMoveEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev);
   void mousePressEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev);
   void mouseReleaseEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev);
   bool  openExternalLinks(QTextBrowser* theWrappedObject) const;
   bool  openLinks(QTextBrowser* theWrappedObject) const;
   void paintEvent(QTextBrowser* theWrappedObject, QPaintEvent*  e);
   void reload(QTextBrowser* theWrappedObject);
   QStringList  searchPaths(QTextBrowser* theWrappedObject) const;
   void setOpenExternalLinks(QTextBrowser* theWrappedObject, bool  open);
   void setOpenLinks(QTextBrowser* theWrappedObject, bool  open);
   void setSearchPaths(QTextBrowser* theWrappedObject, const QStringList&  paths);
   void setSource(QTextBrowser* theWrappedObject, const QUrl&  name);
   QUrl  source(QTextBrowser* theWrappedObject) const;
};





class PythonQtShell_QTextCharFormat : public QTextCharFormat
{
public:
    PythonQtShell_QTextCharFormat():QTextCharFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextCharFormat(const QTextFormat&  fmt):QTextCharFormat(fmt),_wrapper(NULL) {};

   ~PythonQtShell_QTextCharFormat();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextCharFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FontPropertiesInheritanceBehavior UnderlineStyle VerticalAlignment )
enum FontPropertiesInheritanceBehavior{
  FontPropertiesSpecifiedOnly = QTextCharFormat::FontPropertiesSpecifiedOnly,   FontPropertiesAll = QTextCharFormat::FontPropertiesAll};
enum UnderlineStyle{
  NoUnderline = QTextCharFormat::NoUnderline,   SingleUnderline = QTextCharFormat::SingleUnderline,   DashUnderline = QTextCharFormat::DashUnderline,   DotLine = QTextCharFormat::DotLine,   DashDotLine = QTextCharFormat::DashDotLine,   DashDotDotLine = QTextCharFormat::DashDotDotLine,   WaveUnderline = QTextCharFormat::WaveUnderline,   SpellCheckUnderline = QTextCharFormat::SpellCheckUnderline};
enum VerticalAlignment{
  AlignNormal = QTextCharFormat::AlignNormal,   AlignSuperScript = QTextCharFormat::AlignSuperScript,   AlignSubScript = QTextCharFormat::AlignSubScript,   AlignMiddle = QTextCharFormat::AlignMiddle,   AlignTop = QTextCharFormat::AlignTop,   AlignBottom = QTextCharFormat::AlignBottom,   AlignBaseline = QTextCharFormat::AlignBaseline};
public slots:
QTextCharFormat* new_QTextCharFormat();
QTextCharFormat* new_QTextCharFormat(const QTextFormat&  fmt);
QTextCharFormat* new_QTextCharFormat(const QTextCharFormat& other) {
PythonQtShell_QTextCharFormat* a = new PythonQtShell_QTextCharFormat();
*((QTextCharFormat*)a) = other;
return a; }
void delete_QTextCharFormat(QTextCharFormat* obj) { delete obj; } 
   QString  anchorHref(QTextCharFormat* theWrappedObject) const;
   QStringList  anchorNames(QTextCharFormat* theWrappedObject) const;
   QFont  font(QTextCharFormat* theWrappedObject) const;
   QFont::Capitalization  fontCapitalization(QTextCharFormat* theWrappedObject) const;
   QString  fontFamily(QTextCharFormat* theWrappedObject) const;
   bool  fontFixedPitch(QTextCharFormat* theWrappedObject) const;
   QFont::HintingPreference  fontHintingPreference(QTextCharFormat* theWrappedObject) const;
   bool  fontItalic(QTextCharFormat* theWrappedObject) const;
   bool  fontKerning(QTextCharFormat* theWrappedObject) const;
   qreal  fontLetterSpacing(QTextCharFormat* theWrappedObject) const;
   QFont::SpacingType  fontLetterSpacingType(QTextCharFormat* theWrappedObject) const;
   bool  fontOverline(QTextCharFormat* theWrappedObject) const;
   qreal  fontPointSize(QTextCharFormat* theWrappedObject) const;
   int  fontStretch(QTextCharFormat* theWrappedObject) const;
   bool  fontStrikeOut(QTextCharFormat* theWrappedObject) const;
   QFont::StyleHint  fontStyleHint(QTextCharFormat* theWrappedObject) const;
   QFont::StyleStrategy  fontStyleStrategy(QTextCharFormat* theWrappedObject) const;
   bool  fontUnderline(QTextCharFormat* theWrappedObject) const;
   int  fontWeight(QTextCharFormat* theWrappedObject) const;
   qreal  fontWordSpacing(QTextCharFormat* theWrappedObject) const;
   bool  isAnchor(QTextCharFormat* theWrappedObject) const;
   bool  isValid(QTextCharFormat* theWrappedObject) const;
   void setAnchor(QTextCharFormat* theWrappedObject, bool  anchor);
   void setAnchorHref(QTextCharFormat* theWrappedObject, const QString&  value);
   void setAnchorNames(QTextCharFormat* theWrappedObject, const QStringList&  names);
   void setFont(QTextCharFormat* theWrappedObject, const QFont&  font);
   void setFont(QTextCharFormat* theWrappedObject, const QFont&  font, QTextCharFormat::FontPropertiesInheritanceBehavior  behavior);
   void setFontCapitalization(QTextCharFormat* theWrappedObject, QFont::Capitalization  capitalization);
   void setFontFamily(QTextCharFormat* theWrappedObject, const QString&  family);
   void setFontFixedPitch(QTextCharFormat* theWrappedObject, bool  fixedPitch);
   void setFontHintingPreference(QTextCharFormat* theWrappedObject, QFont::HintingPreference  hintingPreference);
   void setFontItalic(QTextCharFormat* theWrappedObject, bool  italic);
   void setFontKerning(QTextCharFormat* theWrappedObject, bool  enable);
   void setFontLetterSpacing(QTextCharFormat* theWrappedObject, qreal  spacing);
   void setFontLetterSpacingType(QTextCharFormat* theWrappedObject, QFont::SpacingType  letterSpacingType);
   void setFontOverline(QTextCharFormat* theWrappedObject, bool  overline);
   void setFontPointSize(QTextCharFormat* theWrappedObject, qreal  size);
   void setFontStretch(QTextCharFormat* theWrappedObject, int  factor);
   void setFontStrikeOut(QTextCharFormat* theWrappedObject, bool  strikeOut);
   void setFontStyleHint(QTextCharFormat* theWrappedObject, QFont::StyleHint  hint, QFont::StyleStrategy  strategy = QFont::PreferDefault);
   void setFontStyleStrategy(QTextCharFormat* theWrappedObject, QFont::StyleStrategy  strategy);
   void setFontUnderline(QTextCharFormat* theWrappedObject, bool  underline);
   void setFontWeight(QTextCharFormat* theWrappedObject, int  weight);
   void setFontWordSpacing(QTextCharFormat* theWrappedObject, qreal  spacing);
   void setTableCellColumnSpan(QTextCharFormat* theWrappedObject, int  tableCellColumnSpan);
   void setTableCellRowSpan(QTextCharFormat* theWrappedObject, int  tableCellRowSpan);
   void setTextOutline(QTextCharFormat* theWrappedObject, const QPen&  pen);
   void setToolTip(QTextCharFormat* theWrappedObject, const QString&  tip);
   void setUnderlineColor(QTextCharFormat* theWrappedObject, const QColor&  color);
   void setUnderlineStyle(QTextCharFormat* theWrappedObject, QTextCharFormat::UnderlineStyle  style);
   void setVerticalAlignment(QTextCharFormat* theWrappedObject, QTextCharFormat::VerticalAlignment  alignment);
   int  tableCellColumnSpan(QTextCharFormat* theWrappedObject) const;
   int  tableCellRowSpan(QTextCharFormat* theWrappedObject) const;
   QPen  textOutline(QTextCharFormat* theWrappedObject) const;
   QString  toolTip(QTextCharFormat* theWrappedObject) const;
   QColor  underlineColor(QTextCharFormat* theWrappedObject) const;
   QTextCharFormat::UnderlineStyle  underlineStyle(QTextCharFormat* theWrappedObject) const;
   QTextCharFormat::VerticalAlignment  verticalAlignment(QTextCharFormat* theWrappedObject) const;
};





class PythonQtWrapper_QTextCursor : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MoveMode MoveOperation SelectionType )
enum MoveMode{
  MoveAnchor = QTextCursor::MoveAnchor,   KeepAnchor = QTextCursor::KeepAnchor};
enum MoveOperation{
  NoMove = QTextCursor::NoMove,   Start = QTextCursor::Start,   Up = QTextCursor::Up,   StartOfLine = QTextCursor::StartOfLine,   StartOfBlock = QTextCursor::StartOfBlock,   StartOfWord = QTextCursor::StartOfWord,   PreviousBlock = QTextCursor::PreviousBlock,   PreviousCharacter = QTextCursor::PreviousCharacter,   PreviousWord = QTextCursor::PreviousWord,   Left = QTextCursor::Left,   WordLeft = QTextCursor::WordLeft,   End = QTextCursor::End,   Down = QTextCursor::Down,   EndOfLine = QTextCursor::EndOfLine,   EndOfWord = QTextCursor::EndOfWord,   EndOfBlock = QTextCursor::EndOfBlock,   NextBlock = QTextCursor::NextBlock,   NextCharacter = QTextCursor::NextCharacter,   NextWord = QTextCursor::NextWord,   Right = QTextCursor::Right,   WordRight = QTextCursor::WordRight,   NextCell = QTextCursor::NextCell,   PreviousCell = QTextCursor::PreviousCell,   NextRow = QTextCursor::NextRow,   PreviousRow = QTextCursor::PreviousRow};
enum SelectionType{
  WordUnderCursor = QTextCursor::WordUnderCursor,   LineUnderCursor = QTextCursor::LineUnderCursor,   BlockUnderCursor = QTextCursor::BlockUnderCursor,   Document = QTextCursor::Document};
public slots:
QTextCursor* new_QTextCursor();
QTextCursor* new_QTextCursor(QTextDocument*  document);
QTextCursor* new_QTextCursor(QTextFrame*  frame);
QTextCursor* new_QTextCursor(const QTextBlock&  block);
QTextCursor* new_QTextCursor(const QTextCursor&  cursor);
void delete_QTextCursor(QTextCursor* obj) { delete obj; } 
   int  anchor(QTextCursor* theWrappedObject) const;
   bool  atBlockEnd(QTextCursor* theWrappedObject) const;
   bool  atBlockStart(QTextCursor* theWrappedObject) const;
   bool  atEnd(QTextCursor* theWrappedObject) const;
   bool  atStart(QTextCursor* theWrappedObject) const;
   void beginEditBlock(QTextCursor* theWrappedObject);
   QTextBlock  block(QTextCursor* theWrappedObject) const;
   QTextCharFormat  blockCharFormat(QTextCursor* theWrappedObject) const;
   QTextBlockFormat  blockFormat(QTextCursor* theWrappedObject) const;
   int  blockNumber(QTextCursor* theWrappedObject) const;
   QTextCharFormat  charFormat(QTextCursor* theWrappedObject) const;
   void clearSelection(QTextCursor* theWrappedObject);
   int  columnNumber(QTextCursor* theWrappedObject) const;
   QTextList*  createList(QTextCursor* theWrappedObject, QTextListFormat::Style  style);
   QTextList*  createList(QTextCursor* theWrappedObject, const QTextListFormat&  format);
   QTextFrame*  currentFrame(QTextCursor* theWrappedObject) const;
   QTextList*  currentList(QTextCursor* theWrappedObject) const;
   QTextTable*  currentTable(QTextCursor* theWrappedObject) const;
   void deleteChar(QTextCursor* theWrappedObject);
   void deletePreviousChar(QTextCursor* theWrappedObject);
   QTextDocument*  document(QTextCursor* theWrappedObject) const;
   void endEditBlock(QTextCursor* theWrappedObject);
   bool  hasComplexSelection(QTextCursor* theWrappedObject) const;
   bool  hasSelection(QTextCursor* theWrappedObject) const;
   void insertBlock(QTextCursor* theWrappedObject);
   void insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format);
   void insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format, const QTextCharFormat&  charFormat);
   void insertFragment(QTextCursor* theWrappedObject, const QTextDocumentFragment&  fragment);
   QTextFrame*  insertFrame(QTextCursor* theWrappedObject, const QTextFrameFormat&  format);
   void insertHtml(QTextCursor* theWrappedObject, const QString&  html);
   void insertImage(QTextCursor* theWrappedObject, const QImage&  image, const QString&  name = QString());
   void insertImage(QTextCursor* theWrappedObject, const QString&  name);
   void insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format);
   void insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format, QTextFrameFormat::Position  alignment);
   QTextList*  insertList(QTextCursor* theWrappedObject, QTextListFormat::Style  style);
   QTextList*  insertList(QTextCursor* theWrappedObject, const QTextListFormat&  format);
   QTextTable*  insertTable(QTextCursor* theWrappedObject, int  rows, int  cols);
   QTextTable*  insertTable(QTextCursor* theWrappedObject, int  rows, int  cols, const QTextTableFormat&  format);
   void insertText(QTextCursor* theWrappedObject, const QString&  text);
   void insertText(QTextCursor* theWrappedObject, const QString&  text, const QTextCharFormat&  format);
   bool  isCopyOf(QTextCursor* theWrappedObject, const QTextCursor&  other) const;
   bool  isNull(QTextCursor* theWrappedObject) const;
   void joinPreviousEditBlock(QTextCursor* theWrappedObject);
   bool  keepPositionOnInsert(QTextCursor* theWrappedObject) const;
   void mergeBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier);
   void mergeBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  modifier);
   void mergeCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier);
   bool  movePosition(QTextCursor* theWrappedObject, QTextCursor::MoveOperation  op, QTextCursor::MoveMode  arg__2 = QTextCursor::MoveAnchor, int  n = 1);
   bool  __ne__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   bool  __lt__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   bool  __le__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   bool  __eq__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   bool  __gt__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   bool  __ge__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   int  position(QTextCursor* theWrappedObject) const;
   int  positionInBlock(QTextCursor* theWrappedObject) const;
   void removeSelectedText(QTextCursor* theWrappedObject);
   void select(QTextCursor* theWrappedObject, QTextCursor::SelectionType  selection);
   QString  selectedText(QTextCursor* theWrappedObject) const;
   QTextDocumentFragment  selection(QTextCursor* theWrappedObject) const;
   int  selectionEnd(QTextCursor* theWrappedObject) const;
   int  selectionStart(QTextCursor* theWrappedObject) const;
   void setBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format);
   void setBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  format);
   void setCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format);
   void setKeepPositionOnInsert(QTextCursor* theWrappedObject, bool  b);
   void setPosition(QTextCursor* theWrappedObject, int  pos, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   void setVerticalMovementX(QTextCursor* theWrappedObject, int  x);
   void setVisualNavigation(QTextCursor* theWrappedObject, bool  b);
   void swap(QTextCursor* theWrappedObject, QTextCursor&  other);
   int  verticalMovementX(QTextCursor* theWrappedObject) const;
   bool  visualNavigation(QTextCursor* theWrappedObject) const;
    bool __nonzero__(QTextCursor* obj) { return !obj->isNull(); }
};





class PythonQtShell_QTextDocument : public QTextDocument
{
public:
    PythonQtShell_QTextDocument(QObject*  parent = 0):QTextDocument(parent),_wrapper(NULL) {};
    PythonQtShell_QTextDocument(const QString&  text, QObject*  parent = 0):QTextDocument(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QTextDocument();

virtual void childEvent(QChildEvent*  arg__1);
virtual void clear();
virtual QTextObject*  createObject(const QTextFormat&  f);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextDocument : public QTextDocument
{ public:
inline void promoted_clear() { QTextDocument::clear(); }
inline QTextObject*  promoted_createObject(const QTextFormat&  f) { return QTextDocument::createObject(f); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QTextDocument::loadResource(type, name); }
};

class PythonQtWrapper_QTextDocument : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FindFlag MetaInformation ResourceType Stacks )
Q_FLAGS(FindFlags )
enum FindFlag{
  FindBackward = QTextDocument::FindBackward,   FindCaseSensitively = QTextDocument::FindCaseSensitively,   FindWholeWords = QTextDocument::FindWholeWords};
enum MetaInformation{
  DocumentTitle = QTextDocument::DocumentTitle,   DocumentUrl = QTextDocument::DocumentUrl};
enum ResourceType{
  HtmlResource = QTextDocument::HtmlResource,   ImageResource = QTextDocument::ImageResource,   StyleSheetResource = QTextDocument::StyleSheetResource,   UserResource = QTextDocument::UserResource};
enum Stacks{
  UndoStack = QTextDocument::UndoStack,   RedoStack = QTextDocument::RedoStack,   UndoAndRedoStacks = QTextDocument::UndoAndRedoStacks};
Q_DECLARE_FLAGS(FindFlags, FindFlag)
public slots:
QTextDocument* new_QTextDocument(QObject*  parent = 0);
QTextDocument* new_QTextDocument(const QString&  text, QObject*  parent = 0);
void delete_QTextDocument(QTextDocument* obj) { delete obj; } 
   void addResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name, const QVariant&  resource);
   void adjustSize(QTextDocument* theWrappedObject);
   QVector<QTextFormat >  allFormats(QTextDocument* theWrappedObject) const;
   int  availableRedoSteps(QTextDocument* theWrappedObject) const;
   int  availableUndoSteps(QTextDocument* theWrappedObject) const;
   QUrl  baseUrl(QTextDocument* theWrappedObject) const;
   QTextBlock  begin(QTextDocument* theWrappedObject) const;
   int  blockCount(QTextDocument* theWrappedObject) const;
   QChar  characterAt(QTextDocument* theWrappedObject, int  pos) const;
   int  characterCount(QTextDocument* theWrappedObject) const;
   void clear(QTextDocument* theWrappedObject);
   void clearUndoRedoStacks(QTextDocument* theWrappedObject, QTextDocument::Stacks  historyToClear = QTextDocument::UndoAndRedoStacks);
   QTextDocument*  clone(QTextDocument* theWrappedObject, QObject*  parent = 0) const;
   QTextObject*  createObject(QTextDocument* theWrappedObject, const QTextFormat&  f);
   Qt::CursorMoveStyle  defaultCursorMoveStyle(QTextDocument* theWrappedObject) const;
   QFont  defaultFont(QTextDocument* theWrappedObject) const;
   QString  defaultStyleSheet(QTextDocument* theWrappedObject) const;
   QTextOption  defaultTextOption(QTextDocument* theWrappedObject) const;
   QAbstractTextDocumentLayout*  documentLayout(QTextDocument* theWrappedObject) const;
   qreal  documentMargin(QTextDocument* theWrappedObject) const;
   void drawContents(QTextDocument* theWrappedObject, QPainter*  painter, const QRectF&  rect = QRectF());
   QTextBlock  end(QTextDocument* theWrappedObject) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegExp&  expr, const QTextCursor&  from, QTextDocument::FindFlags  options = 0) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegExp&  expr, int  from = 0, QTextDocument::FindFlags  options = 0) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QString&  subString, const QTextCursor&  from, QTextDocument::FindFlags  options = 0) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QString&  subString, int  from = 0, QTextDocument::FindFlags  options = 0) const;
   QTextBlock  findBlock(QTextDocument* theWrappedObject, int  pos) const;
   QTextBlock  findBlockByLineNumber(QTextDocument* theWrappedObject, int  blockNumber) const;
   QTextBlock  findBlockByNumber(QTextDocument* theWrappedObject, int  blockNumber) const;
   QTextBlock  firstBlock(QTextDocument* theWrappedObject) const;
   QTextFrame*  frameAt(QTextDocument* theWrappedObject, int  pos) const;
   qreal  idealWidth(QTextDocument* theWrappedObject) const;
   qreal  indentWidth(QTextDocument* theWrappedObject) const;
   bool  isEmpty(QTextDocument* theWrappedObject) const;
   bool  isModified(QTextDocument* theWrappedObject) const;
   bool  isRedoAvailable(QTextDocument* theWrappedObject) const;
   bool  isUndoAvailable(QTextDocument* theWrappedObject) const;
   bool  isUndoRedoEnabled(QTextDocument* theWrappedObject) const;
   QTextBlock  lastBlock(QTextDocument* theWrappedObject) const;
   int  lineCount(QTextDocument* theWrappedObject) const;
   QVariant  loadResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name);
   void markContentsDirty(QTextDocument* theWrappedObject, int  from, int  length);
   int  maximumBlockCount(QTextDocument* theWrappedObject) const;
   QString  metaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info) const;
   QTextObject*  object(QTextDocument* theWrappedObject, int  objectIndex) const;
   QTextObject*  objectForFormat(QTextDocument* theWrappedObject, const QTextFormat&  arg__1) const;
   int  pageCount(QTextDocument* theWrappedObject) const;
   QSizeF  pageSize(QTextDocument* theWrappedObject) const;
   void print(QTextDocument* theWrappedObject, QPagedPaintDevice*  printer) const;
   void redo(QTextDocument* theWrappedObject, QTextCursor*  cursor);
   QVariant  resource(QTextDocument* theWrappedObject, int  type, const QUrl&  name) const;
   int  revision(QTextDocument* theWrappedObject) const;
   QTextFrame*  rootFrame(QTextDocument* theWrappedObject) const;
   void setBaseUrl(QTextDocument* theWrappedObject, const QUrl&  url);
   void setDefaultCursorMoveStyle(QTextDocument* theWrappedObject, Qt::CursorMoveStyle  style);
   void setDefaultFont(QTextDocument* theWrappedObject, const QFont&  font);
   void setDefaultStyleSheet(QTextDocument* theWrappedObject, const QString&  sheet);
   void setDefaultTextOption(QTextDocument* theWrappedObject, const QTextOption&  option);
   void setDocumentLayout(QTextDocument* theWrappedObject, QAbstractTextDocumentLayout*  layout);
   void setDocumentMargin(QTextDocument* theWrappedObject, qreal  margin);
   void setHtml(QTextDocument* theWrappedObject, const QString&  html);
   void setIndentWidth(QTextDocument* theWrappedObject, qreal  width);
   void setMaximumBlockCount(QTextDocument* theWrappedObject, int  maximum);
   void setMetaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info, const QString&  arg__2);
   void setPageSize(QTextDocument* theWrappedObject, const QSizeF&  size);
   void setPlainText(QTextDocument* theWrappedObject, const QString&  text);
   void setTextWidth(QTextDocument* theWrappedObject, qreal  width);
   void setUndoRedoEnabled(QTextDocument* theWrappedObject, bool  enable);
   void setUseDesignMetrics(QTextDocument* theWrappedObject, bool  b);
   QSizeF  size(QTextDocument* theWrappedObject) const;
   qreal  textWidth(QTextDocument* theWrappedObject) const;
   QString  toHtml(QTextDocument* theWrappedObject, const QByteArray&  encoding = QByteArray()) const;
   QString  toPlainText(QTextDocument* theWrappedObject) const;
   void undo(QTextDocument* theWrappedObject, QTextCursor*  cursor);
   bool  useDesignMetrics(QTextDocument* theWrappedObject) const;
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
   QTextDocumentFragment  static_QTextDocumentFragment_fromHtml(const QString&  html);
   QTextDocumentFragment  static_QTextDocumentFragment_fromHtml(const QString&  html, const QTextDocument*  resourceProvider);
   QTextDocumentFragment  static_QTextDocumentFragment_fromPlainText(const QString&  plainText);
   bool  isEmpty(QTextDocumentFragment* theWrappedObject) const;
   QString  toHtml(QTextDocumentFragment* theWrappedObject, const QByteArray&  encoding = QByteArray()) const;
   QString  toPlainText(QTextDocumentFragment* theWrappedObject) const;
};





class PythonQtWrapper_QTextDocumentWriter : public QObject
{ Q_OBJECT
public:
public slots:
QTextDocumentWriter* new_QTextDocumentWriter();
QTextDocumentWriter* new_QTextDocumentWriter(QIODevice*  device, const QByteArray&  format);
QTextDocumentWriter* new_QTextDocumentWriter(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QTextDocumentWriter(QTextDocumentWriter* obj) { delete obj; } 
   QTextCodec*  codec(QTextDocumentWriter* theWrappedObject) const;
   QIODevice*  device(QTextDocumentWriter* theWrappedObject) const;
   QString  fileName(QTextDocumentWriter* theWrappedObject) const;
   QByteArray  format(QTextDocumentWriter* theWrappedObject) const;
   void setCodec(QTextDocumentWriter* theWrappedObject, QTextCodec*  codec);
   void setDevice(QTextDocumentWriter* theWrappedObject, QIODevice*  device);
   void setFileName(QTextDocumentWriter* theWrappedObject, const QString&  fileName);
   void setFormat(QTextDocumentWriter* theWrappedObject, const QByteArray&  format);
   QList<QByteArray >  static_QTextDocumentWriter_supportedDocumentFormats();
   bool  write(QTextDocumentWriter* theWrappedObject, const QTextDocument*  document);
   bool  write(QTextDocumentWriter* theWrappedObject, const QTextDocumentFragment&  fragment);
};





class PythonQtShell_QTextEdit : public QTextEdit
{
public:
    PythonQtShell_QTextEdit(QWidget*  parent = 0):QTextEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QTextEdit(const QString&  text, QWidget*  parent = 0):QTextEdit(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QTextEdit();

virtual void actionEvent(QActionEvent*  arg__1);
virtual bool  canInsertFromMimeData(const QMimeData*  source) const;
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual QMimeData*  createMimeDataFromSelection() const;
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void doSetTextCursor(const QTextCursor&  cursor);
virtual void dragEnterEvent(QDragEnterEvent*  e);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual void insertFromMimeData(const QMimeData*  source);
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  arg__1);
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  e);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual QSize  viewportSizeHint() const;
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextEdit : public QTextEdit
{ public:
inline bool  promoted_canInsertFromMimeData(const QMimeData*  source) const { return QTextEdit::canInsertFromMimeData(source); }
inline void promoted_changeEvent(QEvent*  e) { QTextEdit::changeEvent(e); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { QTextEdit::contextMenuEvent(e); }
inline QMimeData*  promoted_createMimeDataFromSelection() const { return QTextEdit::createMimeDataFromSelection(); }
inline void promoted_doSetTextCursor(const QTextCursor&  cursor) { QTextEdit::doSetTextCursor(cursor); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { QTextEdit::dragEnterEvent(e); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QTextEdit::dragLeaveEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QTextEdit::dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { QTextEdit::dropEvent(e); }
inline bool  promoted_event(QEvent*  e) { return QTextEdit::event(e); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QTextEdit::focusInEvent(e); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QTextEdit::focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QTextEdit::focusOutEvent(e); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QTextEdit::inputMethodEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  property) const { return QTextEdit::inputMethodQuery(property); }
inline void promoted_insertFromMimeData(const QMimeData*  source) { QTextEdit::insertFromMimeData(source); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QTextEdit::keyPressEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QTextEdit::keyReleaseEvent(e); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QTextEdit::loadResource(type, name); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { QTextEdit::mouseDoubleClickEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QTextEdit::mouseMoveEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QTextEdit::mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QTextEdit::mouseReleaseEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { QTextEdit::paintEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QTextEdit::resizeEvent(e); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QTextEdit::scrollContentsBy(dx, dy); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QTextEdit::showEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  e) { QTextEdit::timerEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QTextEdit::wheelEvent(e); }
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
   bool  acceptRichText(QTextEdit* theWrappedObject) const;
   Qt::Alignment  alignment(QTextEdit* theWrappedObject) const;
   QString  anchorAt(QTextEdit* theWrappedObject, const QPoint&  pos) const;
   QTextEdit::AutoFormatting  autoFormatting(QTextEdit* theWrappedObject) const;
   bool  canInsertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source) const;
   bool  canPaste(QTextEdit* theWrappedObject) const;
   void changeEvent(QTextEdit* theWrappedObject, QEvent*  e);
   void contextMenuEvent(QTextEdit* theWrappedObject, QContextMenuEvent*  e);
   QMimeData*  createMimeDataFromSelection(QTextEdit* theWrappedObject) const;
   QMenu*  createStandardContextMenu(QTextEdit* theWrappedObject);
   QMenu*  createStandardContextMenu(QTextEdit* theWrappedObject, const QPoint&  position);
   QTextCharFormat  currentCharFormat(QTextEdit* theWrappedObject) const;
   QFont  currentFont(QTextEdit* theWrappedObject) const;
   QTextCursor  cursorForPosition(QTextEdit* theWrappedObject, const QPoint&  pos) const;
   QRect  cursorRect(QTextEdit* theWrappedObject) const;
   QRect  cursorRect(QTextEdit* theWrappedObject, const QTextCursor&  cursor) const;
   int  cursorWidth(QTextEdit* theWrappedObject) const;
   void doSetTextCursor(QTextEdit* theWrappedObject, const QTextCursor&  cursor);
   QTextDocument*  document(QTextEdit* theWrappedObject) const;
   QString  documentTitle(QTextEdit* theWrappedObject) const;
   void dragEnterEvent(QTextEdit* theWrappedObject, QDragEnterEvent*  e);
   void dragLeaveEvent(QTextEdit* theWrappedObject, QDragLeaveEvent*  e);
   void dragMoveEvent(QTextEdit* theWrappedObject, QDragMoveEvent*  e);
   void dropEvent(QTextEdit* theWrappedObject, QDropEvent*  e);
   void ensureCursorVisible(QTextEdit* theWrappedObject);
   bool  event(QTextEdit* theWrappedObject, QEvent*  e);
   QList<QTextEdit::ExtraSelection >  extraSelections(QTextEdit* theWrappedObject) const;
   bool  find(QTextEdit* theWrappedObject, const QRegExp&  exp, QTextDocument::FindFlags  options = 0);
   bool  find(QTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options = 0);
   void focusInEvent(QTextEdit* theWrappedObject, QFocusEvent*  e);
   bool  focusNextPrevChild(QTextEdit* theWrappedObject, bool  next);
   void focusOutEvent(QTextEdit* theWrappedObject, QFocusEvent*  e);
   QString  fontFamily(QTextEdit* theWrappedObject) const;
   bool  fontItalic(QTextEdit* theWrappedObject) const;
   qreal  fontPointSize(QTextEdit* theWrappedObject) const;
   bool  fontUnderline(QTextEdit* theWrappedObject) const;
   int  fontWeight(QTextEdit* theWrappedObject) const;
   void inputMethodEvent(QTextEdit* theWrappedObject, QInputMethodEvent*  arg__1);
   QVariant  inputMethodQuery(QTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const;
   QVariant  inputMethodQuery(QTextEdit* theWrappedObject, Qt::InputMethodQuery  query, QVariant  argument) const;
   void insertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source);
   bool  isReadOnly(QTextEdit* theWrappedObject) const;
   bool  isUndoRedoEnabled(QTextEdit* theWrappedObject) const;
   void keyPressEvent(QTextEdit* theWrappedObject, QKeyEvent*  e);
   void keyReleaseEvent(QTextEdit* theWrappedObject, QKeyEvent*  e);
   int  lineWrapColumnOrWidth(QTextEdit* theWrappedObject) const;
   QTextEdit::LineWrapMode  lineWrapMode(QTextEdit* theWrappedObject) const;
   QVariant  loadResource(QTextEdit* theWrappedObject, int  type, const QUrl&  name);
   void mergeCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  modifier);
   void mouseDoubleClickEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   void mouseMoveEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   void mousePressEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   void mouseReleaseEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   void moveCursor(QTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   bool  overwriteMode(QTextEdit* theWrappedObject) const;
   void paintEvent(QTextEdit* theWrappedObject, QPaintEvent*  e);
   QString  placeholderText(QTextEdit* theWrappedObject) const;
   void print(QTextEdit* theWrappedObject, QPagedPaintDevice*  printer) const;
   void resizeEvent(QTextEdit* theWrappedObject, QResizeEvent*  e);
   void scrollContentsBy(QTextEdit* theWrappedObject, int  dx, int  dy);
   void setAcceptRichText(QTextEdit* theWrappedObject, bool  accept);
   void setAutoFormatting(QTextEdit* theWrappedObject, QTextEdit::AutoFormatting  features);
   void setCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  format);
   void setCursorWidth(QTextEdit* theWrappedObject, int  width);
   void setDocument(QTextEdit* theWrappedObject, QTextDocument*  document);
   void setDocumentTitle(QTextEdit* theWrappedObject, const QString&  title);
   void setExtraSelections(QTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections);
   void setLineWrapColumnOrWidth(QTextEdit* theWrappedObject, int  w);
   void setLineWrapMode(QTextEdit* theWrappedObject, QTextEdit::LineWrapMode  mode);
   void setOverwriteMode(QTextEdit* theWrappedObject, bool  overwrite);
   void setPlaceholderText(QTextEdit* theWrappedObject, const QString&  placeholderText);
   void setReadOnly(QTextEdit* theWrappedObject, bool  ro);
   void setTabChangesFocus(QTextEdit* theWrappedObject, bool  b);
   void setTabStopWidth(QTextEdit* theWrappedObject, int  width);
   void setTextCursor(QTextEdit* theWrappedObject, const QTextCursor&  cursor);
   void setTextInteractionFlags(QTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setUndoRedoEnabled(QTextEdit* theWrappedObject, bool  enable);
   void setWordWrapMode(QTextEdit* theWrappedObject, QTextOption::WrapMode  policy);
   void showEvent(QTextEdit* theWrappedObject, QShowEvent*  arg__1);
   bool  tabChangesFocus(QTextEdit* theWrappedObject) const;
   int  tabStopWidth(QTextEdit* theWrappedObject) const;
   QColor  textBackgroundColor(QTextEdit* theWrappedObject) const;
   QColor  textColor(QTextEdit* theWrappedObject) const;
   QTextCursor  textCursor(QTextEdit* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QTextEdit* theWrappedObject) const;
   void timerEvent(QTextEdit* theWrappedObject, QTimerEvent*  e);
   QString  toHtml(QTextEdit* theWrappedObject) const;
   QString  toPlainText(QTextEdit* theWrappedObject) const;
   void wheelEvent(QTextEdit* theWrappedObject, QWheelEvent*  e);
   QTextOption::WrapMode  wordWrapMode(QTextEdit* theWrappedObject) const;
};





class PythonQtShell_QTextEdit__ExtraSelection : public QTextEdit::ExtraSelection
{
public:
    PythonQtShell_QTextEdit__ExtraSelection():QTextEdit::ExtraSelection(),_wrapper(NULL) {};

   ~PythonQtShell_QTextEdit__ExtraSelection();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextEdit__ExtraSelection : public QObject
{ Q_OBJECT
public:
public slots:
QTextEdit::ExtraSelection* new_QTextEdit__ExtraSelection();
QTextEdit::ExtraSelection* new_QTextEdit__ExtraSelection(const QTextEdit::ExtraSelection& other) {
PythonQtShell_QTextEdit__ExtraSelection* a = new PythonQtShell_QTextEdit__ExtraSelection();
*((QTextEdit::ExtraSelection*)a) = other;
return a; }
void delete_QTextEdit__ExtraSelection(QTextEdit::ExtraSelection* obj) { delete obj; } 
void py_set_cursor(QTextEdit::ExtraSelection* theWrappedObject, QTextCursor  cursor){ theWrappedObject->cursor = cursor; }
QTextCursor  py_get_cursor(QTextEdit::ExtraSelection* theWrappedObject){ return theWrappedObject->cursor; }
void py_set_format(QTextEdit::ExtraSelection* theWrappedObject, QTextCharFormat  format){ theWrappedObject->format = format; }
QTextCharFormat  py_get_format(QTextEdit::ExtraSelection* theWrappedObject){ return theWrappedObject->format; }
};





class PythonQtWrapper_QTextFragment : public QObject
{ Q_OBJECT
public:
public slots:
QTextFragment* new_QTextFragment();
QTextFragment* new_QTextFragment(const QTextFragment&  o);
void delete_QTextFragment(QTextFragment* obj) { delete obj; } 
   QTextCharFormat  charFormat(QTextFragment* theWrappedObject) const;
   int  charFormatIndex(QTextFragment* theWrappedObject) const;
   bool  contains(QTextFragment* theWrappedObject, int  position) const;
   QList<QGlyphRun >  glyphRuns(QTextFragment* theWrappedObject, int  from = -1, int  length = -1) const;
   bool  isValid(QTextFragment* theWrappedObject) const;
   int  length(QTextFragment* theWrappedObject) const;
   bool  __ne__(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   bool  __lt__(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   bool  __eq__(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   int  position(QTextFragment* theWrappedObject) const;
   QString  text(QTextFragment* theWrappedObject) const;
};





class PythonQtShell_QTextFrame : public QTextFrame
{
public:
    PythonQtShell_QTextFrame(QTextDocument*  doc):QTextFrame(doc),_wrapper(NULL) {};

   ~PythonQtShell_QTextFrame();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextFrame : public QObject
{ Q_OBJECT
public:
public slots:
QTextFrame* new_QTextFrame(QTextDocument*  doc);
void delete_QTextFrame(QTextFrame* obj) { delete obj; } 
   QTextFrame::iterator  begin(QTextFrame* theWrappedObject) const;
   QList<QTextFrame* >  childFrames(QTextFrame* theWrappedObject) const;
   QTextFrame::iterator  end(QTextFrame* theWrappedObject) const;
   QTextCursor  firstCursorPosition(QTextFrame* theWrappedObject) const;
   int  firstPosition(QTextFrame* theWrappedObject) const;
   QTextFrameFormat  frameFormat(QTextFrame* theWrappedObject) const;
   QTextCursor  lastCursorPosition(QTextFrame* theWrappedObject) const;
   int  lastPosition(QTextFrame* theWrappedObject) const;
   QTextFrame*  parentFrame(QTextFrame* theWrappedObject) const;
   void setFrameFormat(QTextFrame* theWrappedObject, const QTextFrameFormat&  format);
};





class PythonQtShell_QTextFrameFormat : public QTextFrameFormat
{
public:
    PythonQtShell_QTextFrameFormat():QTextFrameFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextFrameFormat(const QTextFormat&  fmt):QTextFrameFormat(fmt),_wrapper(NULL) {};

   ~PythonQtShell_QTextFrameFormat();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextFrameFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BorderStyle Position )
enum BorderStyle{
  BorderStyle_None = QTextFrameFormat::BorderStyle_None,   BorderStyle_Dotted = QTextFrameFormat::BorderStyle_Dotted,   BorderStyle_Dashed = QTextFrameFormat::BorderStyle_Dashed,   BorderStyle_Solid = QTextFrameFormat::BorderStyle_Solid,   BorderStyle_Double = QTextFrameFormat::BorderStyle_Double,   BorderStyle_DotDash = QTextFrameFormat::BorderStyle_DotDash,   BorderStyle_DotDotDash = QTextFrameFormat::BorderStyle_DotDotDash,   BorderStyle_Groove = QTextFrameFormat::BorderStyle_Groove,   BorderStyle_Ridge = QTextFrameFormat::BorderStyle_Ridge,   BorderStyle_Inset = QTextFrameFormat::BorderStyle_Inset,   BorderStyle_Outset = QTextFrameFormat::BorderStyle_Outset};
enum Position{
  InFlow = QTextFrameFormat::InFlow,   FloatLeft = QTextFrameFormat::FloatLeft,   FloatRight = QTextFrameFormat::FloatRight};
public slots:
QTextFrameFormat* new_QTextFrameFormat();
QTextFrameFormat* new_QTextFrameFormat(const QTextFormat&  fmt);
QTextFrameFormat* new_QTextFrameFormat(const QTextFrameFormat& other) {
PythonQtShell_QTextFrameFormat* a = new PythonQtShell_QTextFrameFormat();
*((QTextFrameFormat*)a) = other;
return a; }
void delete_QTextFrameFormat(QTextFrameFormat* obj) { delete obj; } 
   qreal  border(QTextFrameFormat* theWrappedObject) const;
   QBrush  borderBrush(QTextFrameFormat* theWrappedObject) const;
   QTextFrameFormat::BorderStyle  borderStyle(QTextFrameFormat* theWrappedObject) const;
   qreal  bottomMargin(QTextFrameFormat* theWrappedObject) const;
   QTextLength  height(QTextFrameFormat* theWrappedObject) const;
   bool  isValid(QTextFrameFormat* theWrappedObject) const;
   qreal  leftMargin(QTextFrameFormat* theWrappedObject) const;
   qreal  margin(QTextFrameFormat* theWrappedObject) const;
   qreal  padding(QTextFrameFormat* theWrappedObject) const;
   QTextFormat::PageBreakFlags  pageBreakPolicy(QTextFrameFormat* theWrappedObject) const;
   QTextFrameFormat::Position  position(QTextFrameFormat* theWrappedObject) const;
   qreal  rightMargin(QTextFrameFormat* theWrappedObject) const;
   void setBorder(QTextFrameFormat* theWrappedObject, qreal  border);
   void setBorderBrush(QTextFrameFormat* theWrappedObject, const QBrush&  brush);
   void setBorderStyle(QTextFrameFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   void setBottomMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setHeight(QTextFrameFormat* theWrappedObject, const QTextLength&  height);
   void setHeight(QTextFrameFormat* theWrappedObject, qreal  height);
   void setLeftMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setPadding(QTextFrameFormat* theWrappedObject, qreal  padding);
   void setPageBreakPolicy(QTextFrameFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags);
   void setPosition(QTextFrameFormat* theWrappedObject, QTextFrameFormat::Position  f);
   void setRightMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setTopMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setWidth(QTextFrameFormat* theWrappedObject, const QTextLength&  length);
   void setWidth(QTextFrameFormat* theWrappedObject, qreal  width);
   qreal  topMargin(QTextFrameFormat* theWrappedObject) const;
   QTextLength  width(QTextFrameFormat* theWrappedObject) const;
};





class PythonQtShell_QTextImageFormat : public QTextImageFormat
{
public:
    PythonQtShell_QTextImageFormat():QTextImageFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextImageFormat(const QTextFormat&  format):QTextImageFormat(format),_wrapper(NULL) {};

   ~PythonQtShell_QTextImageFormat();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextImageFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextImageFormat* new_QTextImageFormat();
QTextImageFormat* new_QTextImageFormat(const QTextFormat&  format);
QTextImageFormat* new_QTextImageFormat(const QTextImageFormat& other) {
PythonQtShell_QTextImageFormat* a = new PythonQtShell_QTextImageFormat();
*((QTextImageFormat*)a) = other;
return a; }
void delete_QTextImageFormat(QTextImageFormat* obj) { delete obj; } 
   qreal  height(QTextImageFormat* theWrappedObject) const;
   bool  isValid(QTextImageFormat* theWrappedObject) const;
   QString  name(QTextImageFormat* theWrappedObject) const;
   void setHeight(QTextImageFormat* theWrappedObject, qreal  height);
   void setName(QTextImageFormat* theWrappedObject, const QString&  name);
   void setWidth(QTextImageFormat* theWrappedObject, qreal  width);
   qreal  width(QTextImageFormat* theWrappedObject) const;
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
   qreal  ascent(QTextInlineObject* theWrappedObject) const;
   qreal  descent(QTextInlineObject* theWrappedObject) const;
   QTextFormat  format(QTextInlineObject* theWrappedObject) const;
   int  formatIndex(QTextInlineObject* theWrappedObject) const;
   qreal  height(QTextInlineObject* theWrappedObject) const;
   bool  isValid(QTextInlineObject* theWrappedObject) const;
   QRectF  rect(QTextInlineObject* theWrappedObject) const;
   void setAscent(QTextInlineObject* theWrappedObject, qreal  a);
   void setDescent(QTextInlineObject* theWrappedObject, qreal  d);
   void setWidth(QTextInlineObject* theWrappedObject, qreal  w);
   Qt::LayoutDirection  textDirection(QTextInlineObject* theWrappedObject) const;
   int  textPosition(QTextInlineObject* theWrappedObject) const;
   qreal  width(QTextInlineObject* theWrappedObject) const;
};





class PythonQtShell_QTextItem : public QTextItem
{
public:
    PythonQtShell_QTextItem():QTextItem(),_wrapper(NULL) {};

   ~PythonQtShell_QTextItem();


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
   qreal  ascent(QTextItem* theWrappedObject) const;
   qreal  descent(QTextItem* theWrappedObject) const;
   QFont  font(QTextItem* theWrappedObject) const;
   QTextItem::RenderFlags  renderFlags(QTextItem* theWrappedObject) const;
   QString  text(QTextItem* theWrappedObject) const;
   qreal  width(QTextItem* theWrappedObject) const;
};





class PythonQtWrapper_QTextLayout : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CursorMode )
enum CursorMode{
  SkipCharacters = QTextLayout::SkipCharacters,   SkipWords = QTextLayout::SkipWords};
public slots:
QTextLayout* new_QTextLayout();
QTextLayout* new_QTextLayout(const QString&  text);
QTextLayout* new_QTextLayout(const QString&  text, const QFont&  font, QPaintDevice*  paintdevice = 0);
QTextLayout* new_QTextLayout(const QTextBlock&  b);
void delete_QTextLayout(QTextLayout* obj) { delete obj; } 
   QList<QTextLayout::FormatRange >  additionalFormats(QTextLayout* theWrappedObject) const;
   void beginLayout(QTextLayout* theWrappedObject);
   QRectF  boundingRect(QTextLayout* theWrappedObject) const;
   bool  cacheEnabled(QTextLayout* theWrappedObject) const;
   void clearAdditionalFormats(QTextLayout* theWrappedObject);
   void clearLayout(QTextLayout* theWrappedObject);
   QTextLine  createLine(QTextLayout* theWrappedObject);
   Qt::CursorMoveStyle  cursorMoveStyle(QTextLayout* theWrappedObject) const;
   void draw(QTextLayout* theWrappedObject, QPainter*  p, const QPointF&  pos, const QVector<QTextLayout::FormatRange >&  selections = QVector<QTextLayout::FormatRange>(), const QRectF&  clip = QRectF()) const;
   void drawCursor(QTextLayout* theWrappedObject, QPainter*  p, const QPointF&  pos, int  cursorPosition) const;
   void drawCursor(QTextLayout* theWrappedObject, QPainter*  p, const QPointF&  pos, int  cursorPosition, int  width) const;
   void endLayout(QTextLayout* theWrappedObject);
   QFont  font(QTextLayout* theWrappedObject) const;
   QList<QGlyphRun >  glyphRuns(QTextLayout* theWrappedObject, int  from = -1, int  length = -1) const;
   bool  isValidCursorPosition(QTextLayout* theWrappedObject, int  pos) const;
   int  leftCursorPosition(QTextLayout* theWrappedObject, int  oldPos) const;
   QTextLine  lineAt(QTextLayout* theWrappedObject, int  i) const;
   int  lineCount(QTextLayout* theWrappedObject) const;
   QTextLine  lineForTextPosition(QTextLayout* theWrappedObject, int  pos) const;
   qreal  maximumWidth(QTextLayout* theWrappedObject) const;
   qreal  minimumWidth(QTextLayout* theWrappedObject) const;
   int  nextCursorPosition(QTextLayout* theWrappedObject, int  oldPos, QTextLayout::CursorMode  mode = QTextLayout::SkipCharacters) const;
   QPointF  position(QTextLayout* theWrappedObject) const;
   int  preeditAreaPosition(QTextLayout* theWrappedObject) const;
   QString  preeditAreaText(QTextLayout* theWrappedObject) const;
   int  previousCursorPosition(QTextLayout* theWrappedObject, int  oldPos, QTextLayout::CursorMode  mode = QTextLayout::SkipCharacters) const;
   int  rightCursorPosition(QTextLayout* theWrappedObject, int  oldPos) const;
   void setAdditionalFormats(QTextLayout* theWrappedObject, const QList<QTextLayout::FormatRange >&  overrides);
   void setCacheEnabled(QTextLayout* theWrappedObject, bool  enable);
   void setCursorMoveStyle(QTextLayout* theWrappedObject, Qt::CursorMoveStyle  style);
   void setFlags(QTextLayout* theWrappedObject, int  flags);
   void setFont(QTextLayout* theWrappedObject, const QFont&  f);
   void setPosition(QTextLayout* theWrappedObject, const QPointF&  p);
   void setPreeditArea(QTextLayout* theWrappedObject, int  position, const QString&  text);
   void setRawFont(QTextLayout* theWrappedObject, const QRawFont&  rawFont);
   void setText(QTextLayout* theWrappedObject, const QString&  string);
   void setTextOption(QTextLayout* theWrappedObject, const QTextOption&  option);
   QString  text(QTextLayout* theWrappedObject) const;
   const QTextOption*  textOption(QTextLayout* theWrappedObject) const;
};





class PythonQtShell_QTextLayout__FormatRange : public QTextLayout::FormatRange
{
public:
    PythonQtShell_QTextLayout__FormatRange():QTextLayout::FormatRange(),_wrapper(NULL) {};

   ~PythonQtShell_QTextLayout__FormatRange();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextLayout__FormatRange : public QObject
{ Q_OBJECT
public:
public slots:
QTextLayout::FormatRange* new_QTextLayout__FormatRange();
QTextLayout::FormatRange* new_QTextLayout__FormatRange(const QTextLayout::FormatRange& other) {
PythonQtShell_QTextLayout__FormatRange* a = new PythonQtShell_QTextLayout__FormatRange();
*((QTextLayout::FormatRange*)a) = other;
return a; }
void delete_QTextLayout__FormatRange(QTextLayout::FormatRange* obj) { delete obj; } 
void py_set_format(QTextLayout::FormatRange* theWrappedObject, QTextCharFormat  format){ theWrappedObject->format = format; }
QTextCharFormat  py_get_format(QTextLayout::FormatRange* theWrappedObject){ return theWrappedObject->format; }
void py_set_length(QTextLayout::FormatRange* theWrappedObject, int  length){ theWrappedObject->length = length; }
int  py_get_length(QTextLayout::FormatRange* theWrappedObject){ return theWrappedObject->length; }
void py_set_start(QTextLayout::FormatRange* theWrappedObject, int  start){ theWrappedObject->start = start; }
int  py_get_start(QTextLayout::FormatRange* theWrappedObject){ return theWrappedObject->start; }
};





class PythonQtWrapper_QTextLine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CursorPosition Edge )
enum CursorPosition{
  CursorBetweenCharacters = QTextLine::CursorBetweenCharacters,   CursorOnCharacter = QTextLine::CursorOnCharacter};
enum Edge{
  Leading = QTextLine::Leading,   Trailing = QTextLine::Trailing};
public slots:
QTextLine* new_QTextLine();
QTextLine* new_QTextLine(const QTextLine& other) {
QTextLine* a = new QTextLine();
*((QTextLine*)a) = other;
return a; }
void delete_QTextLine(QTextLine* obj) { delete obj; } 
   qreal  ascent(QTextLine* theWrappedObject) const;
   qreal  cursorToX(QTextLine* theWrappedObject, int  cursorPos, QTextLine::Edge  edge = QTextLine::Leading) const;
   qreal  descent(QTextLine* theWrappedObject) const;
   void draw(QTextLine* theWrappedObject, QPainter*  p, const QPointF&  point, const QTextLayout::FormatRange*  selection = 0) const;
   QList<QGlyphRun >  glyphRuns(QTextLine* theWrappedObject, int  from = -1, int  length = -1) const;
   qreal  height(QTextLine* theWrappedObject) const;
   qreal  horizontalAdvance(QTextLine* theWrappedObject) const;
   bool  isValid(QTextLine* theWrappedObject) const;
   qreal  leading(QTextLine* theWrappedObject) const;
   bool  leadingIncluded(QTextLine* theWrappedObject) const;
   int  lineNumber(QTextLine* theWrappedObject) const;
   QRectF  naturalTextRect(QTextLine* theWrappedObject) const;
   qreal  naturalTextWidth(QTextLine* theWrappedObject) const;
   QPointF  position(QTextLine* theWrappedObject) const;
   QRectF  rect(QTextLine* theWrappedObject) const;
   void setLeadingIncluded(QTextLine* theWrappedObject, bool  included);
   void setLineWidth(QTextLine* theWrappedObject, qreal  width);
   void setNumColumns(QTextLine* theWrappedObject, int  columns);
   void setNumColumns(QTextLine* theWrappedObject, int  columns, qreal  alignmentWidth);
   void setPosition(QTextLine* theWrappedObject, const QPointF&  pos);
   int  textLength(QTextLine* theWrappedObject) const;
   int  textStart(QTextLine* theWrappedObject) const;
   qreal  width(QTextLine* theWrappedObject) const;
   qreal  x(QTextLine* theWrappedObject) const;
   int  xToCursor(QTextLine* theWrappedObject, qreal  x, QTextLine::CursorPosition  arg__2 = QTextLine::CursorBetweenCharacters) const;
   qreal  y(QTextLine* theWrappedObject) const;
};





class PythonQtShell_QTextList : public QTextList
{
public:
    PythonQtShell_QTextList(QTextDocument*  doc):QTextList(doc),_wrapper(NULL) {};

   ~PythonQtShell_QTextList();

virtual void blockFormatChanged(const QTextBlock&  block);
virtual void blockInserted(const QTextBlock&  block);
virtual void blockRemoved(const QTextBlock&  block);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextList : public QObject
{ Q_OBJECT
public:
public slots:
QTextList* new_QTextList(QTextDocument*  doc);
void delete_QTextList(QTextList* obj) { delete obj; } 
   void add(QTextList* theWrappedObject, const QTextBlock&  block);
   int  count(QTextList* theWrappedObject) const;
   QTextListFormat  format(QTextList* theWrappedObject) const;
   QTextBlock  item(QTextList* theWrappedObject, int  i) const;
   int  itemNumber(QTextList* theWrappedObject, const QTextBlock&  arg__1) const;
   QString  itemText(QTextList* theWrappedObject, const QTextBlock&  arg__1) const;
   void remove(QTextList* theWrappedObject, const QTextBlock&  arg__1);
   void removeItem(QTextList* theWrappedObject, int  i);
   void setFormat(QTextList* theWrappedObject, const QTextListFormat&  format);
};





class PythonQtShell_QTextListFormat : public QTextListFormat
{
public:
    PythonQtShell_QTextListFormat():QTextListFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextListFormat(const QTextFormat&  fmt):QTextListFormat(fmt),_wrapper(NULL) {};

   ~PythonQtShell_QTextListFormat();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextListFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Style )
enum Style{
  ListDisc = QTextListFormat::ListDisc,   ListCircle = QTextListFormat::ListCircle,   ListSquare = QTextListFormat::ListSquare,   ListDecimal = QTextListFormat::ListDecimal,   ListLowerAlpha = QTextListFormat::ListLowerAlpha,   ListUpperAlpha = QTextListFormat::ListUpperAlpha,   ListLowerRoman = QTextListFormat::ListLowerRoman,   ListUpperRoman = QTextListFormat::ListUpperRoman,   ListStyleUndefined = QTextListFormat::ListStyleUndefined};
public slots:
QTextListFormat* new_QTextListFormat();
QTextListFormat* new_QTextListFormat(const QTextFormat&  fmt);
QTextListFormat* new_QTextListFormat(const QTextListFormat& other) {
PythonQtShell_QTextListFormat* a = new PythonQtShell_QTextListFormat();
*((QTextListFormat*)a) = other;
return a; }
void delete_QTextListFormat(QTextListFormat* obj) { delete obj; } 
   int  indent(QTextListFormat* theWrappedObject) const;
   bool  isValid(QTextListFormat* theWrappedObject) const;
   QString  numberPrefix(QTextListFormat* theWrappedObject) const;
   QString  numberSuffix(QTextListFormat* theWrappedObject) const;
   void setIndent(QTextListFormat* theWrappedObject, int  indent);
   void setNumberPrefix(QTextListFormat* theWrappedObject, const QString&  numberPrefix);
   void setNumberSuffix(QTextListFormat* theWrappedObject, const QString&  numberSuffix);
   void setStyle(QTextListFormat* theWrappedObject, QTextListFormat::Style  style);
   QTextListFormat::Style  style(QTextListFormat* theWrappedObject) const;
};





class PythonQtShell_QTextObject : public QTextObject
{
public:
    PythonQtShell_QTextObject(QTextDocument*  doc):QTextObject(doc),_wrapper(NULL) {};

   ~PythonQtShell_QTextObject();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextObject : public QTextObject
{ public:
inline void promoted_setFormat(const QTextFormat&  format) { QTextObject::setFormat(format); }
};

class PythonQtWrapper_QTextObject : public QObject
{ Q_OBJECT
public:
public slots:
QTextObject* new_QTextObject(QTextDocument*  doc);
   QTextDocument*  document(QTextObject* theWrappedObject) const;
   QTextFormat  format(QTextObject* theWrappedObject) const;
   int  formatIndex(QTextObject* theWrappedObject) const;
   int  objectIndex(QTextObject* theWrappedObject) const;
   void setFormat(QTextObject* theWrappedObject, const QTextFormat&  format);
};


