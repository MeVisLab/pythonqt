#ifndef PYTHONQTWRAPPER_QSVGGENERATOR_H
#define PYTHONQTWRAPPER_QSVGGENERATOR_H

#include <qsvggenerator.h>
#include <QObject>

#include <QVariant>
#include <qiodevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qsize.h>

class PythonQtWrapper_QSvgGenerator : public QObject
{ Q_OBJECT
public:
public slots:
QSvgGenerator* new_QSvgGenerator();
void delete_QSvgGenerator(QSvgGenerator* obj) { delete obj; } 
   int  depth(QSvgGenerator* theWrappedObject) const;
   int  devType(QSvgGenerator* theWrappedObject) const;
   QString  fileName(QSvgGenerator* theWrappedObject) const;
   int  height(QSvgGenerator* theWrappedObject) const;
   int  heightMM(QSvgGenerator* theWrappedObject) const;
   int  logicalDpiX(QSvgGenerator* theWrappedObject) const;
   int  logicalDpiY(QSvgGenerator* theWrappedObject) const;
   int  numColors(QSvgGenerator* theWrappedObject) const;
   QIODevice*  outputDevice(QSvgGenerator* theWrappedObject) const;
   bool  paintingActive(QSvgGenerator* theWrappedObject) const;
   int  physicalDpiX(QSvgGenerator* theWrappedObject) const;
   int  physicalDpiY(QSvgGenerator* theWrappedObject) const;
   int  resolution(QSvgGenerator* theWrappedObject) const;
   void setFileName(QSvgGenerator* theWrappedObject, const QString&  fileName);
   void setOutputDevice(QSvgGenerator* theWrappedObject, QIODevice*  outputDevice);
   void setResolution(QSvgGenerator* theWrappedObject, int  dpi);
   void setSize(QSvgGenerator* theWrappedObject, const QSize&  size);
   QSize  size(QSvgGenerator* theWrappedObject) const;
   int  width(QSvgGenerator* theWrappedObject) const;
   int  widthMM(QSvgGenerator* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSVGGENERATOR_H
