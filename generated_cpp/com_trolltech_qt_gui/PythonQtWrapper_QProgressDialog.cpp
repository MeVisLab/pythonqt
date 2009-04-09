#include "PythonQtWrapper_QProgressDialog.h"

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
#include <qlabel.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qprogressbar.h>
#include <qprogressdialog.h>
#include <qpushbutton.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

QProgressDialog* PythonQtWrapper_QProgressDialog::new_QProgressDialog(QWidget*  parent, Qt::WindowFlags  f)
{ 
return new QProgressDialog(parent, f); }

QProgressDialog* PythonQtWrapper_QProgressDialog::new_QProgressDialog(const QString&  labelText, const QString&  cancelButtonText, int  minimum, int  maximum, QWidget*  parent, Qt::WindowFlags  f)
{ 
return new QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, f); }

bool  PythonQtWrapper_QProgressDialog::autoClose(QProgressDialog* theWrappedObject) const
{
return theWrappedObject->autoClose();
}

bool  PythonQtWrapper_QProgressDialog::autoReset(QProgressDialog* theWrappedObject) const
{
return theWrappedObject->autoReset();
}

QString  PythonQtWrapper_QProgressDialog::labelText(QProgressDialog* theWrappedObject) const
{
return theWrappedObject->labelText();
}

int  PythonQtWrapper_QProgressDialog::maximum(QProgressDialog* theWrappedObject) const
{
return theWrappedObject->maximum();
}

int  PythonQtWrapper_QProgressDialog::minimum(QProgressDialog* theWrappedObject) const
{
return theWrappedObject->minimum();
}

int  PythonQtWrapper_QProgressDialog::minimumDuration(QProgressDialog* theWrappedObject) const
{
return theWrappedObject->minimumDuration();
}

void PythonQtWrapper_QProgressDialog::setAutoClose(QProgressDialog* theWrappedObject, bool  b)
{
theWrappedObject->setAutoClose(b);
}

void PythonQtWrapper_QProgressDialog::setAutoReset(QProgressDialog* theWrappedObject, bool  b)
{
theWrappedObject->setAutoReset(b);
}

void PythonQtWrapper_QProgressDialog::setBar(QProgressDialog* theWrappedObject, QProgressBar*  bar)
{
theWrappedObject->setBar(bar);
}

void PythonQtWrapper_QProgressDialog::setCancelButton(QProgressDialog* theWrappedObject, QPushButton*  button)
{
theWrappedObject->setCancelButton(button);
}

void PythonQtWrapper_QProgressDialog::setLabel(QProgressDialog* theWrappedObject, QLabel*  label)
{
theWrappedObject->setLabel(label);
}

QSize  PythonQtWrapper_QProgressDialog::sizeHint(QProgressDialog* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

int  PythonQtWrapper_QProgressDialog::value(QProgressDialog* theWrappedObject) const
{
return theWrappedObject->value();
}

bool  PythonQtWrapper_QProgressDialog::wasCanceled(QProgressDialog* theWrappedObject) const
{
return theWrappedObject->wasCanceled();
}

