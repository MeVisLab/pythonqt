#ifndef PYTHONQTWRAPPER_QBOXLAYOUT_H
#define PYTHONQTWRAPPER_QBOXLAYOUT_H

#include <qboxlayout.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtShell_QBoxLayout : public QBoxLayout
{
public:
    PythonQtShell_QBoxLayout(QBoxLayout::Direction  arg__1, QWidget*  parent = 0):QBoxLayout(arg__1, parent),_wrapper(NULL) {};

virtual void addItem(QLayoutItem*  arg__1);
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
virtual QLayoutItem*  itemAt(int  arg__1) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QLayoutItem*  takeAt(int  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QBoxLayout : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Direction )
enum Direction{
  LeftToRight = QBoxLayout::LeftToRight,   RightToLeft = QBoxLayout::RightToLeft,   TopToBottom = QBoxLayout::TopToBottom,   BottomToTop = QBoxLayout::BottomToTop,   Down = QBoxLayout::Down,   Up = QBoxLayout::Up};
public slots:
QBoxLayout* new_QBoxLayout(QBoxLayout::Direction  arg__1, QWidget*  parent = 0);
void delete_QBoxLayout(QBoxLayout* obj) { delete obj; } 
   void insertLayout(QBoxLayout* theWrappedObject, int  index, QLayout*  layout, int  stretch = 0);
   void addStretch(QBoxLayout* theWrappedObject, int  stretch = 0);
   void setGeometry(QBoxLayout* theWrappedObject, const QRect&  arg__1);
   void insertSpacerItem(QBoxLayout* theWrappedObject, int  index, QSpacerItem*  spacerItem);
   int  minimumHeightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const;
   bool  setStretchFactor(QBoxLayout* theWrappedObject, QWidget*  w, int  stretch);
   void addSpacing(QBoxLayout* theWrappedObject, int  size);
   void addLayout(QBoxLayout* theWrappedObject, QLayout*  layout, int  stretch = 0);
   QSize  minimumSize(QBoxLayout* theWrappedObject) const;
   void addSpacerItem(QBoxLayout* theWrappedObject, QSpacerItem*  spacerItem);
   QSize  sizeHint(QBoxLayout* theWrappedObject) const;
   void addItem(QBoxLayout* theWrappedObject, QLayoutItem*  arg__1);
   QBoxLayout::Direction  direction(QBoxLayout* theWrappedObject) const;
   void insertWidget(QBoxLayout* theWrappedObject, int  index, QWidget*  widget, int  stretch = 0, Qt::Alignment  alignment = 0);
   void insertStretch(QBoxLayout* theWrappedObject, int  index, int  stretch = 0);
   void setSpacing(QBoxLayout* theWrappedObject, int  spacing);
   int  count(QBoxLayout* theWrappedObject) const;
   QLayoutItem*  itemAt(QBoxLayout* theWrappedObject, int  arg__1) const;
   void addWidget(QBoxLayout* theWrappedObject, QWidget*  arg__1, int  stretch = 0, Qt::Alignment  alignment = 0);
   bool  hasHeightForWidth(QBoxLayout* theWrappedObject) const;
   void insertSpacing(QBoxLayout* theWrappedObject, int  index, int  size);
   QSize  maximumSize(QBoxLayout* theWrappedObject) const;
   bool  setStretchFactor(QBoxLayout* theWrappedObject, QLayout*  l, int  stretch);
   int  spacing(QBoxLayout* theWrappedObject) const;
   QLayoutItem*  takeAt(QBoxLayout* theWrappedObject, int  arg__1);
   void invalidate(QBoxLayout* theWrappedObject);
   void setDirection(QBoxLayout* theWrappedObject, QBoxLayout::Direction  arg__1);
   int  heightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const;
   Qt::Orientations  expandingDirections(QBoxLayout* theWrappedObject) const;
   void addStrut(QBoxLayout* theWrappedObject, int  arg__1);
};

#endif // PYTHONQTWRAPPER_QBOXLAYOUT_H
