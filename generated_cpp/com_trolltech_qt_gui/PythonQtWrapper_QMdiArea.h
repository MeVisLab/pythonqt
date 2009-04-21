#ifndef PYTHONQTWRAPPER_QMDIAREA_H
#define PYTHONQTWRAPPER_QMDIAREA_H

#include <qmdiarea.h>
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
#include <qmdiarea.h>
#include <qmdisubwindow.h>
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

class PythonQtShell_QMdiArea : public QMdiArea
{
public:
    PythonQtShell_QMdiArea(QWidget*  parent = 0):QMdiArea(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  childEvent);
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
virtual bool  eventFilter(QObject*  object, QEvent*  event);
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
virtual void paintEvent(QPaintEvent*  paintEvent);
virtual void resizeEvent(QResizeEvent*  resizeEvent);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void showEvent(QShowEvent*  showEvent);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  timerEvent);
virtual bool  viewportEvent(QEvent*  event);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMdiArea : public QMdiArea
{ public:
inline bool  viewportEvent(QEvent*  event) { return QMdiArea::viewportEvent(event); }
inline void timerEvent(QTimerEvent*  timerEvent) { QMdiArea::timerEvent(timerEvent); }
inline void paintEvent(QPaintEvent*  paintEvent) { QMdiArea::paintEvent(paintEvent); }
inline void scrollContentsBy(int  dx, int  dy) { QMdiArea::scrollContentsBy(dx, dy); }
inline void childEvent(QChildEvent*  childEvent) { QMdiArea::childEvent(childEvent); }
inline bool  event(QEvent*  event) { return QMdiArea::event(event); }
inline bool  eventFilter(QObject*  object, QEvent*  event) { return QMdiArea::eventFilter(object, event); }
inline void showEvent(QShowEvent*  showEvent) { QMdiArea::showEvent(showEvent); }
inline void resizeEvent(QResizeEvent*  resizeEvent) { QMdiArea::resizeEvent(resizeEvent); }
};

class PythonQtWrapper_QMdiArea : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AreaOption )
enum AreaOption{
  DontMaximizeSubWindowOnActivation = QMdiArea::DontMaximizeSubWindowOnActivation};
public slots:
QMdiArea* new_QMdiArea(QWidget*  parent = 0);
void delete_QMdiArea(QMdiArea* obj) { delete obj; } 
   bool  viewportEvent(QMdiArea* theWrappedObject, QEvent*  event);
   QMdiArea::ViewMode  viewMode(QMdiArea* theWrappedObject) const;
   QTabWidget::TabPosition  tabPosition(QMdiArea* theWrappedObject) const;
   bool  testOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  opton) const;
   void timerEvent(QMdiArea* theWrappedObject, QTimerEvent*  timerEvent);
   QMdiArea::WindowOrder  activationOrder(QMdiArea* theWrappedObject) const;
   void paintEvent(QMdiArea* theWrappedObject, QPaintEvent*  paintEvent);
   void setViewMode(QMdiArea* theWrappedObject, QMdiArea::ViewMode  mode);
   void scrollContentsBy(QMdiArea* theWrappedObject, int  dx, int  dy);
   QTabWidget::TabShape  tabShape(QMdiArea* theWrappedObject) const;
   QSize  sizeHint(QMdiArea* theWrappedObject) const;
   void setActivationOrder(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order);
   QBrush  background(QMdiArea* theWrappedObject) const;
   QMdiSubWindow*  addSubWindow(QMdiArea* theWrappedObject, QWidget*  widget, Qt::WindowFlags  flags = 0);
   void setBackground(QMdiArea* theWrappedObject, const QBrush&  background);
   void childEvent(QMdiArea* theWrappedObject, QChildEvent*  childEvent);
   void removeSubWindow(QMdiArea* theWrappedObject, QWidget*  widget);
   QMdiSubWindow*  currentSubWindow(QMdiArea* theWrappedObject) const;
   QSize  minimumSizeHint(QMdiArea* theWrappedObject) const;
   void setTabPosition(QMdiArea* theWrappedObject, QTabWidget::TabPosition  position);
   QList<QMdiSubWindow* >  subWindowList(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order = QMdiArea::CreationOrder) const;
   void setTabShape(QMdiArea* theWrappedObject, QTabWidget::TabShape  shape);
   bool  event(QMdiArea* theWrappedObject, QEvent*  event);
   bool  eventFilter(QMdiArea* theWrappedObject, QObject*  object, QEvent*  event);
   void showEvent(QMdiArea* theWrappedObject, QShowEvent*  showEvent);
   QMdiSubWindow*  activeSubWindow(QMdiArea* theWrappedObject) const;
   void setOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  option, bool  on = true);
   void resizeEvent(QMdiArea* theWrappedObject, QResizeEvent*  resizeEvent);
};

#endif // PYTHONQTWRAPPER_QMDIAREA_H
