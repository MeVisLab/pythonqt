#include "PythonQtWrapper_QTemporaryFile.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfile.h>
#include <qlist.h>
#include <qobject.h>
#include <qtemporaryfile.h>

QTemporaryFile* PythonQtWrapper_QTemporaryFile::new_QTemporaryFile()
{ 
return new QTemporaryFile(); }

QTemporaryFile* PythonQtWrapper_QTemporaryFile::new_QTemporaryFile(QObject*  parent)
{ 
return new QTemporaryFile(parent); }

QTemporaryFile* PythonQtWrapper_QTemporaryFile::new_QTemporaryFile(const QString&  templateName)
{ 
return new QTemporaryFile(templateName); }

QTemporaryFile* PythonQtWrapper_QTemporaryFile::new_QTemporaryFile(const QString&  templateName, QObject*  parent)
{ 
return new QTemporaryFile(templateName, parent); }

bool  PythonQtWrapper_QTemporaryFile::autoRemove(QTemporaryFile* theWrappedObject) const
{
return theWrappedObject->autoRemove();
}

QTemporaryFile*  PythonQtWrapper_QTemporaryFile::static_QTemporaryFile_createLocalFile(QFile&  file)
{
return QTemporaryFile::createLocalFile(file);
}

QTemporaryFile*  PythonQtWrapper_QTemporaryFile::static_QTemporaryFile_createLocalFile(const QString&  fileName)
{
return QTemporaryFile::createLocalFile(fileName);
}

QAbstractFileEngine*  PythonQtWrapper_QTemporaryFile::fileEngine(QTemporaryFile* theWrappedObject) const
{
return theWrappedObject->fileEngine();
}

QString  PythonQtWrapper_QTemporaryFile::fileName(QTemporaryFile* theWrappedObject) const
{
return theWrappedObject->fileName();
}

QString  PythonQtWrapper_QTemporaryFile::fileTemplate(QTemporaryFile* theWrappedObject) const
{
return theWrappedObject->fileTemplate();
}

bool  PythonQtWrapper_QTemporaryFile::open(QTemporaryFile* theWrappedObject)
{
return theWrappedObject->open();
}

void PythonQtWrapper_QTemporaryFile::setAutoRemove(QTemporaryFile* theWrappedObject, bool  b)
{
theWrappedObject->setAutoRemove(b);
}

void PythonQtWrapper_QTemporaryFile::setFileTemplate(QTemporaryFile* theWrappedObject, const QString&  name)
{
theWrappedObject->setFileTemplate(name);
}

