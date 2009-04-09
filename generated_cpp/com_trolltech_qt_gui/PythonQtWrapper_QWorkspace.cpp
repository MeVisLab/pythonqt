#include "PythonQtWrapper_QWorkspace.h"

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
#include <qwidget.h>
#include <qworkspace.h>

QWorkspace* PythonQtWrapper_QWorkspace::new_QWorkspace(QWidget*  parent)
{ 
return new QWorkspace(parent); }

QWidget*  PythonQtWrapper_QWorkspace::activeWindow(QWorkspace* theWrappedObject) const
{
return theWrappedObject->activeWindow();
}

QWidget*  PythonQtWrapper_QWorkspace::addWindow(QWorkspace* theWrappedObject, QWidget*  w, Qt::WindowFlags  flags)
{
return theWrappedObject->addWindow(w, flags);
}

QBrush  PythonQtWrapper_QWorkspace::background(QWorkspace* theWrappedObject) const
{
return theWrappedObject->background();
}

bool  PythonQtWrapper_QWorkspace::scrollBarsEnabled(QWorkspace* theWrappedObject) const
{
return theWrappedObject->scrollBarsEnabled();
}

void PythonQtWrapper_QWorkspace::setBackground(QWorkspace* theWrappedObject, const QBrush&  background)
{
theWrappedObject->setBackground(background);
}

void PythonQtWrapper_QWorkspace::setScrollBarsEnabled(QWorkspace* theWrappedObject, bool  enable)
{
theWrappedObject->setScrollBarsEnabled(enable);
}

QSize  PythonQtWrapper_QWorkspace::sizeHint(QWorkspace* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QList<QWidget* >  PythonQtWrapper_QWorkspace::windowList(QWorkspace* theWrappedObject, QWorkspace::WindowOrder  order) const
{
return theWrappedObject->windowList(order);
}

