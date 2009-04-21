#ifndef PYTHONQTWRAPPER_QPICTUREIO_H
#define PYTHONQTWRAPPER_QPICTUREIO_H

#include <qpicture.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qpicture.h>

class PythonQtWrapper_QPictureIO : public QObject
{ Q_OBJECT
public:
public slots:
QPictureIO* new_QPictureIO();
QPictureIO* new_QPictureIO(QIODevice*  ioDevice, const char*  format);
QPictureIO* new_QPictureIO(const QString&  fileName, const char*  format);
void delete_QPictureIO(QPictureIO* obj) { delete obj; } 
   const char*  format(QPictureIO* theWrappedObject) const;
   QByteArray  static_QPictureIO_pictureFormat(QIODevice*  arg__1);
   void setDescription(QPictureIO* theWrappedObject, const QString&  arg__1);
   int  status(QPictureIO* theWrappedObject) const;
   QString  description(QPictureIO* theWrappedObject) const;
   QList<QByteArray >  static_QPictureIO_outputFormats();
   void setGamma(QPictureIO* theWrappedObject, float  arg__1);
   QList<QByteArray >  static_QPictureIO_inputFormats();
   const char*  parameters(QPictureIO* theWrappedObject) const;
   int  quality(QPictureIO* theWrappedObject) const;
   void setParameters(QPictureIO* theWrappedObject, const char*  arg__1);
   QString  fileName(QPictureIO* theWrappedObject) const;
   void setFormat(QPictureIO* theWrappedObject, const char*  arg__1);
   const QPicture&  picture(QPictureIO* theWrappedObject) const;
   QByteArray  static_QPictureIO_pictureFormat(const QString&  fileName);
   bool  read(QPictureIO* theWrappedObject);
   float  gamma(QPictureIO* theWrappedObject) const;
   void setFileName(QPictureIO* theWrappedObject, const QString&  arg__1);
   bool  write(QPictureIO* theWrappedObject);
   void setIODevice(QPictureIO* theWrappedObject, QIODevice*  arg__1);
   void setQuality(QPictureIO* theWrappedObject, int  arg__1);
   QIODevice*  ioDevice(QPictureIO* theWrappedObject) const;
   void setStatus(QPictureIO* theWrappedObject, int  arg__1);
   void setPicture(QPictureIO* theWrappedObject, const QPicture&  arg__1);
};

#endif // PYTHONQTWRAPPER_QPICTUREIO_H
