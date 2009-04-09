#include "PythonQtWrapper_QDesktopWidget.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdesktopwidget.h>
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

QDesktopWidget* PythonQtWrapper_QDesktopWidget::new_QDesktopWidget()
{ 
return new QDesktopWidget(); }

const QRect  PythonQtWrapper_QDesktopWidget::availableGeometry(QDesktopWidget* theWrappedObject, const QPoint&  point) const
{
return theWrappedObject->availableGeometry(point);
}

const QRect  PythonQtWrapper_QDesktopWidget::availableGeometry(QDesktopWidget* theWrappedObject, const QWidget*  widget) const
{
return theWrappedObject->availableGeometry(widget);
}

const QRect  PythonQtWrapper_QDesktopWidget::availableGeometry(QDesktopWidget* theWrappedObject, int  screen) const
{
return theWrappedObject->availableGeometry(screen);
}

bool  PythonQtWrapper_QDesktopWidget::isVirtualDesktop(QDesktopWidget* theWrappedObject) const
{
return theWrappedObject->isVirtualDesktop();
}

int  PythonQtWrapper_QDesktopWidget::numScreens(QDesktopWidget* theWrappedObject) const
{
return theWrappedObject->numScreens();
}

int  PythonQtWrapper_QDesktopWidget::primaryScreen(QDesktopWidget* theWrappedObject) const
{
return theWrappedObject->primaryScreen();
}

QWidget*  PythonQtWrapper_QDesktopWidget::screen(QDesktopWidget* theWrappedObject, int  screen)
{
return theWrappedObject->screen(screen);
}

const QRect  PythonQtWrapper_QDesktopWidget::screenGeometry(QDesktopWidget* theWrappedObject, const QPoint&  point) const
{
return theWrappedObject->screenGeometry(point);
}

const QRect  PythonQtWrapper_QDesktopWidget::screenGeometry(QDesktopWidget* theWrappedObject, const QWidget*  widget) const
{
return theWrappedObject->screenGeometry(widget);
}

const QRect  PythonQtWrapper_QDesktopWidget::screenGeometry(QDesktopWidget* theWrappedObject, int  screen) const
{
return theWrappedObject->screenGeometry(screen);
}

int  PythonQtWrapper_QDesktopWidget::screenNumber(QDesktopWidget* theWrappedObject, const QPoint&  arg__1) const
{
return theWrappedObject->screenNumber(arg__1);
}

int  PythonQtWrapper_QDesktopWidget::screenNumber(QDesktopWidget* theWrappedObject, const QWidget*  widget) const
{
return theWrappedObject->screenNumber(widget);
}

