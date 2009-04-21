#ifndef PYTHONQTWRAPPER_QXMLSIMPLEREADER_H
#define PYTHONQTWRAPPER_QXMLSIMPLEREADER_H

#include <qxml.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qxml.h>

class PythonQtShell_QXmlSimpleReader : public QXmlSimpleReader
{
public:
    PythonQtShell_QXmlSimpleReader():QXmlSimpleReader(),_wrapper(NULL) {};

virtual QXmlDTDHandler*  DTDHandler() const;
virtual QXmlContentHandler*  contentHandler() const;
virtual QXmlDeclHandler*  declHandler() const;
virtual QXmlEntityResolver*  entityResolver() const;
virtual QXmlErrorHandler*  errorHandler() const;
virtual bool  feature(const QString&  name, bool*  ok = 0) const;
virtual bool  hasFeature(const QString&  name) const;
virtual bool  hasProperty(const QString&  name) const;
virtual QXmlLexicalHandler*  lexicalHandler() const;
virtual bool  parse(const QXmlInputSource&  input);
virtual bool  parse(const QXmlInputSource*  input);
virtual bool  parse(const QXmlInputSource*  input, bool  incremental);
virtual bool  parseContinue();
virtual void*  property(const QString&  name, bool*  ok = 0) const;
virtual void setContentHandler(QXmlContentHandler*  handler);
virtual void setDTDHandler(QXmlDTDHandler*  handler);
virtual void setDeclHandler(QXmlDeclHandler*  handler);
virtual void setEntityResolver(QXmlEntityResolver*  handler);
virtual void setErrorHandler(QXmlErrorHandler*  handler);
virtual void setFeature(const QString&  name, bool  value);
virtual void setLexicalHandler(QXmlLexicalHandler*  handler);
virtual void setProperty(const QString&  name, void*  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlSimpleReader : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSimpleReader* new_QXmlSimpleReader();
void delete_QXmlSimpleReader(QXmlSimpleReader* obj) { delete obj; } 
   bool  hasFeature(QXmlSimpleReader* theWrappedObject, const QString&  name) const;
   void setEntityResolver(QXmlSimpleReader* theWrappedObject, QXmlEntityResolver*  handler);
   QXmlLexicalHandler*  lexicalHandler(QXmlSimpleReader* theWrappedObject) const;
   bool  parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource&  input);
   bool  hasProperty(QXmlSimpleReader* theWrappedObject, const QString&  name) const;
   bool  parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource*  input);
   void setDTDHandler(QXmlSimpleReader* theWrappedObject, QXmlDTDHandler*  handler);
   void setLexicalHandler(QXmlSimpleReader* theWrappedObject, QXmlLexicalHandler*  handler);
   void setContentHandler(QXmlSimpleReader* theWrappedObject, QXmlContentHandler*  handler);
   QXmlDeclHandler*  declHandler(QXmlSimpleReader* theWrappedObject) const;
   bool  feature(QXmlSimpleReader* theWrappedObject, const QString&  name, bool*  ok = 0) const;
   QXmlDTDHandler*  DTDHandler(QXmlSimpleReader* theWrappedObject) const;
   bool  parseContinue(QXmlSimpleReader* theWrappedObject);
   void*  property(QXmlSimpleReader* theWrappedObject, const QString&  name, bool*  ok = 0) const;
   void setFeature(QXmlSimpleReader* theWrappedObject, const QString&  name, bool  value);
   void setProperty(QXmlSimpleReader* theWrappedObject, const QString&  name, void*  value);
   QXmlEntityResolver*  entityResolver(QXmlSimpleReader* theWrappedObject) const;
   void setDeclHandler(QXmlSimpleReader* theWrappedObject, QXmlDeclHandler*  handler);
   QXmlContentHandler*  contentHandler(QXmlSimpleReader* theWrappedObject) const;
   QXmlErrorHandler*  errorHandler(QXmlSimpleReader* theWrappedObject) const;
   void setErrorHandler(QXmlSimpleReader* theWrappedObject, QXmlErrorHandler*  handler);
   bool  parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource*  input, bool  incremental);
};

#endif // PYTHONQTWRAPPER_QXMLSIMPLEREADER_H
