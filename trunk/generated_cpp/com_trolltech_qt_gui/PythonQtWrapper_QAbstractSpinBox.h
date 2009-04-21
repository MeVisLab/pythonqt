#ifndef PYTHONQTWRAPPER_QABSTRACTSPINBOX_H
#define PYTHONQTWRAPPER_QABSTRACTSPINBOX_H

#include <qabstractspinbox.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractspinbox.h>
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
#include <qlineedit.h>
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

class PythonQtShell_QAbstractSpinBox : public QAbstractSpinBox
{
public:
    PythonQtShell_QAbstractSpinBox(QWidget*  parent = 0):QAbstractSpinBox(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void clear();
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  input) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
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
virtual void showEvent(QShowEvent*  event);
virtual void stepBy(int  steps);
virtual QAbstractSpinBox::StepEnabled  stepEnabled() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractSpinBox : public QAbstractSpinBox
{ public:
inline QValidator::State  promoted_validate(QString&  input, int&  pos) const { return QAbstractSpinBox::validate(input, pos); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QAbstractSpinBox::keyReleaseEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { QAbstractSpinBox::hideEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QAbstractSpinBox::paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QAbstractSpinBox::resizeEvent(event); }
inline void promoted_timerEvent(QTimerEvent*  event) { QAbstractSpinBox::timerEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QAbstractSpinBox::focusOutEvent(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QAbstractSpinBox::focusInEvent(event); }
inline void promoted_fixup(QString&  input) const { QAbstractSpinBox::fixup(input); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QAbstractSpinBox::mouseReleaseEvent(event); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { QAbstractSpinBox::contextMenuEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QAbstractSpinBox::mouseMoveEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QAbstractSpinBox::showEvent(event); }
inline void promoted_stepBy(int  steps) { QAbstractSpinBox::stepBy(steps); }
inline void promoted_wheelEvent(QWheelEvent*  event) { QAbstractSpinBox::wheelEvent(event); }
inline QAbstractSpinBox::StepEnabled  promoted_stepEnabled() const { return QAbstractSpinBox::stepEnabled(); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QAbstractSpinBox::keyPressEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { QAbstractSpinBox::closeEvent(event); }
inline void promoted_changeEvent(QEvent*  event) { QAbstractSpinBox::changeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QAbstractSpinBox::event(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QAbstractSpinBox::mousePressEvent(event); }
inline void promoted_clear() { QAbstractSpinBox::clear(); }
};

class PythonQtWrapper_QAbstractSpinBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StepEnabledFlag )
enum StepEnabledFlag{
  StepNone = QAbstractSpinBox::StepNone,   StepUpEnabled = QAbstractSpinBox::StepUpEnabled,   StepDownEnabled = QAbstractSpinBox::StepDownEnabled};
public slots:
QAbstractSpinBox* new_QAbstractSpinBox(QWidget*  parent = 0);
void delete_QAbstractSpinBox(QAbstractSpinBox* obj) { delete obj; } 
   bool  wrapping(QAbstractSpinBox* theWrappedObject) const;
   void setFrame(QAbstractSpinBox* theWrappedObject, bool  arg__1);
   void interpretText(QAbstractSpinBox* theWrappedObject);
   QValidator::State  validate(QAbstractSpinBox* theWrappedObject, QString&  input, int&  pos) const;
   void setKeyboardTracking(QAbstractSpinBox* theWrappedObject, bool  kt);
   void keyReleaseEvent(QAbstractSpinBox* theWrappedObject, QKeyEvent*  event);
   Qt::Alignment  alignment(QAbstractSpinBox* theWrappedObject) const;
   void setReadOnly(QAbstractSpinBox* theWrappedObject, bool  r);
   void hideEvent(QAbstractSpinBox* theWrappedObject, QHideEvent*  event);
   bool  keyboardTracking(QAbstractSpinBox* theWrappedObject) const;
   void paintEvent(QAbstractSpinBox* theWrappedObject, QPaintEvent*  event);
   void resizeEvent(QAbstractSpinBox* theWrappedObject, QResizeEvent*  event);
   void setSpecialValueText(QAbstractSpinBox* theWrappedObject, const QString&  txt);
   void setAlignment(QAbstractSpinBox* theWrappedObject, Qt::Alignment  flag);
   QSize  minimumSizeHint(QAbstractSpinBox* theWrappedObject) const;
   void timerEvent(QAbstractSpinBox* theWrappedObject, QTimerEvent*  event);
   void focusOutEvent(QAbstractSpinBox* theWrappedObject, QFocusEvent*  event);
   void focusInEvent(QAbstractSpinBox* theWrappedObject, QFocusEvent*  event);
   QString  text(QAbstractSpinBox* theWrappedObject) const;
   QString  specialValueText(QAbstractSpinBox* theWrappedObject) const;
   void fixup(QAbstractSpinBox* theWrappedObject, QString&  input) const;
   void setAccelerated(QAbstractSpinBox* theWrappedObject, bool  on);
   void mouseReleaseEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event);
   void contextMenuEvent(QAbstractSpinBox* theWrappedObject, QContextMenuEvent*  event);
   void setWrapping(QAbstractSpinBox* theWrappedObject, bool  w);
   void mouseMoveEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event);
   QSize  sizeHint(QAbstractSpinBox* theWrappedObject) const;
   void showEvent(QAbstractSpinBox* theWrappedObject, QShowEvent*  event);
   bool  isAccelerated(QAbstractSpinBox* theWrappedObject) const;
   void stepBy(QAbstractSpinBox* theWrappedObject, int  steps);
   void wheelEvent(QAbstractSpinBox* theWrappedObject, QWheelEvent*  event);
   QAbstractSpinBox::StepEnabled  stepEnabled(QAbstractSpinBox* theWrappedObject) const;
   void keyPressEvent(QAbstractSpinBox* theWrappedObject, QKeyEvent*  event);
   void closeEvent(QAbstractSpinBox* theWrappedObject, QCloseEvent*  event);
   void setCorrectionMode(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::CorrectionMode  cm);
   void setButtonSymbols(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::ButtonSymbols  bs);
   void changeEvent(QAbstractSpinBox* theWrappedObject, QEvent*  event);
   bool  hasAcceptableInput(QAbstractSpinBox* theWrappedObject) const;
   bool  isReadOnly(QAbstractSpinBox* theWrappedObject) const;
   QAbstractSpinBox::ButtonSymbols  buttonSymbols(QAbstractSpinBox* theWrappedObject) const;
   bool  event(QAbstractSpinBox* theWrappedObject, QEvent*  event);
   void mousePressEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event);
   QAbstractSpinBox::CorrectionMode  correctionMode(QAbstractSpinBox* theWrappedObject) const;
   bool  hasFrame(QAbstractSpinBox* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QABSTRACTSPINBOX_H
