#include "PythonQtWrapper_QColor.h"

#include <QVariant>
#include <qcolor.h>
#include <qdatastream.h>
#include <qstringlist.h>

QColor* PythonQtWrapper_QColor::new_QColor()
{ 
return new QColor(); }

QColor* PythonQtWrapper_QColor::new_QColor(Qt::GlobalColor  color)
{ 
return new QColor(color); }

QColor* PythonQtWrapper_QColor::new_QColor(const QColor&  color)
{ 
return new QColor(color); }

QColor* PythonQtWrapper_QColor::new_QColor(const QString&  name)
{ 
return new QColor(name); }

QColor* PythonQtWrapper_QColor::new_QColor(int  r, int  g, int  b, int  a)
{ 
return new QColor(r, g, b, a); }

QColor* PythonQtWrapper_QColor::new_QColor(unsigned int  rgb)
{ 
return new QColor(rgb); }

int  PythonQtWrapper_QColor::alpha(QColor* theWrappedObject) const
{
return theWrappedObject->alpha();
}

qreal  PythonQtWrapper_QColor::alphaF(QColor* theWrappedObject) const
{
return theWrappedObject->alphaF();
}

int  PythonQtWrapper_QColor::black(QColor* theWrappedObject) const
{
return theWrappedObject->black();
}

qreal  PythonQtWrapper_QColor::blackF(QColor* theWrappedObject) const
{
return theWrappedObject->blackF();
}

int  PythonQtWrapper_QColor::blue(QColor* theWrappedObject) const
{
return theWrappedObject->blue();
}

qreal  PythonQtWrapper_QColor::blueF(QColor* theWrappedObject) const
{
return theWrappedObject->blueF();
}

QStringList  PythonQtWrapper_QColor::static_QColor_colorNames()
{
return QColor::colorNames();
}

QColor  PythonQtWrapper_QColor::convertTo(QColor* theWrappedObject, QColor::Spec  colorSpec) const
{
return theWrappedObject->convertTo(colorSpec);
}

int  PythonQtWrapper_QColor::cyan(QColor* theWrappedObject) const
{
return theWrappedObject->cyan();
}

qreal  PythonQtWrapper_QColor::cyanF(QColor* theWrappedObject) const
{
return theWrappedObject->cyanF();
}

QColor  PythonQtWrapper_QColor::darker(QColor* theWrappedObject, int  f) const
{
return theWrappedObject->darker(f);
}

QColor  PythonQtWrapper_QColor::static_QColor_fromCmyk(int  c, int  m, int  y, int  k, int  a)
{
return QColor::fromCmyk(c, m, y, k, a);
}

QColor  PythonQtWrapper_QColor::static_QColor_fromCmykF(qreal  c, qreal  m, qreal  y, qreal  k, qreal  a)
{
return QColor::fromCmykF(c, m, y, k, a);
}

QColor  PythonQtWrapper_QColor::static_QColor_fromHsv(int  h, int  s, int  v, int  a)
{
return QColor::fromHsv(h, s, v, a);
}

QColor  PythonQtWrapper_QColor::static_QColor_fromHsvF(qreal  h, qreal  s, qreal  v, qreal  a)
{
return QColor::fromHsvF(h, s, v, a);
}

QColor  PythonQtWrapper_QColor::static_QColor_fromRgb(int  r, int  g, int  b, int  a)
{
return QColor::fromRgb(r, g, b, a);
}

QColor  PythonQtWrapper_QColor::static_QColor_fromRgb(unsigned int  rgb)
{
return QColor::fromRgb(rgb);
}

QColor  PythonQtWrapper_QColor::static_QColor_fromRgbF(qreal  r, qreal  g, qreal  b, qreal  a)
{
return QColor::fromRgbF(r, g, b, a);
}

QColor  PythonQtWrapper_QColor::static_QColor_fromRgba(unsigned int  rgba)
{
return QColor::fromRgba(rgba);
}

int  PythonQtWrapper_QColor::green(QColor* theWrappedObject) const
{
return theWrappedObject->green();
}

qreal  PythonQtWrapper_QColor::greenF(QColor* theWrappedObject) const
{
return theWrappedObject->greenF();
}

int  PythonQtWrapper_QColor::hue(QColor* theWrappedObject) const
{
return theWrappedObject->hue();
}

qreal  PythonQtWrapper_QColor::hueF(QColor* theWrappedObject) const
{
return theWrappedObject->hueF();
}

bool  PythonQtWrapper_QColor::isValid(QColor* theWrappedObject) const
{
return theWrappedObject->isValid();
}

QColor  PythonQtWrapper_QColor::lighter(QColor* theWrappedObject, int  f) const
{
return theWrappedObject->lighter(f);
}

int  PythonQtWrapper_QColor::magenta(QColor* theWrappedObject) const
{
return theWrappedObject->magenta();
}

qreal  PythonQtWrapper_QColor::magentaF(QColor* theWrappedObject) const
{
return theWrappedObject->magentaF();
}

QString  PythonQtWrapper_QColor::name(QColor* theWrappedObject) const
{
return theWrappedObject->name();
}

void PythonQtWrapper_QColor::writeTo(QColor* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  *theWrappedObject;
}

bool  PythonQtWrapper_QColor::operator_equal(QColor* theWrappedObject, const QColor&  c) const
{
return *theWrappedObject == c;
}

void PythonQtWrapper_QColor::readFrom(QColor* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  *theWrappedObject;
}

int  PythonQtWrapper_QColor::red(QColor* theWrappedObject) const
{
return theWrappedObject->red();
}

qreal  PythonQtWrapper_QColor::redF(QColor* theWrappedObject) const
{
return theWrappedObject->redF();
}

unsigned int  PythonQtWrapper_QColor::rgb(QColor* theWrappedObject) const
{
return theWrappedObject->rgb();
}

unsigned int  PythonQtWrapper_QColor::rgba(QColor* theWrappedObject) const
{
return theWrappedObject->rgba();
}

int  PythonQtWrapper_QColor::saturation(QColor* theWrappedObject) const
{
return theWrappedObject->saturation();
}

qreal  PythonQtWrapper_QColor::saturationF(QColor* theWrappedObject) const
{
return theWrappedObject->saturationF();
}

void PythonQtWrapper_QColor::setAlpha(QColor* theWrappedObject, int  alpha)
{
theWrappedObject->setAlpha(alpha);
}

void PythonQtWrapper_QColor::setAlphaF(QColor* theWrappedObject, qreal  alpha)
{
theWrappedObject->setAlphaF(alpha);
}

void PythonQtWrapper_QColor::setBlue(QColor* theWrappedObject, int  blue)
{
theWrappedObject->setBlue(blue);
}

void PythonQtWrapper_QColor::setBlueF(QColor* theWrappedObject, qreal  blue)
{
theWrappedObject->setBlueF(blue);
}

void PythonQtWrapper_QColor::setCmyk(QColor* theWrappedObject, int  c, int  m, int  y, int  k, int  a)
{
theWrappedObject->setCmyk(c, m, y, k, a);
}

void PythonQtWrapper_QColor::setCmykF(QColor* theWrappedObject, qreal  c, qreal  m, qreal  y, qreal  k, qreal  a)
{
theWrappedObject->setCmykF(c, m, y, k, a);
}

void PythonQtWrapper_QColor::setGreen(QColor* theWrappedObject, int  green)
{
theWrappedObject->setGreen(green);
}

void PythonQtWrapper_QColor::setGreenF(QColor* theWrappedObject, qreal  green)
{
theWrappedObject->setGreenF(green);
}

void PythonQtWrapper_QColor::setHsv(QColor* theWrappedObject, int  h, int  s, int  v, int  a)
{
theWrappedObject->setHsv(h, s, v, a);
}

void PythonQtWrapper_QColor::setHsvF(QColor* theWrappedObject, qreal  h, qreal  s, qreal  v, qreal  a)
{
theWrappedObject->setHsvF(h, s, v, a);
}

void PythonQtWrapper_QColor::setNamedColor(QColor* theWrappedObject, const QString&  name)
{
theWrappedObject->setNamedColor(name);
}

void PythonQtWrapper_QColor::setRed(QColor* theWrappedObject, int  red)
{
theWrappedObject->setRed(red);
}

void PythonQtWrapper_QColor::setRedF(QColor* theWrappedObject, qreal  red)
{
theWrappedObject->setRedF(red);
}

void PythonQtWrapper_QColor::setRgb(QColor* theWrappedObject, int  r, int  g, int  b, int  a)
{
theWrappedObject->setRgb(r, g, b, a);
}

void PythonQtWrapper_QColor::setRgb(QColor* theWrappedObject, unsigned int  rgb)
{
theWrappedObject->setRgb(rgb);
}

void PythonQtWrapper_QColor::setRgbF(QColor* theWrappedObject, qreal  r, qreal  g, qreal  b, qreal  a)
{
theWrappedObject->setRgbF(r, g, b, a);
}

void PythonQtWrapper_QColor::setRgba(QColor* theWrappedObject, unsigned int  rgba)
{
theWrappedObject->setRgba(rgba);
}

QColor::Spec  PythonQtWrapper_QColor::spec(QColor* theWrappedObject) const
{
return theWrappedObject->spec();
}

QColor  PythonQtWrapper_QColor::toCmyk(QColor* theWrappedObject) const
{
return theWrappedObject->toCmyk();
}

QColor  PythonQtWrapper_QColor::toHsv(QColor* theWrappedObject) const
{
return theWrappedObject->toHsv();
}

QColor  PythonQtWrapper_QColor::toRgb(QColor* theWrappedObject) const
{
return theWrappedObject->toRgb();
}

int  PythonQtWrapper_QColor::value(QColor* theWrappedObject) const
{
return theWrappedObject->value();
}

qreal  PythonQtWrapper_QColor::valueF(QColor* theWrappedObject) const
{
return theWrappedObject->valueF();
}

int  PythonQtWrapper_QColor::yellow(QColor* theWrappedObject) const
{
return theWrappedObject->yellow();
}

qreal  PythonQtWrapper_QColor::yellowF(QColor* theWrappedObject) const
{
return theWrappedObject->yellowF();
}

