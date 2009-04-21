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

class PythonQtWrapper_QXmlSerializer : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSerializer* new_QXmlSerializer(const QXmlQuery&  query, QIODevice*  outputDevice);
void delete_QXmlSerializer(QXmlSerializer* obj) { delete obj; } 
   void attribute(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QStringRef&  value);
   QIODevice*  outputDevice(QXmlSerializer* theWrappedObject) const;
   void characters(QXmlSerializer* theWrappedObject, const QStringRef&  value);
   void atomicValue(QXmlSerializer* theWrappedObject, const QVariant&  value);
   void startOfSequence(QXmlSerializer* theWrappedObject);
   const QTextCodec*  codec(QXmlSerializer* theWrappedObject) const;
   void setCodec(QXmlSerializer* theWrappedObject, const QTextCodec*  codec);
   void endDocument(QXmlSerializer* theWrappedObject);
   void startDocument(QXmlSerializer* theWrappedObject);
   void startElement(QXmlSerializer* theWrappedObject, const QXmlName&  name);
   void endElement(QXmlSerializer* theWrappedObject);
   void endOfSequence(QXmlSerializer* theWrappedObject);
   void processingInstruction(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QString&  value);
   void comment(QXmlSerializer* theWrappedObject, const QString&  value);
   void namespaceBinding(QXmlSerializer* theWrappedObject, const QXmlName&  nb);
};

#endif // PYTHONQTWRAPPER_QXMLSERIALIZER_H
