#ifndef PYTHONQTWRAPPER_QSIZEF_H
#define PYTHONQTWRAPPER_QSIZEF_H

#include <qsize.h>
#include <QObject>

#include <PythonQt.h>

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
QSizeF* new_QSizeF(const QSizeF& other) {
QSizeF* a = new QSizeF();
*((QSizeF*)a) = other;
return a; }
void delete_QSizeF(QSizeF* obj) { delete obj; } 
   QSizeF  boundedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const;
   void setWidth(QSizeF* theWrappedObject, qreal  w);
   bool  isValid(QSizeF* theWrappedObject) const;
   void writeTo(QSizeF* theWrappedObject, QDataStream&  arg__1);
   void transpose(QSizeF* theWrappedObject);
   QSizeF&  operator_add_assign(QSizeF* theWrappedObject, const QSizeF&  arg__1);
   bool  operator_equal(QSizeF* theWrappedObject, const QSizeF&  s2);
   bool  isNull(QSizeF* theWrappedObject) const;
   QSizeF&  operator_divide_assign(QSizeF* theWrappedObject, qreal  c);
   QSizeF&  operator_multiply_assign(QSizeF* theWrappedObject, qreal  c);
   QSize  toSize(QSizeF* theWrappedObject) const;
   QSizeF  expandedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const;
   QSizeF&  operator_subtract_assign(QSizeF* theWrappedObject, const QSizeF&  arg__1);
   qreal  height(QSizeF* theWrappedObject) const;
   void setHeight(QSizeF* theWrappedObject, qreal  h);
   bool  isEmpty(QSizeF* theWrappedObject) const;
   void scale(QSizeF* theWrappedObject, const QSizeF&  s, Qt::AspectRatioMode  mode);
   void scale(QSizeF* theWrappedObject, qreal  w, qreal  h, Qt::AspectRatioMode  mode);
   void readFrom(QSizeF* theWrappedObject, QDataStream&  arg__1);
   qreal  width(QSizeF* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSIZEF_H
