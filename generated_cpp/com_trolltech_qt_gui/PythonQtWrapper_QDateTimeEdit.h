#ifndef PYTHONQTWRAPPER_QDATETIMEEDIT_H
#define PYTHONQTWRAPPER_QDATETIMEEDIT_H

#include <qdatetimeedit.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlineedit.h>
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
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QDateTimeEdit : public QDateTimeEdit
{
public:
    PythonQtShell_QDateTimeEdit(QWidget*  parent = 0):QDateTimeEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QDateTimeEdit(const QDate&  d, QWidget*  parent = 0):QDateTimeEdit(d, parent),_wrapper(NULL) {};
    PythonQtShell_QDateTimeEdit(const QDateTime&  dt, QWidget*  parent = 0):QDateTimeEdit(dt, parent),_wrapper(NULL) {};
    PythonQtShell_QDateTimeEdit(const QTime&  t, QWidget*  parent = 0):QDateTimeEdit(t, parent),_wrapper(NULL) {};
    PythonQtShell_QDateTimeEdit(const QVariant&  val, QVariant::Type  parserType, QWidget*  parent = 0):QDateTimeEdit(val, parserType, parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void clear();
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual QDateTime  dateTimeFromText(const QString&  text) const;
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  input) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual void stepBy(int  steps);
virtual QAbstractSpinBox::StepEnabled  stepEnabled() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual QString  textFromDateTime(const QDateTime&  dt) const;
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDateTimeEdit : public QDateTimeEdit
{ public:
inline QAbstractSpinBox::StepEnabled  stepEnabled() const { return QDateTimeEdit::stepEnabled(); }
inline QString  textFromDateTime(const QDateTime&  dt) const { return QDateTimeEdit::textFromDateTime(dt); }
inline void wheelEvent(QWheelEvent*  event) { QDateTimeEdit::wheelEvent(event); }
inline void keyPressEvent(QKeyEvent*  event) { QDateTimeEdit::keyPressEvent(event); }
inline void mousePressEvent(QMouseEvent*  event) { QDateTimeEdit::mousePressEvent(event); }
inline void paintEvent(QPaintEvent*  event) { QDateTimeEdit::paintEvent(event); }
inline QDateTime  dateTimeFromText(const QString&  text) const { return QDateTimeEdit::dateTimeFromText(text); }
inline bool  focusNextPrevChild(bool  next) { return QDateTimeEdit::focusNextPrevChild(next); }
inline void fixup(QString&  input) const { QDateTimeEdit::fixup(input); }
inline QValidator::State  validate(QString&  input, int&  pos) const { return QDateTimeEdit::validate(input, pos); }
inline void focusInEvent(QFocusEvent*  event) { QDateTimeEdit::focusInEvent(event); }
};

class PythonQtWrapper_QDateTimeEdit : public QObject
{ Q_OBJECT
public:
public slots:
QDateTimeEdit* new_QDateTimeEdit(QWidget*  parent = 0);
QDateTimeEdit* new_QDateTimeEdit(const QDate&  d, QWidget*  parent = 0);
QDateTimeEdit* new_QDateTimeEdit(const QDateTime&  dt, QWidget*  parent = 0);
QDateTimeEdit* new_QDateTimeEdit(const QTime&  t, QWidget*  parent = 0);
void delete_QDateTimeEdit(QDateTimeEdit* obj) { delete obj; } 
   bool  event(QDateTimeEdit* theWrappedObject, QEvent*  event);
   QAbstractSpinBox::StepEnabled  stepEnabled(QDateTimeEdit* theWrappedObject) const;
   QDateTimeEdit::Sections  displayedSections(QDateTimeEdit* theWrappedObject) const;
   QString  displayFormat(QDateTimeEdit* theWrappedObject) const;
   void setTimeSpec(QDateTimeEdit* theWrappedObject, Qt::TimeSpec  spec);
   QString  textFromDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt) const;
   QDateTime  minimumDateTime(QDateTimeEdit* theWrappedObject) const;
   void setCalendarPopup(QDateTimeEdit* theWrappedObject, bool  enable);
   void setDisplayFormat(QDateTimeEdit* theWrappedObject, const QString&  format);
   void clear(QDateTimeEdit* theWrappedObject);
   void setDateTimeRange(QDateTimeEdit* theWrappedObject, const QDateTime&  min, const QDateTime&  max);
   QDateTime  dateTime(QDateTimeEdit* theWrappedObject) const;
   void setDateRange(QDateTimeEdit* theWrappedObject, const QDate&  min, const QDate&  max);
   void clearMaximumTime(QDateTimeEdit* theWrappedObject);
   void wheelEvent(QDateTimeEdit* theWrappedObject, QWheelEvent*  event);
   QDateTime  maximumDateTime(QDateTimeEdit* theWrappedObject) const;
   QTime  minimumTime(QDateTimeEdit* theWrappedObject) const;
   QDateTimeEdit::Section  currentSection(QDateTimeEdit* theWrappedObject) const;
   void keyPressEvent(QDateTimeEdit* theWrappedObject, QKeyEvent*  event);
   void clearMinimumTime(QDateTimeEdit* theWrappedObject);
   QDate  date(QDateTimeEdit* theWrappedObject) const;
   QDateTimeEdit::Section  sectionAt(QDateTimeEdit* theWrappedObject, int  index) const;
   void mousePressEvent(QDateTimeEdit* theWrappedObject, QMouseEvent*  event);
   Qt::TimeSpec  timeSpec(QDateTimeEdit* theWrappedObject) const;
   void clearMaximumDateTime(QDateTimeEdit* theWrappedObject);
   void paintEvent(QDateTimeEdit* theWrappedObject, QPaintEvent*  event);
   void stepBy(QDateTimeEdit* theWrappedObject, int  steps);
   QDate  maximumDate(QDateTimeEdit* theWrappedObject) const;
   void clearMaximumDate(QDateTimeEdit* theWrappedObject);
   void clearMinimumDateTime(QDateTimeEdit* theWrappedObject);
   QTime  time(QDateTimeEdit* theWrappedObject) const;
   QDateTime  dateTimeFromText(QDateTimeEdit* theWrappedObject, const QString&  text) const;
   void setSelectedSection(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section);
   void clearMinimumDate(QDateTimeEdit* theWrappedObject);
   void setMaximumDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt);
   void setMinimumDate(QDateTimeEdit* theWrappedObject, const QDate&  min);
   void setMinimumTime(QDateTimeEdit* theWrappedObject, const QTime&  min);
   QSize  sizeHint(QDateTimeEdit* theWrappedObject) const;
   int  currentSectionIndex(QDateTimeEdit* theWrappedObject) const;
   bool  focusNextPrevChild(QDateTimeEdit* theWrappedObject, bool  next);
   QString  sectionText(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section) const;
   void setCalendarWidget(QDateTimeEdit* theWrappedObject, QCalendarWidget*  calendarWidget);
   void setCurrentSectionIndex(QDateTimeEdit* theWrappedObject, int  index);
   bool  calendarPopup(QDateTimeEdit* theWrappedObject) const;
   void fixup(QDateTimeEdit* theWrappedObject, QString&  input) const;
   QTime  maximumTime(QDateTimeEdit* theWrappedObject) const;
   void setCurrentSection(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section);
   QValidator::State  validate(QDateTimeEdit* theWrappedObject, QString&  input, int&  pos) const;
   void setMaximumDate(QDateTimeEdit* theWrappedObject, const QDate&  max);
   QDate  minimumDate(QDateTimeEdit* theWrappedObject) const;
   void setTimeRange(QDateTimeEdit* theWrappedObject, const QTime&  min, const QTime&  max);
   QCalendarWidget*  calendarWidget(QDateTimeEdit* theWrappedObject) const;
   int  sectionCount(QDateTimeEdit* theWrappedObject) const;
   void setMaximumTime(QDateTimeEdit* theWrappedObject, const QTime&  max);
   void setMinimumDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt);
   void focusInEvent(QDateTimeEdit* theWrappedObject, QFocusEvent*  event);
};

#endif // PYTHONQTWRAPPER_QDATETIMEEDIT_H
