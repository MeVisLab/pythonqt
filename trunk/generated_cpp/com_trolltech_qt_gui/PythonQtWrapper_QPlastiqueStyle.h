#ifndef PYTHONQTWRAPPER_QPLASTIQUESTYLE_H
#define PYTHONQTWRAPPER_QPLASTIQUESTYLE_H

#include <qplastiquestyle.h>
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
#include <qplastiquestyle.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QPlastiqueStyle : public QPlastiqueStyle
{
public:
    PythonQtShell_QPlastiqueStyle():QPlastiqueStyle(),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void drawComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const;
virtual void drawControl(QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const;
virtual void drawPrimitive(QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const;
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget = 0) const;
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
virtual QRect  subElementRect(QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const;
virtual void timerEvent(QTimerEvent*  event);
virtual void unpolish(QApplication*  app);
virtual void unpolish(QWidget*  widget);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPlastiqueStyle : public QPlastiqueStyle
{ public:
inline void promoted_unpolish(QWidget*  widget) { QPlastiqueStyle::unpolish(widget); }
inline int  promoted_styleHint(QStyle::StyleHint  hint, const QStyleOption*  option = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const { return QPlastiqueStyle::styleHint(hint, option, widget, returnData); }
inline QRect  promoted_subElementRect(QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const { return QPlastiqueStyle::subElementRect(element, option, widget); }
inline void promoted_polish(QPalette&  pal) { QPlastiqueStyle::polish(pal); }
inline QPalette  promoted_standardPalette() const { return QPlastiqueStyle::standardPalette(); }
inline void promoted_timerEvent(QTimerEvent*  event) { QPlastiqueStyle::timerEvent(event); }
inline void promoted_drawComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const { QPlastiqueStyle::drawComplexControl(control, option, painter, widget); }
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const { QPlastiqueStyle::drawPrimitive(element, option, painter, widget); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QPlastiqueStyle::pixelMetric(metric, option, widget); }
inline bool  promoted_eventFilter(QObject*  watched, QEvent*  event) { return QPlastiqueStyle::eventFilter(watched, event); }
inline void promoted_polish(QApplication*  app) { QPlastiqueStyle::polish(app); }
inline QStyle::SubControl  promoted_hitTestComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget = 0) const { return QPlastiqueStyle::hitTestComplexControl(control, option, pos, widget); }
inline void promoted_unpolish(QApplication*  app) { QPlastiqueStyle::unpolish(app); }
inline QSize  promoted_sizeFromContents(QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const { return QPlastiqueStyle::sizeFromContents(type, option, size, widget); }
inline void promoted_polish(QWidget*  widget) { QPlastiqueStyle::polish(widget); }
inline void promoted_drawControl(QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const { QPlastiqueStyle::drawControl(element, option, painter, widget); }
inline QRect  promoted_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const { return QPlastiqueStyle::subControlRect(cc, opt, sc, widget); }
};

class PythonQtWrapper_QPlastiqueStyle : public QObject
{ Q_OBJECT
public:
public slots:
QPlastiqueStyle* new_QPlastiqueStyle();
void delete_QPlastiqueStyle(QPlastiqueStyle* obj) { delete obj; } 
   void unpolish(QPlastiqueStyle* theWrappedObject, QWidget*  widget);
   int  styleHint(QPlastiqueStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  option = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
   QRect  subElementRect(QPlastiqueStyle* theWrappedObject, QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const;
   void polish(QPlastiqueStyle* theWrappedObject, QPalette&  pal);
   QPalette  standardPalette(QPlastiqueStyle* theWrappedObject) const;
   void timerEvent(QPlastiqueStyle* theWrappedObject, QTimerEvent*  event);
   void drawComplexControl(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const;
   void drawPrimitive(QPlastiqueStyle* theWrappedObject, QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const;
   int  pixelMetric(QPlastiqueStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   bool  eventFilter(QPlastiqueStyle* theWrappedObject, QObject*  watched, QEvent*  event);
   void polish(QPlastiqueStyle* theWrappedObject, QApplication*  app);
   QStyle::SubControl  hitTestComplexControl(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget = 0) const;
   void unpolish(QPlastiqueStyle* theWrappedObject, QApplication*  app);
   QSize  sizeFromContents(QPlastiqueStyle* theWrappedObject, QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const;
   void polish(QPlastiqueStyle* theWrappedObject, QWidget*  widget);
   void drawControl(QPlastiqueStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const;
   QRect  subControlRect(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const;
};

#endif // PYTHONQTWRAPPER_QPLASTIQUESTYLE_H
