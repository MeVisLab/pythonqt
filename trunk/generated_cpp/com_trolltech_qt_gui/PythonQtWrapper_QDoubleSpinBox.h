#ifndef PYTHONQTWRAPPER_QDOUBLESPINBOX_H
#define PYTHONQTWRAPPER_QDOUBLESPINBOX_H

#include <qspinbox.h>
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
#include <qspinbox.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QDoubleSpinBox : public QDoubleSpinBox
{
public:
    PythonQtShell_QDoubleSpinBox(QWidget*  parent = 0):QDoubleSpinBox(parent),_wrapper(NULL) {};

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
virtual void fixup(QString&  str) const;
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
virtual QString  textFromValue(double  val) const;
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual double  valueFromText(const QString&  text) const;
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDoubleSpinBox : public QDoubleSpinBox
{ public:
inline QValidator::State  promoted_validate(QString&  input, int&  pos) const { return QDoubleSpinBox::validate(input, pos); }
inline double  promoted_valueFromText(const QString&  text) const { return QDoubleSpinBox::valueFromText(text); }
inline void promoted_fixup(QString&  str) const { QDoubleSpinBox::fixup(str); }
inline QString  promoted_textFromValue(double  val) const { return QDoubleSpinBox::textFromValue(val); }
};

class PythonQtWrapper_QDoubleSpinBox : public QObject
{ Q_OBJECT
public:
public slots:
QDoubleSpinBox* new_QDoubleSpinBox(QWidget*  parent = 0);
void delete_QDoubleSpinBox(QDoubleSpinBox* obj) { delete obj; } 
   void setPrefix(QDoubleSpinBox* theWrappedObject, const QString&  prefix);
   void setSuffix(QDoubleSpinBox* theWrappedObject, const QString&  suffix);
   QValidator::State  validate(QDoubleSpinBox* theWrappedObject, QString&  input, int&  pos) const;
   double  valueFromText(QDoubleSpinBox* theWrappedObject, const QString&  text) const;
   double  value(QDoubleSpinBox* theWrappedObject) const;
   double  singleStep(QDoubleSpinBox* theWrappedObject) const;
   double  minimum(QDoubleSpinBox* theWrappedObject) const;
   QString  suffix(QDoubleSpinBox* theWrappedObject) const;
   int  decimals(QDoubleSpinBox* theWrappedObject) const;
   void fixup(QDoubleSpinBox* theWrappedObject, QString&  str) const;
   void setSingleStep(QDoubleSpinBox* theWrappedObject, double  val);
   void setMinimum(QDoubleSpinBox* theWrappedObject, double  min);
   QString  textFromValue(QDoubleSpinBox* theWrappedObject, double  val) const;
   QString  cleanText(QDoubleSpinBox* theWrappedObject) const;
   QString  prefix(QDoubleSpinBox* theWrappedObject) const;
   double  maximum(QDoubleSpinBox* theWrappedObject) const;
   void setRange(QDoubleSpinBox* theWrappedObject, double  min, double  max);
   void setMaximum(QDoubleSpinBox* theWrappedObject, double  max);
   void setDecimals(QDoubleSpinBox* theWrappedObject, int  prec);
};

#endif // PYTHONQTWRAPPER_QDOUBLESPINBOX_H
