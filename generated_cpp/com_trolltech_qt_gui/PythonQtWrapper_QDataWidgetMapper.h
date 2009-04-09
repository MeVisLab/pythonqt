#ifndef PYTHONQTWRAPPER_QDATAWIDGETMAPPER_H
#define PYTHONQTWRAPPER_QDATAWIDGETMAPPER_H

#include <qdatawidgetmapper.h>
#include <QObject>

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatawidgetmapper.h>
#include <qlist.h>
#include <qobject.h>
#include <qwidget.h>

class PythonQtWrapper_QDataWidgetMapper : public QObject
{ Q_OBJECT
public:
public slots:
QDataWidgetMapper* new_QDataWidgetMapper(QObject*  parent = 0);
void delete_QDataWidgetMapper(QDataWidgetMapper* obj) { delete obj; } 
   void addMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget, int  section);
   void addMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget, int  section, const QByteArray&  propertyName);
   void clearMapping(QDataWidgetMapper* theWrappedObject);
   int  currentIndex(QDataWidgetMapper* theWrappedObject) const;
   QAbstractItemDelegate*  itemDelegate(QDataWidgetMapper* theWrappedObject) const;
   QByteArray  mappedPropertyName(QDataWidgetMapper* theWrappedObject, QWidget*  widget) const;
   int  mappedSection(QDataWidgetMapper* theWrappedObject, QWidget*  widget) const;
   QWidget*  mappedWidgetAt(QDataWidgetMapper* theWrappedObject, int  section) const;
   QAbstractItemModel*  model(QDataWidgetMapper* theWrappedObject) const;
   Qt::Orientation  orientation(QDataWidgetMapper* theWrappedObject) const;
   void removeMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget);
   QModelIndex  rootIndex(QDataWidgetMapper* theWrappedObject) const;
   void setItemDelegate(QDataWidgetMapper* theWrappedObject, QAbstractItemDelegate*  delegate);
   void setModel(QDataWidgetMapper* theWrappedObject, QAbstractItemModel*  model);
   void setOrientation(QDataWidgetMapper* theWrappedObject, Qt::Orientation  aOrientation);
   void setRootIndex(QDataWidgetMapper* theWrappedObject, const QModelIndex&  index);
   void setSubmitPolicy(QDataWidgetMapper* theWrappedObject, QDataWidgetMapper::SubmitPolicy  policy);
   QDataWidgetMapper::SubmitPolicy  submitPolicy(QDataWidgetMapper* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDATAWIDGETMAPPER_H
