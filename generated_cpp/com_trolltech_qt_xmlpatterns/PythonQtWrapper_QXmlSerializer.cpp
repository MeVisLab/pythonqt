#include "PythonQtWrapper_QXmlSerializer.h"

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qabstractxmlreceiver.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qxmlname.h>
#include <qxmlquery.h>

QXmlSerializer* PythonQtWrapper_QXmlSerializer::new_QXmlSerializer(const QXmlQuery&  query, QIODevice*  outputDevice)
{ 
return new QXmlSerializer(query, outputDevice); }

void PythonQtWrapper_QXmlSerializer::atomicValue(QXmlSerializer* theWrappedObject, const QVariant&  value)
{
theWrappedObject->atomicValue(value);
}

void PythonQtWrapper_QXmlSerializer::attribute(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QStringRef&  value)
{
theWrappedObject->attribute(name, value);
}

void PythonQtWrapper_QXmlSerializer::characters(QXmlSerializer* theWrappedObject, const QStringRef&  value)
{
theWrappedObject->characters(value);
}

const QTextCodec*  PythonQtWrapper_QXmlSerializer::codec(QXmlSerializer* theWrappedObject) const
{
return theWrappedObject->codec();
}

void PythonQtWrapper_QXmlSerializer::comment(QXmlSerializer* theWrappedObject, const QString&  value)
{
theWrappedObject->comment(value);
}

void PythonQtWrapper_QXmlSerializer::endDocument(QXmlSerializer* theWrappedObject)
{
theWrappedObject->endDocument();
}

void PythonQtWrapper_QXmlSerializer::endElement(QXmlSerializer* theWrappedObject)
{
theWrappedObject->endElement();
}

void PythonQtWrapper_QXmlSerializer::endOfSequence(QXmlSerializer* theWrappedObject)
{
theWrappedObject->endOfSequence();
}

void PythonQtWrapper_QXmlSerializer::namespaceBinding(QXmlSerializer* theWrappedObject, const QXmlName&  nb)
{
theWrappedObject->namespaceBinding(nb);
}

QIODevice*  PythonQtWrapper_QXmlSerializer::outputDevice(QXmlSerializer* theWrappedObject) const
{
return theWrappedObject->outputDevice();
}

void PythonQtWrapper_QXmlSerializer::processingInstruction(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QString&  value)
{
theWrappedObject->processingInstruction(name, value);
}

void PythonQtWrapper_QXmlSerializer::setCodec(QXmlSerializer* theWrappedObject, const QTextCodec*  codec)
{
theWrappedObject->setCodec(codec);
}

void PythonQtWrapper_QXmlSerializer::startDocument(QXmlSerializer* theWrappedObject)
{
theWrappedObject->startDocument();
}

void PythonQtWrapper_QXmlSerializer::startElement(QXmlSerializer* theWrappedObject, const QXmlName&  name)
{
theWrappedObject->startElement(name);
}

void PythonQtWrapper_QXmlSerializer::startOfSequence(QXmlSerializer* theWrappedObject)
{
theWrappedObject->startOfSequence();
}

