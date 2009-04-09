#ifndef PYTHONQTWRAPPER_QSPACERITEM_H
#define PYTHONQTWRAPPER_QSPACERITEM_H

#include <qlayoutitem.h>
#include <QObject>

#include <QVariant>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

class PythonQtWrapper_QSpacerItem : public QObject
{ Q_OBJECT
public:
public slots:
QSpacerItem* new_QSpacerItem(int  w, int  h, QSizePolicy::Policy  hData = QSizePolicy::Minimum, QSizePolicy::Policy  vData = QSizePolicy::Minimum);
void delete_QSpacerItem(QSpacerItem* obj) { delete obj; } 
   Qt::Alignment  alignment(QSpacerItem* theWrappedObject) const;
   void changeSize(QSpacerItem* theWrappedObject, int  w, int  h, QSizePolicy::Policy  hData = QSizePolicy::Minimum, QSizePolicy::Policy  vData = QSizePolicy::Minimum);
   QSizePolicy::ControlTypes  controlTypes(QSpacerItem* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QSpacerItem* theWrappedObject) const;
   QRect  geometry(QSpacerItem* theWrappedObject) const;
   bool  hasHeightForWidth(QSpacerItem* theWrappedObject) const;
   int  heightForWidth(QSpacerItem* theWrappedObject, int  arg__1) const;
   void invalidate(QSpacerItem* theWrappedObject);
   bool  isEmpty(QSpacerItem* theWrappedObject) const;
   QLayout*  layout(QSpacerItem* theWrappedObject);
   QSize  maximumSize(QSpacerItem* theWrappedObject) const;
   int  minimumHeightForWidth(QSpacerItem* theWrappedObject, int  arg__1) const;
   QSize  minimumSize(QSpacerItem* theWrappedObject) const;
   void setAlignment(QSpacerItem* theWrappedObject, Qt::Alignment  a);
   void setGeometry(QSpacerItem* theWrappedObject, const QRect&  arg__1);
   QSize  sizeHint(QSpacerItem* theWrappedObject) const;
   QSpacerItem*  spacerItem(QSpacerItem* theWrappedObject);
   QWidget*  widget(QSpacerItem* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QSPACERITEM_H
