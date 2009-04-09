#include "PythonQtWrapper_QXmlInputSource.h"

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>

QXmlInputSource* PythonQtWrapper_QXmlInputSource::new_QXmlInputSource()
{ 
return new QXmlInputSource(); }

QXmlInputSource* PythonQtWrapper_QXmlInputSource::new_QXmlInputSource(QIODevice*  dev)
{ 
return new QXmlInputSource(dev); }

QString  PythonQtWrapper_QXmlInputSource::data(QXmlInputSource* theWrappedObject) const
{
return theWrappedObject->data();
}

void PythonQtWrapper_QXmlInputSource::fetchData(QXmlInputSource* theWrappedObject)
{
theWrappedObject->fetchData();
}

QChar  PythonQtWrapper_QXmlInputSource::next(QXmlInputSource* theWrappedObject)
{
return theWrappedObject->next();
}

void PythonQtWrapper_QXmlInputSource::reset(QXmlInputSource* theWrappedObject)
{
theWrappedObject->reset();
}

void PythonQtWrapper_QXmlInputSource::setData(QXmlInputSource* theWrappedObject, const QByteArray&  dat)
{
theWrappedObject->setData(dat);
}

void PythonQtWrapper_QXmlInputSource::setData(QXmlInputSource* theWrappedObject, const QString&  dat)
{
theWrappedObject->setData(dat);
}

