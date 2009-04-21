#ifndef PYTHONQTWRAPPER_QABSTRACTBUTTON_H
#define PYTHONQTWRAPPER_QABSTRACTBUTTON_H

#include <qabstractbutton.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractbutton.h>
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

class PythonQtShell_QAbstractButton : public QAbstractButton
{
public:
    PythonQtShell_QAbstractButton(QWidget*  parent = 0):QAbstractButton(parent),_wrapper(NULL) {};

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
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void nextCheckState();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractButton : public QAbstractButton
{ public:
inline void nextCheckState() { QAbstractButton::nextCheckState(); }
inline void focusInEvent(QFocusEvent*  e) { QAbstractButton::focusInEvent(e); }
inline bool  event(QEvent*  e) { return QAbstractButton::event(e); }
inline void mouseMoveEvent(QMouseEvent*  e) { QAbstractButton::mouseMoveEvent(e); }
inline void keyReleaseEvent(QKeyEvent*  e) { QAbstractButton::keyReleaseEvent(e); }
inline void keyPressEvent(QKeyEvent*  e) { QAbstractButton::keyPressEvent(e); }
inline void changeEvent(QEvent*  e) { QAbstractButton::changeEvent(e); }
inline void timerEvent(QTimerEvent*  e) { QAbstractButton::timerEvent(e); }
inline void checkStateSet() { QAbstractButton::checkStateSet(); }
inline bool  hitButton(const QPoint&  pos) const { return QAbstractButton::hitButton(pos); }
inline void focusOutEvent(QFocusEvent*  e) { QAbstractButton::focusOutEvent(e); }
inline void mouseReleaseEvent(QMouseEvent*  e) { QAbstractButton::mouseReleaseEvent(e); }
inline void mousePressEvent(QMouseEvent*  e) { QAbstractButton::mousePressEvent(e); }
};

class PythonQtWrapper_QAbstractButton : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractButton* new_QAbstractButton(QWidget*  parent = 0);
void delete_QAbstractButton(QAbstractButton* obj) { delete obj; } 
   bool  isDown(QAbstractButton* theWrappedObject) const;
   void nextCheckState(QAbstractButton* theWrappedObject);
   void setDown(QAbstractButton* theWrappedObject, bool  arg__1);
   void setAutoRepeat(QAbstractButton* theWrappedObject, bool  arg__1);
   void focusInEvent(QAbstractButton* theWrappedObject, QFocusEvent*  e);
   bool  isChecked(QAbstractButton* theWrappedObject) const;
   bool  autoExclusive(QAbstractButton* theWrappedObject) const;
   bool  autoRepeat(QAbstractButton* theWrappedObject) const;
   bool  event(QAbstractButton* theWrappedObject, QEvent*  e);
   void mouseMoveEvent(QAbstractButton* theWrappedObject, QMouseEvent*  e);
   void keyReleaseEvent(QAbstractButton* theWrappedObject, QKeyEvent*  e);
   void keyPressEvent(QAbstractButton* theWrappedObject, QKeyEvent*  e);
   QIcon  icon(QAbstractButton* theWrappedObject) const;
   void changeEvent(QAbstractButton* theWrappedObject, QEvent*  e);
   bool  isCheckable(QAbstractButton* theWrappedObject) const;
   void setAutoRepeatDelay(QAbstractButton* theWrappedObject, int  arg__1);
   int  autoRepeatDelay(QAbstractButton* theWrappedObject) const;
   void setIcon(QAbstractButton* theWrappedObject, const QIcon&  icon);
   QButtonGroup*  group(QAbstractButton* theWrappedObject) const;
   void setAutoRepeatInterval(QAbstractButton* theWrappedObject, int  arg__1);
   void timerEvent(QAbstractButton* theWrappedObject, QTimerEvent*  e);
   void checkStateSet(QAbstractButton* theWrappedObject);
   bool  hitButton(QAbstractButton* theWrappedObject, const QPoint&  pos) const;
   void focusOutEvent(QAbstractButton* theWrappedObject, QFocusEvent*  e);
   QString  text(QAbstractButton* theWrappedObject) const;
   void mouseReleaseEvent(QAbstractButton* theWrappedObject, QMouseEvent*  e);
   void setText(QAbstractButton* theWrappedObject, const QString&  text);
   void setAutoExclusive(QAbstractButton* theWrappedObject, bool  arg__1);
   void setCheckable(QAbstractButton* theWrappedObject, bool  arg__1);
   QSize  iconSize(QAbstractButton* theWrappedObject) const;
   QKeySequence  shortcut(QAbstractButton* theWrappedObject) const;
   int  autoRepeatInterval(QAbstractButton* theWrappedObject) const;
   void setShortcut(QAbstractButton* theWrappedObject, const QKeySequence&  key);
   void mousePressEvent(QAbstractButton* theWrappedObject, QMouseEvent*  e);
};

#endif // PYTHONQTWRAPPER_QABSTRACTBUTTON_H
