#include "PythonQtWrapper_QAbstractPrintDialog.h"

#include <QVariant>
#include <qabstractprintdialog.h>
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
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

void PythonQtWrapper_QAbstractPrintDialog::addEnabledOption(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOption  option)
{
theWrappedObject->addEnabledOption(option);
}

QAbstractPrintDialog::PrintDialogOptions  PythonQtWrapper_QAbstractPrintDialog::enabledOptions(QAbstractPrintDialog* theWrappedObject) const
{
return theWrappedObject->enabledOptions();
}

int  PythonQtWrapper_QAbstractPrintDialog::exec(QAbstractPrintDialog* theWrappedObject)
{
return theWrappedObject->exec();
}

int  PythonQtWrapper_QAbstractPrintDialog::fromPage(QAbstractPrintDialog* theWrappedObject) const
{
return theWrappedObject->fromPage();
}

bool  PythonQtWrapper_QAbstractPrintDialog::isOptionEnabled(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOption  option) const
{
return theWrappedObject->isOptionEnabled(option);
}

int  PythonQtWrapper_QAbstractPrintDialog::maxPage(QAbstractPrintDialog* theWrappedObject) const
{
return theWrappedObject->maxPage();
}

int  PythonQtWrapper_QAbstractPrintDialog::minPage(QAbstractPrintDialog* theWrappedObject) const
{
return theWrappedObject->minPage();
}

QAbstractPrintDialog::PrintRange  PythonQtWrapper_QAbstractPrintDialog::printRange(QAbstractPrintDialog* theWrappedObject) const
{
return theWrappedObject->printRange();
}

QPrinter*  PythonQtWrapper_QAbstractPrintDialog::printer(QAbstractPrintDialog* theWrappedObject) const
{
return theWrappedObject->printer();
}

void PythonQtWrapper_QAbstractPrintDialog::setEnabledOptions(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOptions  options)
{
theWrappedObject->setEnabledOptions(options);
}

void PythonQtWrapper_QAbstractPrintDialog::setFromTo(QAbstractPrintDialog* theWrappedObject, int  fromPage, int  toPage)
{
theWrappedObject->setFromTo(fromPage, toPage);
}

void PythonQtWrapper_QAbstractPrintDialog::setMinMax(QAbstractPrintDialog* theWrappedObject, int  min, int  max)
{
theWrappedObject->setMinMax(min, max);
}

void PythonQtWrapper_QAbstractPrintDialog::setOptionTabs(QAbstractPrintDialog* theWrappedObject, const QList<QWidget* >&  tabs)
{
theWrappedObject->setOptionTabs(tabs);
}

void PythonQtWrapper_QAbstractPrintDialog::setPrintRange(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintRange  range)
{
theWrappedObject->setPrintRange(range);
}

int  PythonQtWrapper_QAbstractPrintDialog::toPage(QAbstractPrintDialog* theWrappedObject) const
{
return theWrappedObject->toPage();
}

