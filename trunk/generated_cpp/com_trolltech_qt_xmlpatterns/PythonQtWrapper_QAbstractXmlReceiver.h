#ifndef PYTHONQTWRAPPER_QABSTRACTXMLRECEIVER_H
#define PYTHONQTWRAPPER_QABSTRACTXMLRECEIVER_H

#include <qabstractxmlreceiver.h>
#include <QObject>

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qabstractxmlreceiver.h>
#include <qxmlname.h>

class PythonQtWrapper_QAbstractXmlReceiver : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAbstractXmlReceiver(QAbstractXmlReceiver* obj) { delete obj; } 
   void atomicValue(QAbstractXmlReceiver* theWrappedObject, const QVariant&  value);
   void attribute(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  name, const QStringRef&  value);
   void characters(QAbstractXmlReceiver* theWrappedObject, const QStringRef&  value);
   void comment(QAbstractXmlReceiver* theWrappedObject, const QString&  value);
   void endDocument(QAbstractXmlReceiver* theWrappedObject);
   void endElement(QAbstractXmlReceiver* theWrappedObject);
   void endOfSequence(QAbstractXmlReceiver* theWrappedObject);
   void namespaceBinding(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  name);
   void processingInstruction(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  target, const QString&  value);
   void startDocument(QAbstractXmlReceiver* theWrappedObject);
   void startElement(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  name);
   void startOfSequence(QAbstractXmlReceiver* theWrappedObject);
   void whitespaceOnly(QAbstractXmlReceiver* theWrappedObject, const QStringRef&  value);
};

#endif // PYTHONQTWRAPPER_QABSTRACTXMLRECEIVER_H
