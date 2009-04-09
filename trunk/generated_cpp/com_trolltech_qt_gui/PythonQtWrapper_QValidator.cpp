#include "PythonQtWrapper_QValidator.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qvalidator.h>

void PythonQtWrapper_QValidator::fixup(QValidator* theWrappedObject, QString&  arg__1) const
{
theWrappedObject->fixup(arg__1);
}

QLocale  PythonQtWrapper_QValidator::locale(QValidator* theWrappedObject) const
{
return theWrappedObject->locale();
}

void PythonQtWrapper_QValidator::setLocale(QValidator* theWrappedObject, const QLocale&  locale)
{
theWrappedObject->setLocale(locale);
}

QValidator::State  PythonQtWrapper_QValidator::validate(QValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const
{
return theWrappedObject->validate(arg__1, arg__2);
}

