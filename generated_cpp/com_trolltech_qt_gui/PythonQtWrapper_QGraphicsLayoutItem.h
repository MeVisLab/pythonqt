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

class PythonQtWrapper_QGraphicsLayoutItem : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsLayoutItem* new_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent = 0, bool  isLayout = false);
void delete_QGraphicsLayoutItem(QGraphicsLayoutItem* obj) { delete obj; } 
   QGraphicsLayoutItem*  parentLayoutItem(QGraphicsLayoutItem* theWrappedObject) const;
   void setPreferredSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   qreal  minimumHeight(QGraphicsLayoutItem* theWrappedObject) const;
   void setMaximumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   QSizeF  effectiveSizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   void setSizePolicy(QGraphicsLayoutItem* theWrappedObject, const QSizePolicy&  policy);
   void updateGeometry(QGraphicsLayoutItem* theWrappedObject);
   QSizeF  maximumSize(QGraphicsLayoutItem* theWrappedObject) const;
   void setGeometry(QGraphicsLayoutItem* theWrappedObject, const QRectF&  rect);
   QRectF  contentsRect(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  preferredSize(QGraphicsLayoutItem* theWrappedObject) const;
   void setPreferredWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   void setSizePolicy(QGraphicsLayoutItem* theWrappedObject, QSizePolicy::Policy  hPolicy, QSizePolicy::Policy  vPolicy, QSizePolicy::ControlType  controlType = QSizePolicy::DefaultType);
   void setMinimumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   qreal  maximumHeight(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  minimumSize(QGraphicsLayoutItem* theWrappedObject) const;
   void setMaximumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   QRectF  geometry(QGraphicsLayoutItem* theWrappedObject) const;
   void setMaximumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   void setMinimumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   QSizePolicy  sizePolicy(QGraphicsLayoutItem* theWrappedObject) const;
   void setParentLayoutItem(QGraphicsLayoutItem* theWrappedObject, QGraphicsLayoutItem*  parent);
   void setMinimumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   qreal  maximumWidth(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  preferredHeight(QGraphicsLayoutItem* theWrappedObject) const;
   void setPreferredSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   void getContentsMargins(QGraphicsLayoutItem* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   qreal  preferredWidth(QGraphicsLayoutItem* theWrappedObject) const;
   void setMinimumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   void setMaximumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   qreal  minimumWidth(QGraphicsLayoutItem* theWrappedObject) const;
   void setPreferredHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   bool  isLayout(QGraphicsLayoutItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSLAYOUTITEM_H
