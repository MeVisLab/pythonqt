#include <PythonQt.h>
#include <QIcon>
#include <QMessageBox>
#include <QObject>
#include <QVariant>
#include <qabstractbutton.h>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qactiongroup.h>
#include <qapplication.h>
#include <qbitmap.h>
#include <qboxlayout.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
#include <qevent.h>
#include <qfont.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qline.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmatrix.h>
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextformat.h>
#include <qtoolbar.h>
#include <qtoolbox.h>
#include <qtoolbutton.h>
#include <qtooltip.h>
#include <qtransform.h>
#include <qtreeview.h>
#include <qtreewidget.h>
#include <qundogroup.h>
#include <qundostack.h>
#include <qundoview.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qwhatsthis.h>
#include <qwidget.h>
#include <qwidgetaction.h>
#include <qwindowsstyle.h>
#include <qwizard.h>
#include <qworkspace.h>



class PythonQtShell_QTextTableFormat : public QTextTableFormat
{
public:
    PythonQtShell_QTextTableFormat():QTextTableFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextTableFormat(const QTextFormat&  fmt):QTextTableFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextTableFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextTableFormat* new_QTextTableFormat();
QTextTableFormat* new_QTextTableFormat(const QTextTableFormat& other) {
PythonQtShell_QTextTableFormat* a = new PythonQtShell_QTextTableFormat();
*((QTextTableFormat*)a) = other;
return a; }
void delete_QTextTableFormat(QTextTableFormat* obj) { delete obj; } 
   void clearColumnWidthConstraints(QTextTableFormat* theWrappedObject);
   bool  isValid(QTextTableFormat* theWrappedObject) const;
   int  headerRowCount(QTextTableFormat* theWrappedObject) const;
   Qt::Alignment  alignment(QTextTableFormat* theWrappedObject) const;
   void setHeaderRowCount(QTextTableFormat* theWrappedObject, int  count);
   void setAlignment(QTextTableFormat* theWrappedObject, Qt::Alignment  alignment);
   int  columns(QTextTableFormat* theWrappedObject) const;
   void setColumnWidthConstraints(QTextTableFormat* theWrappedObject, const QVector<QTextLength >&  constraints);
   QVector<QTextLength >  columnWidthConstraints(QTextTableFormat* theWrappedObject) const;
   qreal  cellSpacing(QTextTableFormat* theWrappedObject) const;
   qreal  cellPadding(QTextTableFormat* theWrappedObject) const;
   void setCellPadding(QTextTableFormat* theWrappedObject, qreal  padding);
   void setCellSpacing(QTextTableFormat* theWrappedObject, qreal  spacing);
   void setColumns(QTextTableFormat* theWrappedObject, int  columns);
};





class PythonQtShell_QTimeEdit : public QTimeEdit
{
public:
    PythonQtShell_QTimeEdit(QWidget*  parent = 0):QTimeEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QTimeEdit(const QTime&  time, QWidget*  parent = 0):QTimeEdit(time, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  event);
virtual void fixup(QString&  input) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void wheelEvent(QWheelEvent*  event);
virtual QDateTime  dateTimeFromText(const QString&  text) const;
virtual void paintEvent(QPaintEvent*  event);
virtual void stepBy(int  steps);
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual QString  textFromDateTime(const QDateTime&  dt) const;
virtual void clear();
virtual void focusInEvent(QFocusEvent*  event);
virtual QAbstractSpinBox::StepEnabled  stepEnabled() const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void dropEvent(QDropEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTimeEdit : public QObject
{ Q_OBJECT
public:
public slots:
QTimeEdit* new_QTimeEdit(QWidget*  parent = 0);
QTimeEdit* new_QTimeEdit(const QTime&  time, QWidget*  parent = 0);
void delete_QTimeEdit(QTimeEdit* obj) { delete obj; } 
};





class PythonQtShell_QToolBar : public QToolBar
{
public:
    PythonQtShell_QToolBar(QWidget*  parent = 0):QToolBar(parent),_wrapper(NULL) {};
    PythonQtShell_QToolBar(const QString&  title, QWidget*  parent = 0):QToolBar(title, parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  event);
virtual void paintEvent(QPaintEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual bool  event(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void languageChange();
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
virtual QSize  sizeHint() const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QToolBar : public QToolBar
{ public:
inline void promoted_actionEvent(QActionEvent*  event) { QToolBar::actionEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QToolBar::paintEvent(event); }
inline void promoted_changeEvent(QEvent*  event) { QToolBar::changeEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QToolBar::resizeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QToolBar::event(event); }
inline void promoted_childEvent(QChildEvent*  event) { QToolBar::childEvent(event); }
};

class PythonQtWrapper_QToolBar : public QObject
{ Q_OBJECT
public:
public slots:
QToolBar* new_QToolBar(QWidget*  parent = 0);
QToolBar* new_QToolBar(const QString&  title, QWidget*  parent = 0);
void delete_QToolBar(QToolBar* obj) { delete obj; } 
   QAction*  insertSeparator(QToolBar* theWrappedObject, QAction*  before);
   QAction*  insertWidget(QToolBar* theWrappedObject, QAction*  before, QWidget*  widget);
   QAction*  toggleViewAction(QToolBar* theWrappedObject) const;
   void clear(QToolBar* theWrappedObject);
   void actionEvent(QToolBar* theWrappedObject, QActionEvent*  event);
   void setFloatable(QToolBar* theWrappedObject, bool  floatable);
   QWidget*  widgetForAction(QToolBar* theWrappedObject, QAction*  action) const;
   QAction*  actionAt(QToolBar* theWrappedObject, int  x, int  y) const;
   QAction*  actionAt(QToolBar* theWrappedObject, const QPoint&  p) const;
   void setOrientation(QToolBar* theWrappedObject, Qt::Orientation  orientation);
   QAction*  addSeparator(QToolBar* theWrappedObject);
   void setMovable(QToolBar* theWrappedObject, bool  movable);
   bool  isMovable(QToolBar* theWrappedObject) const;
   void setAllowedAreas(QToolBar* theWrappedObject, Qt::ToolBarAreas  areas);
   bool  isFloatable(QToolBar* theWrappedObject) const;
   QSize  iconSize(QToolBar* theWrappedObject) const;
   Qt::ToolButtonStyle  toolButtonStyle(QToolBar* theWrappedObject) const;
   QAction*  addWidget(QToolBar* theWrappedObject, QWidget*  widget);
   void paintEvent(QToolBar* theWrappedObject, QPaintEvent*  event);
   QAction*  addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text);
   QAction*  addAction(QToolBar* theWrappedObject, const QString&  text);
   bool  isFloating(QToolBar* theWrappedObject) const;
   Qt::Orientation  orientation(QToolBar* theWrappedObject) const;
   void changeEvent(QToolBar* theWrappedObject, QEvent*  event);
   Qt::ToolBarAreas  allowedAreas(QToolBar* theWrappedObject) const;
   QRect  actionGeometry(QToolBar* theWrappedObject, QAction*  action) const;
   void resizeEvent(QToolBar* theWrappedObject, QResizeEvent*  event);
   bool  event(QToolBar* theWrappedObject, QEvent*  event);
   void childEvent(QToolBar* theWrappedObject, QChildEvent*  event);
   bool  isAreaAllowed(QToolBar* theWrappedObject, Qt::ToolBarArea  area) const;
};





class PythonQtWrapper_QToolBarChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QToolBarChangeEvent* new_QToolBarChangeEvent(bool  t);
void delete_QToolBarChangeEvent(QToolBarChangeEvent* obj) { delete obj; } 
   bool  toggle(QToolBarChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QToolBox : public QToolBox
{
public:
    PythonQtShell_QToolBox(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QToolBox(parent, f),_wrapper(NULL) {};

virtual void itemRemoved(int  index);
virtual bool  event(QEvent*  e);
virtual void changeEvent(QEvent*  arg__1);
virtual void showEvent(QShowEvent*  e);
virtual void itemInserted(int  index);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void languageChange();
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
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
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

class PythonQtPublicPromoter_QToolBox : public QToolBox
{ public:
inline void promoted_itemRemoved(int  index) { QToolBox::itemRemoved(index); }
inline bool  promoted_event(QEvent*  e) { return QToolBox::event(e); }
inline void promoted_changeEvent(QEvent*  arg__1) { QToolBox::changeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  e) { QToolBox::showEvent(e); }
inline void promoted_itemInserted(int  index) { QToolBox::itemInserted(index); }
};

class PythonQtWrapper_QToolBox : public QObject
{ Q_OBJECT
public:
public slots:
QToolBox* new_QToolBox(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QToolBox(QToolBox* obj) { delete obj; } 
   void itemRemoved(QToolBox* theWrappedObject, int  index);
   QIcon  itemIcon(QToolBox* theWrappedObject, int  index) const;
   bool  event(QToolBox* theWrappedObject, QEvent*  e);
   int  insertItem(QToolBox* theWrappedObject, int  index, QWidget*  widget, const QIcon&  icon, const QString&  text);
   void setItemIcon(QToolBox* theWrappedObject, int  index, const QIcon&  icon);
   int  insertItem(QToolBox* theWrappedObject, int  index, QWidget*  widget, const QString&  text);
   void changeEvent(QToolBox* theWrappedObject, QEvent*  arg__1);
   bool  isItemEnabled(QToolBox* theWrappedObject, int  index) const;
   int  indexOf(QToolBox* theWrappedObject, QWidget*  widget) const;
   QString  itemText(QToolBox* theWrappedObject, int  index) const;
   int  count(QToolBox* theWrappedObject) const;
   QWidget*  currentWidget(QToolBox* theWrappedObject) const;
   void setItemToolTip(QToolBox* theWrappedObject, int  index, const QString&  toolTip);
   QWidget*  widget(QToolBox* theWrappedObject, int  index) const;
   void showEvent(QToolBox* theWrappedObject, QShowEvent*  e);
   int  addItem(QToolBox* theWrappedObject, QWidget*  widget, const QString&  text);
   QString  itemToolTip(QToolBox* theWrappedObject, int  index) const;
   int  addItem(QToolBox* theWrappedObject, QWidget*  widget, const QIcon&  icon, const QString&  text);
   void removeItem(QToolBox* theWrappedObject, int  index);
   void itemInserted(QToolBox* theWrappedObject, int  index);
   void setItemText(QToolBox* theWrappedObject, int  index, const QString&  text);
   void setItemEnabled(QToolBox* theWrappedObject, int  index, bool  enabled);
   int  currentIndex(QToolBox* theWrappedObject) const;
};





class PythonQtShell_QToolButton : public QToolButton
{
public:
    PythonQtShell_QToolButton(QWidget*  parent = 0):QToolButton(parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  e);
virtual void nextCheckState();
virtual void leaveEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual bool  hitButton(const QPoint&  pos) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void focusOutEvent(QFocusEvent*  e);
virtual void checkStateSet();
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void keyPressEvent(QKeyEvent*  e);
virtual void focusInEvent(QFocusEvent*  e);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QToolButton : public QToolButton
{ public:
inline bool  promoted_event(QEvent*  e) { return QToolButton::event(e); }
inline void promoted_nextCheckState() { QToolButton::nextCheckState(); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QToolButton::leaveEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QToolButton::changeEvent(arg__1); }
inline void promoted_actionEvent(QActionEvent*  arg__1) { QToolButton::actionEvent(arg__1); }
inline bool  promoted_hitButton(const QPoint&  pos) const { return QToolButton::hitButton(pos); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QToolButton::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QToolButton::mouseReleaseEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QToolButton::timerEvent(arg__1); }
inline void promoted_enterEvent(QEvent*  arg__1) { QToolButton::enterEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QToolButton::paintEvent(arg__1); }
};

class PythonQtWrapper_QToolButton : public QObject
{ Q_OBJECT
public:
public slots:
QToolButton* new_QToolButton(QWidget*  parent = 0);
void delete_QToolButton(QToolButton* obj) { delete obj; } 
   bool  event(QToolButton* theWrappedObject, QEvent*  e);
   void nextCheckState(QToolButton* theWrappedObject);
   bool  autoRaise(QToolButton* theWrappedObject) const;
   QMenu*  menu(QToolButton* theWrappedObject) const;
   void leaveEvent(QToolButton* theWrappedObject, QEvent*  arg__1);
   void changeEvent(QToolButton* theWrappedObject, QEvent*  arg__1);
   void setArrowType(QToolButton* theWrappedObject, Qt::ArrowType  type);
   void actionEvent(QToolButton* theWrappedObject, QActionEvent*  arg__1);
   QSize  sizeHint(QToolButton* theWrappedObject) const;
   void setMenu(QToolButton* theWrappedObject, QMenu*  menu);
   QAction*  defaultAction(QToolButton* theWrappedObject) const;
   QToolButton::ToolButtonPopupMode  popupMode(QToolButton* theWrappedObject) const;
   bool  hitButton(QToolButton* theWrappedObject, const QPoint&  pos) const;
   void setAutoRaise(QToolButton* theWrappedObject, bool  enable);
   void mousePressEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1);
   void mouseReleaseEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1);
   Qt::ToolButtonStyle  toolButtonStyle(QToolButton* theWrappedObject) const;
   void setPopupMode(QToolButton* theWrappedObject, QToolButton::ToolButtonPopupMode  mode);
   QSize  minimumSizeHint(QToolButton* theWrappedObject) const;
   void timerEvent(QToolButton* theWrappedObject, QTimerEvent*  arg__1);
   Qt::ArrowType  arrowType(QToolButton* theWrappedObject) const;
   void enterEvent(QToolButton* theWrappedObject, QEvent*  arg__1);
   void paintEvent(QToolButton* theWrappedObject, QPaintEvent*  arg__1);
};





class PythonQtWrapper_QToolTip : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QToolTip(QToolTip* obj) { delete obj; } 
   QPalette  static_QToolTip_palette();
   void static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w, const QRect&  rect);
   void static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w = 0);
   void static_QToolTip_hideText();
   void static_QToolTip_setFont(const QFont&  arg__1);
   QString  static_QToolTip_text();
   bool  static_QToolTip_isVisible();
   void static_QToolTip_setPalette(const QPalette&  arg__1);
   QFont  static_QToolTip_font();
};





class PythonQtWrapper_QTransform : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TransformationType )
enum TransformationType{
  TxNone = QTransform::TxNone,   TxTranslate = QTransform::TxTranslate,   TxScale = QTransform::TxScale,   TxRotate = QTransform::TxRotate,   TxShear = QTransform::TxShear,   TxProject = QTransform::TxProject};
public slots:
QTransform* new_QTransform();
QTransform* new_QTransform(const QMatrix&  mtx);
QTransform* new_QTransform(qreal  h11, qreal  h12, qreal  h13, qreal  h21, qreal  h22, qreal  h23);
QTransform* new_QTransform(qreal  h11, qreal  h12, qreal  h13, qreal  h21, qreal  h22, qreal  h23, qreal  h31, qreal  h32, qreal  h33 = 1.0);
QTransform* new_QTransform(const QTransform& other) {
QTransform* a = new QTransform();
*((QTransform*)a) = other;
return a; }
void delete_QTransform(QTransform* obj) { delete obj; } 
   QRect  mapRect(QTransform* theWrappedObject, const QRect&  arg__1) const;
   bool  isRotating(QTransform* theWrappedObject) const;
   QTransform*  rotateRadians(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   bool  operator_equal(QTransform* theWrappedObject, const QTransform&  arg__1) const;
   void setMatrix(QTransform* theWrappedObject, qreal  m11, qreal  m12, qreal  m13, qreal  m21, qreal  m22, qreal  m23, qreal  m31, qreal  m32, qreal  m33);
   QTransform*  __idiv__(QTransform* theWrappedObject, qreal  div);
   bool  isInvertible(QTransform* theWrappedObject) const;
   qreal  m21(QTransform* theWrappedObject) const;
   qreal  m22(QTransform* theWrappedObject) const;
   QTransform::TransformationType  type(QTransform* theWrappedObject) const;
   QTransform*  rotate(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   qreal  m23(QTransform* theWrappedObject) const;
   bool  static_QTransform_squareToQuad(const QPolygonF&  square, QTransform&  result);
   bool  isScaling(QTransform* theWrappedObject) const;
   qreal  determinant(QTransform* theWrappedObject) const;
   bool  isAffine(QTransform* theWrappedObject) const;
   QLineF  map(QTransform* theWrappedObject, const QLineF&  l) const;
   QPolygonF  map(QTransform* theWrappedObject, const QPolygonF&  a) const;
   QPolygon  map(QTransform* theWrappedObject, const QPolygon&  a) const;
   QRegion  map(QTransform* theWrappedObject, const QRegion&  r) const;
   QPainterPath  map(QTransform* theWrappedObject, const QPainterPath&  p) const;
   QPoint  map(QTransform* theWrappedObject, const QPoint&  p) const;
   QLine  map(QTransform* theWrappedObject, const QLine&  l) const;
   QPointF  map(QTransform* theWrappedObject, const QPointF&  p) const;
   QTransform*  scale(QTransform* theWrappedObject, qreal  sx, qreal  sy);
   qreal  m31(QTransform* theWrappedObject) const;
   qreal  m32(QTransform* theWrappedObject) const;
   bool  static_QTransform_quadToSquare(const QPolygonF&  quad, QTransform&  result);
   qreal  m33(QTransform* theWrappedObject) const;
   QTransform*  __isub__(QTransform* theWrappedObject, qreal  div);
   QRectF  mapRect(QTransform* theWrappedObject, const QRectF&  arg__1) const;
   QTransform  transposed(QTransform* theWrappedObject) const;
   bool  isIdentity(QTransform* theWrappedObject) const;
   QTransform*  translate(QTransform* theWrappedObject, qreal  dx, qreal  dy);
   QTransform*  __imul__(QTransform* theWrappedObject, qreal  div);
   qreal  dx(QTransform* theWrappedObject) const;
   QTransform*  __imul__(QTransform* theWrappedObject, const QTransform&  arg__1);
   QTransform  inverted(QTransform* theWrappedObject, bool*  invertible = 0) const;
   bool  isTranslating(QTransform* theWrappedObject) const;
   qreal  dy(QTransform* theWrappedObject) const;
   void reset(QTransform* theWrappedObject);
   QTransform*  __iadd__(QTransform* theWrappedObject, qreal  div);
   QTransform  multiplied(QTransform* theWrappedObject, const QTransform&  o) const;
   bool  static_QTransform_quadToQuad(const QPolygonF&  one, const QPolygonF&  two, QTransform&  result);
   const QMatrix*  toAffine(QTransform* theWrappedObject) const;
   QTransform  adjoint(QTransform* theWrappedObject) const;
   QPolygon  mapToPolygon(QTransform* theWrappedObject, const QRect&  r) const;
   qreal  m11(QTransform* theWrappedObject) const;
   qreal  m13(QTransform* theWrappedObject) const;
   qreal  det(QTransform* theWrappedObject) const;
   QTransform*  shear(QTransform* theWrappedObject, qreal  sh, qreal  sv);
   qreal  m12(QTransform* theWrappedObject) const;
   QTransform  __sub__(QTransform* theWrappedObject, qreal  n);
   QTransform  __add__(QTransform* theWrappedObject, qreal  n);
   QTransform  __div__(QTransform* theWrappedObject, qreal  n);
   QTransform  __mul__(QTransform* theWrappedObject, qreal  n);
   void writeTo(QTransform* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QTransform* theWrappedObject, QDataStream&  arg__1);
    QString toString(QTransform*);
};





class PythonQtShell_QTreeView : public QTreeView
{
public:
    PythonQtShell_QTreeView(QWidget*  parent = 0):QTreeView(parent),_wrapper(NULL) {};

virtual void setModel(QAbstractItemModel*  model);
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual int  horizontalOffset() const;
virtual void keyboardSearch(const QString&  search);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void reset();
virtual void updateGeometries();
virtual void horizontalScrollbarAction(int  action);
virtual void drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const;
virtual QList<QModelIndex >  selectedIndexes() const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void selectAll();
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void setRootIndex(const QModelIndex&  index);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void doItemsLayout();
virtual bool  viewportEvent(QEvent*  event);
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void timerEvent(QTimerEvent*  event);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual void drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const;
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual void paintEvent(QPaintEvent*  event);
virtual int  verticalOffset() const;
virtual void scrollContentsBy(int  dx, int  dy);
virtual int  sizeHintForColumn(int  column) const;
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void verticalScrollbarValueChanged(int  value);
virtual void editorDestroyed(QObject*  editor);
virtual void updateEditorData();
virtual void commitData(QWidget*  editor);
virtual void dropEvent(QDropEvent*  event);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual QStyleOptionViewItem  viewOptions() const;
virtual bool  event(QEvent*  event);
virtual void verticalScrollbarAction(int  action);
virtual void updateEditorGeometries();
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual int  sizeHintForRow(int  row) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void horizontalScrollbarValueChanged(int  value);
virtual bool  focusNextPrevChild(bool  next);
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

class PythonQtPublicPromoter_QTreeView : public QTreeView
{ public:
inline void promoted_setModel(QAbstractItemModel*  model) { QTreeView::setModel(model); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QTreeView::visualRegionForSelection(selection); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QTreeView::keyPressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QTreeView::mouseReleaseEvent(event); }
inline int  promoted_horizontalOffset() const { return QTreeView::horizontalOffset(); }
inline void promoted_keyboardSearch(const QString&  search) { QTreeView::keyboardSearch(search); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QTreeView::rowsInserted(parent, start, end); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QTreeView::mousePressEvent(event); }
inline void promoted_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QTreeView::rowsAboutToBeRemoved(parent, start, end); }
inline void promoted_reset() { QTreeView::reset(); }
inline void promoted_updateGeometries() { QTreeView::updateGeometries(); }
inline void promoted_horizontalScrollbarAction(int  action) { QTreeView::horizontalScrollbarAction(action); }
inline void promoted_drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const { QTreeView::drawRow(painter, options, index); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return QTreeView::selectedIndexes(); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QTreeView::isIndexHidden(index); }
inline void promoted_setSelectionModel(QItemSelectionModel*  selectionModel) { QTreeView::setSelectionModel(selectionModel); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QTreeView::indexAt(p); }
inline void promoted_selectAll() { QTreeView::selectAll(); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QTreeView::mouseMoveEvent(event); }
inline void promoted_setRootIndex(const QModelIndex&  index) { QTreeView::setRootIndex(index); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { QTreeView::mouseDoubleClickEvent(event); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QTreeView::selectionChanged(selected, deselected); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { QTreeView::dragMoveEvent(event); }
inline void promoted_doItemsLayout() { QTreeView::doItemsLayout(); }
inline bool  promoted_viewportEvent(QEvent*  event) { return QTreeView::viewportEvent(event); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QTreeView::visualRect(index); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QTreeView::currentChanged(current, previous); }
inline void promoted_timerEvent(QTimerEvent*  event) { QTreeView::timerEvent(event); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QTreeView::scrollTo(index, hint); }
inline void promoted_drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const { QTreeView::drawBranches(painter, rect, index); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight) { QTreeView::dataChanged(topLeft, bottomRight); }
inline void promoted_paintEvent(QPaintEvent*  event) { QTreeView::paintEvent(event); }
inline int  promoted_verticalOffset() const { return QTreeView::verticalOffset(); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QTreeView::scrollContentsBy(dx, dy); }
inline int  promoted_sizeHintForColumn(int  column) const { return QTreeView::sizeHintForColumn(column); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QTreeView::setSelection(rect, command); }
};

class PythonQtWrapper_QTreeView : public QObject
{ Q_OBJECT
public:
public slots:
QTreeView* new_QTreeView(QWidget*  parent = 0);
void delete_QTreeView(QTreeView* obj) { delete obj; } 
   QModelIndex  indexAbove(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void setModel(QTreeView* theWrappedObject, QAbstractItemModel*  model);
   QRegion  visualRegionForSelection(QTreeView* theWrappedObject, const QItemSelection&  selection) const;
   bool  allColumnsShowFocus(QTreeView* theWrappedObject) const;
   void setFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  span);
   void setExpanded(QTreeView* theWrappedObject, const QModelIndex&  index, bool  expand);
   void keyPressEvent(QTreeView* theWrappedObject, QKeyEvent*  event);
   void mouseReleaseEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   int  horizontalOffset(QTreeView* theWrappedObject) const;
   bool  rootIsDecorated(QTreeView* theWrappedObject) const;
   void setExpandsOnDoubleClick(QTreeView* theWrappedObject, bool  enable);
   void keyboardSearch(QTreeView* theWrappedObject, const QString&  search);
   void setAutoExpandDelay(QTreeView* theWrappedObject, int  delay);
   void setItemsExpandable(QTreeView* theWrappedObject, bool  enable);
   void setColumnHidden(QTreeView* theWrappedObject, int  column, bool  hide);
   bool  isRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const;
   void setIndentation(QTreeView* theWrappedObject, int  i);
   void rowsInserted(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   bool  expandsOnDoubleClick(QTreeView* theWrappedObject) const;
   void setRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  hide);
   void mousePressEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   void setRootIsDecorated(QTreeView* theWrappedObject, bool  show);
   bool  isSortingEnabled(QTreeView* theWrappedObject) const;
   bool  isHeaderHidden(QTreeView* theWrappedObject) const;
   void rowsAboutToBeRemoved(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   void reset(QTreeView* theWrappedObject);
   void setHeaderHidden(QTreeView* theWrappedObject, bool  hide);
   void updateGeometries(QTreeView* theWrappedObject);
   void horizontalScrollbarAction(QTreeView* theWrappedObject, int  action);
   int  indentation(QTreeView* theWrappedObject) const;
   void setWordWrap(QTreeView* theWrappedObject, bool  on);
   void drawRow(QTreeView* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const;
   QList<QModelIndex >  selectedIndexes(QTreeView* theWrappedObject) const;
   bool  isIndexHidden(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void setSelectionModel(QTreeView* theWrappedObject, QItemSelectionModel*  selectionModel);
   bool  itemsExpandable(QTreeView* theWrappedObject) const;
   void setSortingEnabled(QTreeView* theWrappedObject, bool  enable);
   int  columnAt(QTreeView* theWrappedObject, int  x) const;
   QModelIndex  indexAt(QTreeView* theWrappedObject, const QPoint&  p) const;
   bool  isColumnHidden(QTreeView* theWrappedObject, int  column) const;
   void setAnimated(QTreeView* theWrappedObject, bool  enable);
   bool  wordWrap(QTreeView* theWrappedObject) const;
   void setHeader(QTreeView* theWrappedObject, QHeaderView*  header);
   bool  isAnimated(QTreeView* theWrappedObject) const;
   QHeaderView*  header(QTreeView* theWrappedObject) const;
   void mouseMoveEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   void setRootIndex(QTreeView* theWrappedObject, const QModelIndex&  index);
   void mouseDoubleClickEvent(QTreeView* theWrappedObject, QMouseEvent*  event);
   void selectionChanged(QTreeView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected);
   void dragMoveEvent(QTreeView* theWrappedObject, QDragMoveEvent*  event);
   void setAllColumnsShowFocus(QTreeView* theWrappedObject, bool  enable);
   void doItemsLayout(QTreeView* theWrappedObject);
   bool  isExpanded(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   QModelIndex  indexBelow(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   bool  viewportEvent(QTreeView* theWrappedObject, QEvent*  event);
   QRect  visualRect(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void currentChanged(QTreeView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous);
   int  columnViewportPosition(QTreeView* theWrappedObject, int  column) const;
   void timerEvent(QTreeView* theWrappedObject, QTimerEvent*  event);
   int  columnWidth(QTreeView* theWrappedObject, int  column) const;
   void scrollTo(QTreeView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
   bool  isFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const;
   void setUniformRowHeights(QTreeView* theWrappedObject, bool  uniform);
   void drawBranches(QTreeView* theWrappedObject, QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const;
   void setColumnWidth(QTreeView* theWrappedObject, int  column, int  width);
   bool  uniformRowHeights(QTreeView* theWrappedObject) const;
   void paintEvent(QTreeView* theWrappedObject, QPaintEvent*  event);
   int  verticalOffset(QTreeView* theWrappedObject) const;
   void scrollContentsBy(QTreeView* theWrappedObject, int  dx, int  dy);
   int  sizeHintForColumn(QTreeView* theWrappedObject, int  column) const;
   void sortByColumn(QTreeView* theWrappedObject, int  column, Qt::SortOrder  order);
   int  autoExpandDelay(QTreeView* theWrappedObject) const;
   void setSelection(QTreeView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
};





class PythonQtShell_QTreeWidget : public QTreeWidget
{
public:
    PythonQtShell_QTreeWidget(QWidget*  parent = 0):QTreeWidget(parent),_wrapper(NULL) {};

virtual bool  dropMimeData(QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action);
virtual Qt::DropActions  supportedDropActions() const;
virtual QMimeData*  mimeData(const QList<QTreeWidgetItem* >  items) const;
virtual void dropEvent(QDropEvent*  event);
virtual bool  event(QEvent*  e);
virtual QStringList  mimeTypes() const;
virtual void paintEvent(QPaintEvent*  event);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void timerEvent(QTimerEvent*  event);
virtual void keyboardSearch(const QString&  search);
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual int  sizeHintForColumn(int  column) const;
virtual bool  viewportEvent(QEvent*  event);
virtual void setRootIndex(const QModelIndex&  index);
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void scrollContentsBy(int  dx, int  dy);
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual int  horizontalOffset() const;
virtual void mousePressEvent(QMouseEvent*  event);
virtual void doItemsLayout();
virtual void drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const;
virtual void drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const;
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual void horizontalScrollbarAction(int  action);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void selectAll();
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void updateGeometries();
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void reset();
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual int  verticalOffset() const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void verticalScrollbarValueChanged(int  value);
virtual void editorDestroyed(QObject*  editor);
virtual void updateEditorData();
virtual void commitData(QWidget*  editor);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual QStyleOptionViewItem  viewOptions() const;
virtual void verticalScrollbarAction(int  action);
virtual void updateEditorGeometries();
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual int  sizeHintForRow(int  row) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void horizontalScrollbarValueChanged(int  value);
virtual bool  focusNextPrevChild(bool  next);
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

class PythonQtPublicPromoter_QTreeWidget : public QTreeWidget
{ public:
inline bool  promoted_dropMimeData(QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action) { return QTreeWidget::dropMimeData(parent, index, data, action); }
inline Qt::DropActions  promoted_supportedDropActions() const { return QTreeWidget::supportedDropActions(); }
inline void promoted_dropEvent(QDropEvent*  event) { QTreeWidget::dropEvent(event); }
inline bool  promoted_event(QEvent*  e) { return QTreeWidget::event(e); }
inline QStringList  promoted_mimeTypes() const { return QTreeWidget::mimeTypes(); }
};

class PythonQtWrapper_QTreeWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTreeWidget* new_QTreeWidget(QWidget*  parent = 0);
void delete_QTreeWidget(QTreeWidget* obj) { delete obj; } 
   QTreeWidgetItem*  takeTopLevelItem(QTreeWidget* theWrappedObject, int  index);
   void setHeaderLabels(QTreeWidget* theWrappedObject, const QStringList&  labels);
   void closePersistentEditor(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0);
   int  columnCount(QTreeWidget* theWrappedObject) const;
   QTreeWidgetItem*  itemAbove(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   void setHeaderLabel(QTreeWidget* theWrappedObject, const QString&  label);
   void setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column, QItemSelectionModel::SelectionFlags  command);
   int  sortColumn(QTreeWidget* theWrappedObject) const;
   QTreeWidgetItem*  invisibleRootItem(QTreeWidget* theWrappedObject) const;
   int  currentColumn(QTreeWidget* theWrappedObject) const;
   QList<QTreeWidgetItem* >  selectedItems(QTreeWidget* theWrappedObject) const;
   bool  dropMimeData(QTreeWidget* theWrappedObject, QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action);
   void addTopLevelItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item);
   void setHeaderItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item);
   QTreeWidgetItem*  currentItem(QTreeWidget* theWrappedObject) const;
   int  topLevelItemCount(QTreeWidget* theWrappedObject) const;
   Qt::DropActions  supportedDropActions(QTreeWidget* theWrappedObject) const;
   void setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column);
   void setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item);
   void addTopLevelItems(QTreeWidget* theWrappedObject, const QList<QTreeWidgetItem* >&  items);
   QTreeWidgetItem*  itemAt(QTreeWidget* theWrappedObject, int  x, int  y) const;
   void setItemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column, QWidget*  widget);
   QList<QTreeWidgetItem* >  findItems(QTreeWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags, int  column = 0) const;
   int  indexOfTopLevelItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item) const;
   QWidget*  itemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column) const;
   void sortItems(QTreeWidget* theWrappedObject, int  column, Qt::SortOrder  order);
   QTreeWidgetItem*  itemAt(QTreeWidget* theWrappedObject, const QPoint&  p) const;
   void setFirstItemColumnSpanned(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item, bool  span);
   bool  isFirstItemColumnSpanned(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   void dropEvent(QTreeWidget* theWrappedObject, QDropEvent*  event);
   void openPersistentEditor(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0);
   QTreeWidgetItem*  headerItem(QTreeWidget* theWrappedObject) const;
   void insertTopLevelItems(QTreeWidget* theWrappedObject, int  index, const QList<QTreeWidgetItem* >&  items);
   QTreeWidgetItem*  itemBelow(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   QTreeWidgetItem*  topLevelItem(QTreeWidget* theWrappedObject, int  index) const;
   void removeItemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column);
   void setColumnCount(QTreeWidget* theWrappedObject, int  columns);
   void editItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0);
   QRect  visualItemRect(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   bool  event(QTreeWidget* theWrappedObject, QEvent*  e);
   void insertTopLevelItem(QTreeWidget* theWrappedObject, int  index, QTreeWidgetItem*  item);
   QStringList  mimeTypes(QTreeWidget* theWrappedObject) const;
};





class PythonQtShell_QTreeWidgetItem : public QTreeWidgetItem
{
public:
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  view, QTreeWidgetItem*  after, int  type = Type):QTreeWidgetItem(view, after, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  view, const QStringList&  strings, int  type = Type):QTreeWidgetItem(view, strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  view, int  type = Type):QTreeWidgetItem(view, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, QTreeWidgetItem*  after, int  type = Type):QTreeWidgetItem(parent, after, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, const QStringList&  strings, int  type = Type):QTreeWidgetItem(parent, strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, int  type = Type):QTreeWidgetItem(parent, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(const QStringList&  strings, int  type = Type):QTreeWidgetItem(strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(int  type = Type):QTreeWidgetItem(type),_wrapper(NULL) {};

virtual QTreeWidgetItem*  clone() const;
virtual QVariant  data(int  column, int  role) const;
virtual void write(QDataStream&  out) const;
virtual void read(QDataStream&  in);
virtual bool  operator_less(const QTreeWidgetItem&  other) const;
virtual void setData(int  column, int  role, const QVariant&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTreeWidgetItem : public QTreeWidgetItem
{ public:
inline QTreeWidgetItem*  promoted_clone() const { return QTreeWidgetItem::clone(); }
inline QVariant  promoted_data(int  column, int  role) const { return QTreeWidgetItem::data(column, role); }
inline void promoted_setData(int  column, int  role, const QVariant&  value) { QTreeWidgetItem::setData(column, role, value); }
};

class PythonQtWrapper_QTreeWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType ChildIndicatorPolicy )
enum ItemType{
  Type = QTreeWidgetItem::Type,   UserType = QTreeWidgetItem::UserType};
enum ChildIndicatorPolicy{
  ShowIndicator = QTreeWidgetItem::ShowIndicator,   DontShowIndicator = QTreeWidgetItem::DontShowIndicator,   DontShowIndicatorWhenChildless = QTreeWidgetItem::DontShowIndicatorWhenChildless};
public slots:
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidget*  view, QTreeWidgetItem*  after, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidget*  view, const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidget*  view, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidgetItem*  parent, QTreeWidgetItem*  after, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidgetItem*  parent, const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidgetItem*  parent, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(int  type = Type);
void delete_QTreeWidgetItem(QTreeWidgetItem* obj) { delete obj; } 
bool hasOwner(QTreeWidgetItem* theWrappedObject) { return theWrappedObject->treeWidget()!=NULL || theWrappedObject->parent()!=NULL; }
   Qt::ItemFlags  flags(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem*  child(QTreeWidgetItem* theWrappedObject, int  index) const;
   void setExpanded(QTreeWidgetItem* theWrappedObject, bool  expand);
   void setIcon(QTreeWidgetItem* theWrappedObject, int  column, const QIcon&  icon);
   void insertChildren(QTreeWidgetItem* theWrappedObject, int  index, const QList<QTreeWidgetItem* >&  children);
   Qt::CheckState  checkState(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setSelected(QTreeWidgetItem* theWrappedObject, bool  select);
   bool  isHidden(QTreeWidgetItem* theWrappedObject) const;
   QString  whatsThis(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setFirstColumnSpanned(QTreeWidgetItem* theWrappedObject, bool  span);
   QString  toolTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setTextAlignment(QTreeWidgetItem* theWrappedObject, int  column, int  alignment);
   QTreeWidgetItem*  clone(QTreeWidgetItem* theWrappedObject) const;
   void setChildIndicatorPolicy(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem::ChildIndicatorPolicy  policy);
   void sortChildren(QTreeWidgetItem* theWrappedObject, int  column, Qt::SortOrder  order);
   QVariant  data(QTreeWidgetItem* theWrappedObject, int  column, int  role) const;
   QString  statusTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   QTreeWidgetItem*  takeChild(QTreeWidgetItem* theWrappedObject, int  index);
   QBrush  background(QTreeWidgetItem* theWrappedObject, int  column) const;
   void addChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child);
   QTreeWidgetItem*  parent(QTreeWidgetItem* theWrappedObject) const;
   void setSizeHint(QTreeWidgetItem* theWrappedObject, int  column, const QSize&  size);
   int  indexOfChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child) const;
   QSize  sizeHint(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setToolTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  toolTip);
   int  childCount(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem::ChildIndicatorPolicy  childIndicatorPolicy(QTreeWidgetItem* theWrappedObject) const;
   bool  isDisabled(QTreeWidgetItem* theWrappedObject) const;
   QFont  font(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setFlags(QTreeWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   void setCheckState(QTreeWidgetItem* theWrappedObject, int  column, Qt::CheckState  state);
   void addChildren(QTreeWidgetItem* theWrappedObject, const QList<QTreeWidgetItem* >&  children);
   void setBackground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   void setFont(QTreeWidgetItem* theWrappedObject, int  column, const QFont&  font);
   bool  isExpanded(QTreeWidgetItem* theWrappedObject) const;
   void setWhatsThis(QTreeWidgetItem* theWrappedObject, int  column, const QString&  whatsThis);
   void setText(QTreeWidgetItem* theWrappedObject, int  column, const QString&  text);
   int  textAlignment(QTreeWidgetItem* theWrappedObject, int  column) const;
   void removeChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child);
   bool  isSelected(QTreeWidgetItem* theWrappedObject) const;
   void setData(QTreeWidgetItem* theWrappedObject, int  column, int  role, const QVariant&  value);
   void insertChild(QTreeWidgetItem* theWrappedObject, int  index, QTreeWidgetItem*  child);
   QList<QTreeWidgetItem* >  takeChildren(QTreeWidgetItem* theWrappedObject);
   bool  isFirstColumnSpanned(QTreeWidgetItem* theWrappedObject) const;
   void setForeground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   QTreeWidget*  treeWidget(QTreeWidgetItem* theWrappedObject) const;
   int  columnCount(QTreeWidgetItem* theWrappedObject) const;
   QBrush  foreground(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setStatusTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  statusTip);
   void setHidden(QTreeWidgetItem* theWrappedObject, bool  hide);
   QString  text(QTreeWidgetItem* theWrappedObject, int  column) const;
   int  type(QTreeWidgetItem* theWrappedObject) const;
   QIcon  icon(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setDisabled(QTreeWidgetItem* theWrappedObject, bool  disabled);
   void writeTo(QTreeWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QTreeWidgetItem* theWrappedObject, QDataStream&  in);
};





class PythonQtShell_QUndoCommand : public QUndoCommand
{
public:
    PythonQtShell_QUndoCommand(QUndoCommand*  parent = 0):QUndoCommand(parent),_wrapper(NULL) {};
    PythonQtShell_QUndoCommand(const QString&  text, QUndoCommand*  parent = 0):QUndoCommand(text, parent),_wrapper(NULL) {};

virtual void undo();
virtual bool  mergeWith(const QUndoCommand*  other);
virtual int  id() const;
virtual void redo();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QUndoCommand : public QUndoCommand
{ public:
inline void promoted_undo() { QUndoCommand::undo(); }
inline bool  promoted_mergeWith(const QUndoCommand*  other) { return QUndoCommand::mergeWith(other); }
inline int  promoted_id() const { return QUndoCommand::id(); }
inline void promoted_redo() { QUndoCommand::redo(); }
};

class PythonQtWrapper_QUndoCommand : public QObject
{ Q_OBJECT
public:
public slots:
QUndoCommand* new_QUndoCommand(QUndoCommand*  parent = 0);
QUndoCommand* new_QUndoCommand(const QString&  text, QUndoCommand*  parent = 0);
void delete_QUndoCommand(QUndoCommand* obj) { delete obj; } 
   const QUndoCommand*  child(QUndoCommand* theWrappedObject, int  index) const;
   void undo(QUndoCommand* theWrappedObject);
   int  childCount(QUndoCommand* theWrappedObject) const;
   void setText(QUndoCommand* theWrappedObject, const QString&  text);
   bool  mergeWith(QUndoCommand* theWrappedObject, const QUndoCommand*  other);
   int  id(QUndoCommand* theWrappedObject) const;
   QString  text(QUndoCommand* theWrappedObject) const;
   void redo(QUndoCommand* theWrappedObject);
};





class PythonQtShell_QUndoGroup : public QUndoGroup
{
public:
    PythonQtShell_QUndoGroup(QObject*  parent = 0):QUndoGroup(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUndoGroup : public QObject
{ Q_OBJECT
public:
public slots:
QUndoGroup* new_QUndoGroup(QObject*  parent = 0);
void delete_QUndoGroup(QUndoGroup* obj) { delete obj; } 
   void removeStack(QUndoGroup* theWrappedObject, QUndoStack*  stack);
   bool  canRedo(QUndoGroup* theWrappedObject) const;
   QAction*  createRedoAction(QUndoGroup* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
   QString  redoText(QUndoGroup* theWrappedObject) const;
   QList<QUndoStack* >  stacks(QUndoGroup* theWrappedObject) const;
   bool  isClean(QUndoGroup* theWrappedObject) const;
   bool  canUndo(QUndoGroup* theWrappedObject) const;
   QUndoStack*  activeStack(QUndoGroup* theWrappedObject) const;
   void addStack(QUndoGroup* theWrappedObject, QUndoStack*  stack);
   QString  undoText(QUndoGroup* theWrappedObject) const;
   QAction*  createUndoAction(QUndoGroup* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
};





class PythonQtShell_QUndoStack : public QUndoStack
{
public:
    PythonQtShell_QUndoStack(QObject*  parent = 0):QUndoStack(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUndoStack : public QObject
{ Q_OBJECT
public:
public slots:
QUndoStack* new_QUndoStack(QObject*  parent = 0);
void delete_QUndoStack(QUndoStack* obj) { delete obj; } 
   bool  canRedo(QUndoStack* theWrappedObject) const;
   const QUndoCommand*  command(QUndoStack* theWrappedObject, int  index) const;
   QAction*  createRedoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
   QString  redoText(QUndoStack* theWrappedObject) const;
   void beginMacro(QUndoStack* theWrappedObject, const QString&  text);
   int  count(QUndoStack* theWrappedObject) const;
   QString  text(QUndoStack* theWrappedObject, int  idx) const;
   bool  canUndo(QUndoStack* theWrappedObject) const;
   bool  isActive(QUndoStack* theWrappedObject) const;
   bool  isClean(QUndoStack* theWrappedObject) const;
   int  cleanIndex(QUndoStack* theWrappedObject) const;
   void setUndoLimit(QUndoStack* theWrappedObject, int  limit);
   int  undoLimit(QUndoStack* theWrappedObject) const;
   int  index(QUndoStack* theWrappedObject) const;
   void endMacro(QUndoStack* theWrappedObject);
   void push(QUndoStack* theWrappedObject, QUndoCommand*  cmd);
   QString  undoText(QUndoStack* theWrappedObject) const;
   void clear(QUndoStack* theWrappedObject);
   QAction*  createUndoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
};





class PythonQtShell_QUndoView : public QUndoView
{
public:
    PythonQtShell_QUndoView(QUndoGroup*  group, QWidget*  parent = 0):QUndoView(group, parent),_wrapper(NULL) {};
    PythonQtShell_QUndoView(QUndoStack*  stack, QWidget*  parent = 0):QUndoView(stack, parent),_wrapper(NULL) {};
    PythonQtShell_QUndoView(QWidget*  parent = 0):QUndoView(parent),_wrapper(NULL) {};

virtual void resizeEvent(QResizeEvent*  e);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual void reset();
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void timerEvent(QTimerEvent*  e);
virtual bool  event(QEvent*  e);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual void updateGeometries();
virtual void scrollContentsBy(int  dx, int  dy);
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void setRootIndex(const QModelIndex&  index);
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual void paintEvent(QPaintEvent*  e);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual QStyleOptionViewItem  viewOptions() const;
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void doItemsLayout();
virtual int  horizontalOffset() const;
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual int  verticalOffset() const;
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  e);
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

class PythonQtWrapper_QUndoView : public QObject
{ Q_OBJECT
public:
public slots:
QUndoView* new_QUndoView(QUndoGroup*  group, QWidget*  parent = 0);
QUndoView* new_QUndoView(QUndoStack*  stack, QWidget*  parent = 0);
QUndoView* new_QUndoView(QWidget*  parent = 0);
void delete_QUndoView(QUndoView* obj) { delete obj; } 
   QUndoStack*  stack(QUndoView* theWrappedObject) const;
   QString  emptyLabel(QUndoView* theWrappedObject) const;
   void setCleanIcon(QUndoView* theWrappedObject, const QIcon&  icon);
   void setEmptyLabel(QUndoView* theWrappedObject, const QString&  label);
   QUndoGroup*  group(QUndoView* theWrappedObject) const;
   QIcon  cleanIcon(QUndoView* theWrappedObject) const;
};





class PythonQtShell_QVBoxLayout : public QVBoxLayout
{
public:
    PythonQtShell_QVBoxLayout():QVBoxLayout(),_wrapper(NULL) {};
    PythonQtShell_QVBoxLayout(QWidget*  parent):QVBoxLayout(parent),_wrapper(NULL) {};

virtual QLayoutItem*  itemAt(int  arg__1) const;
virtual int  count() const;
virtual void invalidate();
virtual QSize  maximumSize() const;
virtual Qt::Orientations  expandingDirections() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QLayoutItem*  takeAt(int  arg__1);
virtual QSize  minimumSize() const;
virtual void addItem(QLayoutItem*  arg__1);
virtual bool  isEmpty() const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual QLayout*  layout();
virtual void childEvent(QChildEvent*  e);
virtual QRect  geometry() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QVBoxLayout : public QObject
{ Q_OBJECT
public:
public slots:
QVBoxLayout* new_QVBoxLayout();
QVBoxLayout* new_QVBoxLayout(QWidget*  parent);
void delete_QVBoxLayout(QVBoxLayout* obj) { delete obj; } 
};





class PythonQtShell_QValidator : public QValidator
{
public:
    PythonQtShell_QValidator(QObject*  parent):QValidator(parent),_wrapper(NULL) {};

virtual QValidator::State  validate(QString&  arg__1, int&  arg__2) const;
virtual void fixup(QString&  arg__1) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QValidator : public QValidator
{ public:
inline void promoted_fixup(QString&  arg__1) const { QValidator::fixup(arg__1); }
};

class PythonQtWrapper_QValidator : public QObject
{ Q_OBJECT
public:
Q_ENUMS(State )
enum State{
  Invalid = QValidator::Invalid,   Intermediate = QValidator::Intermediate,   Acceptable = QValidator::Acceptable};
public slots:
QValidator* new_QValidator(QObject*  parent);
void delete_QValidator(QValidator* obj) { delete obj; } 
   void setLocale(QValidator* theWrappedObject, const QLocale&  locale);
   void fixup(QValidator* theWrappedObject, QString&  arg__1) const;
   QLocale  locale(QValidator* theWrappedObject) const;
};





class PythonQtWrapper_QWhatsThis : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWhatsThis(QWhatsThis* obj) { delete obj; } 
   void static_QWhatsThis_enterWhatsThisMode();
   bool  static_QWhatsThis_inWhatsThisMode();
   QAction*  static_QWhatsThis_createAction(QObject*  parent = 0);
   void static_QWhatsThis_leaveWhatsThisMode();
   void static_QWhatsThis_hideText();
   void static_QWhatsThis_showText(const QPoint&  pos, const QString&  text, QWidget*  w = 0);
};





class PythonQtWrapper_QWhatsThisClickedEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWhatsThisClickedEvent* new_QWhatsThisClickedEvent(const QString&  href);
void delete_QWhatsThisClickedEvent(QWhatsThisClickedEvent* obj) { delete obj; } 
   QString  href(QWhatsThisClickedEvent* theWrappedObject) const;
};





class PythonQtShell_QWheelEvent : public QWheelEvent
{
public:
    PythonQtShell_QWheelEvent(const QPoint&  pos, const QPoint&  globalPos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical):QWheelEvent(pos, globalPos, delta, buttons, modifiers, orient),_wrapper(NULL) {};
    PythonQtShell_QWheelEvent(const QPoint&  pos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical):QWheelEvent(pos, delta, buttons, modifiers, orient),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWheelEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWheelEvent* new_QWheelEvent(const QPoint&  pos, const QPoint&  globalPos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical);
QWheelEvent* new_QWheelEvent(const QPoint&  pos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical);
void delete_QWheelEvent(QWheelEvent* obj) { delete obj; } 
   int  x(QWheelEvent* theWrappedObject) const;
   int  y(QWheelEvent* theWrappedObject) const;
   int  delta(QWheelEvent* theWrappedObject) const;
   const QPoint*  globalPos(QWheelEvent* theWrappedObject) const;
   int  globalX(QWheelEvent* theWrappedObject) const;
   int  globalY(QWheelEvent* theWrappedObject) const;
   const QPoint*  pos(QWheelEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QWheelEvent* theWrappedObject) const;
   Qt::Orientation  orientation(QWheelEvent* theWrappedObject) const;
};





class PythonQtShell_QWidget : public QWidget
{
public:
    PythonQtShell_QWidget(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QWidget(parent, f),_wrapper(NULL) {};

virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void windowActivationChange(bool  arg__1);
virtual int  devType() const;
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual QSize  sizeHint() const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void enabledChange(bool  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void fontChange(const QFont&  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void paletteChange(const QPalette&  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidget : public QWidget
{ public:
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QWidget::mouseDoubleClickEvent(arg__1); }
inline QPaintEngine*  promoted_paintEngine() const { return QWidget::paintEngine(); }
inline void promoted_enterEvent(QEvent*  arg__1) { QWidget::enterEvent(arg__1); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QWidget::dragEnterEvent(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { QWidget::dropEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { QWidget::keyReleaseEvent(arg__1); }
inline int  promoted_heightForWidth(int  arg__1) const { return QWidget::heightForWidth(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QWidget::hideEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QWidget::paintEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QWidget::mouseMoveEvent(arg__1); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QWidget::inputMethodEvent(arg__1); }
inline QSize  promoted_minimumSizeHint() const { return QWidget::minimumSizeHint(); }
inline int  promoted_devType() const { return QWidget::devType(); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QWidget::wheelEvent(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QWidget::focusInEvent(arg__1); }
inline void promoted_languageChange() { QWidget::languageChange(); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QWidget::showEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QWidget::resizeEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { QWidget::dragMoveEvent(arg__1); }
inline void promoted_moveEvent(QMoveEvent*  arg__1) { QWidget::moveEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QWidget::focusOutEvent(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QWidget::focusNextPrevChild(next); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QWidget::inputMethodQuery(arg__1); }
inline QSize  promoted_sizeHint() const { return QWidget::sizeHint(); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QWidget::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QWidget::mouseReleaseEvent(arg__1); }
inline void promoted_actionEvent(QActionEvent*  arg__1) { QWidget::actionEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QWidget::event(arg__1); }
inline void promoted_tabletEvent(QTabletEvent*  arg__1) { QWidget::tabletEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QWidget::keyPressEvent(arg__1); }
inline void promoted_closeEvent(QCloseEvent*  arg__1) { QWidget::closeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QWidget::contextMenuEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QWidget::changeEvent(arg__1); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QWidget::metric(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QWidget::leaveEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QWidget::dragLeaveEvent(arg__1); }
};

class PythonQtWrapper_QWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RenderFlag )
Q_FLAGS(RenderFlags )
enum RenderFlag{
  DrawWindowBackground = QWidget::DrawWindowBackground,   DrawChildren = QWidget::DrawChildren,   IgnoreMask = QWidget::IgnoreMask};
Q_DECLARE_FLAGS(RenderFlags, RenderFlag)
public slots:
QWidget* new_QWidget(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QWidget(QWidget* obj) { delete obj; } 
   QRect  childrenRect(QWidget* theWrappedObject) const;
   QPoint  mapFrom(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const;
   void mouseDoubleClickEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   Qt::LayoutDirection  layoutDirection(QWidget* theWrappedObject) const;
   bool  hasFocus(QWidget* theWrappedObject) const;
   QPaintEngine*  paintEngine(QWidget* theWrappedObject) const;
   void enterEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   void dragEnterEvent(QWidget* theWrappedObject, QDragEnterEvent*  arg__1);
   void setLayoutDirection(QWidget* theWrappedObject, Qt::LayoutDirection  direction);
   int  x(QWidget* theWrappedObject) const;
   void setSizeIncrement(QWidget* theWrappedObject, const QSize&  arg__1);
   void setSizeIncrement(QWidget* theWrappedObject, int  w, int  h);
   QWidget*  static_QWidget_keyboardGrabber();
   void repaint(QWidget* theWrappedObject, const QRect&  arg__1);
   void getContentsMargins(QWidget* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const;
   void setBaseSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setBaseSize(QWidget* theWrappedObject, int  basew, int  baseh);
   bool  isMinimized(QWidget* theWrappedObject) const;
   void repaint(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void setMaximumHeight(QWidget* theWrappedObject, int  maxh);
   void setAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1, bool  on = true);
   void setWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void grabKeyboard(QWidget* theWrappedObject);
   void repaint(QWidget* theWrappedObject, const QRegion&  arg__1);
   QPoint  mapToParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapFromGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   void setFixedWidth(QWidget* theWrappedObject, int  w);
   void setInputContext(QWidget* theWrappedObject, QInputContext*  arg__1);
   void setMinimumWidth(QWidget* theWrappedObject, int  minw);
   void setStatusTip(QWidget* theWrappedObject, const QString&  arg__1);
   const QFont*  font(QWidget* theWrappedObject) const;
   void setPalette(QWidget* theWrappedObject, const QPalette&  arg__1);
   void setWindowOpacity(QWidget* theWrappedObject, qreal  level);
   bool  isHidden(QWidget* theWrappedObject) const;
   void static_QWidget_setTabOrder(QWidget*  arg__1, QWidget*  arg__2);
   void dropEvent(QWidget* theWrappedObject, QDropEvent*  arg__1);
   void setShortcutEnabled(QWidget* theWrappedObject, int  id, bool  enable = true);
   QString  windowRole(QWidget* theWrappedObject) const;
   QString  windowFilePath(QWidget* theWrappedObject) const;
   QRect  rect(QWidget* theWrappedObject) const;
   bool  isMaximized(QWidget* theWrappedObject) const;
   const QPalette*  palette(QWidget* theWrappedObject) const;
   qreal  windowOpacity(QWidget* theWrappedObject) const;
   QPoint  pos(QWidget* theWrappedObject) const;
   void keyReleaseEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1);
   void setMouseTracking(QWidget* theWrappedObject, bool  enable);
   void setAutoFillBackground(QWidget* theWrappedObject, bool  enabled);
   QString  styleSheet(QWidget* theWrappedObject) const;
   void resize(QWidget* theWrappedObject, int  w, int  h);
   void resize(QWidget* theWrappedObject, const QSize&  arg__1);
   void releaseKeyboard(QWidget* theWrappedObject);
   QPalette::ColorRole  backgroundRole(QWidget* theWrappedObject) const;
   QByteArray  saveGeometry(QWidget* theWrappedObject) const;
   int  grabShortcut(QWidget* theWrappedObject, const QKeySequence&  key, Qt::ShortcutContext  context = Qt::WindowShortcut);
   QString  windowIconText(QWidget* theWrappedObject) const;
   void setMaximumWidth(QWidget* theWrappedObject, int  maxw);
   Qt::FocusPolicy  focusPolicy(QWidget* theWrappedObject) const;
   void setToolTip(QWidget* theWrappedObject, const QString&  arg__1);
   bool  isVisibleTo(QWidget* theWrappedObject, QWidget*  arg__1) const;
   int  heightForWidth(QWidget* theWrappedObject, int  arg__1) const;
   void setBackgroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   void hideEvent(QWidget* theWrappedObject, QHideEvent*  arg__1);
   QString  windowTitle(QWidget* theWrappedObject) const;
   QLocale  locale(QWidget* theWrappedObject) const;
   void paintEvent(QWidget* theWrappedObject, QPaintEvent*  arg__1);
   int  y(QWidget* theWrappedObject) const;
   void mouseMoveEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   QCursor  cursor(QWidget* theWrappedObject) const;
   void inputMethodEvent(QWidget* theWrappedObject, QInputMethodEvent*  arg__1);
   QIcon  windowIcon(QWidget* theWrappedObject) const;
   QSize  minimumSizeHint(QWidget* theWrappedObject) const;
   void insertAction(QWidget* theWrappedObject, QAction*  before, QAction*  action);
   int  width(QWidget* theWrappedObject) const;
   void setFocusProxy(QWidget* theWrappedObject, QWidget*  arg__1);
   bool  isActiveWindow(QWidget* theWrappedObject) const;
   void setLayout(QWidget* theWrappedObject, QLayout*  arg__1);
   void setCursor(QWidget* theWrappedObject, const QCursor&  arg__1);
   void setUpdatesEnabled(QWidget* theWrappedObject, bool  enable);
   QPoint  mapToGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   void setMinimumSize(QWidget* theWrappedObject, int  minw, int  minh);
   void setAccessibleDescription(QWidget* theWrappedObject, const QString&  description);
   QSize  frameSize(QWidget* theWrappedObject) const;
   bool  isVisible(QWidget* theWrappedObject) const;
   void setFocusPolicy(QWidget* theWrappedObject, Qt::FocusPolicy  policy);
   int  devType(QWidget* theWrappedObject) const;
   void move(QWidget* theWrappedObject, int  x, int  y);
   void move(QWidget* theWrappedObject, const QPoint&  arg__1);
   void setLocale(QWidget* theWrappedObject, const QLocale&  locale);
   void releaseMouse(QWidget* theWrappedObject);
   bool  isFullScreen(QWidget* theWrappedObject) const;
   QSize  sizeIncrement(QWidget* theWrappedObject) const;
   void wheelEvent(QWidget* theWrappedObject, QWheelEvent*  arg__1);
   void focusInEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1);
   QLayout*  layout(QWidget* theWrappedObject) const;
   void setMinimumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void clearMask(QWidget* theWrappedObject);
   QRegion  mask(QWidget* theWrappedObject) const;
   QSize  maximumSize(QWidget* theWrappedObject) const;
   bool  isWindowModified(QWidget* theWrappedObject) const;
   bool  restoreGeometry(QWidget* theWrappedObject, const QByteArray&  geometry);
   void languageChange(QWidget* theWrappedObject);
   void setWindowIcon(QWidget* theWrappedObject, const QIcon&  icon);
   void showEvent(QWidget* theWrappedObject, QShowEvent*  arg__1);
   void insertActions(QWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions);
   void setFixedHeight(QWidget* theWrappedObject, int  h);
   void resizeEvent(QWidget* theWrappedObject, QResizeEvent*  arg__1);
   QString  whatsThis(QWidget* theWrappedObject) const;
   QWidget*  nextInFocusChain(QWidget* theWrappedObject) const;
   void overrideWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   QInputContext*  inputContext(QWidget* theWrappedObject);
   bool  isWindow(QWidget* theWrappedObject) const;
   QRegion  childrenRegion(QWidget* theWrappedObject) const;
   void overrideWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void dragMoveEvent(QWidget* theWrappedObject, QDragMoveEvent*  arg__1);
   void grabMouse(QWidget* theWrappedObject);
   QPoint  mapTo(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const;
   QWidget*  window(QWidget* theWrappedObject) const;
   void unsetCursor(QWidget* theWrappedObject);
   void grabMouse(QWidget* theWrappedObject, const QCursor&  arg__1);
   int  maximumHeight(QWidget* theWrappedObject) const;
   int  minimumHeight(QWidget* theWrappedObject) const;
   QWidget*  focusWidget(QWidget* theWrappedObject) const;
   void setParent(QWidget* theWrappedObject, QWidget*  parent, Qt::WindowFlags  f);
   void setContextMenuPolicy(QWidget* theWrappedObject, Qt::ContextMenuPolicy  policy);
   void setParent(QWidget* theWrappedObject, QWidget*  parent);
   QString  accessibleDescription(QWidget* theWrappedObject) const;
   void updateGeometry(QWidget* theWrappedObject);
   void moveEvent(QWidget* theWrappedObject, QMoveEvent*  arg__1);
   void focusOutEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1);
   bool  underMouse(QWidget* theWrappedObject) const;
   QSize  minimumSize(QWidget* theWrappedObject) const;
   void setWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   void unsetLayoutDirection(QWidget* theWrappedObject);
   void setWhatsThis(QWidget* theWrappedObject, const QString&  arg__1);
   QRegion  visibleRegion(QWidget* theWrappedObject) const;
   void setMaximumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setForegroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   QString  accessibleName(QWidget* theWrappedObject) const;
   void setShortcutAutoRepeat(QWidget* theWrappedObject, int  id, bool  enable = true);
   bool  focusNextPrevChild(QWidget* theWrappedObject, bool  next);
   QVariant  inputMethodQuery(QWidget* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void unsetLocale(QWidget* theWrappedObject);
   bool  updatesEnabled(QWidget* theWrappedObject) const;
   void createWinId(QWidget* theWrappedObject);
   void setAccessibleName(QWidget* theWrappedObject, const QString&  name);
   void update(QWidget* theWrappedObject, const QRegion&  arg__1);
   void update(QWidget* theWrappedObject, const QRect&  arg__1);
   bool  autoFillBackground(QWidget* theWrappedObject) const;
   QWidget*  childAt(QWidget* theWrappedObject, const QPoint&  p) const;
   bool  isModal(QWidget* theWrappedObject) const;
   QSize  size(QWidget* theWrappedObject) const;
   void setMinimumHeight(QWidget* theWrappedObject, int  minh);
   void setWindowIconText(QWidget* theWrappedObject, const QString&  arg__1);
   QSize  sizeHint(QWidget* theWrappedObject) const;
   void mousePressEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   int  maximumWidth(QWidget* theWrappedObject) const;
   QRect  normalGeometry(QWidget* theWrappedObject) const;
   void addAction(QWidget* theWrappedObject, QAction*  action);
   bool  isAncestorOf(QWidget* theWrappedObject, const QWidget*  child) const;
   void setMaximumSize(QWidget* theWrappedObject, int  maxw, int  maxh);
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical);
   void setWindowModality(QWidget* theWrappedObject, Qt::WindowModality  windowModality);
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy  arg__1);
   void releaseShortcut(QWidget* theWrappedObject, int  id);
   bool  isEnabled(QWidget* theWrappedObject) const;
   void mouseReleaseEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   void actionEvent(QWidget* theWrappedObject, QActionEvent*  arg__1);
   QWidget*  static_QWidget_mouseGrabber();
   bool  isEnabledTo(QWidget* theWrappedObject, QWidget*  arg__1) const;
   bool  event(QWidget* theWrappedObject, QEvent*  arg__1);
   QWidget*  focusProxy(QWidget* theWrappedObject) const;
   void tabletEvent(QWidget* theWrappedObject, QTabletEvent*  arg__1);
   void setAcceptDrops(QWidget* theWrappedObject, bool  on);
   void setWindowRole(QWidget* theWrappedObject, const QString&  arg__1);
   QString  toolTip(QWidget* theWrappedObject) const;
   void removeAction(QWidget* theWrappedObject, QAction*  action);
   QSize  baseSize(QWidget* theWrappedObject) const;
   Qt::WindowModality  windowModality(QWidget* theWrappedObject) const;
   bool  isLeftToRight(QWidget* theWrappedObject) const;
   QRect  contentsRect(QWidget* theWrappedObject) const;
   QStyle*  style(QWidget* theWrappedObject) const;
   Qt::ContextMenuPolicy  contextMenuPolicy(QWidget* theWrappedObject) const;
   QWidget*  childAt(QWidget* theWrappedObject, int  x, int  y) const;
   void activateWindow(QWidget* theWrappedObject);
   QPalette::ColorRole  foregroundRole(QWidget* theWrappedObject) const;
   void setWindowFilePath(QWidget* theWrappedObject, const QString&  filePath);
   QPoint  mapFromParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   bool  testAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1) const;
   void update(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   bool  hasMouseTracking(QWidget* theWrappedObject) const;
   WId  effectiveWinId(QWidget* theWrappedObject) const;
   QList<QAction* >  actions(QWidget* theWrappedObject) const;
   QRect  frameGeometry(QWidget* theWrappedObject) const;
   void keyPressEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1);
   void setGeometry(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   Qt::WindowStates  windowState(QWidget* theWrappedObject) const;
   void closeEvent(QWidget* theWrappedObject, QCloseEvent*  arg__1);
   QSizePolicy  sizePolicy(QWidget* theWrappedObject) const;
   void setFocus(QWidget* theWrappedObject, Qt::FocusReason  reason);
   void contextMenuEvent(QWidget* theWrappedObject, QContextMenuEvent*  arg__1);
   void setGeometry(QWidget* theWrappedObject, const QRect&  arg__1);
   void setFixedSize(QWidget* theWrappedObject, int  w, int  h);
   void setFixedSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void addActions(QWidget* theWrappedObject, QList<QAction* >  actions);
   QWidget*  parentWidget(QWidget* theWrappedObject) const;
   void setFont(QWidget* theWrappedObject, const QFont&  arg__1);
   void scroll(QWidget* theWrappedObject, int  dx, int  dy, const QRect&  arg__3);
   void render(QWidget* theWrappedObject, QPainter*  painter, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void setStyle(QWidget* theWrappedObject, QStyle*  arg__1);
   void ensurePolished(QWidget* theWrappedObject) const;
   void render(QWidget* theWrappedObject, QPaintDevice*  target, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void stackUnder(QWidget* theWrappedObject, QWidget*  arg__1);
   WId  winId(QWidget* theWrappedObject) const;
   bool  acceptDrops(QWidget* theWrappedObject) const;
   void adjustSize(QWidget* theWrappedObject);
   Qt::WindowFlags  windowFlags(QWidget* theWrappedObject) const;
   void changeEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   void setMask(QWidget* theWrappedObject, const QBitmap&  arg__1);
   int  metric(QWidget* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const;
   void setMask(QWidget* theWrappedObject, const QRegion&  arg__1);
   int  height(QWidget* theWrappedObject) const;
   void leaveEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   bool  isRightToLeft(QWidget* theWrappedObject) const;
   void dragLeaveEvent(QWidget* theWrappedObject, QDragLeaveEvent*  arg__1);
   int  minimumWidth(QWidget* theWrappedObject) const;
   void scroll(QWidget* theWrappedObject, int  dx, int  dy);
   void clearFocus(QWidget* theWrappedObject);
   QString  statusTip(QWidget* theWrappedObject) const;
   void setContentsMargins(QWidget* theWrappedObject, int  left, int  top, int  right, int  bottom);
   Qt::WindowType  windowType(QWidget* theWrappedObject) const;
   const QRect*  geometry(QWidget* theWrappedObject) const;
   QWidget*  nativeParentWidget(QWidget* theWrappedObject) const;
};





class PythonQtShell_QWidgetAction : public QWidgetAction
{
public:
    PythonQtShell_QWidgetAction(QObject*  parent):QWidgetAction(parent),_wrapper(NULL) {};

virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  event(QEvent*  arg__1);
virtual QWidget*  createWidget(QWidget*  parent);
virtual void deleteWidget(QWidget*  widget);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidgetAction : public QWidgetAction
{ public:
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QWidgetAction::eventFilter(arg__1, arg__2); }
inline bool  promoted_event(QEvent*  arg__1) { return QWidgetAction::event(arg__1); }
inline QWidget*  promoted_createWidget(QWidget*  parent) { return QWidgetAction::createWidget(parent); }
inline void promoted_deleteWidget(QWidget*  widget) { QWidgetAction::deleteWidget(widget); }
};

class PythonQtWrapper_QWidgetAction : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetAction* new_QWidgetAction(QObject*  parent);
void delete_QWidgetAction(QWidgetAction* obj) { delete obj; } 
   void setDefaultWidget(QWidgetAction* theWrappedObject, QWidget*  w);
   void releaseWidget(QWidgetAction* theWrappedObject, QWidget*  widget);
   bool  eventFilter(QWidgetAction* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   QWidget*  defaultWidget(QWidgetAction* theWrappedObject) const;
   bool  event(QWidgetAction* theWrappedObject, QEvent*  arg__1);
   QWidget*  requestWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
   QWidget*  createWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
   void deleteWidget(QWidgetAction* theWrappedObject, QWidget*  widget);
};





class PythonQtShell_QWidgetItem : public QWidgetItem
{
public:
    PythonQtShell_QWidgetItem(QWidget*  w):QWidgetItem(w),_wrapper(NULL) {};

virtual QSize  sizeHint() const;
virtual QWidget*  widget();
virtual QSize  maximumSize() const;
virtual Qt::Orientations  expandingDirections() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual bool  isEmpty() const;
virtual QSize  minimumSize() const;
virtual int  heightForWidth(int  arg__1) const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QLayout*  layout();
virtual void invalidate();
virtual QSpacerItem*  spacerItem();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidgetItem : public QWidgetItem
{ public:
inline QSize  promoted_sizeHint() const { return QWidgetItem::sizeHint(); }
inline QWidget*  promoted_widget() { return QWidgetItem::widget(); }
inline QSize  promoted_maximumSize() const { return QWidgetItem::maximumSize(); }
inline Qt::Orientations  promoted_expandingDirections() const { return QWidgetItem::expandingDirections(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QWidgetItem::setGeometry(arg__1); }
inline QRect  promoted_geometry() const { return QWidgetItem::geometry(); }
inline bool  promoted_hasHeightForWidth() const { return QWidgetItem::hasHeightForWidth(); }
inline bool  promoted_isEmpty() const { return QWidgetItem::isEmpty(); }
inline QSize  promoted_minimumSize() const { return QWidgetItem::minimumSize(); }
inline int  promoted_heightForWidth(int  arg__1) const { return QWidgetItem::heightForWidth(arg__1); }
};

class PythonQtWrapper_QWidgetItem : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetItem* new_QWidgetItem(QWidget*  w);
void delete_QWidgetItem(QWidgetItem* obj) { delete obj; } 
   QSize  sizeHint(QWidgetItem* theWrappedObject) const;
   QWidget*  widget(QWidgetItem* theWrappedObject);
   QSize  maximumSize(QWidgetItem* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QWidgetItem* theWrappedObject) const;
   void setGeometry(QWidgetItem* theWrappedObject, const QRect&  arg__1);
   QRect  geometry(QWidgetItem* theWrappedObject) const;
   bool  hasHeightForWidth(QWidgetItem* theWrappedObject) const;
   bool  isEmpty(QWidgetItem* theWrappedObject) const;
   QSize  minimumSize(QWidgetItem* theWrappedObject) const;
   int  heightForWidth(QWidgetItem* theWrappedObject, int  arg__1) const;
};





class PythonQtWrapper_QWindowStateChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWindowStateChangeEvent* new_QWindowStateChangeEvent(Qt::WindowStates  aOldState);
QWindowStateChangeEvent* new_QWindowStateChangeEvent(Qt::WindowStates  aOldState, bool  isOverride);
void delete_QWindowStateChangeEvent(QWindowStateChangeEvent* obj) { delete obj; } 
   bool  isOverride(QWindowStateChangeEvent* theWrappedObject) const;
   Qt::WindowStates  oldState(QWindowStateChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QWindowsStyle : public QWindowsStyle
{
public:
    PythonQtShell_QWindowsStyle():QWindowsStyle(),_wrapper(NULL) {};

virtual QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
virtual void drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual QSize  sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
virtual int  pixelMetric(QStyle::PixelMetric  pm, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
virtual int  styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
virtual void drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void unpolish(QWidget*  arg__1);
virtual void unpolish(QApplication*  arg__1);
virtual bool  eventFilter(QObject*  o, QEvent*  e);
virtual void timerEvent(QTimerEvent*  event);
virtual void drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void polish(QApplication*  arg__1);
virtual void polish(QWidget*  arg__1);
virtual void polish(QPalette&  arg__1);
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w) const;
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual QPalette  standardPalette() const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const;
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWindowsStyle : public QWindowsStyle
{ public:
inline QRect  promoted_subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const { return QWindowsStyle::subElementRect(r, opt, widget); }
inline void promoted_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QWindowsStyle::drawControl(element, opt, p, w); }
inline QSize  promoted_sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const { return QWindowsStyle::sizeFromContents(ct, opt, contentsSize, widget); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  pm, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QWindowsStyle::pixelMetric(pm, option, widget); }
inline int  promoted_styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const { return QWindowsStyle::styleHint(hint, opt, widget, returnData); }
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QWindowsStyle::drawPrimitive(pe, opt, p, w); }
inline void promoted_unpolish(QWidget*  arg__1) { QWindowsStyle::unpolish(arg__1); }
inline void promoted_unpolish(QApplication*  arg__1) { QWindowsStyle::unpolish(arg__1); }
inline bool  promoted_eventFilter(QObject*  o, QEvent*  e) { return QWindowsStyle::eventFilter(o, e); }
inline void promoted_timerEvent(QTimerEvent*  event) { QWindowsStyle::timerEvent(event); }
inline void promoted_drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const { QWindowsStyle::drawComplexControl(cc, opt, p, w); }
inline void promoted_polish(QApplication*  arg__1) { QWindowsStyle::polish(arg__1); }
inline void promoted_polish(QWidget*  arg__1) { QWindowsStyle::polish(arg__1); }
inline void promoted_polish(QPalette&  arg__1) { QWindowsStyle::polish(arg__1); }
};

class PythonQtWrapper_QWindowsStyle : public QObject
{ Q_OBJECT
public:
public slots:
QWindowsStyle* new_QWindowsStyle();
void delete_QWindowsStyle(QWindowsStyle* obj) { delete obj; } 
   QRect  subElementRect(QWindowsStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
   void drawControl(QWindowsStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   QSize  sizeFromContents(QWindowsStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
   int  pixelMetric(QWindowsStyle* theWrappedObject, QStyle::PixelMetric  pm, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   int  styleHint(QWindowsStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
   void drawPrimitive(QWindowsStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void unpolish(QWindowsStyle* theWrappedObject, QWidget*  arg__1);
   void unpolish(QWindowsStyle* theWrappedObject, QApplication*  arg__1);
   bool  eventFilter(QWindowsStyle* theWrappedObject, QObject*  o, QEvent*  e);
   void timerEvent(QWindowsStyle* theWrappedObject, QTimerEvent*  event);
   void drawComplexControl(QWindowsStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void polish(QWindowsStyle* theWrappedObject, QApplication*  arg__1);
   void polish(QWindowsStyle* theWrappedObject, QWidget*  arg__1);
   void polish(QWindowsStyle* theWrappedObject, QPalette&  arg__1);
};





class PythonQtShell_QWizard : public QWizard
{
public:
    PythonQtShell_QWizard(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QWizard(parent, flags),_wrapper(NULL) {};

virtual void done(int  result);
virtual void cleanupPage(int  id);
virtual int  nextId() const;
virtual void initializePage(int  id);
virtual void paintEvent(QPaintEvent*  event);
virtual bool  validateCurrentPage();
virtual bool  event(QEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void accept();
virtual void reject();
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
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
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWizard : public QWizard
{ public:
inline void promoted_done(int  result) { QWizard::done(result); }
inline void promoted_cleanupPage(int  id) { QWizard::cleanupPage(id); }
inline int  promoted_nextId() const { return QWizard::nextId(); }
inline void promoted_initializePage(int  id) { QWizard::initializePage(id); }
inline void promoted_paintEvent(QPaintEvent*  event) { QWizard::paintEvent(event); }
inline bool  promoted_validateCurrentPage() { return QWizard::validateCurrentPage(); }
inline bool  promoted_event(QEvent*  event) { return QWizard::event(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QWizard::resizeEvent(event); }
};

class PythonQtWrapper_QWizard : public QObject
{ Q_OBJECT
public:
Q_ENUMS(WizardButton WizardPixmap )
enum WizardButton{
  BackButton = QWizard::BackButton,   NextButton = QWizard::NextButton,   CommitButton = QWizard::CommitButton,   FinishButton = QWizard::FinishButton,   CancelButton = QWizard::CancelButton,   HelpButton = QWizard::HelpButton,   CustomButton1 = QWizard::CustomButton1,   CustomButton2 = QWizard::CustomButton2,   CustomButton3 = QWizard::CustomButton3,   Stretch = QWizard::Stretch,   NoButton = QWizard::NoButton,   NStandardButtons = QWizard::NStandardButtons,   NButtons = QWizard::NButtons};
enum WizardPixmap{
  WatermarkPixmap = QWizard::WatermarkPixmap,   LogoPixmap = QWizard::LogoPixmap,   BannerPixmap = QWizard::BannerPixmap,   BackgroundPixmap = QWizard::BackgroundPixmap,   NPixmaps = QWizard::NPixmaps};
public slots:
QWizard* new_QWizard(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QWizard(QWizard* obj) { delete obj; } 
   void setStartId(QWizard* theWrappedObject, int  id);
   void done(QWizard* theWrappedObject, int  result);
   void setButtonLayout(QWizard* theWrappedObject, const QList<QWizard::WizardButton >&  layout);
   bool  testOption(QWizard* theWrappedObject, QWizard::WizardOption  option) const;
   void setField(QWizard* theWrappedObject, const QString&  name, const QVariant&  value);
   QWizard::WizardOptions  options(QWizard* theWrappedObject) const;
   QSize  sizeHint(QWizard* theWrappedObject) const;
   void cleanupPage(QWizard* theWrappedObject, int  id);
   void setTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   int  nextId(QWizard* theWrappedObject) const;
   void setButtonText(QWizard* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   Qt::TextFormat  subTitleFormat(QWizard* theWrappedObject) const;
   QList<int >  visitedPages(QWizard* theWrappedObject) const;
   int  currentId(QWizard* theWrappedObject) const;
   void setPage(QWizard* theWrappedObject, int  id, QWizardPage*  page);
   QString  buttonText(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   int  startId(QWizard* theWrappedObject) const;
   void initializePage(QWizard* theWrappedObject, int  id);
   void setVisible(QWizard* theWrappedObject, bool  visible);
   int  addPage(QWizard* theWrappedObject, QWizardPage*  page);
   QAbstractButton*  button(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   void paintEvent(QWizard* theWrappedObject, QPaintEvent*  event);
   void setButton(QWizard* theWrappedObject, QWizard::WizardButton  which, QAbstractButton*  button);
   void setOption(QWizard* theWrappedObject, QWizard::WizardOption  option, bool  on = true);
   QVariant  field(QWizard* theWrappedObject, const QString&  name) const;
   QWizardPage*  page(QWizard* theWrappedObject, int  id) const;
   void setWizardStyle(QWizard* theWrappedObject, QWizard::WizardStyle  style);
   void setOptions(QWizard* theWrappedObject, QWizard::WizardOptions  options);
   QPixmap  pixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which) const;
   void setPixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   QWizard::WizardStyle  wizardStyle(QWizard* theWrappedObject) const;
   bool  hasVisitedPage(QWizard* theWrappedObject, int  id) const;
   bool  validateCurrentPage(QWizard* theWrappedObject);
   Qt::TextFormat  titleFormat(QWizard* theWrappedObject) const;
   void setSubTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   QWizardPage*  currentPage(QWizard* theWrappedObject) const;
   bool  event(QWizard* theWrappedObject, QEvent*  event);
   void resizeEvent(QWizard* theWrappedObject, QResizeEvent*  event);
};





class PythonQtShell_QWizardPage : public QWizardPage
{
public:
    PythonQtShell_QWizardPage(QWidget*  parent = 0):QWizardPage(parent),_wrapper(NULL) {};

virtual void cleanupPage();
virtual void initializePage();
virtual bool  validatePage();
virtual bool  isComplete() const;
virtual int  nextId() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void hideEvent(QHideEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual bool  event(QEvent*  arg__1);
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
virtual QSize  sizeHint() const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWizardPage : public QWizardPage
{ public:
inline void promoted_cleanupPage() { QWizardPage::cleanupPage(); }
inline void promoted_initializePage() { QWizardPage::initializePage(); }
inline bool  promoted_validatePage() { return QWizardPage::validatePage(); }
inline bool  promoted_isComplete() const { return QWizardPage::isComplete(); }
inline int  promoted_nextId() const { return QWizardPage::nextId(); }
};

class PythonQtWrapper_QWizardPage : public QObject
{ Q_OBJECT
public:
public slots:
QWizardPage* new_QWizardPage(QWidget*  parent = 0);
void delete_QWizardPage(QWizardPage* obj) { delete obj; } 
   QString  title(QWizardPage* theWrappedObject) const;
   bool  isCommitPage(QWizardPage* theWrappedObject) const;
   void setButtonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   bool  isFinalPage(QWizardPage* theWrappedObject) const;
   QString  subTitle(QWizardPage* theWrappedObject) const;
   void cleanupPage(QWizardPage* theWrappedObject);
   void initializePage(QWizardPage* theWrappedObject);
   void setSubTitle(QWizardPage* theWrappedObject, const QString&  subTitle);
   bool  validatePage(QWizardPage* theWrappedObject);
   QString  buttonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which) const;
   void setTitle(QWizardPage* theWrappedObject, const QString&  title);
   bool  isComplete(QWizardPage* theWrappedObject) const;
   void setPixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   void setCommitPage(QWizardPage* theWrappedObject, bool  commitPage);
   void setFinalPage(QWizardPage* theWrappedObject, bool  finalPage);
   int  nextId(QWizardPage* theWrappedObject) const;
   QPixmap  pixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which) const;
};





class PythonQtShell_QWorkspace : public QWorkspace
{
public:
    PythonQtShell_QWorkspace(QWidget*  parent = 0):QWorkspace(parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  e);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void showEvent(QShowEvent*  e);
virtual void hideEvent(QHideEvent*  e);
virtual void wheelEvent(QWheelEvent*  e);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void paintEvent(QPaintEvent*  e);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void languageChange();
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
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWorkspace : public QWorkspace
{ public:
inline bool  promoted_event(QEvent*  e) { return QWorkspace::event(e); }
inline void promoted_changeEvent(QEvent*  arg__1) { QWorkspace::changeEvent(arg__1); }
inline void promoted_childEvent(QChildEvent*  arg__1) { QWorkspace::childEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  e) { QWorkspace::showEvent(e); }
inline void promoted_hideEvent(QHideEvent*  e) { QWorkspace::hideEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QWorkspace::wheelEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QWorkspace::resizeEvent(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QWorkspace::eventFilter(arg__1, arg__2); }
inline void promoted_paintEvent(QPaintEvent*  e) { QWorkspace::paintEvent(e); }
};

class PythonQtWrapper_QWorkspace : public QObject
{ Q_OBJECT
public:
Q_ENUMS(WindowOrder )
enum WindowOrder{
  CreationOrder = QWorkspace::CreationOrder,   StackingOrder = QWorkspace::StackingOrder};
public slots:
QWorkspace* new_QWorkspace(QWidget*  parent = 0);
void delete_QWorkspace(QWorkspace* obj) { delete obj; } 
   bool  event(QWorkspace* theWrappedObject, QEvent*  e);
   void setBackground(QWorkspace* theWrappedObject, const QBrush&  background);
   void setScrollBarsEnabled(QWorkspace* theWrappedObject, bool  enable);
   void changeEvent(QWorkspace* theWrappedObject, QEvent*  arg__1);
   void childEvent(QWorkspace* theWrappedObject, QChildEvent*  arg__1);
   QWidget*  addWindow(QWorkspace* theWrappedObject, QWidget*  w, Qt::WindowFlags  flags = 0);
   QWidget*  activeWindow(QWorkspace* theWrappedObject) const;
   QList<QWidget* >  windowList(QWorkspace* theWrappedObject, QWorkspace::WindowOrder  order = QWorkspace::CreationOrder) const;
   void showEvent(QWorkspace* theWrappedObject, QShowEvent*  e);
   QBrush  background(QWorkspace* theWrappedObject) const;
   void hideEvent(QWorkspace* theWrappedObject, QHideEvent*  e);
   QSize  sizeHint(QWorkspace* theWrappedObject) const;
   bool  scrollBarsEnabled(QWorkspace* theWrappedObject) const;
   void wheelEvent(QWorkspace* theWrappedObject, QWheelEvent*  e);
   void resizeEvent(QWorkspace* theWrappedObject, QResizeEvent*  arg__1);
   bool  eventFilter(QWorkspace* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void paintEvent(QWorkspace* theWrappedObject, QPaintEvent*  e);
};


