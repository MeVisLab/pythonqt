#ifndef PYTHONQTWRAPPER_QXMLATTRIBUTES_H
#define PYTHONQTWRAPPER_QXMLATTRIBUTES_H

#include <qxml.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QXmlAttributes : public QObject
{ Q_OBJECT
public:
public slots:
QXmlAttributes* new_QXmlAttributes();
void delete_QXmlAttributes(QXmlAttributes* obj) { delete obj; } 
   void append(QXmlAttributes* theWrappedObject, const QString&  qName, const QString&  uri, const QString&  localPart, const QString&  value);
   void clear(QXmlAttributes* theWrappedObject);
   int  count(QXmlAttributes* theWrappedObject) const;
   int  index(QXmlAttributes* theWrappedObject, const QString&  qName) const;
   int  index(QXmlAttributes* theWrappedObject, const QString&  uri, const QString&  localPart) const;
   int  length(QXmlAttributes* theWrappedObject) const;
   QString  localName(QXmlAttributes* theWrappedObject, int  index) const;
   QString  qName(QXmlAttributes* theWrappedObject, int  index) const;
   QString  type(QXmlAttributes* theWrappedObject, const QString&  qName) const;
   QString  type(QXmlAttributes* theWrappedObject, const QString&  uri, const QString&  localName) const;
   QString  type(QXmlAttributes* theWrappedObject, int  index) const;
   QString  uri(QXmlAttributes* theWrappedObject, int  index) const;
   QString  value(QXmlAttributes* theWrappedObject, const QString&  qName) const;
   QString  value(QXmlAttributes* theWrappedObject, const QString&  uri, const QString&  localName) const;
   QString  value(QXmlAttributes* theWrappedObject, int  index) const;
};

#endif // PYTHONQTWRAPPER_QXMLATTRIBUTES_H
