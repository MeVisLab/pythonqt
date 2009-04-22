#include "PythonQtWrapper_QRegExp.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QStringList>
#include <QVariant>
#include <qdatastream.h>
#include <qregexp.h>
#include <qstringlist.h>

QRegExp* PythonQtWrapper_QRegExp::new_QRegExp()
{ 
return new QRegExp(); }

QRegExp* PythonQtWrapper_QRegExp::new_QRegExp(const QRegExp&  rx)
{ 
return new QRegExp(rx); }

QRegExp* PythonQtWrapper_QRegExp::new_QRegExp(const QString&  pattern, Qt::CaseSensitivity  cs, QRegExp::PatternSyntax  syntax)
{ 
return new QRegExp(pattern, cs, syntax); }

bool  PythonQtWrapper_QRegExp::isEmpty(QRegExp* theWrappedObject) const
{
return  theWrappedObject->isEmpty();
}

QString  PythonQtWrapper_QRegExp::pattern(QRegExp* theWrappedObject) const
{
return  theWrappedObject->pattern();
}

QString  PythonQtWrapper_QRegExp::static_QRegExp_escape(const QString&  str)
{
return QRegExp::escape(str);
}

bool  PythonQtWrapper_QRegExp::exactMatch(QRegExp* theWrappedObject, const QString&  str) const
{
return  theWrappedObject->exactMatch(str);
}

bool  PythonQtWrapper_QRegExp::isMinimal(QRegExp* theWrappedObject) const
{
return  theWrappedObject->isMinimal();
}

bool  PythonQtWrapper_QRegExp::operator_equal(QRegExp* theWrappedObject, const QRegExp&  rx) const
{
return  (*theWrappedObject)== rx;
}

QRegExp::PatternSyntax  PythonQtWrapper_QRegExp::patternSyntax(QRegExp* theWrappedObject) const
{
return  theWrappedObject->patternSyntax();
}

void PythonQtWrapper_QRegExp::setMinimal(QRegExp* theWrappedObject, bool  minimal)
{
 theWrappedObject->setMinimal(minimal);
}

void PythonQtWrapper_QRegExp::setPatternSyntax(QRegExp* theWrappedObject, QRegExp::PatternSyntax  syntax)
{
 theWrappedObject->setPatternSyntax(syntax);
}

void PythonQtWrapper_QRegExp::readFrom(QRegExp* theWrappedObject, QDataStream&  in)
{
in >>  (*theWrappedObject);
}

int  PythonQtWrapper_QRegExp::numCaptures(QRegExp* theWrappedObject) const
{
return  theWrappedObject->numCaptures();
}

QStringList  PythonQtWrapper_QRegExp::capturedTexts(QRegExp* theWrappedObject)
{
return  theWrappedObject->capturedTexts();
}

int  PythonQtWrapper_QRegExp::matchedLength(QRegExp* theWrappedObject) const
{
return  theWrappedObject->matchedLength();
}

void PythonQtWrapper_QRegExp::setCaseSensitivity(QRegExp* theWrappedObject, Qt::CaseSensitivity  cs)
{
 theWrappedObject->setCaseSensitivity(cs);
}

void PythonQtWrapper_QRegExp::setPattern(QRegExp* theWrappedObject, const QString&  pattern)
{
 theWrappedObject->setPattern(pattern);
}

int  PythonQtWrapper_QRegExp::indexIn(QRegExp* theWrappedObject, const QString&  str, int  offset, QRegExp::CaretMode  caretMode) const
{
return  theWrappedObject->indexIn(str, offset, caretMode);
}

bool  PythonQtWrapper_QRegExp::isValid(QRegExp* theWrappedObject) const
{
return  theWrappedObject->isValid();
}

int  PythonQtWrapper_QRegExp::lastIndexIn(QRegExp* theWrappedObject, const QString&  str, int  offset, QRegExp::CaretMode  caretMode) const
{
return  theWrappedObject->lastIndexIn(str, offset, caretMode);
}

void PythonQtWrapper_QRegExp::writeTo(QRegExp* theWrappedObject, QDataStream&  out)
{
out <<  (*theWrappedObject);
}

int  PythonQtWrapper_QRegExp::pos(QRegExp* theWrappedObject, int  nth)
{
return  theWrappedObject->pos(nth);
}

QString  PythonQtWrapper_QRegExp::cap(QRegExp* theWrappedObject, int  nth)
{
return  theWrappedObject->cap(nth);
}

QString  PythonQtWrapper_QRegExp::errorString(QRegExp* theWrappedObject)
{
return  theWrappedObject->errorString();
}

Qt::CaseSensitivity  PythonQtWrapper_QRegExp::caseSensitivity(QRegExp* theWrappedObject) const
{
return  theWrappedObject->caseSensitivity();
}
