#ifndef PYTHONQTWRAPPER_QCLEANLOOKSSTYLE_H
#define PYTHONQTWRAPPER_QCLEANLOOKSSTYLE_H

#include <qcleanlooksstyle.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtShell_QCleanlooksStyle : public QCleanlooksStyle
{
public:
    PythonQtShell_QCleanlooksStyle():QCleanlooksStyle(),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void drawComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const;
virtual void drawControl(QStyle::ControlElement  ce, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const;
virtual void drawPrimitive(QStyle::PrimitiveElement  elem, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const;
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  o, QEvent*  e);
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = 0) const;
virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual int  pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
virtual void polish(QApplication*  app);
virtual void polish(QPalette&  pal);
virtual void polish(QWidget*  widget);
virtual QSize  sizeFromContents(QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const;
virtual QPalette  standardPalette() const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const;
virtual int  styleHint(QStyle::StyleHint  hint, const QStyleOption*  option = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const;
virtual QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
virtual void timerEvent(QTimerEvent*  event);
virtual void unpolish(QApplication*  app);
virtual void unpolish(QWidget*  widget);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCleanlooksStyle : public QCleanlooksStyle
{ public:
inline void promoted_drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const { QCleanlooksStyle::drawItemPixmap(painter, rect, alignment, pixmap); }
inline void promoted_unpolish(QWidget*  widget) { QCleanlooksStyle::unpolish(widget); }
inline QPixmap  promoted_generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const { return QCleanlooksStyle::generatedIconPixmap(iconMode, pixmap, opt); }
inline QRect  promoted_itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const { return QCleanlooksStyle::itemPixmapRect(r, flags, pixmap); }
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  elem, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const { QCleanlooksStyle::drawPrimitive(elem, option, painter, widget); }
inline void promoted_unpolish(QApplication*  app) { QCleanlooksStyle::unpolish(app); }
inline void promoted_drawComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const { QCleanlooksStyle::drawComplexControl(control, option, painter, widget); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QCleanlooksStyle::pixelMetric(metric, option, widget); }
inline QRect  promoted_subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const { return QCleanlooksStyle::subElementRect(r, opt, widget); }
inline QRect  promoted_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const { return QCleanlooksStyle::subControlRect(cc, opt, sc, widget); }
inline void promoted_drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const { QCleanlooksStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole); }
inline void promoted_polish(QPalette&  pal) { QCleanlooksStyle::polish(pal); }
inline void promoted_polish(QApplication*  app) { QCleanlooksStyle::polish(app); }
inline QPalette  promoted_standardPalette() const { return QCleanlooksStyle::standardPalette(); }
inline void promoted_drawControl(QStyle::ControlElement  ce, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const { QCleanlooksStyle::drawControl(ce, option, painter, widget); }
inline QSize  promoted_sizeFromContents(QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const { return QCleanlooksStyle::sizeFromContents(type, option, size, widget); }
inline int  promoted_styleHint(QStyle::StyleHint  hint, const QStyleOption*  option = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const { return QCleanlooksStyle::styleHint(hint, option, widget, returnData); }
inline void promoted_polish(QWidget*  widget) { QCleanlooksStyle::polish(widget); }
inline QStyle::SubControl  promoted_hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = 0) const { return QCleanlooksStyle::hitTestComplexControl(cc, opt, pt, w); }
};

class PythonQtWrapper_QCleanlooksStyle : public QObject
{ Q_OBJECT
public:
public slots:
QCleanlooksStyle* new_QCleanlooksStyle();
void delete_QCleanlooksStyle(QCleanlooksStyle* obj) { delete obj; } 
   void drawItemPixmap(QCleanlooksStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
   void unpolish(QCleanlooksStyle* theWrappedObject, QWidget*  widget);
   QPixmap  generatedIconPixmap(QCleanlooksStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
   QRect  itemPixmapRect(QCleanlooksStyle* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap) const;
   void drawPrimitive(QCleanlooksStyle* theWrappedObject, QStyle::PrimitiveElement  elem, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const;
   void unpolish(QCleanlooksStyle* theWrappedObject, QApplication*  app);
   void drawComplexControl(QCleanlooksStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const;
   int  pixelMetric(QCleanlooksStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   QRect  subElementRect(QCleanlooksStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
   QRect  subControlRect(QCleanlooksStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const;
   void drawItemText(QCleanlooksStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const;
   void polish(QCleanlooksStyle* theWrappedObject, QPalette&  pal);
   void polish(QCleanlooksStyle* theWrappedObject, QApplication*  app);
   QPalette  standardPalette(QCleanlooksStyle* theWrappedObject) const;
   void drawControl(QCleanlooksStyle* theWrappedObject, QStyle::ControlElement  ce, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const;
   QSize  sizeFromContents(QCleanlooksStyle* theWrappedObject, QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const;
   int  styleHint(QCleanlooksStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  option = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
   void polish(QCleanlooksStyle* theWrappedObject, QWidget*  widget);
   QStyle::SubControl  hitTestComplexControl(QCleanlooksStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = 0) const;
};

#endif // PYTHONQTWRAPPER_QCLEANLOOKSSTYLE_H
