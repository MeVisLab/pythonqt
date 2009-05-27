#ifndef PYTHONQTWRAPPER_QFORMLAYOUT_H
#define PYTHONQTWRAPPER_QFORMLAYOUT_H

#include <qformlayout.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

class PythonQtShell_QFormLayout : public QFormLayout
{
public:
    PythonQtShell_QFormLayout(QWidget*  parent = 0):QFormLayout(parent),_wrapper(NULL) {};

virtual void addItem(QLayoutItem*  item);
virtual void childEvent(QChildEvent*  e);
virtual int  count() const;
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayoutItem*  itemAt(int  index) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  rect);
virtual QLayoutItem*  takeAt(int  index);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFormLayout : public QFormLayout
{ public:
inline void promoted_addItem(QLayoutItem*  item) { QFormLayout::addItem(item); }
inline void promoted_invalidate() { QFormLayout::invalidate(); }
inline QLayoutItem*  promoted_takeAt(int  index) { return QFormLayout::takeAt(index); }
inline Qt::Orientations  promoted_expandingDirections() const { return QFormLayout::expandingDirections(); }
inline int  promoted_count() const { return QFormLayout::count(); }
inline QSize  promoted_minimumSize() const { return QFormLayout::minimumSize(); }
inline QLayoutItem*  promoted_itemAt(int  index) const { return QFormLayout::itemAt(index); }
inline void promoted_setGeometry(const QRect&  rect) { QFormLayout::setGeometry(rect); }
};

class PythonQtWrapper_QFormLayout : public QObject
{ Q_OBJECT
public:
public slots:
QFormLayout* new_QFormLayout(QWidget*  parent = 0);
void delete_QFormLayout(QFormLayout* obj) { delete obj; } 
   void addItem(QFormLayout* theWrappedObject, QLayoutItem*  item);
   void addRow(QFormLayout* theWrappedObject, QWidget*  label, QWidget*  field);
   int  heightForWidth(QFormLayout* theWrappedObject, int  width) const;
   int  rowCount(QFormLayout* theWrappedObject) const;
   void setSpacing(QFormLayout* theWrappedObject, int  arg__1);
   void getWidgetPosition(QFormLayout* theWrappedObject, QWidget*  widget, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
   void addRow(QFormLayout* theWrappedObject, const QString&  labelText, QWidget*  field);
   void setVerticalSpacing(QFormLayout* theWrappedObject, int  spacing);
   void addRow(QFormLayout* theWrappedObject, QWidget*  label, QLayout*  field);
   QWidget*  labelForField(QFormLayout* theWrappedObject, QWidget*  field) const;
   void addRow(QFormLayout* theWrappedObject, QLayout*  layout);
   QWidget*  labelForField(QFormLayout* theWrappedObject, QLayout*  field) const;
   void setHorizontalSpacing(QFormLayout* theWrappedObject, int  spacing);
   Qt::Alignment  formAlignment(QFormLayout* theWrappedObject) const;
   void setItem(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QLayoutItem*  item);
   void setRowWrapPolicy(QFormLayout* theWrappedObject, QFormLayout::RowWrapPolicy  policy);
   int  horizontalSpacing(QFormLayout* theWrappedObject) const;
   void insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  label, QLayout*  field);
   Qt::Alignment  labelAlignment(QFormLayout* theWrappedObject) const;
   void addRow(QFormLayout* theWrappedObject, QWidget*  widget);
   void invalidate(QFormLayout* theWrappedObject);
   void setWidget(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QWidget*  widget);
   void getLayoutPosition(QFormLayout* theWrappedObject, QLayout*  layout, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
   QLayoutItem*  takeAt(QFormLayout* theWrappedObject, int  index);
   Qt::Orientations  expandingDirections(QFormLayout* theWrappedObject) const;
   void getItemPosition(QFormLayout* theWrappedObject, int  index, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
   int  count(QFormLayout* theWrappedObject) const;
   QLayoutItem*  itemAt(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role) const;
   QFormLayout::RowWrapPolicy  rowWrapPolicy(QFormLayout* theWrappedObject) const;
   void insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, QWidget*  field);
   QSize  sizeHint(QFormLayout* theWrappedObject) const;
   void addRow(QFormLayout* theWrappedObject, const QString&  labelText, QLayout*  field);
   void setLayout(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QLayout*  layout);
   void setLabelAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment);
   QFormLayout::FieldGrowthPolicy  fieldGrowthPolicy(QFormLayout* theWrappedObject) const;
   bool  hasHeightForWidth(QFormLayout* theWrappedObject) const;
   void insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  widget);
   void insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  label, QWidget*  field);
   QSize  minimumSize(QFormLayout* theWrappedObject) const;
   int  spacing(QFormLayout* theWrappedObject) const;
   void setFieldGrowthPolicy(QFormLayout* theWrappedObject, QFormLayout::FieldGrowthPolicy  policy);
   void setFormAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment);
   void insertRow(QFormLayout* theWrappedObject, int  row, QLayout*  layout);
   QLayoutItem*  itemAt(QFormLayout* theWrappedObject, int  index) const;
   void setGeometry(QFormLayout* theWrappedObject, const QRect&  rect);
   void insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, QLayout*  field);
   int  verticalSpacing(QFormLayout* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QFORMLAYOUT_H
