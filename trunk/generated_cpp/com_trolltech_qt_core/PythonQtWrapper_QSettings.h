#ifndef PYTHONQTWRAPPER_QSETTINGS_H
#define PYTHONQTWRAPPER_QSETTINGS_H

#include <qsettings.h>
#include <QObject>

#include <PythonQt.h>

#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsettings.h>
#include <qstringlist.h>

class PythonQtShell_QSettings : public QSettings
{
public:
    PythonQtShell_QSettings(QObject*  parent = 0):QSettings(parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0):QSettings(format, scope, organization, application, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0):QSettings(scope, organization, application, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = 0):QSettings(fileName, format, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = 0):QSettings(organization, application, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSettings : public QSettings
{ public:
inline bool  promoted_event(QEvent*  event) { return QSettings::event(event); }
};

class PythonQtWrapper_QSettings : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Format Status Scope )
enum Format{
  NativeFormat = QSettings::NativeFormat,   IniFormat = QSettings::IniFormat,   InvalidFormat = QSettings::InvalidFormat,   CustomFormat1 = QSettings::CustomFormat1,   CustomFormat2 = QSettings::CustomFormat2,   CustomFormat3 = QSettings::CustomFormat3,   CustomFormat4 = QSettings::CustomFormat4,   CustomFormat5 = QSettings::CustomFormat5,   CustomFormat6 = QSettings::CustomFormat6,   CustomFormat7 = QSettings::CustomFormat7,   CustomFormat8 = QSettings::CustomFormat8,   CustomFormat9 = QSettings::CustomFormat9,   CustomFormat10 = QSettings::CustomFormat10,   CustomFormat11 = QSettings::CustomFormat11,   CustomFormat12 = QSettings::CustomFormat12,   CustomFormat13 = QSettings::CustomFormat13,   CustomFormat14 = QSettings::CustomFormat14,   CustomFormat15 = QSettings::CustomFormat15,   CustomFormat16 = QSettings::CustomFormat16};
enum Status{
  NoError = QSettings::NoError,   AccessError = QSettings::AccessError,   FormatError = QSettings::FormatError};
enum Scope{
  UserScope = QSettings::UserScope,   SystemScope = QSettings::SystemScope};
public slots:
QSettings* new_QSettings(QObject*  parent = 0);
QSettings* new_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0);
QSettings* new_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0);
QSettings* new_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = 0);
QSettings* new_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = 0);
void delete_QSettings(QSettings* obj) { delete obj; } 
   bool  fallbacksEnabled(QSettings* theWrappedObject) const;
   QString  fileName(QSettings* theWrappedObject) const;
   void sync(QSettings* theWrappedObject);
   QSettings::Format  format(QSettings* theWrappedObject) const;
   bool  contains(QSettings* theWrappedObject, const QString&  key) const;
   void endArray(QSettings* theWrappedObject);
   QString  applicationName(QSettings* theWrappedObject) const;
   QString  group(QSettings* theWrappedObject) const;
   QSettings::Scope  scope(QSettings* theWrappedObject) const;
   void static_QSettings_setPath(QSettings::Format  format, QSettings::Scope  scope, const QString&  path);
   bool  event(QSettings* theWrappedObject, QEvent*  event);
   QSettings::Format  static_QSettings_defaultFormat();
   void setFallbacksEnabled(QSettings* theWrappedObject, bool  b);
   int  beginReadArray(QSettings* theWrappedObject, const QString&  prefix);
   bool  isWritable(QSettings* theWrappedObject) const;
   void static_QSettings_setDefaultFormat(QSettings::Format  format);
   QStringList  childGroups(QSettings* theWrappedObject) const;
   void setArrayIndex(QSettings* theWrappedObject, int  i);
   void setValue(QSettings* theWrappedObject, const QString&  key, const QVariant&  value);
   QSettings::Status  status(QSettings* theWrappedObject) const;
   void endGroup(QSettings* theWrappedObject);
   void remove(QSettings* theWrappedObject, const QString&  key);
   QVariant  value(QSettings* theWrappedObject, const QString&  key, const QVariant&  defaultValue = QVariant()) const;
   QStringList  allKeys(QSettings* theWrappedObject) const;
   void beginWriteArray(QSettings* theWrappedObject, const QString&  prefix, int  size = -1);
   void clear(QSettings* theWrappedObject);
   QStringList  childKeys(QSettings* theWrappedObject) const;
   QString  organizationName(QSettings* theWrappedObject) const;
   void beginGroup(QSettings* theWrappedObject, const QString&  prefix);
};

#endif // PYTHONQTWRAPPER_QSETTINGS_H
