#ifndef PYTHONQTWRAPPER_QXMLFORMATTER_H
#define PYTHONQTWRAPPER_QXMLFORMATTER_H

#include <qxmlformatter.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qabstractxmlreceiver.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qxmlname.h>
#include <qxmlquery.h>

class PythonQtShell_QXmlFormatter : public QXmlFormatter
{
public:
    PythonQtShell_QXmlFormatter(const QXmlQuery&  query, QIODevice*  outputDevice):QXmlFormatter(query, outputDevice),_wrapper(NULL) {};

virtual void atomicValue(const QVariant&  value);
virtual void attribute(const QXmlName&  name, const QStringRef&  value);
virtual void characters(const QStringRef&  value);
virtual void comment(const QString&  value);
virtual void endDocument();
virtual void endElement();
virtual void endOfSequence();
virtual void namespaceBinding(const QXmlName&  nb);
virtual void processingInstruction(const QXmlName&  name, const QString&  value);
virtual void startDocument();
virtual void startElement(const QXmlName&  name);
virtual void startOfSequence();
virtual void whitespaceOnly(const QStringRef&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlFormatter : public QXmlFormatter
{ public:
inline void promoted_startOfSequence() { QXmlFormatter::startOfSequence(); }
inline void promoted_characters(const QStringRef&  value) { QXmlFormatter::characters(value); }
inline void promoted_atomicValue(const QVariant&  value) { QXmlFormatter::atomicValue(value); }
inline void promoted_endElement() { QXmlFormatter::endElement(); }
inline void promoted_attribute(const QXmlName&  name, const QStringRef&  value) { QXmlFormatter::attribute(name, value); }
inline void promoted_startDocument() { QXmlFormatter::startDocument(); }
inline void promoted_endDocument() { QXmlFormatter::endDocument(); }
inline void promoted_processingInstruction(const QXmlName&  name, const QString&  value) { QXmlFormatter::processingInstruction(name, value); }
inline void promoted_startElement(const QXmlName&  name) { QXmlFormatter::startElement(name); }
inline void promoted_comment(const QString&  value) { QXmlFormatter::comment(value); }
inline void promoted_endOfSequence() { QXmlFormatter::endOfSequence(); }
};

class PythonQtWrapper_QXmlFormatter : public QObject
{ Q_OBJECT
public:
public slots:
QXmlFormatter* new_QXmlFormatter(const QXmlQuery&  query, QIODevice*  outputDevice);
void delete_QXmlFormatter(QXmlFormatter* obj) { delete obj; } 
   void setIndentationDepth(QXmlFormatter* theWrappedObject, int  depth);
   int  indentationDepth(QXmlFormatter* theWrappedObject) const;
   void startOfSequence(QXmlFormatter* theWrappedObject);
   void characters(QXmlFormatter* theWrappedObject, const QStringRef&  value);
   void atomicValue(QXmlFormatter* theWrappedObject, const QVariant&  value);
   void endElement(QXmlFormatter* theWrappedObject);
   void attribute(QXmlFormatter* theWrappedObject, const QXmlName&  name, const QStringRef&  value);
   void startDocument(QXmlFormatter* theWrappedObject);
   void endDocument(QXmlFormatter* theWrappedObject);
   void processingInstruction(QXmlFormatter* theWrappedObject, const QXmlName&  name, const QString&  value);
   void startElement(QXmlFormatter* theWrappedObject, const QXmlName&  name);
   void comment(QXmlFormatter* theWrappedObject, const QString&  value);
   void endOfSequence(QXmlFormatter* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QXMLFORMATTER_H
