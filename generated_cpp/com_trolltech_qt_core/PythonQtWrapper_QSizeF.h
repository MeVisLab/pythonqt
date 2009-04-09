#ifndef PYTHONQTWRAPPER_QSIZEF_H
#define PYTHONQTWRAPPER_QSIZEF_H

#include <qsize.h>
#include <QObject>

#include <QVariant>
#include <qdatastream.h>
#include <qsize.h>

class PythonQtWrapper_QSizeF : public QObject
{ Q_OBJECT
public:
public slots:
QSizeF* new_QSizeF();
QSizeF* new_QSizeF(const QSize&  sz);
QSizeF* new_QSizeF(qreal  w, qreal  h);
void delete_QSizeF(QSizeF* obj) { delete obj; } 
   QSizeF  boundedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const;
   QSizeF  expandedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const;
   qreal  height(QSizeF* theWrappedObject) const;
   bool  isEmpty(QSizeF* theWrappedObject) const;
   bool  isNull(QSizeF* theWrappedObject) const;
   bool  isValid(QSizeF* theWrappedObject) const;
   QSizeF&  operator_multiply_assign(QSizeF* theWrappedObject, qreal  c);
   QSizeF&  operator_add_assign(QSizeF* theWrappedObject, const QSizeF&  arg__1);
   QSizeF&  operator_subtract_assign(QSizeF* theWrappedObject, const QSizeF&  arg__1);
   QSizeF&  operator_divide_assign(QSizeF* theWrappedObject, qreal  c);
   void writeTo(QSizeF* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QSizeF* theWrappedObject, const QSizeF&  s2);
   void readFrom(QSizeF* theWrappedObject, QDataStream&  arg__1);
   void scale(QSizeF* theWrappedObject, const QSizeF&  s, Qt::AspectRatioMode  mode);
   void scale(QSizeF* theWrappedObject, qreal  w, qreal  h, Qt::AspectRatioMode  mode);
   void setHeight(QSizeF* theWrappedObject, qreal  h);
   void setWidth(QSizeF* theWrappedObject, qreal  w);
   QSize  toSize(QSizeF* theWrappedObject) const;
   void transpose(QSizeF* theWrappedObject);
   qreal  width(QSizeF* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSIZEF_H
