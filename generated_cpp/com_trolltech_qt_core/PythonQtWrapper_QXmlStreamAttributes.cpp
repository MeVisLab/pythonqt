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

QVector<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::static_QXmlStreamAttributes_fromList(const QList<QXmlStreamAttribute >&  list)
{
return QXmlStreamAttributes::fromList(list);
}

int  PythonQtWrapper_QXmlStreamAttributes::indexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const
{
return  (*theWrappedObject).indexOf(t, from);
}

void PythonQtWrapper_QXmlStreamAttributes::append(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  attribute)
{
 (*theWrappedObject).append(attribute);
}

int  PythonQtWrapper_QXmlStreamAttributes::count(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const
{
return  (*theWrappedObject).count(t);
}

void PythonQtWrapper_QXmlStreamAttributes::reserve(QXmlStreamAttributes* theWrappedObject, int  size)
{
 (*theWrappedObject).reserve(size);
}

void PythonQtWrapper_QXmlStreamAttributes::remove(QXmlStreamAttributes* theWrappedObject, int  i, int  n)
{
 (*theWrappedObject).remove(i, n);
}

int  PythonQtWrapper_QXmlStreamAttributes::capacity(QXmlStreamAttributes* theWrappedObject) const
{
return  (*theWrappedObject).capacity();
}

const QXmlStreamAttribute&  PythonQtWrapper_QXmlStreamAttributes::first(QXmlStreamAttributes* theWrappedObject) const
{
return  (*theWrappedObject).first();
}

QList<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::toList(QXmlStreamAttributes* theWrappedObject) const
{
return  (*theWrappedObject).toList();
}

void PythonQtWrapper_QXmlStreamAttributes::setSharable(QXmlStreamAttributes* theWrappedObject, bool  sharable)
{
 (*theWrappedObject).setSharable(sharable);
}

void PythonQtWrapper_QXmlStreamAttributes::replace(QXmlStreamAttributes* theWrappedObject, int  i, const QXmlStreamAttribute&  t)
{
 (*theWrappedObject).replace(i, t);
}

int  PythonQtWrapper_QXmlStreamAttributes::size(QXmlStreamAttributes* theWrappedObject) const
{
return  (*theWrappedObject).size();
}

bool  PythonQtWrapper_QXmlStreamAttributes::operator_equal(QXmlStreamAttributes* theWrappedObject, const QVector<QXmlStreamAttribute >&  v) const
{
return  (*theWrappedObject)== v;
}

void PythonQtWrapper_QXmlStreamAttributes::resize(QXmlStreamAttributes* theWrappedObject, int  size)
{
 (*theWrappedObject).resize(size);
}

void PythonQtWrapper_QXmlStreamAttributes::clear(QXmlStreamAttributes* theWrappedObject)
{
 (*theWrappedObject).clear();
}

QStringRef  PythonQtWrapper_QXmlStreamAttributes::value(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const
{
return  (*theWrappedObject).value(qualifiedName);
}

const QXmlStreamAttribute&  PythonQtWrapper_QXmlStreamAttributes::at(QXmlStreamAttributes* theWrappedObject, int  i) const
{
return  (*theWrappedObject).at(i);
}

void PythonQtWrapper_QXmlStreamAttributes::append(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value)
{
 (*theWrappedObject).append(namespaceUri, name, value);
}

QVector<QXmlStreamAttribute >&  PythonQtWrapper_QXmlStreamAttributes::fill(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  size)
{
return  (*theWrappedObject).fill(t, size);
}

void PythonQtWrapper_QXmlStreamAttributes::append(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName, const QString&  value)
{
 (*theWrappedObject).append(qualifiedName, value);
}

int  PythonQtWrapper_QXmlStreamAttributes::count(QXmlStreamAttributes* theWrappedObject) const
{
return  (*theWrappedObject).count();
}

QVector<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::mid(QXmlStreamAttributes* theWrappedObject, int  pos, int  length) const
{
return  (*theWrappedObject).mid(pos, length);
}

bool  PythonQtWrapper_QXmlStreamAttributes::isEmpty(QXmlStreamAttributes* theWrappedObject) const
{
return  (*theWrappedObject).isEmpty();
}

int  PythonQtWrapper_QXmlStreamAttributes::lastIndexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const
{
return  (*theWrappedObject).lastIndexOf(t, from);
}

bool  PythonQtWrapper_QXmlStreamAttributes::empty(QXmlStreamAttributes* theWrappedObject) const
{
return  (*theWrappedObject).empty();
}

void PythonQtWrapper_QXmlStreamAttributes::remove(QXmlStreamAttributes* theWrappedObject, int  i)
{
 (*theWrappedObject).remove(i);
}

void PythonQtWrapper_QXmlStreamAttributes::squeeze(QXmlStreamAttributes* theWrappedObject)
{
 (*theWrappedObject).squeeze();
}

bool  PythonQtWrapper_QXmlStreamAttributes::contains(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const
{
return  (*theWrappedObject).contains(t);
}

QStringRef  PythonQtWrapper_QXmlStreamAttributes::value(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const
{
return  (*theWrappedObject).value(namespaceUri, name);
}

const QXmlStreamAttribute&  PythonQtWrapper_QXmlStreamAttributes::last(QXmlStreamAttributes* theWrappedObject) const
{
return  (*theWrappedObject).last();
}

void PythonQtWrapper_QXmlStreamAttributes::prepend(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t)
{
 (*theWrappedObject).prepend(t);
}

