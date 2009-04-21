#ifndef PYTHONQTWRAPPER_QREGEXPVALIDATOR_H
#define PYTHONQTWRAPPER_QREGEXPVALIDATOR_H

#include <qvalidator.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qregexp.h>
#include <qvalidator.h>

class PythonQtShell_QRegExpValidator : public QRegExpValidator
{
public:
    PythonQtShell_QRegExpValidator(QObject*  parent):QRegExpValidator(parent),_wrapper(NULL) {};
    PythonQtShell_QRegExpValidator(const QRegExp&  rx, QObject*  parent):QRegExpValidator(rx, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  arg__1) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual QValidator::State  validate(QString&  input, int&  pos) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QRegExpValidator : public QObject
{ Q_OBJECT
public:
public slots:
QRegExpValidator* new_QRegExpValidator(QObject*  parent);
QRegExpValidator* new_QRegExpValidator(const QRegExp&  rx, QObject*  parent);
void delete_QRegExpValidator(QRegExpValidator* obj) { delete obj; } 
   void setRegExp(QRegExpValidator* theWrappedObject, const QRegExp&  rx);
   const QRegExp&  regExp(QRegExpValidator* theWrappedObject) const;
   QValidator::State  validate(QRegExpValidator* theWrappedObject, QString&  input, int&  pos) const;
};

#endif // PYTHONQTWRAPPER_QREGEXPVALIDATOR_H
