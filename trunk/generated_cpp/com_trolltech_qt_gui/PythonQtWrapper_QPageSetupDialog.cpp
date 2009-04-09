#include "PythonQtWrapper_QPageSetupDialog.h"

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
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

QPageSetupDialog* PythonQtWrapper_QPageSetupDialog::new_QPageSetupDialog(QPrinter*  printer, QWidget*  parent)
{ 
return new QPageSetupDialog(printer, parent); }

void PythonQtWrapper_QPageSetupDialog::addEnabledOption(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option)
{
theWrappedObject->addEnabledOption(option);
}

QPageSetupDialog::PageSetupDialogOptions  PythonQtWrapper_QPageSetupDialog::enabledOptions(QPageSetupDialog* theWrappedObject) const
{
return theWrappedObject->enabledOptions();
}

int  PythonQtWrapper_QPageSetupDialog::exec(QPageSetupDialog* theWrappedObject)
{
return theWrappedObject->exec();
}

bool  PythonQtWrapper_QPageSetupDialog::isOptionEnabled(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option) const
{
return theWrappedObject->isOptionEnabled(option);
}

void PythonQtWrapper_QPageSetupDialog::setEnabledOptions(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOptions  options)
{
theWrappedObject->setEnabledOptions(options);
}

