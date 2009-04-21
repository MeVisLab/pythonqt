#include "PythonQtWrapper_QFileInfo.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QDateTime>
#include <QDir>
#include <QVariant>
#include <qdatetime.h>
#include <qdir.h>
#include <qfile.h>
#include <qfileinfo.h>

QFileInfo* PythonQtWrapper_QFileInfo::new_QFileInfo()
{ 
return new QFileInfo(); }

QFileInfo* PythonQtWrapper_QFileInfo::new_QFileInfo(const QDir&  dir, const QString&  file)
{ 
return new QFileInfo(dir, file); }

QFileInfo* PythonQtWrapper_QFileInfo::new_QFileInfo(const QFile&  file)
{ 
return new QFileInfo(file); }

QFileInfo* PythonQtWrapper_QFileInfo::new_QFileInfo(const QFileInfo&  fileinfo)
{ 
return new QFileInfo(fileinfo); }

QFileInfo* PythonQtWrapper_QFileInfo::new_QFileInfo(const QString&  file)
{ 
return new QFileInfo(file); }

bool  PythonQtWrapper_QFileInfo::operator_equal(QFileInfo* theWrappedObject, const QFileInfo&  fileinfo)
{
return  (*theWrappedObject)== fileinfo;
}

QString  PythonQtWrapper_QFileInfo::fileName(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).fileName();
}

QDateTime  PythonQtWrapper_QFileInfo::created(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).created();
}

QString  PythonQtWrapper_QFileInfo::completeSuffix(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).completeSuffix();
}

bool  PythonQtWrapper_QFileInfo::permission(QFileInfo* theWrappedObject, QFile::Permissions  permissions) const
{
return  (*theWrappedObject).permission(permissions);
}

QString  PythonQtWrapper_QFileInfo::path(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).path();
}

QString  PythonQtWrapper_QFileInfo::suffix(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).suffix();
}

bool  PythonQtWrapper_QFileInfo::isHidden(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).isHidden();
}

void PythonQtWrapper_QFileInfo::setFile(QFileInfo* theWrappedObject, const QDir&  dir, const QString&  file)
{
 (*theWrappedObject).setFile(dir, file);
}

QString  PythonQtWrapper_QFileInfo::bundleName(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).bundleName();
}

bool  PythonQtWrapper_QFileInfo::isAbsolute(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).isAbsolute();
}

QString  PythonQtWrapper_QFileInfo::absolutePath(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).absolutePath();
}

QString  PythonQtWrapper_QFileInfo::symLinkTarget(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).symLinkTarget();
}

void PythonQtWrapper_QFileInfo::setFile(QFileInfo* theWrappedObject, const QFile&  file)
{
 (*theWrappedObject).setFile(file);
}

QDir  PythonQtWrapper_QFileInfo::absoluteDir(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).absoluteDir();
}

QFile::Permissions  PythonQtWrapper_QFileInfo::permissions(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).permissions();
}

bool  PythonQtWrapper_QFileInfo::isFile(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).isFile();
}

void PythonQtWrapper_QFileInfo::refresh(QFileInfo* theWrappedObject)
{
 (*theWrappedObject).refresh();
}

uint  PythonQtWrapper_QFileInfo::ownerId(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).ownerId();
}

bool  PythonQtWrapper_QFileInfo::isSymLink(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).isSymLink();
}

QDateTime  PythonQtWrapper_QFileInfo::lastRead(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).lastRead();
}

uint  PythonQtWrapper_QFileInfo::groupId(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).groupId();
}

bool  PythonQtWrapper_QFileInfo::caching(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).caching();
}

bool  PythonQtWrapper_QFileInfo::isRoot(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).isRoot();
}

QDir  PythonQtWrapper_QFileInfo::dir(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).dir();
}

QDateTime  PythonQtWrapper_QFileInfo::lastModified(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).lastModified();
}

bool  PythonQtWrapper_QFileInfo::isBundle(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).isBundle();
}

qint64  PythonQtWrapper_QFileInfo::size(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).size();
}

QString  PythonQtWrapper_QFileInfo::absoluteFilePath(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).absoluteFilePath();
}

void PythonQtWrapper_QFileInfo::setFile(QFileInfo* theWrappedObject, const QString&  file)
{
 (*theWrappedObject).setFile(file);
}

bool  PythonQtWrapper_QFileInfo::isReadable(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).isReadable();
}

QString  PythonQtWrapper_QFileInfo::canonicalFilePath(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).canonicalFilePath();
}

QString  PythonQtWrapper_QFileInfo::owner(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).owner();
}

void PythonQtWrapper_QFileInfo::setCaching(QFileInfo* theWrappedObject, bool  on)
{
 (*theWrappedObject).setCaching(on);
}

bool  PythonQtWrapper_QFileInfo::isRelative(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).isRelative();
}

bool  PythonQtWrapper_QFileInfo::makeAbsolute(QFileInfo* theWrappedObject)
{
return  (*theWrappedObject).makeAbsolute();
}

bool  PythonQtWrapper_QFileInfo::isWritable(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).isWritable();
}

QString  PythonQtWrapper_QFileInfo::baseName(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).baseName();
}

bool  PythonQtWrapper_QFileInfo::exists(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).exists();
}

QString  PythonQtWrapper_QFileInfo::group(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).group();
}

bool  PythonQtWrapper_QFileInfo::isDir(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).isDir();
}

QString  PythonQtWrapper_QFileInfo::completeBaseName(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).completeBaseName();
}

QString  PythonQtWrapper_QFileInfo::canonicalPath(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).canonicalPath();
}

QString  PythonQtWrapper_QFileInfo::filePath(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).filePath();
}

bool  PythonQtWrapper_QFileInfo::isExecutable(QFileInfo* theWrappedObject) const
{
return  (*theWrappedObject).isExecutable();
}

