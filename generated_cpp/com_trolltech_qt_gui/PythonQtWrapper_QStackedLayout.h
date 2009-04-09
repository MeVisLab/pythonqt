#ifndef PYTHONQTWRAPPER_QSTACKEDLAYOUT_H
#define PYTHONQTWRAPPER_QSTACKEDLAYOUT_H

#include <qstackedlayout.h>
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
#include <qstackedlayout.h>
#include <qwidget.h>

class PythonQtWrapper_QStackedLayout : public QObject
{ Q_OBJECT
public:
public slots:
QStackedLayout* new_QStackedLayout();
QStackedLayout* new_QStackedLayout(QLayout*  parentLayout);
QStackedLayout* new_QStackedLayout(QWidget*  parent);
void delete_QStackedLayout(QStackedLayout* obj) { delete obj; } 
   void addItem(QStackedLayout* theWrappedObject, QLayoutItem*  item);
   int  addWidget(QStackedLayout* theWrappedObject, QWidget*  w);
   int  count(QStackedLayout* theWrappedObject) const;
   int  currentIndex(QStackedLayout* theWrappedObject) const;
   QWidget*  currentWidget(QStackedLayout* theWrappedObject) const;
   int  insertWidget(QStackedLayout* theWrappedObject, int  index, QWidget*  w);
   QLayoutItem*  itemAt(QStackedLayout* theWrappedObject, int  arg__1) const;
   QSize  minimumSize(QStackedLayout* theWrappedObject) const;
   void setGeometry(QStackedLayout* theWrappedObject, const QRect&  rect);
   void setStackingMode(QStackedLayout* theWrappedObject, QStackedLayout::StackingMode  stackingMode);
   QSize  sizeHint(QStackedLayout* theWrappedObject) const;
   QStackedLayout::StackingMode  stackingMode(QStackedLayout* theWrappedObject) const;
   QLayoutItem*  takeAt(QStackedLayout* theWrappedObject, int  arg__1);
   QWidget*  widget(QStackedLayout* theWrappedObject);
   QWidget*  widget(QStackedLayout* theWrappedObject, int  arg__1) const;
};

#endif // PYTHONQTWRAPPER_QSTACKEDLAYOUT_H
