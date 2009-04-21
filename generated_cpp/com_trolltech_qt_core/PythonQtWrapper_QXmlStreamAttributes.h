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
   QVector<QXmlStreamAttribute >  static_QXmlStreamAttributes_fromList(const QList<QXmlStreamAttribute >&  list);
   int  indexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const;
   void append(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  attribute);
   int  count(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
   void reserve(QXmlStreamAttributes* theWrappedObject, int  size);
   void remove(QXmlStreamAttributes* theWrappedObject, int  i, int  n);
   int  capacity(QXmlStreamAttributes* theWrappedObject) const;
   const QXmlStreamAttribute&  first(QXmlStreamAttributes* theWrappedObject) const;
   QList<QXmlStreamAttribute >  toList(QXmlStreamAttributes* theWrappedObject) const;
   void setSharable(QXmlStreamAttributes* theWrappedObject, bool  sharable);
   void replace(QXmlStreamAttributes* theWrappedObject, int  i, const QXmlStreamAttribute&  t);
   int  size(QXmlStreamAttributes* theWrappedObject) const;
   bool  operator_equal(QXmlStreamAttributes* theWrappedObject, const QVector<QXmlStreamAttribute >&  v) const;
   void resize(QXmlStreamAttributes* theWrappedObject, int  size);
   void clear(QXmlStreamAttributes* theWrappedObject);
   QStringRef  value(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const;
   const QXmlStreamAttribute&  at(QXmlStreamAttributes* theWrappedObject, int  i) const;
   void append(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
   QVector<QXmlStreamAttribute >&  fill(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  size);
   void append(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName, const QString&  value);
   int  count(QXmlStreamAttributes* theWrappedObject) const;
   QVector<QXmlStreamAttribute >  mid(QXmlStreamAttributes* theWrappedObject, int  pos, int  length) const;
   bool  isEmpty(QXmlStreamAttributes* theWrappedObject) const;
   int  lastIndexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const;
   bool  empty(QXmlStreamAttributes* theWrappedObject) const;
   void remove(QXmlStreamAttributes* theWrappedObject, int  i);
   void squeeze(QXmlStreamAttributes* theWrappedObject);
   bool  contains(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
   QStringRef  value(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const;
   const QXmlStreamAttribute&  last(QXmlStreamAttributes* theWrappedObject) const;
   void prepend(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t);
};

#endif // PYTHONQTWRAPPER_QXMLSTREAMATTRIBUTES_H
