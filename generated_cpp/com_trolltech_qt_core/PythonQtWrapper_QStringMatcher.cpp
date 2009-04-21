#include "PythonQtWrapper_QStringMatcher.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qstringmatcher.h>

QStringMatcher* PythonQtWrapper_QStringMatcher::new_QStringMatcher()
{ 
return new QStringMatcher(); }

QStringMatcher* PythonQtWrapper_QStringMatcher::new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs)
{ 
return new QStringMatcher(pattern, cs); }

QStringMatcher* PythonQtWrapper_QStringMatcher::new_QStringMatcher(const QStringMatcher&  other)
{ 
return new QStringMatcher(other); }

Qt::CaseSensitivity  PythonQtWrapper_QStringMatcher::caseSensitivity(QStringMatcher* theWrappedObject) const
{
return  theWrappedObject->caseSensitivity();
}

void PythonQtWrapper_QStringMatcher::setCaseSensitivity(QStringMatcher* theWrappedObject, Qt::CaseSensitivity  cs)
{
 theWrappedObject->setCaseSensitivity(cs);
}

QString  PythonQtWrapper_QStringMatcher::pattern(QStringMatcher* theWrappedObject) const
{
return  theWrappedObject->pattern();
}

int  PythonQtWrapper_QStringMatcher::indexIn(QStringMatcher* theWrappedObject, const QString&  str, int  from) const
{
return  theWrappedObject->indexIn(str, from);
}

void PythonQtWrapper_QStringMatcher::setPattern(QStringMatcher* theWrappedObject, const QString&  pattern)
{
 theWrappedObject->setPattern(pattern);
}

