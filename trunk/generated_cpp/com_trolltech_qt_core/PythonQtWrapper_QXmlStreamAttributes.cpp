#include "PythonQtWrapper_QXmlStreamAttributes.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qlist.h>
#include <qvector.h>
#include <qxmlstream.h>

QXmlStreamAttributes* PythonQtWrapper_QXmlStreamAttributes::new_QXmlStreamAttributes()
{ 
return new PythonQtShell_QXmlStreamAttributes(); }

void PythonQtWrapper_QXmlStreamAttributes::append(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  attribute)
{
 theWrappedObject->append(attribute);
}

const QXmlStreamAttribute&  PythonQtWrapper_QXmlStreamAttributes::at(QXmlStreamAttributes* theWrappedObject, int  i) const
{
return  theWrappedObject->at(i);
}

void PythonQtWrapper_QXmlStreamAttributes::remove(QXmlStreamAttributes* theWrappedObject, int  i, int  n)
{
 theWrappedObject->remove(i, n);
}

int  PythonQtWrapper_QXmlStreamAttributes::capacity(QXmlStreamAttributes* theWrappedObject) const
{
return  theWrappedObject->capacity();
}

QVector<QXmlStreamAttribute >&  PythonQtWrapper_QXmlStreamAttributes::fill(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  size)
{
return  theWrappedObject->fill(t, size);
}

void PythonQtWrapper_QXmlStreamAttributes::clear(QXmlStreamAttributes* theWrappedObject)
{
 theWrappedObject->clear();
}

bool  PythonQtWrapper_QXmlStreamAttributes::contains(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const
{
return  theWrappedObject->contains(t);
}

QStringRef  PythonQtWrapper_QXmlStreamAttributes::value(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const
{
return  theWrappedObject->value(qualifiedName);
}

int  PythonQtWrapper_QXmlStreamAttributes::count(QXmlStreamAttributes* theWrappedObject) const
{
return  theWrappedObject->count();
}

const QXmlStreamAttribute&  PythonQtWrapper_QXmlStreamAttributes::last(QXmlStreamAttributes* theWrappedObject) const
{
return  theWrappedObject->last();
}

bool  PythonQtWrapper_QXmlStreamAttributes::empty(QXmlStreamAttributes* theWrappedObject) const
{
return  theWrappedObject->empty();
}

QVector<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::mid(QXmlStreamAttributes* theWrappedObject, int  pos, int  length) const
{
return  theWrappedObject->mid(pos, length);
}

void PythonQtWrapper_QXmlStreamAttributes::remove(QXmlStreamAttributes* theWrappedObject, int  i)
{
 theWrappedObject->remove(i);
}

QVector<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::static_QXmlStreamAttributes_fromList(const QList<QXmlStreamAttribute >&  list)
{
return QXmlStreamAttributes::fromList(list);
}

bool  PythonQtWrapper_QXmlStreamAttributes::isEmpty(QXmlStreamAttributes* theWrappedObject) const
{
return  theWrappedObject->isEmpty();
}

void PythonQtWrapper_QXmlStreamAttributes::squeeze(QXmlStreamAttributes* theWrappedObject)
{
 theWrappedObject->squeeze();
}

QList<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::toList(QXmlStreamAttributes* theWrappedObject) const
{
return  theWrappedObject->toList();
}

void PythonQtWrapper_QXmlStreamAttributes::resize(QXmlStreamAttributes* theWrappedObject, int  size)
{
 theWrappedObject->resize(size);
}

bool  PythonQtWrapper_QXmlStreamAttributes::operator_equal(QXmlStreamAttributes* theWrappedObject, const QVector<QXmlStreamAttribute >&  v) const
{
return  (*theWrappedObject)== v;
}

void PythonQtWrapper_QXmlStreamAttributes::append(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value)
{
 theWrappedObject->append(namespaceUri, name, value);
}

int  PythonQtWrapper_QXmlStreamAttributes::indexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const
{
return  theWrappedObject->indexOf(t, from);
}

int  PythonQtWrapper_QXmlStreamAttributes::size(QXmlStreamAttributes* theWrappedObject) const
{
return  theWrappedObject->size();
}

void PythonQtWrapper_QXmlStreamAttributes::append(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName, const QString&  value)
{
 theWrappedObject->append(qualifiedName, value);
}

int  PythonQtWrapper_QXmlStreamAttributes::count(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const
{
return  theWrappedObject->count(t);
}

void PythonQtWrapper_QXmlStreamAttributes::reserve(QXmlStreamAttributes* theWrappedObject, int  size)
{
 theWrappedObject->reserve(size);
}

void PythonQtWrapper_QXmlStreamAttributes::prepend(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t)
{
 theWrappedObject->prepend(t);
}

void PythonQtWrapper_QXmlStreamAttributes::replace(QXmlStreamAttributes* theWrappedObject, int  i, const QXmlStreamAttribute&  t)
{
 theWrappedObject->replace(i, t);
}

const QXmlStreamAttribute&  PythonQtWrapper_QXmlStreamAttributes::first(QXmlStreamAttributes* theWrappedObject) const
{
return  theWrappedObject->first();
}

void PythonQtWrapper_QXmlStreamAttributes::setSharable(QXmlStreamAttributes* theWrappedObject, bool  sharable)
{
 theWrappedObject->setSharable(sharable);
}

QStringRef  PythonQtWrapper_QXmlStreamAttributes::value(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const
{
return  theWrappedObject->value(namespaceUri, name);
}

int  PythonQtWrapper_QXmlStreamAttributes::lastIndexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const
{
return  theWrappedObject->lastIndexOf(t, from);
}

