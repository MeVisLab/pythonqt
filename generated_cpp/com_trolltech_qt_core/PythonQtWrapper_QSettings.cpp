#include "PythonQtWrapper_QSettings.h"

#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsettings.h>
#include <qstringlist.h>

QSettings* PythonQtWrapper_QSettings::new_QSettings(QObject*  parent)
{ 
return new QSettings(parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application, QObject*  parent)
{ 
return new QSettings(format, scope, organization, application, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application, QObject*  parent)
{ 
return new QSettings(scope, organization, application, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent)
{ 
return new QSettings(fileName, format, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(const QString&  organization, const QString&  application, QObject*  parent)
{ 
return new QSettings(organization, application, parent); }

QStringList  PythonQtWrapper_QSettings::allKeys(QSettings* theWrappedObject) const
{
return theWrappedObject->allKeys();
}

QString  PythonQtWrapper_QSettings::applicationName(QSettings* theWrappedObject) const
{
return theWrappedObject->applicationName();
}

void PythonQtWrapper_QSettings::beginGroup(QSettings* theWrappedObject, const QString&  prefix)
{
theWrappedObject->beginGroup(prefix);
}

int  PythonQtWrapper_QSettings::beginReadArray(QSettings* theWrappedObject, const QString&  prefix)
{
return theWrappedObject->beginReadArray(prefix);
}

void PythonQtWrapper_QSettings::beginWriteArray(QSettings* theWrappedObject, const QString&  prefix, int  size)
{
theWrappedObject->beginWriteArray(prefix, size);
}

QStringList  PythonQtWrapper_QSettings::childGroups(QSettings* theWrappedObject) const
{
return theWrappedObject->childGroups();
}

QStringList  PythonQtWrapper_QSettings::childKeys(QSettings* theWrappedObject) const
{
return theWrappedObject->childKeys();
}

void PythonQtWrapper_QSettings::clear(QSettings* theWrappedObject)
{
theWrappedObject->clear();
}

bool  PythonQtWrapper_QSettings::contains(QSettings* theWrappedObject, const QString&  key) const
{
return theWrappedObject->contains(key);
}

QSettings::Format  PythonQtWrapper_QSettings::static_QSettings_defaultFormat()
{
return QSettings::defaultFormat();
}

void PythonQtWrapper_QSettings::endArray(QSettings* theWrappedObject)
{
theWrappedObject->endArray();
}

void PythonQtWrapper_QSettings::endGroup(QSettings* theWrappedObject)
{
theWrappedObject->endGroup();
}

bool  PythonQtWrapper_QSettings::fallbacksEnabled(QSettings* theWrappedObject) const
{
return theWrappedObject->fallbacksEnabled();
}

QString  PythonQtWrapper_QSettings::fileName(QSettings* theWrappedObject) const
{
return theWrappedObject->fileName();
}

QSettings::Format  PythonQtWrapper_QSettings::format(QSettings* theWrappedObject) const
{
return theWrappedObject->format();
}

QString  PythonQtWrapper_QSettings::group(QSettings* theWrappedObject) const
{
return theWrappedObject->group();
}

bool  PythonQtWrapper_QSettings::isWritable(QSettings* theWrappedObject) const
{
return theWrappedObject->isWritable();
}

QString  PythonQtWrapper_QSettings::organizationName(QSettings* theWrappedObject) const
{
return theWrappedObject->organizationName();
}

void PythonQtWrapper_QSettings::remove(QSettings* theWrappedObject, const QString&  key)
{
theWrappedObject->remove(key);
}

QSettings::Scope  PythonQtWrapper_QSettings::scope(QSettings* theWrappedObject) const
{
return theWrappedObject->scope();
}

void PythonQtWrapper_QSettings::setArrayIndex(QSettings* theWrappedObject, int  i)
{
theWrappedObject->setArrayIndex(i);
}

void PythonQtWrapper_QSettings::static_QSettings_setDefaultFormat(QSettings::Format  format)
{
QSettings::setDefaultFormat(format);
}

void PythonQtWrapper_QSettings::setFallbacksEnabled(QSettings* theWrappedObject, bool  b)
{
theWrappedObject->setFallbacksEnabled(b);
}

void PythonQtWrapper_QSettings::static_QSettings_setPath(QSettings::Format  format, QSettings::Scope  scope, const QString&  path)
{
QSettings::setPath(format, scope, path);
}

void PythonQtWrapper_QSettings::setValue(QSettings* theWrappedObject, const QString&  key, const QVariant&  value)
{
theWrappedObject->setValue(key, value);
}

QSettings::Status  PythonQtWrapper_QSettings::status(QSettings* theWrappedObject) const
{
return theWrappedObject->status();
}

void PythonQtWrapper_QSettings::sync(QSettings* theWrappedObject)
{
theWrappedObject->sync();
}

QVariant  PythonQtWrapper_QSettings::value(QSettings* theWrappedObject, const QString&  key, const QVariant&  defaultValue) const
{
return theWrappedObject->value(key, defaultValue);
}

