#ifndef PYTHONQTWRAPPER_QSTACKEDLAYOUT_H
#define PYTHONQTWRAPPER_QSTACKEDLAYOUT_H

#include <qstackedlayout.h>
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
#include <qstackedlayout.h>
#include <qwidget.h>

class PythonQtShell_QStackedLayout : public QStackedLayout
{
public:
    PythonQtShell_QStackedLayout():QStackedLayout(),_wrapper(NULL) {};
    PythonQtShell_QStackedLayout(QLayout*  parentLayout):QStackedLayout(parentLayout),_wrapper(NULL) {};
    PythonQtShell_QStackedLayout(QWidget*  parent):QStackedLayout(parent),_wrapper(NULL) {};

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
virtual QLayoutItem*  itemAt(int  arg__1) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  rect);
virtual QLayoutItem*  takeAt(int  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStackedLayout : public QStackedLayout
{ public:
inline void promoted_setGeometry(const QRect&  rect) { QStackedLayout::setGeometry(rect); }
inline int  promoted_count() const { return QStackedLayout::count(); }
inline QLayoutItem*  promoted_itemAt(int  arg__1) const { return QStackedLayout::itemAt(arg__1); }
inline void promoted_addItem(QLayoutItem*  item) { QStackedLayout::addItem(item); }
inline QSize  promoted_minimumSize() const { return QStackedLayout::minimumSize(); }
inline QLayoutItem*  promoted_takeAt(int  arg__1) { return QStackedLayout::takeAt(arg__1); }
};

class PythonQtWrapper_QStackedLayout : public QObject
{ Q_OBJECT
public:
public slots:
QStackedLayout* new_QStackedLayout();
QStackedLayout* new_QStackedLayout(QLayout*  parentLayout);
QStackedLayout* new_QStackedLayout(QWidget*  parent);
void delete_QStackedLayout(QStackedLayout* obj) { delete obj; } 
   QWidget*  currentWidget(QStackedLayout* theWrappedObject) const;
   int  insertWidget(QStackedLayout* theWrappedObject, int  index, QWidget*  w);
   void setGeometry(QStackedLayout* theWrappedObject, const QRect&  rect);
   int  addWidget(QStackedLayout* theWrappedObject, QWidget*  w);
   int  count(QStackedLayout* theWrappedObject) const;
   QLayoutItem*  itemAt(QStackedLayout* theWrappedObject, int  arg__1) const;
   void addItem(QStackedLayout* theWrappedObject, QLayoutItem*  item);
   QSize  minimumSize(QStackedLayout* theWrappedObject) const;
   QSize  sizeHint(QStackedLayout* theWrappedObject) const;
   QWidget*  widget(QStackedLayout* theWrappedObject);
   int  currentIndex(QStackedLayout* theWrappedObject) const;
   void setStackingMode(QStackedLayout* theWrappedObject, QStackedLayout::StackingMode  stackingMode);
   QStackedLayout::StackingMode  stackingMode(QStackedLayout* theWrappedObject) const;
   QLayoutItem*  takeAt(QStackedLayout* theWrappedObject, int  arg__1);
   QWidget*  widget(QStackedLayout* theWrappedObject, int  arg__1) const;
};

#endif // PYTHONQTWRAPPER_QSTACKEDLAYOUT_H
