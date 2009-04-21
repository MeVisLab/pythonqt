#ifndef PYTHONQTWRAPPER_QSCROLLBAR_H
#define PYTHONQTWRAPPER_QSCROLLBAR_H

#include <qscrollbar.h>
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
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QScrollBar : public QScrollBar
{
public:
    PythonQtShell_QScrollBar(QWidget*  parent = 0):QScrollBar(parent),_wrapper(NULL) {};
    PythonQtShell_QScrollBar(Qt::Orientation  arg__1, QWidget*  parent = 0):QScrollBar(arg__1, parent),_wrapper(NULL) {};

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
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QScrollBar : public QScrollBar
{ public:
inline bool  promoted_event(QEvent*  event) { return QScrollBar::event(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QScrollBar::mouseMoveEvent(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QScrollBar::hideEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QScrollBar::mousePressEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QScrollBar::paintEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QScrollBar::mouseReleaseEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QScrollBar::contextMenuEvent(arg__1); }
};

class PythonQtWrapper_QScrollBar : public QObject
{ Q_OBJECT
public:
public slots:
QScrollBar* new_QScrollBar(QWidget*  parent = 0);
QScrollBar* new_QScrollBar(Qt::Orientation  arg__1, QWidget*  parent = 0);
void delete_QScrollBar(QScrollBar* obj) { delete obj; } 
   bool  event(QScrollBar* theWrappedObject, QEvent*  event);
   void mouseMoveEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1);
   void hideEvent(QScrollBar* theWrappedObject, QHideEvent*  arg__1);
   QSize  sizeHint(QScrollBar* theWrappedObject) const;
   void mousePressEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1);
   void paintEvent(QScrollBar* theWrappedObject, QPaintEvent*  arg__1);
   void mouseReleaseEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1);
   void contextMenuEvent(QScrollBar* theWrappedObject, QContextMenuEvent*  arg__1);
};

#endif // PYTHONQTWRAPPER_QSCROLLBAR_H
