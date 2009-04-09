#ifndef PYTHONQTWRAPPER_QXMLSERIALIZER_H
#define PYTHONQTWRAPPER_QXMLSERIALIZER_H

#include <qxmlserializer.h>
#include <QObject>

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qabstractxmlreceiver.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qxmlname.h>
#include <qxmlquery.h>

class PythonQtWrapper_QXmlSerializer : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSerializer* new_QXmlSerializer(const QXmlQuery&  query, QIODevice*  outputDevice);
void delete_QXmlSerializer(QXmlSerializer* obj) { delete obj; } 
   void atomicValue(QXmlSerializer* theWrappedObject, const QVariant&  value);
   void attribute(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QStringRef&  value);
   void characters(QXmlSerializer* theWrappedObject, const QStringRef&  value);
   const QTextCodec*  codec(QXmlSerializer* theWrappedObject) const;
   void comment(QXmlSerializer* theWrappedObject, const QString&  value);
   void endDocument(QXmlSerializer* theWrappedObject);
   void endElement(QXmlSerializer* theWrappedObject);
   void endOfSequence(QXmlSerializer* theWrappedObject);
   void namespaceBinding(QXmlSerializer* theWrappedObject, const QXmlName&  nb);
   QIODevice*  outputDevice(QXmlSerializer* theWrappedObject) const;
   void processingInstruction(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QString&  value);
   void setCodec(QXmlSerializer* theWrappedObject, const QTextCodec*  codec);
   void startDocument(QXmlSerializer* theWrappedObject);
   void startElement(QXmlSerializer* theWrappedObject, const QXmlName&  name);
   void startOfSequence(QXmlSerializer* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QXMLSERIALIZER_H
