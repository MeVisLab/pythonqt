#ifndef PYTHONQTWRAPPER_QLAYOUTITEM_H
#define PYTHONQTWRAPPER_QLAYOUTITEM_H

#include <qlayoutitem.h>
#include <QObject>

#include <QVariant>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

class PythonQtWrapper_QLayoutItem : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QLayoutItem(QLayoutItem* obj) { delete obj; } 
   Qt::Alignment  alignment(QLayoutItem* theWrappedObject) const;
   QSizePolicy::ControlTypes  controlTypes(QLayoutItem* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QLayoutItem* theWrappedObject) const;
   QRect  geometry(QLayoutItem* theWrappedObject) const;
   bool  hasHeightForWidth(QLayoutItem* theWrappedObject) const;
   int  heightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const;
   void invalidate(QLayoutItem* theWrappedObject);
   bool  isEmpty(QLayoutItem* theWrappedObject) const;
   QLayout*  layout(QLayoutItem* theWrappedObject);
   QSize  maximumSize(QLayoutItem* theWrappedObject) const;
   int  minimumHeightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const;
   QSize  minimumSize(QLayoutItem* theWrappedObject) const;
   void setAlignment(QLayoutItem* theWrappedObject, Qt::Alignment  a);
   void setGeometry(QLayoutItem* theWrappedObject, const QRect&  arg__1);
   QSize  sizeHint(QLayoutItem* theWrappedObject) const;
   QSpacerItem*  spacerItem(QLayoutItem* theWrappedObject);
   QWidget*  widget(QLayoutItem* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QLAYOUTITEM_H
