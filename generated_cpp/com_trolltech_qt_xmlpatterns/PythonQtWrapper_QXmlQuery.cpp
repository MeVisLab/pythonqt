#include "PythonQtWrapper_QXmlQuery.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
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

QXmlQuery* PythonQtWrapper_QXmlQuery::new_QXmlQuery()
{ 
return new QXmlQuery(); }

QXmlQuery* PythonQtWrapper_QXmlQuery::new_QXmlQuery(const QXmlNamePool&  np)
{ 
return new QXmlQuery(np); }

QXmlQuery* PythonQtWrapper_QXmlQuery::new_QXmlQuery(const QXmlQuery&  other)
{ 
return new QXmlQuery(other); }

void PythonQtWrapper_QXmlQuery::setQuery(QXmlQuery* theWrappedObject, const QUrl&  queryURI, const QUrl&  baseURI)
{
  ( theWrappedObject->setQuery(queryURI, baseURI));
}

void PythonQtWrapper_QXmlQuery::setMessageHandler(QXmlQuery* theWrappedObject, QAbstractMessageHandler*  messageHandler)
{
  ( theWrappedObject->setMessageHandler(messageHandler));
}

void PythonQtWrapper_QXmlQuery::setQuery(QXmlQuery* theWrappedObject, QIODevice*  sourceCode, const QUrl&  documentURI)
{
  ( theWrappedObject->setQuery(sourceCode, documentURI));
}

void PythonQtWrapper_QXmlQuery::setQuery(QXmlQuery* theWrappedObject, const QString&  sourceCode, const QUrl&  documentURI)
{
  ( theWrappedObject->setQuery(sourceCode, documentURI));
}

QAbstractMessageHandler*  PythonQtWrapper_QXmlQuery::messageHandler(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->messageHandler());
}

void PythonQtWrapper_QXmlQuery::bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, QIODevice*  arg__2)
{
  ( theWrappedObject->bindVariable(name, arg__2));
}

void PythonQtWrapper_QXmlQuery::bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, const QXmlItem&  value)
{
  ( theWrappedObject->bindVariable(name, value));
}

QXmlQuery*  PythonQtWrapper_QXmlQuery::operator_assign(QXmlQuery* theWrappedObject, const QXmlQuery&  other)
{
  return &( (*theWrappedObject)= other);
}

const QAbstractUriResolver*  PythonQtWrapper_QXmlQuery::uriResolver(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->uriResolver());
}

bool  PythonQtWrapper_QXmlQuery::evaluateTo(QXmlQuery* theWrappedObject, QAbstractXmlReceiver*  callback) const
{
  return ( theWrappedObject->evaluateTo(callback));
}

QXmlNamePool  PythonQtWrapper_QXmlQuery::namePool(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->namePool());
}

void PythonQtWrapper_QXmlQuery::bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, QIODevice*  arg__2)
{
  ( theWrappedObject->bindVariable(localName, arg__2));
}

void PythonQtWrapper_QXmlQuery::bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, const QXmlItem&  value)
{
  ( theWrappedObject->bindVariable(localName, value));
}

void PythonQtWrapper_QXmlQuery::setFocus(QXmlQuery* theWrappedObject, const QXmlItem&  item)
{
  ( theWrappedObject->setFocus(item));
}

void PythonQtWrapper_QXmlQuery::evaluateTo(QXmlQuery* theWrappedObject, QXmlResultItems*  result) const
{
  ( theWrappedObject->evaluateTo(result));
}

bool  PythonQtWrapper_QXmlQuery::isValid(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QXmlQuery::setUriResolver(QXmlQuery* theWrappedObject, const QAbstractUriResolver*  resolver)
{
  ( theWrappedObject->setUriResolver(resolver));
}

