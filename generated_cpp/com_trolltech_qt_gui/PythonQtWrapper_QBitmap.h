#ifndef PYTHONQTWRAPPER_QBITMAP_H
#define PYTHONQTWRAPPER_QBITMAP_H

#include <qbitmap.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qimage.h>
#include <qimagewriter.h>
#include <qiodevice.h>
#include <qmatrix.h>
#include <qpaintengine.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qtransform.h>
#include <qwidget.h>

class PythonQtShell_QBitmap : public QBitmap
{
public:
    PythonQtShell_QBitmap():QBitmap(),_wrapper(NULL) {};
    PythonQtShell_QBitmap(const QPixmap&  arg__1):QBitmap(arg__1),_wrapper(NULL) {};
    PythonQtShell_QBitmap(const QSize&  arg__1):QBitmap(arg__1),_wrapper(NULL) {};
    PythonQtShell_QBitmap(const QString&  fileName, const char*  format = 0):QBitmap(fileName, format),_wrapper(NULL) {};
    PythonQtShell_QBitmap(int  w, int  h):QBitmap(w, h),_wrapper(NULL) {};

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QBitmap : public QObject
{ Q_OBJECT
public:
public slots:
QBitmap* new_QBitmap();
QBitmap* new_QBitmap(const QPixmap&  arg__1);
QBitmap* new_QBitmap(const QSize&  arg__1);
QBitmap* new_QBitmap(const QString&  fileName, const char*  format = 0);
QBitmap* new_QBitmap(int  w, int  h);
QBitmap* new_QBitmap(const QBitmap& other) {
PythonQtShell_QBitmap* a = new PythonQtShell_QBitmap();
*((QBitmap*)a) = other;
return a; }
void delete_QBitmap(QBitmap* obj) { delete obj; } 
   void clear(QBitmap* theWrappedObject);
   QBitmap  transformed(QBitmap* theWrappedObject, const QMatrix&  arg__1) const;
   QBitmap  transformed(QBitmap* theWrappedObject, const QTransform&  matrix) const;
   QBitmap  static_QBitmap_fromImage(const QImage&  image, Qt::ImageConversionFlags  flags = Qt::AutoColor);
};

#endif // PYTHONQTWRAPPER_QBITMAP_H
