#ifndef PYTHONQTWRAPPER_QGROUPBOX_H
#define PYTHONQTWRAPPER_QGROUPBOX_H

#include <qgroupbox.h>
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
#include <qgroupbox.h>
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
#include <qwidget.h>

class PythonQtShell_QGroupBox : public QGroupBox
{
public:
    PythonQtShell_QGroupBox(QWidget*  parent = 0):QGroupBox(parent),_wrapper(NULL) {};
    PythonQtShell_QGroupBox(const QString&  title, QWidget*  parent = 0):QGroupBox(title, parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
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
virtual void focusInEvent(QFocusEvent*  event);
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
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
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

class PythonQtPublicPromoter_QGroupBox : public QGroupBox
{ public:
inline void promoted_changeEvent(QEvent*  event) { QGroupBox::changeEvent(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGroupBox::focusInEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QGroupBox::mouseReleaseEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QGroupBox::mousePressEvent(event); }
inline void promoted_childEvent(QChildEvent*  event) { QGroupBox::childEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QGroupBox::mouseMoveEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QGroupBox::paintEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QGroupBox::event(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QGroupBox::resizeEvent(event); }
};

class PythonQtWrapper_QGroupBox : public QObject
{ Q_OBJECT
public:
public slots:
QGroupBox* new_QGroupBox(QWidget*  parent = 0);
QGroupBox* new_QGroupBox(const QString&  title, QWidget*  parent = 0);
void delete_QGroupBox(QGroupBox* obj) { delete obj; } 
   bool  isFlat(QGroupBox* theWrappedObject) const;
   void setAlignment(QGroupBox* theWrappedObject, int  alignment);
   void changeEvent(QGroupBox* theWrappedObject, QEvent*  event);
   QString  title(QGroupBox* theWrappedObject) const;
   QSize  minimumSizeHint(QGroupBox* theWrappedObject) const;
   void focusInEvent(QGroupBox* theWrappedObject, QFocusEvent*  event);
   void mouseReleaseEvent(QGroupBox* theWrappedObject, QMouseEvent*  event);
   void setCheckable(QGroupBox* theWrappedObject, bool  checkable);
   void mousePressEvent(QGroupBox* theWrappedObject, QMouseEvent*  event);
   void childEvent(QGroupBox* theWrappedObject, QChildEvent*  event);
   void mouseMoveEvent(QGroupBox* theWrappedObject, QMouseEvent*  event);
   void setFlat(QGroupBox* theWrappedObject, bool  flat);
   void paintEvent(QGroupBox* theWrappedObject, QPaintEvent*  event);
   bool  isChecked(QGroupBox* theWrappedObject) const;
   bool  isCheckable(QGroupBox* theWrappedObject) const;
   bool  event(QGroupBox* theWrappedObject, QEvent*  event);
   void resizeEvent(QGroupBox* theWrappedObject, QResizeEvent*  event);
   Qt::Alignment  alignment(QGroupBox* theWrappedObject) const;
   void setTitle(QGroupBox* theWrappedObject, const QString&  title);
};

#endif // PYTHONQTWRAPPER_QGROUPBOX_H
