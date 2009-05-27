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

class PythonQtPublicPromoter_QUrlInfo : public QUrlInfo
{ public:
inline void promoted_setSize(qint64  size) { QUrlInfo::setSize(size); }
inline void promoted_setSymLink(bool  b) { QUrlInfo::setSymLink(b); }
inline void promoted_setDir(bool  b) { QUrlInfo::setDir(b); }
inline void promoted_setLastModified(const QDateTime&  dt) { QUrlInfo::setLastModified(dt); }
inline void promoted_setName(const QString&  name) { QUrlInfo::setName(name); }
inline void promoted_setReadable(bool  b) { QUrlInfo::setReadable(b); }
inline void promoted_setWritable(bool  b) { QUrlInfo::setWritable(b); }
inline void promoted_setPermissions(int  p) { QUrlInfo::setPermissions(p); }
inline void promoted_setFile(bool  b) { QUrlInfo::setFile(b); }
inline void promoted_setGroup(const QString&  s) { QUrlInfo::setGroup(s); }
inline void promoted_setOwner(const QString&  s) { QUrlInfo::setOwner(s); }
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
   bool  static_QUrlInfo_greaterThan(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy);
   bool  static_QUrlInfo_lessThan(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy);
   bool  isSymLink(QUrlInfo* theWrappedObject) const;
   bool  isValid(QUrlInfo* theWrappedObject) const;
   QString  group(QUrlInfo* theWrappedObject) const;
   bool  isReadable(QUrlInfo* theWrappedObject) const;
   void setSize(QUrlInfo* theWrappedObject, qint64  size);
   QDateTime  lastModified(QUrlInfo* theWrappedObject) const;
   void setSymLink(QUrlInfo* theWrappedObject, bool  b);
   bool  isDir(QUrlInfo* theWrappedObject) const;
   bool  isFile(QUrlInfo* theWrappedObject) const;
   bool  static_QUrlInfo_equal(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy);
   QDateTime  lastRead(QUrlInfo* theWrappedObject) const;
   void setDir(QUrlInfo* theWrappedObject, bool  b);
   void setLastModified(QUrlInfo* theWrappedObject, const QDateTime&  dt);
   void setName(QUrlInfo* theWrappedObject, const QString&  name);
   void setReadable(QUrlInfo* theWrappedObject, bool  b);
   QString  name(QUrlInfo* theWrappedObject) const;
   void setWritable(QUrlInfo* theWrappedObject, bool  b);
   bool  isWritable(QUrlInfo* theWrappedObject) const;
   void setLastRead(QUrlInfo* theWrappedObject, const QDateTime&  dt);
   void setPermissions(QUrlInfo* theWrappedObject, int  p);
   bool  isExecutable(QUrlInfo* theWrappedObject) const;
   void setFile(QUrlInfo* theWrappedObject, bool  b);
   qint64  size(QUrlInfo* theWrappedObject) const;
   QString  owner(QUrlInfo* theWrappedObject) const;
   int  permissions(QUrlInfo* theWrappedObject) const;
   void setGroup(QUrlInfo* theWrappedObject, const QString&  s);
   bool  operator_equal(QUrlInfo* theWrappedObject, const QUrlInfo&  i) const;
   void setOwner(QUrlInfo* theWrappedObject, const QString&  s);
};

#endif // PYTHONQTWRAPPER_QURLINFO_H
