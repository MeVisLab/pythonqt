#include <PythonQt.h>
#include <QItemSelection>
#include <QObject>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qapplication.h>
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
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlineedit.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregexp.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizegrip.h>
#include <qsizepolicy.h>
#include <qslider.h>
#include <qsortfilterproxymodel.h>
#include <qspinbox.h>
#include <qsplashscreen.h>
#include <qsplitter.h>
#include <qstackedlayout.h>
#include <qstackedwidget.h>
#include <qstandarditemmodel.h>
#include <qstatictext.h>
#include <qstatusbar.h>
#include <qstringlist.h>
#include <qstringlistmodel.h>
#include <qstyle.h>
#include <qstylefactory.h>
#include <qstylehints.h>
#include <qstyleoption.h>
#include <qtextoption.h>
#include <qtextstream.h>
#include <qtransform.h>
#include <qvector.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QSizeGrip : public QSizeGrip
{
public:
    PythonQtShell_QSizeGrip(QWidget*  parent):QSizeGrip(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSizeGrip();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  hideEvent);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  mouseEvent);
virtual void moveEvent(QMoveEvent*  moveEvent);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  showEvent);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSizeGrip : public QSizeGrip
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return this->eventFilter(arg__1, arg__2); }
inline void promoted_hideEvent(QHideEvent*  hideEvent) { this->hideEvent(hideEvent); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  mouseEvent) { this->mouseReleaseEvent(mouseEvent); }
inline void promoted_moveEvent(QMoveEvent*  moveEvent) { this->moveEvent(moveEvent); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  showEvent) { this->showEvent(showEvent); }
inline bool  py_q_event(QEvent*  arg__1) { return QSizeGrip::event(arg__1); }
inline bool  py_q_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QSizeGrip::eventFilter(arg__1, arg__2); }
inline void py_q_hideEvent(QHideEvent*  hideEvent) { QSizeGrip::hideEvent(hideEvent); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QSizeGrip::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QSizeGrip::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  mouseEvent) { QSizeGrip::mouseReleaseEvent(mouseEvent); }
inline void py_q_moveEvent(QMoveEvent*  moveEvent) { QSizeGrip::moveEvent(moveEvent); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QSizeGrip::paintEvent(arg__1); }
inline void py_q_setVisible(bool  arg__1) { QSizeGrip::setVisible(arg__1); }
inline void py_q_showEvent(QShowEvent*  showEvent) { QSizeGrip::showEvent(showEvent); }
inline QSize  py_q_sizeHint() const { return QSizeGrip::sizeHint(); }
};

class PythonQtWrapper_QSizeGrip : public QObject
{ Q_OBJECT
public:
public slots:
QSizeGrip* new_QSizeGrip(QWidget*  parent);
void delete_QSizeGrip(QSizeGrip* obj) { delete obj; } 
   bool  py_q_event(QSizeGrip* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_event(arg__1));}
   bool  py_q_eventFilter(QSizeGrip* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_eventFilter(arg__1, arg__2));}
   void py_q_hideEvent(QSizeGrip* theWrappedObject, QHideEvent*  hideEvent){  (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_hideEvent(hideEvent));}
   void py_q_mouseMoveEvent(QSizeGrip* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QSizeGrip* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QSizeGrip* theWrappedObject, QMouseEvent*  mouseEvent){  (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_mouseReleaseEvent(mouseEvent));}
   void py_q_moveEvent(QSizeGrip* theWrappedObject, QMoveEvent*  moveEvent){  (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_moveEvent(moveEvent));}
   void py_q_paintEvent(QSizeGrip* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void py_q_setVisible(QSizeGrip* theWrappedObject, bool  arg__1){  (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_setVisible(arg__1));}
   void py_q_showEvent(QSizeGrip* theWrappedObject, QShowEvent*  showEvent){  (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_showEvent(showEvent));}
   QSize  sizeHint(QSizeGrip* theWrappedObject) const;
   QSize  py_q_sizeHint(QSizeGrip* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->py_q_sizeHint());}
};





class PythonQtShell_QSlider : public QSlider
{
public:
    PythonQtShell_QSlider(QWidget*  parent = nullptr):QSlider(parent),_wrapper(NULL) {};
    PythonQtShell_QSlider(Qt::Orientation  orientation, QWidget*  parent = nullptr):QSlider(orientation, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSlider();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  ev);
virtual void mousePressEvent(QMouseEvent*  ev);
virtual void mouseReleaseEvent(QMouseEvent*  ev);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  ev);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void sliderChange(QAbstractSlider::SliderChange  change);
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSlider : public QSlider
{ public:
inline void promoted_initStyleOption(QStyleOptionSlider*  option) const { this->initStyleOption(option); }
inline void promoted_mouseMoveEvent(QMouseEvent*  ev) { this->mouseMoveEvent(ev); }
inline void promoted_mousePressEvent(QMouseEvent*  ev) { this->mousePressEvent(ev); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  ev) { this->mouseReleaseEvent(ev); }
inline void promoted_paintEvent(QPaintEvent*  ev) { this->paintEvent(ev); }
inline bool  py_q_event(QEvent*  event) { return QSlider::event(event); }
inline QSize  py_q_minimumSizeHint() const { return QSlider::minimumSizeHint(); }
inline void py_q_mouseMoveEvent(QMouseEvent*  ev) { QSlider::mouseMoveEvent(ev); }
inline void py_q_mousePressEvent(QMouseEvent*  ev) { QSlider::mousePressEvent(ev); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  ev) { QSlider::mouseReleaseEvent(ev); }
inline void py_q_paintEvent(QPaintEvent*  ev) { QSlider::paintEvent(ev); }
inline QSize  py_q_sizeHint() const { return QSlider::sizeHint(); }
};

class PythonQtWrapper_QSlider : public QObject
{ Q_OBJECT
public:
public slots:
QSlider* new_QSlider(QWidget*  parent = nullptr);
QSlider* new_QSlider(Qt::Orientation  orientation, QWidget*  parent = nullptr);
void delete_QSlider(QSlider* obj) { delete obj; } 
   bool  py_q_event(QSlider* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QSlider*)theWrappedObject)->py_q_event(event));}
   void initStyleOption(QSlider* theWrappedObject, QStyleOptionSlider*  option) const;
   QSize  minimumSizeHint(QSlider* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QSlider* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSlider*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseMoveEvent(QSlider* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QSlider*)theWrappedObject)->py_q_mouseMoveEvent(ev));}
   void py_q_mousePressEvent(QSlider* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QSlider*)theWrappedObject)->py_q_mousePressEvent(ev));}
   void py_q_mouseReleaseEvent(QSlider* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QSlider*)theWrappedObject)->py_q_mouseReleaseEvent(ev));}
   void py_q_paintEvent(QSlider* theWrappedObject, QPaintEvent*  ev){  (((PythonQtPublicPromoter_QSlider*)theWrappedObject)->py_q_paintEvent(ev));}
   void setTickInterval(QSlider* theWrappedObject, int  ti);
   void setTickPosition(QSlider* theWrappedObject, QSlider::TickPosition  position);
   QSize  sizeHint(QSlider* theWrappedObject) const;
   QSize  py_q_sizeHint(QSlider* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSlider*)theWrappedObject)->py_q_sizeHint());}
   int  tickInterval(QSlider* theWrappedObject) const;
   QSlider::TickPosition  tickPosition(QSlider* theWrappedObject) const;
};





class PythonQtShell_QSortFilterProxyModel : public QSortFilterProxyModel
{
public:
    PythonQtShell_QSortFilterProxyModel(QObject*  parent = nullptr):QSortFilterProxyModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSortFilterProxyModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual void childEvent(QChildEvent*  event);
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual void customEvent(QEvent*  event);
virtual QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void fetchMore(const QModelIndex&  parent);
virtual bool  filterAcceptsColumn(int  source_column, const QModelIndex&  source_parent) const;
virtual bool  filterAcceptsRow(int  source_row, const QModelIndex&  source_parent) const;
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual bool  lessThan(const QModelIndex&  source_left, const QModelIndex&  source_right) const;
virtual QModelIndex  mapFromSource(const QModelIndex&  sourceIndex) const;
virtual QItemSelection  mapSelectionFromSource(const QItemSelection&  sourceSelection) const;
virtual QItemSelection  mapSelectionToSource(const QItemSelection&  proxySelection) const;
virtual QModelIndex  mapToSource(const QModelIndex&  proxyIndex) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual QStringList  mimeTypes() const;
virtual bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual QModelIndex  parent(const QModelIndex&  child) const;
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual void revert();
virtual QHash<int , QByteArray >  roleNames() const;
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual void setSourceModel(QAbstractItemModel*  sourceModel);
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;
virtual void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDragActions() const;
virtual Qt::DropActions  supportedDropActions() const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSortFilterProxyModel : public QSortFilterProxyModel
{ public:
inline bool  promoted_filterAcceptsColumn(int  source_column, const QModelIndex&  source_parent) const { return this->filterAcceptsColumn(source_column, source_parent); }
inline bool  promoted_filterAcceptsRow(int  source_row, const QModelIndex&  source_parent) const { return this->filterAcceptsRow(source_row, source_parent); }
inline void promoted_invalidateFilter() { this->invalidateFilter(); }
inline bool  promoted_lessThan(const QModelIndex&  source_left, const QModelIndex&  source_right) const { return this->lessThan(source_left, source_right); }
inline QModelIndex  py_q_buddy(const QModelIndex&  index) const { return QSortFilterProxyModel::buddy(index); }
inline bool  py_q_canFetchMore(const QModelIndex&  parent) const { return QSortFilterProxyModel::canFetchMore(parent); }
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QSortFilterProxyModel::columnCount(parent); }
inline QVariant  py_q_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return QSortFilterProxyModel::data(index, role); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QSortFilterProxyModel::dropMimeData(data, action, row, column, parent); }
inline void py_q_fetchMore(const QModelIndex&  parent) { QSortFilterProxyModel::fetchMore(parent); }
inline bool  py_q_filterAcceptsColumn(int  source_column, const QModelIndex&  source_parent) const { return QSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent); }
inline bool  py_q_filterAcceptsRow(int  source_row, const QModelIndex&  source_parent) const { return QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QSortFilterProxyModel::flags(index); }
inline bool  py_q_hasChildren(const QModelIndex&  parent = QModelIndex()) const { return QSortFilterProxyModel::hasChildren(parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QSortFilterProxyModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QSortFilterProxyModel::index(row, column, parent); }
inline bool  py_q_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QSortFilterProxyModel::insertColumns(column, count, parent); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QSortFilterProxyModel::insertRows(row, count, parent); }
inline bool  py_q_lessThan(const QModelIndex&  source_left, const QModelIndex&  source_right) const { return QSortFilterProxyModel::lessThan(source_left, source_right); }
inline QModelIndex  py_q_mapFromSource(const QModelIndex&  sourceIndex) const { return QSortFilterProxyModel::mapFromSource(sourceIndex); }
inline QItemSelection  py_q_mapSelectionFromSource(const QItemSelection&  sourceSelection) const { return QSortFilterProxyModel::mapSelectionFromSource(sourceSelection); }
inline QItemSelection  py_q_mapSelectionToSource(const QItemSelection&  proxySelection) const { return QSortFilterProxyModel::mapSelectionToSource(proxySelection); }
inline QModelIndex  py_q_mapToSource(const QModelIndex&  proxyIndex) const { return QSortFilterProxyModel::mapToSource(proxyIndex); }
inline QList<QModelIndex >  py_q_match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { return QSortFilterProxyModel::match(start, role, value, hits, flags); }
inline QMimeData*  py_q_mimeData(const QList<QModelIndex >&  indexes) const { return QSortFilterProxyModel::mimeData(indexes); }
inline QStringList  py_q_mimeTypes() const { return QSortFilterProxyModel::mimeTypes(); }
inline QModelIndex  py_q_parent(const QModelIndex&  child) const { return QSortFilterProxyModel::parent(child); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QSortFilterProxyModel::removeColumns(column, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QSortFilterProxyModel::removeRows(row, count, parent); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QSortFilterProxyModel::rowCount(parent); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QSortFilterProxyModel::setData(index, value, role); }
inline bool  py_q_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QSortFilterProxyModel::setHeaderData(section, orientation, value, role); }
inline void py_q_setSourceModel(QAbstractItemModel*  sourceModel) { QSortFilterProxyModel::setSourceModel(sourceModel); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QSortFilterProxyModel::sibling(row, column, idx); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QSortFilterProxyModel::sort(column, order); }
inline QSize  py_q_span(const QModelIndex&  index) const { return QSortFilterProxyModel::span(index); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QSortFilterProxyModel::supportedDropActions(); }
};

class PythonQtWrapper_QSortFilterProxyModel : public QObject
{ Q_OBJECT
public:
public slots:
QSortFilterProxyModel* new_QSortFilterProxyModel(QObject*  parent = nullptr);
void delete_QSortFilterProxyModel(QSortFilterProxyModel* obj) { delete obj; } 
   QModelIndex  py_q_buddy(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_buddy(index));}
   bool  py_q_canFetchMore(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  parent) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_canFetchMore(parent));}
   int  py_q_columnCount(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_columnCount(parent));}
   QVariant  py_q_data(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_data(index, role));}
   bool  py_q_dropMimeData(QSortFilterProxyModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   bool  dynamicSortFilter(QSortFilterProxyModel* theWrappedObject) const;
   void py_q_fetchMore(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  parent){  (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_fetchMore(parent));}
   bool  filterAcceptsColumn(QSortFilterProxyModel* theWrappedObject, int  source_column, const QModelIndex&  source_parent) const;
   bool  py_q_filterAcceptsColumn(QSortFilterProxyModel* theWrappedObject, int  source_column, const QModelIndex&  source_parent) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_filterAcceptsColumn(source_column, source_parent));}
   bool  filterAcceptsRow(QSortFilterProxyModel* theWrappedObject, int  source_row, const QModelIndex&  source_parent) const;
   bool  py_q_filterAcceptsRow(QSortFilterProxyModel* theWrappedObject, int  source_row, const QModelIndex&  source_parent) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_filterAcceptsRow(source_row, source_parent));}
   Qt::CaseSensitivity  filterCaseSensitivity(QSortFilterProxyModel* theWrappedObject) const;
   int  filterKeyColumn(QSortFilterProxyModel* theWrappedObject) const;
   QRegExp  filterRegExp(QSortFilterProxyModel* theWrappedObject) const;
   int  filterRole(QSortFilterProxyModel* theWrappedObject) const;
   Qt::ItemFlags  py_q_flags(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_flags(index));}
   bool  py_q_hasChildren(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_hasChildren(parent));}
   QVariant  py_q_headerData(QSortFilterProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QModelIndex  py_q_index(QSortFilterProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_index(row, column, parent));}
   bool  py_q_insertColumns(QSortFilterProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_insertColumns(column, count, parent));}
   bool  py_q_insertRows(QSortFilterProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   void invalidateFilter(QSortFilterProxyModel* theWrappedObject);
   bool  isRecursiveFilteringEnabled(QSortFilterProxyModel* theWrappedObject) const;
   bool  isSortLocaleAware(QSortFilterProxyModel* theWrappedObject) const;
   bool  lessThan(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  source_left, const QModelIndex&  source_right) const;
   bool  py_q_lessThan(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  source_left, const QModelIndex&  source_right) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_lessThan(source_left, source_right));}
   QModelIndex  py_q_mapFromSource(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  sourceIndex) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_mapFromSource(sourceIndex));}
   QItemSelection  py_q_mapSelectionFromSource(QSortFilterProxyModel* theWrappedObject, const QItemSelection&  sourceSelection) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_mapSelectionFromSource(sourceSelection));}
   QItemSelection  py_q_mapSelectionToSource(QSortFilterProxyModel* theWrappedObject, const QItemSelection&  proxySelection) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_mapSelectionToSource(proxySelection));}
   QModelIndex  py_q_mapToSource(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  proxyIndex) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_mapToSource(proxyIndex));}
   QList<QModelIndex >  py_q_match(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_match(start, role, value, hits, flags));}
   QMimeData*  py_q_mimeData(QSortFilterProxyModel* theWrappedObject, const QList<QModelIndex >&  indexes) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_mimeData(indexes));}
   QStringList  py_q_mimeTypes(QSortFilterProxyModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_mimeTypes());}
   QModelIndex  py_q_parent(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  child) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_parent(child));}
   bool  py_q_removeColumns(QSortFilterProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   bool  py_q_removeRows(QSortFilterProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   int  py_q_rowCount(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_rowCount(parent));}
   bool  py_q_setData(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_setData(index, value, role));}
   void setDynamicSortFilter(QSortFilterProxyModel* theWrappedObject, bool  enable);
   void setFilterCaseSensitivity(QSortFilterProxyModel* theWrappedObject, Qt::CaseSensitivity  cs);
   void setFilterKeyColumn(QSortFilterProxyModel* theWrappedObject, int  column);
   void setFilterRegExp(QSortFilterProxyModel* theWrappedObject, const QRegExp&  regExp);
   void setFilterRole(QSortFilterProxyModel* theWrappedObject, int  role);
   bool  py_q_setHeaderData(QSortFilterProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_setHeaderData(section, orientation, value, role));}
   void setRecursiveFilteringEnabled(QSortFilterProxyModel* theWrappedObject, bool  recursive);
   void setSortCaseSensitivity(QSortFilterProxyModel* theWrappedObject, Qt::CaseSensitivity  cs);
   void setSortLocaleAware(QSortFilterProxyModel* theWrappedObject, bool  on);
   void setSortRole(QSortFilterProxyModel* theWrappedObject, int  role);
   void py_q_setSourceModel(QSortFilterProxyModel* theWrappedObject, QAbstractItemModel*  sourceModel){  (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_setSourceModel(sourceModel));}
   QModelIndex  py_q_sibling(QSortFilterProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
   void py_q_sort(QSortFilterProxyModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_sort(column, order));}
   Qt::CaseSensitivity  sortCaseSensitivity(QSortFilterProxyModel* theWrappedObject) const;
   int  sortColumn(QSortFilterProxyModel* theWrappedObject) const;
   Qt::SortOrder  sortOrder(QSortFilterProxyModel* theWrappedObject) const;
   int  sortRole(QSortFilterProxyModel* theWrappedObject) const;
   QSize  py_q_span(QSortFilterProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_span(index));}
   Qt::DropActions  py_q_supportedDropActions(QSortFilterProxyModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSortFilterProxyModel*)theWrappedObject)->py_q_supportedDropActions());}
};





class PythonQtShell_QSpacerItem : public QSpacerItem
{
public:
    PythonQtShell_QSpacerItem(int  w, int  h, QSizePolicy::Policy  hData = QSizePolicy::Minimum, QSizePolicy::Policy  vData = QSizePolicy::Minimum):QSpacerItem(w, h, hData, vData),_wrapper(NULL) {};

   ~PythonQtShell_QSpacerItem();

virtual QSizePolicy::ControlTypes  controlTypes() const;
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QSize  sizeHint() const;
virtual QSpacerItem*  spacerItem();
virtual QWidget*  widget();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSpacerItem : public QSpacerItem
{ public:
inline Qt::Orientations  py_q_expandingDirections() const { return QSpacerItem::expandingDirections(); }
inline QRect  py_q_geometry() const { return QSpacerItem::geometry(); }
inline bool  py_q_isEmpty() const { return QSpacerItem::isEmpty(); }
inline QSize  py_q_maximumSize() const { return QSpacerItem::maximumSize(); }
inline QSize  py_q_minimumSize() const { return QSpacerItem::minimumSize(); }
inline void py_q_setGeometry(const QRect&  arg__1) { QSpacerItem::setGeometry(arg__1); }
inline QSize  py_q_sizeHint() const { return QSpacerItem::sizeHint(); }
inline QSpacerItem*  py_q_spacerItem() { return QSpacerItem::spacerItem(); }
};

class PythonQtWrapper_QSpacerItem : public QObject
{ Q_OBJECT
public:
public slots:
QSpacerItem* new_QSpacerItem(int  w, int  h, QSizePolicy::Policy  hData = QSizePolicy::Minimum, QSizePolicy::Policy  vData = QSizePolicy::Minimum);
void delete_QSpacerItem(QSpacerItem* obj) { delete obj; } 
   void changeSize(QSpacerItem* theWrappedObject, int  w, int  h, QSizePolicy::Policy  hData = QSizePolicy::Minimum, QSizePolicy::Policy  vData = QSizePolicy::Minimum);
   Qt::Orientations  py_q_expandingDirections(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_expandingDirections());}
   QRect  py_q_geometry(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_geometry());}
   bool  py_q_isEmpty(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_isEmpty());}
   QSize  py_q_maximumSize(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_maximumSize());}
   QSize  py_q_minimumSize(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_minimumSize());}
   void py_q_setGeometry(QSpacerItem* theWrappedObject, const QRect&  arg__1){  (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_setGeometry(arg__1));}
   QSize  py_q_sizeHint(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_sizeHint());}
   QSizePolicy  sizePolicy(QSpacerItem* theWrappedObject) const;
   QSpacerItem*  py_q_spacerItem(QSpacerItem* theWrappedObject){  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_spacerItem());}
    bool __nonzero__(QSpacerItem* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QSpinBox : public QSpinBox
{
public:
    PythonQtShell_QSpinBox(QWidget*  parent = nullptr):QSpinBox(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSpinBox();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
virtual void clear();
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void fixup(QString&  str) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void stepBy(int  steps);
virtual QAbstractSpinBox::StepEnabled  stepEnabled() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual QString  textFromValue(int  val) const;
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual int  valueFromText(const QString&  text) const;
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSpinBox : public QSpinBox
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_fixup(QString&  str) const { this->fixup(str); }
inline QString  promoted_textFromValue(int  val) const { return this->textFromValue(val); }
inline QValidator::State  promoted_validate(QString&  input, int&  pos) const { return this->validate(input, pos); }
inline int  promoted_valueFromText(const QString&  text) const { return this->valueFromText(text); }
inline bool  py_q_event(QEvent*  event) { return QSpinBox::event(event); }
inline void py_q_fixup(QString&  str) const { QSpinBox::fixup(str); }
inline QString  py_q_textFromValue(int  val) const { return QSpinBox::textFromValue(val); }
inline QValidator::State  py_q_validate(QString&  input, int&  pos) const { return QSpinBox::validate(input, pos); }
inline int  py_q_valueFromText(const QString&  text) const { return QSpinBox::valueFromText(text); }
};

class PythonQtWrapper_QSpinBox : public QObject
{ Q_OBJECT
public:
public slots:
QSpinBox* new_QSpinBox(QWidget*  parent = nullptr);
void delete_QSpinBox(QSpinBox* obj) { delete obj; } 
   QString  cleanText(QSpinBox* theWrappedObject) const;
   int  displayIntegerBase(QSpinBox* theWrappedObject) const;
   bool  py_q_event(QSpinBox* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QSpinBox*)theWrappedObject)->py_q_event(event));}
   void py_q_fixup(QSpinBox* theWrappedObject, QString&  str) const{  (((PythonQtPublicPromoter_QSpinBox*)theWrappedObject)->py_q_fixup(str));}
   int  maximum(QSpinBox* theWrappedObject) const;
   int  minimum(QSpinBox* theWrappedObject) const;
   QString  prefix(QSpinBox* theWrappedObject) const;
   void setDisplayIntegerBase(QSpinBox* theWrappedObject, int  base);
   void setMaximum(QSpinBox* theWrappedObject, int  max);
   void setMinimum(QSpinBox* theWrappedObject, int  min);
   void setPrefix(QSpinBox* theWrappedObject, const QString&  prefix);
   void setRange(QSpinBox* theWrappedObject, int  min, int  max);
   void setSingleStep(QSpinBox* theWrappedObject, int  val);
   void setSuffix(QSpinBox* theWrappedObject, const QString&  suffix);
   int  singleStep(QSpinBox* theWrappedObject) const;
   QString  suffix(QSpinBox* theWrappedObject) const;
   QString  textFromValue(QSpinBox* theWrappedObject, int  val) const;
   QString  py_q_textFromValue(QSpinBox* theWrappedObject, int  val) const{  return (((PythonQtPublicPromoter_QSpinBox*)theWrappedObject)->py_q_textFromValue(val));}
   QValidator::State  py_q_validate(QSpinBox* theWrappedObject, QString&  input, int&  pos) const{  return (((PythonQtPublicPromoter_QSpinBox*)theWrappedObject)->py_q_validate(input, pos));}
   int  value(QSpinBox* theWrappedObject) const;
   int  valueFromText(QSpinBox* theWrappedObject, const QString&  text) const;
   int  py_q_valueFromText(QSpinBox* theWrappedObject, const QString&  text) const{  return (((PythonQtPublicPromoter_QSpinBox*)theWrappedObject)->py_q_valueFromText(text));}
};





class PythonQtShell_QSplashScreen : public QSplashScreen
{
public:
    PythonQtShell_QSplashScreen(QWidget*  parent, const QPixmap&  pixmap = QPixmap(), Qt::WindowFlags  f = Qt::WindowFlags()):QSplashScreen(parent, pixmap, f),_wrapper(NULL) {};
    PythonQtShell_QSplashScreen(const QPixmap&  pixmap = QPixmap(), Qt::WindowFlags  f = Qt::WindowFlags()):QSplashScreen(pixmap, f),_wrapper(NULL) {};

   ~PythonQtShell_QSplashScreen();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void drawContents(QPainter*  painter);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSplashScreen : public QSplashScreen
{ public:
inline void promoted_drawContents(QPainter*  painter) { this->drawContents(painter); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void py_q_drawContents(QPainter*  painter) { QSplashScreen::drawContents(painter); }
inline bool  py_q_event(QEvent*  e) { return QSplashScreen::event(e); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QSplashScreen::mousePressEvent(arg__1); }
};

class PythonQtWrapper_QSplashScreen : public QObject
{ Q_OBJECT
public:
public slots:
QSplashScreen* new_QSplashScreen(QWidget*  parent, const QPixmap&  pixmap = QPixmap(), Qt::WindowFlags  f = Qt::WindowFlags());
QSplashScreen* new_QSplashScreen(const QPixmap&  pixmap = QPixmap(), Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QSplashScreen(QSplashScreen* obj) { delete obj; } 
   void drawContents(QSplashScreen* theWrappedObject, QPainter*  painter);
   void py_q_drawContents(QSplashScreen* theWrappedObject, QPainter*  painter){  (((PythonQtPublicPromoter_QSplashScreen*)theWrappedObject)->py_q_drawContents(painter));}
   bool  py_q_event(QSplashScreen* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QSplashScreen*)theWrappedObject)->py_q_event(e));}
   void finish(QSplashScreen* theWrappedObject, QWidget*  w);
   QString  message(QSplashScreen* theWrappedObject) const;
   void py_q_mousePressEvent(QSplashScreen* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QSplashScreen*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   const QPixmap  pixmap(QSplashScreen* theWrappedObject) const;
   void setPixmap(QSplashScreen* theWrappedObject, const QPixmap&  pixmap);
};





class PythonQtShell_QSplitter : public QSplitter
{
public:
    PythonQtShell_QSplitter(QWidget*  parent = nullptr):QSplitter(parent),_wrapper(NULL) {};
    PythonQtShell_QSplitter(Qt::Orientation  arg__1, QWidget*  parent = nullptr):QSplitter(arg__1, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSplitter();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual QSplitterHandle*  createHandle();
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSplitter : public QSplitter
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline void promoted_childEvent(QChildEvent*  arg__1) { this->childEvent(arg__1); }
inline int  promoted_closestLegalPosition(int  arg__1, int  arg__2) { return this->closestLegalPosition(arg__1, arg__2); }
inline QSplitterHandle*  promoted_createHandle() { return this->createHandle(); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_moveSplitter(int  pos, int  index) { this->moveSplitter(pos, index); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_setRubberBand(int  position) { this->setRubberBand(position); }
inline void py_q_changeEvent(QEvent*  arg__1) { QSplitter::changeEvent(arg__1); }
inline void py_q_childEvent(QChildEvent*  arg__1) { QSplitter::childEvent(arg__1); }
inline QSplitterHandle*  py_q_createHandle() { return QSplitter::createHandle(); }
inline bool  py_q_event(QEvent*  arg__1) { return QSplitter::event(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QSplitter::minimumSizeHint(); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QSplitter::resizeEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QSplitter::sizeHint(); }
};

class PythonQtWrapper_QSplitter : public QObject
{ Q_OBJECT
public:
public slots:
QSplitter* new_QSplitter(QWidget*  parent = nullptr);
QSplitter* new_QSplitter(Qt::Orientation  arg__1, QWidget*  parent = nullptr);
void delete_QSplitter(QSplitter* obj) { delete obj; } 
   void addWidget(QSplitter* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void py_q_changeEvent(QSplitter* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_changeEvent(arg__1));}
   void py_q_childEvent(QSplitter* theWrappedObject, QChildEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_childEvent(arg__1));}
   bool  childrenCollapsible(QSplitter* theWrappedObject) const;
   int  closestLegalPosition(QSplitter* theWrappedObject, int  arg__1, int  arg__2);
   int  count(QSplitter* theWrappedObject) const;
   QSplitterHandle*  createHandle(QSplitter* theWrappedObject);
   QSplitterHandle*  py_q_createHandle(QSplitter* theWrappedObject){  return (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_createHandle());}
   bool  py_q_event(QSplitter* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_event(arg__1));}
   QSplitterHandle*  handle(QSplitter* theWrappedObject, int  index) const;
   int  handleWidth(QSplitter* theWrappedObject) const;
   int  indexOf(QSplitter* theWrappedObject, QWidget*  w) const;
   void insertWidget(QSplitter* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   bool  isCollapsible(QSplitter* theWrappedObject, int  index) const;
   QSize  minimumSizeHint(QSplitter* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QSplitter* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_minimumSizeHint());}
   void moveSplitter(QSplitter* theWrappedObject, int  pos, int  index);
   bool  opaqueResize(QSplitter* theWrappedObject) const;
   void writeTo(QSplitter* theWrappedObject, QTextStream&  arg__1);
   void readFrom(QSplitter* theWrappedObject, QTextStream&  arg__1);
   Qt::Orientation  orientation(QSplitter* theWrappedObject) const;
   void refresh(QSplitter* theWrappedObject);
   QWidget*  replaceWidget(QSplitter* theWrappedObject, int  index, QWidget*  widget);
   void py_q_resizeEvent(QSplitter* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   bool  restoreState(QSplitter* theWrappedObject, const QByteArray&  state);
   QByteArray  saveState(QSplitter* theWrappedObject) const;
   void setChildrenCollapsible(QSplitter* theWrappedObject, bool  arg__1);
   void setCollapsible(QSplitter* theWrappedObject, int  index, bool  arg__2);
   void setHandleWidth(QSplitter* theWrappedObject, int  arg__1);
   void setOpaqueResize(QSplitter* theWrappedObject, bool  opaque = true);
   void setOrientation(QSplitter* theWrappedObject, Qt::Orientation  arg__1);
   void setRubberBand(QSplitter* theWrappedObject, int  position);
   void setSizes(QSplitter* theWrappedObject, const QList<int >&  list);
   void setStretchFactor(QSplitter* theWrappedObject, int  index, int  stretch);
   QSize  py_q_sizeHint(QSplitter* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSplitter*)theWrappedObject)->py_q_sizeHint());}
   QList<int >  sizes(QSplitter* theWrappedObject) const;
   QWidget*  widget(QSplitter* theWrappedObject, int  index) const;
};





class PythonQtShell_QSplitterHandle : public QSplitterHandle
{
public:
    PythonQtShell_QSplitterHandle(Qt::Orientation  o, QSplitter*  parent):QSplitterHandle(o, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSplitterHandle();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSplitterHandle : public QSplitterHandle
{ public:
inline int  promoted_closestLegalPosition(int  p) { return this->closestLegalPosition(p); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_moveSplitter(int  p) { this->moveSplitter(p); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QSplitterHandle::event(arg__1); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QSplitterHandle::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QSplitterHandle::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QSplitterHandle::mouseReleaseEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QSplitterHandle::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QSplitterHandle::resizeEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QSplitterHandle::sizeHint(); }
};

class PythonQtWrapper_QSplitterHandle : public QObject
{ Q_OBJECT
public:
public slots:
QSplitterHandle* new_QSplitterHandle(Qt::Orientation  o, QSplitter*  parent);
void delete_QSplitterHandle(QSplitterHandle* obj) { delete obj; } 
   int  closestLegalPosition(QSplitterHandle* theWrappedObject, int  p);
   bool  py_q_event(QSplitterHandle* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_event(arg__1));}
   void py_q_mouseMoveEvent(QSplitterHandle* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QSplitterHandle* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QSplitterHandle* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void moveSplitter(QSplitterHandle* theWrappedObject, int  p);
   bool  opaqueResize(QSplitterHandle* theWrappedObject) const;
   Qt::Orientation  orientation(QSplitterHandle* theWrappedObject) const;
   void py_q_paintEvent(QSplitterHandle* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void py_q_resizeEvent(QSplitterHandle* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   void setOrientation(QSplitterHandle* theWrappedObject, Qt::Orientation  o);
   QSize  sizeHint(QSplitterHandle* theWrappedObject) const;
   QSize  py_q_sizeHint(QSplitterHandle* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSplitterHandle*)theWrappedObject)->py_q_sizeHint());}
   QSplitter*  splitter(QSplitterHandle* theWrappedObject) const;
};





class PythonQtShell_QStackedLayout : public QStackedLayout
{
public:
    PythonQtShell_QStackedLayout():QStackedLayout(),_wrapper(NULL) {};
    PythonQtShell_QStackedLayout(QLayout*  parentLayout):QStackedLayout(parentLayout),_wrapper(NULL) {};
    PythonQtShell_QStackedLayout(QWidget*  parent):QStackedLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QStackedLayout();

virtual void addItem(QLayoutItem*  item);
virtual void childEvent(QChildEvent*  e);
virtual QSizePolicy::ControlTypes  controlTypes() const;
virtual int  count() const;
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  width) const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayoutItem*  itemAt(int  arg__1) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  rect);
virtual QSize  sizeHint() const;
virtual QLayoutItem*  takeAt(int  arg__1);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStackedLayout : public QStackedLayout
{ public:
inline void py_q_addItem(QLayoutItem*  item) { QStackedLayout::addItem(item); }
inline int  py_q_count() const { return QStackedLayout::count(); }
inline bool  py_q_hasHeightForWidth() const { return QStackedLayout::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  width) const { return QStackedLayout::heightForWidth(width); }
inline QLayoutItem*  py_q_itemAt(int  arg__1) const { return QStackedLayout::itemAt(arg__1); }
inline QSize  py_q_minimumSize() const { return QStackedLayout::minimumSize(); }
inline void py_q_setGeometry(const QRect&  rect) { QStackedLayout::setGeometry(rect); }
inline QSize  py_q_sizeHint() const { return QStackedLayout::sizeHint(); }
inline QLayoutItem*  py_q_takeAt(int  arg__1) { return QStackedLayout::takeAt(arg__1); }
};

class PythonQtWrapper_QStackedLayout : public QObject
{ Q_OBJECT
public:
public slots:
QStackedLayout* new_QStackedLayout();
QStackedLayout* new_QStackedLayout(QLayout*  parentLayout);
QStackedLayout* new_QStackedLayout(QWidget*  parent);
void delete_QStackedLayout(QStackedLayout* obj) { delete obj; } 
   void py_q_addItem(QStackedLayout* theWrappedObject, QLayoutItem*  item){  (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_addItem(item));}
   int  addWidget(QStackedLayout* theWrappedObject, QWidget*  w);
   int  py_q_count(QStackedLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_count());}
   int  currentIndex(QStackedLayout* theWrappedObject) const;
   QWidget*  currentWidget(QStackedLayout* theWrappedObject) const;
   bool  hasHeightForWidth(QStackedLayout* theWrappedObject) const;
   bool  py_q_hasHeightForWidth(QStackedLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  heightForWidth(QStackedLayout* theWrappedObject, int  width) const;
   int  py_q_heightForWidth(QStackedLayout* theWrappedObject, int  width) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_heightForWidth(width));}
   int  insertWidget(QStackedLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  w);
   QLayoutItem*  py_q_itemAt(QStackedLayout* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_itemAt(arg__1));}
   QSize  py_q_minimumSize(QStackedLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_minimumSize());}
   void py_q_setGeometry(QStackedLayout* theWrappedObject, const QRect&  rect){  (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_setGeometry(rect));}
   void setStackingMode(QStackedLayout* theWrappedObject, QStackedLayout::StackingMode  stackingMode);
   QSize  sizeHint(QStackedLayout* theWrappedObject) const;
   QSize  py_q_sizeHint(QStackedLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_sizeHint());}
   QStackedLayout::StackingMode  stackingMode(QStackedLayout* theWrappedObject) const;
   QLayoutItem*  py_q_takeAt(QStackedLayout* theWrappedObject, int  arg__1){  return (((PythonQtPublicPromoter_QStackedLayout*)theWrappedObject)->py_q_takeAt(arg__1));}
   QWidget*  widget(QStackedLayout* theWrappedObject, int  arg__1) const;
    bool __nonzero__(QStackedLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QStackedWidget : public QStackedWidget
{
public:
    PythonQtShell_QStackedWidget(QWidget*  parent = nullptr):QStackedWidget(parent),_wrapper(NULL) {};

   ~PythonQtShell_QStackedWidget();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStackedWidget : public QStackedWidget
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  py_q_event(QEvent*  e) { return QStackedWidget::event(e); }
};

class PythonQtWrapper_QStackedWidget : public QObject
{ Q_OBJECT
public:
public slots:
QStackedWidget* new_QStackedWidget(QWidget*  parent = nullptr);
void delete_QStackedWidget(QStackedWidget* obj) { delete obj; } 
   int  addWidget(QStackedWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  w);
   int  count(QStackedWidget* theWrappedObject) const;
   int  currentIndex(QStackedWidget* theWrappedObject) const;
   QWidget*  currentWidget(QStackedWidget* theWrappedObject) const;
   bool  py_q_event(QStackedWidget* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QStackedWidget*)theWrappedObject)->py_q_event(e));}
   int  indexOf(QStackedWidget* theWrappedObject, QWidget*  arg__1) const;
   int  insertWidget(QStackedWidget* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  w);
   void removeWidget(QStackedWidget* theWrappedObject, PythonQtPassOwnershipToPython<QWidget* >  w);
   QWidget*  widget(QStackedWidget* theWrappedObject, int  arg__1) const;
};





class PythonQtShell_QStandardItem : public QStandardItem
{
public:
    PythonQtShell_QStandardItem():QStandardItem(),_wrapper(NULL) {};
    PythonQtShell_QStandardItem(const QIcon&  icon, const QString&  text):QStandardItem(icon, text),_wrapper(NULL) {};
    PythonQtShell_QStandardItem(const QStandardItem&  other):QStandardItem(other),_wrapper(NULL) {};
    PythonQtShell_QStandardItem(const QString&  text):QStandardItem(text),_wrapper(NULL) {};
    PythonQtShell_QStandardItem(int  rows, int  columns = 1):QStandardItem(rows, columns),_wrapper(NULL) {};

   ~PythonQtShell_QStandardItem();

virtual QStandardItem*  clone() const;
virtual QVariant  data(int  role = Qt::UserRole + 1) const;
virtual void read(QDataStream&  in);
virtual void setData(const QVariant&  value, int  role = Qt::UserRole + 1);
virtual int  type() const;
virtual void write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStandardItem : public QStandardItem
{ public:
inline void promoted_emitDataChanged() { this->emitDataChanged(); }
inline QStandardItem*  py_q_clone() const { return QStandardItem::clone(); }
inline QVariant  py_q_data(int  role = Qt::UserRole + 1) const { return QStandardItem::data(role); }
inline void py_q_read(QDataStream&  in) { QStandardItem::read(in); }
inline void py_q_setData(const QVariant&  value, int  role = Qt::UserRole + 1) { QStandardItem::setData(value, role); }
inline int  py_q_type() const { return QStandardItem::type(); }
inline void py_q_write(QDataStream&  out) const { QStandardItem::write(out); }
};

class PythonQtWrapper_QStandardItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QStandardItem::Type,   UserType = QStandardItem::UserType};
public slots:
QStandardItem* new_QStandardItem();
QStandardItem* new_QStandardItem(const QIcon&  icon, const QString&  text);
QStandardItem* new_QStandardItem(const QStandardItem&  other);
QStandardItem* new_QStandardItem(const QString&  text);
QStandardItem* new_QStandardItem(int  rows, int  columns = 1);
void delete_QStandardItem(QStandardItem* obj) { delete obj; } 
   QString  accessibleDescription(QStandardItem* theWrappedObject) const;
   QString  accessibleText(QStandardItem* theWrappedObject) const;
   void appendColumn(QStandardItem* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void appendRow(QStandardItem* theWrappedObject, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void appendRow(QStandardItem* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void appendRows(QStandardItem* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   QBrush  background(QStandardItem* theWrappedObject) const;
   Qt::CheckState  checkState(QStandardItem* theWrappedObject) const;
   QStandardItem*  child(QStandardItem* theWrappedObject, int  row, int  column = 0) const;
   QStandardItem*  clone(QStandardItem* theWrappedObject) const;
   QStandardItem*  py_q_clone(QStandardItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_clone());}
   int  column(QStandardItem* theWrappedObject) const;
   int  columnCount(QStandardItem* theWrappedObject) const;
   QVariant  data(QStandardItem* theWrappedObject, int  role = Qt::UserRole + 1) const;
   QVariant  py_q_data(QStandardItem* theWrappedObject, int  role = Qt::UserRole + 1) const{  return (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_data(role));}
   void emitDataChanged(QStandardItem* theWrappedObject);
   Qt::ItemFlags  flags(QStandardItem* theWrappedObject) const;
   QFont  font(QStandardItem* theWrappedObject) const;
   QBrush  foreground(QStandardItem* theWrappedObject) const;
   bool  hasChildren(QStandardItem* theWrappedObject) const;
   QIcon  icon(QStandardItem* theWrappedObject) const;
   QModelIndex  index(QStandardItem* theWrappedObject) const;
   void insertColumn(QStandardItem* theWrappedObject, int  column, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void insertColumns(QStandardItem* theWrappedObject, int  column, int  count);
   void insertRow(QStandardItem* theWrappedObject, int  row, QStandardItem*  item);
   void insertRow(QStandardItem* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void insertRows(QStandardItem* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void insertRows(QStandardItem* theWrappedObject, int  row, int  count);
   bool  isAutoTristate(QStandardItem* theWrappedObject) const;
   bool  isCheckable(QStandardItem* theWrappedObject) const;
   bool  isDragEnabled(QStandardItem* theWrappedObject) const;
   bool  isDropEnabled(QStandardItem* theWrappedObject) const;
   bool  isEditable(QStandardItem* theWrappedObject) const;
   bool  isEnabled(QStandardItem* theWrappedObject) const;
   bool  isSelectable(QStandardItem* theWrappedObject) const;
   bool  isTristate(QStandardItem* theWrappedObject) const;
   bool  isUserTristate(QStandardItem* theWrappedObject) const;
   QStandardItemModel*  model(QStandardItem* theWrappedObject) const;
   void writeTo(QStandardItem* theWrappedObject, QDataStream&  out);
   void readFrom(QStandardItem* theWrappedObject, QDataStream&  in);
   QStandardItem*  parent(QStandardItem* theWrappedObject) const;
   void read(QStandardItem* theWrappedObject, QDataStream&  in);
   void py_q_read(QStandardItem* theWrappedObject, QDataStream&  in){  (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_read(in));}
   void removeColumn(QStandardItem* theWrappedObject, int  column);
   void removeColumns(QStandardItem* theWrappedObject, int  column, int  count);
   void removeRow(QStandardItem* theWrappedObject, int  row);
   void removeRows(QStandardItem* theWrappedObject, int  row, int  count);
   int  row(QStandardItem* theWrappedObject) const;
   int  rowCount(QStandardItem* theWrappedObject) const;
   void setAccessibleDescription(QStandardItem* theWrappedObject, const QString&  accessibleDescription);
   void setAccessibleText(QStandardItem* theWrappedObject, const QString&  accessibleText);
   void setAutoTristate(QStandardItem* theWrappedObject, bool  tristate);
   void setBackground(QStandardItem* theWrappedObject, const QBrush&  brush);
   void setCheckState(QStandardItem* theWrappedObject, Qt::CheckState  checkState);
   void setCheckable(QStandardItem* theWrappedObject, bool  checkable);
   void setChild(QStandardItem* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void setChild(QStandardItem* theWrappedObject, int  row, int  column, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void setColumnCount(QStandardItem* theWrappedObject, int  columns);
   void setData(QStandardItem* theWrappedObject, const QVariant&  value, int  role = Qt::UserRole + 1);
   void py_q_setData(QStandardItem* theWrappedObject, const QVariant&  value, int  role = Qt::UserRole + 1){  (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_setData(value, role));}
   void setDragEnabled(QStandardItem* theWrappedObject, bool  dragEnabled);
   void setDropEnabled(QStandardItem* theWrappedObject, bool  dropEnabled);
   void setEditable(QStandardItem* theWrappedObject, bool  editable);
   void setEnabled(QStandardItem* theWrappedObject, bool  enabled);
   void setFlags(QStandardItem* theWrappedObject, Qt::ItemFlags  flags);
   void setFont(QStandardItem* theWrappedObject, const QFont&  font);
   void setForeground(QStandardItem* theWrappedObject, const QBrush&  brush);
   void setIcon(QStandardItem* theWrappedObject, const QIcon&  icon);
   void setRowCount(QStandardItem* theWrappedObject, int  rows);
   void setSelectable(QStandardItem* theWrappedObject, bool  selectable);
   void setSizeHint(QStandardItem* theWrappedObject, const QSize&  sizeHint);
   void setStatusTip(QStandardItem* theWrappedObject, const QString&  statusTip);
   void setText(QStandardItem* theWrappedObject, const QString&  text);
   void setTextAlignment(QStandardItem* theWrappedObject, Qt::Alignment  textAlignment);
   void setToolTip(QStandardItem* theWrappedObject, const QString&  toolTip);
   void setTristate(QStandardItem* theWrappedObject, bool  tristate);
   void setUserTristate(QStandardItem* theWrappedObject, bool  tristate);
   void setWhatsThis(QStandardItem* theWrappedObject, const QString&  whatsThis);
   QSize  sizeHint(QStandardItem* theWrappedObject) const;
   void sortChildren(QStandardItem* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   QString  statusTip(QStandardItem* theWrappedObject) const;
   PythonQtPassOwnershipToPython<QStandardItem*  > takeChild(QStandardItem* theWrappedObject, int  row, int  column = 0);
   QList<QStandardItem* >  takeColumn(QStandardItem* theWrappedObject, int  column);
   QList<QStandardItem* >  takeRow(QStandardItem* theWrappedObject, int  row);
   QString  text(QStandardItem* theWrappedObject) const;
   Qt::Alignment  textAlignment(QStandardItem* theWrappedObject) const;
   QString  toolTip(QStandardItem* theWrappedObject) const;
   int  type(QStandardItem* theWrappedObject) const;
   int  py_q_type(QStandardItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_type());}
   QString  whatsThis(QStandardItem* theWrappedObject) const;
   void write(QStandardItem* theWrappedObject, QDataStream&  out) const;
   void py_q_write(QStandardItem* theWrappedObject, QDataStream&  out) const{  (((PythonQtPublicPromoter_QStandardItem*)theWrappedObject)->py_q_write(out));}
};





class PythonQtShell_QStandardItemModel : public QStandardItemModel
{
public:
    PythonQtShell_QStandardItemModel(QObject*  parent = nullptr):QStandardItemModel(parent),_wrapper(NULL) {};
    PythonQtShell_QStandardItemModel(int  rows, int  columns, QObject*  parent = nullptr):QStandardItemModel(rows, columns, parent),_wrapper(NULL) {};

   ~PythonQtShell_QStandardItemModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual void childEvent(QChildEvent*  event);
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual void customEvent(QEvent*  event);
virtual QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void fetchMore(const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual QStringList  mimeTypes() const;
virtual bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual QModelIndex  parent(const QModelIndex&  child) const;
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual void revert();
virtual QHash<int , QByteArray >  roleNames() const;
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;
virtual void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDragActions() const;
virtual Qt::DropActions  supportedDropActions() const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStandardItemModel : public QStandardItemModel
{ public:
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QStandardItemModel::columnCount(parent); }
inline QVariant  py_q_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return QStandardItemModel::data(index, role); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QStandardItemModel::dropMimeData(data, action, row, column, parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QStandardItemModel::flags(index); }
inline bool  py_q_hasChildren(const QModelIndex&  parent = QModelIndex()) const { return QStandardItemModel::hasChildren(parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QStandardItemModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QStandardItemModel::index(row, column, parent); }
inline bool  py_q_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QStandardItemModel::insertColumns(column, count, parent); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QStandardItemModel::insertRows(row, count, parent); }
inline QMap<int , QVariant >  py_q_itemData(const QModelIndex&  index) const { return QStandardItemModel::itemData(index); }
inline QMimeData*  py_q_mimeData(const QList<QModelIndex >&  indexes) const { return QStandardItemModel::mimeData(indexes); }
inline QStringList  py_q_mimeTypes() const { return QStandardItemModel::mimeTypes(); }
inline QModelIndex  py_q_parent(const QModelIndex&  child) const { return QStandardItemModel::parent(child); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QStandardItemModel::removeColumns(column, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QStandardItemModel::removeRows(row, count, parent); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QStandardItemModel::rowCount(parent); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QStandardItemModel::setData(index, value, role); }
inline bool  py_q_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QStandardItemModel::setHeaderData(section, orientation, value, role); }
inline bool  py_q_setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) { return QStandardItemModel::setItemData(index, roles); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QStandardItemModel::sibling(row, column, idx); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QStandardItemModel::sort(column, order); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QStandardItemModel::supportedDropActions(); }
};

class PythonQtWrapper_QStandardItemModel : public QObject
{ Q_OBJECT
public:
public slots:
QStandardItemModel* new_QStandardItemModel(QObject*  parent = nullptr);
QStandardItemModel* new_QStandardItemModel(int  rows, int  columns, QObject*  parent = nullptr);
void delete_QStandardItemModel(QStandardItemModel* obj) { delete obj; } 
   void appendColumn(QStandardItemModel* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void appendRow(QStandardItemModel* theWrappedObject, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void appendRow(QStandardItemModel* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   void clear(QStandardItemModel* theWrappedObject);
   int  py_q_columnCount(QStandardItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_columnCount(parent));}
   QVariant  py_q_data(QStandardItemModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_data(index, role));}
   bool  py_q_dropMimeData(QStandardItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   QList<QStandardItem* >  findItems(QStandardItemModel* theWrappedObject, const QString&  text, Qt::MatchFlags  flags = Qt::MatchExactly, int  column = 0) const;
   Qt::ItemFlags  py_q_flags(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_flags(index));}
   bool  py_q_hasChildren(QStandardItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_hasChildren(parent));}
   QVariant  py_q_headerData(QStandardItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QStandardItem*  horizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column) const;
   QModelIndex  py_q_index(QStandardItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_index(row, column, parent));}
   QModelIndex  indexFromItem(QStandardItemModel* theWrappedObject, const QStandardItem*  item) const;
   void insertColumn(QStandardItemModel* theWrappedObject, int  column, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   bool  py_q_insertColumns(QStandardItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_insertColumns(column, count, parent));}
   void insertRow(QStandardItemModel* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void insertRow(QStandardItemModel* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QList<QStandardItem* > >  items);
   bool  py_q_insertRows(QStandardItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   QStandardItem*  invisibleRootItem(QStandardItemModel* theWrappedObject) const;
   QStandardItem*  item(QStandardItemModel* theWrappedObject, int  row, int  column = 0) const;
   QMap<int , QVariant >  py_q_itemData(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_itemData(index));}
   QStandardItem*  itemFromIndex(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const;
   const QStandardItem*  itemPrototype(QStandardItemModel* theWrappedObject) const;
   QMimeData*  py_q_mimeData(QStandardItemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_mimeData(indexes));}
   QStringList  py_q_mimeTypes(QStandardItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_mimeTypes());}
   QModelIndex  py_q_parent(QStandardItemModel* theWrappedObject, const QModelIndex&  child) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_parent(child));}
   bool  py_q_removeColumns(QStandardItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   bool  py_q_removeRows(QStandardItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   int  py_q_rowCount(QStandardItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_rowCount(parent));}
   void setColumnCount(QStandardItemModel* theWrappedObject, int  columns);
   bool  py_q_setData(QStandardItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_setData(index, value, role));}
   bool  py_q_setHeaderData(QStandardItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_setHeaderData(section, orientation, value, role));}
   void setHorizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void setHorizontalHeaderLabels(QStandardItemModel* theWrappedObject, const QStringList&  labels);
   void setItem(QStandardItemModel* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void setItem(QStandardItemModel* theWrappedObject, int  row, int  column, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   bool  py_q_setItemData(QStandardItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles){  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_setItemData(index, roles));}
   void setItemPrototype(QStandardItemModel* theWrappedObject, PythonQtPassOwnershipToCPP<const QStandardItem* >  item);
   void setItemRoleNames(QStandardItemModel* theWrappedObject, const QHash<int , QByteArray >&  roleNames);
   void setRowCount(QStandardItemModel* theWrappedObject, int  rows);
   void setSortRole(QStandardItemModel* theWrappedObject, int  role);
   void setVerticalHeaderItem(QStandardItemModel* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QStandardItem* >  item);
   void setVerticalHeaderLabels(QStandardItemModel* theWrappedObject, const QStringList&  labels);
   QModelIndex  py_q_sibling(QStandardItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
   void py_q_sort(QStandardItemModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_sort(column, order));}
   int  sortRole(QStandardItemModel* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDropActions(QStandardItemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->py_q_supportedDropActions());}
   PythonQtPassOwnershipToPython<QList<QStandardItem* >  > takeColumn(QStandardItemModel* theWrappedObject, int  column);
   PythonQtPassOwnershipToPython<QStandardItem*  > takeHorizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column);
   PythonQtPassOwnershipToPython<QStandardItem*  > takeItem(QStandardItemModel* theWrappedObject, int  row, int  column = 0);
   PythonQtPassOwnershipToPython<QList<QStandardItem* >  > takeRow(QStandardItemModel* theWrappedObject, int  row);
   PythonQtPassOwnershipToPython<QStandardItem*  > takeVerticalHeaderItem(QStandardItemModel* theWrappedObject, int  row);
   QStandardItem*  verticalHeaderItem(QStandardItemModel* theWrappedObject, int  row) const;
};





class PythonQtWrapper_QStaticText : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PerformanceHint )
enum PerformanceHint{
  ModerateCaching = QStaticText::ModerateCaching,   AggressiveCaching = QStaticText::AggressiveCaching};
public slots:
QStaticText* new_QStaticText();
QStaticText* new_QStaticText(const QStaticText&  other);
QStaticText* new_QStaticText(const QString&  text);
void delete_QStaticText(QStaticText* obj) { delete obj; } 
   bool  __ne__(QStaticText* theWrappedObject, const QStaticText&  arg__1) const;
   QStaticText*  operator_assign(QStaticText* theWrappedObject, const QStaticText&  arg__1);
   bool  __eq__(QStaticText* theWrappedObject, const QStaticText&  arg__1) const;
   QStaticText::PerformanceHint  performanceHint(QStaticText* theWrappedObject) const;
   void prepare(QStaticText* theWrappedObject, const QTransform&  matrix = QTransform(), const QFont&  font = QFont());
   void setPerformanceHint(QStaticText* theWrappedObject, QStaticText::PerformanceHint  performanceHint);
   void setText(QStaticText* theWrappedObject, const QString&  text);
   void setTextFormat(QStaticText* theWrappedObject, Qt::TextFormat  textFormat);
   void setTextOption(QStaticText* theWrappedObject, const QTextOption&  textOption);
   void setTextWidth(QStaticText* theWrappedObject, qreal  textWidth);
   QSizeF  size(QStaticText* theWrappedObject) const;
   void swap(QStaticText* theWrappedObject, QStaticText&  other);
   QString  text(QStaticText* theWrappedObject) const;
   Qt::TextFormat  textFormat(QStaticText* theWrappedObject) const;
   QTextOption  textOption(QStaticText* theWrappedObject) const;
   qreal  textWidth(QStaticText* theWrappedObject) const;
};





class PythonQtShell_QStatusBar : public QStatusBar
{
public:
    PythonQtShell_QStatusBar(QWidget*  parent = nullptr):QStatusBar(parent),_wrapper(NULL) {};

   ~PythonQtShell_QStatusBar();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStatusBar : public QStatusBar
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_hideOrShow() { this->hideOrShow(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_reformat() { this->reformat(); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QStatusBar::event(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QStatusBar::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QStatusBar::resizeEvent(arg__1); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QStatusBar::showEvent(arg__1); }
};

class PythonQtWrapper_QStatusBar : public QObject
{ Q_OBJECT
public:
public slots:
QStatusBar* new_QStatusBar(QWidget*  parent = nullptr);
void delete_QStatusBar(QStatusBar* obj) { delete obj; } 
   void addPermanentWidget(QStatusBar* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, int  stretch = 0);
   void addWidget(QStatusBar* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, int  stretch = 0);
   QString  currentMessage(QStatusBar* theWrappedObject) const;
   bool  py_q_event(QStatusBar* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QStatusBar*)theWrappedObject)->py_q_event(arg__1));}
   void hideOrShow(QStatusBar* theWrappedObject);
   int  insertPermanentWidget(QStatusBar* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, int  stretch = 0);
   int  insertWidget(QStatusBar* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, int  stretch = 0);
   bool  isSizeGripEnabled(QStatusBar* theWrappedObject) const;
   void py_q_paintEvent(QStatusBar* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QStatusBar*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void reformat(QStatusBar* theWrappedObject);
   void removeWidget(QStatusBar* theWrappedObject, QWidget*  widget);
   void py_q_resizeEvent(QStatusBar* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QStatusBar*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   void setSizeGripEnabled(QStatusBar* theWrappedObject, bool  arg__1);
   void py_q_showEvent(QStatusBar* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QStatusBar*)theWrappedObject)->py_q_showEvent(arg__1));}
};





class PythonQtWrapper_QStatusTipEvent : public QObject
{ Q_OBJECT
public:
public slots:
QStatusTipEvent* new_QStatusTipEvent(const QString&  tip);
void delete_QStatusTipEvent(QStatusTipEvent* obj) { delete obj; } 
   QString  tip(QStatusTipEvent* theWrappedObject) const;
};





class PythonQtShell_QStringListModel : public QStringListModel
{
public:
    PythonQtShell_QStringListModel(QObject*  parent = nullptr):QStringListModel(parent),_wrapper(NULL) {};
    PythonQtShell_QStringListModel(const QStringList&  strings, QObject*  parent = nullptr):QStringListModel(strings, parent),_wrapper(NULL) {};

   ~PythonQtShell_QStringListModel();

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const;
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void fetchMore(const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
virtual QModelIndex  index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual QStringList  mimeTypes() const;
virtual bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual void revert();
virtual QHash<int , QByteArray >  roleNames() const;
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;
virtual void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDragActions() const;
virtual Qt::DropActions  supportedDropActions() const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStringListModel : public QStringListModel
{ public:
inline QVariant  py_q_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return QStringListModel::data(index, role); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QStringListModel::flags(index); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QStringListModel::insertRows(row, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QStringListModel::removeRows(row, count, parent); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QStringListModel::rowCount(parent); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QStringListModel::setData(index, value, role); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QStringListModel::sibling(row, column, idx); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QStringListModel::sort(column, order); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QStringListModel::supportedDropActions(); }
};

class PythonQtWrapper_QStringListModel : public QObject
{ Q_OBJECT
public:
public slots:
QStringListModel* new_QStringListModel(QObject*  parent = nullptr);
QStringListModel* new_QStringListModel(const QStringList&  strings, QObject*  parent = nullptr);
void delete_QStringListModel(QStringListModel* obj) { delete obj; } 
   QVariant  py_q_data(QStringListModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_data(index, role));}
   Qt::ItemFlags  py_q_flags(QStringListModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_flags(index));}
   bool  py_q_insertRows(QStringListModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   bool  py_q_removeRows(QStringListModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   int  py_q_rowCount(QStringListModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_rowCount(parent));}
   bool  py_q_setData(QStringListModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_setData(index, value, role));}
   void setStringList(QStringListModel* theWrappedObject, const QStringList&  strings);
   QModelIndex  py_q_sibling(QStringListModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
   void py_q_sort(QStringListModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_sort(column, order));}
   QStringList  stringList(QStringListModel* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDropActions(QStringListModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_supportedDropActions());}
};





class PythonQtPublicPromoter_QStyle : public QStyle
{ public:
inline void py_q_drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  widget = nullptr) const { this->drawComplexControl(cc, opt, p, widget); }
inline void py_q_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const { this->drawControl(element, opt, p, w); }
inline void py_q_drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const { QStyle::drawItemPixmap(painter, rect, alignment, pixmap); }
inline void py_q_drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const { QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole); }
inline void py_q_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const { this->drawPrimitive(pe, opt, p, w); }
inline QPixmap  py_q_generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const { return this->generatedIconPixmap(iconMode, pixmap, opt); }
inline QStyle::SubControl  py_q_hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  widget = nullptr) const { return this->hitTestComplexControl(cc, opt, pt, widget); }
inline QRect  py_q_itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const { return QStyle::itemPixmapRect(r, flags, pixmap); }
inline int  py_q_layoutSpacing(QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const { return this->layoutSpacing(control1, control2, orientation, option, widget); }
inline int  py_q_pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const { return this->pixelMetric(metric, option, widget); }
inline void py_q_polish(QApplication*  application) { QStyle::polish(application); }
inline void py_q_polish(QPalette&  palette) { QStyle::polish(palette); }
inline void py_q_polish(QWidget*  widget) { QStyle::polish(widget); }
inline QSize  py_q_sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  w = nullptr) const { return this->sizeFromContents(ct, opt, contentsSize, w); }
inline QIcon  py_q_standardIcon(QStyle::StandardPixmap  standardIcon, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const { return this->standardIcon(standardIcon, option, widget); }
inline QPalette  py_q_standardPalette() const { return QStyle::standardPalette(); }
inline QPixmap  py_q_standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const { return this->standardPixmap(standardPixmap, opt, widget); }
inline int  py_q_styleHint(QStyle::StyleHint  stylehint, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr, QStyleHintReturn*  returnData = nullptr) const { return this->styleHint(stylehint, opt, widget, returnData); }
inline QRect  py_q_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget = nullptr) const { return this->subControlRect(cc, opt, sc, widget); }
inline QRect  py_q_subElementRect(QStyle::SubElement  subElement, const QStyleOption*  option, const QWidget*  widget = nullptr) const { return this->subElementRect(subElement, option, widget); }
inline void py_q_unpolish(QApplication*  application) { QStyle::unpolish(application); }
inline void py_q_unpolish(QWidget*  widget) { QStyle::unpolish(widget); }
};

class PythonQtWrapper_QStyle : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StateFlag SubControl )
Q_FLAGS(State SubControls )
enum StateFlag{
  State_None = QStyle::State_None,   State_Enabled = QStyle::State_Enabled,   State_Raised = QStyle::State_Raised,   State_Sunken = QStyle::State_Sunken,   State_Off = QStyle::State_Off,   State_NoChange = QStyle::State_NoChange,   State_On = QStyle::State_On,   State_DownArrow = QStyle::State_DownArrow,   State_Horizontal = QStyle::State_Horizontal,   State_HasFocus = QStyle::State_HasFocus,   State_Top = QStyle::State_Top,   State_Bottom = QStyle::State_Bottom,   State_FocusAtBorder = QStyle::State_FocusAtBorder,   State_AutoRaise = QStyle::State_AutoRaise,   State_MouseOver = QStyle::State_MouseOver,   State_UpArrow = QStyle::State_UpArrow,   State_Selected = QStyle::State_Selected,   State_Active = QStyle::State_Active,   State_Window = QStyle::State_Window,   State_Open = QStyle::State_Open,   State_Children = QStyle::State_Children,   State_Item = QStyle::State_Item,   State_Sibling = QStyle::State_Sibling,   State_Editing = QStyle::State_Editing,   State_KeyboardFocusChange = QStyle::State_KeyboardFocusChange,   State_ReadOnly = QStyle::State_ReadOnly,   State_Small = QStyle::State_Small,   State_Mini = QStyle::State_Mini};
enum SubControl{
  SC_None = QStyle::SC_None,   SC_ScrollBarAddLine = QStyle::SC_ScrollBarAddLine,   SC_ScrollBarSubLine = QStyle::SC_ScrollBarSubLine,   SC_ScrollBarAddPage = QStyle::SC_ScrollBarAddPage,   SC_ScrollBarSubPage = QStyle::SC_ScrollBarSubPage,   SC_ScrollBarFirst = QStyle::SC_ScrollBarFirst,   SC_ScrollBarLast = QStyle::SC_ScrollBarLast,   SC_ScrollBarSlider = QStyle::SC_ScrollBarSlider,   SC_ScrollBarGroove = QStyle::SC_ScrollBarGroove,   SC_SpinBoxUp = QStyle::SC_SpinBoxUp,   SC_SpinBoxDown = QStyle::SC_SpinBoxDown,   SC_SpinBoxFrame = QStyle::SC_SpinBoxFrame,   SC_SpinBoxEditField = QStyle::SC_SpinBoxEditField,   SC_ComboBoxFrame = QStyle::SC_ComboBoxFrame,   SC_ComboBoxEditField = QStyle::SC_ComboBoxEditField,   SC_ComboBoxArrow = QStyle::SC_ComboBoxArrow,   SC_ComboBoxListBoxPopup = QStyle::SC_ComboBoxListBoxPopup,   SC_SliderGroove = QStyle::SC_SliderGroove,   SC_SliderHandle = QStyle::SC_SliderHandle,   SC_SliderTickmarks = QStyle::SC_SliderTickmarks,   SC_ToolButton = QStyle::SC_ToolButton,   SC_ToolButtonMenu = QStyle::SC_ToolButtonMenu,   SC_TitleBarSysMenu = QStyle::SC_TitleBarSysMenu,   SC_TitleBarMinButton = QStyle::SC_TitleBarMinButton,   SC_TitleBarMaxButton = QStyle::SC_TitleBarMaxButton,   SC_TitleBarCloseButton = QStyle::SC_TitleBarCloseButton,   SC_TitleBarNormalButton = QStyle::SC_TitleBarNormalButton,   SC_TitleBarShadeButton = QStyle::SC_TitleBarShadeButton,   SC_TitleBarUnshadeButton = QStyle::SC_TitleBarUnshadeButton,   SC_TitleBarContextHelpButton = QStyle::SC_TitleBarContextHelpButton,   SC_TitleBarLabel = QStyle::SC_TitleBarLabel,   SC_DialGroove = QStyle::SC_DialGroove,   SC_DialHandle = QStyle::SC_DialHandle,   SC_DialTickmarks = QStyle::SC_DialTickmarks,   SC_GroupBoxCheckBox = QStyle::SC_GroupBoxCheckBox,   SC_GroupBoxLabel = QStyle::SC_GroupBoxLabel,   SC_GroupBoxContents = QStyle::SC_GroupBoxContents,   SC_GroupBoxFrame = QStyle::SC_GroupBoxFrame,   SC_MdiMinButton = QStyle::SC_MdiMinButton,   SC_MdiNormalButton = QStyle::SC_MdiNormalButton,   SC_MdiCloseButton = QStyle::SC_MdiCloseButton,   SC_CustomBase = QStyle::SC_CustomBase,   SC_All = QStyle::SC_All};
Q_DECLARE_FLAGS(State, StateFlag)
Q_DECLARE_FLAGS(SubControls, SubControl)
public slots:
void delete_QStyle(QStyle* obj) { delete obj; } 
   QRect  static_QStyle_alignedRect(Qt::LayoutDirection  direction, Qt::Alignment  alignment, const QSize&  size, const QRect&  rectangle);
   int  combinedLayoutSpacing(QStyle* theWrappedObject, QSizePolicy::ControlTypes  controls1, QSizePolicy::ControlTypes  controls2, Qt::Orientation  orientation, QStyleOption*  option = nullptr, QWidget*  widget = nullptr) const;
   void drawComplexControl(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  widget = nullptr) const;
   void py_q_drawComplexControl(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  widget = nullptr) const{  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_drawComplexControl(cc, opt, p, widget));}
   void drawControl(QStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const;
   void py_q_drawControl(QStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const{  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_drawControl(element, opt, p, w));}
   void drawItemPixmap(QStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
   void py_q_drawItemPixmap(QStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const{  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_drawItemPixmap(painter, rect, alignment, pixmap));}
   void drawItemText(QStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const;
   void py_q_drawItemText(QStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const{  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_drawItemText(painter, rect, flags, pal, enabled, text, textRole));}
   void drawPrimitive(QStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const;
   void py_q_drawPrimitive(QStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const{  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_drawPrimitive(pe, opt, p, w));}
   QPixmap  generatedIconPixmap(QStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
   QPixmap  py_q_generatedIconPixmap(QStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_generatedIconPixmap(iconMode, pixmap, opt));}
   QStyle::SubControl  hitTestComplexControl(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  widget = nullptr) const;
   QStyle::SubControl  py_q_hitTestComplexControl(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_hitTestComplexControl(cc, opt, pt, widget));}
   QRect  itemPixmapRect(QStyle* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap) const;
   QRect  py_q_itemPixmapRect(QStyle* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_itemPixmapRect(r, flags, pixmap));}
   int  layoutSpacing(QStyle* theWrappedObject, QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const;
   int  py_q_layoutSpacing(QStyle* theWrappedObject, QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_layoutSpacing(control1, control2, orientation, option, widget));}
   int  pixelMetric(QStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const;
   int  py_q_pixelMetric(QStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_pixelMetric(metric, option, widget));}
   void polish(QStyle* theWrappedObject, QApplication*  application);
   void py_q_polish(QStyle* theWrappedObject, QApplication*  application){  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_polish(application));}
   void polish(QStyle* theWrappedObject, QPalette&  palette);
   void py_q_polish(QStyle* theWrappedObject, QPalette&  palette){  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_polish(palette));}
   void polish(QStyle* theWrappedObject, QWidget*  widget);
   void py_q_polish(QStyle* theWrappedObject, QWidget*  widget){  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_polish(widget));}
   const QStyle*  proxy(QStyle* theWrappedObject) const;
   QSize  sizeFromContents(QStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  w = nullptr) const;
   QSize  py_q_sizeFromContents(QStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  w = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_sizeFromContents(ct, opt, contentsSize, w));}
   int  static_QStyle_sliderPositionFromValue(int  min, int  max, int  val, int  space, bool  upsideDown = false);
   int  static_QStyle_sliderValueFromPosition(int  min, int  max, int  pos, int  space, bool  upsideDown = false);
   QIcon  standardIcon(QStyle* theWrappedObject, QStyle::StandardPixmap  standardIcon, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const;
   QIcon  py_q_standardIcon(QStyle* theWrappedObject, QStyle::StandardPixmap  standardIcon, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_standardIcon(standardIcon, option, widget));}
   QPalette  standardPalette(QStyle* theWrappedObject) const;
   QPalette  py_q_standardPalette(QStyle* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_standardPalette());}
   QPixmap  standardPixmap(QStyle* theWrappedObject, QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const;
   QPixmap  py_q_standardPixmap(QStyle* theWrappedObject, QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_standardPixmap(standardPixmap, opt, widget));}
   int  styleHint(QStyle* theWrappedObject, QStyle::StyleHint  stylehint, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr, QStyleHintReturn*  returnData = nullptr) const;
   int  py_q_styleHint(QStyle* theWrappedObject, QStyle::StyleHint  stylehint, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr, QStyleHintReturn*  returnData = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_styleHint(stylehint, opt, widget, returnData));}
   QRect  subControlRect(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget = nullptr) const;
   QRect  py_q_subControlRect(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_subControlRect(cc, opt, sc, widget));}
   QRect  subElementRect(QStyle* theWrappedObject, QStyle::SubElement  subElement, const QStyleOption*  option, const QWidget*  widget = nullptr) const;
   QRect  py_q_subElementRect(QStyle* theWrappedObject, QStyle::SubElement  subElement, const QStyleOption*  option, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_subElementRect(subElement, option, widget));}
   void unpolish(QStyle* theWrappedObject, QApplication*  application);
   void py_q_unpolish(QStyle* theWrappedObject, QApplication*  application){  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_unpolish(application));}
   void unpolish(QStyle* theWrappedObject, QWidget*  widget);
   void py_q_unpolish(QStyle* theWrappedObject, QWidget*  widget){  (((PythonQtPublicPromoter_QStyle*)theWrappedObject)->py_q_unpolish(widget));}
   Qt::Alignment  static_QStyle_visualAlignment(Qt::LayoutDirection  direction, Qt::Alignment  alignment);
   QPoint  static_QStyle_visualPos(Qt::LayoutDirection  direction, const QRect&  boundingRect, const QPoint&  logicalPos);
   QRect  static_QStyle_visualRect(Qt::LayoutDirection  direction, const QRect&  boundingRect, const QRect&  logicalRect);
};





class PythonQtShell_QStyleFactory : public QStyleFactory
{
public:
    PythonQtShell_QStyleFactory():QStyleFactory(),_wrapper(NULL) {};

   ~PythonQtShell_QStyleFactory();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleFactory : public QObject
{ Q_OBJECT
public:
public slots:
QStyleFactory* new_QStyleFactory();
void delete_QStyleFactory(QStyleFactory* obj) { delete obj; } 
   QStyle*  static_QStyleFactory_create(const QString&  arg__1);
   QStringList  static_QStyleFactory_keys();
};





class PythonQtShell_QStyleHintReturn : public QStyleHintReturn
{
public:
    PythonQtShell_QStyleHintReturn(int  version = QStyleOption::Version, int  type = SH_Default):QStyleHintReturn(version, type),_wrapper(NULL) {};

   ~PythonQtShell_QStyleHintReturn();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleHintReturn : public QObject
{ Q_OBJECT
public:
Q_ENUMS(HintReturnType StyleOptionType StyleOptionVersion )
enum HintReturnType{
  SH_Default = QStyleHintReturn::SH_Default,   SH_Mask = QStyleHintReturn::SH_Mask,   SH_Variant = QStyleHintReturn::SH_Variant};
enum StyleOptionType{
  Type = QStyleHintReturn::Type};
enum StyleOptionVersion{
  Version = QStyleHintReturn::Version};
public slots:
QStyleHintReturn* new_QStyleHintReturn(int  version = QStyleOption::Version, int  type = SH_Default);
void delete_QStyleHintReturn(QStyleHintReturn* obj) { delete obj; } 
void py_set_type(QStyleHintReturn* theWrappedObject, int  type){ theWrappedObject->type = type; }
int  py_get_type(QStyleHintReturn* theWrappedObject){ return theWrappedObject->type; }
void py_set_version(QStyleHintReturn* theWrappedObject, int  version){ theWrappedObject->version = version; }
int  py_get_version(QStyleHintReturn* theWrappedObject){ return theWrappedObject->version; }
};





class PythonQtShell_QStyleHintReturnMask : public QStyleHintReturnMask
{
public:
    PythonQtShell_QStyleHintReturnMask():QStyleHintReturnMask(),_wrapper(NULL) {};

   ~PythonQtShell_QStyleHintReturnMask();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleHintReturnMask : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleHintReturnMask::Type};
enum StyleOptionVersion{
  Version = QStyleHintReturnMask::Version};
public slots:
QStyleHintReturnMask* new_QStyleHintReturnMask();
void delete_QStyleHintReturnMask(QStyleHintReturnMask* obj) { delete obj; } 
void py_set_region(QStyleHintReturnMask* theWrappedObject, QRegion  region){ theWrappedObject->region = region; }
QRegion  py_get_region(QStyleHintReturnMask* theWrappedObject){ return theWrappedObject->region; }
};





class PythonQtShell_QStyleHintReturnVariant : public QStyleHintReturnVariant
{
public:
    PythonQtShell_QStyleHintReturnVariant():QStyleHintReturnVariant(),_wrapper(NULL) {};

   ~PythonQtShell_QStyleHintReturnVariant();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleHintReturnVariant : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleHintReturnVariant::Type};
enum StyleOptionVersion{
  Version = QStyleHintReturnVariant::Version};
public slots:
QStyleHintReturnVariant* new_QStyleHintReturnVariant();
void delete_QStyleHintReturnVariant(QStyleHintReturnVariant* obj) { delete obj; } 
void py_set_variant(QStyleHintReturnVariant* theWrappedObject, QVariant  variant){ theWrappedObject->variant = variant; }
QVariant  py_get_variant(QStyleHintReturnVariant* theWrappedObject){ return theWrappedObject->variant; }
};





class PythonQtWrapper_QStyleHints : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QStyleHints(QStyleHints* obj) { delete obj; } 
   int  cursorFlashTime(QStyleHints* theWrappedObject) const;
   qreal  fontSmoothingGamma(QStyleHints* theWrappedObject) const;
   int  keyboardAutoRepeatRate(QStyleHints* theWrappedObject) const;
   int  keyboardInputInterval(QStyleHints* theWrappedObject) const;
   int  mouseDoubleClickInterval(QStyleHints* theWrappedObject) const;
   int  mousePressAndHoldInterval(QStyleHints* theWrappedObject) const;
   int  mouseQuickSelectionThreshold(QStyleHints* theWrappedObject) const;
   QChar  passwordMaskCharacter(QStyleHints* theWrappedObject) const;
   int  passwordMaskDelay(QStyleHints* theWrappedObject) const;
   void setCursorFlashTime(QStyleHints* theWrappedObject, int  cursorFlashTime);
   bool  setFocusOnTouchRelease(QStyleHints* theWrappedObject) const;
   void setKeyboardInputInterval(QStyleHints* theWrappedObject, int  keyboardInputInterval);
   void setMouseDoubleClickInterval(QStyleHints* theWrappedObject, int  mouseDoubleClickInterval);
   void setMousePressAndHoldInterval(QStyleHints* theWrappedObject, int  mousePressAndHoldInterval);
   void setMouseQuickSelectionThreshold(QStyleHints* theWrappedObject, int  threshold);
   void setStartDragDistance(QStyleHints* theWrappedObject, int  startDragDistance);
   void setStartDragTime(QStyleHints* theWrappedObject, int  startDragTime);
   void setTabFocusBehavior(QStyleHints* theWrappedObject, Qt::TabFocusBehavior  tabFocusBehavior);
   void setUseHoverEffects(QStyleHints* theWrappedObject, bool  useHoverEffects);
   void setWheelScrollLines(QStyleHints* theWrappedObject, int  scrollLines);
   bool  showIsFullScreen(QStyleHints* theWrappedObject) const;
   bool  showIsMaximized(QStyleHints* theWrappedObject) const;
   bool  showShortcutsInContextMenus(QStyleHints* theWrappedObject) const;
   bool  singleClickActivation(QStyleHints* theWrappedObject) const;
   int  startDragDistance(QStyleHints* theWrappedObject) const;
   int  startDragTime(QStyleHints* theWrappedObject) const;
   int  startDragVelocity(QStyleHints* theWrappedObject) const;
   Qt::TabFocusBehavior  tabFocusBehavior(QStyleHints* theWrappedObject) const;
   bool  useHoverEffects(QStyleHints* theWrappedObject) const;
   bool  useRtlExtensions(QStyleHints* theWrappedObject) const;
   int  wheelScrollLines(QStyleHints* theWrappedObject) const;
};





class PythonQtShell_QStyleOption : public QStyleOption
{
public:
    PythonQtShell_QStyleOption(const QStyleOption&  other):QStyleOption(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOption(int  version = QStyleOption::Version, int  type = SO_Default):QStyleOption(version, type),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOption();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOption : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OptionType StyleOptionType StyleOptionVersion )
enum OptionType{
  SO_Default = QStyleOption::SO_Default,   SO_FocusRect = QStyleOption::SO_FocusRect,   SO_Button = QStyleOption::SO_Button,   SO_Tab = QStyleOption::SO_Tab,   SO_MenuItem = QStyleOption::SO_MenuItem,   SO_Frame = QStyleOption::SO_Frame,   SO_ProgressBar = QStyleOption::SO_ProgressBar,   SO_ToolBox = QStyleOption::SO_ToolBox,   SO_Header = QStyleOption::SO_Header,   SO_DockWidget = QStyleOption::SO_DockWidget,   SO_ViewItem = QStyleOption::SO_ViewItem,   SO_TabWidgetFrame = QStyleOption::SO_TabWidgetFrame,   SO_TabBarBase = QStyleOption::SO_TabBarBase,   SO_RubberBand = QStyleOption::SO_RubberBand,   SO_ToolBar = QStyleOption::SO_ToolBar,   SO_GraphicsItem = QStyleOption::SO_GraphicsItem,   SO_Complex = QStyleOption::SO_Complex,   SO_Slider = QStyleOption::SO_Slider,   SO_SpinBox = QStyleOption::SO_SpinBox,   SO_ToolButton = QStyleOption::SO_ToolButton,   SO_ComboBox = QStyleOption::SO_ComboBox,   SO_TitleBar = QStyleOption::SO_TitleBar,   SO_GroupBox = QStyleOption::SO_GroupBox,   SO_SizeGrip = QStyleOption::SO_SizeGrip,   SO_CustomBase = QStyleOption::SO_CustomBase,   SO_ComplexCustomBase = QStyleOption::SO_ComplexCustomBase};
enum StyleOptionType{
  Type = QStyleOption::Type};
enum StyleOptionVersion{
  Version = QStyleOption::Version};
public slots:
QStyleOption* new_QStyleOption(const QStyleOption&  other);
QStyleOption* new_QStyleOption(int  version = QStyleOption::Version, int  type = SO_Default);
void delete_QStyleOption(QStyleOption* obj) { delete obj; } 
   void initFrom(QStyleOption* theWrappedObject, const QWidget*  w);
    QString py_toString(QStyleOption*);
void py_set_direction(QStyleOption* theWrappedObject, Qt::LayoutDirection  direction){ theWrappedObject->direction = direction; }
Qt::LayoutDirection  py_get_direction(QStyleOption* theWrappedObject){ return theWrappedObject->direction; }
void py_set_fontMetrics(QStyleOption* theWrappedObject, QFontMetrics  fontMetrics){ theWrappedObject->fontMetrics = fontMetrics; }
QFontMetrics  py_get_fontMetrics(QStyleOption* theWrappedObject){ return theWrappedObject->fontMetrics; }
void py_set_palette(QStyleOption* theWrappedObject, QPalette  palette){ theWrappedObject->palette = palette; }
QPalette  py_get_palette(QStyleOption* theWrappedObject){ return theWrappedObject->palette; }
void py_set_rect(QStyleOption* theWrappedObject, QRect  rect){ theWrappedObject->rect = rect; }
QRect  py_get_rect(QStyleOption* theWrappedObject){ return theWrappedObject->rect; }
void py_set_state(QStyleOption* theWrappedObject, QStyle::State  state){ theWrappedObject->state = state; }
QStyle::State  py_get_state(QStyleOption* theWrappedObject){ return theWrappedObject->state; }
void py_set_styleObject(QStyleOption* theWrappedObject, QObject*  styleObject){ theWrappedObject->styleObject = styleObject; }
QObject*  py_get_styleObject(QStyleOption* theWrappedObject){ return theWrappedObject->styleObject; }
void py_set_type(QStyleOption* theWrappedObject, int  type){ theWrappedObject->type = type; }
int  py_get_type(QStyleOption* theWrappedObject){ return theWrappedObject->type; }
void py_set_version(QStyleOption* theWrappedObject, int  version){ theWrappedObject->version = version; }
int  py_get_version(QStyleOption* theWrappedObject){ return theWrappedObject->version; }
};





class PythonQtShell_QStyleOptionButton : public QStyleOptionButton
{
public:
    PythonQtShell_QStyleOptionButton():QStyleOptionButton(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionButton(const QStyleOptionButton&  other):QStyleOptionButton(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionButton(int  version):QStyleOptionButton(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionButton();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionButton : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ButtonFeature StyleOptionType StyleOptionVersion )
Q_FLAGS(ButtonFeatures )
enum ButtonFeature{
  None = QStyleOptionButton::None,   Flat = QStyleOptionButton::Flat,   HasMenu = QStyleOptionButton::HasMenu,   DefaultButton = QStyleOptionButton::DefaultButton,   AutoDefaultButton = QStyleOptionButton::AutoDefaultButton,   CommandLinkButton = QStyleOptionButton::CommandLinkButton};
enum StyleOptionType{
  Type = QStyleOptionButton::Type};
enum StyleOptionVersion{
  Version = QStyleOptionButton::Version};
Q_DECLARE_FLAGS(ButtonFeatures, ButtonFeature)
public slots:
QStyleOptionButton* new_QStyleOptionButton();
QStyleOptionButton* new_QStyleOptionButton(const QStyleOptionButton&  other);
QStyleOptionButton* new_QStyleOptionButton(int  version);
void delete_QStyleOptionButton(QStyleOptionButton* obj) { delete obj; } 
void py_set_features(QStyleOptionButton* theWrappedObject, QStyleOptionButton::ButtonFeatures  features){ theWrappedObject->features = features; }
QStyleOptionButton::ButtonFeatures  py_get_features(QStyleOptionButton* theWrappedObject){ return theWrappedObject->features; }
void py_set_icon(QStyleOptionButton* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionButton* theWrappedObject){ return theWrappedObject->icon; }
void py_set_iconSize(QStyleOptionButton* theWrappedObject, QSize  iconSize){ theWrappedObject->iconSize = iconSize; }
QSize  py_get_iconSize(QStyleOptionButton* theWrappedObject){ return theWrappedObject->iconSize; }
void py_set_text(QStyleOptionButton* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionButton* theWrappedObject){ return theWrappedObject->text; }
};





class PythonQtShell_QStyleOptionComboBox : public QStyleOptionComboBox
{
public:
    PythonQtShell_QStyleOptionComboBox():QStyleOptionComboBox(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionComboBox(const QStyleOptionComboBox&  other):QStyleOptionComboBox(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionComboBox(int  version):QStyleOptionComboBox(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionComboBox();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionComboBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionComboBox::Type};
enum StyleOptionVersion{
  Version = QStyleOptionComboBox::Version};
public slots:
QStyleOptionComboBox* new_QStyleOptionComboBox();
QStyleOptionComboBox* new_QStyleOptionComboBox(const QStyleOptionComboBox&  other);
QStyleOptionComboBox* new_QStyleOptionComboBox(int  version);
void delete_QStyleOptionComboBox(QStyleOptionComboBox* obj) { delete obj; } 
void py_set_currentIcon(QStyleOptionComboBox* theWrappedObject, QIcon  currentIcon){ theWrappedObject->currentIcon = currentIcon; }
QIcon  py_get_currentIcon(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->currentIcon; }
void py_set_currentText(QStyleOptionComboBox* theWrappedObject, QString  currentText){ theWrappedObject->currentText = currentText; }
QString  py_get_currentText(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->currentText; }
void py_set_editable(QStyleOptionComboBox* theWrappedObject, bool  editable){ theWrappedObject->editable = editable; }
bool  py_get_editable(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->editable; }
void py_set_frame(QStyleOptionComboBox* theWrappedObject, bool  frame){ theWrappedObject->frame = frame; }
bool  py_get_frame(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->frame; }
void py_set_iconSize(QStyleOptionComboBox* theWrappedObject, QSize  iconSize){ theWrappedObject->iconSize = iconSize; }
QSize  py_get_iconSize(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->iconSize; }
void py_set_popupRect(QStyleOptionComboBox* theWrappedObject, QRect  popupRect){ theWrappedObject->popupRect = popupRect; }
QRect  py_get_popupRect(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->popupRect; }
};





class PythonQtShell_QStyleOptionDockWidget : public QStyleOptionDockWidget
{
public:
    PythonQtShell_QStyleOptionDockWidget():QStyleOptionDockWidget(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionDockWidget(const QStyleOptionDockWidget&  other):QStyleOptionDockWidget(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionDockWidget(int  version):QStyleOptionDockWidget(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionDockWidget();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionDockWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionDockWidget::Type};
enum StyleOptionVersion{
  Version = QStyleOptionDockWidget::Version};
public slots:
QStyleOptionDockWidget* new_QStyleOptionDockWidget();
QStyleOptionDockWidget* new_QStyleOptionDockWidget(const QStyleOptionDockWidget&  other);
QStyleOptionDockWidget* new_QStyleOptionDockWidget(int  version);
void delete_QStyleOptionDockWidget(QStyleOptionDockWidget* obj) { delete obj; } 
void py_set_closable(QStyleOptionDockWidget* theWrappedObject, bool  closable){ theWrappedObject->closable = closable; }
bool  py_get_closable(QStyleOptionDockWidget* theWrappedObject){ return theWrappedObject->closable; }
void py_set_floatable(QStyleOptionDockWidget* theWrappedObject, bool  floatable){ theWrappedObject->floatable = floatable; }
bool  py_get_floatable(QStyleOptionDockWidget* theWrappedObject){ return theWrappedObject->floatable; }
void py_set_movable(QStyleOptionDockWidget* theWrappedObject, bool  movable){ theWrappedObject->movable = movable; }
bool  py_get_movable(QStyleOptionDockWidget* theWrappedObject){ return theWrappedObject->movable; }
void py_set_title(QStyleOptionDockWidget* theWrappedObject, QString  title){ theWrappedObject->title = title; }
QString  py_get_title(QStyleOptionDockWidget* theWrappedObject){ return theWrappedObject->title; }
void py_set_verticalTitleBar(QStyleOptionDockWidget* theWrappedObject, bool  verticalTitleBar){ theWrappedObject->verticalTitleBar = verticalTitleBar; }
bool  py_get_verticalTitleBar(QStyleOptionDockWidget* theWrappedObject){ return theWrappedObject->verticalTitleBar; }
};





class PythonQtShell_QStyleOptionDockWidgetV2 : public QStyleOptionDockWidgetV2
{
public:
    PythonQtShell_QStyleOptionDockWidgetV2():QStyleOptionDockWidgetV2(),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionDockWidgetV2();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionDockWidgetV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionDockWidgetV2* new_QStyleOptionDockWidgetV2();
QStyleOptionDockWidgetV2* new_QStyleOptionDockWidgetV2(const QStyleOptionDockWidgetV2& other) {
PythonQtShell_QStyleOptionDockWidgetV2* a = new PythonQtShell_QStyleOptionDockWidgetV2();
*((QStyleOptionDockWidgetV2*)a) = other;
return a; }
void delete_QStyleOptionDockWidgetV2(QStyleOptionDockWidgetV2* obj) { delete obj; } 
};





class PythonQtShell_QStyleOptionFocusRect : public QStyleOptionFocusRect
{
public:
    PythonQtShell_QStyleOptionFocusRect():QStyleOptionFocusRect(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionFocusRect(const QStyleOptionFocusRect&  other):QStyleOptionFocusRect(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionFocusRect(int  version):QStyleOptionFocusRect(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionFocusRect();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionFocusRect : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionFocusRect::Type};
enum StyleOptionVersion{
  Version = QStyleOptionFocusRect::Version};
public slots:
QStyleOptionFocusRect* new_QStyleOptionFocusRect();
QStyleOptionFocusRect* new_QStyleOptionFocusRect(const QStyleOptionFocusRect&  other);
QStyleOptionFocusRect* new_QStyleOptionFocusRect(int  version);
void delete_QStyleOptionFocusRect(QStyleOptionFocusRect* obj) { delete obj; } 
void py_set_backgroundColor(QStyleOptionFocusRect* theWrappedObject, QColor  backgroundColor){ theWrappedObject->backgroundColor = backgroundColor; }
QColor  py_get_backgroundColor(QStyleOptionFocusRect* theWrappedObject){ return theWrappedObject->backgroundColor; }
};





class PythonQtShell_QStyleOptionFrame : public QStyleOptionFrame
{
public:
    PythonQtShell_QStyleOptionFrame():QStyleOptionFrame(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionFrame(const QStyleOptionFrame&  other):QStyleOptionFrame(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionFrame(int  version):QStyleOptionFrame(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionFrame();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FrameFeature StyleOptionType StyleOptionVersion )
Q_FLAGS(FrameFeatures )
enum FrameFeature{
  None = QStyleOptionFrame::None,   Flat = QStyleOptionFrame::Flat,   Rounded = QStyleOptionFrame::Rounded};
enum StyleOptionType{
  Type = QStyleOptionFrame::Type};
enum StyleOptionVersion{
  Version = QStyleOptionFrame::Version};
Q_DECLARE_FLAGS(FrameFeatures, FrameFeature)
public slots:
QStyleOptionFrame* new_QStyleOptionFrame();
QStyleOptionFrame* new_QStyleOptionFrame(const QStyleOptionFrame&  other);
QStyleOptionFrame* new_QStyleOptionFrame(int  version);
void delete_QStyleOptionFrame(QStyleOptionFrame* obj) { delete obj; } 
void py_set_features(QStyleOptionFrame* theWrappedObject, QStyleOptionFrame::FrameFeatures  features){ theWrappedObject->features = features; }
QStyleOptionFrame::FrameFeatures  py_get_features(QStyleOptionFrame* theWrappedObject){ return theWrappedObject->features; }
void py_set_frameShape(QStyleOptionFrame* theWrappedObject, QFrame::Shape  frameShape){ theWrappedObject->frameShape = frameShape; }
QFrame::Shape  py_get_frameShape(QStyleOptionFrame* theWrappedObject){ return theWrappedObject->frameShape; }
void py_set_lineWidth(QStyleOptionFrame* theWrappedObject, int  lineWidth){ theWrappedObject->lineWidth = lineWidth; }
int  py_get_lineWidth(QStyleOptionFrame* theWrappedObject){ return theWrappedObject->lineWidth; }
void py_set_midLineWidth(QStyleOptionFrame* theWrappedObject, int  midLineWidth){ theWrappedObject->midLineWidth = midLineWidth; }
int  py_get_midLineWidth(QStyleOptionFrame* theWrappedObject){ return theWrappedObject->midLineWidth; }
};





class PythonQtShell_QStyleOptionFrameV2 : public QStyleOptionFrameV2
{
public:
    PythonQtShell_QStyleOptionFrameV2():QStyleOptionFrameV2(),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionFrameV2();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionFrameV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionFrameV2* new_QStyleOptionFrameV2();
QStyleOptionFrameV2* new_QStyleOptionFrameV2(const QStyleOptionFrameV2& other) {
PythonQtShell_QStyleOptionFrameV2* a = new PythonQtShell_QStyleOptionFrameV2();
*((QStyleOptionFrameV2*)a) = other;
return a; }
void delete_QStyleOptionFrameV2(QStyleOptionFrameV2* obj) { delete obj; } 
};


