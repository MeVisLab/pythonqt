#ifndef PYTHONQTWRAPPER_QLAYOUT_H
#define PYTHONQTWRAPPER_QLAYOUT_H

#include <qlayout.h>
#include <QObject>

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

class PythonQtWrapper_QLayout : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QLayout(QLayout* obj) { delete obj; } 
   bool  activate(QLayout* theWrappedObject);
   void addItem(QLayout* theWrappedObject, QLayoutItem*  arg__1);
   void addWidget(QLayout* theWrappedObject, QWidget*  w);
   Qt::Alignment  alignment(QLayout* theWrappedObject) const;
   QSize  static_QLayout_closestAcceptableSize(const QWidget*  w, const QSize&  s);
   QRect  contentsRect(QLayout* theWrappedObject) const;
   QSizePolicy::ControlTypes  controlTypes(QLayout* theWrappedObject) const;
   int  count(QLayout* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QLayout* theWrappedObject) const;
   QRect  geometry(QLayout* theWrappedObject) const;
   void getContentsMargins(QLayout* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const;
   bool  hasHeightForWidth(QLayout* theWrappedObject) const;
   int  heightForWidth(QLayout* theWrappedObject, int  arg__1) const;
   int  indexOf(QLayout* theWrappedObject, QWidget*  arg__1) const;
   void invalidate(QLayout* theWrappedObject);
   bool  isEmpty(QLayout* theWrappedObject) const;
   bool  isEnabled(QLayout* theWrappedObject) const;
   QLayoutItem*  itemAt(QLayout* theWrappedObject, int  index) const;
   QLayout*  layout(QLayout* theWrappedObject);
   QSize  maximumSize(QLayout* theWrappedObject) const;
   QWidget*  menuBar(QLayout* theWrappedObject) const;
   int  minimumHeightForWidth(QLayout* theWrappedObject, int  arg__1) const;
   QSize  minimumSize(QLayout* theWrappedObject) const;
   QWidget*  parentWidget(QLayout* theWrappedObject) const;
   void removeItem(QLayout* theWrappedObject, QLayoutItem*  arg__1);
   void removeWidget(QLayout* theWrappedObject, QWidget*  w);
   void setAlignment(QLayout* theWrappedObject, Qt::Alignment  alignment);
   bool  setAlignment(QLayout* theWrappedObject, QLayout*  l, Qt::Alignment  alignment);
   bool  setAlignment(QLayout* theWrappedObject, QWidget*  w, Qt::Alignment  alignment);
   void setContentsMargins(QLayout* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setEnabled(QLayout* theWrappedObject, bool  arg__1);
   void setGeometry(QLayout* theWrappedObject, const QRect&  arg__1);
   void setMargin(QLayout* theWrappedObject, int  arg__1);
   void setMenuBar(QLayout* theWrappedObject, QWidget*  w);
   void setSizeConstraint(QLayout* theWrappedObject, QLayout::SizeConstraint  arg__1);
   void setSpacing(QLayout* theWrappedObject, int  arg__1);
   QLayout::SizeConstraint  sizeConstraint(QLayout* theWrappedObject) const;
   QSize  sizeHint(QLayout* theWrappedObject) const;
   QSpacerItem*  spacerItem(QLayout* theWrappedObject);
   int  spacing(QLayout* theWrappedObject) const;
   QLayoutItem*  takeAt(QLayout* theWrappedObject, int  index);
   int  totalHeightForWidth(QLayout* theWrappedObject, int  w) const;
   QSize  totalMaximumSize(QLayout* theWrappedObject) const;
   QSize  totalMinimumSize(QLayout* theWrappedObject) const;
   QSize  totalSizeHint(QLayout* theWrappedObject) const;
   void update(QLayout* theWrappedObject);
   QWidget*  widget(QLayout* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QLAYOUT_H
