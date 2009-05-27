#include "PythonQtWrapper_QDesktopServices.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qobject.h>
#include <qurl.h>

QDesktopServices* PythonQtWrapper_QDesktopServices::new_QDesktopServices()
{ 
return new PythonQtShell_QDesktopServices(); }

bool  PythonQtWrapper_QDesktopServices::static_QDesktopServices_openUrl(const QUrl&  url)
{
  return (QDesktopServices::openUrl(url));
}

void PythonQtWrapper_QDesktopServices::static_QDesktopServices_unsetUrlHandler(const QString&  scheme)
{
  (QDesktopServices::unsetUrlHandler(scheme));
}

QString  PythonQtWrapper_QDesktopServices::static_QDesktopServices_storageLocation(QDesktopServices::StandardLocation  type)
{
  return (QDesktopServices::storageLocation(type));
}

QString  PythonQtWrapper_QDesktopServices::static_QDesktopServices_displayName(QDesktopServices::StandardLocation  type)
{
  return (QDesktopServices::displayName(type));
}

void PythonQtWrapper_QDesktopServices::static_QDesktopServices_setUrlHandler(const QString&  scheme, QObject*  receiver, const char*  method)
{
  (QDesktopServices::setUrlHandler(scheme, receiver, method));
}

