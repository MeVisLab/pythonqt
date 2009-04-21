#include "PythonQtWrapper_QDir.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdir.h>
#include <qfileinfo.h>
#include <qlist.h>
#include <qstringlist.h>

QDir* PythonQtWrapper_QDir::new_QDir(const QDir&  arg__1)
{ 
return new QDir(arg__1); }

QDir* PythonQtWrapper_QDir::new_QDir(const QString&  path)
{ 
return new QDir(path); }

QDir* PythonQtWrapper_QDir::new_QDir(const QString&  path, const QString&  nameFilter, QDir::SortFlags  sort, QDir::Filters  filter)
{ 
return new QDir(path, nameFilter, sort, filter); }

uint  PythonQtWrapper_QDir::count(QDir* theWrappedObject) const
{
return  (*theWrappedObject).count();
}

bool  PythonQtWrapper_QDir::mkpath(QDir* theWrappedObject, const QString&  dirPath) const
{
return  (*theWrappedObject).mkpath(dirPath);
}

QString  PythonQtWrapper_QDir::static_QDir_toNativeSeparators(const QString&  pathName)
{
return QDir::toNativeSeparators(pathName);
}

QString  PythonQtWrapper_QDir::absoluteFilePath(QDir* theWrappedObject, const QString&  fileName) const
{
return  (*theWrappedObject).absoluteFilePath(fileName);
}

bool  PythonQtWrapper_QDir::static_QDir_match(const QString&  filter, const QString&  fileName)
{
return QDir::match(filter, fileName);
}

QStringList  PythonQtWrapper_QDir::nameFilters(QDir* theWrappedObject) const
{
return  (*theWrappedObject).nameFilters();
}

bool  PythonQtWrapper_QDir::rmpath(QDir* theWrappedObject, const QString&  dirPath) const
{
return  (*theWrappedObject).rmpath(dirPath);
}

QChar  PythonQtWrapper_QDir::static_QDir_separator()
{
return QDir::separator();
}

QString  PythonQtWrapper_QDir::absolutePath(QDir* theWrappedObject) const
{
return  (*theWrappedObject).absolutePath();
}

QDir  PythonQtWrapper_QDir::static_QDir_current()
{
return QDir::current();
}

bool  PythonQtWrapper_QDir::remove(QDir* theWrappedObject, const QString&  fileName)
{
return  (*theWrappedObject).remove(fileName);
}

void PythonQtWrapper_QDir::setPath(QDir* theWrappedObject, const QString&  path)
{
 (*theWrappedObject).setPath(path);
}

QList<QFileInfo >  PythonQtWrapper_QDir::static_QDir_drives()
{
return QDir::drives();
}

bool  PythonQtWrapper_QDir::cdUp(QDir* theWrappedObject)
{
return  (*theWrappedObject).cdUp();
}

QStringList  PythonQtWrapper_QDir::entryList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters, QDir::SortFlags  sort) const
{
return  (*theWrappedObject).entryList(nameFilters, filters, sort);
}

QString  PythonQtWrapper_QDir::static_QDir_rootPath()
{
return QDir::rootPath();
}

void PythonQtWrapper_QDir::static_QDir_addSearchPath(const QString&  prefix, const QString&  path)
{
QDir::addSearchPath(prefix, path);
}

QDir  PythonQtWrapper_QDir::static_QDir_root()
{
return QDir::root();
}

QList<QFileInfo >  PythonQtWrapper_QDir::entryInfoList(QDir* theWrappedObject, QDir::Filters  filters, QDir::SortFlags  sort) const
{
return  (*theWrappedObject).entryInfoList(filters, sort);
}

bool  PythonQtWrapper_QDir::static_QDir_setCurrent(const QString&  path)
{
return QDir::setCurrent(path);
}

void PythonQtWrapper_QDir::static_QDir_setSearchPaths(const QString&  prefix, const QStringList&  searchPaths)
{
QDir::setSearchPaths(prefix, searchPaths);
}

QString  PythonQtWrapper_QDir::static_QDir_tempPath()
{
return QDir::tempPath();
}

QString  PythonQtWrapper_QDir::static_QDir_currentPath()
{
return QDir::currentPath();
}

QString  PythonQtWrapper_QDir::static_QDir_fromNativeSeparators(const QString&  pathName)
{
return QDir::fromNativeSeparators(pathName);
}

QString  PythonQtWrapper_QDir::dirName(QDir* theWrappedObject) const
{
return  (*theWrappedObject).dirName();
}

bool  PythonQtWrapper_QDir::exists(QDir* theWrappedObject) const
{
return  (*theWrappedObject).exists();
}

QString  PythonQtWrapper_QDir::relativeFilePath(QDir* theWrappedObject, const QString&  fileName) const
{
return  (*theWrappedObject).relativeFilePath(fileName);
}

void PythonQtWrapper_QDir::setNameFilters(QDir* theWrappedObject, const QStringList&  nameFilters)
{
 (*theWrappedObject).setNameFilters(nameFilters);
}

bool  PythonQtWrapper_QDir::rmdir(QDir* theWrappedObject, const QString&  dirName) const
{
return  (*theWrappedObject).rmdir(dirName);
}

bool  PythonQtWrapper_QDir::static_QDir_match(const QStringList&  filters, const QString&  fileName)
{
return QDir::match(filters, fileName);
}

QString  PythonQtWrapper_QDir::path(QDir* theWrappedObject) const
{
return  (*theWrappedObject).path();
}

void PythonQtWrapper_QDir::setSorting(QDir* theWrappedObject, QDir::SortFlags  sort)
{
 (*theWrappedObject).setSorting(sort);
}

bool  PythonQtWrapper_QDir::isRelative(QDir* theWrappedObject) const
{
return  (*theWrappedObject).isRelative();
}

bool  PythonQtWrapper_QDir::isRoot(QDir* theWrappedObject) const
{
return  (*theWrappedObject).isRoot();
}

bool  PythonQtWrapper_QDir::static_QDir_isRelativePath(const QString&  path)
{
return QDir::isRelativePath(path);
}

QString  PythonQtWrapper_QDir::filePath(QDir* theWrappedObject, const QString&  fileName) const
{
return  (*theWrappedObject).filePath(fileName);
}

bool  PythonQtWrapper_QDir::static_QDir_isAbsolutePath(const QString&  path)
{
return QDir::isAbsolutePath(path);
}

QDir  PythonQtWrapper_QDir::static_QDir_home()
{
return QDir::home();
}

void PythonQtWrapper_QDir::refresh(QDir* theWrappedObject) const
{
 (*theWrappedObject).refresh();
}

QDir::SortFlags  PythonQtWrapper_QDir::sorting(QDir* theWrappedObject) const
{
return  (*theWrappedObject).sorting();
}

QStringList  PythonQtWrapper_QDir::static_QDir_nameFiltersFromString(const QString&  nameFilter)
{
return QDir::nameFiltersFromString(nameFilter);
}

bool  PythonQtWrapper_QDir::isReadable(QDir* theWrappedObject) const
{
return  (*theWrappedObject).isReadable();
}

bool  PythonQtWrapper_QDir::operator_equal(QDir* theWrappedObject, const QDir&  dir) const
{
return  (*theWrappedObject)== dir;
}

QString  PythonQtWrapper_QDir::static_QDir_convertSeparators(const QString&  pathName)
{
return QDir::convertSeparators(pathName);
}

QDir::Filters  PythonQtWrapper_QDir::filter(QDir* theWrappedObject) const
{
return  (*theWrappedObject).filter();
}

bool  PythonQtWrapper_QDir::makeAbsolute(QDir* theWrappedObject)
{
return  (*theWrappedObject).makeAbsolute();
}

bool  PythonQtWrapper_QDir::rename(QDir* theWrappedObject, const QString&  oldName, const QString&  newName)
{
return  (*theWrappedObject).rename(oldName, newName);
}

QStringList  PythonQtWrapper_QDir::static_QDir_searchPaths(const QString&  prefix)
{
return QDir::searchPaths(prefix);
}

void PythonQtWrapper_QDir::setFilter(QDir* theWrappedObject, QDir::Filters  filter)
{
 (*theWrappedObject).setFilter(filter);
}

QDir  PythonQtWrapper_QDir::static_QDir_temp()
{
return QDir::temp();
}

bool  PythonQtWrapper_QDir::mkdir(QDir* theWrappedObject, const QString&  dirName) const
{
return  (*theWrappedObject).mkdir(dirName);
}

QList<QFileInfo >  PythonQtWrapper_QDir::entryInfoList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters, QDir::SortFlags  sort) const
{
return  (*theWrappedObject).entryInfoList(nameFilters, filters, sort);
}

QString  PythonQtWrapper_QDir::canonicalPath(QDir* theWrappedObject) const
{
return  (*theWrappedObject).canonicalPath();
}

QStringList  PythonQtWrapper_QDir::entryList(QDir* theWrappedObject, QDir::Filters  filters, QDir::SortFlags  sort) const
{
return  (*theWrappedObject).entryList(filters, sort);
}

bool  PythonQtWrapper_QDir::exists(QDir* theWrappedObject, const QString&  name) const
{
return  (*theWrappedObject).exists(name);
}

bool  PythonQtWrapper_QDir::isAbsolute(QDir* theWrappedObject) const
{
return  (*theWrappedObject).isAbsolute();
}

QString  PythonQtWrapper_QDir::static_QDir_homePath()
{
return QDir::homePath();
}

QString  PythonQtWrapper_QDir::operator_subscript(QDir* theWrappedObject, int  arg__1) const
{
return  (*theWrappedObject)[arg__1];
}

QString  PythonQtWrapper_QDir::static_QDir_cleanPath(const QString&  path)
{
return QDir::cleanPath(path);
}

bool  PythonQtWrapper_QDir::cd(QDir* theWrappedObject, const QString&  dirName)
{
return  (*theWrappedObject).cd(dirName);
}

