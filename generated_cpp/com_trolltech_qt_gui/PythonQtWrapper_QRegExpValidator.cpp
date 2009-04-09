#include "PythonQtWrapper_QRegExpValidator.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qregexp.h>
#include <qvalidator.h>

QRegExpValidator* PythonQtWrapper_QRegExpValidator::new_QRegExpValidator(QObject*  parent)
{ 
return new QRegExpValidator(parent); }

QRegExpValidator* PythonQtWrapper_QRegExpValidator::new_QRegExpValidator(const QRegExp&  rx, QObject*  parent)
{ 
return new QRegExpValidator(rx, parent); }

const QRegExp&  PythonQtWrapper_QRegExpValidator::regExp(QRegExpValidator* theWrappedObject) const
{
return theWrappedObject->regExp();
}

void PythonQtWrapper_QRegExpValidator::setRegExp(QRegExpValidator* theWrappedObject, const QRegExp&  rx)
{
theWrappedObject->setRegExp(rx);
}

QValidator::State  PythonQtWrapper_QRegExpValidator::validate(QRegExpValidator* theWrappedObject, QString&  input, int&  pos) const
{
return theWrappedObject->validate(input, pos);
}

