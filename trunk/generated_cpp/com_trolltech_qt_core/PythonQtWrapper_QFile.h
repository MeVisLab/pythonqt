#ifndef PYTHONQTWRAPPER_QFILE_H
#define PYTHONQTWRAPPER_QFILE_H

#include <qfile.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfile.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtWrapper_QFile : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FileError MemoryMapFlags Permission )
enum FileError{
  NoError = QFile::NoError,   ReadError = QFile::ReadError,   WriteError = QFile::WriteError,   FatalError = QFile::FatalError,   ResourceError = QFile::ResourceError,   OpenError = QFile::OpenError,   AbortError = QFile::AbortError,   TimeOutError = QFile::TimeOutError,   UnspecifiedError = QFile::UnspecifiedError,   RemoveError = QFile::RemoveError,   RenameError = QFile::RenameError,   PositionError = QFile::PositionError,   ResizeError = QFile::ResizeError,   PermissionsError = QFile::PermissionsError,   CopyError = QFile::CopyError};
enum MemoryMapFlags{
  NoOptions = QFile::NoOptions};
enum Permission{
  ReadOwner = QFile::ReadOwner,   WriteOwner = QFile::WriteOwner,   ExeOwner = QFile::ExeOwner,   ReadUser = QFile::ReadUser,   WriteUser = QFile::WriteUser,   ExeUser = QFile::ExeUser,   ReadGroup = QFile::ReadGroup,   WriteGroup = QFile::WriteGroup,   ExeGroup = QFile::ExeGroup,   ReadOther = QFile::ReadOther,   WriteOther = QFile::WriteOther,   ExeOther = QFile::ExeOther};
public slots:
QFile* new_QFile();
QFile* new_QFile(QObject*  parent);
QFile* new_QFile(const QString&  name);
QFile* new_QFile(const QString&  name, QObject*  parent);
void delete_QFile(QFile* obj) { delete obj; } 
   bool  atEnd(QFile* theWrappedObject) const;
   void close(QFile* theWrappedObject);
   bool  static_QFile_copy(const QString&  fileName, const QString&  newName);
   bool  copy(QFile* theWrappedObject, const QString&  newName);
   QString  static_QFile_decodeName(const QByteArray&  localFileName);
   QByteArray  static_QFile_encodeName(const QString&  fileName);
   QFile::FileError  error(QFile* theWrappedObject) const;
   bool  exists(QFile* theWrappedObject) const;
   bool  static_QFile_exists(const QString&  fileName);
   QAbstractFileEngine*  fileEngine(QFile* theWrappedObject) const;
   QString  fileName(QFile* theWrappedObject) const;
   bool  flush(QFile* theWrappedObject);
   int  handle(QFile* theWrappedObject) const;
   bool  isSequential(QFile* theWrappedObject) const;
   bool  link(QFile* theWrappedObject, const QString&  newName);
   bool  static_QFile_link(const QString&  oldname, const QString&  newName);
   bool  open(QFile* theWrappedObject, QIODevice::OpenMode  flags);
   QFile::Permissions  permissions(QFile* theWrappedObject) const;
   QFile::Permissions  static_QFile_permissions(const QString&  filename);
   qint64  pos(QFile* theWrappedObject) const;
   bool  remove(QFile* theWrappedObject);
   bool  static_QFile_remove(const QString&  fileName);
   bool  rename(QFile* theWrappedObject, const QString&  newName);
   bool  static_QFile_rename(const QString&  oldName, const QString&  newName);
   bool  static_QFile_resize(const QString&  filename, qint64  sz);
   bool  resize(QFile* theWrappedObject, qint64  sz);
   bool  seek(QFile* theWrappedObject, qint64  offset);
   void setFileName(QFile* theWrappedObject, const QString&  name);
   bool  setPermissions(QFile* theWrappedObject, QFile::Permissions  permissionSpec);
   bool  static_QFile_setPermissions(const QString&  filename, QFile::Permissions  permissionSpec);
   qint64  size(QFile* theWrappedObject) const;
   QString  symLinkTarget(QFile* theWrappedObject) const;
   QString  static_QFile_symLinkTarget(const QString&  fileName);
   void unsetError(QFile* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QFILE_H
