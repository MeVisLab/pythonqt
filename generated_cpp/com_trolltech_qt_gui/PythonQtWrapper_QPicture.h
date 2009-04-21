#ifndef PYTHONQTWRAPPER_QPICTURE_H
#define PYTHONQTWRAPPER_QPICTURE_H

#include <qpicture.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qiodevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpicture.h>
#include <qrect.h>

class PythonQtShell_QPicture : public QPicture
{
public:
    PythonQtShell_QPicture(const QPicture&  arg__1):QPicture(arg__1),_wrapper(NULL) {};
    PythonQtShell_QPicture(int  formatVersion = -1):QPicture(formatVersion),_wrapper(NULL) {};

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  m) const;
virtual QPaintEngine*  paintEngine() const;
virtual void setData(const char*  data, uint  size);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPicture : public QPicture
{ public:
inline int  metric(QPaintDevice::PaintDeviceMetric  m) const { return QPicture::metric(m); }
};

class PythonQtWrapper_QPicture : public QObject
{ Q_OBJECT
public:
public slots:
QPicture* new_QPicture(const QPicture&  arg__1);
QPicture* new_QPicture(int  formatVersion = -1);
void delete_QPicture(QPicture* obj) { delete obj; } 
   bool  isNull(QPicture* theWrappedObject) const;
   bool  save(QPicture* theWrappedObject, const QString&  fileName, const char*  format = 0);
   void setBoundingRect(QPicture* theWrappedObject, const QRect&  r);
   int  devType(QPicture* theWrappedObject) const;
   void readFrom(QPicture* theWrappedObject, QDataStream&  arg__1);
   uint  size(QPicture* theWrappedObject) const;
   int  metric(QPicture* theWrappedObject, QPaintDevice::PaintDeviceMetric  m) const;
   bool  play(QPicture* theWrappedObject, QPainter*  p);
   QRect  boundingRect(QPicture* theWrappedObject) const;
   bool  load(QPicture* theWrappedObject, QIODevice*  dev, const char*  format = 0);
   void writeTo(QPicture* theWrappedObject, QDataStream&  arg__1);
   bool  load(QPicture* theWrappedObject, const QString&  fileName, const char*  format = 0);
   QPaintEngine*  paintEngine(QPicture* theWrappedObject) const;
   bool  save(QPicture* theWrappedObject, QIODevice*  dev, const char*  format = 0);
   const char*  data(QPicture* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPICTURE_H
