#include "PythonQtWrapper_QStyle.h"

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
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

QRect  PythonQtWrapper_QStyle::static_QStyle_alignedRect(Qt::LayoutDirection  direction, Qt::Alignment  alignment, const QSize&  size, const QRect&  rectangle)
{
return QStyle::alignedRect(direction, alignment, size, rectangle);
}

int  PythonQtWrapper_QStyle::combinedLayoutSpacing(QStyle* theWrappedObject, QSizePolicy::ControlTypes  controls1, QSizePolicy::ControlTypes  controls2, Qt::Orientation  orientation, QStyleOption*  option, QWidget*  widget) const
{
return theWrappedObject->combinedLayoutSpacing(controls1, controls2, orientation, option, widget);
}

void PythonQtWrapper_QStyle::drawComplexControl(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  widget) const
{
theWrappedObject->drawComplexControl(cc, opt, p, widget);
}

void PythonQtWrapper_QStyle::drawControl(QStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
theWrappedObject->drawControl(element, opt, p, w);
}

void PythonQtWrapper_QStyle::drawItemPixmap(QStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const
{
theWrappedObject->drawItemPixmap(painter, rect, alignment, pixmap);
}

void PythonQtWrapper_QStyle::drawItemText(QStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const
{
theWrappedObject->drawItemText(painter, rect, flags, pal, enabled, text, textRole);
}

void PythonQtWrapper_QStyle::drawPrimitive(QStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
theWrappedObject->drawPrimitive(pe, opt, p, w);
}

QPixmap  PythonQtWrapper_QStyle::generatedIconPixmap(QStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const
{
return theWrappedObject->generatedIconPixmap(iconMode, pixmap, opt);
}

QStyle::SubControl  PythonQtWrapper_QStyle::hitTestComplexControl(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  widget) const
{
return theWrappedObject->hitTestComplexControl(cc, opt, pt, widget);
}

QRect  PythonQtWrapper_QStyle::itemPixmapRect(QStyle* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap) const
{
return theWrappedObject->itemPixmapRect(r, flags, pixmap);
}

int  PythonQtWrapper_QStyle::layoutSpacing(QStyle* theWrappedObject, QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option, const QWidget*  widget) const
{
return theWrappedObject->layoutSpacing(control1, control2, orientation, option, widget);
}

int  PythonQtWrapper_QStyle::pixelMetric(QStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option, const QWidget*  widget) const
{
return theWrappedObject->pixelMetric(metric, option, widget);
}

void PythonQtWrapper_QStyle::polish(QStyle* theWrappedObject, QApplication*  arg__1)
{
theWrappedObject->polish(arg__1);
}

void PythonQtWrapper_QStyle::polish(QStyle* theWrappedObject, QPalette&  arg__1)
{
theWrappedObject->polish(arg__1);
}

void PythonQtWrapper_QStyle::polish(QStyle* theWrappedObject, QWidget*  arg__1)
{
theWrappedObject->polish(arg__1);
}

QSize  PythonQtWrapper_QStyle::sizeFromContents(QStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  w) const
{
return theWrappedObject->sizeFromContents(ct, opt, contentsSize, w);
}

int  PythonQtWrapper_QStyle::static_QStyle_sliderPositionFromValue(int  min, int  max, int  val, int  space, bool  upsideDown)
{
return QStyle::sliderPositionFromValue(min, max, val, space, upsideDown);
}

int  PythonQtWrapper_QStyle::static_QStyle_sliderValueFromPosition(int  min, int  max, int  pos, int  space, bool  upsideDown)
{
return QStyle::sliderValueFromPosition(min, max, pos, space, upsideDown);
}

QIcon  PythonQtWrapper_QStyle::standardIcon(QStyle* theWrappedObject, QStyle::StandardPixmap  standardIcon, const QStyleOption*  option, const QWidget*  widget) const
{
return theWrappedObject->standardIcon(standardIcon, option, widget);
}

QPalette  PythonQtWrapper_QStyle::standardPalette(QStyle* theWrappedObject) const
{
return theWrappedObject->standardPalette();
}

QPixmap  PythonQtWrapper_QStyle::standardPixmap(QStyle* theWrappedObject, QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const
{
return theWrappedObject->standardPixmap(standardPixmap, opt, widget);
}

int  PythonQtWrapper_QStyle::styleHint(QStyle* theWrappedObject, QStyle::StyleHint  stylehint, const QStyleOption*  opt, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
return theWrappedObject->styleHint(stylehint, opt, widget, returnData);
}

QRect  PythonQtWrapper_QStyle::subControlRect(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const
{
return theWrappedObject->subControlRect(cc, opt, sc, widget);
}

QRect  PythonQtWrapper_QStyle::subElementRect(QStyle* theWrappedObject, QStyle::SubElement  subElement, const QStyleOption*  option, const QWidget*  widget) const
{
return theWrappedObject->subElementRect(subElement, option, widget);
}

void PythonQtWrapper_QStyle::unpolish(QStyle* theWrappedObject, QApplication*  arg__1)
{
theWrappedObject->unpolish(arg__1);
}

void PythonQtWrapper_QStyle::unpolish(QStyle* theWrappedObject, QWidget*  arg__1)
{
theWrappedObject->unpolish(arg__1);
}

Qt::Alignment  PythonQtWrapper_QStyle::static_QStyle_visualAlignment(Qt::LayoutDirection  direction, Qt::Alignment  alignment)
{
return QStyle::visualAlignment(direction, alignment);
}

QPoint  PythonQtWrapper_QStyle::static_QStyle_visualPos(Qt::LayoutDirection  direction, const QRect&  boundingRect, const QPoint&  logicalPos)
{
return QStyle::visualPos(direction, boundingRect, logicalPos);
}

QRect  PythonQtWrapper_QStyle::static_QStyle_visualRect(Qt::LayoutDirection  direction, const QRect&  boundingRect, const QRect&  logicalRect)
{
return QStyle::visualRect(direction, boundingRect, logicalRect);
}

