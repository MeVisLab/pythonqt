#ifndef PYTHONQTWRAPPER_QBOXLAYOUT_H
#define PYTHONQTWRAPPER_QBOXLAYOUT_H

#include <qboxlayout.h>
#include <QObject>

#include <QVariant>
#include <qboxlayout.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

class PythonQtWrapper_QBoxLayout : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Direction )
enum Direction{
  LeftToRight = QBoxLayout::LeftToRight,   RightToLeft = QBoxLayout::RightToLeft,   TopToBottom = QBoxLayout::TopToBottom,   BottomToTop = QBoxLayout::BottomToTop,   Down = QBoxLayout::Down,   Up = QBoxLayout::Up};
public slots:
QBoxLayout* new_QBoxLayout(QBoxLayout::Direction  arg__1, QWidget*  parent = 0);
void delete_QBoxLayout(QBoxLayout* obj) { delete obj; } 
   void addItem(QBoxLayout* theWrappedObject, QLayoutItem*  arg__1);
   void addLayout(QBoxLayout* theWrappedObject, QLayout*  layout, int  stretch = 0);
   void addSpacerItem(QBoxLayout* theWrappedObject, QSpacerItem*  spacerItem);
   void addSpacing(QBoxLayout* theWrappedObject, int  size);
   void addStretch(QBoxLayout* theWrappedObject, int  stretch = 0);
   void addStrut(QBoxLayout* theWrappedObject, int  arg__1);
   void addWidget(QBoxLayout* theWrappedObject, QWidget*  arg__1, int  stretch = 0, Qt::Alignment  alignment = 0);
   int  count(QBoxLayout* theWrappedObject) const;
   QBoxLayout::Direction  direction(QBoxLayout* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QBoxLayout* theWrappedObject) const;
   bool  hasHeightForWidth(QBoxLayout* theWrappedObject) const;
   int  heightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const;
   void insertLayout(QBoxLayout* theWrappedObject, int  index, QLayout*  layout, int  stretch = 0);
   void insertSpacerItem(QBoxLayout* theWrappedObject, int  index, QSpacerItem*  spacerItem);
   void insertSpacing(QBoxLayout* theWrappedObject, int  index, int  size);
   void insertStretch(QBoxLayout* theWrappedObject, int  index, int  stretch = 0);
   void insertWidget(QBoxLayout* theWrappedObject, int  index, QWidget*  widget, int  stretch = 0, Qt::Alignment  alignment = 0);
   void invalidate(QBoxLayout* theWrappedObject);
   QLayoutItem*  itemAt(QBoxLayout* theWrappedObject, int  arg__1) const;
   QSize  maximumSize(QBoxLayout* theWrappedObject) const;
   int  minimumHeightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const;
   QSize  minimumSize(QBoxLayout* theWrappedObject) const;
   void setDirection(QBoxLayout* theWrappedObject, QBoxLayout::Direction  arg__1);
   void setGeometry(QBoxLayout* theWrappedObject, const QRect&  arg__1);
   void setSpacing(QBoxLayout* theWrappedObject, int  spacing);
   bool  setStretchFactor(QBoxLayout* theWrappedObject, QLayout*  l, int  stretch);
   bool  setStretchFactor(QBoxLayout* theWrappedObject, QWidget*  w, int  stretch);
   QSize  sizeHint(QBoxLayout* theWrappedObject) const;
   int  spacing(QBoxLayout* theWrappedObject) const;
   QLayoutItem*  takeAt(QBoxLayout* theWrappedObject, int  arg__1);
};

#endif // PYTHONQTWRAPPER_QBOXLAYOUT_H
