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

class PythonQtPublicPromoter_QBoxLayout : public QBoxLayout
{ public:
inline void promoted_invalidate() { QBoxLayout::invalidate(); }
inline QLayoutItem*  promoted_itemAt(int  arg__1) const { return QBoxLayout::itemAt(arg__1); }
inline QLayoutItem*  promoted_takeAt(int  arg__1) { return QBoxLayout::takeAt(arg__1); }
inline Qt::Orientations  promoted_expandingDirections() const { return QBoxLayout::expandingDirections(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QBoxLayout::setGeometry(arg__1); }
inline QSize  promoted_maximumSize() const { return QBoxLayout::maximumSize(); }
inline QSize  promoted_minimumSize() const { return QBoxLayout::minimumSize(); }
inline int  promoted_count() const { return QBoxLayout::count(); }
inline void promoted_addItem(QLayoutItem*  arg__1) { QBoxLayout::addItem(arg__1); }
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
   void addStrut(QBoxLayout* theWrappedObject, int  arg__1);
   void addWidget(QBoxLayout* theWrappedObject, QWidget*  arg__1, int  stretch = 0, Qt::Alignment  alignment = 0);
   int  heightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const;
   void invalidate(QBoxLayout* theWrappedObject);
   QBoxLayout::Direction  direction(QBoxLayout* theWrappedObject) const;
   void insertSpacerItem(QBoxLayout* theWrappedObject, int  index, QSpacerItem*  spacerItem);
   QLayoutItem*  itemAt(QBoxLayout* theWrappedObject, int  arg__1) const;
   QLayoutItem*  takeAt(QBoxLayout* theWrappedObject, int  arg__1);
   bool  setStretchFactor(QBoxLayout* theWrappedObject, QLayout*  l, int  stretch);
   void addSpacing(QBoxLayout* theWrappedObject, int  size);
   int  spacing(QBoxLayout* theWrappedObject) const;
   bool  setStretchFactor(QBoxLayout* theWrappedObject, QWidget*  w, int  stretch);
   void setSpacing(QBoxLayout* theWrappedObject, int  spacing);
   Qt::Orientations  expandingDirections(QBoxLayout* theWrappedObject) const;
   bool  hasHeightForWidth(QBoxLayout* theWrappedObject) const;
   void setGeometry(QBoxLayout* theWrappedObject, const QRect&  arg__1);
   void insertLayout(QBoxLayout* theWrappedObject, int  index, QLayout*  layout, int  stretch = 0);
   QSize  maximumSize(QBoxLayout* theWrappedObject) const;
   void addSpacerItem(QBoxLayout* theWrappedObject, QSpacerItem*  spacerItem);
   QSize  minimumSize(QBoxLayout* theWrappedObject) const;
   int  minimumHeightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const;
   int  count(QBoxLayout* theWrappedObject) const;
   void addLayout(QBoxLayout* theWrappedObject, QLayout*  layout, int  stretch = 0);
   void insertStretch(QBoxLayout* theWrappedObject, int  index, int  stretch = 0);
   void addStretch(QBoxLayout* theWrappedObject, int  stretch = 0);
   void insertSpacing(QBoxLayout* theWrappedObject, int  index, int  size);
   void setDirection(QBoxLayout* theWrappedObject, QBoxLayout::Direction  arg__1);
   QSize  sizeHint(QBoxLayout* theWrappedObject) const;
   void insertWidget(QBoxLayout* theWrappedObject, int  index, QWidget*  widget, int  stretch = 0, Qt::Alignment  alignment = 0);
   void addItem(QBoxLayout* theWrappedObject, QLayoutItem*  arg__1);
};

#endif // PYTHONQTWRAPPER_QBOXLAYOUT_H
