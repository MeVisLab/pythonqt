#include "PythonQtWrapper_QSystemTrayIcon.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qmenu.h>
#include <qobject.h>
#include <qrect.h>
#include <qsystemtrayicon.h>

QSystemTrayIcon* PythonQtWrapper_QSystemTrayIcon::new_QSystemTrayIcon(QObject*  parent)
{ 
return new QSystemTrayIcon(parent); }

QSystemTrayIcon* PythonQtWrapper_QSystemTrayIcon::new_QSystemTrayIcon(const QIcon&  icon, QObject*  parent)
{ 
return new QSystemTrayIcon(icon, parent); }

QMenu*  PythonQtWrapper_QSystemTrayIcon::contextMenu(QSystemTrayIcon* theWrappedObject) const
{
return theWrappedObject->contextMenu();
}

QRect  PythonQtWrapper_QSystemTrayIcon::geometry(QSystemTrayIcon* theWrappedObject) const
{
return theWrappedObject->geometry();
}

QIcon  PythonQtWrapper_QSystemTrayIcon::icon(QSystemTrayIcon* theWrappedObject) const
{
return theWrappedObject->icon();
}

bool  PythonQtWrapper_QSystemTrayIcon::static_QSystemTrayIcon_isSystemTrayAvailable()
{
return QSystemTrayIcon::isSystemTrayAvailable();
}

bool  PythonQtWrapper_QSystemTrayIcon::isVisible(QSystemTrayIcon* theWrappedObject) const
{
return theWrappedObject->isVisible();
}

void PythonQtWrapper_QSystemTrayIcon::setContextMenu(QSystemTrayIcon* theWrappedObject, QMenu*  menu)
{
theWrappedObject->setContextMenu(menu);
}

void PythonQtWrapper_QSystemTrayIcon::setIcon(QSystemTrayIcon* theWrappedObject, const QIcon&  icon)
{
theWrappedObject->setIcon(icon);
}

void PythonQtWrapper_QSystemTrayIcon::setToolTip(QSystemTrayIcon* theWrappedObject, const QString&  tip)
{
theWrappedObject->setToolTip(tip);
}

void PythonQtWrapper_QSystemTrayIcon::showMessage(QSystemTrayIcon* theWrappedObject, const QString&  title, const QString&  msg, QSystemTrayIcon::MessageIcon  icon, int  msecs)
{
theWrappedObject->showMessage(title, msg, icon, msecs);
}

bool  PythonQtWrapper_QSystemTrayIcon::static_QSystemTrayIcon_supportsMessages()
{
return QSystemTrayIcon::supportsMessages();
}

QString  PythonQtWrapper_QSystemTrayIcon::toolTip(QSystemTrayIcon* theWrappedObject) const
{
return theWrappedObject->toolTip();
}

