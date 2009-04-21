#ifndef PYTHONQTWRAPPER_QXMLSERIALIZER_H
#define PYTHONQTWRAPPER_QXMLSERIALIZER_H

#include <qxmlserializer.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qabstractxmlreceiver.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qxmlname.h>
#include <qxmlquery.h>

class PythonQtShell_QXmlSerializer : public QXmlSerializer
{
public:
    PythonQtShell_QXmlSerializer(const QXmlQuery&  query, QIODevice*  outputDevice):QXmlSerializer(query, outputDevice),_wrapper(NULL) {};

virtual void atomicValue(const QVariant&  value);
virtual void attribute(const QXmlName&  name, const QStringRef&  value);
virtual void characters(const QStringRef&  value);
virtual void comment(const QString&  value);
virtual void endDocument();
virtual void endElement();
virtual void endOfSequence();
virtual void namespaceBinding(const QXmlName&  nb);
virtual void processingInstruction(const QXmlName&  name, const QString&  value);
virtual void startDocument();
virtual void startElement(const QXmlName&  name);
virtual void startOfSequence();
virtual void whitespaceOnly(const QStringRef&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlSerializer : public QXmlSerializer
{ public:
inline void promoted_atomicValue(const QVariant&  value) { QXmlSerializer::atomicValue(value); }
inline void promoted_namespaceBinding(const QXmlName&  nb) { QXmlSerializer::namespaceBinding(nb); }
inline void promoted_attribute(const QXmlName&  name, const QStringRef&  value) { QXmlSerializer::attribute(name, value); }
inline void promoted_characters(const QStringRef&  value) { QXmlSerializer::characters(value); }
inline void promoted_startDocument() { QXmlSerializer::startDocument(); }
inline void promoted_startElement(const QXmlName&  name) { QXmlSerializer::startElement(name); }
inline void promoted_endDocument() { QXmlSerializer::endDocument(); }
inline void promoted_comment(const QString&  value) { QXmlSerializer::comment(value); }
inline void promoted_processingInstruction(const QXmlName&  name, const QString&  value) { QXmlSerializer::processingInstruction(name, value); }
inline void promoted_endElement() { QXmlSerializer::endElement(); }
inline void promoted_endOfSequence() { QXmlSerializer::endOfSequence(); }
inline void promoted_startOfSequence() { QXmlSerializer::startOfSequence(); }
};

class PythonQtWrapper_QXmlSerializer : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSerializer* new_QXmlSerializer(const QXmlQuery&  query, QIODevice*  outputDevice);
void delete_QXmlSerializer(QXmlSerializer* obj) { delete obj; } 
   void atomicValue(QXmlSerializer* theWrappedObject, const QVariant&  value);
   const QTextCodec*  codec(QXmlSerializer* theWrappedObject) const;
   void namespaceBinding(QXmlSerializer* theWrappedObject, const QXmlName&  nb);
   void attribute(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QStringRef&  value);
   void characters(QXmlSerializer* theWrappedObject, const QStringRef&  value);
   void startDocument(QXmlSerializer* theWrappedObject);
   QIODevice*  outputDevice(QXmlSerializer* theWrappedObject) const;
   void setCodec(QXmlSerializer* theWrappedObject, const QTextCodec*  codec);
   void startElement(QXmlSerializer* theWrappedObject, const QXmlName&  name);
   void endDocument(QXmlSerializer* theWrappedObject);
   void comment(QXmlSerializer* theWrappedObject, const QString&  value);
   void processingInstruction(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QString&  value);
   void endElement(QXmlSerializer* theWrappedObject);
   void endOfSequence(QXmlSerializer* theWrappedObject);
   void startOfSequence(QXmlSerializer* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QXMLSERIALIZER_H
