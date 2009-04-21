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
inline QPaintEngine*  paintEngine() const { return QSvgGenerator::paintEngine(); }
inline int  metric(QPaintDevice::PaintDeviceMetric  metric) const { return QSvgGenerator::metric(metric); }
};

class PythonQtWrapper_QSvgGenerator : public QObject
{ Q_OBJECT
public:
public slots:
QSvgGenerator* new_QSvgGenerator();
void delete_QSvgGenerator(QSvgGenerator* obj) { delete obj; } 
   QSize  size(QSvgGenerator* theWrappedObject) const;
   QIODevice*  outputDevice(QSvgGenerator* theWrappedObject) const;
   int  resolution(QSvgGenerator* theWrappedObject) const;
   QString  fileName(QSvgGenerator* theWrappedObject) const;
   void setSize(QSvgGenerator* theWrappedObject, const QSize&  size);
   void setOutputDevice(QSvgGenerator* theWrappedObject, QIODevice*  outputDevice);
   QPaintEngine*  paintEngine(QSvgGenerator* theWrappedObject) const;
   void setResolution(QSvgGenerator* theWrappedObject, int  dpi);
   int  metric(QSvgGenerator* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   void setFileName(QSvgGenerator* theWrappedObject, const QString&  fileName);
};

#endif // PYTHONQTWRAPPER_QSVGGENERATOR_H
