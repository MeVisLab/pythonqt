#include "PythonQtWrapper_QMainWindow.h"

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
#include <qmainwindow.h>
#include <qmenu.h>
#include <qmenubar.h>
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
#include <qstatusbar.h>
#include <qstyle.h>
#include <qtoolbar.h>
#include <qwidget.h>

QMainWindow* PythonQtWrapper_QMainWindow::new_QMainWindow(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new QMainWindow(parent, flags); }

void PythonQtWrapper_QMainWindow::addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget)
{
theWrappedObject->addDockWidget(area, dockwidget);
}

void PythonQtWrapper_QMainWindow::addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget, Qt::Orientation  orientation)
{
theWrappedObject->addDockWidget(area, dockwidget, orientation);
}

void PythonQtWrapper_QMainWindow::addToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar)
{
theWrappedObject->addToolBar(toolbar);
}

void PythonQtWrapper_QMainWindow::addToolBar(QMainWindow* theWrappedObject, Qt::ToolBarArea  area, QToolBar*  toolbar)
{
theWrappedObject->addToolBar(area, toolbar);
}

QToolBar*  PythonQtWrapper_QMainWindow::addToolBar(QMainWindow* theWrappedObject, const QString&  title)
{
return theWrappedObject->addToolBar(title);
}

void PythonQtWrapper_QMainWindow::addToolBarBreak(QMainWindow* theWrappedObject, Qt::ToolBarArea  area)
{
theWrappedObject->addToolBarBreak(area);
}

QWidget*  PythonQtWrapper_QMainWindow::centralWidget(QMainWindow* theWrappedObject) const
{
return theWrappedObject->centralWidget();
}

Qt::DockWidgetArea  PythonQtWrapper_QMainWindow::corner(QMainWindow* theWrappedObject, Qt::Corner  corner) const
{
return theWrappedObject->corner(corner);
}

QMenu*  PythonQtWrapper_QMainWindow::createPopupMenu(QMainWindow* theWrappedObject)
{
return theWrappedObject->createPopupMenu();
}

QMainWindow::DockOptions  PythonQtWrapper_QMainWindow::dockOptions(QMainWindow* theWrappedObject) const
{
return theWrappedObject->dockOptions();
}

Qt::DockWidgetArea  PythonQtWrapper_QMainWindow::dockWidgetArea(QMainWindow* theWrappedObject, QDockWidget*  dockwidget) const
{
return theWrappedObject->dockWidgetArea(dockwidget);
}

QSize  PythonQtWrapper_QMainWindow::iconSize(QMainWindow* theWrappedObject) const
{
return theWrappedObject->iconSize();
}

void PythonQtWrapper_QMainWindow::insertToolBar(QMainWindow* theWrappedObject, QToolBar*  before, QToolBar*  toolbar)
{
theWrappedObject->insertToolBar(before, toolbar);
}

void PythonQtWrapper_QMainWindow::insertToolBarBreak(QMainWindow* theWrappedObject, QToolBar*  before)
{
theWrappedObject->insertToolBarBreak(before);
}

bool  PythonQtWrapper_QMainWindow::isAnimated(QMainWindow* theWrappedObject) const
{
return theWrappedObject->isAnimated();
}

bool  PythonQtWrapper_QMainWindow::isDockNestingEnabled(QMainWindow* theWrappedObject) const
{
return theWrappedObject->isDockNestingEnabled();
}

bool  PythonQtWrapper_QMainWindow::isSeparator(QMainWindow* theWrappedObject, const QPoint&  pos) const
{
return theWrappedObject->isSeparator(pos);
}

QMenuBar*  PythonQtWrapper_QMainWindow::menuBar(QMainWindow* theWrappedObject) const
{
return theWrappedObject->menuBar();
}

QWidget*  PythonQtWrapper_QMainWindow::menuWidget(QMainWindow* theWrappedObject) const
{
return theWrappedObject->menuWidget();
}

void PythonQtWrapper_QMainWindow::removeDockWidget(QMainWindow* theWrappedObject, QDockWidget*  dockwidget)
{
theWrappedObject->removeDockWidget(dockwidget);
}

void PythonQtWrapper_QMainWindow::removeToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar)
{
theWrappedObject->removeToolBar(toolbar);
}

void PythonQtWrapper_QMainWindow::removeToolBarBreak(QMainWindow* theWrappedObject, QToolBar*  before)
{
theWrappedObject->removeToolBarBreak(before);
}

bool  PythonQtWrapper_QMainWindow::restoreDockWidget(QMainWindow* theWrappedObject, QDockWidget*  dockwidget)
{
return theWrappedObject->restoreDockWidget(dockwidget);
}

bool  PythonQtWrapper_QMainWindow::restoreState(QMainWindow* theWrappedObject, const QByteArray&  state, int  version)
{
return theWrappedObject->restoreState(state, version);
}

QByteArray  PythonQtWrapper_QMainWindow::saveState(QMainWindow* theWrappedObject, int  version) const
{
return theWrappedObject->saveState(version);
}

void PythonQtWrapper_QMainWindow::setCentralWidget(QMainWindow* theWrappedObject, QWidget*  widget)
{
theWrappedObject->setCentralWidget(widget);
}

void PythonQtWrapper_QMainWindow::setCorner(QMainWindow* theWrappedObject, Qt::Corner  corner, Qt::DockWidgetArea  area)
{
theWrappedObject->setCorner(corner, area);
}

void PythonQtWrapper_QMainWindow::setDockOptions(QMainWindow* theWrappedObject, QMainWindow::DockOptions  options)
{
theWrappedObject->setDockOptions(options);
}

void PythonQtWrapper_QMainWindow::setIconSize(QMainWindow* theWrappedObject, const QSize&  iconSize)
{
theWrappedObject->setIconSize(iconSize);
}

void PythonQtWrapper_QMainWindow::setMenuBar(QMainWindow* theWrappedObject, QMenuBar*  menubar)
{
theWrappedObject->setMenuBar(menubar);
}

void PythonQtWrapper_QMainWindow::setMenuWidget(QMainWindow* theWrappedObject, QWidget*  menubar)
{
theWrappedObject->setMenuWidget(menubar);
}

void PythonQtWrapper_QMainWindow::setStatusBar(QMainWindow* theWrappedObject, QStatusBar*  statusbar)
{
theWrappedObject->setStatusBar(statusbar);
}

void PythonQtWrapper_QMainWindow::setToolButtonStyle(QMainWindow* theWrappedObject, Qt::ToolButtonStyle  toolButtonStyle)
{
theWrappedObject->setToolButtonStyle(toolButtonStyle);
}

void PythonQtWrapper_QMainWindow::setUnifiedTitleAndToolBarOnMac(QMainWindow* theWrappedObject, bool  set)
{
theWrappedObject->setUnifiedTitleAndToolBarOnMac(set);
}

void PythonQtWrapper_QMainWindow::splitDockWidget(QMainWindow* theWrappedObject, QDockWidget*  after, QDockWidget*  dockwidget, Qt::Orientation  orientation)
{
theWrappedObject->splitDockWidget(after, dockwidget, orientation);
}

QStatusBar*  PythonQtWrapper_QMainWindow::statusBar(QMainWindow* theWrappedObject) const
{
return theWrappedObject->statusBar();
}

void PythonQtWrapper_QMainWindow::tabifyDockWidget(QMainWindow* theWrappedObject, QDockWidget*  first, QDockWidget*  second)
{
theWrappedObject->tabifyDockWidget(first, second);
}

Qt::ToolBarArea  PythonQtWrapper_QMainWindow::toolBarArea(QMainWindow* theWrappedObject, QToolBar*  toolbar) const
{
return theWrappedObject->toolBarArea(toolbar);
}

bool  PythonQtWrapper_QMainWindow::toolBarBreak(QMainWindow* theWrappedObject, QToolBar*  toolbar) const
{
return theWrappedObject->toolBarBreak(toolbar);
}

Qt::ToolButtonStyle  PythonQtWrapper_QMainWindow::toolButtonStyle(QMainWindow* theWrappedObject) const
{
return theWrappedObject->toolButtonStyle();
}

bool  PythonQtWrapper_QMainWindow::unifiedTitleAndToolBarOnMac(QMainWindow* theWrappedObject) const
{
return theWrappedObject->unifiedTitleAndToolBarOnMac();
}

