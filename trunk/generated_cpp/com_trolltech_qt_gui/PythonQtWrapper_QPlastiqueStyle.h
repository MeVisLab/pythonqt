#ifndef PYTHONQTWRAPPER_QPLASTIQUESTYLE_H
#define PYTHONQTWRAPPER_QPLASTIQUESTYLE_H

#include <qplastiquestyle.h>
#include <QObject>

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

class PythonQtWrapper_QPlastiqueStyle : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QPlastiqueStyle(QPlastiqueStyle* obj) { delete obj; } 
   void drawComplexControl(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const;
   void drawControl(QPlastiqueStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const;
   void drawPrimitive(QPlastiqueStyle* theWrappedObject, QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const;
   QStyle::SubControl  hitTestComplexControl(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget = 0) const;
   int  pixelMetric(QPlastiqueStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   void polish(QPlastiqueStyle* theWrappedObject, QApplication*  app);
   void polish(QPlastiqueStyle* theWrappedObject, QPalette&  pal);
   void polish(QPlastiqueStyle* theWrappedObject, QWidget*  widget);
   QSize  sizeFromContents(QPlastiqueStyle* theWrappedObject, QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const;
   QPalette  standardPalette(QPlastiqueStyle* theWrappedObject) const;
   int  styleHint(QPlastiqueStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  option = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
   QRect  subControlRect(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const;
   QRect  subElementRect(QPlastiqueStyle* theWrappedObject, QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const;
   void unpolish(QPlastiqueStyle* theWrappedObject, QApplication*  app);
   void unpolish(QPlastiqueStyle* theWrappedObject, QWidget*  widget);
};

#endif // PYTHONQTWRAPPER_QPLASTIQUESTYLE_H
