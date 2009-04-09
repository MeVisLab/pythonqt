#include "PythonQtWrapper_QMotifStyle.h"

#include <QVariant>
#include <qapplication.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qmotifstyle.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qwidget.h>

void PythonQtWrapper_QMotifStyle::drawComplexControl(QMotifStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w) const
{
theWrappedObject->drawComplexControl(cc, opt, p, w);
}

void PythonQtWrapper_QMotifStyle::drawControl(QMotifStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
theWrappedObject->drawControl(element, opt, p, w);
}

void PythonQtWrapper_QMotifStyle::drawPrimitive(QMotifStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
theWrappedObject->drawPrimitive(pe, opt, p, w);
}

bool  PythonQtWrapper_QMotifStyle::event(QMotifStyle* theWrappedObject, QEvent*  arg__1)
{
return theWrappedObject->event(arg__1);
}

int  PythonQtWrapper_QMotifStyle::pixelMetric(QMotifStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option, const QWidget*  widget) const
{
return theWrappedObject->pixelMetric(metric, option, widget);
}

void PythonQtWrapper_QMotifStyle::polish(QMotifStyle* theWrappedObject, QApplication*  arg__1)
{
theWrappedObject->polish(arg__1);
}

void PythonQtWrapper_QMotifStyle::polish(QMotifStyle* theWrappedObject, QPalette&  arg__1)
{
theWrappedObject->polish(arg__1);
}

void PythonQtWrapper_QMotifStyle::polish(QMotifStyle* theWrappedObject, QWidget*  arg__1)
{
theWrappedObject->polish(arg__1);
}

void PythonQtWrapper_QMotifStyle::setUseHighlightColors(QMotifStyle* theWrappedObject, bool  arg__1)
{
theWrappedObject->setUseHighlightColors(arg__1);
}

QSize  PythonQtWrapper_QMotifStyle::sizeFromContents(QMotifStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget) const
{
return theWrappedObject->sizeFromContents(ct, opt, contentsSize, widget);
}

QPalette  PythonQtWrapper_QMotifStyle::standardPalette(QMotifStyle* theWrappedObject) const
{
return theWrappedObject->standardPalette();
}

int  PythonQtWrapper_QMotifStyle::styleHint(QMotifStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  opt, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
return theWrappedObject->styleHint(hint, opt, widget, returnData);
}

QRect  PythonQtWrapper_QMotifStyle::subControlRect(QMotifStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const
{
return theWrappedObject->subControlRect(cc, opt, sc, widget);
}

QRect  PythonQtWrapper_QMotifStyle::subElementRect(QMotifStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget) const
{
return theWrappedObject->subElementRect(r, opt, widget);
}

void PythonQtWrapper_QMotifStyle::unpolish(QMotifStyle* theWrappedObject, QApplication*  arg__1)
{
theWrappedObject->unpolish(arg__1);
}

void PythonQtWrapper_QMotifStyle::unpolish(QMotifStyle* theWrappedObject, QWidget*  arg__1)
{
theWrappedObject->unpolish(arg__1);
}

bool  PythonQtWrapper_QMotifStyle::useHighlightColors(QMotifStyle* theWrappedObject) const
{
return theWrappedObject->useHighlightColors();
}

