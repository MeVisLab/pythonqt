#ifndef PYTHONQTWRAPPER_QGRAPHICSLAYOUT_H
#define PYTHONQTWRAPPER_QGRAPHICSLAYOUT_H

#include <qgraphicslayout.h>
#include <QObject>

#include <QVariant>
#include <qcoreevent.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qsizepolicy.h>

class PythonQtWrapper_QGraphicsLayout : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QGraphicsLayout(QGraphicsLayout* obj) { delete obj; } 
   void activate(QGraphicsLayout* theWrappedObject);
   QRectF  contentsRect(QGraphicsLayout* theWrappedObject) const;
   int  count(QGraphicsLayout* theWrappedObject) const;
   QSizeF  effectiveSizeHint(QGraphicsLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const;
   QRectF  geometry(QGraphicsLayout* theWrappedObject) const;
   void getContentsMargins(QGraphicsLayout* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void invalidate(QGraphicsLayout* theWrappedObject);
   bool  isActivated(QGraphicsLayout* theWrappedObject) const;
   bool  isLayout(QGraphicsLayout* theWrappedObject) const;
   QGraphicsLayoutItem*  itemAt(QGraphicsLayout* theWrappedObject, int  i) const;
   qreal  maximumHeight(QGraphicsLayout* theWrappedObject) const;
   QSizeF  maximumSize(QGraphicsLayout* theWrappedObject) const;
   qreal  maximumWidth(QGraphicsLayout* theWrappedObject) const;
   qreal  minimumHeight(QGraphicsLayout* theWrappedObject) const;
   QSizeF  minimumSize(QGraphicsLayout* theWrappedObject) const;
   qreal  minimumWidth(QGraphicsLayout* theWrappedObject) const;
   QGraphicsLayoutItem*  parentLayoutItem(QGraphicsLayout* theWrappedObject) const;
   qreal  preferredHeight(QGraphicsLayout* theWrappedObject) const;
   QSizeF  preferredSize(QGraphicsLayout* theWrappedObject) const;
   qreal  preferredWidth(QGraphicsLayout* theWrappedObject) const;
   void removeAt(QGraphicsLayout* theWrappedObject, int  index);
   void setContentsMargins(QGraphicsLayout* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   void setGeometry(QGraphicsLayout* theWrappedObject, const QRectF&  rect);
   void setMaximumHeight(QGraphicsLayout* theWrappedObject, qreal  height);
   void setMaximumSize(QGraphicsLayout* theWrappedObject, const QSizeF&  size);
   void setMaximumSize(QGraphicsLayout* theWrappedObject, qreal  w, qreal  h);
   void setMaximumWidth(QGraphicsLayout* theWrappedObject, qreal  width);
   void setMinimumHeight(QGraphicsLayout* theWrappedObject, qreal  height);
   void setMinimumSize(QGraphicsLayout* theWrappedObject, const QSizeF&  size);
   void setMinimumSize(QGraphicsLayout* theWrappedObject, qreal  w, qreal  h);
   void setMinimumWidth(QGraphicsLayout* theWrappedObject, qreal  width);
   void setParentLayoutItem(QGraphicsLayout* theWrappedObject, QGraphicsLayoutItem*  parent);
   void setPreferredHeight(QGraphicsLayout* theWrappedObject, qreal  height);
   void setPreferredSize(QGraphicsLayout* theWrappedObject, const QSizeF&  size);
   void setPreferredSize(QGraphicsLayout* theWrappedObject, qreal  w, qreal  h);
   void setPreferredWidth(QGraphicsLayout* theWrappedObject, qreal  width);
   void setSizePolicy(QGraphicsLayout* theWrappedObject, QSizePolicy::Policy  hPolicy, QSizePolicy::Policy  vPolicy, QSizePolicy::ControlType  controlType);
   void setSizePolicy(QGraphicsLayout* theWrappedObject, const QSizePolicy&  policy);
   QSizePolicy  sizePolicy(QGraphicsLayout* theWrappedObject) const;
   void updateGeometry(QGraphicsLayout* theWrappedObject);
   void widgetEvent(QGraphicsLayout* theWrappedObject, QEvent*  e);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSLAYOUT_H
