#ifndef PYTHONQTWRAPPER_QPICTUREFORMATPLUGIN_H
#define PYTHONQTWRAPPER_QPICTUREFORMATPLUGIN_H

#include <qpictureformatplugin.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpicture.h>
#include <qstringlist.h>

class PythonQtWrapper_QPictureFormatPlugin : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QPictureFormatPlugin(QPictureFormatPlugin* obj) { delete obj; } 
   bool  installIOHandler(QPictureFormatPlugin* theWrappedObject, const QString&  format);
   QStringList  keys(QPictureFormatPlugin* theWrappedObject) const;
   bool  loadPicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, QPicture*  pic);
   bool  savePicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, const QPicture&  pic);
};

#endif // PYTHONQTWRAPPER_QPICTUREFORMATPLUGIN_H
