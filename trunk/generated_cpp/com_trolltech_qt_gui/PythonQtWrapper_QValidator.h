#ifndef PYTHONQTWRAPPER_QVALIDATOR_H
#define PYTHONQTWRAPPER_QVALIDATOR_H

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

class PythonQtShell_QValidator : public QValidator
{
public:
    PythonQtShell_QValidator(QObject*  parent):QValidator(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  arg__1) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual QValidator::State  validate(QString&  arg__1, int&  arg__2) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QValidator : public QValidator
{ public:
inline void promoted_fixup(QString&  arg__1) const { QValidator::fixup(arg__1); }
};

class PythonQtWrapper_QValidator : public QObject
{ Q_OBJECT
public:
Q_ENUMS(State )
enum State{
  Invalid = QValidator::Invalid,   Intermediate = QValidator::Intermediate,   Acceptable = QValidator::Acceptable};
public slots:
QValidator* new_QValidator(QObject*  parent);
void delete_QValidator(QValidator* obj) { delete obj; } 
   void fixup(QValidator* theWrappedObject, QString&  arg__1) const;
   void setLocale(QValidator* theWrappedObject, const QLocale&  locale);
   QLocale  locale(QValidator* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QVALIDATOR_H
