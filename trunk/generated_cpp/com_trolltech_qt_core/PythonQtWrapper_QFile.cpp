#include "PythonQtWrapper_QFile.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfile.h>
#include <qlist.h>
#include <qobject.h>

QFile* PythonQtWrapper_QFile::new_QFile()
{ 
return new QFile(); }

QFile* PythonQtWrapper_QFile::new_QFile(QObject*  parent)
{ 
return new QFile(parent); }

QFile* PythonQtWrapper_QFile::new_QFile(const QString&  name)
{ 
return new QFile(name); }

QFile* PythonQtWrapper_QFile::new_QFile(const QString&  name, QObject*  parent)
{ 
return new QFile(name, parent); }

bool  PythonQtWrapper_QFile::atEnd(QFile* theWrappedObject) const
{
return theWrappedObject->atEnd();
}

void PythonQtWrapper_QFile::close(QFile* theWrappedObject)
{
theWrappedObject->close();
}

bool  PythonQtWrapper_QFile::static_QFile_copy(const QString&  fileName, const QString&  newName)
{
return QFile::copy(fileName, newName);
}

bool  PythonQtWrapper_QFile::copy(QFile* theWrappedObject, const QString&  newName)
{
return theWrappedObject->copy(newName);
}

QString  PythonQtWrapper_QFile::static_QFile_decodeName(const QByteArray&  localFileName)
{
return QFile::decodeName(localFileName);
}

QByteArray  PythonQtWrapper_QFile::static_QFile_encodeName(const QString&  fileName)
{
return QFile::encodeName(fileName);
}

QFile::FileError  PythonQtWrapper_QFile::error(QFile* theWrappedObject) const
{
return theWrappedObject->error();
}

bool  PythonQtWrapper_QFile::exists(QFile* theWrappedObject) const
{
return theWrappedObject->exists();
}

bool  PythonQtWrapper_QFile::static_QFile_exists(const QString&  fileName)
{
return QFile::exists(fileName);
}

QAbstractFileEngine*  PythonQtWrapper_QFile::fileEngine(QFile* theWrappedObject) const
{
return theWrappedObject->fileEngine();
}

QString  PythonQtWrapper_QFile::fileName(QFile* theWrappedObject) const
{
return theWrappedObject->fileName();
}

bool  PythonQtWrapper_QFile::flush(QFile* theWrappedObject)
{
return theWrappedObject->flush();
}

int  PythonQtWrapper_QFile::handle(QFile* theWrappedObject) const
{
return theWrappedObject->handle();
}

bool  PythonQtWrapper_QFile::isSequential(QFile* theWrappedObject) const
{
return theWrappedObject->isSequential();
}

bool  PythonQtWrapper_QFile::link(QFile* theWrappedObject, const QString&  newName)
{
return theWrappedObject->link(newName);
}

bool  PythonQtWrapper_QFile::static_QFile_link(const QString&  oldname, const QString&  newName)
{
return QFile::link(oldname, newName);
}

bool  PythonQtWrapper_QFile::open(QFile* theWrappedObject, QIODevice::OpenMode  flags)
{
return theWrappedObject->open(flags);
}

QFile::Permissions  PythonQtWrapper_QFile::permissions(QFile* theWrappedObject) const
{
return theWrappedObject->permissions();
}

QFile::Permissions  PythonQtWrapper_QFile::static_QFile_permissions(const QString&  filename)
{
return QFile::permissions(filename);
}

qint64  PythonQtWrapper_QFile::pos(QFile* theWrappedObject) const
{
return theWrappedObject->pos();
}

bool  PythonQtWrapper_QFile::remove(QFile* theWrappedObject)
{
return theWrappedObject->remove();
}

bool  PythonQtWrapper_QFile::static_QFile_remove(const QString&  fileName)
{
return QFile::remove(fileName);
}

bool  PythonQtWrapper_QFile::rename(QFile* theWrappedObject, const QString&  newName)
{
return theWrappedObject->rename(newName);
}

bool  PythonQtWrapper_QFile::static_QFile_rename(const QString&  oldName, const QString&  newName)
{
return QFile::rename(oldName, newName);
}

bool  PythonQtWrapper_QFile::static_QFile_resize(const QString&  filename, qint64  sz)
{
return QFile::resize(filename, sz);
}

bool  PythonQtWrapper_QFile::resize(QFile* theWrappedObject, qint64  sz)
{
return theWrappedObject->resize(sz);
}

bool  PythonQtWrapper_QFile::seek(QFile* theWrappedObject, qint64  offset)
{
return theWrappedObject->seek(offset);
}

void PythonQtWrapper_QFile::setFileName(QFile* theWrappedObject, const QString&  name)
{
theWrappedObject->setFileName(name);
}

bool  PythonQtWrapper_QFile::setPermissions(QFile* theWrappedObject, QFile::Permissions  permissionSpec)
{
return theWrappedObject->setPermissions(permissionSpec);
}

bool  PythonQtWrapper_QFile::static_QFile_setPermissions(const QString&  filename, QFile::Permissions  permissionSpec)
{
return QFile::setPermissions(filename, permissionSpec);
}

qint64  PythonQtWrapper_QFile::size(QFile* theWrappedObject) const
{
return theWrappedObject->size();
}

QString  PythonQtWrapper_QFile::symLinkTarget(QFile* theWrappedObject) const
{
return theWrappedObject->symLinkTarget();
}

QString  PythonQtWrapper_QFile::static_QFile_symLinkTarget(const QString&  fileName)
{
return QFile::symLinkTarget(fileName);
}

void PythonQtWrapper_QFile::unsetError(QFile* theWrappedObject)
{
theWrappedObject->unsetError();
}

