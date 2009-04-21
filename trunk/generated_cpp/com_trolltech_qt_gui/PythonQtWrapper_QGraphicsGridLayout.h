#ifndef PYTHONQTWRAPPER_QGRAPHICSGRIDLAYOUT_H
#define PYTHONQTWRAPPER_QGRAPHICSGRIDLAYOUT_H

#include <qgraphicsgridlayout.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qcoreevent.h>
#include <qgraphicsgridlayout.h>
#include <qgraphicslayoutitem.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtShell_QGraphicsGridLayout : public QGraphicsGridLayout
{
public:
    PythonQtShell_QGraphicsGridLayout(QGraphicsLayoutItem*  parent = 0):QGraphicsGridLayout(parent),_wrapper(NULL) {};

virtual int  count() const;
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void invalidate();
virtual QGraphicsLayoutItem*  itemAt(int  index) const;
virtual void removeAt(int  index);
virtual void widgetEvent(QEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsGridLayout : public QGraphicsGridLayout
{ public:
inline QGraphicsLayoutItem*  promoted_itemAt(int  index) const { return QGraphicsGridLayout::itemAt(index); }
inline void promoted_invalidate() { QGraphicsGridLayout::invalidate(); }
inline int  promoted_count() const { return QGraphicsGridLayout::count(); }
inline void promoted_removeAt(int  index) { QGraphicsGridLayout::removeAt(index); }
};

class PythonQtWrapper_QGraphicsGridLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsGridLayout* new_QGraphicsGridLayout(QGraphicsLayoutItem*  parent = 0);
void delete_QGraphicsGridLayout(QGraphicsGridLayout* obj) { delete obj; } 
   void setGeometry(QGraphicsGridLayout* theWrappedObject, const QRectF&  rect);
   QSizeF  sizeHint(QGraphicsGridLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   QGraphicsLayoutItem*  itemAt(QGraphicsGridLayout* theWrappedObject, int  index) const;
   void setColumnSpacing(QGraphicsGridLayout* theWrappedObject, int  column, qreal  spacing);
   qreal  rowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setAlignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment);
   qreal  horizontalSpacing(QGraphicsGridLayout* theWrappedObject) const;
   void setColumnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   qreal  rowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   Qt::Alignment  rowAlignment(QGraphicsGridLayout* theWrappedObject, int  row) const;
   int  rowCount(QGraphicsGridLayout* theWrappedObject) const;
   int  rowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setColumnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   void setVerticalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   qreal  rowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setRowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   void setSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   Qt::Alignment  columnAlignment(QGraphicsGridLayout* theWrappedObject, int  column) const;
   void setColumnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   void setRowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   void setRowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   qreal  columnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   void setRowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row, int  stretch);
   void setRowFixedHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   void invalidate(QGraphicsGridLayout* theWrappedObject);
   qreal  columnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   int  count(QGraphicsGridLayout* theWrappedObject) const;
   int  columnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column) const;
   void addItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  row, int  column, Qt::Alignment  alignment = 0);
   Qt::Alignment  alignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
   int  columnCount(QGraphicsGridLayout* theWrappedObject) const;
   void setRowAlignment(QGraphicsGridLayout* theWrappedObject, int  row, Qt::Alignment  alignment);
   qreal  rowSpacing(QGraphicsGridLayout* theWrappedObject, int  row) const;
   qreal  columnSpacing(QGraphicsGridLayout* theWrappedObject, int  column) const;
   void setColumnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column, int  stretch);
   void setRowSpacing(QGraphicsGridLayout* theWrappedObject, int  row, qreal  spacing);
   QGraphicsLayoutItem*  itemAt(QGraphicsGridLayout* theWrappedObject, int  row, int  column) const;
   void addItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  alignment = 0);
   void setColumnFixedWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   void setHorizontalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   void removeAt(QGraphicsGridLayout* theWrappedObject, int  index);
   void setColumnAlignment(QGraphicsGridLayout* theWrappedObject, int  column, Qt::Alignment  alignment);
   qreal  columnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   qreal  verticalSpacing(QGraphicsGridLayout* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSGRIDLAYOUT_H
