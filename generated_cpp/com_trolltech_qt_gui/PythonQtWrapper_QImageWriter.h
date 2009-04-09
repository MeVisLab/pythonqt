#ifndef PYTHONQTWRAPPER_QIMAGEWRITER_H
#define PYTHONQTWRAPPER_QIMAGEWRITER_H

#include <qimagewriter.h>
#include <QObject>

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
   bool  canWrite(QImageWriter* theWrappedObject) const;
   int  compression(QImageWriter* theWrappedObject) const;
   QIODevice*  device(QImageWriter* theWrappedObject) const;
   QImageWriter::ImageWriterError  error(QImageWriter* theWrappedObject) const;
   QString  errorString(QImageWriter* theWrappedObject) const;
   QString  fileName(QImageWriter* theWrappedObject) const;
   QByteArray  format(QImageWriter* theWrappedObject) const;
   float  gamma(QImageWriter* theWrappedObject) const;
   int  quality(QImageWriter* theWrappedObject) const;
   void setCompression(QImageWriter* theWrappedObject, int  compression);
   void setDevice(QImageWriter* theWrappedObject, QIODevice*  device);
   void setFileName(QImageWriter* theWrappedObject, const QString&  fileName);
   void setFormat(QImageWriter* theWrappedObject, const QByteArray&  format);
   void setGamma(QImageWriter* theWrappedObject, float  gamma);
   void setQuality(QImageWriter* theWrappedObject, int  quality);
   void setText(QImageWriter* theWrappedObject, const QString&  key, const QString&  text);
   QList<QByteArray >  static_QImageWriter_supportedImageFormats();
   bool  supportsOption(QImageWriter* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   bool  write(QImageWriter* theWrappedObject, const QImage&  image);
};

#endif // PYTHONQTWRAPPER_QIMAGEWRITER_H
