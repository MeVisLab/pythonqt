#ifndef PYTHONQTWRAPPER_QWIDGETITEM_H
#define PYTHONQTWRAPPER_QWIDGETITEM_H

#include <qlayoutitem.h>
#include <QObject>

#include <QVariant>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

class PythonQtWrapper_QWidgetItem : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetItem* new_QWidgetItem(QWidget*  w);
void delete_QWidgetItem(QWidgetItem* obj) { delete obj; } 
   Qt::Alignment  alignment(QWidgetItem* theWrappedObject) const;
   QSizePolicy::ControlTypes  controlTypes(QWidgetItem* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QWidgetItem* theWrappedObject) const;
   QRect  geometry(QWidgetItem* theWrappedObject) const;
   bool  hasHeightForWidth(QWidgetItem* theWrappedObject) const;
   int  heightForWidth(QWidgetItem* theWrappedObject, int  arg__1) const;
   void invalidate(QWidgetItem* theWrappedObject);
   bool  isEmpty(QWidgetItem* theWrappedObject) const;
   QLayout*  layout(QWidgetItem* theWrappedObject);
   QSize  maximumSize(QWidgetItem* theWrappedObject) const;
   int  minimumHeightForWidth(QWidgetItem* theWrappedObject, int  arg__1) const;
   QSize  minimumSize(QWidgetItem* theWrappedObject) const;
   void setAlignment(QWidgetItem* theWrappedObject, Qt::Alignment  a);
   void setGeometry(QWidgetItem* theWrappedObject, const QRect&  arg__1);
   QSize  sizeHint(QWidgetItem* theWrappedObject) const;
   QSpacerItem*  spacerItem(QWidgetItem* theWrappedObject);
   QWidget*  widget(QWidgetItem* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QWIDGETITEM_H
