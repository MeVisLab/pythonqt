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
   void setAutoFormattingIndent(QXmlStreamWriter* theWrappedObject, int  spaces);
   void writeCharacters(QXmlStreamWriter* theWrappedObject, const QString&  text);
   void writeEndDocument(QXmlStreamWriter* theWrappedObject);
   void setDevice(QXmlStreamWriter* theWrappedObject, QIODevice*  device);
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
   void writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name);
   void writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name);
   void writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  text);
   void writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  text);
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  value);
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttribute&  attribute);
   void writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName);
   void writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName);
   void writeCDATA(QXmlStreamWriter* theWrappedObject, const QString&  text);
   QTextCodec*  codec(QXmlStreamWriter* theWrappedObject) const;
   void writeCurrentToken(QXmlStreamWriter* theWrappedObject, const QXmlStreamReader&  reader);
   void writeAttributes(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttributes&  attributes);
   int  autoFormattingIndent(QXmlStreamWriter* theWrappedObject) const;
   void writeComment(QXmlStreamWriter* theWrappedObject, const QString&  text);
   void writeDefaultNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri);
   bool  autoFormatting(QXmlStreamWriter* theWrappedObject) const;
   void setCodec(QXmlStreamWriter* theWrappedObject, QTextCodec*  codec);
   void writeEntityReference(QXmlStreamWriter* theWrappedObject, const QString&  name);
   void writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version);
   void setAutoFormatting(QXmlStreamWriter* theWrappedObject, bool  arg__1);
   QIODevice*  device(QXmlStreamWriter* theWrappedObject) const;
   void setCodec(QXmlStreamWriter* theWrappedObject, const char*  codecName);
   void writeNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  prefix = QString());
   void writeEndElement(QXmlStreamWriter* theWrappedObject);
   void writeProcessingInstruction(QXmlStreamWriter* theWrappedObject, const QString&  target, const QString&  data = QString());
   void writeDTD(QXmlStreamWriter* theWrappedObject, const QString&  dtd);
   void writeStartDocument(QXmlStreamWriter* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QXMLSTREAMWRITER_H
