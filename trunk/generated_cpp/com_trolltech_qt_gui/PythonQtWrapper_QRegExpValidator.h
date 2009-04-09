#ifndef PYTHONQTWRAPPER_QREGEXPVALIDATOR_H
#define PYTHONQTWRAPPER_QREGEXPVALIDATOR_H

#include <qvalidator.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qregexp.h>
#include <qvalidator.h>

class PythonQtWrapper_QRegExpValidator : public QObject
{ Q_OBJECT
public:
public slots:
QRegExpValidator* new_QRegExpValidator(QObject*  parent);
QRegExpValidator* new_QRegExpValidator(const QRegExp&  rx, QObject*  parent);
void delete_QRegExpValidator(QRegExpValidator* obj) { delete obj; } 
   const QRegExp&  regExp(QRegExpValidator* theWrappedObject) const;
   void setRegExp(QRegExpValidator* theWrappedObject, const QRegExp&  rx);
   QValidator::State  validate(QRegExpValidator* theWrappedObject, QString&  input, int&  pos) const;
};

#endif // PYTHONQTWRAPPER_QREGEXPVALIDATOR_H
