#include "PythonQtWrapper_QAbstractSpinBox.h"

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

QAbstractSpinBox* PythonQtWrapper_QAbstractSpinBox::new_QAbstractSpinBox(QWidget*  parent)
{ 
return new QAbstractSpinBox(parent); }

Qt::Alignment  PythonQtWrapper_QAbstractSpinBox::alignment(QAbstractSpinBox* theWrappedObject) const
{
return theWrappedObject->alignment();
}

QAbstractSpinBox::ButtonSymbols  PythonQtWrapper_QAbstractSpinBox::buttonSymbols(QAbstractSpinBox* theWrappedObject) const
{
return theWrappedObject->buttonSymbols();
}

QAbstractSpinBox::CorrectionMode  PythonQtWrapper_QAbstractSpinBox::correctionMode(QAbstractSpinBox* theWrappedObject) const
{
return theWrappedObject->correctionMode();
}

bool  PythonQtWrapper_QAbstractSpinBox::event(QAbstractSpinBox* theWrappedObject, QEvent*  event)
{
return theWrappedObject->event(event);
}

void PythonQtWrapper_QAbstractSpinBox::fixup(QAbstractSpinBox* theWrappedObject, QString&  input) const
{
theWrappedObject->fixup(input);
}

bool  PythonQtWrapper_QAbstractSpinBox::hasAcceptableInput(QAbstractSpinBox* theWrappedObject) const
{
return theWrappedObject->hasAcceptableInput();
}

bool  PythonQtWrapper_QAbstractSpinBox::hasFrame(QAbstractSpinBox* theWrappedObject) const
{
return theWrappedObject->hasFrame();
}

void PythonQtWrapper_QAbstractSpinBox::interpretText(QAbstractSpinBox* theWrappedObject)
{
theWrappedObject->interpretText();
}

bool  PythonQtWrapper_QAbstractSpinBox::isAccelerated(QAbstractSpinBox* theWrappedObject) const
{
return theWrappedObject->isAccelerated();
}

bool  PythonQtWrapper_QAbstractSpinBox::isReadOnly(QAbstractSpinBox* theWrappedObject) const
{
return theWrappedObject->isReadOnly();
}

bool  PythonQtWrapper_QAbstractSpinBox::keyboardTracking(QAbstractSpinBox* theWrappedObject) const
{
return theWrappedObject->keyboardTracking();
}

QSize  PythonQtWrapper_QAbstractSpinBox::minimumSizeHint(QAbstractSpinBox* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

void PythonQtWrapper_QAbstractSpinBox::setAccelerated(QAbstractSpinBox* theWrappedObject, bool  on)
{
theWrappedObject->setAccelerated(on);
}

void PythonQtWrapper_QAbstractSpinBox::setAlignment(QAbstractSpinBox* theWrappedObject, Qt::Alignment  flag)
{
theWrappedObject->setAlignment(flag);
}

void PythonQtWrapper_QAbstractSpinBox::setButtonSymbols(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::ButtonSymbols  bs)
{
theWrappedObject->setButtonSymbols(bs);
}

void PythonQtWrapper_QAbstractSpinBox::setCorrectionMode(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::CorrectionMode  cm)
{
theWrappedObject->setCorrectionMode(cm);
}

void PythonQtWrapper_QAbstractSpinBox::setFrame(QAbstractSpinBox* theWrappedObject, bool  arg__1)
{
theWrappedObject->setFrame(arg__1);
}

void PythonQtWrapper_QAbstractSpinBox::setKeyboardTracking(QAbstractSpinBox* theWrappedObject, bool  kt)
{
theWrappedObject->setKeyboardTracking(kt);
}

void PythonQtWrapper_QAbstractSpinBox::setReadOnly(QAbstractSpinBox* theWrappedObject, bool  r)
{
theWrappedObject->setReadOnly(r);
}

void PythonQtWrapper_QAbstractSpinBox::setSpecialValueText(QAbstractSpinBox* theWrappedObject, const QString&  txt)
{
theWrappedObject->setSpecialValueText(txt);
}

void PythonQtWrapper_QAbstractSpinBox::setWrapping(QAbstractSpinBox* theWrappedObject, bool  w)
{
theWrappedObject->setWrapping(w);
}

QSize  PythonQtWrapper_QAbstractSpinBox::sizeHint(QAbstractSpinBox* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QString  PythonQtWrapper_QAbstractSpinBox::specialValueText(QAbstractSpinBox* theWrappedObject) const
{
return theWrappedObject->specialValueText();
}

void PythonQtWrapper_QAbstractSpinBox::stepBy(QAbstractSpinBox* theWrappedObject, int  steps)
{
theWrappedObject->stepBy(steps);
}

QString  PythonQtWrapper_QAbstractSpinBox::text(QAbstractSpinBox* theWrappedObject) const
{
return theWrappedObject->text();
}

QValidator::State  PythonQtWrapper_QAbstractSpinBox::validate(QAbstractSpinBox* theWrappedObject, QString&  input, int&  pos) const
{
return theWrappedObject->validate(input, pos);
}

bool  PythonQtWrapper_QAbstractSpinBox::wrapping(QAbstractSpinBox* theWrappedObject) const
{
return theWrappedObject->wrapping();
}

