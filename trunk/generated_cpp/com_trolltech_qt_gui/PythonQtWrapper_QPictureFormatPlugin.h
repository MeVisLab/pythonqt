#ifndef PYTHONQTWRAPPER_QPICTUREFORMATPLUGIN_H
#define PYTHONQTWRAPPER_QPICTUREFORMATPLUGIN_H

#include <qpictureformatplugin.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpicture.h>
#include <qstringlist.h>

class PythonQtShell_QPictureFormatPlugin : public QPictureFormatPlugin
{
public:
    PythonQtShell_QPictureFormatPlugin(QObject*  parent = 0):QPictureFormatPlugin(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  installIOHandler(const QString&  format);
virtual QStringList  keys() const;
virtual bool  loadPicture(const QString&  format, const QString&  filename, QPicture*  pic);
virtual bool  savePicture(const QString&  format, const QString&  filename, const QPicture&  pic);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPictureFormatPlugin : public QPictureFormatPlugin
{ public:
inline bool  promoted_loadPicture(const QString&  format, const QString&  filename, QPicture*  pic) { return QPictureFormatPlugin::loadPicture(format, filename, pic); }
inline bool  promoted_savePicture(const QString&  format, const QString&  filename, const QPicture&  pic) { return QPictureFormatPlugin::savePicture(format, filename, pic); }
};

class PythonQtWrapper_QPictureFormatPlugin : public QObject
{ Q_OBJECT
public:
public slots:
QPictureFormatPlugin* new_QPictureFormatPlugin(QObject*  parent = 0);
void delete_QPictureFormatPlugin(QPictureFormatPlugin* obj) { delete obj; } 
   bool  loadPicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, QPicture*  pic);
   bool  savePicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, const QPicture&  pic);
};

#endif // PYTHONQTWRAPPER_QPICTUREFORMATPLUGIN_H
