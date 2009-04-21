#include "PythonQtWrapper_QTime.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>

QTime* PythonQtWrapper_QTime::new_QTime()
{ 
return new QTime(); }

QTime* PythonQtWrapper_QTime::new_QTime(int  h, int  m, int  s, int  ms)
{ 
return new QTime(h, m, s, ms); }

bool  PythonQtWrapper_QTime::setHMS(QTime* theWrappedObject, int  h, int  m, int  s, int  ms)
{
return  theWrappedObject->setHMS(h, m, s, ms);
}

void PythonQtWrapper_QTime::readFrom(QTime* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  (*theWrappedObject);
}

int  PythonQtWrapper_QTime::minute(QTime* theWrappedObject) const
{
return  theWrappedObject->minute();
}

QTime  PythonQtWrapper_QTime::static_QTime_fromString(const QString&  s, const QString&  format)
{
return QTime::fromString(s, format);
}

void PythonQtWrapper_QTime::writeTo(QTime* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  (*theWrappedObject);
}

QTime  PythonQtWrapper_QTime::addMSecs(QTime* theWrappedObject, int  ms) const
{
return  theWrappedObject->addMSecs(ms);
}

bool  PythonQtWrapper_QTime::operator_equal(QTime* theWrappedObject, const QTime&  other) const
{
return  (*theWrappedObject)== other;
}

bool  PythonQtWrapper_QTime::static_QTime_isValid(int  h, int  m, int  s, int  ms)
{
return QTime::isValid(h, m, s, ms);
}

QTime  PythonQtWrapper_QTime::static_QTime_fromString(const QString&  s, Qt::DateFormat  f)
{
return QTime::fromString(s, f);
}

bool  PythonQtWrapper_QTime::isValid(QTime* theWrappedObject) const
{
return  theWrappedObject->isValid();
}

void PythonQtWrapper_QTime::start(QTime* theWrappedObject)
{
 theWrappedObject->start();
}

int  PythonQtWrapper_QTime::msecsTo(QTime* theWrappedObject, const QTime&  arg__1) const
{
return  theWrappedObject->msecsTo(arg__1);
}

int  PythonQtWrapper_QTime::hour(QTime* theWrappedObject) const
{
return  theWrappedObject->hour();
}

int  PythonQtWrapper_QTime::elapsed(QTime* theWrappedObject) const
{
return  theWrappedObject->elapsed();
}

QString  PythonQtWrapper_QTime::toString(QTime* theWrappedObject, const QString&  format) const
{
return  theWrappedObject->toString(format);
}

int  PythonQtWrapper_QTime::secsTo(QTime* theWrappedObject, const QTime&  arg__1) const
{
return  theWrappedObject->secsTo(arg__1);
}

QString  PythonQtWrapper_QTime::toString(QTime* theWrappedObject, Qt::DateFormat  f) const
{
return  theWrappedObject->toString(f);
}

int  PythonQtWrapper_QTime::msec(QTime* theWrappedObject) const
{
return  theWrappedObject->msec();
}

int  PythonQtWrapper_QTime::restart(QTime* theWrappedObject)
{
return  theWrappedObject->restart();
}

QTime  PythonQtWrapper_QTime::addSecs(QTime* theWrappedObject, int  secs) const
{
return  theWrappedObject->addSecs(secs);
}

QTime  PythonQtWrapper_QTime::static_QTime_currentTime()
{
return QTime::currentTime();
}

bool  PythonQtWrapper_QTime::operator_less(QTime* theWrappedObject, const QTime&  other) const
{
return  (*theWrappedObject)< other;
}

bool  PythonQtWrapper_QTime::isNull(QTime* theWrappedObject) const
{
return  theWrappedObject->isNull();
}

int  PythonQtWrapper_QTime::second(QTime* theWrappedObject) const
{
return  theWrappedObject->second();
}

