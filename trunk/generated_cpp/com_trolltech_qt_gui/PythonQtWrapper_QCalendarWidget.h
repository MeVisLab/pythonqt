#ifndef PYTHONQTWRAPPER_QCALENDARWIDGET_H
#define PYTHONQTWRAPPER_QCALENDARWIDGET_H

#include <qcalendarwidget.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextCharFormat>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatetime.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
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
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qtextformat.h>
#include <qwidget.h>

class PythonQtShell_QCalendarWidget : public QCalendarWidget
{
public:
    PythonQtShell_QCalendarWidget(QWidget*  parent = 0):QCalendarWidget(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void paintCell(QPainter*  painter, const QRect&  rect, const QDate&  date) const;
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  event);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCalendarWidget : public QCalendarWidget
{ public:
inline bool  promoted_event(QEvent*  event) { return QCalendarWidget::event(event); }
inline QSize  promoted_sizeHint() const { return QCalendarWidget::sizeHint(); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QCalendarWidget::resizeEvent(event); }
inline QSize  promoted_minimumSizeHint() const { return QCalendarWidget::minimumSizeHint(); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QCalendarWidget::keyPressEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QCalendarWidget::mousePressEvent(event); }
inline void promoted_paintCell(QPainter*  painter, const QRect&  rect, const QDate&  date) const { QCalendarWidget::paintCell(painter, rect, date); }
};

class PythonQtWrapper_QCalendarWidget : public QObject
{ Q_OBJECT
public:
public slots:
QCalendarWidget* new_QCalendarWidget(QWidget*  parent = 0);
void delete_QCalendarWidget(QCalendarWidget* obj) { delete obj; } 
   void setFirstDayOfWeek(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek);
   QTextCharFormat  dateTextFormat(QCalendarWidget* theWrappedObject, const QDate&  date) const;
   QDate  minimumDate(QCalendarWidget* theWrappedObject) const;
   bool  event(QCalendarWidget* theWrappedObject, QEvent*  event);
   QSize  sizeHint(QCalendarWidget* theWrappedObject) const;
   int  dateEditAcceptDelay(QCalendarWidget* theWrappedObject) const;
   int  monthShown(QCalendarWidget* theWrappedObject) const;
   void resizeEvent(QCalendarWidget* theWrappedObject, QResizeEvent*  event);
   void setWeekdayTextFormat(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek, const QTextCharFormat&  format);
   QCalendarWidget::VerticalHeaderFormat  verticalHeaderFormat(QCalendarWidget* theWrappedObject) const;
   void setHorizontalHeaderFormat(QCalendarWidget* theWrappedObject, QCalendarWidget::HorizontalHeaderFormat  format);
   QSize  minimumSizeHint(QCalendarWidget* theWrappedObject) const;
   void keyPressEvent(QCalendarWidget* theWrappedObject, QKeyEvent*  event);
   QTextCharFormat  headerTextFormat(QCalendarWidget* theWrappedObject) const;
   QDate  maximumDate(QCalendarWidget* theWrappedObject) const;
   QCalendarWidget::HorizontalHeaderFormat  horizontalHeaderFormat(QCalendarWidget* theWrappedObject) const;
   void mousePressEvent(QCalendarWidget* theWrappedObject, QMouseEvent*  event);
   void setHeaderTextFormat(QCalendarWidget* theWrappedObject, const QTextCharFormat&  format);
   void setDateEditEnabled(QCalendarWidget* theWrappedObject, bool  enable);
   void setMaximumDate(QCalendarWidget* theWrappedObject, const QDate&  date);
   QDate  selectedDate(QCalendarWidget* theWrappedObject) const;
   Qt::DayOfWeek  firstDayOfWeek(QCalendarWidget* theWrappedObject) const;
   QCalendarWidget::SelectionMode  selectionMode(QCalendarWidget* theWrappedObject) const;
   void setMinimumDate(QCalendarWidget* theWrappedObject, const QDate&  date);
   void setSelectionMode(QCalendarWidget* theWrappedObject, QCalendarWidget::SelectionMode  mode);
   void setDateEditAcceptDelay(QCalendarWidget* theWrappedObject, int  delay);
   bool  isDateEditEnabled(QCalendarWidget* theWrappedObject) const;
   void paintCell(QCalendarWidget* theWrappedObject, QPainter*  painter, const QRect&  rect, const QDate&  date) const;
   bool  isNavigationBarVisible(QCalendarWidget* theWrappedObject) const;
   bool  isGridVisible(QCalendarWidget* theWrappedObject) const;
   QTextCharFormat  weekdayTextFormat(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek) const;
   int  yearShown(QCalendarWidget* theWrappedObject) const;
   QMap<QDate , QTextCharFormat >  dateTextFormat(QCalendarWidget* theWrappedObject) const;
   void setDateTextFormat(QCalendarWidget* theWrappedObject, const QDate&  date, const QTextCharFormat&  format);
   void setVerticalHeaderFormat(QCalendarWidget* theWrappedObject, QCalendarWidget::VerticalHeaderFormat  format);
};

#endif // PYTHONQTWRAPPER_QCALENDARWIDGET_H
