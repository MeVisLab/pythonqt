#ifndef PYTHONQTWRAPPER_QDOMNAMEDNODEMAP_H
#define PYTHONQTWRAPPER_QDOMNAMEDNODEMAP_H

#include <qdom.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdom.h>

class PythonQtWrapper_QDomNamedNodeMap : public QObject
{ Q_OBJECT
public:
public slots:
QDomNamedNodeMap* new_QDomNamedNodeMap();
QDomNamedNodeMap* new_QDomNamedNodeMap(const QDomNamedNodeMap&  arg__1);
void delete_QDomNamedNodeMap(QDomNamedNodeMap* obj) { delete obj; } 
   QDomNode  setNamedItemNS(QDomNamedNodeMap* theWrappedObject, const QDomNode&  newNode);
   QDomNode  namedItem(QDomNamedNodeMap* theWrappedObject, const QString&  name) const;
   bool  operator_equal(QDomNamedNodeMap* theWrappedObject, const QDomNamedNodeMap&  arg__1) const;
   int  size(QDomNamedNodeMap* theWrappedObject) const;
   int  count(QDomNamedNodeMap* theWrappedObject) const;
   bool  isEmpty(QDomNamedNodeMap* theWrappedObject) const;
   QDomNode  removeNamedItem(QDomNamedNodeMap* theWrappedObject, const QString&  name);
   QDomNode  item(QDomNamedNodeMap* theWrappedObject, int  index) const;
   bool  contains(QDomNamedNodeMap* theWrappedObject, const QString&  name) const;
   QDomNode  namedItemNS(QDomNamedNodeMap* theWrappedObject, const QString&  nsURI, const QString&  localName) const;
   QDomNode  setNamedItem(QDomNamedNodeMap* theWrappedObject, const QDomNode&  newNode);
   uint  length(QDomNamedNodeMap* theWrappedObject) const;
   QDomNode  removeNamedItemNS(QDomNamedNodeMap* theWrappedObject, const QString&  nsURI, const QString&  localName);
};

#endif // PYTHONQTWRAPPER_QDOMNAMEDNODEMAP_H
