#ifndef PYTHONQTWRAPPER_QWINDOWSSTYLE_H
#define PYTHONQTWRAPPER_QWINDOWSSTYLE_H

#include <qwindowsstyle.h>
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

class PythonQtShell_QWindowsStyle : public QWindowsStyle
{
public:
    PythonQtShell_QWindowsStyle():QWindowsStyle(),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const;
virtual void drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  o, QEvent*  e);
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w) const;
virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual int  pixelMetric(QStyle::PixelMetric  pm, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
virtual void polish(QApplication*  arg__1);
virtual void polish(QPalette&  arg__1);
virtual void polish(QWidget*  arg__1);
virtual QSize  sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
virtual QPalette  standardPalette() const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const;
virtual int  styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w) const;
virtual QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
virtual void timerEvent(QTimerEvent*  event);
virtual void unpolish(QApplication*  arg__1);
virtual void unpolish(QWidget*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWindowsStyle : public QWindowsStyle
{ public:
inline QRect  promoted_subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const { return QWindowsStyle::subElementRect(r, opt, widget); }
inline void promoted_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QWindowsStyle::drawControl(element, opt, p, w); }
inline int  promoted_styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const { return QWindowsStyle::styleHint(hint, opt, widget, returnData); }
inline void promoted_timerEvent(QTimerEvent*  event) { QWindowsStyle::timerEvent(event); }
inline void promoted_drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const { QWindowsStyle::drawComplexControl(cc, opt, p, w); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  pm, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QWindowsStyle::pixelMetric(pm, option, widget); }
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QWindowsStyle::drawPrimitive(pe, opt, p, w); }
inline void promoted_polish(QApplication*  arg__1) { QWindowsStyle::polish(arg__1); }
inline QSize  promoted_sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const { return QWindowsStyle::sizeFromContents(ct, opt, contentsSize, widget); }
inline bool  promoted_eventFilter(QObject*  o, QEvent*  e) { return QWindowsStyle::eventFilter(o, e); }
inline void promoted_polish(QPalette&  arg__1) { QWindowsStyle::polish(arg__1); }
inline void promoted_unpolish(QApplication*  arg__1) { QWindowsStyle::unpolish(arg__1); }
inline void promoted_polish(QWidget*  arg__1) { QWindowsStyle::polish(arg__1); }
inline void promoted_unpolish(QWidget*  arg__1) { QWindowsStyle::unpolish(arg__1); }
};

class PythonQtWrapper_QWindowsStyle : public QObject
{ Q_OBJECT
public:
public slots:
QWindowsStyle* new_QWindowsStyle();
void delete_QWindowsStyle(QWindowsStyle* obj) { delete obj; } 
   QRect  subElementRect(QWindowsStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
   void drawControl(QWindowsStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   int  styleHint(QWindowsStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
   void timerEvent(QWindowsStyle* theWrappedObject, QTimerEvent*  event);
   void drawComplexControl(QWindowsStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
   int  pixelMetric(QWindowsStyle* theWrappedObject, QStyle::PixelMetric  pm, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   void drawPrimitive(QWindowsStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void polish(QWindowsStyle* theWrappedObject, QApplication*  arg__1);
   QSize  sizeFromContents(QWindowsStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
   bool  eventFilter(QWindowsStyle* theWrappedObject, QObject*  o, QEvent*  e);
   void polish(QWindowsStyle* theWrappedObject, QPalette&  arg__1);
   void unpolish(QWindowsStyle* theWrappedObject, QApplication*  arg__1);
   void polish(QWindowsStyle* theWrappedObject, QWidget*  arg__1);
   void unpolish(QWindowsStyle* theWrappedObject, QWidget*  arg__1);
};

#endif // PYTHONQTWRAPPER_QWINDOWSSTYLE_H
