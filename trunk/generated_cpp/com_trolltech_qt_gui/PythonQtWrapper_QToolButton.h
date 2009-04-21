#ifndef PYTHONQTWRAPPER_QTOOLBUTTON_H
#define PYTHONQTWRAPPER_QTOOLBUTTON_H

#include <qtoolbutton.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbuttongroup.h>
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
#include <qmenu.h>
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
#include <qtoolbutton.h>
#include <qwidget.h>

class PythonQtShell_QToolButton : public QToolButton
{
public:
    PythonQtShell_QToolButton(QWidget*  parent = 0):QToolButton(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void checkStateSet();
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
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual bool  hitButton(const QPoint&  pos) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void nextCheckState();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QToolButton : public QToolButton
{ public:
inline void promoted_nextCheckState() { QToolButton::nextCheckState(); }
inline void promoted_enterEvent(QEvent*  arg__1) { QToolButton::enterEvent(arg__1); }
inline bool  promoted_event(QEvent*  e) { return QToolButton::event(e); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QToolButton::timerEvent(arg__1); }
inline bool  promoted_hitButton(const QPoint&  pos) const { return QToolButton::hitButton(pos); }
inline void promoted_actionEvent(QActionEvent*  arg__1) { QToolButton::actionEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QToolButton::paintEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QToolButton::changeEvent(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QToolButton::leaveEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QToolButton::mouseReleaseEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QToolButton::mousePressEvent(arg__1); }
};

class PythonQtWrapper_QToolButton : public QObject
{ Q_OBJECT
public:
public slots:
QToolButton* new_QToolButton(QWidget*  parent = 0);
void delete_QToolButton(QToolButton* obj) { delete obj; } 
   QSize  sizeHint(QToolButton* theWrappedObject) const;
   void nextCheckState(QToolButton* theWrappedObject);
   void enterEvent(QToolButton* theWrappedObject, QEvent*  arg__1);
   bool  event(QToolButton* theWrappedObject, QEvent*  e);
   QAction*  defaultAction(QToolButton* theWrappedObject) const;
   QSize  minimumSizeHint(QToolButton* theWrappedObject) const;
   void timerEvent(QToolButton* theWrappedObject, QTimerEvent*  arg__1);
   void setPopupMode(QToolButton* theWrappedObject, QToolButton::ToolButtonPopupMode  mode);
   bool  hitButton(QToolButton* theWrappedObject, const QPoint&  pos) const;
   QToolButton::ToolButtonPopupMode  popupMode(QToolButton* theWrappedObject) const;
   void actionEvent(QToolButton* theWrappedObject, QActionEvent*  arg__1);
   void paintEvent(QToolButton* theWrappedObject, QPaintEvent*  arg__1);
   void setAutoRaise(QToolButton* theWrappedObject, bool  enable);
   void setArrowType(QToolButton* theWrappedObject, Qt::ArrowType  type);
   void changeEvent(QToolButton* theWrappedObject, QEvent*  arg__1);
   Qt::ToolButtonStyle  toolButtonStyle(QToolButton* theWrappedObject) const;
   QMenu*  menu(QToolButton* theWrappedObject) const;
   void setMenu(QToolButton* theWrappedObject, QMenu*  menu);
   Qt::ArrowType  arrowType(QToolButton* theWrappedObject) const;
   void leaveEvent(QToolButton* theWrappedObject, QEvent*  arg__1);
   void mouseReleaseEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1);
   bool  autoRaise(QToolButton* theWrappedObject) const;
   void mousePressEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1);
};

#endif // PYTHONQTWRAPPER_QTOOLBUTTON_H
