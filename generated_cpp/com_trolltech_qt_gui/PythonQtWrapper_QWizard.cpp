#include "PythonQtWrapper_QWizard.h"

#include <QVariant>
#include <qabstractbutton.h>
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
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>
#include <qwizard.h>

QWizard* PythonQtWrapper_QWizard::new_QWizard(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new QWizard(parent, flags); }

int  PythonQtWrapper_QWizard::addPage(QWizard* theWrappedObject, QWizardPage*  page)
{
return theWrappedObject->addPage(page);
}

QAbstractButton*  PythonQtWrapper_QWizard::button(QWizard* theWrappedObject, QWizard::WizardButton  which) const
{
return theWrappedObject->button(which);
}

QString  PythonQtWrapper_QWizard::buttonText(QWizard* theWrappedObject, QWizard::WizardButton  which) const
{
return theWrappedObject->buttonText(which);
}

int  PythonQtWrapper_QWizard::currentId(QWizard* theWrappedObject) const
{
return theWrappedObject->currentId();
}

QWizardPage*  PythonQtWrapper_QWizard::currentPage(QWizard* theWrappedObject) const
{
return theWrappedObject->currentPage();
}

QVariant  PythonQtWrapper_QWizard::field(QWizard* theWrappedObject, const QString&  name) const
{
return theWrappedObject->field(name);
}

bool  PythonQtWrapper_QWizard::hasVisitedPage(QWizard* theWrappedObject, int  id) const
{
return theWrappedObject->hasVisitedPage(id);
}

int  PythonQtWrapper_QWizard::nextId(QWizard* theWrappedObject) const
{
return theWrappedObject->nextId();
}

QWizard::WizardOptions  PythonQtWrapper_QWizard::options(QWizard* theWrappedObject) const
{
return theWrappedObject->options();
}

QWizardPage*  PythonQtWrapper_QWizard::page(QWizard* theWrappedObject, int  id) const
{
return theWrappedObject->page(id);
}

QPixmap  PythonQtWrapper_QWizard::pixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which) const
{
return theWrappedObject->pixmap(which);
}

void PythonQtWrapper_QWizard::setButton(QWizard* theWrappedObject, QWizard::WizardButton  which, QAbstractButton*  button)
{
theWrappedObject->setButton(which, button);
}

void PythonQtWrapper_QWizard::setButtonLayout(QWizard* theWrappedObject, const QList<QWizard::WizardButton >&  layout)
{
theWrappedObject->setButtonLayout(layout);
}

void PythonQtWrapper_QWizard::setButtonText(QWizard* theWrappedObject, QWizard::WizardButton  which, const QString&  text)
{
theWrappedObject->setButtonText(which, text);
}

void PythonQtWrapper_QWizard::setField(QWizard* theWrappedObject, const QString&  name, const QVariant&  value)
{
theWrappedObject->setField(name, value);
}

void PythonQtWrapper_QWizard::setOption(QWizard* theWrappedObject, QWizard::WizardOption  option, bool  on)
{
theWrappedObject->setOption(option, on);
}

void PythonQtWrapper_QWizard::setOptions(QWizard* theWrappedObject, QWizard::WizardOptions  options)
{
theWrappedObject->setOptions(options);
}

void PythonQtWrapper_QWizard::setPage(QWizard* theWrappedObject, int  id, QWizardPage*  page)
{
theWrappedObject->setPage(id, page);
}

void PythonQtWrapper_QWizard::setPixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap)
{
theWrappedObject->setPixmap(which, pixmap);
}

void PythonQtWrapper_QWizard::setStartId(QWizard* theWrappedObject, int  id)
{
theWrappedObject->setStartId(id);
}

void PythonQtWrapper_QWizard::setSubTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format)
{
theWrappedObject->setSubTitleFormat(format);
}

void PythonQtWrapper_QWizard::setTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format)
{
theWrappedObject->setTitleFormat(format);
}

void PythonQtWrapper_QWizard::setVisible(QWizard* theWrappedObject, bool  visible)
{
theWrappedObject->setVisible(visible);
}

void PythonQtWrapper_QWizard::setWizardStyle(QWizard* theWrappedObject, QWizard::WizardStyle  style)
{
theWrappedObject->setWizardStyle(style);
}

QSize  PythonQtWrapper_QWizard::sizeHint(QWizard* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

int  PythonQtWrapper_QWizard::startId(QWizard* theWrappedObject) const
{
return theWrappedObject->startId();
}

Qt::TextFormat  PythonQtWrapper_QWizard::subTitleFormat(QWizard* theWrappedObject) const
{
return theWrappedObject->subTitleFormat();
}

bool  PythonQtWrapper_QWizard::testOption(QWizard* theWrappedObject, QWizard::WizardOption  option) const
{
return theWrappedObject->testOption(option);
}

Qt::TextFormat  PythonQtWrapper_QWizard::titleFormat(QWizard* theWrappedObject) const
{
return theWrappedObject->titleFormat();
}

bool  PythonQtWrapper_QWizard::validateCurrentPage(QWizard* theWrappedObject)
{
return theWrappedObject->validateCurrentPage();
}

QList<int >  PythonQtWrapper_QWizard::visitedPages(QWizard* theWrappedObject) const
{
return theWrappedObject->visitedPages();
}

QWizard::WizardStyle  PythonQtWrapper_QWizard::wizardStyle(QWizard* theWrappedObject) const
{
return theWrappedObject->wizardStyle();
}

