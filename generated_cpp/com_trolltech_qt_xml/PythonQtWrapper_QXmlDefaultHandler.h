#ifndef PYTHONQTWRAPPER_QXMLDEFAULTHANDLER_H
#define PYTHONQTWRAPPER_QXMLDEFAULTHANDLER_H

#include <qxml.h>
#include <QObject>

#include <QVariant>
#include <qxml.h>

class PythonQtWrapper_QXmlDefaultHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlDefaultHandler* new_QXmlDefaultHandler();
void delete_QXmlDefaultHandler(QXmlDefaultHandler* obj) { delete obj; } 
   bool  attributeDecl(QXmlDefaultHandler* theWrappedObject, const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value);
   bool  characters(QXmlDefaultHandler* theWrappedObject, const QString&  ch);
   bool  comment(QXmlDefaultHandler* theWrappedObject, const QString&  ch);
   bool  endCDATA(QXmlDefaultHandler* theWrappedObject);
   bool  endDTD(QXmlDefaultHandler* theWrappedObject);
   bool  endDocument(QXmlDefaultHandler* theWrappedObject);
   bool  endElement(QXmlDefaultHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName);
   bool  endEntity(QXmlDefaultHandler* theWrappedObject, const QString&  name);
   bool  endPrefixMapping(QXmlDefaultHandler* theWrappedObject, const QString&  prefix);
   bool  error(QXmlDefaultHandler* theWrappedObject, const QXmlParseException&  exception);
   QString  errorString(QXmlDefaultHandler* theWrappedObject) const;
   bool  externalEntityDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId);
   bool  fatalError(QXmlDefaultHandler* theWrappedObject, const QXmlParseException&  exception);
   bool  ignorableWhitespace(QXmlDefaultHandler* theWrappedObject, const QString&  ch);
   bool  internalEntityDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  value);
   bool  notationDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId);
   bool  processingInstruction(QXmlDefaultHandler* theWrappedObject, const QString&  target, const QString&  data);
   bool  resolveEntity(QXmlDefaultHandler* theWrappedObject, const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret);
   void setDocumentLocator(QXmlDefaultHandler* theWrappedObject, QXmlLocator*  locator);
   bool  skippedEntity(QXmlDefaultHandler* theWrappedObject, const QString&  name);
   bool  startCDATA(QXmlDefaultHandler* theWrappedObject);
   bool  startDTD(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId);
   bool  startDocument(QXmlDefaultHandler* theWrappedObject);
   bool  startElement(QXmlDefaultHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts);
   bool  startEntity(QXmlDefaultHandler* theWrappedObject, const QString&  name);
   bool  startPrefixMapping(QXmlDefaultHandler* theWrappedObject, const QString&  prefix, const QString&  uri);
   bool  unparsedEntityDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName);
   bool  warning(QXmlDefaultHandler* theWrappedObject, const QXmlParseException&  exception);
};

#endif // PYTHONQTWRAPPER_QXMLDEFAULTHANDLER_H
