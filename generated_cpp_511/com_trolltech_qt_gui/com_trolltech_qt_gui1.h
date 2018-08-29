#include <PythonQt.h>
#include <QObject>
#include <QPixmap>
#include <QPoint>
#include <QUrl>
#include <QVariant>
#include <qabstractbutton.h>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qabstractproxymodel.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcolor.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdatawidgetmapper.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
#include <qdesktopservices.h>
#include <qdesktopwidget.h>
#include <qdial.h>
#include <qdialog.h>
#include <qdialogbuttonbox.h>
#include <qdir.h>
#include <qdirmodel.h>
#include <qdockwidget.h>
#include <qdrag.h>
#include <qerrormessage.h>
#include <qevent.h>
#include <qfile.h>
#include <qfiledialog.h>
#include <qfileiconprovider.h>
#include <qfileinfo.h>
#include <qfilesystemmodel.h>
#include <qfocusframe.h>
#include <qfont.h>
#include <qfontcombobox.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlineedit.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpushbutton.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qspinbox.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qurl.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QCompleter : public QCompleter
{
public:
    PythonQtShell_QCompleter(QAbstractItemModel*  model, QObject*  parent = nullptr):QCompleter(model, parent),_wrapper(NULL) {};
    PythonQtShell_QCompleter(QObject*  parent = nullptr):QCompleter(parent),_wrapper(NULL) {};
    PythonQtShell_QCompleter(const QStringList&  completions, QObject*  parent = nullptr):QCompleter(completions, parent),_wrapper(NULL) {};

   ~PythonQtShell_QCompleter();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  o, QEvent*  e);
virtual QString  pathFromIndex(const QModelIndex&  index) const;
virtual QStringList  splitPath(const QString&  path) const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCompleter : public QCompleter
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  promoted_eventFilter(QObject*  o, QEvent*  e) { return this->eventFilter(o, e); }
inline bool  py_q_event(QEvent*  arg__1) { return QCompleter::event(arg__1); }
inline bool  py_q_eventFilter(QObject*  o, QEvent*  e) { return QCompleter::eventFilter(o, e); }
inline QString  py_q_pathFromIndex(const QModelIndex&  index) const { return QCompleter::pathFromIndex(index); }
inline QStringList  py_q_splitPath(const QString&  path) const { return QCompleter::splitPath(path); }
};

class PythonQtWrapper_QCompleter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CompletionMode ModelSorting )
enum CompletionMode{
  PopupCompletion = QCompleter::PopupCompletion,   UnfilteredPopupCompletion = QCompleter::UnfilteredPopupCompletion,   InlineCompletion = QCompleter::InlineCompletion};
enum ModelSorting{
  UnsortedModel = QCompleter::UnsortedModel,   CaseSensitivelySortedModel = QCompleter::CaseSensitivelySortedModel,   CaseInsensitivelySortedModel = QCompleter::CaseInsensitivelySortedModel};
public slots:
QCompleter* new_QCompleter(QAbstractItemModel*  model, QObject*  parent = nullptr);
QCompleter* new_QCompleter(QObject*  parent = nullptr);
QCompleter* new_QCompleter(const QStringList&  completions, QObject*  parent = nullptr);
void delete_QCompleter(QCompleter* obj) { delete obj; } 
   Qt::CaseSensitivity  caseSensitivity(QCompleter* theWrappedObject) const;
   int  completionColumn(QCompleter* theWrappedObject) const;
   int  completionCount(QCompleter* theWrappedObject) const;
   QCompleter::CompletionMode  completionMode(QCompleter* theWrappedObject) const;
   QAbstractItemModel*  completionModel(QCompleter* theWrappedObject) const;
   QString  completionPrefix(QCompleter* theWrappedObject) const;
   int  completionRole(QCompleter* theWrappedObject) const;
   QString  currentCompletion(QCompleter* theWrappedObject) const;
   QModelIndex  currentIndex(QCompleter* theWrappedObject) const;
   int  currentRow(QCompleter* theWrappedObject) const;
   bool  py_q_event(QCompleter* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QCompleter*)theWrappedObject)->py_q_event(arg__1));}
   bool  py_q_eventFilter(QCompleter* theWrappedObject, QObject*  o, QEvent*  e){  return (((PythonQtPublicPromoter_QCompleter*)theWrappedObject)->py_q_eventFilter(o, e));}
   Qt::MatchFlags  filterMode(QCompleter* theWrappedObject) const;
   int  maxVisibleItems(QCompleter* theWrappedObject) const;
   QAbstractItemModel*  model(QCompleter* theWrappedObject) const;
   QCompleter::ModelSorting  modelSorting(QCompleter* theWrappedObject) const;
   QString  pathFromIndex(QCompleter* theWrappedObject, const QModelIndex&  index) const;
   QString  py_q_pathFromIndex(QCompleter* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QCompleter*)theWrappedObject)->py_q_pathFromIndex(index));}
   QAbstractItemView*  popup(QCompleter* theWrappedObject) const;
   void setCaseSensitivity(QCompleter* theWrappedObject, Qt::CaseSensitivity  caseSensitivity);
   void setCompletionColumn(QCompleter* theWrappedObject, int  column);
   void setCompletionMode(QCompleter* theWrappedObject, QCompleter::CompletionMode  mode);
   void setCompletionRole(QCompleter* theWrappedObject, int  role);
   bool  setCurrentRow(QCompleter* theWrappedObject, int  row);
   void setFilterMode(QCompleter* theWrappedObject, Qt::MatchFlags  filterMode);
   void setMaxVisibleItems(QCompleter* theWrappedObject, int  maxItems);
   void setModel(QCompleter* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractItemModel* >  c);
   void setModelSorting(QCompleter* theWrappedObject, QCompleter::ModelSorting  sorting);
   void setPopup(QCompleter* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractItemView* >  popup);
   void setWidget(QCompleter* theWrappedObject, QWidget*  widget);
   QStringList  splitPath(QCompleter* theWrappedObject, const QString&  path) const;
   QStringList  py_q_splitPath(QCompleter* theWrappedObject, const QString&  path) const{  return (((PythonQtPublicPromoter_QCompleter*)theWrappedObject)->py_q_splitPath(path));}
   QWidget*  widget(QCompleter* theWrappedObject) const;
   bool  wrapAround(QCompleter* theWrappedObject) const;
};





class PythonQtWrapper_QConicalGradient : public QObject
{ Q_OBJECT
public:
public slots:
QConicalGradient* new_QConicalGradient();
QConicalGradient* new_QConicalGradient(const QPointF&  center, qreal  startAngle);
QConicalGradient* new_QConicalGradient(qreal  cx, qreal  cy, qreal  startAngle);
QConicalGradient* new_QConicalGradient(const QConicalGradient& other) {
QConicalGradient* a = new QConicalGradient();
*((QConicalGradient*)a) = other;
return a; }
void delete_QConicalGradient(QConicalGradient* obj) { delete obj; } 
   qreal  angle(QConicalGradient* theWrappedObject) const;
   QPointF  center(QConicalGradient* theWrappedObject) const;
   void setAngle(QConicalGradient* theWrappedObject, qreal  angle);
   void setCenter(QConicalGradient* theWrappedObject, const QPointF&  center);
   void setCenter(QConicalGradient* theWrappedObject, qreal  x, qreal  y);
};





class PythonQtShell_QContextMenuEvent : public QContextMenuEvent
{
public:
    PythonQtShell_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos):QContextMenuEvent(reason, pos),_wrapper(NULL) {};
    PythonQtShell_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos):QContextMenuEvent(reason, pos, globalPos),_wrapper(NULL) {};
    PythonQtShell_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos, Qt::KeyboardModifiers  modifiers):QContextMenuEvent(reason, pos, globalPos, modifiers),_wrapper(NULL) {};

   ~PythonQtShell_QContextMenuEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QContextMenuEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Reason )
enum Reason{
  Mouse = QContextMenuEvent::Mouse,   Keyboard = QContextMenuEvent::Keyboard,   Other = QContextMenuEvent::Other};
public slots:
QContextMenuEvent* new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos);
QContextMenuEvent* new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos);
QContextMenuEvent* new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos, Qt::KeyboardModifiers  modifiers);
void delete_QContextMenuEvent(QContextMenuEvent* obj) { delete obj; } 
   const QPoint*  globalPos(QContextMenuEvent* theWrappedObject) const;
   int  globalX(QContextMenuEvent* theWrappedObject) const;
   int  globalY(QContextMenuEvent* theWrappedObject) const;
   const QPoint*  pos(QContextMenuEvent* theWrappedObject) const;
   QContextMenuEvent::Reason  reason(QContextMenuEvent* theWrappedObject) const;
   int  x(QContextMenuEvent* theWrappedObject) const;
   int  y(QContextMenuEvent* theWrappedObject) const;
};





class PythonQtShell_QDataWidgetMapper : public QDataWidgetMapper
{
public:
    PythonQtShell_QDataWidgetMapper(QObject*  parent = nullptr):QDataWidgetMapper(parent),_wrapper(NULL) {};

   ~PythonQtShell_QDataWidgetMapper();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void setCurrentIndex(int  index);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDataWidgetMapper : public QDataWidgetMapper
{ public:
inline void py_q_setCurrentIndex(int  index) { QDataWidgetMapper::setCurrentIndex(index); }
};

class PythonQtWrapper_QDataWidgetMapper : public QObject
{ Q_OBJECT
public:
public slots:
QDataWidgetMapper* new_QDataWidgetMapper(QObject*  parent = nullptr);
void delete_QDataWidgetMapper(QDataWidgetMapper* obj) { delete obj; } 
   void addMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget, int  section);
   void addMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget, int  section, const QByteArray&  propertyName);
   void clearMapping(QDataWidgetMapper* theWrappedObject);
   int  currentIndex(QDataWidgetMapper* theWrappedObject) const;
   QAbstractItemDelegate*  itemDelegate(QDataWidgetMapper* theWrappedObject) const;
   QByteArray  mappedPropertyName(QDataWidgetMapper* theWrappedObject, QWidget*  widget) const;
   int  mappedSection(QDataWidgetMapper* theWrappedObject, QWidget*  widget) const;
   QWidget*  mappedWidgetAt(QDataWidgetMapper* theWrappedObject, int  section) const;
   QAbstractItemModel*  model(QDataWidgetMapper* theWrappedObject) const;
   Qt::Orientation  orientation(QDataWidgetMapper* theWrappedObject) const;
   void removeMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget);
   QModelIndex  rootIndex(QDataWidgetMapper* theWrappedObject) const;
   void py_q_setCurrentIndex(QDataWidgetMapper* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QDataWidgetMapper*)theWrappedObject)->py_q_setCurrentIndex(index));}
   void setItemDelegate(QDataWidgetMapper* theWrappedObject, QAbstractItemDelegate*  delegate);
   void setModel(QDataWidgetMapper* theWrappedObject, QAbstractItemModel*  model);
   void setOrientation(QDataWidgetMapper* theWrappedObject, Qt::Orientation  aOrientation);
   void setRootIndex(QDataWidgetMapper* theWrappedObject, const QModelIndex&  index);
   void setSubmitPolicy(QDataWidgetMapper* theWrappedObject, QDataWidgetMapper::SubmitPolicy  policy);
   QDataWidgetMapper::SubmitPolicy  submitPolicy(QDataWidgetMapper* theWrappedObject) const;
};





class PythonQtShell_QDateEdit : public QDateEdit
{
public:
    PythonQtShell_QDateEdit(QWidget*  parent = nullptr):QDateEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QDateEdit(const QDate&  date, QWidget*  parent = nullptr):QDateEdit(date, parent),_wrapper(NULL) {};

   ~PythonQtShell_QDateEdit();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
virtual void clear();
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual QDateTime  dateTimeFromText(const QString&  text) const;
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void fixup(QString&  input) const;
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
virtual QString  textFromDateTime(const QDateTime&  dt) const;
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDateEdit : public QObject
{ Q_OBJECT
public:
public slots:
QDateEdit* new_QDateEdit(QWidget*  parent = nullptr);
QDateEdit* new_QDateEdit(const QDate&  date, QWidget*  parent = nullptr);
void delete_QDateEdit(QDateEdit* obj) { delete obj; } 
};





class PythonQtShell_QDateTimeEdit : public QDateTimeEdit
{
public:
    PythonQtShell_QDateTimeEdit(QWidget*  parent = nullptr):QDateTimeEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QDateTimeEdit(const QDate&  d, QWidget*  parent = nullptr):QDateTimeEdit(d, parent),_wrapper(NULL) {};
    PythonQtShell_QDateTimeEdit(const QDateTime&  dt, QWidget*  parent = nullptr):QDateTimeEdit(dt, parent),_wrapper(NULL) {};
    PythonQtShell_QDateTimeEdit(const QTime&  t, QWidget*  parent = nullptr):QDateTimeEdit(t, parent),_wrapper(NULL) {};
    PythonQtShell_QDateTimeEdit(const QVariant&  val, QVariant::Type  parserType, QWidget*  parent = nullptr):QDateTimeEdit(val, parserType, parent),_wrapper(NULL) {};

   ~PythonQtShell_QDateTimeEdit();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
virtual void clear();
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual QDateTime  dateTimeFromText(const QString&  text) const;
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void fixup(QString&  input) const;
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
virtual QString  textFromDateTime(const QDateTime&  dt) const;
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDateTimeEdit : public QDateTimeEdit
{ public:
inline QDateTime  promoted_dateTimeFromText(const QString&  text) const { return this->dateTimeFromText(text); }
inline void promoted_fixup(QString&  input) const { this->fixup(input); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_initStyleOption(QStyleOptionSpinBox*  option) const { this->initStyleOption(option); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline QAbstractSpinBox::StepEnabled  promoted_stepEnabled() const { return this->stepEnabled(); }
inline QString  promoted_textFromDateTime(const QDateTime&  dt) const { return this->textFromDateTime(dt); }
inline QValidator::State  promoted_validate(QString&  input, int&  pos) const { return this->validate(input, pos); }
inline void promoted_wheelEvent(QWheelEvent*  event) { this->wheelEvent(event); }
inline void py_q_clear() { QDateTimeEdit::clear(); }
inline QDateTime  py_q_dateTimeFromText(const QString&  text) const { return QDateTimeEdit::dateTimeFromText(text); }
inline bool  py_q_event(QEvent*  event) { return QDateTimeEdit::event(event); }
inline void py_q_fixup(QString&  input) const { QDateTimeEdit::fixup(input); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QDateTimeEdit::focusInEvent(event); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QDateTimeEdit::focusNextPrevChild(next); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QDateTimeEdit::keyPressEvent(event); }
inline void py_q_mousePressEvent(QMouseEvent*  event) { QDateTimeEdit::mousePressEvent(event); }
inline void py_q_paintEvent(QPaintEvent*  event) { QDateTimeEdit::paintEvent(event); }
inline QSize  py_q_sizeHint() const { return QDateTimeEdit::sizeHint(); }
inline void py_q_stepBy(int  steps) { QDateTimeEdit::stepBy(steps); }
inline QAbstractSpinBox::StepEnabled  py_q_stepEnabled() const { return QDateTimeEdit::stepEnabled(); }
inline QString  py_q_textFromDateTime(const QDateTime&  dt) const { return QDateTimeEdit::textFromDateTime(dt); }
inline QValidator::State  py_q_validate(QString&  input, int&  pos) const { return QDateTimeEdit::validate(input, pos); }
inline void py_q_wheelEvent(QWheelEvent*  event) { QDateTimeEdit::wheelEvent(event); }
};

class PythonQtWrapper_QDateTimeEdit : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Section )
Q_FLAGS(Sections )
enum Section{
  NoSection = QDateTimeEdit::NoSection,   AmPmSection = QDateTimeEdit::AmPmSection,   MSecSection = QDateTimeEdit::MSecSection,   SecondSection = QDateTimeEdit::SecondSection,   MinuteSection = QDateTimeEdit::MinuteSection,   HourSection = QDateTimeEdit::HourSection,   DaySection = QDateTimeEdit::DaySection,   MonthSection = QDateTimeEdit::MonthSection,   YearSection = QDateTimeEdit::YearSection,   TimeSections_Mask = QDateTimeEdit::TimeSections_Mask,   DateSections_Mask = QDateTimeEdit::DateSections_Mask};
Q_DECLARE_FLAGS(Sections, Section)
public slots:
QDateTimeEdit* new_QDateTimeEdit(QWidget*  parent = nullptr);
QDateTimeEdit* new_QDateTimeEdit(const QDate&  d, QWidget*  parent = nullptr);
QDateTimeEdit* new_QDateTimeEdit(const QDateTime&  dt, QWidget*  parent = nullptr);
QDateTimeEdit* new_QDateTimeEdit(const QTime&  t, QWidget*  parent = nullptr);
QDateTimeEdit* new_QDateTimeEdit(const QVariant&  val, QVariant::Type  parserType, QWidget*  parent = nullptr);
void delete_QDateTimeEdit(QDateTimeEdit* obj) { delete obj; } 
   bool  calendarPopup(QDateTimeEdit* theWrappedObject) const;
   QCalendarWidget*  calendarWidget(QDateTimeEdit* theWrappedObject) const;
   void py_q_clear(QDateTimeEdit* theWrappedObject){  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_clear());}
   void clearMaximumDate(QDateTimeEdit* theWrappedObject);
   void clearMaximumDateTime(QDateTimeEdit* theWrappedObject);
   void clearMaximumTime(QDateTimeEdit* theWrappedObject);
   void clearMinimumDate(QDateTimeEdit* theWrappedObject);
   void clearMinimumDateTime(QDateTimeEdit* theWrappedObject);
   void clearMinimumTime(QDateTimeEdit* theWrappedObject);
   QDateTimeEdit::Section  currentSection(QDateTimeEdit* theWrappedObject) const;
   int  currentSectionIndex(QDateTimeEdit* theWrappedObject) const;
   QDate  date(QDateTimeEdit* theWrappedObject) const;
   QDateTime  dateTime(QDateTimeEdit* theWrappedObject) const;
   QDateTime  dateTimeFromText(QDateTimeEdit* theWrappedObject, const QString&  text) const;
   QDateTime  py_q_dateTimeFromText(QDateTimeEdit* theWrappedObject, const QString&  text) const{  return (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_dateTimeFromText(text));}
   QString  displayFormat(QDateTimeEdit* theWrappedObject) const;
   QDateTimeEdit::Sections  displayedSections(QDateTimeEdit* theWrappedObject) const;
   bool  py_q_event(QDateTimeEdit* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_event(event));}
   void py_q_fixup(QDateTimeEdit* theWrappedObject, QString&  input) const{  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_fixup(input));}
   void py_q_focusInEvent(QDateTimeEdit* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_focusInEvent(event));}
   bool  py_q_focusNextPrevChild(QDateTimeEdit* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void initStyleOption(QDateTimeEdit* theWrappedObject, QStyleOptionSpinBox*  option) const;
   void py_q_keyPressEvent(QDateTimeEdit* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_keyPressEvent(event));}
   QDate  maximumDate(QDateTimeEdit* theWrappedObject) const;
   QDateTime  maximumDateTime(QDateTimeEdit* theWrappedObject) const;
   QTime  maximumTime(QDateTimeEdit* theWrappedObject) const;
   QDate  minimumDate(QDateTimeEdit* theWrappedObject) const;
   QDateTime  minimumDateTime(QDateTimeEdit* theWrappedObject) const;
   QTime  minimumTime(QDateTimeEdit* theWrappedObject) const;
   void py_q_mousePressEvent(QDateTimeEdit* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_mousePressEvent(event));}
   void py_q_paintEvent(QDateTimeEdit* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_paintEvent(event));}
   QDateTimeEdit::Section  sectionAt(QDateTimeEdit* theWrappedObject, int  index) const;
   int  sectionCount(QDateTimeEdit* theWrappedObject) const;
   QString  sectionText(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section) const;
   void setCalendarPopup(QDateTimeEdit* theWrappedObject, bool  enable);
   void setCalendarWidget(QDateTimeEdit* theWrappedObject, QCalendarWidget*  calendarWidget);
   void setCurrentSection(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section);
   void setCurrentSectionIndex(QDateTimeEdit* theWrappedObject, int  index);
   void setDateRange(QDateTimeEdit* theWrappedObject, const QDate&  min, const QDate&  max);
   void setDateTimeRange(QDateTimeEdit* theWrappedObject, const QDateTime&  min, const QDateTime&  max);
   void setDisplayFormat(QDateTimeEdit* theWrappedObject, const QString&  format);
   void setMaximumDate(QDateTimeEdit* theWrappedObject, const QDate&  max);
   void setMaximumDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt);
   void setMaximumTime(QDateTimeEdit* theWrappedObject, const QTime&  max);
   void setMinimumDate(QDateTimeEdit* theWrappedObject, const QDate&  min);
   void setMinimumDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt);
   void setMinimumTime(QDateTimeEdit* theWrappedObject, const QTime&  min);
   void setSelectedSection(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section);
   void setTimeRange(QDateTimeEdit* theWrappedObject, const QTime&  min, const QTime&  max);
   void setTimeSpec(QDateTimeEdit* theWrappedObject, Qt::TimeSpec  spec);
   QSize  py_q_sizeHint(QDateTimeEdit* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_sizeHint());}
   void py_q_stepBy(QDateTimeEdit* theWrappedObject, int  steps){  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_stepBy(steps));}
   QAbstractSpinBox::StepEnabled  py_q_stepEnabled(QDateTimeEdit* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_stepEnabled());}
   QString  textFromDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt) const;
   QString  py_q_textFromDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt) const{  return (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_textFromDateTime(dt));}
   QTime  time(QDateTimeEdit* theWrappedObject) const;
   Qt::TimeSpec  timeSpec(QDateTimeEdit* theWrappedObject) const;
   QValidator::State  py_q_validate(QDateTimeEdit* theWrappedObject, QString&  input, int&  pos) const{  return (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_validate(input, pos));}
   void py_q_wheelEvent(QDateTimeEdit* theWrappedObject, QWheelEvent*  event){  (((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->py_q_wheelEvent(event));}
};





class PythonQtShell_QDesktopServices : public QDesktopServices
{
public:
    PythonQtShell_QDesktopServices():QDesktopServices(),_wrapper(NULL) {};

   ~PythonQtShell_QDesktopServices();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDesktopServices : public QObject
{ Q_OBJECT
public:
public slots:
QDesktopServices* new_QDesktopServices();
void delete_QDesktopServices(QDesktopServices* obj) { delete obj; } 
   bool  static_QDesktopServices_openUrl(const QUrl&  url);
   void static_QDesktopServices_setUrlHandler(const QString&  scheme, QObject*  receiver, const char*  method);
   void static_QDesktopServices_unsetUrlHandler(const QString&  scheme);
};





class PythonQtShell_QDesktopWidget : public QDesktopWidget
{
public:
    PythonQtShell_QDesktopWidget():QDesktopWidget(),_wrapper(NULL) {};

   ~PythonQtShell_QDesktopWidget();

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
virtual void resizeEvent(QResizeEvent*  e);
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

class PythonQtPublicPromoter_QDesktopWidget : public QDesktopWidget
{ public:
inline void promoted_resizeEvent(QResizeEvent*  e) { this->resizeEvent(e); }
inline void py_q_resizeEvent(QResizeEvent*  e) { QDesktopWidget::resizeEvent(e); }
};

class PythonQtWrapper_QDesktopWidget : public QObject
{ Q_OBJECT
public:
public slots:
QDesktopWidget* new_QDesktopWidget();
void delete_QDesktopWidget(QDesktopWidget* obj) { delete obj; } 
   const QRect  availableGeometry(QDesktopWidget* theWrappedObject, const QPoint&  point) const;
   const QRect  availableGeometry(QDesktopWidget* theWrappedObject, const QWidget*  widget) const;
   const QRect  availableGeometry(QDesktopWidget* theWrappedObject, int  screen = -1) const;
   bool  isVirtualDesktop(QDesktopWidget* theWrappedObject) const;
   int  numScreens(QDesktopWidget* theWrappedObject) const;
   int  primaryScreen(QDesktopWidget* theWrappedObject) const;
   void py_q_resizeEvent(QDesktopWidget* theWrappedObject, QResizeEvent*  e){  (((PythonQtPublicPromoter_QDesktopWidget*)theWrappedObject)->py_q_resizeEvent(e));}
   QWidget*  screen(QDesktopWidget* theWrappedObject, int  screen = -1);
   int  screenCount(QDesktopWidget* theWrappedObject) const;
   const QRect  screenGeometry(QDesktopWidget* theWrappedObject, const QPoint&  point) const;
   const QRect  screenGeometry(QDesktopWidget* theWrappedObject, const QWidget*  widget) const;
   const QRect  screenGeometry(QDesktopWidget* theWrappedObject, int  screen = -1) const;
   int  screenNumber(QDesktopWidget* theWrappedObject, const QPoint&  arg__1) const;
   int  screenNumber(QDesktopWidget* theWrappedObject, const QWidget*  widget = nullptr) const;
};





class PythonQtShell_QDial : public QDial
{
public:
    PythonQtShell_QDial(QWidget*  parent = nullptr):QDial(parent),_wrapper(NULL) {};

   ~PythonQtShell_QDial();

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
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  me);
virtual void mousePressEvent(QMouseEvent*  me);
virtual void mouseReleaseEvent(QMouseEvent*  me);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  pe);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  re);
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

class PythonQtPublicPromoter_QDial : public QDial
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_initStyleOption(QStyleOptionSlider*  option) const { this->initStyleOption(option); }
inline void promoted_mouseMoveEvent(QMouseEvent*  me) { this->mouseMoveEvent(me); }
inline void promoted_mousePressEvent(QMouseEvent*  me) { this->mousePressEvent(me); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  me) { this->mouseReleaseEvent(me); }
inline void promoted_paintEvent(QPaintEvent*  pe) { this->paintEvent(pe); }
inline void promoted_resizeEvent(QResizeEvent*  re) { this->resizeEvent(re); }
inline void promoted_sliderChange(int  change) { this->sliderChange((QAbstractSlider::SliderChange)change); }
inline bool  py_q_event(QEvent*  e) { return QDial::event(e); }
inline QSize  py_q_minimumSizeHint() const { return QDial::minimumSizeHint(); }
inline void py_q_mouseMoveEvent(QMouseEvent*  me) { QDial::mouseMoveEvent(me); }
inline void py_q_mousePressEvent(QMouseEvent*  me) { QDial::mousePressEvent(me); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  me) { QDial::mouseReleaseEvent(me); }
inline void py_q_paintEvent(QPaintEvent*  pe) { QDial::paintEvent(pe); }
inline void py_q_resizeEvent(QResizeEvent*  re) { QDial::resizeEvent(re); }
inline QSize  py_q_sizeHint() const { return QDial::sizeHint(); }
inline void py_q_sliderChange(int  change) { QDial::sliderChange((QAbstractSlider::SliderChange)change); }
};

class PythonQtWrapper_QDial : public QObject
{ Q_OBJECT
public:
public slots:
QDial* new_QDial(QWidget*  parent = nullptr);
void delete_QDial(QDial* obj) { delete obj; } 
   bool  py_q_event(QDial* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_event(e));}
   void initStyleOption(QDial* theWrappedObject, QStyleOptionSlider*  option) const;
   QSize  minimumSizeHint(QDial* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QDial* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseMoveEvent(QDial* theWrappedObject, QMouseEvent*  me){  (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_mouseMoveEvent(me));}
   void py_q_mousePressEvent(QDial* theWrappedObject, QMouseEvent*  me){  (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_mousePressEvent(me));}
   void py_q_mouseReleaseEvent(QDial* theWrappedObject, QMouseEvent*  me){  (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_mouseReleaseEvent(me));}
   int  notchSize(QDial* theWrappedObject) const;
   qreal  notchTarget(QDial* theWrappedObject) const;
   bool  notchesVisible(QDial* theWrappedObject) const;
   void py_q_paintEvent(QDial* theWrappedObject, QPaintEvent*  pe){  (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_paintEvent(pe));}
   void py_q_resizeEvent(QDial* theWrappedObject, QResizeEvent*  re){  (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_resizeEvent(re));}
   void setNotchTarget(QDial* theWrappedObject, double  target);
   QSize  sizeHint(QDial* theWrappedObject) const;
   QSize  py_q_sizeHint(QDial* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_sizeHint());}
   void py_q_sliderChange(QDial* theWrappedObject, int  change){  (((PythonQtPublicPromoter_QDial*)theWrappedObject)->py_q_sliderChange(change));}
   bool  wrapping(QDial* theWrappedObject) const;
};





class PythonQtShell_QDialog : public QDialog
{
public:
    PythonQtShell_QDialog(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QDialog(parent, f),_wrapper(NULL) {};

   ~PythonQtShell_QDialog();

virtual void accept();
virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void done(int  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual int  exec();
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
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
virtual void open();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reject();
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

class PythonQtPublicPromoter_QDialog : public QDialog
{ public:
inline void promoted_adjustPosition(QWidget*  arg__1) { this->adjustPosition(arg__1); }
inline void promoted_closeEvent(QCloseEvent*  arg__1) { this->closeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { this->contextMenuEvent(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return this->eventFilter(arg__1, arg__2); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void py_q_accept() { QDialog::accept(); }
inline void py_q_closeEvent(QCloseEvent*  arg__1) { QDialog::closeEvent(arg__1); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  arg__1) { QDialog::contextMenuEvent(arg__1); }
inline void py_q_done(int  arg__1) { QDialog::done(arg__1); }
inline bool  py_q_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QDialog::eventFilter(arg__1, arg__2); }
inline int  py_q_exec() { return QDialog::exec(); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QDialog::keyPressEvent(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QDialog::minimumSizeHint(); }
inline void py_q_open() { QDialog::open(); }
inline void py_q_reject() { QDialog::reject(); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QDialog::resizeEvent(arg__1); }
inline void py_q_setVisible(bool  visible) { QDialog::setVisible(visible); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QDialog::showEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QDialog::sizeHint(); }
};

class PythonQtWrapper_QDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DialogCode )
enum DialogCode{
  Rejected = QDialog::Rejected,   Accepted = QDialog::Accepted};
public slots:
QDialog* new_QDialog(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QDialog(QDialog* obj) { delete obj; } 
   void py_q_accept(QDialog* theWrappedObject){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_accept());}
   void adjustPosition(QDialog* theWrappedObject, QWidget*  arg__1);
   void py_q_closeEvent(QDialog* theWrappedObject, QCloseEvent*  arg__1){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_closeEvent(arg__1));}
   void py_q_contextMenuEvent(QDialog* theWrappedObject, QContextMenuEvent*  arg__1){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_contextMenuEvent(arg__1));}
   void py_q_done(QDialog* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_done(arg__1));}
   bool  py_q_eventFilter(QDialog* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_eventFilter(arg__1, arg__2));}
   int  py_q_exec(QDialog* theWrappedObject){  return (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_exec());}
   bool  isSizeGripEnabled(QDialog* theWrappedObject) const;
   void py_q_keyPressEvent(QDialog* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   QSize  minimumSizeHint(QDialog* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QDialog* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_open(QDialog* theWrappedObject){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_open());}
   void py_q_reject(QDialog* theWrappedObject){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_reject());}
   void py_q_resizeEvent(QDialog* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   int  result(QDialog* theWrappedObject) const;
   void setModal(QDialog* theWrappedObject, bool  modal);
   void setResult(QDialog* theWrappedObject, int  r);
   void setSizeGripEnabled(QDialog* theWrappedObject, bool  arg__1);
   void py_q_setVisible(QDialog* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_setVisible(visible));}
   void py_q_showEvent(QDialog* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_showEvent(arg__1));}
   QSize  sizeHint(QDialog* theWrappedObject) const;
   QSize  py_q_sizeHint(QDialog* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDialog*)theWrappedObject)->py_q_sizeHint());}
};





class PythonQtShell_QDialogButtonBox : public QDialogButtonBox
{
public:
    PythonQtShell_QDialogButtonBox(QDialogButtonBox::StandardButtons  buttons, QWidget*  parent = nullptr):QDialogButtonBox(buttons, parent),_wrapper(NULL) {};
    PythonQtShell_QDialogButtonBox(QDialogButtonBox::StandardButtons  buttons, Qt::Orientation  orientation, QWidget*  parent = nullptr):QDialogButtonBox(buttons, orientation, parent),_wrapper(NULL) {};
    PythonQtShell_QDialogButtonBox(QWidget*  parent = nullptr):QDialogButtonBox(parent),_wrapper(NULL) {};
    PythonQtShell_QDialogButtonBox(Qt::Orientation  orientation, QWidget*  parent = nullptr):QDialogButtonBox(orientation, parent),_wrapper(NULL) {};

   ~PythonQtShell_QDialogButtonBox();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  event);
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
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDialogButtonBox : public QDialogButtonBox
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void py_q_changeEvent(QEvent*  event) { QDialogButtonBox::changeEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QDialogButtonBox::event(event); }
};

class PythonQtWrapper_QDialogButtonBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ButtonLayout ButtonRole StandardButton )
Q_FLAGS(StandardButtons )
enum ButtonLayout{
  WinLayout = QDialogButtonBox::WinLayout,   MacLayout = QDialogButtonBox::MacLayout,   KdeLayout = QDialogButtonBox::KdeLayout,   GnomeLayout = QDialogButtonBox::GnomeLayout,   AndroidLayout = QDialogButtonBox::AndroidLayout};
enum ButtonRole{
  InvalidRole = QDialogButtonBox::InvalidRole,   AcceptRole = QDialogButtonBox::AcceptRole,   RejectRole = QDialogButtonBox::RejectRole,   DestructiveRole = QDialogButtonBox::DestructiveRole,   ActionRole = QDialogButtonBox::ActionRole,   HelpRole = QDialogButtonBox::HelpRole,   YesRole = QDialogButtonBox::YesRole,   NoRole = QDialogButtonBox::NoRole,   ResetRole = QDialogButtonBox::ResetRole,   ApplyRole = QDialogButtonBox::ApplyRole,   NRoles = QDialogButtonBox::NRoles};
enum StandardButton{
  NoButton = QDialogButtonBox::NoButton,   Ok = QDialogButtonBox::Ok,   Save = QDialogButtonBox::Save,   SaveAll = QDialogButtonBox::SaveAll,   Open = QDialogButtonBox::Open,   Yes = QDialogButtonBox::Yes,   YesToAll = QDialogButtonBox::YesToAll,   No = QDialogButtonBox::No,   NoToAll = QDialogButtonBox::NoToAll,   Abort = QDialogButtonBox::Abort,   Retry = QDialogButtonBox::Retry,   Ignore = QDialogButtonBox::Ignore,   Close = QDialogButtonBox::Close,   Cancel = QDialogButtonBox::Cancel,   Discard = QDialogButtonBox::Discard,   Help = QDialogButtonBox::Help,   Apply = QDialogButtonBox::Apply,   Reset = QDialogButtonBox::Reset,   RestoreDefaults = QDialogButtonBox::RestoreDefaults,   FirstButton = QDialogButtonBox::FirstButton,   LastButton = QDialogButtonBox::LastButton};
Q_DECLARE_FLAGS(StandardButtons, StandardButton)
public slots:
QDialogButtonBox* new_QDialogButtonBox(QDialogButtonBox::StandardButtons  buttons, QWidget*  parent = nullptr);
QDialogButtonBox* new_QDialogButtonBox(QDialogButtonBox::StandardButtons  buttons, Qt::Orientation  orientation, QWidget*  parent = nullptr);
QDialogButtonBox* new_QDialogButtonBox(QWidget*  parent = nullptr);
QDialogButtonBox* new_QDialogButtonBox(Qt::Orientation  orientation, QWidget*  parent = nullptr);
void delete_QDialogButtonBox(QDialogButtonBox* obj) { delete obj; } 
   void addButton(QDialogButtonBox* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractButton* >  button, QDialogButtonBox::ButtonRole  role);
   QPushButton*  addButton(QDialogButtonBox* theWrappedObject, QDialogButtonBox::StandardButton  button);
   QPushButton*  addButton(QDialogButtonBox* theWrappedObject, const QString&  text, QDialogButtonBox::ButtonRole  role);
   QPushButton*  button(QDialogButtonBox* theWrappedObject, QDialogButtonBox::StandardButton  which) const;
   QDialogButtonBox::ButtonRole  buttonRole(QDialogButtonBox* theWrappedObject, QAbstractButton*  button) const;
   QList<QAbstractButton* >  buttons(QDialogButtonBox* theWrappedObject) const;
   bool  centerButtons(QDialogButtonBox* theWrappedObject) const;
   void py_q_changeEvent(QDialogButtonBox* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QDialogButtonBox*)theWrappedObject)->py_q_changeEvent(event));}
   void clear(QDialogButtonBox* theWrappedObject);
   bool  py_q_event(QDialogButtonBox* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QDialogButtonBox*)theWrappedObject)->py_q_event(event));}
   Qt::Orientation  orientation(QDialogButtonBox* theWrappedObject) const;
   void removeButton(QDialogButtonBox* theWrappedObject, PythonQtPassOwnershipToPython<QAbstractButton* >  button);
   void setCenterButtons(QDialogButtonBox* theWrappedObject, bool  center);
   void setOrientation(QDialogButtonBox* theWrappedObject, Qt::Orientation  orientation);
   void setStandardButtons(QDialogButtonBox* theWrappedObject, QDialogButtonBox::StandardButtons  buttons);
   QDialogButtonBox::StandardButton  standardButton(QDialogButtonBox* theWrappedObject, QAbstractButton*  button) const;
   QDialogButtonBox::StandardButtons  standardButtons(QDialogButtonBox* theWrappedObject) const;
};





class PythonQtShell_QDirModel : public QDirModel
{
public:
    PythonQtShell_QDirModel(QObject*  parent = nullptr):QDirModel(parent),_wrapper(NULL) {};
    PythonQtShell_QDirModel(const QStringList&  nameFilters, QDir::Filters  filters, QDir::SortFlags  sort, QObject*  parent = nullptr):QDirModel(nameFilters, filters, sort, parent),_wrapper(NULL) {};

   ~PythonQtShell_QDirModel();

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
virtual bool  hasChildren(const QModelIndex&  index = QModelIndex()) const;
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

class PythonQtPublicPromoter_QDirModel : public QDirModel
{ public:
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QDirModel::columnCount(parent); }
inline QVariant  py_q_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return QDirModel::data(index, role); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QDirModel::dropMimeData(data, action, row, column, parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QDirModel::flags(index); }
inline bool  py_q_hasChildren(const QModelIndex&  index = QModelIndex()) const { return QDirModel::hasChildren(index); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QDirModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QDirModel::index(row, column, parent); }
inline QMimeData*  py_q_mimeData(const QList<QModelIndex >&  indexes) const { return QDirModel::mimeData(indexes); }
inline QStringList  py_q_mimeTypes() const { return QDirModel::mimeTypes(); }
inline QModelIndex  py_q_parent(const QModelIndex&  child) const { return QDirModel::parent(child); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QDirModel::rowCount(parent); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QDirModel::setData(index, value, role); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QDirModel::sort(column, order); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QDirModel::supportedDropActions(); }
};

class PythonQtWrapper_QDirModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Roles )
enum Roles{
  FileIconRole = QDirModel::FileIconRole,   FilePathRole = QDirModel::FilePathRole,   FileNameRole = QDirModel::FileNameRole};
public slots:
QDirModel* new_QDirModel(QObject*  parent = nullptr);
QDirModel* new_QDirModel(const QStringList&  nameFilters, QDir::Filters  filters, QDir::SortFlags  sort, QObject*  parent = nullptr);
void delete_QDirModel(QDirModel* obj) { delete obj; } 
   int  py_q_columnCount(QDirModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QDirModel*)theWrappedObject)->py_q_columnCount(parent));}
   QVariant  py_q_data(QDirModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QDirModel*)theWrappedObject)->py_q_data(index, role));}
   bool  py_q_dropMimeData(QDirModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QDirModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   QIcon  fileIcon(QDirModel* theWrappedObject, const QModelIndex&  index) const;
   QFileInfo  fileInfo(QDirModel* theWrappedObject, const QModelIndex&  index) const;
   QString  fileName(QDirModel* theWrappedObject, const QModelIndex&  index) const;
   QString  filePath(QDirModel* theWrappedObject, const QModelIndex&  index) const;
   QDir::Filters  filter(QDirModel* theWrappedObject) const;
   Qt::ItemFlags  py_q_flags(QDirModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QDirModel*)theWrappedObject)->py_q_flags(index));}
   bool  py_q_hasChildren(QDirModel* theWrappedObject, const QModelIndex&  index = QModelIndex()) const{  return (((PythonQtPublicPromoter_QDirModel*)theWrappedObject)->py_q_hasChildren(index));}
   QVariant  py_q_headerData(QDirModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QDirModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QFileIconProvider*  iconProvider(QDirModel* theWrappedObject) const;
   QModelIndex  index(QDirModel* theWrappedObject, const QString&  path, int  column = 0) const;
   QModelIndex  py_q_index(QDirModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QDirModel*)theWrappedObject)->py_q_index(row, column, parent));}
   bool  isDir(QDirModel* theWrappedObject, const QModelIndex&  index) const;
   bool  isReadOnly(QDirModel* theWrappedObject) const;
   bool  lazyChildCount(QDirModel* theWrappedObject) const;
   QMimeData*  py_q_mimeData(QDirModel* theWrappedObject, const QList<QModelIndex >&  indexes) const{  return (((PythonQtPublicPromoter_QDirModel*)theWrappedObject)->py_q_mimeData(indexes));}
   QStringList  py_q_mimeTypes(QDirModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDirModel*)theWrappedObject)->py_q_mimeTypes());}
   QModelIndex  mkdir(QDirModel* theWrappedObject, const QModelIndex&  parent, const QString&  name);
   QStringList  nameFilters(QDirModel* theWrappedObject) const;
   QModelIndex  py_q_parent(QDirModel* theWrappedObject, const QModelIndex&  child) const{  return (((PythonQtPublicPromoter_QDirModel*)theWrappedObject)->py_q_parent(child));}
   bool  remove(QDirModel* theWrappedObject, const QModelIndex&  index);
   bool  resolveSymlinks(QDirModel* theWrappedObject) const;
   bool  rmdir(QDirModel* theWrappedObject, const QModelIndex&  index);
   int  py_q_rowCount(QDirModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QDirModel*)theWrappedObject)->py_q_rowCount(parent));}
   bool  py_q_setData(QDirModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QDirModel*)theWrappedObject)->py_q_setData(index, value, role));}
   void setFilter(QDirModel* theWrappedObject, QDir::Filters  filters);
   void setIconProvider(QDirModel* theWrappedObject, QFileIconProvider*  provider);
   void setLazyChildCount(QDirModel* theWrappedObject, bool  enable);
   void setNameFilters(QDirModel* theWrappedObject, const QStringList&  filters);
   void setReadOnly(QDirModel* theWrappedObject, bool  enable);
   void setResolveSymlinks(QDirModel* theWrappedObject, bool  enable);
   void setSorting(QDirModel* theWrappedObject, QDir::SortFlags  sort);
   void py_q_sort(QDirModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QDirModel*)theWrappedObject)->py_q_sort(column, order));}
   QDir::SortFlags  sorting(QDirModel* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDropActions(QDirModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDirModel*)theWrappedObject)->py_q_supportedDropActions());}
};





class PythonQtShell_QDockWidget : public QDockWidget
{
public:
    PythonQtShell_QDockWidget(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QDockWidget(parent, flags),_wrapper(NULL) {};
    PythonQtShell_QDockWidget(const QString&  title, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QDockWidget(title, parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QDockWidget();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  event);
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
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDockWidget : public QDockWidget
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { this->closeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_initStyleOption(QStyleOptionDockWidget*  option) const { this->initStyleOption(option); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void py_q_changeEvent(QEvent*  event) { QDockWidget::changeEvent(event); }
inline void py_q_closeEvent(QCloseEvent*  event) { QDockWidget::closeEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QDockWidget::event(event); }
inline void py_q_paintEvent(QPaintEvent*  event) { QDockWidget::paintEvent(event); }
};

class PythonQtWrapper_QDockWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DockWidgetFeature )
Q_FLAGS(DockWidgetFeatures )
enum DockWidgetFeature{
  DockWidgetClosable = QDockWidget::DockWidgetClosable,   DockWidgetMovable = QDockWidget::DockWidgetMovable,   DockWidgetFloatable = QDockWidget::DockWidgetFloatable,   DockWidgetVerticalTitleBar = QDockWidget::DockWidgetVerticalTitleBar,   DockWidgetFeatureMask = QDockWidget::DockWidgetFeatureMask,   AllDockWidgetFeatures = QDockWidget::AllDockWidgetFeatures,   NoDockWidgetFeatures = QDockWidget::NoDockWidgetFeatures,   Reserved = QDockWidget::Reserved};
Q_DECLARE_FLAGS(DockWidgetFeatures, DockWidgetFeature)
public slots:
QDockWidget* new_QDockWidget(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
QDockWidget* new_QDockWidget(const QString&  title, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
void delete_QDockWidget(QDockWidget* obj) { delete obj; } 
   Qt::DockWidgetAreas  allowedAreas(QDockWidget* theWrappedObject) const;
   void py_q_changeEvent(QDockWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QDockWidget*)theWrappedObject)->py_q_changeEvent(event));}
   void py_q_closeEvent(QDockWidget* theWrappedObject, QCloseEvent*  event){  (((PythonQtPublicPromoter_QDockWidget*)theWrappedObject)->py_q_closeEvent(event));}
   bool  py_q_event(QDockWidget* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QDockWidget*)theWrappedObject)->py_q_event(event));}
   QDockWidget::DockWidgetFeatures  features(QDockWidget* theWrappedObject) const;
   void initStyleOption(QDockWidget* theWrappedObject, QStyleOptionDockWidget*  option) const;
   bool  isAreaAllowed(QDockWidget* theWrappedObject, Qt::DockWidgetArea  area) const;
   bool  isFloating(QDockWidget* theWrappedObject) const;
   void py_q_paintEvent(QDockWidget* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QDockWidget*)theWrappedObject)->py_q_paintEvent(event));}
   void setAllowedAreas(QDockWidget* theWrappedObject, Qt::DockWidgetAreas  areas);
   void setFeatures(QDockWidget* theWrappedObject, QDockWidget::DockWidgetFeatures  features);
   void setFloating(QDockWidget* theWrappedObject, bool  floating);
   void setTitleBarWidget(QDockWidget* theWrappedObject, QWidget*  widget);
   void setWidget(QDockWidget* theWrappedObject, QWidget*  widget);
   QWidget*  titleBarWidget(QDockWidget* theWrappedObject) const;
   QAction*  toggleViewAction(QDockWidget* theWrappedObject) const;
   QWidget*  widget(QDockWidget* theWrappedObject) const;
};





class PythonQtShell_QDoubleSpinBox : public QDoubleSpinBox
{
public:
    PythonQtShell_QDoubleSpinBox(QWidget*  parent = nullptr):QDoubleSpinBox(parent),_wrapper(NULL) {};

   ~PythonQtShell_QDoubleSpinBox();

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
virtual QString  textFromValue(double  val) const;
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual double  valueFromText(const QString&  text) const;
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDoubleSpinBox : public QDoubleSpinBox
{ public:
inline void py_q_fixup(QString&  str) const { QDoubleSpinBox::fixup(str); }
inline QString  py_q_textFromValue(double  val) const { return QDoubleSpinBox::textFromValue(val); }
inline QValidator::State  py_q_validate(QString&  input, int&  pos) const { return QDoubleSpinBox::validate(input, pos); }
inline double  py_q_valueFromText(const QString&  text) const { return QDoubleSpinBox::valueFromText(text); }
};

class PythonQtWrapper_QDoubleSpinBox : public QObject
{ Q_OBJECT
public:
public slots:
QDoubleSpinBox* new_QDoubleSpinBox(QWidget*  parent = nullptr);
void delete_QDoubleSpinBox(QDoubleSpinBox* obj) { delete obj; } 
   QString  cleanText(QDoubleSpinBox* theWrappedObject) const;
   int  decimals(QDoubleSpinBox* theWrappedObject) const;
   void py_q_fixup(QDoubleSpinBox* theWrappedObject, QString&  str) const{  (((PythonQtPublicPromoter_QDoubleSpinBox*)theWrappedObject)->py_q_fixup(str));}
   double  maximum(QDoubleSpinBox* theWrappedObject) const;
   double  minimum(QDoubleSpinBox* theWrappedObject) const;
   QString  prefix(QDoubleSpinBox* theWrappedObject) const;
   void setDecimals(QDoubleSpinBox* theWrappedObject, int  prec);
   void setMaximum(QDoubleSpinBox* theWrappedObject, double  max);
   void setMinimum(QDoubleSpinBox* theWrappedObject, double  min);
   void setPrefix(QDoubleSpinBox* theWrappedObject, const QString&  prefix);
   void setRange(QDoubleSpinBox* theWrappedObject, double  min, double  max);
   void setSingleStep(QDoubleSpinBox* theWrappedObject, double  val);
   void setSuffix(QDoubleSpinBox* theWrappedObject, const QString&  suffix);
   double  singleStep(QDoubleSpinBox* theWrappedObject) const;
   QString  suffix(QDoubleSpinBox* theWrappedObject) const;
   QString  textFromValue(QDoubleSpinBox* theWrappedObject, double  val) const;
   QString  py_q_textFromValue(QDoubleSpinBox* theWrappedObject, double  val) const{  return (((PythonQtPublicPromoter_QDoubleSpinBox*)theWrappedObject)->py_q_textFromValue(val));}
   QValidator::State  py_q_validate(QDoubleSpinBox* theWrappedObject, QString&  input, int&  pos) const{  return (((PythonQtPublicPromoter_QDoubleSpinBox*)theWrappedObject)->py_q_validate(input, pos));}
   double  value(QDoubleSpinBox* theWrappedObject) const;
   double  valueFromText(QDoubleSpinBox* theWrappedObject, const QString&  text) const;
   double  py_q_valueFromText(QDoubleSpinBox* theWrappedObject, const QString&  text) const{  return (((PythonQtPublicPromoter_QDoubleSpinBox*)theWrappedObject)->py_q_valueFromText(text));}
};





class PythonQtShell_QDoubleValidator : public QDoubleValidator
{
public:
    PythonQtShell_QDoubleValidator(QObject*  parent = nullptr):QDoubleValidator(parent),_wrapper(NULL) {};
    PythonQtShell_QDoubleValidator(double  bottom, double  top, int  decimals, QObject*  parent = nullptr):QDoubleValidator(bottom, top, decimals, parent),_wrapper(NULL) {};

   ~PythonQtShell_QDoubleValidator();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void fixup(QString&  arg__1) const;
virtual void setRange(double  bottom, double  top, int  decimals = 0);
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  arg__1, int&  arg__2) const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDoubleValidator : public QDoubleValidator
{ public:
inline void py_q_setRange(double  bottom, double  top, int  decimals = 0) { QDoubleValidator::setRange(bottom, top, decimals); }
inline QValidator::State  py_q_validate(QString&  arg__1, int&  arg__2) const { return QDoubleValidator::validate(arg__1, arg__2); }
};

class PythonQtWrapper_QDoubleValidator : public QObject
{ Q_OBJECT
public:
public slots:
QDoubleValidator* new_QDoubleValidator(QObject*  parent = nullptr);
QDoubleValidator* new_QDoubleValidator(double  bottom, double  top, int  decimals, QObject*  parent = nullptr);
void delete_QDoubleValidator(QDoubleValidator* obj) { delete obj; } 
   double  bottom(QDoubleValidator* theWrappedObject) const;
   int  decimals(QDoubleValidator* theWrappedObject) const;
   QDoubleValidator::Notation  notation(QDoubleValidator* theWrappedObject) const;
   void setBottom(QDoubleValidator* theWrappedObject, double  arg__1);
   void setDecimals(QDoubleValidator* theWrappedObject, int  arg__1);
   void setNotation(QDoubleValidator* theWrappedObject, QDoubleValidator::Notation  arg__1);
   void setRange(QDoubleValidator* theWrappedObject, double  bottom, double  top, int  decimals = 0);
   void py_q_setRange(QDoubleValidator* theWrappedObject, double  bottom, double  top, int  decimals = 0){  (((PythonQtPublicPromoter_QDoubleValidator*)theWrappedObject)->py_q_setRange(bottom, top, decimals));}
   void setTop(QDoubleValidator* theWrappedObject, double  arg__1);
   double  top(QDoubleValidator* theWrappedObject) const;
   QValidator::State  py_q_validate(QDoubleValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const{  return (((PythonQtPublicPromoter_QDoubleValidator*)theWrappedObject)->py_q_validate(arg__1, arg__2));}
};





class PythonQtShell_QDrag : public QDrag
{
public:
    PythonQtShell_QDrag(QObject*  dragSource):QDrag(dragSource),_wrapper(NULL) {};

   ~PythonQtShell_QDrag();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDrag : public QObject
{ Q_OBJECT
public:
public slots:
QDrag* new_QDrag(QObject*  dragSource);
void delete_QDrag(QDrag* obj) { delete obj; } 
   void static_QDrag_cancel();
   Qt::DropAction  defaultAction(QDrag* theWrappedObject) const;
   QPixmap  dragCursor(QDrag* theWrappedObject, Qt::DropAction  action) const;
   Qt::DropAction  exec(QDrag* theWrappedObject, Qt::DropActions  supportedActions = Qt::MoveAction);
   Qt::DropAction  exec(QDrag* theWrappedObject, Qt::DropActions  supportedActions, Qt::DropAction  defaultAction);
   QPoint  hotSpot(QDrag* theWrappedObject) const;
   QMimeData*  mimeData(QDrag* theWrappedObject) const;
   QPixmap  pixmap(QDrag* theWrappedObject) const;
   void setDragCursor(QDrag* theWrappedObject, const QPixmap&  cursor, Qt::DropAction  action);
   void setHotSpot(QDrag* theWrappedObject, const QPoint&  hotspot);
   void setMimeData(QDrag* theWrappedObject, PythonQtPassOwnershipToCPP<QMimeData* >  data);
   void setPixmap(QDrag* theWrappedObject, const QPixmap&  arg__1);
   QObject*  source(QDrag* theWrappedObject) const;
   Qt::DropActions  supportedActions(QDrag* theWrappedObject) const;
   QObject*  target(QDrag* theWrappedObject) const;
};





class PythonQtWrapper_QDragEnterEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragEnterEvent* new_QDragEnterEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
void delete_QDragEnterEvent(QDragEnterEvent* obj) { delete obj; } 
};





class PythonQtWrapper_QDragLeaveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragLeaveEvent* new_QDragLeaveEvent();
void delete_QDragLeaveEvent(QDragLeaveEvent* obj) { delete obj; } 
};





class PythonQtShell_QDragMoveEvent : public QDragMoveEvent
{
public:
    PythonQtShell_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::DragMove):QDragMoveEvent(pos, actions, data, buttons, modifiers, type),_wrapper(NULL) {};

   ~PythonQtShell_QDragMoveEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDragMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragMoveEvent* new_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::DragMove);
void delete_QDragMoveEvent(QDragMoveEvent* obj) { delete obj; } 
   void accept(QDragMoveEvent* theWrappedObject, const QRect&  r);
   QRect  answerRect(QDragMoveEvent* theWrappedObject) const;
   void ignore(QDragMoveEvent* theWrappedObject, const QRect&  r);
};





class PythonQtShell_QDropEvent : public QDropEvent
{
public:
    PythonQtShell_QDropEvent(const QPointF&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::Drop):QDropEvent(pos, actions, data, buttons, modifiers, type),_wrapper(NULL) {};

   ~PythonQtShell_QDropEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDropEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDropEvent* new_QDropEvent(const QPointF&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::Drop);
void delete_QDropEvent(QDropEvent* obj) { delete obj; } 
   void acceptProposedAction(QDropEvent* theWrappedObject);
   Qt::DropAction  dropAction(QDropEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  keyboardModifiers(QDropEvent* theWrappedObject) const;
   const QMimeData*  mimeData(QDropEvent* theWrappedObject) const;
   Qt::MouseButtons  mouseButtons(QDropEvent* theWrappedObject) const;
   QPoint  pos(QDropEvent* theWrappedObject) const;
   const QPointF*  posF(QDropEvent* theWrappedObject) const;
   Qt::DropActions  possibleActions(QDropEvent* theWrappedObject) const;
   Qt::DropAction  proposedAction(QDropEvent* theWrappedObject) const;
   void setDropAction(QDropEvent* theWrappedObject, Qt::DropAction  action);
   QObject*  source(QDropEvent* theWrappedObject) const;
};





class PythonQtShell_QEnterEvent : public QEnterEvent
{
public:
    PythonQtShell_QEnterEvent(const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos):QEnterEvent(localPos, windowPos, screenPos),_wrapper(NULL) {};

   ~PythonQtShell_QEnterEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QEnterEvent : public QObject
{ Q_OBJECT
public:
public slots:
QEnterEvent* new_QEnterEvent(const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos);
void delete_QEnterEvent(QEnterEvent* obj) { delete obj; } 
   QPoint  globalPos(QEnterEvent* theWrappedObject) const;
   int  globalX(QEnterEvent* theWrappedObject) const;
   int  globalY(QEnterEvent* theWrappedObject) const;
   const QPointF*  localPos(QEnterEvent* theWrappedObject) const;
   QPoint  pos(QEnterEvent* theWrappedObject) const;
   const QPointF*  screenPos(QEnterEvent* theWrappedObject) const;
   const QPointF*  windowPos(QEnterEvent* theWrappedObject) const;
   int  x(QEnterEvent* theWrappedObject) const;
   int  y(QEnterEvent* theWrappedObject) const;
};





class PythonQtShell_QErrorMessage : public QErrorMessage
{
public:
    PythonQtShell_QErrorMessage(QWidget*  parent = nullptr):QErrorMessage(parent),_wrapper(NULL) {};

   ~PythonQtShell_QErrorMessage();

virtual void accept();
virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void done(int  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual int  exec();
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
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
virtual void open();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reject();
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

class PythonQtPublicPromoter_QErrorMessage : public QErrorMessage
{ public:
inline void promoted_changeEvent(QEvent*  e) { this->changeEvent(e); }
inline void promoted_done(int  arg__1) { this->done(arg__1); }
inline void py_q_changeEvent(QEvent*  e) { QErrorMessage::changeEvent(e); }
inline void py_q_done(int  arg__1) { QErrorMessage::done(arg__1); }
};

class PythonQtWrapper_QErrorMessage : public QObject
{ Q_OBJECT
public:
public slots:
QErrorMessage* new_QErrorMessage(QWidget*  parent = nullptr);
void delete_QErrorMessage(QErrorMessage* obj) { delete obj; } 
   void py_q_changeEvent(QErrorMessage* theWrappedObject, QEvent*  e){  (((PythonQtPublicPromoter_QErrorMessage*)theWrappedObject)->py_q_changeEvent(e));}
   void py_q_done(QErrorMessage* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QErrorMessage*)theWrappedObject)->py_q_done(arg__1));}
   QErrorMessage*  static_QErrorMessage_qtHandler();
};





class PythonQtShell_QExposeEvent : public QExposeEvent
{
public:
    PythonQtShell_QExposeEvent(const QRegion&  rgn):QExposeEvent(rgn),_wrapper(NULL) {};

   ~PythonQtShell_QExposeEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QExposeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QExposeEvent* new_QExposeEvent(const QRegion&  rgn);
void delete_QExposeEvent(QExposeEvent* obj) { delete obj; } 
   const QRegion*  region(QExposeEvent* theWrappedObject) const;
};





class PythonQtShell_QFileDialog : public QFileDialog
{
public:
    PythonQtShell_QFileDialog(QWidget*  parent, Qt::WindowFlags  f):QFileDialog(parent, f),_wrapper(NULL) {};
    PythonQtShell_QFileDialog(QWidget*  parent = nullptr, const QString&  caption = QString(), const QString&  directory = QString(), const QString&  filter = QString()):QFileDialog(parent, caption, directory, filter),_wrapper(NULL) {};

   ~PythonQtShell_QFileDialog();

virtual void accept();
virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void done(int  result);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual int  exec();
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
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
virtual void reject();
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

class PythonQtPublicPromoter_QFileDialog : public QFileDialog
{ public:
inline void promoted_accept() { this->accept(); }
inline void promoted_changeEvent(QEvent*  e) { this->changeEvent(e); }
inline void promoted_done(int  result) { this->done(result); }
inline void py_q_accept() { QFileDialog::accept(); }
inline void py_q_changeEvent(QEvent*  e) { QFileDialog::changeEvent(e); }
inline void py_q_done(int  result) { QFileDialog::done(result); }
inline void py_q_setVisible(bool  visible) { QFileDialog::setVisible(visible); }
};

class PythonQtWrapper_QFileDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DialogLabel Option )
Q_FLAGS(Options )
enum DialogLabel{
  LookIn = QFileDialog::LookIn,   FileName = QFileDialog::FileName,   FileType = QFileDialog::FileType,   Accept = QFileDialog::Accept,   Reject = QFileDialog::Reject};
enum Option{
  ShowDirsOnly = QFileDialog::ShowDirsOnly,   DontResolveSymlinks = QFileDialog::DontResolveSymlinks,   DontConfirmOverwrite = QFileDialog::DontConfirmOverwrite,   DontUseSheet = QFileDialog::DontUseSheet,   DontUseNativeDialog = QFileDialog::DontUseNativeDialog,   ReadOnly = QFileDialog::ReadOnly,   HideNameFilterDetails = QFileDialog::HideNameFilterDetails,   DontUseCustomDirectoryIcons = QFileDialog::DontUseCustomDirectoryIcons};
Q_DECLARE_FLAGS(Options, Option)
public slots:
QFileDialog* new_QFileDialog(QWidget*  parent, Qt::WindowFlags  f);
QFileDialog* new_QFileDialog(QWidget*  parent = nullptr, const QString&  caption = QString(), const QString&  directory = QString(), const QString&  filter = QString());
void delete_QFileDialog(QFileDialog* obj) { delete obj; } 
   void py_q_accept(QFileDialog* theWrappedObject){  (((PythonQtPublicPromoter_QFileDialog*)theWrappedObject)->py_q_accept());}
   QFileDialog::AcceptMode  acceptMode(QFileDialog* theWrappedObject) const;
   void py_q_changeEvent(QFileDialog* theWrappedObject, QEvent*  e){  (((PythonQtPublicPromoter_QFileDialog*)theWrappedObject)->py_q_changeEvent(e));}
   bool  confirmOverwrite(QFileDialog* theWrappedObject) const;
   QString  defaultSuffix(QFileDialog* theWrappedObject) const;
   QDir  directory(QFileDialog* theWrappedObject) const;
   QUrl  directoryUrl(QFileDialog* theWrappedObject) const;
   void py_q_done(QFileDialog* theWrappedObject, int  result){  (((PythonQtPublicPromoter_QFileDialog*)theWrappedObject)->py_q_done(result));}
   QFileDialog::FileMode  fileMode(QFileDialog* theWrappedObject) const;
   QDir::Filters  filter(QFileDialog* theWrappedObject) const;
   QString  static_QFileDialog_getExistingDirectory(QWidget*  parent = nullptr, const QString&  caption = QString(), const QString&  dir = QString(), QFileDialog::Options  options = QFileDialog::ShowDirsOnly);
   QUrl  static_QFileDialog_getExistingDirectoryUrl(QWidget*  parent = nullptr, const QString&  caption = QString(), const QUrl&  dir = QUrl(), QFileDialog::Options  options = QFileDialog::ShowDirsOnly, const QStringList&  supportedSchemes = QStringList());
   QString  static_QFileDialog_getOpenFileName(QWidget*  parent = nullptr, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = nullptr, QFileDialog::Options  options = QFileDialog::Options());
   QStringList  static_QFileDialog_getOpenFileNames(QWidget*  parent = nullptr, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = nullptr, QFileDialog::Options  options = QFileDialog::Options());
   QUrl  static_QFileDialog_getOpenFileUrl(QWidget*  parent = nullptr, const QString&  caption = QString(), const QUrl&  dir = QUrl(), const QString&  filter = QString(), QString*  selectedFilter = nullptr, QFileDialog::Options  options = QFileDialog::Options(), const QStringList&  supportedSchemes = QStringList());
   QList<QUrl >  static_QFileDialog_getOpenFileUrls(QWidget*  parent = nullptr, const QString&  caption = QString(), const QUrl&  dir = QUrl(), const QString&  filter = QString(), QString*  selectedFilter = nullptr, QFileDialog::Options  options = QFileDialog::Options(), const QStringList&  supportedSchemes = QStringList());
   QString  static_QFileDialog_getSaveFileName(QWidget*  parent = nullptr, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = nullptr, QFileDialog::Options  options = QFileDialog::Options());
   QUrl  static_QFileDialog_getSaveFileUrl(QWidget*  parent = nullptr, const QString&  caption = QString(), const QUrl&  dir = QUrl(), const QString&  filter = QString(), QString*  selectedFilter = nullptr, QFileDialog::Options  options = QFileDialog::Options(), const QStringList&  supportedSchemes = QStringList());
   QStringList  history(QFileDialog* theWrappedObject) const;
   QFileIconProvider*  iconProvider(QFileDialog* theWrappedObject) const;
   bool  isNameFilterDetailsVisible(QFileDialog* theWrappedObject) const;
   bool  isReadOnly(QFileDialog* theWrappedObject) const;
   QAbstractItemDelegate*  itemDelegate(QFileDialog* theWrappedObject) const;
   QString  labelText(QFileDialog* theWrappedObject, QFileDialog::DialogLabel  label) const;
   QStringList  mimeTypeFilters(QFileDialog* theWrappedObject) const;
   QStringList  nameFilters(QFileDialog* theWrappedObject) const;
   void open(QFileDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QFileDialog::Options  options(QFileDialog* theWrappedObject) const;
   QAbstractProxyModel*  proxyModel(QFileDialog* theWrappedObject) const;
   bool  resolveSymlinks(QFileDialog* theWrappedObject) const;
   bool  restoreState(QFileDialog* theWrappedObject, const QByteArray&  state);
   QByteArray  saveState(QFileDialog* theWrappedObject) const;
   void selectFile(QFileDialog* theWrappedObject, const QString&  filename);
   void selectMimeTypeFilter(QFileDialog* theWrappedObject, const QString&  filter);
   void selectNameFilter(QFileDialog* theWrappedObject, const QString&  filter);
   void selectUrl(QFileDialog* theWrappedObject, const QUrl&  url);
   QStringList  selectedFiles(QFileDialog* theWrappedObject) const;
   QString  selectedMimeTypeFilter(QFileDialog* theWrappedObject) const;
   QString  selectedNameFilter(QFileDialog* theWrappedObject) const;
   QList<QUrl >  selectedUrls(QFileDialog* theWrappedObject) const;
   void setAcceptMode(QFileDialog* theWrappedObject, QFileDialog::AcceptMode  mode);
   void setConfirmOverwrite(QFileDialog* theWrappedObject, bool  enabled);
   void setDefaultSuffix(QFileDialog* theWrappedObject, const QString&  suffix);
   void setDirectory(QFileDialog* theWrappedObject, const QDir&  directory);
   void setDirectory(QFileDialog* theWrappedObject, const QString&  directory);
   void setDirectoryUrl(QFileDialog* theWrappedObject, const QUrl&  directory);
   void setFileMode(QFileDialog* theWrappedObject, QFileDialog::FileMode  mode);
   void setFilter(QFileDialog* theWrappedObject, QDir::Filters  filters);
   void setHistory(QFileDialog* theWrappedObject, const QStringList&  paths);
   void setIconProvider(QFileDialog* theWrappedObject, QFileIconProvider*  provider);
   void setItemDelegate(QFileDialog* theWrappedObject, QAbstractItemDelegate*  delegate);
   void setLabelText(QFileDialog* theWrappedObject, QFileDialog::DialogLabel  label, const QString&  text);
   void setMimeTypeFilters(QFileDialog* theWrappedObject, const QStringList&  filters);
   void setNameFilter(QFileDialog* theWrappedObject, const QString&  filter);
   void setNameFilterDetailsVisible(QFileDialog* theWrappedObject, bool  enabled);
   void setNameFilters(QFileDialog* theWrappedObject, const QStringList&  filters);
   void setOption(QFileDialog* theWrappedObject, QFileDialog::Option  option, bool  on = true);
   void setOptions(QFileDialog* theWrappedObject, QFileDialog::Options  options);
   void setProxyModel(QFileDialog* theWrappedObject, QAbstractProxyModel*  model);
   void setReadOnly(QFileDialog* theWrappedObject, bool  enabled);
   void setResolveSymlinks(QFileDialog* theWrappedObject, bool  enabled);
   void setSidebarUrls(QFileDialog* theWrappedObject, const QList<QUrl >&  urls);
   void setSupportedSchemes(QFileDialog* theWrappedObject, const QStringList&  schemes);
   void setViewMode(QFileDialog* theWrappedObject, QFileDialog::ViewMode  mode);
   void py_q_setVisible(QFileDialog* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QFileDialog*)theWrappedObject)->py_q_setVisible(visible));}
   QList<QUrl >  sidebarUrls(QFileDialog* theWrappedObject) const;
   QStringList  supportedSchemes(QFileDialog* theWrappedObject) const;
   bool  testOption(QFileDialog* theWrappedObject, QFileDialog::Option  option) const;
   QFileDialog::ViewMode  viewMode(QFileDialog* theWrappedObject) const;
};





class PythonQtShell_QFileIconProvider : public QFileIconProvider
{
public:
    PythonQtShell_QFileIconProvider():QFileIconProvider(),_wrapper(NULL) {};

   ~PythonQtShell_QFileIconProvider();

virtual QIcon  icon(QFileIconProvider::IconType  type) const;
virtual QIcon  icon(const QFileInfo&  info) const;
virtual QString  type(const QFileInfo&  info) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFileIconProvider : public QFileIconProvider
{ public:
inline QIcon  py_q_icon(QFileIconProvider::IconType  type) const { return QFileIconProvider::icon(type); }
inline QIcon  py_q_icon(const QFileInfo&  info) const { return QFileIconProvider::icon(info); }
inline QString  py_q_type(const QFileInfo&  info) const { return QFileIconProvider::type(info); }
};

class PythonQtWrapper_QFileIconProvider : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IconType Option )
Q_FLAGS(Options )
enum IconType{
  Computer = QFileIconProvider::Computer,   Desktop = QFileIconProvider::Desktop,   Trashcan = QFileIconProvider::Trashcan,   Network = QFileIconProvider::Network,   Drive = QFileIconProvider::Drive,   Folder = QFileIconProvider::Folder,   File = QFileIconProvider::File};
enum Option{
  DontUseCustomDirectoryIcons = QFileIconProvider::DontUseCustomDirectoryIcons};
Q_DECLARE_FLAGS(Options, Option)
public slots:
QFileIconProvider* new_QFileIconProvider();
void delete_QFileIconProvider(QFileIconProvider* obj) { delete obj; } 
   QIcon  icon(QFileIconProvider* theWrappedObject, QFileIconProvider::IconType  type) const;
   QIcon  py_q_icon(QFileIconProvider* theWrappedObject, QFileIconProvider::IconType  type) const{  return (((PythonQtPublicPromoter_QFileIconProvider*)theWrappedObject)->py_q_icon(type));}
   QIcon  icon(QFileIconProvider* theWrappedObject, const QFileInfo&  info) const;
   QIcon  py_q_icon(QFileIconProvider* theWrappedObject, const QFileInfo&  info) const{  return (((PythonQtPublicPromoter_QFileIconProvider*)theWrappedObject)->py_q_icon(info));}
   QFileIconProvider::Options  options(QFileIconProvider* theWrappedObject) const;
   void setOptions(QFileIconProvider* theWrappedObject, QFileIconProvider::Options  options);
   QString  type(QFileIconProvider* theWrappedObject, const QFileInfo&  info) const;
   QString  py_q_type(QFileIconProvider* theWrappedObject, const QFileInfo&  info) const{  return (((PythonQtPublicPromoter_QFileIconProvider*)theWrappedObject)->py_q_type(info));}
};





class PythonQtWrapper_QFileOpenEvent : public QObject
{ Q_OBJECT
public:
public slots:
QFileOpenEvent* new_QFileOpenEvent(const QString&  file);
QFileOpenEvent* new_QFileOpenEvent(const QUrl&  url);
void delete_QFileOpenEvent(QFileOpenEvent* obj) { delete obj; } 
   QString  file(QFileOpenEvent* theWrappedObject) const;
   bool  openFile(QFileOpenEvent* theWrappedObject, QFile&  file, QIODevice::OpenMode  flags) const;
   QUrl  url(QFileOpenEvent* theWrappedObject) const;
};





class PythonQtShell_QFileSystemModel : public QFileSystemModel
{
public:
    PythonQtShell_QFileSystemModel(QObject*  parent = nullptr):QFileSystemModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QFileSystemModel();

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

class PythonQtPublicPromoter_QFileSystemModel : public QFileSystemModel
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline bool  py_q_canFetchMore(const QModelIndex&  parent) const { return QFileSystemModel::canFetchMore(parent); }
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QFileSystemModel::columnCount(parent); }
inline QVariant  py_q_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return QFileSystemModel::data(index, role); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QFileSystemModel::dropMimeData(data, action, row, column, parent); }
inline bool  py_q_event(QEvent*  event) { return QFileSystemModel::event(event); }
inline void py_q_fetchMore(const QModelIndex&  parent) { QFileSystemModel::fetchMore(parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QFileSystemModel::flags(index); }
inline bool  py_q_hasChildren(const QModelIndex&  parent = QModelIndex()) const { return QFileSystemModel::hasChildren(parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QFileSystemModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QFileSystemModel::index(row, column, parent); }
inline QMimeData*  py_q_mimeData(const QList<QModelIndex >&  indexes) const { return QFileSystemModel::mimeData(indexes); }
inline QStringList  py_q_mimeTypes() const { return QFileSystemModel::mimeTypes(); }
inline QModelIndex  py_q_parent(const QModelIndex&  child) const { return QFileSystemModel::parent(child); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QFileSystemModel::rowCount(parent); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QFileSystemModel::setData(index, value, role); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QFileSystemModel::sibling(row, column, idx); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QFileSystemModel::sort(column, order); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QFileSystemModel::supportedDropActions(); }
inline void py_q_timerEvent(QTimerEvent*  event) { QFileSystemModel::timerEvent(event); }
};

class PythonQtWrapper_QFileSystemModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Roles )
enum Roles{
  FileIconRole = QFileSystemModel::FileIconRole,   FilePathRole = QFileSystemModel::FilePathRole,   FileNameRole = QFileSystemModel::FileNameRole,   FilePermissions = QFileSystemModel::FilePermissions};
public slots:
QFileSystemModel* new_QFileSystemModel(QObject*  parent = nullptr);
void delete_QFileSystemModel(QFileSystemModel* obj) { delete obj; } 
   bool  py_q_canFetchMore(QFileSystemModel* theWrappedObject, const QModelIndex&  parent) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_canFetchMore(parent));}
   int  py_q_columnCount(QFileSystemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_columnCount(parent));}
   QVariant  py_q_data(QFileSystemModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_data(index, role));}
   bool  py_q_dropMimeData(QFileSystemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   bool  py_q_event(QFileSystemModel* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_event(event));}
   void py_q_fetchMore(QFileSystemModel* theWrappedObject, const QModelIndex&  parent){  (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_fetchMore(parent));}
   QIcon  fileIcon(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
   QFileInfo  fileInfo(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
   QString  fileName(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
   QString  filePath(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
   QDir::Filters  filter(QFileSystemModel* theWrappedObject) const;
   Qt::ItemFlags  py_q_flags(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_flags(index));}
   bool  py_q_hasChildren(QFileSystemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_hasChildren(parent));}
   QVariant  py_q_headerData(QFileSystemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QFileIconProvider*  iconProvider(QFileSystemModel* theWrappedObject) const;
   QModelIndex  index(QFileSystemModel* theWrappedObject, const QString&  path, int  column = 0) const;
   QModelIndex  py_q_index(QFileSystemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_index(row, column, parent));}
   bool  isDir(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
   bool  isReadOnly(QFileSystemModel* theWrappedObject) const;
   QDateTime  lastModified(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
   QMimeData*  py_q_mimeData(QFileSystemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_mimeData(indexes));}
   QStringList  py_q_mimeTypes(QFileSystemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_mimeTypes());}
   QModelIndex  mkdir(QFileSystemModel* theWrappedObject, const QModelIndex&  parent, const QString&  name);
   QVariant  myComputer(QFileSystemModel* theWrappedObject, int  role = Qt::DisplayRole) const;
   bool  nameFilterDisables(QFileSystemModel* theWrappedObject) const;
   QStringList  nameFilters(QFileSystemModel* theWrappedObject) const;
   QModelIndex  py_q_parent(QFileSystemModel* theWrappedObject, const QModelIndex&  child) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_parent(child));}
   QFile::Permissions  permissions(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
   bool  remove(QFileSystemModel* theWrappedObject, const QModelIndex&  index);
   bool  resolveSymlinks(QFileSystemModel* theWrappedObject) const;
   bool  rmdir(QFileSystemModel* theWrappedObject, const QModelIndex&  index);
   QDir  rootDirectory(QFileSystemModel* theWrappedObject) const;
   QString  rootPath(QFileSystemModel* theWrappedObject) const;
   int  py_q_rowCount(QFileSystemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_rowCount(parent));}
   bool  py_q_setData(QFileSystemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_setData(index, value, role));}
   void setFilter(QFileSystemModel* theWrappedObject, QDir::Filters  filters);
   void setIconProvider(QFileSystemModel* theWrappedObject, QFileIconProvider*  provider);
   void setNameFilterDisables(QFileSystemModel* theWrappedObject, bool  enable);
   void setNameFilters(QFileSystemModel* theWrappedObject, const QStringList&  filters);
   void setReadOnly(QFileSystemModel* theWrappedObject, bool  enable);
   void setResolveSymlinks(QFileSystemModel* theWrappedObject, bool  enable);
   QModelIndex  setRootPath(QFileSystemModel* theWrappedObject, const QString&  path);
   QModelIndex  py_q_sibling(QFileSystemModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
   qint64  size(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
   void py_q_sort(QFileSystemModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_sort(column, order));}
   Qt::DropActions  py_q_supportedDropActions(QFileSystemModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_supportedDropActions());}
   void py_q_timerEvent(QFileSystemModel* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QFileSystemModel*)theWrappedObject)->py_q_timerEvent(event));}
   QString  type(QFileSystemModel* theWrappedObject, const QModelIndex&  index) const;
};





class PythonQtWrapper_QFocusEvent : public QObject
{ Q_OBJECT
public:
public slots:
QFocusEvent* new_QFocusEvent(QEvent::Type  type, Qt::FocusReason  reason = Qt::OtherFocusReason);
void delete_QFocusEvent(QFocusEvent* obj) { delete obj; } 
   bool  gotFocus(QFocusEvent* theWrappedObject) const;
   bool  lostFocus(QFocusEvent* theWrappedObject) const;
   Qt::FocusReason  reason(QFocusEvent* theWrappedObject) const;
};





class PythonQtShell_QFocusFrame : public QFocusFrame
{
public:
    PythonQtShell_QFocusFrame(QWidget*  parent = nullptr):QFocusFrame(parent),_wrapper(NULL) {};

   ~PythonQtShell_QFocusFrame();

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
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
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

class PythonQtPublicPromoter_QFocusFrame : public QFocusFrame
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return this->eventFilter(arg__1, arg__2); }
inline void promoted_initStyleOption(QStyleOption*  option) const { this->initStyleOption(option); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QFocusFrame::event(e); }
inline bool  py_q_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QFocusFrame::eventFilter(arg__1, arg__2); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QFocusFrame::paintEvent(arg__1); }
};

class PythonQtWrapper_QFocusFrame : public QObject
{ Q_OBJECT
public:
public slots:
QFocusFrame* new_QFocusFrame(QWidget*  parent = nullptr);
void delete_QFocusFrame(QFocusFrame* obj) { delete obj; } 
   bool  py_q_event(QFocusFrame* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QFocusFrame*)theWrappedObject)->py_q_event(e));}
   bool  py_q_eventFilter(QFocusFrame* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QFocusFrame*)theWrappedObject)->py_q_eventFilter(arg__1, arg__2));}
   void initStyleOption(QFocusFrame* theWrappedObject, QStyleOption*  option) const;
   void py_q_paintEvent(QFocusFrame* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QFocusFrame*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void setWidget(QFocusFrame* theWrappedObject, QWidget*  widget);
   QWidget*  widget(QFocusFrame* theWrappedObject) const;
};





class PythonQtShell_QFontComboBox : public QFontComboBox
{
public:
    PythonQtShell_QFontComboBox(QWidget*  parent = nullptr):QFontComboBox(parent),_wrapper(NULL) {};

   ~PythonQtShell_QFontComboBox();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  e);
virtual void hidePopup();
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  e);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  e);
virtual void showPopup();
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  e);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFontComboBox : public QFontComboBox
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  py_q_event(QEvent*  e) { return QFontComboBox::event(e); }
inline QSize  py_q_sizeHint() const { return QFontComboBox::sizeHint(); }
};

class PythonQtWrapper_QFontComboBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FontFilter )
Q_FLAGS(FontFilters )
enum FontFilter{
  AllFonts = QFontComboBox::AllFonts,   ScalableFonts = QFontComboBox::ScalableFonts,   NonScalableFonts = QFontComboBox::NonScalableFonts,   MonospacedFonts = QFontComboBox::MonospacedFonts,   ProportionalFonts = QFontComboBox::ProportionalFonts};
Q_DECLARE_FLAGS(FontFilters, FontFilter)
public slots:
QFontComboBox* new_QFontComboBox(QWidget*  parent = nullptr);
void delete_QFontComboBox(QFontComboBox* obj) { delete obj; } 
   QFont  currentFont(QFontComboBox* theWrappedObject) const;
   bool  py_q_event(QFontComboBox* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QFontComboBox*)theWrappedObject)->py_q_event(e));}
   QFontComboBox::FontFilters  fontFilters(QFontComboBox* theWrappedObject) const;
   void setFontFilters(QFontComboBox* theWrappedObject, QFontComboBox::FontFilters  filters);
   void setWritingSystem(QFontComboBox* theWrappedObject, QFontDatabase::WritingSystem  arg__1);
   QSize  py_q_sizeHint(QFontComboBox* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFontComboBox*)theWrappedObject)->py_q_sizeHint());}
   QFontDatabase::WritingSystem  writingSystem(QFontComboBox* theWrappedObject) const;
};


