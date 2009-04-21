#include "PythonQtWrapper_QTextBoundaryFinder.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qtextboundaryfinder.h>

QTextBoundaryFinder* PythonQtWrapper_QTextBoundaryFinder::new_QTextBoundaryFinder()
{ 
return new QTextBoundaryFinder(); }

QTextBoundaryFinder* PythonQtWrapper_QTextBoundaryFinder::new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QString&  string)
{ 
return new QTextBoundaryFinder(type, string); }

QTextBoundaryFinder* PythonQtWrapper_QTextBoundaryFinder::new_QTextBoundaryFinder(const QTextBoundaryFinder&  other)
{ 
return new QTextBoundaryFinder(other); }

QTextBoundaryFinder::BoundaryReasons  PythonQtWrapper_QTextBoundaryFinder::boundaryReasons(QTextBoundaryFinder* theWrappedObject) const
{
return  (*theWrappedObject).boundaryReasons();
}

void PythonQtWrapper_QTextBoundaryFinder::setPosition(QTextBoundaryFinder* theWrappedObject, int  position)
{
 (*theWrappedObject).setPosition(position);
}

bool  PythonQtWrapper_QTextBoundaryFinder::isValid(QTextBoundaryFinder* theWrappedObject) const
{
return  (*theWrappedObject).isValid();
}

QString  PythonQtWrapper_QTextBoundaryFinder::string(QTextBoundaryFinder* theWrappedObject) const
{
return  (*theWrappedObject).string();
}

bool  PythonQtWrapper_QTextBoundaryFinder::isAtBoundary(QTextBoundaryFinder* theWrappedObject) const
{
return  (*theWrappedObject).isAtBoundary();
}

int  PythonQtWrapper_QTextBoundaryFinder::toNextBoundary(QTextBoundaryFinder* theWrappedObject)
{
return  (*theWrappedObject).toNextBoundary();
}

int  PythonQtWrapper_QTextBoundaryFinder::toPreviousBoundary(QTextBoundaryFinder* theWrappedObject)
{
return  (*theWrappedObject).toPreviousBoundary();
}

QTextBoundaryFinder::BoundaryType  PythonQtWrapper_QTextBoundaryFinder::type(QTextBoundaryFinder* theWrappedObject) const
{
return  (*theWrappedObject).type();
}

int  PythonQtWrapper_QTextBoundaryFinder::position(QTextBoundaryFinder* theWrappedObject) const
{
return  (*theWrappedObject).position();
}

void PythonQtWrapper_QTextBoundaryFinder::toEnd(QTextBoundaryFinder* theWrappedObject)
{
 (*theWrappedObject).toEnd();
}

void PythonQtWrapper_QTextBoundaryFinder::toStart(QTextBoundaryFinder* theWrappedObject)
{
 (*theWrappedObject).toStart();
}

