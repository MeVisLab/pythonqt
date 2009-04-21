#ifndef PYTHONQTWRAPPER_QSPLITTERHANDLE_H
#define PYTHONQTWRAPPER_QSPLITTERHANDLE_H

#include <qsplitter.h>
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
#include <qsplitter.h>
#include <qstyle.h>
#include <qwidget.h>

class PythonQtShell_QSplitterHandle : public QSplitterHandle
{
public:
    PythonQtShell_QSplitterHandle(Qt::Orientation  o, QSplitter*  parent):QSplitterHandle(o, parent),_wrapper(NULL) {};

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
virtual bool  event(QEvent*  arg__1);
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

class PythonQtPublicPromoter_QSplitterHandle : public QSplitterHandle
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QSplitterHandle::event(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QSplitterHandle::paintEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QSplitterHandle::mouseReleaseEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QSplitterHandle::mousePressEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QSplitterHandle::mouseMoveEvent(arg__1); }
};

class PythonQtWrapper_QSplitterHandle : public QObject
{ Q_OBJECT
public:
public slots:
QSplitterHandle* new_QSplitterHandle(Qt::Orientation  o, QSplitter*  parent);
void delete_QSplitterHandle(QSplitterHandle* obj) { delete obj; } 
   QSplitter*  splitter(QSplitterHandle* theWrappedObject) const;
   void setOrientation(QSplitterHandle* theWrappedObject, Qt::Orientation  o);
   bool  event(QSplitterHandle* theWrappedObject, QEvent*  arg__1);
   Qt::Orientation  orientation(QSplitterHandle* theWrappedObject) const;
   QSize  sizeHint(QSplitterHandle* theWrappedObject) const;
   void paintEvent(QSplitterHandle* theWrappedObject, QPaintEvent*  arg__1);
   void mouseReleaseEvent(QSplitterHandle* theWrappedObject, QMouseEvent*  arg__1);
   void mousePressEvent(QSplitterHandle* theWrappedObject, QMouseEvent*  arg__1);
   bool  opaqueResize(QSplitterHandle* theWrappedObject) const;
   void mouseMoveEvent(QSplitterHandle* theWrappedObject, QMouseEvent*  arg__1);
};

#endif // PYTHONQTWRAPPER_QSPLITTERHANDLE_H
