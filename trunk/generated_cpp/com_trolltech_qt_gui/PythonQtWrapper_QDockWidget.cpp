#include "PythonQtWrapper_QDockWidget.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdockwidget.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

QDockWidget* PythonQtWrapper_QDockWidget::new_QDockWidget(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new QDockWidget(parent, flags); }

QDockWidget* PythonQtWrapper_QDockWidget::new_QDockWidget(const QString&  title, QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new QDockWidget(title, parent, flags); }

Qt::DockWidgetAreas  PythonQtWrapper_QDockWidget::allowedAreas(QDockWidget* theWrappedObject) const
{
return theWrappedObject->allowedAreas();
}

QDockWidget::DockWidgetFeatures  PythonQtWrapper_QDockWidget::features(QDockWidget* theWrappedObject) const
{
return theWrappedObject->features();
}

bool  PythonQtWrapper_QDockWidget::isAreaAllowed(QDockWidget* theWrappedObject, Qt::DockWidgetArea  area) const
{
return theWrappedObject->isAreaAllowed(area);
}

bool  PythonQtWrapper_QDockWidget::isFloating(QDockWidget* theWrappedObject) const
{
return theWrappedObject->isFloating();
}

void PythonQtWrapper_QDockWidget::setAllowedAreas(QDockWidget* theWrappedObject, Qt::DockWidgetAreas  areas)
{
theWrappedObject->setAllowedAreas(areas);
}

void PythonQtWrapper_QDockWidget::setFeatures(QDockWidget* theWrappedObject, QDockWidget::DockWidgetFeatures  features)
{
theWrappedObject->setFeatures(features);
}

void PythonQtWrapper_QDockWidget::setFloating(QDockWidget* theWrappedObject, bool  floating)
{
theWrappedObject->setFloating(floating);
}

void PythonQtWrapper_QDockWidget::setTitleBarWidget(QDockWidget* theWrappedObject, QWidget*  widget)
{
theWrappedObject->setTitleBarWidget(widget);
}

void PythonQtWrapper_QDockWidget::setWidget(QDockWidget* theWrappedObject, QWidget*  widget)
{
theWrappedObject->setWidget(widget);
}

QWidget*  PythonQtWrapper_QDockWidget::titleBarWidget(QDockWidget* theWrappedObject) const
{
return theWrappedObject->titleBarWidget();
}

QAction*  PythonQtWrapper_QDockWidget::toggleViewAction(QDockWidget* theWrappedObject) const
{
return theWrappedObject->toggleViewAction();
}

QWidget*  PythonQtWrapper_QDockWidget::widget(QDockWidget* theWrappedObject) const
{
return theWrappedObject->widget();
}

