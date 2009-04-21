#ifndef PYTHONQTWRAPPER_QGRAPHICSLAYOUTITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSLAYOUTITEM_H

#include <qgraphicslayoutitem.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qgraphicslayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qsizepolicy.h>

class PythonQtShell_QGraphicsLayoutItem : public QGraphicsLayoutItem
{
public:
    PythonQtShell_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent = 0, bool  isLayout = false):QGraphicsLayoutItem(parent, isLayout),_wrapper(NULL) {};

virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void setGeometry(const QRectF&  rect);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void updateGeometry();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLayoutItem : public QGraphicsLayoutItem
{ public:
inline void promoted_setGeometry(const QRectF&  rect) { QGraphicsLayoutItem::setGeometry(rect); }
inline void promoted_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsLayoutItem::getContentsMargins(left, top, right, bottom); }
inline void promoted_updateGeometry() { QGraphicsLayoutItem::updateGeometry(); }
};

class PythonQtWrapper_QGraphicsLayoutItem : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsLayoutItem* new_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent = 0, bool  isLayout = false);
void delete_QGraphicsLayoutItem(QGraphicsLayoutItem* obj) { delete obj; } 
   bool  isLayout(QGraphicsLayoutItem* theWrappedObject) const;
   void setPreferredWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   qreal  minimumHeight(QGraphicsLayoutItem* theWrappedObject) const;
   QRectF  contentsRect(QGraphicsLayoutItem* theWrappedObject) const;
   void setMaximumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   void setMinimumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   void setSizePolicy(QGraphicsLayoutItem* theWrappedObject, QSizePolicy::Policy  hPolicy, QSizePolicy::Policy  vPolicy, QSizePolicy::ControlType  controlType = QSizePolicy::DefaultType);
   void setPreferredSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   void setSizePolicy(QGraphicsLayoutItem* theWrappedObject, const QSizePolicy&  policy);
   QSizeF  minimumSize(QGraphicsLayoutItem* theWrappedObject) const;
   void setMaximumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   QRectF  geometry(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  preferredSize(QGraphicsLayoutItem* theWrappedObject) const;
   void setMinimumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   void setPreferredHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   void setGeometry(QGraphicsLayoutItem* theWrappedObject, const QRectF&  rect);
   void setMaximumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   void setMinimumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   void getContentsMargins(QGraphicsLayoutItem* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   qreal  maximumHeight(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  preferredHeight(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  maximumSize(QGraphicsLayoutItem* theWrappedObject) const;
   void setPreferredSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   void setMaximumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   qreal  preferredWidth(QGraphicsLayoutItem* theWrappedObject) const;
   QSizePolicy  sizePolicy(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  maximumWidth(QGraphicsLayoutItem* theWrappedObject) const;
   QGraphicsLayoutItem*  parentLayoutItem(QGraphicsLayoutItem* theWrappedObject) const;
   void setParentLayoutItem(QGraphicsLayoutItem* theWrappedObject, QGraphicsLayoutItem*  parent);
   QSizeF  effectiveSizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   qreal  minimumWidth(QGraphicsLayoutItem* theWrappedObject) const;
   void setMinimumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   void updateGeometry(QGraphicsLayoutItem* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSLAYOUTITEM_H
