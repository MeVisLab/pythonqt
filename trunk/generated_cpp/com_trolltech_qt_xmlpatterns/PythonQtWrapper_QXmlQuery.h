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
   void setQuery(QXmlQuery* theWrappedObject, const QUrl&  queryURI, const QUrl&  baseURI = QUrl());
   void setMessageHandler(QXmlQuery* theWrappedObject, QAbstractMessageHandler*  messageHandler);
   void setQuery(QXmlQuery* theWrappedObject, QIODevice*  sourceCode, const QUrl&  documentURI = QUrl());
   void setQuery(QXmlQuery* theWrappedObject, const QString&  sourceCode, const QUrl&  documentURI = QUrl());
   QAbstractMessageHandler*  messageHandler(QXmlQuery* theWrappedObject) const;
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, QIODevice*  arg__2);
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, const QXmlItem&  value);
   QXmlQuery*  operator_assign(QXmlQuery* theWrappedObject, const QXmlQuery&  other);
   const QAbstractUriResolver*  uriResolver(QXmlQuery* theWrappedObject) const;
   bool  evaluateTo(QXmlQuery* theWrappedObject, QAbstractXmlReceiver*  callback) const;
   QXmlNamePool  namePool(QXmlQuery* theWrappedObject) const;
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, QIODevice*  arg__2);
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, const QXmlItem&  value);
   void setFocus(QXmlQuery* theWrappedObject, const QXmlItem&  item);
   void evaluateTo(QXmlQuery* theWrappedObject, QXmlResultItems*  result) const;
   bool  isValid(QXmlQuery* theWrappedObject) const;
   void setUriResolver(QXmlQuery* theWrappedObject, const QAbstractUriResolver*  resolver);
};

#endif // PYTHONQTWRAPPER_QXMLQUERY_H
