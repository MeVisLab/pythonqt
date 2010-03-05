#include <PythonQt.h>
#include <QColor>
#include <QImage>
#include <QObject>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QVarLengthArray>
#include <QVariant>
#include <qabstractbutton.h>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qapplication.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdialog.h>
#include <qdockwidget.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputcontext.h>
#include <qiodevice.h>
#include <qitemdelegate.h>
#include <qitemeditorfactory.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlcdnumber.h>
#include <qline.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlistview.h>
#include <qlistwidget.h>
#include <qlocale.h>
#include <qmainwindow.h>
#include <qmdiarea.h>
#include <qmdisubwindow.h>
#include <qmenu.h>
#include <qmenubar.h>
#include <qmessagebox.h>
#include <qmimedata.h>
#include <qmotifstyle.h>
#include <qmovie.h>
#include <qobject.h>
#include <qpagesetupdialog.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qpushbutton.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstatusbar.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtoolbar.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qwidget.h>



class PythonQtShell_QIntValidator : public QIntValidator
{
public:
    PythonQtShell_QIntValidator(QObject*  parent):QIntValidator(parent),_wrapper(NULL) {};
    PythonQtShell_QIntValidator(int  bottom, int  top, QObject*  parent):QIntValidator(bottom, top, parent),_wrapper(NULL) {};

virtual QValidator::State  validate(QString&  arg__1, int&  arg__2) const;
virtual void setRange(int  bottom, int  top);
virtual void fixup(QString&  arg__1) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIntValidator : public QIntValidator
{ public:
inline QValidator::State  promoted_validate(QString&  arg__1, int&  arg__2) const { return QIntValidator::validate(arg__1, arg__2); }
inline void promoted_setRange(int  bottom, int  top) { QIntValidator::setRange(bottom, top); }
};

class PythonQtWrapper_QIntValidator : public QObject
{ Q_OBJECT
public:
public slots:
QIntValidator* new_QIntValidator(QObject*  parent);
QIntValidator* new_QIntValidator(int  bottom, int  top, QObject*  parent);
void delete_QIntValidator(QIntValidator* obj) { delete obj; } 
   QValidator::State  validate(QIntValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const;
   void setRange(QIntValidator* theWrappedObject, int  bottom, int  top);
   void setTop(QIntValidator* theWrappedObject, int  arg__1);
   void setBottom(QIntValidator* theWrappedObject, int  arg__1);
   int  bottom(QIntValidator* theWrappedObject) const;
   int  top(QIntValidator* theWrappedObject) const;
};





class PythonQtShell_QItemDelegate : public QItemDelegate
{
public:
    PythonQtShell_QItemDelegate(QObject*  parent = 0):QItemDelegate(parent),_wrapper(NULL) {};

virtual void updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const;
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual void setEditorData(QWidget*  editor, const QModelIndex&  index) const;
virtual void paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const;
virtual void drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const;
virtual QSize  sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual bool  editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
virtual QWidget*  createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
virtual void drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QItemDelegate : public QItemDelegate
{ public:
inline void promoted_updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QItemDelegate::updateEditorGeometry(editor, option, index); }
inline void promoted_drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const { QItemDelegate::drawFocus(painter, option, rect); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QItemDelegate::eventFilter(object, event); }
inline void promoted_setEditorData(QWidget*  editor, const QModelIndex&  index) const { QItemDelegate::setEditorData(editor, index); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QItemDelegate::paint(painter, option, index); }
inline void promoted_drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const { QItemDelegate::drawDecoration(painter, option, rect, pixmap); }
inline void promoted_drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const { QItemDelegate::drawCheck(painter, option, rect, state); }
inline QSize  promoted_sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QItemDelegate::sizeHint(option, index); }
inline bool  promoted_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return QItemDelegate::editorEvent(event, model, option, index); }
inline QWidget*  promoted_createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QItemDelegate::createEditor(parent, option, index); }
inline void promoted_setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const { QItemDelegate::setModelData(editor, model, index); }
inline void promoted_drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const { QItemDelegate::drawDisplay(painter, option, rect, text); }
};

class PythonQtWrapper_QItemDelegate : public QObject
{ Q_OBJECT
public:
public slots:
QItemDelegate* new_QItemDelegate(QObject*  parent = 0);
void delete_QItemDelegate(QItemDelegate* obj) { delete obj; } 
   void updateEditorGeometry(QItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void drawFocus(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const;
   bool  eventFilter(QItemDelegate* theWrappedObject, QObject*  object, QEvent*  event);
   void setEditorData(QItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const;
   void paint(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void drawDecoration(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const;
   void setClipping(QItemDelegate* theWrappedObject, bool  clip);
   void drawCheck(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const;
   QSize  sizeHint(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   bool  editorEvent(QItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
   QItemEditorFactory*  itemEditorFactory(QItemDelegate* theWrappedObject) const;
   void setItemEditorFactory(QItemDelegate* theWrappedObject, QItemEditorFactory*  factory);
   QWidget*  createEditor(QItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void setModelData(QItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
   bool  hasClipping(QItemDelegate* theWrappedObject) const;
   void drawDisplay(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const;
};





class PythonQtShell_QItemEditorCreatorBase : public QItemEditorCreatorBase
{
public:
    PythonQtShell_QItemEditorCreatorBase():QItemEditorCreatorBase(),_wrapper(NULL) {};

virtual QWidget*  createWidget(QWidget*  parent) const;
virtual QByteArray  valuePropertyName() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QItemEditorCreatorBase : public QObject
{ Q_OBJECT
public:
public slots:
QItemEditorCreatorBase* new_QItemEditorCreatorBase();
void delete_QItemEditorCreatorBase(QItemEditorCreatorBase* obj) { delete obj; } 
};





class PythonQtShell_QItemEditorFactory : public QItemEditorFactory
{
public:
    PythonQtShell_QItemEditorFactory():QItemEditorFactory(),_wrapper(NULL) {};

virtual QWidget*  createEditor(QVariant::Type  type, QWidget*  parent) const;
virtual QByteArray  valuePropertyName(QVariant::Type  type) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QItemEditorFactory : public QItemEditorFactory
{ public:
inline QWidget*  promoted_createEditor(QVariant::Type  type, QWidget*  parent) const { return QItemEditorFactory::createEditor(type, parent); }
inline QByteArray  promoted_valuePropertyName(QVariant::Type  type) const { return QItemEditorFactory::valuePropertyName(type); }
};

class PythonQtWrapper_QItemEditorFactory : public QObject
{ Q_OBJECT
public:
public slots:
QItemEditorFactory* new_QItemEditorFactory();
void delete_QItemEditorFactory(QItemEditorFactory* obj) { delete obj; } 
   QWidget*  createEditor(QItemEditorFactory* theWrappedObject, QVariant::Type  type, QWidget*  parent) const;
   const QItemEditorFactory*  static_QItemEditorFactory_defaultFactory();
   void registerEditor(QItemEditorFactory* theWrappedObject, QVariant::Type  type, QItemEditorCreatorBase*  creator);
   void static_QItemEditorFactory_setDefaultFactory(QItemEditorFactory*  factory);
   QByteArray  valuePropertyName(QItemEditorFactory* theWrappedObject, QVariant::Type  type) const;
};





class PythonQtWrapper_QItemSelection : public QObject
{ Q_OBJECT
public:
public slots:
QItemSelection* new_QItemSelection();
QItemSelection* new_QItemSelection(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
QItemSelection* new_QItemSelection(const QItemSelection& other) {
QItemSelection* a = new QItemSelection();
*((QItemSelection*)a) = other;
return a; }
void delete_QItemSelection(QItemSelection* obj) { delete obj; } 
   void merge(QItemSelection* theWrappedObject, const QItemSelection&  other, QItemSelectionModel::SelectionFlags  command);
   void static_QItemSelection_split(const QItemSelectionRange&  range, const QItemSelectionRange&  other, QItemSelection*  result);
   QList<QModelIndex >  indexes(QItemSelection* theWrappedObject) const;
   bool  contains(QItemSelection* theWrappedObject, const QModelIndex&  index) const;
   void select(QItemSelection* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   int  count(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const;
   const QItemSelectionRange*  back(QItemSelection* theWrappedObject) const;
   const QItemSelectionRange*  at(QItemSelection* theWrappedObject, int  i) const;
   void append(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   bool  empty(QItemSelection* theWrappedObject) const;
   void clear(QItemSelection* theWrappedObject);
   int  count(QItemSelection* theWrappedObject) const;
   const QItemSelectionRange*  last(QItemSelection* theWrappedObject) const;
   void move(QItemSelection* theWrappedObject, int  from, int  to);
   const QItemSelectionRange*  first(QItemSelection* theWrappedObject) const;
   const QItemSelectionRange*  front(QItemSelection* theWrappedObject) const;
   QList<QItemSelectionRange >  static_QItemSelection_fromVector(const QVector<QItemSelectionRange >&  vector);
   int  indexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const;
   bool  isEmpty(QItemSelection* theWrappedObject) const;
   int  lastIndexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const;
   QList<QItemSelectionRange >  mid(QItemSelection* theWrappedObject, int  pos, int  length) const;
   void pop_front(QItemSelection* theWrappedObject);
   void push_back(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   bool  operator_equal(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l) const;
   void pop_back(QItemSelection* theWrappedObject);
   void prepend(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   bool  removeOne(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void push_front(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   int  removeAll(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void removeAt(QItemSelection* theWrappedObject, int  i);
   void removeFirst(QItemSelection* theWrappedObject);
   void swap(QItemSelection* theWrappedObject, int  i, int  j);
   void removeLast(QItemSelection* theWrappedObject);
   void replace(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  t);
   void setSharable(QItemSelection* theWrappedObject, bool  sharable);
   QItemSelectionRange  takeFirst(QItemSelection* theWrappedObject);
   int  size(QItemSelection* theWrappedObject) const;
   QItemSelectionRange  takeLast(QItemSelection* theWrappedObject);
   QVector<QItemSelectionRange >  toVector(QItemSelection* theWrappedObject) const;
   QItemSelectionRange  takeAt(QItemSelection* theWrappedObject, int  i);
   QItemSelectionRange  value(QItemSelection* theWrappedObject, int  i) const;
   QItemSelectionRange  value(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  defaultValue) const;
};





class PythonQtShell_QItemSelectionModel : public QItemSelectionModel
{
public:
    PythonQtShell_QItemSelectionModel(QAbstractItemModel*  model):QItemSelectionModel(model),_wrapper(NULL) {};
    PythonQtShell_QItemSelectionModel(QAbstractItemModel*  model, QObject*  parent):QItemSelectionModel(model, parent),_wrapper(NULL) {};

virtual void reset();
virtual void select(const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command);
virtual void select(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command);
virtual void clear();
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QItemSelectionModel : public QItemSelectionModel
{ public:
inline void promoted_reset() { QItemSelectionModel::reset(); }
inline void promoted_select(const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command) { QItemSelectionModel::select(selection, command); }
inline void promoted_select(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command) { QItemSelectionModel::select(index, command); }
inline void promoted_clear() { QItemSelectionModel::clear(); }
};

class PythonQtWrapper_QItemSelectionModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SelectionFlag )
Q_FLAGS(SelectionFlags )
enum SelectionFlag{
  NoUpdate = QItemSelectionModel::NoUpdate,   Clear = QItemSelectionModel::Clear,   Select = QItemSelectionModel::Select,   Deselect = QItemSelectionModel::Deselect,   Toggle = QItemSelectionModel::Toggle,   Current = QItemSelectionModel::Current,   Rows = QItemSelectionModel::Rows,   Columns = QItemSelectionModel::Columns,   SelectCurrent = QItemSelectionModel::SelectCurrent,   ToggleCurrent = QItemSelectionModel::ToggleCurrent,   ClearAndSelect = QItemSelectionModel::ClearAndSelect};
Q_DECLARE_FLAGS(SelectionFlags, SelectionFlag)
public slots:
QItemSelectionModel* new_QItemSelectionModel(QAbstractItemModel*  model);
QItemSelectionModel* new_QItemSelectionModel(QAbstractItemModel*  model, QObject*  parent);
void delete_QItemSelectionModel(QItemSelectionModel* obj) { delete obj; } 
   const QAbstractItemModel*  model(QItemSelectionModel* theWrappedObject) const;
   bool  isSelected(QItemSelectionModel* theWrappedObject, const QModelIndex&  index) const;
   const QItemSelection  selection(QItemSelectionModel* theWrappedObject) const;
   bool  rowIntersectsSelection(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent) const;
   QList<QModelIndex >  selectedColumns(QItemSelectionModel* theWrappedObject, int  row = 0) const;
   QList<QModelIndex >  selectedIndexes(QItemSelectionModel* theWrappedObject) const;
   bool  isRowSelected(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent) const;
   QModelIndex  currentIndex(QItemSelectionModel* theWrappedObject) const;
   QList<QModelIndex >  selectedRows(QItemSelectionModel* theWrappedObject, int  column = 0) const;
   bool  hasSelection(QItemSelectionModel* theWrappedObject) const;
   bool  isColumnSelected(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent) const;
   bool  columnIntersectsSelection(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent) const;
};





class PythonQtWrapper_QItemSelectionRange : public QObject
{ Q_OBJECT
public:
public slots:
QItemSelectionRange* new_QItemSelectionRange();
QItemSelectionRange* new_QItemSelectionRange(const QItemSelectionRange&  other);
QItemSelectionRange* new_QItemSelectionRange(const QModelIndex&  index);
QItemSelectionRange* new_QItemSelectionRange(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
void delete_QItemSelectionRange(QItemSelectionRange* obj) { delete obj; } 
   int  height(QItemSelectionRange* theWrappedObject) const;
   int  left(QItemSelectionRange* theWrappedObject) const;
   bool  intersects(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   QModelIndex  parent(QItemSelectionRange* theWrappedObject) const;
   const QAbstractItemModel*  model(QItemSelectionRange* theWrappedObject) const;
   QModelIndex  bottomRight(QItemSelectionRange* theWrappedObject) const;
   bool  isValid(QItemSelectionRange* theWrappedObject) const;
   QItemSelectionRange  intersected(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   QList<QModelIndex >  indexes(QItemSelectionRange* theWrappedObject) const;
   int  right(QItemSelectionRange* theWrappedObject) const;
   int  bottom(QItemSelectionRange* theWrappedObject) const;
   QModelIndex  topLeft(QItemSelectionRange* theWrappedObject) const;
   bool  operator_equal(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   bool  contains(QItemSelectionRange* theWrappedObject, int  row, int  column, const QModelIndex&  parentIndex) const;
   int  top(QItemSelectionRange* theWrappedObject) const;
   bool  contains(QItemSelectionRange* theWrappedObject, const QModelIndex&  index) const;
   int  width(QItemSelectionRange* theWrappedObject) const;
    QString toString(QItemSelectionRange*);
};





class PythonQtShell_QKeyEvent : public QKeyEvent
{
public:
    PythonQtShell_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, const QString&  text = QString(), bool  autorep = false, ushort  count = 1):QKeyEvent(type, key, modifiers, text, autorep, count),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QKeyEvent : public QObject
{ Q_OBJECT
public:
public slots:
QKeyEvent* new_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, const QString&  text = QString(), bool  autorep = false, ushort  count = 1);
void delete_QKeyEvent(QKeyEvent* obj) { delete obj; } 
   QKeyEvent*  static_QKeyEvent_createExtendedKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, unsigned int  nativeScanCode, unsigned int  nativeVirtualKey, unsigned int  nativeModifiers, const QString&  text = QString(), bool  autorep = false, ushort  count = 1);
   unsigned int  nativeVirtualKey(QKeyEvent* theWrappedObject) const;
   bool  hasExtendedInfo(QKeyEvent* theWrappedObject) const;
   bool  isAutoRepeat(QKeyEvent* theWrappedObject) const;
   int  key(QKeyEvent* theWrappedObject) const;
   int  count(QKeyEvent* theWrappedObject) const;
   bool  matches(QKeyEvent* theWrappedObject, QKeySequence::StandardKey  key) const;
   Qt::KeyboardModifiers  modifiers(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeScanCode(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeModifiers(QKeyEvent* theWrappedObject) const;
   QString  text(QKeyEvent* theWrappedObject) const;
};





class PythonQtShell_QLCDNumber : public QLCDNumber
{
public:
    PythonQtShell_QLCDNumber(QWidget*  parent = 0):QLCDNumber(parent),_wrapper(NULL) {};
    PythonQtShell_QLCDNumber(uint  numDigits, QWidget*  parent = 0):QLCDNumber(numDigits, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  e);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
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
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLCDNumber : public QLCDNumber
{ public:
inline bool  promoted_event(QEvent*  e) { return QLCDNumber::event(e); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QLCDNumber::paintEvent(arg__1); }
};

class PythonQtWrapper_QLCDNumber : public QObject
{ Q_OBJECT
public:
public slots:
QLCDNumber* new_QLCDNumber(QWidget*  parent = 0);
QLCDNumber* new_QLCDNumber(uint  numDigits, QWidget*  parent = 0);
void delete_QLCDNumber(QLCDNumber* obj) { delete obj; } 
   int  intValue(QLCDNumber* theWrappedObject) const;
   bool  checkOverflow(QLCDNumber* theWrappedObject, int  num) const;
   double  value(QLCDNumber* theWrappedObject) const;
   void setMode(QLCDNumber* theWrappedObject, QLCDNumber::Mode  arg__1);
   int  numDigits(QLCDNumber* theWrappedObject) const;
   bool  smallDecimalPoint(QLCDNumber* theWrappedObject) const;
   bool  event(QLCDNumber* theWrappedObject, QEvent*  e);
   void setNumDigits(QLCDNumber* theWrappedObject, int  nDigits);
   QLCDNumber::SegmentStyle  segmentStyle(QLCDNumber* theWrappedObject) const;
   QSize  sizeHint(QLCDNumber* theWrappedObject) const;
   void setSegmentStyle(QLCDNumber* theWrappedObject, QLCDNumber::SegmentStyle  arg__1);
   QLCDNumber::Mode  mode(QLCDNumber* theWrappedObject) const;
   bool  checkOverflow(QLCDNumber* theWrappedObject, double  num) const;
   void paintEvent(QLCDNumber* theWrappedObject, QPaintEvent*  arg__1);
};





class PythonQtShell_QLabel : public QLabel
{
public:
    PythonQtShell_QLabel(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QLabel(parent, f),_wrapper(NULL) {};
    PythonQtShell_QLabel(const QString&  text, QWidget*  parent = 0, Qt::WindowFlags  f = 0):QLabel(text, parent, f),_wrapper(NULL) {};

virtual void contextMenuEvent(QContextMenuEvent*  ev);
virtual bool  focusNextPrevChild(bool  next);
virtual void mouseMoveEvent(QMouseEvent*  ev);
virtual void focusInEvent(QFocusEvent*  ev);
virtual void mouseReleaseEvent(QMouseEvent*  ev);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual int  heightForWidth(int  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void focusOutEvent(QFocusEvent*  ev);
virtual void mousePressEvent(QMouseEvent*  ev);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLabel : public QLabel
{ public:
inline void promoted_contextMenuEvent(QContextMenuEvent*  ev) { QLabel::contextMenuEvent(ev); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QLabel::focusNextPrevChild(next); }
inline void promoted_mouseMoveEvent(QMouseEvent*  ev) { QLabel::mouseMoveEvent(ev); }
inline void promoted_focusInEvent(QFocusEvent*  ev) { QLabel::focusInEvent(ev); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  ev) { QLabel::mouseReleaseEvent(ev); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QLabel::paintEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QLabel::changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  e) { return QLabel::event(e); }
inline int  promoted_heightForWidth(int  arg__1) const { return QLabel::heightForWidth(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  ev) { QLabel::keyPressEvent(ev); }
inline void promoted_focusOutEvent(QFocusEvent*  ev) { QLabel::focusOutEvent(ev); }
inline void promoted_mousePressEvent(QMouseEvent*  ev) { QLabel::mousePressEvent(ev); }
};

class PythonQtWrapper_QLabel : public QObject
{ Q_OBJECT
public:
public slots:
QLabel* new_QLabel(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
QLabel* new_QLabel(const QString&  text, QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QLabel(QLabel* obj) { delete obj; } 
   void setWordWrap(QLabel* theWrappedObject, bool  on);
   void contextMenuEvent(QLabel* theWrappedObject, QContextMenuEvent*  ev);
   Qt::TextFormat  textFormat(QLabel* theWrappedObject) const;
   bool  focusNextPrevChild(QLabel* theWrappedObject, bool  next);
   void setTextFormat(QLabel* theWrappedObject, Qt::TextFormat  arg__1);
   int  margin(QLabel* theWrappedObject) const;
   bool  openExternalLinks(QLabel* theWrappedObject) const;
   Qt::Alignment  alignment(QLabel* theWrappedObject) const;
   bool  wordWrap(QLabel* theWrappedObject) const;
   void setIndent(QLabel* theWrappedObject, int  arg__1);
   void mouseMoveEvent(QLabel* theWrappedObject, QMouseEvent*  ev);
   QSize  sizeHint(QLabel* theWrappedObject) const;
   QWidget*  buddy(QLabel* theWrappedObject) const;
   void setOpenExternalLinks(QLabel* theWrappedObject, bool  open);
   void setTextInteractionFlags(QLabel* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setMargin(QLabel* theWrappedObject, int  arg__1);
   const QPicture*  picture(QLabel* theWrappedObject) const;
   void setScaledContents(QLabel* theWrappedObject, bool  arg__1);
   void focusInEvent(QLabel* theWrappedObject, QFocusEvent*  ev);
   void mouseReleaseEvent(QLabel* theWrappedObject, QMouseEvent*  ev);
   void paintEvent(QLabel* theWrappedObject, QPaintEvent*  arg__1);
   int  indent(QLabel* theWrappedObject) const;
   bool  hasScaledContents(QLabel* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QLabel* theWrappedObject) const;
   const QPixmap*  pixmap(QLabel* theWrappedObject) const;
   void changeEvent(QLabel* theWrappedObject, QEvent*  arg__1);
   QMovie*  movie(QLabel* theWrappedObject) const;
   bool  event(QLabel* theWrappedObject, QEvent*  e);
   int  heightForWidth(QLabel* theWrappedObject, int  arg__1) const;
   void setAlignment(QLabel* theWrappedObject, Qt::Alignment  arg__1);
   QSize  minimumSizeHint(QLabel* theWrappedObject) const;
   void setBuddy(QLabel* theWrappedObject, QWidget*  arg__1);
   QString  text(QLabel* theWrappedObject) const;
   void keyPressEvent(QLabel* theWrappedObject, QKeyEvent*  ev);
   void focusOutEvent(QLabel* theWrappedObject, QFocusEvent*  ev);
   void mousePressEvent(QLabel* theWrappedObject, QMouseEvent*  ev);
};





class PythonQtShell_QLayout : public QLayout
{
public:
    PythonQtShell_QLayout():QLayout(),_wrapper(NULL) {};
    PythonQtShell_QLayout(QWidget*  parent):QLayout(parent),_wrapper(NULL) {};

virtual QSize  minimumSize() const;
virtual QLayoutItem*  takeAt(int  index);
virtual int  indexOf(QWidget*  arg__1) const;
virtual QLayoutItem*  itemAt(int  index) const;
virtual bool  isEmpty() const;
virtual Qt::Orientations  expandingDirections() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QLayout*  layout();
virtual QRect  geometry() const;
virtual QSize  maximumSize() const;
virtual int  count() const;
virtual void addItem(QLayoutItem*  arg__1);
virtual void childEvent(QChildEvent*  e);
virtual void invalidate();
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual QWidget*  widget();
virtual QSpacerItem*  spacerItem();
virtual int  heightForWidth(int  arg__1) const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual bool  hasHeightForWidth() const;
virtual QSize  sizeHint() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLayout : public QLayout
{ public:
inline QSize  promoted_minimumSize() const { return QLayout::minimumSize(); }
inline int  promoted_indexOf(QWidget*  arg__1) const { return QLayout::indexOf(arg__1); }
inline bool  promoted_isEmpty() const { return QLayout::isEmpty(); }
inline Qt::Orientations  promoted_expandingDirections() const { return QLayout::expandingDirections(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QLayout::setGeometry(arg__1); }
inline QLayout*  promoted_layout() { return QLayout::layout(); }
inline QRect  promoted_geometry() const { return QLayout::geometry(); }
inline QSize  promoted_maximumSize() const { return QLayout::maximumSize(); }
inline void promoted_childEvent(QChildEvent*  e) { QLayout::childEvent(e); }
inline void promoted_invalidate() { QLayout::invalidate(); }
};

class PythonQtWrapper_QLayout : public QObject
{ Q_OBJECT
public:
public slots:
QLayout* new_QLayout();
QLayout* new_QLayout(QWidget*  parent);
void delete_QLayout(QLayout* obj) { delete obj; } 
   QSize  minimumSize(QLayout* theWrappedObject) const;
   void removeWidget(QLayout* theWrappedObject, QWidget*  w);
   int  indexOf(QLayout* theWrappedObject, QWidget*  arg__1) const;
   void setContentsMargins(QLayout* theWrappedObject, int  left, int  top, int  right, int  bottom);
   QWidget*  menuBar(QLayout* theWrappedObject) const;
   QLayout::SizeConstraint  sizeConstraint(QLayout* theWrappedObject) const;
   bool  isEmpty(QLayout* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QLayout* theWrappedObject) const;
   QSize  totalSizeHint(QLayout* theWrappedObject) const;
   int  spacing(QLayout* theWrappedObject) const;
   void setGeometry(QLayout* theWrappedObject, const QRect&  arg__1);
   bool  activate(QLayout* theWrappedObject);
   void setEnabled(QLayout* theWrappedObject, bool  arg__1);
   QSize  static_QLayout_closestAcceptableSize(const QWidget*  w, const QSize&  s);
   void setMenuBar(QLayout* theWrappedObject, QWidget*  w);
   void getContentsMargins(QLayout* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const;
   void update(QLayout* theWrappedObject);
   void setSizeConstraint(QLayout* theWrappedObject, QLayout::SizeConstraint  arg__1);
   QLayout*  layout(QLayout* theWrappedObject);
   QRect  contentsRect(QLayout* theWrappedObject) const;
   void addWidget(QLayout* theWrappedObject, QWidget*  w);
   void setMargin(QLayout* theWrappedObject, int  arg__1);
   QWidget*  parentWidget(QLayout* theWrappedObject) const;
   QRect  geometry(QLayout* theWrappedObject) const;
   QSize  maximumSize(QLayout* theWrappedObject) const;
   QSize  totalMinimumSize(QLayout* theWrappedObject) const;
   void removeItem(QLayout* theWrappedObject, QLayoutItem*  arg__1);
   void setAlignment(QLayout* theWrappedObject, Qt::Alignment  alignment);
   bool  setAlignment(QLayout* theWrappedObject, QLayout*  l, Qt::Alignment  alignment);
   QSize  totalMaximumSize(QLayout* theWrappedObject) const;
   void setSpacing(QLayout* theWrappedObject, int  arg__1);
   void childEvent(QLayout* theWrappedObject, QChildEvent*  e);
   int  totalHeightForWidth(QLayout* theWrappedObject, int  w) const;
   bool  setAlignment(QLayout* theWrappedObject, QWidget*  w, Qt::Alignment  alignment);
   void invalidate(QLayout* theWrappedObject);
   bool  isEnabled(QLayout* theWrappedObject) const;
};





class PythonQtShell_QLayoutItem : public QLayoutItem
{
public:
    PythonQtShell_QLayoutItem(Qt::Alignment  alignment = 0):QLayoutItem(alignment),_wrapper(NULL) {};

virtual bool  isEmpty() const;
virtual bool  hasHeightForWidth() const;
virtual QSize  sizeHint() const;
virtual Qt::Orientations  expandingDirections() const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QWidget*  widget();
virtual QSize  maximumSize() const;
virtual QSize  minimumSize() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void setGeometry(const QRect&  arg__1);
virtual QRect  geometry() const;
virtual QLayout*  layout();
virtual QSpacerItem*  spacerItem();
virtual void invalidate();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLayoutItem : public QLayoutItem
{ public:
inline bool  promoted_hasHeightForWidth() const { return QLayoutItem::hasHeightForWidth(); }
inline int  promoted_minimumHeightForWidth(int  arg__1) const { return QLayoutItem::minimumHeightForWidth(arg__1); }
inline QWidget*  promoted_widget() { return QLayoutItem::widget(); }
inline int  promoted_heightForWidth(int  arg__1) const { return QLayoutItem::heightForWidth(arg__1); }
inline QLayout*  promoted_layout() { return QLayoutItem::layout(); }
inline QSpacerItem*  promoted_spacerItem() { return QLayoutItem::spacerItem(); }
inline void promoted_invalidate() { QLayoutItem::invalidate(); }
};

class PythonQtWrapper_QLayoutItem : public QObject
{ Q_OBJECT
public:
public slots:
QLayoutItem* new_QLayoutItem(Qt::Alignment  alignment = 0);
void delete_QLayoutItem(QLayoutItem* obj) { delete obj; } 
   bool  hasHeightForWidth(QLayoutItem* theWrappedObject) const;
   int  minimumHeightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const;
   QWidget*  widget(QLayoutItem* theWrappedObject);
   Qt::Alignment  alignment(QLayoutItem* theWrappedObject) const;
   void setAlignment(QLayoutItem* theWrappedObject, Qt::Alignment  a);
   int  heightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const;
   QSizePolicy::ControlTypes  controlTypes(QLayoutItem* theWrappedObject) const;
   QLayout*  layout(QLayoutItem* theWrappedObject);
   QSpacerItem*  spacerItem(QLayoutItem* theWrappedObject);
   void invalidate(QLayoutItem* theWrappedObject);
};





class PythonQtShell_QLineEdit : public QLineEdit
{
public:
    PythonQtShell_QLineEdit(QWidget*  parent = 0):QLineEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QLineEdit(const QString&  arg__1, QWidget*  parent = 0):QLineEdit(arg__1, parent),_wrapper(NULL) {};

virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLineEdit : public QLineEdit
{ public:
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QLineEdit::mouseReleaseEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QLineEdit::inputMethodQuery(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QLineEdit::keyPressEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QLineEdit::mousePressEvent(arg__1); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QLineEdit::dragEnterEvent(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { QLineEdit::dropEvent(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QLineEdit::focusInEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QLineEdit::mouseDoubleClickEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QLineEdit::dragMoveEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QLineEdit::mouseMoveEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QLineEdit::changeEvent(arg__1); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QLineEdit::inputMethodEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QLineEdit::dragLeaveEvent(e); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QLineEdit::focusOutEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QLineEdit::paintEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QLineEdit::contextMenuEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QLineEdit::event(arg__1); }
};

class PythonQtWrapper_QLineEdit : public QObject
{ Q_OBJECT
public:
public slots:
QLineEdit* new_QLineEdit(QWidget*  parent = 0);
QLineEdit* new_QLineEdit(const QString&  arg__1, QWidget*  parent = 0);
void delete_QLineEdit(QLineEdit* obj) { delete obj; } 
   QString  selectedText(QLineEdit* theWrappedObject) const;
   void mouseReleaseEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   int  cursorPosition(QLineEdit* theWrappedObject) const;
   void deselect(QLineEdit* theWrappedObject);
   QVariant  inputMethodQuery(QLineEdit* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void setInputMask(QLineEdit* theWrappedObject, const QString&  inputMask);
   void cursorForward(QLineEdit* theWrappedObject, bool  mark, int  steps = 1);
   void setDragEnabled(QLineEdit* theWrappedObject, bool  b);
   void keyPressEvent(QLineEdit* theWrappedObject, QKeyEvent*  arg__1);
   bool  hasSelectedText(QLineEdit* theWrappedObject) const;
   void setModified(QLineEdit* theWrappedObject, bool  arg__1);
   void setAlignment(QLineEdit* theWrappedObject, Qt::Alignment  flag);
   void mousePressEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   bool  isModified(QLineEdit* theWrappedObject) const;
   int  maxLength(QLineEdit* theWrappedObject) const;
   bool  dragEnabled(QLineEdit* theWrappedObject) const;
   void dragEnterEvent(QLineEdit* theWrappedObject, QDragEnterEvent*  arg__1);
   QString  inputMask(QLineEdit* theWrappedObject) const;
   void cursorBackward(QLineEdit* theWrappedObject, bool  mark, int  steps = 1);
   void setCompleter(QLineEdit* theWrappedObject, QCompleter*  completer);
   int  selectionStart(QLineEdit* theWrappedObject) const;
   QCompleter*  completer(QLineEdit* theWrappedObject) const;
   QLineEdit::EchoMode  echoMode(QLineEdit* theWrappedObject) const;
   void dropEvent(QLineEdit* theWrappedObject, QDropEvent*  arg__1);
   QSize  minimumSizeHint(QLineEdit* theWrappedObject) const;
   void focusInEvent(QLineEdit* theWrappedObject, QFocusEvent*  arg__1);
   void mouseDoubleClickEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   void dragMoveEvent(QLineEdit* theWrappedObject, QDragMoveEvent*  e);
   Qt::Alignment  alignment(QLineEdit* theWrappedObject) const;
   void backspace(QLineEdit* theWrappedObject);
   void end(QLineEdit* theWrappedObject, bool  mark);
   bool  hasFrame(QLineEdit* theWrappedObject) const;
   QSize  sizeHint(QLineEdit* theWrappedObject) const;
   void del(QLineEdit* theWrappedObject);
   void mouseMoveEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   bool  isRedoAvailable(QLineEdit* theWrappedObject) const;
   bool  hasAcceptableInput(QLineEdit* theWrappedObject) const;
   QMenu*  createStandardContextMenu(QLineEdit* theWrappedObject);
   QString  displayText(QLineEdit* theWrappedObject) const;
   void changeEvent(QLineEdit* theWrappedObject, QEvent*  arg__1);
   void inputMethodEvent(QLineEdit* theWrappedObject, QInputMethodEvent*  arg__1);
   bool  isReadOnly(QLineEdit* theWrappedObject) const;
   void setValidator(QLineEdit* theWrappedObject, const QValidator*  arg__1);
   void setFrame(QLineEdit* theWrappedObject, bool  arg__1);
   void setSelection(QLineEdit* theWrappedObject, int  arg__1, int  arg__2);
   void home(QLineEdit* theWrappedObject, bool  mark);
   void setEchoMode(QLineEdit* theWrappedObject, QLineEdit::EchoMode  arg__1);
   void cursorWordBackward(QLineEdit* theWrappedObject, bool  mark);
   void dragLeaveEvent(QLineEdit* theWrappedObject, QDragLeaveEvent*  e);
   void focusOutEvent(QLineEdit* theWrappedObject, QFocusEvent*  arg__1);
   QString  text(QLineEdit* theWrappedObject) const;
   void setCursorPosition(QLineEdit* theWrappedObject, int  arg__1);
   void insert(QLineEdit* theWrappedObject, const QString&  arg__1);
   void paintEvent(QLineEdit* theWrappedObject, QPaintEvent*  arg__1);
   void contextMenuEvent(QLineEdit* theWrappedObject, QContextMenuEvent*  arg__1);
   void cursorWordForward(QLineEdit* theWrappedObject, bool  mark);
   void setReadOnly(QLineEdit* theWrappedObject, bool  arg__1);
   const QValidator*  validator(QLineEdit* theWrappedObject) const;
   void setMaxLength(QLineEdit* theWrappedObject, int  arg__1);
   int  cursorPositionAt(QLineEdit* theWrappedObject, const QPoint&  pos);
   bool  isUndoAvailable(QLineEdit* theWrappedObject) const;
   bool  event(QLineEdit* theWrappedObject, QEvent*  arg__1);
};





class PythonQtWrapper_QLinearGradient : public QObject
{ Q_OBJECT
public:
public slots:
QLinearGradient* new_QLinearGradient();
QLinearGradient* new_QLinearGradient(const QPointF&  start, const QPointF&  finalStop);
QLinearGradient* new_QLinearGradient(qreal  xStart, qreal  yStart, qreal  xFinalStop, qreal  yFinalStop);
QLinearGradient* new_QLinearGradient(const QLinearGradient& other) {
QLinearGradient* a = new QLinearGradient();
*((QLinearGradient*)a) = other;
return a; }
void delete_QLinearGradient(QLinearGradient* obj) { delete obj; } 
   void setFinalStop(QLinearGradient* theWrappedObject, qreal  x, qreal  y);
   void setFinalStop(QLinearGradient* theWrappedObject, const QPointF&  stop);
   QPointF  finalStop(QLinearGradient* theWrappedObject) const;
   void setStart(QLinearGradient* theWrappedObject, qreal  x, qreal  y);
   void setStart(QLinearGradient* theWrappedObject, const QPointF&  start);
   QPointF  start(QLinearGradient* theWrappedObject) const;
};





class PythonQtShell_QListView : public QListView
{
public:
    PythonQtShell_QListView(QWidget*  parent = 0):QListView(parent),_wrapper(NULL) {};

virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual int  horizontalOffset() const;
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void reset();
virtual void updateGeometries();
virtual void resizeEvent(QResizeEvent*  e);
virtual QList<QModelIndex >  selectedIndexes() const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void dropEvent(QDropEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void setRootIndex(const QModelIndex&  index);
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual void doItemsLayout();
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual bool  event(QEvent*  e);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual void paintEvent(QPaintEvent*  e);
virtual QStyleOptionViewItem  viewOptions() const;
virtual int  verticalOffset() const;
virtual void timerEvent(QTimerEvent*  e);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void verticalScrollbarValueChanged(int  value);
virtual void selectAll();
virtual void editorDestroyed(QObject*  editor);
virtual void updateEditorData();
virtual int  sizeHintForColumn(int  column) const;
virtual void commitData(QWidget*  editor);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void keyboardSearch(const QString&  search);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual bool  viewportEvent(QEvent*  event);
virtual void verticalScrollbarAction(int  action);
virtual void setModel(QAbstractItemModel*  model);
virtual void updateEditorGeometries();
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual int  sizeHintForRow(int  row) const;
virtual void horizontalScrollbarValueChanged(int  value);
virtual bool  focusNextPrevChild(bool  next);
virtual void horizontalScrollbarAction(int  action);
virtual void keyPressEvent(QKeyEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
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

class PythonQtPublicPromoter_QListView : public QListView
{ public:
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QListView::scrollTo(index, hint); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QListView::indexAt(p); }
inline int  promoted_horizontalOffset() const { return QListView::horizontalOffset(); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QListView::mouseReleaseEvent(e); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QListView::visualRegionForSelection(selection); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QListView::rowsInserted(parent, start, end); }
inline void promoted_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QListView::rowsAboutToBeRemoved(parent, start, end); }
inline void promoted_startDrag(Qt::DropActions  supportedActions) { QListView::startDrag(supportedActions); }
inline void promoted_reset() { QListView::reset(); }
inline void promoted_updateGeometries() { QListView::updateGeometries(); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QListView::resizeEvent(e); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return QListView::selectedIndexes(); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QListView::isIndexHidden(index); }
inline void promoted_dropEvent(QDropEvent*  e) { QListView::dropEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QListView::dragMoveEvent(e); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QListView::visualRect(index); }
inline void promoted_setRootIndex(const QModelIndex&  index) { QListView::setRootIndex(index); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QListView::selectionChanged(selected, deselected); }
inline void promoted_doItemsLayout() { QListView::doItemsLayout(); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QListView::mouseMoveEvent(e); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QListView::currentChanged(current, previous); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QListView::dragLeaveEvent(e); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QListView::setSelection(rect, command); }
inline bool  promoted_event(QEvent*  e) { return QListView::event(e); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight) { QListView::dataChanged(topLeft, bottomRight); }
inline void promoted_paintEvent(QPaintEvent*  e) { QListView::paintEvent(e); }
inline QStyleOptionViewItem  promoted_viewOptions() const { return QListView::viewOptions(); }
inline int  promoted_verticalOffset() const { return QListView::verticalOffset(); }
inline void promoted_timerEvent(QTimerEvent*  e) { QListView::timerEvent(e); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QListView::scrollContentsBy(dx, dy); }
};

class PythonQtWrapper_QListView : public QObject
{ Q_OBJECT
public:
public slots:
QListView* new_QListView(QWidget*  parent = 0);
void delete_QListView(QListView* obj) { delete obj; } 
   void scrollTo(QListView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
   QModelIndex  indexAt(QListView* theWrappedObject, const QPoint&  p) const;
   QListView::ViewMode  viewMode(QListView* theWrappedObject) const;
   void setWrapping(QListView* theWrappedObject, bool  enable);
   int  horizontalOffset(QListView* theWrappedObject) const;
   void mouseReleaseEvent(QListView* theWrappedObject, QMouseEvent*  e);
   QRegion  visualRegionForSelection(QListView* theWrappedObject, const QItemSelection&  selection) const;
   QListView::LayoutMode  layoutMode(QListView* theWrappedObject) const;
   void setSpacing(QListView* theWrappedObject, int  space);
   void rowsInserted(QListView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   void setMovement(QListView* theWrappedObject, QListView::Movement  movement);
   void rowsAboutToBeRemoved(QListView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   void setSelectionRectVisible(QListView* theWrappedObject, bool  show);
   void startDrag(QListView* theWrappedObject, Qt::DropActions  supportedActions);
   void setRowHidden(QListView* theWrappedObject, int  row, bool  hide);
   void reset(QListView* theWrappedObject);
   bool  isRowHidden(QListView* theWrappedObject, int  row) const;
   void updateGeometries(QListView* theWrappedObject);
   void resizeEvent(QListView* theWrappedObject, QResizeEvent*  e);
   QListView::Movement  movement(QListView* theWrappedObject) const;
   QList<QModelIndex >  selectedIndexes(QListView* theWrappedObject) const;
   bool  isIndexHidden(QListView* theWrappedObject, const QModelIndex&  index) const;
   void setLayoutMode(QListView* theWrappedObject, QListView::LayoutMode  mode);
   QListView::ResizeMode  resizeMode(QListView* theWrappedObject) const;
   void dropEvent(QListView* theWrappedObject, QDropEvent*  e);
   void setFlow(QListView* theWrappedObject, QListView::Flow  flow);
   void setWordWrap(QListView* theWrappedObject, bool  on);
   void dragMoveEvent(QListView* theWrappedObject, QDragMoveEvent*  e);
   void setModelColumn(QListView* theWrappedObject, int  column);
   QRect  visualRect(QListView* theWrappedObject, const QModelIndex&  index) const;
   void setRootIndex(QListView* theWrappedObject, const QModelIndex&  index);
   void selectionChanged(QListView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected);
   void setUniformItemSizes(QListView* theWrappedObject, bool  enable);
   void doItemsLayout(QListView* theWrappedObject);
   bool  wordWrap(QListView* theWrappedObject) const;
   void clearPropertyFlags(QListView* theWrappedObject);
   bool  isWrapping(QListView* theWrappedObject) const;
   int  batchSize(QListView* theWrappedObject) const;
   QSize  gridSize(QListView* theWrappedObject) const;
   void setResizeMode(QListView* theWrappedObject, QListView::ResizeMode  mode);
   void mouseMoveEvent(QListView* theWrappedObject, QMouseEvent*  e);
   void currentChanged(QListView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous);
   void dragLeaveEvent(QListView* theWrappedObject, QDragLeaveEvent*  e);
   int  spacing(QListView* theWrappedObject) const;
   QListView::Flow  flow(QListView* theWrappedObject) const;
   void setBatchSize(QListView* theWrappedObject, int  batchSize);
   void setSelection(QListView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
   bool  event(QListView* theWrappedObject, QEvent*  e);
   int  modelColumn(QListView* theWrappedObject) const;
   void dataChanged(QListView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   void paintEvent(QListView* theWrappedObject, QPaintEvent*  e);
   void setGridSize(QListView* theWrappedObject, const QSize&  size);
   QStyleOptionViewItem  viewOptions(QListView* theWrappedObject) const;
   int  verticalOffset(QListView* theWrappedObject) const;
   void timerEvent(QListView* theWrappedObject, QTimerEvent*  e);
   void setViewMode(QListView* theWrappedObject, QListView::ViewMode  mode);
   void scrollContentsBy(QListView* theWrappedObject, int  dx, int  dy);
   bool  uniformItemSizes(QListView* theWrappedObject) const;
   bool  isSelectionRectVisible(QListView* theWrappedObject) const;
};





class PythonQtShell_QListWidget : public QListWidget
{
public:
    PythonQtShell_QListWidget(QWidget*  parent = 0):QListWidget(parent),_wrapper(NULL) {};

virtual void dropEvent(QDropEvent*  event);
virtual QMimeData*  mimeData(const QList<QListWidgetItem* >  items) const;
virtual bool  dropMimeData(int  index, const QMimeData*  data, Qt::DropAction  action);
virtual QStringList  mimeTypes() const;
virtual bool  event(QEvent*  e);
virtual Qt::DropActions  supportedDropActions() const;
virtual QStyleOptionViewItem  viewOptions() const;
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void scrollContentsBy(int  dx, int  dy);
virtual int  verticalOffset() const;
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void updateGeometries();
virtual void resizeEvent(QResizeEvent*  e);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void reset();
virtual int  horizontalOffset() const;
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void setRootIndex(const QModelIndex&  index);
virtual void doItemsLayout();
virtual void paintEvent(QPaintEvent*  e);
virtual void timerEvent(QTimerEvent*  e);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void verticalScrollbarValueChanged(int  value);
virtual void selectAll();
virtual void editorDestroyed(QObject*  editor);
virtual void updateEditorData();
virtual int  sizeHintForColumn(int  column) const;
virtual void commitData(QWidget*  editor);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void keyboardSearch(const QString&  search);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual bool  viewportEvent(QEvent*  event);
virtual void verticalScrollbarAction(int  action);
virtual void updateEditorGeometries();
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual int  sizeHintForRow(int  row) const;
virtual void horizontalScrollbarValueChanged(int  value);
virtual bool  focusNextPrevChild(bool  next);
virtual void horizontalScrollbarAction(int  action);
virtual void keyPressEvent(QKeyEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
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

class PythonQtPublicPromoter_QListWidget : public QListWidget
{ public:
inline void promoted_dropEvent(QDropEvent*  event) { QListWidget::dropEvent(event); }
inline bool  promoted_dropMimeData(int  index, const QMimeData*  data, Qt::DropAction  action) { return QListWidget::dropMimeData(index, data, action); }
inline QStringList  promoted_mimeTypes() const { return QListWidget::mimeTypes(); }
inline bool  promoted_event(QEvent*  e) { return QListWidget::event(e); }
inline Qt::DropActions  promoted_supportedDropActions() const { return QListWidget::supportedDropActions(); }
};

class PythonQtWrapper_QListWidget : public QObject
{ Q_OBJECT
public:
public slots:
QListWidget* new_QListWidget(QWidget*  parent = 0);
void delete_QListWidget(QListWidget* obj) { delete obj; } 
   int  count(QListWidget* theWrappedObject) const;
   void editItem(QListWidget* theWrappedObject, QListWidgetItem*  item);
   void setCurrentItem(QListWidget* theWrappedObject, QListWidgetItem*  item);
   QListWidgetItem*  takeItem(QListWidget* theWrappedObject, int  row);
   void setSortingEnabled(QListWidget* theWrappedObject, bool  enable);
   QRect  visualItemRect(QListWidget* theWrappedObject, const QListWidgetItem*  item) const;
   void insertItem(QListWidget* theWrappedObject, int  row, const QString&  label);
   void removeItemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item);
   QListWidgetItem*  item(QListWidget* theWrappedObject, int  row) const;
   void openPersistentEditor(QListWidget* theWrappedObject, QListWidgetItem*  item);
   void dropEvent(QListWidget* theWrappedObject, QDropEvent*  event);
   QListWidgetItem*  currentItem(QListWidget* theWrappedObject) const;
   QWidget*  itemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item) const;
   QListWidgetItem*  itemAt(QListWidget* theWrappedObject, int  x, int  y) const;
   void closePersistentEditor(QListWidget* theWrappedObject, QListWidgetItem*  item);
   QList<QListWidgetItem* >  selectedItems(QListWidget* theWrappedObject) const;
   void setItemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item, QWidget*  widget);
   void sortItems(QListWidget* theWrappedObject, Qt::SortOrder  order = Qt::AscendingOrder);
   int  currentRow(QListWidget* theWrappedObject) const;
   void insertItem(QListWidget* theWrappedObject, int  row, QListWidgetItem*  item);
   QListWidgetItem*  itemAt(QListWidget* theWrappedObject, const QPoint&  p) const;
   bool  isSortingEnabled(QListWidget* theWrappedObject) const;
   void setCurrentItem(QListWidget* theWrappedObject, QListWidgetItem*  item, QItemSelectionModel::SelectionFlags  command);
   bool  dropMimeData(QListWidget* theWrappedObject, int  index, const QMimeData*  data, Qt::DropAction  action);
   QStringList  mimeTypes(QListWidget* theWrappedObject) const;
   void insertItems(QListWidget* theWrappedObject, int  row, const QStringList&  labels);
   void addItem(QListWidget* theWrappedObject, QListWidgetItem*  item);
   void addItem(QListWidget* theWrappedObject, const QString&  label);
   void setCurrentRow(QListWidget* theWrappedObject, int  row);
   void setCurrentRow(QListWidget* theWrappedObject, int  row, QItemSelectionModel::SelectionFlags  command);
   bool  event(QListWidget* theWrappedObject, QEvent*  e);
   int  row(QListWidget* theWrappedObject, const QListWidgetItem*  item) const;
   void addItems(QListWidget* theWrappedObject, const QStringList&  labels);
   Qt::DropActions  supportedDropActions(QListWidget* theWrappedObject) const;
   QList<QListWidgetItem* >  findItems(QListWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags) const;
};





class PythonQtShell_QListWidgetItem : public QListWidgetItem
{
public:
    PythonQtShell_QListWidgetItem(QListWidget*  view = 0, int  type = Type):QListWidgetItem(view, type),_wrapper(NULL) {};
    PythonQtShell_QListWidgetItem(const QIcon&  icon, const QString&  text, QListWidget*  view = 0, int  type = Type):QListWidgetItem(icon, text, view, type),_wrapper(NULL) {};
    PythonQtShell_QListWidgetItem(const QString&  text, QListWidget*  view = 0, int  type = Type):QListWidgetItem(text, view, type),_wrapper(NULL) {};

virtual bool  operator_less(const QListWidgetItem&  other) const;
virtual void write(QDataStream&  out) const;
virtual QListWidgetItem*  clone() const;
virtual void setData(int  role, const QVariant&  value);
virtual QVariant  data(int  role) const;
virtual void setBackgroundColor(const QColor&  color);
virtual void read(QDataStream&  in);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QListWidgetItem : public QListWidgetItem
{ public:
inline QListWidgetItem*  promoted_clone() const { return QListWidgetItem::clone(); }
inline void promoted_setData(int  role, const QVariant&  value) { QListWidgetItem::setData(role, value); }
inline QVariant  promoted_data(int  role) const { return QListWidgetItem::data(role); }
};

class PythonQtWrapper_QListWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QListWidgetItem::Type,   UserType = QListWidgetItem::UserType};
public slots:
QListWidgetItem* new_QListWidgetItem(QListWidget*  view = 0, int  type = Type);
QListWidgetItem* new_QListWidgetItem(const QIcon&  icon, const QString&  text, QListWidget*  view = 0, int  type = Type);
QListWidgetItem* new_QListWidgetItem(const QString&  text, QListWidget*  view = 0, int  type = Type);
void delete_QListWidgetItem(QListWidgetItem* obj) { delete obj; } 
   void setCheckState(QListWidgetItem* theWrappedObject, Qt::CheckState  state);
   void setIcon(QListWidgetItem* theWrappedObject, const QIcon&  icon);
   QBrush  background(QListWidgetItem* theWrappedObject) const;
   QString  whatsThis(QListWidgetItem* theWrappedObject) const;
   QString  toolTip(QListWidgetItem* theWrappedObject) const;
   void setText(QListWidgetItem* theWrappedObject, const QString&  text);
   void setWhatsThis(QListWidgetItem* theWrappedObject, const QString&  whatsThis);
   QString  statusTip(QListWidgetItem* theWrappedObject) const;
   void setSizeHint(QListWidgetItem* theWrappedObject, const QSize&  size);
   void setFont(QListWidgetItem* theWrappedObject, const QFont&  font);
   QListWidgetItem*  clone(QListWidgetItem* theWrappedObject) const;
   void setForeground(QListWidgetItem* theWrappedObject, const QBrush&  brush);
   int  type(QListWidgetItem* theWrappedObject) const;
   void setData(QListWidgetItem* theWrappedObject, int  role, const QVariant&  value);
   QSize  sizeHint(QListWidgetItem* theWrappedObject) const;
   QVariant  data(QListWidgetItem* theWrappedObject, int  role) const;
   void setStatusTip(QListWidgetItem* theWrappedObject, const QString&  statusTip);
   QBrush  foreground(QListWidgetItem* theWrappedObject) const;
   void setFlags(QListWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   Qt::CheckState  checkState(QListWidgetItem* theWrappedObject) const;
   void setHidden(QListWidgetItem* theWrappedObject, bool  hide);
   void setBackground(QListWidgetItem* theWrappedObject, const QBrush&  brush);
   bool  isHidden(QListWidgetItem* theWrappedObject) const;
   QIcon  icon(QListWidgetItem* theWrappedObject) const;
   void setTextAlignment(QListWidgetItem* theWrappedObject, int  alignment);
   Qt::ItemFlags  flags(QListWidgetItem* theWrappedObject) const;
   QListWidget*  listWidget(QListWidgetItem* theWrappedObject) const;
   void setSelected(QListWidgetItem* theWrappedObject, bool  select);
   bool  isSelected(QListWidgetItem* theWrappedObject) const;
   QFont  font(QListWidgetItem* theWrappedObject) const;
   void setToolTip(QListWidgetItem* theWrappedObject, const QString&  toolTip);
   int  textAlignment(QListWidgetItem* theWrappedObject) const;
   QString  text(QListWidgetItem* theWrappedObject) const;
   void writeTo(QListWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QListWidgetItem* theWrappedObject, QDataStream&  in);
};





class PythonQtShell_QMainWindow : public QMainWindow
{
public:
    PythonQtShell_QMainWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QMainWindow(parent, flags),_wrapper(NULL) {};

virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual QMenu*  createPopupMenu();
virtual bool  event(QEvent*  event);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual QSize  sizeHint() const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMainWindow : public QMainWindow
{ public:
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { QMainWindow::contextMenuEvent(event); }
inline QMenu*  promoted_createPopupMenu() { return QMainWindow::createPopupMenu(); }
inline bool  promoted_event(QEvent*  event) { return QMainWindow::event(event); }
};

class PythonQtWrapper_QMainWindow : public QObject
{ Q_OBJECT
public:
public slots:
QMainWindow* new_QMainWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QMainWindow(QMainWindow* obj) { delete obj; } 
   bool  toolBarBreak(QMainWindow* theWrappedObject, QToolBar*  toolbar) const;
   QMainWindow::DockOptions  dockOptions(QMainWindow* theWrappedObject) const;
   void removeDockWidget(QMainWindow* theWrappedObject, QDockWidget*  dockwidget);
   void tabifyDockWidget(QMainWindow* theWrappedObject, QDockWidget*  first, QDockWidget*  second);
   QWidget*  centralWidget(QMainWindow* theWrappedObject) const;
   QByteArray  saveState(QMainWindow* theWrappedObject, int  version = 0) const;
   bool  isSeparator(QMainWindow* theWrappedObject, const QPoint&  pos) const;
   void insertToolBar(QMainWindow* theWrappedObject, QToolBar*  before, QToolBar*  toolbar);
   bool  restoreState(QMainWindow* theWrappedObject, const QByteArray&  state, int  version = 0);
   bool  unifiedTitleAndToolBarOnMac(QMainWindow* theWrappedObject) const;
   void addToolBarBreak(QMainWindow* theWrappedObject, Qt::ToolBarArea  area = Qt::TopToolBarArea);
   void addToolBar(QMainWindow* theWrappedObject, Qt::ToolBarArea  area, QToolBar*  toolbar);
   QToolBar*  addToolBar(QMainWindow* theWrappedObject, const QString&  title);
   void addToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar);
   void insertToolBarBreak(QMainWindow* theWrappedObject, QToolBar*  before);
   QMenuBar*  menuBar(QMainWindow* theWrappedObject) const;
   QWidget*  menuWidget(QMainWindow* theWrappedObject) const;
   void setMenuBar(QMainWindow* theWrappedObject, QMenuBar*  menubar);
   void setMenuWidget(QMainWindow* theWrappedObject, QWidget*  menubar);
   QStatusBar*  statusBar(QMainWindow* theWrappedObject) const;
   Qt::DockWidgetArea  dockWidgetArea(QMainWindow* theWrappedObject, QDockWidget*  dockwidget) const;
   Qt::DockWidgetArea  corner(QMainWindow* theWrappedObject, Qt::Corner  corner) const;
   void contextMenuEvent(QMainWindow* theWrappedObject, QContextMenuEvent*  event);
   void setStatusBar(QMainWindow* theWrappedObject, QStatusBar*  statusbar);
   void setUnifiedTitleAndToolBarOnMac(QMainWindow* theWrappedObject, bool  set);
   QSize  iconSize(QMainWindow* theWrappedObject) const;
   Qt::ToolButtonStyle  toolButtonStyle(QMainWindow* theWrappedObject) const;
   bool  restoreDockWidget(QMainWindow* theWrappedObject, QDockWidget*  dockwidget);
   void setCentralWidget(QMainWindow* theWrappedObject, QWidget*  widget);
   void removeToolBarBreak(QMainWindow* theWrappedObject, QToolBar*  before);
   void addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget, Qt::Orientation  orientation);
   void addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget);
   void setDockOptions(QMainWindow* theWrappedObject, QMainWindow::DockOptions  options);
   QMenu*  createPopupMenu(QMainWindow* theWrappedObject);
   void splitDockWidget(QMainWindow* theWrappedObject, QDockWidget*  after, QDockWidget*  dockwidget, Qt::Orientation  orientation);
   Qt::ToolBarArea  toolBarArea(QMainWindow* theWrappedObject, QToolBar*  toolbar) const;
   bool  event(QMainWindow* theWrappedObject, QEvent*  event);
   void removeToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar);
   bool  isAnimated(QMainWindow* theWrappedObject) const;
   bool  isDockNestingEnabled(QMainWindow* theWrappedObject) const;
   void setToolButtonStyle(QMainWindow* theWrappedObject, Qt::ToolButtonStyle  toolButtonStyle);
   void setIconSize(QMainWindow* theWrappedObject, const QSize&  iconSize);
   void setCorner(QMainWindow* theWrappedObject, Qt::Corner  corner, Qt::DockWidgetArea  area);
};





class PythonQtShell_QMdiArea : public QMdiArea
{
public:
    PythonQtShell_QMdiArea(QWidget*  parent = 0):QMdiArea(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  timerEvent);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void showEvent(QShowEvent*  showEvent);
virtual void paintEvent(QPaintEvent*  paintEvent);
virtual void resizeEvent(QResizeEvent*  resizeEvent);
virtual bool  event(QEvent*  event);
virtual void childEvent(QChildEvent*  childEvent);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual bool  viewportEvent(QEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMdiArea : public QMdiArea
{ public:
inline void promoted_timerEvent(QTimerEvent*  timerEvent) { QMdiArea::timerEvent(timerEvent); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QMdiArea::scrollContentsBy(dx, dy); }
inline void promoted_showEvent(QShowEvent*  showEvent) { QMdiArea::showEvent(showEvent); }
inline void promoted_paintEvent(QPaintEvent*  paintEvent) { QMdiArea::paintEvent(paintEvent); }
inline void promoted_resizeEvent(QResizeEvent*  resizeEvent) { QMdiArea::resizeEvent(resizeEvent); }
inline bool  promoted_event(QEvent*  event) { return QMdiArea::event(event); }
inline void promoted_childEvent(QChildEvent*  childEvent) { QMdiArea::childEvent(childEvent); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QMdiArea::eventFilter(object, event); }
inline bool  promoted_viewportEvent(QEvent*  event) { return QMdiArea::viewportEvent(event); }
};

class PythonQtWrapper_QMdiArea : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AreaOption )
Q_FLAGS(AreaOptions )
enum AreaOption{
  DontMaximizeSubWindowOnActivation = QMdiArea::DontMaximizeSubWindowOnActivation};
Q_DECLARE_FLAGS(AreaOptions, AreaOption)
public slots:
QMdiArea* new_QMdiArea(QWidget*  parent = 0);
void delete_QMdiArea(QMdiArea* obj) { delete obj; } 
   void removeSubWindow(QMdiArea* theWrappedObject, QWidget*  widget);
   void setViewMode(QMdiArea* theWrappedObject, QMdiArea::ViewMode  mode);
   QSize  sizeHint(QMdiArea* theWrappedObject) const;
   bool  testOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  opton) const;
   void timerEvent(QMdiArea* theWrappedObject, QTimerEvent*  timerEvent);
   void scrollContentsBy(QMdiArea* theWrappedObject, int  dx, int  dy);
   void setBackground(QMdiArea* theWrappedObject, const QBrush&  background);
   QMdiSubWindow*  currentSubWindow(QMdiArea* theWrappedObject) const;
   QTabWidget::TabPosition  tabPosition(QMdiArea* theWrappedObject) const;
   QSize  minimumSizeHint(QMdiArea* theWrappedObject) const;
   void showEvent(QMdiArea* theWrappedObject, QShowEvent*  showEvent);
   QMdiSubWindow*  activeSubWindow(QMdiArea* theWrappedObject) const;
   void setOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  option, bool  on = true);
   void setTabShape(QMdiArea* theWrappedObject, QTabWidget::TabShape  shape);
   QMdiSubWindow*  addSubWindow(QMdiArea* theWrappedObject, QWidget*  widget, Qt::WindowFlags  flags = 0);
   void setActivationOrder(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order);
   QTabWidget::TabShape  tabShape(QMdiArea* theWrappedObject) const;
   void paintEvent(QMdiArea* theWrappedObject, QPaintEvent*  paintEvent);
   QList<QMdiSubWindow* >  subWindowList(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order = QMdiArea::CreationOrder) const;
   void resizeEvent(QMdiArea* theWrappedObject, QResizeEvent*  resizeEvent);
   bool  event(QMdiArea* theWrappedObject, QEvent*  event);
   QBrush  background(QMdiArea* theWrappedObject) const;
   void childEvent(QMdiArea* theWrappedObject, QChildEvent*  childEvent);
   bool  eventFilter(QMdiArea* theWrappedObject, QObject*  object, QEvent*  event);
   QMdiArea::WindowOrder  activationOrder(QMdiArea* theWrappedObject) const;
   QMdiArea::ViewMode  viewMode(QMdiArea* theWrappedObject) const;
   void setTabPosition(QMdiArea* theWrappedObject, QTabWidget::TabPosition  position);
   bool  viewportEvent(QMdiArea* theWrappedObject, QEvent*  event);
};





class PythonQtShell_QMdiSubWindow : public QMdiSubWindow
{
public:
    PythonQtShell_QMdiSubWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QMdiSubWindow(parent, flags),_wrapper(NULL) {};

virtual bool  event(QEvent*  event);
virtual void resizeEvent(QResizeEvent*  resizeEvent);
virtual void paintEvent(QPaintEvent*  paintEvent);
virtual void changeEvent(QEvent*  changeEvent);
virtual void hideEvent(QHideEvent*  hideEvent);
virtual void showEvent(QShowEvent*  showEvent);
virtual void mouseReleaseEvent(QMouseEvent*  mouseEvent);
virtual void contextMenuEvent(QContextMenuEvent*  contextMenuEvent);
virtual void mouseDoubleClickEvent(QMouseEvent*  mouseEvent);
virtual void closeEvent(QCloseEvent*  closeEvent);
virtual void timerEvent(QTimerEvent*  timerEvent);
virtual void mouseMoveEvent(QMouseEvent*  mouseEvent);
virtual void leaveEvent(QEvent*  leaveEvent);
virtual void focusInEvent(QFocusEvent*  focusInEvent);
virtual void moveEvent(QMoveEvent*  moveEvent);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual void keyPressEvent(QKeyEvent*  keyEvent);
virtual void childEvent(QChildEvent*  childEvent);
virtual void focusOutEvent(QFocusEvent*  focusOutEvent);
virtual void mousePressEvent(QMouseEvent*  mouseEvent);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void languageChange();
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void dropEvent(QDropEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMdiSubWindow : public QMdiSubWindow
{ public:
inline bool  promoted_event(QEvent*  event) { return QMdiSubWindow::event(event); }
inline void promoted_resizeEvent(QResizeEvent*  resizeEvent) { QMdiSubWindow::resizeEvent(resizeEvent); }
inline void promoted_paintEvent(QPaintEvent*  paintEvent) { QMdiSubWindow::paintEvent(paintEvent); }
inline void promoted_changeEvent(QEvent*  changeEvent) { QMdiSubWindow::changeEvent(changeEvent); }
inline void promoted_hideEvent(QHideEvent*  hideEvent) { QMdiSubWindow::hideEvent(hideEvent); }
inline void promoted_showEvent(QShowEvent*  showEvent) { QMdiSubWindow::showEvent(showEvent); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseReleaseEvent(mouseEvent); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  contextMenuEvent) { QMdiSubWindow::contextMenuEvent(contextMenuEvent); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseDoubleClickEvent(mouseEvent); }
inline void promoted_closeEvent(QCloseEvent*  closeEvent) { QMdiSubWindow::closeEvent(closeEvent); }
inline void promoted_timerEvent(QTimerEvent*  timerEvent) { QMdiSubWindow::timerEvent(timerEvent); }
inline void promoted_mouseMoveEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseMoveEvent(mouseEvent); }
inline void promoted_leaveEvent(QEvent*  leaveEvent) { QMdiSubWindow::leaveEvent(leaveEvent); }
inline void promoted_focusInEvent(QFocusEvent*  focusInEvent) { QMdiSubWindow::focusInEvent(focusInEvent); }
inline void promoted_moveEvent(QMoveEvent*  moveEvent) { QMdiSubWindow::moveEvent(moveEvent); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QMdiSubWindow::eventFilter(object, event); }
inline void promoted_keyPressEvent(QKeyEvent*  keyEvent) { QMdiSubWindow::keyPressEvent(keyEvent); }
inline void promoted_childEvent(QChildEvent*  childEvent) { QMdiSubWindow::childEvent(childEvent); }
inline void promoted_focusOutEvent(QFocusEvent*  focusOutEvent) { QMdiSubWindow::focusOutEvent(focusOutEvent); }
inline void promoted_mousePressEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mousePressEvent(mouseEvent); }
};

class PythonQtWrapper_QMdiSubWindow : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SubWindowOption )
Q_FLAGS(SubWindowOptions )
enum SubWindowOption{
  AllowOutsideAreaHorizontally = QMdiSubWindow::AllowOutsideAreaHorizontally,   AllowOutsideAreaVertically = QMdiSubWindow::AllowOutsideAreaVertically,   RubberBandResize = QMdiSubWindow::RubberBandResize,   RubberBandMove = QMdiSubWindow::RubberBandMove};
Q_DECLARE_FLAGS(SubWindowOptions, SubWindowOption)
public slots:
QMdiSubWindow* new_QMdiSubWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QMdiSubWindow(QMdiSubWindow* obj) { delete obj; } 
   QSize  minimumSizeHint(QMdiSubWindow* theWrappedObject) const;
   bool  event(QMdiSubWindow* theWrappedObject, QEvent*  event);
   void resizeEvent(QMdiSubWindow* theWrappedObject, QResizeEvent*  resizeEvent);
   void setSystemMenu(QMdiSubWindow* theWrappedObject, QMenu*  systemMenu);
   void paintEvent(QMdiSubWindow* theWrappedObject, QPaintEvent*  paintEvent);
   QWidget*  widget(QMdiSubWindow* theWrappedObject) const;
   void changeEvent(QMdiSubWindow* theWrappedObject, QEvent*  changeEvent);
   void hideEvent(QMdiSubWindow* theWrappedObject, QHideEvent*  hideEvent);
   QWidget*  maximizedSystemMenuIconWidget(QMdiSubWindow* theWrappedObject) const;
   void showEvent(QMdiSubWindow* theWrappedObject, QShowEvent*  showEvent);
   void mouseReleaseEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent);
   void contextMenuEvent(QMdiSubWindow* theWrappedObject, QContextMenuEvent*  contextMenuEvent);
   int  keyboardSingleStep(QMdiSubWindow* theWrappedObject) const;
   void setWidget(QMdiSubWindow* theWrappedObject, QWidget*  widget);
   void mouseDoubleClickEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent);
   void closeEvent(QMdiSubWindow* theWrappedObject, QCloseEvent*  closeEvent);
   QMdiArea*  mdiArea(QMdiSubWindow* theWrappedObject) const;
   QWidget*  maximizedButtonsWidget(QMdiSubWindow* theWrappedObject) const;
   void timerEvent(QMdiSubWindow* theWrappedObject, QTimerEvent*  timerEvent);
   void mouseMoveEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent);
   bool  testOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  arg__1) const;
   QSize  sizeHint(QMdiSubWindow* theWrappedObject) const;
   bool  isShaded(QMdiSubWindow* theWrappedObject) const;
   void leaveEvent(QMdiSubWindow* theWrappedObject, QEvent*  leaveEvent);
   void focusInEvent(QMdiSubWindow* theWrappedObject, QFocusEvent*  focusInEvent);
   void setOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  option, bool  on = true);
   void moveEvent(QMdiSubWindow* theWrappedObject, QMoveEvent*  moveEvent);
   int  keyboardPageStep(QMdiSubWindow* theWrappedObject) const;
   bool  eventFilter(QMdiSubWindow* theWrappedObject, QObject*  object, QEvent*  event);
   void keyPressEvent(QMdiSubWindow* theWrappedObject, QKeyEvent*  keyEvent);
   void setKeyboardPageStep(QMdiSubWindow* theWrappedObject, int  step);
   QMenu*  systemMenu(QMdiSubWindow* theWrappedObject) const;
   void childEvent(QMdiSubWindow* theWrappedObject, QChildEvent*  childEvent);
   void focusOutEvent(QMdiSubWindow* theWrappedObject, QFocusEvent*  focusOutEvent);
   void setKeyboardSingleStep(QMdiSubWindow* theWrappedObject, int  step);
   void mousePressEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent);
};





class PythonQtShell_QMenu : public QMenu
{
public:
    PythonQtShell_QMenu(QWidget*  parent = 0):QMenu(parent),_wrapper(NULL) {};
    PythonQtShell_QMenu(const QString&  title, QWidget*  parent = 0):QMenu(title, parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void enterEvent(QEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMenu : public QMenu
{ public:
inline void promoted_actionEvent(QActionEvent*  arg__1) { QMenu::actionEvent(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QMenu::leaveEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QMenu::wheelEvent(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QMenu::focusNextPrevChild(next); }
inline void promoted_enterEvent(QEvent*  arg__1) { QMenu::enterEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QMenu::mouseMoveEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QMenu::timerEvent(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QMenu::hideEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QMenu::mouseReleaseEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QMenu::changeEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QMenu::paintEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QMenu::mousePressEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QMenu::event(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QMenu::keyPressEvent(arg__1); }
};

class PythonQtWrapper_QMenu : public QObject
{ Q_OBJECT
public:
public slots:
QMenu* new_QMenu(QWidget*  parent = 0);
QMenu* new_QMenu(const QString&  title, QWidget*  parent = 0);
void delete_QMenu(QMenu* obj) { delete obj; } 
   QAction*  addSeparator(QMenu* theWrappedObject);
   QAction*  addMenu(QMenu* theWrappedObject, QMenu*  menu);
   QAction*  actionAt(QMenu* theWrappedObject, const QPoint&  arg__1) const;
   bool  isEmpty(QMenu* theWrappedObject) const;
   void actionEvent(QMenu* theWrappedObject, QActionEvent*  arg__1);
   void leaveEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   void wheelEvent(QMenu* theWrappedObject, QWheelEvent*  arg__1);
   void clear(QMenu* theWrappedObject);
   void setDefaultAction(QMenu* theWrappedObject, QAction*  arg__1);
   void setSeparatorsCollapsible(QMenu* theWrappedObject, bool  collapse);
   void setTitle(QMenu* theWrappedObject, const QString&  title);
   QMenu*  addMenu(QMenu* theWrappedObject, const QIcon&  icon, const QString&  title);
   bool  focusNextPrevChild(QMenu* theWrappedObject, bool  next);
   QMenu*  addMenu(QMenu* theWrappedObject, const QString&  title);
   QAction*  exec(QMenu* theWrappedObject);
   void enterEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   void popup(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at = 0);
   QAction*  insertSeparator(QMenu* theWrappedObject, QAction*  before);
   void mouseMoveEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1);
   QSize  sizeHint(QMenu* theWrappedObject) const;
   void timerEvent(QMenu* theWrappedObject, QTimerEvent*  arg__1);
   QAction*  activeAction(QMenu* theWrappedObject) const;
   QAction*  menuAction(QMenu* theWrappedObject) const;
   void setActiveAction(QMenu* theWrappedObject, QAction*  act);
   bool  isTearOffMenuVisible(QMenu* theWrappedObject) const;
   void hideEvent(QMenu* theWrappedObject, QHideEvent*  arg__1);
   QIcon  icon(QMenu* theWrappedObject) const;
   void mouseReleaseEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1);
   QAction*  defaultAction(QMenu* theWrappedObject) const;
   bool  isTearOffEnabled(QMenu* theWrappedObject) const;
   void hideTearOffMenu(QMenu* theWrappedObject);
   QAction*  addAction(QMenu* theWrappedObject, const QIcon&  icon, const QString&  text);
   bool  separatorsCollapsible(QMenu* theWrappedObject) const;
   QAction*  addAction(QMenu* theWrappedObject, const QString&  text);
   QAction*  insertMenu(QMenu* theWrappedObject, QAction*  before, QMenu*  menu);
   QAction*  exec(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at = 0);
   QAction*  static_QMenu_exec(QList<QAction* >  actions, const QPoint&  pos, QAction*  at = 0);
   void changeEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   void paintEvent(QMenu* theWrappedObject, QPaintEvent*  arg__1);
   QRect  actionGeometry(QMenu* theWrappedObject, QAction*  arg__1) const;
   void setIcon(QMenu* theWrappedObject, const QIcon&  icon);
   void setTearOffEnabled(QMenu* theWrappedObject, bool  arg__1);
   void mousePressEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1);
   bool  event(QMenu* theWrappedObject, QEvent*  arg__1);
   void keyPressEvent(QMenu* theWrappedObject, QKeyEvent*  arg__1);
   QString  title(QMenu* theWrappedObject) const;
};





class PythonQtShell_QMenuBar : public QMenuBar
{
public:
    PythonQtShell_QMenuBar(QWidget*  parent = 0):QMenuBar(parent),_wrapper(NULL) {};

virtual void leaveEvent(QEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void languageChange();
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMenuBar : public QMenuBar
{ public:
inline void promoted_leaveEvent(QEvent*  arg__1) { QMenuBar::leaveEvent(arg__1); }
inline void promoted_actionEvent(QActionEvent*  arg__1) { QMenuBar::actionEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QMenuBar::resizeEvent(arg__1); }
inline int  promoted_heightForWidth(int  arg__1) const { return QMenuBar::heightForWidth(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QMenuBar::mouseMoveEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QMenuBar::timerEvent(arg__1); }
inline void promoted_setVisible(bool  visible) { QMenuBar::setVisible(visible); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QMenuBar::focusInEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QMenuBar::mouseReleaseEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QMenuBar::changeEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QMenuBar::paintEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QMenuBar::event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QMenuBar::eventFilter(arg__1, arg__2); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QMenuBar::keyPressEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QMenuBar::focusOutEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QMenuBar::mousePressEvent(arg__1); }
};

class PythonQtWrapper_QMenuBar : public QObject
{ Q_OBJECT
public:
public slots:
QMenuBar* new_QMenuBar(QWidget*  parent = 0);
void delete_QMenuBar(QMenuBar* obj) { delete obj; } 
   void setCornerWidget(QMenuBar* theWrappedObject, QWidget*  w, Qt::Corner  corner = Qt::TopRightCorner);
   void clear(QMenuBar* theWrappedObject);
   void leaveEvent(QMenuBar* theWrappedObject, QEvent*  arg__1);
   void actionEvent(QMenuBar* theWrappedObject, QActionEvent*  arg__1);
   QAction*  actionAt(QMenuBar* theWrappedObject, const QPoint&  arg__1) const;
   void setDefaultUp(QMenuBar* theWrappedObject, bool  arg__1);
   QMenu*  addMenu(QMenuBar* theWrappedObject, const QIcon&  icon, const QString&  title);
   QMenu*  addMenu(QMenuBar* theWrappedObject, const QString&  title);
   QAction*  addMenu(QMenuBar* theWrappedObject, QMenu*  menu);
   QSize  minimumSizeHint(QMenuBar* theWrappedObject) const;
   void resizeEvent(QMenuBar* theWrappedObject, QResizeEvent*  arg__1);
   QAction*  addSeparator(QMenuBar* theWrappedObject);
   QWidget*  cornerWidget(QMenuBar* theWrappedObject, Qt::Corner  corner = Qt::TopRightCorner) const;
   QAction*  insertSeparator(QMenuBar* theWrappedObject, QAction*  before);
   int  heightForWidth(QMenuBar* theWrappedObject, int  arg__1) const;
   QSize  sizeHint(QMenuBar* theWrappedObject) const;
   void mouseMoveEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1);
   void setActiveAction(QMenuBar* theWrappedObject, QAction*  action);
   void timerEvent(QMenuBar* theWrappedObject, QTimerEvent*  arg__1);
   QAction*  activeAction(QMenuBar* theWrappedObject) const;
   QAction*  addAction(QMenuBar* theWrappedObject, const QString&  text);
   void focusInEvent(QMenuBar* theWrappedObject, QFocusEvent*  arg__1);
   bool  isDefaultUp(QMenuBar* theWrappedObject) const;
   void mouseReleaseEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1);
   QAction*  insertMenu(QMenuBar* theWrappedObject, QAction*  before, QMenu*  menu);
   void changeEvent(QMenuBar* theWrappedObject, QEvent*  arg__1);
   void paintEvent(QMenuBar* theWrappedObject, QPaintEvent*  arg__1);
   QRect  actionGeometry(QMenuBar* theWrappedObject, QAction*  arg__1) const;
   bool  event(QMenuBar* theWrappedObject, QEvent*  arg__1);
   bool  eventFilter(QMenuBar* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void keyPressEvent(QMenuBar* theWrappedObject, QKeyEvent*  arg__1);
   void focusOutEvent(QMenuBar* theWrappedObject, QFocusEvent*  arg__1);
   void mousePressEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1);
};





class PythonQtShell_QMessageBox : public QMessageBox
{
public:
    PythonQtShell_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::NoButton, QWidget*  parent = 0, Qt::WindowFlags  f = Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint):QMessageBox(icon, title, text, buttons, parent, f),_wrapper(NULL) {};
    PythonQtShell_QMessageBox(QWidget*  parent = 0):QMessageBox(parent),_wrapper(NULL) {};

virtual void closeEvent(QCloseEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual bool  event(QEvent*  e);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void done(int  arg__1);
virtual void reject();
virtual void accept();
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void languageChange();
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMessageBox : public QMessageBox
{ public:
inline void promoted_closeEvent(QCloseEvent*  event) { QMessageBox::closeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QMessageBox::showEvent(event); }
inline void promoted_changeEvent(QEvent*  event) { QMessageBox::changeEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QMessageBox::resizeEvent(event); }
inline bool  promoted_event(QEvent*  e) { return QMessageBox::event(e); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QMessageBox::keyPressEvent(event); }
};

class PythonQtWrapper_QMessageBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ButtonRole StandardButton )
Q_FLAGS(StandardButtons )
enum ButtonRole{
  InvalidRole = QMessageBox::InvalidRole,   AcceptRole = QMessageBox::AcceptRole,   RejectRole = QMessageBox::RejectRole,   DestructiveRole = QMessageBox::DestructiveRole,   ActionRole = QMessageBox::ActionRole,   HelpRole = QMessageBox::HelpRole,   YesRole = QMessageBox::YesRole,   NoRole = QMessageBox::NoRole,   ResetRole = QMessageBox::ResetRole,   ApplyRole = QMessageBox::ApplyRole,   NRoles = QMessageBox::NRoles};
enum StandardButton{
  NoButton = QMessageBox::NoButton,   Ok = QMessageBox::Ok,   Save = QMessageBox::Save,   SaveAll = QMessageBox::SaveAll,   Open = QMessageBox::Open,   Yes = QMessageBox::Yes,   YesToAll = QMessageBox::YesToAll,   No = QMessageBox::No,   NoToAll = QMessageBox::NoToAll,   Abort = QMessageBox::Abort,   Retry = QMessageBox::Retry,   Ignore = QMessageBox::Ignore,   Close = QMessageBox::Close,   Cancel = QMessageBox::Cancel,   Discard = QMessageBox::Discard,   Help = QMessageBox::Help,   Apply = QMessageBox::Apply,   Reset = QMessageBox::Reset,   RestoreDefaults = QMessageBox::RestoreDefaults,   FirstButton = QMessageBox::FirstButton,   LastButton = QMessageBox::LastButton,   YesAll = QMessageBox::YesAll,   NoAll = QMessageBox::NoAll,   Default = QMessageBox::Default,   Escape = QMessageBox::Escape,   FlagMask = QMessageBox::FlagMask,   ButtonMask = QMessageBox::ButtonMask};
Q_DECLARE_FLAGS(StandardButtons, StandardButton)
public slots:
QMessageBox* new_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::NoButton, QWidget*  parent = 0, Qt::WindowFlags  f = Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
QMessageBox* new_QMessageBox(QWidget*  parent = 0);
void delete_QMessageBox(QMessageBox* obj) { delete obj; } 
   QMessageBox::StandardButton  standardButton(QMessageBox* theWrappedObject, QAbstractButton*  button) const;
   QString  detailedText(QMessageBox* theWrappedObject) const;
   void setDefaultButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   QMessageBox::StandardButtons  standardButtons(QMessageBox* theWrappedObject) const;
   void setDefaultButton(QMessageBox* theWrappedObject, QPushButton*  button);
   QSize  sizeHint(QMessageBox* theWrappedObject) const;
   void setTextFormat(QMessageBox* theWrappedObject, Qt::TextFormat  format);
   QPushButton*  defaultButton(QMessageBox* theWrappedObject) const;
   void closeEvent(QMessageBox* theWrappedObject, QCloseEvent*  event);
   void setEscapeButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   int  static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   void setEscapeButton(QMessageBox* theWrappedObject, QAbstractButton*  button);
   Qt::TextFormat  textFormat(QMessageBox* theWrappedObject) const;
   QMessageBox::StandardButton  static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   QAbstractButton*  clickedButton(QMessageBox* theWrappedObject) const;
   void setText(QMessageBox* theWrappedObject, const QString&  text);
   void showEvent(QMessageBox* theWrappedObject, QShowEvent*  event);
   void static_QMessageBox_about(QWidget*  parent, const QString&  title, const QString&  text);
   QAbstractButton*  button(QMessageBox* theWrappedObject, QMessageBox::StandardButton  which) const;
   QAbstractButton*  escapeButton(QMessageBox* theWrappedObject) const;
   QString  informativeText(QMessageBox* theWrappedObject) const;
   QMessageBox::Icon  icon(QMessageBox* theWrappedObject) const;
   void setDetailedText(QMessageBox* theWrappedObject, const QString&  text);
   int  static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   QMessageBox::StandardButton  static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   void removeButton(QMessageBox* theWrappedObject, QAbstractButton*  button);
   void addButton(QMessageBox* theWrappedObject, QAbstractButton*  button, QMessageBox::ButtonRole  role);
   QPushButton*  addButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   QPushButton*  addButton(QMessageBox* theWrappedObject, const QString&  text, QMessageBox::ButtonRole  role);
   int  static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   QMessageBox::StandardButton  static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1 = QMessageBox::NoButton);
   QMessageBox::StandardButton  static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   void changeEvent(QMessageBox* theWrappedObject, QEvent*  event);
   QString  text(QMessageBox* theWrappedObject) const;
   void setIcon(QMessageBox* theWrappedObject, QMessageBox::Icon  arg__1);
   void setInformativeText(QMessageBox* theWrappedObject, const QString&  text);
   void static_QMessageBox_aboutQt(QWidget*  parent, const QString&  title = QString());
   void resizeEvent(QMessageBox* theWrappedObject, QResizeEvent*  event);
   QMessageBox::StandardButton  static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   void setIconPixmap(QMessageBox* theWrappedObject, const QPixmap&  pixmap);
   bool  event(QMessageBox* theWrappedObject, QEvent*  e);
   void keyPressEvent(QMessageBox* theWrappedObject, QKeyEvent*  event);
   QPixmap  iconPixmap(QMessageBox* theWrappedObject) const;
   void setStandardButtons(QMessageBox* theWrappedObject, QMessageBox::StandardButtons  buttons);
};





class PythonQtShell_QMotifStyle : public QMotifStyle
{
public:
    PythonQtShell_QMotifStyle(bool  useHighlightCols = false):QMotifStyle(useHighlightCols),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  event);
virtual void drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual bool  event(QEvent*  arg__1);
virtual QSize  sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
virtual int  pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget = 0) const;
virtual void polish(QPalette&  arg__1);
virtual int  styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
virtual void drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual QPalette  standardPalette() const;
virtual void unpolish(QApplication*  arg__1);
virtual void unpolish(QWidget*  arg__1);
virtual bool  eventFilter(QObject*  o, QEvent*  e);
virtual void polish(QApplication*  arg__1);
virtual void drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void polish(QWidget*  arg__1);
virtual QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const;
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w) const;
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMotifStyle : public QMotifStyle
{ public:
inline void promoted_timerEvent(QTimerEvent*  event) { QMotifStyle::timerEvent(event); }
inline void promoted_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QMotifStyle::drawControl(element, opt, p, w); }
inline bool  promoted_event(QEvent*  arg__1) { return QMotifStyle::event(arg__1); }
inline QSize  promoted_sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const { return QMotifStyle::sizeFromContents(ct, opt, contentsSize, widget); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QMotifStyle::pixelMetric(metric, option, widget); }
inline QRect  promoted_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget = 0) const { return QMotifStyle::subControlRect(cc, opt, sc, widget); }
inline void promoted_polish(QPalette&  arg__1) { QMotifStyle::polish(arg__1); }
inline int  promoted_styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const { return QMotifStyle::styleHint(hint, opt, widget, returnData); }
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QMotifStyle::drawPrimitive(pe, opt, p, w); }
inline QPalette  promoted_standardPalette() const { return QMotifStyle::standardPalette(); }
inline void promoted_unpolish(QApplication*  arg__1) { QMotifStyle::unpolish(arg__1); }
inline void promoted_unpolish(QWidget*  arg__1) { QMotifStyle::unpolish(arg__1); }
inline bool  promoted_eventFilter(QObject*  o, QEvent*  e) { return QMotifStyle::eventFilter(o, e); }
inline void promoted_polish(QApplication*  arg__1) { QMotifStyle::polish(arg__1); }
inline void promoted_drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const { QMotifStyle::drawComplexControl(cc, opt, p, w); }
inline void promoted_polish(QWidget*  arg__1) { QMotifStyle::polish(arg__1); }
inline QRect  promoted_subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const { return QMotifStyle::subElementRect(r, opt, widget); }
};

class PythonQtWrapper_QMotifStyle : public QObject
{ Q_OBJECT
public:
public slots:
QMotifStyle* new_QMotifStyle(bool  useHighlightCols = false);
void delete_QMotifStyle(QMotifStyle* obj) { delete obj; } 
   void timerEvent(QMotifStyle* theWrappedObject, QTimerEvent*  event);
   void drawControl(QMotifStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   bool  event(QMotifStyle* theWrappedObject, QEvent*  arg__1);
   QSize  sizeFromContents(QMotifStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
   int  pixelMetric(QMotifStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   QRect  subControlRect(QMotifStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget = 0) const;
   void polish(QMotifStyle* theWrappedObject, QPalette&  arg__1);
   int  styleHint(QMotifStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
   void drawPrimitive(QMotifStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   QPalette  standardPalette(QMotifStyle* theWrappedObject) const;
   void unpolish(QMotifStyle* theWrappedObject, QApplication*  arg__1);
   void unpolish(QMotifStyle* theWrappedObject, QWidget*  arg__1);
   bool  eventFilter(QMotifStyle* theWrappedObject, QObject*  o, QEvent*  e);
   void polish(QMotifStyle* theWrappedObject, QApplication*  arg__1);
   void drawComplexControl(QMotifStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void polish(QMotifStyle* theWrappedObject, QWidget*  arg__1);
   bool  useHighlightColors(QMotifStyle* theWrappedObject) const;
   void setUseHighlightColors(QMotifStyle* theWrappedObject, bool  arg__1);
   QRect  subElementRect(QMotifStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
};





class PythonQtShell_QMouseEvent : public QMouseEvent
{
public:
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPoint&  pos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QMouseEvent(type, pos, button, buttons, modifiers),_wrapper(NULL) {};
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QMouseEvent(type, pos, globalPos, button, buttons, modifiers),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMouseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPoint&  pos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
void delete_QMouseEvent(QMouseEvent* obj) { delete obj; } 
   int  x(QMouseEvent* theWrappedObject) const;
   Qt::MouseButton  button(QMouseEvent* theWrappedObject) const;
   int  y(QMouseEvent* theWrappedObject) const;
   QPointF  posF(QMouseEvent* theWrappedObject) const;
   bool  hasExtendedInfo(QMouseEvent* theWrappedObject) const;
   const QPoint*  globalPos(QMouseEvent* theWrappedObject) const;
   int  globalX(QMouseEvent* theWrappedObject) const;
   int  globalY(QMouseEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QMouseEvent* theWrappedObject) const;
   QMouseEvent*  static_QMouseEvent_createExtendedMouseEvent(QEvent::Type  type, const QPointF&  pos, const QPoint&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
   const QPoint*  pos(QMouseEvent* theWrappedObject) const;
};





class PythonQtShell_QMoveEvent : public QMoveEvent
{
public:
    PythonQtShell_QMoveEvent(const QPoint&  pos, const QPoint&  oldPos):QMoveEvent(pos, oldPos),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QMoveEvent* new_QMoveEvent(const QPoint&  pos, const QPoint&  oldPos);
void delete_QMoveEvent(QMoveEvent* obj) { delete obj; } 
   const QPoint*  pos(QMoveEvent* theWrappedObject) const;
   const QPoint*  oldPos(QMoveEvent* theWrappedObject) const;
};





class PythonQtShell_QMovie : public QMovie
{
public:
    PythonQtShell_QMovie(QIODevice*  device, const QByteArray&  format = QByteArray(), QObject*  parent = 0):QMovie(device, format, parent),_wrapper(NULL) {};
    PythonQtShell_QMovie(QObject*  parent = 0):QMovie(parent),_wrapper(NULL) {};
    PythonQtShell_QMovie(const QString&  fileName, const QByteArray&  format = QByteArray(), QObject*  parent = 0):QMovie(fileName, format, parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMovie : public QObject
{ Q_OBJECT
public:
public slots:
QMovie* new_QMovie(QIODevice*  device, const QByteArray&  format = QByteArray(), QObject*  parent = 0);
QMovie* new_QMovie(QObject*  parent = 0);
QMovie* new_QMovie(const QString&  fileName, const QByteArray&  format = QByteArray(), QObject*  parent = 0);
void delete_QMovie(QMovie* obj) { delete obj; } 
   QSize  scaledSize(QMovie* theWrappedObject);
   QList<QByteArray >  static_QMovie_supportedFormats();
   int  loopCount(QMovie* theWrappedObject) const;
   QIODevice*  device(QMovie* theWrappedObject) const;
   void setCacheMode(QMovie* theWrappedObject, QMovie::CacheMode  mode);
   QImage  currentImage(QMovie* theWrappedObject) const;
   QColor  backgroundColor(QMovie* theWrappedObject) const;
   void setBackgroundColor(QMovie* theWrappedObject, const QColor&  color);
   void setFormat(QMovie* theWrappedObject, const QByteArray&  format);
   void setFileName(QMovie* theWrappedObject, const QString&  fileName);
   void setScaledSize(QMovie* theWrappedObject, const QSize&  size);
   int  currentFrameNumber(QMovie* theWrappedObject) const;
   bool  isValid(QMovie* theWrappedObject) const;
   QPixmap  currentPixmap(QMovie* theWrappedObject) const;
   QRect  frameRect(QMovie* theWrappedObject) const;
   int  nextFrameDelay(QMovie* theWrappedObject) const;
   QMovie::MovieState  state(QMovie* theWrappedObject) const;
   QString  fileName(QMovie* theWrappedObject) const;
   int  speed(QMovie* theWrappedObject) const;
   QByteArray  format(QMovie* theWrappedObject) const;
   bool  jumpToFrame(QMovie* theWrappedObject, int  frameNumber);
   int  frameCount(QMovie* theWrappedObject) const;
   QMovie::CacheMode  cacheMode(QMovie* theWrappedObject) const;
   void setDevice(QMovie* theWrappedObject, QIODevice*  device);
};





class PythonQtShell_QPageSetupDialog : public QPageSetupDialog
{
public:
    PythonQtShell_QPageSetupDialog(QPrinter*  printer, QWidget*  parent = 0):QPageSetupDialog(printer, parent),_wrapper(NULL) {};

virtual int  exec();
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void reject();
virtual void accept();
virtual void done(int  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void languageChange();
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual bool  event(QEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPageSetupDialog : public QPageSetupDialog
{ public:
inline int  promoted_exec() { return QPageSetupDialog::exec(); }
};

class PythonQtWrapper_QPageSetupDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PageSetupDialogOption )
Q_FLAGS(PageSetupDialogOptions )
enum PageSetupDialogOption{
  None = QPageSetupDialog::None,   DontUseSheet = QPageSetupDialog::DontUseSheet};
Q_DECLARE_FLAGS(PageSetupDialogOptions, PageSetupDialogOption)
public slots:
QPageSetupDialog* new_QPageSetupDialog(QPrinter*  printer, QWidget*  parent = 0);
void delete_QPageSetupDialog(QPageSetupDialog* obj) { delete obj; } 
   void addEnabledOption(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option);
   void setEnabledOptions(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOptions  options);
   QPageSetupDialog::PageSetupDialogOptions  enabledOptions(QPageSetupDialog* theWrappedObject) const;
   int  exec(QPageSetupDialog* theWrappedObject);
   bool  isOptionEnabled(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option) const;
};





class PythonQtShell_QPaintDevice : public QPaintDevice
{
public:
    PythonQtShell_QPaintDevice():QPaintDevice(),_wrapper(NULL) {};

virtual QPaintEngine*  paintEngine() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual int  devType() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPaintDevice : public QPaintDevice
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QPaintDevice::metric(metric); }
inline int  promoted_devType() const { return QPaintDevice::devType(); }
};

class PythonQtWrapper_QPaintDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PaintDeviceMetric )
enum PaintDeviceMetric{
  PdmWidth = QPaintDevice::PdmWidth,   PdmHeight = QPaintDevice::PdmHeight,   PdmWidthMM = QPaintDevice::PdmWidthMM,   PdmHeightMM = QPaintDevice::PdmHeightMM,   PdmNumColors = QPaintDevice::PdmNumColors,   PdmDepth = QPaintDevice::PdmDepth,   PdmDpiX = QPaintDevice::PdmDpiX,   PdmDpiY = QPaintDevice::PdmDpiY,   PdmPhysicalDpiX = QPaintDevice::PdmPhysicalDpiX,   PdmPhysicalDpiY = QPaintDevice::PdmPhysicalDpiY};
public slots:
QPaintDevice* new_QPaintDevice();
void delete_QPaintDevice(QPaintDevice* obj) { delete obj; } 
   int  heightMM(QPaintDevice* theWrappedObject) const;
   int  physicalDpiY(QPaintDevice* theWrappedObject) const;
   int  physicalDpiX(QPaintDevice* theWrappedObject) const;
   int  width(QPaintDevice* theWrappedObject) const;
   int  widthMM(QPaintDevice* theWrappedObject) const;
   int  numColors(QPaintDevice* theWrappedObject) const;
   int  depth(QPaintDevice* theWrappedObject) const;
   int  metric(QPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   int  logicalDpiY(QPaintDevice* theWrappedObject) const;
   bool  paintingActive(QPaintDevice* theWrappedObject) const;
   int  height(QPaintDevice* theWrappedObject) const;
   int  logicalDpiX(QPaintDevice* theWrappedObject) const;
   int  devType(QPaintDevice* theWrappedObject) const;
};





class PythonQtShell_QPaintEngine : public QPaintEngine
{
public:
    PythonQtShell_QPaintEngine(QPaintEngine::PaintEngineFeatures  features = 0):QPaintEngine(features),_wrapper(NULL) {};

virtual QPaintEngine::Type  type() const;
virtual void drawEllipse(const QRect&  r);
virtual void updateState(const QPaintEngineState&  state);
virtual void drawEllipse(const QRectF&  r);
virtual void drawImage(const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
virtual void drawPixmap(const QRectF&  r, const QPixmap&  pm, const QRectF&  sr);
virtual void drawPath(const QPainterPath&  path);
virtual bool  begin(QPaintDevice*  pdev);
virtual void drawTiledPixmap(const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s);
virtual void drawRects(const QRectF*  rects, int  rectCount);
virtual void drawRects(const QRect*  rects, int  rectCount);
virtual bool  end();
virtual QPoint  coordinateOffset() const;
virtual void drawLines(const QLineF*  lines, int  lineCount);
virtual void drawLines(const QLine*  lines, int  lineCount);
virtual void drawPolygon(const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
virtual void drawPolygon(const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
virtual void drawPoints(const QPoint*  points, int  pointCount);
virtual void drawTextItem(const QPointF&  p, const QTextItem&  textItem);
virtual void drawPoints(const QPointF*  points, int  pointCount);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPaintEngine : public QPaintEngine
{ public:
inline void promoted_drawEllipse(const QRect&  r) { QPaintEngine::drawEllipse(r); }
inline void promoted_drawEllipse(const QRectF&  r) { QPaintEngine::drawEllipse(r); }
inline void promoted_drawImage(const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor) { QPaintEngine::drawImage(r, pm, sr, flags); }
inline void promoted_drawPath(const QPainterPath&  path) { QPaintEngine::drawPath(path); }
inline void promoted_drawTiledPixmap(const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s) { QPaintEngine::drawTiledPixmap(r, pixmap, s); }
inline void promoted_drawRects(const QRectF*  rects, int  rectCount) { QPaintEngine::drawRects(rects, rectCount); }
inline void promoted_drawRects(const QRect*  rects, int  rectCount) { QPaintEngine::drawRects(rects, rectCount); }
inline QPoint  promoted_coordinateOffset() const { return QPaintEngine::coordinateOffset(); }
inline void promoted_drawLines(const QLineF*  lines, int  lineCount) { QPaintEngine::drawLines(lines, lineCount); }
inline void promoted_drawLines(const QLine*  lines, int  lineCount) { QPaintEngine::drawLines(lines, lineCount); }
inline void promoted_drawPolygon(const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) { QPaintEngine::drawPolygon(points, pointCount, mode); }
inline void promoted_drawPolygon(const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) { QPaintEngine::drawPolygon(points, pointCount, mode); }
inline void promoted_drawPoints(const QPoint*  points, int  pointCount) { QPaintEngine::drawPoints(points, pointCount); }
inline void promoted_drawTextItem(const QPointF&  p, const QTextItem&  textItem) { QPaintEngine::drawTextItem(p, textItem); }
inline void promoted_drawPoints(const QPointF*  points, int  pointCount) { QPaintEngine::drawPoints(points, pointCount); }
};

class PythonQtWrapper_QPaintEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PolygonDrawMode Type PaintEngineFeature DirtyFlag )
Q_FLAGS(PaintEngineFeatures DirtyFlags )
enum PolygonDrawMode{
  OddEvenMode = QPaintEngine::OddEvenMode,   WindingMode = QPaintEngine::WindingMode,   ConvexMode = QPaintEngine::ConvexMode,   PolylineMode = QPaintEngine::PolylineMode};
enum Type{
  X11 = QPaintEngine::X11,   Windows = QPaintEngine::Windows,   QuickDraw = QPaintEngine::QuickDraw,   CoreGraphics = QPaintEngine::CoreGraphics,   MacPrinter = QPaintEngine::MacPrinter,   QWindowSystem = QPaintEngine::QWindowSystem,   PostScript = QPaintEngine::PostScript,   OpenGL = QPaintEngine::OpenGL,   Picture = QPaintEngine::Picture,   SVG = QPaintEngine::SVG,   Raster = QPaintEngine::Raster,   Direct3D = QPaintEngine::Direct3D,   Pdf = QPaintEngine::Pdf,   User = QPaintEngine::User,   MaxUser = QPaintEngine::MaxUser};
enum PaintEngineFeature{
  PrimitiveTransform = QPaintEngine::PrimitiveTransform,   PatternTransform = QPaintEngine::PatternTransform,   PixmapTransform = QPaintEngine::PixmapTransform,   PatternBrush = QPaintEngine::PatternBrush,   LinearGradientFill = QPaintEngine::LinearGradientFill,   RadialGradientFill = QPaintEngine::RadialGradientFill,   ConicalGradientFill = QPaintEngine::ConicalGradientFill,   AlphaBlend = QPaintEngine::AlphaBlend,   PorterDuff = QPaintEngine::PorterDuff,   PainterPaths = QPaintEngine::PainterPaths,   Antialiasing = QPaintEngine::Antialiasing,   BrushStroke = QPaintEngine::BrushStroke,   ConstantOpacity = QPaintEngine::ConstantOpacity,   MaskedBrush = QPaintEngine::MaskedBrush,   PerspectiveTransform = QPaintEngine::PerspectiveTransform,   BlendModes = QPaintEngine::BlendModes,   ObjectBoundingModeGradients = QPaintEngine::ObjectBoundingModeGradients,   PaintOutsidePaintEvent = QPaintEngine::PaintOutsidePaintEvent,   AllFeatures = QPaintEngine::AllFeatures};
enum DirtyFlag{
  DirtyPen = QPaintEngine::DirtyPen,   DirtyBrush = QPaintEngine::DirtyBrush,   DirtyBrushOrigin = QPaintEngine::DirtyBrushOrigin,   DirtyFont = QPaintEngine::DirtyFont,   DirtyBackground = QPaintEngine::DirtyBackground,   DirtyBackgroundMode = QPaintEngine::DirtyBackgroundMode,   DirtyTransform = QPaintEngine::DirtyTransform,   DirtyClipRegion = QPaintEngine::DirtyClipRegion,   DirtyClipPath = QPaintEngine::DirtyClipPath,   DirtyHints = QPaintEngine::DirtyHints,   DirtyCompositionMode = QPaintEngine::DirtyCompositionMode,   DirtyClipEnabled = QPaintEngine::DirtyClipEnabled,   DirtyOpacity = QPaintEngine::DirtyOpacity,   AllDirty = QPaintEngine::AllDirty};
Q_DECLARE_FLAGS(PaintEngineFeatures, PaintEngineFeature)
Q_DECLARE_FLAGS(DirtyFlags, DirtyFlag)
public slots:
QPaintEngine* new_QPaintEngine(QPaintEngine::PaintEngineFeatures  features = 0);
void delete_QPaintEngine(QPaintEngine* obj) { delete obj; } 
   void syncState(QPaintEngine* theWrappedObject);
   QPaintDevice*  paintDevice(QPaintEngine* theWrappedObject) const;
   void setSystemClip(QPaintEngine* theWrappedObject, const QRegion&  baseClip);
   QRect  systemRect(QPaintEngine* theWrappedObject) const;
   void drawEllipse(QPaintEngine* theWrappedObject, const QRect&  r);
   void drawEllipse(QPaintEngine* theWrappedObject, const QRectF&  r);
   void drawImage(QPaintEngine* theWrappedObject, const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawPath(QPaintEngine* theWrappedObject, const QPainterPath&  path);
   void setDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   void clearDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   void drawTiledPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s);
   bool  testDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   void drawRects(QPaintEngine* theWrappedObject, const QRectF*  rects, int  rectCount);
   void drawRects(QPaintEngine* theWrappedObject, const QRect*  rects, int  rectCount);
   bool  isActive(QPaintEngine* theWrappedObject) const;
   QRegion  systemClip(QPaintEngine* theWrappedObject) const;
   QPoint  coordinateOffset(QPaintEngine* theWrappedObject) const;
   void drawLines(QPaintEngine* theWrappedObject, const QLineF*  lines, int  lineCount);
   void drawLines(QPaintEngine* theWrappedObject, const QLine*  lines, int  lineCount);
   bool  hasFeature(QPaintEngine* theWrappedObject, QPaintEngine::PaintEngineFeatures  feature) const;
   QPainter*  painter(QPaintEngine* theWrappedObject) const;
   void drawPolygon(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
   void drawPolygon(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
   void drawPoints(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount);
   void drawTextItem(QPaintEngine* theWrappedObject, const QPointF&  p, const QTextItem&  textItem);
   void setActive(QPaintEngine* theWrappedObject, bool  newState);
   void drawPoints(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount);
   void setSystemRect(QPaintEngine* theWrappedObject, const QRect&  rect);
};


