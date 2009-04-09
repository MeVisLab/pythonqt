#include "PythonQtWrapper_QUrlInfo.h"

#include <QVariant>
#include <qdatetime.h>
#include <qurl.h>
#include <qurlinfo.h>

QUrlInfo* PythonQtWrapper_QUrlInfo::new_QUrlInfo()
{ 
return new QUrlInfo(); }

QUrlInfo* PythonQtWrapper_QUrlInfo::new_QUrlInfo(const QString&  name, int  permissions, const QString&  owner, const QString&  group, qint64  size, const QDateTime&  lastModified, const QDateTime&  lastRead, bool  isDir, bool  isFile, bool  isSymLink, bool  isWritable, bool  isReadable, bool  isExecutable)
{ 
return new QUrlInfo(name, permissions, owner, group, size, lastModified, lastRead, isDir, isFile, isSymLink, isWritable, isReadable, isExecutable); }

QUrlInfo* PythonQtWrapper_QUrlInfo::new_QUrlInfo(const QUrl&  url, int  permissions, const QString&  owner, const QString&  group, qint64  size, const QDateTime&  lastModified, const QDateTime&  lastRead, bool  isDir, bool  isFile, bool  isSymLink, bool  isWritable, bool  isReadable, bool  isExecutable)
{ 
return new QUrlInfo(url, permissions, owner, group, size, lastModified, lastRead, isDir, isFile, isSymLink, isWritable, isReadable, isExecutable); }

QUrlInfo* PythonQtWrapper_QUrlInfo::new_QUrlInfo(const QUrlInfo&  ui)
{ 
return new QUrlInfo(ui); }

bool  PythonQtWrapper_QUrlInfo::static_QUrlInfo_equal(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy)
{
return QUrlInfo::equal(i1, i2, sortBy);
}

bool  PythonQtWrapper_QUrlInfo::static_QUrlInfo_greaterThan(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy)
{
return QUrlInfo::greaterThan(i1, i2, sortBy);
}

QString  PythonQtWrapper_QUrlInfo::group(QUrlInfo* theWrappedObject) const
{
return theWrappedObject->group();
}

bool  PythonQtWrapper_QUrlInfo::isDir(QUrlInfo* theWrappedObject) const
{
return theWrappedObject->isDir();
}

bool  PythonQtWrapper_QUrlInfo::isExecutable(QUrlInfo* theWrappedObject) const
{
return theWrappedObject->isExecutable();
}

bool  PythonQtWrapper_QUrlInfo::isFile(QUrlInfo* theWrappedObject) const
{
return theWrappedObject->isFile();
}

bool  PythonQtWrapper_QUrlInfo::isReadable(QUrlInfo* theWrappedObject) const
{
return theWrappedObject->isReadable();
}

bool  PythonQtWrapper_QUrlInfo::isSymLink(QUrlInfo* theWrappedObject) const
{
return theWrappedObject->isSymLink();
}

bool  PythonQtWrapper_QUrlInfo::isValid(QUrlInfo* theWrappedObject) const
{
return theWrappedObject->isValid();
}

bool  PythonQtWrapper_QUrlInfo::isWritable(QUrlInfo* theWrappedObject) const
{
return theWrappedObject->isWritable();
}

QDateTime  PythonQtWrapper_QUrlInfo::lastModified(QUrlInfo* theWrappedObject) const
{
return theWrappedObject->lastModified();
}

QDateTime  PythonQtWrapper_QUrlInfo::lastRead(QUrlInfo* theWrappedObject) const
{
return theWrappedObject->lastRead();
}

bool  PythonQtWrapper_QUrlInfo::static_QUrlInfo_lessThan(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy)
{
return QUrlInfo::lessThan(i1, i2, sortBy);
}

QString  PythonQtWrapper_QUrlInfo::name(QUrlInfo* theWrappedObject) const
{
return theWrappedObject->name();
}

bool  PythonQtWrapper_QUrlInfo::operator_equal(QUrlInfo* theWrappedObject, const QUrlInfo&  i) const
{
return *theWrappedObject == i;
}

QString  PythonQtWrapper_QUrlInfo::owner(QUrlInfo* theWrappedObject) const
{
return theWrappedObject->owner();
}

int  PythonQtWrapper_QUrlInfo::permissions(QUrlInfo* theWrappedObject) const
{
return theWrappedObject->permissions();
}

void PythonQtWrapper_QUrlInfo::setDir(QUrlInfo* theWrappedObject, bool  b)
{
theWrappedObject->setDir(b);
}

void PythonQtWrapper_QUrlInfo::setFile(QUrlInfo* theWrappedObject, bool  b)
{
theWrappedObject->setFile(b);
}

void PythonQtWrapper_QUrlInfo::setGroup(QUrlInfo* theWrappedObject, const QString&  s)
{
theWrappedObject->setGroup(s);
}

void PythonQtWrapper_QUrlInfo::setLastModified(QUrlInfo* theWrappedObject, const QDateTime&  dt)
{
theWrappedObject->setLastModified(dt);
}

void PythonQtWrapper_QUrlInfo::setLastRead(QUrlInfo* theWrappedObject, const QDateTime&  dt)
{
theWrappedObject->setLastRead(dt);
}

void PythonQtWrapper_QUrlInfo::setName(QUrlInfo* theWrappedObject, const QString&  name)
{
theWrappedObject->setName(name);
}

void PythonQtWrapper_QUrlInfo::setOwner(QUrlInfo* theWrappedObject, const QString&  s)
{
theWrappedObject->setOwner(s);
}

void PythonQtWrapper_QUrlInfo::setPermissions(QUrlInfo* theWrappedObject, int  p)
{
theWrappedObject->setPermissions(p);
}

void PythonQtWrapper_QUrlInfo::setReadable(QUrlInfo* theWrappedObject, bool  b)
{
theWrappedObject->setReadable(b);
}

void PythonQtWrapper_QUrlInfo::setSize(QUrlInfo* theWrappedObject, qint64  size)
{
theWrappedObject->setSize(size);
}

void PythonQtWrapper_QUrlInfo::setSymLink(QUrlInfo* theWrappedObject, bool  b)
{
theWrappedObject->setSymLink(b);
}

void PythonQtWrapper_QUrlInfo::setWritable(QUrlInfo* theWrappedObject, bool  b)
{
theWrappedObject->setWritable(b);
}

qint64  PythonQtWrapper_QUrlInfo::size(QUrlInfo* theWrappedObject) const
{
return theWrappedObject->size();
}

