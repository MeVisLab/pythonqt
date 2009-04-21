#include "PythonQtWrapper_QPainter.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QPainterPath>
#include <QPixmap>
#include <QVariant>
#include <QWidget>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qimage.h>
#include <qline.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qtransform.h>
#include <qvector.h>
#include <qwidget.h>

QPainter* PythonQtWrapper_QPainter::new_QPainter()
{ 
return new QPainter(); }

void PythonQtWrapper_QPainter::drawLine(QPainter* theWrappedObject, const QPointF&  p1, const QPointF&  p2)
{
 (*theWrappedObject).drawLine(p1, p2);
}

void PythonQtWrapper_QPainter::shear(QPainter* theWrappedObject, qreal  sh, qreal  sv)
{
 (*theWrappedObject).shear(sh, sv);
}

void PythonQtWrapper_QPainter::initFrom(QPainter* theWrappedObject, const QWidget*  widget)
{
 (*theWrappedObject).initFrom(widget);
}

void PythonQtWrapper_QPainter::drawPicture(QPainter* theWrappedObject, const QPoint&  p, const QPicture&  picture)
{
 (*theWrappedObject).drawPicture(p, picture);
}

void PythonQtWrapper_QPainter::drawPolygon(QPainter* theWrappedObject, const QPolygon&  polygon, Qt::FillRule  fillRule)
{
 (*theWrappedObject).drawPolygon(polygon, fillRule);
}

QPaintDevice*  PythonQtWrapper_QPainter::device(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).device();
}

QRect  PythonQtWrapper_QPainter::viewport(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).viewport();
}

void PythonQtWrapper_QPainter::translate(QPainter* theWrappedObject, const QPoint&  offset)
{
 (*theWrappedObject).translate(offset);
}

void PythonQtWrapper_QPainter::save(QPainter* theWrappedObject)
{
 (*theWrappedObject).save();
}

void PythonQtWrapper_QPainter::setBrushOrigin(QPainter* theWrappedObject, const QPoint&  arg__1)
{
 (*theWrappedObject).setBrushOrigin(arg__1);
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, const QRectF&  r, int  flags, const QString&  text, QRectF*  br)
{
 (*theWrappedObject).drawText(r, flags, text, br);
}

bool  PythonQtWrapper_QPainter::begin(QPainter* theWrappedObject, QPaintDevice*  arg__1)
{
return  (*theWrappedObject).begin(arg__1);
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm)
{
 (*theWrappedObject).drawPixmap(x, y, w, h, pm);
}

void PythonQtWrapper_QPainter::setBackgroundMode(QPainter* theWrappedObject, Qt::BGMode  mode)
{
 (*theWrappedObject).setBackgroundMode(mode);
}

void PythonQtWrapper_QPainter::setClipRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ClipOperation  op)
{
 (*theWrappedObject).setClipRect(x, y, w, h, op);
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QRectF&  targetRect, const QImage&  image, const QRectF&  sourceRect, Qt::ImageConversionFlags  flags)
{
 (*theWrappedObject).drawImage(targetRect, image, sourceRect, flags);
}

void PythonQtWrapper_QPainter::drawPath(QPainter* theWrappedObject, const QPainterPath&  path)
{
 (*theWrappedObject).drawPath(path);
}

bool  PythonQtWrapper_QPainter::end(QPainter* theWrappedObject)
{
return  (*theWrappedObject).end();
}

bool  PythonQtWrapper_QPainter::hasClipping(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).hasClipping();
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, const QRectF&  r, const QString&  text, const QTextOption&  o)
{
 (*theWrappedObject).drawText(r, text, o);
}

void PythonQtWrapper_QPainter::setBrushOrigin(QPainter* theWrappedObject, int  x, int  y)
{
 (*theWrappedObject).setBrushOrigin(x, y);
}

void PythonQtWrapper_QPainter::setWindow(QPainter* theWrappedObject, const QRect&  window)
{
 (*theWrappedObject).setWindow(window);
}

void PythonQtWrapper_QPainter::setFont(QPainter* theWrappedObject, const QFont&  f)
{
 (*theWrappedObject).setFont(f);
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh)
{
 (*theWrappedObject).drawPixmap(x, y, w, h, pm, sx, sy, sw, sh);
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image, const QRect&  sr, Qt::ImageConversionFlags  flags)
{
 (*theWrappedObject).drawImage(p, image, sr, flags);
}

void PythonQtWrapper_QPainter::drawRoundedRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode)
{
 (*theWrappedObject).drawRoundedRect(x, y, w, h, xRadius, yRadius, mode);
}

void PythonQtWrapper_QPainter::setViewport(QPainter* theWrappedObject, const QRect&  viewport)
{
 (*theWrappedObject).setViewport(viewport);
}

void PythonQtWrapper_QPainter::drawPoint(QPainter* theWrappedObject, int  x, int  y)
{
 (*theWrappedObject).drawPoint(x, y);
}

void PythonQtWrapper_QPainter::drawRect(QPainter* theWrappedObject, const QRectF&  rect)
{
 (*theWrappedObject).drawRect(rect);
}

void PythonQtWrapper_QPainter::drawChord(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen)
{
 (*theWrappedObject).drawChord(arg__1, a, alen);
}

QPoint  PythonQtWrapper_QPainter::brushOrigin(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).brushOrigin();
}

QPaintEngine*  PythonQtWrapper_QPainter::paintEngine(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).paintEngine();
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm, const QRectF&  sr)
{
 (*theWrappedObject).drawPixmap(p, pm, sr);
}

void PythonQtWrapper_QPainter::drawRect(QPainter* theWrappedObject, const QRect&  rect)
{
 (*theWrappedObject).drawRect(rect);
}

QRegion  PythonQtWrapper_QPainter::clipRegion(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).clipRegion();
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QRect&  r, const QImage&  image)
{
 (*theWrappedObject).drawImage(r, image);
}

QPainter::CompositionMode  PythonQtWrapper_QPainter::compositionMode(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).compositionMode();
}

void PythonQtWrapper_QPainter::drawEllipse(QPainter* theWrappedObject, const QPoint&  center, int  rx, int  ry)
{
 (*theWrappedObject).drawEllipse(center, rx, ry);
}

void PythonQtWrapper_QPainter::resetTransform(QPainter* theWrappedObject)
{
 (*theWrappedObject).resetTransform();
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, const QPointF&  p, const QString&  s)
{
 (*theWrappedObject).drawText(p, s);
}

void PythonQtWrapper_QPainter::static_QPainter_restoreRedirected(const QPaintDevice*  device)
{
QPainter::restoreRedirected(device);
}

void PythonQtWrapper_QPainter::setRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint, bool  on)
{
 (*theWrappedObject).setRenderHint(hint, on);
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm, const QRect&  sr)
{
 (*theWrappedObject).drawPixmap(p, pm, sr);
}

void PythonQtWrapper_QPainter::drawEllipse(QPainter* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry)
{
 (*theWrappedObject).drawEllipse(center, rx, ry);
}

void PythonQtWrapper_QPainter::setTransform(QPainter* theWrappedObject, const QTransform&  transform, bool  combine)
{
 (*theWrappedObject).setTransform(transform, combine);
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm)
{
 (*theWrappedObject).drawPixmap(x, y, pm);
}

QMatrix  PythonQtWrapper_QPainter::combinedMatrix(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).combinedMatrix();
}

void PythonQtWrapper_QPainter::drawRect(QPainter* theWrappedObject, int  x1, int  y1, int  w, int  h)
{
 (*theWrappedObject).drawRect(x1, y1, w, h);
}

void PythonQtWrapper_QPainter::drawTextItem(QPainter* theWrappedObject, int  x, int  y, const QTextItem&  ti)
{
 (*theWrappedObject).drawTextItem(x, y, ti);
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QBrush&  arg__2)
{
 (*theWrappedObject).fillRect(arg__1, arg__2);
}

void PythonQtWrapper_QPainter::setWorldMatrix(QPainter* theWrappedObject, const QMatrix&  matrix, bool  combine)
{
 (*theWrappedObject).setWorldMatrix(matrix, combine);
}

QRect  PythonQtWrapper_QPainter::boundingRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text)
{
return  (*theWrappedObject).boundingRect(x, y, w, h, flags, text);
}

void PythonQtWrapper_QPainter::translate(QPainter* theWrappedObject, const QPointF&  offset)
{
 (*theWrappedObject).translate(offset);
}

void PythonQtWrapper_QPainter::drawLines(QPainter* theWrappedObject, const QVector<QLine >&  lines)
{
 (*theWrappedObject).drawLines(lines);
}

void PythonQtWrapper_QPainter::setRenderHints(QPainter* theWrappedObject, QPainter::RenderHints  hints, bool  on)
{
 (*theWrappedObject).setRenderHints(hints, on);
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, int  x, int  y, const QImage&  image, int  sx, int  sy, int  sw, int  sh, Qt::ImageConversionFlags  flags)
{
 (*theWrappedObject).drawImage(x, y, image, sx, sy, sw, sh, flags);
}

void PythonQtWrapper_QPainter::drawEllipse(QPainter* theWrappedObject, const QRect&  r)
{
 (*theWrappedObject).drawEllipse(r);
}

void PythonQtWrapper_QPainter::drawRects(QPainter* theWrappedObject, const QVector<QRectF >&  rectangles)
{
 (*theWrappedObject).drawRects(rectangles);
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image)
{
 (*theWrappedObject).drawImage(p, image);
}

void PythonQtWrapper_QPainter::drawTiledPixmap(QPainter* theWrappedObject, const QRect&  arg__1, const QPixmap&  arg__2, const QPoint&  arg__3)
{
 (*theWrappedObject).drawTiledPixmap(arg__1, arg__2, arg__3);
}

void PythonQtWrapper_QPainter::setViewport(QPainter* theWrappedObject, int  x, int  y, int  w, int  h)
{
 (*theWrappedObject).setViewport(x, y, w, h);
}

void PythonQtWrapper_QPainter::setPen(QPainter* theWrappedObject, const QColor&  color)
{
 (*theWrappedObject).setPen(color);
}

void PythonQtWrapper_QPainter::drawConvexPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon)
{
 (*theWrappedObject).drawConvexPolygon(polygon);
}

void PythonQtWrapper_QPainter::drawPoint(QPainter* theWrappedObject, const QPointF&  pt)
{
 (*theWrappedObject).drawPoint(pt);
}

void PythonQtWrapper_QPainter::translate(QPainter* theWrappedObject, qreal  dx, qreal  dy)
{
 (*theWrappedObject).translate(dx, dy);
}

void PythonQtWrapper_QPainter::setBrush(QPainter* theWrappedObject, Qt::BrushStyle  style)
{
 (*theWrappedObject).setBrush(style);
}

void PythonQtWrapper_QPainter::setViewTransformEnabled(QPainter* theWrappedObject, bool  enable)
{
 (*theWrappedObject).setViewTransformEnabled(enable);
}

void PythonQtWrapper_QPainter::drawPie(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen)
{
 (*theWrappedObject).drawPie(arg__1, a, alen);
}

Qt::LayoutDirection  PythonQtWrapper_QPainter::layoutDirection(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).layoutDirection();
}

void PythonQtWrapper_QPainter::drawLine(QPainter* theWrappedObject, const QPoint&  p1, const QPoint&  p2)
{
 (*theWrappedObject).drawLine(p1, p2);
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QRect&  r, const QPixmap&  pm)
{
 (*theWrappedObject).drawPixmap(r, pm);
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh)
{
 (*theWrappedObject).drawPixmap(x, y, pm, sx, sy, sw, sh);
}

void PythonQtWrapper_QPainter::setClipping(QPainter* theWrappedObject, bool  enable)
{
 (*theWrappedObject).setClipping(enable);
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image)
{
 (*theWrappedObject).drawImage(p, image);
}

void PythonQtWrapper_QPainter::drawLine(QPainter* theWrappedObject, const QLine&  line)
{
 (*theWrappedObject).drawLine(line);
}

void PythonQtWrapper_QPainter::drawPolyline(QPainter* theWrappedObject, const QPolygon&  polygon)
{
 (*theWrappedObject).drawPolyline(polygon);
}

void PythonQtWrapper_QPainter::drawPie(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen)
{
 (*theWrappedObject).drawPie(rect, a, alen);
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, const QRect&  r, int  flags, const QString&  text, QRect*  br)
{
 (*theWrappedObject).drawText(r, flags, text, br);
}

void PythonQtWrapper_QPainter::setBrush(QPainter* theWrappedObject, const QBrush&  brush)
{
 (*theWrappedObject).setBrush(brush);
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QBrush&  arg__5)
{
 (*theWrappedObject).fillRect(x, y, w, h, arg__5);
}

const QFont&  PythonQtWrapper_QPainter::font(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).font();
}

void PythonQtWrapper_QPainter::setPen(QPainter* theWrappedObject, Qt::PenStyle  style)
{
 (*theWrappedObject).setPen(style);
}

QRectF  PythonQtWrapper_QPainter::boundingRect(QPainter* theWrappedObject, const QRectF&  rect, const QString&  text, const QTextOption&  o)
{
return  (*theWrappedObject).boundingRect(rect, text, o);
}

void PythonQtWrapper_QPainter::setClipRect(QPainter* theWrappedObject, const QRectF&  arg__1, Qt::ClipOperation  op)
{
 (*theWrappedObject).setClipRect(arg__1, op);
}

const QBrush&  PythonQtWrapper_QPainter::brush(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).brush();
}

void PythonQtWrapper_QPainter::setLayoutDirection(QPainter* theWrappedObject, Qt::LayoutDirection  direction)
{
 (*theWrappedObject).setLayoutDirection(direction);
}

QPainterPath  PythonQtWrapper_QPainter::clipPath(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).clipPath();
}

void PythonQtWrapper_QPainter::drawArc(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen)
{
 (*theWrappedObject).drawArc(arg__1, a, alen);
}

void PythonQtWrapper_QPainter::drawPoints(QPainter* theWrappedObject, const QPolygon&  points)
{
 (*theWrappedObject).drawPoints(points);
}

QPainter::RenderHints  PythonQtWrapper_QPainter::renderHints(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).renderHints();
}

void PythonQtWrapper_QPainter::eraseRect(QPainter* theWrappedObject, const QRect&  arg__1)
{
 (*theWrappedObject).eraseRect(arg__1);
}

void PythonQtWrapper_QPainter::drawTiledPixmap(QPainter* theWrappedObject, const QRectF&  rect, const QPixmap&  pm, const QPointF&  offset)
{
 (*theWrappedObject).drawTiledPixmap(rect, pm, offset);
}

void PythonQtWrapper_QPainter::rotate(QPainter* theWrappedObject, qreal  a)
{
 (*theWrappedObject).rotate(a);
}

QPaintDevice*  PythonQtWrapper_QPainter::static_QPainter_redirected(const QPaintDevice*  device, QPoint*  offset)
{
return QPainter::redirected(device, offset);
}

void PythonQtWrapper_QPainter::drawPoint(QPainter* theWrappedObject, const QPoint&  p)
{
 (*theWrappedObject).drawPoint(p);
}

void PythonQtWrapper_QPainter::restore(QPainter* theWrappedObject)
{
 (*theWrappedObject).restore();
}

void PythonQtWrapper_QPainter::resetMatrix(QPainter* theWrappedObject)
{
 (*theWrappedObject).resetMatrix();
}

void PythonQtWrapper_QPainter::drawLine(QPainter* theWrappedObject, const QLineF&  line)
{
 (*theWrappedObject).drawLine(line);
}

const QBrush&  PythonQtWrapper_QPainter::background(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).background();
}

void PythonQtWrapper_QPainter::drawConvexPolygon(QPainter* theWrappedObject, const QPolygon&  polygon)
{
 (*theWrappedObject).drawConvexPolygon(polygon);
}

void PythonQtWrapper_QPainter::eraseRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h)
{
 (*theWrappedObject).eraseRect(x, y, w, h);
}

void PythonQtWrapper_QPainter::strokePath(QPainter* theWrappedObject, const QPainterPath&  path, const QPen&  pen)
{
 (*theWrappedObject).strokePath(path, pen);
}

void PythonQtWrapper_QPainter::eraseRect(QPainter* theWrappedObject, const QRectF&  arg__1)
{
 (*theWrappedObject).eraseRect(arg__1);
}

void PythonQtWrapper_QPainter::setClipPath(QPainter* theWrappedObject, const QPainterPath&  path, Qt::ClipOperation  op)
{
 (*theWrappedObject).setClipPath(path, op);
}

bool  PythonQtWrapper_QPainter::viewTransformEnabled(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).viewTransformEnabled();
}

void PythonQtWrapper_QPainter::drawLines(QPainter* theWrappedObject, const QVector<QLineF >&  lines)
{
 (*theWrappedObject).drawLines(lines);
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QBrush&  arg__2)
{
 (*theWrappedObject).fillRect(arg__1, arg__2);
}

void PythonQtWrapper_QPainter::drawPicture(QPainter* theWrappedObject, const QPointF&  p, const QPicture&  picture)
{
 (*theWrappedObject).drawPicture(p, picture);
}

void PythonQtWrapper_QPainter::setBrushOrigin(QPainter* theWrappedObject, const QPointF&  arg__1)
{
 (*theWrappedObject).setBrushOrigin(arg__1);
}

void PythonQtWrapper_QPainter::setOpacity(QPainter* theWrappedObject, qreal  opacity)
{
 (*theWrappedObject).setOpacity(opacity);
}

QRectF  PythonQtWrapper_QPainter::boundingRect(QPainter* theWrappedObject, const QRectF&  rect, int  flags, const QString&  text)
{
return  (*theWrappedObject).boundingRect(rect, flags, text);
}

void PythonQtWrapper_QPainter::drawRoundedRect(QPainter* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode)
{
 (*theWrappedObject).drawRoundedRect(rect, xRadius, yRadius, mode);
}

void PythonQtWrapper_QPainter::drawRoundedRect(QPainter* theWrappedObject, const QRect&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode)
{
 (*theWrappedObject).drawRoundedRect(rect, xRadius, yRadius, mode);
}

qreal  PythonQtWrapper_QPainter::opacity(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).opacity();
}

void PythonQtWrapper_QPainter::drawChord(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen)
{
 (*theWrappedObject).drawChord(rect, a, alen);
}

bool  PythonQtWrapper_QPainter::isActive(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).isActive();
}

const QTransform&  PythonQtWrapper_QPainter::deviceTransform(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).deviceTransform();
}

QRect  PythonQtWrapper_QPainter::window(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).window();
}

void PythonQtWrapper_QPainter::drawLine(QPainter* theWrappedObject, int  x1, int  y1, int  x2, int  y2)
{
 (*theWrappedObject).drawLine(x1, y1, x2, y2);
}

void PythonQtWrapper_QPainter::drawRoundRect(QPainter* theWrappedObject, const QRect&  r, int  xround, int  yround)
{
 (*theWrappedObject).drawRoundRect(r, xround, yround);
}

bool  PythonQtWrapper_QPainter::worldMatrixEnabled(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).worldMatrixEnabled();
}

QTransform  PythonQtWrapper_QPainter::combinedTransform(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).combinedTransform();
}

void PythonQtWrapper_QPainter::drawLines(QPainter* theWrappedObject, const QVector<QPoint >&  pointPairs)
{
 (*theWrappedObject).drawLines(pointPairs);
}

void PythonQtWrapper_QPainter::drawEllipse(QPainter* theWrappedObject, const QRectF&  r)
{
 (*theWrappedObject).drawEllipse(r);
}

const QMatrix&  PythonQtWrapper_QPainter::worldMatrix(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).worldMatrix();
}

void PythonQtWrapper_QPainter::drawArc(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen)
{
 (*theWrappedObject).drawArc(x, y, w, h, a, alen);
}

void PythonQtWrapper_QPainter::drawRoundRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  arg__5, int  arg__6)
{
 (*theWrappedObject).drawRoundRect(x, y, w, h, arg__5, arg__6);
}

void PythonQtWrapper_QPainter::setWorldMatrixEnabled(QPainter* theWrappedObject, bool  enabled)
{
 (*theWrappedObject).setWorldMatrixEnabled(enabled);
}

void PythonQtWrapper_QPainter::scale(QPainter* theWrappedObject, qreal  sx, qreal  sy)
{
 (*theWrappedObject).scale(sx, sy);
}

const QTransform&  PythonQtWrapper_QPainter::worldTransform(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).worldTransform();
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, QRect*  br)
{
 (*theWrappedObject).drawText(x, y, w, h, flags, text, br);
}

void PythonQtWrapper_QPainter::drawTiledPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  arg__5, int  sx, int  sy)
{
 (*theWrappedObject).drawTiledPixmap(x, y, w, h, arg__5, sx, sy);
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, const QPoint&  p, const QString&  s)
{
 (*theWrappedObject).drawText(p, s);
}

const QMatrix&  PythonQtWrapper_QPainter::deviceMatrix(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).deviceMatrix();
}

void PythonQtWrapper_QPainter::setClipRegion(QPainter* theWrappedObject, const QRegion&  arg__1, Qt::ClipOperation  op)
{
 (*theWrappedObject).setClipRegion(arg__1, op);
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QRectF&  r, const QImage&  image)
{
 (*theWrappedObject).drawImage(r, image);
}

void PythonQtWrapper_QPainter::drawPolyline(QPainter* theWrappedObject, const QPolygonF&  polyline)
{
 (*theWrappedObject).drawPolyline(polyline);
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image, const QRectF&  sr, Qt::ImageConversionFlags  flags)
{
 (*theWrappedObject).drawImage(p, image, sr, flags);
}

void PythonQtWrapper_QPainter::setPen(QPainter* theWrappedObject, const QPen&  pen)
{
 (*theWrappedObject).setPen(pen);
}

void PythonQtWrapper_QPainter::static_QPainter_setRedirected(const QPaintDevice*  device, QPaintDevice*  replacement, const QPoint&  offset)
{
QPainter::setRedirected(device, replacement, offset);
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm)
{
 (*theWrappedObject).drawPixmap(p, pm);
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QRectF&  targetRect, const QPixmap&  pixmap, const QRectF&  sourceRect)
{
 (*theWrappedObject).drawPixmap(targetRect, pixmap, sourceRect);
}

void PythonQtWrapper_QPainter::drawTextItem(QPainter* theWrappedObject, const QPoint&  p, const QTextItem&  ti)
{
 (*theWrappedObject).drawTextItem(p, ti);
}

void PythonQtWrapper_QPainter::drawTextItem(QPainter* theWrappedObject, const QPointF&  p, const QTextItem&  ti)
{
 (*theWrappedObject).drawTextItem(p, ti);
}

void PythonQtWrapper_QPainter::drawLines(QPainter* theWrappedObject, const QVector<QPointF >&  pointPairs)
{
 (*theWrappedObject).drawLines(pointPairs);
}

void PythonQtWrapper_QPainter::drawPicture(QPainter* theWrappedObject, int  x, int  y, const QPicture&  picture)
{
 (*theWrappedObject).drawPicture(x, y, picture);
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, int  x, int  y, const QString&  s)
{
 (*theWrappedObject).drawText(x, y, s);
}

void PythonQtWrapper_QPainter::setBackground(QPainter* theWrappedObject, const QBrush&  bg)
{
 (*theWrappedObject).setBackground(bg);
}

QRect  PythonQtWrapper_QPainter::boundingRect(QPainter* theWrappedObject, const QRect&  rect, int  flags, const QString&  text)
{
return  (*theWrappedObject).boundingRect(rect, flags, text);
}

bool  PythonQtWrapper_QPainter::testRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint) const
{
return  (*theWrappedObject).testRenderHint(hint);
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QRect&  targetRect, const QPixmap&  pixmap, const QRect&  sourceRect)
{
 (*theWrappedObject).drawPixmap(targetRect, pixmap, sourceRect);
}

void PythonQtWrapper_QPainter::setWorldTransform(QPainter* theWrappedObject, const QTransform&  matrix, bool  combine)
{
 (*theWrappedObject).setWorldTransform(matrix, combine);
}

void PythonQtWrapper_QPainter::drawPie(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen)
{
 (*theWrappedObject).drawPie(x, y, w, h, a, alen);
}

void PythonQtWrapper_QPainter::drawChord(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen)
{
 (*theWrappedObject).drawChord(x, y, w, h, a, alen);
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm)
{
 (*theWrappedObject).drawPixmap(p, pm);
}

void PythonQtWrapper_QPainter::drawRects(QPainter* theWrappedObject, const QVector<QRect >&  rectangles)
{
 (*theWrappedObject).drawRects(rectangles);
}

const QTransform&  PythonQtWrapper_QPainter::transform(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).transform();
}

const QPen&  PythonQtWrapper_QPainter::pen(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).pen();
}

void PythonQtWrapper_QPainter::drawPoints(QPainter* theWrappedObject, const QPolygonF&  points)
{
 (*theWrappedObject).drawPoints(points);
}

void PythonQtWrapper_QPainter::drawRoundRect(QPainter* theWrappedObject, const QRectF&  r, int  xround, int  yround)
{
 (*theWrappedObject).drawRoundRect(r, xround, yround);
}

void PythonQtWrapper_QPainter::setClipRect(QPainter* theWrappedObject, const QRect&  arg__1, Qt::ClipOperation  op)
{
 (*theWrappedObject).setClipRect(arg__1, op);
}

void PythonQtWrapper_QPainter::drawEllipse(QPainter* theWrappedObject, int  x, int  y, int  w, int  h)
{
 (*theWrappedObject).drawEllipse(x, y, w, h);
}

void PythonQtWrapper_QPainter::drawArc(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen)
{
 (*theWrappedObject).drawArc(rect, a, alen);
}

void PythonQtWrapper_QPainter::setCompositionMode(QPainter* theWrappedObject, QPainter::CompositionMode  mode)
{
 (*theWrappedObject).setCompositionMode(mode);
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QRect&  targetRect, const QImage&  image, const QRect&  sourceRect, Qt::ImageConversionFlags  flags)
{
 (*theWrappedObject).drawImage(targetRect, image, sourceRect, flags);
}

void PythonQtWrapper_QPainter::setWindow(QPainter* theWrappedObject, int  x, int  y, int  w, int  h)
{
 (*theWrappedObject).setWindow(x, y, w, h);
}

void PythonQtWrapper_QPainter::fillPath(QPainter* theWrappedObject, const QPainterPath&  path, const QBrush&  brush)
{
 (*theWrappedObject).fillPath(path, brush);
}

Qt::BGMode  PythonQtWrapper_QPainter::backgroundMode(QPainter* theWrappedObject) const
{
return  (*theWrappedObject).backgroundMode();
}

void PythonQtWrapper_QPainter::drawPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon, Qt::FillRule  fillRule)
{
 (*theWrappedObject).drawPolygon(polygon, fillRule);
}

