#ifndef PYTHONQTWRAPPER_QDOUBLEVALIDATOR_H
#define PYTHONQTWRAPPER_QDOUBLEVALIDATOR_H

#include <qvalidator.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qvalidator.h>

class PythonQtWrapper_QDoubleValidator : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Notation )
enum Notation{
  StandardNotation = QDoubleValidator::StandardNotation,   ScientificNotation = QDoubleValidator::ScientificNotation};
public slots:
QDoubleValidator* new_QDoubleValidator(QObject*  parent);
QDoubleValidator* new_QDoubleValidator(double  bottom, double  top, int  decimals, QObject*  parent);
void delete_QDoubleValidator(QDoubleValidator* obj) { delete obj; } 
   double  bottom(QDoubleValidator* theWrappedObject) const;
   int  decimals(QDoubleValidator* theWrappedObject) const;
   QDoubleValidator::Notation  notation(QDoubleValidator* theWrappedObject) const;
   void setBottom(QDoubleValidator* theWrappedObject, double  arg__1);
   void setDecimals(QDoubleValidator* theWrappedObject, int  arg__1);
   void setNotation(QDoubleValidator* theWrappedObject, QDoubleValidator::Notation  arg__1);
   void setRange(QDoubleValidator* theWrappedObject, double  bottom, double  top, int  decimals = 0);
   void setTop(QDoubleValidator* theWrappedObject, double  arg__1);
   double  top(QDoubleValidator* theWrappedObject) const;
   QValidator::State  validate(QDoubleValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const;
};

#endif // PYTHONQTWRAPPER_QDOUBLEVALIDATOR_H
