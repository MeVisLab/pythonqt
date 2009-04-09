#ifndef PYTHONQTWRAPPER_QCOLOR_H
#define PYTHONQTWRAPPER_QCOLOR_H

#include <qcolor.h>
#include <QObject>

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
   int  alpha(QColor* theWrappedObject) const;
   qreal  alphaF(QColor* theWrappedObject) const;
   int  black(QColor* theWrappedObject) const;
   qreal  blackF(QColor* theWrappedObject) const;
   int  blue(QColor* theWrappedObject) const;
   qreal  blueF(QColor* theWrappedObject) const;
   QStringList  static_QColor_colorNames();
   QColor  convertTo(QColor* theWrappedObject, QColor::Spec  colorSpec) const;
   int  cyan(QColor* theWrappedObject) const;
   qreal  cyanF(QColor* theWrappedObject) const;
   QColor  darker(QColor* theWrappedObject, int  f = 200) const;
   QColor  static_QColor_fromCmyk(int  c, int  m, int  y, int  k, int  a = 255);
   QColor  static_QColor_fromCmykF(qreal  c, qreal  m, qreal  y, qreal  k, qreal  a = 1.0);
   QColor  static_QColor_fromHsv(int  h, int  s, int  v, int  a = 255);
   QColor  static_QColor_fromHsvF(qreal  h, qreal  s, qreal  v, qreal  a = 1.0);
   QColor  static_QColor_fromRgb(int  r, int  g, int  b, int  a = 255);
   QColor  static_QColor_fromRgb(unsigned int  rgb);
   QColor  static_QColor_fromRgbF(qreal  r, qreal  g, qreal  b, qreal  a = 1.0);
   QColor  static_QColor_fromRgba(unsigned int  rgba);
   int  green(QColor* theWrappedObject) const;
   qreal  greenF(QColor* theWrappedObject) const;
   int  hue(QColor* theWrappedObject) const;
   qreal  hueF(QColor* theWrappedObject) const;
   bool  isValid(QColor* theWrappedObject) const;
   QColor  lighter(QColor* theWrappedObject, int  f = 150) const;
   int  magenta(QColor* theWrappedObject) const;
   qreal  magentaF(QColor* theWrappedObject) const;
   QString  name(QColor* theWrappedObject) const;
   void writeTo(QColor* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QColor* theWrappedObject, const QColor&  c) const;
   void readFrom(QColor* theWrappedObject, QDataStream&  arg__1);
   int  red(QColor* theWrappedObject) const;
   qreal  redF(QColor* theWrappedObject) const;
   unsigned int  rgb(QColor* theWrappedObject) const;
   unsigned int  rgba(QColor* theWrappedObject) const;
   int  saturation(QColor* theWrappedObject) const;
   qreal  saturationF(QColor* theWrappedObject) const;
   void setAlpha(QColor* theWrappedObject, int  alpha);
   void setAlphaF(QColor* theWrappedObject, qreal  alpha);
   void setBlue(QColor* theWrappedObject, int  blue);
   void setBlueF(QColor* theWrappedObject, qreal  blue);
   void setCmyk(QColor* theWrappedObject, int  c, int  m, int  y, int  k, int  a = 255);
   void setCmykF(QColor* theWrappedObject, qreal  c, qreal  m, qreal  y, qreal  k, qreal  a = 1.0);
   void setGreen(QColor* theWrappedObject, int  green);
   void setGreenF(QColor* theWrappedObject, qreal  green);
   void setHsv(QColor* theWrappedObject, int  h, int  s, int  v, int  a = 255);
   void setHsvF(QColor* theWrappedObject, qreal  h, qreal  s, qreal  v, qreal  a = 1.0);
   void setNamedColor(QColor* theWrappedObject, const QString&  name);
   void setRed(QColor* theWrappedObject, int  red);
   void setRedF(QColor* theWrappedObject, qreal  red);
   void setRgb(QColor* theWrappedObject, int  r, int  g, int  b, int  a = 255);
   void setRgb(QColor* theWrappedObject, unsigned int  rgb);
   void setRgbF(QColor* theWrappedObject, qreal  r, qreal  g, qreal  b, qreal  a = 1.0);
   void setRgba(QColor* theWrappedObject, unsigned int  rgba);
   QColor::Spec  spec(QColor* theWrappedObject) const;
   QColor  toCmyk(QColor* theWrappedObject) const;
   QColor  toHsv(QColor* theWrappedObject) const;
   QColor  toRgb(QColor* theWrappedObject) const;
   int  value(QColor* theWrappedObject) const;
   qreal  valueF(QColor* theWrappedObject) const;
   int  yellow(QColor* theWrappedObject) const;
   qreal  yellowF(QColor* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QCOLOR_H
