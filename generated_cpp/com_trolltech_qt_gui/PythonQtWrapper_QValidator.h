#ifndef PYTHONQTWRAPPER_QVALIDATOR_H
#define PYTHONQTWRAPPER_QVALIDATOR_H

#include <qvalidator.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qvalidator.h>

class PythonQtWrapper_QValidator : public QObject
{ Q_OBJECT
public:
Q_ENUMS(State )
enum State{
  Invalid = QValidator::Invalid,   Intermediate = QValidator::Intermediate,   Acceptable = QValidator::Acceptable};
public slots:
void delete_QValidator(QValidator* obj) { delete obj; } 
   void fixup(QValidator* theWrappedObject, QString&  arg__1) const;
   QLocale  locale(QValidator* theWrappedObject) const;
   void setLocale(QValidator* theWrappedObject, const QLocale&  locale);
   QValidator::State  validate(QValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const;
};

#endif // PYTHONQTWRAPPER_QVALIDATOR_H
