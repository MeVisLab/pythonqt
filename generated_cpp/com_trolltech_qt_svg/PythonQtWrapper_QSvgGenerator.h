#ifndef PYTHONQTWRAPPER_QSVGGENERATOR_H
#define PYTHONQTWRAPPER_QSVGGENERATOR_H

#include <qsvggenerator.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qiodevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qsize.h>

class PythonQtShell_QSvgGenerator : public QSvgGenerator
{
public:
    PythonQtShell_QSvgGenerator():QSvgGenerator(),_wrapper(NULL) {};

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSvgGenerator : public QSvgGenerator
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QSvgGenerator::metric(metric); }
inline QPaintEngine*  promoted_paintEngine() const { return QSvgGenerator::paintEngine(); }
};

class PythonQtWrapper_QSvgGenerator : public QObject
{ Q_OBJECT
public:
public slots:
QSvgGenerator* new_QSvgGenerator();
void delete_QSvgGenerator(QSvgGenerator* obj) { delete obj; } 
   QIODevice*  outputDevice(QSvgGenerator* theWrappedObject) const;
   void setOutputDevice(QSvgGenerator* theWrappedObject, QIODevice*  outputDevice);
   void setSize(QSvgGenerator* theWrappedObject, const QSize&  size);
   void setFileName(QSvgGenerator* theWrappedObject, const QString&  fileName);
   int  metric(QSvgGenerator* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   QPaintEngine*  paintEngine(QSvgGenerator* theWrappedObject) const;
   int  resolution(QSvgGenerator* theWrappedObject) const;
   void setResolution(QSvgGenerator* theWrappedObject, int  dpi);
   QSize  size(QSvgGenerator* theWrappedObject) const;
   QString  fileName(QSvgGenerator* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSVGGENERATOR_H
