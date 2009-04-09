#include "PythonQtWrapper_QToolBox.h"

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
#include <qtoolbox.h>
#include <qwidget.h>

QToolBox* PythonQtWrapper_QToolBox::new_QToolBox(QWidget*  parent, Qt::WindowFlags  f)
{ 
return new QToolBox(parent, f); }

int  PythonQtWrapper_QToolBox::addItem(QToolBox* theWrappedObject, QWidget*  widget, const QIcon&  icon, const QString&  text)
{
return theWrappedObject->addItem(widget, icon, text);
}

int  PythonQtWrapper_QToolBox::addItem(QToolBox* theWrappedObject, QWidget*  widget, const QString&  text)
{
return theWrappedObject->addItem(widget, text);
}

int  PythonQtWrapper_QToolBox::count(QToolBox* theWrappedObject) const
{
return theWrappedObject->count();
}

int  PythonQtWrapper_QToolBox::currentIndex(QToolBox* theWrappedObject) const
{
return theWrappedObject->currentIndex();
}

QWidget*  PythonQtWrapper_QToolBox::currentWidget(QToolBox* theWrappedObject) const
{
return theWrappedObject->currentWidget();
}

int  PythonQtWrapper_QToolBox::indexOf(QToolBox* theWrappedObject, QWidget*  widget) const
{
return theWrappedObject->indexOf(widget);
}

int  PythonQtWrapper_QToolBox::insertItem(QToolBox* theWrappedObject, int  index, QWidget*  widget, const QIcon&  icon, const QString&  text)
{
return theWrappedObject->insertItem(index, widget, icon, text);
}

int  PythonQtWrapper_QToolBox::insertItem(QToolBox* theWrappedObject, int  index, QWidget*  widget, const QString&  text)
{
return theWrappedObject->insertItem(index, widget, text);
}

bool  PythonQtWrapper_QToolBox::isItemEnabled(QToolBox* theWrappedObject, int  index) const
{
return theWrappedObject->isItemEnabled(index);
}

QIcon  PythonQtWrapper_QToolBox::itemIcon(QToolBox* theWrappedObject, int  index) const
{
return theWrappedObject->itemIcon(index);
}

QString  PythonQtWrapper_QToolBox::itemText(QToolBox* theWrappedObject, int  index) const
{
return theWrappedObject->itemText(index);
}

QString  PythonQtWrapper_QToolBox::itemToolTip(QToolBox* theWrappedObject, int  index) const
{
return theWrappedObject->itemToolTip(index);
}

void PythonQtWrapper_QToolBox::removeItem(QToolBox* theWrappedObject, int  index)
{
theWrappedObject->removeItem(index);
}

void PythonQtWrapper_QToolBox::setItemEnabled(QToolBox* theWrappedObject, int  index, bool  enabled)
{
theWrappedObject->setItemEnabled(index, enabled);
}

void PythonQtWrapper_QToolBox::setItemIcon(QToolBox* theWrappedObject, int  index, const QIcon&  icon)
{
theWrappedObject->setItemIcon(index, icon);
}

void PythonQtWrapper_QToolBox::setItemText(QToolBox* theWrappedObject, int  index, const QString&  text)
{
theWrappedObject->setItemText(index, text);
}

void PythonQtWrapper_QToolBox::setItemToolTip(QToolBox* theWrappedObject, int  index, const QString&  toolTip)
{
theWrappedObject->setItemToolTip(index, toolTip);
}

QWidget*  PythonQtWrapper_QToolBox::widget(QToolBox* theWrappedObject, int  index) const
{
return theWrappedObject->widget(index);
}

