#include "PythonQtWrapper_QSpinBox.h"

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

QSpinBox* PythonQtWrapper_QSpinBox::new_QSpinBox(QWidget*  parent)
{ 
return new QSpinBox(parent); }

QString  PythonQtWrapper_QSpinBox::cleanText(QSpinBox* theWrappedObject) const
{
return theWrappedObject->cleanText();
}

int  PythonQtWrapper_QSpinBox::maximum(QSpinBox* theWrappedObject) const
{
return theWrappedObject->maximum();
}

int  PythonQtWrapper_QSpinBox::minimum(QSpinBox* theWrappedObject) const
{
return theWrappedObject->minimum();
}

QString  PythonQtWrapper_QSpinBox::prefix(QSpinBox* theWrappedObject) const
{
return theWrappedObject->prefix();
}

void PythonQtWrapper_QSpinBox::setMaximum(QSpinBox* theWrappedObject, int  max)
{
theWrappedObject->setMaximum(max);
}

void PythonQtWrapper_QSpinBox::setMinimum(QSpinBox* theWrappedObject, int  min)
{
theWrappedObject->setMinimum(min);
}

void PythonQtWrapper_QSpinBox::setPrefix(QSpinBox* theWrappedObject, const QString&  prefix)
{
theWrappedObject->setPrefix(prefix);
}

void PythonQtWrapper_QSpinBox::setRange(QSpinBox* theWrappedObject, int  min, int  max)
{
theWrappedObject->setRange(min, max);
}

void PythonQtWrapper_QSpinBox::setSingleStep(QSpinBox* theWrappedObject, int  val)
{
theWrappedObject->setSingleStep(val);
}

void PythonQtWrapper_QSpinBox::setSuffix(QSpinBox* theWrappedObject, const QString&  suffix)
{
theWrappedObject->setSuffix(suffix);
}

int  PythonQtWrapper_QSpinBox::singleStep(QSpinBox* theWrappedObject) const
{
return theWrappedObject->singleStep();
}

QString  PythonQtWrapper_QSpinBox::suffix(QSpinBox* theWrappedObject) const
{
return theWrappedObject->suffix();
}

int  PythonQtWrapper_QSpinBox::value(QSpinBox* theWrappedObject) const
{
return theWrappedObject->value();
}

