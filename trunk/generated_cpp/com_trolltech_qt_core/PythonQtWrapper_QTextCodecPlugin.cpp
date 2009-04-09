#include "PythonQtWrapper_QTextCodecPlugin.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qtextcodec.h>

QList<QByteArray >  PythonQtWrapper_QTextCodecPlugin::aliases(QTextCodecPlugin* theWrappedObject) const
{
return theWrappedObject->aliases();
}

QTextCodec*  PythonQtWrapper_QTextCodecPlugin::createForMib(QTextCodecPlugin* theWrappedObject, int  mib)
{
return theWrappedObject->createForMib(mib);
}

QTextCodec*  PythonQtWrapper_QTextCodecPlugin::createForName(QTextCodecPlugin* theWrappedObject, const QByteArray&  name)
{
return theWrappedObject->createForName(name);
}

QList<int >  PythonQtWrapper_QTextCodecPlugin::mibEnums(QTextCodecPlugin* theWrappedObject) const
{
return theWrappedObject->mibEnums();
}

QList<QByteArray >  PythonQtWrapper_QTextCodecPlugin::names(QTextCodecPlugin* theWrappedObject) const
{
return theWrappedObject->names();
}

