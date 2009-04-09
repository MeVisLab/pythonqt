#include "PythonQtWrapper_QDialogButtonBox.h"

#include <QVariant>
#include <qabstractbutton.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdialogbuttonbox.h>
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
#include <qpushbutton.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

QDialogButtonBox* PythonQtWrapper_QDialogButtonBox::new_QDialogButtonBox(QDialogButtonBox::StandardButtons  buttons, Qt::Orientation  orientation, QWidget*  parent)
{ 
return new QDialogButtonBox(buttons, orientation, parent); }

QDialogButtonBox* PythonQtWrapper_QDialogButtonBox::new_QDialogButtonBox(QWidget*  parent)
{ 
return new QDialogButtonBox(parent); }

QDialogButtonBox* PythonQtWrapper_QDialogButtonBox::new_QDialogButtonBox(Qt::Orientation  orientation, QWidget*  parent)
{ 
return new QDialogButtonBox(orientation, parent); }

void PythonQtWrapper_QDialogButtonBox::addButton(QDialogButtonBox* theWrappedObject, QAbstractButton*  button, QDialogButtonBox::ButtonRole  role)
{
theWrappedObject->addButton(button, role);
}

QPushButton*  PythonQtWrapper_QDialogButtonBox::addButton(QDialogButtonBox* theWrappedObject, QDialogButtonBox::StandardButton  button)
{
return theWrappedObject->addButton(button);
}

QPushButton*  PythonQtWrapper_QDialogButtonBox::addButton(QDialogButtonBox* theWrappedObject, const QString&  text, QDialogButtonBox::ButtonRole  role)
{
return theWrappedObject->addButton(text, role);
}

QPushButton*  PythonQtWrapper_QDialogButtonBox::button(QDialogButtonBox* theWrappedObject, QDialogButtonBox::StandardButton  which) const
{
return theWrappedObject->button(which);
}

QDialogButtonBox::ButtonRole  PythonQtWrapper_QDialogButtonBox::buttonRole(QDialogButtonBox* theWrappedObject, QAbstractButton*  button) const
{
return theWrappedObject->buttonRole(button);
}

QList<QAbstractButton* >  PythonQtWrapper_QDialogButtonBox::buttons(QDialogButtonBox* theWrappedObject) const
{
return theWrappedObject->buttons();
}

bool  PythonQtWrapper_QDialogButtonBox::centerButtons(QDialogButtonBox* theWrappedObject) const
{
return theWrappedObject->centerButtons();
}

void PythonQtWrapper_QDialogButtonBox::clear(QDialogButtonBox* theWrappedObject)
{
theWrappedObject->clear();
}

Qt::Orientation  PythonQtWrapper_QDialogButtonBox::orientation(QDialogButtonBox* theWrappedObject) const
{
return theWrappedObject->orientation();
}

void PythonQtWrapper_QDialogButtonBox::removeButton(QDialogButtonBox* theWrappedObject, QAbstractButton*  button)
{
theWrappedObject->removeButton(button);
}

void PythonQtWrapper_QDialogButtonBox::setCenterButtons(QDialogButtonBox* theWrappedObject, bool  center)
{
theWrappedObject->setCenterButtons(center);
}

void PythonQtWrapper_QDialogButtonBox::setOrientation(QDialogButtonBox* theWrappedObject, Qt::Orientation  orientation)
{
theWrappedObject->setOrientation(orientation);
}

void PythonQtWrapper_QDialogButtonBox::setStandardButtons(QDialogButtonBox* theWrappedObject, QDialogButtonBox::StandardButtons  buttons)
{
theWrappedObject->setStandardButtons(buttons);
}

QDialogButtonBox::StandardButton  PythonQtWrapper_QDialogButtonBox::standardButton(QDialogButtonBox* theWrappedObject, QAbstractButton*  button) const
{
return theWrappedObject->standardButton(button);
}

QDialogButtonBox::StandardButtons  PythonQtWrapper_QDialogButtonBox::standardButtons(QDialogButtonBox* theWrappedObject) const
{
return theWrappedObject->standardButtons();
}

