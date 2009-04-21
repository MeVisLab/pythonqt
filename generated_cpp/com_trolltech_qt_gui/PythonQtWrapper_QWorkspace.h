#ifndef PYTHONQTWRAPPER_QWORKSPACE_H
#define PYTHONQTWRAPPER_QWORKSPACE_H

#include <qworkspace.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
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
#include <qworkspace.h>

class PythonQtShell_QWorkspace : public QWorkspace
{
public:
    PythonQtShell_QWorkspace(QWidget*  parent = 0):QWorkspace(parent),_wrapper(NULL) {};

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
virtual void hideEvent(QHideEvent*  e);
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
virtual void paintEvent(QPaintEvent*  e);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  e);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWorkspace : public QWorkspace
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { QWorkspace::changeEvent(arg__1); }
inline void promoted_hideEvent(QHideEvent*  e) { QWorkspace::hideEvent(e); }
inline void promoted_showEvent(QShowEvent*  e) { QWorkspace::showEvent(e); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QWorkspace::eventFilter(arg__1, arg__2); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QWorkspace::resizeEvent(arg__1); }
inline void promoted_childEvent(QChildEvent*  arg__1) { QWorkspace::childEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QWorkspace::wheelEvent(e); }
inline bool  promoted_event(QEvent*  e) { return QWorkspace::event(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { QWorkspace::paintEvent(e); }
};

class PythonQtWrapper_QWorkspace : public QObject
{ Q_OBJECT
public:
Q_ENUMS(WindowOrder )
enum WindowOrder{
  CreationOrder = QWorkspace::CreationOrder,   StackingOrder = QWorkspace::StackingOrder};
public slots:
QWorkspace* new_QWorkspace(QWidget*  parent = 0);
void delete_QWorkspace(QWorkspace* obj) { delete obj; } 
   void setBackground(QWorkspace* theWrappedObject, const QBrush&  background);
   void changeEvent(QWorkspace* theWrappedObject, QEvent*  arg__1);
   QBrush  background(QWorkspace* theWrappedObject) const;
   void hideEvent(QWorkspace* theWrappedObject, QHideEvent*  e);
   void showEvent(QWorkspace* theWrappedObject, QShowEvent*  e);
   void setScrollBarsEnabled(QWorkspace* theWrappedObject, bool  enable);
   bool  eventFilter(QWorkspace* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void resizeEvent(QWorkspace* theWrappedObject, QResizeEvent*  arg__1);
   QWidget*  activeWindow(QWorkspace* theWrappedObject) const;
   QList<QWidget* >  windowList(QWorkspace* theWrappedObject, QWorkspace::WindowOrder  order = QWorkspace::CreationOrder) const;
   bool  scrollBarsEnabled(QWorkspace* theWrappedObject) const;
   void childEvent(QWorkspace* theWrappedObject, QChildEvent*  arg__1);
   void wheelEvent(QWorkspace* theWrappedObject, QWheelEvent*  e);
   bool  event(QWorkspace* theWrappedObject, QEvent*  e);
   QWidget*  addWindow(QWorkspace* theWrappedObject, QWidget*  w, Qt::WindowFlags  flags = 0);
   QSize  sizeHint(QWorkspace* theWrappedObject) const;
   void paintEvent(QWorkspace* theWrappedObject, QPaintEvent*  e);
};

#endif // PYTHONQTWRAPPER_QWORKSPACE_H
