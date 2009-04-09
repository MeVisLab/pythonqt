#include "PythonQtWrapper_QAbstractXmlReceiver.h"

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qabstractxmlreceiver.h>
#include <qxmlname.h>

void PythonQtWrapper_QAbstractXmlReceiver::atomicValue(QAbstractXmlReceiver* theWrappedObject, const QVariant&  value)
{
theWrappedObject->atomicValue(value);
}

void PythonQtWrapper_QAbstractXmlReceiver::attribute(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  name, const QStringRef&  value)
{
theWrappedObject->attribute(name, value);
}

void PythonQtWrapper_QAbstractXmlReceiver::characters(QAbstractXmlReceiver* theWrappedObject, const QStringRef&  value)
{
theWrappedObject->characters(value);
}

void PythonQtWrapper_QAbstractXmlReceiver::comment(QAbstractXmlReceiver* theWrappedObject, const QString&  value)
{
theWrappedObject->comment(value);
}

void PythonQtWrapper_QAbstractXmlReceiver::endDocument(QAbstractXmlReceiver* theWrappedObject)
{
theWrappedObject->endDocument();
}

void PythonQtWrapper_QAbstractXmlReceiver::endElement(QAbstractXmlReceiver* theWrappedObject)
{
theWrappedObject->endElement();
}

void PythonQtWrapper_QAbstractXmlReceiver::endOfSequence(QAbstractXmlReceiver* theWrappedObject)
{
theWrappedObject->endOfSequence();
}

void PythonQtWrapper_QAbstractXmlReceiver::namespaceBinding(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  name)
{
theWrappedObject->namespaceBinding(name);
}

void PythonQtWrapper_QAbstractXmlReceiver::processingInstruction(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  target, const QString&  value)
{
theWrappedObject->processingInstruction(target, value);
}

void PythonQtWrapper_QAbstractXmlReceiver::startDocument(QAbstractXmlReceiver* theWrappedObject)
{
theWrappedObject->startDocument();
}

void PythonQtWrapper_QAbstractXmlReceiver::startElement(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  name)
{
theWrappedObject->startElement(name);
}

void PythonQtWrapper_QAbstractXmlReceiver::startOfSequence(QAbstractXmlReceiver* theWrappedObject)
{
theWrappedObject->startOfSequence();
}

void PythonQtWrapper_QAbstractXmlReceiver::whitespaceOnly(QAbstractXmlReceiver* theWrappedObject, const QStringRef&  value)
{
theWrappedObject->whitespaceOnly(value);
}

