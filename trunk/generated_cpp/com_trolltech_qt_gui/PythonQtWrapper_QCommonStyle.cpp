#include "PythonQtWrapper_QCommonStyle.h"

#include <QVariant>
#include <qapplication.h>
#include <qbytearray.h>
#include <qcommonstyle.h>
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

void PythonQtWrapper_QCommonStyle::drawComplexControl(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w) const
{
theWrappedObject->drawComplexControl(cc, opt, p, w);
}

void PythonQtWrapper_QCommonStyle::drawControl(QCommonStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
theWrappedObject->drawControl(element, opt, p, w);
}

void PythonQtWrapper_QCommonStyle::drawPrimitive(QCommonStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
theWrappedObject->drawPrimitive(pe, opt, p, w);
}

QPixmap  PythonQtWrapper_QCommonStyle::generatedIconPixmap(QCommonStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const
{
return theWrappedObject->generatedIconPixmap(iconMode, pixmap, opt);
}

QStyle::SubControl  PythonQtWrapper_QCommonStyle::hitTestComplexControl(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w) const
{
return theWrappedObject->hitTestComplexControl(cc, opt, pt, w);
}

int  PythonQtWrapper_QCommonStyle::pixelMetric(QCommonStyle* theWrappedObject, QStyle::PixelMetric  m, const QStyleOption*  opt, const QWidget*  widget) const
{
return theWrappedObject->pixelMetric(m, opt, widget);
}

QSize  PythonQtWrapper_QCommonStyle::sizeFromContents(QCommonStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget) const
{
return theWrappedObject->sizeFromContents(ct, opt, contentsSize, widget);
}

int  PythonQtWrapper_QCommonStyle::styleHint(QCommonStyle* theWrappedObject, QStyle::StyleHint  sh, const QStyleOption*  opt, const QWidget*  w, QStyleHintReturn*  shret) const
{
return theWrappedObject->styleHint(sh, opt, w, shret);
}

QRect  PythonQtWrapper_QCommonStyle::subControlRect(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w) const
{
return theWrappedObject->subControlRect(cc, opt, sc, w);
}

QRect  PythonQtWrapper_QCommonStyle::subElementRect(QCommonStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget) const
{
return theWrappedObject->subElementRect(r, opt, widget);
}

