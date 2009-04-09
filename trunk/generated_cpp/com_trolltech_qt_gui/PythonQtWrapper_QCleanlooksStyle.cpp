#include "PythonQtWrapper_QCleanlooksStyle.h"

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

void PythonQtWrapper_QCleanlooksStyle::drawComplexControl(QCleanlooksStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const
{
theWrappedObject->drawComplexControl(control, option, painter, widget);
}

void PythonQtWrapper_QCleanlooksStyle::drawControl(QCleanlooksStyle* theWrappedObject, QStyle::ControlElement  ce, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
theWrappedObject->drawControl(ce, option, painter, widget);
}

void PythonQtWrapper_QCleanlooksStyle::drawItemPixmap(QCleanlooksStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const
{
theWrappedObject->drawItemPixmap(painter, rect, alignment, pixmap);
}

void PythonQtWrapper_QCleanlooksStyle::drawItemText(QCleanlooksStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const
{
theWrappedObject->drawItemText(painter, rect, flags, pal, enabled, text, textRole);
}

void PythonQtWrapper_QCleanlooksStyle::drawPrimitive(QCleanlooksStyle* theWrappedObject, QStyle::PrimitiveElement  elem, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
theWrappedObject->drawPrimitive(elem, option, painter, widget);
}

QPixmap  PythonQtWrapper_QCleanlooksStyle::generatedIconPixmap(QCleanlooksStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const
{
return theWrappedObject->generatedIconPixmap(iconMode, pixmap, opt);
}

QStyle::SubControl  PythonQtWrapper_QCleanlooksStyle::hitTestComplexControl(QCleanlooksStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w) const
{
return theWrappedObject->hitTestComplexControl(cc, opt, pt, w);
}

QRect  PythonQtWrapper_QCleanlooksStyle::itemPixmapRect(QCleanlooksStyle* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap) const
{
return theWrappedObject->itemPixmapRect(r, flags, pixmap);
}

int  PythonQtWrapper_QCleanlooksStyle::pixelMetric(QCleanlooksStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option, const QWidget*  widget) const
{
return theWrappedObject->pixelMetric(metric, option, widget);
}

void PythonQtWrapper_QCleanlooksStyle::polish(QCleanlooksStyle* theWrappedObject, QApplication*  app)
{
theWrappedObject->polish(app);
}

void PythonQtWrapper_QCleanlooksStyle::polish(QCleanlooksStyle* theWrappedObject, QPalette&  pal)
{
theWrappedObject->polish(pal);
}

void PythonQtWrapper_QCleanlooksStyle::polish(QCleanlooksStyle* theWrappedObject, QWidget*  widget)
{
theWrappedObject->polish(widget);
}

QSize  PythonQtWrapper_QCleanlooksStyle::sizeFromContents(QCleanlooksStyle* theWrappedObject, QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const
{
return theWrappedObject->sizeFromContents(type, option, size, widget);
}

QPalette  PythonQtWrapper_QCleanlooksStyle::standardPalette(QCleanlooksStyle* theWrappedObject) const
{
return theWrappedObject->standardPalette();
}

int  PythonQtWrapper_QCleanlooksStyle::styleHint(QCleanlooksStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  option, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
return theWrappedObject->styleHint(hint, option, widget, returnData);
}

QRect  PythonQtWrapper_QCleanlooksStyle::subControlRect(QCleanlooksStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const
{
return theWrappedObject->subControlRect(cc, opt, sc, widget);
}

QRect  PythonQtWrapper_QCleanlooksStyle::subElementRect(QCleanlooksStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget) const
{
return theWrappedObject->subElementRect(r, opt, widget);
}

void PythonQtWrapper_QCleanlooksStyle::unpolish(QCleanlooksStyle* theWrappedObject, QApplication*  app)
{
theWrappedObject->unpolish(app);
}

void PythonQtWrapper_QCleanlooksStyle::unpolish(QCleanlooksStyle* theWrappedObject, QWidget*  widget)
{
theWrappedObject->unpolish(widget);
}

