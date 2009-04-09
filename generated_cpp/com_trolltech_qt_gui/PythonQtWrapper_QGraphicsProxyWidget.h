#ifndef PYTHONQTWRAPPER_QGRAPHICSPROXYWIDGET_H
#define PYTHONQTWRAPPER_QGRAPHICSPROXYWIDGET_H

#include <qgraphicsproxywidget.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

class PythonQtWrapper_QGraphicsProxyWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsProxyWidget::Type};
public slots:
QGraphicsProxyWidget* new_QGraphicsProxyWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0);
void delete_QGraphicsProxyWidget(QGraphicsProxyWidget* obj) { delete obj; } 
   void paint(QGraphicsProxyWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   void setGeometry(QGraphicsProxyWidget* theWrappedObject, const QRectF&  rect);
   void setWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  widget);
   QRectF  subWidgetRect(QGraphicsProxyWidget* theWrappedObject, const QWidget*  widget) const;
   int  type(QGraphicsProxyWidget* theWrappedObject) const;
   QWidget*  widget(QGraphicsProxyWidget* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSPROXYWIDGET_H
