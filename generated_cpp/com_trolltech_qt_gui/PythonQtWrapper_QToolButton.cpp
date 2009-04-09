#include "PythonQtWrapper_QToolButton.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbuttongroup.h>
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
#include <qtoolbutton.h>
#include <qwidget.h>

QToolButton* PythonQtWrapper_QToolButton::new_QToolButton(QWidget*  parent)
{ 
return new QToolButton(parent); }

Qt::ArrowType  PythonQtWrapper_QToolButton::arrowType(QToolButton* theWrappedObject) const
{
return theWrappedObject->arrowType();
}

bool  PythonQtWrapper_QToolButton::autoRaise(QToolButton* theWrappedObject) const
{
return theWrappedObject->autoRaise();
}

QAction*  PythonQtWrapper_QToolButton::defaultAction(QToolButton* theWrappedObject) const
{
return theWrappedObject->defaultAction();
}

QMenu*  PythonQtWrapper_QToolButton::menu(QToolButton* theWrappedObject) const
{
return theWrappedObject->menu();
}

QSize  PythonQtWrapper_QToolButton::minimumSizeHint(QToolButton* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

QToolButton::ToolButtonPopupMode  PythonQtWrapper_QToolButton::popupMode(QToolButton* theWrappedObject) const
{
return theWrappedObject->popupMode();
}

void PythonQtWrapper_QToolButton::setArrowType(QToolButton* theWrappedObject, Qt::ArrowType  type)
{
theWrappedObject->setArrowType(type);
}

void PythonQtWrapper_QToolButton::setAutoRaise(QToolButton* theWrappedObject, bool  enable)
{
theWrappedObject->setAutoRaise(enable);
}

void PythonQtWrapper_QToolButton::setMenu(QToolButton* theWrappedObject, QMenu*  menu)
{
theWrappedObject->setMenu(menu);
}

void PythonQtWrapper_QToolButton::setPopupMode(QToolButton* theWrappedObject, QToolButton::ToolButtonPopupMode  mode)
{
theWrappedObject->setPopupMode(mode);
}

QSize  PythonQtWrapper_QToolButton::sizeHint(QToolButton* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

Qt::ToolButtonStyle  PythonQtWrapper_QToolButton::toolButtonStyle(QToolButton* theWrappedObject) const
{
return theWrappedObject->toolButtonStyle();
}

