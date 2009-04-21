#ifndef PYTHONQTWRAPPER_QXMLSTREAMWRITER_H
#define PYTHONQTWRAPPER_QXMLSTREAMWRITER_H

#include <qxmlstream.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qxmlstream.h>

class PythonQtWrapper_QXmlStreamWriter : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamWriter* new_QXmlStreamWriter();
QXmlStreamWriter* new_QXmlStreamWriter(QByteArray*  array);
QXmlStreamWriter* new_QXmlStreamWriter(QIODevice*  device);
void delete_QXmlStreamWriter(QXmlStreamWriter* obj) { delete obj; } 
   void writeCurrentToken(QXmlStreamWriter* theWrappedObject, const QXmlStreamReader&  reader);
   void writeNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  prefix = QString());
   void setAutoFormattingIndent(QXmlStreamWriter* theWrappedObject, int  spaces);
   void writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  text);
   void writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  text);
   int  autoFormattingIndent(QXmlStreamWriter* theWrappedObject) const;
   void setDevice(QXmlStreamWriter* theWrappedObject, QIODevice*  device);
   void writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version);
   void writeDTD(QXmlStreamWriter* theWrappedObject, const QString&  dtd);
   void writeEndDocument(QXmlStreamWriter* theWrappedObject);
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttribute&  attribute);
   void writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName);
   void writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name);
   QTextCodec*  codec(QXmlStreamWriter* theWrappedObject) const;
   bool  autoFormatting(QXmlStreamWriter* theWrappedObject) const;
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
   void writeStartDocument(QXmlStreamWriter* theWrappedObject);
   void writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName);
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  value);
   void writeCDATA(QXmlStreamWriter* theWrappedObject, const QString&  text);
   void writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name);
   QIODevice*  device(QXmlStreamWriter* theWrappedObject) const;
   void writeAttributes(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttributes&  attributes);
   void writeDefaultNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri);
   void writeEndElement(QXmlStreamWriter* theWrappedObject);
   void setCodec(QXmlStreamWriter* theWrappedObject, QTextCodec*  codec);
   void writeCharacters(QXmlStreamWriter* theWrappedObject, const QString&  text);
   void setCodec(QXmlStreamWriter* theWrappedObject, const char*  codecName);
   void writeComment(QXmlStreamWriter* theWrappedObject, const QString&  text);
   void writeEntityReference(QXmlStreamWriter* theWrappedObject, const QString&  name);
   void setAutoFormatting(QXmlStreamWriter* theWrappedObject, bool  arg__1);
   void writeProcessingInstruction(QXmlStreamWriter* theWrappedObject, const QString&  target, const QString&  data = QString());
};

#endif // PYTHONQTWRAPPER_QXMLSTREAMWRITER_H
