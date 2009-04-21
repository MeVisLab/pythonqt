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
inline void mousePressEvent(QMouseEvent*  arg__1) { QMenu::mousePressEvent(arg__1); }
inline void mouseMoveEvent(QMouseEvent*  arg__1) { QMenu::mouseMoveEvent(arg__1); }
inline bool  event(QEvent*  arg__1) { return QMenu::event(arg__1); }
inline void changeEvent(QEvent*  arg__1) { QMenu::changeEvent(arg__1); }
inline void paintEvent(QPaintEvent*  arg__1) { QMenu::paintEvent(arg__1); }
inline bool  focusNextPrevChild(bool  next) { return QMenu::focusNextPrevChild(next); }
inline void wheelEvent(QWheelEvent*  arg__1) { QMenu::wheelEvent(arg__1); }
inline void actionEvent(QActionEvent*  arg__1) { QMenu::actionEvent(arg__1); }
inline void leaveEvent(QEvent*  arg__1) { QMenu::leaveEvent(arg__1); }
inline void mouseReleaseEvent(QMouseEvent*  arg__1) { QMenu::mouseReleaseEvent(arg__1); }
inline void enterEvent(QEvent*  arg__1) { QMenu::enterEvent(arg__1); }
inline void timerEvent(QTimerEvent*  arg__1) { QMenu::timerEvent(arg__1); }
inline void hideEvent(QHideEvent*  arg__1) { QMenu::hideEvent(arg__1); }
inline void keyPressEvent(QKeyEvent*  arg__1) { QMenu::keyPressEvent(arg__1); }
};

class PythonQtWrapper_QMenu : public QObject
{ Q_OBJECT
public:
public slots:
QMenu* new_QMenu(QWidget*  parent = 0);
QMenu* new_QMenu(const QString&  title, QWidget*  parent = 0);
void delete_QMenu(QMenu* obj) { delete obj; } 
   QAction*  insertMenu(QMenu* theWrappedObject, QAction*  before, QMenu*  menu);
   QAction*  addAction(QMenu* theWrappedObject, const QString&  text);
   void mousePressEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1);
   QAction*  exec(QMenu* theWrappedObject);
   bool  separatorsCollapsible(QMenu* theWrappedObject) const;
   void mouseMoveEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1);
   void setSeparatorsCollapsible(QMenu* theWrappedObject, bool  collapse);
   QAction*  addAction(QMenu* theWrappedObject, const QIcon&  icon, const QString&  text);
   QIcon  icon(QMenu* theWrappedObject) const;
   bool  isTearOffMenuVisible(QMenu* theWrappedObject) const;
   void setTitle(QMenu* theWrappedObject, const QString&  title);
   bool  event(QMenu* theWrappedObject, QEvent*  arg__1);
   QMenu*  addMenu(QMenu* theWrappedObject, const QIcon&  icon, const QString&  title);
   void setActiveAction(QMenu* theWrappedObject, QAction*  act);
   QAction*  exec(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at = 0);
   bool  isEmpty(QMenu* theWrappedObject) const;
   void changeEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   bool  isTearOffEnabled(QMenu* theWrappedObject) const;
   void setTearOffEnabled(QMenu* theWrappedObject, bool  arg__1);
   void paintEvent(QMenu* theWrappedObject, QPaintEvent*  arg__1);
   void hideTearOffMenu(QMenu* theWrappedObject);
   QAction*  addMenu(QMenu* theWrappedObject, QMenu*  menu);
   void clear(QMenu* theWrappedObject);
   QAction*  addSeparator(QMenu* theWrappedObject);
   QSize  sizeHint(QMenu* theWrappedObject) const;
   bool  focusNextPrevChild(QMenu* theWrappedObject, bool  next);
   QMenu*  addMenu(QMenu* theWrappedObject, const QString&  title);
   void wheelEvent(QMenu* theWrappedObject, QWheelEvent*  arg__1);
   void actionEvent(QMenu* theWrappedObject, QActionEvent*  arg__1);
   void popup(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at = 0);
   void leaveEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   void mouseReleaseEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1);
   QAction*  insertSeparator(QMenu* theWrappedObject, QAction*  before);
   QAction*  defaultAction(QMenu* theWrappedObject) const;
   void enterEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   void timerEvent(QMenu* theWrappedObject, QTimerEvent*  arg__1);
   QString  title(QMenu* theWrappedObject) const;
   QRect  actionGeometry(QMenu* theWrappedObject, QAction*  arg__1) const;
   void hideEvent(QMenu* theWrappedObject, QHideEvent*  arg__1);
   QAction*  activeAction(QMenu* theWrappedObject) const;
   QAction*  menuAction(QMenu* theWrappedObject) const;
   void setIcon(QMenu* theWrappedObject, const QIcon&  icon);
   QAction*  static_QMenu_exec(QList<QAction* >  actions, const QPoint&  pos, QAction*  at = 0);
   void keyPressEvent(QMenu* theWrappedObject, QKeyEvent*  arg__1);
   void setDefaultAction(QMenu* theWrappedObject, QAction*  arg__1);
   QAction*  actionAt(QMenu* theWrappedObject, const QPoint&  arg__1) const;
};

#endif // PYTHONQTWRAPPER_QMENU_H
