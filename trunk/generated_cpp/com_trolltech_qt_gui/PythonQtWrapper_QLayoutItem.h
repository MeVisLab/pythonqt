#ifndef PYTHONQTWRAPPER_QLAYOUTITEM_H
#define PYTHONQTWRAPPER_QLAYOUTITEM_H

#include <qlayoutitem.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

class PythonQtShell_QLayoutItem : public QLayoutItem
{
public:
    PythonQtShell_QLayoutItem(Qt::Alignment  alignment = 0):QLayoutItem(alignment),_wrapper(NULL) {};

virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QSize  sizeHint() const;
virtual QSpacerItem*  spacerItem();
virtual QWidget*  widget();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QLayoutItem : public QObject
{ Q_OBJECT
public:
public slots:
QLayoutItem* new_QLayoutItem(Qt::Alignment  alignment = 0);
void delete_QLayoutItem(QLayoutItem* obj) { delete obj; } 
   int  heightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const;
   Qt::Alignment  alignment(QLayoutItem* theWrappedObject) const;
   void setAlignment(QLayoutItem* theWrappedObject, Qt::Alignment  a);
   int  minimumHeightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const;
   QSpacerItem*  spacerItem(QLayoutItem* theWrappedObject);
   QSizePolicy::ControlTypes  controlTypes(QLayoutItem* theWrappedObject) const;
   QWidget*  widget(QLayoutItem* theWrappedObject);
   void invalidate(QLayoutItem* theWrappedObject);
   QLayout*  layout(QLayoutItem* theWrappedObject);
   bool  hasHeightForWidth(QLayoutItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QLAYOUTITEM_H
