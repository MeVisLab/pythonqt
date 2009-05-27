#ifndef PYTHONQTWRAPPER_QDRAG_H
#define PYTHONQTWRAPPER_QDRAG_H

#include <qdrag.h>
#include <QObject>

#include <PythonQt.h>

#include <QPixmap>
#include <QPoint>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdrag.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qwidget.h>

class PythonQtShell_QDrag : public QDrag
{
public:
    PythonQtShell_QDrag(QWidget*  dragSource):QDrag(dragSource),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDrag : public QObject
{ Q_OBJECT
public:
public slots:
QDrag* new_QDrag(QWidget*  dragSource);
void delete_QDrag(QDrag* obj) { delete obj; } 
   Qt::DropAction  exec(QDrag* theWrappedObject, Qt::DropActions  supportedActions = Qt::MoveAction);
   void setHotSpot(QDrag* theWrappedObject, const QPoint&  hotspot);
   QMimeData*  mimeData(QDrag* theWrappedObject) const;
   QPixmap  pixmap(QDrag* theWrappedObject) const;
   void setMimeData(QDrag* theWrappedObject, QMimeData*  data);
   void setDragCursor(QDrag* theWrappedObject, const QPixmap&  cursor, Qt::DropAction  action);
   QWidget*  target(QDrag* theWrappedObject) const;
   Qt::DropAction  exec(QDrag* theWrappedObject, Qt::DropActions  supportedActions, Qt::DropAction  defaultAction);
   void setPixmap(QDrag* theWrappedObject, const QPixmap&  arg__1);
   QPoint  hotSpot(QDrag* theWrappedObject) const;
   QWidget*  source(QDrag* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDRAG_H
