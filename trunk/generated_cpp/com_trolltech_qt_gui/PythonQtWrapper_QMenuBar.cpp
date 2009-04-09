#include "PythonQtWrapper_QMenuBar.h"

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
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

QMenuBar* PythonQtWrapper_QMenuBar::new_QMenuBar(QWidget*  parent)
{ 
return new QMenuBar(parent); }

QAction*  PythonQtWrapper_QMenuBar::actionAt(QMenuBar* theWrappedObject, const QPoint&  arg__1) const
{
return theWrappedObject->actionAt(arg__1);
}

QRect  PythonQtWrapper_QMenuBar::actionGeometry(QMenuBar* theWrappedObject, QAction*  arg__1) const
{
return theWrappedObject->actionGeometry(arg__1);
}

QAction*  PythonQtWrapper_QMenuBar::activeAction(QMenuBar* theWrappedObject) const
{
return theWrappedObject->activeAction();
}

QAction*  PythonQtWrapper_QMenuBar::addAction(QMenuBar* theWrappedObject, const QString&  text)
{
return theWrappedObject->addAction(text);
}

QAction*  PythonQtWrapper_QMenuBar::addMenu(QMenuBar* theWrappedObject, QMenu*  menu)
{
return theWrappedObject->addMenu(menu);
}

QMenu*  PythonQtWrapper_QMenuBar::addMenu(QMenuBar* theWrappedObject, const QIcon&  icon, const QString&  title)
{
return theWrappedObject->addMenu(icon, title);
}

QMenu*  PythonQtWrapper_QMenuBar::addMenu(QMenuBar* theWrappedObject, const QString&  title)
{
return theWrappedObject->addMenu(title);
}

QAction*  PythonQtWrapper_QMenuBar::addSeparator(QMenuBar* theWrappedObject)
{
return theWrappedObject->addSeparator();
}

void PythonQtWrapper_QMenuBar::clear(QMenuBar* theWrappedObject)
{
theWrappedObject->clear();
}

QWidget*  PythonQtWrapper_QMenuBar::cornerWidget(QMenuBar* theWrappedObject, Qt::Corner  corner) const
{
return theWrappedObject->cornerWidget(corner);
}

int  PythonQtWrapper_QMenuBar::heightForWidth(QMenuBar* theWrappedObject, int  arg__1) const
{
return theWrappedObject->heightForWidth(arg__1);
}

QAction*  PythonQtWrapper_QMenuBar::insertMenu(QMenuBar* theWrappedObject, QAction*  before, QMenu*  menu)
{
return theWrappedObject->insertMenu(before, menu);
}

QAction*  PythonQtWrapper_QMenuBar::insertSeparator(QMenuBar* theWrappedObject, QAction*  before)
{
return theWrappedObject->insertSeparator(before);
}

bool  PythonQtWrapper_QMenuBar::isDefaultUp(QMenuBar* theWrappedObject) const
{
return theWrappedObject->isDefaultUp();
}

QSize  PythonQtWrapper_QMenuBar::minimumSizeHint(QMenuBar* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

void PythonQtWrapper_QMenuBar::setActiveAction(QMenuBar* theWrappedObject, QAction*  action)
{
theWrappedObject->setActiveAction(action);
}

void PythonQtWrapper_QMenuBar::setCornerWidget(QMenuBar* theWrappedObject, QWidget*  w, Qt::Corner  corner)
{
theWrappedObject->setCornerWidget(w, corner);
}

void PythonQtWrapper_QMenuBar::setDefaultUp(QMenuBar* theWrappedObject, bool  arg__1)
{
theWrappedObject->setDefaultUp(arg__1);
}

QSize  PythonQtWrapper_QMenuBar::sizeHint(QMenuBar* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

