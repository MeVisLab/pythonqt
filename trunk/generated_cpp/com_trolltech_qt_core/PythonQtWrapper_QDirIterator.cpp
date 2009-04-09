#include "PythonQtWrapper_QDirIterator.h"

#include <QVariant>
#include <qdir.h>
#include <qdiriterator.h>
#include <qfileinfo.h>
#include <qstringlist.h>

QDirIterator* PythonQtWrapper_QDirIterator::new_QDirIterator(const QDir&  dir, QDirIterator::IteratorFlags  flags)
{ 
return new QDirIterator(dir, flags); }

QDirIterator* PythonQtWrapper_QDirIterator::new_QDirIterator(const QString&  path, QDir::Filters  filter, QDirIterator::IteratorFlags  flags)
{ 
return new QDirIterator(path, filter, flags); }

QDirIterator* PythonQtWrapper_QDirIterator::new_QDirIterator(const QString&  path, QDirIterator::IteratorFlags  flags)
{ 
return new QDirIterator(path, flags); }

QDirIterator* PythonQtWrapper_QDirIterator::new_QDirIterator(const QString&  path, const QStringList&  nameFilters, QDir::Filters  filters, QDirIterator::IteratorFlags  flags)
{ 
return new QDirIterator(path, nameFilters, filters, flags); }

QFileInfo  PythonQtWrapper_QDirIterator::fileInfo(QDirIterator* theWrappedObject) const
{
return theWrappedObject->fileInfo();
}

QString  PythonQtWrapper_QDirIterator::fileName(QDirIterator* theWrappedObject) const
{
return theWrappedObject->fileName();
}

QString  PythonQtWrapper_QDirIterator::filePath(QDirIterator* theWrappedObject) const
{
return theWrappedObject->filePath();
}

bool  PythonQtWrapper_QDirIterator::hasNext(QDirIterator* theWrappedObject) const
{
return theWrappedObject->hasNext();
}

QString  PythonQtWrapper_QDirIterator::next(QDirIterator* theWrappedObject)
{
return theWrappedObject->next();
}

QString  PythonQtWrapper_QDirIterator::path(QDirIterator* theWrappedObject) const
{
return theWrappedObject->path();
}

