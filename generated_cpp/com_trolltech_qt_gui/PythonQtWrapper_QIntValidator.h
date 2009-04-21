#ifndef PYTHONQTWRAPPER_QINTVALIDATOR_H
#define PYTHONQTWRAPPER_QINTVALIDATOR_H

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

class PythonQtShell_QIntValidator : public QIntValidator
{
public:
    PythonQtShell_QIntValidator(QObject*  parent):QIntValidator(parent),_wrapper(NULL) {};
    PythonQtShell_QIntValidator(int  bottom, int  top, QObject*  parent):QIntValidator(bottom, top, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  arg__1) const;
virtual void setRange(int  bottom, int  top);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual QValidator::State  validate(QString&  arg__1, int&  arg__2) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QIntValidator : public QObject
{ Q_OBJECT
public:
public slots:
QIntValidator* new_QIntValidator(QObject*  parent);
QIntValidator* new_QIntValidator(int  bottom, int  top, QObject*  parent);
void delete_QIntValidator(QIntValidator* obj) { delete obj; } 
   void setBottom(QIntValidator* theWrappedObject, int  arg__1);
   void setTop(QIntValidator* theWrappedObject, int  arg__1);
   int  top(QIntValidator* theWrappedObject) const;
   QValidator::State  validate(QIntValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const;
   void setRange(QIntValidator* theWrappedObject, int  bottom, int  top);
   int  bottom(QIntValidator* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QINTVALIDATOR_H
