#ifndef PYTHONQTWRAPPER_QCDESTYLE_H
#define PYTHONQTWRAPPER_QCDESTYLE_H

#include <qcdestyle.h>
#include <QObject>

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

class PythonQtWrapper_QCDEStyle : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QCDEStyle(QCDEStyle* obj) { delete obj; } 
   void drawControl(QCDEStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void drawPrimitive(QCDEStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   int  pixelMetric(QCDEStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   QPalette  standardPalette(QCDEStyle* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QCDESTYLE_H
