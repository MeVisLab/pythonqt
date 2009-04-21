#ifndef PYTHONQTWRAPPER_QDIR_H
#define PYTHONQTWRAPPER_QDIR_H

#include <qdir.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdir.h>
#include <qfileinfo.h>
#include <qlist.h>
#include <qstringlist.h>

class PythonQtWrapper_QDir : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Filter SortFlag )
enum Filter{
  Dirs = QDir::Dirs,   Files = QDir::Files,   Drives = QDir::Drives,   NoSymLinks = QDir::NoSymLinks,   AllEntries = QDir::AllEntries,   TypeMask = QDir::TypeMask,   Readable = QDir::Readable,   Writable = QDir::Writable,   Executable = QDir::Executable,   PermissionMask = QDir::PermissionMask,   Modified = QDir::Modified,   Hidden = QDir::Hidden,   System = QDir::System,   AccessMask = QDir::AccessMask,   AllDirs = QDir::AllDirs,   CaseSensitive = QDir::CaseSensitive,   NoDotAndDotDot = QDir::NoDotAndDotDot,   NoFilter = QDir::NoFilter};
enum SortFlag{
  Name = QDir::Name,   Time = QDir::Time,   Size = QDir::Size,   Unsorted = QDir::Unsorted,   SortByMask = QDir::SortByMask,   DirsFirst = QDir::DirsFirst,   Reversed = QDir::Reversed,   IgnoreCase = QDir::IgnoreCase,   DirsLast = QDir::DirsLast,   LocaleAware = QDir::LocaleAware,   Type = QDir::Type,   NoSort = QDir::NoSort};
public slots:
QDir* new_QDir(const QDir&  arg__1);
QDir* new_QDir(const QString&  path = QString());
QDir* new_QDir(const QString&  path, const QString&  nameFilter, QDir::SortFlags  sort = QDir::SortFlags(Name | IgnoreCase), QDir::Filters  filter = QDir::AllEntries);
void delete_QDir(QDir* obj) { delete obj; } 
   QChar  static_QDir_separator();
   QDir  static_QDir_current();
   QDir  static_QDir_temp();
   uint  count(QDir* theWrappedObject) const;
   bool  static_QDir_setCurrent(const QString&  path);
   bool  exists(QDir* theWrappedObject) const;
   bool  isRelative(QDir* theWrappedObject) const;
   void static_QDir_addSearchPath(const QString&  prefix, const QString&  path);
   QDir  static_QDir_home();
   QString  filePath(QDir* theWrappedObject, const QString&  fileName) const;
   void static_QDir_setSearchPaths(const QString&  prefix, const QStringList&  searchPaths);
   bool  makeAbsolute(QDir* theWrappedObject);
   bool  cd(QDir* theWrappedObject, const QString&  dirName);
   QList<QFileInfo >  entryInfoList(QDir* theWrappedObject, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QStringList  entryList(QDir* theWrappedObject, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QStringList  static_QDir_searchPaths(const QString&  prefix);
   void setSorting(QDir* theWrappedObject, QDir::SortFlags  sort);
   QString  static_QDir_toNativeSeparators(const QString&  pathName);
   bool  operator_equal(QDir* theWrappedObject, const QDir&  dir) const;
   QString  static_QDir_rootPath();
   QString  static_QDir_convertSeparators(const QString&  pathName);
   bool  exists(QDir* theWrappedObject, const QString&  name) const;
   QStringList  entryList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QDir  static_QDir_root();
   QString  canonicalPath(QDir* theWrappedObject) const;
   bool  mkdir(QDir* theWrappedObject, const QString&  dirName) const;
   QString  static_QDir_currentPath();
   bool  isAbsolute(QDir* theWrappedObject) const;
   QString  static_QDir_homePath();
   QString  dirName(QDir* theWrappedObject) const;
   QString  relativeFilePath(QDir* theWrappedObject, const QString&  fileName) const;
   bool  isRoot(QDir* theWrappedObject) const;
   void setPath(QDir* theWrappedObject, const QString&  path);
   QDir::Filters  filter(QDir* theWrappedObject) const;
   QStringList  nameFilters(QDir* theWrappedObject) const;
   void refresh(QDir* theWrappedObject) const;
   bool  rename(QDir* theWrappedObject, const QString&  oldName, const QString&  newName);
   bool  static_QDir_isAbsolutePath(const QString&  path);
   bool  static_QDir_match(const QString&  filter, const QString&  fileName);
   bool  mkpath(QDir* theWrappedObject, const QString&  dirPath) const;
   bool  cdUp(QDir* theWrappedObject);
   QList<QFileInfo >  entryInfoList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   void setFilter(QDir* theWrappedObject, QDir::Filters  filter);
   QString  absolutePath(QDir* theWrappedObject) const;
   QList<QFileInfo >  static_QDir_drives();
   QString  static_QDir_fromNativeSeparators(const QString&  pathName);
   QString  static_QDir_tempPath();
   QString  absoluteFilePath(QDir* theWrappedObject, const QString&  fileName) const;
   bool  static_QDir_match(const QStringList&  filters, const QString&  fileName);
   bool  rmdir(QDir* theWrappedObject, const QString&  dirName) const;
   bool  remove(QDir* theWrappedObject, const QString&  fileName);
   bool  rmpath(QDir* theWrappedObject, const QString&  dirPath) const;
   QString  static_QDir_cleanPath(const QString&  path);
   bool  isReadable(QDir* theWrappedObject) const;
   QStringList  static_QDir_nameFiltersFromString(const QString&  nameFilter);
   void setNameFilters(QDir* theWrappedObject, const QStringList&  nameFilters);
   QString  path(QDir* theWrappedObject) const;
   QDir::SortFlags  sorting(QDir* theWrappedObject) const;
   bool  static_QDir_isRelativePath(const QString&  path);
   QString  operator_subscript(QDir* theWrappedObject, int  arg__1) const;
};

#endif // PYTHONQTWRAPPER_QDIR_H
