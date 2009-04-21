#ifndef PYTHONQTWRAPPER_QXMLCONTENTHANDLER_H
#define PYTHONQTWRAPPER_QXMLCONTENTHANDLER_H

#include <qxml.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qxml.h>

class PythonQtShell_QXmlContentHandler : public QXmlContentHandler
{
public:
    PythonQtShell_QXmlContentHandler():QXmlContentHandler(),_wrapper(NULL) {};

virtual bool  characters(const QString&  ch);
virtual bool  endDocument();
virtual bool  endElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName);
virtual bool  endPrefixMapping(const QString&  prefix);
virtual QString  errorString() const;
virtual bool  ignorableWhitespace(const QString&  ch);
virtual bool  processingInstruction(const QString&  target, const QString&  data);
virtual void setDocumentLocator(QXmlLocator*  locator);
virtual bool  skippedEntity(const QString&  name);
virtual bool  startDocument();
virtual bool  startElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts);
virtual bool  startPrefixMapping(const QString&  prefix, const QString&  uri);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlContentHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlContentHandler* new_QXmlContentHandler();
void delete_QXmlContentHandler(QXmlContentHandler* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QXMLCONTENTHANDLER_H
