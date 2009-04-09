#ifndef PYTHONQTWRAPPER_QBITMAP_H
#define PYTHONQTWRAPPER_QBITMAP_H

#include <qbitmap.h>
#include <QObject>

#include <QVariant>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
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

class PythonQtWrapper_QBitmap : public QObject
{ Q_OBJECT
public:
public slots:
QBitmap* new_QBitmap();
QBitmap* new_QBitmap(const QPixmap&  arg__1);
QBitmap* new_QBitmap(const QSize&  arg__1);
QBitmap* new_QBitmap(const QString&  fileName, const char*  format = 0);
QBitmap* new_QBitmap(int  w, int  h);
void delete_QBitmap(QBitmap* obj) { delete obj; } 
   void clear(QBitmap* theWrappedObject);
   QBitmap  static_QBitmap_fromImage(const QImage&  image, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QBitmap  transformed(QBitmap* theWrappedObject, const QMatrix&  arg__1) const;
   QBitmap  transformed(QBitmap* theWrappedObject, const QTransform&  matrix) const;
};

#endif // PYTHONQTWRAPPER_QBITMAP_H
