#ifndef PYTHONQTWRAPPER_QGRAPHICSITEMANIMATION_H
#define PYTHONQTWRAPPER_QGRAPHICSITEMANIMATION_H

#include <qgraphicsitemanimation.h>
#include <QObject>

#include <PythonQt.h>

#include <QPair>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qgraphicsitem.h>
#include <qgraphicsitemanimation.h>
#include <qlist.h>
#include <qmatrix.h>
#include <qobject.h>
#include <qpair.h>
#include <qpoint.h>
#include <qtimeline.h>

class PythonQtShell_QGraphicsItemAnimation : public QGraphicsItemAnimation
{
public:
    PythonQtShell_QGraphicsItemAnimation(QObject*  parent = 0):QGraphicsItemAnimation(parent),_wrapper(NULL) {};

virtual void afterAnimationStep(qreal  step);
virtual void beforeAnimationStep(qreal  step);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsItemAnimation : public QGraphicsItemAnimation
{ public:
inline void promoted_afterAnimationStep(qreal  step) { QGraphicsItemAnimation::afterAnimationStep(step); }
inline void promoted_beforeAnimationStep(qreal  step) { QGraphicsItemAnimation::beforeAnimationStep(step); }
};

class PythonQtWrapper_QGraphicsItemAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsItemAnimation* new_QGraphicsItemAnimation(QObject*  parent = 0);
void delete_QGraphicsItemAnimation(QGraphicsItemAnimation* obj) { delete obj; } 
   void setPosAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, const QPointF&  pos);
   void setTimeLine(QGraphicsItemAnimation* theWrappedObject, QTimeLine*  timeLine);
   QList<QPair<qreal , QPointF >  >  posList(QGraphicsItemAnimation* theWrappedObject) const;
   void setScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sx, qreal  sy);
   QTimeLine*  timeLine(QGraphicsItemAnimation* theWrappedObject) const;
   void setItem(QGraphicsItemAnimation* theWrappedObject, QGraphicsItem*  item);
   QList<QPair<qreal , qreal >  >  rotationList(QGraphicsItemAnimation* theWrappedObject) const;
   QMatrix  matrixAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QGraphicsItem*  item(QGraphicsItemAnimation* theWrappedObject) const;
   qreal  rotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<QPair<qreal , QPointF >  >  translationList(QGraphicsItemAnimation* theWrappedObject) const;
   qreal  horizontalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  horizontalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QPointF  posAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   void setShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sh, qreal  sv);
   void afterAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step);
   qreal  verticalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<QPair<qreal , QPointF >  >  scaleList(QGraphicsItemAnimation* theWrappedObject) const;
   QList<QPair<qreal , QPointF >  >  shearList(QGraphicsItemAnimation* theWrappedObject) const;
   qreal  yTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   void clear(QGraphicsItemAnimation* theWrappedObject);
   void setTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  dx, qreal  dy);
   qreal  xTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   void setRotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  angle);
   void beforeAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step);
   qreal  verticalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSITEMANIMATION_H
