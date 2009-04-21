#ifndef PYTHONQTWRAPPER_QXMLSTREAMATTRIBUTES_H
#define PYTHONQTWRAPPER_QXMLSTREAMATTRIBUTES_H

#include <qxmlstream.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qlist.h>
#include <qvector.h>
#include <qxmlstream.h>

class PythonQtShell_QXmlStreamAttributes : public QXmlStreamAttributes
{
public:
    PythonQtShell_QXmlStreamAttributes():QXmlStreamAttributes(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlStreamAttributes : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamAttributes* new_QXmlStreamAttributes();
QXmlStreamAttributes* new_QXmlStreamAttributes(const QXmlStreamAttributes& other) {
PythonQtShell_QXmlStreamAttributes* a = new PythonQtShell_QXmlStreamAttributes();
*((QXmlStreamAttributes*)a) = other;
return a; }
void delete_QXmlStreamAttributes(QXmlStreamAttributes* obj) { delete obj; } 
   void append(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  attribute);
   const QXmlStreamAttribute&  at(QXmlStreamAttributes* theWrappedObject, int  i) const;
   void remove(QXmlStreamAttributes* theWrappedObject, int  i, int  n);
   int  capacity(QXmlStreamAttributes* theWrappedObject) const;
   QVector<QXmlStreamAttribute >&  fill(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  size);
   void clear(QXmlStreamAttributes* theWrappedObject);
   bool  contains(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
   QStringRef  value(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const;
   int  count(QXmlStreamAttributes* theWrappedObject) const;
   const QXmlStreamAttribute&  last(QXmlStreamAttributes* theWrappedObject) const;
   bool  empty(QXmlStreamAttributes* theWrappedObject) const;
   QVector<QXmlStreamAttribute >  mid(QXmlStreamAttributes* theWrappedObject, int  pos, int  length) const;
   void remove(QXmlStreamAttributes* theWrappedObject, int  i);
   QVector<QXmlStreamAttribute >  static_QXmlStreamAttributes_fromList(const QList<QXmlStreamAttribute >&  list);
   bool  isEmpty(QXmlStreamAttributes* theWrappedObject) const;
   void squeeze(QXmlStreamAttributes* theWrappedObject);
   QList<QXmlStreamAttribute >  toList(QXmlStreamAttributes* theWrappedObject) const;
   void resize(QXmlStreamAttributes* theWrappedObject, int  size);
   bool  operator_equal(QXmlStreamAttributes* theWrappedObject, const QVector<QXmlStreamAttribute >&  v) const;
   void append(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
   int  indexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const;
   int  size(QXmlStreamAttributes* theWrappedObject) const;
   void append(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName, const QString&  value);
   int  count(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
   void reserve(QXmlStreamAttributes* theWrappedObject, int  size);
   void prepend(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t);
   void replace(QXmlStreamAttributes* theWrappedObject, int  i, const QXmlStreamAttribute&  t);
   const QXmlStreamAttribute&  first(QXmlStreamAttributes* theWrappedObject) const;
   void setSharable(QXmlStreamAttributes* theWrappedObject, bool  sharable);
   QStringRef  value(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const;
   int  lastIndexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const;
};

#endif // PYTHONQTWRAPPER_QXMLSTREAMATTRIBUTES_H
