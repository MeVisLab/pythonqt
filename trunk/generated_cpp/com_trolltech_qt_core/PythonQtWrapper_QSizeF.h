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
   void transpose(QSizeF* theWrappedObject);
   QSizeF  expandedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const;
   QSizeF*  operator_add_assign(QSizeF* theWrappedObject, const QSizeF&  arg__1);
   void setHeight(QSizeF* theWrappedObject, qreal  h);
   void scale(QSizeF* theWrappedObject, const QSizeF&  s, Qt::AspectRatioMode  mode);
   void scale(QSizeF* theWrappedObject, qreal  w, qreal  h, Qt::AspectRatioMode  mode);
   QSizeF*  operator_divide_assign(QSizeF* theWrappedObject, qreal  c);
   QSizeF  boundedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const;
   bool  isNull(QSizeF* theWrappedObject) const;
   void writeTo(QSizeF* theWrappedObject, QDataStream&  arg__1);
   void setWidth(QSizeF* theWrappedObject, qreal  w);
   QSize  toSize(QSizeF* theWrappedObject) const;
   bool  isValid(QSizeF* theWrappedObject) const;
   QSizeF*  operator_multiply_assign(QSizeF* theWrappedObject, qreal  c);
   void readFrom(QSizeF* theWrappedObject, QDataStream&  arg__1);
   QSizeF*  operator_subtract_assign(QSizeF* theWrappedObject, const QSizeF&  arg__1);
   bool  operator_equal(QSizeF* theWrappedObject, const QSizeF&  s2);
   qreal  height(QSizeF* theWrappedObject) const;
   bool  isEmpty(QSizeF* theWrappedObject) const;
   qreal  width(QSizeF* theWrappedObject) const;
    QString toString(QSizeF*);
};

#endif // PYTHONQTWRAPPER_QSIZEF_H
