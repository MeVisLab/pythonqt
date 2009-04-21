#ifndef PYTHONQTWRAPPER_QABSTRACTSLIDER_H
#define PYTHONQTWRAPPER_QABSTRACTSLIDER_H

#include <qabstractslider.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractslider.h>
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

class PythonQtShell_QAbstractSlider : public QAbstractSlider
{
public:
    PythonQtShell_QAbstractSlider(QWidget*  parent = 0):QAbstractSlider(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
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
virtual void keyPressEvent(QKeyEvent*  ev);
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
virtual QSize  sizeHint() const;
virtual void sliderChange(QAbstractSlider::SliderChange  change);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractSlider : public QAbstractSlider
{ public:
inline void keyPressEvent(QKeyEvent*  ev) { QAbstractSlider::keyPressEvent(ev); }
inline void changeEvent(QEvent*  e) { QAbstractSlider::changeEvent(e); }
inline bool  event(QEvent*  e) { return QAbstractSlider::event(e); }
inline void wheelEvent(QWheelEvent*  e) { QAbstractSlider::wheelEvent(e); }
inline void timerEvent(QTimerEvent*  arg__1) { QAbstractSlider::timerEvent(arg__1); }
};

class PythonQtWrapper_QAbstractSlider : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SliderAction )
enum SliderAction{
  SliderNoAction = QAbstractSlider::SliderNoAction,   SliderSingleStepAdd = QAbstractSlider::SliderSingleStepAdd,   SliderSingleStepSub = QAbstractSlider::SliderSingleStepSub,   SliderPageStepAdd = QAbstractSlider::SliderPageStepAdd,   SliderPageStepSub = QAbstractSlider::SliderPageStepSub,   SliderToMinimum = QAbstractSlider::SliderToMinimum,   SliderToMaximum = QAbstractSlider::SliderToMaximum,   SliderMove = QAbstractSlider::SliderMove};
public slots:
QAbstractSlider* new_QAbstractSlider(QWidget*  parent = 0);
void delete_QAbstractSlider(QAbstractSlider* obj) { delete obj; } 
   void setInvertedAppearance(QAbstractSlider* theWrappedObject, bool  arg__1);
   int  pageStep(QAbstractSlider* theWrappedObject) const;
   void keyPressEvent(QAbstractSlider* theWrappedObject, QKeyEvent*  ev);
   void setTracking(QAbstractSlider* theWrappedObject, bool  enable);
   void setRange(QAbstractSlider* theWrappedObject, int  min, int  max);
   bool  hasTracking(QAbstractSlider* theWrappedObject) const;
   void setSingleStep(QAbstractSlider* theWrappedObject, int  arg__1);
   void changeEvent(QAbstractSlider* theWrappedObject, QEvent*  e);
   bool  invertedAppearance(QAbstractSlider* theWrappedObject) const;
   bool  event(QAbstractSlider* theWrappedObject, QEvent*  e);
   bool  invertedControls(QAbstractSlider* theWrappedObject) const;
   int  maximum(QAbstractSlider* theWrappedObject) const;
   void setPageStep(QAbstractSlider* theWrappedObject, int  arg__1);
   Qt::Orientation  orientation(QAbstractSlider* theWrappedObject) const;
   void setMinimum(QAbstractSlider* theWrappedObject, int  arg__1);
   void setSliderPosition(QAbstractSlider* theWrappedObject, int  arg__1);
   void setInvertedControls(QAbstractSlider* theWrappedObject, bool  arg__1);
   void wheelEvent(QAbstractSlider* theWrappedObject, QWheelEvent*  e);
   int  minimum(QAbstractSlider* theWrappedObject) const;
   void setMaximum(QAbstractSlider* theWrappedObject, int  arg__1);
   void timerEvent(QAbstractSlider* theWrappedObject, QTimerEvent*  arg__1);
   void setSliderDown(QAbstractSlider* theWrappedObject, bool  arg__1);
   bool  isSliderDown(QAbstractSlider* theWrappedObject) const;
   int  singleStep(QAbstractSlider* theWrappedObject) const;
   void triggerAction(QAbstractSlider* theWrappedObject, QAbstractSlider::SliderAction  action);
   int  value(QAbstractSlider* theWrappedObject) const;
   int  sliderPosition(QAbstractSlider* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QABSTRACTSLIDER_H
