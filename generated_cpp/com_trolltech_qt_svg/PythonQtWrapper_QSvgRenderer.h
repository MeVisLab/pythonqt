#ifndef PYTHONQTWRAPPER_QSVGRENDERER_H
#define PYTHONQTWRAPPER_QSVGRENDERER_H

#include <qsvgrenderer.h>
#include <QObject>

#include <QByteArray>
#include <QMatrix>
#include <QRectF>
#include <QSize>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qmatrix.h>
#include <qobject.h>
#include <qpainter.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtWrapper_QSvgRenderer : public QObject
{ Q_OBJECT
public:
public slots:
QSvgRenderer* new_QSvgRenderer(QObject*  parent = 0);
QSvgRenderer* new_QSvgRenderer(const QByteArray&  contents, QObject*  parent = 0);
QSvgRenderer* new_QSvgRenderer(const QString&  filename, QObject*  parent = 0);
void delete_QSvgRenderer(QSvgRenderer* obj) { delete obj; } 
   bool  animated(QSvgRenderer* theWrappedObject) const;
   int  animationDuration(QSvgRenderer* theWrappedObject) const;
   QRectF  boundsOnElement(QSvgRenderer* theWrappedObject, const QString&  id) const;
   int  currentFrame(QSvgRenderer* theWrappedObject) const;
   QSize  defaultSize(QSvgRenderer* theWrappedObject) const;
   bool  elementExists(QSvgRenderer* theWrappedObject, const QString&  id) const;
   int  framesPerSecond(QSvgRenderer* theWrappedObject) const;
   bool  isValid(QSvgRenderer* theWrappedObject) const;
   QMatrix  matrixForElement(QSvgRenderer* theWrappedObject, const QString&  id) const;
   void setCurrentFrame(QSvgRenderer* theWrappedObject, int  arg__1);
   void setFramesPerSecond(QSvgRenderer* theWrappedObject, int  num);
   void setViewBox(QSvgRenderer* theWrappedObject, const QRect&  viewbox);
   void setViewBox(QSvgRenderer* theWrappedObject, const QRectF&  viewbox);
   QRect  viewBox(QSvgRenderer* theWrappedObject) const;
   QRectF  viewBoxF(QSvgRenderer* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSVGRENDERER_H
