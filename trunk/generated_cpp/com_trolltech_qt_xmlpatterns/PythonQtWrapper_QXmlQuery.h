#ifndef PYTHONQTWRAPPER_QXMLQUERY_H
#define PYTHONQTWRAPPER_QXMLQUERY_H

#include <qxmlquery.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractmessagehandler.h>
#include <qabstracturiresolver.h>
#include <qabstractxmlnodemodel.h>
#include <qabstractxmlreceiver.h>
#include <qiodevice.h>
#include <qurl.h>
#include <qxmlname.h>
#include <qxmlnamepool.h>
#include <qxmlquery.h>
#include <qxmlresultitems.h>

class PythonQtWrapper_QXmlQuery : public QObject
{ Q_OBJECT
public:
public slots:
QXmlQuery* new_QXmlQuery();
QXmlQuery* new_QXmlQuery(const QXmlNamePool&  np);
QXmlQuery* new_QXmlQuery(const QXmlQuery&  other);
void delete_QXmlQuery(QXmlQuery* obj) { delete obj; } 
   void setQuery(QXmlQuery* theWrappedObject, QIODevice*  sourceCode, const QUrl&  documentURI = QUrl());
   void setQuery(QXmlQuery* theWrappedObject, const QString&  sourceCode, const QUrl&  documentURI = QUrl());
   QXmlNamePool  namePool(QXmlQuery* theWrappedObject) const;
   void setQuery(QXmlQuery* theWrappedObject, const QUrl&  queryURI, const QUrl&  baseURI = QUrl());
   bool  evaluateTo(QXmlQuery* theWrappedObject, QAbstractXmlReceiver*  callback) const;
   void evaluateTo(QXmlQuery* theWrappedObject, QXmlResultItems*  result) const;
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, QIODevice*  arg__2);
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, const QXmlItem&  value);
   QAbstractMessageHandler*  messageHandler(QXmlQuery* theWrappedObject) const;
   bool  isValid(QXmlQuery* theWrappedObject) const;
   QXmlQuery&  operator_assign(QXmlQuery* theWrappedObject, const QXmlQuery&  other);
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, const QXmlItem&  value);
   const QAbstractUriResolver*  uriResolver(QXmlQuery* theWrappedObject) const;
   void setFocus(QXmlQuery* theWrappedObject, const QXmlItem&  item);
   void setUriResolver(QXmlQuery* theWrappedObject, const QAbstractUriResolver*  resolver);
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, QIODevice*  arg__2);
   void setMessageHandler(QXmlQuery* theWrappedObject, QAbstractMessageHandler*  messageHandler);
};

#endif // PYTHONQTWRAPPER_QXMLQUERY_H
