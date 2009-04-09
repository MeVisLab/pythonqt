#ifndef PYTHONQTWRAPPER_QTEMPORARYFILE_H
#define PYTHONQTWRAPPER_QTEMPORARYFILE_H

#include <qtemporaryfile.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfile.h>
#include <qlist.h>
#include <qobject.h>
#include <qtemporaryfile.h>

class PythonQtWrapper_QTemporaryFile : public QObject
{ Q_OBJECT
public:
public slots:
QTemporaryFile* new_QTemporaryFile();
QTemporaryFile* new_QTemporaryFile(QObject*  parent);
QTemporaryFile* new_QTemporaryFile(const QString&  templateName);
QTemporaryFile* new_QTemporaryFile(const QString&  templateName, QObject*  parent);
void delete_QTemporaryFile(QTemporaryFile* obj) { delete obj; } 
   bool  autoRemove(QTemporaryFile* theWrappedObject) const;
   QTemporaryFile*  static_QTemporaryFile_createLocalFile(QFile&  file);
   QTemporaryFile*  static_QTemporaryFile_createLocalFile(const QString&  fileName);
   QAbstractFileEngine*  fileEngine(QTemporaryFile* theWrappedObject) const;
   QString  fileName(QTemporaryFile* theWrappedObject) const;
   QString  fileTemplate(QTemporaryFile* theWrappedObject) const;
   bool  open(QTemporaryFile* theWrappedObject);
   void setAutoRemove(QTemporaryFile* theWrappedObject, bool  b);
   void setFileTemplate(QTemporaryFile* theWrappedObject, const QString&  name);
};

#endif // PYTHONQTWRAPPER_QTEMPORARYFILE_H
