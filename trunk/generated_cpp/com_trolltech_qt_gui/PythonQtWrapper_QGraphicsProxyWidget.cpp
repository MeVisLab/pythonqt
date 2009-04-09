#include "PythonQtWrapper_QGraphicsProxyWidget.h"

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

QGraphicsProxyWidget* PythonQtWrapper_QGraphicsProxyWidget::new_QGraphicsProxyWidget(QGraphicsItem*  parent, Qt::WindowFlags  wFlags)
{ 
return new QGraphicsProxyWidget(parent, wFlags); }

void PythonQtWrapper_QGraphicsProxyWidget::paint(QGraphicsProxyWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
theWrappedObject->paint(painter, option, widget);
}

void PythonQtWrapper_QGraphicsProxyWidget::setGeometry(QGraphicsProxyWidget* theWrappedObject, const QRectF&  rect)
{
theWrappedObject->setGeometry(rect);
}

void PythonQtWrapper_QGraphicsProxyWidget::setWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  widget)
{
theWrappedObject->setWidget(widget);
}

QRectF  PythonQtWrapper_QGraphicsProxyWidget::subWidgetRect(QGraphicsProxyWidget* theWrappedObject, const QWidget*  widget) const
{
return theWrappedObject->subWidgetRect(widget);
}

int  PythonQtWrapper_QGraphicsProxyWidget::type(QGraphicsProxyWidget* theWrappedObject) const
{
return theWrappedObject->type();
}

QWidget*  PythonQtWrapper_QGraphicsProxyWidget::widget(QGraphicsProxyWidget* theWrappedObject) const
{
return theWrappedObject->widget();
}

