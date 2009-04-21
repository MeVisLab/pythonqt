#ifndef PYTHONQTWRAPPER_QSVGRENDERER_H
#define PYTHONQTWRAPPER_QSVGRENDERER_H

#include <qsvgrenderer.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtShell_QSvgRenderer : public QSvgRenderer
{
public:
    PythonQtShell_QSvgRenderer(QObject*  parent = 0):QSvgRenderer(parent),_wrapper(NULL) {};
    PythonQtShell_QSvgRenderer(const QByteArray&  contents, QObject*  parent = 0):QSvgRenderer(contents, parent),_wrapper(NULL) {};
    PythonQtShell_QSvgRenderer(const QString&  filename, QObject*  parent = 0):QSvgRenderer(filename, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSvgRenderer : public QObject
{ Q_OBJECT
public:
public slots:
QSvgRenderer* new_QSvgRenderer(QObject*  parent = 0);
QSvgRenderer* new_QSvgRenderer(const QByteArray&  contents, QObject*  parent = 0);
QSvgRenderer* new_QSvgRenderer(const QString&  filename, QObject*  parent = 0);
void delete_QSvgRenderer(QSvgRenderer* obj) { delete obj; } 
   int  currentFrame(QSvgRenderer* theWrappedObject) const;
   int  framesPerSecond(QSvgRenderer* theWrappedObject) const;
   void setViewBox(QSvgRenderer* theWrappedObject, const QRectF&  viewbox);
   int  animationDuration(QSvgRenderer* theWrappedObject) const;
   bool  animated(QSvgRenderer* theWrappedObject) const;
   QSize  defaultSize(QSvgRenderer* theWrappedObject) const;
   void setFramesPerSecond(QSvgRenderer* theWrappedObject, int  num);
   bool  elementExists(QSvgRenderer* theWrappedObject, const QString&  id) const;
   QRectF  boundsOnElement(QSvgRenderer* theWrappedObject, const QString&  id) const;
   bool  isValid(QSvgRenderer* theWrappedObject) const;
   QMatrix  matrixForElement(QSvgRenderer* theWrappedObject, const QString&  id) const;
   QRect  viewBox(QSvgRenderer* theWrappedObject) const;
   QRectF  viewBoxF(QSvgRenderer* theWrappedObject) const;
   void setViewBox(QSvgRenderer* theWrappedObject, const QRect&  viewbox);
   void setCurrentFrame(QSvgRenderer* theWrappedObject, int  arg__1);
};

#endif // PYTHONQTWRAPPER_QSVGRENDERER_H
