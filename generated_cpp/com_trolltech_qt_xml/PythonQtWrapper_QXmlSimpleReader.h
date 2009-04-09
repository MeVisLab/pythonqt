#ifndef PYTHONQTWRAPPER_QXMLSIMPLEREADER_H
#define PYTHONQTWRAPPER_QXMLSIMPLEREADER_H

#include <qxml.h>
#include <QObject>

#include <QVariant>
#include <qxml.h>

class PythonQtWrapper_QXmlSimpleReader : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSimpleReader* new_QXmlSimpleReader();
void delete_QXmlSimpleReader(QXmlSimpleReader* obj) { delete obj; } 
   QXmlDTDHandler*  DTDHandler(QXmlSimpleReader* theWrappedObject) const;
   QXmlContentHandler*  contentHandler(QXmlSimpleReader* theWrappedObject) const;
   QXmlDeclHandler*  declHandler(QXmlSimpleReader* theWrappedObject) const;
   QXmlEntityResolver*  entityResolver(QXmlSimpleReader* theWrappedObject) const;
   QXmlErrorHandler*  errorHandler(QXmlSimpleReader* theWrappedObject) const;
   bool  feature(QXmlSimpleReader* theWrappedObject, const QString&  name, bool*  ok = 0) const;
   bool  hasFeature(QXmlSimpleReader* theWrappedObject, const QString&  name) const;
   bool  hasProperty(QXmlSimpleReader* theWrappedObject, const QString&  name) const;
   QXmlLexicalHandler*  lexicalHandler(QXmlSimpleReader* theWrappedObject) const;
   bool  parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource&  input);
   bool  parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource*  input);
   bool  parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource*  input, bool  incremental);
   bool  parseContinue(QXmlSimpleReader* theWrappedObject);
   void*  property(QXmlSimpleReader* theWrappedObject, const QString&  name, bool*  ok = 0) const;
   void setContentHandler(QXmlSimpleReader* theWrappedObject, QXmlContentHandler*  handler);
   void setDTDHandler(QXmlSimpleReader* theWrappedObject, QXmlDTDHandler*  handler);
   void setDeclHandler(QXmlSimpleReader* theWrappedObject, QXmlDeclHandler*  handler);
   void setEntityResolver(QXmlSimpleReader* theWrappedObject, QXmlEntityResolver*  handler);
   void setErrorHandler(QXmlSimpleReader* theWrappedObject, QXmlErrorHandler*  handler);
   void setFeature(QXmlSimpleReader* theWrappedObject, const QString&  name, bool  value);
   void setLexicalHandler(QXmlSimpleReader* theWrappedObject, QXmlLexicalHandler*  handler);
   void setProperty(QXmlSimpleReader* theWrappedObject, const QString&  name, void*  value);
};

#endif // PYTHONQTWRAPPER_QXMLSIMPLEREADER_H
