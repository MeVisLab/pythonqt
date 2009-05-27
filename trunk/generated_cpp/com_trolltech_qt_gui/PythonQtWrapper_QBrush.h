#ifndef PYTHONQTWRAPPER_QBRUSH_H
#define PYTHONQTWRAPPER_QBRUSH_H

#include <qbrush.h>
#include <QObject>

#include <PythonQt.h>

#include <QPixmap>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qimage.h>
#include <qmatrix.h>
#include <qpixmap.h>
#include <qtransform.h>

class PythonQtWrapper_QBrush : public QObject
{ Q_OBJECT
public:
public slots:
QBrush* new_QBrush();
QBrush* new_QBrush(Qt::BrushStyle  bs);
QBrush* new_QBrush(Qt::GlobalColor  color, const QPixmap&  pixmap);
QBrush* new_QBrush(const QBrush&  brush);
QBrush* new_QBrush(const QColor&  color, Qt::BrushStyle  bs = Qt::SolidPattern);
QBrush* new_QBrush(const QColor&  color, const QPixmap&  pixmap);
QBrush* new_QBrush(const QGradient&  gradient);
QBrush* new_QBrush(const QImage&  image);
QBrush* new_QBrush(const QPixmap&  pixmap);
void delete_QBrush(QBrush* obj) { delete obj; } 
   void setColor(QBrush* theWrappedObject, const QColor&  color);
   const QColor*  color(QBrush* theWrappedObject) const;
   void setStyle(QBrush* theWrappedObject, Qt::BrushStyle  arg__1);
   bool  isOpaque(QBrush* theWrappedObject) const;
   void setTexture(QBrush* theWrappedObject, const QPixmap&  pixmap);
   QImage  textureImage(QBrush* theWrappedObject) const;
   bool  operator_equal(QBrush* theWrappedObject, const QBrush&  b) const;
   void setMatrix(QBrush* theWrappedObject, const QMatrix&  mat);
   void writeTo(QBrush* theWrappedObject, QDataStream&  arg__1);
   void setTextureImage(QBrush* theWrappedObject, const QImage&  image);
   Qt::BrushStyle  style(QBrush* theWrappedObject) const;
   const QGradient*  gradient(QBrush* theWrappedObject) const;
   void setColor(QBrush* theWrappedObject, Qt::GlobalColor  color);
   void setTransform(QBrush* theWrappedObject, const QTransform&  arg__1);
   void readFrom(QBrush* theWrappedObject, QDataStream&  arg__1);
   const QMatrix*  matrix(QBrush* theWrappedObject) const;
   QPixmap  texture(QBrush* theWrappedObject) const;
   QTransform  transform(QBrush* theWrappedObject) const;
    QString toString(QBrush*);
};

#endif // PYTHONQTWRAPPER_QBRUSH_H
