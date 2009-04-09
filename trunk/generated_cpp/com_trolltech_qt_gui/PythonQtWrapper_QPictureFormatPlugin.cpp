#include "PythonQtWrapper_QPictureFormatPlugin.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpicture.h>
#include <qstringlist.h>

bool  PythonQtWrapper_QPictureFormatPlugin::installIOHandler(QPictureFormatPlugin* theWrappedObject, const QString&  format)
{
return theWrappedObject->installIOHandler(format);
}

QStringList  PythonQtWrapper_QPictureFormatPlugin::keys(QPictureFormatPlugin* theWrappedObject) const
{
return theWrappedObject->keys();
}

bool  PythonQtWrapper_QPictureFormatPlugin::loadPicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, QPicture*  pic)
{
return theWrappedObject->loadPicture(format, filename, pic);
}

bool  PythonQtWrapper_QPictureFormatPlugin::savePicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, const QPicture&  pic)
{
return theWrappedObject->savePicture(format, filename, pic);
}

