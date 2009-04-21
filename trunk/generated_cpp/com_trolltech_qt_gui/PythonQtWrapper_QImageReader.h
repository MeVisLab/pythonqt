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
   void setScaledClipRect(QImageReader* theWrappedObject, const QRect&  rect);
   QByteArray  static_QImageReader_imageFormat(QIODevice*  device);
   QSize  size(QImageReader* theWrappedObject) const;
   void setScaledSize(QImageReader* theWrappedObject, const QSize&  size);
   QRect  currentImageRect(QImageReader* theWrappedObject) const;
   QSize  scaledSize(QImageReader* theWrappedObject) const;
   QStringList  textKeys(QImageReader* theWrappedObject) const;
   int  loopCount(QImageReader* theWrappedObject) const;
   int  quality(QImageReader* theWrappedObject) const;
   bool  jumpToImage(QImageReader* theWrappedObject, int  imageNumber);
   void setFormat(QImageReader* theWrappedObject, const QByteArray&  format);
   QIODevice*  device(QImageReader* theWrappedObject) const;
   int  imageCount(QImageReader* theWrappedObject) const;
   int  nextImageDelay(QImageReader* theWrappedObject) const;
   void setClipRect(QImageReader* theWrappedObject, const QRect&  rect);
   QList<QByteArray >  static_QImageReader_supportedImageFormats();
   QString  text(QImageReader* theWrappedObject, const QString&  key) const;
   QByteArray  format(QImageReader* theWrappedObject) const;
   QImageReader::ImageReaderError  error(QImageReader* theWrappedObject) const;
   void setFileName(QImageReader* theWrappedObject, const QString&  fileName);
   bool  supportsOption(QImageReader* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QByteArray  static_QImageReader_imageFormat(const QString&  fileName);
   QColor  backgroundColor(QImageReader* theWrappedObject) const;
   QString  fileName(QImageReader* theWrappedObject) const;
   QImage  read(QImageReader* theWrappedObject);
   bool  supportsAnimation(QImageReader* theWrappedObject) const;
   bool  canRead(QImageReader* theWrappedObject) const;
   QRect  clipRect(QImageReader* theWrappedObject) const;
   void setQuality(QImageReader* theWrappedObject, int  quality);
   QRect  scaledClipRect(QImageReader* theWrappedObject) const;
   int  currentImageNumber(QImageReader* theWrappedObject) const;
   void setBackgroundColor(QImageReader* theWrappedObject, const QColor&  color);
   void setDevice(QImageReader* theWrappedObject, QIODevice*  device);
   QString  errorString(QImageReader* theWrappedObject) const;
   bool  jumpToNextImage(QImageReader* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QIMAGEREADER_H
