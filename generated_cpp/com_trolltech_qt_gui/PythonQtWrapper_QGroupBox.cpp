#include "PythonQtWrapper_QGroupBox.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgroupbox.h>
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
#include <qwidget.h>

QGroupBox* PythonQtWrapper_QGroupBox::new_QGroupBox(QWidget*  parent)
{ 
return new QGroupBox(parent); }

QGroupBox* PythonQtWrapper_QGroupBox::new_QGroupBox(const QString&  title, QWidget*  parent)
{ 
return new QGroupBox(title, parent); }

Qt::Alignment  PythonQtWrapper_QGroupBox::alignment(QGroupBox* theWrappedObject) const
{
return theWrappedObject->alignment();
}

bool  PythonQtWrapper_QGroupBox::isCheckable(QGroupBox* theWrappedObject) const
{
return theWrappedObject->isCheckable();
}

bool  PythonQtWrapper_QGroupBox::isChecked(QGroupBox* theWrappedObject) const
{
return theWrappedObject->isChecked();
}

bool  PythonQtWrapper_QGroupBox::isFlat(QGroupBox* theWrappedObject) const
{
return theWrappedObject->isFlat();
}

QSize  PythonQtWrapper_QGroupBox::minimumSizeHint(QGroupBox* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

void PythonQtWrapper_QGroupBox::setAlignment(QGroupBox* theWrappedObject, int  alignment)
{
theWrappedObject->setAlignment(alignment);
}

void PythonQtWrapper_QGroupBox::setCheckable(QGroupBox* theWrappedObject, bool  checkable)
{
theWrappedObject->setCheckable(checkable);
}

void PythonQtWrapper_QGroupBox::setFlat(QGroupBox* theWrappedObject, bool  flat)
{
theWrappedObject->setFlat(flat);
}

void PythonQtWrapper_QGroupBox::setTitle(QGroupBox* theWrappedObject, const QString&  title)
{
theWrappedObject->setTitle(title);
}

QString  PythonQtWrapper_QGroupBox::title(QGroupBox* theWrappedObject) const
{
return theWrappedObject->title();
}

