#include "PythonQtWrapper_QImageIOPlugin.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qimageiohandler.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>

QImageIOPlugin::Capabilities  PythonQtWrapper_QImageIOPlugin::capabilities(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format) const
{
return theWrappedObject->capabilities(device, format);
}

QImageIOHandler*  PythonQtWrapper_QImageIOPlugin::create(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format) const
{
return theWrappedObject->create(device, format);
}

QStringList  PythonQtWrapper_QImageIOPlugin::keys(QImageIOPlugin* theWrappedObject) const
{
return theWrappedObject->keys();
}

