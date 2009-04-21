#ifndef PYTHONQTWRAPPER_QIMAGEWRITER_H
#define PYTHONQTWRAPPER_QIMAGEWRITER_H

#include <qimagewriter.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qimage.h>
#include <qimagewriter.h>
#include <qiodevice.h>
#include <qlist.h>

class PythonQtWrapper_QImageWriter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageWriterError )
enum ImageWriterError{
  UnknownError = QImageWriter::UnknownError,   DeviceError = QImageWriter::DeviceError,   UnsupportedFormatError = QImageWriter::UnsupportedFormatError};
public slots:
QImageWriter* new_QImageWriter();
QImageWriter* new_QImageWriter(QIODevice*  device, const QByteArray&  format);
QImageWriter* new_QImageWriter(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QImageWriter(QImageWriter* obj) { delete obj; } 
   QIODevice*  device(QImageWriter* theWrappedObject) const;
   QList<QByteArray >  static_QImageWriter_supportedImageFormats();
   QByteArray  format(QImageWriter* theWrappedObject) const;
   bool  supportsOption(QImageWriter* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   void setFormat(QImageWriter* theWrappedObject, const QByteArray&  format);
   QImageWriter::ImageWriterError  error(QImageWriter* theWrappedObject) const;
   QString  fileName(QImageWriter* theWrappedObject) const;
   void setDevice(QImageWriter* theWrappedObject, QIODevice*  device);
   void setText(QImageWriter* theWrappedObject, const QString&  key, const QString&  text);
   int  quality(QImageWriter* theWrappedObject) const;
   float  gamma(QImageWriter* theWrappedObject) const;
   void setGamma(QImageWriter* theWrappedObject, float  gamma);
   int  compression(QImageWriter* theWrappedObject) const;
   bool  canWrite(QImageWriter* theWrappedObject) const;
   QString  errorString(QImageWriter* theWrappedObject) const;
   bool  write(QImageWriter* theWrappedObject, const QImage&  image);
   void setQuality(QImageWriter* theWrappedObject, int  quality);
   void setFileName(QImageWriter* theWrappedObject, const QString&  fileName);
   void setCompression(QImageWriter* theWrappedObject, int  compression);
};

#endif // PYTHONQTWRAPPER_QIMAGEWRITER_H
