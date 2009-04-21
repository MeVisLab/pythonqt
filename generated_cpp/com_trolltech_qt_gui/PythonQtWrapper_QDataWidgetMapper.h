#ifndef PYTHONQTWRAPPER_QDATAWIDGETMAPPER_H
#define PYTHONQTWRAPPER_QDATAWIDGETMAPPER_H

#include <qdatawidgetmapper.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatawidgetmapper.h>
#include <qlist.h>
#include <qobject.h>
#include <qwidget.h>

class PythonQtShell_QDataWidgetMapper : public QDataWidgetMapper
{
public:
    PythonQtShell_QDataWidgetMapper(QObject*  parent = 0):QDataWidgetMapper(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void setCurrentIndex(int  index);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDataWidgetMapper : public QObject
{ Q_OBJECT
public:
public slots:
QDataWidgetMapper* new_QDataWidgetMapper(QObject*  parent = 0);
void delete_QDataWidgetMapper(QDataWidgetMapper* obj) { delete obj; } 
   QByteArray  mappedPropertyName(QDataWidgetMapper* theWrappedObject, QWidget*  widget) const;
   QAbstractItemDelegate*  itemDelegate(QDataWidgetMapper* theWrappedObject) const;
   void removeMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget);
   void setSubmitPolicy(QDataWidgetMapper* theWrappedObject, QDataWidgetMapper::SubmitPolicy  policy);
   QWidget*  mappedWidgetAt(QDataWidgetMapper* theWrappedObject, int  section) const;
   QDataWidgetMapper::SubmitPolicy  submitPolicy(QDataWidgetMapper* theWrappedObject) const;
   void addMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget, int  section);
   Qt::Orientation  orientation(QDataWidgetMapper* theWrappedObject) const;
   void setModel(QDataWidgetMapper* theWrappedObject, QAbstractItemModel*  model);
   void setItemDelegate(QDataWidgetMapper* theWrappedObject, QAbstractItemDelegate*  delegate);
   int  currentIndex(QDataWidgetMapper* theWrappedObject) const;
   QAbstractItemModel*  model(QDataWidgetMapper* theWrappedObject) const;
   void setRootIndex(QDataWidgetMapper* theWrappedObject, const QModelIndex&  index);
   void addMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget, int  section, const QByteArray&  propertyName);
   void setOrientation(QDataWidgetMapper* theWrappedObject, Qt::Orientation  aOrientation);
   QModelIndex  rootIndex(QDataWidgetMapper* theWrappedObject) const;
   void clearMapping(QDataWidgetMapper* theWrappedObject);
   int  mappedSection(QDataWidgetMapper* theWrappedObject, QWidget*  widget) const;
};

#endif // PYTHONQTWRAPPER_QDATAWIDGETMAPPER_H
