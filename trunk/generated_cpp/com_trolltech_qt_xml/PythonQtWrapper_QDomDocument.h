#ifndef PYTHONQTWRAPPER_QDOMDOCUMENT_H
#define PYTHONQTWRAPPER_QDOMDOCUMENT_H

#include <qdom.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qdom.h>
#include <qiodevice.h>
#include <qtextstream.h>
#include <qxml.h>

class PythonQtWrapper_QDomDocument : public QObject
{ Q_OBJECT
public:
public slots:
QDomDocument* new_QDomDocument();
QDomDocument* new_QDomDocument(const QDomDocument&  x);
QDomDocument* new_QDomDocument(const QDomDocumentType&  doctype);
QDomDocument* new_QDomDocument(const QString&  name);
void delete_QDomDocument(QDomDocument* obj) { delete obj; } 
   bool  setContent(QDomDocument* theWrappedObject, QIODevice*  dev, bool  namespaceProcessing, QString*  errorMsg = 0, int*  errorLine = 0, int*  errorColumn = 0);
   bool  setContent(QDomDocument* theWrappedObject, const QByteArray&  text, QString*  errorMsg = 0, int*  errorLine = 0, int*  errorColumn = 0);
   QDomAttr  createAttribute(QDomDocument* theWrappedObject, const QString&  name);
   QDomElement  createElement(QDomDocument* theWrappedObject, const QString&  tagName);
   QDomNodeList  elementsByTagName(QDomDocument* theWrappedObject, const QString&  tagname) const;
   bool  setContent(QDomDocument* theWrappedObject, const QString&  text, bool  namespaceProcessing, QString*  errorMsg = 0, int*  errorLine = 0, int*  errorColumn = 0);
   QDomDocumentFragment  createDocumentFragment(QDomDocument* theWrappedObject);
   QDomElement  elementById(QDomDocument* theWrappedObject, const QString&  elementId);
   QDomNode  importNode(QDomDocument* theWrappedObject, const QDomNode&  importedNode, bool  deep);
   bool  setContent(QDomDocument* theWrappedObject, QXmlInputSource*  source, QXmlReader*  reader, QString*  errorMsg = 0, int*  errorLine = 0, int*  errorColumn = 0);
   bool  setContent(QDomDocument* theWrappedObject, const QString&  text, QString*  errorMsg = 0, int*  errorLine = 0, int*  errorColumn = 0);
   QDomImplementation  implementation(QDomDocument* theWrappedObject) const;
   QDomAttr  createAttributeNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  qName);
   QDomText  createTextNode(QDomDocument* theWrappedObject, const QString&  data);
   QDomNodeList  elementsByTagNameNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  localName);
   bool  setContent(QDomDocument* theWrappedObject, const QByteArray&  text, bool  namespaceProcessing, QString*  errorMsg = 0, int*  errorLine = 0, int*  errorColumn = 0);
   QByteArray  toByteArray(QDomDocument* theWrappedObject, int  arg__1 = 1) const;
   QDomProcessingInstruction  createProcessingInstruction(QDomDocument* theWrappedObject, const QString&  target, const QString&  data);
   QDomDocumentType  doctype(QDomDocument* theWrappedObject) const;
   QDomElement  documentElement(QDomDocument* theWrappedObject) const;
   QDomElement  createElementNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  qName);
   QDomEntityReference  createEntityReference(QDomDocument* theWrappedObject, const QString&  name);
   bool  setContent(QDomDocument* theWrappedObject, QIODevice*  dev, QString*  errorMsg = 0, int*  errorLine = 0, int*  errorColumn = 0);
   QDomCDATASection  createCDATASection(QDomDocument* theWrappedObject, const QString&  data);
   QString  toString(QDomDocument* theWrappedObject, int  arg__1 = 1) const;
   QDomComment  createComment(QDomDocument* theWrappedObject, const QString&  data);
};

#endif // PYTHONQTWRAPPER_QDOMDOCUMENT_H
