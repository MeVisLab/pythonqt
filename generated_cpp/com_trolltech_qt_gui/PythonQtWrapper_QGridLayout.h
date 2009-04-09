#ifndef PYTHONQTWRAPPER_QGRIDLAYOUT_H
#define PYTHONQTWRAPPER_QGRIDLAYOUT_H

#include <qgridlayout.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qgridlayout.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

class PythonQtWrapper_QGridLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGridLayout* new_QGridLayout();
QGridLayout* new_QGridLayout(QWidget*  parent);
void delete_QGridLayout(QGridLayout* obj) { delete obj; } 
   void addItem(QGridLayout* theWrappedObject, QLayoutItem*  item, int  row, int  column, int  rowSpan = 1, int  columnSpan = 1, Qt::Alignment  arg__6 = 0);
   void addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, Qt::Alignment  arg__4 = 0);
   void addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = 0);
   void addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, Qt::Alignment  arg__4 = 0);
   void addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = 0);
   QRect  cellRect(QGridLayout* theWrappedObject, int  row, int  column) const;
   int  columnCount(QGridLayout* theWrappedObject) const;
   int  columnMinimumWidth(QGridLayout* theWrappedObject, int  column) const;
   int  columnStretch(QGridLayout* theWrappedObject, int  column) const;
   int  count(QGridLayout* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QGridLayout* theWrappedObject) const;
   void getItemPosition(QGridLayout* theWrappedObject, int  idx, int*  row, int*  column, int*  rowSpan, int*  columnSpan);
   bool  hasHeightForWidth(QGridLayout* theWrappedObject) const;
   int  heightForWidth(QGridLayout* theWrappedObject, int  arg__1) const;
   int  horizontalSpacing(QGridLayout* theWrappedObject) const;
   void invalidate(QGridLayout* theWrappedObject);
   QLayoutItem*  itemAt(QGridLayout* theWrappedObject, int  index) const;
   QLayoutItem*  itemAtPosition(QGridLayout* theWrappedObject, int  row, int  column) const;
   QSize  maximumSize(QGridLayout* theWrappedObject) const;
   int  minimumHeightForWidth(QGridLayout* theWrappedObject, int  arg__1) const;
   QSize  minimumSize(QGridLayout* theWrappedObject) const;
   Qt::Corner  originCorner(QGridLayout* theWrappedObject) const;
   int  rowCount(QGridLayout* theWrappedObject) const;
   int  rowMinimumHeight(QGridLayout* theWrappedObject, int  row) const;
   int  rowStretch(QGridLayout* theWrappedObject, int  row) const;
   void setColumnMinimumWidth(QGridLayout* theWrappedObject, int  column, int  minSize);
   void setColumnStretch(QGridLayout* theWrappedObject, int  column, int  stretch);
   void setDefaultPositioning(QGridLayout* theWrappedObject, int  n, Qt::Orientation  orient);
   void setGeometry(QGridLayout* theWrappedObject, const QRect&  arg__1);
   void setHorizontalSpacing(QGridLayout* theWrappedObject, int  spacing);
   void setOriginCorner(QGridLayout* theWrappedObject, Qt::Corner  arg__1);
   void setRowMinimumHeight(QGridLayout* theWrappedObject, int  row, int  minSize);
   void setRowStretch(QGridLayout* theWrappedObject, int  row, int  stretch);
   void setSpacing(QGridLayout* theWrappedObject, int  spacing);
   void setVerticalSpacing(QGridLayout* theWrappedObject, int  spacing);
   QSize  sizeHint(QGridLayout* theWrappedObject) const;
   int  spacing(QGridLayout* theWrappedObject) const;
   QLayoutItem*  takeAt(QGridLayout* theWrappedObject, int  index);
   int  verticalSpacing(QGridLayout* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRIDLAYOUT_H
