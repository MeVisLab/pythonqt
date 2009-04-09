#ifndef PYTHONQTWRAPPER_QURLINFO_H
#define PYTHONQTWRAPPER_QURLINFO_H

#include <qurlinfo.h>
#include <QObject>

#include <QVariant>
#include <qdatetime.h>
#include <qurl.h>
#include <qurlinfo.h>

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
   bool  static_QUrlInfo_equal(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy);
   bool  static_QUrlInfo_greaterThan(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy);
   QString  group(QUrlInfo* theWrappedObject) const;
   bool  isDir(QUrlInfo* theWrappedObject) const;
   bool  isExecutable(QUrlInfo* theWrappedObject) const;
   bool  isFile(QUrlInfo* theWrappedObject) const;
   bool  isReadable(QUrlInfo* theWrappedObject) const;
   bool  isSymLink(QUrlInfo* theWrappedObject) const;
   bool  isValid(QUrlInfo* theWrappedObject) const;
   bool  isWritable(QUrlInfo* theWrappedObject) const;
   QDateTime  lastModified(QUrlInfo* theWrappedObject) const;
   QDateTime  lastRead(QUrlInfo* theWrappedObject) const;
   bool  static_QUrlInfo_lessThan(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy);
   QString  name(QUrlInfo* theWrappedObject) const;
   bool  operator_equal(QUrlInfo* theWrappedObject, const QUrlInfo&  i) const;
   QString  owner(QUrlInfo* theWrappedObject) const;
   int  permissions(QUrlInfo* theWrappedObject) const;
   void setDir(QUrlInfo* theWrappedObject, bool  b);
   void setFile(QUrlInfo* theWrappedObject, bool  b);
   void setGroup(QUrlInfo* theWrappedObject, const QString&  s);
   void setLastModified(QUrlInfo* theWrappedObject, const QDateTime&  dt);
   void setLastRead(QUrlInfo* theWrappedObject, const QDateTime&  dt);
   void setName(QUrlInfo* theWrappedObject, const QString&  name);
   void setOwner(QUrlInfo* theWrappedObject, const QString&  s);
   void setPermissions(QUrlInfo* theWrappedObject, int  p);
   void setReadable(QUrlInfo* theWrappedObject, bool  b);
   void setSize(QUrlInfo* theWrappedObject, qint64  size);
   void setSymLink(QUrlInfo* theWrappedObject, bool  b);
   void setWritable(QUrlInfo* theWrappedObject, bool  b);
   qint64  size(QUrlInfo* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QURLINFO_H
