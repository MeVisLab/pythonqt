#include "PythonQtWrapper_QAbstractSlider.h"

#include <QVariant>
#include <qabstractslider.h>
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
#include <qwidget.h>

QAbstractSlider* PythonQtWrapper_QAbstractSlider::new_QAbstractSlider(QWidget*  parent)
{ 
return new QAbstractSlider(parent); }

bool  PythonQtWrapper_QAbstractSlider::hasTracking(QAbstractSlider* theWrappedObject) const
{
return theWrappedObject->hasTracking();
}

bool  PythonQtWrapper_QAbstractSlider::invertedAppearance(QAbstractSlider* theWrappedObject) const
{
return theWrappedObject->invertedAppearance();
}

bool  PythonQtWrapper_QAbstractSlider::invertedControls(QAbstractSlider* theWrappedObject) const
{
return theWrappedObject->invertedControls();
}

bool  PythonQtWrapper_QAbstractSlider::isSliderDown(QAbstractSlider* theWrappedObject) const
{
return theWrappedObject->isSliderDown();
}

int  PythonQtWrapper_QAbstractSlider::maximum(QAbstractSlider* theWrappedObject) const
{
return theWrappedObject->maximum();
}

int  PythonQtWrapper_QAbstractSlider::minimum(QAbstractSlider* theWrappedObject) const
{
return theWrappedObject->minimum();
}

Qt::Orientation  PythonQtWrapper_QAbstractSlider::orientation(QAbstractSlider* theWrappedObject) const
{
return theWrappedObject->orientation();
}

int  PythonQtWrapper_QAbstractSlider::pageStep(QAbstractSlider* theWrappedObject) const
{
return theWrappedObject->pageStep();
}

void PythonQtWrapper_QAbstractSlider::setInvertedAppearance(QAbstractSlider* theWrappedObject, bool  arg__1)
{
theWrappedObject->setInvertedAppearance(arg__1);
}

void PythonQtWrapper_QAbstractSlider::setInvertedControls(QAbstractSlider* theWrappedObject, bool  arg__1)
{
theWrappedObject->setInvertedControls(arg__1);
}

void PythonQtWrapper_QAbstractSlider::setMaximum(QAbstractSlider* theWrappedObject, int  arg__1)
{
theWrappedObject->setMaximum(arg__1);
}

void PythonQtWrapper_QAbstractSlider::setMinimum(QAbstractSlider* theWrappedObject, int  arg__1)
{
theWrappedObject->setMinimum(arg__1);
}

void PythonQtWrapper_QAbstractSlider::setPageStep(QAbstractSlider* theWrappedObject, int  arg__1)
{
theWrappedObject->setPageStep(arg__1);
}

void PythonQtWrapper_QAbstractSlider::setRange(QAbstractSlider* theWrappedObject, int  min, int  max)
{
theWrappedObject->setRange(min, max);
}

void PythonQtWrapper_QAbstractSlider::setSingleStep(QAbstractSlider* theWrappedObject, int  arg__1)
{
theWrappedObject->setSingleStep(arg__1);
}

void PythonQtWrapper_QAbstractSlider::setSliderDown(QAbstractSlider* theWrappedObject, bool  arg__1)
{
theWrappedObject->setSliderDown(arg__1);
}

void PythonQtWrapper_QAbstractSlider::setSliderPosition(QAbstractSlider* theWrappedObject, int  arg__1)
{
theWrappedObject->setSliderPosition(arg__1);
}

void PythonQtWrapper_QAbstractSlider::setTracking(QAbstractSlider* theWrappedObject, bool  enable)
{
theWrappedObject->setTracking(enable);
}

int  PythonQtWrapper_QAbstractSlider::singleStep(QAbstractSlider* theWrappedObject) const
{
return theWrappedObject->singleStep();
}

int  PythonQtWrapper_QAbstractSlider::sliderPosition(QAbstractSlider* theWrappedObject) const
{
return theWrappedObject->sliderPosition();
}

void PythonQtWrapper_QAbstractSlider::triggerAction(QAbstractSlider* theWrappedObject, QAbstractSlider::SliderAction  action)
{
theWrappedObject->triggerAction(action);
}

int  PythonQtWrapper_QAbstractSlider::value(QAbstractSlider* theWrappedObject) const
{
return theWrappedObject->value();
}

