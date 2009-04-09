#include "PythonQtWrapper_QCoreApplication.h"

#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qtranslator.h>

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_addLibraryPath(const QString&  arg__1)
{
QCoreApplication::addLibraryPath(arg__1);
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationDirPath()
{
return QCoreApplication::applicationDirPath();
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationFilePath()
{
return QCoreApplication::applicationFilePath();
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationName()
{
return QCoreApplication::applicationName();
}

qint64  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationPid()
{
return QCoreApplication::applicationPid();
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationVersion()
{
return QCoreApplication::applicationVersion();
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_closingDown()
{
return QCoreApplication::closingDown();
}

int  PythonQtWrapper_QCoreApplication::static_QCoreApplication_exec()
{
return QCoreApplication::exec();
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_exit(int  retcode)
{
QCoreApplication::exit(retcode);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_flush()
{
QCoreApplication::flush();
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_hasPendingEvents()
{
return QCoreApplication::hasPendingEvents();
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_installTranslator(QTranslator*  messageFile)
{
QCoreApplication::installTranslator(messageFile);
}

QCoreApplication*  PythonQtWrapper_QCoreApplication::static_QCoreApplication_instance()
{
return QCoreApplication::instance();
}

QStringList  PythonQtWrapper_QCoreApplication::static_QCoreApplication_libraryPaths()
{
return QCoreApplication::libraryPaths();
}

bool  PythonQtWrapper_QCoreApplication::notify(QCoreApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2)
{
return theWrappedObject->notify(arg__1, arg__2);
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_organizationDomain()
{
return QCoreApplication::organizationDomain();
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_organizationName()
{
return QCoreApplication::organizationName();
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_postEvent(QObject*  receiver, QEvent*  event)
{
QCoreApplication::postEvent(receiver, event);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_postEvent(QObject*  receiver, QEvent*  event, int  priority)
{
QCoreApplication::postEvent(receiver, event, priority);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags)
{
QCoreApplication::processEvents(flags);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags, int  maxtime)
{
QCoreApplication::processEvents(flags, maxtime);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_removeLibraryPath(const QString&  arg__1)
{
QCoreApplication::removeLibraryPath(arg__1);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_removePostedEvents(QObject*  receiver)
{
QCoreApplication::removePostedEvents(receiver);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_removePostedEvents(QObject*  receiver, int  eventType)
{
QCoreApplication::removePostedEvents(receiver, eventType);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_removeTranslator(QTranslator*  messageFile)
{
QCoreApplication::removeTranslator(messageFile);
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_sendEvent(QObject*  receiver, QEvent*  event)
{
return QCoreApplication::sendEvent(receiver, event);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_sendPostedEvents()
{
QCoreApplication::sendPostedEvents();
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_sendPostedEvents(QObject*  receiver, int  event_type)
{
QCoreApplication::sendPostedEvents(receiver, event_type);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setApplicationName(const QString&  application)
{
QCoreApplication::setApplicationName(application);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setApplicationVersion(const QString&  version)
{
QCoreApplication::setApplicationVersion(version);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setAttribute(Qt::ApplicationAttribute  attribute, bool  on)
{
QCoreApplication::setAttribute(attribute, on);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setLibraryPaths(const QStringList&  arg__1)
{
QCoreApplication::setLibraryPaths(arg__1);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setOrganizationDomain(const QString&  orgDomain)
{
QCoreApplication::setOrganizationDomain(orgDomain);
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setOrganizationName(const QString&  orgName)
{
QCoreApplication::setOrganizationName(orgName);
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_startingUp()
{
return QCoreApplication::startingUp();
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_testAttribute(Qt::ApplicationAttribute  attribute)
{
return QCoreApplication::testAttribute(attribute);
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_translate(const char*  context, const char*  key, const char*  comment, QCoreApplication::Encoding  encoding)
{
return QCoreApplication::translate(context, key, comment, encoding);
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_translate(const char*  context, const char*  key, const char*  comment, QCoreApplication::Encoding  encoding, int  n)
{
return QCoreApplication::translate(context, key, comment, encoding, n);
}

