#include "PythonQtWrapper_QPushButton.h"

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
#include <qpushbutton.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

QPushButton* PythonQtWrapper_QPushButton::new_QPushButton(QWidget*  parent)
{ 
return new QPushButton(parent); }

QPushButton* PythonQtWrapper_QPushButton::new_QPushButton(const QIcon&  icon, const QString&  text, QWidget*  parent)
{ 
return new QPushButton(icon, text, parent); }

QPushButton* PythonQtWrapper_QPushButton::new_QPushButton(const QString&  text, QWidget*  parent)
{ 
return new QPushButton(text, parent); }

bool  PythonQtWrapper_QPushButton::autoDefault(QPushButton* theWrappedObject) const
{
return theWrappedObject->autoDefault();
}

bool  PythonQtWrapper_QPushButton::isDefault(QPushButton* theWrappedObject) const
{
return theWrappedObject->isDefault();
}

bool  PythonQtWrapper_QPushButton::isFlat(QPushButton* theWrappedObject) const
{
return theWrappedObject->isFlat();
}

QMenu*  PythonQtWrapper_QPushButton::menu(QPushButton* theWrappedObject) const
{
return theWrappedObject->menu();
}

QSize  PythonQtWrapper_QPushButton::minimumSizeHint(QPushButton* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

void PythonQtWrapper_QPushButton::setAutoDefault(QPushButton* theWrappedObject, bool  arg__1)
{
theWrappedObject->setAutoDefault(arg__1);
}

void PythonQtWrapper_QPushButton::setDefault(QPushButton* theWrappedObject, bool  arg__1)
{
theWrappedObject->setDefault(arg__1);
}

void PythonQtWrapper_QPushButton::setFlat(QPushButton* theWrappedObject, bool  arg__1)
{
theWrappedObject->setFlat(arg__1);
}

void PythonQtWrapper_QPushButton::setMenu(QPushButton* theWrappedObject, QMenu*  menu)
{
theWrappedObject->setMenu(menu);
}

QSize  PythonQtWrapper_QPushButton::sizeHint(QPushButton* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

