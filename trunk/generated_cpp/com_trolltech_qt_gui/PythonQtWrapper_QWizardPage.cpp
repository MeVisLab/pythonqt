#include "PythonQtWrapper_QWizardPage.h"

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
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>
#include <qwizard.h>

QWizardPage* PythonQtWrapper_QWizardPage::new_QWizardPage(QWidget*  parent)
{ 
return new QWizardPage(parent); }

QString  PythonQtWrapper_QWizardPage::buttonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which) const
{
return theWrappedObject->buttonText(which);
}

void PythonQtWrapper_QWizardPage::cleanupPage(QWizardPage* theWrappedObject)
{
theWrappedObject->cleanupPage();
}

void PythonQtWrapper_QWizardPage::initializePage(QWizardPage* theWrappedObject)
{
theWrappedObject->initializePage();
}

bool  PythonQtWrapper_QWizardPage::isCommitPage(QWizardPage* theWrappedObject) const
{
return theWrappedObject->isCommitPage();
}

bool  PythonQtWrapper_QWizardPage::isComplete(QWizardPage* theWrappedObject) const
{
return theWrappedObject->isComplete();
}

bool  PythonQtWrapper_QWizardPage::isFinalPage(QWizardPage* theWrappedObject) const
{
return theWrappedObject->isFinalPage();
}

int  PythonQtWrapper_QWizardPage::nextId(QWizardPage* theWrappedObject) const
{
return theWrappedObject->nextId();
}

QPixmap  PythonQtWrapper_QWizardPage::pixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which) const
{
return theWrappedObject->pixmap(which);
}

void PythonQtWrapper_QWizardPage::setButtonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which, const QString&  text)
{
theWrappedObject->setButtonText(which, text);
}

void PythonQtWrapper_QWizardPage::setCommitPage(QWizardPage* theWrappedObject, bool  commitPage)
{
theWrappedObject->setCommitPage(commitPage);
}

void PythonQtWrapper_QWizardPage::setFinalPage(QWizardPage* theWrappedObject, bool  finalPage)
{
theWrappedObject->setFinalPage(finalPage);
}

void PythonQtWrapper_QWizardPage::setPixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap)
{
theWrappedObject->setPixmap(which, pixmap);
}

void PythonQtWrapper_QWizardPage::setSubTitle(QWizardPage* theWrappedObject, const QString&  subTitle)
{
theWrappedObject->setSubTitle(subTitle);
}

void PythonQtWrapper_QWizardPage::setTitle(QWizardPage* theWrappedObject, const QString&  title)
{
theWrappedObject->setTitle(title);
}

QString  PythonQtWrapper_QWizardPage::subTitle(QWizardPage* theWrappedObject) const
{
return theWrappedObject->subTitle();
}

QString  PythonQtWrapper_QWizardPage::title(QWizardPage* theWrappedObject) const
{
return theWrappedObject->title();
}

bool  PythonQtWrapper_QWizardPage::validatePage(QWizardPage* theWrappedObject)
{
return theWrappedObject->validatePage();
}

