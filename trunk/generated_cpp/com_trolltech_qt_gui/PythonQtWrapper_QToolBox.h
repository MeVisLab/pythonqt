#ifndef PYTHONQTWRAPPER_QTOOLBOX_H
#define PYTHONQTWRAPPER_QTOOLBOX_H

#include <qtoolbox.h>
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
#include <qtoolbox.h>
#include <qwidget.h>

class PythonQtShell_QToolBox : public QToolBox
{
public:
    PythonQtShell_QToolBox(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QToolBox(parent, f),_wrapper(NULL) {};

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
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void itemInserted(int  index);
virtual void itemRemoved(int  index);
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
virtual void showEvent(QShowEvent*  e);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QToolBox : public QToolBox
{ public:
inline void promoted_itemInserted(int  index) { QToolBox::itemInserted(index); }
inline bool  promoted_event(QEvent*  e) { return QToolBox::event(e); }
inline void promoted_showEvent(QShowEvent*  e) { QToolBox::showEvent(e); }
inline void promoted_changeEvent(QEvent*  arg__1) { QToolBox::changeEvent(arg__1); }
inline void promoted_itemRemoved(int  index) { QToolBox::itemRemoved(index); }
};

class PythonQtWrapper_QToolBox : public QObject
{ Q_OBJECT
public:
public slots:
QToolBox* new_QToolBox(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QToolBox(QToolBox* obj) { delete obj; } 
   QWidget*  widget(QToolBox* theWrappedObject, int  index) const;
   void itemInserted(QToolBox* theWrappedObject, int  index);
   QString  itemToolTip(QToolBox* theWrappedObject, int  index) const;
   void setItemIcon(QToolBox* theWrappedObject, int  index, const QIcon&  icon);
   int  currentIndex(QToolBox* theWrappedObject) const;
   int  addItem(QToolBox* theWrappedObject, QWidget*  widget, const QIcon&  icon, const QString&  text);
   void setItemEnabled(QToolBox* theWrappedObject, int  index, bool  enabled);
   bool  isItemEnabled(QToolBox* theWrappedObject, int  index) const;
   void setItemToolTip(QToolBox* theWrappedObject, int  index, const QString&  toolTip);
   int  count(QToolBox* theWrappedObject) const;
   bool  event(QToolBox* theWrappedObject, QEvent*  e);
   void showEvent(QToolBox* theWrappedObject, QShowEvent*  e);
   int  insertItem(QToolBox* theWrappedObject, int  index, QWidget*  widget, const QString&  text);
   int  indexOf(QToolBox* theWrappedObject, QWidget*  widget) const;
   QIcon  itemIcon(QToolBox* theWrappedObject, int  index) const;
   void removeItem(QToolBox* theWrappedObject, int  index);
   QWidget*  currentWidget(QToolBox* theWrappedObject) const;
   int  insertItem(QToolBox* theWrappedObject, int  index, QWidget*  widget, const QIcon&  icon, const QString&  text);
   void changeEvent(QToolBox* theWrappedObject, QEvent*  arg__1);
   QString  itemText(QToolBox* theWrappedObject, int  index) const;
   void itemRemoved(QToolBox* theWrappedObject, int  index);
   int  addItem(QToolBox* theWrappedObject, QWidget*  widget, const QString&  text);
   void setItemText(QToolBox* theWrappedObject, int  index, const QString&  text);
};

#endif // PYTHONQTWRAPPER_QTOOLBOX_H
