#include "PythonQtWrapper_QPlastiqueStyle.h"

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
#include <qplastiquestyle.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qwidget.h>

void PythonQtWrapper_QPlastiqueStyle::drawComplexControl(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const
{
theWrappedObject->drawComplexControl(control, option, painter, widget);
}

void PythonQtWrapper_QPlastiqueStyle::drawControl(QPlastiqueStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
theWrappedObject->drawControl(element, option, painter, widget);
}

void PythonQtWrapper_QPlastiqueStyle::drawPrimitive(QPlastiqueStyle* theWrappedObject, QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
theWrappedObject->drawPrimitive(element, option, painter, widget);
}

QStyle::SubControl  PythonQtWrapper_QPlastiqueStyle::hitTestComplexControl(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget) const
{
return theWrappedObject->hitTestComplexControl(control, option, pos, widget);
}

int  PythonQtWrapper_QPlastiqueStyle::pixelMetric(QPlastiqueStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option, const QWidget*  widget) const
{
return theWrappedObject->pixelMetric(metric, option, widget);
}

void PythonQtWrapper_QPlastiqueStyle::polish(QPlastiqueStyle* theWrappedObject, QApplication*  app)
{
theWrappedObject->polish(app);
}

void PythonQtWrapper_QPlastiqueStyle::polish(QPlastiqueStyle* theWrappedObject, QPalette&  pal)
{
theWrappedObject->polish(pal);
}

void PythonQtWrapper_QPlastiqueStyle::polish(QPlastiqueStyle* theWrappedObject, QWidget*  widget)
{
theWrappedObject->polish(widget);
}

QSize  PythonQtWrapper_QPlastiqueStyle::sizeFromContents(QPlastiqueStyle* theWrappedObject, QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const
{
return theWrappedObject->sizeFromContents(type, option, size, widget);
}

QPalette  PythonQtWrapper_QPlastiqueStyle::standardPalette(QPlastiqueStyle* theWrappedObject) const
{
return theWrappedObject->standardPalette();
}

int  PythonQtWrapper_QPlastiqueStyle::styleHint(QPlastiqueStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  option, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
return theWrappedObject->styleHint(hint, option, widget, returnData);
}

QRect  PythonQtWrapper_QPlastiqueStyle::subControlRect(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const
{
return theWrappedObject->subControlRect(cc, opt, sc, widget);
}

QRect  PythonQtWrapper_QPlastiqueStyle::subElementRect(QPlastiqueStyle* theWrappedObject, QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const
{
return theWrappedObject->subElementRect(element, option, widget);
}

void PythonQtWrapper_QPlastiqueStyle::unpolish(QPlastiqueStyle* theWrappedObject, QApplication*  app)
{
theWrappedObject->unpolish(app);
}

void PythonQtWrapper_QPlastiqueStyle::unpolish(QPlastiqueStyle* theWrappedObject, QWidget*  widget)
{
theWrappedObject->unpolish(widget);
}

