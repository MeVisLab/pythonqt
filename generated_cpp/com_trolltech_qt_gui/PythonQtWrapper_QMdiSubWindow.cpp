#include "PythonQtWrapper_QMdiSubWindow.h"

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
#include <qmdiarea.h>
#include <qmdisubwindow.h>
#include <qmenu.h>
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

QMdiSubWindow* PythonQtWrapper_QMdiSubWindow::new_QMdiSubWindow(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new QMdiSubWindow(parent, flags); }

bool  PythonQtWrapper_QMdiSubWindow::isShaded(QMdiSubWindow* theWrappedObject) const
{
return theWrappedObject->isShaded();
}

int  PythonQtWrapper_QMdiSubWindow::keyboardPageStep(QMdiSubWindow* theWrappedObject) const
{
return theWrappedObject->keyboardPageStep();
}

int  PythonQtWrapper_QMdiSubWindow::keyboardSingleStep(QMdiSubWindow* theWrappedObject) const
{
return theWrappedObject->keyboardSingleStep();
}

QWidget*  PythonQtWrapper_QMdiSubWindow::maximizedButtonsWidget(QMdiSubWindow* theWrappedObject) const
{
return theWrappedObject->maximizedButtonsWidget();
}

QWidget*  PythonQtWrapper_QMdiSubWindow::maximizedSystemMenuIconWidget(QMdiSubWindow* theWrappedObject) const
{
return theWrappedObject->maximizedSystemMenuIconWidget();
}

QMdiArea*  PythonQtWrapper_QMdiSubWindow::mdiArea(QMdiSubWindow* theWrappedObject) const
{
return theWrappedObject->mdiArea();
}

QSize  PythonQtWrapper_QMdiSubWindow::minimumSizeHint(QMdiSubWindow* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

void PythonQtWrapper_QMdiSubWindow::setKeyboardPageStep(QMdiSubWindow* theWrappedObject, int  step)
{
theWrappedObject->setKeyboardPageStep(step);
}

void PythonQtWrapper_QMdiSubWindow::setKeyboardSingleStep(QMdiSubWindow* theWrappedObject, int  step)
{
theWrappedObject->setKeyboardSingleStep(step);
}

void PythonQtWrapper_QMdiSubWindow::setOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  option, bool  on)
{
theWrappedObject->setOption(option, on);
}

void PythonQtWrapper_QMdiSubWindow::setSystemMenu(QMdiSubWindow* theWrappedObject, QMenu*  systemMenu)
{
theWrappedObject->setSystemMenu(systemMenu);
}

void PythonQtWrapper_QMdiSubWindow::setWidget(QMdiSubWindow* theWrappedObject, QWidget*  widget)
{
theWrappedObject->setWidget(widget);
}

QSize  PythonQtWrapper_QMdiSubWindow::sizeHint(QMdiSubWindow* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QMenu*  PythonQtWrapper_QMdiSubWindow::systemMenu(QMdiSubWindow* theWrappedObject) const
{
return theWrappedObject->systemMenu();
}

bool  PythonQtWrapper_QMdiSubWindow::testOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  arg__1) const
{
return theWrappedObject->testOption(arg__1);
}

QWidget*  PythonQtWrapper_QMdiSubWindow::widget(QMdiSubWindow* theWrappedObject) const
{
return theWrappedObject->widget();
}

