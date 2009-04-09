#ifndef PYTHONQTWRAPPER_QXMLCONTENTHANDLER_H
#define PYTHONQTWRAPPER_QXMLCONTENTHANDLER_H

#include <qxml.h>
#include <QObject>

#include <QVariant>
#include <qxml.h>

class PythonQtWrapper_QXmlContentHandler : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QXmlContentHandler(QXmlContentHandler* obj) { delete obj; } 
   bool  characters(QXmlContentHandler* theWrappedObject, const QString&  ch);
   bool  endDocument(QXmlContentHandler* theWrappedObject);
   bool  endElement(QXmlContentHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName);
   bool  endPrefixMapping(QXmlContentHandler* theWrappedObject, const QString&  prefix);
   QString  errorString(QXmlContentHandler* theWrappedObject) const;
   bool  ignorableWhitespace(QXmlContentHandler* theWrappedObject, const QString&  ch);
   bool  processingInstruction(QXmlContentHandler* theWrappedObject, const QString&  target, const QString&  data);
   void setDocumentLocator(QXmlContentHandler* theWrappedObject, QXmlLocator*  locator);
   bool  skippedEntity(QXmlContentHandler* theWrappedObject, const QString&  name);
   bool  startDocument(QXmlContentHandler* theWrappedObject);
   bool  startElement(QXmlContentHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts);
   bool  startPrefixMapping(QXmlContentHandler* theWrappedObject, const QString&  prefix, const QString&  uri);
};

#endif // PYTHONQTWRAPPER_QXMLCONTENTHANDLER_H
