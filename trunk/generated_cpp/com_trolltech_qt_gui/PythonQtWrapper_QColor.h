#ifndef PYTHONQTWRAPPER_QCOLOR_H
#define PYTHONQTWRAPPER_QCOLOR_H

#include <qcolor.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qcolor.h>
#include <qdatastream.h>
#include <qstringlist.h>

class PythonQtWrapper_QColor : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Spec )
enum Spec{
  Invalid = QColor::Invalid,   Rgb = QColor::Rgb,   Hsv = QColor::Hsv,   Cmyk = QColor::Cmyk};
public slots:
QColor* new_QColor();
QColor* new_QColor(Qt::GlobalColor  color);
QColor* new_QColor(const QColor&  color);
QColor* new_QColor(const QString&  name);
QColor* new_QColor(int  r, int  g, int  b, int  a = 255);
QColor* new_QColor(unsigned int  rgb);
void delete_QColor(QColor* obj) { delete obj; } 
   void setRedF(QColor* theWrappedObject, qreal  red);
   int  magenta(QColor* theWrappedObject) const;
   unsigned int  rgb(QColor* theWrappedObject) const;
   QColor  static_QColor_fromRgbF(qreal  r, qreal  g, qreal  b, qreal  a = 1.0);
   int  black(QColor* theWrappedObject) const;
   void setRed(QColor* theWrappedObject, int  red);
   int  alpha(QColor* theWrappedObject) const;
   QColor  toHsv(QColor* theWrappedObject) const;
   void setRgb(QColor* theWrappedObject, int  r, int  g, int  b, int  a = 255);
   void setCmyk(QColor* theWrappedObject, int  c, int  m, int  y, int  k, int  a = 255);
   void setAlpha(QColor* theWrappedObject, int  alpha);
   int  red(QColor* theWrappedObject) const;
   qreal  greenF(QColor* theWrappedObject) const;
   QStringList  static_QColor_colorNames();
   QColor  toCmyk(QColor* theWrappedObject) const;
   qreal  blackF(QColor* theWrappedObject) const;
   bool  operator_equal(QColor* theWrappedObject, const QColor&  c) const;
   int  saturation(QColor* theWrappedObject) const;
   QColor  toRgb(QColor* theWrappedObject) const;
   qreal  redF(QColor* theWrappedObject) const;
   QColor  static_QColor_fromRgba(unsigned int  rgba);
   bool  isValid(QColor* theWrappedObject) const;
   qreal  magentaF(QColor* theWrappedObject) const;
   void setRgb(QColor* theWrappedObject, unsigned int  rgb);
   QColor  darker(QColor* theWrappedObject, int  f = 200) const;
   QColor  static_QColor_fromCmyk(int  c, int  m, int  y, int  k, int  a = 255);
   void setGreen(QColor* theWrappedObject, int  green);
   int  yellow(QColor* theWrappedObject) const;
   qreal  blueF(QColor* theWrappedObject) const;
   QColor  static_QColor_fromRgb(int  r, int  g, int  b, int  a = 255);
   void setHsv(QColor* theWrappedObject, int  h, int  s, int  v, int  a = 255);
   QColor  convertTo(QColor* theWrappedObject, QColor::Spec  colorSpec) const;
   int  cyan(QColor* theWrappedObject) const;
   void setGreenF(QColor* theWrappedObject, qreal  green);
   int  green(QColor* theWrappedObject) const;
   void setRgbF(QColor* theWrappedObject, qreal  r, qreal  g, qreal  b, qreal  a = 1.0);
   qreal  alphaF(QColor* theWrappedObject) const;
   QColor  static_QColor_fromHsv(int  h, int  s, int  v, int  a = 255);
   int  hue(QColor* theWrappedObject) const;
   int  value(QColor* theWrappedObject) const;
   qreal  yellowF(QColor* theWrappedObject) const;
   QColor  static_QColor_fromRgb(unsigned int  rgb);
   QColor  static_QColor_fromCmykF(qreal  c, qreal  m, qreal  y, qreal  k, qreal  a = 1.0);
   QColor  static_QColor_fromHsvF(qreal  h, qreal  s, qreal  v, qreal  a = 1.0);
   int  blue(QColor* theWrappedObject) const;
   qreal  cyanF(QColor* theWrappedObject) const;
   qreal  hueF(QColor* theWrappedObject) const;
   unsigned int  rgba(QColor* theWrappedObject) const;
   qreal  saturationF(QColor* theWrappedObject) const;
   void setBlueF(QColor* theWrappedObject, qreal  blue);
   qreal  valueF(QColor* theWrappedObject) const;
   QString  name(QColor* theWrappedObject) const;
   QColor  lighter(QColor* theWrappedObject, int  f = 150) const;
   void setAlphaF(QColor* theWrappedObject, qreal  alpha);
   void setRgba(QColor* theWrappedObject, unsigned int  rgba);
   void writeTo(QColor* theWrappedObject, QDataStream&  arg__1);
   void setBlue(QColor* theWrappedObject, int  blue);
   void setNamedColor(QColor* theWrappedObject, const QString&  name);
   void setCmykF(QColor* theWrappedObject, qreal  c, qreal  m, qreal  y, qreal  k, qreal  a = 1.0);
   QColor::Spec  spec(QColor* theWrappedObject) const;
   void setHsvF(QColor* theWrappedObject, qreal  h, qreal  s, qreal  v, qreal  a = 1.0);
   void readFrom(QColor* theWrappedObject, QDataStream&  arg__1);
};

#endif // PYTHONQTWRAPPER_QCOLOR_H
