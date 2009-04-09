#ifndef PYTHONQTWRAPPER_QPICTURE_H
#define PYTHONQTWRAPPER_QPICTURE_H

#include <qpicture.h>
#include <QObject>

#include <QVariant>
#include <qdatastream.h>
#include <qiodevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpicture.h>
#include <qrect.h>

class PythonQtWrapper_QPicture : public QObject
{ Q_OBJECT
public:
public slots:
QPicture* new_QPicture(const QPicture&  arg__1);
QPicture* new_QPicture(int  formatVersion = -1);
void delete_QPicture(QPicture* obj) { delete obj; } 
   QRect  boundingRect(QPicture* theWrappedObject) const;
   const char*  data(QPicture* theWrappedObject) const;
   int  depth(QPicture* theWrappedObject) const;
   int  devType(QPicture* theWrappedObject) const;
   int  height(QPicture* theWrappedObject) const;
   int  heightMM(QPicture* theWrappedObject) const;
   bool  isNull(QPicture* theWrappedObject) const;
   bool  load(QPicture* theWrappedObject, QIODevice*  dev, const char*  format = 0);
   bool  load(QPicture* theWrappedObject, const QString&  fileName, const char*  format = 0);
   int  logicalDpiX(QPicture* theWrappedObject) const;
   int  logicalDpiY(QPicture* theWrappedObject) const;
   int  numColors(QPicture* theWrappedObject) const;
   void writeTo(QPicture* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QPicture* theWrappedObject, QDataStream&  arg__1);
   QPaintEngine*  paintEngine(QPicture* theWrappedObject) const;
   bool  paintingActive(QPicture* theWrappedObject) const;
   int  physicalDpiX(QPicture* theWrappedObject) const;
   int  physicalDpiY(QPicture* theWrappedObject) const;
   bool  play(QPicture* theWrappedObject, QPainter*  p);
   bool  save(QPicture* theWrappedObject, QIODevice*  dev, const char*  format = 0);
   bool  save(QPicture* theWrappedObject, const QString&  fileName, const char*  format = 0);
   void setBoundingRect(QPicture* theWrappedObject, const QRect&  r);
   uint  size(QPicture* theWrappedObject) const;
   int  width(QPicture* theWrappedObject) const;
   int  widthMM(QPicture* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPICTURE_H
