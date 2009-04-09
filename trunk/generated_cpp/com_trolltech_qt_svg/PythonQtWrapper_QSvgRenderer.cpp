#include "PythonQtWrapper_QSvgRenderer.h"

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

QSvgRenderer* PythonQtWrapper_QSvgRenderer::new_QSvgRenderer(QObject*  parent)
{ 
return new QSvgRenderer(parent); }

QSvgRenderer* PythonQtWrapper_QSvgRenderer::new_QSvgRenderer(const QByteArray&  contents, QObject*  parent)
{ 
return new QSvgRenderer(contents, parent); }

QSvgRenderer* PythonQtWrapper_QSvgRenderer::new_QSvgRenderer(const QString&  filename, QObject*  parent)
{ 
return new QSvgRenderer(filename, parent); }

bool  PythonQtWrapper_QSvgRenderer::animated(QSvgRenderer* theWrappedObject) const
{
return theWrappedObject->animated();
}

int  PythonQtWrapper_QSvgRenderer::animationDuration(QSvgRenderer* theWrappedObject) const
{
return theWrappedObject->animationDuration();
}

QRectF  PythonQtWrapper_QSvgRenderer::boundsOnElement(QSvgRenderer* theWrappedObject, const QString&  id) const
{
return theWrappedObject->boundsOnElement(id);
}

int  PythonQtWrapper_QSvgRenderer::currentFrame(QSvgRenderer* theWrappedObject) const
{
return theWrappedObject->currentFrame();
}

QSize  PythonQtWrapper_QSvgRenderer::defaultSize(QSvgRenderer* theWrappedObject) const
{
return theWrappedObject->defaultSize();
}

bool  PythonQtWrapper_QSvgRenderer::elementExists(QSvgRenderer* theWrappedObject, const QString&  id) const
{
return theWrappedObject->elementExists(id);
}

int  PythonQtWrapper_QSvgRenderer::framesPerSecond(QSvgRenderer* theWrappedObject) const
{
return theWrappedObject->framesPerSecond();
}

bool  PythonQtWrapper_QSvgRenderer::isValid(QSvgRenderer* theWrappedObject) const
{
return theWrappedObject->isValid();
}

QMatrix  PythonQtWrapper_QSvgRenderer::matrixForElement(QSvgRenderer* theWrappedObject, const QString&  id) const
{
return theWrappedObject->matrixForElement(id);
}

void PythonQtWrapper_QSvgRenderer::setCurrentFrame(QSvgRenderer* theWrappedObject, int  arg__1)
{
theWrappedObject->setCurrentFrame(arg__1);
}

void PythonQtWrapper_QSvgRenderer::setFramesPerSecond(QSvgRenderer* theWrappedObject, int  num)
{
theWrappedObject->setFramesPerSecond(num);
}

void PythonQtWrapper_QSvgRenderer::setViewBox(QSvgRenderer* theWrappedObject, const QRect&  viewbox)
{
theWrappedObject->setViewBox(viewbox);
}

void PythonQtWrapper_QSvgRenderer::setViewBox(QSvgRenderer* theWrappedObject, const QRectF&  viewbox)
{
theWrappedObject->setViewBox(viewbox);
}

QRect  PythonQtWrapper_QSvgRenderer::viewBox(QSvgRenderer* theWrappedObject) const
{
return theWrappedObject->viewBox();
}

QRectF  PythonQtWrapper_QSvgRenderer::viewBoxF(QSvgRenderer* theWrappedObject) const
{
return theWrappedObject->viewBoxF();
}

