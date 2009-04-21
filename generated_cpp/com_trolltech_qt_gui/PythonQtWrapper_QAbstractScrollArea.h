#ifndef PYTHONQTWRAPPER_QABSTRACTSCROLLAREA_H
#define PYTHONQTWRAPPER_QABSTRACTSCROLLAREA_H

#include <qabstractscrollarea.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractscrollarea.h>
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
#include <qwidget.h>

class PythonQtShell_QAbstractScrollArea : public QAbstractScrollArea
{
public:
    PythonQtShell_QAbstractScrollArea(QWidget*  parent = 0):QAbstractScrollArea(parent),_wrapper(NULL) {};

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
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractScrollArea : public QAbstractScrollArea
{ public:
inline void promoted_dropEvent(QDropEvent*  arg__1) { QAbstractScrollArea::dropEvent(arg__1); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QAbstractScrollArea::scrollContentsBy(dx, dy); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QAbstractScrollArea::dragEnterEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QAbstractScrollArea::wheelEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QAbstractScrollArea::keyPressEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mousePressEvent(arg__1); }
inline bool  promoted_viewportEvent(QEvent*  arg__1) { return QAbstractScrollArea::viewportEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { QAbstractScrollArea::dragMoveEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QAbstractScrollArea::event(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mouseReleaseEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mouseMoveEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QAbstractScrollArea::paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QAbstractScrollArea::resizeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QAbstractScrollArea::contextMenuEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mouseDoubleClickEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QAbstractScrollArea::dragLeaveEvent(arg__1); }
};

class PythonQtWrapper_QAbstractScrollArea : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractScrollArea* new_QAbstractScrollArea(QWidget*  parent = 0);
void delete_QAbstractScrollArea(QAbstractScrollArea* obj) { delete obj; } 
   QSize  sizeHint(QAbstractScrollArea* theWrappedObject) const;
   QSize  minimumSizeHint(QAbstractScrollArea* theWrappedObject) const;
   void setCornerWidget(QAbstractScrollArea* theWrappedObject, QWidget*  widget);
   void dropEvent(QAbstractScrollArea* theWrappedObject, QDropEvent*  arg__1);
   QScrollBar*  verticalScrollBar(QAbstractScrollArea* theWrappedObject) const;
   void setHorizontalScrollBar(QAbstractScrollArea* theWrappedObject, QScrollBar*  scrollbar);
   void setVerticalScrollBarPolicy(QAbstractScrollArea* theWrappedObject, Qt::ScrollBarPolicy  arg__1);
   void setHorizontalScrollBarPolicy(QAbstractScrollArea* theWrappedObject, Qt::ScrollBarPolicy  arg__1);
   Qt::ScrollBarPolicy  verticalScrollBarPolicy(QAbstractScrollArea* theWrappedObject) const;
   QSize  maximumViewportSize(QAbstractScrollArea* theWrappedObject) const;
   void scrollContentsBy(QAbstractScrollArea* theWrappedObject, int  dx, int  dy);
   QScrollBar*  horizontalScrollBar(QAbstractScrollArea* theWrappedObject) const;
   void dragEnterEvent(QAbstractScrollArea* theWrappedObject, QDragEnterEvent*  arg__1);
   void wheelEvent(QAbstractScrollArea* theWrappedObject, QWheelEvent*  arg__1);
   QWidget*  cornerWidget(QAbstractScrollArea* theWrappedObject) const;
   void keyPressEvent(QAbstractScrollArea* theWrappedObject, QKeyEvent*  arg__1);
   void mousePressEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1);
   bool  viewportEvent(QAbstractScrollArea* theWrappedObject, QEvent*  arg__1);
   void dragMoveEvent(QAbstractScrollArea* theWrappedObject, QDragMoveEvent*  arg__1);
   bool  event(QAbstractScrollArea* theWrappedObject, QEvent*  arg__1);
   QList<QWidget* >  scrollBarWidgets(QAbstractScrollArea* theWrappedObject, Qt::Alignment  alignment);
   void mouseReleaseEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1);
   void mouseMoveEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1);
   void paintEvent(QAbstractScrollArea* theWrappedObject, QPaintEvent*  arg__1);
   void resizeEvent(QAbstractScrollArea* theWrappedObject, QResizeEvent*  arg__1);
   void setVerticalScrollBar(QAbstractScrollArea* theWrappedObject, QScrollBar*  scrollbar);
   void contextMenuEvent(QAbstractScrollArea* theWrappedObject, QContextMenuEvent*  arg__1);
   void mouseDoubleClickEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1);
   QWidget*  viewport(QAbstractScrollArea* theWrappedObject) const;
   void setViewport(QAbstractScrollArea* theWrappedObject, QWidget*  widget);
   void addScrollBarWidget(QAbstractScrollArea* theWrappedObject, QWidget*  widget, Qt::Alignment  alignment);
   Qt::ScrollBarPolicy  horizontalScrollBarPolicy(QAbstractScrollArea* theWrappedObject) const;
   void dragLeaveEvent(QAbstractScrollArea* theWrappedObject, QDragLeaveEvent*  arg__1);
};

#endif // PYTHONQTWRAPPER_QABSTRACTSCROLLAREA_H
