#include "PythonQtWrapper_QBrush.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QPixmap>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qimage.h>
#include <qmatrix.h>
#include <qpixmap.h>
#include <qtransform.h>

QBrush* PythonQtWrapper_QBrush::new_QBrush()
{ 
return new QBrush(); }

QBrush* PythonQtWrapper_QBrush::new_QBrush(Qt::BrushStyle  bs)
{ 
return new QBrush(bs); }

QBrush* PythonQtWrapper_QBrush::new_QBrush(Qt::GlobalColor  color, const QPixmap&  pixmap)
{ 
return new QBrush(color, pixmap); }

QBrush* PythonQtWrapper_QBrush::new_QBrush(const QBrush&  brush)
{ 
return new QBrush(brush); }

QBrush* PythonQtWrapper_QBrush::new_QBrush(const QColor&  color, Qt::BrushStyle  bs)
{ 
return new QBrush(color, bs); }

QBrush* PythonQtWrapper_QBrush::new_QBrush(const QColor&  color, const QPixmap&  pixmap)
{ 
return new QBrush(color, pixmap); }

QBrush* PythonQtWrapper_QBrush::new_QBrush(const QGradient&  gradient)
{ 
return new QBrush(gradient); }

QBrush* PythonQtWrapper_QBrush::new_QBrush(const QImage&  image)
{ 
return new QBrush(image); }

QBrush* PythonQtWrapper_QBrush::new_QBrush(const QPixmap&  pixmap)
{ 
return new QBrush(pixmap); }

void PythonQtWrapper_QBrush::setColor(QBrush* theWrappedObject, const QColor&  color)
{
  ( theWrappedObject->setColor(color));
}

const QColor*  PythonQtWrapper_QBrush::color(QBrush* theWrappedObject) const
{
  return &( theWrappedObject->color());
}

void PythonQtWrapper_QBrush::setStyle(QBrush* theWrappedObject, Qt::BrushStyle  arg__1)
{
  ( theWrappedObject->setStyle(arg__1));
}

bool  PythonQtWrapper_QBrush::isOpaque(QBrush* theWrappedObject) const
{
  return ( theWrappedObject->isOpaque());
}

void PythonQtWrapper_QBrush::setTexture(QBrush* theWrappedObject, const QPixmap&  pixmap)
{
  ( theWrappedObject->setTexture(pixmap));
}

QImage  PythonQtWrapper_QBrush::textureImage(QBrush* theWrappedObject) const
{
  return ( theWrappedObject->textureImage());
}

bool  PythonQtWrapper_QBrush::operator_equal(QBrush* theWrappedObject, const QBrush&  b) const
{
  return ( (*theWrappedObject)== b);
}

void PythonQtWrapper_QBrush::setMatrix(QBrush* theWrappedObject, const QMatrix&  mat)
{
  ( theWrappedObject->setMatrix(mat));
}

void PythonQtWrapper_QBrush::writeTo(QBrush* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QBrush::setTextureImage(QBrush* theWrappedObject, const QImage&  image)
{
  ( theWrappedObject->setTextureImage(image));
}

Qt::BrushStyle  PythonQtWrapper_QBrush::style(QBrush* theWrappedObject) const
{
  return ( theWrappedObject->style());
}

const QGradient*  PythonQtWrapper_QBrush::gradient(QBrush* theWrappedObject) const
{
  return ( theWrappedObject->gradient());
}

void PythonQtWrapper_QBrush::setColor(QBrush* theWrappedObject, Qt::GlobalColor  color)
{
  ( theWrappedObject->setColor(color));
}

void PythonQtWrapper_QBrush::setTransform(QBrush* theWrappedObject, const QTransform&  arg__1)
{
  ( theWrappedObject->setTransform(arg__1));
}

void PythonQtWrapper_QBrush::readFrom(QBrush* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

const QMatrix*  PythonQtWrapper_QBrush::matrix(QBrush* theWrappedObject) const
{
  return &( theWrappedObject->matrix());
}

QPixmap  PythonQtWrapper_QBrush::texture(QBrush* theWrappedObject) const
{
  return ( theWrappedObject->texture());
}

QTransform  PythonQtWrapper_QBrush::transform(QBrush* theWrappedObject) const
{
  return ( theWrappedObject->transform());
}

QString PythonQtWrapper_QBrush::toString(QBrush* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

