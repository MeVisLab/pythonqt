#ifndef PYTHONQTWRAPPER_QXMLQUERY_H
#define PYTHONQTWRAPPER_QXMLQUERY_H

#include <qxmlquery.h>
#include <QObject>

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
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, QIODevice*  arg__2);
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, const QXmlItem&  value);
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, QIODevice*  arg__2);
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, const QXmlItem&  value);
   bool  evaluateTo(QXmlQuery* theWrappedObject, QAbstractXmlReceiver*  callback) const;
   void evaluateTo(QXmlQuery* theWrappedObject, QXmlResultItems*  result) const;
   bool  isValid(QXmlQuery* theWrappedObject) const;
   QAbstractMessageHandler*  messageHandler(QXmlQuery* theWrappedObject) const;
   QXmlNamePool  namePool(QXmlQuery* theWrappedObject) const;
   QXmlQuery&  operator_assign(QXmlQuery* theWrappedObject, const QXmlQuery&  other);
   void setFocus(QXmlQuery* theWrappedObject, const QXmlItem&  item);
   void setMessageHandler(QXmlQuery* theWrappedObject, QAbstractMessageHandler*  messageHandler);
   void setQuery(QXmlQuery* theWrappedObject, QIODevice*  sourceCode, const QUrl&  documentURI = QUrl());
   void setQuery(QXmlQuery* theWrappedObject, const QString&  sourceCode, const QUrl&  documentURI = QUrl());
   void setQuery(QXmlQuery* theWrappedObject, const QUrl&  queryURI, const QUrl&  baseURI = QUrl());
   void setUriResolver(QXmlQuery* theWrappedObject, const QAbstractUriResolver*  resolver);
   const QAbstractUriResolver*  uriResolver(QXmlQuery* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QXMLQUERY_H
