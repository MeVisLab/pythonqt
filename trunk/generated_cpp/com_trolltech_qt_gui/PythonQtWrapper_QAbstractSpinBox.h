#ifndef PYTHONQTWRAPPER_QABSTRACTSPINBOX_H
#define PYTHONQTWRAPPER_QABSTRACTSPINBOX_H

#include <qabstractspinbox.h>
#include <QObject>

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

class PythonQtWrapper_QAbstractSpinBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StepEnabledFlag )
enum StepEnabledFlag{
  StepNone = QAbstractSpinBox::StepNone,   StepUpEnabled = QAbstractSpinBox::StepUpEnabled,   StepDownEnabled = QAbstractSpinBox::StepDownEnabled};
public slots:
QAbstractSpinBox* new_QAbstractSpinBox(QWidget*  parent = 0);
void delete_QAbstractSpinBox(QAbstractSpinBox* obj) { delete obj; } 
   Qt::Alignment  alignment(QAbstractSpinBox* theWrappedObject) const;
   QAbstractSpinBox::ButtonSymbols  buttonSymbols(QAbstractSpinBox* theWrappedObject) const;
   QAbstractSpinBox::CorrectionMode  correctionMode(QAbstractSpinBox* theWrappedObject) const;
   bool  event(QAbstractSpinBox* theWrappedObject, QEvent*  event);
   void fixup(QAbstractSpinBox* theWrappedObject, QString&  input) const;
   bool  hasAcceptableInput(QAbstractSpinBox* theWrappedObject) const;
   bool  hasFrame(QAbstractSpinBox* theWrappedObject) const;
   void interpretText(QAbstractSpinBox* theWrappedObject);
   bool  isAccelerated(QAbstractSpinBox* theWrappedObject) const;
   bool  isReadOnly(QAbstractSpinBox* theWrappedObject) const;
   bool  keyboardTracking(QAbstractSpinBox* theWrappedObject) const;
   QSize  minimumSizeHint(QAbstractSpinBox* theWrappedObject) const;
   void setAccelerated(QAbstractSpinBox* theWrappedObject, bool  on);
   void setAlignment(QAbstractSpinBox* theWrappedObject, Qt::Alignment  flag);
   void setButtonSymbols(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::ButtonSymbols  bs);
   void setCorrectionMode(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::CorrectionMode  cm);
   void setFrame(QAbstractSpinBox* theWrappedObject, bool  arg__1);
   void setKeyboardTracking(QAbstractSpinBox* theWrappedObject, bool  kt);
   void setReadOnly(QAbstractSpinBox* theWrappedObject, bool  r);
   void setSpecialValueText(QAbstractSpinBox* theWrappedObject, const QString&  txt);
   void setWrapping(QAbstractSpinBox* theWrappedObject, bool  w);
   QSize  sizeHint(QAbstractSpinBox* theWrappedObject) const;
   QString  specialValueText(QAbstractSpinBox* theWrappedObject) const;
   void stepBy(QAbstractSpinBox* theWrappedObject, int  steps);
   QString  text(QAbstractSpinBox* theWrappedObject) const;
   QValidator::State  validate(QAbstractSpinBox* theWrappedObject, QString&  input, int&  pos) const;
   bool  wrapping(QAbstractSpinBox* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QABSTRACTSPINBOX_H
