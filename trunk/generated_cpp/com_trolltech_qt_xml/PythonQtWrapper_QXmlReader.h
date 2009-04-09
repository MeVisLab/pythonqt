#ifndef PYTHONQTWRAPPER_QXMLREADER_H
#define PYTHONQTWRAPPER_QXMLREADER_H

#include <qxml.h>
#include <QObject>

#include <QVariant>
#include <qxml.h>

class PythonQtWrapper_QXmlReader : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QXmlReader(QXmlReader* obj) { delete obj; } 
   QXmlDTDHandler*  DTDHandler(QXmlReader* theWrappedObject) const;
   QXmlContentHandler*  contentHandler(QXmlReader* theWrappedObject) const;
   QXmlDeclHandler*  declHandler(QXmlReader* theWrappedObject) const;
   QXmlEntityResolver*  entityResolver(QXmlReader* theWrappedObject) const;
   QXmlErrorHandler*  errorHandler(QXmlReader* theWrappedObject) const;
   bool  feature(QXmlReader* theWrappedObject, const QString&  name, bool*  ok = 0) const;
   bool  hasFeature(QXmlReader* theWrappedObject, const QString&  name) const;
   bool  hasProperty(QXmlReader* theWrappedObject, const QString&  name) const;
   QXmlLexicalHandler*  lexicalHandler(QXmlReader* theWrappedObject) const;
   bool  parse(QXmlReader* theWrappedObject, const QXmlInputSource&  input);
   bool  parse(QXmlReader* theWrappedObject, const QXmlInputSource*  input);
   void*  property(QXmlReader* theWrappedObject, const QString&  name, bool*  ok = 0) const;
   void setContentHandler(QXmlReader* theWrappedObject, QXmlContentHandler*  handler);
   void setDTDHandler(QXmlReader* theWrappedObject, QXmlDTDHandler*  handler);
   void setDeclHandler(QXmlReader* theWrappedObject, QXmlDeclHandler*  handler);
   void setEntityResolver(QXmlReader* theWrappedObject, QXmlEntityResolver*  handler);
   void setErrorHandler(QXmlReader* theWrappedObject, QXmlErrorHandler*  handler);
   void setFeature(QXmlReader* theWrappedObject, const QString&  name, bool  value);
   void setLexicalHandler(QXmlReader* theWrappedObject, QXmlLexicalHandler*  handler);
   void setProperty(QXmlReader* theWrappedObject, const QString&  name, void*  value);
};

#endif // PYTHONQTWRAPPER_QXMLREADER_H
