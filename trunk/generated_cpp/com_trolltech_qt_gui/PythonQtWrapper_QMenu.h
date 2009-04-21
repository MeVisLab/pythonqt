#ifndef PYTHONQTWRAPPER_QMENU_H
#define PYTHONQTWRAPPER_QMENU_H

#include <qmenu.h>
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
#include <qwidget.h>

class PythonQtShell_QMenu : public QMenu
{
public:
    PythonQtShell_QMenu(QWidget*  parent = 0):QMenu(parent),_wrapper(NULL) {};
    PythonQtShell_QMenu(const QString&  title, QWidget*  parent = 0):QMenu(title, parent),_wrapper(NULL) {};

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

class PythonQtPublicPromoter_QMenu : public QMenu
{ public:
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QMenu::mouseReleaseEvent(arg__1); }
inline void promoted_enterEvent(QEvent*  arg__1) { QMenu::enterEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QMenu::timerEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QMenu::changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QMenu::event(arg__1); }
inline void promoted_actionEvent(QActionEvent*  arg__1) { QMenu::actionEvent(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QMenu::leaveEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QMenu::wheelEvent(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QMenu::hideEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QMenu::mouseMoveEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QMenu::paintEvent(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QMenu::focusNextPrevChild(next); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QMenu::keyPressEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QMenu::mousePressEvent(arg__1); }
};

class PythonQtWrapper_QMenu : public QObject
{ Q_OBJECT
public:
public slots:
QMenu* new_QMenu(QWidget*  parent = 0);
QMenu* new_QMenu(const QString&  title, QWidget*  parent = 0);
void delete_QMenu(QMenu* obj) { delete obj; } 
   void mouseReleaseEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1);
   void enterEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   QAction*  static_QMenu_exec(QList<QAction* >  actions, const QPoint&  pos, QAction*  at = 0);
   void timerEvent(QMenu* theWrappedObject, QTimerEvent*  arg__1);
   bool  isEmpty(QMenu* theWrappedObject) const;
   QAction*  defaultAction(QMenu* theWrappedObject) const;
   void changeEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   void hideTearOffMenu(QMenu* theWrappedObject);
   QAction*  exec(QMenu* theWrappedObject);
   QMenu*  addMenu(QMenu* theWrappedObject, const QString&  title);
   bool  event(QMenu* theWrappedObject, QEvent*  arg__1);
   QAction*  activeAction(QMenu* theWrappedObject) const;
   void actionEvent(QMenu* theWrappedObject, QActionEvent*  arg__1);
   QAction*  insertMenu(QMenu* theWrappedObject, QAction*  before, QMenu*  menu);
   QAction*  menuAction(QMenu* theWrappedObject) const;
   void setTearOffEnabled(QMenu* theWrappedObject, bool  arg__1);
   void setDefaultAction(QMenu* theWrappedObject, QAction*  arg__1);
   void clear(QMenu* theWrappedObject);
   void leaveEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   QAction*  actionAt(QMenu* theWrappedObject, const QPoint&  arg__1) const;
   QAction*  addMenu(QMenu* theWrappedObject, QMenu*  menu);
   void wheelEvent(QMenu* theWrappedObject, QWheelEvent*  arg__1);
   bool  separatorsCollapsible(QMenu* theWrappedObject) const;
   void hideEvent(QMenu* theWrappedObject, QHideEvent*  arg__1);
   void mouseMoveEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1);
   void paintEvent(QMenu* theWrappedObject, QPaintEvent*  arg__1);
   bool  isTearOffMenuVisible(QMenu* theWrappedObject) const;
   QMenu*  addMenu(QMenu* theWrappedObject, const QIcon&  icon, const QString&  title);
   QString  title(QMenu* theWrappedObject) const;
   void setActiveAction(QMenu* theWrappedObject, QAction*  act);
   QIcon  icon(QMenu* theWrappedObject) const;
   QAction*  addSeparator(QMenu* theWrappedObject);
   QSize  sizeHint(QMenu* theWrappedObject) const;
   QAction*  addAction(QMenu* theWrappedObject, const QString&  text);
   QRect  actionGeometry(QMenu* theWrappedObject, QAction*  arg__1) const;
   bool  focusNextPrevChild(QMenu* theWrappedObject, bool  next);
   void setSeparatorsCollapsible(QMenu* theWrappedObject, bool  collapse);
   QAction*  exec(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at = 0);
   QAction*  addAction(QMenu* theWrappedObject, const QIcon&  icon, const QString&  text);
   void popup(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at = 0);
   void setTitle(QMenu* theWrappedObject, const QString&  title);
   void keyPressEvent(QMenu* theWrappedObject, QKeyEvent*  arg__1);
   QAction*  insertSeparator(QMenu* theWrappedObject, QAction*  before);
   void setIcon(QMenu* theWrappedObject, const QIcon&  icon);
   bool  isTearOffEnabled(QMenu* theWrappedObject) const;
   void mousePressEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1);
};

#endif // PYTHONQTWRAPPER_QMENU_H
