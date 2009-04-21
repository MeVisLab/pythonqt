#ifndef PYTHONQTWRAPPER_QURLINFO_H
#define PYTHONQTWRAPPER_QURLINFO_H

#include <qurlinfo.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatetime.h>
#include <qurl.h>
#include <qurlinfo.h>

class PythonQtShell_QUrlInfo : public QUrlInfo
{
public:
    PythonQtShell_QUrlInfo():QUrlInfo(),_wrapper(NULL) {};
    PythonQtShell_QUrlInfo(const QString&  name, int  permissions, const QString&  owner, const QString&  group, qint64  size, const QDateTime&  lastModified, const QDateTime&  lastRead, bool  isDir, bool  isFile, bool  isSymLink, bool  isWritable, bool  isReadable, bool  isExecutable):QUrlInfo(name, permissions, owner, group, size, lastModified, lastRead, isDir, isFile, isSymLink, isWritable, isReadable, isExecutable),_wrapper(NULL) {};
    PythonQtShell_QUrlInfo(const QUrl&  url, int  permissions, const QString&  owner, const QString&  group, qint64  size, const QDateTime&  lastModified, const QDateTime&  lastRead, bool  isDir, bool  isFile, bool  isSymLink, bool  isWritable, bool  isReadable, bool  isExecutable):QUrlInfo(url, permissions, owner, group, size, lastModified, lastRead, isDir, isFile, isSymLink, isWritable, isReadable, isExecutable),_wrapper(NULL) {};
    PythonQtShell_QUrlInfo(const QUrlInfo&  ui):QUrlInfo(ui),_wrapper(NULL) {};

virtual void setDir(bool  b);
virtual void setFile(bool  b);
virtual void setGroup(const QString&  s);
virtual void setLastModified(const QDateTime&  dt);
virtual void setName(const QString&  name);
virtual void setOwner(const QString&  s);
virtual void setPermissions(int  p);
virtual void setReadable(bool  b);
virtual void setSize(qint64  size);
virtual void setSymLink(bool  b);
virtual void setWritable(bool  b);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUrlInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PermissionSpec )
enum PermissionSpec{
  ReadOwner = QUrlInfo::ReadOwner,   WriteOwner = QUrlInfo::WriteOwner,   ExeOwner = QUrlInfo::ExeOwner,   ReadGroup = QUrlInfo::ReadGroup,   WriteGroup = QUrlInfo::WriteGroup,   ExeGroup = QUrlInfo::ExeGroup,   ReadOther = QUrlInfo::ReadOther,   WriteOther = QUrlInfo::WriteOther,   ExeOther = QUrlInfo::ExeOther};
public slots:
QUrlInfo* new_QUrlInfo();
QUrlInfo* new_QUrlInfo(const QString&  name, int  permissions, const QString&  owner, const QString&  group, qint64  size, const QDateTime&  lastModified, const QDateTime&  lastRead, bool  isDir, bool  isFile, bool  isSymLink, bool  isWritable, bool  isReadable, bool  isExecutable);
QUrlInfo* new_QUrlInfo(const QUrl&  url, int  permissions, const QString&  owner, const QString&  group, qint64  size, const QDateTime&  lastModified, const QDateTime&  lastRead, bool  isDir, bool  isFile, bool  isSymLink, bool  isWritable, bool  isReadable, bool  isExecutable);
QUrlInfo* new_QUrlInfo(const QUrlInfo&  ui);
void delete_QUrlInfo(QUrlInfo* obj) { delete obj; } 
   bool  isValid(QUrlInfo* theWrappedObject) const;
   qint64  size(QUrlInfo* theWrappedObject) const;
   int  permissions(QUrlInfo* theWrappedObject) const;
   void setLastRead(QUrlInfo* theWrappedObject, const QDateTime&  dt);
   bool  isExecutable(QUrlInfo* theWrappedObject) const;
   QDateTime  lastModified(QUrlInfo* theWrappedObject) const;
   QString  owner(QUrlInfo* theWrappedObject) const;
   void setFile(QUrlInfo* theWrappedObject, bool  b);
   bool  isDir(QUrlInfo* theWrappedObject) const;
   bool  static_QUrlInfo_lessThan(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy);
   void setGroup(QUrlInfo* theWrappedObject, const QString&  s);
   bool  operator_equal(QUrlInfo* theWrappedObject, const QUrlInfo&  i) const;
   bool  static_QUrlInfo_equal(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy);
   bool  static_QUrlInfo_greaterThan(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy);
   QString  group(QUrlInfo* theWrappedObject) const;
   void setName(QUrlInfo* theWrappedObject, const QString&  name);
   void setReadable(QUrlInfo* theWrappedObject, bool  b);
   QString  name(QUrlInfo* theWrappedObject) const;
   void setWritable(QUrlInfo* theWrappedObject, bool  b);
   bool  isSymLink(QUrlInfo* theWrappedObject) const;
   bool  isWritable(QUrlInfo* theWrappedObject) const;
   void setSymLink(QUrlInfo* theWrappedObject, bool  b);
   bool  isFile(QUrlInfo* theWrappedObject) const;
   void setOwner(QUrlInfo* theWrappedObject, const QString&  s);
   void setPermissions(QUrlInfo* theWrappedObject, int  p);
   void setSize(QUrlInfo* theWrappedObject, qint64  size);
   void setDir(QUrlInfo* theWrappedObject, bool  b);
   bool  isReadable(QUrlInfo* theWrappedObject) const;
   QDateTime  lastRead(QUrlInfo* theWrappedObject) const;
   void setLastModified(QUrlInfo* theWrappedObject, const QDateTime&  dt);
};

#endif // PYTHONQTWRAPPER_QURLINFO_H
