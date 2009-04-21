#ifndef PYTHONQTWRAPPER_QLCDNUMBER_H
#define PYTHONQTWRAPPER_QLCDNUMBER_H

#include <qlcdnumber.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlcdnumber.h>
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
#include <qwidget.h>

class PythonQtShell_QLCDNumber : public QLCDNumber
{
public:
    PythonQtShell_QLCDNumber(QWidget*  parent = 0):QLCDNumber(parent),_wrapper(NULL) {};
    PythonQtShell_QLCDNumber(uint  numDigits, QWidget*  parent = 0):QLCDNumber(numDigits, parent),_wrapper(NULL) {};

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
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

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
   QLCDNumber::SegmentStyle  segmentStyle(QLCDNumber* theWrappedObject) const;
   void setSegmentStyle(QLCDNumber* theWrappedObject, QLCDNumber::SegmentStyle  arg__1);
   bool  checkOverflow(QLCDNumber* theWrappedObject, double  num) const;
   QSize  sizeHint(QLCDNumber* theWrappedObject) const;
   bool  checkOverflow(QLCDNumber* theWrappedObject, int  num) const;
   void setNumDigits(QLCDNumber* theWrappedObject, int  nDigits);
   bool  event(QLCDNumber* theWrappedObject, QEvent*  e);
   bool  smallDecimalPoint(QLCDNumber* theWrappedObject) const;
   QLCDNumber::Mode  mode(QLCDNumber* theWrappedObject) const;
   void paintEvent(QLCDNumber* theWrappedObject, QPaintEvent*  arg__1);
   double  value(QLCDNumber* theWrappedObject) const;
   int  intValue(QLCDNumber* theWrappedObject) const;
   int  numDigits(QLCDNumber* theWrappedObject) const;
   void setMode(QLCDNumber* theWrappedObject, QLCDNumber::Mode  arg__1);
};

#endif // PYTHONQTWRAPPER_QLCDNUMBER_H
