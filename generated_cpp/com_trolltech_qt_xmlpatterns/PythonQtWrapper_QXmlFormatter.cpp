#include "PythonQtWrapper_QXmlFormatter.h"

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qabstractxmlreceiver.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qxmlname.h>
#include <qxmlquery.h>

QXmlFormatter* PythonQtWrapper_QXmlFormatter::new_QXmlFormatter(const QXmlQuery&  query, QIODevice*  outputDevice)
{ 
return new QXmlFormatter(query, outputDevice); }

void PythonQtWrapper_QXmlFormatter::atomicValue(QXmlFormatter* theWrappedObject, const QVariant&  value)
{
theWrappedObject->atomicValue(value);
}

void PythonQtWrapper_QXmlFormatter::attribute(QXmlFormatter* theWrappedObject, const QXmlName&  name, const QStringRef&  value)
{
theWrappedObject->attribute(name, value);
}

void PythonQtWrapper_QXmlFormatter::characters(QXmlFormatter* theWrappedObject, const QStringRef&  value)
{
theWrappedObject->characters(value);
}

void PythonQtWrapper_QXmlFormatter::comment(QXmlFormatter* theWrappedObject, const QString&  value)
{
theWrappedObject->comment(value);
}

void PythonQtWrapper_QXmlFormatter::endDocument(QXmlFormatter* theWrappedObject)
{
theWrappedObject->endDocument();
}

void PythonQtWrapper_QXmlFormatter::endElement(QXmlFormatter* theWrappedObject)
{
theWrappedObject->endElement();
}

void PythonQtWrapper_QXmlFormatter::endOfSequence(QXmlFormatter* theWrappedObject)
{
theWrappedObject->endOfSequence();
}

int  PythonQtWrapper_QXmlFormatter::indentationDepth(QXmlFormatter* theWrappedObject) const
{
return theWrappedObject->indentationDepth();
}

void PythonQtWrapper_QXmlFormatter::processingInstruction(QXmlFormatter* theWrappedObject, const QXmlName&  name, const QString&  value)
{
theWrappedObject->processingInstruction(name, value);
}

void PythonQtWrapper_QXmlFormatter::setIndentationDepth(QXmlFormatter* theWrappedObject, int  depth)
{
theWrappedObject->setIndentationDepth(depth);
}

void PythonQtWrapper_QXmlFormatter::startDocument(QXmlFormatter* theWrappedObject)
{
theWrappedObject->startDocument();
}

void PythonQtWrapper_QXmlFormatter::startElement(QXmlFormatter* theWrappedObject, const QXmlName&  name)
{
theWrappedObject->startElement(name);
}

void PythonQtWrapper_QXmlFormatter::startOfSequence(QXmlFormatter* theWrappedObject)
{
theWrappedObject->startOfSequence();
}

