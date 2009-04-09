#include "PythonQtWrapper_QCheckBox.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcheckbox.h>
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
#include <qstyleoption.h>
#include <qwidget.h>

QCheckBox* PythonQtWrapper_QCheckBox::new_QCheckBox(QWidget*  parent)
{ 
return new QCheckBox(parent); }

QCheckBox* PythonQtWrapper_QCheckBox::new_QCheckBox(const QString&  text, QWidget*  parent)
{ 
return new QCheckBox(text, parent); }

Qt::CheckState  PythonQtWrapper_QCheckBox::checkState(QCheckBox* theWrappedObject) const
{
return theWrappedObject->checkState();
}

bool  PythonQtWrapper_QCheckBox::isTristate(QCheckBox* theWrappedObject) const
{
return theWrappedObject->isTristate();
}

void PythonQtWrapper_QCheckBox::setCheckState(QCheckBox* theWrappedObject, Qt::CheckState  state)
{
theWrappedObject->setCheckState(state);
}

void PythonQtWrapper_QCheckBox::setTristate(QCheckBox* theWrappedObject, bool  y)
{
theWrappedObject->setTristate(y);
}

QSize  PythonQtWrapper_QCheckBox::sizeHint(QCheckBox* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

