#ifndef PYTHONQTWRAPPER_QSTYLEPAINTER_H
#define PYTHONQTWRAPPER_QSTYLEPAINTER_H

#include <qstylepainter.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtWrapper_QStylePainter : public QObject
{ Q_OBJECT
public:
public slots:
QStylePainter* new_QStylePainter();
QStylePainter* new_QStylePainter(QPaintDevice*  pd, QWidget*  w);
QStylePainter* new_QStylePainter(QWidget*  w);
void delete_QStylePainter(QStylePainter* obj) { delete obj; } 
   bool  begin(QStylePainter* theWrappedObject, QPaintDevice*  pd, QWidget*  w);
   void drawComplexControl(QStylePainter* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex&  opt);
   bool  begin(QStylePainter* theWrappedObject, QWidget*  w);
   void drawItemText(QStylePainter* theWrappedObject, const QRect&  r, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole);
   QStyle*  style(QStylePainter* theWrappedObject) const;
   void drawControl(QStylePainter* theWrappedObject, QStyle::ControlElement  ce, const QStyleOption&  opt);
   void drawPrimitive(QStylePainter* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption&  opt);
   void drawItemPixmap(QStylePainter* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap);
};

#endif // PYTHONQTWRAPPER_QSTYLEPAINTER_H
