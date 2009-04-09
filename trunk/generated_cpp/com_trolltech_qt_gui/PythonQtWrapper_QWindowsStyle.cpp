#include "PythonQtWrapper_QWindowsStyle.h"

#include <QVariant>
#include <qapplication.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qwidget.h>
#include <qwindowsstyle.h>

void PythonQtWrapper_QWindowsStyle::drawComplexControl(QWindowsStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w) const
{
theWrappedObject->drawComplexControl(cc, opt, p, w);
}

void PythonQtWrapper_QWindowsStyle::drawControl(QWindowsStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
theWrappedObject->drawControl(element, opt, p, w);
}

void PythonQtWrapper_QWindowsStyle::drawPrimitive(QWindowsStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
theWrappedObject->drawPrimitive(pe, opt, p, w);
}

int  PythonQtWrapper_QWindowsStyle::pixelMetric(QWindowsStyle* theWrappedObject, QStyle::PixelMetric  pm, const QStyleOption*  option, const QWidget*  widget) const
{
return theWrappedObject->pixelMetric(pm, option, widget);
}

void PythonQtWrapper_QWindowsStyle::polish(QWindowsStyle* theWrappedObject, QApplication*  arg__1)
{
theWrappedObject->polish(arg__1);
}

void PythonQtWrapper_QWindowsStyle::polish(QWindowsStyle* theWrappedObject, QPalette&  arg__1)
{
theWrappedObject->polish(arg__1);
}

void PythonQtWrapper_QWindowsStyle::polish(QWindowsStyle* theWrappedObject, QWidget*  arg__1)
{
theWrappedObject->polish(arg__1);
}

QSize  PythonQtWrapper_QWindowsStyle::sizeFromContents(QWindowsStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget) const
{
return theWrappedObject->sizeFromContents(ct, opt, contentsSize, widget);
}

int  PythonQtWrapper_QWindowsStyle::styleHint(QWindowsStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  opt, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
return theWrappedObject->styleHint(hint, opt, widget, returnData);
}

QRect  PythonQtWrapper_QWindowsStyle::subElementRect(QWindowsStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget) const
{
return theWrappedObject->subElementRect(r, opt, widget);
}

void PythonQtWrapper_QWindowsStyle::unpolish(QWindowsStyle* theWrappedObject, QApplication*  arg__1)
{
theWrappedObject->unpolish(arg__1);
}

void PythonQtWrapper_QWindowsStyle::unpolish(QWindowsStyle* theWrappedObject, QWidget*  arg__1)
{
theWrappedObject->unpolish(arg__1);
}

