#ifndef PYTHONQTWRAPPER_QSIZE_H
#define PYTHONQTWRAPPER_QSIZE_H

#include <qsize.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qsize.h>

class PythonQtWrapper_QSize : public QObject
{ Q_OBJECT
public:
public slots:
QSize* new_QSize();
QSize* new_QSize(int  w, int  h);
QSize* new_QSize(const QSize& other) {
QSize* a = new QSize();
*((QSize*)a) = other;
return a; }
void delete_QSize(QSize* obj) { delete obj; } 
   bool  isEmpty(QSize* theWrappedObject) const;
   void transpose(QSize* theWrappedObject);
   int  height(QSize* theWrappedObject) const;
   bool  isNull(QSize* theWrappedObject) const;
   QSize&  operator_subtract_assign(QSize* theWrappedObject, const QSize&  arg__1);
   bool  isValid(QSize* theWrappedObject) const;
   void writeTo(QSize* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QSize* theWrappedObject, QDataStream&  arg__1);
   QSize  expandedTo(QSize* theWrappedObject, const QSize&  arg__1) const;
   QSize&  operator_add_assign(QSize* theWrappedObject, const QSize&  arg__1);
   QSize&  operator_multiply_assign(QSize* theWrappedObject, qreal  c);
   QSize&  operator_divide_assign(QSize* theWrappedObject, qreal  c);
   QSize  boundedTo(QSize* theWrappedObject, const QSize&  arg__1) const;
   bool  operator_equal(QSize* theWrappedObject, const QSize&  s2);
   void setHeight(QSize* theWrappedObject, int  h);
   void setWidth(QSize* theWrappedObject, int  w);
   void scale(QSize* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  mode);
   void scale(QSize* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  mode);
   int  width(QSize* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSIZE_H
