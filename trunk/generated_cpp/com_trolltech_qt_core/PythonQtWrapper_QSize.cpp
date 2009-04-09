#include "PythonQtWrapper_QSize.h"

#include <QVariant>
#include <qdatastream.h>
#include <qsize.h>

QSize* PythonQtWrapper_QSize::new_QSize()
{ 
return new QSize(); }

QSize* PythonQtWrapper_QSize::new_QSize(int  w, int  h)
{ 
return new QSize(w, h); }

QSize  PythonQtWrapper_QSize::boundedTo(QSize* theWrappedObject, const QSize&  arg__1) const
{
return theWrappedObject->boundedTo(arg__1);
}

QSize  PythonQtWrapper_QSize::expandedTo(QSize* theWrappedObject, const QSize&  arg__1) const
{
return theWrappedObject->expandedTo(arg__1);
}

int  PythonQtWrapper_QSize::height(QSize* theWrappedObject) const
{
return theWrappedObject->height();
}

bool  PythonQtWrapper_QSize::isEmpty(QSize* theWrappedObject) const
{
return theWrappedObject->isEmpty();
}

bool  PythonQtWrapper_QSize::isNull(QSize* theWrappedObject) const
{
return theWrappedObject->isNull();
}

bool  PythonQtWrapper_QSize::isValid(QSize* theWrappedObject) const
{
return theWrappedObject->isValid();
}

QSize&  PythonQtWrapper_QSize::operator_multiply_assign(QSize* theWrappedObject, qreal  c)
{
return *theWrappedObject *= c;
}

QSize&  PythonQtWrapper_QSize::operator_add_assign(QSize* theWrappedObject, const QSize&  arg__1)
{
return *theWrappedObject += arg__1;
}

QSize&  PythonQtWrapper_QSize::operator_subtract_assign(QSize* theWrappedObject, const QSize&  arg__1)
{
return *theWrappedObject -= arg__1;
}

QSize&  PythonQtWrapper_QSize::operator_divide_assign(QSize* theWrappedObject, qreal  c)
{
return *theWrappedObject /= c;
}

void PythonQtWrapper_QSize::writeTo(QSize* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  *theWrappedObject;
}

bool  PythonQtWrapper_QSize::operator_equal(QSize* theWrappedObject, const QSize&  s2)
{
return *theWrappedObject == s2;
}

void PythonQtWrapper_QSize::readFrom(QSize* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  *theWrappedObject;
}

void PythonQtWrapper_QSize::scale(QSize* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  mode)
{
theWrappedObject->scale(s, mode);
}

void PythonQtWrapper_QSize::scale(QSize* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  mode)
{
theWrappedObject->scale(w, h, mode);
}

void PythonQtWrapper_QSize::setHeight(QSize* theWrappedObject, int  h)
{
theWrappedObject->setHeight(h);
}

void PythonQtWrapper_QSize::setWidth(QSize* theWrappedObject, int  w)
{
theWrappedObject->setWidth(w);
}

void PythonQtWrapper_QSize::transpose(QSize* theWrappedObject)
{
theWrappedObject->transpose();
}

int  PythonQtWrapper_QSize::width(QSize* theWrappedObject) const
{
return theWrappedObject->width();
}

