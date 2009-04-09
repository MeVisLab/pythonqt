#include "PythonQtWrapper_QDialog.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdialog.h>
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

QDialog* PythonQtWrapper_QDialog::new_QDialog(QWidget*  parent, Qt::WindowFlags  f)
{ 
return new QDialog(parent, f); }

bool  PythonQtWrapper_QDialog::isSizeGripEnabled(QDialog* theWrappedObject) const
{
return theWrappedObject->isSizeGripEnabled();
}

QSize  PythonQtWrapper_QDialog::minimumSizeHint(QDialog* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

int  PythonQtWrapper_QDialog::result(QDialog* theWrappedObject) const
{
return theWrappedObject->result();
}

void PythonQtWrapper_QDialog::setModal(QDialog* theWrappedObject, bool  modal)
{
theWrappedObject->setModal(modal);
}

void PythonQtWrapper_QDialog::setResult(QDialog* theWrappedObject, int  r)
{
theWrappedObject->setResult(r);
}

void PythonQtWrapper_QDialog::setSizeGripEnabled(QDialog* theWrappedObject, bool  arg__1)
{
theWrappedObject->setSizeGripEnabled(arg__1);
}

void PythonQtWrapper_QDialog::setVisible(QDialog* theWrappedObject, bool  visible)
{
theWrappedObject->setVisible(visible);
}

QSize  PythonQtWrapper_QDialog::sizeHint(QDialog* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

