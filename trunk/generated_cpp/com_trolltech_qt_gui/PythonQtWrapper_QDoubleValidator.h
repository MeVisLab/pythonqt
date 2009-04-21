#ifndef PYTHONQTWRAPPER_QDOUBLEVALIDATOR_H
#define PYTHONQTWRAPPER_QDOUBLEVALIDATOR_H

#include <qvalidator.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qvalidator.h>

class PythonQtShell_QDoubleValidator : public QDoubleValidator
{
public:
    PythonQtShell_QDoubleValidator(QObject*  parent):QDoubleValidator(parent),_wrapper(NULL) {};
    PythonQtShell_QDoubleValidator(double  bottom, double  top, int  decimals, QObject*  parent):QDoubleValidator(bottom, top, decimals, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  arg__1) const;
virtual void setRange(double  bottom, double  top, int  decimals = 0);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual QValidator::State  validate(QString&  arg__1, int&  arg__2) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDoubleValidator : public QDoubleValidator
{ public:
inline void promoted_setRange(double  bottom, double  top, int  decimals = 0) { QDoubleValidator::setRange(bottom, top, decimals); }
inline QValidator::State  promoted_validate(QString&  arg__1, int&  arg__2) const { return QDoubleValidator::validate(arg__1, arg__2); }
};

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
   void setRange(QDoubleValidator* theWrappedObject, double  bottom, double  top, int  decimals = 0);
   QValidator::State  validate(QDoubleValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const;
   double  top(QDoubleValidator* theWrappedObject) const;
   void setDecimals(QDoubleValidator* theWrappedObject, int  arg__1);
   double  bottom(QDoubleValidator* theWrappedObject) const;
   QDoubleValidator::Notation  notation(QDoubleValidator* theWrappedObject) const;
   void setBottom(QDoubleValidator* theWrappedObject, double  arg__1);
   void setTop(QDoubleValidator* theWrappedObject, double  arg__1);
   void setNotation(QDoubleValidator* theWrappedObject, QDoubleValidator::Notation  arg__1);
   int  decimals(QDoubleValidator* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDOUBLEVALIDATOR_H
