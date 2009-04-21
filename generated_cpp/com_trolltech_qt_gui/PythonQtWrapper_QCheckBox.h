#ifndef PYTHONQTWRAPPER_QCHECKBOX_H
#define PYTHONQTWRAPPER_QCHECKBOX_H

#include <qcheckbox.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcheckbox.h>
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
#include <qwidget.h>

class PythonQtShell_QCheckBox : public QCheckBox
{
public:
    PythonQtShell_QCheckBox(QWidget*  parent = 0):QCheckBox(parent),_wrapper(NULL) {};
    PythonQtShell_QCheckBox(const QString&  text, QWidget*  parent = 0):QCheckBox(text, parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
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
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void nextCheckState();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCheckBox : public QCheckBox
{ public:
inline void paintEvent(QPaintEvent*  arg__1) { QCheckBox::paintEvent(arg__1); }
inline void mouseMoveEvent(QMouseEvent*  arg__1) { QCheckBox::mouseMoveEvent(arg__1); }
inline void nextCheckState() { QCheckBox::nextCheckState(); }
inline void checkStateSet() { QCheckBox::checkStateSet(); }
inline bool  hitButton(const QPoint&  pos) const { return QCheckBox::hitButton(pos); }
inline bool  event(QEvent*  e) { return QCheckBox::event(e); }
};

class PythonQtWrapper_QCheckBox : public QObject
{ Q_OBJECT
public:
public slots:
QCheckBox* new_QCheckBox(QWidget*  parent = 0);
QCheckBox* new_QCheckBox(const QString&  text, QWidget*  parent = 0);
void delete_QCheckBox(QCheckBox* obj) { delete obj; } 
   void setTristate(QCheckBox* theWrappedObject, bool  y = true);
   void paintEvent(QCheckBox* theWrappedObject, QPaintEvent*  arg__1);
   void mouseMoveEvent(QCheckBox* theWrappedObject, QMouseEvent*  arg__1);
   void nextCheckState(QCheckBox* theWrappedObject);
   QSize  sizeHint(QCheckBox* theWrappedObject) const;
   bool  isTristate(QCheckBox* theWrappedObject) const;
   void checkStateSet(QCheckBox* theWrappedObject);
   bool  hitButton(QCheckBox* theWrappedObject, const QPoint&  pos) const;
   void setCheckState(QCheckBox* theWrappedObject, Qt::CheckState  state);
   bool  event(QCheckBox* theWrappedObject, QEvent*  e);
   Qt::CheckState  checkState(QCheckBox* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QCHECKBOX_H
