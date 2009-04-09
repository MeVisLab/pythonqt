#include "PythonQtWrapper_QCDEStyle.h"

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

void PythonQtWrapper_QCDEStyle::drawControl(QCDEStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
theWrappedObject->drawControl(element, opt, p, w);
}

void PythonQtWrapper_QCDEStyle::drawPrimitive(QCDEStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
theWrappedObject->drawPrimitive(pe, opt, p, w);
}

int  PythonQtWrapper_QCDEStyle::pixelMetric(QCDEStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option, const QWidget*  widget) const
{
return theWrappedObject->pixelMetric(metric, option, widget);
}

QPalette  PythonQtWrapper_QCDEStyle::standardPalette(QCDEStyle* theWrappedObject) const
{
return theWrappedObject->standardPalette();
}

