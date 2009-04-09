#ifndef PYTHONQTWRAPPER_QXMLFORMATTER_H
#define PYTHONQTWRAPPER_QXMLFORMATTER_H

#include <qxmlformatter.h>
#include <QObject>

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qabstractxmlreceiver.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qxmlname.h>
#include <qxmlquery.h>

class PythonQtWrapper_QXmlFormatter : public QObject
{ Q_OBJECT
public:
public slots:
QXmlFormatter* new_QXmlFormatter(const QXmlQuery&  query, QIODevice*  outputDevice);
void delete_QXmlFormatter(QXmlFormatter* obj) { delete obj; } 
   void atomicValue(QXmlFormatter* theWrappedObject, const QVariant&  value);
   void attribute(QXmlFormatter* theWrappedObject, const QXmlName&  name, const QStringRef&  value);
   void characters(QXmlFormatter* theWrappedObject, const QStringRef&  value);
   void comment(QXmlFormatter* theWrappedObject, const QString&  value);
   void endDocument(QXmlFormatter* theWrappedObject);
   void endElement(QXmlFormatter* theWrappedObject);
   void endOfSequence(QXmlFormatter* theWrappedObject);
   int  indentationDepth(QXmlFormatter* theWrappedObject) const;
   void processingInstruction(QXmlFormatter* theWrappedObject, const QXmlName&  name, const QString&  value);
   void setIndentationDepth(QXmlFormatter* theWrappedObject, int  depth);
   void startDocument(QXmlFormatter* theWrappedObject);
   void startElement(QXmlFormatter* theWrappedObject, const QXmlName&  name);
   void startOfSequence(QXmlFormatter* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QXMLFORMATTER_H
