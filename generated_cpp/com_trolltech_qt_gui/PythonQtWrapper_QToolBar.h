#ifndef PYTHONQTWRAPPER_QTOOLBAR_H
#define PYTHONQTWRAPPER_QTOOLBAR_H

#include <qtoolbar.h>
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
#include <qtoolbar.h>
#include <qwidget.h>

class PythonQtShell_QToolBar : public QToolBar
{
public:
    PythonQtShell_QToolBar(QWidget*  parent = 0):QToolBar(parent),_wrapper(NULL) {};
    PythonQtShell_QToolBar(const QString&  title, QWidget*  parent = 0):QToolBar(title, parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
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
virtual void paintEvent(QPaintEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QToolBar : public QToolBar
{ public:
inline void resizeEvent(QResizeEvent*  event) { QToolBar::resizeEvent(event); }
inline void changeEvent(QEvent*  event) { QToolBar::changeEvent(event); }
inline void actionEvent(QActionEvent*  event) { QToolBar::actionEvent(event); }
inline bool  event(QEvent*  event) { return QToolBar::event(event); }
inline void paintEvent(QPaintEvent*  event) { QToolBar::paintEvent(event); }
inline void childEvent(QChildEvent*  event) { QToolBar::childEvent(event); }
};

class PythonQtWrapper_QToolBar : public QObject
{ Q_OBJECT
public:
public slots:
QToolBar* new_QToolBar(QWidget*  parent = 0);
QToolBar* new_QToolBar(const QString&  title, QWidget*  parent = 0);
void delete_QToolBar(QToolBar* obj) { delete obj; } 
   void setFloatable(QToolBar* theWrappedObject, bool  floatable);
   void resizeEvent(QToolBar* theWrappedObject, QResizeEvent*  event);
   QAction*  toggleViewAction(QToolBar* theWrappedObject) const;
   void setOrientation(QToolBar* theWrappedObject, Qt::Orientation  orientation);
   QAction*  insertWidget(QToolBar* theWrappedObject, QAction*  before, QWidget*  widget);
   void clear(QToolBar* theWrappedObject);
   bool  isAreaAllowed(QToolBar* theWrappedObject, Qt::ToolBarArea  area) const;
   Qt::ToolButtonStyle  toolButtonStyle(QToolBar* theWrappedObject) const;
   bool  isFloating(QToolBar* theWrappedObject) const;
   QRect  actionGeometry(QToolBar* theWrappedObject, QAction*  action) const;
   Qt::Orientation  orientation(QToolBar* theWrappedObject) const;
   void changeEvent(QToolBar* theWrappedObject, QEvent*  event);
   QAction*  addWidget(QToolBar* theWrappedObject, QWidget*  widget);
   QAction*  actionAt(QToolBar* theWrappedObject, int  x, int  y) const;
   Qt::ToolBarAreas  allowedAreas(QToolBar* theWrappedObject) const;
   void actionEvent(QToolBar* theWrappedObject, QActionEvent*  event);
   bool  event(QToolBar* theWrappedObject, QEvent*  event);
   void paintEvent(QToolBar* theWrappedObject, QPaintEvent*  event);
   QWidget*  widgetForAction(QToolBar* theWrappedObject, QAction*  action) const;
   QAction*  actionAt(QToolBar* theWrappedObject, const QPoint&  p) const;
   void setMovable(QToolBar* theWrappedObject, bool  movable);
   QSize  iconSize(QToolBar* theWrappedObject) const;
   QAction*  insertSeparator(QToolBar* theWrappedObject, QAction*  before);
   bool  isMovable(QToolBar* theWrappedObject) const;
   QAction*  addAction(QToolBar* theWrappedObject, const QString&  text);
   void childEvent(QToolBar* theWrappedObject, QChildEvent*  event);
   QAction*  addSeparator(QToolBar* theWrappedObject);
   bool  isFloatable(QToolBar* theWrappedObject) const;
   QAction*  addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text);
   void setAllowedAreas(QToolBar* theWrappedObject, Qt::ToolBarAreas  areas);
};

#endif // PYTHONQTWRAPPER_QTOOLBAR_H
