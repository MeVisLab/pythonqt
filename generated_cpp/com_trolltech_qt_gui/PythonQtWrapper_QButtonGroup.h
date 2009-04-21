#ifndef PYTHONQTWRAPPER_QBUTTONGROUP_H
#define PYTHONQTWRAPPER_QBUTTONGROUP_H

#include <qbuttongroup.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractbutton.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtShell_QButtonGroup : public QButtonGroup
{
public:
    PythonQtShell_QButtonGroup(QObject*  parent = 0):QButtonGroup(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QButtonGroup : public QObject
{ Q_OBJECT
public:
public slots:
QButtonGroup* new_QButtonGroup(QObject*  parent = 0);
void delete_QButtonGroup(QButtonGroup* obj) { delete obj; } 
   int  id(QButtonGroup* theWrappedObject, QAbstractButton*  button) const;
   void removeButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1);
   void setExclusive(QButtonGroup* theWrappedObject, bool  arg__1);
   void addButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1);
   QAbstractButton*  checkedButton(QButtonGroup* theWrappedObject) const;
   void setId(QButtonGroup* theWrappedObject, QAbstractButton*  button, int  id);
   void addButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1, int  id);
   int  checkedId(QButtonGroup* theWrappedObject) const;
   bool  exclusive(QButtonGroup* theWrappedObject) const;
   QAbstractButton*  button(QButtonGroup* theWrappedObject, int  id) const;
   QList<QAbstractButton* >  buttons(QButtonGroup* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QBUTTONGROUP_H
