#include "PythonQtWrapper_QGLWidget.h"

#include <QImage>
#include <QPixmap>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgl.h>
#include <qglcolormap.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

QGLWidget* PythonQtWrapper_QGLWidget::new_QGLWidget(QGLContext*  context, QWidget*  parent, const QGLWidget*  shareWidget, Qt::WindowFlags  f)
{ 
return new QGLWidget(context, parent, shareWidget, f); }

QGLWidget* PythonQtWrapper_QGLWidget::new_QGLWidget(QWidget*  parent, const QGLWidget*  shareWidget, Qt::WindowFlags  f)
{ 
return new QGLWidget(parent, shareWidget, f); }

QGLWidget* PythonQtWrapper_QGLWidget::new_QGLWidget(const QGLFormat&  format, QWidget*  parent, const QGLWidget*  shareWidget, Qt::WindowFlags  f)
{ 
return new QGLWidget(format, parent, shareWidget, f); }

unsigned int  PythonQtWrapper_QGLWidget::bindTexture(QGLWidget* theWrappedObject, const QImage&  image, unsigned int  target, int  format)
{
return theWrappedObject->bindTexture(image, target, format);
}

unsigned int  PythonQtWrapper_QGLWidget::bindTexture(QGLWidget* theWrappedObject, const QPixmap&  pixmap, unsigned int  target, int  format)
{
return theWrappedObject->bindTexture(pixmap, target, format);
}

unsigned int  PythonQtWrapper_QGLWidget::bindTexture(QGLWidget* theWrappedObject, const QString&  fileName)
{
return theWrappedObject->bindTexture(fileName);
}

const QGLColormap&  PythonQtWrapper_QGLWidget::colormap(QGLWidget* theWrappedObject) const
{
return theWrappedObject->colormap();
}

const QGLContext*  PythonQtWrapper_QGLWidget::context(QGLWidget* theWrappedObject) const
{
return theWrappedObject->context();
}

QImage  PythonQtWrapper_QGLWidget::static_QGLWidget_convertToGLFormat(const QImage&  img)
{
return QGLWidget::convertToGLFormat(img);
}

void PythonQtWrapper_QGLWidget::deleteTexture(QGLWidget* theWrappedObject, unsigned int  tx_id)
{
theWrappedObject->deleteTexture(tx_id);
}

void PythonQtWrapper_QGLWidget::doneCurrent(QGLWidget* theWrappedObject)
{
theWrappedObject->doneCurrent();
}

bool  PythonQtWrapper_QGLWidget::doubleBuffer(QGLWidget* theWrappedObject) const
{
return theWrappedObject->doubleBuffer();
}

void PythonQtWrapper_QGLWidget::drawTexture(QGLWidget* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget)
{
theWrappedObject->drawTexture(point, textureId, textureTarget);
}

void PythonQtWrapper_QGLWidget::drawTexture(QGLWidget* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget)
{
theWrappedObject->drawTexture(target, textureId, textureTarget);
}

QGLFormat  PythonQtWrapper_QGLWidget::format(QGLWidget* theWrappedObject) const
{
return theWrappedObject->format();
}

QImage  PythonQtWrapper_QGLWidget::grabFrameBuffer(QGLWidget* theWrappedObject, bool  withAlpha)
{
return theWrappedObject->grabFrameBuffer(withAlpha);
}

bool  PythonQtWrapper_QGLWidget::isSharing(QGLWidget* theWrappedObject) const
{
return theWrappedObject->isSharing();
}

bool  PythonQtWrapper_QGLWidget::isValid(QGLWidget* theWrappedObject) const
{
return theWrappedObject->isValid();
}

void PythonQtWrapper_QGLWidget::makeCurrent(QGLWidget* theWrappedObject)
{
theWrappedObject->makeCurrent();
}

void PythonQtWrapper_QGLWidget::makeOverlayCurrent(QGLWidget* theWrappedObject)
{
theWrappedObject->makeOverlayCurrent();
}

const QGLContext*  PythonQtWrapper_QGLWidget::overlayContext(QGLWidget* theWrappedObject) const
{
return theWrappedObject->overlayContext();
}

QPaintEngine*  PythonQtWrapper_QGLWidget::paintEngine(QGLWidget* theWrappedObject) const
{
return theWrappedObject->paintEngine();
}

void PythonQtWrapper_QGLWidget::qglClearColor(QGLWidget* theWrappedObject, const QColor&  c) const
{
theWrappedObject->qglClearColor(c);
}

void PythonQtWrapper_QGLWidget::qglColor(QGLWidget* theWrappedObject, const QColor&  c) const
{
theWrappedObject->qglColor(c);
}

QPixmap  PythonQtWrapper_QGLWidget::renderPixmap(QGLWidget* theWrappedObject, int  w, int  h, bool  useContext)
{
return theWrappedObject->renderPixmap(w, h, useContext);
}

void PythonQtWrapper_QGLWidget::renderText(QGLWidget* theWrappedObject, double  x, double  y, double  z, const QString&  str, const QFont&  fnt, int  listBase)
{
theWrappedObject->renderText(x, y, z, str, fnt, listBase);
}

void PythonQtWrapper_QGLWidget::renderText(QGLWidget* theWrappedObject, int  x, int  y, const QString&  str, const QFont&  fnt, int  listBase)
{
theWrappedObject->renderText(x, y, str, fnt, listBase);
}

void PythonQtWrapper_QGLWidget::setColormap(QGLWidget* theWrappedObject, const QGLColormap&  map)
{
theWrappedObject->setColormap(map);
}

void PythonQtWrapper_QGLWidget::swapBuffers(QGLWidget* theWrappedObject)
{
theWrappedObject->swapBuffers();
}

