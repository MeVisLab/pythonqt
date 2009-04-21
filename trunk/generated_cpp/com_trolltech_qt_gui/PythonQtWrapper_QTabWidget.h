#ifndef PYTHONQTWRAPPER_QTABWIDGET_H
#define PYTHONQTWRAPPER_QTABWIDGET_H

#include <qtabwidget.h>
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
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtabbar.h>
#include <qtabwidget.h>
#include <qwidget.h>

class PythonQtShell_QTabWidget : public QTabWidget
{
public:
    PythonQtShell_QTabWidget(QWidget*  parent = 0):QTabWidget(parent),_wrapper(NULL) {};

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
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabInserted(int  index);
virtual void tabRemoved(int  index);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTabWidget : public QTabWidget
{ public:
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QTabWidget::paintEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QTabWidget::keyPressEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QTabWidget::event(arg__1); }
inline void promoted_tabRemoved(int  index) { QTabWidget::tabRemoved(index); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QTabWidget::resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QTabWidget::showEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QTabWidget::changeEvent(arg__1); }
inline void promoted_tabInserted(int  index) { QTabWidget::tabInserted(index); }
};

class PythonQtWrapper_QTabWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTabWidget* new_QTabWidget(QWidget*  parent = 0);
void delete_QTabWidget(QTabWidget* obj) { delete obj; } 
   void paintEvent(QTabWidget* theWrappedObject, QPaintEvent*  arg__1);
   QTabWidget::TabShape  tabShape(QTabWidget* theWrappedObject) const;
   QSize  sizeHint(QTabWidget* theWrappedObject) const;
   QString  tabText(QTabWidget* theWrappedObject, int  index) const;
   int  insertTab(QTabWidget* theWrappedObject, int  index, QWidget*  widget, const QIcon&  icon, const QString&  label);
   QTabWidget::TabPosition  tabPosition(QTabWidget* theWrappedObject) const;
   void keyPressEvent(QTabWidget* theWrappedObject, QKeyEvent*  arg__1);
   bool  isTabEnabled(QTabWidget* theWrappedObject, int  index) const;
   bool  event(QTabWidget* theWrappedObject, QEvent*  arg__1);
   int  indexOf(QTabWidget* theWrappedObject, QWidget*  widget) const;
   QWidget*  cornerWidget(QTabWidget* theWrappedObject, Qt::Corner  corner = Qt::TopRightCorner) const;
   void tabRemoved(QTabWidget* theWrappedObject, int  index);
   int  addTab(QTabWidget* theWrappedObject, QWidget*  widget, const QIcon&  icon, const QString&  label);
   void clear(QTabWidget* theWrappedObject);
   QIcon  tabIcon(QTabWidget* theWrappedObject, int  index) const;
   QSize  minimumSizeHint(QTabWidget* theWrappedObject) const;
   QString  tabWhatsThis(QTabWidget* theWrappedObject, int  index) const;
   void setCornerWidget(QTabWidget* theWrappedObject, QWidget*  w, Qt::Corner  corner = Qt::TopRightCorner);
   void setTabShape(QTabWidget* theWrappedObject, QTabWidget::TabShape  s);
   void setUsesScrollButtons(QTabWidget* theWrappedObject, bool  useButtons);
   QString  tabToolTip(QTabWidget* theWrappedObject, int  index) const;
   void setTabEnabled(QTabWidget* theWrappedObject, int  index, bool  arg__2);
   void setIconSize(QTabWidget* theWrappedObject, const QSize&  size);
   QSize  iconSize(QTabWidget* theWrappedObject) const;
   void setTabWhatsThis(QTabWidget* theWrappedObject, int  index, const QString&  text);
   void resizeEvent(QTabWidget* theWrappedObject, QResizeEvent*  arg__1);
   void showEvent(QTabWidget* theWrappedObject, QShowEvent*  arg__1);
   QWidget*  widget(QTabWidget* theWrappedObject, int  index) const;
   void setTabToolTip(QTabWidget* theWrappedObject, int  index, const QString&  tip);
   void setTabText(QTabWidget* theWrappedObject, int  index, const QString&  arg__2);
   int  insertTab(QTabWidget* theWrappedObject, int  index, QWidget*  widget, const QString&  arg__3);
   bool  usesScrollButtons(QTabWidget* theWrappedObject) const;
   int  currentIndex(QTabWidget* theWrappedObject) const;
   Qt::TextElideMode  elideMode(QTabWidget* theWrappedObject) const;
   void changeEvent(QTabWidget* theWrappedObject, QEvent*  arg__1);
   void removeTab(QTabWidget* theWrappedObject, int  index);
   void tabInserted(QTabWidget* theWrappedObject, int  index);
   QWidget*  currentWidget(QTabWidget* theWrappedObject) const;
   void setElideMode(QTabWidget* theWrappedObject, Qt::TextElideMode  arg__1);
   int  addTab(QTabWidget* theWrappedObject, QWidget*  widget, const QString&  arg__2);
   void setTabIcon(QTabWidget* theWrappedObject, int  index, const QIcon&  icon);
   void setTabPosition(QTabWidget* theWrappedObject, QTabWidget::TabPosition  arg__1);
   int  count(QTabWidget* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTABWIDGET_H
