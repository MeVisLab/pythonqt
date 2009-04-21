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
   QByteArray  format(QImageWriter* theWrappedObject) const;
   bool  supportsOption(QImageWriter* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QString  fileName(QImageWriter* theWrappedObject) const;
   QIODevice*  device(QImageWriter* theWrappedObject) const;
   QList<QByteArray >  static_QImageWriter_supportedImageFormats();
   float  gamma(QImageWriter* theWrappedObject) const;
   void setGamma(QImageWriter* theWrappedObject, float  gamma);
   void setFormat(QImageWriter* theWrappedObject, const QByteArray&  format);
   bool  canWrite(QImageWriter* theWrappedObject) const;
   QImageWriter::ImageWriterError  error(QImageWriter* theWrappedObject) const;
   void setQuality(QImageWriter* theWrappedObject, int  quality);
   void setDevice(QImageWriter* theWrappedObject, QIODevice*  device);
   void setText(QImageWriter* theWrappedObject, const QString&  key, const QString&  text);
   int  quality(QImageWriter* theWrappedObject) const;
   int  compression(QImageWriter* theWrappedObject) const;
   QString  errorString(QImageWriter* theWrappedObject) const;
   void setFileName(QImageWriter* theWrappedObject, const QString&  fileName);
   void setCompression(QImageWriter* theWrappedObject, int  compression);
   bool  write(QImageWriter* theWrappedObject, const QImage&  image);
};

#endif // PYTHONQTWRAPPER_QIMAGEWRITER_H
