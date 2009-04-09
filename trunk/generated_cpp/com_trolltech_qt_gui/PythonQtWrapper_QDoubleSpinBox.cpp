#include "PythonQtWrapper_QDoubleSpinBox.h"

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

QDoubleSpinBox* PythonQtWrapper_QDoubleSpinBox::new_QDoubleSpinBox(QWidget*  parent)
{ 
return new QDoubleSpinBox(parent); }

QString  PythonQtWrapper_QDoubleSpinBox::cleanText(QDoubleSpinBox* theWrappedObject) const
{
return theWrappedObject->cleanText();
}

int  PythonQtWrapper_QDoubleSpinBox::decimals(QDoubleSpinBox* theWrappedObject) const
{
return theWrappedObject->decimals();
}

void PythonQtWrapper_QDoubleSpinBox::fixup(QDoubleSpinBox* theWrappedObject, QString&  str) const
{
theWrappedObject->fixup(str);
}

double  PythonQtWrapper_QDoubleSpinBox::maximum(QDoubleSpinBox* theWrappedObject) const
{
return theWrappedObject->maximum();
}

double  PythonQtWrapper_QDoubleSpinBox::minimum(QDoubleSpinBox* theWrappedObject) const
{
return theWrappedObject->minimum();
}

QString  PythonQtWrapper_QDoubleSpinBox::prefix(QDoubleSpinBox* theWrappedObject) const
{
return theWrappedObject->prefix();
}

void PythonQtWrapper_QDoubleSpinBox::setDecimals(QDoubleSpinBox* theWrappedObject, int  prec)
{
theWrappedObject->setDecimals(prec);
}

void PythonQtWrapper_QDoubleSpinBox::setMaximum(QDoubleSpinBox* theWrappedObject, double  max)
{
theWrappedObject->setMaximum(max);
}

void PythonQtWrapper_QDoubleSpinBox::setMinimum(QDoubleSpinBox* theWrappedObject, double  min)
{
theWrappedObject->setMinimum(min);
}

void PythonQtWrapper_QDoubleSpinBox::setPrefix(QDoubleSpinBox* theWrappedObject, const QString&  prefix)
{
theWrappedObject->setPrefix(prefix);
}

void PythonQtWrapper_QDoubleSpinBox::setRange(QDoubleSpinBox* theWrappedObject, double  min, double  max)
{
theWrappedObject->setRange(min, max);
}

void PythonQtWrapper_QDoubleSpinBox::setSingleStep(QDoubleSpinBox* theWrappedObject, double  val)
{
theWrappedObject->setSingleStep(val);
}

void PythonQtWrapper_QDoubleSpinBox::setSuffix(QDoubleSpinBox* theWrappedObject, const QString&  suffix)
{
theWrappedObject->setSuffix(suffix);
}

double  PythonQtWrapper_QDoubleSpinBox::singleStep(QDoubleSpinBox* theWrappedObject) const
{
return theWrappedObject->singleStep();
}

QString  PythonQtWrapper_QDoubleSpinBox::suffix(QDoubleSpinBox* theWrappedObject) const
{
return theWrappedObject->suffix();
}

QString  PythonQtWrapper_QDoubleSpinBox::textFromValue(QDoubleSpinBox* theWrappedObject, double  val) const
{
return theWrappedObject->textFromValue(val);
}

QValidator::State  PythonQtWrapper_QDoubleSpinBox::validate(QDoubleSpinBox* theWrappedObject, QString&  input, int&  pos) const
{
return theWrappedObject->validate(input, pos);
}

double  PythonQtWrapper_QDoubleSpinBox::value(QDoubleSpinBox* theWrappedObject) const
{
return theWrappedObject->value();
}

double  PythonQtWrapper_QDoubleSpinBox::valueFromText(QDoubleSpinBox* theWrappedObject, const QString&  text) const
{
return theWrappedObject->valueFromText(text);
}

