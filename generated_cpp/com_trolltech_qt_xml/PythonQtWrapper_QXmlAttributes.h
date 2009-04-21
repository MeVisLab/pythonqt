#ifndef PYTHONQTWRAPPER_QXMLATTRIBUTES_H
#define PYTHONQTWRAPPER_QXMLATTRIBUTES_H

#include <qxml.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QXmlAttributes : public QXmlAttributes
{
public:
    PythonQtShell_QXmlAttributes():QXmlAttributes(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlAttributes : public QObject
{ Q_OBJECT
public:
public slots:
QXmlAttributes* new_QXmlAttributes();
QXmlAttributes* new_QXmlAttributes(const QXmlAttributes& other) {
PythonQtShell_QXmlAttributes* a = new PythonQtShell_QXmlAttributes();
*((QXmlAttributes*)a) = other;
return a; }
void delete_QXmlAttributes(QXmlAttributes* obj) { delete obj; } 
   void clear(QXmlAttributes* theWrappedObject);
   QString  value(QXmlAttributes* theWrappedObject, const QString&  qName) const;
   QString  value(QXmlAttributes* theWrappedObject, int  index) const;
   void append(QXmlAttributes* theWrappedObject, const QString&  qName, const QString&  uri, const QString&  localPart, const QString&  value);
   int  length(QXmlAttributes* theWrappedObject) const;
   QString  type(QXmlAttributes* theWrappedObject, const QString&  uri, const QString&  localName) const;
   QString  type(QXmlAttributes* theWrappedObject, const QString&  qName) const;
   int  index(QXmlAttributes* theWrappedObject, const QString&  uri, const QString&  localPart) const;
   QString  type(QXmlAttributes* theWrappedObject, int  index) const;
   QString  uri(QXmlAttributes* theWrappedObject, int  index) const;
   int  count(QXmlAttributes* theWrappedObject) const;
   QString  qName(QXmlAttributes* theWrappedObject, int  index) const;
   QString  value(QXmlAttributes* theWrappedObject, const QString&  uri, const QString&  localName) const;
   int  index(QXmlAttributes* theWrappedObject, const QString&  qName) const;
   QString  localName(QXmlAttributes* theWrappedObject, int  index) const;
};

#endif // PYTHONQTWRAPPER_QXMLATTRIBUTES_H
