#ifndef PYTHONQTWRAPPER_QDIAL_H
#define PYTHONQTWRAPPER_QDIAL_H

#include <qdial.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdial.h>
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
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QDial : public QDial
{
public:
    PythonQtShell_QDial(QWidget*  parent = 0):QDial(parent),_wrapper(NULL) {};

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
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  me);
virtual void mousePressEvent(QMouseEvent*  me);
virtual void mouseReleaseEvent(QMouseEvent*  me);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  pe);
virtual void resizeEvent(QResizeEvent*  re);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDial : public QDial
{ public:
inline void promoted_mouseReleaseEvent(QMouseEvent*  me) { QDial::mouseReleaseEvent(me); }
inline bool  promoted_event(QEvent*  e) { return QDial::event(e); }
inline void promoted_mousePressEvent(QMouseEvent*  me) { QDial::mousePressEvent(me); }
inline void promoted_resizeEvent(QResizeEvent*  re) { QDial::resizeEvent(re); }
inline void promoted_mouseMoveEvent(QMouseEvent*  me) { QDial::mouseMoveEvent(me); }
inline void promoted_paintEvent(QPaintEvent*  pe) { QDial::paintEvent(pe); }
};

class PythonQtWrapper_QDial : public QObject
{ Q_OBJECT
public:
public slots:
QDial* new_QDial(QWidget*  parent = 0);
void delete_QDial(QDial* obj) { delete obj; } 
   QSize  minimumSizeHint(QDial* theWrappedObject) const;
   int  notchSize(QDial* theWrappedObject) const;
   void mouseReleaseEvent(QDial* theWrappedObject, QMouseEvent*  me);
   bool  event(QDial* theWrappedObject, QEvent*  e);
   void mousePressEvent(QDial* theWrappedObject, QMouseEvent*  me);
   void resizeEvent(QDial* theWrappedObject, QResizeEvent*  re);
   void setNotchTarget(QDial* theWrappedObject, double  target);
   bool  notchesVisible(QDial* theWrappedObject) const;
   QSize  sizeHint(QDial* theWrappedObject) const;
   qreal  notchTarget(QDial* theWrappedObject) const;
   void mouseMoveEvent(QDial* theWrappedObject, QMouseEvent*  me);
   bool  wrapping(QDial* theWrappedObject) const;
   void paintEvent(QDial* theWrappedObject, QPaintEvent*  pe);
};

#endif // PYTHONQTWRAPPER_QDIAL_H
