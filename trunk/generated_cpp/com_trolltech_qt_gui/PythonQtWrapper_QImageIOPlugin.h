#ifndef PYTHONQTWRAPPER_QIMAGEIOPLUGIN_H
#define PYTHONQTWRAPPER_QIMAGEIOPLUGIN_H

#include <qimageiohandler.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qimageiohandler.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>

class PythonQtWrapper_QImageIOPlugin : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Capability )
enum Capability{
  CanRead = QImageIOPlugin::CanRead,   CanWrite = QImageIOPlugin::CanWrite,   CanReadIncremental = QImageIOPlugin::CanReadIncremental};
public slots:
void delete_QImageIOPlugin(QImageIOPlugin* obj) { delete obj; } 
   QImageIOPlugin::Capabilities  capabilities(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format) const;
   QImageIOHandler*  create(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format = QByteArray()) const;
   QStringList  keys(QImageIOPlugin* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QIMAGEIOPLUGIN_H
