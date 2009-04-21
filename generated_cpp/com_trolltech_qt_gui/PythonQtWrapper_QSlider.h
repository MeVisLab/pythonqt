#ifndef PYTHONQTWRAPPER_QSLIDER_H
#define PYTHONQTWRAPPER_QSLIDER_H

#include <qslider.h>
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
#include <qslider.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QSlider : public QSlider
{
public:
    PythonQtShell_QSlider(QWidget*  parent = 0):QSlider(parent),_wrapper(NULL) {};
    PythonQtShell_QSlider(Qt::Orientation  orientation, QWidget*  parent = 0):QSlider(orientation, parent),_wrapper(NULL) {};

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
virtual bool  event(QEvent*  event);
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
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  ev);
virtual void mousePressEvent(QMouseEvent*  ev);
virtual void mouseReleaseEvent(QMouseEvent*  ev);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  ev);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSlider : public QSlider
{ public:
inline void promoted_paintEvent(QPaintEvent*  ev) { QSlider::paintEvent(ev); }
inline bool  promoted_event(QEvent*  event) { return QSlider::event(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  ev) { QSlider::mouseReleaseEvent(ev); }
inline void promoted_mousePressEvent(QMouseEvent*  ev) { QSlider::mousePressEvent(ev); }
inline void promoted_mouseMoveEvent(QMouseEvent*  ev) { QSlider::mouseMoveEvent(ev); }
};

class PythonQtWrapper_QSlider : public QObject
{ Q_OBJECT
public:
public slots:
QSlider* new_QSlider(QWidget*  parent = 0);
QSlider* new_QSlider(Qt::Orientation  orientation, QWidget*  parent = 0);
void delete_QSlider(QSlider* obj) { delete obj; } 
   void setTickInterval(QSlider* theWrappedObject, int  ti);
   void paintEvent(QSlider* theWrappedObject, QPaintEvent*  ev);
   void setTickPosition(QSlider* theWrappedObject, QSlider::TickPosition  position);
   int  tickInterval(QSlider* theWrappedObject) const;
   QSize  sizeHint(QSlider* theWrappedObject) const;
   QSlider::TickPosition  tickPosition(QSlider* theWrappedObject) const;
   bool  event(QSlider* theWrappedObject, QEvent*  event);
   void mouseReleaseEvent(QSlider* theWrappedObject, QMouseEvent*  ev);
   void mousePressEvent(QSlider* theWrappedObject, QMouseEvent*  ev);
   QSize  minimumSizeHint(QSlider* theWrappedObject) const;
   void mouseMoveEvent(QSlider* theWrappedObject, QMouseEvent*  ev);
};

#endif // PYTHONQTWRAPPER_QSLIDER_H
