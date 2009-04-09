#include "PythonQtWrapper_QMdiArea.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmdiarea.h>
#include <qmdisubwindow.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

QMdiArea* PythonQtWrapper_QMdiArea::new_QMdiArea(QWidget*  parent)
{ 
return new QMdiArea(parent); }

QMdiArea::WindowOrder  PythonQtWrapper_QMdiArea::activationOrder(QMdiArea* theWrappedObject) const
{
return theWrappedObject->activationOrder();
}

QMdiSubWindow*  PythonQtWrapper_QMdiArea::activeSubWindow(QMdiArea* theWrappedObject) const
{
return theWrappedObject->activeSubWindow();
}

QMdiSubWindow*  PythonQtWrapper_QMdiArea::addSubWindow(QMdiArea* theWrappedObject, QWidget*  widget, Qt::WindowFlags  flags)
{
return theWrappedObject->addSubWindow(widget, flags);
}

QBrush  PythonQtWrapper_QMdiArea::background(QMdiArea* theWrappedObject) const
{
return theWrappedObject->background();
}

QMdiSubWindow*  PythonQtWrapper_QMdiArea::currentSubWindow(QMdiArea* theWrappedObject) const
{
return theWrappedObject->currentSubWindow();
}

QSize  PythonQtWrapper_QMdiArea::minimumSizeHint(QMdiArea* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

void PythonQtWrapper_QMdiArea::removeSubWindow(QMdiArea* theWrappedObject, QWidget*  widget)
{
theWrappedObject->removeSubWindow(widget);
}

void PythonQtWrapper_QMdiArea::setActivationOrder(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order)
{
theWrappedObject->setActivationOrder(order);
}

void PythonQtWrapper_QMdiArea::setBackground(QMdiArea* theWrappedObject, const QBrush&  background)
{
theWrappedObject->setBackground(background);
}

void PythonQtWrapper_QMdiArea::setOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  option, bool  on)
{
theWrappedObject->setOption(option, on);
}

void PythonQtWrapper_QMdiArea::setTabPosition(QMdiArea* theWrappedObject, QTabWidget::TabPosition  position)
{
theWrappedObject->setTabPosition(position);
}

void PythonQtWrapper_QMdiArea::setTabShape(QMdiArea* theWrappedObject, QTabWidget::TabShape  shape)
{
theWrappedObject->setTabShape(shape);
}

void PythonQtWrapper_QMdiArea::setViewMode(QMdiArea* theWrappedObject, QMdiArea::ViewMode  mode)
{
theWrappedObject->setViewMode(mode);
}

QSize  PythonQtWrapper_QMdiArea::sizeHint(QMdiArea* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QList<QMdiSubWindow* >  PythonQtWrapper_QMdiArea::subWindowList(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order) const
{
return theWrappedObject->subWindowList(order);
}

QTabWidget::TabPosition  PythonQtWrapper_QMdiArea::tabPosition(QMdiArea* theWrappedObject) const
{
return theWrappedObject->tabPosition();
}

QTabWidget::TabShape  PythonQtWrapper_QMdiArea::tabShape(QMdiArea* theWrappedObject) const
{
return theWrappedObject->tabShape();
}

bool  PythonQtWrapper_QMdiArea::testOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  opton) const
{
return theWrappedObject->testOption(opton);
}

QMdiArea::ViewMode  PythonQtWrapper_QMdiArea::viewMode(QMdiArea* theWrappedObject) const
{
return theWrappedObject->viewMode();
}

