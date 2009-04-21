#ifndef PYTHONQTWRAPPER_QXMLDEFAULTHANDLER_H
#define PYTHONQTWRAPPER_QXMLDEFAULTHANDLER_H

#include <qxml.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qxml.h>

class PythonQtShell_QXmlDefaultHandler : public QXmlDefaultHandler
{
public:
    PythonQtShell_QXmlDefaultHandler():QXmlDefaultHandler(),_wrapper(NULL) {};

virtual bool  attributeDecl(const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value);
virtual bool  characters(const QString&  ch);
virtual bool  comment(const QString&  ch);
virtual bool  endCDATA();
virtual bool  endDTD();
virtual bool  endDocument();
virtual bool  endElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName);
virtual bool  endEntity(const QString&  name);
virtual bool  endPrefixMapping(const QString&  prefix);
virtual bool  error(const QXmlParseException&  exception);
virtual QString  errorString() const;
virtual bool  externalEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId);
virtual bool  fatalError(const QXmlParseException&  exception);
virtual bool  ignorableWhitespace(const QString&  ch);
virtual bool  internalEntityDecl(const QString&  name, const QString&  value);
virtual bool  notationDecl(const QString&  name, const QString&  publicId, const QString&  systemId);
virtual bool  processingInstruction(const QString&  target, const QString&  data);
virtual bool  resolveEntity(const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret);
virtual void setDocumentLocator(QXmlLocator*  locator);
virtual bool  skippedEntity(const QString&  name);
virtual bool  startCDATA();
virtual bool  startDTD(const QString&  name, const QString&  publicId, const QString&  systemId);
virtual bool  startDocument();
virtual bool  startElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts);
virtual bool  startEntity(const QString&  name);
virtual bool  startPrefixMapping(const QString&  prefix, const QString&  uri);
virtual bool  unparsedEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName);
virtual bool  warning(const QXmlParseException&  exception);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlDefaultHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlDefaultHandler* new_QXmlDefaultHandler();
void delete_QXmlDefaultHandler(QXmlDefaultHandler* obj) { delete obj; } 
   bool  processingInstruction(QXmlDefaultHandler* theWrappedObject, const QString&  target, const QString&  data);
   bool  endDTD(QXmlDefaultHandler* theWrappedObject);
   bool  skippedEntity(QXmlDefaultHandler* theWrappedObject, const QString&  name);
   bool  startDTD(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId);
   bool  endCDATA(QXmlDefaultHandler* theWrappedObject);
   bool  comment(QXmlDefaultHandler* theWrappedObject, const QString&  ch);
   bool  characters(QXmlDefaultHandler* theWrappedObject, const QString&  ch);
   bool  endDocument(QXmlDefaultHandler* theWrappedObject);
   bool  endPrefixMapping(QXmlDefaultHandler* theWrappedObject, const QString&  prefix);
   QString  errorString(QXmlDefaultHandler* theWrappedObject) const;
   void setDocumentLocator(QXmlDefaultHandler* theWrappedObject, QXmlLocator*  locator);
   bool  ignorableWhitespace(QXmlDefaultHandler* theWrappedObject, const QString&  ch);
   bool  startCDATA(QXmlDefaultHandler* theWrappedObject);
   bool  externalEntityDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId);
   bool  startElement(QXmlDefaultHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts);
   bool  notationDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId);
   bool  startPrefixMapping(QXmlDefaultHandler* theWrappedObject, const QString&  prefix, const QString&  uri);
   bool  attributeDecl(QXmlDefaultHandler* theWrappedObject, const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value);
   bool  endEntity(QXmlDefaultHandler* theWrappedObject, const QString&  name);
   bool  error(QXmlDefaultHandler* theWrappedObject, const QXmlParseException&  exception);
   bool  startDocument(QXmlDefaultHandler* theWrappedObject);
   bool  unparsedEntityDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName);
   bool  warning(QXmlDefaultHandler* theWrappedObject, const QXmlParseException&  exception);
   bool  internalEntityDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  value);
   bool  resolveEntity(QXmlDefaultHandler* theWrappedObject, const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret);
   bool  startEntity(QXmlDefaultHandler* theWrappedObject, const QString&  name);
   bool  endElement(QXmlDefaultHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName);
   bool  fatalError(QXmlDefaultHandler* theWrappedObject, const QXmlParseException&  exception);
};

#endif // PYTHONQTWRAPPER_QXMLDEFAULTHANDLER_H
