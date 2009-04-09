#ifndef PYTHONQTWRAPPER_QSIZE_H
#define PYTHONQTWRAPPER_QSIZE_H

#include <qsize.h>
#include <QObject>

#include <QVariant>
#include <qdatastream.h>
#include <qsize.h>

class PythonQtWrapper_QSize : public QObject
{ Q_OBJECT
public:
public slots:
QSize* new_QSize();
QSize* new_QSize(int  w, int  h);
void delete_QSize(QSize* obj) { delete obj; } 
   QSize  boundedTo(QSize* theWrappedObject, const QSize&  arg__1) const;
   QSize  expandedTo(QSize* theWrappedObject, const QSize&  arg__1) const;
   int  height(QSize* theWrappedObject) const;
   bool  isEmpty(QSize* theWrappedObject) const;
   bool  isNull(QSize* theWrappedObject) const;
   bool  isValid(QSize* theWrappedObject) const;
   QSize&  operator_multiply_assign(QSize* theWrappedObject, qreal  c);
   QSize&  operator_add_assign(QSize* theWrappedObject, const QSize&  arg__1);
   QSize&  operator_subtract_assign(QSize* theWrappedObject, const QSize&  arg__1);
   QSize&  operator_divide_assign(QSize* theWrappedObject, qreal  c);
   void writeTo(QSize* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QSize* theWrappedObject, const QSize&  s2);
   void readFrom(QSize* theWrappedObject, QDataStream&  arg__1);
   void scale(QSize* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  mode);
   void scale(QSize* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  mode);
   void setHeight(QSize* theWrappedObject, int  h);
   void setWidth(QSize* theWrappedObject, int  w);
   void transpose(QSize* theWrappedObject);
   int  width(QSize* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSIZE_H
