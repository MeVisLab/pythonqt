#include "PythonQtWrapper_QStylePainter.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qimage.h>
#include <qline.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qstylepainter.h>
#include <qtransform.h>
#include <qvector.h>
#include <qwidget.h>

QStylePainter* PythonQtWrapper_QStylePainter::new_QStylePainter()
{ 
return new QStylePainter(); }

QStylePainter* PythonQtWrapper_QStylePainter::new_QStylePainter(QPaintDevice*  pd, QWidget*  w)
{ 
return new QStylePainter(pd, w); }

QStylePainter* PythonQtWrapper_QStylePainter::new_QStylePainter(QWidget*  w)
{ 
return new QStylePainter(w); }

bool  PythonQtWrapper_QStylePainter::begin(QStylePainter* theWrappedObject, QPaintDevice*  pd, QWidget*  w)
{
return  theWrappedObject->begin(pd, w);
}

void PythonQtWrapper_QStylePainter::drawComplexControl(QStylePainter* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex&  opt)
{
 theWrappedObject->drawComplexControl(cc, opt);
}

bool  PythonQtWrapper_QStylePainter::begin(QStylePainter* theWrappedObject, QWidget*  w)
{
return  theWrappedObject->begin(w);
}

void PythonQtWrapper_QStylePainter::drawItemText(QStylePainter* theWrappedObject, const QRect&  r, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole)
{
 theWrappedObject->drawItemText(r, flags, pal, enabled, text, textRole);
}

QStyle*  PythonQtWrapper_QStylePainter::style(QStylePainter* theWrappedObject) const
{
return  theWrappedObject->style();
}

void PythonQtWrapper_QStylePainter::drawControl(QStylePainter* theWrappedObject, QStyle::ControlElement  ce, const QStyleOption&  opt)
{
 theWrappedObject->drawControl(ce, opt);
}

void PythonQtWrapper_QStylePainter::drawPrimitive(QStylePainter* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption&  opt)
{
 theWrappedObject->drawPrimitive(pe, opt);
}

void PythonQtWrapper_QStylePainter::drawItemPixmap(QStylePainter* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap)
{
 theWrappedObject->drawItemPixmap(r, flags, pixmap);
}

