#include "PythonQtWrapper_QXmlStreamWriter.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qxmlstream.h>

QXmlStreamWriter* PythonQtWrapper_QXmlStreamWriter::new_QXmlStreamWriter()
{ 
return new QXmlStreamWriter(); }

QXmlStreamWriter* PythonQtWrapper_QXmlStreamWriter::new_QXmlStreamWriter(QByteArray*  array)
{ 
return new QXmlStreamWriter(array); }

QXmlStreamWriter* PythonQtWrapper_QXmlStreamWriter::new_QXmlStreamWriter(QIODevice*  device)
{ 
return new QXmlStreamWriter(device); }

void PythonQtWrapper_QXmlStreamWriter::writeCurrentToken(QXmlStreamWriter* theWrappedObject, const QXmlStreamReader&  reader)
{
 (*theWrappedObject).writeCurrentToken(reader);
}

void PythonQtWrapper_QXmlStreamWriter::writeNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  prefix)
{
 (*theWrappedObject).writeNamespace(namespaceUri, prefix);
}

void PythonQtWrapper_QXmlStreamWriter::setAutoFormattingIndent(QXmlStreamWriter* theWrappedObject, int  spaces)
{
 (*theWrappedObject).setAutoFormattingIndent(spaces);
}

void PythonQtWrapper_QXmlStreamWriter::writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  text)
{
 (*theWrappedObject).writeTextElement(namespaceUri, name, text);
}

void PythonQtWrapper_QXmlStreamWriter::writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  text)
{
 (*theWrappedObject).writeTextElement(qualifiedName, text);
}

int  PythonQtWrapper_QXmlStreamWriter::autoFormattingIndent(QXmlStreamWriter* theWrappedObject) const
{
return  (*theWrappedObject).autoFormattingIndent();
}

void PythonQtWrapper_QXmlStreamWriter::setDevice(QXmlStreamWriter* theWrappedObject, QIODevice*  device)
{
 (*theWrappedObject).setDevice(device);
}

void PythonQtWrapper_QXmlStreamWriter::writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version)
{
 (*theWrappedObject).writeStartDocument(version);
}

void PythonQtWrapper_QXmlStreamWriter::writeDTD(QXmlStreamWriter* theWrappedObject, const QString&  dtd)
{
 (*theWrappedObject).writeDTD(dtd);
}

void PythonQtWrapper_QXmlStreamWriter::writeEndDocument(QXmlStreamWriter* theWrappedObject)
{
 (*theWrappedObject).writeEndDocument();
}

void PythonQtWrapper_QXmlStreamWriter::writeAttribute(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttribute&  attribute)
{
 (*theWrappedObject).writeAttribute(attribute);
}

void PythonQtWrapper_QXmlStreamWriter::writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName)
{
 (*theWrappedObject).writeEmptyElement(qualifiedName);
}

void PythonQtWrapper_QXmlStreamWriter::writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name)
{
 (*theWrappedObject).writeStartElement(namespaceUri, name);
}

QTextCodec*  PythonQtWrapper_QXmlStreamWriter::codec(QXmlStreamWriter* theWrappedObject) const
{
return  (*theWrappedObject).codec();
}

bool  PythonQtWrapper_QXmlStreamWriter::autoFormatting(QXmlStreamWriter* theWrappedObject) const
{
return  (*theWrappedObject).autoFormatting();
}

void PythonQtWrapper_QXmlStreamWriter::writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value)
{
 (*theWrappedObject).writeAttribute(namespaceUri, name, value);
}

void PythonQtWrapper_QXmlStreamWriter::writeStartDocument(QXmlStreamWriter* theWrappedObject)
{
 (*theWrappedObject).writeStartDocument();
}

void PythonQtWrapper_QXmlStreamWriter::writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName)
{
 (*theWrappedObject).writeStartElement(qualifiedName);
}

void PythonQtWrapper_QXmlStreamWriter::writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  value)
{
 (*theWrappedObject).writeAttribute(qualifiedName, value);
}

void PythonQtWrapper_QXmlStreamWriter::writeCDATA(QXmlStreamWriter* theWrappedObject, const QString&  text)
{
 (*theWrappedObject).writeCDATA(text);
}

void PythonQtWrapper_QXmlStreamWriter::writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name)
{
 (*theWrappedObject).writeEmptyElement(namespaceUri, name);
}

QIODevice*  PythonQtWrapper_QXmlStreamWriter::device(QXmlStreamWriter* theWrappedObject) const
{
return  (*theWrappedObject).device();
}

void PythonQtWrapper_QXmlStreamWriter::writeAttributes(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttributes&  attributes)
{
 (*theWrappedObject).writeAttributes(attributes);
}

void PythonQtWrapper_QXmlStreamWriter::writeDefaultNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri)
{
 (*theWrappedObject).writeDefaultNamespace(namespaceUri);
}

void PythonQtWrapper_QXmlStreamWriter::writeEndElement(QXmlStreamWriter* theWrappedObject)
{
 (*theWrappedObject).writeEndElement();
}

void PythonQtWrapper_QXmlStreamWriter::setCodec(QXmlStreamWriter* theWrappedObject, QTextCodec*  codec)
{
 (*theWrappedObject).setCodec(codec);
}

void PythonQtWrapper_QXmlStreamWriter::writeCharacters(QXmlStreamWriter* theWrappedObject, const QString&  text)
{
 (*theWrappedObject).writeCharacters(text);
}

void PythonQtWrapper_QXmlStreamWriter::setCodec(QXmlStreamWriter* theWrappedObject, const char*  codecName)
{
 (*theWrappedObject).setCodec(codecName);
}

void PythonQtWrapper_QXmlStreamWriter::writeComment(QXmlStreamWriter* theWrappedObject, const QString&  text)
{
 (*theWrappedObject).writeComment(text);
}

void PythonQtWrapper_QXmlStreamWriter::writeEntityReference(QXmlStreamWriter* theWrappedObject, const QString&  name)
{
 (*theWrappedObject).writeEntityReference(name);
}

void PythonQtWrapper_QXmlStreamWriter::setAutoFormatting(QXmlStreamWriter* theWrappedObject, bool  arg__1)
{
 (*theWrappedObject).setAutoFormatting(arg__1);
}

void PythonQtWrapper_QXmlStreamWriter::writeProcessingInstruction(QXmlStreamWriter* theWrappedObject, const QString&  target, const QString&  data)
{
 (*theWrappedObject).writeProcessingInstruction(target, data);
}

