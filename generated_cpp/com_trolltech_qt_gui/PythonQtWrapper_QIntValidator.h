#ifndef PYTHONQTWRAPPER_QINTVALIDATOR_H
#define PYTHONQTWRAPPER_QINTVALIDATOR_H

#include <qvalidator.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qvalidator.h>

class PythonQtWrapper_QIntValidator : public QObject
{ Q_OBJECT
public:
public slots:
QIntValidator* new_QIntValidator(QObject*  parent);
QIntValidator* new_QIntValidator(int  bottom, int  top, QObject*  parent);
void delete_QIntValidator(QIntValidator* obj) { delete obj; } 
   int  bottom(QIntValidator* theWrappedObject) const;
   void setBottom(QIntValidator* theWrappedObject, int  arg__1);
   void setRange(QIntValidator* theWrappedObject, int  bottom, int  top);
   void setTop(QIntValidator* theWrappedObject, int  arg__1);
   int  top(QIntValidator* theWrappedObject) const;
   QValidator::State  validate(QIntValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const;
};

#endif // PYTHONQTWRAPPER_QINTVALIDATOR_H
