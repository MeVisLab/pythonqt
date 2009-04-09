#include "PythonQtWrapper_QToolBar.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
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
#include <qtoolbar.h>
#include <qwidget.h>

QToolBar* PythonQtWrapper_QToolBar::new_QToolBar(QWidget*  parent)
{ 
return new QToolBar(parent); }

QToolBar* PythonQtWrapper_QToolBar::new_QToolBar(const QString&  title, QWidget*  parent)
{ 
return new QToolBar(title, parent); }

QAction*  PythonQtWrapper_QToolBar::actionAt(QToolBar* theWrappedObject, const QPoint&  p) const
{
return theWrappedObject->actionAt(p);
}

QAction*  PythonQtWrapper_QToolBar::actionAt(QToolBar* theWrappedObject, int  x, int  y) const
{
return theWrappedObject->actionAt(x, y);
}

QRect  PythonQtWrapper_QToolBar::actionGeometry(QToolBar* theWrappedObject, QAction*  action) const
{
return theWrappedObject->actionGeometry(action);
}

QAction*  PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text)
{
return theWrappedObject->addAction(icon, text);
}

QAction*  PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, const QString&  text)
{
return theWrappedObject->addAction(text);
}

QAction*  PythonQtWrapper_QToolBar::addSeparator(QToolBar* theWrappedObject)
{
return theWrappedObject->addSeparator();
}

QAction*  PythonQtWrapper_QToolBar::addWidget(QToolBar* theWrappedObject, QWidget*  widget)
{
return theWrappedObject->addWidget(widget);
}

Qt::ToolBarAreas  PythonQtWrapper_QToolBar::allowedAreas(QToolBar* theWrappedObject) const
{
return theWrappedObject->allowedAreas();
}

void PythonQtWrapper_QToolBar::clear(QToolBar* theWrappedObject)
{
theWrappedObject->clear();
}

QSize  PythonQtWrapper_QToolBar::iconSize(QToolBar* theWrappedObject) const
{
return theWrappedObject->iconSize();
}

QAction*  PythonQtWrapper_QToolBar::insertSeparator(QToolBar* theWrappedObject, QAction*  before)
{
return theWrappedObject->insertSeparator(before);
}

QAction*  PythonQtWrapper_QToolBar::insertWidget(QToolBar* theWrappedObject, QAction*  before, QWidget*  widget)
{
return theWrappedObject->insertWidget(before, widget);
}

bool  PythonQtWrapper_QToolBar::isAreaAllowed(QToolBar* theWrappedObject, Qt::ToolBarArea  area) const
{
return theWrappedObject->isAreaAllowed(area);
}

bool  PythonQtWrapper_QToolBar::isFloatable(QToolBar* theWrappedObject) const
{
return theWrappedObject->isFloatable();
}

bool  PythonQtWrapper_QToolBar::isFloating(QToolBar* theWrappedObject) const
{
return theWrappedObject->isFloating();
}

bool  PythonQtWrapper_QToolBar::isMovable(QToolBar* theWrappedObject) const
{
return theWrappedObject->isMovable();
}

Qt::Orientation  PythonQtWrapper_QToolBar::orientation(QToolBar* theWrappedObject) const
{
return theWrappedObject->orientation();
}

void PythonQtWrapper_QToolBar::setAllowedAreas(QToolBar* theWrappedObject, Qt::ToolBarAreas  areas)
{
theWrappedObject->setAllowedAreas(areas);
}

void PythonQtWrapper_QToolBar::setFloatable(QToolBar* theWrappedObject, bool  floatable)
{
theWrappedObject->setFloatable(floatable);
}

void PythonQtWrapper_QToolBar::setMovable(QToolBar* theWrappedObject, bool  movable)
{
theWrappedObject->setMovable(movable);
}

void PythonQtWrapper_QToolBar::setOrientation(QToolBar* theWrappedObject, Qt::Orientation  orientation)
{
theWrappedObject->setOrientation(orientation);
}

QAction*  PythonQtWrapper_QToolBar::toggleViewAction(QToolBar* theWrappedObject) const
{
return theWrappedObject->toggleViewAction();
}

Qt::ToolButtonStyle  PythonQtWrapper_QToolBar::toolButtonStyle(QToolBar* theWrappedObject) const
{
return theWrappedObject->toolButtonStyle();
}

QWidget*  PythonQtWrapper_QToolBar::widgetForAction(QToolBar* theWrappedObject, QAction*  action) const
{
return theWrappedObject->widgetForAction(action);
}

