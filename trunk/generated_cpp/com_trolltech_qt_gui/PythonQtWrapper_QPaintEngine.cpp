#include "PythonQtWrapper_QPaintEngine.h"

#include <QVarLengthArray>
#include <QVariant>
#include <qimage.h>
#include <qline.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>

bool  PythonQtWrapper_QPaintEngine::begin(QPaintEngine* theWrappedObject, QPaintDevice*  pdev)
{
return theWrappedObject->begin(pdev);
}

void PythonQtWrapper_QPaintEngine::clearDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df)
{
theWrappedObject->clearDirty(df);
}

QPoint  PythonQtWrapper_QPaintEngine::coordinateOffset(QPaintEngine* theWrappedObject) const
{
return theWrappedObject->coordinateOffset();
}

void PythonQtWrapper_QPaintEngine::drawEllipse(QPaintEngine* theWrappedObject, const QRect&  r)
{
theWrappedObject->drawEllipse(r);
}

void PythonQtWrapper_QPaintEngine::drawEllipse(QPaintEngine* theWrappedObject, const QRectF&  r)
{
theWrappedObject->drawEllipse(r);
}

void PythonQtWrapper_QPaintEngine::drawImage(QPaintEngine* theWrappedObject, const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags)
{
theWrappedObject->drawImage(r, pm, sr, flags);
}

void PythonQtWrapper_QPaintEngine::drawLines(QPaintEngine* theWrappedObject, const QLine*  lines, int  lineCount)
{
theWrappedObject->drawLines(lines, lineCount);
}

void PythonQtWrapper_QPaintEngine::drawLines(QPaintEngine* theWrappedObject, const QLineF*  lines, int  lineCount)
{
theWrappedObject->drawLines(lines, lineCount);
}

void PythonQtWrapper_QPaintEngine::drawPath(QPaintEngine* theWrappedObject, const QPainterPath&  path)
{
theWrappedObject->drawPath(path);
}

void PythonQtWrapper_QPaintEngine::drawPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pm, const QRectF&  sr)
{
theWrappedObject->drawPixmap(r, pm, sr);
}

void PythonQtWrapper_QPaintEngine::drawPoints(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount)
{
theWrappedObject->drawPoints(points, pointCount);
}

void PythonQtWrapper_QPaintEngine::drawPoints(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount)
{
theWrappedObject->drawPoints(points, pointCount);
}

void PythonQtWrapper_QPaintEngine::drawPolygon(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode)
{
theWrappedObject->drawPolygon(points, pointCount, mode);
}

void PythonQtWrapper_QPaintEngine::drawPolygon(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode)
{
theWrappedObject->drawPolygon(points, pointCount, mode);
}

void PythonQtWrapper_QPaintEngine::drawRects(QPaintEngine* theWrappedObject, const QRect*  rects, int  rectCount)
{
theWrappedObject->drawRects(rects, rectCount);
}

void PythonQtWrapper_QPaintEngine::drawRects(QPaintEngine* theWrappedObject, const QRectF*  rects, int  rectCount)
{
theWrappedObject->drawRects(rects, rectCount);
}

void PythonQtWrapper_QPaintEngine::drawTextItem(QPaintEngine* theWrappedObject, const QPointF&  p, const QTextItem&  textItem)
{
theWrappedObject->drawTextItem(p, textItem);
}

void PythonQtWrapper_QPaintEngine::drawTiledPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s)
{
theWrappedObject->drawTiledPixmap(r, pixmap, s);
}

bool  PythonQtWrapper_QPaintEngine::end(QPaintEngine* theWrappedObject)
{
return theWrappedObject->end();
}

bool  PythonQtWrapper_QPaintEngine::hasFeature(QPaintEngine* theWrappedObject, QPaintEngine::PaintEngineFeatures  feature) const
{
return theWrappedObject->hasFeature(feature);
}

bool  PythonQtWrapper_QPaintEngine::isActive(QPaintEngine* theWrappedObject) const
{
return theWrappedObject->isActive();
}

QPaintDevice*  PythonQtWrapper_QPaintEngine::paintDevice(QPaintEngine* theWrappedObject) const
{
return theWrappedObject->paintDevice();
}

QPainter*  PythonQtWrapper_QPaintEngine::painter(QPaintEngine* theWrappedObject) const
{
return theWrappedObject->painter();
}

void PythonQtWrapper_QPaintEngine::setActive(QPaintEngine* theWrappedObject, bool  newState)
{
theWrappedObject->setActive(newState);
}

void PythonQtWrapper_QPaintEngine::setDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df)
{
theWrappedObject->setDirty(df);
}

void PythonQtWrapper_QPaintEngine::setSystemClip(QPaintEngine* theWrappedObject, const QRegion&  baseClip)
{
theWrappedObject->setSystemClip(baseClip);
}

void PythonQtWrapper_QPaintEngine::setSystemRect(QPaintEngine* theWrappedObject, const QRect&  rect)
{
theWrappedObject->setSystemRect(rect);
}

void PythonQtWrapper_QPaintEngine::syncState(QPaintEngine* theWrappedObject)
{
theWrappedObject->syncState();
}

QRegion  PythonQtWrapper_QPaintEngine::systemClip(QPaintEngine* theWrappedObject) const
{
return theWrappedObject->systemClip();
}

QRect  PythonQtWrapper_QPaintEngine::systemRect(QPaintEngine* theWrappedObject) const
{
return theWrappedObject->systemRect();
}

bool  PythonQtWrapper_QPaintEngine::testDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df)
{
return theWrappedObject->testDirty(df);
}

QPaintEngine::Type  PythonQtWrapper_QPaintEngine::type(QPaintEngine* theWrappedObject) const
{
return theWrappedObject->type();
}

void PythonQtWrapper_QPaintEngine::updateState(QPaintEngine* theWrappedObject, const QPaintEngineState&  state)
{
theWrappedObject->updateState(state);
}

