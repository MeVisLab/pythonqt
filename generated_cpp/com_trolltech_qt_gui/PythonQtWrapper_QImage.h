#ifndef PYTHONQTWRAPPER_QIMAGE_H
#define PYTHONQTWRAPPER_QIMAGE_H

#include <qimage.h>
#include <QObject>

#include <PythonQt.h>

#include <QMatrix>
#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qtransform.h>
#include <qvector.h>

class PythonQtShell_QImage : public QImage
{
public:
    PythonQtShell_QImage():QImage(),_wrapper(NULL) {};
    PythonQtShell_QImage(const QImage&  arg__1):QImage(arg__1),_wrapper(NULL) {};
    PythonQtShell_QImage(const QSize&  size, QImage::Format  format):QImage(size, format),_wrapper(NULL) {};
    PythonQtShell_QImage(const QString&  fileName, const char*  format = 0):QImage(fileName, format),_wrapper(NULL) {};
    PythonQtShell_QImage(int  width, int  height, QImage::Format  format):QImage(width, height, format),_wrapper(NULL) {};

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QImage : public QImage
{ public:
inline int  metric(QPaintDevice::PaintDeviceMetric  metric) const { return QImage::metric(metric); }
};

class PythonQtWrapper_QImage : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InvertMode Format )
enum InvertMode{
  InvertRgb = QImage::InvertRgb,   InvertRgba = QImage::InvertRgba};
enum Format{
  Format_Invalid = QImage::Format_Invalid,   Format_Mono = QImage::Format_Mono,   Format_MonoLSB = QImage::Format_MonoLSB,   Format_Indexed8 = QImage::Format_Indexed8,   Format_RGB32 = QImage::Format_RGB32,   Format_ARGB32 = QImage::Format_ARGB32,   Format_ARGB32_Premultiplied = QImage::Format_ARGB32_Premultiplied,   Format_RGB16 = QImage::Format_RGB16,   Format_ARGB8565_Premultiplied = QImage::Format_ARGB8565_Premultiplied,   Format_RGB666 = QImage::Format_RGB666,   Format_ARGB6666_Premultiplied = QImage::Format_ARGB6666_Premultiplied,   Format_RGB555 = QImage::Format_RGB555,   Format_ARGB8555_Premultiplied = QImage::Format_ARGB8555_Premultiplied,   Format_RGB888 = QImage::Format_RGB888,   Format_RGB444 = QImage::Format_RGB444,   Format_ARGB4444_Premultiplied = QImage::Format_ARGB4444_Premultiplied,   NImageFormats = QImage::NImageFormats};
public slots:
QImage* new_QImage();
QImage* new_QImage(const QImage&  arg__1);
QImage* new_QImage(const QSize&  size, QImage::Format  format);
QImage* new_QImage(const QString&  fileName, const char*  format = 0);
QImage* new_QImage(int  width, int  height, QImage::Format  format);
void delete_QImage(QImage* obj) { delete obj; } 
   int  devType(QImage* theWrappedObject) const;
   QString  text(QImage* theWrappedObject, const QString&  key = QString()) const;
   bool  save(QImage* theWrappedObject, const QString&  fileName, const char*  format = 0, int  quality = -1) const;
   QImage  transformed(QImage* theWrappedObject, const QTransform&  matrix, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QImage  transformed(QImage* theWrappedObject, const QMatrix&  matrix, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   bool  valid(QImage* theWrappedObject, int  x, int  y) const;
   int  pixelIndex(QImage* theWrappedObject, int  x, int  y) const;
   QImage  createAlphaMask(QImage* theWrappedObject, Qt::ImageConversionFlags  flags = Qt::AutoColor) const;
   bool  isNull(QImage* theWrappedObject) const;
   QImage  copy(QImage* theWrappedObject, const QRect&  rect = QRect()) const;
   QImage  scaledToWidth(QImage* theWrappedObject, int  w, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   bool  load(QImage* theWrappedObject, const QString&  fileName, const char*  format = 0);
   int  width(QImage* theWrappedObject) const;
   int  dotsPerMeterY(QImage* theWrappedObject) const;
   unsigned int  pixel(QImage* theWrappedObject, int  x, int  y) const;
   QPoint  offset(QImage* theWrappedObject) const;
   void writeTo(QImage* theWrappedObject, QDataStream&  arg__1);
   bool  load(QImage* theWrappedObject, QIODevice*  device, const char*  format);
   void setPixel(QImage* theWrappedObject, int  x, int  y, uint  index_or_rgb);
   QImage::Format  format(QImage* theWrappedObject) const;
   QImage  static_QImage_fromData(const QByteArray&  data, const char*  format = 0);
   void setAlphaChannel(QImage* theWrappedObject, const QImage&  alphaChannel);
   int  height(QImage* theWrappedObject) const;
   void readFrom(QImage* theWrappedObject, QDataStream&  arg__1);
   QImage  copy(QImage* theWrappedObject, int  x, int  y, int  w, int  h) const;
   QMatrix  static_QImage_trueMatrix(const QMatrix&  arg__1, int  w, int  h);
   QStringList  textKeys(QImage* theWrappedObject) const;
   bool  operator_equal(QImage* theWrappedObject, const QImage&  arg__1) const;
   QImage  createHeuristicMask(QImage* theWrappedObject, bool  clipTight = true) const;
   QTransform  static_QImage_trueMatrix(const QTransform&  arg__1, int  w, int  h);
   bool  hasAlphaChannel(QImage* theWrappedObject) const;
   int  bytesPerLine(QImage* theWrappedObject) const;
   void setPixel(QImage* theWrappedObject, const QPoint&  pt, uint  index_or_rgb);
   int  pixelIndex(QImage* theWrappedObject, const QPoint&  pt) const;
   QRect  rect(QImage* theWrappedObject) const;
   QImage  scaled(QImage* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  aspectMode = Qt::IgnoreAspectRatio, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   void invertPixels(QImage* theWrappedObject, QImage::InvertMode  arg__1 = QImage::InvertRgb);
   QImage  alphaChannel(QImage* theWrappedObject) const;
   bool  save(QImage* theWrappedObject, QIODevice*  device, const char*  format = 0, int  quality = -1) const;
   int  numBytes(QImage* theWrappedObject) const;
   QSize  size(QImage* theWrappedObject) const;
   int  metric(QImage* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   void setOffset(QImage* theWrappedObject, const QPoint&  arg__1);
   QImage  createMaskFromColor(QImage* theWrappedObject, unsigned int  color, Qt::MaskMode  mode = Qt::MaskInColor) const;
   int  depth(QImage* theWrappedObject) const;
   QImage  convertToFormat(QImage* theWrappedObject, QImage::Format  f, Qt::ImageConversionFlags  flags = Qt::AutoColor) const;
   QImage  rgbSwapped(QImage* theWrappedObject) const;
   bool  valid(QImage* theWrappedObject, const QPoint&  pt) const;
   bool  loadFromData(QImage* theWrappedObject, const QByteArray&  data, const char*  aformat = 0);
   QImage  scaledToHeight(QImage* theWrappedObject, int  h, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   bool  isGrayscale(QImage* theWrappedObject) const;
   unsigned int  color(QImage* theWrappedObject, int  i) const;
   QVector<unsigned int >  colorTable(QImage* theWrappedObject) const;
   void setDotsPerMeterX(QImage* theWrappedObject, int  arg__1);
   void setDotsPerMeterY(QImage* theWrappedObject, int  arg__1);
   int  numColors(QImage* theWrappedObject) const;
   int  dotsPerMeterX(QImage* theWrappedObject) const;
   void setNumColors(QImage* theWrappedObject, int  arg__1);
   QImage  scaled(QImage* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  aspectMode = Qt::IgnoreAspectRatio, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QImage  convertToFormat(QImage* theWrappedObject, QImage::Format  f, const QVector<unsigned int >&  colorTable, Qt::ImageConversionFlags  flags = Qt::AutoColor) const;
   bool  allGray(QImage* theWrappedObject) const;
   void fill(QImage* theWrappedObject, uint  pixel);
   QImage  mirrored(QImage* theWrappedObject, bool  horizontally = false, bool  vertically = true) const;
   void setText(QImage* theWrappedObject, const QString&  key, const QString&  value);
   qint64  cacheKey(QImage* theWrappedObject) const;
   unsigned int  pixel(QImage* theWrappedObject, const QPoint&  pt) const;
   QPaintEngine*  paintEngine(QImage* theWrappedObject) const;
   void setColor(QImage* theWrappedObject, int  i, unsigned int  c);
};

#endif // PYTHONQTWRAPPER_QIMAGE_H
