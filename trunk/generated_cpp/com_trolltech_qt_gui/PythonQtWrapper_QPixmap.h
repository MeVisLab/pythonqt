#ifndef PYTHONQTWRAPPER_QPIXMAP_H
#define PYTHONQTWRAPPER_QPIXMAP_H

#include <qpixmap.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtShell_QPixmap : public QPixmap
{
public:
    PythonQtShell_QPixmap():QPixmap(),_wrapper(NULL) {};
    PythonQtShell_QPixmap(const QPixmap&  arg__1):QPixmap(arg__1),_wrapper(NULL) {};
    PythonQtShell_QPixmap(const QSize&  arg__1):QPixmap(arg__1),_wrapper(NULL) {};
    PythonQtShell_QPixmap(const QString&  fileName, const char*  format = 0, Qt::ImageConversionFlags  flags = Qt::AutoColor):QPixmap(fileName, format, flags),_wrapper(NULL) {};
    PythonQtShell_QPixmap(const char**  xpm):QPixmap(xpm),_wrapper(NULL) {};
    PythonQtShell_QPixmap(int  w, int  h):QPixmap(w, h),_wrapper(NULL) {};

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPixmap : public QPixmap
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QPixmap::metric(arg__1); }
inline QPaintEngine*  promoted_paintEngine() const { return QPixmap::paintEngine(); }
inline int  promoted_devType() const { return QPixmap::devType(); }
};

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
   int  height(QPixmap* theWrappedObject) const;
   QBitmap  mask(QPixmap* theWrappedObject) const;
   QPixmap  copy(QPixmap* theWrappedObject, int  x, int  y, int  width, int  height) const;
   QRect  rect(QPixmap* theWrappedObject) const;
   bool  hasAlpha(QPixmap* theWrappedObject) const;
   bool  save(QPixmap* theWrappedObject, const QString&  fileName, const char*  format = 0, int  quality = -1) const;
   bool  isQBitmap(QPixmap* theWrappedObject) const;
   QPixmap  scaled(QPixmap* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  aspectMode = Qt::IgnoreAspectRatio, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   void readFrom(QPixmap* theWrappedObject, QDataStream&  arg__1);
   void setMask(QPixmap* theWrappedObject, const QBitmap&  arg__1);
   void fill(QPixmap* theWrappedObject, const QWidget*  widget, const QPoint&  ofs);
   QPixmap  copy(QPixmap* theWrappedObject, const QRect&  rect = QRect()) const;
   QBitmap  createHeuristicMask(QPixmap* theWrappedObject, bool  clipTight = true) const;
   QImage  toImage(QPixmap* theWrappedObject) const;
   bool  load(QPixmap* theWrappedObject, const QString&  fileName, const char*  format = 0, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QPixmap  static_QPixmap_fromImage(const QImage&  image, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   int  static_QPixmap_defaultDepth();
   QPixmap  static_QPixmap_grabWidget(QWidget*  widget, const QRect&  rect);
   void fill(QPixmap* theWrappedObject, const QColor&  fillColor = Qt::white);
   QSize  size(QPixmap* theWrappedObject) const;
   QPixmap  static_QPixmap_grabWindow(WId  arg__1, int  x = 0, int  y = 0, int  w = -1, int  h = -1);
   bool  save(QPixmap* theWrappedObject, QIODevice*  device, const char*  format = 0, int  quality = -1) const;
   int  width(QPixmap* theWrappedObject) const;
   QBitmap  createMaskFromColor(QPixmap* theWrappedObject, const QColor&  maskColor, Qt::MaskMode  mode) const;
   QPixmap  scaled(QPixmap* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  aspectMode = Qt::IgnoreAspectRatio, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QMatrix  static_QPixmap_trueMatrix(const QMatrix&  m, int  w, int  h);
   QTransform  static_QPixmap_trueMatrix(const QTransform&  m, int  w, int  h);
   QPixmap  static_QPixmap_grabWidget(QWidget*  widget, int  x = 0, int  y = 0, int  w = -1, int  h = -1);
   void writeTo(QPixmap* theWrappedObject, QDataStream&  arg__1);
   QBitmap  createMaskFromColor(QPixmap* theWrappedObject, const QColor&  maskColor) const;
   bool  hasAlphaChannel(QPixmap* theWrappedObject) const;
   bool  loadFromData(QPixmap* theWrappedObject, const QByteArray&  data, const char*  format = 0, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void setAlphaChannel(QPixmap* theWrappedObject, const QPixmap&  arg__1);
   QPixmap  transformed(QPixmap* theWrappedObject, const QMatrix&  arg__1, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   int  depth(QPixmap* theWrappedObject) const;
   QPixmap  scaledToHeight(QPixmap* theWrappedObject, int  h, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   int  metric(QPixmap* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const;
   qint64  cacheKey(QPixmap* theWrappedObject) const;
   QPaintEngine*  paintEngine(QPixmap* theWrappedObject) const;
   QPixmap  transformed(QPixmap* theWrappedObject, const QTransform&  arg__1, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QPixmap  alphaChannel(QPixmap* theWrappedObject) const;
   bool  isNull(QPixmap* theWrappedObject) const;
   void fill(QPixmap* theWrappedObject, const QWidget*  widget, int  xofs, int  yofs);
   QPixmap  scaledToWidth(QPixmap* theWrappedObject, int  w, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   int  devType(QPixmap* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPIXMAP_H
