#ifndef PYTHONQTWRAPPER_QIMAGEREADER_H
#define PYTHONQTWRAPPER_QIMAGEREADER_H

#include <qimagereader.h>
#include <QObject>

#include <PythonQt.h>

#include <QColor>
#include <QImage>
#include <QRect>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qimage.h>
#include <qimagereader.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qrect.h>
#include <qsize.h>
#include <qstringlist.h>

class PythonQtWrapper_QImageReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageReaderError )
enum ImageReaderError{
  UnknownError = QImageReader::UnknownError,   FileNotFoundError = QImageReader::FileNotFoundError,   DeviceError = QImageReader::DeviceError,   UnsupportedFormatError = QImageReader::UnsupportedFormatError,   InvalidDataError = QImageReader::InvalidDataError};
public slots:
QImageReader* new_QImageReader();
QImageReader* new_QImageReader(QIODevice*  device, const QByteArray&  format = QByteArray());
QImageReader* new_QImageReader(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QImageReader(QImageReader* obj) { delete obj; } 
   QString  fileName(QImageReader* theWrappedObject) const;
   int  nextImageDelay(QImageReader* theWrappedObject) const;
   QRect  clipRect(QImageReader* theWrappedObject) const;
   QList<QByteArray >  static_QImageReader_supportedImageFormats();
   bool  supportsOption(QImageReader* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   int  currentImageNumber(QImageReader* theWrappedObject) const;
   QByteArray  format(QImageReader* theWrappedObject) const;
   QRect  scaledClipRect(QImageReader* theWrappedObject) const;
   void setDevice(QImageReader* theWrappedObject, QIODevice*  device);
   QImageReader::ImageReaderError  error(QImageReader* theWrappedObject) const;
   int  quality(QImageReader* theWrappedObject) const;
   QSize  size(QImageReader* theWrappedObject) const;
   QString  errorString(QImageReader* theWrappedObject) const;
   bool  jumpToNextImage(QImageReader* theWrappedObject);
   QString  text(QImageReader* theWrappedObject, const QString&  key) const;
   void setFormat(QImageReader* theWrappedObject, const QByteArray&  format);
   void setScaledClipRect(QImageReader* theWrappedObject, const QRect&  rect);
   void setQuality(QImageReader* theWrappedObject, int  quality);
   QByteArray  static_QImageReader_imageFormat(const QString&  fileName);
   void setBackgroundColor(QImageReader* theWrappedObject, const QColor&  color);
   void setFileName(QImageReader* theWrappedObject, const QString&  fileName);
   QSize  scaledSize(QImageReader* theWrappedObject) const;
   int  loopCount(QImageReader* theWrappedObject) const;
   QByteArray  static_QImageReader_imageFormat(QIODevice*  device);
   QIODevice*  device(QImageReader* theWrappedObject) const;
   QRect  currentImageRect(QImageReader* theWrappedObject) const;
   void setClipRect(QImageReader* theWrappedObject, const QRect&  rect);
   bool  canRead(QImageReader* theWrappedObject) const;
   bool  jumpToImage(QImageReader* theWrappedObject, int  imageNumber);
   void setScaledSize(QImageReader* theWrappedObject, const QSize&  size);
   int  imageCount(QImageReader* theWrappedObject) const;
   QImage  read(QImageReader* theWrappedObject);
   QColor  backgroundColor(QImageReader* theWrappedObject) const;
   bool  supportsAnimation(QImageReader* theWrappedObject) const;
   QStringList  textKeys(QImageReader* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QIMAGEREADER_H
