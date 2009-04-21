#ifndef PYTHONQTWRAPPER_QSPACERITEM_H
#define PYTHONQTWRAPPER_QSPACERITEM_H

#include <qlayoutitem.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

class PythonQtShell_QSpacerItem : public QSpacerItem
{
public:
    PythonQtShell_QSpacerItem(int  w, int  h, QSizePolicy::Policy  hData = QSizePolicy::Minimum, QSizePolicy::Policy  vData = QSizePolicy::Minimum):QSpacerItem(w, h, hData, vData),_wrapper(NULL) {};

virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QSize  sizeHint() const;
virtual QSpacerItem*  spacerItem();
virtual QWidget*  widget();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSpacerItem : public QSpacerItem
{ public:
inline QRect  promoted_geometry() const { return QSpacerItem::geometry(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QSpacerItem::setGeometry(arg__1); }
inline Qt::Orientations  promoted_expandingDirections() const { return QSpacerItem::expandingDirections(); }
inline QSize  promoted_sizeHint() const { return QSpacerItem::sizeHint(); }
inline QSize  promoted_maximumSize() const { return QSpacerItem::maximumSize(); }
inline bool  promoted_isEmpty() const { return QSpacerItem::isEmpty(); }
inline QSize  promoted_minimumSize() const { return QSpacerItem::minimumSize(); }
inline QSpacerItem*  promoted_spacerItem() { return QSpacerItem::spacerItem(); }
};

class PythonQtWrapper_QSpacerItem : public QObject
{ Q_OBJECT
public:
public slots:
QSpacerItem* new_QSpacerItem(int  w, int  h, QSizePolicy::Policy  hData = QSizePolicy::Minimum, QSizePolicy::Policy  vData = QSizePolicy::Minimum);
void delete_QSpacerItem(QSpacerItem* obj) { delete obj; } 
   QRect  geometry(QSpacerItem* theWrappedObject) const;
   void setGeometry(QSpacerItem* theWrappedObject, const QRect&  arg__1);
   Qt::Orientations  expandingDirections(QSpacerItem* theWrappedObject) const;
   QSize  sizeHint(QSpacerItem* theWrappedObject) const;
   QSize  maximumSize(QSpacerItem* theWrappedObject) const;
   bool  isEmpty(QSpacerItem* theWrappedObject) const;
   void changeSize(QSpacerItem* theWrappedObject, int  w, int  h, QSizePolicy::Policy  hData = QSizePolicy::Minimum, QSizePolicy::Policy  vData = QSizePolicy::Minimum);
   QSize  minimumSize(QSpacerItem* theWrappedObject) const;
   QSpacerItem*  spacerItem(QSpacerItem* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QSPACERITEM_H
