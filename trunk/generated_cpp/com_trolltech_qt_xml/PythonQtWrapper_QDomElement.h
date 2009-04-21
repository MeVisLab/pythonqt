#ifndef PYTHONQTWRAPPER_QDOMELEMENT_H
#define PYTHONQTWRAPPER_QDOMELEMENT_H

#include <qdom.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

class PythonQtWrapper_QDomElement : public QObject
{ Q_OBJECT
public:
public slots:
QDomElement* new_QDomElement();
QDomElement* new_QDomElement(const QDomElement&  x);
void delete_QDomElement(QDomElement* obj) { delete obj; } 
   void setTagName(QDomElement* theWrappedObject, const QString&  name);
   QDomNodeList  elementsByTagName(QDomElement* theWrappedObject, const QString&  tagname) const;
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, int  value);
   bool  hasAttribute(QDomElement* theWrappedObject, const QString&  name) const;
   QDomNodeList  elementsByTagNameNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName) const;
   void removeAttribute(QDomElement* theWrappedObject, const QString&  name);
   QDomAttr  setAttributeNodeNS(QDomElement* theWrappedObject, const QDomAttr&  newAttr);
   QString  attribute(QDomElement* theWrappedObject, const QString&  name, const QString&  defValue = QString()) const;
   QString  attributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  localName, const QString&  defValue = QString()) const;
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, double  value);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, qlonglong  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, const QString&  value);
   void removeAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName);
   QString  tagName(QDomElement* theWrappedObject) const;
   QDomAttr  attributeNodeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, const QString&  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, int  value);
   QDomAttr  attributeNode(QDomElement* theWrappedObject, const QString&  name);
   bool  hasAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName) const;
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, float  value);
   QString  text(QDomElement* theWrappedObject) const;
   QDomAttr  removeAttributeNode(QDomElement* theWrappedObject, const QDomAttr&  oldAttr);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, double  value);
   QDomNamedNodeMap  attributes(QDomElement* theWrappedObject) const;
   QDomAttr  setAttributeNode(QDomElement* theWrappedObject, const QDomAttr&  newAttr);
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, qlonglong  value);
};

#endif // PYTHONQTWRAPPER_QDOMELEMENT_H
