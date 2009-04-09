#ifndef PYTHONQTWRAPPER_QPIXMAP_H
#define PYTHONQTWRAPPER_QPIXMAP_H

#include <qpixmap.h>
#include <QObject>

#include <QVariant>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qimage.h>
#include <qimagewriter.h>
#include <qiodevice.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qtransform.h>
#include <qwidget.h>

class PythonQtWrapper_QPixmap : public QObject
{ Q_OBJECT
public:
public slots:
QPixmap* new_QPixmap();
QPixmap* new_QPixmap(const QPixmap&  arg__1);
QPixmap* new_QPixmap(const QSize&  arg__1);
QPixmap* new_QPixmap(const QString&  fileName, const char*  format = 0, Qt::ImageConversionFlags  flags = Qt::AutoColor);
QPixmap* new_QPixmap(const char**  xpm);
QPixmap* new_QPixmap(int  w, int  h);
void delete_QPixmap(QPixmap* obj) { delete obj; } 
   QPixmap  alphaChannel(QPixmap* theWrappedObject) const;
   qint64  cacheKey(QPixmap* theWrappedObject) const;
   QPixmap  copy(QPixmap* theWrappedObject, const QRect&  rect = QRect()) const;
   QPixmap  copy(QPixmap* theWrappedObject, int  x, int  y, int  width, int  height) const;
   QBitmap  createHeuristicMask(QPixmap* theWrappedObject, bool  clipTight = true) const;
   QBitmap  createMaskFromColor(QPixmap* theWrappedObject, const QColor&  maskColor) const;
   QBitmap  createMaskFromColor(QPixmap* theWrappedObject, const QColor&  maskColor, Qt::MaskMode  mode) const;
   int  static_QPixmap_defaultDepth();
   int  depth(QPixmap* theWrappedObject) const;
   int  devType(QPixmap* theWrappedObject) const;
   void fill(QPixmap* theWrappedObject, const QColor&  fillColor = Qt::white);
   void fill(QPixmap* theWrappedObject, const QWidget*  widget, const QPoint&  ofs);
   void fill(QPixmap* theWrappedObject, const QWidget*  widget, int  xofs, int  yofs);
   QPixmap  static_QPixmap_fromImage(const QImage&  image, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QPixmap  static_QPixmap_grabWidget(QWidget*  widget, const QRect&  rect);
   QPixmap  static_QPixmap_grabWidget(QWidget*  widget, int  x = 0, int  y = 0, int  w = -1, int  h = -1);
   QPixmap  static_QPixmap_grabWindow(WId  arg__1, int  x = 0, int  y = 0, int  w = -1, int  h = -1);
   bool  hasAlpha(QPixmap* theWrappedObject) const;
   bool  hasAlphaChannel(QPixmap* theWrappedObject) const;
   int  height(QPixmap* theWrappedObject) const;
   int  heightMM(QPixmap* theWrappedObject) const;
   bool  isNull(QPixmap* theWrappedObject) const;
   bool  isQBitmap(QPixmap* theWrappedObject) const;
   bool  load(QPixmap* theWrappedObject, const QString&  fileName, const char*  format = 0, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   bool  loadFromData(QPixmap* theWrappedObject, const QByteArray&  data, const char*  format = 0, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   int  logicalDpiX(QPixmap* theWrappedObject) const;
   int  logicalDpiY(QPixmap* theWrappedObject) const;
   QBitmap  mask(QPixmap* theWrappedObject) const;
   int  numColors(QPixmap* theWrappedObject) const;
   void writeTo(QPixmap* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QPixmap* theWrappedObject, QDataStream&  arg__1);
   QPaintEngine*  paintEngine(QPixmap* theWrappedObject) const;
   bool  paintingActive(QPixmap* theWrappedObject) const;
   int  physicalDpiX(QPixmap* theWrappedObject) const;
   int  physicalDpiY(QPixmap* theWrappedObject) const;
   QRect  rect(QPixmap* theWrappedObject) const;
   bool  save(QPixmap* theWrappedObject, QIODevice*  device, const char*  format = 0, int  quality = -1) const;
   bool  save(QPixmap* theWrappedObject, const QString&  fileName, const char*  format = 0, int  quality = -1) const;
   QPixmap  scaled(QPixmap* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  aspectMode = Qt::IgnoreAspectRatio, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QPixmap  scaled(QPixmap* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  aspectMode = Qt::IgnoreAspectRatio, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QPixmap  scaledToHeight(QPixmap* theWrappedObject, int  h, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QPixmap  scaledToWidth(QPixmap* theWrappedObject, int  w, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   void setAlphaChannel(QPixmap* theWrappedObject, const QPixmap&  arg__1);
   void setMask(QPixmap* theWrappedObject, const QBitmap&  arg__1);
   QSize  size(QPixmap* theWrappedObject) const;
   QImage  toImage(QPixmap* theWrappedObject) const;
   QPixmap  transformed(QPixmap* theWrappedObject, const QMatrix&  arg__1, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QPixmap  transformed(QPixmap* theWrappedObject, const QTransform&  arg__1, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QMatrix  static_QPixmap_trueMatrix(const QMatrix&  m, int  w, int  h);
   QTransform  static_QPixmap_trueMatrix(const QTransform&  m, int  w, int  h);
   int  width(QPixmap* theWrappedObject) const;
   int  widthMM(QPixmap* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPIXMAP_H
